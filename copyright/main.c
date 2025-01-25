/*
** Title:main.c
**
** Description:
**   Copyright creates standard file headers.
**
**   Invoke as: copyright filename.ext [-x]
**
**   Type of file header is based upon file extension.
**  
**   -x = generate executable file.  Only scripts (sh, tcl, pl, etc) do this.
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
#include <string.h>

#include <time.h>

#include <unistd.h>

#include "copyright.h"

int gExecFlag; /* TRUE, this file should be executable */

int main(int argc, char *argv[]) {
  int year;
  char *cndx;
  char *target;
  time_t time_now;
  struct tm *time_ptr;
  FILETYPES filetype = UNDEF;

  if (argc < 2) {
    fprintf(stderr, "usage: %s filename.ext [-x]\n", argv[0]);
    fprintf(stderr, "Standard files: makefile\n");
    fprintf(stderr, "Standard file extensions:c, h, tcl\n");
    exit(0);
  }

  if (!access(argv[1], F_OK)) {
    fprintf(stderr, "%s already exists\n", argv[1]);
    exit(0);
  }

  if (argc == 3) {
    if (strcmp(argv[2], "-x")) {
      gExecFlag = 0;
    } else {
      gExecFlag = 1;
    }
  }

  time_now = time((time_t *) NULL);
  time_ptr = localtime(&time_now);
  year = time_ptr->tm_year+1900;

  if ((cndx = strrchr(argv[1], '.')) != (char *) NULL) {
    target = strdup(cndx);
  } else {
    target = strdup(argv[1]);
  }

  if (!strcmp(target, ".awk")) {
    filetype = AWK;
  }

  if (!strcmp(target, ".c")) {
    filetype = C_SOURCE;
  }

  if (!strcmp(target, ".h")) {
    filetype = C_HEADER;
  }

  if (!strcmp(target, ".cc")) {
    filetype = C_PLUS_SOURCE;
  }

  if (!strcmp(target, ".hh")) {
    filetype = C_PLUS_HEADER;
  }

  if (!strcmp(target, ".dat")) {
    filetype = DATA;
  }

  if (!strcmp(target, ".ec")) {
    filetype = ESQL;
  }

  if (!strcmp(target, ".f77")) {
    filetype = F77_SOURCE;
  }

  if (!strcmp(target, ".java")) {
    filetype = JAVA_SOURCE;
  }

  if (!strcmp(target, ".jsp")) {
    filetype = JSP_SOURCE;
  }

  if (!strcmp(target, ".html")) {
    filetype = HTML_SOURCE;
  }

  if (!strcmp(target, ".lsp")) {
    filetype = LISP_SOURCE;
  }

  if (!strcmp(target, "makefile")) {
    filetype = MAKEFILE;
  }

  if (!strcmp(target, ".m")) {
    filetype = MATLAB;
  }

  if (!strcmp(target, ".mix")) {
    filetype = MIX;
  }

  if (!strcmp(target, ".pl")) {
    filetype = PERL_SOURCE;
  }

  if (!strcmp(target, ".p")) {
    filetype = PC_SOURCE;
  }

  if (!strcmp(target, ".php")) {
    filetype = PHP_SOURCE;
  }

  if (!strcmp(target, ".pg")) {
    filetype = PROLOG_SOURCE;
  }

  if (!strcmp(target, ".psql")) {
    filetype = PSQL;
  }

  if (!strcmp(target, ".py")) {
    filetype = PYTHON_SOURCE;
  }

  if (!strcmp(target, ".sqr")) {
    filetype = SQR;
  }

  if (!strcmp(target, ".sh")) {
    filetype = BASH;
  }

  if (!strcmp(target, ".tcl")) {
    filetype = TCL;
  }

  if (!strcmp(target, ".tsql")) {
    filetype = TSQL;
  }

  if (!strcmp(target, ".tex")) {
    filetype = TEX;
  }

  if (!strcmp(target, ".txt")) {
    filetype = TEXT;
  }

  if (!strcmp(target, ".xml")) {
    filetype = XML;
  }

  switch(filetype) {
  case AWK:
    write_awk(argv[1], year);
    break;
  case BASH:
    write_bash(argv[1], year);
    break;
  case C_HEADER:
    write_c_header(argv[1], year);
    break;
  case C_SOURCE:
    write_c_source(argv[1], year);
    break;
  case C_PLUS_HEADER:
    write_cplus_header(argv[1], year);
    break;
  case C_PLUS_SOURCE:
    write_cplus_source(argv[1], year);
    break;
  case DATA:
    write_data(argv[1], year);
    break;
  case ESQL:
    write_esql(argv[1], year);
    break;
  case F77_SOURCE:
    write_f77(argv[1], year);
    break;
  case JAVA_SOURCE:
    write_java(argv[1], year);
    break;
  case JSP_SOURCE:
    write_jsp(argv[1], year);
    break;
  case HTML_SOURCE:
    write_html(argv[1], year);
    break;
  case LISP_SOURCE:
    write_lisp(argv[1], year);
    break;
  case MAKEFILE:
    write_makefile(argv[1], year);
    break;
  case MATHEMATICA:
    write_mathematica(argv[1], year);
    break;
  case MATLAB:
    write_matlab(argv[1], year);
    break;
  case MIX:
    write_mix(argv[1], year);
    break;
  case PERL_SOURCE:
    write_perl(argv[1], year);
    break;
  case PC_SOURCE:
    write_pascal(argv[1], year);
    break;
  case PHP_SOURCE:
    write_php(argv[1], year);
    break;
  case PROLOG_SOURCE:
    write_prolog(argv[1], year);
    break;
  case PSQL:
    write_psql(argv[1], year);
    break;
  case PYTHON_SOURCE:
    write_python(argv[1], year);
    break;
  case SQR:
    write_sqr(argv[1], year);
    break;
  case TCL:
    write_tcl(argv[1], year);
    break;
  case TSQL:
    write_tsql(argv[1], year);
    break;
  case TEX:
    write_tex(argv[1], year);
    break;
  case TEXT:
    write_text(argv[1], year);
    break;
  case XML:
    write_xml(argv[1], year);
    break;
  default:
    fprintf(stderr, "Undefined file type in switch\n");
  }
}
