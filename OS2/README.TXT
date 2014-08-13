
This directory contains "p2c", a Pascal to C translator for OS/2 v 2.0.

"p2c"  Copyright 1989, 1990, 1991  Free Software Foundation, Inc.

Written and maintained by:   Dave Gillespie
			     256-80 Caltech
			     Pasadena CA 91125
			     daveg@csvax.cs.caltech.edu, cit-vax!daveg

Ported to OS/2 by        :   Bernt Karasch
                             Ruhr-Universitaet Bochum
                             Institut fuer Mineralogie
                             Universitaetsstrasse 150
                             W-4630 Bochum 1 
                             Federal Republic of Germany
                             hermann.gies@ruba.rz.ruhr-uni-bochum.dbp.de


This program is distributed under the terms of the GNU License Agreement.
See the file src/COPYING for details.

The GNU License Agreement restrictions do _not_ apply to code generated
by p2c, nor to the p2c run-time files "p2clib.c" and "p2c.h".


The file "system.imp" contains declarations for "predefined" functions
like "sqrt".  These generally have custom translation code in funcs.c.
Functions with irregular syntaxes have their symbol table entries built
directly in funcs.c; they do not appear here.  The default p2crc
(\emx\p2c\p2crc) causes p2c to read system.imp at the beginning of every job.

The file "system.m2" contains declarations for predefined Modula-2
functions.  It should be substituted for "system.imp" when translating
Modula-2 programs.

The file "turbo.imp" contains declarations for all the Turbo Pascal
standard units like dos and crt.  (These are very incomplete at
present.)  The default p2crc (\emx\p2c\p2crc) causes p2c to read
turbo.imp as soon as any Turbo standard unit is used.

The file "string.pas" implements the Oregon Software dynamic strings
package.  These are translated pretty completely into native C strings
using only the FuncMacro mechanism of p2c---no custom C code was
written to support these functions.

NO WARRANTY:
   The program in this directory was developed for internal use at
   Caltech and thus absolutely no guarantee is made that the program
   will compile or run on other systems or that it will produce correct
   code.  P2c is _not_ a compiler, it is a translator; it strives to
   produce correct code but reserves the right to sacrifice correctness
   in extreme cases for readability in the general case.  P2c is designed
   to be extended (see funcs.c, hpmods.c and citmods.c for examples), but
   some of the main code is pretty messy since the translator has grown
   considerably beyond its original planned scale.  Bug reports are
   welcome at daveg@csvax.caltech.edu, but I may not have time to respond
   to them immediately.  Suggestions are welcome, too!

