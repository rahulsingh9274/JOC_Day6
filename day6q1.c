/*
A: One way around the problem is to put a blank space before
     the conversion specifier in the format string:

scanf(" %c", &c);
The blank in the format string tells scanf to skip leading whitespace, and the
     first non-whitespace character will be read with the %c conversion specifier.

B: char array[n];
  for(i=0; i<n ; i++)
  {
    scanf("%c", &array[i]);
  }

C:
char array[n];
  for(i=0; i<n ; i++)
  {
     scanf("%s", &array[i]);
  }


D: 
Printf() function ------
The printf() function is the most used function in the C language. This function is defined 
    in the stdio.h header file and is used to show output on the console (standard output).

scanf() function - Take Input ----
When we want to take input from the user, we use the scanf() function. When we take input 
from the user, we store the input value into a variable.

The scanf() function can be used to take any datatype input from user,
 all we have to take care is that the variable in which we store the value has the same datatype.


getchar() & putchar() functions
The getchar() function reads a character from the terminal and returns it as an integer.
 This function reads only a single character at a time.

The putchar() function displays the character passed to it on the screen and returns 
the same character. This function too displays only a single character at a time.

gets() & puts() functions
The gets() function reads a line from stdin(standard input) into the buffer pointed
 to by str pointer, until either a terminating newline or EOF (end of file) occurs.

The puts() function writes the string str and a trailing newline to stdout.