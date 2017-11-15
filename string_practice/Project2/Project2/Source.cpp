//мюирх х бшбеярх люйяхлюкэмне якнбн б ярпнйе
#include <iostream>
#include <string>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	string s, temp1, temp2;
	getline(cin, s);
	s += " ";
	int first=0;
	temp1=s.substr(0,s.find_first_of(" ", 0));
	first = s.find_first_of(" ", first);
	while (s.find_first_of(" ", first + 1) != -1) {
		temp2 = s.substr(first + 1, s.find_first_of(" ", first + 1) - first - 1);
		first = s.find_first_of(" ", first + 1);
		if (temp2.size() > temp1.size()) temp1 = temp2;
	};
	cout << temp1;
	system("pause");
	return 0;
}