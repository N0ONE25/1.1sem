#include <iostream>
#include "IntRange.h"

using namespace std;

IntRange numbers(int x, int y)
{
	IntRange nn;
	if (!nn.Init(x, y))
		cout << "wrong argument to Init (second)" << endl;
	return nn;
}

int main()
{
	IntRange a;
	a.Init(1, 10);
	a.Display();
	a.rangeÑheck(6);

	IntRange b;
	b.Read();
	b.Display();
	b.rangeÑheck(7);

	IntRange c;
	int c1, c2;
	cout << "first =  ";
	cin >> c1;
	cout << "second = ";
	cin >> c2;
	c = numbers(c1, c2);
	c.Display();

}