// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // coode here 
        sort(a,a+n);
    }
    
};

// { Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

  // } Driver Code Ends



//             //Methode 2

// // { Driver Code Starts
// #include<bits/stdc++.h>
// using namespace std;



//  // } Driver Code Ends


// int count(int b[],int n,int c){
//     int m = 0;
//     for(int i=0;i<n;i++){
//         if(b[i] == c){
//             m++;
//         }
//     }
//     return m;
    
// }
// class Solution

// {
//     public:
//     void sort012(int a[], int n)
//     {
//         // coode here 
//         // sort(a,a+n);
//         int c0,c1,c2;
//         c0 = count(a,n,0);
//         c1 = count(a,n,1);
//         c2 = count(a,n,2);
        
//         int k = 0;
//         while(c0--){
//             a[k++] = 0;
//         }
//         while(c1--){
//             a[k++] = 1;
//         }
//         while(c2--){
//             a[k++] = 2;
//         }
        
//     }
    
// };

// // { Driver Code Starts.
// int main() {

//     int t;
//     cin >> t;

//     while(t--){
//         int n;
//         cin >>n;
//         int a[n];
//         for(int i=0;i<n;i++){
//             cin >> a[i];
//         }

//         Solution ob;
//         ob.sort012(a, n);

//         for(int i=0;i<n;i++){
//             cout << a[i]  << " ";
//         }

//         cout << endl;
        
        
//     }
//     return 0;
// }

//   // } Driver Code Ends