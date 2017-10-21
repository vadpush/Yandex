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
    for (int i=0;i<n/2;i++) {
        int temp=a[2*i];
        a[2*i]=a[2*i+1];
        a[2*i+1]=temp;
    };
    for (int i=0;i<n;i++) {
            cout << a[i] << " ";
    };
    system("pause");
    return 0;
}
