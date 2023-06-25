#include <stdlib.h>
#include "../include/CircularArrayQueue.h"

int main(int ac,char *av[])
{
	ArrayQueue *a = createQueue(10);
	enQueue(a, 10);
	dump_queue(a);
	return(EXIT_SUCCESS);
}
