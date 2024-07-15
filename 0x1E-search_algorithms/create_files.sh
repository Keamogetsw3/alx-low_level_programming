#!/bin/bash

# Array of file names
files=(
    "0-linear.c"
    "1-binary.c"
    "1-binary_recursive.c"
    "100-jump.c"
    "101-O"
    "102-interpolation.c"
    "103-exponential.c"
    "104-advanced_binary.c"
    "105-jump_list.c"
    "106-linear_skip.c"
    "107-O"
    "108-O"
    "2-O"
    "3-O"
    "4-O"
    "5-O"
    "6-O"
)

# Create each file and add "#include search_algos.h"
for file in "${files[@]}"; do
    touch "$file"
    echo '#include "search_algos.h"' > "$file"
done
