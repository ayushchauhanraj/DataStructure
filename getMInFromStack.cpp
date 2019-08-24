#include<bits/stdc++.h>
using namespace std;
stack<int>st;
stack<int>st1;
int main(){
while(1){
cout<<"1 .push Elements"<<endl;
cout<<"2 .pop Elements"<<endl;
cout<<"3 .Top Elements"<<endl;
cout<<"4 .minimum Elements"<<endl;
cout<<"5 .Exit"<<endl;
cout<<"Enter your choice"<<endl;
int c;
cin>>c;
switch(c){
case 1:
    cout<<"Enter the element to push: "<<endl;
    int ele;
    cin>>ele;
    st.push(ele);
    if(st1.empty()){
        st1.push(ele);
    }else{
        if(ele<st1.top()){
            st1.push(ele);

        }else{
        st1.push(st1.top());
        }
    }
    break;
case 2:
    if(!st.empty()){
        st.pop();
    st1.pop();
    cout<<"Element POPED"<<endl;
    }else{
    cout<<"stack is empty"<<endl;
    }

    break;

case 3:
    if(!st.empty())
        cout<<st.top()<<endl;
    break;
case 4:
    if(!st1.empty())
       cout<<st1.top()<<endl;
    break;
case 5:
    exit(0);
default:
    cout<<"oops you type wrong choice"<<endl;
    break;
}
}
return 0;
}
