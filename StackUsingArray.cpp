#include<iostream>
using namespace std;

class stackUsingArray{
    int *data;
    int nextindex;
    int maxspace;
    public:
    stackUsingArray(int totalsize){
        data = new int[totalsize];
        nextindex=0;
        maxspace=totalsize;
    }

    int size(){
        return nextindex;
    }
    bool isEmpty(){
        if(nextindex==0){
            return true;
        }
        else{
            return false;
        }
    }
    void push(int element){
        if(nextindex==maxspace){
            cout<<"space is full"<<endl;
        }
        else{
            data[nextindex]=element;
            nextindex++;
        }
    }
    int pop(){
        if (nextindex==0){
            return INT16_MIN;
        }
        else{
            nextindex--;
            return data[nextindex];
        }

    }
    int top(){
        if (nextindex==0){
            return INT16_MIN;
        }
        else{
            return data[nextindex-1];
        }

    }

};

int main(){
    stackUsingArray s1(5);
    s1.push(10);
    s1.push(20);
    s1.push(30);
    cout<<s1.top()<<endl;
    cout<<s1.pop()<<endl;
    s1.push(40);
    cout<<s1.pop()<<endl;
    cout<<s1.pop()<<endl;
    cout<<s1.pop()<<endl;
    cout<<s1.pop()<<endl;
    s1.push(3);
    cout<<s1.isEmpty()<<endl;
    cout<<s1.top()<<endl;
}
