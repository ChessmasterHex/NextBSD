# $FreeBSD$

.include "../Makefile.inc"
.PATH: ${DIAGPATH}/src ${DIAGPATH}/man

PROG=   ibportstate
SRCS=   ibportstate.c ibdiag_common.c
LIBADD= ibumad ibcommon ibmad
CFLAGS+= -I${DIAGPATH}/include
MAN=	ibportstate.8

WARNS?= 1

.include <bsd.prog.mk>
