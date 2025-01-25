/*
** Title:makefile.c
**
** Description:
**   Write a standard makefile.
**
** Development Environment:
**   Linux 2.0.30 (Red Hat 4.2)
**   GNU gcc 2.7.2.1
**
** Author:
**   G.S. Cole (gsc@acm.org)
**
** Maintenance History:
**   $Log$
*/
static char rcsid[] = "$Id$";

#include <stdio.h>

#include "copyright.h"

void write_makefile(char *filename, int year) {
  FILE *outfile;
 
  if ((outfile = fopen(filename, "w")) == (FILE *) NULL) {
    fprintf(stderr, "Unable to open:%s\n", filename);
    exit(-1);
  }
 
  fprintf(outfile, "#\n");
  fprintf(outfile, "# Title:%s\n", filename);
  fprintf(outfile, "#\n");
  fprintf(outfile, "# Description:\n");
  fprintf(outfile, "#\n");
  fprintf(outfile, "#   'make size' returns the quantity of lines in this directory\n");
  fprintf(outfile, "#   'make clean' removes all core and object files\n");
  fprintf(outfile, "#   'make ultraclean' removes all executables\n");
  fprintf(outfile, "#\n");
  fprintf(outfile, "# Operating System/Environment:\n");
  fprintf(outfile, "#   %s\n", OS);
  fprintf(outfile, "#   %s\n", GNU_MAKE);
  fprintf(outfile, "#\n");
  fprintf(outfile, "# Author:\n");
  fprintf(outfile, "#   %s\n", AUTHOR);
  fprintf(outfile, "#\n");
  fprintf(outfile, "# $Id$\n");
  fprintf(outfile, "#\n");
  fprintf(outfile, "# $Log$\n");
  fprintf(outfile, "#\n");
  fprintf(outfile, "\n");
  fprintf(outfile, "#\n");
  fprintf(outfile, "# Directories.\n");
  fprintf(outfile, "#\n");
  fprintf(outfile, "DEVDIR = $(HOME)\n");
  fprintf(outfile, "INCDIR = $(DEVDIR)/include\n");
  fprintf(outfile, "LIBDIR = $(DEVDIR)/lib\n");
  fprintf(outfile, "\n");
  fprintf(outfile, "#\n");
  fprintf(outfile, "# Header Files.\n");
  fprintf(outfile, "#\n");
  fprintf(outfile, "\n");
  fprintf(outfile, "#\n");
  fprintf(outfile, "# Libraries.\n");
  fprintf(outfile, "#\n");
  fprintf(outfile, "\n");
  fprintf(outfile, "#\n");
  fprintf(outfile, "# Configurations.\n");
  fprintf(outfile, "#\n");
  fprintf(outfile, "CMACS  = -DTRACE=1\n");
  fprintf(outfile, "CFLAGS = -g -Wall -I$(INCDIR)\n");
  fprintf(outfile, "\n");
  fprintf(outfile, "#\n");
  fprintf(outfile, "# Tools.\n");
  fprintf(outfile, "#\n");
  fprintf(outfile, "CC = gcc\n");
  fprintf(outfile, "INDENT = indent\n");
  fprintf(outfile, "LATEX = latex\n");
  fprintf(outfile, "\n");
  fprintf(outfile, "#\n");
  fprintf(outfile, "# Executable Names.\n");
  fprintf(outfile, "#\n");
  fprintf(outfile, "\n");
  fprintf(outfile, "#\n");
  fprintf(outfile, "# Object Files.\n");
  fprintf(outfile, "#\n");
  fprintf(outfile, "OBJS =\n");
  fprintf(outfile, "\n");
  fprintf(outfile, "#\n");
  fprintf(outfile, "# Finally, some work...\n");
  fprintf(outfile, "#\n");
  fprintf(outfile, "all:\n");
  fprintf(outfile, "\n");

  fprintf(outfile, "#\n");
  fprintf(outfile, "#  Update the TAGS file.\n");
  fprintf(outfile, "#\n");
  fprintf(outfile, ".PHONY: tags\n");
  fprintf(outfile, "tags:\n");
  fprintf(outfile, "\t-@etags *.cc\n");
  fprintf(outfile, "\n");

  fprintf(outfile, "#\n");
  fprintf(outfile, "#  Determine the size of source files in this subdirectory.\n");
  fprintf(outfile, "#\n");
  fprintf(outfile, ".PHONY: size\n");
  fprintf(outfile, "size:\n");
  fprintf(outfile, "\t-@echo \"Size: `pwd`\"\n");
  fprintf(outfile, "\t-@wc -l *.cc makefile\n");
  fprintf(outfile, "\n");

  fprintf(outfile, "#\n");
  fprintf(outfile, "#  Generate dependency file\n");
  fprintf(outfile, "#\n");
  fprintf(outfile, ".PHONY: depend\n");
  fprintf(outfile, "depend:\n");
  fprintf(outfile, "\t-@rm ./depend.include\n");
  fprintf(outfile, "\t$(CC) $(DEPEND_FLAG) $(CPPFLAGS) *.cc > ./depend.include\n");
  fprintf(outfile, "\n");

  fprintf(outfile, "#\n");
  fprintf(outfile, "#  Cleanup this subdirectory.\n");
  fprintf(outfile, "#\n");
  fprintf(outfile, ".PHONY: clean\n");
  fprintf(outfile, "clean:\n");
  fprintf(outfile, "\t-@rm -f *.o *.BAK core\n");
  fprintf(outfile, "\n");

  fprintf(outfile, "#\n");
  fprintf(outfile, "#  Nuke all the executables.\n");
  fprintf(outfile, "#\n");
  fprintf(outfile, ".PHONY ultraclean:\n");
  fprintf(outfile, "ultraclean:\n");
  fprintf(outfile, "\t-@rm -f *~\n");

  fclose(outfile);
}
