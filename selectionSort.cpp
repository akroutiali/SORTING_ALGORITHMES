#include <iostream>

using namespace std;

/*
 * divide the array into two part first part with size 1 and the second with size the rest of the array find the minimun variable in the second part and check if this variable inferior of the element in *the first part if is the case swap
 */
void selectionSort(int tab[],int n)
{
    int start=0;
    while(start<n)
    {
        int index=start;
        for(int i=start+1;i<n;i++)
        {
            if(tab[index]>tab[i])
            {
                index=i;
            }
        }
        swap(tab[start],tab[index]);
        start++;
    }
}
int main()
{
int tab[]={0,5,4,1,2};

//mergesort(tab,0,4);
selectionSort(tab,5);
for(int i=0;i<5;i++)
{
    cout<<tab[i]<<endl;
}

    return 0;
}

