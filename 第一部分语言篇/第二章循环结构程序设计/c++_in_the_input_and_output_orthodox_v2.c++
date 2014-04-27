#include<fstream>
#include<iostream>
using namespace std;
//ifstream fin("aplusb.in");
//ofstream fout("aplusb.out");
#define fin cin
#define fout cout
int main(void){
int a,b;
while(fin>>a>>b) fout<<a+b<<"\n";
return 0;
}
