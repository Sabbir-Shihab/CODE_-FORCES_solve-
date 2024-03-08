#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    vector<int> result;
    for (int i = n - 1; i >= 0; --i) {
        bool found = false;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] == arr[i]) {
                found = true;
                break;
            }
        }
        if (!found) {
            result.push_back(arr[i]);
        }
    }

    cout << result.size() << endl;
    for (int i = result.size() - 1; i >= 0; --i) {
        cout << result[i] << " ";
    }

    return 0;
}
