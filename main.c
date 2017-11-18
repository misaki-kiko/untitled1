#include <stdio.h>
void sort3(int *a,int *b,int *c)
{
    int mid;
    if (*a>*b)
    {
        mid = *b;
        *b=*a;
        *a=mid;
    }
    if (*a>*c)
    {
        mid=*c;
        *c=*a;
        *a=mid;
    }
    if (*b>*c)
    {
        mid=*c;
        *c=*b;
        *b=mid;
    }
}
int main (void)
{
    int n1,n2,n3;
    printf("请输入三个整数：");
    scanf("%d%d%d",&n1,&n2,&n3);

     sort3(&n1,&n2,&n3);

    printf("%d%d%d",n1,n2,n3);
}