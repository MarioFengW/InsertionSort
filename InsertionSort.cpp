#include <iostream>
#include <vector>

using namespace std;

void InsertionSort(vector<int>& arr) {

    int n = arr.size();

    for (int i = 1; i < n; i++) {

        int key = arr[i];
        int j = i -1;

        while ( j >= 0 && arr[j] > key) {
        
            arr [j + 1] = arr[j];
            j = j - 1;

        }

        arr[j + 1] = key;

    }
};

int main() {

    vector<int> arr = {5, 2, 4, 6, 1, 3};

    InsertionSort(arr);

    cout << "[";

    for (int i = 0; i < arr.size(); i++) {

        cout << arr[i];

        if (i < arr.size() -1) {

            cout << " ";

        }

    }

    cout << "]";
}