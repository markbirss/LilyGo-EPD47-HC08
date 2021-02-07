# LilyGo-EPD47-HC08
LilyGo-EPD47 利用hc08蓝牙唤醒示例

<b>一.功能：</b><br/>
    lilygo-epd47墨水屏平时不工作时处于休眠状态，最大化节省电池电量。当需要显示信息时及时唤醒并显示文字<br/>
  数据指标:<br/>
    1.休眠时整体电流<1ma <br/>
    2.唤醒时间<1秒 <br/>
    3.lilygo-epd47墨水屏每天唤醒并显示3次天气信息，平时偶尔有零星文字提醒记事显示， 普通的18650电池能支持墨水屏约1-3个月<br/>
<br/>
<b>二.代码说明:</b> <br/>
   1.epd47_blue_waker  (蓝牙从机-外设) <br/>
     烧录到LilyGo-EPD47墨水屏， 实现墨水屏电池供电情境下, 平时休眠,按需显示。<br/>
     电池供电. <br/>
     
   2.epd47_blue_waker_center (蓝牙主机-中心) <br/>
     烧录到普通便宜的的ESP32开发板上，按需发送文字到墨水屏的示例代码。 <br/>
     例如：发送天气，记事，日期节日等文字。<br/>
     主要是插线板供电,如电池供电支持不了1天.<br/>
     
   注:两设备要配合使用,一个接收,一个发送.<br/>
   
<br/>    
<b>三.硬件说明:</b><br/>
<b>1. 墨水屏接收 (烧录代码: epd47_blue_waker)</b>
1.1 lygo-epd47墨水屏<br/>
1.2 hc-08 BLE4.0蓝牙模块 (购买时要询问,告诉卖方要双晶振版本，否则不支持一级节能模式)<br/>
     hc-08设置成客户模式，一级节能模式,其蓝牙名称最好用官方工具修改下,防止被别的设备误连，<br/>
     建议名称：edp47_ink<br/>
     注：官方数据，一级节能模式电流约 6μA ~2.6mA （待机） /1.6mA（工作）<br/>
        相对于全速模式 8.5mA（待机）/9mA（待机） 节能效果明显<br/>
        hc-08模块每日大部分时间应处于在 6μA ~2.6mA （待机）模式,理论电流消耗极低
1.3 接线<br/>
     lilygo-epd47  hc-08<br/>
       VCC         VCC<br/>
       12          TX<br/>
       13          RX<br/>
       GND         GND<br/>
  注：墨水屏进入节能休眠模式后，顶端12，13引脚处的VCC的电压输出会关闭，不能在此处取电，要从dh2.0或18650处取电<br/>
  <br/>
<b>2.ESP32发送端 (烧录代码: epd47_blue_waker_center) </b><br/>
  没啥讲究,普通的ESP32芯片。<br/>
  如果后期想玩语音，可能需要带PSRAM的版本。<br/>
  
<br/>  
<b>四.电流实测:</b><br/>
  1.休眠： <1ma （客户端蓝牙发完信息要断开，否则墨水屏的蓝牙模块不能进入休眠，电流约9ma)<br/>
  2.唤醒后: 50-60ma<br/>
  蓝牙模块官方数据提到待机电流约6μA ~2.6mA，墨水屏待机电流约0.1ma(口头询问，官方数据未找到)，合计平均电流<0.5ma<br/>
  1200ma的电池约能用 1200*0.8/24/0.4=80天,满足预期<br/>
  注：不能由USB供电，内部电路会导致休眠时也要耗电80ma, 达不到节能目的,必须由dh2.0或18650电池供电<br/>
  
