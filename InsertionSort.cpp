#include <iostream>
using namespace std;

void printArray(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
}

void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i-1;
        while (j >= 0)
        {
            if (arr[j] > temp)
            {
                arr[j+1] = arr[j]; //Shift
            }
            else
            {
                break;
            }
            j--;
        }
        arr[j+1] = temp;
        
    }
    
}

int main() 
{
    int arr[6] = {6,5,4,3,2,1};
    insertionSort(arr,6);
    printArray(arr,6);
    return 0;
}