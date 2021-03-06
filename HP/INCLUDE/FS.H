/* Header for module fs, generated by p2c */
#ifndef FS_H
#define FS_H



/*file support*/
#ifndef SYSGLOBALS_H
#include <sysgloba.h>
#endif

#ifndef ASM_H
#include <asm.h>
#endif

#ifndef MISC_H
#include <misc.h>
#endif



#ifdef FS_G
# define vextern
#else
# define vextern extern
#endif



typedef enum {
    fs_cnormal, fs_lock, fs_purge, fs_ccrunch
} fs_closetype;

typedef enum {
    fs_readonly, fs_writeonly, fs_readwrite, fs_writeappend, fs_overwrite
} fs_faccess;

typedef union fs_vptr {
    long j;
    short *i;
    Char *s;
} fs_vptr;



extern Void fs_fstripname PP((Char *s, Char *pvname, Char *ppath,
			      Char *pfname));
extern Void fs_fixname PP((Char *title, int kind));
extern Void fs_zapspaces PP((Char *s));
extern filekind fs_suffix PP((Char *ftitle));
extern boolean fs_scantitle PP((Char *fname, Char *fvid, Char *ftitle,
				long *fsegs, filekind *fkind));
extern char fs_findvolume PP((Char *fvid, int verify));
extern Void fs_doprefix PP((Char *dirname, Char *kvid, long *kunit,
			    int findunit));
extern Void fs_finitb PP((fib *f, Char *window_, long recbytes));
extern Void fs_fhpopen PP((fib *f, int typ, Char *title, Char *option));
extern Void fs_fhpreset PP((fib *f, int typ));
extern Void fs_fcloseit PP((fib *f, Char *stype));
extern Void fs_fclose PP((fib *f, int ftype));
extern Void fs_fmaketype PP((fib *f, Char *title, Char *option,
			     Char *typestring));
extern Void fs_foverfile PP((fib *f, Char *title, Char *option,
			     Char *typestring));
extern Void fs_fanonfile PP((fib *f, Char *name, int kind, long size));
extern Void fs_fseek PP((fib *f, long position));
extern long fs_fposition PP((fib *f));
extern long fs_fmaxpos PP((fib *f));
extern Char *fs_fbufferref PP((fib *f));
extern Void fs_fget PP((fib *f));
extern Void fs_fput PP((fib *f));
extern boolean fs_feof PP((fib *f));
extern boolean fs_feoln PP((fib *f));
extern Void fs_fwriteln PP((fib *f));
extern Void fs_fread PP((fib *f, Char *buf));
extern Void fs_fwrite PP((fib *f, Char *buf));
extern Void fs_freadbytes PP((fib *f, Char *buf, long size));
extern Void fs_fwritebytes PP((fib *f, Char *buf, long size));
extern long fs_fblockio PP((fib *f, Char *buf, long nblocks, long rblock,
			    int doread));
extern Void fs_killchar PP((fib *f, long *sinx));
extern Void fs_fpage PP((FILE *t));
extern Void fs_foverprint PP((FILE *t));
extern Void fs_fgotoxy PP((fib *f, long x, long y));
extern Void fs_fgetxy PP((fib *f, long *x, long *y));
extern Void fs_freadln PP((FILE *t));
extern Void fs_fwritechar PP((FILE *t, int ch, int rleng));
extern Void fs_freadchar PP((FILE *t, Char *ch));
extern Void fs_freadword PP((FILE *t, short *i));
extern Void fs_freadint PP((FILE *t, long *i));
extern Void fs_fwriteword PP((FILE *t, int i, int rleng));
extern Void fs_fwriteint PP((FILE *t, long i, int rleng));
extern Void fs_fwritestr PP((FILE *t, Char *s, int rleng));
extern Void fs_freadstr PP((FILE *t, Char *s));
extern Void fs_fwritepaoc PP((FILE *t, Char *a, int aleng, int rleng));
extern Void fs_freadpaoc PP((FILE *t, Char *a, int aleng));
extern Void fs_freadenum PP((FILE *t, short *i, fs_vptr p));
extern Void fs_fwriteenum PP((FILE *t, int i, int rleng, fs_vptr p));
extern Void fs_freadbool PP((FILE *t, boolean *b));
extern Void fs_fwritebool PP((FILE *t, int b, int rleng));
extern Void fs_freadstrchar PP((Char *s, long *p2, Char *ch));
extern Void fs_fwritestrchar PP((Char *s, long *p2, int ch, int rleng));
extern Void fs_freadstrword PP((Char *s, long *p2, short *i));

/*PROCEDURE FREADSTRINT (VAR S: STRING255;VAR P2,I: INTEGER);*/
extern Void fs_fwritestrword PP((Char *s, long *p2, int i, int rleng));

/*PROCEDURE FWRITESTRINT(VAR T: STRING; */
/*                                VAR P2: INTEGER; I: INTEGER; RLENG: SHORTINT); */
extern Void fs_freadstrstr PP((Char *t, long *p2, Char *s));
extern Void fs_fwritestrstr PP((Char *s, long *p2, Char *t, int rleng));
extern Void fs_fwritestrpaoc PP((Char *s, long *p2, Char *a, int aleng,
				 int rleng));
extern Void fs_freadstrpaoc PP((Char *s, long *p2, Char *a, int aleng));
extern Void fs_freadstrenum PP((Char *s, long *p2, short *i, fs_vptr p));
extern Void fs_fwritestrenum PP((Char *s, long *p2, int i, int rleng,
				 fs_vptr p));
extern Void fs_freadstrbool PP((Char *s, long *p2, boolean *b));
extern Void fs_fwritestrbool PP((Char *s, long *p2, int b, int rleng));



#undef vextern

#endif /*FS_H*/

/* End. */

