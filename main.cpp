//I'm really bad at coding but I really want to get better because I want to go into a programming career. 
//last updated: 12/8 1:11pm


#include <iostream>
#include <cstdio>
#include <ctime>
#include  <cstdlib>
#include <string.h>
#include <time.h>
#define block "\u25a9"
using namespace std;

int getPlayer(){
int players;
std::cin >> players;
  return players;
  }
int diceRoll(){
    int die1 = (rand() % 6)+1;
    int die = (rand()%11)/2+1;
  int total = die1+die;
  int rollAmount[11];
  rollAmount[total]+=1;

return total;
}

void playerMovement(){
  int player[getPlayer()];
  

  
}
void welcome(){
  printf("Welcome to sorry! How many players are playing");
  getPlayer();
  int dplay[getPlayer()];
  
  
  
  
}






int main() {
  std::cout << "Hello World!\n";
}
