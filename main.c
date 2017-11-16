#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <dos.h>


void dice(char top[],char mid[],char bottom[] ){
printf("   +---------+                 +---------+\n"); 
printf("  /         /|                /         /|\n");
printf(" /         / |               /         / |\n");
printf("+---------+  |              +---------+  |\n");
printf("|%c       %c|  |              |%c       %c|  |\n",top[0],top[1],top[2],top[3]);
printf("|         |  |              |         |  |\n");
printf("|%c   %c   %c|  +              |%c   %c   %c|  +\n",mid[0],mid[1],mid[2],mid[3],mid[4],mid[5]);
printf("|         | /               |         | /\n");
printf("|%c       %c|/                |%c       %c|/\n",bottom[0],bottom[1],bottom[2],bottom[3]);
printf("+---------+                 +---------+\n");   
    
}



int random(){
    
    
    
     int r = rand() % ((5 +1 - 0) + 0);
    
    return r;
    
    }

int main(int argc, char **argv)
{
    
    
    srand(time(NULL));
    
    while(1){
        
        
       system("cls"); 
char top [4];
char mid [6];
char bottom [4];
    
    int x = 4;
    int y = 3;


   
    x = random();
    y = random();
   
    
    switch (x){
        
      case 0 :
      top[0] = ' ';
      top[1] = ' ';
      mid[0] =' ';
      mid[1] = '*';
      mid[2] = ' ';
      bottom[0] = ' ';
      bottom[1] = ' ';
      break;
      
      case 1 :
      top[0] = ' ';
      top[1] = '*';
      mid[0] =' ';
      mid[1] = ' ';
      mid[2] = ' ';
      bottom[0] = '*';
      bottom[1] = ' ';
      break;
      
      case 2 : 
      top[0] = ' ';
      top[1] = '*';
      mid[0] =' ';
      mid[1] = '*';
      mid[2] = ' ';
      bottom[0] = '*';
      bottom[1] = ' ';
      break;
      
      case 3 :
      top[0] = '*';
      top[1] = '*';
      mid[0] =' ';
      mid[1] = ' ';
      mid[2] = ' ';
      bottom[0] = '*';
      bottom[1] = '*';
      break;
      
      case 4 :
      top[0] = '*';
      top[1] = '*';
      mid[0] =' ';
      mid[1] = '*';
      mid[2] = ' ';
      bottom[0] = '*';
      bottom[1] = '*';
      break;
      
      case 5 :
        top[0] = '*';
      top[1] = '*';
      mid[0] ='*';
      mid[1] = ' ';
      mid[2] = '*';
      bottom[0] = '*';
      bottom[1] = '*';
        break;
        
        }
    
   switch (y){
        
      case 0 :
      top[2] = ' ';
      top[3] = ' ';
      mid[3] =' ';
      mid[4] = '*';
      mid[5] = ' ';
      bottom[2] = ' ';
      bottom[3] = ' ';
      break;
      
      case 1 :
      top[2] = ' ';
      top[3] = '*';
      mid[3] =' ';
      mid[4] = ' ';
      mid[5] = ' ';
      bottom[2] = '*';
      bottom[3] = ' ';
      break;
      case 2 : 
      top[2] = ' ';
      top[3] = '*';
      mid[3] =' ';
      mid[4] = '*';
      mid[5] = ' ';
      bottom[2] = '*';
      bottom[3] = ' ';
      break;
      
      case 3 :
      top[2] = '*';
      top[3] = '*';
      mid[3] =' ';
      mid[4] = ' ';
      mid[5] = ' ';
      bottom[2] = '*';
      bottom[3] = '*';
      break;
      
      case 4 :
      top[2] = '*';
      top[3] = '*';
      mid[3] =' ';
      mid[4] = '*';
      mid[5] = ' ';
      bottom[2] = '*';
      bottom[3] = '*';
      break;
      
      case 5 :
      top[2] = '*';
      top[3] = '*';
      mid[3] ='*';
      mid[4] = ' ';
      mid[5] = '*';
      bottom[2] = '*';
      bottom[3] = '*';
        break;
        
        } 
    
    dice(top,mid,bottom);
    
    getchar();
    
}

return 0;
}