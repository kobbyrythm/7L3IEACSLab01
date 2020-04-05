#include <iostream>

#include "problem1.h"

//SWAP
void SwapValue(int a, int b) {
   int t = a;
   a = b;
   b = t;
}


//SAME SIGN
  bool sameSign(int x, int y)

  {  if (x >=0 && y < 0||x < 0 && y >= 0)
         std::cout<<" different sign";
         else
         std::cout<<"same sign";


    return (x >= 0) ^ (y < 0);



//EVEN OR ODD
bool EvenOdd(int num){
   bool b;

   if (num % 2 == 0)
      b=true;
   else
      b=false;

   return b;
}




//FIRST OR SECOND
int first()
{
    for(int i =0;i<3;i++)

    std::cout<<"First\n";
    return 0;
}

int second()
{
    for(int i =0;i<2;i++)

    std::cout<<"Second\n";
  }
    
