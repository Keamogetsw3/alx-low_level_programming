def create_c_file(filename, num_tabs):
    with open(filename, 'w') as file:
        # Add tabs for spacing
        tabs = '\t' * num_tabs

        # Write the comment style at the beginning of the file
        file.write(f'{tabs}/**\n')
        file.write(f'{tabs} *  function - describe what the function does\n')
        file.write(f'{tabs} *  @variable1: the first variable\n')
        file.write(f'{tabs} *  @variable2:\n')
        file.write(f'{tabs} *\n')
        file.write(f'{tabs} *  Return: what the function returns\n')
        file.write(f'{tabs} */\n')
        file.write(f'{tabs}\n')

        # Write sample C code to the file (you can customize this code as needed)
        file.write(f'{tabs}#include "hash_tables.h"\n')
        file.write(f'{tabs}\n')
        file.write(f'{tabs}/* Your C code here */\n')

if __name__ == "__main__":
    file_names = [
        "0-hash_table_create.c",
        "1-djb2.c",
        "2-key_index.c",
        "3-hash_table_set.c",
        "4-hash_table_get.c",
        "5-hash_table_print.c",
        "6-hash_table_delete.c",
        "100-sorted_hash_table.c"
    ]

    num_tabs = 8

    for filename in file_names:
        create_c_file(filename, num_tabs)
        print(f"{filename} with {num_tabs} tabs for spacing and comments has been created.")
