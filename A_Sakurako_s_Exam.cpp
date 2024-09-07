#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int a, b;
        cin >> a >> b;
        if(b & 1 && a && a % 2 == 0 || (! (b & 1) && ! (a & 1))) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
