#include<bits/stdc++.h>
using namespace std;

void binary(int k,int num,int *bin){

    int i=0;
    while(num>0){
        bin[i] =num%2;
        num=num/2;
        i++;
    }

    reverse(bin,bin+k);
    for(int i=0;i<k;i++){
        cout<<bin[i];
    }

}
int findxor(int k,int a,int b){
    int arr1[k],arr2[k];
    binary(k,a,arr1);
    binary(k,b,arr2);

    // for(int i=0;i<k;i++){
    //     cout<<arr1[i];
    // }
    // for(int i=0;i<k;i++){
    //     cout<<arr2[i];
    // }
    


}

int main()
{
    int k;
    int A,B;
    cin>>k>>A>>B;
    cout<<findxor(k,A,B);
    return 0;
}