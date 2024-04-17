#include<iostream>
using namespace std;



//-------------------------------------------------------------------------------------------
//   1
//   12
//   123
//   1234
//   12345

void pattern1() {
	int rows;
	cout<<"Enter rows=";
	cin>>rows;
	for(int i=1; i<=rows; i++) {
		for(int j=1; j<=i; j++) {
			cout<<j<<" ";
		}
		cout<<"\n";
	}
}



//------------------------------------------------------------------------------
//    1
//    22
//    333
//    4444
//    55555

void pattern2() {
	int i,j,rows;
	cout<<"Enter rows=";
	cin>>rows;
	for(i=1; i<=rows; i++) {
		for(j=1; j<=i; j++) {
			cout<<i<<" ";
		}
		cout<<"\n";
	}
}

//------------------------------------------------------------------------------

//      1
//     2 2
//    3 3 3
//   4 4 4 4

void pattern3() {
	int rows;
	cout<<"Enter rows=";
	cin>>rows;
	for(int i=1; i<=rows; i++) {

		for(int k=0; k<rows-i; k++) {
			cout<<" ";
		}
		for(int j=1; j<=i; j++) {
        
			cout<<i<<" ";
		}
		cout<<endl;
	}
}



//-----------------------------------------------------------------------------------------------
//       1
//       2 3
//       3 4 5
//       4 5 6 7
void pattern30() {
	int i,j,rows,k=1;
	cout<<"Enter rows=";
	cin>>rows;
	for(i=1; i<=rows; i++) {
		for(j=0; j<i; j++) {
			cout<<k<<" ";
			k++;
		}
		cout<<"\n";
	}
}




//-----------------------------------------------------------------------------------------------
//       1
//       2 3
//       4 5 6
//       7 8 9 10

void pattern4() {
	int rows;
	cout<<"Enter rows=";
	cin>>rows;
	int i,j,k=1;
	for(i=1; i<=rows; i++) {
		for(j=1; j<=i; j++) {
			cout<<k<<"  ";
			k++;
		}
		cout<<"\n";
	}
}


//----------------------------------------------
//    1
//   12
//  123
// 1234

void pattern5() {
	int size;
	cout<<"Enter rows = ";
	cin>>size;
	for(int i=1; i<=size; i++) {
		for(int k=0; k<=size-1-i; k++) {
			cout<<" ";
		}
		for(int j=1; j<=i; j++) {
			cout<<j;
		}
		cout<<"\n";
	}
}


//-------------------------------------------
//  1
//  21
//  321
//  4321

void pattern6() {
	int size;
	cout<<"Enter rows = ";
	cin>>size;
	for(int i=1; i<=size; i++) {
		for(int j=i; j>0; j--) {
			cout<<j<<" ";
		}
		cout<<"\n";
	}
}

//--------------------------------------------------------------------------


//     1
//    121
//   12321
//    121
//     1

//WRONG                 WRONG              WRONG                WRONG         WRONG

  void pattern8()
  {
  	int size;
	cout<<"Enter rows = ";
	cin>>size;
	int temp=(size+1)/2;
	for(int i=1;i<=size;i++)
	{
		int k=i<=temp?size+i-temp:size-i+temp;
		for(int j=1;j<=k;j++ )
		{
			if(j<=size-k)
			cout<<" ";
			else
			cout<<j;
		}
		cout<<endl;
	}
  }


//--------------------------------------------------------------------------



//       1
//      121
//     12321
//    1234321

void pattern7() {
	int size,k;
	cout<<"Enter rows = ";
	cin>>size;
	int temp=0;

	for(int i=1; i<=size; i++) {

		for(int k=0; k<size-i; k++) {
			cout<<" ";
		}

		for(int j=1; j<=i; j++) {
			cout<<j;
		}

		for(int l=i-1; l>0; l--) {
			cout<<l;
		}

		cout<<endl;

	}
}

// ------------------------------------------------------------------------------------
//
//   	32123
//       323
//        3

void pattern9() {
	int size;
	cout<<"Enter rows = ";
	cin>>size;
	for(int i=1; i<=size; i++) {
		for(int k=1; k<i; k++) {
			cout<<" ";
		}

		for(int j=size; j>=i; j--) {
			cout<<j;
		}
		for(int l=i+1; l<=size; l++) {
			cout<<l;
		}
		cout<<endl;
	}
}


// ------------------------------------------------------------------------------------
//     1
//    222
//   33333


void pattern10() {
	int size;
	cout<<"Enter rows = ";
	cin>>size;

	for( int i=1; i<=size; i++) {

		for(int j=1; j<=size+i-1; j++) {
			if(j<=(size-i)) {
				cout<<" ";
			} else
				cout<<i;
		}
		cout<<endl;
	}
}


//----------------------------------------------------------------------------

//    0
//   101
//  21012

void pattern11() {
	int size,i;
	cout<<"Enter rows = ";
	cin>>size;
	for(i=0; i<size; i++) {
		for(int k=0; k<size-i; k++) {
			cout<<" ";
		}

		for(int j=i; (j<=i+1&&j>=0); j--) {
//			if(j<=(size-i))
//			{
//				cout<<" ";
//			}
//			else
			cout<<j;
		}

		for(int l=1; l<=i; l++) {
			cout<<l;
		}
		cout<<endl;
	}
}
  
  
//--------------------------------------------------------------------------------------------
//   zyxyz   32123
//    zyz    -323
//     z     --3
//WRONG      WRONG     WRONG          WRONG         WRONG       WRONG

void pattern12()
{
	int size;
	cout<<"Enter rows = ";
	cin>>size;
	
	for(int i=size;i>0;i--)
	{
		for(int j=1;j<=i+size-1;j++)
		{
			cout<<j;
		}
	
	
		
			cout<<endl;
	}
}
  

 
//--------------------------------------------------------------------------------------------
//
//      a
//      ab
//      abc 

void pattern13()
{
	int size;
	cout<<"Enter rows = ";
	cin>>size;
	
	for(int i=0;i<size;i++)
	{
		for(char j='a';j<=i+'a';j++)
		{
			cout<<j;
		}
		cout<<endl;
	}
}
  
  
//--------------------------------------------------------------------------------------------
//
//    ---*
//    --* * 
//    -* * *
//    * * * *



void pattern14()
{
	int size;
	cout<<"Enter rows = ";
	cin>>size;
	
	for(int i=1;i<=size;i++)
	{
		for(int j=1;j<=size;j++)
		{
			if(j<=size-i)
			cout<<"-";
			else
			cout<<"* ";
		}
		cout<<endl;
	}}

 
//--------------------------------------------------------------------------------------------

  
  int main()
  {
 // 	pattern8();
 pattern12();
 // 	pattern13();
 //   pattern14();
  	return 0;
  }
