#include<cstdio>
using namespace std;
int main()
{
    int n,a,b,x,o=0;
    scanf("%d%d%d",&n,&a,&b);
    while(n--)
    {
        scanf("%d",&x);
        if(x==2&&b)--b;
        else if(a)--a;
        else ++o;
    }
    printf("%d\n",o);
}
