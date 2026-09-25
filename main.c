/*
Name: Rajath H M
BATCH: 26001B
ROLL NO: INT26001_118
Title of the Project: TFTP Client-Server

Date: September 12, 2026

Description:
TFTP Client-Server is a network-based project created using C programming.
The primary objective of this project is to implement a basic Trivial File Transfer
Protocol (TFTP) system using UDP socket programming for communication between
the client and server.
The project supports file download (GET) and file upload (PUT) operations
using Normal, Octet, and Netascii transfer modes.
The client provides a menu-driven interface to connect to the server, select
the transfer mode, and perform file transfer operations.
The server handles client requests using UDP sockets and creates separate
child processes using fork() to handle transfer requests independently.
DATA and ACK packets are used for reliable block-based file transfer.
Netascii mode additionally performs LF to CR-LF conversion during file transfer.
File handling is implemented using system calls such as open(), read(), write(),
and close().
*/
#include "main.h"

// Store the shell prompt
char prompt[50] = "minishell$";

// Store the list of external commands
char **external_commands;

// Store the exit status of the last executed command
int status;

int main()
{
    // Clear the terminal screen
    system("clear");

    // Allocate memory for the external command list
    external_commands = calloc(100, sizeof(char *));

    if (external_commands == NULL)
    {
        perror("malloc");
        return 1;
    }

    // Read external commands from the command file
    extract_external_commands(external_commands);

    char input_string[100];

    // Start reading and executing user commands
    scan_input(prompt, input_string);

    // Free memory allocated for each external command
    for(int i = 0; external_commands[i] != NULL; i++)
    {
        free(external_commands[i]);
    }

    // Free the external command list
    free(external_commands);

    return 0;
}
