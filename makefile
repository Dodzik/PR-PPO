EXE= wyk
CXXFLAGS= -g -O0 -pedantic -std=c++14


$(EXE): ciagi.o main.o
  g++ ciagi.o main.o -o $(EXE)

main.o:main.cpp ciagi.h
  g++ $(CXXFLAGS) -c main.cpp ciagi.h

ciagi.o:ciagi.cpp ciagi.h
  g++ $(CXXFLAGS) -c ciagi.cpp ciagi.h

.PHONY: clean run
clean:
  rm -fr *.o
  rm -fr $(EXE)

run: $(EXE)
  ./$(EXE)