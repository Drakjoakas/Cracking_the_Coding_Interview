#include<iostream>
#include<cmath>
#include<string>
using namespace std;

string string_compression(string s){
	int count = 1;
	char temp = s[0];
	string res = "";
	res += temp;
	for(int i = 1; i < s.length(); i++) {
		if ( s[i] == temp){
			count++;
		}else{
			res+=to_string(count);
			count=1;
			temp=s[i];
			res+=temp;
		}
	}
	res+=to_string(count);
	return res.length() > s.length() ? s : res;
}