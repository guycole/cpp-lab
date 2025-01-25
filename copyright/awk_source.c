/*
** Title:awk_source.c
**
** Description:
**   Write the standard file header for an AWK script.
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

#include <sys/types.h>
#include <sys/stat.h>

#include <stdio.h>
 
#include "copyright.h"

void write_awk(char *filename, int year) {
  extern int gExecFlag;

  mode_t mode = S_IRWXU | S_IRGRP | S_IXGRP | S_IROTH | S_IXOTH;

  FILE *outfile;
 
  if ((outfile = fopen(filename, "w")) == (FILE *) NULL) {
    fprintf(stderr, "Unable to open:%s\n", filename);
    exit(-1);
  }

  if (gExecFlag) {
    fprintf(outfile, "#!/bin/awk\n");
  }

  fprintf(outfile, "#\n");
  fprintf(outfile, "# Title:%s\n", filename);
  fprintf(outfile, "#\n");
  fprintf(outfile, "# Description:\n");
  fprintf(outfile, "#\n");
  fprintf(outfile, "# Development Environment:\n");
  fprintf(outfile, "#   %s\n", OS);
  fprintf(outfile, "#\n");
  fprintf(outfile, "# Author:\n");
  fprintf(outfile, "#   %s\n", AUTHOR);
  fprintf(outfile, "#\n");
  fprintf(outfile, "# Maintenance History:\n");
  fprintf(outfile, "#   $Id$\n");
  fprintf(outfile, "#\n");
  fprintf(outfile, "#   $Log$\n");
  fprintf(outfile, "#\n");

  fclose(outfile);

  if (gExecFlag) {
    if (chmod(filename, mode) < 0) {
      perror("chmod");
    }
  }
}
