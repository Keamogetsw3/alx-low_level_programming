#!/bin/bash

# Create header file lists.h
echo "#ifndef LISTS_H" > lists.h
echo "#define LISTS_H" >> lists.h
echo "" >> lists.h
echo "#include <stdio.h>" >> lists.h
echo "#include <stdlib.h>" >> lists.h
echo "" >> lists.h
echo "/* Structure for doubly-linked list nodes */" >> lists.h
echo "typedef struct dlistint_s {" >> lists.h
echo "    int n;" >> lists.h
echo "    struct dlistint_s *prev;" >> lists.h
echo "    struct dlistint_s *next;" >> lists.h
echo "} dlistint_t;" >> lists.h
echo "" >> lists.h
echo "/* Function prototypes for your linked list operations */" >> lists.h
echo "size_t print_dlistint(const dlistint_t *h);" >> lists.h
echo "size_t dlistint_len(const dlistint_t *h);" >> lists.h
echo "dlistint_t *add_dnodeint(dlistint_t **head, const int n);" >> lists.h
echo "dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);" >> lists.h
echo "void free_dlistint(dlistint_t *head);" >> lists.h
echo "int get_dnodeint_at_index(dlistint_t *head, unsigned int index);" >> lists.h
echo "int sum_dlistint(dlistint_t *head);" >> lists.h
echo "dlistint_t *insert_dnodeint_at_index(dlistint_t **head, unsigned int idx, int n);" >> lists.h
echo "int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);" >> lists.h
echo "" >> lists.h
echo "#endif /* LISTS_H */" >> lists.h

# Create implementation files
implementation_files=(
    "0-print_dlistint.c"
    "1-dlistint_len.c"
    "2-add_dnodeint.c"
    "3-add_dnodeint_end.c"
    "4-free_dlistint.c"
    "5-get_dnodeint.c"
    "6-sum_dlistint.c"
    "7-insert_dnodeint.c"
    "8-delete_dnodeint.c"
)

for file in "${implementation_files[@]}"; do
    echo "#include \"lists.h\"" > "$file"
done

# Create unrelated files
unrelated_files=(
    "100-password"
    "102-result"
    "103-keygen.c"
)

for file in "${unrelated_files[@]}"; do
    touch "$file"
done

# Make the script executable
chmod u+x create_files.sh
