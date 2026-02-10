#include <iostream>
#include <chrono>
#include <algorithm>

using namespace std;
using namespace std::chrono;

int Partition(int a[], int m, int p) {
    int v = a[m]; 
    int i = m;
    int j = p;

    do {
        do { i = i + 1; } while (a[i] <= v);
        do { j = j - 1; } while (a[j] > v);
        if (i < j) swap(a[i], a[j]);
    } while (i <= j);

    a[m] = a[j];
    a[j] = v;
    return j;
}

void Quick(int a[], int low, int high) {
    if (low < high) {
        int j = Partition(a, low, high + 1);
        Quick(a, low, j - 1);
        Quick(a, j + 1, high);
    }
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    const int RUNS = 100;
    long long totalBest = 0, totalWorst = 0;

    int* arr = new int[n + 1];
    arr[n] = 999999; 

    //  BEST / AVERAGE CASE
    for (int r = 0; r < RUNS; r++) {
        for (int k = 0; k < n; k++) arr[k] = rand() % 10000;
        
        auto start = high_resolution_clock::now();
        Quick(arr, 0, n - 1);
        auto stop = high_resolution_clock::now();
        totalBest += duration_cast<microseconds>(stop - start).count();
    }

    //  WORST CASE 
    for (int r = 0; r < RUNS; r++) {
        for (int k = 0; k < n; k++) arr[k] = k; 
        
        auto start = high_resolution_clock::now();
        Quick(arr, 0, n - 1);
        auto stop = high_resolution_clock::now();
        totalWorst += duration_cast<microseconds>(stop - start).count();
    }

    cout << "Average Time : " << (double)totalBest / RUNS << " us" << endl;
    cout << "Worst Case Time : " << (double)totalWorst / RUNS << " us" << endl;

    delete[] arr;
    return 0;
}