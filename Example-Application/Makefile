# Makefile
# Written by, Sohail Qayum Malik[sqm@cyberian.pk]

# Because I forget often, # make CPPFLAGS=/DALA_DEBUGFLAG

.PHONY			: main.o cooked_read.o

all			: main.o cooked_read.o
			g++ main.o cooked_read.o -o csv

main.o			: main.cc main.hh 
			g++ -DCSV_EXAMPLE_APPLICATION -c main.cc -o main.o
			
cooked_read.o		: ./../functions/cooked_read.hh ./../functions/cooked_read.cc
		  	g++ -c ./../functions/cooked_read.cc -o cooked_read.o
 							
clean			:
			rm -f *.o
			rm -f csv
