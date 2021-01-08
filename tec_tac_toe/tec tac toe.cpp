#include <stdio.h>
#include<conio.h>
 int main()
    {
        int i = 0;
        int player = 0;
        int go = 0;
        int row = 0; 
        int column = 0;
        int line = 0;
        int winner = 0;
        char box[3][3] = 
        {
            {'1','2','3'},
            {'4','5','6'},
            {'7','8','9'}
        };
        
        for( i = 0; i<9 && winner==0; i++)
        
        {
            printf("\n\n");
            printf(" %c | %c | %c\n", box[0][0], box[0][1], box[0][2]);
    printf("-----------\n");
            printf(" %c | %c | %c\n", box[1][0], box[1][1], box[1][2]);
    printf("-----------\n");
            printf(" %c | %c | %c\n", box[2][0], box[2][1], box[2][2]);
            
            player = i%2 + 1;
            
            do
            {
    printf("\nPlayer %d, please enter the number of the square "
                     "where you want to place your %c: ", player,(player==1)?'X':'O');
                scanf("%d", &go);
                
                row = --go/3;
                column = go%3;
            }
            while(go<0 || go>9 || box[row][column]>'9');
            
            box[row][column] = (player == 1) ? 'X' : 'O';
            
            if((box[0][0] == box[1][1] && box[0][0] == box[2][2]) ||
               (box[0][2] == box[1][1] && box[0][2] == box[2][0]))
                winner = player;
            else
                
                for(line = 0; line <= 2; line ++)
                    
                    if((box[line][0] == box[line][1] && box[line][0] == box[line][2])||
                       (box[0][line] == box[1][line] && box[0][line] == box[2][line]))
                        winner = player;
            
        }
        printf("\n\n");
        printf(" %c | %c | %c\n", box[0][0], box[0][1], box[0][2]);
    printf("-----------\n");
        printf(" %c | %c | %c\n", box[1][0], box[1][1], box[1][2]);
    printf("-----------\n");
        printf(" %c | %c | %c\n", box[2][0], box[2][1], box[2][2]);
        
        if(winner == 0)
      printf("\nHow boring, Game is a draw!\n");
   else
      printf("\nCongratulations, player %d, YOU ARE THE WINNER!\n", winner);

		getch();
		return 0;

    }

