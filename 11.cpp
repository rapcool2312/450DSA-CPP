// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	void merge(int arr1[], int arr2[], int n, int m) {
	    // code here
	    
	    
	   // // Method 1
	   // int i=0;
	    
	   // // while loop till last element of arr1(sorted) is greater than
    //       // first element of arr2(sorted)
	   // while(arr1[n-1] > arr2[0]){
	   //     if(arr1[i] > arr2[0]){
	            
	   //         // swap arr1[i] with first element
    //             // of arr2 and sorting the updated
    //             // arr2(arr1 is already sorted)
	   //         swap(arr1[i],arr2[0]);
	   //         sort(arr2,arr2+m);
	   //     }
	   //      i++;
	   // }
	    
	    //Method 2
	    
	   // int i=0,j=0,k=n-1;
	    
	   //// Until i less than equal to k
	   //// or j is less than m
	   
	   //while(i < n && j<m) {
	   //    if(arr1[i] > arr2[j]){
	   //        swap(arr1[k],arr2[j]);
	   //        k--;
	   //        j++;
	   //    }
	   //    else{
	   //        i++;
	   //    }
	   //}
	   //sort(arr1,arr1+n);
	   //sort(arr2,arr2+m);
	   
	   //Method 3
	   int i=n-1,j=0;
	   while(i>=0 && j<m){
	       if(arr1[i] > arr2[j]){
	           swap(arr1[i],arr2[j]);
	           i--;
	           j++;
	       }
	       else{
	           break;
	       }
	       
	   }
	   sort(arr1,arr1+n);
	   sort(arr2,arr2+m);
	   
	}
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, i;
        cin >> n >> m;
        int arr1[n], arr2[m];
        for (i = 0; i < n; i++) {
            cin >> arr1[i];
        }
        for (i = 0; i < m; i++) {
            cin >> arr2[i];
        }
        Solution ob;
        ob.merge(arr1, arr2, n, m);
        for (i = 0; i < n; i++) {
            cout << arr1[i] << " ";
        }
        for (i = 0; i < m; i++) {
            cout << arr2[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends