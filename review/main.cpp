#include<cstdio>
#include<cstring>
#include<cctype>
#define maxn1 10
#define maxn2 1000000
using namespace std;

char s1[maxn1+20],s2[maxn2+100];
int len1,len2;

bool match(int s)
{
    if(s>0 && s2[s-1]!=' ')return 0;
    if(s+len1<len2 && s2[s+len1]!=' ')return 0;
    for(int i=0;i<len1;i++)
        if(s1[i]!=s2[s+i])return 0;
    return 1;
}
int main()
{
    //freopen("1.in","r",stdin);
    int i,j,k,ans;
    gets(s1),gets(s2);
    len1=strlen(s1),len2=strlen(s2);
    for(i=0;i<len1;i++)
        if(isupper(s1[i]))s1[i]=tolower(s1[i]);
    for(i=0;i<len2;i++)
        if(isupper(s2[i]))s2[i]=tolower(s2[i]);
    for(ans=i=0;i+len1<=len2;i++)
        if(match(i))
        {
            ans++;
            if(ans==1)k=i;
        }
    if(ans==0)printf("-1\n");
    else printf("%d %d\n",ans,k);
    return 0;
}
