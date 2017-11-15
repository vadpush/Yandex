//нопедекхрэ, ъбкъеряъ кх IP юдпея дносряхлшл
#include <iostream>
#include <string>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	string s, temp;
	bool ip;
	getline(cin, s);
	s += ".";
	int first = -1, point = 0;;
	while (s.find_first_of(".", first + 1) != -1) {
			if (first + 1 == s.find_first_of(".", first + 1)) {
				ip = false;
				break;
			}
			temp = s.substr(first + 1, s.find_first_of(".", first + 1) - first - 1);
			int k=0;
			for (auto c : temp) {
				if (c >= '0' && c <= '9') ip = true;
				else {
					ip = false;
					break;
				}
				k++;
			};
			if (ip == true && k >= 1 && k <= 3) {
				int t = stoi(temp);
				if (t >= 0 && t <= 255) ip = true;
				else {
					ip = false;
					break;
				}
			}
			else {
				ip = false;
				break;
			}
			first = s.find_first_of(".", first + 1);
			point++;
	};
	if (ip==true && point==4) cout << "YES";
	else cout << "NO";
	system("pause");
	return 0;
}