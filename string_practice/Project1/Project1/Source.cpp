#include <iostream>
#include <string>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	char c;
	cin >> c;
	if (c >= '0' && c <= '9') cout << "yes";
	else cout << "no";
	system("pause");
	return 0;
}