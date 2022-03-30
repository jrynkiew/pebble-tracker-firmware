#ifndef  __HINTS_DATA_H__
#define  __HINTS_DATA_H__


/*  all hints */
const uint8_t htNetConnected_en[] = "Press power button to start registration";
const uint8_t htNetConnected_cn[] = { /*  网络已连接，请在页面开始注� */
/*
0x00,0x7F,0x40,0x44,0x42,0x41,0x4E,0x40,0x44,0x42,0x41,0x4E,0x40,0x7F,0x00,0x00,
0x04,0x0C,0x35,0xC6,0x0C,0x04,0x08,0x18,0xE5,0x22,0x25,0x28,0x30,0x00,0x00,0x00,
0x00,0x00,0x47,0x41,0x41,0x41,0x41,0x41,0x41,0x41,0x41,0x7F,0x00,0x00,0x00,0x00,
0x02,0x02,0x42,0x33,0x00,0x20,0x22,0x26,0x3A,0xE2,0x2F,0x22,0x22,0x22,0x20,0x00,
0x08,0x08,0x08,0xFF,0x08,0x0A,0x22,0x2A,0xA6,0x63,0x22,0x26,0x2A,0x22,0x02,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x02,0x42,0x33,0x00,0x00,0x22,0x2A,0x2A,0x2A,0xFE,0x2A,0x2A,0x2A,0x22,0x02,0x00,
0x10,0x10,0x11,0x13,0x1C,0x30,0xD0,0x10,0x10,0x17,0x10,0x10,0x10,0x10,0x10,0x00,
0x00,0xFF,0x08,0x10,0x60,0x80,0x70,0x08,0x10,0x60,0x80,0x72,0x01,0xFE,0x00,0x00,
0x44,0xE6,0x44,0x48,0x48,0x20,0x40,0xBF,0x22,0x22,0x22,0xA2,0xBF,0x40,0x40,0x00,
0x00,0x00,0xFC,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x1E,0x00,0x00,
0x00,0x02,0x04,0xF8,0x04,0x22,0x22,0x22,0x22,0x22,0xFE,0x22,0x22,0x22,0x22,0x00,
0x20,0x22,0x41,0xFE,0x80,0x41,0x41,0x52,0x6A,0xC4,0x44,0x4A,0x72,0x41,0x40,0x00,
0x00,0x00,0x1A,0x1C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0xFE,0x04,0x08,0x00,0xFF,0xA8,0xA8,0xA8,0xAA,0xA9,0xFE,0x00,0x00,0x00,
0x40,0x80,0x00,0xFF,0x02,0x82,0x82,0x82,0x82,0xFE,0x82,0x82,0x82,0x82,0x02,0x00,
0x00,0x40,0x40,0x4F,0x48,0x58,0x68,0x4B,0x48,0x48,0x48,0x4F,0x40,0x40,0x00,0x00,
0x40,0x40,0x47,0x44,0x44,0x4F,0x74,0x44,0x44,0x47,0x44,0x44,0x47,0x40,0x40,0x00,
0x01,0x41,0x41,0x41,0x7F,0x41,0x41,0x41,0x41,0x41,0x7F,0x41,0x41,0x41,0x01,0x00,
0x08,0x08,0x0F,0xF8,0x08,0x0F,0x00,0x02,0x07,0x1A,0xE2,0x02,0x0A,0x06,0x03,0x00,
0x08,0x06,0x40,0x31,0x00,0x10,0x10,0x10,0x90,0x5F,0x10,0x10,0x10,0x10,0x00,0x00,
0x01,0x01,0x01,0x7F,0x41,0x41,0x7F,0x01,0x01,0x7F,0x41,0x41,0x7F,0x01,0x01,0x00,
0x00,0x01,0x01,0xF2,0x02,0x04,0x18,0xE0,0x10,0x08,0x04,0xF2,0x01,0x00,0x00,0x00,
0x00,0x00,0xFF,0x02,0x02,0xFE,0x92,0x92,0x92,0xFE,0x02,0x02,0xFF,0x00,0x00,0x00,
0x00,0x01,0x02,0x0C,0xF0,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,
0x02,0x44,0xA8,0x10,0x68,0x84,0x00,0x00,0x7F,0x42,0x42,0x42,0x42,0x7F,0x00,0x00,
0x20,0x20,0x7E,0x80,0x02,0x02,0x82,0x82,0x82,0xFE,0x82,0x82,0x82,0x82,0x02,0x00,
0x00,0x01,0x02,0xFC,0x00,0x02,0xFE,0x01,0x06,0xF8,0x02,0x01,0xFE,0x00,0x00,0x00,
*/
};
const uint8_t *htNetConnected[]={htNetConnected_en, htNetConnected_cn, sizeof(htNetConnected_cn)};


const uint8_t htRegRequest_en[]="Please start Pebble REG on the portal";
const uint8_t htRegRequest_cn[]={ /*  收到注册请求，请按确认键继续 */
/*
0x00,0x3F,0x00,0x00,0xFF,0x00,0x02,0x04,0x1B,0xE8,0x08,0x08,0x0F,0x08,0x08,0x00,
0x42,0x46,0x4A,0x52,0x63,0x42,0x4A,0x46,0x43,0x00,0x1F,0x00,0x00,0xFF,0x00,0x00,
0x08,0x06,0x40,0x31,0x00,0x10,0x10,0x10,0x90,0x5F,0x10,0x10,0x10,0x10,0x00,0x00,
0x01,0x01,0x01,0x7F,0x41,0x41,0x7F,0x01,0x01,0x7F,0x41,0x41,0x7F,0x01,0x01,0x00,
0x02,0x42,0x33,0x00,0x00,0x22,0x2A,0x2A,0x2A,0xFE,0x2A,0x2A,0x2A,0x22,0x02,0x00,
0x00,0x10,0x14,0x12,0x11,0x10,0x10,0xFF,0x11,0x10,0x91,0x52,0x14,0x10,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x02,0x42,0x33,0x00,0x00,0x22,0x2A,0x2A,0x2A,0xFE,0x2A,0x2A,0x2A,0x22,0x02,0x00,
0x00,0xF0,0x20,0x40,0xFF,0x00,0x01,0x02,0x84,0x68,0x10,0x68,0x84,0x02,0x01,0x00,
0x02,0x23,0x22,0x22,0xFE,0x24,0x24,0x24,0x04,0x00,0xF0,0x02,0x01,0xFE,0x00,0x00,
0x20,0x20,0x7E,0x80,0x02,0x02,0x82,0x82,0x82,0xFE,0x82,0x82,0x82,0x82,0x02,0x00,
0x00,0x01,0x02,0xFC,0x00,0x02,0xFE,0x01,0x06,0xF8,0x02,0x01,0xFE,0x00,0x00,0x00,
0x00,0x00,0xFE,0x04,0x08,0x00,0xFF,0xA8,0xA8,0xA8,0xAA,0xA9,0xFE,0x00,0x00,0x00,
0x00,0x08,0x08,0x10,0x20,0x42,0x81,0xFE,0x00,0x80,0x40,0x20,0x10,0x08,0x08,0x00,
0x00,0x00,0x1A,0x1C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0xFE,0x04,0x08,0x00,0xFF,0xA8,0xA8,0xA8,0xAA,0xA9,0xFE,0x00,0x00,0x00,
0x08,0x08,0x08,0xFF,0x09,0x04,0x19,0x11,0x11,0x97,0x71,0x11,0x11,0x15,0x19,0x00,
0x20,0x21,0x27,0x3A,0x22,0x23,0x04,0x08,0x17,0xE4,0x24,0x27,0x2C,0x34,0x07,0x00,
0x02,0x02,0x42,0x33,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,
0x02,0x0C,0xF7,0x24,0x24,0x01,0x27,0x39,0x08,0x2A,0x2A,0xFF,0x2A,0x3E,0x08,0x00,
0x04,0x0C,0x35,0xC6,0x08,0x00,0x7F,0x12,0x0A,0x02,0xFF,0x02,0x0A,0x12,0x00,0x00,
0x04,0x0C,0x35,0xC6,0x04,0x18,0x04,0x24,0x25,0x24,0xFC,0x25,0x24,0x25,0x06,0x00,
0x40,0x42,0x81,0xFE,0x00,0x00,0x01,0x21,0xD2,0x14,0x08,0x14,0xE2,0x01,0x00,0x00,
0x40,0x80,0xFE,0x08,0x08,0xFC,0x01,0x06,0xF8,0x90,0x90,0xFC,0x92,0x91,0xFE,0x00,
0x00,0x00,0x00,0xFC,0x09,0x12,0x04,0x18,0xE0,0x00,0xE0,0x18,0x04,0x02,0x01,0x00,
0x80,0x80,0xFE,0x84,0x8A,0x64,0x18,0xE4,0x22,0xA2,0xA2,0xFA,0xA2,0xA2,0x22,0x00,
0x44,0xE6,0x44,0x48,0x48,0x00,0xFE,0x22,0x42,0x82,0xFE,0x82,0x42,0x22,0x02,0x00,
0x44,0xE6,0x44,0x48,0x48,0x48,0x11,0x51,0x32,0x94,0x18,0xF0,0x18,0x14,0x13,0x00,
*/
};
const uint8_t *htRegRequest[]={htRegRequest_en, htRegRequest_cn, sizeof(htRegRequest_cn)};


const uint8_t htRegWaitACK_en[]="Please wait until the REG completes.";
const uint8_t htRegWaitACK_cn[]={/* 注册中请稍后 */
/*
0x08,0x06,0x40,0x31,0x00,0x10,0x10,0x10,0x90,0x5F,0x10,0x10,0x10,0x10,0x00,0x00,
0x01,0x01,0x01,0x7F,0x41,0x41,0x7F,0x01,0x01,0x7F,0x41,0x41,0x7F,0x01,0x01,0x00,
0x00,0x00,0x0F,0x08,0x08,0x08,0x08,0xFF,0x08,0x08,0x08,0x08,0x0F,0x00,0x00,0x00,
0x02,0x42,0x33,0x00,0x00,0x22,0x2A,0x2A,0x2A,0xFE,0x2A,0x2A,0x2A,0x22,0x02,0x00,
0x24,0x24,0x25,0x7F,0xC4,0x44,0x00,0x47,0x34,0x04,0xFC,0x04,0x14,0x67,0x00,0x00,
0x00,0x00,0x00,0x3F,0x24,0x24,0x24,0x24,0x44,0x44,0x44,0xC4,0x44,0x04,0x04,0x00,
0x20,0x20,0x7E,0x80,0x02,0x02,0x82,0x82,0x82,0xFE,0x82,0x82,0x82,0x82,0x02,0x00,
0x00,0x01,0x02,0xFC,0x00,0x02,0xFE,0x01,0x06,0xF8,0x02,0x01,0xFE,0x00,0x00,0x00,
0x00,0x00,0xF0,0x20,0x20,0x20,0x20,0xFF,0x20,0x20,0x20,0x20,0xF0,0x00,0x00,0x00,
0x00,0x00,0xFE,0x04,0x08,0x00,0xFF,0xA8,0xA8,0xA8,0xAA,0xA9,0xFE,0x00,0x00,0x00,
0x10,0x60,0x80,0xFF,0x80,0x60,0x00,0xFF,0x90,0x90,0x90,0x92,0x91,0xFE,0x00,0x00,
0x02,0x04,0x18,0xE0,0x00,0x7F,0x42,0x42,0x42,0x42,0x42,0x42,0x7F,0x00,0x00,0x00,
*/
};
const uint8_t *htRegWaitACK[]={htRegWaitACK_en, htRegWaitACK_cn, sizeof(htRegWaitACK_cn)};

const uint8_t htRegSuccess_en[]="Your Pebble has been registered.";
const uint8_t htRegSuccess_cn[]={/* 注册成功 */
/*
0x08,0x06,0x40,0x31,0x00,0x10,0x10,0x10,0x90,0x5F,0x10,0x10,0x10,0x10,0x00,0x00,
0x01,0x01,0x01,0x7F,0x41,0x41,0x7F,0x01,0x01,0x7F,0x41,0x41,0x7F,0x01,0x01,0x00,
0x00,0x00,0x1F,0x11,0x11,0x11,0x11,0x10,0x10,0xFF,0x10,0x90,0x50,0x13,0x10,0x00,
0x10,0x10,0x10,0x1F,0x10,0x10,0x10,0x08,0x08,0xFF,0x08,0x08,0x08,0x0F,0x00,0x00,
0x20,0x20,0x7E,0x80,0x02,0x02,0x82,0x82,0x82,0xFE,0x82,0x82,0x82,0x82,0x02,0x00,
0x00,0x01,0x02,0xFC,0x00,0x02,0xFE,0x01,0x06,0xF8,0x02,0x01,0xFE,0x00,0x00,0x00,
0x01,0x06,0xF8,0x00,0x08,0x04,0xF8,0x01,0x02,0x84,0x68,0x18,0x64,0x82,0x1F,0x00,
0x08,0x0C,0x08,0xF8,0x10,0x11,0x12,0x0C,0x70,0x80,0x02,0x01,0x02,0xFC,0x00,0x00,
*/
};
const uint8_t *htRegSuccess[]={htRegSuccess_en,htRegSuccess_cn,sizeof(htRegSuccess_cn)};


const uint8_t htRegFailed_en[]= "Device is already registered";
const uint8_t htRegFailed_cn[] = {/* 接收失败 */
/*
0x08,0x08,0x08,0xFF,0x08,0x0A,0x22,0x2A,0xA6,0x63,0x22,0x26,0x2A,0x22,0x02,0x00,
0x00,0x3F,0x00,0x00,0xFF,0x00,0x02,0x04,0x1B,0xE8,0x08,0x08,0x0F,0x08,0x08,0x00,
0x00,0x02,0x0C,0x78,0x08,0x08,0x08,0xFF,0x08,0x08,0x08,0x08,0x08,0x00,0x00,0x00,
0x00,0x7F,0x40,0x5F,0x40,0x7F,0x02,0x04,0x1B,0xE8,0x08,0x08,0x0F,0x08,0x08,0x00,
0x20,0x22,0x41,0xFE,0x80,0x41,0x41,0x52,0x6A,0xC4,0x44,0x4A,0x72,0x41,0x40,0x00,
0x00,0xF0,0x20,0x40,0xFF,0x00,0x01,0x02,0x84,0x68,0x10,0x68,0x84,0x02,0x01,0x00,
0x81,0x81,0x82,0x84,0x88,0xB0,0xC0,0x80,0xC0,0xB0,0x88,0x84,0x82,0x81,0x81,0x00,
0x01,0xE2,0x0C,0xF0,0x08,0xE6,0x01,0x02,0x84,0x68,0x10,0x68,0x84,0x02,0x01,0x00,
*/    
};
const uint8_t *htRegFailed[]={htRegFailed_en, htRegFailed_cn, sizeof(htRegFailed_cn)};


const uint8_t htconfirmUpgrade_en[]="Press power button to update firmware";
const uint8_t htconfirmUpgrade_cn[]={/* 收到升级请求,按确认键升级 */
/*
0x00,0x3F,0x00,0x00,0xFF,0x00,0x02,0x04,0x1B,0xE8,0x08,0x08,0x0F,0x08,0x08,0x00,
0x42,0x46,0x4A,0x52,0x63,0x42,0x4A,0x46,0x43,0x00,0x1F,0x00,0x00,0xFF,0x00,0x00,
0x01,0x01,0x21,0x21,0x21,0x7F,0x41,0xC1,0x41,0x01,0xFF,0x01,0x01,0x01,0x01,0x00,
0x04,0x0C,0x35,0xC6,0x0C,0x00,0x40,0x40,0x7F,0x40,0x40,0x46,0x5A,0x63,0x00,0x00,
0x02,0x42,0x33,0x00,0x00,0x22,0x2A,0x2A,0x2A,0xFE,0x2A,0x2A,0x2A,0x22,0x02,0x00,
0x00,0x10,0x14,0x12,0x11,0x10,0x10,0xFF,0x11,0x10,0x91,0x52,0x14,0x10,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x08,0x08,0x08,0xFF,0x09,0x04,0x19,0x11,0x11,0x97,0x71,0x11,0x11,0x15,0x19,0x00,
0x00,0xF0,0x20,0x40,0xFF,0x00,0x01,0x02,0x84,0x68,0x10,0x68,0x84,0x02,0x01,0x00,
0x02,0x23,0x22,0x22,0xFE,0x24,0x24,0x24,0x04,0x00,0xF0,0x02,0x01,0xFE,0x00,0x00,
0x00,0x01,0x02,0x04,0x18,0xE0,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,
0x44,0xE6,0x44,0x48,0x48,0x02,0x0C,0xF1,0x01,0xC2,0x34,0x08,0x34,0xC2,0x01,0x00,
0x00,0x00,0xFE,0x04,0x08,0x00,0xFF,0xA8,0xA8,0xA8,0xAA,0xA9,0xFE,0x00,0x00,0x00,
0x00,0x08,0x08,0x10,0x20,0x42,0x81,0xFE,0x00,0x80,0x40,0x20,0x10,0x08,0x08,0x00,
0x00,0x00,0x1A,0x1C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x40,0x42,0x81,0xFE,0x00,0x00,0x01,0x21,0xD2,0x14,0x08,0x14,0xE2,0x01,0x00,0x00,
0x20,0x21,0x27,0x3A,0x22,0x23,0x04,0x08,0x17,0xE4,0x24,0x27,0x2C,0x34,0x07,0x00,
0x02,0x02,0x42,0x33,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,
0x02,0x0C,0xF7,0x24,0x24,0x01,0x27,0x39,0x08,0x2A,0x2A,0xFF,0x2A,0x3E,0x08,0x00,
0x01,0x01,0x21,0x21,0x21,0x7F,0x41,0xC1,0x41,0x01,0xFF,0x01,0x01,0x01,0x01,0x00,
0x04,0x0C,0x35,0xC6,0x0C,0x00,0x40,0x40,0x7F,0x40,0x40,0x46,0x5A,0x63,0x00,0x00,
0x40,0x80,0xFE,0x08,0x08,0xFC,0x01,0x06,0xF8,0x90,0x90,0xFC,0x92,0x91,0xFE,0x00,
0x00,0x00,0x00,0xFC,0x09,0x12,0x04,0x18,0xE0,0x00,0xE0,0x18,0x04,0x02,0x01,0x00,
0x80,0x80,0xFE,0x84,0x8A,0x64,0x18,0xE4,0x22,0xA2,0xA2,0xFA,0xA2,0xA2,0x22,0x00,
0x00,0x01,0x02,0x04,0x18,0xE0,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,
0x44,0xE6,0x44,0x48,0x48,0x02,0x0C,0xF1,0x01,0xC2,0x34,0x08,0x34,0xC2,0x01,0x00, 
*/
};
const uint8_t *htconfirmUpgrade[]={htconfirmUpgrade_en,htconfirmUpgrade_cn,sizeof(htconfirmUpgrade_cn)};


const uint8_t htUpgrading_en[]="Upgrading ...";
const uint8_t htUpgrading_cn[]={/*  升级�. */
/*
0x01,0x01,0x21,0x21,0x21,0x7F,0x41,0xC1,0x41,0x01,0xFF,0x01,0x01,0x01,0x01,0x00,
0x04,0x0C,0x35,0xC6,0x0C,0x00,0x40,0x40,0x7F,0x40,0x40,0x46,0x5A,0x63,0x00,0x00,
0x00,0x00,0x0F,0x08,0x08,0x08,0x08,0xFF,0x08,0x08,0x08,0x08,0x0F,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x01,0x02,0x04,0x18,0xE0,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,
0x44,0xE6,0x44,0x48,0x48,0x02,0x0C,0xF1,0x01,0xC2,0x34,0x08,0x34,0xC2,0x01,0x00,
0x00,0x00,0xF0,0x20,0x20,0x20,0x20,0xFF,0x20,0x20,0x20,0x20,0xF0,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0C,0x0C,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0C,0x0C,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0C,0x0C,0x00,0x00,0x00,0x00,0x00,
*/
};
const uint8_t *htUpgrading[]={htUpgrading_en,htUpgrading_cn,sizeof(htUpgrading_cn)};


const uint8_t htConnecting_en[]="OTA Firmware update. Connecting...";
const uint8_t htConnecting_cn[]={
};
const uint8_t *htConnecting[]={htConnecting_en,htConnecting_cn,sizeof(htConnecting_cn)};


const uint8_t htSelectApp_en[]="Please choose an app on the portal...";
const uint8_t htSelectApp_cn[]={
};
const uint8_t *htSelectApp[]={htSelectApp_en,htSelectApp_cn,sizeof(htSelectApp_cn)};

uint8_t  htRegaddrChk_en[45]="To continue ?\n";
uint8_t htRegaddrChk_cn[160];
const uint8_t *htRegaddrChk[]={htRegaddrChk_en,htRegaddrChk_cn,sizeof(htRegaddrChk_cn)};


const uint8_t htstartReconf_en[]="Please download config on the portal";
const uint8_t htstartReconf_cn[]={
};
const uint8_t *htstartReconf[]={htstartReconf_en,htstartReconf_cn,sizeof(htstartReconf_cn)};

const uint8_t htstartMqtt_en[]="Start connecting to the network";
const uint8_t htstartMqtt_cn[]={
};
const uint8_t *htstartMqtt[]={htstartMqtt_en,htstartMqtt_cn,sizeof(htstartMqtt_cn)};

const uint8_t htupdateConfig_en[]="Updating configuration";
const uint8_t htupdateConfig_cn[]={
};
const uint8_t *htupdateConfig[]={htupdateConfig_en,htupdateConfig_cn,sizeof(htupdateConfig_cn)};

const uint8_t httpNoAppUpgrd_en[] = "No proper version";
const uint8_t httpNoAppUpgrd_cn[]={
};
const uint8_t *httpNoAppUpgrd[]={httpNoAppUpgrd_en,httpNoAppUpgrd_cn, sizeof(httpNoAppUpgrd_cn)};

#endif
