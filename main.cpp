#include <iostream>

char field[3][3] = { {'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
bool tie = false;
int counter = 0;
void Check_Win(char token, int counter);
void Update_Field(int num, bool player, char token);
void Print_Field()
{
    std::cout << "      " << "|"<< "      " << "|" << "      " << std::endl;
    std::cout << "   " << field[0][0] << "  " << "|"<< "   "  << field[0][1] << "  "<< "|" << "   " << field[0][2] << "  " << std::endl; 
    std::cout << "      " << "|"<< "      " << "|" << "      " << std::endl;
    std::cout << "------" << "|"<< "------" << "|" << "------" << std::endl;
    std::cout << "      " << "|"<< "      " << "|" << "      " << std::endl;
    std::cout << "   " << field[1][0] << "  " << "|"<< "   "  << field[1][1] << "  "<< "|" << "   " << field[1][2] << "  " << std::endl; 
    std::cout << "      " << "|"<< "      " << "|" << "      " << std::endl;
    std::cout << "------" << "|"<< "------" << "|" << "------" << std::endl;
    std::cout << "      " << "|"<< "      " << "|" << "      " << std::endl;
    std::cout << "   " << field[2][0] << "  " << "|"<< "   "  << field[2][1] << "  "<< "|" << "   " << field[2][2] << "  " << std::endl; 
    std::cout << "      " << "|"<< "      " << "|" << "      " << std::endl;
}

int main()
{
    
    
    char player1 = 'x';
    char player2 = 'o';
    bool player1onMove = true;
    int player1num;
    int player2num;
    Print_Field();

    while(tie != true)
    {
        
        if(player1onMove)
        {
            std::cout << "Player 1 enter number: ";
            std::cin >> player1num;
            if(player2num == player1num)
            {
                std::cout << "Field already taken please enter a different number" << std::endl;
            }
            else if(player1num != player2num)
            {
            counter++;
            player1onMove = false;
            Update_Field(player1num, player1onMove, player1);
            Print_Field();
            Check_Win(player1, counter);
            }
            
        }
        else if(!player1onMove)
        {
            std::cout << "Player 2 enter a number: ";
            std::cin >> player2num;
            if(player2num == player1num)
            {
                std::cout << "Field already taken please enter a different number" << std::endl;
            }
            else if (player2num != player1num)
            {
                counter++;
                Update_Field(player2num, player1onMove, player2);
                Print_Field();
                Check_Win(player2, counter);
                player1onMove = true;    
                
            }
            
            
        }
        



    }

    return 0;
}

void Update_Field(int num, bool player, char token)
{
    if(num == 1 && field[0][0] == '1')
    {
        field[0][0] = token;
    }
    if(num == 2 && (field[0][0] != 'x' || field[0][0] != 'o'))
    {
        field[0][1] = token;
    }
    if(num == 3 && (field[0][0] != 'x' || field[0][0] != 'o'))
    {
        field[0][2] = token;
    }
    if(num == 4 && (field[0][0] != 'x' || field[0][0] != 'o'))
    {
        field[1][0] = token;
    }
    if(num == 5 && (field[0][0] != 'x' || field[0][0] != 'o'))
    {
        field[1][1] = token;
    }
    if(num == 6 && (field[0][0] != 'x' || field[0][0] != 'o'))
    {
        field[1][2] =token;
    }
    if(num == 7 && (field[0][0] != 'x' || field[0][0] != 'o'))
    {
        field[2][0] = token;
    }
    if(num == 8 && (field[0][0] != 'x' || field[0][0] != 'o'))
    {
        field[2][1] = token;
    }
    if(num == 9 && (field[0][0] != 'x' || field[0][0] != 'o'))
    {
        field[2][2] = token;
    }


}

void Check_Win(char token, int counter)
{

    if(field[0][0] == token && field [0][1] == token && field [0][2] == token)
    {
        if(token == 'x')
        {
            std::cout << "Player 1 wins\n";
            tie = true;
        }
        if(token == '0')
        {
            std::cout << "Player 2 wins\n";
            tie = true;
        }
    }
    else if(field[1][0] == token && field [1][1] == token && field [1][2] == token)
    {
        if(token == 'x')
        {
            std::cout << "Player 1 wins\n";
            tie = true;
        }
        if(token == '0')
        {
            std::cout << "Player 2 wins\n";
            tie = true;
        }
    }
    else if(field[2][0] == token && field [2][1] == token && field [2][2] == token)
    {
        if(token == 'x')
        {
            std::cout << "Player 1 wins\n";
            tie = true;
        }
        if(token == '0')
        {
            std::cout << "Player 2 wins\n";
            tie = true;
        }
    }
    else if(field[0][0] == token && field [1][0] == token && field [2][0] == token)
    {
        if(token == 'x')
        {
            std::cout << "Player 1 wins\n";
            tie = true;
        }
        if(token == '0')
        {
            std::cout << "Player 2 wins\n";
            tie = true;
        }
    }
    else if(field[0][1] == token && field [1][1] == token && field [2][1] == token)
    {
        if(token == 'x')
        {
            std::cout << "Player 1 wins\n";
            tie = true;
        }
        if(token == '0')
        {
            std::cout << "Player 2 wins\n";
            tie = true;
        }
    }
    else if(field[0][1] == token && field [1][1] == token && field [2][1] == token)
    {
        if(token == 'x')
        {
            std::cout << "Player 1 wins\n";
            tie = true;
        }
        if(token == '0')
        {
            std::cout << "Player 2 wins\n";
            tie = true;
        }
    }
    else if(field[0][0] == token && field [1][1] == token && field [2][2] == token)
    {
        if(token == 'x')
        {
            std::cout << "Player 1 wins\n";
            tie = true;
        }
        if(token == '0')
        {
            std::cout << "Player 2 wins\n";
            tie = true;
        }
    }
    else if(field[0][2] == token && field [1][1] == token && field [2][0] == token)
    {
        if(token == 'x')
        {
            std::cout << "Player 1 wins\n";
            tie = true;
        }
        if(token == '0')
        {
            std::cout << "Player 2 wins\n";
            tie = true;
        }
    }
    else if(counter == 9)
    {
        std::cout << "It's a tie\n";
        tie = true;
    }
}