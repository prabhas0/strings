#include<iostream>
#include<string>
using namespace std;
bool isconsonant(char ch){
	if(ch<65) return false;
	else if(ch>90 && ch<97) return false;
	else if(ch>122) return false;
	else if(ch=='a' || ch=='A') return false;
	else if(ch=='e' || ch=='E') return false;
	else if(ch=='i' || ch=='I') return false;
	else if(ch=='o' || ch=='O') return false;
	else if(ch=='u' || ch=='U') return false;
	else return true;
}
int main(){
	string s;
	int count=0;
	getline(cin,s);
	for(int i=0;i<s.length();i++){
		if(isconsonant(s[i])) count++;
	}
	cout<<count;
	

}
