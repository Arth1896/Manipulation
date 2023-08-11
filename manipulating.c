// MANIPULATING SOURCE
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80    
#include "manipulating.h" 

int main(void)
{
	manipulating();
}

/*
   Input: Get two sting inputs from the user
   Process: Concatenates the two string without any whitespaces in between
   Output: Displays the concatenated string to user.
*/

void manipulating(void) {

	/* Version 1 */
	printf("*** Start of Concatenating String Demo ***\n");

	// Declaring two string variables
	char string1[BUFFER_SIZE]; 
	char string2[BUFFER_SIZE];

	/*
	input loop: 
	take two string inputs from
	the user until he enters 'q' to quit the input cycle.

	*/

	do {
		printf("Type the 1st string (q - to quit):\n"); // input for first string
		fgets(string1, BUFFER_SIZE, stdin);             // stores the user input to string1
		string1[strlen(string1) - 1] = '\0';            // sets null terminator

		/*
		if condition to check if the user does not wants to exit,
		then proceed with concatenation
		*/

		if ((strcmp(string1, "q") != 0))
		{
			printf("Type the 2nd string:\n");    // input for second string
			fgets(string2, BUFFER_SIZE, stdin);  // stores the user input to string2
			string2[strlen(string2) - 1] = '\0'; // sets null terminator
			strcat(string1, string2);			 // concatenating string1 and string2 using strcat
			printf("Concatenated string is \'%s\'\n", string1); // displaying output as concatenated string
		}
	} while (strcmp(string1, "q") != 0);        // iterating until user enter 'q' to quit input cycle
	printf("*** End of Concatenating strings Demo ***\n\n");

	

	
	/* Version 2 */
	printf("*** Start of Comparing strings Demo ***\n");

	/*
	input : takes two string from the user
	process : compares both string characters using strcmp function 
	output : displays result of string comparision wehter  string1 is greater , smaller or equal to string 2   
	*/

	// declaring two string variables 
	char compare1[BUFFER_SIZE]; 
	char compare2[BUFFER_SIZE];
	int result; 
	do {
		/*
		loop
		takes two input from the user until user enters 'q' to quit the loop cycle 
		*/

		printf("Type the 1st string to compare (q to quit):\n");
		fgets(compare1, BUFFER_SIZE, stdin);   // takes input from user  
		compare1[strlen(compare1) - 1] = '\0'; // adds null terminator to compare1

		if (strcmp(compare1, "q") != 0) // breaks loop if user enters 'q'
		{

			printf("Type the 2nd string to compare:\n");  // prompt for entering string2 
			fgets(compare2, BUFFER_SIZE, stdin);
			compare2[strlen(compare2) - 1] = '\0'; // sets null terminator 
			result = strcmp(compare1, compare2); // compares both the string using strcmp function 
             
			if (result < 0)   // checks if result is smaller than zero 
			{
				printf("\'%s\' string is less than \'%s\' \n", compare1, compare2);
			}
			else if (result == 0)  // checks if reult is zero 
			{
				printf("\'%s\' string is equal to \'%s\'\n", compare1, compare2);
			}
			else   //  if result is greater than zero 
			{
				printf("\'%s\' string is greater than \'%s\'\n", compare1, compare2);
			}
		}

	} while (strcmp(compare1, "q") != 0);   // iterates until user enter 'q' to quit input cycle 
	printf("*** End of comparing strings Demo ***\n\n"); // output after entering 'q'

	return 0;
/* Version 3 */



}