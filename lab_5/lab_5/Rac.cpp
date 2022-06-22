#include "laba5.h"
#include "rac.h"
Rac::Rac(int a, int b)//конструктор инициализации
{
	x = a;
	y = b;
	sokr(x, y);
}
Rac::Rac(int a)//Конструктор преобразования
{
	x = a;
	y = a;
}
Rac::Rac()//конструктор по умолчанию
{
	x = 2;
	y = 2;
}
int Rac::GetX()
{
	return x;
}
int Rac::GetY()
{
	return y;
}
Rac Rac::operator* (Rac p)//умножение дробей
{
	int a, b;
	a = x * p.GetX();
	b = y * p.GetY();
	Rac op(a, b);
	return op;
}
Rac Rac::operator*(double p)//умножение дробей в виде действительных чисел
{
	x = x*p;
	Rac op(x, y);
	return op;
}
Rac Rac::operator+(Rac p)//сложение дробей
{
	int a, b = 0;
	a = p.GetX()*y + x*p.GetY();
	b = y*p.GetY();
	Rac op(a, b);
	return op;
};
Rac Rac::operator-(Rac p)//вычитание дробей
{
	int a = x*p.GetY() - p.GetX()*y;
	int b = y*p.GetY();
	Rac op(a, b);
	return op;
}
Rac Rac::operator/(Rac p)
{
	int a = x*p.GetY();
	int b = y*p.GetX();
	Rac op(a, b);
	return op;
}
void Rac::sokr(int &x, int&y)//упрощение дробей
{
	int a = abs(x);
	int b = abs(y);
	int NOD = 0;
	while (a != 0 && b != 0)
	{
		if (a > b)
		{
			a = a%b;
		}
		else
		{
			b = b%a;
		}
	}
	NOD = b + a;
	x = x / NOD;
	y = y / NOD;
}
