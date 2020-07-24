#include<iostream>
#include<cmath>
#include<string>
using namespace std;

bool one_away(string s1, string s2){
	
	int size1 = s1.length();
	int size2 = s2.length();
	
	if ( abs(size1 - size2) > 1){
		return false;
	}
	int equal = 0;
	int j = 0;
	
	if(s1.length() == s2.length() ){
		for(int i = 0; i < s1.length() ; i++) {
			if(s1[i] == s2[i])
				equal++;
		}
		
		return abs(s1.length() - equal) <= 1;
		
	} else if (s1.length() > s2.length()) {
		int i = 0;
		while ( i < s2.length() && j < s1.length()){
			
			if(s1[j] == s2[i]){
				equal++;
				i++;
				j++;
			}else{
				j++;
			}
		}
		
		return abs(s1.length() - equal) <= 1;
	} else {
		int i = 0;
		while ( j < s1.length() && i < s2.length()){
			if(s1[j] == s2[i]){
				equal++;
				i++;
				j++;
			}else{
				i++;
			}	
		}
		
		return abs(s2.length() - equal) <= 1;
		
	}
	
}