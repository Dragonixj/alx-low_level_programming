#ifndef MAIN_H
#define MAIN_H

/*
 * File: main.h - header File
 * Creator: Elvis Fiador
 * Description - header file that contains all the fuction prototypes
 *      for this reporsitory
 */

#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters);
