#include <iostream>
#include <vector>

using namespace std;

void generateSubsetSums(vector<int>& arr, int idx, int size, int currentSum, vector<int>& subsetSums) {
    if (idx == size) {
        subsetSums.push_back(currentSum);
        return;
    }
    generateSubsetSums(arr, idx + 1, size, currentSum, subsetSums);
    generateSubsetSums(arr, idx + 1, size, currentSum + arr[idx], subsetSums);
}

bool canPartition(vector<int>& arr) {
    int totalSum = 0;
    for (int num : arr) totalSum += num;

    if (totalSum % 2 != 0) return false;

    int target = totalSum / 2;
    vector<int> subsetSums;
    generateSubsetSums(arr, 0, arr.size(), 0, subsetSums);

    for (int sum : subsetSums) {
        if (sum == target) return true;
    }
    return false;
}

int main() {
    vector<int> arr = {1, 6, 10, 5,2}; // Example input
    if (canPartition(arr)) {
        cout << "Equal partition is possible" << endl;
    } else {
        cout << "Equal partition is NOT possible" << endl;
    }
    return 0;
}
