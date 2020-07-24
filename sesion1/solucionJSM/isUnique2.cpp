#include<iostream>
#include<cmath>
#include<string>
using namespace std;

bool is_unique(string s){
	for(int i = 0; i < s.length(); i ++){
		for(int j = i +1 ; j < s.length() ; j ++){
			if(s[i] == s[j]){
				return false;
			}
		}
	}
	return true;
}