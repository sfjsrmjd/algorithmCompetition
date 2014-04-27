#include<iostream>
#ifdef LOCAL
#include<cstdio>
#endif
using namespace std;
int main(void){
#ifdef LOCAL
freopen("aplusb.in","r",stdin);
freopen("aplusb.out","w",stdout);
#endif
int a,b;
while(cin>>a>>b) cout<<a+b<<"\n";
return 0;
}
