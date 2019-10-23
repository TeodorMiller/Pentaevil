#include<iostream>


int main(){
   int w,h,k,p = 0;
   std::cin >> w;
   std::cin >> h;
   std::cin >> k;
   while(k > 0){
      p += 2*(w+h) - 4;
      w-=4;
      h-=4;
      k --;
   }
   std::cout << p << std::endl;
   return 0;
}
