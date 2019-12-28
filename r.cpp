#include <iostream>
#include <vector>

int main(){
   bool zero = false;
   int v, r = -1, n, maxodd = 0, maxrdd = 0;
   std::cin >> n; 
   for (int i = 0; i < n ; ++i){
           std::cin >> v;
           if (v % 2 == 0 && v > maxodd) maxodd = v;
           if (v % 2 == 1 && v > maxrdd) maxrdd = v;
           if (v == 0) zero = true;
   }
   if( maxodd != 0 && maxrdd != 0)
           r = maxodd + maxrdd;
   if (maxodd == 0 && maxrdd != 0 && zero)
           r = maxrdd;
   std::cout << r;
}
