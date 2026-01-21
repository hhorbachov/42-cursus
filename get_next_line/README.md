This project has been created as part of the 42 curriculum by hhorbach.

Description

This project was made to create a get_next_line function, that is designed to read and print the line from the file that is pointed to by file descriptor, one line at a time.

Instructions

To run this project a user should include the .h file into his file with the main function, after that it will be ready to use. To compile it user should compile both .c files of the project, including get_next_line.c and get_next_line_utils.c with his main.c file. 

Resources

For this project were used a documentation of the read function, some tutorials on how to work with the files and file descriptors and topics from StackOverflow to fix some minor problems.
AI was used to breakdown complex algorithms for understanding and to create a plan of creating this project.

For this project was used the algorithm in which at first the program reads the data from the file and treats it as a string, then it extracts the line until the '\n' character. And then clears the stash with the whole readed string until the '\n' that occured in the extraction process.
