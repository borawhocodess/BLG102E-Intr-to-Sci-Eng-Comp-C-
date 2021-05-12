CFLAGS = -std=c99 -Wall -Werror -g

assignment4: assignment4.c
	gcc $(CFLAGS) $< -o $@

%.o: %.c
	gcc -c $(CFLAGS) $< -o $@

clean:
	rm -f *.o assignment4
