// Case Study: Dataset B - Binary Search
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int BinarySearch(const vector<int> &arr, int key, int &comparisons)
{
    int low = 0, high = arr.size() - 1;
    comparisons = 0;

    while (low <= high)
    {
        comparisons++;
        int mid = (low + high) / 2;

        if (arr[mid] == key)
            return mid; // Successful search
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1; // Unsuccessful search
}

int main()
{
    vector<int> datasetC = {1, 5, 7, 8, 12, 14, 18, 20, 21, 30};
    vector<int> datasetD = {1, 5, 7, 8, 12, 14, 18, 20, 21, 30, 31, 35, 37, 38, 42, 44, 48, 50, 51, 60};
    int key, comparisons;
    cout << "Small Dataset C (sorted): " << endl;
    cout << "Dataset C (sorted): ";
    for (int val : datasetC)
        cout << val << " ";
    cout << endl;

    cout << "Enter the key to search: ";
    cin >> key;

    int resultC = BinarySearch(datasetC, key, comparisons);

    if (resultC != -1)
    {
        cout << "Key found at index " << resultC << " after " << comparisons << " comparisons." << endl;
    }
    else
    {
        cout << "Key not found after " << comparisons << " comparisons." << endl;
    }
    cout <<endl;
    system("pause");
    cout << "Large Dataset D (sorted): " << endl;
    cout << "Dataset D (sorted): ";
    for (int val : datasetD)
        cout << val << " ";
    cout << endl;

    cout << "Enter the key to search: ";
    cin >> key;

    int resultD = BinarySearch(datasetD, key, comparisons);

    if (resultD != -1)
        cout << "Key found at index " << resultD << " after " << comparisons << " comparisons." << endl;
    else
        cout << "Key not found after " << comparisons << " comparisons." << endl;

    return 0;
}
