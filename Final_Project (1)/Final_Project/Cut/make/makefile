SRCDIR = ../src
OBJDIR = ../obj
BINDIR = ../bin
INCDIR = ../include
CFLAGS = gcc -c -g -I${INCDIR}	
all: main.o login.o clear.o finalexe
main.o:
	${CFLAGS} ${SRCDIR}/main.c -o ${OBJDIR}/main.o
login.o:
	${CFLAGS} ${SRCDIR}/login.c -o ${OBJDIR}/login.o
clear.o:
	${CFLAGS} ${SRCDIR}/clear.c -o ${OBJDIR}/clear.o
finalexe:
	gcc ${OBJDIR}/main.o ${OBJDIR}/login.o ${OBJDIR}/clear.o -o ${BINDIR}/main.exe 


