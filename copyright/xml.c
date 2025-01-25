/*
** Title:xml_source.c
**
** Description:
**   Write a standard file header for a XML file.
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

void write_xml(char *filename, int year) {
  FILE *outfile;
 
  if ((outfile = fopen(filename, "w")) == (FILE *) NULL) {
    fprintf(stderr, "Unable to open:%s\n", filename);
    exit(-1);
  }

  fprintf(outfile, "<?xml version=\"1.0\" encoding=\"utf-8\"?>\n");
  fprintf(outfile, "<!DOCTYPE change_me SYSTEM \"change_me\">\n\n");

  fprintf(outfile, "<!--\n");
  fprintf(outfile, "Title:%s\n", filename);
  fprintf(outfile, "\n");
  fprintf(outfile, "Description:\n");
  fprintf(outfile, "\n");
  fprintf(outfile, "Development Environment:\n");
  fprintf(outfile, "  %s\n", OS);
  fprintf(outfile, "\n");
  fprintf(outfile, "Author:\n");
  fprintf(outfile, "  %s\n", AUTHOR);
  fprintf(outfile, "\n");
  fprintf(outfile, "Maintenance History:\n");
  fprintf(outfile, "  $Id$\n");
  fprintf(outfile, "\n");
  fprintf(outfile, "  $Log$\n");
  fprintf(outfile, "-->\n");
  fprintf(outfile, "\n");

  fclose(outfile);
}
