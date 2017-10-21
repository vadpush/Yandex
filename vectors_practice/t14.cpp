#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
	int N, K;
	cin >> N >> K;
	vector <int> a;
	for (int i = 0; i<K; i++) {
		int temp1, temp2;
		cin >> temp1 >> temp2;
		a.push_back(temp1);
		a.push_back(temp2);
	};
	vector <int> kegli;
	for (int i = 0; i<N; i++) {
	    int win=1;
        kegli.push_back(win);
	};
	for (int i = 0; i<K; i++) {
		for (int j = a[2 * i] - 1; j<a[2 * i + 1] - 1; j++) {
			kegli[j] = 0;
		}
	};
	for (int i = 0; i<N; i++) {
		cout << kegli[i] << " ";
	};
	return 0;
}
