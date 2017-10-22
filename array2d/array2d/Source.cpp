#include <iostream>

using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	/*int n;
	cin >> n;
	//drawing flag
	int a[100][100];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == j) {
				a[i][j] = 1;
			}
			else if (i < j) {
				a[i][j] = 0;
			}
			else {
				a[i][j] = 2;
			}
		}
	};
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << a[i][j] << " ";
		};
		cout << endl;
	};*/

	//SAPER
	int n, m;
	cout << "Введите размер поля:";
	cin >> n >> m;
	int mines[102][102];
	cout << "Расставьте мины:" << endl;
	//filling in zeroes
	for (int i = 0; i <= n + 1; i++) {
		for (int j = 0; j <= m + 1; j++) {
			mines[i][j] = 0;
		}
	};
	//reading
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> mines[i][j];
		}
	};
	//filling in
	int ans[102][102];
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			//координаты оседей(сдвиги)
			int dx[8] = { 1,1,1,0,0,-1,-1,-1 };
			int dy[8] = { -1,0,1,-1,1,0,1,-1 };
			int temp = 0;
			//перебор соседей
			for (int k = 0; k < 8; k++) {
				temp = temp + mines[i + dy[k]][j + dx[k]];
			};
			ans[i][j] = temp;
		}
	};
	cout << "Обработанное поле:" << endl;
	//вывод
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (mines[i][j] == 1) {
				cout << "*" << " ";
			}
			else {
				cout << ans[i][j] << " ";
			}
		}
		cout << endl;
	};
	system("pause");
	return 0;
}