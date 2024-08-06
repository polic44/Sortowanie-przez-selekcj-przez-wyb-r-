#include <iostream>

using namespace std;

int main()
{
    int i,j,k,temp;
    const int N=7;

     int tab[7]={12,45,23,88,17,3,33};


 for(i=0;i<N-1;i++)
 {
     int min=i;
for(j=i+1;j<N;j++) {
     if(tab[j]<=tab[min])
     {

         min=j;

     }
 }
 if(min!=i)
 {
     temp = tab[i];
    tab[i] = tab[min];
    tab[min] = temp;
 }
 }
 for(i=0;i<N;i++)
 {

     cout<<tab[i]<<" ";
 }
     return 0;

}

