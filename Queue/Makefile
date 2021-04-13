# Compiler Specific:
COMP=g++
CFLAG=-c
WFLAG=-Wall
OFLAG=-o

# Program Specific:
SOURCES=	Driver.cpp

OBJECTS=$(SOURCES:.cpp=.o)
HEADERS=$(SOURCES:.cpp=.h)
EXECUTABLE=Driver

# Start of Make:
Start: clean $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS) 
	$(COMP) $(OBJECTS) $(OFLAG) $@ $(WFLAG)

.cpp.o:
	$(COMP) $(CFLAG) $< $(OFLAG) $@ $(WFLAG)

# Cleanup Routines:
clean:
	rm -f $(OBJECTS) $(EXECUTABLE)