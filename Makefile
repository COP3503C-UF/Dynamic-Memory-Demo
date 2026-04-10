CXX=g++
CXXFLAGS= -std=c++11 -Werror -Wall -g
DEPS = Car.h

test.exe: file.cpp
	$(CXX) -o $@ $< $(CXXFLAGS)