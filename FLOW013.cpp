#include <iostream>
using namespace std;
string isVT(int A, int B, int C) {
    if (A + B + C == 180) {
        return "YES";
    } else {
        return "NO";
    }
}

int main() {
    int T;
    cin >> T; 
    for (int i = 0; i < T; ++i) {
        int A, B, C;
        cin >> A >> B >> C;
        cout << isVT(A, B, C) << endl;
    }

    return 0;
}
