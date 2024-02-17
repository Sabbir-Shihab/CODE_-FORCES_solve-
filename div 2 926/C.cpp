#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        if (k <= n) {
            cout << (k == 1 ? 2 : 1) << endl;
        } else {

            int diagonal_cells = min(n - 1, k - n + 1);
            int extra_cells = ceil((k - diagonal_cells) / 2.0);
            cout << diagonal_cells + extra_cells << endl;
        }
    }

    return 0;
}
