CC=gcc

OBJS= list.o \
	population.o \
	gauss_probability.o \
	bayes.o \
	bitgenome.o \
	genome.o \

all: $(OBJS)
	### $(CC) -shared fc-bayes-ai-.so $(OBJS)
	$(CC) -shared $(OBJS)
	
clean:
	rm -f *.o

.c.o:
	$(CC) -c $<
