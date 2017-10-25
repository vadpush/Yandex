#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	cout << setw(4);
	int n, m;
	int a[100][100];
	cin >> n >> m;
	for (int i = 0; i <= n+1; i++) {
		for (int j = 0; j <= m+1; j++) {
			a[i][j] = -1;
		}
	};
	vector <int> b;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			a[i][j] =0;
		}
	};
	int current_i = 1, current_j = 1,sum=1;
	for (int k = 0; k < m*n; k++) {
		a[current_i][current_j] = sum;
		if (a[current_i][current_j+1]==0) {
			current_j++;
		}
		if (a[current_i+1][current_j] == 0) {
			current_i++;
		}
		if (a[current_i][current_j - 1] == 0) {
			current_j--;
		}
		if (a[current_i-1][current_j] == 0 ) {
			current_i--;
		};
		sum++;
	};
	for (int i = 1; i <=n; i++) {
		for (int j = 1; j <= m; j++) {
			cout << a[i][j] << setw(4);
		}
		cout << endl;
	};
	system("pause");
	return 0;
}