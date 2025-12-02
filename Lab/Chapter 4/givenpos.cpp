//insert in the given position
#include <iostream>
using namespace std;
int main()
{
    int LA[10]={10,20,30,40,50};
    int k=5;
    int value,pos;
    cin>>value>>pos;
    for(int i=k;i>=pos;i--)
    {
        LA[i]=LA[i-1];
    }
    LA[pos-1] = value;
    k++;
    for(int i=0;i<k;i++)
    {
        cout<<LA[i]<<" ";
    }

}
