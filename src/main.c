#include "sdk_project_config.h"
#include "peripherals_pwm_pal_1.h"
#include "pwm_pal.h"

int main(void)
{
	CLOCK_DRV_Init(&clockMan1_InitConfig0);
	PINS_DRV_Init(NUM_OF_CONFIGURED_PINS0, g_pin_mux_InitConfigArr0);
	PWM_Init(&pwm_pal_1_instance,&pwm_pal_1_configs);
	while(1){
		for (int i=0;i<1000;i+=250){
			while (PINS_DRV_ReadPins(PTC) & (1 << 12));
			OSIF_TimeDelay(200);
			PWM_UpdateDuty(&pwm_pal_1_instance,0u,i);
			while(!(PINS_DRV_ReadPins(PTC) & (1 << 12)));
		}
		for (int i=750;i>=0;i-=250){
			while (PINS_DRV_ReadPins(PTC) & (1 << 12));
			OSIF_TimeDelay(200);
			PWM_UpdateDuty(&pwm_pal_1_instance,0u,i);
			while(!(PINS_DRV_ReadPins(PTC) & (1 << 12)));
		}

	}
}
