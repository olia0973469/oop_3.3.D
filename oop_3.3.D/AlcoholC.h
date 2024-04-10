//////////////////////////////////////////////////////////////////////////////
// AlcoholC.h
// заголовний файл Ц визначенн€ класу
#pragma once
#include "Liquid.h"
class AlcoholC :
	public Liquid
{
private:
	double volume;
public:
	double getVolume() const { return volume; }
	void setVolume(double volume) { this->volume = volume; }
	void Init(string name, double density, double volume);
	void Display() const;
	void Read();
	AlcoholC(const string name = "", const double density = 0, const double volume = 0);
	AlcoholC(const AlcoholC& s);
	AlcoholC& operator<<(double newDensity);
	AlcoholC& operator = (const AlcoholC& s);
	friend ostream& operator << (ostream& out, const AlcoholC& s);
	friend istream& operator >> (istream& in, AlcoholC& s);
	operator string () const;
	~AlcoholC(void);
};