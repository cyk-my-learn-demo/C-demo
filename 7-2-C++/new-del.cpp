#include<iomanip>
#include <iostream>
using namespace std;
 
int main ()
{
   double* pvalue  = NULL;
   pvalue  = new double;   
 
   *pvalue = 29494.99; 

   cout<<setprecision(8)<<*pvalue << endl;
   cout << "Value of pvalue : " << *pvalue << endl;
 
   delete pvalue;         
 
   return 0;
}
