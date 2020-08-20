#include "sensor.h"

int32_t temp_val[10]={12,34,40,24,37,22,10,5,26,29};

void sensor_init(void)
{
	printf("SENSOR INIT\n");
	
}

int32_t sensor_get_temprature_value(void)
{
	static int32_t sayac=0;
	int32_t temp=0;
	
	temp=temp_val[sayac];
	sayac++;
	
	if(sayac==10)
	{
	sayac=0;
	}
	
	return temp;
}

