#include<iostream>
#include<vector>

int main(){
     int a;
     std::vector<int> v;
     std::cin >> a;
     for (int i = 1 ; a > 0; ++i){
             v.push_back(a%10);       
             a/=10;
     }
     for (auto i = 1; i <= v.size(); ++i)
             std::cout << i << "   разряд числа: " << v[v.size() - i] << std::endl;
     return 0;   
}
