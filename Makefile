CXX = g++
CXXFLAGS = -Wall -std=c++11
TARGET = programa

build: $(TARGET)

$(TARGET): main.o funciones.o
	$(CXX) $(CXXFLAGS) main.o funciones.o -o $(TARGET)

main.o: main.cpp funciones.h
	$(CXX) $(CXXFLAGS) -c main.cpp

funciones.o: funciones.cpp funciones.h
	$(CXX) $(CXXFLAGS) -c funciones.cpp

run: build
	./$(TARGET)

clean:
	rm -f *.o $(TARGET)
