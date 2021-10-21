// Lab 5_1
#include <iostream>
#include <cmath>
using namespace std;
double h(const double x, const double y); // прототип
int main()
{
	double s, t;
		cout << "s = "; cin >> s;
	cout << "t = "; cin >> t;
	double c = (h(pow(s,2),pow(t,2)) + pow(h(s + t, 1),2)) / (1 + pow(h(s * t,2),2));
	cout << "c = " << c << endl;
	return 0;
}
double h(const double x, const double y) // визначення
{
	return ((x * y) / (1 + pow(x,2) * pow(y,2)));
}