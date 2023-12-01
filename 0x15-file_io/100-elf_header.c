#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

/**
  * main -  function to print elf header
  * @argc: number of args
  * @argv: arguments
  * Return: 1 or -1
  */

int main(int argc, char *argv[])
{
	int fd;
	ssize_t bytes_read;
	Elf64_Ehdr header;
	int i;
	if (argc != 2)
	{
		fprintf(stderr, "Usage: elf_header elf_filename\n");
		exit(98);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		fprintf(stderr, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	bytes_read = read(fd, &header, sizeof(header));
	if (bytes_read != sizeof(header))
	{
		fprintf(stderr, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	if (header.e_ident[EI_MAG0] != ELFMAG0 ||
			header.e_ident[EI_MAG1] != ELFMAG1 ||
			header.e_ident[EI_MAG2] != ELFMAG2 ||
			header.e_ident[EI_MAG3] != ELFMAG3)
	{
		fprintf(stderr, "Error: %s is not an ELF file\n", argv[1]);
		exit(98);
	}
	printf("Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x ", header.e_ident[i]);
	printf("\n");
	printf("Class:                             %s\n",
			header.e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
	printf("Data:                              %s\n",
			header.e_ident[EI_DATA] == ELFDATA2LSB
			? "2's complement, little endian"
			: "2's complement, big endian");
	printf("Version:                           %d (current)\n",
			header.e_ident[EI_VERSION]);
	printf("OS/ABI:                            UNIX - System V\n");
	printf("ABI Version:                       %d\n",
			header.e_ident[EI_ABIVERSION]);
	printf("Type:                              %s\n",
			header.e_type == ET_REL
			? "REL (Relocatable file)"
			: "EXEC (Executable file)");
	printf("Entry point address:               %p\n",
			(void *)header.e_entry);
	close(fd);
	return (0);
}

