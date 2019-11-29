#include<iostream>
#include<cmath>

int func(int n){
   return n == 1 ? 1 : 9*func(n - 1) + pow(10, n - 1);
}


int main(){
   int n,chisl;
   std::cin >> chisl;
   std::cin >> n;
   std::cout << func(n) << std::endl;
}
