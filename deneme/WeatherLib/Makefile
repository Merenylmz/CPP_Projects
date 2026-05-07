CXX = g++
CXXFLAGS = -Wall -g

TARGET = program

SRCS = main.cpp analysis.cpp transformation.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(TARGET)



$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(TARGET) $(OBJS)