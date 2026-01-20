This project has been created as part of the 42 curriculum by hhorbach.

Description

For this project, called ft_printf, I had to recreate and recode the printf function from libc. This function is used to print characters in the terminal, also using '%' flag to replace the part of the string with some variable, address, etc.
The goal of this project is to understand how the common functions work inside, to understand how to recreate something from zero and keep using it for your future projects.

Instructions

To run this project user have to include and compile every file in the foulder, for that he could use the Makefile, specifically a command 'make' in the root of the project to create .a library and to compile the whole project using only .a file and main.c file ("cc -Wall -Werror -Wextra libftprintf.a main.c"). main.c could already contain ft_printf function, but it should include the .h file with the ft_printf funtion itself and all the additional functions.