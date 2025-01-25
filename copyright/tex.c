/*
** Title:tex.c
**
** Description:
**   Write the standard header for a TeX file.
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

void write_tex(char *filename, int year) {
  FILE *outfile;
 
  if ((outfile = fopen(filename, "w")) == (FILE *) NULL) {
    fprintf(stderr, "Unable to open:%s\n", filename);
    exit(-1);
  }
 
  fprintf(outfile, "%%\n");
  fprintf(outfile, "%% Title:%s\n", filename);
  fprintf(outfile, "%%\n");
  fprintf(outfile, "%% Description:\n");
  fprintf(outfile, "%%\n");
  fprintf(outfile, "%% Tools/Operating System:\n");
  fprintf(outfile, "%%   %s\n", OS);
  fprintf(outfile, "%%   %s\n", TEX_VER);
  fprintf(outfile, "%%   %s\n", LATEX_VER);
  fprintf(outfile, "%%   %s\n", METAFONT_VER);
  fprintf(outfile, "%%\n");
  fprintf(outfile, "%% Author:\n");
  fprintf(outfile, "%%   %s\n", AUTHOR);
  fprintf(outfile, "%%\n");
  fprintf(outfile, "%% Maintenance History:\n");
  fprintf(outfile, "%%   $Id$\n");
  fprintf(outfile, "%%\n");
  fprintf(outfile, "%%   $Log$\n");
  fprintf(outfile, "%%\n");
 
  fclose(outfile);
}
