//////////////////////////////////////////////////////////////////////////////
// AlcoholO.cpp
// ���� ��������� � ��������� ������ �����
#include "Liquid.h"
#include "AlcoholO.h"
#include <sstream>
void AlcoholO::Init(string name, double density, double volume)
{
	Liquid::Init(name, density); // ������ �������� ������
	setVolume(volume);
}
void AlcoholO::Display() const
{
	cout << endl;
	cout << "Liquid = " << endl;
	Liquid::Display(); // ������ �������� ������
	cout << "volume = " << volume << endl;
}
void AlcoholO::Read()
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
AlcoholO::AlcoholO(const string name, const double density, const double volume)
	: Liquid(name, density), volume(volume) // ������ �������� ������������
{}
AlcoholO::AlcoholO(const AlcoholO& s)
	: Liquid(s) // ������ �������� ������������
{
	volume = s.volume;
}
AlcoholO& AlcoholO::operator<<(double newVolume)
{
	volume = newVolume;
	return *this;
}
AlcoholO& AlcoholO::operator = (const AlcoholO& s)
{
	Liquid::operator = (s); // ������ �������� ���������
	volume = s.volume;
	return *this;
}
ostream& operator << (ostream& out, const AlcoholO& s)
{
	out << string(s);
	return out;
}
istream& operator >> (istream& in, AlcoholO& s)
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
AlcoholO::operator string () const
{
	stringstream ss;
	ss << "volume = " << volume << endl;
	return Liquid::operator string() + ss.str(); // ������ �������� ������
}
AlcoholO::~AlcoholO(void)
{}
