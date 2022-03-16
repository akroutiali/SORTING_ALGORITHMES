#include <iostream>

using namespace std;

/*
 *this algorithme  consist a compare two consecutif element of the array and swap the elment if the first element is inferior of second untill we complete the sorting  
 *time Complexiy O(n^2)
 *Space Complexity O(1)
 */
void bubbleSort(int tab[],int n)
{
	int start=0;
	while(start<n)
   {
        for(int i=0;i<n-start-1;i++)
        {
            if(tab[i]>tab[i+1])
            swap(tab[i+1],tab[i]);
        }
        start++;
  }
 }
    
int main()
{
int tab[]={0,5,4,1,2};

bubbleSort(tab,5);
for(int i=0;i<5;i++)
{
    cout<<tab[i]<<endl;
}

    return 0;
}
