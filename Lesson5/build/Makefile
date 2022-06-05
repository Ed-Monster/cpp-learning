# compiler config
CXX := g++
CPPFLAGS := -Wall

# the executable
EXE := ExternVar

# source files
SUBDIR := $(shell ls ../src -R | grep /)
SUBDIRS := $(subst :,/,$(SUBDIR)) # the directories where source files are
SOURCE := $(foreach dir,$(SUBDIRS),$(wildcard $(dir)*.cpp)) # the path to source files
vpath %.cpp $(subst : ,:,$(SUBDIR))

# header files
INCPATHS := $(subst ../,-I../,$(SUBDIRS))
INCPATHS += -I../include/

# objects
OBJS := $(foreach dir,$(patsubst %.cpp,%.o,$(SOURCE)),$(notdir $(dir)))

# dependencies
DPPS := $(SOURCE:.cpp=.d)


# generate the excutable
$(EXE) : $(OBJS)
	$(CXX) -o $(EXE) $(OBJS)

# generate objects
$(OBJS) : %.o : %.cpp
	$(CXX) -c -o $@ $< $(CPPFLAGS) $(INCPATHS)

# include dependencies
include $(DPPS)

# automatically generate dependencies
%.d:%.cpp
	@echo "Creating $@ ..."
	@set -e; rm -f $@; \
	$(CXX) $(INCPATHS) -MM $< > $@.$$$$; \
	sed 's,\($*\)\.o[ :]*,\1.o $@ : ,g' < $@.$$$$ > $@; \
	rm -f $@.$$$$

# clean
.PHONY : clean cleanobj cleandpp
clean : cleanobj cleandpp
	rm $(EXE)
cleanobj :
	rm $(OBJS)
cleandpp :
	rm $(DPPS)