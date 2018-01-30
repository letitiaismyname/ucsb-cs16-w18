
// pi.cpp
// Letitia Mueller
// 5945480

#include <iostream>
#include <cmath>

using namespace std;

int main() {
  cout.setf(ios::fixed); 	   // Display in fixed point notation. For example, display 1e-1 as 0.1
  cout.setf(ios::showpoint); // Always display the decimal point.
  cout.precision(3);         // Set the number of digits to display after the decimal point to 3
  double sum=0;
  while(true)
    {
      sum = 0;
      cout <<"Enter the value of the parameter 'n' in the Leibniz formula (or -1 to quit):"<< endl;
      int n;
      int k;
      cin >> n;
      k=n;

      if (n<=-1){
	break;
      }

      while (n>=0){
	double addtosum=(pow(-1,n))/((2.0*n)+1);
	sum = sum + addtosum;
	n=n-1;
      }
      sum = sum*4;

  
      if (k>0){
	cout<<"The approximate value of pi using "<<k+1<<" terms is: "<<sum<<endl;
        
      }
      else{
	cout<<"The approximate value of pi using "<<k+1<<" term is: "<<sum<<endl;
      }
    }
    
     
     
    
    
    

}
   
