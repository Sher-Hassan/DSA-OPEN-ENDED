// Case Study: Dataset A - Sequential Search
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

int SequentialSearch(const vector<int>& arr, int key, int& comparisons) {
    comparisons = 0;
    for (int i = 0; i < arr.size(); i++) {
        comparisons++;
        if (arr[i] == key)
            return i; // Successful search
    }
    return -1; // Unsuccessful search
}

int main() {
    vector<int> datasetA = {5, 12, 8, 21, 30, 7, 18, 14, 20, 1};
    int key, comparisons;

    cout << "Dataset A (unsorted): ";
    for (int val : datasetA)
        cout << val << " ";
    cout << endl;

    cout << "Enter the key to search: ";
    cin >> key;

    int result = SequentialSearch(datasetA, key, comparisons);

    if (result != -1)
        cout << "Key found at index " << result << " after " << comparisons << " comparisons." << endl;
    else
        cout << "Key not found after " << comparisons << " comparisons." << endl;

    return 0;
}
