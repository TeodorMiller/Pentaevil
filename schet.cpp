#include<iostream>

int main (){
   int a,b,f;
   char ch;
   std::cout << "Введите a:";
   std::cin >> a;
   std::cout << "Введите b:";
   std::cin >> b;
   std::cout << "Введите f:";
   std::cin >> f;
   std::cout << (a + b - f / a) + f * a * a - (a + b) << std::endl;
   return 0;
}
