#include <iostream>
#include <set>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	//множество целочисленных элементов
	set <int> s;
	//число запросов
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int type, x;
		cin >> type >> x;
		if (type == 1) {//добавить
			s.insert(x);
		}
		else if (type == 2) {//проверить
			if (s.find(x) == s.end()) {
				cout << "NO\n";
			}
			else cout << "YES\n";
		}
		else {//удалить элемент
			s.erase(x);
		}
	};
	system("pause");
	return 0;
}