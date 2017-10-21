#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
	int n,k;
	cin >> n;
	vector <int> a(n);
	//считывание;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	};
	//обработка и вывод;
	for (int i = n - 1; i >= 0; i--) {
		cout << a[i] << " ";
	};
	cout << endl;
	vector <int> b;
	cin >> k;
	for (int i = 0; i < k; i++) {
		int temp;
		cin >> temp;
		if (temp > 0) {
			b.push_back(temp);
		}
	};
	for (int i = b.size() - 1; i >= 0; i--) {
		cout << b[i] << " ";
	};
	cout << endl;
	vector <int> c;
	int m;
	cin >> m;
	for (int i = 0; i < m; i++) {
		int temp;
		cin >> temp;
		c.push_back(temp);
	};
	int num_min = 0;
	for (int i = 0; i < m; i++) {
		if (c[i] < c[num_min]) {
			num_min = i;
		}
	};
	int temp;
	temp = c[0];
	c[0] = c[num_min];
	c[num_min] = temp;
	//вывод
	for (auto now : c) {
		cout << now << " ";
	};
	//сортировка выбором
	vector <int> d;
	int l;
	cin >> l;
	for (int i = 0; i < l; i++) {
		int temp;
		cin >> temp;
		d.push_back(temp);
	};
	for (int j = 0; j < l; j++) {
		int num_min_sort = j;
		for (int i = j; i < l; i++) {
			if (d[i] < d[num_min_sort]) {
				num_min_sort = i;
			}
		}
		int temp = d[j];
		d[j] = d[num_min_sort];
		d[num_min_sort] = temp;
	};
	for (auto now : d) {
		cout << now << " ";
	}
	system("pause");
	return 0;
}