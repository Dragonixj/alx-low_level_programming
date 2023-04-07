# 0x15 - c file handling

### Introduction: This repository contains a C program that demonstrates the use of file descriptors in the C language. File descriptors are small integers that provide a way for a program to refer to an open file or a network connection. They are commonly used in Unix-like systems, and are also available on many other platforms.

**File descriptors** can be used to read from and write to files, network sockets, pipes, and other types of input and output devices. To use file descriptors in your own programs, you need to know the following system calls:

    open(): opens a file and returns a file descriptor
    read(): reads data from a file descriptor into a buffer
    write(): writes data from a buffer to a file descriptor
    close(): closes a file descriptor

There are many other system calls that work with file descriptors, but these are the most basic ones. You can find more information about file descriptors and system calls at <a href="https://en.wikipedia.org/wiki/File_descriptor">C - descriptors page</a>
