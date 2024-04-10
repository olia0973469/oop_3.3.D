//////////////////////////////////////////////////////////////////////////////
// Source.cpp
#include "AlcoholO.h"
#include "Liquid.h"
#include <iostream>

using namespace std;

int main()
{
	Liquid m1("Aqua", 0.2);
	cout << m1 << endl;
	m1 << 0.3;
	cout << "ChangeDensity:" << endl;
	cout << m1 << endl;
	{
		AlcoholO s4("Whiskey", 0.94, 0.50);
		cout << s4 << endl;
		s4 << 0.45;
		cout << "ChangeVolume:" << endl;
		cout << s4 << endl;
	}
	return 0;

	return 0;
}