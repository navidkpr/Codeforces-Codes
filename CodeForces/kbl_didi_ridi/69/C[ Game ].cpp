#include <iostream>
#include <cstring>
#include <string>
#include <cstdio>
#include <map>
using namespace std;

map<string , int> nums;

typedef map<string , int>::iterator it;

int need[110][60];

int nob[110][110];

int k,n,m,q;

int main()
{
	memset(need,0,sizeof(need));
	memset(nob,0,sizeof(nob));
	scanf("%d%d%d%d",&k,&n,&m,&q);
	for (int i=0;i<n;++i)
	{
		string temp;
		cin>>temp;
		nums[temp]=i;
	}
	for (int i=n;i<m+n;++i)
	{
		string temp;
		cin>>temp;
		temp.erase(temp.end()-1);
		nums[temp]=i;
		int tnum;
		char te;
		do
		{
			cin>>temp>>tnum;
			need[i][nums[temp]]+=tnum;
			te=getchar();
		}while (te==&#39;,&#39;);
	}
	for (int i=0;i<q;++i)
	{
		int tnum;
		string temp;
		cin>>tnum>>temp;
		nob[tnum][nums[temp]]++;
		for (int j=n;j<m+n;++j)
		{
			bool flag=true;
			for (int kk=0;kk<n;++kk)
				if (nob[tnum][kk]<need[j][kk])
				{
					flag=false;
					break;
				}
			if (flag)
			{
				nob[tnum][j]++;
				for (int kk=0;kk<n;++kk)
					nob[tnum][kk]-=need[j][kk];
				break;
			}
		}
	}
	for (int i=1;i<=k;++i)
	{
		int tos=0;
		for (int j=0;j<n+m;++j)
			if (nob[i][j]) tos++;
		printf("%d\n",tos);
		for (it j=nums.begin();j!=nums.end();++j)
		{
			if (nob[i][j->second])
				cout<<j->first<<&#39; &#39;<<nob[i][j->second]<<endl;
		}
	}
    return 0;
}
