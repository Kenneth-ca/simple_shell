# Simple Shell


## Description
The project consists in the creation of a simple shell that will allow the user to interact with the system using commands.

* It handles the PATH to find the programs it will execute.
* Stat() will be used to check if the found file can be executed.
* It will use the execve() system call to perform the commands.
* The execution of the programs will be done under children processes using fork().

---
### Instructions
The program was tested and compiled on Ubuntu 14.04 LTS using the gcc command (gcc 4.8.4):
`(gcc -Wall -Werror -Wextra -pedantic *.c -o hsh)`\
Following this, the expected way to execute the program is by typing:\
`(./hsh)`\
You can exit the program at any time using the exit command (Also with a status):\
`exit` or `exit 98`\

---

### Files
Function name | Description
--- | ---
`atoi.c` | converts string to integer
`AUTHORS` | Authors file
`call_func.c` | redirects to the right function
`check_path.c` | here the execution of the commands are checked
`comand_prompt.c` | were the input from the user is stored
`exec_args.c` | were the program executes the commands
`exit.c` | exit function
`free.c` | here the variables are freed
`main.c` | entry point of the program
`man_1_simple_shell` | manual for the program
`parse.c` | here the text is parsed
`path.c` | here the path is parsed and a linked list is created
`shell.h` | header file for the project
`strcat.c` | concatenates two string
`strcmp.c` | compares two strings
`str_concat.c` | a personalized function that concatenates
`strcpy.c` | make a copy of a string
`strdup.c` | make a copy of a string with malloc
`strlen.c` | measures a string
---

## Authors
* [Kenneth Cortes Aguas](https://twitter.com/Kenneth_ca7) - Github: [Kenneth-ca](https://github.com/Kenneth-ca)
* [Yesid Gonzalez](https://twitter.com/yesid_dev) - Github: [yawzyag](https://github.com/yawzyag)
