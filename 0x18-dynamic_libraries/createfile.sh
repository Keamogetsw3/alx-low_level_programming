# List of function names
function_names = [
    "_putchar",
    "_islower",
    "_isalpha",
    "_abs",
    "_isupper",
    "_isdigit",
    "_strlen",
    "_puts",
    "_strcpy",
    "_atoi",
    "_strcat",
    "_strncat",
    "_strncpy",
    "_strcmp",
    "_memset",
    "_memcpy",
    "_strchr",
    "_strspn",
    "_strpbrk",
    "_strstr"
]

# Create a C source file for each function
for function_name in function_names:
    function_name_c = function_name + ".c"
    with open(function_name_c, "w") as f:
        f.write(f'#include "main.h"\n\n')
        f.write(f'/**\n')
        f.write(f'\t* function: {function_name}\n')
        f.write(f'\t* @:\n')
        f.write(f'\t* @:\n')
        f.write(f'\t*\n')
        f.write(f'\t* Return:\n')
        f.write(f'**/\n')
        f.write(f'int {function_name}(')
        if "char *" in function_name:
            f.write('char *')
        elif "int" in function_name:
            f.write('int ')
        f.write(")\n")
        f.write('{\n')
        f.write('    // TODO: Implement the function\n')
        f.write('    return 0;\n')
        f.write('}\n')

print("Function source files generated successfully!")
