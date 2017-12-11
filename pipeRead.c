#include <unistd.h>
#include <fcntl.h>


int main(){
	int pipeFd = open("pipe", O_RDONLY);
	char buf;

	while(read(pipeFd, &buf, 1)){
		write(STDOUT_FILENO, &buf, 1);
	}
	write(STDOUT_FILENO, "\n", 1);
	return 0;
}
