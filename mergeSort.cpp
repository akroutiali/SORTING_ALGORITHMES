#include <iostream>

using namespace std;
/*
2 1 3 4 

m=1

2 1                 3  4

m=0                    

merge sort :use divide and conquor approch :
Algorithme:
start with s=0 and end =size of array-1
calculate m=(s+end)/2 
-call the function updating the start and the end 
mergesort(s,m);
merge sort(m+1,end)
repeat untill the start>=end 

-in the combine call the function mergehelper(tab [],start,m,end)to sort the arry part evry time.
*/

void mergehelper(int tab [],int start,int m,int end)
{
    int i=start;
    int j=m+1;
    int k=start;
    int t[end+1];
    while(i<=m && j<=end)
    {
        if(tab[i]<tab[j])
        {
            t[k]=tab[i];
            i++;
            k++;
        }
        else if(tab[i]>tab[j])
        {
            t[k]=tab[j];
            k++;
            j++;
        }
        
    }
    while(i<=m || j<=end)
    {
        if(i<=m)
        {
            
            t[k]=tab[i];
            k++;
            i++;
        }
        if(j<=end)
        {
            t[k]=tab[j];
            k++;
            j++;
        }
    }

    for(int l=start;l<=end;l++)
    {
        tab[l]=t[l];
    }
}

void  mergesort(int tab [],int start,int end)
{
    if(start>=end)
    return ;
        int m=(start+end)/2;
        mergesort(tab,start,m);
        mergesort(tab,m+1,end);
        
        mergehelper(tab,start,m,end);
    
}
int main()
{
int tab[]={0,5,4,1,2};

mergesort(tab,0,4);
for(int i=0;i<5;i++)
{
    cout<<tab[i]<<endl;
}

    return 0;
}

