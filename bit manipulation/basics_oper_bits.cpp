#include <iostream>
#include<string>
using namespace std;

    //displays the bit at the desired position
   int getbit(int n , int pos){
       return ((n & (1<<pos))!=0);
   }

    //places 1  at the pos 
   int setbit(int n, int pos){
       return(n | (1<<pos));
   }

   //clear the bit replaces with  0
   int clearbit(int n, int pos ){
       int mask =~(1<<pos);
       return (n & mask);
   }

   //update the bit with 1
   int updatebit(int n,int pos,int value){
       int mask =~(1<<pos);
       n= n & mask;
       return (n | (value<<pos));
}

   int main(){
       cout<<getbit(5,2)<<endl;
       cout<<setbit(5,2)<<endl;
       cout<<clearbit(5,2)<<endl;
       cout<<getbit(5,2)<<endl;
       cout<<updatebit(5,1,1)<<endl;
   }

