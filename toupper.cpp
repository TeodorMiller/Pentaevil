#include<iostream>
char toUpper(char ch);

int main (){
   char ch;
   std::cout <<"Введите символ: ";
   std::cin >> ch;
   std::cout << "Символ в верхнем регистре: " << toUpper(ch) << std::endl;
   return 0;
}

char toUpper(char ch){
   if(ch >= 0x61 && ch <= 0x7a)
           ch -=0x20;
   return ch;
}
