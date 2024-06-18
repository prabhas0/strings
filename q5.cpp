#include<iostream>
#include<string>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	int x=0;
	for(int i=0;i<s.size();i++){
		x*=10;
		x+=(s[i]-48);//s[i] is a character so we use 48 which is ascii value
	}
	cout<<s;
}