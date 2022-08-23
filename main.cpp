//I'm really bad at coding but I really want to get better because I want to go into a programming career. 
// working on using functions but I still use the main because I've still got my training wheels on
//last updated: 23/8 1:11pm


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

void playerMovement(int player,int roll){
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
        e++;
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
    
      case: 12 {
        
        printf("Sent back to the beginning!");
        player=0;
        break;
      }
  
  
}
  
  
  

  
}
int welcome(){
  printf("Welcome to sorry! How many players are playing? 4 is the max");
  int players = getPlayer();
  //int dplay[getPlayer()];
  while (players > 4 || players < 1) {
    printf("hey stupid. I said only FOUR players! Now please reenter!");
    players = getPlayer();}
  printf("Confirm the amount of players is %d(y/n)",players);
  char yn; cin>>yn;
  if(yn == 'n'){
    printf("Please reenter the amount of players you want");
    players = getPlayer();}

  return players;
}






int main() {
  //std::cout << "Hello World!\n";
  welcome();
  int players;
}


/*
Update log:
Made the welcome message have a validation system for the amount of players
Also started working on player movement(copied from the last project with changes)
*/
