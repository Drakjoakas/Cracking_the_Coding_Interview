#include<iostream>
#include<cmath>
#include<string>
using namespace std;

int** zero_matrix(int r, int c, int **m){
	bool renglon[r];
	bool columna[c];
	
	for(int i = 0; i < r ; i++){
		
		for(int j = 0 ; j < c ; j++){
			if(m[i][j] == 0){
				renglon[i] = true;
				columna[j] = true;
			}else{
				renglon[i] = false;
				columna[j] = false;
			}
		}
	}
	
	for(int i = 0; i < r; i ++){
		if(renglon[i]){
			for(int j = 0; j < c ; j++){
				m[i][j] = 0;
			}
		}
	}
	
	for(int i = 0; i < c; i ++){
		if(columna[i]){
			for(int j = 0; j < r ; j++){
				m[j][i] = 0;
			}
		}
	}
	
	return m;
}