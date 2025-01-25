/*
** Title:php.c
**
** Description:
**   Write the standard file header for a php file.
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

void write_php(char *filename, int year) {
  FILE *outfile;
 
  if ((outfile = fopen(filename, "w")) == (FILE *) NULL) {
    fprintf(stderr, "Unable to open:%s\n", filename);
    exit(-1);
  }

  fprintf(outfile, "<?php\n\n");

  fprintf(outfile, "/**\n");
  fprintf(outfile, " *\n");
  fprintf(outfile, " * @author %s\n", AUTHOR);
  fprintf(outfile, " * @version $Id$\n");
  fprintf(outfile, " */\n\n");

  fprintf(outfile, "/*\n");
  fprintf(outfile, " * Development Environment:\n");
  fprintf(outfile, " *   %s\n", OS);
  fprintf(outfile, " *   %s\n", PHP_VER);
  fprintf(outfile, " *   %s\n", JQUERY_VER);
  fprintf(outfile, " *\n");
  fprintf(outfile, " * Maintenance History:\n");
  fprintf(outfile, " *   $Log$\n");
  fprintf(outfile, " */\n");

  fprintf(outfile, "?>\n\n");

  fprintf(outfile, "<!DOCTYPE html>\n");
  fprintf(outfile, "<html lang=\"en\">\n");
  fprintf(outfile, "  <head>\n");
  fprintf(outfile, "    <meta charset=\"UTF-8\">\n");
  fprintf(outfile, "    <title>Page Title</title>\n");
  fprintf(outfile, "    <link rel=\"stylesheet\" type=\"text/css\" href=\"css/stylesheet.css\"/>\n");
  fprintf(outfile, "  </head>\n");
  fprintf(outfile, "  <body>\n");
  fprintf(outfile, "    <h1>Hello from HTML</h1>\n");
  fprintf(outfile, "  </body>\n");
  fprintf(outfile, "</html>\n");
  fclose(outfile);
}

