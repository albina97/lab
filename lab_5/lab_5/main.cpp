#include "laba5.h"

double f1(Rac x)//������� ��������������� �����
{
	double z = double(x.GetX()) / double(x.GetY());//������ ���������� �������� �����
	return 2*z - 1.3 / z;
} //2*x-1.3/x

Rac f2(Rac x)//������������ �����
{
	
	Rac y2(2, 1);
	Rac y3(13, 10);
	Rac result = y2*x - y3 / x;
	return result;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b = 0;
	double z = 0;
	printf("������� a = ");//���������
	scanf_s("%d", &a);
	printf("������� b = ");//�����������
	scanf_s("%d", &b);
	Rac x(a, b);//�������� �����
	z = f1(x);
	x = f2(x);
	printf("f1 =  %lf \n", z);
	printf("f2 = %d/%d\n", x.GetX(), x.GetY());
	system("pause");
	return 0;
}
