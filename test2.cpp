#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
int main()
{
    char str[100001];
    int l;
    int i;
    int ans;
    int ch;
    scanf("%s",str);
    l= strlen(str);
    ans=0;
    for(i=0;i<l;i++)
    {
        ch=str[i];
        if(ch==42)
            ans++;
        
    }
    printf("%d\n",ans);
    return 0;
}
