// A program that will allow the user to play a one-sided game of BattleShip
// User will be prompted to input the coordinates that they believe the CPU
// has placed a ship, and will be notified if they have hit or missed the ship
// hit ships will be replaced with 'H' and missed ships will be replaced with '.'
#include <iostream>         //libraries
#include <stdlib.h>
#include <time.h>

using namespace std;

void playerGridInit();     // function prototypes
void cpuGridInit();
void outputGrid();
void generateGrid();
void playerInput(int& x, int& y);
void checkCoordinates(int x, int y);


struct battleShip {
    char playerGrid[9][9];    // 10x10 grid
    char cpuGrid[9][9];       // 10x10 grid
    char water = '~';
    char ship = '#';
    char hit = 'H';
    char miss = '.';

    const int numOfShips = 5; // number of ships placed on the board during generation
};

battleShip shipGame;

int main()
{
    int playerX, playerY;
    bool gameOver = false;

    playerGridInit();                                 // fill player array with water symbols
    cpuGridInit();                                    // fill cpu grid with data
    while(gameOver == false)
    {
        outputGrid();                                 // output array
        playerInput(playerX, playerY);                // get x and y coordinates from player

        //cout << playerX << ' ' << playerY << endl;  // test player input

        checkCoordinates(playerX, playerY);
    }

return 0;
}
/*------------------------Preconditions-------------------------
shipGame.playerGrid[9][9] has been initialized and is accessible
--------------------------------------------------------------*/
void playerGridInit()
{
	for(int i = 0; i<=9;i++) {                          // 10x10 grid with nested for loops
		for(int j = 0; j<=9;j++) {
			shipGame.playerGrid[i][j] = shipGame.water; // position in array = water
		}
	}
}
/*------------------------Postconditions-------------------------
shipGame.playerGrid[9][9] array has been filled with shipGame.water
--------------------------------------------------------------*/


/*------------------------Preconditions-------------------------
shipGame.cpuGrid[9][9] has been initialized and is accessible
shipGame.water has been initialized and has a char value stored
--------------------------------------------------------------*/
void cpuGridInit()
{
    //srand(time(NULL));
    //int seed = rand();

	for(int i = 0; i<=9;i++) {                          // 10x10 grid with nested for loops
		for(int j = 0; j<=9;j++) {
			shipGame.cpuGrid[i][j] = shipGame.water;    // position in array = water
		}
	}
}
/*------------------------Postconditions-------------------------
shipGame.cpuGrid[9][9] array has been filled with shipGame.water
five seperate values with shipGame.cpuGrid[9][9] have also been
filled with shipGame.ship
--------------------------------------------------------------*/


/*------------------------Preconditions-------------------------
shipGame.playerGrid[9][9] has been initialized and is accessible
--------------------------------------------------------------*/
void outputGrid()
{
	int k = -1;                                 // used to generate numbers in margin
	for(int i = 0; i<=9;i++) {                  // 10x10 grid with nested for loops
		for(int j = 0; j<=9;j++) {
                if (j == 0) {                   // only generate numbers in margin once per row on the left
                    k = k + 1;
                    cout << k << " ";
                }
			cout << shipGame.playerGrid[i][j]; // output game tile
		}
        cout << endl;
        if(i == 9){
            cout << "  0123456789\n";           // generate bottom margins after grid has finished outputting
        }                                       // on the line below it
	}
}
/*------------------------Postconditions-------------------------
The array has been output to the console in a 10 x 10 grid with
margins on the x & y axis to designate their coordinates on grid
--------------------------------------------------------------*/


/*------------------------Preconditions-------------------------
integer values have been passed by reference to int x & int y,
as arguments of playerInput
shipGame.playerGrid[9][9] has been initialized and is accessible
--------------------------------------------------------------*/
void playerInput(int& x, int& y)
{
    cout << "Please enter the set of X and Y coordinates you would like to target and press enter\n"; // prompt user to input values for int x & int y
    cout << "placing a space in-between each of the coordinates, or pressing enter after each one\n";

    cin >> x >> y;                                                                                    // store x & y values

    while( x < 0 || x > 9 || y < 0 || y > 9){                                                         // while the values are outside of the range of the array
        cout << "Please enter a valid set of coordinates\n";                                          // prompt user to input valid set of coordinates & clear input

        cin.clear();
        cin.ignore(1000,'\n');

        cin >> x >> y;
    }
}
/*------------------------Postconditions-------------------------
a message has been output to the player to input values for X & Y
Player has input valid int x & int y values
-----------------------------------------------------------------*/


/*------------------------Preconditions-------------------------
integer values have been passed to int x & int y as arguments of checkCoordinates
shipGame.cpuGrid[9][9] has been initialized and is accessible
shipGame.playerGrid[9][9] has been initialized and is accessible
----------------------------------------------------------------*/
void checkCoordinates(int x, int y)
{
    if(shipGame.cpuGrid[x][y] = shipGame.water) {           // if the position in the cpu grid array is water
        cout << "You did not hit a ship\n";                 // output that player has not hit a ship
        shipGame.playerGrid[x][y] = shipGame.miss;          // position in player grid array equals '.' for miss
    } else if(shipGame.cpuGrid[x][y] = shipGame.ship) {     // if the position in the cpu grid array is a ship
        cout << "You have hit a ship, congrats!\n";         // output that player has hit a ship
        shipGame.playerGrid[x][y] = shipGame.hit;           // position in player grid array equals 'H' for hit
    }

}
/*------------------------Postconditions-------------------------
The player has been notified via the console whether or not they
have missed a ship, or hit a ship, and the array is updated accordingly
-----------------------------------------------------------------*/
