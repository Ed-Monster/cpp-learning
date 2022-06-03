# compiler config
CXX := g++
CPPFLAGS := -Wall

# the executable
EXE := DataTypes

# source files
SUBDIR := $(shell ls ../src -R | grep /)
SUBDIRS := $(subst :,/,$(SUBDIR)) # the directories where source files are
SOURCE := $(foreach dir,$(SUBDIRS),$(wildcard $(dir)*.cpp)) # the path to source files
vpath %.cpp $(subst : ,:,$(SUBDIR))

# objects
OBJS := $(foreach dir,$(patsubst %.cpp,%.o,$(SOURCE)),$(notdir $(dir)))

# generate the excutable
$(EXE) : $(OBJS)
	$(CXX) -o $(EXE) $(OBJS)

# generate objects
$(OBJS) : %.o : %.cpp
	$(CXX) -c -o $@ $< $(CPPFLAGS)

# clean
.PHONY : clean cleanobj
clean : cleanobj
	rm $(EXE)
cleanobj :
	rm $(OBJS)