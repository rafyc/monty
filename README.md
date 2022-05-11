## Monty

**The Monty language :**

Monty is a programming and scripting language. <br>
This language was designed by David A. Watt. <br>
This project was about creating a program that read this language.

---

**Usage :**

monty file : where file is the path to the file containing Monty byte code<br>
If the user does not give any file or more than one argument to your program, print the error message USAGE: monty file, followed by a new line, and exit with the status EXIT_FAILURE.<br>
If, for any reason, it’s not possible to open the file, print the error message Error: Can't open file <file>, followed by a new line, and exit with the status EXIT_FAILURE where <file> is the name of the file<br>
If the file contains an invalid instruction, print the error message L<line_number>: unknown instruction <opcode>, followed by a new line, and exit with the status EXIT_FAILURE where is the line number where the instruction appears.<br>
Line numbers always start at 1<br>
The monty program runs the bytecodes line by line and stop if either: it executed properly every line of the file it finds an error in the file an error occured<br>
If you can’t malloc anymore, print the error message Error: malloc failed, followed by a new line, and exit with status EXIT_FAILURE.<br>
You have to use malloc and free and are not allowed to use any other function from man malloc (realloc, calloc, …)<br>


---

**Operations :**
List of monty operations this interpreted understands:
- `push <integer>`: pushes an integer on to the stack
- `pall`: prints the values of every node on the stack
- `pint`: prints the value of the node at the top of the stack
- `pop`: removes the node at the top of the stack
- `swap`: swaps the position of the top two nodes
- `add`: places the sum of the top two nodes into the 2nd node and removes the
  first
- `nop`: does nothing

---

File Name | Description :
--- | ---
`main.c` | Main program file
`monty.h` | Header file
`get_op_func.c` | 
`_pall.c` | opcode prints all the values on the stack, starting from the top
`_pint.c` | opcode prints the value at the top of the stack
`_push.c` | opcode that add an element to the stack by default (Stack), add an element to the queue (Queue)
`_swap.c` | opcode swaps the top two elements of the stack
`_add.c` | opcode adds the two tops elements of the stack
`_nop.c` | opcode delete the element of the stack
`_pop.c` | opcode removes the top element of the stack       
`README.md` | README for the monty project
---
**General :**<br>
    What do LIFO and FIFO mean?<br>

    FIFO stand for First In First Out
    LIFO stand for Last In First Out
---
**Requirements :**<br>
    Allowed editors: vi, vim, emacs<br>
    All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=c90<br>
    All your files should end with a new line<br>
    A README.md file, at the root of the folder of the project is mandatory<br>
    Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl<br>
    You allowed to use a maximum of one global variable<br>
    No more than 5 functions per file<br>
    You are allowed to use the C standard library<br>
    The prototypes of all your functions should be included in your header file called monty.h<br>
    Don’t forget to push your header file<br>
    All your header files should be include guarded<br>
    You are expected to do the tasks in the order shown in the project<br>

---
***Compilation & Output :***
 
    typedef struct stack_s
        {
        int n;
        struct stack_s *prev;
        struct stack_s *next;
        } stack_t;
   

    typedef struct instruction_s
        {
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
        } instruction_t;
   

---
***Compilation & Output :***

    Your code will be compiled this way : 
        $ gcc -Wall -Werror -Wextra -pedantic -std=c90 *.c -o monty

---
This is the project of Holberton Paris school by<br>
Raphael Chemouni<br>
Hiromi VARNIER<br>
