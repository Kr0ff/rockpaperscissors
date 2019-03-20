/*
	Linux:
Compile: g++ rps.cpp -o rps

*/



#include <iostream>
#include <stdlib.h>
#include <unistd.h>

void rps() {
  
  srand(time(NULL));
  int computer = rand() % 3 + 1;
  int user;
	
	
  std::cout << "								"
  std::cout << "	.__       .  .__              __.                       "
  std::cout << "	 [__) _  _.;_/[__) _.._  _ ._.(__  _.* __ __ _ ._. __   "
  std::cout << "	 |  \(_)(_.| \|   (_][_)(/,[  .__)(_.|_) _) (_)[  _)    "
  std::cout << "	                     |                                  "

  std::cout << "1) Rock\n";
  std::cout << "2) Paper\n";
  std::cout << "3) Scissors\n";

  std::cout << "Choice: ";
  std::cin >> user;
  std::cout << "\n";
  
  while (user == computer) {
    std::cout << "Tie !";
    std::cout << "\n";
    usleep(2500000);
    return rps();
    break;
  }
  
  if (user < computer) {
    std::cout << "You Lose !\n";
    usleep(1000000);
   
  }
  
  else if (user > computer) {
    std::cout << "You Win !\n"; 
    usleep(1000000);
  }
  
  else {
    std::cout << "Sorry ! I'm confused, try again !\n";
    usleep(3000000);
   // std::chrono::seconds dura(5);
    rps();
  }
}

int main() {
	rps();
}
