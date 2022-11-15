#include<bits/stdc++.h>
using namespace std;

void findAllSubstringsPossible(string str,int len){

    //Loop for every length of substring
    for(int length = 1;length<=len;length++)
    {

     //loop to find the valid start point of string 
        for(int start = 0;start <= len-length;start++)
            {
                //Set up the end point for substring 
                int end = start + length -1;

                //Loop to print all possible string for given length
                for(int k = start; k<=end;k++)
                    cout<<str[k];
                cout<<endl;
            }   
        
    }
}

int main(){

    string str = "Hello";
    findAllSubstringsPossible(str,str.length());
    return 0;
}