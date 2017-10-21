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
    for (int i=0;i<n; i++) {
        if (a[i]%2==0) {
            cout << a[i] << " ";
        }
    };
    system("pause");
    return 0;
}
