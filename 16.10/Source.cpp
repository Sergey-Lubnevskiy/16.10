#include <iostream>
using namespace std;

class Transport
{
	string type;
	string color;
	int speed;
	int fuelcons;
	int passenger;
public:
	Transport()
	{
		type = color = "";
		speed = fuelcons = passenger = 0;
	}
	Transport(string t, string c, int s, int f, int p)
	{
		type = t;
		color = c;
		speed = s;
		fuelcons = f;
		passenger = p;
	}
	void Show()
	{
		cout << "Тип: " << type << endl;
		cout << "Цвет: " << color << endl;
		cout << "Скорость: " << speed << " км\\ч" << endl;
		cout << "Разход топлива: " << fuelcons << " Л\\100 км" << endl;
		cout << "Пассажиры: " << passenger << endl;
	}
};

class car :public Transport
{
	string company;
public:
	car()
	{
		company = "";
	}
	car(string t, string c, int s, int f, int p, string co) :Transport(t, c, s, f, p)
	{
		company = co;
	}
	void Show()
	{
		Transport::Show();
		cout << "Компания: " << company << endl;
	}
};

class helicopter :public Transport
{
	double tire_size;
public:
	helicopter()
	{
		tire_size = 0;
	}
	helicopter(string t, string c, int s, int f, int p, double ti) :Transport(t, c, s, 0, p)
	{
		tire_size = ti;
	}
	void Show()
	{
		Transport::Show();
		cout << "Диаметр шины: " << tire_size << " см" << endl;
	}
};

class bike :public Transport
{
	bool offroad;
public:
	bike()
	{
		offroad = false;
	}
	bike(string t, string c, int s, int f, int p, bool off) :Transport(t, c, s, f, p)
	{
		offroad = f;
	}
	void Show()
	{
		Transport::Show();
		if (offroad)
			cout << "Внедорожник" << endl;
		else
			cout << "Только по трассе" << endl;
	}
};

class plane :public Transport
{
	double carr_cap;
public:
	plane()
	{
		carr_cap = 0;
	}
	plane(string t, string c, int s, int f, int p, double cc) :Transport(t, c, s, f, p)
	{
		carr_cap = cc;
	}
	void Show()
	{
		Transport::Show();
		cout << "Грузоподъемность: " << carr_cap << " тон" << endl;
	}
};

class bigfoot :public Transport
{
	int HP;
public:
	bigfoot()
	{
		HP = 0;
	}
	bigfoot(string t, string c, int s, int f, int p, int hp) :Transport(t, c, s, f, p)
	{
		HP = hp;
	}
	void Show()
	{
		Transport::Show();
		cout << "Лошадиные силы: " << HP << endl;
	}
};

int main()
{
	setlocale(0, "ru");
	car obj1("Машина", "Черный", 320, 760, 4, "БМВ");
	obj1.Show();
	cout << endl;
	helicopter obj2("вертолёт", "серый", 320, 47, 10, 19);
	obj2.Show();
	cout << endl;
	bike obj3("велосипед", "Синий", 20, 0, 1, true);
	obj3.Show();
	cout << endl;
	plane obj4("самолёт", "Желтый", 500, 50, 250, 1250);
	obj4.Show();
	cout << endl;
	bigfoot obj5("Бигфут", "красный", 200, 57, 2, 952);
	obj5.Show();
	cout << endl;
}