#include <iostream>
#include <string>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	/*string s;
	cin >> s;
	cout << "Hello, " + s;*/

	/*string s;
	char c;
	getline(cin, s);
	c = s[0];
	cout << s << " ";
	cout << c << " ";
	cout << (int)c;*/

	/*string s;
	getline(cin, s);
	for (auto c : s) {
		if (c >= '0' && c <= '9') {
			cout << c;
		}
	}*/

	/*int n;
	string s;
	cin >> n;
	getline(cin, s);
	for (int i = 0; i < n; i++) {
		getline(cin, s);
		if (s.find('rkpt') != -1) {
			for (auto c : s) {
				if (c >= '0' && c <= '9') {
					cout << c;
				}
			}
		}
	}*/

	int n;
	string s;
	cin >> n;
	getline(cin, s);
	for (int i = 0; i < n; i++) {
		getline(cin, s);
		string s2 = "";
		for (auto c : s) { //изменение регистра букв
			if (c >= 'a' && c <= 'z') {
				int al_num = c - 'a';
				s2 += 'A' + al_num;
			}
			else {
				s2 += c;
			}
		}
		if (s2.find('RKPT') != -1) {
			for (auto c : s2) {
				if (c >= '0' && c <= '9') {
					cout << c;
				}
			}
		}
	}
	system("pause");
	return 0;
}