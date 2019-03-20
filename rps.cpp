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
  //int s;
  
  std::cout << "====================\n";
	std::cout << "Rock Paper Scissors!\n";
	std::cout << "====================\n";

	std::cout << "1) ✊\n";
	std::cout << "2) ✋\n";
	std::cout << "3) ✌️\n";

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
