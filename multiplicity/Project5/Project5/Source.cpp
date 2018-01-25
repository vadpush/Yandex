#include <iostream>
#include <map>
#include <string>
#include <set>

using namespace std;

int main() {
	//������-���������� �������
	map <string, set <string>> a;
	string s, eng_word;
	int n,i;
	cin >> n;
	getline(cin, s); //������� �� ���� ������

	for (int j = 0; j < n; j++) {
		getline(cin, s); //���� ������ �� �����-���������� �������
		eng_word= s.substr(0, s.find(' ')); //�������� ���������� �����
		s = s.substr(s.find('-') + 2, s.size() - 1); //��������� � ������ ������ ��������� �����(������� �������� ��������� ���� �����)

		i = s.find(',');
		while (i > 0) {//��������� ������ ��������� ����� � ������� ���-���� ������� � ��������� � ���� ���������� ��������
			a[s.substr(0, i)].insert(eng_word);
			s = s.substr(i + 2, s.size() - 1);
			i = s.find(',');
		}
		a[s].insert(eng_word);
	}

	cout << a.size() << "\n";
	for (auto now : a) {
		i = 1;
		cout << now.first << " - ";
		for (auto eng : now.second) {
			cout << eng;
			if (i != now.second.size()) {
				cout << ", ";
			}
			else {
				cout << "\n";
			}
			i++;
		}
	}
	system("pause");
	return 0;
}
