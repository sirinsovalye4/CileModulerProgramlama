#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "motor.h"
#include "sensor.h"
#include "display.h"

void delay(void);

	/*
		Klima Kontrol Yazilimi
		-Ekran : Sicaklik degerini gösteriyor
		-Sensor : Sicaklik degerini olcuyor
		-Motor : Calistirildiginda sogutma yapiyor
	
		Ekran Fonksiyonlari
		Init()
		Power_On()
		Power_Off()
		Write_to_Screen(int32_t num)
		
		Sensor Fonksiyonlari
		Init()
		Get_Temprature_Value()
		
		Motor Fonksiyonlari
		Init()
		on()
		off()
		
		Ana Yazilim:
		Sicakligi okuyup ekrana yazdiracagiz.
		Sicaklik kullanicinin girdigi (25) degerin ustune ciktiginda
		klima motoru calistiracak.
				
	*/
	


int main(int argc, char *argv[]) {
	// Bir seferlik ayar islemleri --initler
	int32_t temp = 0;
	display_init();
	motor_init();
	sensor_init();
	display_power_pn();
	while(1)
	{
		temp = sensor_get_temprature_value();
		display_write_to_screen(temp);	
		
		if(temp>25)
		{
			motor_on();
		}
		else
		{
			motor_off();
		}
		delay();
		delay();
		delay();
		delay();
		delay();
	}

	return 0;
}

void delay()
{
	int64_t t = 0;
	
	for(t=0; t<10000000; t++)
	{
		
	}
}


