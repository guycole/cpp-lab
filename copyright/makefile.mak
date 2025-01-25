#
# Title:makefile
#
# Description:
#   makefile for the copyright program.
#
#   'make size' returns the quantity of lines in this directory
#   'make clean' removes all core and object files
#   'make ultraclean' removes all executables
#
# Operating System/Environment:
#   Linux 2.0.30 (Red Hat 4.2)
#   GNU make 3.75
#
# Author:
#   G.S. Cole (gsc@acm.org)
#
# $Id$
#
# $Log$
#

#
# Directories.
#
DEVDIR = $(HOME)
INCDIR = $(DEVDIR)/include
LIBDIR = $(DEVDIR)/lib

#
# Header Files.
#
CY_H = copyright.h

#
# Libraries.
#

#
# Configurations.
#
CMACS  = -DTRACE=1
CFLAGS = -g -Wall -I$(INCDIR)

#
# Tools.
#
CC = gcc
INDENT = indent
LATEX = latex

#
# Executable Names.
#
COPYRIGHT = copyright

#
# Object Files.
#
OBJS = main.o awk_source.o bash_source.o c_source.o c_header.o \
	cplus_header.o cplus_source.o data.o esql.o f77_source.o \
	html_source.o java.o jsp_source.o lisp_source.o makefile.o \
	mathematica.o matlab.o mix.o perl.o pascal.o php.o prolog.o \
        psql.o python.o sqr.o tcl.o tsql.o tex.o text.o xml.o

#
# Finally, some work...
#
all: $(COPYRIGHT)

$(COPYRIGHT): $(OBJS) 
	$(CC) -o $(COPYRIGHT) $(OBJS)

main.o: main.c $(CY_H)
	$(CC) -c $(CFLAGS) $(CMACS) main.c

awk_source.o: awk_source.c $(CY_H)
	$(CC) -c $(CFLAGS) $(CMACS) awk_source.c

bash_source.o: bash_source.c $(CY_H)
	$(CC) -c $(CFLAGS) $(CMACS) bash_source.c

c_source.o: c_source.c $(CY_H)
	$(CC) -c $(CFLAGS) $(CMACS) c_source.c

c_header.o: c_header.c $(CY_H)
	$(CC) -c $(CFLAGS) $(CMACS) c_header.c

cplus_header.o: cplus_header.c $(CY_H)
	$(CC) -c $(CFLAGS) $(CMACS) cplus_header.c

cplus_source.o: cplus_source.c $(CY_H)
	$(CC) -c $(CFLAGS) $(CMACS) cplus_source.c

data.o: data.c $(CY_H)
	$(CC) -c $(CFLAGS) $(CMACS) data.c

esql.o: esql.c $(CY_H)
	$(CC) -c $(CFLAGS) $(CMACS) esql.c

f77_source.o: f77_source.c $(CY_H)
	$(CC) -c $(CFLAGS) $(CMACS) f77_source.c

java.o: java.c $(CY_H)
	$(CC) -c $(CFLAGS) $(CMACS) java.c

jsp.o: jsp.c $(CY_H)
	$(CC) -c $(CFLAGS) $(CMACS) jsp.c

html_source.o: html_source.c $(CY_H)
	$(CC) -c $(CFLAGS) $(CMACS) html_source.c

lisp_source.o: lisp_source.c $(CY_H)
	$(CC) -c $(CFLAGS) $(CMACS) lisp_source.c

makefile.o: makefile.c $(CY_H)
	$(CC) -c $(CFLAGS) $(CMACS) makefile.c

mathematica.o: mathematica.c $(CY_H)
	$(CC) -c $(CFLAGS) $(CMACS) mathematica.c

matlab.o: matlab.c $(CY_H)
	$(CC) -c $(CFLAGS) $(CMACS) matlab.c

mix.o: mix.c $(CY_H)
	$(CC) -c $(CFLAGS) $(CMACS) mix.c

perl.o: perl.c $(CY_H)
	$(CC) -c $(CFLAGS) $(CMACS) perl.c

pascal.o: pascal.c $(CY_H)
	$(CC) -c $(CFLAGS) $(CMACS) pascal.c

php.o: php.c $(CY_H)
	$(CC) -c $(CFLAGS) $(CMACS) php.c

prolog.o: prolog.c $(CY_H)
	$(CC) -c $(CFLAGS) $(CMACS) prolog.c

psql.o: psql.c $(CY_H)
	$(CC) -c $(CFLAGS) $(CMACS) psql.c

python.o: python.c $(CY_H)
	$(CC) -c $(CFLAGS) $(CMACS) python.c

sqr.o: sqr.c $(CY_H)
	$(CC) -c $(CFLAGS) $(CMACS) sqr.c

tcl.o: tcl.c $(CY_H)
	$(CC) -c $(CFLAGS) $(CMACS) tcl.c

tsql.o: tsql.c $(CY_H)
	$(CC) -c $(CFLAGS) $(CMACS) tsql.c

tex.o: tex.c $(CY_H)
	$(CC) -c $(CFLAGS) $(CMACS) tex.c

text.o: text.c $(CY_H)
	$(CC) -c $(CFLAGS) $(CMACS) text.c

xml.o: xml.c $(CY_H)
	$(CC) -c $(CFLAGS) $(CMACS) xml.c

#
#  Determine the size of source files in this subdirectory. 
#
size:
	-@echo "Size: `pwd`"
	-@wc -l *.c makefile

#
#  Cleanup this subdirectory.
#
clean:
	-rm -f *.o *.BAK core
#
#  Nuke all the executables.
#
ultraclean:
	-rm -f *~
