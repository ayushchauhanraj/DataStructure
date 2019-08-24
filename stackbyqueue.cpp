#include<bits/stdc++.h>
using namespace std;


class Stack{
queue<int>qu;
public:
    void push(int val){
        qu.push(val);
        for(int i=0;i<qu.size()-1;i++){
           qu.push(qu.front());
            qu.pop();
         }

    }
    void popele(){
    if(qu.empty()){
        cout<<"Empty"<<endl;
    }else{


      qu.pop();
    }
    }
    int top(){
    return (qu.empty())? -1 : qu.front();
    }


};
int main(){

 Stack s;
    s.push(30);
    s.push(90);
    s.push(20);
    s.push(10);
    cout << s.top() << endl;
    s.popele();
    s.push(60);
    s.popele();
    s.popele();
    cout << s.top() << endl;

return 0;

}
