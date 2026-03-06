#ifndef _USBPD_SINK_H
#define _USBPD_SINK_H

#ifdef __cplusplus
extern "C" {
#endif /* end of __cplusplus */

#include <stdbool.h>
#include "usbpd_def.h"


void TouchKey_init(void);
u16 TouchKey_get_value(u8 ch);
uint8_t usbpd_sink_get_ready(void);
void usbpd_sink_clear_ready(void);


#ifdef __cplusplus
}
#endif /* end of __cplusplus */

#endif /* end of usbpd_sink.h */

