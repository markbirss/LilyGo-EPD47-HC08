# LilyGo-EPD47-HC08
LilyGo-EPD47 利用hc08蓝牙硬件实现平时休眠节能，随时按需唤醒显示文字的demo

<b>一.功能：</b><br/>
    lilygo-epd47墨水屏平时不工作时处于休眠状态，最大化节省电池电量。当需要显示信息时及时唤醒并显示文字<br/>
  数据指标:<br/>
    1.休眠时整体电流<1ma <br/>
    2.唤醒时间<1秒 <br/>
    3.lilygo-epd47墨水屏每天唤醒并显示3次天气信息，平时偶尔有零星文字提醒记事显示， 普通的18650电池能支持墨水屏约1-3个月<br/>
<br/>
<b>二.代码说明:</b> <br/>
  <b> 1.epd47_blue_waker  (蓝牙从机-外设) </b> <br/>
     烧录到LilyGo-EPD47墨水屏， 实现墨水屏电池供电情境下, 平时休眠,按需显示。<br/>
     电池供电. <br/>
     
  <b> 2.epd47_blue_waker_center (蓝牙主机-中心)</b>  <br/>
     烧录到普通便宜的的ESP32开发板上，每半分钟发送1段文字到墨水屏显示，没有实用性，演示蓝牙发送技术。 <br/>
     通过插线板供电,如电池供电支持不了1天<br/>
   注:与lilygo-epd47墨水屏配合使用,一个发,一个收.<br/>
   
  <b> 3.epd47_blue_waker_center_weather (蓝牙主机-中心)</b>  <br/>
     烧录到普通便宜的的ESP32开发板上，使用了一个ds3231时钟模块，每天3次在设定时间通过wifi获取天气，发送文字到墨水屏的示例代码。<br/>
     通过wifi获取信息，不限于仅发送天气，还可获取并发送提醒记事，万年历，日期节日等文字。<br/>
     config.h 需要配置心知天气key, 从此处注册获得: https://www.seniverse.com/<br/>
     插线板供电,如电池供电支持不了1天<br/>
     天气显示表格版本的API来自： https://www.jisuapi.com/ <br/>
     API地址是: http://api.jisuapi.com/weather/query?appkey=****** b&cityid=* 仅在树莓派上调试完，还未移植到本程序。<br/>
   注:与lilygo-epd47墨水屏配合使用,一个发,一个收.<br/>

  <b> 4.t-watch2020-v3_mic_blue (t-watch2020 v3带麦克风版本) </b>  <br/>
     lilygo 电话手表通过调用百度服务将语音转文字，通过蓝牙发送文字到墨水屏显示<br/>
 <b>3.1 配置: </b> <br/>
ESP32首次运行时会自动初始化内置参数,自动进入路由器模式,创建一个ESP32SETUP的路由器，电脑连接此路由输入http://192.168.4.1 进行配置<br/>
A.esp32连接的路由器和密码<br/>
B.百度语音的账号校验码<br/>
baidu_key: 一个账号字串 (必须注册获得)<br/>
baidu_secert: 一个账号校验码 (必须注册获得)<br/>
这两个参数需要注册百度语音服务,在如下网址获取 https://ai.baidu.com/tech/speech<br/>
开通中文普通话短语音识别，单次语音最长识别60秒。新用户可免费用一段时间，再用必须开通收费，1000次3.4元左右价位，如果不限制使用，最多有可能每天调用5000-10000次，所以增加了休眠功能控制调用次数,防止欠费<br/>
C.其它音量监测参数: 默认是在家里安静环境下,如果周围较吵,需要将值调高<br/>
define_max1 每0.5秒声音峰值（感应人声判断）<br/>
define_avg1 每0.5秒声音均值（感应人声判断）<br/>
define_max2 每0.5秒声音峰值（录音中静音判断）<br/>
define_avg3 每0.5秒声音均值（录音中静音判断）<br/>
 
 <b>3.2 运行： </b> <br/>
A.手表开机<br/>
B.说话<br/>
C.手表会显示语音识别的进度,识别到文字后通过蓝牙发送给lilygo-epd47墨水屏<br/>
D.按下手表上的电源按钮进入休眠<br/>

   <img src= 'https://github.com/lixy123/LilyGo-EPD47-HC08/blob/main/ink_epd47_1.jpg?raw=true' /> <br/>
   <img src= 'https://github.com/lixy123/LilyGo-EPD47-HC08/blob/main/ink_epd47_2.jpg?raw=true' /><br/>
   <img src= 'https://github.com/lixy123/LilyGo-EPD47-HC08/blob/main/ink_weather.jpg?raw=true' /><br/>
   <img src= 'https://github.com/lixy123/LilyGo-EPD47-HC08/blob/main/ink_chixi.jpg?raw=true' /><br/>
演示视频地址:<br/>
   https://raw.githubusercontent.com/lixy123/LilyGo-EPD47-HC08/main/vid_20210215.avi
<br/>    
<b>三.硬件说明:</b><br/>
<b>1. 墨水屏接收 (烧录代码: epd47_blue_waker)</b><br/>
1.1 lilygo-epd47墨水屏<br/>
1.2 hc-08 BLE4.0蓝牙模块 (购买时要询问,告诉卖方要双晶振版本，否则不支持一级节能模式)<br/>
     hc-08设置成客户模式，一级节能模式,其蓝牙名称最好用官方工具修改下,防止被别的设备误连，<br/>
     建议名称：edp47_ink<br/>
     注：官方数据，一级节能模式电流约 6μA ~2.6mA （待机） /1.6mA（工作）<br/>
        相对于全速模式 8.5mA（待机）/9mA（待机） 节能效果明显<br/>
        hc-08模块每日大部分时间应处于在 6μA ~2.6mA （待机）模式,理论电流消耗极低<br/>
1.3 接线<br/>
     lilygo-epd47  hc-08<br/>
       VCC         VCC<br/>
       12          TX<br/>
       13          RX<br/>
       GND         GND<br/>
  注：墨水屏进入节能休眠模式后，顶端12，13引脚处的VCC的电压输出会关闭，不能在此处取电，要从dh2.0或18650处取电<br/>
  <br/>
<b>2.ESP32发送端 (烧录代码: epd47_blue_waker_center) </b><br/>
  A.没啥讲究,普通的ESP32芯片。<br/>
  B.如果后期想搞语音转文字高级功能，需要ESP32带PSRAM的版本, 最好集成MIC, t-watch系列本质上是将ESP32加上了一些外设进行了高度集成。<br/>
  
<br/>  
<b>四.电流实测:</b><br/>
  1.休眠： <1ma （客户端蓝牙发完信息要断开，否则墨水屏的蓝牙模块不能进入休眠，电流约9ma)<br/>
  2.唤醒后: 50-60ma<br/>
  蓝牙模块官方数据提到待机电流约6μA ~2.6mA，墨水屏待机电流约0.1ma(口头询问，官方数据未找到)，合计平均电流<0.5ma<br/>
  1200ma的电池约能用 1200*0.8/24/0.4=80天,满足预期<br/>
  注：不能由USB供电，内部电路会导致休眠时也要耗电80ma, 达不到节能目的,必须由dh2.0或18650电池供电<br/>
  
