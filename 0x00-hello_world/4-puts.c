#!/bin/bash
gcc -xc - -o a.out <<< 'main(){puts("Programming is like building a multilingual puzzle");return 0;}'; ./a.out ; rm a.out
