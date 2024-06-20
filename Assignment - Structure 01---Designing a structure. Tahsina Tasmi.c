#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct second_Hand_Car
{
	char Manufacturer[80];
	char Model[80];
	int EngineSizeCC;
	int OdometerReading;
	int Price;
};

int main()

{	
	struct second_Hand_Car car;

	strcpy(car.Manufacturer, "Tesla");
	strcpy(car.Model, "RRR");

	car.EngineSizeCC = 100;
	car.OdometerReading = 3333;
	car.Price = 999999;

	printf(" Manufacturer: %s, \n Model: %s, \n EngineSizeCC: %d, \n OdometerReading: %d, \n Price: %d \n", 
		car.Manufacturer, car.Model, car.EngineSizeCC, car.OdometerReading, car.Price);  


	return 0;


}
