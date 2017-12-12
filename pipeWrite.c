#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>

int main(){
	char* msg = "TEST_MESSAGE";

	mkfifo("pipe", 0666);

	int pipeFd = open("pipe", O_WRONLY);
	while(1)write(pipeFd, msg, strlen(msg));
}
