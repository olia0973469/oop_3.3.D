//////////////////////////////////////////////////////////////////////////////
// AlcoholC.cpp
// ���� ��������� � ��������� ������ �����
#include "Liquid.h"
#include "AlcoholC.h"
#include <sstream>
void AlcoholC::Init(string name, double density, double volume)
{
	Liquid::Init(name, density); // ������ �������� ������
	setVolume(volume);
}
void AlcoholC::Display() const
{
	cout << endl;
	cout << "Liquid = " << endl;
	Liquid::Display(); // ������ �������� ������
	cout << "volume = " << volume << endl;
}
void AlcoholC::Read()
{
	string name;
	double density;
	cout << endl;
	cout << "name = "; cin >> name;
	cout << "density = "; cin >> density;
	double volume;
	cout << endl;
	cout << "volume = "; cin >> volume;
	Init(name, density, volume);
}
AlcoholC::AlcoholC(const string name, const double density, const double volume)
	: Liquid(name, density), volume(volume) // ������ �������� ������������
{}
AlcoholC::AlcoholC(const AlcoholC& s)
	: Liquid(s) // ������ �������� ������������
{
	volume = s.volume;
}
AlcoholC& AlcoholC::operator<<(double newVolume)
{
	volume = newVolume;
	return *this;
}
AlcoholC& AlcoholC::operator = (const AlcoholC& s)
{
	Liquid::operator = (s); // ������ �������� ���������
	volume = s.volume;
	return *this;
}
ostream& operator << (ostream& out, const AlcoholC& s)
{
	out << string(s);
	return out;
}
istream& operator >> (istream& in, AlcoholC& s)
{
	string name;
	double density;
	cout << endl;
	cout << "name = "; in >> name;
	cout << "density = "; in >> density;
	s.setName(name);
	s.setDensity(density);
	double volume;
	cout << endl;
	cout << "volume = "; in >> volume;
	s.setVolume(volume);
	return in;
}
AlcoholC::operator string () const
{
	stringstream ss;
	ss << "volume = " << volume << endl;
	return Liquid::operator string() + ss.str(); // ������ �������� ������
}
AlcoholC::~AlcoholC(void)
{}
