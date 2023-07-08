#include <iostream>
#include <unordered_map>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    unordered_map<int, int> freq;
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int sum = vec[i] + vec[j];
            if (sum > 0 && (sum & (sum - 1)) == 0) { // check if sum is power of 2
                count += freq[sum];
            }
        }
        freq[vec[i]]++;
    }

    cout << count << endl;

    return 0;
}
