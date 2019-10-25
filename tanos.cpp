#include <iostream>
#include <vector>

int main(){
   int n,buffer;
   bool sorted;
   std::cin >> n;
   std::vector< int > c;   
   for (int i = 0; i < n ;i++ ){
           std::cin >> buffer; 
           c.push_back(buffer);
   }
   do {
      sorted = true;
      for (int i = 0; i < c.size() - 2 ; ++i )
           if (c.at(i) > c.at(i + 1))
                  sorted = false;
      if (!sorted)
           for (int i = 0 ; i < (c.size() - 1) / 2 ; i++ )
                   c.erase(c.begin());
   } while(!sorted && !c.empty());
   for (std::vector<int>::iterator it = c.begin(); it != c.end(); ++it)
           std::cout << *it << "  ";
   std::cout << std::endl;
   return 0;
}
