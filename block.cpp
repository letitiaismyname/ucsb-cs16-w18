// block.cpp
// Letitia Mueller
// 5945480

#include <iostream>

using namespace std;

int main() {
  while(true) 
    {
      cout <<"Enter number of rows and columns:"<< endl;
      int x,y;
      cin >>x>>y;
      if (x<=0 || y<=0){ 
	break;
      }
 
     
      for(int rows=0; rows<x; rows++){
	for(int columns=0; columns<y; columns++){
	  cout<<"X.";
	}	
	cout<<endl;
      }	
    }


 
  return 0;

}
 
