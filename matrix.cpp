#include <iostream>
#include <string>
#include <math.h>
const unsigned int n = 5;

int main() {
      int x,y;
      std::string str[n];
      for (unsigned int i = 0; i < n ; i++){
                std::cin >> str[i];
                for(unsigned int j = 0 ; j < n ; j++){
                  if (str[i][j] == '1') {
                     x = j;
                     y = i;
                  }  
                }
      } 
      std::cout << sqrt((x-1)*(x-1) + (y - 1)*(y - 1)) << std::endl;
      return 0;
}
