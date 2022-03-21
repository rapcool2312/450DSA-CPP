// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n){
       if(n <= 1 || arr[0]==0)
            return -1;
        
        int currMaxReach = arr[0];
        int stepsCount = arr[0];
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n){
       if(n <= 1 || arr[0]==0)
            return -1;
        
        int currMaxReach = arr[0];
        int stepsCount = arr[0];
        int jump =0;
        
        for(int start=1; start < n-1; start++){
            
            if(arr[currMaxReach] == 0)
                return -1;
            currMaxReach = max(currMaxReach, start + arr[start]);
            stepsCount = stepsCount -1;
            if(stepsCount == 0){
                jump += 1;
                stepsCount = currMaxReach - start;
            }
        }
        
        return jump+1;
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr,n)<<endl;
    }
    return 0;
}