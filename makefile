CC=gcc
AR=ar
OBJECTS_MAIN=main.o
OBJECTS_LIB=function.o  
FLAGS= -Wall -g


all: libfunction.a  stringProg 
stringProg :  $(OBJECTS_MAIN)  libfunction.a
	$(CC) $(FLAGS) -o stringProg $(OBJECTS_MAIN) libfunction.a  



libfunction.a: $(OBJECTS_LIB) 
	$(AR) -rcs libfunction.a $(OBJECTS_LIB)  
	

function.o:function.c function.h
	$(CC) $(FLAGS) -c function.c 


main.o: main.c function.h  
	$(CC) $(FLAGS) -c main.c 

.PHONY: clean all 
clean:
	rm -f *.o *.a  stringProg 