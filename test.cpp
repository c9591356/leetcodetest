#include <iostream>
using namespace std;
int root[] = {5,4,8,11,NULL,13,4,7,2,NULL,NULL,NULL,1};
int main(){
	//cout << sizeof(root);     52
	for (int i=1;i<=(sizeof(root)/4);i++ )
		//cout << i << endl; //1.2.3.4.5.....13
		
		if(root[i*2-1] == NULL and root[i*2] == NULL and root[i] != NULL)
			cout << i << endl;
} 

