#include<bits/stdc++.h>
using namespace std;

//Find Longest Prefix Suffix array 
int* LPS(char *pat,int m){  
    
    int lps[m];
    int i=0,j = 0;
    lps[0] = 0;

    while(i<m)
    {
        //If matches then increment j;
        if(pat[i]==pat[j])
            {
                j++;
                lps[i] = j;
                i++;
            }
        else
        {
            //1. if j > 0 means we have traversed some length  and shift the iterator to 0 again.
            if(j!=0)
                j = lps[j-1];
            else
                {
                    lps[i]=0;
                    i++;
                }
        }
    }

    return lps;
}

//Find index from where the substring starts usig KMP
void KMPALGO(char *txt,char *pat,int n,int m){

    int* lps = LPS(pat,m);

    int i =0,j=0;
    while(n-i>=m-j)
    {
        if(txt[i]==pat[j])
            {
                i++;j++;
            }
        
        if(j==m)
            {cout<<"Found at "<<i-j;
            j = lps[j-1];
            }
        else if(i<n && pat[j]!=txt[i]){
            if(j!=0)
                j = lps[j-1];
            else
                i++;
        }
    }

}

int main(){
    char text[] = "ABABDABABC";
    char pattern[] = "ABABAC";
    KMPALGO(text,pattern,strlen(text),strlen(pattern));
    return 0;
}