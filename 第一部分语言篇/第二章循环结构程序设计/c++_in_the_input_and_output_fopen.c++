#include<cstdio>
using namespace std;
int main(void){
	FILE *fin,*fout;
	fin=fopen("aplusb.in","rb");
	fout=fopen("aplusb.out","wb");
	int a,b;
	while(fscanf(fin,"%d%d",&a,&b)==2) fprintf(fout,"%d\n",a+b);
	fclose(fin);
	fclose(fout);
	return 0;
}
