//Counting Sort Algo:(Applicable only with the fixed set of Input(smaller size))
//1.Find the occurence of each element
//2.Save occurence in in an array of lenth of maximum element in array
//3.Loop through the array and print the element with their respective occurence

#include<iostream>
using namespace std;
class CountingSort{

    public:
        void Sort(int ar[],int n,int max){
            //Extra space for saving occurence
            int arr1[max+1]={0};
            
            //Saving occurence for each element
            for(int i =0;i<n;i++)
                {
                    if(arr1[ar[i]]!=0)
                        arr1[ar[i]]++;
                    else    
                        arr1[ar[i]] = 1;
                }

            //Looping to print each element as per their occurence
            for(int i =0;i<max+1;i++)
                if(arr1[i]!=0)
                    while(arr1[i]>0)
                        {
                            cout<<i<<" ";
                            arr1[i]--;
                        }

        }

};

int main(){
    int ar[]={3,3,1,1,2};
    //int ar[]={3,5,6,1,2};
    CountingSort cs;
    cs.Sort(ar,5,9);//Choosing 9 as the array to store the count or occurence of element in array will be of maximum size 9
}

