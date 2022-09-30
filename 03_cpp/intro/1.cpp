#include <iostream>

int main() {
  std::cout << "Enter you name, please: ";
  std::string username; 
  std::cin >> username; 
  std::cout << "\nHellow, " << username << "!" << std::endl;
  return 0;  
}