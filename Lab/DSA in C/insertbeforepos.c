#include <stdio.h>
int main()
{
    int LA[]={10,20,30,40,50};
    int k=5;
    int pos,value;
    scanf("%d%d",&pos,&value);
    int i=k;
    while(i>=pos-1)
    {
        LA[i]=LA[i-1];
        i--;
    }
    LA[pos-1]=value;
    k++;
    i=1;
    while(i<=k)
    {
        printf("%d ",LA[i-1]);
        i++;
    }
}