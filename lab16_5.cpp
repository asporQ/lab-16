#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *, int *, int *); //Modify input arguments to pointer 

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d); //Modify input arguments to pointer 
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int *q,int *w,int *e,int *r){
	int x[4]={*q,*w,*e,*r};

	for(int i = 0; i<4 ; i++){
		int y = rand()%4 , z= rand()%4;

		swap(x[y],x[z]);

	} 

	*q = x[0];
	*w = x[1];
	*e = x[2];
	*r = x[3];
}
