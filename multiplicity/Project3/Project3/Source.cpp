#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	//������� - ������������ �������� �����
	map <int, string> s;
	s[112] = "sos";
	s[102] = "emergency";
	if (s.find(112) != s.end()) {
		cout << "YES\n";
	}
	for (auto now : s) {
		//������������� ���� ��������� �� ����� � ��������
		cout << now.first << " " << now.second << "\n";
	}

	//���� ����� ������������� ��������� ��������;
	map <string, vector <string>> d;
	d["vasya"] = { "123645","64564566" };
	for (auto now : d["vasya"]) {
		cout << now << " ";
	}
	system("pause");
	return 0;
}