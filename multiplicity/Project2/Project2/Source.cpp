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
	//вывод всех элементов
	for (auto now : s) {
		cout << now << " ";
	}
	//другой способ вывода, теперь now это указатель, поэтому чтобы вывести элемент множества ставим "*" - обращение к элементу на который ссылается указатель
	for (auto now = s.begin(); now != s.end(); now++) {
		cout << *now << " ";
	};*/
	//multiset позволяет хранить в себе одинаковые элементы в отличие от set
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

	//посчитать сколько раз встретилось какое-то число
	multiset <int> s;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		s.insert(x);
	}
	//количество вхождений единиц
	int cnt = 0;
	//lower_bound(x) - возвращает указатель на первый элемент, равный элементу(x), upper_bound(x) - указатель на последний элемент равный x
	for (auto now = s.lower_bound(1); now != s.upper_bound(1); now++) {
		cnt++;
	}
	cout << cnt;
	system("pause");
	return 0;
}