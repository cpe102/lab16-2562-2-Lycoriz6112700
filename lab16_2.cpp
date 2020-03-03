#include<iostream>
using namespace std;

void myString(char *&x,int y){
	x = new char [y+1];
	for (int i = 0; i < y; i++){
		x[i]='A'+i;
	}
	x[y]='\0';
}

int main(){
	char *p;
	int N;	
	cout << "N = ";
	cin >> N;		
	myString(p,N);
	cout << p;	
	delete [] p;
	return 0;
	
}
