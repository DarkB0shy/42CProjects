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
	if (!file_exists("./txts/file1.txt")) exit(1);
	int fd1 = open("./txts/file1.txt", O_RDONLY);

	char *line0 = get_next_line(fd0);
	char *line1 = get_next_line(fd1);

	while (line0 || line1) {
	        if (line0) {
			write(1, line0, ft_strlen(line0));
	        	free(line0);
	        }
		if (line1) {
			write(1, line1, ft_strlen(line1));
		        if (line1) free(line1);
		}
	        line0 = get_next_line(fd0);
	        line1 = get_next_line(fd1);
	}

	free(line0);
	free(line1);
	close(fd0);
	close(fd1);
	write(1, "\n", 1);

	return(0);
}
