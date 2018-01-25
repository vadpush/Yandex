#include <iostream>
#include <set>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	/*set <int> s;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		s.insert(x);
	}
	//����� ���� ���������
	for (auto now : s) {
		cout << now << " ";
	}
	//������ ������ ������, ������ now ��� ���������, ������� ����� ������� ������� ��������� ������ "*" - ��������� � �������� �� ������� ��������� ���������
	for (auto now = s.begin(); now != s.end(); now++) {
		cout << *now << " ";
	};*/
	//multiset ��������� ������� � ���� ���������� �������� � ������� �� set
	/*multiset <int> d;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		d.insert(x);
	}
	for (auto now = d.begin(); now != d.end(); now++) {
		cout << *now << " ";
	};
	cout << d.size();*/

	//��������� ������� ��� ����������� �����-�� �����
	multiset <int> s;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		s.insert(x);
	}
	//���������� ��������� ������
	int cnt = 0;
	//lower_bound(x) - ���������� ��������� �� ������ �������, ������ ��������(x), upper_bound(x) - ��������� �� ��������� ������� ������ x
	for (auto now = s.lower_bound(1); now != s.upper_bound(1); now++) {
		cnt++;
	}
	cout << cnt;
	system("pause");
	return 0;
}