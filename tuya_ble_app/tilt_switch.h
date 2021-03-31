#ifndef TILT_SWITCH_H_
#define TILT_SWITCH_H_

#include "tuya_ble_common.h"
#include "tuya_ble_log.h"

#define SWITCH_PIN		GPIO_PB4
#define ON	1
#define OFF 0

void tilt_switch_init(void);
void tilt_switch_fun(void);

#endif
