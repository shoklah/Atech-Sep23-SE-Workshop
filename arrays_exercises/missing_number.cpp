#include <iostream>
#include <vector>
using namespace std;

int missingNumber(vector<int> &input) {
    int n = input.size();
    int total = 0;
    int expectedTotal = 0;

    for (int i = 0; i < n; i++) {
        total += input[i];
        expectedTotal += (i + 1);
    }

    expectedTotal += n + 1;
    return expectedTotal - total;
}

int xorMissingNumber(vector<int> &input) {
    int n = input.size();
    int expected_xor = 0;
    int actual_xor = 0;

    for (int i = 0; i < n; i++) {
        expected_xor = (expected_xor ^ (i + 1));
        actual_xor = actual_xor ^ input[i];
    }

    expected_xor ^= n + 1;
    return expected_xor ^ actual_xor;
}

int main() {
    vector<int> input = {8, 2, 4, 5, 3, 7, 1};
    cout << "Missing number is " << missingNumber(input) << endl;   
}