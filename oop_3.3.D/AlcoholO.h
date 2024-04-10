//////////////////////////////////////////////////////////////////////////////
// AlcoholO.h
// заголовний файл Ц визначенн€ класу
#pragma once
#include "Liquid.h"
class AlcoholO:
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
	AlcoholO(const string name = "", const double density = 0, const double volume = 0);
	AlcoholO(const AlcoholO& s);
	AlcoholO& operator<<(double newDensity);
	AlcoholO& operator = (const AlcoholO& s);
	friend ostream& operator << (ostream& out, const AlcoholO& s);
	friend istream& operator >> (istream& in, AlcoholO& s);
	operator string () const;
	~AlcoholO(void);
};