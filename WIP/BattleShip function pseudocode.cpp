// Function pseudocode for program that will allow the user to play a one-sided game of BattleShip
// User will be prompted to input the coordinates that they believe the CPU
// has placed a ship, and will be notified if they have hit or missed the ship
// hit ships will be replaced with 'H' and missed ships will be replaced with '.'
// Joseph Chalker CSC 201 
// 04/05/2022

/*------------------------Preconditions-------------------------
shipGame.playerGrid[9][9] has been initialized and is accessible
shipGame.water has been initialized and has a char value stored
--------------------------------------------------------------*/
void playerGridInit()
{
	loop over 10 iterations starting from int i = 0 {
		loop over 10 iterations starting from int j = 0 {
			shipGame.playerGrid[i][j] equals shipGame.water // fill a 10 x 10 Character array with water ('~')
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

	fill 10 x 10 character array values with water/ocean character ('~')
	fill 5 random spots within the array with ships ('#')
	
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
/*------------------------Postconditions-------------------------
The array has been output to the console in a 10 x 10 grid with
margins on the x & y axis to designate their coordinates on grid
--------------------------------------------------------------*/

/*------------------------Preconditions-------------------------
integer values have been passed by reference to int x & int y,
as arguments of playerInput
shipGame.playerGrid[9][9] has been initialized and is accessible
--------------------------------------------------------------*/
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
/*------------------------Postconditions-------------------------
a message has been output to the player to input values for X & Y
Player has input valid int x & int y values
-----------------------------------------------------------------*/

/*------------------------Preconditions-------------------------
integer values have been passed to int x & int y as arguments of checkCoordinates
shipGame.cpuGrid[9][9] has been initialized and is accessible
shipGame.playerGrid[9][9] has been initialized and is accessible
----------------------------------------------------------------*/
void checkCoordinates(int x, int y) {

    if the position in the cpu grid array is water
    output that player has not hit a ship
    position in player grid array equals '.' for miss
    else if the position in the cpu grid array is a ship
    output that player has hit a ship
    position in player grid array equals 'H' for hit
}
/*------------------------Postconditions-------------------------
The player has been notified via the console whether or not they
have missed a ship, or hit a ship, and the array is updated accordingly
-----------------------------------------------------------------*/