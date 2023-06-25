CFLAGS = -I ../include

all: CircularArrayQueue.test


%.test: %.c 
	$(CC) $(CFLAGS) $^ ../build/libDS.a -o $@

clean:
	rm -rf *.test
