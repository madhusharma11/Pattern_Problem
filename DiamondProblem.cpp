#include<iostream>
using namespace std;



//
//  *
// ***
//*****
// ***
//  *
int main() {
	int n;
	cout << "Enter only odd number to print diamond pattern = ";
	cin >> n;

	int temp=(1+n)/2;//static_cast<float>(n/2);
	cout<<"temp="<<temp<<endl;
	for(int row=1; row<=n; row++) {
		int k=row<=temp?n+row-temp:n-row+temp;
		for(int col=1; col<=k; col++) {
			if(col<=n-k)
				cout << " ";
			else
				cout<<"*";

		}
		cout<<endl;
	}
	return 0;
}


#include<iostream>
#include<math.h>
using namespace std;

/*pattern

*
-*
--*
-*
*

*/

//int main() {
//	int n=10,i,j,k=1,l;
//	float temp1=round((float)n/2);
//	cout<<temp1<<endl;
//	
//	int temp=round(temp1);
//	for(i=1; i<=n; i++) {
//		int k =(i<=temp?i:(n-i+1));
//		for(j=1; j<=k; j++) {
//			if(j==k){
//				cout<<"*";
//			} else {
//				cout<<"-";
//			}
//
//		}
//		cout<<endl;
//	}
//
//
//	return 0;
//}


