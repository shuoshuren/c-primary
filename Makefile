CC:=g++
CPPFLAGS:=-g


%.o:%.cpp
	$(CC) -o $@ -c $<

%.exe:%.o
	$(CC) $< -o $@

clean:
	- rm -f *.o *.out *.exe
