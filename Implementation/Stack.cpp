//Stack implementation using array
#include<iostream>
using namespace std;
class Stack{

    public:
    int size;
    int top;
    int* arr;
    Stack(int size)
    {
        top =-1;
        arr = new int[this->size = size];
    } 
    bool isEmpty(){
        return top==-1;
    }   
    bool isFull()
    {
        return top == size;
    }
    void push(int element){
        
        if(isFull())
            cout<<"Stack Full"<<endl;return;
        
        arr[++top] = element;
        cout<<"Pushed: "<<element<<endl;
    }
    void pop(){
        
        if(isEmpty())
            cout<<"Stack empty"<<endl;return;
        
        cout<<"Poped: "<<arr[top];
        --top;
    }
    void peek(){
        if(isEmpty())
            cout<<"Stack empty"<<endl;return;
        cout<<"Element at top: "<<arr[top]<<endl;
    }
};// namespace std;

int main(){

    Stack st(5);
    st.peek();//Top element
    st.push(1);
    st.push(2);
    st.peek();
    st.pop();
    st.pop();
    st.peek();
}