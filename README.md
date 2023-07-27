# _PRINTF

## DESCRIPTION

The printf function allows its user to print a string of characters, a character or a number and many other things requested by the user on the terminal.
Its syntax is generally 
`printf("format", arg_1, arg_2, ..., arg_n);` 

`format` being the string of characters contained between the inverted commas ("") and `arg_1`, etc... being arguments for printing the string of characters.

In this project, we recreate the printf usually included in the standard `<stdio.h>` header with its requirements and constraints, using a number of different functions and tool functions to make it as complete as possible.

Here's a diagram showing how all the printf code reacts to a command being executed
![diagramme](https://media.discordapp.net/attachments/1130868842197962864/1133472065794605147/Capture_decran_2023-07-25_a_20.52.48.png?width=486&height=585)

## REQUIREMENTS

- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc
- All your files should end with a new line
- Your code should use the Betty style. It will be checked using [betty-style.pl](https://github.com/hs-hq/Betty/blob/main/betty-style.pl) and  [betty-doc.pl](https://github.com/hs-hq/Betty/blob/main/betty-doc.pl)
- No more than 5 functions per file
- The prototypes of all your functions should be included in your header file called main.h


## CONTRIBUTING

- Make a FORK of this directory

- Make a git clone of this fork on your terminal

```
git clone (the link given with your github)
```

- To compile all the data you can use this:

```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
```

- Add your contributions (code or documents)

- Commit and push

- Wait for pull request to be merged


## USE THE PROJECT

To test the program, you can use a main.c file containing different instructions. Include the given `"main.h"` in your header.
In your instructions, start with a prototy of type 

```c
int main (void)
```
Then declare an int (in the examples below "len") which you initialise with the desired values.

```c
len = _printf("Negative:[%d]\n", -762534);
```
Then use the printf command to display what you want:

```c
_printf("%d\n", len);
```
And `return (0)` as it is an int


Examples:

```c
#include "main.h"

int main (void)
{
    int len;

    len = _printf("Let's try to printf a simple sentence.\n");
    return (0);
}
```
Output : `Let's try to printf a simple sentence.`

or

```c
#include "main.h"

int main (void)
{
    int len;
    
    len = _printf("Negative:[%d]\n", -762534);
    _printf("%d\n", len);
    return (0);
}
```
Output:` -762534`

You can use it to display your terminal according to the command you give it.


## CREDITS

- T'Servrancx Olivier 
    [Github](https://github.com/electrikbox)

- Ruin Lucie
    [Github](https://github.com/lucieruin)


## LICENCE

Copyright (C) <27/07/2023> copyright: T'Servrancx Olivier, Ruin Lucie

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE X CONSORTIUM BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

Except as contained in this notice, the name of copyright: T'Servrancx Olivier, Ruin Lucie shall not be used in advertising or otherwise to promote the sale, use or other dealings in this Software without prior written authorization from copyright T'Servrancx Olivier, Ruin Lucie.
