//tic-tac-toe

#include <stdio.h>
#include <stdlib.h>
void sdisplay();
void delay(int n);
void edisplay();
void p1win();
void p2win();
void gameover();

int main()
{
    int in1,in2,i,j,k,choice,me,go1,go2;
    // char game[3][3]={'.','.','.','.','.','.','.','.','.'};
    // char game[3][3]={'1','2','3','4','5','6','7','8','9'};
    Mmenu:      system("cls");
                char game[3][3]={'1','2','3','4','5','6','7','8','9'};
                sdisplay();
                system("cls");
                printf("\t\t\t\t\t\t\033[1;33mO\033[0m-\033[1;35mTIC\033[0m-\033[1;31mTAC\033[0m-\033[1;34mTOE\033[0m-\033[1;33mX\033[0m\n");

                printf("\n\n");
                printf("\t\t\t\t\t\t\033[1;33m  1.Play Game\033[0m\n");
                printf("\t\t\t\t\t\t\033[1;33m  2.Quit Game\033[0m\n");
                scanf("%d", &me);

                if(me==1)
                {
                system("cls");
                goto playgame;
                }
                else if(me==2)
                {
                    system("cls");
                    edisplay();
                    return 0;
                }
                else{
                    goto Mmenu;
                }
    playgame:
                for(i=0;i<3;i++)
                {
                    for(j=0;j<3;j++)
                    {
                        printf(" %c ", game[i][j]);
                    if(j==0 || j==1)
                        {
                            printf("|");
                        }                                   
                    }
                    if(i==0 || i==1)
                    {
                        printf("\n---|---|---\n");
                    }
                    else if(i==2)
                    {
                        printf("\n\n");
                    }
                            
                }

            player1:
                        printf("Player 1 : choice the box where you want to give input(1 to 9)");
                        
                        scanf("%d", &choice);

                            // puttinng O inplace of box numbers
                            switch (choice)
                            {
                            case 1:
                            game[0][0]='O';
                                break;
                            case 2:
                            game[0][1]='O';
                                break;
                            case 3:
                            game[0][2]='O';
                                break;
                            case 4:
                            game[1][0]='O';
                                break;
                            case 5:
                            game[1][1]='O';
                                break;
                            case 6:
                            game[1][2]='O';
                                break;
                            case 7:
                            game[2][0]='O';
                                break;
                            case 8:
                            game[2][1]='O';
                                break;
                            case 9:
                            game[2][2]='O';
                                break;
                            default:
                            printf("Error occured!!");
                                break;
                            }

                            if(choice>9 || choice <1)
                            {
                                system("cls");
                                return 0;
                            }

                            system("cls");

                            for(i=0;i<3;i++)
                            {
                                for(j=0;j<3;j++)
                                {
                                    if(game[i][j]=='1' || game[i][j]=='2' || game[i][j]=='3' || game[i][j]=='4' || game[i][j]=='5' || game[i][j]=='6' || game[i][j]=='7' || game[i][j]=='8' || game[i][j]=='9')
                                    {
                                        printf(" %c ", game[i][j]);
                                    }
                                    else if(game[i][j]=='O')
                                    {
                                        printf("\033[1;33m %c \033[0m", game[i][j]);
                                    }
                                    else if(game[i][j]=='X' )
                                    {
                                        printf("\033[1;36m %c \033[0m", game[i][j]);
                                    } 

                                    if(j==0 || j==1)
                                        {
                                            printf("|");
                                        }                                   
                                }
                                        if(i==0 || i==1)
                                        {
                                            printf("\n---|---|---\n");
                                        }
                                        else if(i==2)
                                        {
                                            printf("\n\n");
                                        }
                            }
                if(game[0][0]=='O' && game[0][1]=='O' && game[0][2]=='O')
                {
                    delay(1000000000);
                    p1win();
                    gameover();
                    scanf("%d", &go1);

                    switch (go1)
                    {
                    case 1:
                        goto Mmenu;
                        break;
                    case 2:
                        edisplay();
                        return 0;
                        break;    
                    default:
                        goto Mmenu;
                        break;
                    }
                }
                else if(game[1][0]=='O' && game[1][1]=='O' && game[1][2]=='O')
                {
                    delay(1000000000);
                    p1win();
                    gameover();
                    scanf("%d", &go1);

                    switch (go1)
                    {
                    case 1:
                        goto Mmenu;
                        break;
                    case 2:
                        edisplay();
                        return 0;
                        break;    
                    default:
                        goto Mmenu;
                        break;
                    }
                }
                else if(game[2][0]=='O' && game[2][1]=='O' && game[2][2]=='O')
                {
                    delay(1000000000);
                    p1win();
                    gameover();
                    scanf("%d", &go1);

                    switch (go1)
                    {
                    case 1:
                        goto Mmenu;
                        break;
                    case 2:
                        edisplay();
                        return 0;
                        break;    
                    default:
                        goto Mmenu;
                        break;
                    }
                }
                else if(game[0][0]=='O' && game[1][0]=='O' && game[2][0]=='O')
                {
                    delay(1000000000);
                    p1win();
                    gameover();
                    scanf("%d", &go1);

                    switch (go1)
                    {
                    case 1:
                        goto Mmenu;
                        break;
                    case 2:
                        edisplay();
                        return 0;
                        break;    
                    default:
                        goto Mmenu;
                        break;
                    }
                }
                else if(game[0][1]=='O' && game[1][1]=='O' && game[2][1]=='O')
                {
                    delay(1000000000);
                    p1win();
                    gameover();
                    scanf("%d", &go1);

                    switch (go1)
                    {
                    case 1:
                        goto Mmenu;
                        break;
                    case 2:
                        edisplay();
                        return 0;
                        break;    
                    default:
                        goto Mmenu;
                        break;
                    }
                }
                else if(game[0][2]=='O' && game[1][2]=='O' && game[2][2]=='O')
                {
                    delay(1000000000);
                    p1win();
                    gameover();
                    scanf("%d", &go1);

                    switch (go1)
                    {
                    case 1:
                        goto Mmenu;
                        break;
                    case 2:
                        edisplay();
                        return 0;
                        break;    
                    default:
                        goto Mmenu;
                        break;
                    }
                }
                else if(game[0][0]=='O' && game[1][1]=='O' && game[2][2]=='O')
                {
                    delay(1000000000);
                    p1win();
                    gameover();
                    scanf("%d", &go1);

                    switch (go1)
                    {
                    case 1:
                        goto Mmenu;
                        break;
                    case 2:
                        edisplay();
                        return 0;
                        break;    
                    default:
                        goto Mmenu;
                        break;
                    }
                }
                else if(game[0][2]=='O' && game[2][0]=='O' && game[1][1]=='O')
                {
                    delay(1000000000);
                    p1win();
                    gameover();
                    scanf("%d", &go1);

                    switch (go1)
                    {
                    case 1:
                        goto Mmenu;
                        break;
                    case 2:
                        edisplay();
                        return 0;
                        break;    
                    default:
                        goto Mmenu;
                        break;
                    }
                }
                else if(game[0][0]!='1' && game[0][1]!='2' && game[0][2]!='3' && game[2][0]!='7' && game[2][1]!='8' && game[2][2]!='9' && game[1][0]!='4' && game[1][1]!='5' && game[1][2]!='6')
                {
                    printf("\n\nMATCH IS TIE!!!\n\n");
                    edisplay();
                    return 0;
                }
                else{
                    goto player2;
                }

                player2:
                        printf("Player 2 : choice the box where you want to give input(1 to 9)");
                        
                        scanf("%d", &choice);

                        // puttinng X inplace of box numbers
                            switch (choice)
                            {
                            case 1:
                            game[0][0]='X';
                                break;
                            case 2:
                            game[0][1]='X';
                                break;
                            case 3:
                            game[0][2]='X';
                                break;
                            case 4:
                            game[1][0]='X';
                                break;
                            case 5:
                            game[1][1]='X';
                                break;
                            case 6:
                            game[1][2]='X';
                                break;
                            case 7:
                            game[2][0]='X';
                                break;
                            case 8:
                            game[2][1]='X';
                                break;
                            case 9:
                            game[2][2]='X';
                                break;
                            default:
                            printf("Error occured!!");
                                break;
                            }

                            if(choice>9 || choice <1)
                            {
                                system("cls");
                                return 0;
                            }

                            system("cls");

                            for(i=0;i<3;i++)
                            {
                                for(j=0;j<3;j++)
                                {
                                    if(game[i][j]=='1' || game[i][j]=='2' || game[i][j]=='3' || game[i][j]=='4' || game[i][j]=='5' || game[i][j]=='6' || game[i][j]=='7' || game[i][j]=='8' || game[i][j]=='9')
                                    {
                                        printf(" %c ", game[i][j]);
                                    }
                                    else if(game[i][j]=='O')
                                    {
                                        printf("\033[1;33m %c \033[0m", game[i][j]);
                                    }
                                    else if(game[i][j]=='X' )
                                    {
                                        printf("\033[1;36m %c \033[0m", game[i][j]);
                                    } 
                                    if(j==0 || j==1)
                                        {
                                            printf("|");
                                        }                                   
                                }
                                        if(i==0 || i==1)
                                        {
                                            printf("\n---|---|---\n");
                                        }
                                        else if(i==2)
                                        {
                                            printf("\n\n");
                                        }
                            }
                if(game[0][0]=='X' && game[0][1]=='X' && game[0][2]=='X')
                {
                    delay(1000000000);
                    p2win();
                    gameover();
                    scanf("%d", &go1);

                    switch (go1)
                    {
                    case 1:
                        goto Mmenu;
                        break;
                    case 2:
                        edisplay();
                        return 0;
                        break;    
                    default:
                        goto Mmenu;
                        break;
                    }
                }
                else if(game[1][0]=='X' && game[1][1]=='X' && game[1][2]=='X')
                {
                    delay(1000000000);
                    p2win();
                    gameover();
                    scanf("%d", &go1);

                    switch (go1)
                    {
                    case 1:
                        goto Mmenu;
                        break;
                    case 2:
                        edisplay();
                        return 0;
                        break;    
                    default:
                        goto Mmenu;
                        break;
                    }
                }
                else if(game[2][0]=='X' && game[2][1]=='X' && game[2][2]=='X')
                {
                    delay(1000000000);
                    p2win();
                    gameover();
                    scanf("%d", &go1);

                    switch (go1)
                    {
                    case 1:
                        goto Mmenu;
                        break;
                    case 2:
                        edisplay();
                        return 0;
                        break;    
                    default:
                        goto Mmenu;
                        break;
                    }
                }
                else if(game[0][0]=='X' && game[1][0]=='X' && game[2][0]=='X')
                {
                    delay(1000000000);
                    p2win();
                    gameover();
                    scanf("%d", &go1);

                    switch (go1)
                    {
                    case 1:
                        goto Mmenu;
                        break;
                    case 2:
                        edisplay();
                        return 0;
                        break;    
                    default:
                        goto Mmenu;
                        break;
                    }
                }
                else if(game[0][1]=='X' && game[1][1]=='X' && game[2][1]=='X')
                {
                    delay(1000000000);
                    p2win();
                    gameover();
                    scanf("%d", &go1);

                    switch (go1)
                    {
                    case 1:
                        goto Mmenu;
                        break;
                    case 2:
                        edisplay();
                        return 0;
                        break;    
                    default:
                        goto Mmenu;
                        break;
                    }
                }
                else if(game[0][2]=='X' && game[1][2]=='X' && game[2][2]=='X')
                {
                    delay(1000000000);
                    p2win();
                    gameover();
                    scanf("%d", &go1);

                    switch (go1)
                    {
                    case 1:
                        goto Mmenu;
                        break;
                    case 2:
                        edisplay();
                        return 0;
                        break;    
                    default:
                        goto Mmenu;
                        break;
                    }
                }
                else if(game[0][0]=='X' && game[1][1]=='X' && game[2][2]=='X')
                {
                    delay(1000000000);
                    p2win();
                    gameover();
                    scanf("%d", &go1);

                    switch (go1)
                    {
                    case 1:
                        goto Mmenu;
                        break;
                    case 2:
                        edisplay();
                        return 0;
                        break;    
                    default:
                        goto Mmenu;
                        break;
                    }
                }
                else if(game[0][2]=='X' && game[2][0]=='X' && game[1][1]=='X')
                {
                    delay(1000000000);
                    p2win();
                    gameover();
                    scanf("%d", &go1);

                    switch (go1)
                    {
                    case 1:
                        goto Mmenu;
                        break;
                    case 2:
                        edisplay();
                        return 0;
                        break;    
                    default:
                        goto Mmenu;
                        break;
                    }
                }
                else if(game[0][0]!='1' && game[0][1]!='2' && game[0][2]!='3' && game[2][0]!='7' && game[2][1]!='8' && game[2][2]!='9' && game[1][0]!='4' && game[1][1]!='5' && game[1][2]!='6')
                {
                    printf("\n\nMATCH IS TIE!!!\n\n");
                    edisplay();
                    return 0;
                }
                else{
                    goto player1;
                }




 
                return 0;
}

void delay(int n)
{
    int i,k;

    for(i=0;i<n;i++)
    {
        k=1;
    }
}

void sdisplay()
{
    int i;
    printf("\033[1;34m Loading \033[0m");
    for ( i = 0; i < 10; i++)
    {
        delay(100000000);
        printf("\033[1;34m_\033[0m");
        delay(100000000);
        printf("\033[1;35m_\033[0m");
        delay(100000000);
        printf("\033[1;31m_\033[0m");
        delay(100000000);
        printf("\033[1;32m_\033[0m");

    }
}

void edisplay()
{
    int i,j,k;
    for ( i = 0; i < 5; i++)
    {
       system("cls");
       for ( j = 0; j < i; j++)
       {
           printf("\n");
       }

       printf("\t\t\t\t\t\t\t\033[1;36m<<<<QUITING GAME>>>\033[0m");
       delay(1000000000);
       system("cls");
    }
    
}

void p1win()
{
int i,j,k;
    for ( i = 0; i < 8; i++)
    {
       system("cls");
       for ( j = 0; j < i; j++)
       {
           printf("\n");
       }

       printf("\t\t\t\t\t\t\t\033[1;32m<<<<PLAYER 1 WIN!!!>>>>\033[0m");
       delay(1000000000);
       system("cls");
    }
}

void p2win()
{
int i,j,k;
    for ( i = 0; i < 8; i++)
    {
       system("cls");
       for ( j = 0; j < i; j++)
       {
           printf("\n");
       }

       printf("\t\t\t\t\t\t\t\033[1;32m<<<<PLAYER 2 WIN!!!>>>>\033[0m");
       delay(1000000000);
       system("cls");
    }
}


void gameover()
{
                system("cls");
                sdisplay();
                system("cls");
                printf("\t\t\t\t\t\t\033[1;33mO\033[0m-\033[1;35mGAME\033[0m\033[1;31m OVER\033[0m-\033[1;33mX\033[0m\n");

                printf("\n\n");
                printf("\t\t\t\t\t\t\033[1;33m 1.Play Again\033[0m\n");
                printf("\t\t\t\t\t\t\033[1;33m 2.Quit Game\033[0m\n");
}
