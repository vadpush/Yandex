#include <iostream>
using namespace std;

int Input() {
	int n;
	cin >> n;
	if (n == 0) return n;
	else return n + Input();
}

int main() {
	setlocale(LC_ALL, "Russian");
	cout << Input();
	system("pause");
	return 0;
}