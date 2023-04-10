#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#define BUF_SIZE 1024
/**
 * cp file_from file_to - program that copies the content of a file to another file
 * @file: is the name of the file
 * @format:
 * Return: 1 on success, -1 on failure
 */
 void print_error(int error_code, const char *format, const char *file) {
    dprintf(STDERR_FILENO, format, file);
    exit(error_code);
}

int main(int argc, char *argv[])
{
	int fd_out;
	int fd_in;
	int write;
	int len_textcont = 0;
	
	if (argc !== 3){
	    print_error(97, "Usage: %s cp file_from file_to\n", argv[0]);
	}
	
	fd_in = open(argv[1],  O_RDONLY);
	if (fd_in == -1){
	    print_error(98, "Error: Can't write to NAME_OF_THE_FILE%s\n", argv[1]);
	}
	
	fd_out = open(argv[2],  O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd_out == -1){
	    print_error(99, "Error: Can't write to %s\n", argv[2]);
		
	char buffer[BUFFER_SIZE];
    ssize_t bytes_read;
    while ((bytes_read = read(input_fd, buffer, BUFFER_SIZE)) > 0) {
        ssize_t bytes_written = write(output_fd, buffer, bytes_read);
        if (bytes_written == -1) {
            print_error(99, "Error: Can't write to %s\n", argv[2]);
        }
        if (bytes_written != bytes_read) {
            print_error(99, "Error: Partial write to %s\n", argv[2]);
        }
    }

    if (bytes_read == -1) {
        print_error(98, "Error: Can't read from file %s\n", argv[1]);
    }

    if (close(input_fd) == -1) {
        print_error(100, "Error: Can't close fd %d\n", input_fd);
    }
    if (close(output_fd) == -1) {
        print_error(100, "Error: Can't close fd %d\n", output_fd);
    }

    return 0;
}
