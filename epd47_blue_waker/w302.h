const uint32_t w302_width = 70;
const uint32_t w302_height = 60;
const uint8_t w302_data[(70*60)/2] = {
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCD, 0xDC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xDF, 0xCC, 0xFD, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x9F, 0x33, 0x33, 0xFC, 0xFF, 0xFF, 0xDF, 0xBA, 0xEB, 0xFF, 0xEF, 0xBB, 0xDA, 0xFF, 0xFF, 0xFF, 0x3C, 0x33, 0x93, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x4E, 0x33, 0x33, 0xE5, 0xFF, 0xFF, 0x3C, 0x33, 0x73, 0xFF, 0x8F, 0x33, 0x33, 0xFB, 0xFF, 0xEF, 0x35, 0x33, 0x43, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x36, 0x33, 0x33, 0xA3, 0xFF, 0xFF, 0x35, 0x33, 0x33, 0xFB, 0x3C, 0x33, 0x33, 0xF5, 0xFF, 0xBF, 0x33, 0x33, 0x33, 0xF6, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3A, 0x33, 0x33, 0x43, 0xFE, 0x9F, 0x33, 0x33, 0x33, 0xF6, 0x36, 0x33, 0x33, 0x93, 0xFF, 0x4E, 0x33, 0x33, 0x33, 0xF9, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x5F, 0x33, 0x33, 0x33, 0xF7, 0x4E, 0x33, 0x33, 0x33, 0xF9, 0x39, 0x33, 0x33, 0x43, 0xFE, 0x37, 0x33, 0x33, 0x43, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x33, 0x33, 0x33, 0xD3, 0x37, 0x33, 0x33, 0x53, 0xFE, 0x5F, 0x33, 0x33, 0x33, 0xD7, 0x33, 0x33, 0x33, 0xC3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x36, 0x33, 0x33, 0x43, 0x33, 0x33, 0x33, 0xC3, 0xFF, 0xCF, 0x33, 0x33, 0x33, 0x43, 0x33, 0x33, 0x33, 0xF6, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x4E, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0xF7, 0xFF, 0xFF, 0x37, 0x33, 0x33, 0x33, 0x33, 0x33, 0x43, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x9F, 0x33, 0x33, 0x33, 0x33, 0x33, 0x43, 0xFD, 0xFF, 0xFF, 0x4D, 0x33, 0x33, 0x33, 0x33, 0x33, 0x93, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0xBB, 0xBB, 0xBB, 0x34, 0x33, 0x33, 0x33, 0x33, 0x93, 0xFF, 0xFF, 0xFF, 0xAF, 0x33, 0x33, 0x33, 0x33, 0x33, 0xB3, 0xBB, 0xBB, 0xCB, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3B, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0xE5, 0xFF, 0xFF, 0xFF, 0xEF, 0x35, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0xFB, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x34, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0x3C, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0xF4, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x9F, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x63, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x93, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x43, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0x4E, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0xC3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x36, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0xF7, 0xFF, 0xFF, 0xFF, 0xFF, 0x38, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0xF6, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x5F, 0x44, 0x44, 0x44, 0x44, 0x44, 0x33, 0x33, 0x33, 0xC3, 0xFF, 0xFF, 0xFF, 0xCF, 0x33, 0x33, 0x33, 0x43, 0x44, 0x44, 0x44, 0x44, 0x54, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xDF, 0xDD, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x36, 0x33, 0x33, 0x53, 0xFF, 0xFF, 0xFF, 0x6F, 0x33, 0x33, 0x33, 0xF6, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xDE, 0xDD, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0x39, 0x33, 0xE4, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x4D, 0x33, 0x33, 0x33, 0xFA, 0xFF, 0xFF, 0x3B, 0x33, 0x33, 0x43, 0xFD, 0xFF, 0xFF, 0xFF, 0xFF, 0xEF, 0x34, 0x33, 0xF8, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xEF, 0x33, 0x33, 0x83, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x8F, 0x33, 0x33, 0x33, 0xE4, 0xFF, 0xEF, 0x34, 0x33, 0x33, 0x83, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x8F, 0x33, 0x33, 0xE3, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0x5F, 0x33, 0x33, 0x33, 0xFD, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x35, 0x33, 0x33, 0x83, 0xFF, 0x8F, 0x33, 0x33, 0x33, 0xE4, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3D, 0x33, 0x33, 0x53, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0x6F, 0x33, 0x33, 0x33, 0xF5, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3B, 0x33, 0x33, 0x33, 0xFC, 0x3C, 0x33, 0x33, 0x33, 0xFB, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x35, 0x33, 0x33, 0x53, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xEF, 0x33, 0x33, 0x33, 0xB3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x6F, 0x33, 0x33, 0x33, 0xE6, 0x36, 0x33, 0x33, 0x63, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x33, 0x33, 0x33, 0xE3, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0x39, 0x33, 0x33, 0x43, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xDF, 0x34, 0x33, 0x33, 0x43, 0x33, 0x33, 0x33, 0xD4, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x4E, 0x33, 0x33, 0x33, 0xF9, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0x4F, 0x33, 0x33, 0x33, 0xF8, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x38, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0xF8, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x38, 0x33, 0x33, 0x43, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xDF, 0x33, 0x33, 0x33, 0xD3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x5F, 0x33, 0x33, 0x33, 0x33, 0x33, 0x53, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xDF, 0x33, 0x33, 0x33, 0xD3, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xCE, 0xCC, 0xCC, 0xDC, 0x34, 0x33, 0x33, 0x53, 0xDC, 0xCC, 0xCC, 0xCC, 0xCC, 0x7D, 0x33, 0x33, 0x33, 0x33, 0x33, 0x63, 0xCD, 0xCC, 0xCC, 0xCC, 0xDC, 0x5C, 0x33, 0x33, 0x33, 0xD4, 0xCC, 0xCC, 0xCC, 0xFE, 
	0xFF, 0x34, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0xF4, 
	0xAF, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x93, 
	0x3E, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 
	0x3E, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 
	0xAF, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0xA3, 
	0xFF, 0x35, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0xF5, 
	0xFF, 0xDE, 0xDD, 0xDD, 0xDC, 0x34, 0x33, 0x33, 0x53, 0xDC, 0xDD, 0xDD, 0xDD, 0xCD, 0x7D, 0x33, 0x33, 0x33, 0x33, 0x33, 0x63, 0xCD, 0xDD, 0xDD, 0xDD, 0xDD, 0x5C, 0x33, 0x33, 0x33, 0xD4, 0xDC, 0xDD, 0xDD, 0xFE, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xDF, 0x33, 0x33, 0x33, 0xD3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x5F, 0x33, 0x33, 0x33, 0x33, 0x33, 0x53, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xEF, 0x33, 0x33, 0x33, 0xD3, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0x4F, 0x33, 0x33, 0x33, 0xF8, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x38, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0xF8, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x39, 0x33, 0x33, 0x43, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0x39, 0x33, 0x33, 0x43, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xDF, 0x34, 0x33, 0x33, 0x43, 0x33, 0x33, 0x33, 0xD4, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x4E, 0x33, 0x33, 0x33, 0xF9, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xEF, 0x33, 0x33, 0x33, 0xB3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x6F, 0x33, 0x33, 0x33, 0xE6, 0x36, 0x33, 0x33, 0x63, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x33, 0x33, 0x33, 0xE3, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0x6F, 0x33, 0x33, 0x33, 0xF5, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3B, 0x33, 0x33, 0x33, 0xFC, 0x4C, 0x33, 0x33, 0x33, 0xFB, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x35, 0x33, 0x33, 0x53, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0x5F, 0x33, 0x33, 0x33, 0xFD, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x35, 0x33, 0x33, 0x83, 0xFF, 0x8F, 0x33, 0x33, 0x33, 0xE4, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3D, 0x33, 0x33, 0x53, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xEF, 0x33, 0x33, 0x83, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x8F, 0x33, 0x33, 0x33, 0xE4, 0xFF, 0xEF, 0x34, 0x33, 0x33, 0x83, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x8F, 0x33, 0x33, 0xE3, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0x39, 0x33, 0xE4, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x4D, 0x33, 0x33, 0x33, 0xFA, 0xFF, 0xFF, 0x3B, 0x33, 0x33, 0x43, 0xFD, 0xFF, 0xFF, 0xFF, 0xFF, 0xEF, 0x34, 0x33, 0xF9, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xEF, 0xDD, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x36, 0x33, 0x33, 0x53, 0xFF, 0xFF, 0xFF, 0x6F, 0x33, 0x33, 0x33, 0xF6, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xDE, 0xED, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x5F, 0x44, 0x44, 0x44, 0x44, 0x44, 0x33, 0x33, 0x33, 0xC3, 0xFF, 0xFF, 0xFF, 0xCF, 0x33, 0x33, 0x33, 0x43, 0x44, 0x44, 0x44, 0x44, 0x54, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x36, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0xF8, 0xFF, 0xFF, 0xFF, 0xFF, 0x38, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0xF6, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x43, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0x4E, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0xC3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x9F, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x63, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x6F, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x93, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x34, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0xFB, 0xFF, 0xFF, 0xFF, 0xFF, 0x3C, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0xF4, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3C, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0xE5, 0xFF, 0xFF, 0xFF, 0xEF, 0x35, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0xFB, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0xBB, 0xBB, 0xBB, 0x34, 0x33, 0x33, 0x33, 0x33, 0x93, 0xFF, 0xFF, 0xFF, 0x9F, 0x33, 0x33, 0x33, 0x33, 0x33, 0xB4, 0xBB, 0xBB, 0xCB, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x9F, 0x33, 0x33, 0x33, 0x33, 0x33, 0x43, 0xFD, 0xFF, 0xFF, 0x4D, 0x33, 0x33, 0x33, 0x33, 0x33, 0x93, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x4E, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0xF7, 0xFF, 0xFF, 0x37, 0x33, 0x33, 0x33, 0x33, 0x33, 0x43, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x36, 0x33, 0x33, 0x43, 0x33, 0x33, 0x33, 0xB3, 0xFF, 0xCF, 0x33, 0x33, 0x33, 0x43, 0x33, 0x33, 0x33, 0xF6, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x33, 0x33, 0x33, 0xD3, 0x37, 0x33, 0x33, 0x53, 0xFE, 0x5E, 0x33, 0x33, 0x33, 0xD7, 0x33, 0x33, 0x33, 0xC3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x4F, 0x33, 0x33, 0x33, 0xF7, 0x4E, 0x33, 0x33, 0x33, 0xF9, 0x39, 0x33, 0x33, 0x43, 0xFE, 0x37, 0x33, 0x33, 0x43, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x39, 0x33, 0x33, 0x43, 0xFD, 0x9F, 0x33, 0x33, 0x33, 0xF6, 0x36, 0x33, 0x33, 0x93, 0xFF, 0x4E, 0x33, 0x33, 0x33, 0xF9, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x37, 0x33, 0x33, 0xA3, 0xFF, 0xFF, 0x35, 0x33, 0x33, 0xFC, 0x3C, 0x33, 0x33, 0xF5, 0xFF, 0xBF, 0x33, 0x33, 0x33, 0xF6, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x4F, 0x33, 0x33, 0xE5, 0xFF, 0xFF, 0x3C, 0x33, 0x73, 0xFF, 0x8F, 0x33, 0x33, 0xFC, 0xFF, 0xEF, 0x35, 0x33, 0x43, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x9F, 0x33, 0x33, 0xFC, 0xFF, 0xFF, 0xCF, 0xA9, 0xEA, 0xFF, 0xEF, 0xAB, 0xC9, 0xFF, 0xFF, 0xFF, 0x3D, 0x33, 0x93, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCD, 0xDC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xDF, 0xCC, 0xFD, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	};