The idea is: We will traverse the first array and compare it with the first element of the second array. If the first element of the second array is smaller than the first array, we will swap and then sort the second array. 

First, we have to traverse array1 and then compare it with the first element of array2. 
If it is less than array1 then we swap both.
 
After swapping we are going to sort the array2 again so that the smallest element of the array2 
comes at the first position and we can again swap with the array1
To sort the array2 we will store the first element of array2 in a variable and left shift all the elements and store
the first element in array2 in the last.

#include <bits/stdc++.h>
using namespace std;
 
void mergeArray(int arr1[], int arr2[],
                int n, int m)
{
     
    // Now traverse the array1 and if
    // arr2 first element
    // is less than arr1 then swap
    for(int i = 0; i < n; i++)
    {
        if (arr1[i] > arr2[0])
        {
             
            // Swap
            int temp = arr1[i];
            arr1[i] = arr2[0];
            arr2[0] = temp;
 
            // After swapping we have to sort the array2
            // again so that it can be again swap with
            // arr1
 
            // We will store the firstElement of array2
            // and left shift all the element and store
            // the firstElement in arr2[k-1]
            int firstElement = arr2[0];
 
            int k;
             
            for(k = 1;
                k < m && arr2[k] < firstElement;
                k++)
            {
                arr2[k - 1] = arr2[k];
            }
            arr2[k - 1] = firstElement;
        }
    }
     
    // Read the arr1
    for(int i = 0; i < n; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;
 
    // Read the arr2
    for(int i = 0; i < m; i++)
    {
        cout << arr2[i] << " ";
    }
}
 
// Driver Code
int main()
{
    int arr1[] = { 1, 3, 5, 7 };
    int arr2[] = { 0, 2, 6, 8, 9 };
    int n = arr1.length, m = arr2.length;
     
    mergeArray(arr1, arr2, n, m);
}
 
// This code is contributed by yashbeersingh42
Output
0 1 2 3 
5 6 7 8 9
Time Complexity: O(n*m)
Space Complexity: O(1)
