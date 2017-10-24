#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <cmath>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	/*int n, m,maxi=0,maxj=0;
	cin >> n >> m;
	int a[100][100];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
			if (a[i][j] > a[maxi][maxj]) {
				maxi = i;
				maxj = j;
			}
		}
	};
	cout << maxi << " " << maxj;*/

	/*int n;
	cin >> n;
	int centr = (n - 1) / 2;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if ((pow(i - centr, 2) == pow(j - centr, 2)) || (i == centr) || (j == centr)) {
				cout << "*" << " ";
			}
			else cout << "." << " ";
		}
		cout << endl;
	};*/
	
	/*int n;
	cin >> n;
	int a[100][100];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			a[i][j] = abs(i - j);
			cout << a[i][j];
		}
		cout << endl;
	}*/

	/*int n, m;
	int a[100][100];
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	};
	int i, j;
	cin >> i >> j;
	for (int k = 0; k < n; k++) {
		int temp = a[k][i];
		a[k][i] = a[k][j];
		a[k][j] = temp;
	};
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	};*/

	/*int n;
	cin >> n;
	int a[10][10];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	};
	bool simm = true;
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			if (a[i][j] != a[j][i]) {
				simm = false;
				break;
			}
		}
	};
	if (n == 2) {
		if (a[0][1] != a[1][0]) simm = false;
	}
	if (simm) cout << "YES";
	else cout << "NO";*/

	/*int n,m;
	cin >> n >> m;
	int a[1000][1000];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	};
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << a[j][i] << " ";
		};
		cout << endl;
	};*/
	/*int n, m;
	int a[20][20];
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	};
	int k,kol=0,R=-1;
	cin >> k;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (a[i][j] == 0) {
				kol++;
				if (kol == k) {
					R = i+1;
					break;
				}
			}
			else {
				kol = 0;
			}
		}
		if (R != -1) break;
	};
	if (R == -1) cout << 0;
	else cout << R;*/

	int n, m;
	cin >> n >> m;
	int a[100][100];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	};
	int b[100][100];
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			b[i][j] = a[n -1- j][i];
			cout << b[i][j] << " ";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}