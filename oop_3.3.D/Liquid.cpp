//////////////////////////////////////////////////////////////////////////////
// Liquid.cpp
// פאיכ נואכ³חאצ³¿ – נואכ³חאצ³ÿ לועמה³ג ךכאסף

#include "Liquid.h"
#include <sstream>

void Liquid::Init(string name, double density)
{
	setName(name);
	setDensity(density);
}
void Liquid::Display() const {
	cout << "name = " << name << endl;
	cout << "density = " << density << endl;
}
void Liquid::Read() {
	string name;
	double density;
	cout << endl;
	cout << "name = "; cin >> name;
	cout << "density = "; cin >> density;
	Init(name, density);
}
Liquid::Liquid()
	: name(""), density(0)
{}
Liquid::Liquid(const string name)
	: name(name), density(0)
{}
Liquid::Liquid(const double density)
	: name(""), density(density)
{}
Liquid::Liquid(const string name, const double density)
	: name(name), density(density)
{}
Liquid::Liquid(const Liquid& m)
	: name(m.name), density(m.density)
{}
Liquid& Liquid::operator = (const Liquid& m)
{
	this->name = m.name;
	this->density = m.density;
	return *this;
}
ostream& operator << (ostream& out, const Liquid& m)
{
	out << string(m);
	return out;
}
istream& operator >> (istream& in, Liquid& m)
{
	string name;
	double density;
	cout << endl;
	cout << "name = "; in >> name;
	cout << "density = "; in >> density;

	m.setName(name);
	m.setDensity(density);
	return in;
}
Liquid::operator string () const
{
	stringstream ss;
	ss << endl;
	ss << "name = " << name << endl;
	ss << "density = " << density << endl;
	return ss.str();
}
Liquid& Liquid::operator<<(double newDensity)
{
	density = newDensity;
	return *this;
}
Liquid& Liquid::operator ++ ()
{
	++density;
	return *this;
}
Liquid& Liquid::operator -- ()
{
	--density;
	return *this;
}
Liquid Liquid::operator ++ (int)
{
	Liquid t(*this);
	density++;
	return t;
}
Liquid Liquid::operator -- (int)
{
	Liquid t(*this);
	density--;
	return t;
}
Liquid::~Liquid(void)
{}
