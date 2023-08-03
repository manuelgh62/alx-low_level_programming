#!/bin/bash

# NAME:    wyrmlin2.sh
# AUTHOR:  $N00B
# DATE:    05/05/2023

###############################################################################

cd 0x09-static_libraries


chmod +x *.c
gcc -c *.c
ar -rcs libmy.a *.o


echo \#\!/bin/bash >> create_static_lib.sh
echo gcc \-c \*.c >> create_static_lib.sh
echo ar \-rcs liball.a \*.o >> create_static_lib.sh
chmod +x create_static_lib.sh


git add .
read -p "Enter your commit message: " message
git commit -m "$message"
git push


echo -e "######################################################\n"
echo -e "Congratulations, you're done with your Project!!!\n"
echo -e "######################################################\n"


# END OF SCRIPT
################################################################################
