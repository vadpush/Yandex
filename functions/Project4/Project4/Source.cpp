#include <iostream>
#include <cmath>
using namespace std;

double power(double a, int n) {
	if (n == 0) return 1;
	if (n == 1) return a;
	if (n % 2 == 0) {
		return power(a*a, n / 2);
	}
	else return a*power(a, n - 1);
}

int main() {
	setlocale(LC_ALL, "Russian");
	double a;
	cin >> a;
	int n;
	cin >> n;
	cout << power(a, n) << endl;
	system("pause");
	return 0;
}