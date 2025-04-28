#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int nums[n];
    cout << "Enter array elements: "<< endl;
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int runningSum[n];
    runningSum[0] = nums[0];

    for (int i = 1; i < n; i++) {
        runningSum[i] = runningSum[i-1] + nums[i];
    }

    cout << "Running Sum: ";
    for (int i = 0; i < n; i++) {
        cout << runningSum[i] << " ";
    }

    return 0;
}
