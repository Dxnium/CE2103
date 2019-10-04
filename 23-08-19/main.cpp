#include <iostream>


    /* C++ implementation of QuickSort */
#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;

#include <cmath>

void createArr(int max[]){
    for(int i=0;i<100;i++){
        int v1 = rand() % INT_MAX;         // v1 in the range 0 to 99
        max[i]=v1;
    }
}

// A utility function to swap two elements
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

/* This function takes last element as pivot, places
the pivot element at its correct position in sorted
array, and places all smaller (smaller than pivot)
to left of pivot and all greater elements to right
of pivot */
int partition (int arr[], int low, int high)
{
    int pivot = arr[high]; // pivot
    int i = (low - 1); // Index of smaller element

    for (int j = low; j <= high - 1; j++)
    {
        // If current element is smaller than or
        // equal to pivot
        if (arr[j] <= pivot)
        {
            i++; // increment index of smaller element
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

/* The main function that implements QuickSort
arr[] --> Array to be sorted,
low --> Starting index,
high --> Ending index */
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        /* pi is partitioning index, arr[p] is now
        at right place */
        int pi = partition(arr, low, high);

        // Separately sort elements before
        // partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
//***********************************************************************************************
// C++ program to implement recursive Binary Search
#include <iostream>
using namespace std;

// A iterative binary search function. It returns
// location of x in given array arr[l..r] if present,
// otherwise -1
int binarySearch(int arr[], int l, int r, int x)
{
    while (l <= r) {
        int m = l + (r - l) / 2;

        // Check if x is present at mid
        if (arr[m] == x)
            return m;

        // If x greater, ignore left half
        if (arr[m] < x)
            l = m + 1;

            // If x is smaller, ignore right half
        else
            r = m - 1;
    }

    // if we reach here, then element was
    // not present
    return -1;
}
//***********************************************************************************
// Driver Code

int fiboo(int n){
	double phi = (1+ sqrt(5))/2;
	return round(pow(phi,n) / sqrt(5));
}
int main()
{


// //   auto start = high_resolution_clock::now();
//    quickSort(arr, 0, 100000 - 1);
////    auto stop = high_resolution_clock::now();
////    auto duration = duration_cast<microseconds >(stop - start);
//    std::cout<<duration.count()<<" tiempo"<<endl;
//    cout << "Sorted array: \n";
//    printArray(arr, 99);

    int arr[100];
    createArr(arr);
    auto start = high_resolution_clock::now();
   // int result = binarySearch(arr, 0, 99,0);
    fiboo(10);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<nanoseconds>(stop - start);
    std::cout<<duration.count()<<" tiempo"<<endl;

    cout<<fiboo(10)<<endl;
/*
    (result == -1) ? printf("Element is not present in array")
                   : printf("Element is present at index %d",
                            result);
                            */
    return 0;
}


