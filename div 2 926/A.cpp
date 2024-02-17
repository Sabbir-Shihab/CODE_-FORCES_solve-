#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        int max_beauty = 0;
        for (int i = 1; i < n; ++i) {
            max_beauty += abs(a[i] - a[i - 1]);
        }

        cout << max_beauty << endl;
    }

    return 0;
}
