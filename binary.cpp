//Program for BInary Search
#include <iostream>
#include <stdio.h> 
#include <stdlib.h> 
#include <math.h>
#define SIZE 25
int L[SIZE];
using namespace std;

  void binary_search(int K, int low, int high) 

  {  
      int mid=0;
      if (low > high)  
        cout<<"Searching Key NOT Found\n\n"; 
      else       
      { 
       mid = ceil((low+high)/2);
       if (K==L[mid]) cout<<"\t\tKey found at the position: \t"<<mid<<"\n\n";
       else
       if(K < L[mid])  binary_search(K, low, mid-1);    /* search for key K in L[low:mid-1]*/
       else 
       if(K > L[mid])binary_search(K, mid+1, high);    /* search for  key K in L[mid+1: high]*/
      } 
  }

int main()      
{
   int i, key;
   int n=0;
   cout<<"Enter the no.of elements:";
   cin>>n;
   cout<<"Input ordered list of elements\n";
   for (i=0; i<n; i++)
     cin>>L[i];
    cout<<"Enter search key!\n"; 
    cin>>key; 
    binary_search(key, 0,n-1); 
} 