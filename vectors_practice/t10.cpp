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
    int last=a[n-1];
    for (int i=n-1;i>0;i--) {
        a[i]=a[i-1];
    };
    a[0]=last;
    for (int i=0;i<n;i++) {
            cout << a[i] << " ";
    };
    system("pause");
    return 0;
}
