#include <stdio.h>
int main(void)
{
    int const n=10;
    int arrayp[20]={0};
    for(int  i=2;i<=n;i++)

    {
        const int starting_point =0;
        arrayp[0]=starting_point;
        arrayp[1]=1;
        arrayp[i]=arrayp[i-1]+arrayp[i-2];
        printf("%d\n",arrayp[i]);


    }


    return 0;
}
