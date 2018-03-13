#include <iostream>
#include <stdlib.h>
#include <string>
#include "meerkat.h"
#include "cart.h"
using namespace std;

/////////////////////// initialization
cart::cart()
{
num_meerkat=0;
}
//////////////////////// add a meerkat to the cart return false is it is full.
bool cart::addMeerkat(meerkat cat)
{


if (num_meerkat>3) {
  /* code */return false;
 

}
else{ 
	cart_meerkat[num_meerkat]=cat;
	num_meerkat++;
  
return true;
}



}
/////////////////////////////////////////////////////remove all the meerkat from the cart.
void cart::emptyCart()
{
num_meerkat=0;	
  /*for (int num_meerkat = 4; num_meerkat >0; --num_meerkat)
  {
  
  	
  	for (int i = 0; i < num_meerkat-1; ++i)
  	{
  	

  		cart_meerkat[i]=cart_meerkat[i+1];
  		
  	}

  }
  
  for (int i = 0; i < num_meerkat; ++i)
  {
  	
  	cout<<i<<" "<<cart_meerkat[i].getName()<<" "<<cart_meerkat[i].getAge()<<endl;
  }*/

}
void cart::printMeerkats() {
  /* code */
  for (size_t i = 0; i < num_meerkat; i++) {
    /* code */
    std::cout <<cart_meerkat[i].getName()<<" "<<cart_meerkat[i].getAge()<<endl;
  }
}
