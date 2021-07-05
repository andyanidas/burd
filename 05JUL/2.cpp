#include<iostream>

using namespace std;

int main(){
	int Size;
	cout<<"Enter the size:";
	cin>>Size;
	
	for(int row=0;row<Size;row++){
		for(int space=0;space<Size - row -1;space++){
			cout<<" ";
		}
		for(int star = 0;star<row*2 + 1; star++){
			if(row==Size -1|| star == 0 || star == row*2){
				cout<<"*";
			}else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	
	
	
	return 0;
}
/*input = 5
					space = input - row -1
					star = row*2 + 1
----*		row = 0 space = 4 star=1
---* *		row = 1 space = 3 star=3
--*   *		row = 2 space = 2 star=5
-*     *    row = 3 space = 1 star=7
*********   row = 4 space = 0 star=9
*/
