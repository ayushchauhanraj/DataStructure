#include<bits/stdc++.h>
using namespace std;
stack<int>st;
int main(){
    int t;
    cin>>t;
    string str;

    while(t--){
        cin>>str;
        int count=0;
        st.push(-1);
        
        for(int i=0;i<str.length();i++){
            if(str[i]=='('){
            st.push(i);
            }else{
                
                st.pop();
                
                if(!st.empty()){
                    count=max(count,i-st.top());
                }else{
                    st.push(i);
                }
                
                
            }
          
        }
        cout<<count<<endl;
        

    }
return 0;
}
