#include<iostream>
#include<string>

int main(){
   std::string str;
   int cou = 0;
   std::cin >> str;
   for(int i = 0; i < str.size(); i++)
           if ((int)str[i] % 2 == 0) cou+= i + 1;
   std::cout << cou << std::endl;
   return 0;
}     
