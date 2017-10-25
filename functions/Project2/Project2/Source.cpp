#include <iostream>
#include <cmath>
using namespace std;
double power(double a, int n) {
	if (n == 0) return 1;
	else return a*power(a, n - 1);
}
int main() {
	setlocale(LC_ALL, "Russian");
	double a;
	int n;
	cin >> a >> n;
	if (n>=0) cout << power(a, n);
	else cout << 1 / power(a, abs(n));
	system("pause");
	return 0;
}