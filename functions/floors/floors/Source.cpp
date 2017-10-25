#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <iomanip>
using namespace std;

//������� ������������ ���������� ���������� �������
int Ball_drop(int eggs, int floors) {
	//���� � ��� ���� �����, ����� �� ������ ������ ��� �����
	if (eggs == 1) return floors;
	//���� ������ ������ 2, ����� �� ����� ������ ��������� ���
	if (floors <= 2) return floors;

	int min_drops = -1;
	for (int floor = 1; floor < floors; ++floor) {
		int max_drop_below = Ball_drop(eggs - 1, floor - 1);
		int max_drop_above = Ball_drop(eggs, floors - floor);
		int max_k = max(max_drop_below, max_drop_above);

		if (min_drops == -1 || min_drops > max_k) {
			min_drops = max_k;
		}
	}
	return min_drops + 1;

}
int main() {
	setlocale(LC_ALL, "Russian");
	//� ��� ���� 2 ������
	const int balls = 2;
	//���������� ������
	int n;
	cin >> n;
	//floors-1 ��� ��� � ���������� ����� ����� ����� �����������
	cout << Ball_drop(balls, n - 1) << endl;
	system("pause");
	return 0;
}