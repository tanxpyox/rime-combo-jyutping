#include<cstdio>
#include<iostream>
#include<fstream>
#include<map>
#include<sstream>
using namespace std;

map<string,string> d;

int main () {
  string s1,s2,s3,s4,s5,s6,s7,s8;

  freopen("dict.txt","r",stdin);
  int count=0;
  while ( getline(cin,s3) ){
    if(s3=="break") break;
    istringstream iss(s3);
    iss >> s1 >> s2;
    d[s1] = s2;

  }

  cout << d.size() << endl;
/*
  for(map<string,string>::iterator it=d.begin(); it!=d.end(); ++it){
    cout << it->first << " " << it->second << endl;
  }

*/
  string line;
  while (getline(cin,line)) {
    istringstream is2(line);
    is2 >> s1 >> s2 >> s3 >> s4 >> s5 >> s6 >> s7 >> s8;
    cout << s1 << "\t" << d[s1] << endl;
    cout << s2 << "\t" << d[s2] << endl;
    cout << s3 << "\t" << d[s3] << endl;
    cout << s4 << "\t" << d[s4] << endl;
    cout << s5 << "\t" << d[s5] << endl;
    cout << s6 << "\t" << d[s6] << endl;
    cout << s7 << "\t" << d[s7] << endl;
    cout << s8 << "\t" << d[s8] << endl;
  }

  return 0;
}
