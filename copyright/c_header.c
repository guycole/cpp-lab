/*
** Title:c_header.c
**
** Description:
**   Write the standard file prologue for a C header file.
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

void write_c_header(char *filename, int year) {
  FILE *outfile;
 
  if ((outfile = fopen(filename, "w")) == (FILE *) NULL) {
    fprintf(stderr, "Unable to open:%s\n", filename);
    exit(-1);
  }

  fprintf(outfile, "/*\n");
  fprintf(outfile, "** Title:%s\n", filename);
  fprintf(outfile, "**\n");
  fprintf(outfile, "** Description:\n");
  fprintf(outfile, "**\n");
  fprintf(outfile, "** Development Environment:\n");
  fprintf(outfile, "**   %s\n", OS);
  fprintf(outfile, "**   %s\n", GNU_C);
  fprintf(outfile, "**\n");
  fprintf(outfile, "** Author:\n");
  fprintf(outfile, "**   %s\n", AUTHOR);
  fprintf(outfile, "**\n");
  fprintf(outfile, "** Maintenance History:\n");
  fprintf(outfile, "**   $Id$\n");
  fprintf(outfile, "**\n");
  fprintf(outfile, "**   $Log$\n");
  fprintf(outfile, "*/\n");
 
  fclose(outfile);
}
