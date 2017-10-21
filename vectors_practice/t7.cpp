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
    int min=0;
    for (int i=0;i<n; i++) {
        if (a[i]%2!=0) {
            if (min==0) {
                min=a[i];
            };
            if (a[i]<min) {
                min=a[i];
            }
        }
    };
    if (min==0) cout << 0;
    else cout << min;
    system("pause");
    return 0;
}
