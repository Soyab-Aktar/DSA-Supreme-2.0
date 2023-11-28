#include <iostream>
using namespace std;
void merge(int arr[], int start, int end)
{
    int mid = (start + end) / 2;

    int lenleft = mid - start + 1;
    int lenright = end - mid;

    // create left and right array

    int *left = new int[lenleft];
    int *right = new int[lenright];

    int k = start; // copy values from original array to left array

    for (int i = 0; i < lenleft; i++)
    {
        left[i] = arr[k];
        k++;
    }

    k = mid + 1;

    for (int i = 0; i < lenright; i++)
    {
        right[i] = arr[k];
        k++;
    }

    // actual merge logic here
    // left array is already sorted
    // right array is already sorted

    int leftIndex = 0;
    int rightIndex = 0;
    // yahi pr galti karte h log
    int mainArrayIndex = start;

    while (leftIndex < lenleft && rightIndex < lenright)
    {

        if (left[leftIndex] < right[rightIndex])
        {
            arr[mainArrayIndex] = left[leftIndex];
            mainArrayIndex++;
            leftIndex++;
        }
        else
        {
            arr[mainArrayIndex] = right[rightIndex];
            mainArrayIndex++;
            rightIndex++;
        }
    }

    // 2 more cases

    // 1 case -> left array exhaust but right array me element abhi bhi bache hai
    while (rightIndex < lenright)
    {
        arr[mainArrayIndex] = right[rightIndex];
        mainArrayIndex++;
        rightIndex++;
    }

    // 2nd case -> rigght array exhaust but left array me element abhi bhi bache hai
    while (leftIndex < lenleft)
    {
        arr[mainArrayIndex] = left[leftIndex];
        mainArrayIndex++;
        leftIndex++;
    }
    // 1 more step pending
    delete[] left;
    delete[] right;
}
void mergeSort(int arr[], int start, int end)
{
    // in this function its break this array to 2 sorted array
    if (start >= end)
    {
        return;
    }
    int mid = (start + end) / 2;
    // recursive call for left part
    mergeSort(arr, start, mid);
    // recursive call for right part
    mergeSort(arr, mid + 1, end);

    merge(arr, start, end); // for merge array
}
int main()
{
    int arr[] = {2, 1, 6, 9, 4, 5};
    int size = 6;
    int start = 0;
    int end = size - 1;

    cout << "Before merge sort: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    mergeSort(arr, start, end);

    cout << "After merge sort: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}