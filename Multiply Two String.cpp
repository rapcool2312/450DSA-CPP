// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
 

 // } Driver Code Ends
class Solution{
  public:
    /*You are required to complete below function */
    string multiplyStrings(string s1, string s2) {
       //Your code here
       
       //handle edge-case where the product is 0
       if(s1 == "0" || s2 == "0"){
           return "0";
       }
       
       if(s2.size() < s1.size()){
           swap(s1,s2);
       }
       
       bool neg = false;
       if(s1[0] == '-'){
           neg = !neg;
           s1 = s1.substr(1);
       }
       
       if(s2[0] == '-'){
           neg = !neg;
           s2 = s2.substr(1);
       }
       
       int n1=s1.size();
       int n2=s2.size();
       
       int ans[n1+n2] = {0};
       
       reverse(s1.begin(),s1.end());
       reverse(s2.begin(),s2.end());
       
        //build the number by multiplying one digit at the time
       for(int i=0;i<n1;i++){
           for(int j=0;j<n2;j++){
               int mul= (int)(s1[i] -'0') * (int)(s2[j]-'0');
               
               int val = mul+ans[i+j];
               ans[i+j] = val%10;
               ans[i+j+1] += val/10;
           }
       }
       
       //transforming the vector to a string
       string res ="";
       for(auto el: ans){
           res += to_string(el);
       }
       reverse(res.begin(),res.end());
       int i=0;
       while(res[i] == '0'){
           i++;
       }
       res = res.substr(i,n1+n2-i);
       if(neg){
           res = '-' + res;
       }
       return res;
    }

};

// { Driver Code Starts.
 
int main() {
     
    int t;
    cin>>t;
    while(t--)
    {
    	string a;
    	string b;
    	cin>>a>>b;
    	Solution obj;
    	cout<<obj.multiplyStrings(a,b)<<endl;
    }
     
}  // } Driver Code Ends