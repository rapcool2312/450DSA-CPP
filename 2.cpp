 //Method 1

// { Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
    
        int n = r+1;
        sort(arr,arr+n);
        return arr[k-1];
    }
    
};
    



// { Driver Code Starts.
 
int main()
{
    int test_case;
    cin>>test_case;
    while(test_case--)
    {
        int number_of_elements;
        cin>>number_of_elements;
        int a[number_of_elements];
        
        for(int i=0;i<number_of_elements;i++)
            cin>>a[i];
            
        int k;
        cin>>k;
        Solution ob;
        cout<<ob.kthSmallest(a, 0, number_of_elements-1, k)<<endl;
    }
    return 0;
}  // } Driver Code Ends


        // Method 2
//int partition(int arr[], int l, int r)
// {

// 	int pivot = arr[l];

// 	int count = 0;
// 	for (int i = l + 1; i <= r; i++) {
// 		if (arr[i] <= pivot)
// 			count++;
// 	}

// 	// Giving pivot element its correct position
// 	int pivotIndex = l + count;
// 	swap(arr[pivotIndex], arr[l]);

// 	// Sorting left and right parts of the pivot element
// 	int i = l, j = r;

// 	while (i < pivotIndex && j > pivotIndex) {

// 		while (arr[i] <= pivot) {
// 			i++;
// 		}

// 		while (arr[j] > pivot) {
// 			j--;
// 		}

// 		if (i < pivotIndex && j > pivotIndex) {
// 			swap(arr[i++], arr[j--]);
// 		}
// 	}

// 	return pivotIndex;
// }

// void quickSort(int arr[], int l, int r)
// {

// 	// base case
// 	if (l >= r)
// 		return;

// 	// partitioning the array
// 	int p = partition(arr, l, r);

// 	// Sorting the left part
// 	quickSort(arr, l, p - 1);

// 	// Sorting the right part
// 	quickSort(arr, p + 1, r);
// }















     