//Task 3

#include <iostream>
using namespace std;

    int choice, row, col;
    char player;
    bool draw=false;
    char board[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};

void dis_Board();
void turn();
bool gameover();

int main(){
    char repeat;
    do{ cout<<"\t\tTIC-TAC-TOE GAME.\n\n";
        board[0][0]='1';board[0][1]='2';board[0][2]='3';
        board[1][0]='4';board[1][1]='5';board[1][2]='6';
        board[2][0]='7';board[2][1]='8';board[2][2]='9';
        player='X';
        do {
            dis_Board();
            turn();
            gameover();
        } while (gameover()==true);
        if (player=='X' && draw==false)
        {
        cout<<"\nPLAYER O WINS!\n";
        }
        else if (player=='O' && draw==false)
        {
        cout<<"\nPLAYER X WINS!\n";
        }
        else {
            cout<<"The game is draw.\n";
        }
        do {cout<<"Would you like to play again?(Y/y or N/n)\n";
        cin>>repeat;}
    while(repeat!='Y'&&repeat!='y'&&repeat!='N'&&repeat!='n');
   }
   while (repeat=='Y'||repeat=='y');

    return 0;
}

void dis_Board(){

    cout<<"\t\t|\t\t|\n";
    cout<<"\t"<<board[0][0]<<"\t|\t"<<board[0][1]<<"\t|\t"<<board[0][2]<<"\n";
    cout<<"________________|_______________|________________\n";
    cout<<"\t\t|\t\t|\n";
    cout<<"\t"<<board[1][0]<<"\t|\t"<<board[1][1]<<"\t|\t"<<board[1][2]<<"\n";
    cout<<"________________|_______________|________________\n";
    cout<<"\t\t|\t\t|\n";
    cout<<"\t"<<board[2][0]<<"\t|\t"<<board[2][1]<<"\t|\t"<<board[2][2]<<"\n";
    cout<<"\t\t|\t\t|\n";
if (gameover()==true)
{
    cout<<"ongoing";
}
else {cout<<"finished";}
cout<<endl<<endl;

}

void turn(){

    if (player=='X')
    {
        cout<<"X's turn: ";
    }
    else if (player=='O')
    {
        cout<<"O's turn: ";
    }
    do {cin>>choice;
        if (choice<0 || choice>9){
            cout<<"Input correct choice from 1-9.\n";
        }
        }
    while (choice<0 || choice>9);


        switch (choice)
        {
        case 1: 
            row=0;col=0;
        break;
        case 2: 
            row=0;col=1;
        break;
        case 3: 
            row=0;col=2;
        break;
        case 4: 
            row=1;col=0;
        break;
        case 5: 
            row=1;col=1;
        break;
        case 6: 
            row=1;col=2;
        break;
        case 7: 
            row=2;col=0;
        break;
        case 8: 
            row=2;col=1;
        break;
        case 9: 
            row=2;col=2;
        break;
       }

    if (player=='X'&&board[row][col]!='X'&&board[row][col]!='O'){
        board[row][col]='X';
        player='O';
    }
    else if (player=='O'&&board[row][col]!='X'&&board[row][col]!='O'){
        board[row][col]='O';
        player='X';
    }
    else {
        cout<<"The space is already filled.\n";
        turn();}
    dis_Board();
}

bool gameover(){

    for (int i = 0; i < 3; i++)
    {
        if (board[i][0]==board[i][1]&&board[i][0]==board[i][2]||board[0][i]==board[1][i]&&board[0][i]==board[2][i])
        {
            return false;
        }
    }
    
    if (board[0][0]==board[1][1]&&board[0][0]==board[2][2]||board[2][0]==board[1][1]&&board[2][0]==board[0][2])
    {
        return false;
    }
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (board[i][j]!='X' && board[i][j]!='O')
            {
                return true;
            }
        }
    }

    draw=true;
    return false;
}