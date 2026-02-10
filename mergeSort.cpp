#include <iostream>
#include <chrono>
#include <cstdlib>

using namespace std;
using namespace chrono;

// Merge function
void merge(int arr[], int low, int mid, int high) {
    int n1 = mid - low + 1;
    int n2 = high - mid;

    int L[n1], R[n2];

    for (int i = 0; i < n1; i++)
        L[i] = arr[low + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = low;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j])
            arr[k++] = L[i++];
        else
            arr[k++] = R[j++];
    }

    while (i < n1)
        arr[k++] = L[i++];

    while (j < n2)
        arr[k++] = R[j++];
}

// Merge Sort function
void mergeSort(int arr[], int low, int high) {
    if (low < high) {
        int mid = low + (high - low) / 2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    const int RUNS = 1000;
    int arr[n];

    srand(time(0));

   // BEST / AVERAGE CASE
    for (int i = 0; i < n; i++)
        arr[i] = rand() % 100000;   

    auto start = high_resolution_clock::now();

    for (int i = 0; i < RUNS; i++) {
        mergeSort(arr, 0, n - 1);
    }

    auto stop = high_resolution_clock::now();

    auto bestTime =
        duration_cast<microseconds>(stop - start).count();

    cout << "Best/Average case:\n";
    cout << "Average time: " << (double)bestTime / RUNS<< " microseconds\n";

    return 0;
}
