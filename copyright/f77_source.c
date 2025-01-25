/*
** Title:f77_source.c
**
** Description:
**   Write the standard file header for a F77 source deck.
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

void write_f77(char *filename, int year) {
  FILE *outfile;
 
  if ((outfile = fopen(filename, "w")) == (FILE *) NULL) {
    fprintf(stderr, "Unable to open:%s\n", filename);
    exit(-1);
  }
 
  fprintf(outfile, "c\n");
  fprintf(outfile, "c Title:%s\n", filename);
  fprintf(outfile, "c\n");
  fprintf(outfile, "c Description:\n");
  fprintf(outfile, "c\n");
  fprintf(outfile, "c Development Environment:\n");
  fprintf(outfile, "c   %s\n", OS);
  fprintf(outfile, "c   %s\n", SUN_FORTRAN);
  fprintf(outfile, "c\n");
  fprintf(outfile, "c Author:\n");
  fprintf(outfile, "c   %s\n", AUTHOR);
  fprintf(outfile, "c\n");
  fprintf(outfile, "c Maintenance History:\n");
  fprintf(outfile, "c    $Log$\n");
  fprintf(outfile, "c\n");
  fprintf(outfile, "\n");
  fprintf(outfile, "\n");
  fprintf(outfile, "\tDATA RCSID/\"$Id$\"/\n");
  
  fclose(outfile);
}
