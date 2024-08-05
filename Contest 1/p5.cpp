#include <stdio.h>

int n,ans;
char s[105];
int a[25];

void rec(int i,int x)
{
    if (x==(1<<26)-1) {
        ans+=1<<(n-i);
        return;
    }
    if (i==n) return;
    rec(i+1,x);
    rec(i+1,x|a[i]);
}

int main()
{
    scanf("%d",&n);
    for (int i=0; i<n; i++) {
        scanf(" %s",s);
        for (int j=0; s[j]; j++) a[i]|=1<<(s[j]-'a');
    }
    rec(0,0);
    printf("%d\n",ans);
}