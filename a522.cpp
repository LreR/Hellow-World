#include <iostream>
using namespace std;

int main() {
    int times;
    cin >> times;
    for (int i = 0; i < times; i++) {
        int l, count;
        cin >> l >> count;
        int bar[count];
        bool dp[1001] = {0};
        dp[0] = 1;
        for (int j = 0; j < count; j++) {
            cin >> bar[j];
            for (int k = l-bar[j]; k >= 0; k--) {
                if (dp[k] == 1) {
                    dp[k+bar[j]] = 1;
                }
            }
        }
        if (dp[l]) {
            cout << "YES\n";
            continue;
        }
        cout << "NO\n";
    }
}
