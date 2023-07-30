/***********************************************************/
/***************  Name   : ABDULLAH ELMASRY **********************/
/***************  Date   : 9/7/2023  **********************/
/***************  SWC    : KPD        **********************/
/*************** Version : 1.0        **********************/
/***********************************************************/
#ifndef KPD_INTERFACE_H
#define KPD_INTERFACE_H

#define KPD_u8_KEY_NOT_PRESSED        0xff

u8 KPD_u8GetKeyState(u8 * Copy_pu8ReturnedKey);

#endif
