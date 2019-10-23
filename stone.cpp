#include <iostream>
#include <string>
int main () {
   int cnt = 0;
   std::string str;
   std::cin >> str;
   for (int i = 0; i < str.size() - 1 ; i ++ )
      if (str [i] == str[i+1])
              cnt ++;
   std::cout << cnt << std::endl;
   
              
   return 0;
}
