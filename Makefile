OBJS := \
	main.o \
	primes.o \
	primes_in_range.o \

.PHONY: all clean

all: $(OBJS)

$(OBJS): %.o: %.cpp
	g++ -c -Wall -std=c++14 $< -o $@

clean:
	rm *.o
