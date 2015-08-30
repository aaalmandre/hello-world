#include <iostream>
#include <sstream>
int LuckyNum(int L, int R) {
  for(int i = 0; i<= R-L; i++){
  	int number = L+i;
    std::stringstream ss;
	ss << number;
	std::string str = ss.str();
    std::string::size_type j;
    
    
	for(j = 0; j < str.size(); j++) { 
      if(str[j] != '4' && str[j] != '7'){
          break;
      }
	}
    if(j == str.size()){
    	return number;
    }
    
  }
  return -1;
}


int main(int argc, char **argv) {
	std::cout << LuckyNum(3,77); 
}
