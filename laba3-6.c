#include <stdio.h> 
#include <Windows.h> 
void main()
{

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int t;
	printf("������� ��������� ���������� ������� ���� �������� = +");
    scanf_s("%d", &t);
    if (t < 20) {
		printf("����� ��������");
	}




	if ((t >= 20) && (t < 40)) {
		printf("��������");
	}
	if ((t > 40) && (t <= 90)) {
		printf("���������");

	}
	if ((t > 90) && (t <= 120)) {
		printf("������");

	}
	if (t > 120) {
		printf("����� ������");
	}




}