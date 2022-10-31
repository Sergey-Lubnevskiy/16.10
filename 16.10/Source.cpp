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
		cout << "���: " << type << endl;
		cout << "����: " << color << endl;
		cout << "��������: " << speed << " ��\\�" << endl;
		cout << "������ �������: " << fuelcons << " �\\100 ��" << endl;
		cout << "���������: " << passenger << endl;
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
		cout << "��������: " << company << endl;
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
		cout << "������� ����: " << tire_size << " ��" << endl;
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
			cout << "�����������" << endl;
		else
			cout << "������ �� ������" << endl;
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
		cout << "����������������: " << carr_cap << " ���" << endl;
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
		cout << "��������� ����: " << HP << endl;
	}
};

int main()
{
	setlocale(0, "ru");
	car obj1("������", "������", 320, 760, 4, "���");
	obj1.Show();
	cout << endl;
	helicopter obj2("�������", "�����", 320, 47, 10, 19);
	obj2.Show();
	cout << endl;
	bike obj3("���������", "�����", 20, 0, 1, true);
	obj3.Show();
	cout << endl;
	plane obj4("������", "������", 500, 50, 250, 1250);
	obj4.Show();
	cout << endl;
	bigfoot obj5("������", "�������", 200, 57, 2, 952);
	obj5.Show();
	cout << endl;
}