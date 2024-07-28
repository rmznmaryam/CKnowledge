README
COE 428
Maryam Ramzaan
Student ID: 501189038
Date: Jan, 29th, 2024

Requirement 1:

1. Answer:

When towers(5, 2, 3) is called, the first recursive call shows the first action done to ensure that 5 disks move from tower 2 to tower 3, so, in this case, the first recursive call is:
	towers(4,2,1).
According to the logic used for the Towers of Hanoi, to start moving blocks we start by moving the first and smallest block to the tower 1, the tower that is not in the initial call, and serves as a container for holding blocks until it is correctly organized from biggest to smallest.

2. Answer:

It will need 5 recursive calls to return to disk 0, and then go back to the initial invocation. 

3.The first recursive call, towers(4,2,1) will move the first and topmost disk on tower 2 to tower 3. So 
	2 3
 will be printed to stdout.

4. 
The second recursive call to towers will be 
	towers(3, 2, 3)
because in order to stack the two disks that formerly used to be on the top of tower 2, the smaller one must be on tower 1 so the second disk (from the second recursive call) can go on the third tower.

5. There will be 255 lines of code for towers(8, 1, 2)


Summary:
In this lab, I editted the given code to produce different outputs based on the user's input. 
If the user did not input anything, the code assume they want to see 3 disks moving from tower 1 to tower 2. If the user only inputs one number, that number is the number of disks to be moved from tower 1 to 2.
Lastly, if the user inputs three numbers the first one is the number of disks, the second is the tower it is currently in, and the third is the destination tower. This is all completed by the tower function.
I was also able to use stderr as i used error messages to inform the user if a negative number of disks were inputted, or if the user's original and destination towers were the same.
