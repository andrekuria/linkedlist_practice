CC=gcc
CFLAGS= -c  -o0 -Wall 

all:linked_list 

linked_list.o:linked_list.c 
	$(CC)  -o $@ $^ 

linked_list2.o:linked_list2.c 
	$(CC)  -o $@ $^        

linked_list3.o:linked_list3.c 
	$(CC)  -o $@ $^  

linked_list4.o:linked_list4.c 
	$(CC)  -o $@ $^  

clean:
	rm -rf *.elf *.o *.bin   *.map   