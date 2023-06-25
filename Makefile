

all: Dir Queue List Map 
	ar rcs build/libDS.a build/*.o
	rm -rf build/*.o

Dir:
	mkdir build -p

Queue: 
	cd src/Queue && make && mv *.o ../../build/


List: 
	cd src/List && make && mv *.o ../../build/


Map:
	cd src/Map && make && mv *.o ../../build/


clean:
	rm -rf build 
