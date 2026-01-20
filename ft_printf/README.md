This project has been created as part of the 42 curriculum by hhorbach.

Description

For this project, called ft_printf, I had to recreate and recode the printf function from libc. This function is used to print characters in the terminal, also using '%' flag to replace the part of the string with some variable, address, etc.
The goal of this project is to understand how the common functions work inside, to understand how to recreate something from zero and keep using it for your future projects.

Instructions

To run this project user have to include and compile every file in the foulder, for that he could use the Makefile, specifically a command 'make' in the root of the project to create .a library and to compile the whole project using only .a file and main.c file ("cc -Wall -Werror -Wextra libftprintf.a main.c"). main.c could already contain ft_printf function, but it should include the .h file with the ft_printf funtion itself and all the additional functions.

Resources

For this project were used some topics on StackOverflow, C documentation and other articles from GeeksforGeeks, etc.
AI was used only to understand complex algorithms and to create a plan for the project.

No data structure was used for this specific solution, because the bonus part was not finished.

It had some interesting solutions in terms of algorithms. For example for hexadermal and pointer printing functions I used recursion. Basically it works by the rule of dividing a number to get to the first digit to be printed and print a character from the 'base', based of the number we are dealing with. For example number 10 in this base (base = "0123456789abcdef") is equal to a. This solution is great, because it avoids using malloc or arrays and works only with stack memory. Pretty much the same logic was used for ft_print_ptr function.
In the ft_print_usigned function I used the recursive way also. It goes down to the first digit, prints it and then the rest of the number and returns the length.