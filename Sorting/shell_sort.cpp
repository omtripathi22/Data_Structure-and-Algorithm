#include <iostream>
#include <vector>
using namespace std;

void shellSort(vector<int>& arr) {
    int n = arr.size();

    for (int gap = n / 2; gap > 0; gap /= 2) {
        
        for (int i = gap; i < n; i++) {
            int temp = arr[i];
            int j;

            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap){
                 arr[j] = arr[j - gap];
            }
                
            arr[j] = temp;
        }
    }
}

void printArray(const vector<int>& arr) {
    for (int num : arr)
        cout << num << " ";
    cout << endl;
}


int main() {
    vector<int> data = {45, 23, 12, 89, 34, 67, 10, 5, 76};

    cout << "Original array:\n";
    printArray(data);

    shellSort(data);

    cout << "\nSorted array:\n";
    printArray(data);

    return 0;
}