/*
** Title:html_source.c
**
** Description:
**   Write a standard file header for a html file.
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

void write_html(char *filename, int year) {
  FILE *outfile;
 
  if ((outfile = fopen(filename, "w")) == (FILE *) NULL) {
    fprintf(stderr, "Unable to open:%s\n", filename);
    exit(-1);
  }

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

  fprintf(outfile, "<HTML>\n");
  fprintf(outfile, "<HEAD>\n");
  fprintf(outfile, "<TITLE>Bogus Title</TITLE>\n");
  fprintf(outfile, "<LINK REV=\"MADE\" HREF=\"mailto:gsc@digiburo.com\">\n");
  fprintf(outfile, "<META NAME=\"DESCRIPTION\" CONTENT=\"bogus content\">\n");
  fprintf(outfile, "<META NAME=\"KEYWORDS\" CONTENT=\"bogus keywords\">\n");
  fprintf(outfile, "</HEAD>\n\n");

  fprintf(outfile, "<BODY BGCOLOR=white>\n");
  fprintf(outfile, "<HR>\n");
  fprintf(outfile, "<A HREF=\"../index.html\"><IMG SRC=\"house.gif\">Return</A>\n");

  fprintf(outfile, "<HR>\n");
  fprintf(outfile, "<PRE>$Id$</PRE>\n");
  fprintf(outfile, "&#169 Copyright %d Digital Burro, INC, All Rights Reserved\n", year);
	
  fprintf(outfile, "<ADDRESS>\n");
  fprintf(outfile, "<A HREF=\"http://www.digiburo.com/gsc.html\">G.S. Cole</A>\n");
  fprintf(outfile, "<A HREF=\"mailto:gsc@digiburo.com\">gsc@digiburo.com</A>\n");
  fprintf(outfile, "<A HREF=\"http://www.digiburo.com\">Digital Burro, INC</A>\n");
  fprintf(outfile, "</ADDRESS>\n");
  fprintf(outfile, "</BODY>\n");
  fprintf(outfile, "</HTML>\n");

  fprintf(outfile, "<!--\n");
  fprintf(outfile, "#;;; Local Variables: ***\n");
  fprintf(outfile, "#;;; mode:html ***\n");
  fprintf(outfile, "#;;; End: ***\n");
  fprintf(outfile, "-->\n");

  fclose(outfile);
}
