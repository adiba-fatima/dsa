#include <iostream>
using namespace std;
void bubblesort(int LA[],int n)
{
    for(int i=0; i<n-1;i++)
    {
        for(int j=0; j<n-i-1;j++)
        {
            if(LA[j]>LA[j+1])
            {
                swap(LA[j],LA[j+1]);
                
            }
        }
    }
}
void printarray(int LA[],int n)
{
    for(int i=0; i<n;i++)
    {
        cout<<LA[i]<<" ";
    }
}
int main()
{
    int LA[]={64,34,25,12,22,11,90};
    int n=sizeof(LA)/sizeof(LA[0]);
    bubblesort(LA,n);
    cout<<"Sorted array: \n";
    printarray(LA,n);
    return 0;
}