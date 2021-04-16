#include<iostream>
using namespace std;

class stackUsingArray{
    int *data;
    int nextindex;
    int maxspace;
    public:
    stackUsingArray(){
        data = new int[4];
        nextindex=0;
        maxspace=4;
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
            int *newdata=new int[2*maxspace];
            
            for(int i=0;i<nextindex;i++){
                newdata[i]=data[i];
            }
            maxspace=2*nextindex;
            delete []data;
            data=newdata;
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
    stackUsingArray s1;
    s1.push(15);
    s1.push(16);
    s1.push(17);
    s1.push(18);
    s1.push(19);
    s1.push(20);
    

    
    
     cout<<s1.isEmpty()<<endl;
     cout<<s1.top()<<endl;
     cout<<s1.pop()<<endl;
     cout<<s1.top()<<endl;
     cout<<s1.pop()<<endl;
     cout<<s1.top()<<endl;
     cout<<s1.pop()<<endl;
     cout<<s1.top()<<endl;
     cout<<s1.pop()<<endl;
     cout<<s1.top()<<endl;
     cout<<s1.pop()<<endl;
    cout<<s1.size()<<endl;
}
