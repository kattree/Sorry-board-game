//I'm really bad at coding but I really want to get better because I want to go into a programming career. 
// working on using functions but I still use the main because I've still got my training wheels on
//last updated: 9/9 12:49pm


#include <iostream>
#include <cstdio>
#include <ctime>
#include  <cstdlib>
#include <string.h>
#include <time.h>
#define block "\u25a9"
using namespace std;

struct Board{
  char* realBoard[61];
};

int getPlayer(){
int players;
std::cin >> players;
  return players;
  }

int diceRoll(){
    int die = (rand() % 6)+1;
return die;
}

void playerMovement(int player,int roll, bool go){
  if (go){
switch (roll){
  case 2: {
  printf("Moved forward two.");
  player += 2;
    break;
}
  case 3:{
         printf("Moved forward three\n");
        player += 3;

        break;
      }
      case 4:{
        printf("Moved back a space\n");
        if (player >= 1){
           player -= 1;
        }
      
       break;
      }
      case 5:{
        printf("Moved back three spaces\n");
        if (player >=3) player-=3;
          else player = 0;
        
        break;
      }
      case 6:{
        printf("Moved forward six spaces\n");
        player+=6;
        
        break;
      }
  case 7: break;

   case 8:{
    
        printf("Lost a turn!");
        break;
      }
      case 9:{
      
        printf("Moved forward nine");
        player+=9;
        break;
      }
      case 10:{
        
        printf("Moved forward ten");
        player+=10;
        break;
      }
  case 11: break;
    
      case 12: {
        printf("Sent back to the beginning!");
        player=0;
        break;
      }
}
    }
}

int welcome(){
  printf("Welcome to sorry! How many players are playing? 4 is the max");
  int players = getPlayer();
  //int dplay[getPlayer()];
  while (players > 4 || players < 1) {
    printf("hey stupid. I said only FOUR players! Now please reenter!");
    players = getPlayer();
  printf("Confirm the amount of players is %d(y/n)",players);
  char yn; cin>>yn;
  if(yn == 'n'){
    printf("Please reenter the amount of players you want");
    players = getPlayer();}
    }
    printf("Confirm the amount of players is %d(y/n)",players);
  char yn; cin>>yn;
  if(yn == 'n'){
    printf("Please reenter the amount of players you want");
    players = getPlayer();}
  return players;
}

void printboardIntial(Board board){
  for (int i = 0; i<61; i++) {
    board.realBoard[i] = block;
    cout<<board.realBoard[i];
    }
}

bool doublesChecker(int roll1, int roll2){
  if (roll1 == roll2) return true;
  return false;
}

int posEqual(int p1, int p2, int p3, int p4){
  if (p1==p2||p1==p3||p1==p4||p2==p3||p2==p4||p3==p4) return true;
  else return false;
}

void switchPlayer(int player, bool posEqual){
  if (posEqual) player = 0;
}

void inLast(){
  
}
void inFirst(){
  
}




int main() {
  //std::cout << "Hello World!\n";
  Board board;
 // int* board[61];
  //char* realBoard[61];
  int players = welcome();
  printboardIntial(board);
  int onPLayer;
    bool canRoll[players];
   for (int i = 0; i<players; i++) {
     canRoll[i] = false;
     }
  int roll1 = diceRoll();
  int roll2 = diceRoll();


}


/*
Update log:
made a function where the player would get pushed back to the beginning if s/he had the same position as another
and added the two fuctions inLast() and inFirst() and did nothing with them because my nose burns and my htraot hurts so I cqn't think as well
*/
