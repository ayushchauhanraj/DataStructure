#include <bits/stdc++.h>
using namespace std;
stack<int> st;
int main() {
	int t;
	cin>>t;
	while(t--){
	    long long int n;
	    cin>>n;

	    long long int arr[n],arr1[n];
	    for(long long int i=0;i<n;i++){
	        cin>>arr[i];
	        arr1[i]=arr[i];
	    }
	   for(int i=0;i<n;i++){
	       if(st.empty()){
	           st.push(i);
	       }else{
	           while(st.empty()==false && arr[st.top()]<arr[i]){
	               arr1[st.top()]=arr[i];
	               st.pop();

	           }
	           st.push(i);
	       }
	   }
	   while(!st.empty()){

	       st.pop();
	   }
	  for(long long int i=0;i<n;i++){
	      if(arr[i]==arr1[i]){
	          cout<<"-1"<<" ";
	      }else{
	          cout<<arr1[i]<<" ";
	      }
	  }

	    cout<<endl;
	}
	return 0;
}
