/*
** Title:python.c
**
** Description:
**    Write a standard file header for a Python script.
**    Optionally, set the file permissions to make the file executable.
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

#include <sys/stat.h>
#include <sys/types.h>

#include <stdio.h>
 
#include "copyright.h"

void write_python(char *filename, int year) {
  extern int gExecFlag;

  mode_t mode = S_IRWXU | S_IRGRP | S_IXGRP | S_IROTH | S_IXOTH;
 
  FILE *outfile;
 
  if ((outfile = fopen(filename, "w")) == (FILE *) NULL) {
    fprintf(stderr, "Unable to open:%s\n", filename);
    exit(-1);
  }
 
  if (gExecFlag) {
    fprintf(outfile, "#!/usr/bin/python\n");
  }

  fprintf(outfile, "#\n");
  fprintf(outfile, "# Title:%s\n", filename);
  fprintf(outfile, "# Description:\n");
  fprintf(outfile, "# Development Environment:%s/%s\n", OS, PYTHON_VER);
  fprintf(outfile, "# Author:%s\n", AUTHOR);
  fprintf(outfile, "#\n");

  fprintf(outfile, "\n");
  fprintf(outfile, "\n");
  fprintf(outfile, "\n");
 
  fprintf(outfile, "#;;; Local Variables: ***\n");
  fprintf(outfile, "#;;; mode:python ***\n");
  fprintf(outfile, "#;;; End: ***\n");        
        
  fclose(outfile);
 
  if (gExecFlag) {
    if (chmod(filename, mode) < 0) {
      perror("chmod");
    }
  }
}
