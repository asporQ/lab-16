#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}
void shuffle(int &a,int &b,int &c,int &d){
	int x[4]={a,b,c,d};

	for(int i = 0; i<4 ; i++){
		int y = rand()%4 , z= rand()%4;

		swap(x[y],x[z]);

	} 

	a = x[0];
	b = x[1];
	c = x[2];
	d = x[3];
}
