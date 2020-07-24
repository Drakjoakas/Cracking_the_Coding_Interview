#include<iostream>
#include<cmath>
#include<string>
using namespace std;

string URLify(string s){
	string res = "";
	
	for(int i = 0; i < s.length(); i++){
		if(s[i] == ' ')
			res = res + "%20";
		else
			res = res + s[i];
	}
	return s;
}