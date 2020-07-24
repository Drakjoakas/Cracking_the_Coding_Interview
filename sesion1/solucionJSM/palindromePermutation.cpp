#include<iostream>
#include<cmath>
#include<string>
using namespace std;

bool palindrome_permutation(string s){
	string abc = "abcdefghijklmnopqrstuvwxyz";
	int cont[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	int odds = 0;
	for(int i = 0 ; i < s.length() ; i++){
		if(s[i != ' '])
			cont[abc.find(tolower(s[i]))]++;
	}
	for(int i = 0; i < 26; i++){
		if (cont[i] % 2 == 1)
			odds++;
	}
	if(odds > 1)
		return false;
	else
		return true;
}