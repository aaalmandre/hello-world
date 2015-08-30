#include <iostream>
int LuckyNum(int L, int R) {
  int r,n;
  for(n=L; !r & L<=R; n%10^4 && n%10^7 ? (n?:r)=++L : n/=10);
  return r-1;
}

int main(int argc, char **argv) {
	std::cout << LuckyNum(3,77); 
}
