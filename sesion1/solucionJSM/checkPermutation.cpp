#include<iostream>
#include<cmath>
#include<string>
using namespace std;

bool check_permutation(string s1, string s2) {
	if(s1.length() != s2.length())
		return false;
	bool check[s1.length()];
	for(int i = 0; i < s1.length(); i++){
		check[i] = false;
	}
	for(int i = 0 ; i < s1.length();i++){
		for(int j = 0 ; j < s1.length();j++){
			if(!check[j]){
				if(s1[i] == s2[j]){
					check[j] = true;
				}
			}
		}
	}
	for(int i = 0 ; i < s1.length();i++){
		if(!check[i]){
			return false;
		}
	}
	return true;
	
}