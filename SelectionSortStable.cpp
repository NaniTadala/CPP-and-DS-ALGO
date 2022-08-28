#include <iostream>
using namespace std;
void printArray(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
}
void selectionSort(int arr[],int n)
{
    for (int i = 0; i < n-1; i++)
    {
        int minIndex = i;
        for (int j = i+1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        
        
        int key = arr[minIndex]; // storing minimum element
        // Pushing every element after i one step forward.
        while (minIndex > i)
        {
            arr[minIndex] = arr[minIndex-1];
            minIndex--;
        }
        arr[i] = key; // Then inserting minimum element at starting index. 
    
    }
}

int main()
{
    int arr[6] = {4,5,3,2,4,1};
    int n = 6;
    selectionSort(arr,n);
    printArray(arr,n);
}