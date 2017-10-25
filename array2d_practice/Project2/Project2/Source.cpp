#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;
	cin >> n >> m;
	int a[100][100];
	int i, j,sum=0;
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			if ((i + j) %2== 0) {
				sum++;
				a[i][j] = sum;
			}
			else {
				a[i][j] = 0;
			}
		}
	};
	cout << setw(4);
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			cout << a[i][j] << setw(4);
		}
		cout << endl;
	};
	system("pause");
	return 0;
}