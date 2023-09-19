#include <stdio.h> 
#include <Windows.h> 
void main()
{

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int t;
	printf("Введите стоимость автомобиля введите вашу скорость = +");
    scanf_s("%d", &t);
    if (t < 20) {
		printf("очень медленно");
	}




	if ((t >= 20) && (t < 40)) {
		printf("медленно");
	}
	if ((t > 40) && (t <= 90)) {
		printf("нормально");

	}
	if ((t > 90) && (t <= 120)) {
		printf("быстро");

	}
	if (t > 120) {
		printf("очень быстро");
	}




}