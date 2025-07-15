#include <stdio.h>
typedef struct SENSOR {
	int sensor_flag;
	int data;
} SENSOR;
int main() {
	volatile SENSOR *sensor;
	while (!(sensor->sensor_flag)) {
	}
	printf("data : %d \n", sensor->data);
}