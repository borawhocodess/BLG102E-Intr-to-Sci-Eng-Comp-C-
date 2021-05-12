CFLAGS = -Wall -Werror

cashregister: cashregister.cpp
	g++ $(CFLAGS) $< -o $@

%.o: %.c
	g++ -c $(CFLAGS) $< -o $@

clean:
	rm -f *.o cashregister