#include <bits/stdc++.h>
using namespace std;

bool V_P(string p){
	stack<char> s;
	for(char c : p){
		if(c == '{' || c== '(' || c == '['){
			s.push(c);
		}
		else if(c == '}' || c == ']' || c == ')'){
			if(s.empty())
				return false;
			if(( c == '}' && s.top() != '{') || ( c == ')' && s.top() != '(' ) || ( c == ']' && s.top() != '[' ))
				return false;
			s.pop();
		}
	}
	return s.empty();
}
int main(){
	string s;
	cout << "Enter Your Parentheses String : ";
	cin >> s;
	
	cout << "Your String is : " << (V_P(s)? "Valid" : "Not Valid");
	return 0; 
}
