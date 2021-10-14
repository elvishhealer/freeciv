CC=gcc

OBJS= list.o \
	population.o \
	gauss_probability.o \
	probability.o \
	bayes.o \
	bitgenome.o \
	genome.o \
	genome_algorithms.o \

all: $(OBJS)
	$(CC) -shared -o fc-ai.so $(OBJS)
	@cp fc-ai.so fc-ai.so.1
	
clean:
	rm -f *.o fc-ai.so fc-ai.so.1

.c.o:
	$(CC) -c $<
