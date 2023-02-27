#include <iostream>
int main(int argc, char *argv[]) {
  while (1)
    ;
  return 0;
}

// In Linux this function is executed
void unreachable() { std::cout << "Hello,world" << std::endl; }
