CPP = g++
CFLAGS = -Wall -Werror -Wextra

hash_test: Hash_test.cpp Hash.o Entry.o
	$(CPP) $(CFLAGS) -o hash_test $^

Hash.o: Hash.h Hash.cpp
	$(CPP) $(CFLAGS) -c Hash.cpp

entry_test: Entry_test.cpp Entry.o
	$(CPP) $(CFLAGS) -o entry_test Entry_test.cpp Entry.o

Entry.o: Entry.h Entry.cpp
	$(CPP) $(CFLAGS) -c Entry.cpp

clean:
	rm -f *.o;
	rm -f *~;
	rm -f hash_test;
	rm -f entry_test

