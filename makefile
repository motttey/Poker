#Describing makefile 

#2014/02/10
#Macro definition
CC = gcc

OBJS = primitivepoker.o checkhand.o sort.o main.o
#Generation Rule
poker.o: $(OBJS)
	$(CC) -o $@ $(OBJS)


clean:
	rm -f $(OBJS) poker.o *~