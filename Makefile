CXXFLAGS=-std=c++11 -Wall -Wextra -Wpedantic -Wfatal-errors
HEAD=Fizzbuzz.h
OBJ= main.o Fizzbuzz.o

main: $(OBJ) $(HEAD)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $@

Fizzbuzz.o:: Fizzbuzz.h
main.o:: $(HEAD)

clean:
	rm -f main *.o


