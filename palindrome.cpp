#include<iostream>
#include<string>
using namespace std;
bool ispalindrome(string s){
	int i=0;
	int j=s.size()-1;
	while(i<j){
		if(s[i]!=s[j]) return false;
		i++;
		j--;
	}
	return true;//palindrome means first digit and lastdigit is same
}
int main(){
	string s;
	getline(cin,s);
		if(ispalindrome(s)==true)
           cout<<"string is palindrome";
		   else 
		       cout<<"string is not palindrome";
	
}