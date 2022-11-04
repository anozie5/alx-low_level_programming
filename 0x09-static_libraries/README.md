File libmy.a contains all files given:
| **Steps on CLI**
*gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c *.c |
ar -rc libmy.a *.o |
File create_static_lib.sh creates a static library called liball.a from all the .c files that are in the current directory.

