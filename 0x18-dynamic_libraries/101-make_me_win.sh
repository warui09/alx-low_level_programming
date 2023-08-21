#!/bin/bash
echo -e '#include <stdlib.h>\nvoid srand(unsigned int seed) {}\nint rand(void) {return 1;}' > rand_override.c
gcc -shared -o rand_override.so -fPIC rand_override.c
