/*
** Title:sqr.c
**
** Description:
**   Create a standard SQR template file.
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

void write_sqr(char *filename, int year) {
  FILE *outfile;
 
  if ((outfile = fopen(filename, "w")) == (FILE *) NULL) {
    fprintf(stderr, "Unable to open:%s\n", filename);
    exit(-1);
  }
 
  fprintf(outfile, "!\n");
  fprintf(outfile, "! Title:%s\n", filename);
  fprintf(outfile, "!\n");
  fprintf(outfile, "! Description:\n");
  fprintf(outfile, "!\n");
  fprintf(outfile, "! Development Environment:\n");
  fprintf(outfile, "!   %s\n", OS);
  fprintf(outfile, "!   %s\n", SYBASE_VER);
  fprintf(outfile, "!   %s\n", SQR_VER);
  fprintf(outfile, "!\n");
  fprintf(outfile, "! Author:\n");
  fprintf(outfile, "!   %s\n", AUTHOR);
  fprintf(outfile, "!\n");
  fprintf(outfile, "! Maintenance History:\n");
  fprintf(outfile, "!   $Id$\n");
  fprintf(outfile, "!\n");
  fprintf(outfile, "!   $Log$\n");
  fprintf(outfile, "!\n\n");

  fprintf(outfile, "!\n");
  fprintf(outfile, "!\n");
  fprintf(outfile, "!\n");
  fprintf(outfile, "begin-report\n");  
  fprintf(outfile, "end-report\n\n");  

  fprintf(outfile, "!\n");
  fprintf(outfile, "!\n");
  fprintf(outfile, "!\n");
  fprintf(outfile, "!begin-setup\n");  
  fprintf(outfile, "!end-setup\n\n");  

  fprintf(outfile, "!\n");
  fprintf(outfile, "!\n");
  fprintf(outfile, "!\n");
  fprintf(outfile, "!begin-heading 2\n");  
  fprintf(outfile, "!end-heading\n\n");  

  fprintf(outfile, "!\n");
  fprintf(outfile, "!\n");
  fprintf(outfile, "!\n");
  fprintf(outfile, "!begin-footing 1\n");  
  fprintf(outfile, "!end-footing\n\n");  

  fprintf(outfile, "!\n");
  fprintf(outfile, "!\n");
  fprintf(outfile, "!\n");
  fprintf(outfile, "!begin-procedure ignition\n");  
  fprintf(outfile, "!end-procedure ignition\n\n");  

  fprintf(outfile, "!\n");
  fprintf(outfile, "!\n");
  fprintf(outfile, "!\n");
  fprintf(outfile, "!begin-procedure shutdown\n");  
  fprintf(outfile, "!end-procedure shutdown\n");  
        
  fclose(outfile);
}
