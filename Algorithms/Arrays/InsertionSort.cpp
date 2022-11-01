//Insertion Sort Algo
//1.Start from 1st index(key)
//2.Compare elements before it
//3.If greater then right shift 
//4.Swwap the value where comparison results false
//5.Swap the positon with the key element
#include<iostream>
using namespace std;
class InsertionSort{
    public:
        void Sort(int ar[],int n)
        {
            int key,j;
            for(int i =1;i<n;i++)
                {
                    key = ar[i];//Key element 
                    j= i-1;//Compare with elements before key
                    while(j>=0 && ar[j]>key)
                        {
                            ar[j+1] = ar[j];//Right shift elements till element smaller than key
                            j--;
                        }
                    ar[j+1] = key;//swap the key element
                }
            
            for(int i =0;i<n;i++)
                cout<<ar[i]<<" ";
        }
};

int main(){

    int ar[]={3,9,4,1,2};
    InsertionSort insert;
    insert.Sort(ar,5);
}