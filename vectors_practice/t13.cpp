#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main () {
    vector <int> a;
    for (int i=0;i<16;i++) {
        int temp;
        cin >> temp;
        a.push_back(temp);
    };
    bool hit=false;
    for (int i=0;i<7;i++) {
        for (int j=i+1;j<8;j++) {
            if ((a[2*i]==a[2*j])||(a[2*i+1]==a[2*j+1])||(pow((a[2*i]-a[2*j]),2)==pow((a[2*i+1]-a[2*j+1]),2))) {
                hit=true;
                break;
            }
        }
    };
    if (hit) cout << "YES";
    else cout << "NO";
    return 0;
}
