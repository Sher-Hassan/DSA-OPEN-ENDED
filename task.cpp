// Case Study: Dataset A - Sequential Search
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

int SequentialSearch(const vector<int>& arr, int key, int& comparisons) {
    comparisons = 0;
    for (vector<int>::size_type i = 0; i < arr.size(); i++) {
        comparisons++;
        if (arr[i] == static_cast<vector<int>::size_type>(key))
            return i; // Successful search
    }
    return -1; // Unsuccessful search
}

int main() {
    vector<int> datasetA = {5, 12, 8, 21, 30, 7, 18, 14, 20, 1};
    vector<int> datasetB = {5, 12, 8, 21, 30, 7, 18, 14, 20, 1, 6, 9, 11, 15, 19, 22, 25, 27, 29, 31};
    int key, comparisons;
    cout << "Small DATASET A (unsorted): "<<endl;
    cout << "Dataset A (unsorted): ";
    for (int val : datasetA)
        cout << val << " ";
    cout << endl;

    cout << "Enter the key to search: ";
    cin >> key;

    int result = SequentialSearch(datasetA, key, comparisons);

    if (result != -1){
        cout << "Key found at index " << result << " after " << comparisons << " comparisons." << endl;
        }
    else{
        cout << "Key not found after " << comparisons << " comparisons." << endl;
    }
        cout<<endl;
    system("pause");
    cout << "Large DATASET B (unsorted): "<<endl;
    cout << "Dataset B (unsorted): ";
    for (int val : datasetB)
        cout << val << " ";
    cout << endl;

    cout << "Enter the key to search: ";
    cin >> key;

    int resultB = SequentialSearch(datasetB, key, comparisons);

    if (result != -1){
        cout << "Key found at index " << resultB << " after " << comparisons << " comparisons." << endl;
        }
    else{
        cout << "Key not found after " << comparisons << " comparisons." << endl;
        }

    return 0;
}
