//Selection sort Algo:
//1.Select an element
//2.Find minimum element
//3.Swap with the minimum
//Repeat the steps from 1 to 3 
#include<iostream>
using namespace std;
class SelectionSort{

public:
     void Sort(int arr[],int n){
        int min;
        for(int i =0;i<n-1;i++)
            {
                min =i;//1.Select element
                for(int j=i+1;j<n;j++)
                {
                    if(arr[j]<arr[min])//2.Check minimum
                        min = j;
                }
                swap(arr[i],arr[min]);//Swap minimum with element
            }
        
        for(int i =0;i<n;i++)
            cout<<arr[i]<<" ";
     } 
};

int main(){
    int a[]={3,9,4,1,2};
    SelectionSort st;
    st.Sort(a,5);   
}   