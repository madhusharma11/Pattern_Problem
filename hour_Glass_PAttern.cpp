#include<iostream>
using namespace std;

//HOUR GLASS

//        	*-*-*-*
//        	-*-*-*
//        	--*-*
//        	---*
//        	--*-*
//        	-*-*-*
//        	*-*-*-*


void pattern() {
	int size;
	cout<<"Enter rows = ";
	cin>>size;
	int temp=(float)(size+1)/2;
	for(int i=1; i<=size; i++) {
		int k=i<=temp?size-i+1:i;
		for(int j=1; j<=k; j++) {

			if(j<(i)&& i<=temp)  {
				cout<<" ";
			} else if(j<=(size-i) && i>=temp)  {
				cout<<" ";
			} else {
				if((i%2!=0)&&(j%2!=0))
					cout<<"*";
				else if((i%2==0)&&(j%2==0))
					cout<<"*";
				else
					cout<<"-";
			}
		}
		cout<<endl;
	}
}

int main() {
	pattern();
	return 0;
}
