#include <iostream>
#include<string>
using namespace std;
class Human
{
    string name;
    string surname;
    int age;
public:
    Human()
    {
        age = 0;

    }
    Human(const char* n, const char* s, int a)
    {
        name.append(n);
        surname.append(s);
        age = a;
    }
    void Output()
    {
        cout << name << endl << surname << endl << age << endl;
    }
};
class Car
{
    string color;
    string model;
    string strana_proizvod;
    double price;
    int god_vipyska;
public:
    Car()
    {
        price = 0.0;
        god_vipyska = 0;
    }
    Car(const char* c, const char* m, const char* s, double p, int g)
    {
        color.append(c);
        model.append(m);
        strana_proizvod.append(s);
        price = p;
        god_vipyska = g;
    }

    void Output()
    {
        cout << "Цвет: " << color << endl;
        cout << "Модель: " << model << endl;
        cout << "Страна: " << strana_proizvod << endl;
        cout << "Цена: " << price << endl;
        cout << "Год выпуска: " << god_vipyska << endl;
    }
};

int main()
{


    Human a("Ivan", "Popov", 34);
    a.Output();

    Car car("Grey", "Porshe", "Germany", 150.200, 2021);
    car.Output();

}