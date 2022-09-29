#!/bin/sh
find . -type f -name "*.c" -exec gcc -Wall -Wextra -Werror -c {} \;
ar rc libft.a *.o
rm -f *.o
