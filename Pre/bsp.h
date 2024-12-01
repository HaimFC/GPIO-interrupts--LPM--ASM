#ifndef _bsp_H
#define _bsp_H


/////#include  <msp430.h>
#include  <msp430g2553.h>

#define   debounceVal       3
#define   delayTime         52000

#define   LEDsArrPort       &P1OUT
#define   LEDsArrPortDir    &P1DIR
#define   LEDsArrPortSel    &P1SEL

#define   PBsArrPort        &P2IN
#define   PBsArrIntPend     &P2IFG
#define   PBsArrIntEn       &P2IE
#define   PBsArrIntEdgeSel  &P2IES
#define   PBsArrPortSel     &P2SEL
#define   PBsArrPortDir     &P2DIR

#define   PWMStatus         &P2OUT                      

#endif