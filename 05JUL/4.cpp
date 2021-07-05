#include<iostream>

using namespace std;

int main(){
	int Size;
	cout<<"Enter the size:";
	cin>>Size;
	
	for(int row=0;row<Size;row++){
		for(int star=0; star<Size-row;star++){
			cout<<"*";
		}
		for(int star = 0;star<row*2; star++){
			cout<<"-";
		}
		for(int star=0; star<Size-row;star++){
			cout<<"*";
		}

		cout<<endl;
	}
	
	for(int row=0;row<Size; row++){
		for(int star=0;star<row+1;star++){
			cout<<"*";
		}
		//-------------------------------------
		
		
		//-------------------------------------
		for(int star=0;star<row+1;star++){
			cout<<"*";
		}
		cout<<endl;
	}
	
	
	return 0;
}
/*input = 5

**********			row=0 star=1 
****  ****			row=1 star=2
***	   ***			row=2 star=3
**      **			row=3 star=4
*12345678*			row=4 star=5
--------------------------------------
*        *			row=0 star=1
**      **			row=1 star=2
***    ***			row=2 star=3
****  ****			row=3 star=4
**********			row=4 star=5





*/




