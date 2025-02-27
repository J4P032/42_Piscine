#!/bin/bash

#Remove temp files and library already done
rm -f libft.a
rm -f *.o

#compile source files into objects
cc -Wall -Wextra -Werror -c *.c

#create static library
ar rc libft.a *.o

#index library
ranlib libft.a

#remove all objects files
rm -f *.o

echo "Library libft.a done correctly"
