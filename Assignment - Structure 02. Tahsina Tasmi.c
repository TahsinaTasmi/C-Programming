#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct second_Hand_Car
{
	char manufacturer[80];
	char model[80];
	int EngineSizeCC;
	int OdometerReading;
	int price;

};

#define car 2

int main()
{
	struct second_Hand_Car group[car];

	for (int i = 0; i < car; i++)
	{
		printf("manufacturer: \n");
		scanf("%s", group[i].manufacturer);
		printf("model: \n");
		scanf("%s", group[i].model);
		printf("EngineSizeCC: \n");
		scanf("%d", &group[i].EngineSizeCC);
		printf("OdometerReading: \n");
		scanf("%d", &group[i].OdometerReading);
		printf("price: \n");
		scanf("%d", &group[i].price);
	}

	for (int i = 0; i < car; i++)
	{
		printf("%s, %s, %d, %d, %d\n", group[i].manufacturer, group[i].model, group[i].EngineSizeCC, group[i].OdometerReading, group[i].price);

	}

}
















