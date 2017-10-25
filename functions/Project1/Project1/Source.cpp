#include <iostream>
#include <cmath>
using namespace std;
bool IsPointInSquare(double x, double y, double xc, double yc, double r) {
	return ((pow(x-xc,2)+pow(y-yc,2)<=pow(r,2))&&(y>=-x)&&(y>=2*x+2) || (pow(x - xc, 2) + pow(y - yc, 2) >= pow(r, 2)) && (y <= -x) && (y <= 2 * x + 2));
}

int main() {
	setlocale(LC_ALL, "Russian");
	double x,y,xc=-1,yc=1,r=2;
	//y=-x y=2x+2
	cin >> x >> y;
	bool p = IsPointInSquare(x, y,xc,yc,r);
	if (p) cout << "YES";
	else cout << "NO";
	system("pause");
	return 0;
}