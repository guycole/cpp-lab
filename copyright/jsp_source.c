/*
** Title:jsp_source.c
**
** Description:
**   Write a standard file header for a jsp file.
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

void write_jsp(char *filename, int year) {
  FILE *outfile;
 
  if ((outfile = fopen(filename, "w")) == (FILE *) NULL) {
    fprintf(stderr, "Unable to open:%s\n", filename);
    exit(-1);
  }

  fprintf(outfile, "<%%@ page language=\"java\" %%>\n");

  fprintf(outfile, "<HTML>\n");
  fprintf(outfile, "<HEAD>\n");
  fprintf(outfile, "<TITLE>Bogus Title</TITLE>\n");
  fprintf(outfile, "</HEAD>\n\n");

  fprintf(outfile, "<BODY BGCOLOR=white>\n");
  fprintf(outfile, "<HR>\n");
  fprintf(outfile, "<HR>\n");
  fprintf(outfile, "</BODY>\n");
  fprintf(outfile, "</HTML>\n\n");

//  fprintf(outfile, "<%%--\n");
  fprintf(outfile, "<!--\n");
  fprintf(outfile, "Title:%s\n", filename);
  fprintf(outfile, "\n");
  fprintf(outfile, "Description:\n");
  fprintf(outfile, "\n");
  fprintf(outfile, "Development Environment:\n");
  fprintf(outfile, "  %s\n", OS);
  fprintf(outfile, "  %s\n", TOMCAT_VER);
  fprintf(outfile, "\n");
  fprintf(outfile, "Author:\n");
  fprintf(outfile, "  %s\n", AUTHOR);
  fprintf(outfile, "\n");
  fprintf(outfile, "Maintenance History:\n");
  fprintf(outfile, "  $Id$\n");
  fprintf(outfile, "\n");
  fprintf(outfile, "  $Log$\n");
//  fprintf(outfile, "--%%>\n");
  fprintf(outfile, "\n");
  fprintf(outfile, "-->\n");

  fprintf(outfile, "<!--\n");
  fprintf(outfile, "#;;; Local Variables: ***\n");
  fprintf(outfile, "#;;; mode:html ***\n");
  fprintf(outfile, "#;;; End: ***\n");
  fprintf(outfile, "-->\n");

  fclose(outfile);
}
