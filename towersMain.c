/*Maryam Ramzaan
 * Lab2: towersMain*/
#include <stdio.h>
#include <stdlib.h>
#include "towers.h"

/*NOTE: There will always be 3 towers, we can only change number of disks*/

int main(int argc, char **argv)
{
    int n = 3;
    int from = 1;
    int dest = 2;
    int numberDisks;
       
switch (argc) {//User inputs something
      case 1:
       //User DOESN'T input anything, assume they want to move 3 disks from Tower 1 to 2.
    
	    towers(n, from, dest);//Execute 3 1 2
		exit(0);
      
      case 2:
       //User only inputs number of disks, assume they want to move disks from Tower 1 to 2.
    	
    	numberDisks = atoi(argv[1]);
    	//check if user inputed a positive whole value of disks
    	if (numberDisks>0){
			towers(numberDisks, from, dest);
			}else{
			fprintf(stderr, "Invalid number of disks.");
    		 exit(1);
    		 }
        break;
        
       case 4:
        //User inputs number of disks AND from one tower to another
                
        numberDisks = atoi(argv[1]);
        int fromID = argv[2][0]- '0';// do - '0' to get rid or error char to int
        int toID = argv[3][0]- '0';
     	
			if (numberDisks>0 && fromID != toID && fromID>0 && fromID<4 && toID>0 && toID<4) { // ensure the tower from and to are not the same
				towers(numberDisks, fromID, toID);
				} else {
				fprintf(stderr, "Error: Your original and destination towers are the same,\n and we do not have more than 3 towers.");
				exit(1); // exit with non-zero status to indicate an error
				}
							
		break;
        	        	
	    default:
        fprintf(stderr, "Error: Incorrect number of arguments.\n");
        exit(1); // exit with non-zero status to indicate an error
	}
	
		return 0;
}
