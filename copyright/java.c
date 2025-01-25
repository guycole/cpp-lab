/*
** Title:java.c
**
** Description:
**   Write the standard file header for a java source deck.
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

void write_java(char *filename, int year) {
  FILE *outfile;
 
  if ((outfile = fopen(filename, "w")) == (FILE *) NULL) {
    fprintf(stderr, "Unable to open:%s\n", filename);
    exit(-1);
  }

  fprintf(outfile, "//package com.digiburo.bogus;\n\n");
  fprintf(outfile, "//import java.bogus\n\n");

  fprintf(outfile, "/**\n");
  fprintf(outfile, " *\n");
  fprintf(outfile, " * @author %s\n", AUTHOR);
  fprintf(outfile, " * @version $Id$\n");
  fprintf(outfile, " */\n\n");

  fprintf(outfile, "/*\n");
  fprintf(outfile, " * Development Environment:\n");
  fprintf(outfile, " *   %s\n", OS);
  fprintf(outfile, " *   %s\n", JDK);
  fprintf(outfile, " *\n");
  fprintf(outfile, " * Maintenance History:\n");
  fprintf(outfile, " *   $Log$\n");
  fprintf(outfile, " */\n");

  fclose(outfile);
}

