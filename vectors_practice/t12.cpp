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
    int pary=0;
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            if (a[i]==a[j]) pary++;
        }
        if (pary==1) cout << a[i] << " ";
        pary=0;
    };
    system("pause");
    return 0;
}
