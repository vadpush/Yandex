#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <iomanip>
using namespace std;

//функция определяющая наименьшее количество бросков
int Ball_drop(int eggs, int floors) {
	//если у нас один шарик, тогда мы должны обойти все этажи
	if (eggs == 1) return floors;
	//если этажей меньше 2, тогда мы также должны проверить все
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
	//У нас есть 2 шарика
	const int balls = 2;
	//Количество этажей
	int n;
	cin >> n;
	//floors-1 так как с последнего этажа шарик точно разбивается
	cout << Ball_drop(balls, n - 1) << endl;
	system("pause");
	return 0;
}