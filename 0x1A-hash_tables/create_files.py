def create_c_file(filename):
    with open(filename, 'w') as file:
        # Write the #include directive at the top
        file.write("#include \"hash_tables.h\"\n")
        file.write("\n")

        # Write the comment style after the #include directive
        file.write("/**\n")
        file.write(" *  function - describe what the function does\n")
        file.write(" *  @variable1: the first variable\n")
        file.write(" *  @variable2:\n")
        file.write(" *\n")
        file.write(" *  Return: what the function returns\n")
        file.write(" */\n")
        file.write("\n")

        # Write sample C code to the file (you can customize this code as needed)
        file.write("/* Your C code here */\n")

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

    for filename in file_names:
        create_c_file(filename)
        print(f"{filename} with #include directive before comments has been created.")
