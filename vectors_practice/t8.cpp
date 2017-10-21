#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    vector <int> a;
    int n;
    cin >> n;
    cout << endl;
    for (int i=0; i<n; i++) {
        int temp;
        cin >> temp;
        a.push_back(temp);
    };
    int dif=1;
    for (int i=1;i<n; i++) {
        if (a[i]!=a[i-1]) dif++;
    };
    cout << dif;
    system("pause");
    return 0;
}
