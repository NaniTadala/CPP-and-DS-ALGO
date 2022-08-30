#include <iostream>
using namespace std;

void printArray(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
}

void bubbleSort(int arr[],int n)
{
    for (int i = 0; i < n-1; i++)
    // For Round 1 to n-1
    {
        bool swapped = false; // Optimizatioin in case array is already sorted
        
        for (int j = 0; j < n-i-1; j++)
        // Traversing array upto n-i-1 as i'th largest element will be sorted in i'th round.
        {
            if (arr[j] > arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
            
        }
        if (swapped == false)
        {
            break;
        }
        
        
    }
    
}

int main() 
{
    int arr[6] = {1,2,3,4,5,6};
    bubbleSort(arr,6);
    printArray(arr,6);
    return 0;
}