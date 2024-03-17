#include <iostream>

using namespace std;
int minInvest(int X, int Y) {
    int taxamu = X - Y;
    if (taxamu > 0) {
        return taxamu;
    } else {
        return 0;
    }
}
int main() {
    int T;
    cin >> T;
    for (int i = 0; i < T; ++i) {
        int X, Y;
        cin >> X >> Y;
        cout << minInvest(X, Y) << endl;
    }

    return 0;
}