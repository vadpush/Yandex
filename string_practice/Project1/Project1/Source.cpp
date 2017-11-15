#include <iostream>
#include <string>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	/*char c;
	cin >> c;
	if (c >= '0' && c <= '9') cout << "yes";
	else cout << "no";*/

	/*char c;
	cin >> c;
	if (c >= 'A' && c <= 'Z') cout << c;
	else {
		if (c >= 'a' && c <= 'z') {
			int al_num = c - 'a';
			cout << (char) ('A' + al_num);
		}
		else {
			cout << c;
		}
	}*/

	char c;
	cin >> c;
	if (c >= 'A' && c <= 'Z') {
		int al_num = c - 'A';
		cout << (char) ('a'+al_num);
	}
	else {
		if (c >= 'a' && c <= 'z') {
			int al_num = c - 'a';
			cout << (char)('A' + al_num);
		}
		else {
			cout << c;
		}
	}

	system("pause");
	return 0;
}