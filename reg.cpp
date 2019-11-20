#include<iostream>

int main(){
   char ch;
   std::cout << "Введите символ: " ;
   std::cin >> ch;
   std::cout << "Символ в верхнем регистре:" << tolower(ch) << std::endl;
   return 0;
}
