#include <iostream>
#include <chrono> 
#include<cstdlib> 
#include<random>
using namespace std;
using namespace chrono;

int bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++){
        for (int j = 0; j < n - i - 1; j++){
            if (arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}


int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    srand(time(0));

    cout << "Array Generated : ";
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 1000000; 
        //cout << arr[i] << " ";
    }

    auto start = high_resolution_clock::now();
    int result = bubbleSort(arr, n);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(stop - start);

    cout << "\nTime taken to sort "<<n<<" elements using Bubble Sort: " 
         << duration.count() << " milliseconds" << endl;

    return 0;
}