// Function pseudocode for program that will allow the user to play a one-sided game of BattleShip
// User will be prompted to input the coordinates that they believe the CPU
// has placed a ship, and will be notified if they have hit or missed the ship
// hit ships will be replaced with 'H' and missed ships will be replaced with '.'
// Joseph Chalker CSC 201 
// 04/05/2022

// This functions initializes all elements of a 10x10 2D array with '~'
// Pre: 10x10 2D char array has been declared
// Post: All elements of the 2D array are initialized to '~'
void playerGridInit()
{
	loop over 10 iterations starting from int i = 0 {
		loop over 10 iterations starting from int j = 0 {
			shipGame.playerGrid[i][j] equals shipGame.water // fill a 10 x 10 Character array with water ('~')
		}
	}
}


// This function selects random placement for 5 Battlship boats
// on a 10x10 2D array gameboard, with '#' representing a boat link
// Pre: 10x10 array has been initialized with '~' water chars
// Post: Battleship style boats have been placed on the board
void cpuGridInit()
{

	fill 10 x 10 character array values with water/ocean character ('~')
	fill 5 random spots within the array with ships ('#')
	
}


// This function outputs the current state of a 10x10 2D array to console
// Pre: 10x10 2D array has been declared and all elements contain a char
// Post: The array has been displayed on screen along with numeration along 
//       x and y axis
void outputGrid()
{
	loop over 10 iterations starting from int i = 0 {
		loop over 10 iterations starting from int j = 0 {
        		generate numbers in left margin once per row on the far left, with a space in between the grid and the margin
			Output current value in playerGrid[i][j]
		}
        start a new line
        if on ninth iteration
        	output "  0123456789" underneath the previous line to create margin on bottom axis
        }
}

// This function takes input from player selecting coordinates on grid
// and outputs game result of input to screen
// Pre: 2D array board has been initialized and updated with ships
// Post: 2D array board has been updated with user input,
//       message output to screen with result (hit or miss)
void playerInput(int& x, int& y) {

	prompt user to input the coordinates to check for ships & store result

	if result equals the location of a ship,
		return ship hit
		update player array
	else if ship missed
		return ship missed
		update player array

	while results are outside the range of the array,
		prompt user to enter valid coordinates
		clear previous input 
		store new input

	
}

// This function updates the 2D board according to user input from caller
// Pre: 2D array is initialized and user has entered valid input within coordinates
// Post: Returns to caller true if ship hit, false if a miss
bool checkCoordinates(int x, int y) {                // changing this to bool. I see this function as being called from playerInput. We could have it update
                                                     // the grid by address, or we can just leave this for playerInput (or separate function)
    if the position in the cpu grid array is water
    output that player has not hit a ship
    position in player grid array equals '.' for miss
    else if the position in the cpu grid array is a ship
    output that player has hit a ship
    position in player grid array equals 'H' for hit
}
