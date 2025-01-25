/*
** Title:copyright.h
**
** Description:
**   Standard definitions for copyright.
**
** Development Environment:
**   Linux 2.0.30 (Red Hat 4.2)
**   GNU gcc 2.7.2.1
**
** Author:
**   G.S. Cole (gsc@acm.org)
**
** Maintenance History:
**   $Id$
**
**   $Log$
*/

#include <stdlib.h>

#define OS "Ubuntu 22.04.05 LTS"

#define AUTHOR "G.S. Cole (guycole at gmail dot com)"

#define GNU_C          "gcc version 4.2.1 (Apple 5658/LLVM 2336.11.00)"

#define GNU_CPLUS      "gcc version 4.2.1 (Apple 5658/LLVM 2336.11.00)"

#define GNU_MAKE       "GNU Make 3.81"

#define SUN_FORTRAN     "Sun FORTRAN 1.2"
#define SUN_PASCAL      "Sun Pascal 2.0"

#define CLISP           "clisp 2.49 (2010-07-07)"

#define ESQL_VER        "Informix ESQL/C 7.22.UC2"

#define JDK             "JDKit 1.6.0_65"

#define JQUERY_VER      "jQuery 1.12.1"

#define MATLAB_VER      "MatLab 5.0"

#define MATHEMATICA_VER "Mathematica 3.0"

#define MIX_VER         "Mix 1.0"

#define PERL_VER        "PERL 5.12.4"

#define PHP_VER         "PHP 5.4.45"

#define PYTHON_VER      "Python 3.10.12"

#define BINPROLOG       "BinProlog 3.0"

#define POSTGRES        "PostgreSQL 8.2"

#define SYBASE_VER      "Sybase SQL Server 11.5.1"
#define SQR_VER         "MITI SQR Workbench 2.5.1"

#define TCL_VER         "Tcl 8.0p2/Tk 8.0p2"
#define EXPECT_VER      "Expect 5.25"

#define TEX_VER         "TeX, C Version 3.14159 (Web2C 7.3.1)"
#define LATEX_VER       "TeX, C Version 3.14159 (Web2C 7.3.1)"
#define METAFONT_VER    "METAFONT 2.7182 (Web2C 7.3.1)"

#define TOMCAT_VER      "Jakarta Tomcat 4.1.24"

typedef enum {
  AWK,            /* AWK script */
  BASH,           /* BASH script */
  C_HEADER,       /* C header file */
  C_SOURCE,       /* C source file */
  C_PLUS_HEADER,  /* C header file */
  C_PLUS_SOURCE,  /* C++ source file */
  DATA,           /* Data file */
  ESQL,           /* Informix ESQL file */
  F77_SOURCE,     /* FORTRAN source file */
  HTML_SOURCE,    /* HTML source file */
  JAVA_SOURCE,    /* Java source file */
  JSP_SOURCE,     /* Java Server Pages source file */
  LISP_SOURCE,    /* LISP souce file */
  MAKEFILE,       /* makefile */
  MATHEMATICA,    /* Mathematica source file */
  MATLAB,         /* MatLab source file */
  MIX,            /* MIX source file */
  PERL_SOURCE,    /* PERL source file */
  PC_SOURCE,      /* Pascal source file */
  PHP_SOURCE,     /* PHP source file */
  PROLOG_SOURCE,  /* PROLOG source file */
  PSQL,           /* PostGres SQL script file */
  PYTHON_SOURCE,  /* Python source file */
  SQR,            /* SQR script file */
  TCL,            /* Tcl/Tk/Expect script file */
  TSQL,           /* Transact SQL script file */
  TEX,            /* TeX file */
  TEXT,           /* ASCII text file */
  XML,            /* XML file */
  UNDEF           /* Undefined file */
} FILETYPES;

extern void write_awk(char *filename, int year);
extern void write_bash(char *filename, int year);

extern void write_c_source(char *filename, int year);
extern void write_c_header(char *filename, int year);

extern void write_cplus_header(char *filename, int year);
extern void write_cplus_source(char *filename, int year);

extern void write_data(char *filename, int year);

extern void write_esql(char *filename, int year);

extern void write_f77(char *filename, int year);

extern void write_java(char *filename, int year);
extern void write_jsp(char *filename, int year);

extern void write_html(char *filename, int year);

extern void write_lisp(char *filename, int year);

extern void write_makefile(char *filename, int year);

extern void write_mathematica(char *filename, int year);
extern void write_matlab(char *filename, int year);

extern void write_mix(char *filename, int year);

extern void write_perl(char *filename, int year);

extern void write_pascal(char *filename, int year);

extern void write_php(char *filename, int year);

extern void write_prolog(char *filename, int year);

extern void write_python(char *filename, int year);

extern void write_psql(char *filename, int year);

extern void write_tcl(char *filename, int year);

extern void write_sqr(char *filename, int year);

extern void write_tsql(char *filename, int year);

extern void write_tex(char *filename, int year);

extern void write_text(char *filename, int year);

extern void write_xml(char *filename, int year);
