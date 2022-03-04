#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] ={-1,-3,-2};
    // int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+3);
    for(int i=0;i<3;i++){
        cout<<arr[i];
    }
    return 0;
}