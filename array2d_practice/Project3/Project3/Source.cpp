#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	cout << setw(4);
	int n, m,k=0;
	cin >> n >> m;
	int numbers = n*m,sum=1;
	int a[100][100];
	int x=0, y=0, x_max = m, y_max = n;
	int x_min = 0, y_min = 0;
	//идем по всем n*m элементам
	while (k < numbers) {
		//идем к правой границе
		for (; x < x_max && k < numbers; ++x, ++k) {
			a[y][x] = sum++;
		}
		//дошли до границы
		x--;
		y++;
		//изменяем правую границу на 1 меньше
		x_max--;

		//идем к нижней границе
		for (; y < y_max && k < numbers; ++y, ++k) {
			a[y][x] = sum++;
		}
		//дошли до границы
		y--;
		x--;
		//изменяем нижнюю границу на 1 меньше
		y_min++;

		//идем к левой границе
		for (; x >= x_min && k < numbers; --x, ++k) {
			a[y][x] = sum++;
		}
		//дошли до границы
		x++;
		y--;
		//изменяем левую границу на 1 меньше
		x_min++;

		//идем к верхней границе
		for (; y >= y_min && k < numbers; --y, ++k) {
			a[y][x] = sum++;
		}
		//дошли до границы
		y++;
		x++;
		//изменяем правую границу на 1 меньше
		y_max--;
	};
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << setw(4) << a[i][j];
		}
		cout << endl;
	}
	system("pause");
	return 0;
}