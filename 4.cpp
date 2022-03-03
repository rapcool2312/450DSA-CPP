// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        // Your code goes here
        
        int ans[n];
        int k=0;
        for(int i=0;i<n;i++){
            if(arr[i] > 0){
                ans[k++] = arr[i];
            }
        }
        
        for(int i=0;i<n;i++){
            if(arr[i] < 0){
                ans[k++] = arr[i];
            }
        }
        
        for(int i=0;i<n;i++){
            arr[i] = ans[i];
            }
    }
};

// { Driver Code Starts.
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		ob.segregateElements(a,n);
		
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
		cout<<endl;
	}
}
  // } Driver Code Ends



//         //Method 2

// // { Driver Code Starts
// #include <bits/stdc++.h>
// using namespace std;

//  // } Driver Code Ends
// class Solution{
//     public:
//     void segregateElements(int arr[],int n)
//     {
//         // Your code goes here

//         queue<int> pos;
//         queue<int> neg;
//          for(int i = 0;i<n;i++){
//              if(arr[i] < 0){
//                  neg.push(arr[i]);
//              }
//              else{
//                  pos.push(arr[i]);
//              }
//          }
        
//         int k=0;
//         int ans[n];
//         int pos_size = pos.size();
//         int neg_size = neg.size();
//         for(int i=0;i<pos_size;i++){
//         int &a = pos.front();
//         ans[k++] = a;
//         pos.pop();
//         }
//         for(int i=0;i<neg_size;i++){
//         int &a = neg.front();
//         ans[k++] = a;
//         neg.pop();
//         }
//         for(int i=0;i<n;i++){
//             arr[i] = ans[i];
//         }
         
        
         
    
//     }
// };

// // { Driver Code Starts.
// int main() {
// 	// your code goes here
// 	int t;
// 	cin>>t;
// 	while(t--)
// 	{
// 		int n;
// 		cin>>n;
// 		int a[n];
// 		for(int i=0;i<n;i++)
// 		cin>>a[i];
// 		Solution ob;
// 		ob.segregateElements(a,n);
		
//         for(int i=0;i<n;i++)
//         cout<<a[i]<<" ";
// 		cout<<endl;
// 	}
// }
//   // } Driver Code Ends