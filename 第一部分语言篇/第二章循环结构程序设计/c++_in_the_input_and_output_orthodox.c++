#include<fstream>
using namespace std;
ifstream fin("aplusb.in");
ofstream fout("aplusb.out");
int main(void){
int a,b;
while(fin>>a>>b) fout<<a+b<<"\n";
return 0;
}
