#include "IntRange.h"
#include <iostream>

using namespace std;

void IntRange::SetFirst(int value)
{
	first = value;
}
void IntRange::SetSecond(unsigned int value)
{
	second = value;
}

bool IntRange::Init(int x, int y)
{
	first = x;
	if (y >= 0)
	{
		second = y;
		return true;
	}
	else
	{
		second = 0;
		return false;
	}
}

void IntRange::Display() const
{
	cout << "first " << first << " second " << second << endl;
}

void IntRange::Read()
{
	int x, y;
	cout << "first =  ";
	cin >> x;
	do {
		cout << "second = ";
		cin >> y;
	} while (!Init(x, y));
}

void IntRange::range—heck(int N)
{
	if (first <= N && N < second)
	{
		cout << "yes" << endl;
	}
	else
	{
		cout << "no" << endl;
	}
}