#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
void print_error(const char *message)
{
	fprintf(stderr, "%s\n", message);
	exit(98);
}
/**
 * print_elf_header - print the header
 * @header: header to print
 * Return: void
 */
void print_elf_header(const Elf64_Ehdr *header)
{
printf("ELF Header:\n");
printf("  Magic:   ");
for (int i = 0; i < EI_NIDENT; i++)
{
	printf("%02x ", header->e_ident[i]);
}
printf("\n");
printf("  Class:                             ");
switch (header->e_ident[EI_CLASS])
{
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown>\n");
}
printf("  Data:                              ");
switch (header->e_ident[EI_DATA])
{
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown>\n");
}
printf("  Version:                           %d (current)\n", header->e_ident[EI_VERSION]);
printf("  OS/ABI:                            ");
switch (header->e_ident[EI_OSABI])
{
	case ELFOSABI_SYSV:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	default:
		printf("<unknown: %d>\n", header->e_ident[EI_OSABI]);
}
printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
printf("  Type:                              ");
switch (header->e_type)
{
	case ET_NONE:
		printf("NONE (No file type)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown>\n");
}
printf("  Entry point address:               0x%lx\n", header->e_entry);
}
/**
 * main - function to calls
 * @argc: number of element of the list
 * @argv: list
 * Return: pointer to list
 */
int main(int argc, char *argv[])
{
if (argc != 2)
	print_error("Usage: elf_header elf_filename");

const char *filename = argv[1];
int fd = open(filename, O_RDONLY);

if (fd == -1)
	print_error("Failed to open file");
Elf64_Ehdr header;
ssize_t bytes_read = read(fd, &header, sizeof(header));
if (bytes_read < 0)
	print_error("Failed to read file");
if (bytes_read != sizeof(header) || header.e_ident[EI_MAG0] != ELFMAG0 ||
		header.e_ident[EI_MAG1] != ELFMAG1 || header.e_ident[EI_MAG2] !=
		ELFMAG2 || header.e_ident[EI_MAG3] != ELFMAG3)
{
	print_error("Not an ELF file");
}
print_elf_header(&header);
close(fd);
return (0);
}
