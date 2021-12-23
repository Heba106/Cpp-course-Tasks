#include <iostream>
using namespace std;
int main()

{
	int X, y, z, w, m, l;
	cout << "enter th numbr between 0 and 1000 \n";
	cin >> X;
	y = X % 10;
	z = X / 10;
	w = z % 10;
	m = z / 10;
	l = (y + w + m);
	cout << "the sum of the digits qual " << l ;
}
