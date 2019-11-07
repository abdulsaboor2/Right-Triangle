#include<iostream>
using namespace std;
int main(){
	for(int i=0; i<5; i++){
		for(int j=i;j>=0;j--){
			cout<<j<<" ";
		}
		cout<<endl;
	}
}

/*  Output
	0
	1 0
	2 1 0
	3 2 1 0
	4 3 2 1 0
*/
