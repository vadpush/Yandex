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
    for (int i=0;i<n-1;i++) {
        for (int j=i+1;j<n;j++) {
            if (a[i]==a[j]) pary++;
        }
    };
    cout << pary;
    system("pause");
    return 0;
}
