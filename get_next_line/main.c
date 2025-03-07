#include "get_next_line.h"
#include "get_next_line_bonus.h"

int file_exists(const char *filename) {
	FILE *file = fopen(filename, "r");
	if (file) {
		fclose(file);
		return(1);
	}
	return(0);
}

int main(void) {
	if (!file_exists("./txts/file0.txt")) exit(1);
	int fd0 = open("./txts/file0.txt", O_RDONLY);
	char *line0 = get_next_line(fd0);
	while (line0) {
		write(1, line0, ft_strlen(line0));
		free(line0);
		line0 = get_next_line(fd0);
	}
	free(line0);
	close(fd0);
	write(1, "\n", 1);
	return(0);
}
