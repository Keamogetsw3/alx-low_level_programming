#!/bin/bash

# This script removes leading spaces and trailing whitespace in .c files

# Find all .c files in the current directory and its subdirectories
find . -type f -name "*.c" | while read -r file; do
    # Use sed to remove leading spaces and trailing whitespace
    sed -i 's/^[[:space:]]*//;s/[[:space:]]*$//' "$file"
done
