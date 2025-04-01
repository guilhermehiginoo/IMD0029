# Nome do executável
TARGET = calcular_areas

# Compilador
CC = gcc

# Opções de compilação
CFLAGS = -Wall -std=c11

# Arquivos de objeto
OBJS = main.o area.o

# Regra padrão para compilar o projeto
all: $(TARGET)

# Regra para gerar o executável
$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $(TARGET) -lm

# Regra para compilar o main.c
main.o: main.c area.h
	$(CC) $(CFLAGS) -c main.c

# Regra para compilar o area.c
area.o: area.c area.h
	$(CC) $(CFLAGS) -c area.c

# Regra para limpar os arquivos gerados
clean:
	rm -f $(OBJS) $(TARGET)

