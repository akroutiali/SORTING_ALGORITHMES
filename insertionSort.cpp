#include <iostream>

using namespace std;
/*insertion sort 
 *
 * start iterating from (1,n)
 * for evry iteration compare the value of element with the sorted array(0,i)if the elment is inferior sort it */

void insertionSort(int tab[],int n)
{
   for(int i=1;i<n;i++)
   {
       int var=tab[i];
       int j=i-1;
       
       while(j>=0 && var<tab[j])
       {
           tab[j+1]=tab[j];
           j--;
           
       }
       tab[j+1]=var;
   }
    
}

int main()
{
int tab[]={0,5,4,1,2};

insertionSort(tab,5);
for(int i=0;i<5;i++)
{
    cout<<tab[i]<<endl;
}

    return 0;
}
