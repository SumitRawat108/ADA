#include <iostream>
#include <cstdlib>   
#include <ctime>    
#include <chrono>    

using namespace std;
using namespace chrono;

int linearSearch(int arr[], int n, int key){
    for (int i = 0; i < n; i++){
        if (arr[i] == key)
            return i;  
    }
    return -1; 
}

int main(){
    int n, key;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    srand(time(0));

    cout << "Array Generated : "<<endl;
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 1000000; 
         //cout << arr[i] << " ";
    }

    cout << "Enter element to search: ";
    cin >> key;

    auto start = high_resolution_clock::now();
    for (int i = 0; i < 100000; i++)
    {
         linearSearch(arr, n, key);
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(stop - start);
    
    cout << "Time taken: " << duration.count() << " milliseconds" << endl;

    return 0;
}
