
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> nums(2 * n);
        for (int i = 0; i < 2 * n; ++i) {
            cin >> nums[i];
        }

        sort(nums.begin(), nums.end(), greater<int>());

        long long score = 0;
        for (int i = 0; i < n; ++i) {
            score += min(nums[2 * i], nums[2 * i + 1]);
        }

        cout << score << endl;
    }

    return 0;
}
