//////////////////////////////////////////////////////////////////////////////
// Liquid.h
// заголовний файл Ц визначенн€ класу
#pragma once
#include <string>
#include <iostream>
using namespace std;
class Liquid 
{
private:
	string name;
	double density;
public:
	string getName() const { return name; }
	double getDensity() const { return density; }
	void setName(string name) { this->name = name; }
	void setDensity(double density) { this->density = density; }
	void Init(string name, double density);
	void Display() const;
	void Read();
	Liquid();
	Liquid(const string name);
	Liquid(const double density);
	Liquid(const string name, const double density);
	Liquid(const Liquid& m);
	Liquid& operator = (const Liquid& m);
	friend ostream& operator << (ostream& out, const Liquid& m);
	friend istream& operator >> (istream& in, Liquid& m);
	operator string () const;
	Liquid& operator<<(double newDensity);
	Liquid& operator ++ ();
	Liquid& operator -- ();
	Liquid operator ++ (int);
	Liquid operator -- (int);
	~Liquid(void);
};
