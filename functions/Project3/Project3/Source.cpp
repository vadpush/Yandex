#include <iostream>
#include <cmath>
using namespace std;

int MinDivisor(int n) {
	int m = ceil (sqrt(n));
	for (int i = 2; i <= m; i++) {
		if (n%i == 0) return i;
	};
	return n;
}

bool IsPrime(int n) {
	if (MinDivisor(n) == n) return true;
	else return false;
}

int main() {
	int n;
	cin >> n;
	//cout << MinDivisor(n);
	if (IsPrime(n)) cout << "YES";
	else cout << "NO";
	system("pause");
	return 0;
}