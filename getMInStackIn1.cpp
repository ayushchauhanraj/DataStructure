#include<bits/stdc++.h>
using namespace std;
stack<int>st;


int main(){
    int min;
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
    if(st.empty()){
        min=ele;
        st.push(ele);
    }else{
    if(min>ele){
        st.push(2*ele-min);
        min=ele;
    }else{
    st.push(ele);
    }
    }


    break;
case 2:
    if(!st.empty()){
            if(st.top()<min){
                min=2*min-st.top();
            }
        st.pop();

    cout<<"Element POPED"<<endl;
    }else{
    cout<<"stack is empty"<<endl;
    }

    break;
case 3:
    if(!st.empty())
    if(min>st.top()){
        cout<<"top--->"<<min<<endl;
    }else{
    cout<<"top:::"<<st.top()<<endl<<endl;
    }

    break;
case 4:
    cout<<"min:::"<<min<<endl;
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
