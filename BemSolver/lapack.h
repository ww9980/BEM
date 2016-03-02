#ifndef __CLAPACK_H
#define __CLAPACK_H

#ifdef WIN32

 extern "C" {
#include "f2c.h" 
//get clapack.h header and convert it to intel fortran compatible header use www.editpadpro.com
//  search: /\* Subroutine \*/ int ([a-z0-9]+)_
//  replace with: /* Subroutine */ int __cdecl \U1
/* Subroutine */ int __cdecl CBDSQR(char *uplo, integer *n, integer *ncvt, integer *
	nru, integer *ncc, real_ *d__, real_ *e, complex_ *vt, integer *ldvt, 
	complex_ *u, integer *ldu, complex_ *c__, integer *ldc, real_ *rwork, 
	integer *info);
 
/* Subroutine */ int __cdecl CGBBRD(char *vect, integer *m, integer *n, integer *ncc,
	 integer *kl, integer *ku, complex_ *ab, integer *ldab, real_ *d__, 
	real_ *e, complex_ *q, integer *ldq, complex_ *pt, integer *ldpt, 
	complex_ *c__, integer *ldc, complex_ *work, real_ *rwork, integer *info);
 
/* Subroutine */ int __cdecl CGBCON(char *norm, integer *n, integer *kl, integer *ku,
	 complex_ *ab, integer *ldab, integer *ipiv, real_ *anorm, real_ *rcond, 
	complex_ *work, real_ *rwork, integer *info);
 
/* Subroutine */ int __cdecl CGBEQU(integer *m, integer *n, integer *kl, integer *ku,
	 complex_ *ab, integer *ldab, real_ *r__, real_ *c__, real_ *rowcnd, real_ 
	*colcnd, real_ *amax, integer *info);
 
/* Subroutine */ int __cdecl CGBRFS(char *trans, integer *n, integer *kl, integer *
	ku, integer *nrhs, complex_ *ab, integer *ldab, complex_ *afb, integer *
	ldafb, integer *ipiv, complex_ *b, integer *ldb, complex_ *x, integer *
	ldx, real_ *ferr, real_ *berr, complex_ *work, real_ *rwork, integer *
	info);
 
/* Subroutine */ int __cdecl CGBSV(integer *n, integer *kl, integer *ku, integer *
	nrhs, complex_ *ab, integer *ldab, integer *ipiv, complex_ *b, integer *
	ldb, integer *info);
 
/* Subroutine */ int __cdecl CGBSVX(char *fact, char *trans, integer *n, integer *kl,
	 integer *ku, integer *nrhs, complex_ *ab, integer *ldab, complex_ *afb,
	 integer *ldafb, integer *ipiv, char *equed, real_ *r__, real_ *c__, 
	complex_ *b, integer *ldb, complex_ *x, integer *ldx, real_ *rcond, real_ 
	*ferr, real_ *berr, complex_ *work, real_ *rwork, integer *info);
 
/* Subroutine */ int __cdecl CGBTF2(integer *m, integer *n, integer *kl, integer *ku,
	 complex_ *ab, integer *ldab, integer *ipiv, integer *info);
 
/* Subroutine */ int __cdecl CGBTRF(integer *m, integer *n, integer *kl, integer *ku,
	 complex_ *ab, integer *ldab, integer *ipiv, integer *info);
 
/* Subroutine */ int __cdecl CGBTRS(char *trans, integer *n, integer *kl, integer *
	ku, integer *nrhs, complex_ *ab, integer *ldab, integer *ipiv, complex_ 
	*b, integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl CGEBAK(char *job, char *side, integer *n, integer *ilo, 
	integer *ihi, real_ *scale, integer *m, complex_ *v, integer *ldv, 
	integer *info);
 
/* Subroutine */ int __cdecl CGEBAL(char *job, integer *n, complex_ *a, integer *lda, 
	integer *ilo, integer *ihi, real_ *scale, integer *info);
 
/* Subroutine */ int __cdecl CGEBD2(integer *m, integer *n, complex_ *a, integer *lda,
	 real_ *d__, real_ *e, complex_ *tauq, complex_ *taup, complex_ *work, 
	integer *info);
 
/* Subroutine */ int __cdecl CGEBRD(integer *m, integer *n, complex_ *a, integer *lda,
	 real_ *d__, real_ *e, complex_ *tauq, complex_ *taup, complex_ *work, 
	integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl CGECON(char *norm, integer *n, complex_ *a, integer *lda,
	 real_ *anorm, real_ *rcond, complex_ *work, real_ *rwork, integer *info);
 
/* Subroutine */ int __cdecl CGEEQU(integer *m, integer *n, complex_ *a, integer *lda,
	 real_ *r__, real_ *c__, real_ *rowcnd, real_ *colcnd, real_ *amax, 
	integer *info);
 
/* Subroutine */ int __cdecl CGEES(char *jobvs, char *sort, L_fp select, integer *n, 
	complex_ *a, integer *lda, integer *sdim, complex_ *w, complex_ *vs, 
	integer *ldvs, complex_ *work, integer *lwork, real_ *rwork, logical *
	bwork, integer *info);
 
/* Subroutine */ int __cdecl CGEESX(char *jobvs, char *sort, L_fp select, char *
	sense, integer *n, complex_ *a, integer *lda, integer *sdim, complex_ *
	w, complex_ *vs, integer *ldvs, real_ *rconde, real_ *rcondv, complex_ *
	work, integer *lwork, real_ *rwork, logical *bwork, integer *info);
 
/* Subroutine */ int __cdecl CGEEV(char *jobvl, char *jobvr, integer *n, complex_ *a, 
	integer *lda, complex_ *w, complex_ *vl, integer *ldvl, complex_ *vr, 
	integer *ldvr, complex_ *work, integer *lwork, real_ *rwork, integer *
	info);
 
/* Subroutine */ int __cdecl CGEEVX(char *balanc, char *jobvl, char *jobvr, char *
	sense, integer *n, complex_ *a, integer *lda, complex_ *w, complex_ *vl, 
	integer *ldvl, complex_ *vr, integer *ldvr, integer *ilo, integer *ihi,
	 real_ *scale, real_ *abnrm, real_ *rconde, real_ *rcondv, complex_ *work, 
	integer *lwork, real_ *rwork, integer *info);
 
/* Subroutine */ int __cdecl CGEGS(char *jobvsl, char *jobvsr, integer *n, complex_ *
	a, integer *lda, complex_ *b, integer *ldb, complex_ *alpha, complex_ *
	beta, complex_ *vsl, integer *ldvsl, complex_ *vsr, integer *ldvsr, 
	complex_ *work, integer *lwork, real_ *rwork, integer *info);
 
/* Subroutine */ int __cdecl CGEGV(char *jobvl, char *jobvr, integer *n, complex_ *a, 
	integer *lda, complex_ *b, integer *ldb, complex_ *alpha, complex_ *beta,
	 complex_ *vl, integer *ldvl, complex_ *vr, integer *ldvr, complex_ *
	work, integer *lwork, real_ *rwork, integer *info);
 
/* Subroutine */ int __cdecl CGEHD2(integer *n, integer *ilo, integer *ihi, complex_ *
	a, integer *lda, complex_ *tau, complex_ *work, integer *info);
 
/* Subroutine */ int __cdecl CGEHRD(integer *n, integer *ilo, integer *ihi, complex_ *
	a, integer *lda, complex_ *tau, complex_ *work, integer *lwork, integer 
	*info);
 
/* Subroutine */ int __cdecl CGELQ2(integer *m, integer *n, complex_ *a, integer *lda,
	 complex_ *tau, complex_ *work, integer *info);
 
/* Subroutine */ int __cdecl CGELQF(integer *m, integer *n, complex_ *a, integer *lda,
	 complex_ *tau, complex_ *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl CGELS(char *trans, integer *m, integer *n, integer *
	nrhs, complex_ *a, integer *lda, complex_ *b, integer *ldb, complex_ *
	work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl CGELSX(integer *m, integer *n, integer *nrhs, complex_ *
	a, integer *lda, complex_ *b, integer *ldb, integer *jpvt, real_ *rcond,
	 integer *rank, complex_ *work, real_ *rwork, integer *info);
 
/* Subroutine */ int __cdecl CGELSY(integer *m, integer *n, integer *nrhs, complex_ *
	a, integer *lda, complex_ *b, integer *ldb, integer *jpvt, real_ *rcond,
	 integer *rank, complex_ *work, integer *lwork, real_ *rwork, integer *
	info);
 
/* Subroutine */ int __cdecl CGEQL2(integer *m, integer *n, complex_ *a, integer *lda,
	 complex_ *tau, complex_ *work, integer *info);
 
/* Subroutine */ int __cdecl CGEQLF(integer *m, integer *n, complex_ *a, integer *lda,
	 complex_ *tau, complex_ *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl CGEQP3(integer *m, integer *n, complex_ *a, integer *lda,
	 integer *jpvt, complex_ *tau, complex_ *work, integer *lwork, real_ *
	rwork, integer *info);
 
/* Subroutine */ int __cdecl CGEQPF(integer *m, integer *n, complex_ *a, integer *lda,
	 integer *jpvt, complex_ *tau, complex_ *work, real_ *rwork, integer *
	info);
 
/* Subroutine */ int __cdecl CGEQR2(integer *m, integer *n, complex_ *a, integer *lda,
	 complex_ *tau, complex_ *work, integer *info);
 
/* Subroutine */ int __cdecl CGEQRF(integer *m, integer *n, complex_ *a, integer *lda,
	 complex_ *tau, complex_ *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl CGERFS(char *trans, integer *n, integer *nrhs, complex_ *
	a, integer *lda, complex_ *af, integer *ldaf, integer *ipiv, complex_ *
	b, integer *ldb, complex_ *x, integer *ldx, real_ *ferr, real_ *berr, 
	complex_ *work, real_ *rwork, integer *info);
 
/* Subroutine */ int __cdecl CGERQ2(integer *m, integer *n, complex_ *a, integer *lda,
	 complex_ *tau, complex_ *work, integer *info);
 
/* Subroutine */ int __cdecl CGERQF(integer *m, integer *n, complex_ *a, integer *lda,
	 complex_ *tau, complex_ *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl CGESC2(integer *n, complex_ *a, integer *lda, complex_ *
	rhs, integer *ipiv, integer *jpiv, real_ *scale);
 
/* Subroutine */ int __cdecl CGESV(integer *n, integer *nrhs, complex_ *a, integer *
	lda, integer *ipiv, complex_ *b, integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl CGESVX(char *fact, char *trans, integer *n, integer *
	nrhs, complex_ *a, integer *lda, complex_ *af, integer *ldaf, integer *
	ipiv, char *equed, real_ *r__, real_ *c__, complex_ *b, integer *ldb, 
	complex_ *x, integer *ldx, real_ *rcond, real_ *ferr, real_ *berr, 
	complex_ *work, real_ *rwork, integer *info);
 
/* Subroutine */ int __cdecl CGETC2(integer *n, complex_ *a, integer *lda, integer *
	ipiv, integer *jpiv, integer *info);
 
/* Subroutine */ int __cdecl CGETF2(integer *m, integer *n, complex_ *a, integer *lda,
	 integer *ipiv, integer *info);
 
/* Subroutine */ int __cdecl CGETRF(integer *m, integer *n, complex_ *a, integer *lda,
	 integer *ipiv, integer *info);
 
/* Subroutine */ int __cdecl CGETRI(integer *n, complex_ *a, integer *lda, integer *
	ipiv, complex_ *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl CGETRS(char *trans, integer *n, integer *nrhs, complex_ *
	a, integer *lda, integer *ipiv, complex_ *b, integer *ldb, integer *
	info);
 
/* Subroutine */ int __cdecl CGGBAK(char *job, char *side, integer *n, integer *ilo, 
	integer *ihi, real_ *lscale, real_ *rscale, integer *m, complex_ *v, 
	integer *ldv, integer *info);
 
/* Subroutine */ int __cdecl CGGBAL(char *job, integer *n, complex_ *a, integer *lda, 
	complex_ *b, integer *ldb, integer *ilo, integer *ihi, real_ *lscale, 
	real_ *rscale, real_ *work, integer *info);
 
/* Subroutine */ int __cdecl CGGES(char *jobvsl, char *jobvsr, char *sort, L_fp 
	selctg, integer *n, complex_ *a, integer *lda, complex_ *b, integer *
	ldb, integer *sdim, complex_ *alpha, complex_ *beta, complex_ *vsl, 
	integer *ldvsl, complex_ *vsr, integer *ldvsr, complex_ *work, integer *
	lwork, real_ *rwork, logical *bwork, integer *info);
 
/* Subroutine */ int __cdecl CGGESX(char *jobvsl, char *jobvsr, char *sort, L_fp 
	selctg, char *sense, integer *n, complex_ *a, integer *lda, complex_ *b,
	 integer *ldb, integer *sdim, complex_ *alpha, complex_ *beta, complex_ *
	vsl, integer *ldvsl, complex_ *vsr, integer *ldvsr, real_ *rconde, real_ 
	*rcondv, complex_ *work, integer *lwork, real_ *rwork, integer *iwork, 
	integer *liwork, logical *bwork, integer *info);
 
/* Subroutine */ int __cdecl CGGEV(char *jobvl, char *jobvr, integer *n, complex_ *a, 
	integer *lda, complex_ *b, integer *ldb, complex_ *alpha, complex_ *beta,
	 complex_ *vl, integer *ldvl, complex_ *vr, integer *ldvr, complex_ *
	work, integer *lwork, real_ *rwork, integer *info);
 
/* Subroutine */ int __cdecl CGGEVX(char *balanc, char *jobvl, char *jobvr, char *
	sense, integer *n, complex_ *a, integer *lda, complex_ *b, integer *ldb,
	 complex_ *alpha, complex_ *beta, complex_ *vl, integer *ldvl, complex_ *
	vr, integer *ldvr, integer *ilo, integer *ihi, real_ *lscale, real_ *
	rscale, real_ *abnrm, real_ *bbnrm, real_ *rconde, real_ *rcondv, complex_ 
	*work, integer *lwork, real_ *rwork, integer *iwork, logical *bwork, 
	integer *info);
 
/* Subroutine */ int __cdecl CGGGLM(integer *n, integer *m, integer *p, complex_ *a, 
	integer *lda, complex_ *b, integer *ldb, complex_ *d__, complex_ *x, 
	complex_ *y, complex_ *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl CGGHRD(char *compq, char *compz, integer *n, integer *
	ilo, integer *ihi, complex_ *a, integer *lda, complex_ *b, integer *ldb,
	 complex_ *q, integer *ldq, complex_ *z__, integer *ldz, integer *info);
 
/* Subroutine */ int __cdecl CGGLSE(integer *m, integer *n, integer *p, complex_ *a, 
	integer *lda, complex_ *b, integer *ldb, complex_ *c__, complex_ *d__, 
	complex_ *x, complex_ *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl CGGQRF(integer *n, integer *m, integer *p, complex_ *a, 
	integer *lda, complex_ *taua, complex_ *b, integer *ldb, complex_ *taub, 
	complex_ *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl CGGRQF(integer *m, integer *p, integer *n, complex_ *a, 
	integer *lda, complex_ *taua, complex_ *b, integer *ldb, complex_ *taub, 
	complex_ *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl CGGSVD(char *jobu, char *jobv, char *jobq, integer *m, 
	integer *n, integer *p, integer *k, integer *l, complex_ *a, integer *
	lda, complex_ *b, integer *ldb, real_ *alpha, real_ *beta, complex_ *u, 
	integer *ldu, complex_ *v, integer *ldv, complex_ *q, integer *ldq, 
	complex_ *work, real_ *rwork, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl CGGSVP(char *jobu, char *jobv, char *jobq, integer *m, 
	integer *p, integer *n, complex_ *a, integer *lda, complex_ *b, integer 
	*ldb, real_ *tola, real_ *tolb, integer *k, integer *l, complex_ *u, 
	integer *ldu, complex_ *v, integer *ldv, complex_ *q, integer *ldq, 
	integer *iwork, real_ *rwork, complex_ *tau, complex_ *work, integer *
	info);
 
/* Subroutine */ int __cdecl CGTCON(char *norm, integer *n, complex_ *dl, complex_ *
	d__, complex_ *du, complex_ *du2, integer *ipiv, real_ *anorm, real_ *
	rcond, complex_ *work, integer *info);
 
/* Subroutine */ int __cdecl CGTRFS(char *trans, integer *n, integer *nrhs, complex_ *
	dl, complex_ *d__, complex_ *du, complex_ *dlf, complex_ *df, complex_ *
	duf, complex_ *du2, integer *ipiv, complex_ *b, integer *ldb, complex_ *
	x, integer *ldx, real_ *ferr, real_ *berr, complex_ *work, real_ *rwork, 
	integer *info);
 
/* Subroutine */ int __cdecl CGTSV(integer *n, integer *nrhs, complex_ *dl, complex_ *
	d__, complex_ *du, complex_ *b, integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl CGTSVX(char *fact, char *trans, integer *n, integer *
	nrhs, complex_ *dl, complex_ *d__, complex_ *du, complex_ *dlf, complex_ *
	df, complex_ *duf, complex_ *du2, integer *ipiv, complex_ *b, integer *
	ldb, complex_ *x, integer *ldx, real_ *rcond, real_ *ferr, real_ *berr, 
	complex_ *work, real_ *rwork, integer *info);
 
/* Subroutine */ int __cdecl CGTTRF(integer *n, complex_ *dl, complex_ *d__, complex_ *
	du, complex_ *du2, integer *ipiv, integer *info);
 
/* Subroutine */ int __cdecl CGTTRS(char *trans, integer *n, integer *nrhs, complex_ *
	dl, complex_ *d__, complex_ *du, complex_ *du2, integer *ipiv, complex_ *
	b, integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl CGTTS2(integer *itrans, integer *n, integer *nrhs, 
	complex_ *dl, complex_ *d__, complex_ *du, complex_ *du2, integer *ipiv, 
	complex_ *b, integer *ldb);
 
/* Subroutine */ int __cdecl CHBEV(char *jobz, char *uplo, integer *n, integer *kd, 
	complex_ *ab, integer *ldab, real_ *w, complex_ *z__, integer *ldz, 
	complex_ *work, real_ *rwork, integer *info);
 
/* Subroutine */ int __cdecl CHBEVD(char *jobz, char *uplo, integer *n, integer *kd, 
	complex_ *ab, integer *ldab, real_ *w, complex_ *z__, integer *ldz, 
	complex_ *work, integer *lwork, real_ *rwork, integer *lrwork, integer *
	iwork, integer *liwork, integer *info);
 
/* Subroutine */ int __cdecl CHBEVX(char *jobz, char *range, char *uplo, integer *n, 
	integer *kd, complex_ *ab, integer *ldab, complex_ *q, integer *ldq, 
	real_ *vl, real_ *vu, integer *il, integer *iu, real_ *abstol, integer *
	m, real_ *w, complex_ *z__, integer *ldz, complex_ *work, real_ *rwork, 
	integer *iwork, integer *ifail, integer *info);
 
/* Subroutine */ int __cdecl CHBGST(char *vect, char *uplo, integer *n, integer *ka, 
	integer *kb, complex_ *ab, integer *ldab, complex_ *bb, integer *ldbb, 
	complex_ *x, integer *ldx, complex_ *work, real_ *rwork, integer *info);
 
/* Subroutine */ int __cdecl CHBGV(char *jobz, char *uplo, integer *n, integer *ka, 
	integer *kb, complex_ *ab, integer *ldab, complex_ *bb, integer *ldbb, 
	real_ *w, complex_ *z__, integer *ldz, complex_ *work, real_ *rwork, 
	integer *info);
 
/* Subroutine */ int __cdecl CHBGVX(char *jobz, char *range, char *uplo, integer *n, 
	integer *ka, integer *kb, complex_ *ab, integer *ldab, complex_ *bb, 
	integer *ldbb, complex_ *q, integer *ldq, real_ *vl, real_ *vu, integer *
	il, integer *iu, real_ *abstol, integer *m, real_ *w, complex_ *z__, 
	integer *ldz, complex_ *work, real_ *rwork, integer *iwork, integer *
	ifail, integer *info);
 
/* Subroutine */ int __cdecl CHBTRD(char *vect, char *uplo, integer *n, integer *kd, 
	complex_ *ab, integer *ldab, real_ *d__, real_ *e, complex_ *q, integer *
	ldq, complex_ *work, integer *info);
 
/* Subroutine */ int __cdecl CHECON(char *uplo, integer *n, complex_ *a, integer *lda,
	 integer *ipiv, real_ *anorm, real_ *rcond, complex_ *work, integer *
	info);
 
/* Subroutine */ int __cdecl CHEEV(char *jobz, char *uplo, integer *n, complex_ *a, 
	integer *lda, real_ *w, complex_ *work, integer *lwork, real_ *rwork, 
	integer *info);
 
/* Subroutine */ int __cdecl CHEEVD(char *jobz, char *uplo, integer *n, complex_ *a, 
	integer *lda, real_ *w, complex_ *work, integer *lwork, real_ *rwork, 
	integer *lrwork, integer *iwork, integer *liwork, integer *info);
 
/* Subroutine */ int __cdecl CHEEVR(char *jobz, char *range, char *uplo, integer *n, 
	complex_ *a, integer *lda, real_ *vl, real_ *vu, integer *il, integer *
	iu, real_ *abstol, integer *m, real_ *w, complex_ *z__, integer *ldz, 
	integer *isuppz, complex_ *work, integer *lwork, real_ *rwork, integer *
	lrwork, integer *iwork, integer *liwork, integer *info);
 
/* Subroutine */ int __cdecl CHEEVX(char *jobz, char *range, char *uplo, integer *n, 
	complex_ *a, integer *lda, real_ *vl, real_ *vu, integer *il, integer *
	iu, real_ *abstol, integer *m, real_ *w, complex_ *z__, integer *ldz, 
	complex_ *work, integer *lwork, real_ *rwork, integer *iwork, integer *
	ifail, integer *info);
 
/* Subroutine */ int __cdecl CHEGS2(integer *itype, char *uplo, integer *n, complex_ *
	a, integer *lda, complex_ *b, integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl CHEGST(integer *itype, char *uplo, integer *n, complex_ *
	a, integer *lda, complex_ *b, integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl CHEGV(integer *itype, char *jobz, char *uplo, integer *
	n, complex_ *a, integer *lda, complex_ *b, integer *ldb, real_ *w, 
	complex_ *work, integer *lwork, real_ *rwork, integer *info);
 
/* Subroutine */ int __cdecl CHEGVD(integer *itype, char *jobz, char *uplo, integer *
	n, complex_ *a, integer *lda, complex_ *b, integer *ldb, real_ *w, 
	complex_ *work, integer *lwork, real_ *rwork, integer *lrwork, integer *
	iwork, integer *liwork, integer *info);
 
/* Subroutine */ int __cdecl CHEGVX(integer *itype, char *jobz, char *range, char *
	uplo, integer *n, complex_ *a, integer *lda, complex_ *b, integer *ldb, 
	real_ *vl, real_ *vu, integer *il, integer *iu, real_ *abstol, integer *
	m, real_ *w, complex_ *z__, integer *ldz, complex_ *work, integer *lwork,
	 real_ *rwork, integer *iwork, integer *ifail, integer *info);
 
/* Subroutine */ int __cdecl CHERFS(char *uplo, integer *n, integer *nrhs, complex_ *
	a, integer *lda, complex_ *af, integer *ldaf, integer *ipiv, complex_ *
	b, integer *ldb, complex_ *x, integer *ldx, real_ *ferr, real_ *berr, 
	complex_ *work, real_ *rwork, integer *info);
 
/* Subroutine */ int __cdecl CHESV(char *uplo, integer *n, integer *nrhs, complex_ *a,
	 integer *lda, integer *ipiv, complex_ *b, integer *ldb, complex_ *work,
	 integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl CHESVX(char *fact, char *uplo, integer *n, integer *
	nrhs, complex_ *a, integer *lda, complex_ *af, integer *ldaf, integer *
	ipiv, complex_ *b, integer *ldb, complex_ *x, integer *ldx, real_ *rcond,
	 real_ *ferr, real_ *berr, complex_ *work, integer *lwork, real_ *rwork, 
	integer *info);
 
/* Subroutine */ int __cdecl CHETF2(char *uplo, integer *n, complex_ *a, integer *lda,
	 integer *ipiv, integer *info);
 
/* Subroutine */ int __cdecl CHETRD(char *uplo, integer *n, complex_ *a, integer *lda,
	 real_ *d__, real_ *e, complex_ *tau, complex_ *work, integer *lwork, 
	integer *info);
 
/* Subroutine */ int __cdecl CHETRF(char *uplo, integer *n, complex_ *a, integer *lda,
	 integer *ipiv, complex_ *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl CHETRI(char *uplo, integer *n, complex_ *a, integer *lda,
	 integer *ipiv, complex_ *work, integer *info);
 
/* Subroutine */ int __cdecl CHETRS(char *uplo, integer *n, integer *nrhs, complex_ *
	a, integer *lda, integer *ipiv, complex_ *b, integer *ldb, integer *
	info);
 
/* Subroutine */ int __cdecl CHGEQZ(char *job, char *compq, char *compz, integer *n, 
	integer *ilo, integer *ihi, complex_ *a, integer *lda, complex_ *b, 
	integer *ldb, complex_ *alpha, complex_ *beta, complex_ *q, integer *ldq,
	 complex_ *z__, integer *ldz, complex_ *work, integer *lwork, real_ *
	rwork, integer *info);
 
/* Subroutine */ int __cdecl CHPCON(char *uplo, integer *n, complex_ *ap, integer *
	ipiv, real_ *anorm, real_ *rcond, complex_ *work, integer *info);
 
/* Subroutine */ int __cdecl CHPEV(char *jobz, char *uplo, integer *n, complex_ *ap, 
	real_ *w, complex_ *z__, integer *ldz, complex_ *work, real_ *rwork, 
	integer *info);
 
/* Subroutine */ int __cdecl CHPEVD(char *jobz, char *uplo, integer *n, complex_ *ap, 
	real_ *w, complex_ *z__, integer *ldz, complex_ *work, integer *lwork, 
	real_ *rwork, integer *lrwork, integer *iwork, integer *liwork, 
	integer *info);
 
/* Subroutine */ int __cdecl CHPEVX(char *jobz, char *range, char *uplo, integer *n, 
	complex_ *ap, real_ *vl, real_ *vu, integer *il, integer *iu, real_ *
	abstol, integer *m, real_ *w, complex_ *z__, integer *ldz, complex_ *
	work, real_ *rwork, integer *iwork, integer *ifail, integer *info);
 
/* Subroutine */ int __cdecl CHPGST(integer *itype, char *uplo, integer *n, complex_ *
	ap, complex_ *bp, integer *info);
 
/* Subroutine */ int __cdecl CHPGV(integer *itype, char *jobz, char *uplo, integer *
	n, complex_ *ap, complex_ *bp, real_ *w, complex_ *z__, integer *ldz, 
	complex_ *work, real_ *rwork, integer *info);
 
/* Subroutine */ int __cdecl CHPGVD(integer *itype, char *jobz, char *uplo, integer *
	n, complex_ *ap, complex_ *bp, real_ *w, complex_ *z__, integer *ldz, 
	complex_ *work, integer *lwork, real_ *rwork, integer *lrwork, integer *
	iwork, integer *liwork, integer *info);
 
/* Subroutine */ int __cdecl CHPGVX(integer *itype, char *jobz, char *range, char *
	uplo, integer *n, complex_ *ap, complex_ *bp, real_ *vl, real_ *vu, 
	integer *il, integer *iu, real_ *abstol, integer *m, real_ *w, complex_ *
	z__, integer *ldz, complex_ *work, real_ *rwork, integer *iwork, 
	integer *ifail, integer *info);
 
/* Subroutine */ int __cdecl CHPRFS(char *uplo, integer *n, integer *nrhs, complex_ *
	ap, complex_ *afp, integer *ipiv, complex_ *b, integer *ldb, complex_ *x,
	 integer *ldx, real_ *ferr, real_ *berr, complex_ *work, real_ *rwork, 
	integer *info);
 
/* Subroutine */ int __cdecl CHPSV(char *uplo, integer *n, integer *nrhs, complex_ *
	ap, integer *ipiv, complex_ *b, integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl CHPSVX(char *fact, char *uplo, integer *n, integer *
	nrhs, complex_ *ap, complex_ *afp, integer *ipiv, complex_ *b, integer *
	ldb, complex_ *x, integer *ldx, real_ *rcond, real_ *ferr, real_ *berr, 
	complex_ *work, real_ *rwork, integer *info);
 
/* Subroutine */ int __cdecl CHPTRD(char *uplo, integer *n, complex_ *ap, real_ *d__, 
	real_ *e, complex_ *tau, integer *info);
 
/* Subroutine */ int __cdecl CHPTRF(char *uplo, integer *n, complex_ *ap, integer *
	ipiv, integer *info);
 
/* Subroutine */ int __cdecl CHPTRI(char *uplo, integer *n, complex_ *ap, integer *
	ipiv, complex_ *work, integer *info);
 
/* Subroutine */ int __cdecl CHPTRS(char *uplo, integer *n, integer *nrhs, complex_ *
	ap, integer *ipiv, complex_ *b, integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl CHSEIN(char *side, char *eigsrc, char *initv, logical *
	select, integer *n, complex_ *h__, integer *ldh, complex_ *w, complex_ *
	vl, integer *ldvl, complex_ *vr, integer *ldvr, integer *mm, integer *
	m, complex_ *work, real_ *rwork, integer *ifaill, integer *ifailr, 
	integer *info);
 
/* Subroutine */ int __cdecl CHSEQR(char *job, char *compz, integer *n, integer *ilo,
	 integer *ihi, complex_ *h__, integer *ldh, complex_ *w, complex_ *z__, 
	integer *ldz, complex_ *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl CLABRD(integer *m, integer *n, integer *nb, complex_ *a, 
	integer *lda, real_ *d__, real_ *e, complex_ *tauq, complex_ *taup, 
	complex_ *x, integer *ldx, complex_ *y, integer *ldy);
 
/* Subroutine */ int __cdecl CLACGV(integer *n, complex_ *x, integer *incx);
 
/* Subroutine */ int __cdecl CLACON(integer *n, complex_ *v, complex_ *x, real_ *est, 
	integer *kase);
 
/* Subroutine */ int __cdecl CLACP2(char *uplo, integer *m, integer *n, real_ *a, 
	integer *lda, complex_ *b, integer *ldb);
 
/* Subroutine */ int __cdecl CLACPY(char *uplo, integer *m, integer *n, complex_ *a, 
	integer *lda, complex_ *b, integer *ldb);
 
/* Subroutine */ int __cdecl CLACRM(integer *m, integer *n, complex_ *a, integer *lda,
	 real_ *b, integer *ldb, complex_ *c__, integer *ldc, real_ *rwork);
 
/* Subroutine */ int __cdecl CLACRT(integer *n, complex_ *cx, integer *incx, complex_ *
	cy, integer *incy, complex_ *c__, complex_ *s);
 
/* Subroutine */ int __cdecl CLAED0(integer *qsiz, integer *n, real_ *d__, real_ *e, 
	complex_ *q, integer *ldq, complex_ *qstore, integer *ldqs, real_ *rwork,
	 integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl CLAED7(integer *n, integer *cutpnt, integer *qsiz, 
	integer *tlvls, integer *curlvl, integer *curpbm, real_ *d__, complex_ *
	q, integer *ldq, real_ *rho, integer *indxq, real_ *qstore, integer *
	qptr, integer *prmptr, integer *perm, integer *givptr, integer *
	givcol, real_ *givnum, complex_ *work, real_ *rwork, integer *iwork, 
	integer *info);
 
/* Subroutine */ int __cdecl CLAED8(integer *k, integer *n, integer *qsiz, complex_ *
	q, integer *ldq, real_ *d__, real_ *rho, integer *cutpnt, real_ *z__, 
	real_ *dlamda, complex_ *q2, integer *ldq2, real_ *w, integer *indxp, 
	integer *indx, integer *indxq, integer *perm, integer *givptr, 
	integer *givcol, real_ *givnum, integer *info);
 
/* Subroutine */ int __cdecl CLAEIN(logical *rightv, logical *noinit, integer *n, 
	complex_ *h__, integer *ldh, complex_ *w, complex_ *v, complex_ *b, 
	integer *ldb, real_ *rwork, real_ *eps3, real_ *smlnum, integer *info);
 
/* Subroutine */ int __cdecl CLAESY(complex_ *a, complex_ *b, complex_ *c__, complex_ *
	rt1, complex_ *rt2, complex_ *evscal, complex_ *cs1, complex_ *sn1);
 
/* Subroutine */ int __cdecl CLAEV2(complex_ *a, complex_ *b, complex_ *c__, real_ *rt1, 
	real_ *rt2, real_ *cs1, complex_ *sn1);
 
/* Subroutine */ int __cdecl CLAGS2(logical *upper, real_ *a1, complex_ *a2, real_ *a3, 
	real_ *b1, complex_ *b2, real_ *b3, real_ *csu, complex_ *snu, real_ *csv, 
	complex_ *snv, real_ *csq, complex_ *snq);
 
/* Subroutine */ int __cdecl CLAGTM(char *trans, integer *n, integer *nrhs, real_ *
	alpha, complex_ *dl, complex_ *d__, complex_ *du, complex_ *x, integer *
	ldx, real_ *beta, complex_ *b, integer *ldb);
 
/* Subroutine */ int __cdecl CLAHEF(char *uplo, integer *n, integer *nb, integer *kb,
	 complex_ *a, integer *lda, integer *ipiv, complex_ *w, integer *ldw, 
	integer *info);
 
/* Subroutine */ int __cdecl CLAHQR(logical *wantt, logical *wantz, integer *n, 
	integer *ilo, integer *ihi, complex_ *h__, integer *ldh, complex_ *w, 
	integer *iloz, integer *ihiz, complex_ *z__, integer *ldz, integer *
	info);
 
/* Subroutine */ int __cdecl CLAHRD(integer *n, integer *k, integer *nb, complex_ *a, 
	integer *lda, complex_ *tau, complex_ *t, integer *ldt, complex_ *y, 
	integer *ldy);
 
/* Subroutine */ int __cdecl CLAIC1(integer *job, integer *j, complex_ *x, real_ *sest,
	 complex_ *w, complex_ *gamma, real_ *sestpr, complex_ *s, complex_ *c__);
 
/* Subroutine */ int __cdecl CLALS0(integer *icompq, integer *nl, integer *nr, 
	integer *sqre, integer *nrhs, complex_ *b, integer *ldb, complex_ *bx, 
	integer *ldbx, integer *perm, integer *givptr, integer *givcol, 
	integer *ldgcol, real_ *givnum, integer *ldgnum, real_ *poles, real_ *
	difl, real_ *difr, real_ *z__, integer *k, real_ *c__, real_ *s, real_ *
	rwork, integer *info);
 
/* Subroutine */ int __cdecl CLALSA(integer *icompq, integer *smlsiz, integer *n, 
	integer *nrhs, complex_ *b, integer *ldb, complex_ *bx, integer *ldbx, 
	real_ *u, integer *ldu, real_ *vt, integer *k, real_ *difl, real_ *difr, 
	real_ *z__, real_ *poles, integer *givptr, integer *givcol, integer *
	ldgcol, integer *perm, real_ *givnum, real_ *c__, real_ *s, real_ *rwork, 
	integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl CLAPLL(integer *n, complex_ *x, integer *incx, complex_ *
	y, integer *incy, real_ *ssmin);
 
/* Subroutine */ int __cdecl CLAPMT(logical *forwrd, integer *m, integer *n, complex_ 
	*x, integer *ldx, integer *k);
 
/* Subroutine */ int __cdecl CLAQGB(integer *m, integer *n, integer *kl, integer *ku,
	 complex_ *ab, integer *ldab, real_ *r__, real_ *c__, real_ *rowcnd, real_ 
	*colcnd, real_ *amax, char *equed);
 
/* Subroutine */ int __cdecl CLAQGE(integer *m, integer *n, complex_ *a, integer *lda,
	 real_ *r__, real_ *c__, real_ *rowcnd, real_ *colcnd, real_ *amax, char *
	equed);
 
/* Subroutine */ int __cdecl CLAQHB(char *uplo, integer *n, integer *kd, complex_ *ab,
	 integer *ldab, real_ *s, real_ *scond, real_ *amax, char *equed);
 
/* Subroutine */ int __cdecl CLAQHE(char *uplo, integer *n, complex_ *a, integer *lda,
	 real_ *s, real_ *scond, real_ *amax, char *equed);
 
/* Subroutine */ int __cdecl CLAQHP(char *uplo, integer *n, complex_ *ap, real_ *s, 
	real_ *scond, real_ *amax, char *equed);
 
/* Subroutine */ int __cdecl CLAQP2(integer *m, integer *n, integer *offset, complex_ 
	*a, integer *lda, integer *jpvt, complex_ *tau, real_ *vn1, real_ *vn2, 
	complex_ *work);
 
/* Subroutine */ int __cdecl CLAQPS(integer *m, integer *n, integer *offset, integer 
	*nb, integer *kb, complex_ *a, integer *lda, integer *jpvt, complex_ *
	tau, real_ *vn1, real_ *vn2, complex_ *auxv, complex_ *f, integer *ldf);
 
/* Subroutine */ int __cdecl CLAQSB(char *uplo, integer *n, integer *kd, complex_ *ab,
	 integer *ldab, real_ *s, real_ *scond, real_ *amax, char *equed);
 
/* Subroutine */ int __cdecl CLAQSP(char *uplo, integer *n, complex_ *ap, real_ *s, 
	real_ *scond, real_ *amax, char *equed);
 
/* Subroutine */ int __cdecl CLAQSY(char *uplo, integer *n, complex_ *a, integer *lda,
	 real_ *s, real_ *scond, real_ *amax, char *equed);
 
/* Subroutine */ int __cdecl CLAR1V(integer *n, integer *b1, integer *bn, real_ *
	sigma, real_ *d__, real_ *l, real_ *ld, real_ *lld, real_ *gersch, complex_ 
	*z__, real_ *ztz, real_ *mingma, integer *r__, integer *isuppz, real_ *
	work);
 
/* Subroutine */ int __cdecl CLAR2V(integer *n, complex_ *x, complex_ *y, complex_ *z__,
	 integer *incx, real_ *c__, complex_ *s, integer *incc);
 
/* Subroutine */ int __cdecl CLARCM(integer *m, integer *n, real_ *a, integer *lda, 
	complex_ *b, integer *ldb, complex_ *c__, integer *ldc, real_ *rwork);
 
/* Subroutine */ int __cdecl CLARF(char *side, integer *m, integer *n, complex_ *v, 
	integer *incv, complex_ *tau, complex_ *c__, integer *ldc, complex_ *
	work);
 
/* Subroutine */ int __cdecl CLARFB(char *side, char *trans, char *direct, char *
	storev, integer *m, integer *n, integer *k, complex_ *v, integer *ldv, 
	complex_ *t, integer *ldt, complex_ *c__, integer *ldc, complex_ *work, 
	integer *ldwork);
 
/* Subroutine */ int __cdecl CLARFG(integer *n, complex_ *alpha, complex_ *x, integer *
	incx, complex_ *tau);
 
/* Subroutine */ int __cdecl CLARFT(char *direct, char *storev, integer *n, integer *
	k, complex_ *v, integer *ldv, complex_ *tau, complex_ *t, integer *ldt);
 
/* Subroutine */ int __cdecl CLARFX(char *side, integer *m, integer *n, complex_ *v, 
	complex_ *tau, complex_ *c__, integer *ldc, complex_ *work);
 
/* Subroutine */ int __cdecl CLARGV(integer *n, complex_ *x, integer *incx, complex_ *
	y, integer *incy, real_ *c__, integer *incc);
 
/* Subroutine */ int __cdecl CLARNV(integer *idist, integer *iseed, integer *n, 
	complex_ *x);
 
/* Subroutine */ int __cdecl CLARRV(integer *n, real_ *d__, real_ *l, integer *isplit, 
	integer *m, real_ *w, integer *iblock, real_ *gersch, real_ *tol, 
	complex_ *z__, integer *ldz, integer *isuppz, real_ *work, integer *
	iwork, integer *info);
 
/* Subroutine */ int __cdecl CLARTG(complex_ *f, complex_ *g, real_ *cs, complex_ *sn, 
	complex_ *r__);
 
/* Subroutine */ int __cdecl CLARTV(integer *n, complex_ *x, integer *incx, complex_ *
	y, integer *incy, real_ *c__, complex_ *s, integer *incc);
 
/* Subroutine */ int __cdecl CLARZ(char *side, integer *m, integer *n, integer *l, 
	complex_ *v, integer *incv, complex_ *tau, complex_ *c__, integer *ldc, 
	complex_ *work);
 
/* Subroutine */ int __cdecl CLARZB(char *side, char *trans, char *direct, char *
	storev, integer *m, integer *n, integer *k, integer *l, complex_ *v, 
	integer *ldv, complex_ *t, integer *ldt, complex_ *c__, integer *ldc, 
	complex_ *work, integer *ldwork);
 
/* Subroutine */ int __cdecl CLARZT(char *direct, char *storev, integer *n, integer *
	k, complex_ *v, integer *ldv, complex_ *tau, complex_ *t, integer *ldt);
 
/* Subroutine */ int __cdecl CLASCL(char *type__, integer *kl, integer *ku, real_ *
	cfrom, real_ *cto, integer *m, integer *n, complex_ *a, integer *lda, 
	integer *info);
 
/* Subroutine */ int __cdecl CLASET(char *uplo, integer *m, integer *n, complex_ *
	alpha, complex_ *beta, complex_ *a, integer *lda);
 
/* Subroutine */ int __cdecl CLASR(char *side, char *pivot, char *direct, integer *m,
	 integer *n, real_ *c__, real_ *s, complex_ *a, integer *lda);
 
/* Subroutine */ int __cdecl CLASSQ(integer *n, complex_ *x, integer *incx, real_ *
	scale, real_ *sumsq);
 
/* Subroutine */ int __cdecl CLASWP(integer *n, complex_ *a, integer *lda, integer *
	k1, integer *k2, integer *ipiv, integer *incx);
 
/* Subroutine */ int __cdecl CLASYF(char *uplo, integer *n, integer *nb, integer *kb,
	 complex_ *a, integer *lda, integer *ipiv, complex_ *w, integer *ldw, 
	integer *info);
 
/* Subroutine */ int __cdecl CLATBS(char *uplo, char *trans, char *diag, char *
	normin, integer *n, integer *kd, complex_ *ab, integer *ldab, complex_ *
	x, real_ *scale, real_ *cnorm, integer *info);
 
/* Subroutine */ int __cdecl CLATDF(integer *ijob, integer *n, complex_ *z__, integer 
	*ldz, complex_ *rhs, real_ *rdsum, real_ *rdscal, integer *ipiv, integer 
	*jpiv);
 
/* Subroutine */ int __cdecl CLATPS(char *uplo, char *trans, char *diag, char *
	normin, integer *n, complex_ *ap, complex_ *x, real_ *scale, real_ *cnorm,
	 integer *info);
 
/* Subroutine */ int __cdecl CLATRD(char *uplo, integer *n, integer *nb, complex_ *a, 
	integer *lda, real_ *e, complex_ *tau, complex_ *w, integer *ldw);
 
/* Subroutine */ int __cdecl CLATRS(char *uplo, char *trans, char *diag, char *
	normin, integer *n, complex_ *a, integer *lda, complex_ *x, real_ *scale,
	 real_ *cnorm, integer *info);
 
/* Subroutine */ int __cdecl CLATRZ(integer *m, integer *n, integer *l, complex_ *a, 
	integer *lda, complex_ *tau, complex_ *work);
 
/* Subroutine */ int __cdecl CLATZM(char *side, integer *m, integer *n, complex_ *v, 
	integer *incv, complex_ *tau, complex_ *c1, complex_ *c2, integer *ldc, 
	complex_ *work);
 
/* Subroutine */ int __cdecl CLAUU2(char *uplo, integer *n, complex_ *a, integer *lda,
	 integer *info);
 
/* Subroutine */ int __cdecl CLAUUM(char *uplo, integer *n, complex_ *a, integer *lda,
	 integer *info);
 
/* Subroutine */ int __cdecl CPBCON(char *uplo, integer *n, integer *kd, complex_ *ab,
	 integer *ldab, real_ *anorm, real_ *rcond, complex_ *work, real_ *rwork, 
	integer *info);
 
/* Subroutine */ int __cdecl CPBEQU(char *uplo, integer *n, integer *kd, complex_ *ab,
	 integer *ldab, real_ *s, real_ *scond, real_ *amax, integer *info);
 
/* Subroutine */ int __cdecl CPBRFS(char *uplo, integer *n, integer *kd, integer *
	nrhs, complex_ *ab, integer *ldab, complex_ *afb, integer *ldafb, 
	complex_ *b, integer *ldb, complex_ *x, integer *ldx, real_ *ferr, real_ *
	berr, complex_ *work, real_ *rwork, integer *info);
 
/* Subroutine */ int __cdecl CPBSTF(char *uplo, integer *n, integer *kd, complex_ *ab,
	 integer *ldab, integer *info);
 
/* Subroutine */ int __cdecl CPBSV(char *uplo, integer *n, integer *kd, integer *
	nrhs, complex_ *ab, integer *ldab, complex_ *b, integer *ldb, integer *
	info);
 
/* Subroutine */ int __cdecl CPBSVX(char *fact, char *uplo, integer *n, integer *kd, 
	integer *nrhs, complex_ *ab, integer *ldab, complex_ *afb, integer *
	ldafb, char *equed, real_ *s, complex_ *b, integer *ldb, complex_ *x, 
	integer *ldx, real_ *rcond, real_ *ferr, real_ *berr, complex_ *work, 
	real_ *rwork, integer *info);
 
/* Subroutine */ int __cdecl CPBTF2(char *uplo, integer *n, integer *kd, complex_ *ab,
	 integer *ldab, integer *info);
 
/* Subroutine */ int __cdecl CPBTRF(char *uplo, integer *n, integer *kd, complex_ *ab,
	 integer *ldab, integer *info);
 
/* Subroutine */ int __cdecl CPBTRS(char *uplo, integer *n, integer *kd, integer *
	nrhs, complex_ *ab, integer *ldab, complex_ *b, integer *ldb, integer *
	info);
 
/* Subroutine */ int __cdecl CPOCON(char *uplo, integer *n, complex_ *a, integer *lda,
	 real_ *anorm, real_ *rcond, complex_ *work, real_ *rwork, integer *info);
 
/* Subroutine */ int __cdecl CPOEQU(integer *n, complex_ *a, integer *lda, real_ *s, 
	real_ *scond, real_ *amax, integer *info);
 
/* Subroutine */ int __cdecl CPORFS(char *uplo, integer *n, integer *nrhs, complex_ *
	a, integer *lda, complex_ *af, integer *ldaf, complex_ *b, integer *ldb,
	 complex_ *x, integer *ldx, real_ *ferr, real_ *berr, complex_ *work, 
	real_ *rwork, integer *info);
 
/* Subroutine */ int __cdecl CPOSV(char *uplo, integer *n, integer *nrhs, complex_ *a,
	 integer *lda, complex_ *b, integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl CPOSVX(char *fact, char *uplo, integer *n, integer *
	nrhs, complex_ *a, integer *lda, complex_ *af, integer *ldaf, char *
	equed, real_ *s, complex_ *b, integer *ldb, complex_ *x, integer *ldx, 
	real_ *rcond, real_ *ferr, real_ *berr, complex_ *work, real_ *rwork, 
	integer *info);
 
/* Subroutine */ int __cdecl CPOTF2(char *uplo, integer *n, complex_ *a, integer *lda,
	 integer *info);
 
/* Subroutine */ int __cdecl CPOTRF(char *uplo, integer *n, complex_ *a, integer *lda,
	 integer *info);
 
/* Subroutine */ int __cdecl CPOTRI(char *uplo, integer *n, complex_ *a, integer *lda,
	 integer *info);
 
/* Subroutine */ int __cdecl CPOTRS(char *uplo, integer *n, integer *nrhs, complex_ *
	a, integer *lda, complex_ *b, integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl CPPCON(char *uplo, integer *n, complex_ *ap, real_ *anorm,
	 real_ *rcond, complex_ *work, real_ *rwork, integer *info);
 
/* Subroutine */ int __cdecl CPPEQU(char *uplo, integer *n, complex_ *ap, real_ *s, 
	real_ *scond, real_ *amax, integer *info);
 
/* Subroutine */ int __cdecl CPPRFS(char *uplo, integer *n, integer *nrhs, complex_ *
	ap, complex_ *afp, complex_ *b, integer *ldb, complex_ *x, integer *ldx, 
	real_ *ferr, real_ *berr, complex_ *work, real_ *rwork, integer *info);
 
/* Subroutine */ int __cdecl CPPSV(char *uplo, integer *n, integer *nrhs, complex_ *
	ap, complex_ *b, integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl CPPSVX(char *fact, char *uplo, integer *n, integer *
	nrhs, complex_ *ap, complex_ *afp, char *equed, real_ *s, complex_ *b, 
	integer *ldb, complex_ *x, integer *ldx, real_ *rcond, real_ *ferr, real_ 
	*berr, complex_ *work, real_ *rwork, integer *info);
 
/* Subroutine */ int __cdecl CPPTRF(char *uplo, integer *n, complex_ *ap, integer *
	info);
 
/* Subroutine */ int __cdecl CPPTRI(char *uplo, integer *n, complex_ *ap, integer *
	info);
 
/* Subroutine */ int __cdecl CPPTRS(char *uplo, integer *n, integer *nrhs, complex_ *
	ap, complex_ *b, integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl CPTCON(integer *n, real_ *d__, complex_ *e, real_ *anorm, 
	real_ *rcond, real_ *rwork, integer *info);
 
/* Subroutine */ int __cdecl CPTRFS(char *uplo, integer *n, integer *nrhs, real_ *d__,
	 complex_ *e, real_ *df, complex_ *ef, complex_ *b, integer *ldb, complex_ 
	*x, integer *ldx, real_ *ferr, real_ *berr, complex_ *work, real_ *rwork, 
	integer *info);
 
/* Subroutine */ int __cdecl CPTSV(integer *n, integer *nrhs, real_ *d__, complex_ *e, 
	complex_ *b, integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl CPTSVX(char *fact, integer *n, integer *nrhs, real_ *d__,
	 complex_ *e, real_ *df, complex_ *ef, complex_ *b, integer *ldb, complex_ 
	*x, integer *ldx, real_ *rcond, real_ *ferr, real_ *berr, complex_ *work, 
	real_ *rwork, integer *info);
 
/* Subroutine */ int __cdecl CPTTRF(integer *n, real_ *d__, complex_ *e, integer *info);
 
/* Subroutine */ int __cdecl CPTTRS(char *uplo, integer *n, integer *nrhs, real_ *d__,
	 complex_ *e, complex_ *b, integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl CPTTS2(integer *iuplo, integer *n, integer *nrhs, real_ *
	d__, complex_ *e, complex_ *b, integer *ldb);
 
/* Subroutine */ int __cdecl CROT(integer *n, complex_ *cx, integer *incx, complex_ *
	cy, integer *incy, real_ *c__, complex_ *s);
 
/* Subroutine */ int __cdecl CSPCON(char *uplo, integer *n, complex_ *ap, integer *
	ipiv, real_ *anorm, real_ *rcond, complex_ *work, integer *info);
 
/* Subroutine */ int __cdecl CSPMV(char *uplo, integer *n, complex_ *alpha, complex_ *
	ap, complex_ *x, integer *incx, complex_ *beta, complex_ *y, integer *
	incy);
 
/* Subroutine */ int __cdecl CSPR(char *uplo, integer *n, complex_ *alpha, complex_ *x,
	 integer *incx, complex_ *ap);
 
/* Subroutine */ int __cdecl CSPRFS(char *uplo, integer *n, integer *nrhs, complex_ *
	ap, complex_ *afp, integer *ipiv, complex_ *b, integer *ldb, complex_ *x,
	 integer *ldx, real_ *ferr, real_ *berr, complex_ *work, real_ *rwork, 
	integer *info);
 
/* Subroutine */ int __cdecl CSPSV(char *uplo, integer *n, integer *nrhs, complex_ *
	ap, integer *ipiv, complex_ *b, integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl CSPSVX(char *fact, char *uplo, integer *n, integer *
	nrhs, complex_ *ap, complex_ *afp, integer *ipiv, complex_ *b, integer *
	ldb, complex_ *x, integer *ldx, real_ *rcond, real_ *ferr, real_ *berr, 
	complex_ *work, real_ *rwork, integer *info);
 
/* Subroutine */ int __cdecl CSPTRF(char *uplo, integer *n, complex_ *ap, integer *
	ipiv, integer *info);
 
/* Subroutine */ int __cdecl CSPTRI(char *uplo, integer *n, complex_ *ap, integer *
	ipiv, complex_ *work, integer *info);
 
/* Subroutine */ int __cdecl CSPTRS(char *uplo, integer *n, integer *nrhs, complex_ *
	ap, integer *ipiv, complex_ *b, integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl CSROT(integer *n, complex_ *cx, integer *incx, complex_ *
	cy, integer *incy, real_ *c__, real_ *s);
 
/* Subroutine */ int __cdecl CSRSCL(integer *n, real_ *sa, complex_ *sx, integer *incx);
 
/* Subroutine */ int __cdecl CSTEDC(char *compz, integer *n, real_ *d__, real_ *e, 
	complex_ *z__, integer *ldz, complex_ *work, integer *lwork, real_ *
	rwork, integer *lrwork, integer *iwork, integer *liwork, integer *
	info);
 
/* Subroutine */ int __cdecl CSTEIN(integer *n, real_ *d__, real_ *e, integer *m, real_ 
	*w, integer *iblock, integer *isplit, complex_ *z__, integer *ldz, 
	real_ *work, integer *iwork, integer *ifail, integer *info);
 
/* Subroutine */ int __cdecl CSTEQR(char *compz, integer *n, real_ *d__, real_ *e, 
	complex_ *z__, integer *ldz, real_ *work, integer *info);
 
/* Subroutine */ int __cdecl CSYCON(char *uplo, integer *n, complex_ *a, integer *lda,
	 integer *ipiv, real_ *anorm, real_ *rcond, complex_ *work, integer *
	info);
 
/* Subroutine */ int __cdecl CSYMV(char *uplo, integer *n, complex_ *alpha, complex_ *
	a, integer *lda, complex_ *x, integer *incx, complex_ *beta, complex_ *y,
	 integer *incy);
 
/* Subroutine */ int __cdecl CSYR(char *uplo, integer *n, complex_ *alpha, complex_ *x,
	 integer *incx, complex_ *a, integer *lda);
 
/* Subroutine */ int __cdecl CSYRFS(char *uplo, integer *n, integer *nrhs, complex_ *
	a, integer *lda, complex_ *af, integer *ldaf, integer *ipiv, complex_ *
	b, integer *ldb, complex_ *x, integer *ldx, real_ *ferr, real_ *berr, 
	complex_ *work, real_ *rwork, integer *info);
 
/* Subroutine */ int __cdecl CSYSV(char *uplo, integer *n, integer *nrhs, complex_ *a,
	 integer *lda, integer *ipiv, complex_ *b, integer *ldb, complex_ *work,
	 integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl CSYSVX(char *fact, char *uplo, integer *n, integer *
	nrhs, complex_ *a, integer *lda, complex_ *af, integer *ldaf, integer *
	ipiv, complex_ *b, integer *ldb, complex_ *x, integer *ldx, real_ *rcond,
	 real_ *ferr, real_ *berr, complex_ *work, integer *lwork, real_ *rwork, 
	integer *info);
 
/* Subroutine */ int __cdecl CSYTF2(char *uplo, integer *n, complex_ *a, integer *lda,
	 integer *ipiv, integer *info);
 
/* Subroutine */ int __cdecl CSYTRF(char *uplo, integer *n, complex_ *a, integer *lda,
	 integer *ipiv, complex_ *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl CSYTRI(char *uplo, integer *n, complex_ *a, integer *lda,
	 integer *ipiv, complex_ *work, integer *info);
 
/* Subroutine */ int __cdecl CSYTRS(char *uplo, integer *n, integer *nrhs, complex_ *
	a, integer *lda, integer *ipiv, complex_ *b, integer *ldb, integer *
	info);
 
/* Subroutine */ int __cdecl CTBCON(char *norm, char *uplo, char *diag, integer *n, 
	integer *kd, complex_ *ab, integer *ldab, real_ *rcond, complex_ *work, 
	real_ *rwork, integer *info);
 
/* Subroutine */ int __cdecl CTBRFS(char *uplo, char *trans, char *diag, integer *n, 
	integer *kd, integer *nrhs, complex_ *ab, integer *ldab, complex_ *b, 
	integer *ldb, complex_ *x, integer *ldx, real_ *ferr, real_ *berr, 
	complex_ *work, real_ *rwork, integer *info);
 
/* Subroutine */ int __cdecl CTBTRS(char *uplo, char *trans, char *diag, integer *n, 
	integer *kd, integer *nrhs, complex_ *ab, integer *ldab, complex_ *b, 
	integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl CTGEVC(char *side, char *howmny, logical *select, 
	integer *n, complex_ *a, integer *lda, complex_ *b, integer *ldb, 
	complex_ *vl, integer *ldvl, complex_ *vr, integer *ldvr, integer *mm, 
	integer *m, complex_ *work, real_ *rwork, integer *info);
 
/* Subroutine */ int __cdecl CTGEX2(logical *wantq, logical *wantz, integer *n, 
	complex_ *a, integer *lda, complex_ *b, integer *ldb, complex_ *q, 
	integer *ldq, complex_ *z__, integer *ldz, integer *j1, integer *info);
 
/* Subroutine */ int __cdecl CTGEXC(logical *wantq, logical *wantz, integer *n, 
	complex_ *a, integer *lda, complex_ *b, integer *ldb, complex_ *q, 
	integer *ldq, complex_ *z__, integer *ldz, integer *ifst, integer *
	ilst, integer *info);
 
/* Subroutine */ int __cdecl CTGSEN(integer *ijob, logical *wantq, logical *wantz, 
	logical *select, integer *n, complex_ *a, integer *lda, complex_ *b, 
	integer *ldb, complex_ *alpha, complex_ *beta, complex_ *q, integer *ldq,
	 complex_ *z__, integer *ldz, integer *m, real_ *pl, real_ *pr, real_ *
	dif, complex_ *work, integer *lwork, integer *iwork, integer *liwork, 
	integer *info);
 
/* Subroutine */ int __cdecl CTGSJA(char *jobu, char *jobv, char *jobq, integer *m, 
	integer *p, integer *n, integer *k, integer *l, complex_ *a, integer *
	lda, complex_ *b, integer *ldb, real_ *tola, real_ *tolb, real_ *alpha, 
	real_ *beta, complex_ *u, integer *ldu, complex_ *v, integer *ldv, 
	complex_ *q, integer *ldq, complex_ *work, integer *ncycle, integer *
	info);
 
/* Subroutine */ int __cdecl CTGSNA(char *job, char *howmny, logical *select, 
	integer *n, complex_ *a, integer *lda, complex_ *b, integer *ldb, 
	complex_ *vl, integer *ldvl, complex_ *vr, integer *ldvr, real_ *s, real_ 
	*dif, integer *mm, integer *m, complex_ *work, integer *lwork, integer 
	*iwork, integer *info);
 
/* Subroutine */ int __cdecl CTGSY2(char *trans, integer *ijob, integer *m, integer *
	n, complex_ *a, integer *lda, complex_ *b, integer *ldb, complex_ *c__, 
	integer *ldc, complex_ *d__, integer *ldd, complex_ *e, integer *lde, 
	complex_ *f, integer *ldf, real_ *scale, real_ *rdsum, real_ *rdscal, 
	integer *info);
 
/* Subroutine */ int __cdecl CTGSYL(char *trans, integer *ijob, integer *m, integer *
	n, complex_ *a, integer *lda, complex_ *b, integer *ldb, complex_ *c__, 
	integer *ldc, complex_ *d__, integer *ldd, complex_ *e, integer *lde, 
	complex_ *f, integer *ldf, real_ *scale, real_ *dif, complex_ *work, 
	integer *lwork, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl CTPCON(char *norm, char *uplo, char *diag, integer *n, 
	complex_ *ap, real_ *rcond, complex_ *work, real_ *rwork, integer *info);
 
/* Subroutine */ int __cdecl CTPRFS(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, complex_ *ap, complex_ *b, integer *ldb, complex_ *x, 
	integer *ldx, real_ *ferr, real_ *berr, complex_ *work, real_ *rwork, 
	integer *info);
 
/* Subroutine */ int __cdecl CTPTRI(char *uplo, char *diag, integer *n, complex_ *ap, 
	integer *info);
 
/* Subroutine */ int __cdecl CTPTRS(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, complex_ *ap, complex_ *b, integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl CTRCON(char *norm, char *uplo, char *diag, integer *n, 
	complex_ *a, integer *lda, real_ *rcond, complex_ *work, real_ *rwork, 
	integer *info);
 
/* Subroutine */ int __cdecl CTREVC(char *side, char *howmny, logical *select, 
	integer *n, complex_ *t, integer *ldt, complex_ *vl, integer *ldvl, 
	complex_ *vr, integer *ldvr, integer *mm, integer *m, complex_ *work, 
	real_ *rwork, integer *info);
 
/* Subroutine */ int __cdecl CTREXC(char *compq, integer *n, complex_ *t, integer *
	ldt, complex_ *q, integer *ldq, integer *ifst, integer *ilst, integer *
	info);
 
/* Subroutine */ int __cdecl CTRRFS(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, complex_ *a, integer *lda, complex_ *b, integer *ldb, 
	complex_ *x, integer *ldx, real_ *ferr, real_ *berr, complex_ *work, real_ 
	*rwork, integer *info);
 
/* Subroutine */ int __cdecl CTRSEN(char *job, char *compq, logical *select, integer 
	*n, complex_ *t, integer *ldt, complex_ *q, integer *ldq, complex_ *w, 
	integer *m, real_ *s, real_ *sep, complex_ *work, integer *lwork, 
	integer *info);
 
/* Subroutine */ int __cdecl CTRSNA(char *job, char *howmny, logical *select, 
	integer *n, complex_ *t, integer *ldt, complex_ *vl, integer *ldvl, 
	complex_ *vr, integer *ldvr, real_ *s, real_ *sep, integer *mm, integer *
	m, complex_ *work, integer *ldwork, real_ *rwork, integer *info);
 
/* Subroutine */ int __cdecl CTRSYL(char *trana, char *tranb, integer *isgn, integer 
	*m, integer *n, complex_ *a, integer *lda, complex_ *b, integer *ldb, 
	complex_ *c__, integer *ldc, real_ *scale, integer *info);
 
/* Subroutine */ int __cdecl CTRTI2(char *uplo, char *diag, integer *n, complex_ *a, 
	integer *lda, integer *info);
 
/* Subroutine */ int __cdecl CTRTRI(char *uplo, char *diag, integer *n, complex_ *a, 
	integer *lda, integer *info);
 
/* Subroutine */ int __cdecl CTRTRS(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, complex_ *a, integer *lda, complex_ *b, integer *ldb, 
	integer *info);
 
/* Subroutine */ int __cdecl CTZRQF(integer *m, integer *n, complex_ *a, integer *lda,
	 complex_ *tau, integer *info);
 
/* Subroutine */ int __cdecl CTZRZF(integer *m, integer *n, complex_ *a, integer *lda,
	 complex_ *tau, complex_ *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl CUNG2L(integer *m, integer *n, integer *k, complex_ *a, 
	integer *lda, complex_ *tau, complex_ *work, integer *info);
 
/* Subroutine */ int __cdecl CUNG2R(integer *m, integer *n, integer *k, complex_ *a, 
	integer *lda, complex_ *tau, complex_ *work, integer *info);
 
/* Subroutine */ int __cdecl CUNGBR(char *vect, integer *m, integer *n, integer *k, 
	complex_ *a, integer *lda, complex_ *tau, complex_ *work, integer *lwork,
	 integer *info);
 
/* Subroutine */ int __cdecl CUNGHR(integer *n, integer *ilo, integer *ihi, complex_ *
	a, integer *lda, complex_ *tau, complex_ *work, integer *lwork, integer 
	*info);
 
/* Subroutine */ int __cdecl CUNGL2(integer *m, integer *n, integer *k, complex_ *a, 
	integer *lda, complex_ *tau, complex_ *work, integer *info);
 
/* Subroutine */ int __cdecl CUNGLQ(integer *m, integer *n, integer *k, complex_ *a, 
	integer *lda, complex_ *tau, complex_ *work, integer *lwork, integer *
	info);
 
/* Subroutine */ int __cdecl CUNGQL(integer *m, integer *n, integer *k, complex_ *a, 
	integer *lda, complex_ *tau, complex_ *work, integer *lwork, integer *
	info);
 
/* Subroutine */ int __cdecl CUNGQR(integer *m, integer *n, integer *k, complex_ *a, 
	integer *lda, complex_ *tau, complex_ *work, integer *lwork, integer *
	info);
 
/* Subroutine */ int __cdecl CUNGR2(integer *m, integer *n, integer *k, complex_ *a, 
	integer *lda, complex_ *tau, complex_ *work, integer *info);
 
/* Subroutine */ int __cdecl CUNGRQ(integer *m, integer *n, integer *k, complex_ *a, 
	integer *lda, complex_ *tau, complex_ *work, integer *lwork, integer *
	info);
 
/* Subroutine */ int __cdecl CUNGTR(char *uplo, integer *n, complex_ *a, integer *lda,
	 complex_ *tau, complex_ *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl CUNM2L(char *side, char *trans, integer *m, integer *n, 
	integer *k, complex_ *a, integer *lda, complex_ *tau, complex_ *c__, 
	integer *ldc, complex_ *work, integer *info);
 
/* Subroutine */ int __cdecl CUNM2R(char *side, char *trans, integer *m, integer *n, 
	integer *k, complex_ *a, integer *lda, complex_ *tau, complex_ *c__, 
	integer *ldc, complex_ *work, integer *info);
 
/* Subroutine */ int __cdecl CUNMBR(char *vect, char *side, char *trans, integer *m, 
	integer *n, integer *k, complex_ *a, integer *lda, complex_ *tau, 
	complex_ *c__, integer *ldc, complex_ *work, integer *lwork, integer *
	info);
 
/* Subroutine */ int __cdecl CUNMHR(char *side, char *trans, integer *m, integer *n, 
	integer *ilo, integer *ihi, complex_ *a, integer *lda, complex_ *tau, 
	complex_ *c__, integer *ldc, complex_ *work, integer *lwork, integer *
	info);
 
/* Subroutine */ int __cdecl CUNML2(char *side, char *trans, integer *m, integer *n, 
	integer *k, complex_ *a, integer *lda, complex_ *tau, complex_ *c__, 
	integer *ldc, complex_ *work, integer *info);
 
/* Subroutine */ int __cdecl CUNMLQ(char *side, char *trans, integer *m, integer *n, 
	integer *k, complex_ *a, integer *lda, complex_ *tau, complex_ *c__, 
	integer *ldc, complex_ *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl CUNMQL(char *side, char *trans, integer *m, integer *n, 
	integer *k, complex_ *a, integer *lda, complex_ *tau, complex_ *c__, 
	integer *ldc, complex_ *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl CUNMQR(char *side, char *trans, integer *m, integer *n, 
	integer *k, complex_ *a, integer *lda, complex_ *tau, complex_ *c__, 
	integer *ldc, complex_ *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl CUNMR2(char *side, char *trans, integer *m, integer *n, 
	integer *k, complex_ *a, integer *lda, complex_ *tau, complex_ *c__, 
	integer *ldc, complex_ *work, integer *info);
 
/* Subroutine */ int __cdecl CUNMR3(char *side, char *trans, integer *m, integer *n, 
	integer *k, integer *l, complex_ *a, integer *lda, complex_ *tau, 
	complex_ *c__, integer *ldc, complex_ *work, integer *info);
 
/* Subroutine */ int __cdecl CUNMRQ(char *side, char *trans, integer *m, integer *n, 
	integer *k, complex_ *a, integer *lda, complex_ *tau, complex_ *c__, 
	integer *ldc, complex_ *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl CUNMRZ(char *side, char *trans, integer *m, integer *n, 
	integer *k, integer *l, complex_ *a, integer *lda, complex_ *tau, 
	complex_ *c__, integer *ldc, complex_ *work, integer *lwork, integer *
	info);
 
/* Subroutine */ int __cdecl CUNMTR(char *side, char *uplo, char *trans, integer *m, 
	integer *n, complex_ *a, integer *lda, complex_ *tau, complex_ *c__, 
	integer *ldc, complex_ *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl CUPGTR(char *uplo, integer *n, complex_ *ap, complex_ *
	tau, complex_ *q, integer *ldq, complex_ *work, integer *info);
 
/* Subroutine */ int __cdecl CUPMTR(char *side, char *uplo, char *trans, integer *m, 
	integer *n, complex_ *ap, complex_ *tau, complex_ *c__, integer *ldc, 
	complex_ *work, integer *info);
 
/* Subroutine */ int __cdecl DBDSDC(char *uplo, char *compq, integer *n, doublereal *
	d__, doublereal *e, doublereal *u, integer *ldu, doublereal *vt, 
	integer *ldvt, doublereal *q, integer *iq, doublereal *work, integer *
	iwork, integer *info);
 
/* Subroutine */ int __cdecl DBDSQR(char *uplo, integer *n, integer *ncvt, integer *
	nru, integer *ncc, doublereal *d__, doublereal *e, doublereal *vt, 
	integer *ldvt, doublereal *u, integer *ldu, doublereal *c__, integer *
	ldc, doublereal *work, integer *info);
 
/* Subroutine */ int __cdecl DDISNA(char *job, integer *m, integer *n, doublereal *
	d__, doublereal *sep, integer *info);
 
/* Subroutine */ int __cdecl DGBBRD(char *vect, integer *m, integer *n, integer *ncc,
	 integer *kl, integer *ku, doublereal *ab, integer *ldab, doublereal *
	d__, doublereal *e, doublereal *q, integer *ldq, doublereal *pt, 
	integer *ldpt, doublereal *c__, integer *ldc, doublereal *work, 
	integer *info);
 
/* Subroutine */ int __cdecl DGBCON(char *norm, integer *n, integer *kl, integer *ku,
	 doublereal *ab, integer *ldab, integer *ipiv, doublereal *anorm, 
	doublereal *rcond, doublereal *work, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl DGBEQU(integer *m, integer *n, integer *kl, integer *ku,
	 doublereal *ab, integer *ldab, doublereal *r__, doublereal *c__, 
	doublereal *rowcnd, doublereal *colcnd, doublereal *amax, integer *
	info);
 
/* Subroutine */ int __cdecl DGBRFS(char *trans, integer *n, integer *kl, integer *
	ku, integer *nrhs, doublereal *ab, integer *ldab, doublereal *afb, 
	integer *ldafb, integer *ipiv, doublereal *b, integer *ldb, 
	doublereal *x, integer *ldx, doublereal *ferr, doublereal *berr, 
	doublereal *work, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl DGBSV(integer *n, integer *kl, integer *ku, integer *
	nrhs, doublereal *ab, integer *ldab, integer *ipiv, doublereal *b, 
	integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl DGBSVX(char *fact, char *trans, integer *n, integer *kl,
	 integer *ku, integer *nrhs, doublereal *ab, integer *ldab, 
	doublereal *afb, integer *ldafb, integer *ipiv, char *equed, 
	doublereal *r__, doublereal *c__, doublereal *b, integer *ldb, 
	doublereal *x, integer *ldx, doublereal *rcond, doublereal *ferr, 
	doublereal *berr, doublereal *work, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl DGBTF2(integer *m, integer *n, integer *kl, integer *ku,
	 doublereal *ab, integer *ldab, integer *ipiv, integer *info);
 
/* Subroutine */ int __cdecl DGBTRF(integer *m, integer *n, integer *kl, integer *ku,
	 doublereal *ab, integer *ldab, integer *ipiv, integer *info);
 
/* Subroutine */ int __cdecl DGBTRS(char *trans, integer *n, integer *kl, integer *
	ku, integer *nrhs, doublereal *ab, integer *ldab, integer *ipiv, 
	doublereal *b, integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl DGEBAK(char *job, char *side, integer *n, integer *ilo, 
	integer *ihi, doublereal *scale, integer *m, doublereal *v, integer *
	ldv, integer *info);
 
/* Subroutine */ int __cdecl DGEBAL(char *job, integer *n, doublereal *a, integer *
	lda, integer *ilo, integer *ihi, doublereal *scale, integer *info);
 
/* Subroutine */ int __cdecl DGEBD2(integer *m, integer *n, doublereal *a, integer *
	lda, doublereal *d__, doublereal *e, doublereal *tauq, doublereal *
	taup, doublereal *work, integer *info);
 
/* Subroutine */ int __cdecl DGEBRD(integer *m, integer *n, doublereal *a, integer *
	lda, doublereal *d__, doublereal *e, doublereal *tauq, doublereal *
	taup, doublereal *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl DGECON(char *norm, integer *n, doublereal *a, integer *
	lda, doublereal *anorm, doublereal *rcond, doublereal *work, integer *
	iwork, integer *info);
 
/* Subroutine */ int __cdecl DGEEQU(integer *m, integer *n, doublereal *a, integer *
	lda, doublereal *r__, doublereal *c__, doublereal *rowcnd, doublereal 
	*colcnd, doublereal *amax, integer *info);
 
/* Subroutine */ int __cdecl DGEES(char *jobvs, char *sort, L_fp select, integer *n, 
	doublereal *a, integer *lda, integer *sdim, doublereal *wr, 
	doublereal *wi, doublereal *vs, integer *ldvs, doublereal *work, 
	integer *lwork, logical *bwork, integer *info);
 
/* Subroutine */ int __cdecl DGEESX(char *jobvs, char *sort, L_fp select, char *
	sense, integer *n, doublereal *a, integer *lda, integer *sdim, 
	doublereal *wr, doublereal *wi, doublereal *vs, integer *ldvs, 
	doublereal *rconde, doublereal *rcondv, doublereal *work, integer *
	lwork, integer *iwork, integer *liwork, logical *bwork, integer *info);
 
/* Subroutine */ int __cdecl DGEEV(char *jobvl, char *jobvr, integer *n, doublereal *
	a, integer *lda, doublereal *wr, doublereal *wi, doublereal *vl, 
	integer *ldvl, doublereal *vr, integer *ldvr, doublereal *work, 
	integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl DGEEVX(char *balanc, char *jobvl, char *jobvr, char *
	sense, integer *n, doublereal *a, integer *lda, doublereal *wr, 
	doublereal *wi, doublereal *vl, integer *ldvl, doublereal *vr, 
	integer *ldvr, integer *ilo, integer *ihi, doublereal *scale, 
	doublereal *abnrm, doublereal *rconde, doublereal *rcondv, doublereal 
	*work, integer *lwork, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl DGEGS(char *jobvsl, char *jobvsr, integer *n, 
	doublereal *a, integer *lda, doublereal *b, integer *ldb, doublereal *
	alphar, doublereal *alphai, doublereal *beta, doublereal *vsl, 
	integer *ldvsl, doublereal *vsr, integer *ldvsr, doublereal *work, 
	integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl DGEGV(char *jobvl, char *jobvr, integer *n, doublereal *
	a, integer *lda, doublereal *b, integer *ldb, doublereal *alphar, 
	doublereal *alphai, doublereal *beta, doublereal *vl, integer *ldvl, 
	doublereal *vr, integer *ldvr, doublereal *work, integer *lwork, 
	integer *info);
 
/* Subroutine */ int __cdecl DGEHD2(integer *n, integer *ilo, integer *ihi, 
	doublereal *a, integer *lda, doublereal *tau, doublereal *work, 
	integer *info);
 
/* Subroutine */ int __cdecl DGEHRD(integer *n, integer *ilo, integer *ihi, 
	doublereal *a, integer *lda, doublereal *tau, doublereal *work, 
	integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl DGELQ2(integer *m, integer *n, doublereal *a, integer *
	lda, doublereal *tau, doublereal *work, integer *info);
 
/* Subroutine */ int __cdecl DGELQF(integer *m, integer *n, doublereal *a, integer *
	lda, doublereal *tau, doublereal *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl DGELS(char *trans, integer *m, integer *n, integer *
	nrhs, doublereal *a, integer *lda, doublereal *b, integer *ldb, 
	doublereal *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl DGELSD(integer *m, integer *n, integer *nrhs, 
	doublereal *a, integer *lda, doublereal *b, integer *ldb, doublereal *
	s, doublereal *rcond, integer *rank, doublereal *work, integer *lwork,
	 integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl DGELSS(integer *m, integer *n, integer *nrhs, 
	doublereal *a, integer *lda, doublereal *b, integer *ldb, doublereal *
	s, doublereal *rcond, integer *rank, doublereal *work, integer *lwork,
	 integer *info);
 
/* Subroutine */ int __cdecl DGELSX(integer *m, integer *n, integer *nrhs, 
	doublereal *a, integer *lda, doublereal *b, integer *ldb, integer *
	jpvt, doublereal *rcond, integer *rank, doublereal *work, integer *
	info);
 
/* Subroutine */ int __cdecl DGELSY(integer *m, integer *n, integer *nrhs, 
	doublereal *a, integer *lda, doublereal *b, integer *ldb, integer *
	jpvt, doublereal *rcond, integer *rank, doublereal *work, integer *
	lwork, integer *info);
 
/* Subroutine */ int __cdecl DGEQL2(integer *m, integer *n, doublereal *a, integer *
	lda, doublereal *tau, doublereal *work, integer *info);
 
/* Subroutine */ int __cdecl DGEQLF(integer *m, integer *n, doublereal *a, integer *
	lda, doublereal *tau, doublereal *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl DGEQP3(integer *m, integer *n, doublereal *a, integer *
	lda, integer *jpvt, doublereal *tau, doublereal *work, integer *lwork,
	 integer *info);
 
/* Subroutine */ int __cdecl DGEQPF(integer *m, integer *n, doublereal *a, integer *
	lda, integer *jpvt, doublereal *tau, doublereal *work, integer *info);
 
/* Subroutine */ int __cdecl DGEQR2(integer *m, integer *n, doublereal *a, integer *
	lda, doublereal *tau, doublereal *work, integer *info);
 
/* Subroutine */ int __cdecl DGEQRF(integer *m, integer *n, doublereal *a, integer *
	lda, doublereal *tau, doublereal *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl DGERFS(char *trans, integer *n, integer *nrhs, 
	doublereal *a, integer *lda, doublereal *af, integer *ldaf, integer *
	ipiv, doublereal *b, integer *ldb, doublereal *x, integer *ldx, 
	doublereal *ferr, doublereal *berr, doublereal *work, integer *iwork, 
	integer *info);
 
/* Subroutine */ int __cdecl DGERQ2(integer *m, integer *n, doublereal *a, integer *
	lda, doublereal *tau, doublereal *work, integer *info);
 
/* Subroutine */ int __cdecl DGERQF(integer *m, integer *n, doublereal *a, integer *
	lda, doublereal *tau, doublereal *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl DGESC2(integer *n, doublereal *a, integer *lda, 
	doublereal *rhs, integer *ipiv, integer *jpiv, doublereal *scale);
 
/* Subroutine */ int __cdecl DGESDD(char *jobz, integer *m, integer *n, doublereal *
	a, integer *lda, doublereal *s, doublereal *u, integer *ldu, 
	doublereal *vt, integer *ldvt, doublereal *work, integer *lwork, 
	integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl DGESV(integer *n, integer *nrhs, doublereal *a, integer 
	*lda, integer *ipiv, doublereal *b, integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl DGESVD(char *jobu, char *jobvt, integer *m, integer *n, 
	doublereal *a, integer *lda, doublereal *s, doublereal *u, integer *
	ldu, doublereal *vt, integer *ldvt, doublereal *work, integer *lwork, 
	integer *info);
 
/* Subroutine */ int __cdecl DGESVX(char *fact, char *trans, integer *n, integer *
	nrhs, doublereal *a, integer *lda, doublereal *af, integer *ldaf, 
	integer *ipiv, char *equed, doublereal *r__, doublereal *c__, 
	doublereal *b, integer *ldb, doublereal *x, integer *ldx, doublereal *
	rcond, doublereal *ferr, doublereal *berr, doublereal *work, integer *
	iwork, integer *info);
 
/* Subroutine */ int __cdecl DGETC2(integer *n, doublereal *a, integer *lda, integer 
	*ipiv, integer *jpiv, integer *info);
 
/* Subroutine */ int __cdecl DGETF2(integer *m, integer *n, doublereal *a, integer *
	lda, integer *ipiv, integer *info);
 
/* Subroutine */ int __cdecl DGETRF(integer *m, integer *n, doublereal *a, integer *
	lda, integer *ipiv, integer *info);
 
/* Subroutine */ int __cdecl DGETRI(integer *n, doublereal *a, integer *lda, integer 
	*ipiv, doublereal *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl DGETRS(char *trans, integer *n, integer *nrhs, 
	doublereal *a, integer *lda, integer *ipiv, doublereal *b, integer *
	ldb, integer *info);
 
/* Subroutine */ int __cdecl DGGBAK(char *job, char *side, integer *n, integer *ilo, 
	integer *ihi, doublereal *lscale, doublereal *rscale, integer *m, 
	doublereal *v, integer *ldv, integer *info);
 
/* Subroutine */ int __cdecl DGGBAL(char *job, integer *n, doublereal *a, integer *
	lda, doublereal *b, integer *ldb, integer *ilo, integer *ihi, 
	doublereal *lscale, doublereal *rscale, doublereal *work, integer *
	info);
 
/* Subroutine */ int __cdecl DGGES(char *jobvsl, char *jobvsr, char *sort, L_fp 
	delctg, integer *n, doublereal *a, integer *lda, doublereal *b, 
	integer *ldb, integer *sdim, doublereal *alphar, doublereal *alphai, 
	doublereal *beta, doublereal *vsl, integer *ldvsl, doublereal *vsr, 
	integer *ldvsr, doublereal *work, integer *lwork, logical *bwork, 
	integer *info);
 
/* Subroutine */ int __cdecl DGGESX(char *jobvsl, char *jobvsr, char *sort, L_fp 
	delctg, char *sense, integer *n, doublereal *a, integer *lda, 
	doublereal *b, integer *ldb, integer *sdim, doublereal *alphar, 
	doublereal *alphai, doublereal *beta, doublereal *vsl, integer *ldvsl,
	 doublereal *vsr, integer *ldvsr, doublereal *rconde, doublereal *
	rcondv, doublereal *work, integer *lwork, integer *iwork, integer *
	liwork, logical *bwork, integer *info);
 
/* Subroutine */ int __cdecl DGGEV(char *jobvl, char *jobvr, integer *n, doublereal *
	a, integer *lda, doublereal *b, integer *ldb, doublereal *alphar, 
	doublereal *alphai, doublereal *beta, doublereal *vl, integer *ldvl, 
	doublereal *vr, integer *ldvr, doublereal *work, integer *lwork, 
	integer *info);
 
/* Subroutine */ int __cdecl DGGEVX(char *balanc, char *jobvl, char *jobvr, char *
	sense, integer *n, doublereal *a, integer *lda, doublereal *b, 
	integer *ldb, doublereal *alphar, doublereal *alphai, doublereal *
	beta, doublereal *vl, integer *ldvl, doublereal *vr, integer *ldvr, 
	integer *ilo, integer *ihi, doublereal *lscale, doublereal *rscale, 
	doublereal *abnrm, doublereal *bbnrm, doublereal *rconde, doublereal *
	rcondv, doublereal *work, integer *lwork, integer *iwork, logical *
	bwork, integer *info);
 
/* Subroutine */ int __cdecl DGGGLM(integer *n, integer *m, integer *p, doublereal *
	a, integer *lda, doublereal *b, integer *ldb, doublereal *d__, 
	doublereal *x, doublereal *y, doublereal *work, integer *lwork, 
	integer *info);
 
/* Subroutine */ int __cdecl DGGHRD(char *compq, char *compz, integer *n, integer *
	ilo, integer *ihi, doublereal *a, integer *lda, doublereal *b, 
	integer *ldb, doublereal *q, integer *ldq, doublereal *z__, integer *
	ldz, integer *info);
 
/* Subroutine */ int __cdecl DGGLSE(integer *m, integer *n, integer *p, doublereal *
	a, integer *lda, doublereal *b, integer *ldb, doublereal *c__, 
	doublereal *d__, doublereal *x, doublereal *work, integer *lwork, 
	integer *info);
 
/* Subroutine */ int __cdecl DGGQRF(integer *n, integer *m, integer *p, doublereal *
	a, integer *lda, doublereal *taua, doublereal *b, integer *ldb, 
	doublereal *taub, doublereal *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl DGGRQF(integer *m, integer *p, integer *n, doublereal *
	a, integer *lda, doublereal *taua, doublereal *b, integer *ldb, 
	doublereal *taub, doublereal *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl DGGSVD(char *jobu, char *jobv, char *jobq, integer *m, 
	integer *n, integer *p, integer *k, integer *l, doublereal *a, 
	integer *lda, doublereal *b, integer *ldb, doublereal *alpha, 
	doublereal *beta, doublereal *u, integer *ldu, doublereal *v, integer 
	*ldv, doublereal *q, integer *ldq, doublereal *work, integer *iwork, 
	integer *info);
 
/* Subroutine */ int __cdecl DGGSVP(char *jobu, char *jobv, char *jobq, integer *m, 
	integer *p, integer *n, doublereal *a, integer *lda, doublereal *b, 
	integer *ldb, doublereal *tola, doublereal *tolb, integer *k, integer 
	*l, doublereal *u, integer *ldu, doublereal *v, integer *ldv, 
	doublereal *q, integer *ldq, integer *iwork, doublereal *tau, 
	doublereal *work, integer *info);
 
/* Subroutine */ int __cdecl DGTCON(char *norm, integer *n, doublereal *dl, 
	doublereal *d__, doublereal *du, doublereal *du2, integer *ipiv, 
	doublereal *anorm, doublereal *rcond, doublereal *work, integer *
	iwork, integer *info);
 
/* Subroutine */ int __cdecl DGTRFS(char *trans, integer *n, integer *nrhs, 
	doublereal *dl, doublereal *d__, doublereal *du, doublereal *dlf, 
	doublereal *df, doublereal *duf, doublereal *du2, integer *ipiv, 
	doublereal *b, integer *ldb, doublereal *x, integer *ldx, doublereal *
	ferr, doublereal *berr, doublereal *work, integer *iwork, integer *
	info);
 
/* Subroutine */ int __cdecl DGTSV(integer *n, integer *nrhs, doublereal *dl, 
	doublereal *d__, doublereal *du, doublereal *b, integer *ldb, integer 
	*info);
 
/* Subroutine */ int __cdecl DGTSVX(char *fact, char *trans, integer *n, integer *
	nrhs, doublereal *dl, doublereal *d__, doublereal *du, doublereal *
	dlf, doublereal *df, doublereal *duf, doublereal *du2, integer *ipiv, 
	doublereal *b, integer *ldb, doublereal *x, integer *ldx, doublereal *
	rcond, doublereal *ferr, doublereal *berr, doublereal *work, integer *
	iwork, integer *info);
 
/* Subroutine */ int __cdecl DGTTRF(integer *n, doublereal *dl, doublereal *d__, 
	doublereal *du, doublereal *du2, integer *ipiv, integer *info);
 
/* Subroutine */ int __cdecl DGTTRS(char *trans, integer *n, integer *nrhs, 
	doublereal *dl, doublereal *d__, doublereal *du, doublereal *du2, 
	integer *ipiv, doublereal *b, integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl DGTTS2(integer *itrans, integer *n, integer *nrhs, 
	doublereal *dl, doublereal *d__, doublereal *du, doublereal *du2, 
	integer *ipiv, doublereal *b, integer *ldb);
 
/* Subroutine */ int __cdecl DHGEQZ(char *job, char *compq, char *compz, integer *n, 
	integer *ilo, integer *ihi, doublereal *a, integer *lda, doublereal *
	b, integer *ldb, doublereal *alphar, doublereal *alphai, doublereal *
	beta, doublereal *q, integer *ldq, doublereal *z__, integer *ldz, 
	doublereal *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl DHSEIN(char *side, char *eigsrc, char *initv, logical *
	select, integer *n, doublereal *h__, integer *ldh, doublereal *wr, 
	doublereal *wi, doublereal *vl, integer *ldvl, doublereal *vr, 
	integer *ldvr, integer *mm, integer *m, doublereal *work, integer *
	ifaill, integer *ifailr, integer *info);
 
/* Subroutine */ int __cdecl DHSEQR(char *job, char *compz, integer *n, integer *ilo,
	 integer *ihi, doublereal *h__, integer *ldh, doublereal *wr, 
	doublereal *wi, doublereal *z__, integer *ldz, doublereal *work, 
	integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl DLABAD(doublereal *small2, doublereal *large);
 
/* Subroutine */ int __cdecl DLABRD(integer *m, integer *n, integer *nb, doublereal *
	a, integer *lda, doublereal *d__, doublereal *e, doublereal *tauq, 
	doublereal *taup, doublereal *x, integer *ldx, doublereal *y, integer 
	*ldy);
 
/* Subroutine */ int __cdecl DLACON(integer *n, doublereal *v, doublereal *x, 
	integer *isgn, doublereal *est, integer *kase);
 
/* Subroutine */ int __cdecl DLACPY(char *uplo, integer *m, integer *n, doublereal *
	a, integer *lda, doublereal *b, integer *ldb);
 
/* Subroutine */ int __cdecl DLADIV(doublereal *a, doublereal *b, doublereal *c__, 
	doublereal *d__, doublereal *p, doublereal *q);
 
/* Subroutine */ int __cdecl DLAE2(doublereal *a, doublereal *b, doublereal *c__, 
	doublereal *rt1, doublereal *rt2);
 
/* Subroutine */ int __cdecl DLAEBZ(integer *ijob, integer *nitmax, integer *n, 
	integer *mmax, integer *minp, integer *nbmin, doublereal *abstol, 
	doublereal *reltol, doublereal *pivmin, doublereal *d__, doublereal *
	e, doublereal *e2, integer *nval, doublereal *ab, doublereal *c__, 
	integer *mout, integer *nab, doublereal *work, integer *iwork, 
	integer *info);
 
/* Subroutine */ int __cdecl DLAED0(integer *icompq, integer *qsiz, integer *n, 
	doublereal *d__, doublereal *e, doublereal *q, integer *ldq, 
	doublereal *qstore, integer *ldqs, doublereal *work, integer *iwork, 
	integer *info);
 
/* Subroutine */ int __cdecl DLAED1(integer *n, doublereal *d__, doublereal *q, 
	integer *ldq, integer *indxq, doublereal *rho, integer *cutpnt, 
	doublereal *work, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl DLAED2(integer *k, integer *n, integer *n1, doublereal *
	d__, doublereal *q, integer *ldq, integer *indxq, doublereal *rho, 
	doublereal *z__, doublereal *dlamda, doublereal *w, doublereal *q2, 
	integer *indx, integer *indxc, integer *indxp, integer *coltyp, 
	integer *info);
 
/* Subroutine */ int __cdecl DLAED3(integer *k, integer *n, integer *n1, doublereal *
	d__, doublereal *q, integer *ldq, doublereal *rho, doublereal *dlamda,
	 doublereal *q2, integer *indx, integer *ctot, doublereal *w, 
	doublereal *s, integer *info);
 
/* Subroutine */ int __cdecl DLAED4(integer *n, integer *i__, doublereal *d__, 
	doublereal *z__, doublereal *delta, doublereal *rho, doublereal *dlam,
	 integer *info);
 
/* Subroutine */ int __cdecl DLAED5(integer *i__, doublereal *d__, doublereal *z__, 
	doublereal *delta, doublereal *rho, doublereal *dlam);
 
/* Subroutine */ int __cdecl DLAED6(integer *kniter, logical *orgati, doublereal *
	rho, doublereal *d__, doublereal *z__, doublereal *finit, doublereal *
	tau, integer *info);
 
/* Subroutine */ int __cdecl DLAED7(integer *icompq, integer *n, integer *qsiz, 
	integer *tlvls, integer *curlvl, integer *curpbm, doublereal *d__, 
	doublereal *q, integer *ldq, integer *indxq, doublereal *rho, integer 
	*cutpnt, doublereal *qstore, integer *qptr, integer *prmptr, integer *
	perm, integer *givptr, integer *givcol, doublereal *givnum, 
	doublereal *work, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl DLAED8(integer *icompq, integer *k, integer *n, integer 
	*qsiz, doublereal *d__, doublereal *q, integer *ldq, integer *indxq, 
	doublereal *rho, integer *cutpnt, doublereal *z__, doublereal *dlamda,
	 doublereal *q2, integer *ldq2, doublereal *w, integer *perm, integer 
	*givptr, integer *givcol, doublereal *givnum, integer *indxp, integer 
	*indx, integer *info);
 
/* Subroutine */ int __cdecl DLAED9(integer *k, integer *kstart, integer *kstop, 
	integer *n, doublereal *d__, doublereal *q, integer *ldq, doublereal *
	rho, doublereal *dlamda, doublereal *w, doublereal *s, integer *lds, 
	integer *info);
 
/* Subroutine */ int __cdecl DLAEDA(integer *n, integer *tlvls, integer *curlvl, 
	integer *curpbm, integer *prmptr, integer *perm, integer *givptr, 
	integer *givcol, doublereal *givnum, doublereal *q, integer *qptr, 
	doublereal *z__, doublereal *ztemp, integer *info);
 
/* Subroutine */ int __cdecl DLAEIN(logical *rightv, logical *noinit, integer *n, 
	doublereal *h__, integer *ldh, doublereal *wr, doublereal *wi, 
	doublereal *vr, doublereal *vi, doublereal *b, integer *ldb, 
	doublereal *work, doublereal *eps3, doublereal *smlnum, doublereal *
	bignum, integer *info);
 
/* Subroutine */ int __cdecl DLAEV2(doublereal *a, doublereal *b, doublereal *c__, 
	doublereal *rt1, doublereal *rt2, doublereal *cs1, doublereal *sn1);
 
/* Subroutine */ int __cdecl DLAEXC(logical *wantq, integer *n, doublereal *t, 
	integer *ldt, doublereal *q, integer *ldq, integer *j1, integer *n1, 
	integer *n2, doublereal *work, integer *info);
 
/* Subroutine */ int __cdecl DLAG2(doublereal *a, integer *lda, doublereal *b, 
	integer *ldb, doublereal *safmin, doublereal *scale1, doublereal *
	scale2, doublereal *wr1, doublereal *wr2, doublereal *wi);
 
/* Subroutine */ int __cdecl DLAGS2(logical *upper, doublereal *a1, doublereal *a2, 
	doublereal *a3, doublereal *b1, doublereal *b2, doublereal *b3, 
	doublereal *csu, doublereal *snu, doublereal *csv, doublereal *snv, 
	doublereal *csq, doublereal *snq);
 
/* Subroutine */ int __cdecl DLAGTF(integer *n, doublereal *a, doublereal *lambda, 
	doublereal *b, doublereal *c__, doublereal *tol, doublereal *d__, 
	integer *in, integer *info);
 
/* Subroutine */ int __cdecl DLAGTM(char *trans, integer *n, integer *nrhs, 
	doublereal *alpha, doublereal *dl, doublereal *d__, doublereal *du, 
	doublereal *x, integer *ldx, doublereal *beta, doublereal *b, integer 
	*ldb);
 
/* Subroutine */ int __cdecl DLAGTS(integer *job, integer *n, doublereal *a, 
	doublereal *b, doublereal *c__, doublereal *d__, integer *in, 
	doublereal *y, doublereal *tol, integer *info);
 
/* Subroutine */ int __cdecl DLAGV2(doublereal *a, integer *lda, doublereal *b, 
	integer *ldb, doublereal *alphar, doublereal *alphai, doublereal *
	beta, doublereal *csl, doublereal *snl, doublereal *csr, doublereal *
	snr);
 
/* Subroutine */ int __cdecl DLAHQR(logical *wantt, logical *wantz, integer *n, 
	integer *ilo, integer *ihi, doublereal *h__, integer *ldh, doublereal 
	*wr, doublereal *wi, integer *iloz, integer *ihiz, doublereal *z__, 
	integer *ldz, integer *info);
 
/* Subroutine */ int __cdecl DLAHRD(integer *n, integer *k, integer *nb, doublereal *
	a, integer *lda, doublereal *tau, doublereal *t, integer *ldt, 
	doublereal *y, integer *ldy);
 
/* Subroutine */ int __cdecl DLAIC1(integer *job, integer *j, doublereal *x, 
	doublereal *sest, doublereal *w, doublereal *gamma, doublereal *
	sestpr, doublereal *s, doublereal *c__);
 
/* Subroutine */ int __cdecl DLALN2(logical *ltrans, integer *na, integer *nw, 
	doublereal *smin, doublereal *ca, doublereal *a, integer *lda, 
	doublereal *d1, doublereal *d2, doublereal *b, integer *ldb, 
	doublereal *wr, doublereal *wi, doublereal *x, integer *ldx, 
	doublereal *scale, doublereal *xnorm, integer *info);
 
/* Subroutine */ int __cdecl DLALS0(integer *icompq, integer *nl, integer *nr, 
	integer *sqre, integer *nrhs, doublereal *b, integer *ldb, doublereal 
	*bx, integer *ldbx, integer *perm, integer *givptr, integer *givcol, 
	integer *ldgcol, doublereal *givnum, integer *ldgnum, doublereal *
	poles, doublereal *difl, doublereal *difr, doublereal *z__, integer *
	k, doublereal *c__, doublereal *s, doublereal *work, integer *info);
 
/* Subroutine */ int __cdecl DLALSA(integer *icompq, integer *smlsiz, integer *n, 
	integer *nrhs, doublereal *b, integer *ldb, doublereal *bx, integer *
	ldbx, doublereal *u, integer *ldu, doublereal *vt, integer *k, 
	doublereal *difl, doublereal *difr, doublereal *z__, doublereal *
	poles, integer *givptr, integer *givcol, integer *ldgcol, integer *
	perm, doublereal *givnum, doublereal *c__, doublereal *s, doublereal *
	work, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl DLALSD(char *uplo, integer *smlsiz, integer *n, integer 
	*nrhs, doublereal *d__, doublereal *e, doublereal *b, integer *ldb, 
	doublereal *rcond, integer *rank, doublereal *work, integer *iwork, 
	integer *info);
 
/* Subroutine */ int __cdecl DLAMC1(integer *beta, integer *t, logical *rnd, logical 
	*ieee1);
 
/* Subroutine */ int __cdecl DLAMC2(integer *beta, integer *t, logical *rnd, 
	doublereal *eps, integer *emin, doublereal *rmin, integer *emax, 
	doublereal *rmax);
 
/* Subroutine */ int __cdecl DLAMC4(integer *emin, doublereal *start, integer *base);
 
/* Subroutine */ int __cdecl DLAMC5(integer *beta, integer *p, integer *emin, 
	logical *ieee, integer *emax, doublereal *rmax);
 
/* Subroutine */ int __cdecl DLAMRG(integer *n1, integer *n2, doublereal *a, integer 
	*dtrd1, integer *dtrd2, integer *index);
 
/* Subroutine */ int __cdecl DLANV2(doublereal *a, doublereal *b, doublereal *c__, 
	doublereal *d__, doublereal *rt1r, doublereal *rt1i, doublereal *rt2r,
	 doublereal *rt2i, doublereal *cs, doublereal *sn);
 
/* Subroutine */ int __cdecl DLAPLL(integer *n, doublereal *x, integer *incx, 
	doublereal *y, integer *incy, doublereal *ssmin);
 
/* Subroutine */ int __cdecl DLAPMT(logical *forwrd, integer *m, integer *n, 
	doublereal *x, integer *ldx, integer *k);
 
/* Subroutine */ int __cdecl DLAQGB(integer *m, integer *n, integer *kl, integer *ku,
	 doublereal *ab, integer *ldab, doublereal *r__, doublereal *c__, 
	doublereal *rowcnd, doublereal *colcnd, doublereal *amax, char *equed);
 
/* Subroutine */ int __cdecl DLAQGE(integer *m, integer *n, doublereal *a, integer *
	lda, doublereal *r__, doublereal *c__, doublereal *rowcnd, doublereal 
	*colcnd, doublereal *amax, char *equed);
 
/* Subroutine */ int __cdecl DLAQP2(integer *m, integer *n, integer *offset, 
	doublereal *a, integer *lda, integer *jpvt, doublereal *tau, 
	doublereal *vn1, doublereal *vn2, doublereal *work);
 
/* Subroutine */ int __cdecl DLAQPS(integer *m, integer *n, integer *offset, integer 
	*nb, integer *kb, doublereal *a, integer *lda, integer *jpvt, 
	doublereal *tau, doublereal *vn1, doublereal *vn2, doublereal *auxv, 
	doublereal *f, integer *ldf);
 
/* Subroutine */ int __cdecl DLAQSB(char *uplo, integer *n, integer *kd, doublereal *
	ab, integer *ldab, doublereal *s, doublereal *scond, doublereal *amax,
	 char *equed);
 
/* Subroutine */ int __cdecl DLAQSP(char *uplo, integer *n, doublereal *ap, 
	doublereal *s, doublereal *scond, doublereal *amax, char *equed);
 
/* Subroutine */ int __cdecl DLAQSY(char *uplo, integer *n, doublereal *a, integer *
	lda, doublereal *s, doublereal *scond, doublereal *amax, char *equed);
 
/* Subroutine */ int __cdecl DLAQTR(logical *ltran, logical *lreal, integer *n, 
	doublereal *t, integer *ldt, doublereal *b, doublereal *w, doublereal 
	*scale, doublereal *x, doublereal *work, integer *info);
 
/* Subroutine */ int __cdecl DLAR1V(integer *n, integer *b1, integer *bn, doublereal 
	*sigma, doublereal *d__, doublereal *l, doublereal *ld, doublereal *
	lld, doublereal *gersch, doublereal *z__, doublereal *ztz, doublereal 
	*mingma, integer *r__, integer *isuppz, doublereal *work);
 
/* Subroutine */ int __cdecl DLAR2V(integer *n, doublereal *x, doublereal *y, 
	doublereal *z__, integer *incx, doublereal *c__, doublereal *s, 
	integer *incc);
 
/* Subroutine */ int __cdecl DLARF(char *side, integer *m, integer *n, doublereal *v,
	 integer *incv, doublereal *tau, doublereal *c__, integer *ldc, 
	doublereal *work);
 
/* Subroutine */ int __cdecl DLARFB(char *side, char *trans, char *direct, char *
	storev, integer *m, integer *n, integer *k, doublereal *v, integer *
	ldv, doublereal *t, integer *ldt, doublereal *c__, integer *ldc, 
	doublereal *work, integer *ldwork);
 
/* Subroutine */ int __cdecl DLARFG(integer *n, doublereal *alpha, doublereal *x, 
	integer *incx, doublereal *tau);
 
/* Subroutine */ int __cdecl DLARFT(char *direct, char *storev, integer *n, integer *
	k, doublereal *v, integer *ldv, doublereal *tau, doublereal *t, 
	integer *ldt);
 
/* Subroutine */ int __cdecl DLARFX(char *side, integer *m, integer *n, doublereal *
	v, doublereal *tau, doublereal *c__, integer *ldc, doublereal *work);
 
/* Subroutine */ int __cdecl DLARGV(integer *n, doublereal *x, integer *incx, 
	doublereal *y, integer *incy, doublereal *c__, integer *incc);
 
/* Subroutine */ int __cdecl DLARNV(integer *idist, integer *iseed, integer *n, 
	doublereal *x);
 
/* Subroutine */ int __cdecl DLARRB(integer *n, doublereal *d__, doublereal *l, 
	doublereal *ld, doublereal *lld, integer *ifirst, integer *ilast, 
	doublereal *sigma, doublereal *reltol, doublereal *w, doublereal *
	wgap, doublereal *werr, doublereal *work, integer *iwork, integer *
	info);
 
/* Subroutine */ int __cdecl DLARRE(integer *n, doublereal *d__, doublereal *e, 
	doublereal *tol, integer *nsplit, integer *isplit, integer *m, 
	doublereal *w, doublereal *woff, doublereal *gersch, doublereal *work,
	 integer *info);
 
/* Subroutine */ int __cdecl DLARRF(integer *n, doublereal *d__, doublereal *l, 
	doublereal *ld, doublereal *lld, integer *ifirst, integer *ilast, 
	doublereal *w, doublereal *dplus, doublereal *lplus, doublereal *work,
	 integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl DLARRV(integer *n, doublereal *d__, doublereal *l, 
	integer *isplit, integer *m, doublereal *w, integer *iblock, 
	doublereal *gersch, doublereal *tol, doublereal *z__, integer *ldz, 
	integer *isuppz, doublereal *work, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl DLARTG(doublereal *f, doublereal *g, doublereal *cs, 
	doublereal *sn, doublereal *r__);
 
/* Subroutine */ int __cdecl DLARTV(integer *n, doublereal *x, integer *incx, 
	doublereal *y, integer *incy, doublereal *c__, doublereal *s, integer 
	*incc);
 
/* Subroutine */ int __cdecl DLARUV(integer *iseed, integer *n, doublereal *x);
 
/* Subroutine */ int __cdecl DLARZ(char *side, integer *m, integer *n, integer *l, 
	doublereal *v, integer *incv, doublereal *tau, doublereal *c__, 
	integer *ldc, doublereal *work);
 
/* Subroutine */ int __cdecl DLARZB(char *side, char *trans, char *direct, char *
	storev, integer *m, integer *n, integer *k, integer *l, doublereal *v,
	 integer *ldv, doublereal *t, integer *ldt, doublereal *c__, integer *
	ldc, doublereal *work, integer *ldwork);
 
/* Subroutine */ int __cdecl DLARZT(char *direct, char *storev, integer *n, integer *
	k, doublereal *v, integer *ldv, doublereal *tau, doublereal *t, 
	integer *ldt);
 
/* Subroutine */ int __cdecl DLAS2(doublereal *f, doublereal *g, doublereal *h__, 
	doublereal *ssmin, doublereal *ssmax);
 
/* Subroutine */ int __cdecl DLASCL(char *type__, integer *kl, integer *ku, 
	doublereal *cfrom, doublereal *cto, integer *m, integer *n, 
	doublereal *a, integer *lda, integer *info);
 
/* Subroutine */ int __cdecl DLASD0(integer *n, integer *sqre, doublereal *d__, 
	doublereal *e, doublereal *u, integer *ldu, doublereal *vt, integer *
	ldvt, integer *smlsiz, integer *iwork, doublereal *work, integer *
	info);
 
/* Subroutine */ int __cdecl DLASD1(integer *nl, integer *nr, integer *sqre, 
	doublereal *d__, doublereal *alpha, doublereal *beta, doublereal *u, 
	integer *ldu, doublereal *vt, integer *ldvt, integer *idxq, integer *
	iwork, doublereal *work, integer *info);
 
/* Subroutine */ int __cdecl DLASD2(integer *nl, integer *nr, integer *sqre, integer 
	*k, doublereal *d__, doublereal *z__, doublereal *alpha, doublereal *
	beta, doublereal *u, integer *ldu, doublereal *vt, integer *ldvt, 
	doublereal *dsigma, doublereal *u2, integer *ldu2, doublereal *vt2, 
	integer *ldvt2, integer *idxp, integer *idx, integer *idxc, integer *
	idxq, integer *coltyp, integer *info);
 
/* Subroutine */ int __cdecl DLASD3(integer *nl, integer *nr, integer *sqre, integer 
	*k, doublereal *d__, doublereal *q, integer *ldq, doublereal *dsigma, 
	doublereal *u, integer *ldu, doublereal *u2, integer *ldu2, 
	doublereal *vt, integer *ldvt, doublereal *vt2, integer *ldvt2, 
	integer *idxc, integer *ctot, doublereal *z__, integer *info);
 
/* Subroutine */ int __cdecl DLASD4(integer *n, integer *i__, doublereal *d__, 
	doublereal *z__, doublereal *delta, doublereal *rho, doublereal *
	sigma, doublereal *work, integer *info);
 
/* Subroutine */ int __cdecl DLASD5(integer *i__, doublereal *d__, doublereal *z__, 
	doublereal *delta, doublereal *rho, doublereal *dsigma, doublereal *
	work);
 
/* Subroutine */ int __cdecl DLASD6(integer *icompq, integer *nl, integer *nr, 
	integer *sqre, doublereal *d__, doublereal *vf, doublereal *vl, 
	doublereal *alpha, doublereal *beta, integer *idxq, integer *perm, 
	integer *givptr, integer *givcol, integer *ldgcol, doublereal *givnum,
	 integer *ldgnum, doublereal *poles, doublereal *difl, doublereal *
	difr, doublereal *z__, integer *k, doublereal *c__, doublereal *s, 
	doublereal *work, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl DLASD7(integer *icompq, integer *nl, integer *nr, 
	integer *sqre, integer *k, doublereal *d__, doublereal *z__, 
	doublereal *zw, doublereal *vf, doublereal *vfw, doublereal *vl, 
	doublereal *vlw, doublereal *alpha, doublereal *beta, doublereal *
	dsigma, integer *idx, integer *idxp, integer *idxq, integer *perm, 
	integer *givptr, integer *givcol, integer *ldgcol, doublereal *givnum,
	 integer *ldgnum, doublereal *c__, doublereal *s, integer *info);
 
/* Subroutine */ int __cdecl DLASD8(integer *icompq, integer *k, doublereal *d__, 
	doublereal *z__, doublereal *vf, doublereal *vl, doublereal *difl, 
	doublereal *difr, integer *lddifr, doublereal *dsigma, doublereal *
	work, integer *info);
 
/* Subroutine */ int __cdecl DLASD9(integer *icompq, integer *ldu, integer *k, 
	doublereal *d__, doublereal *z__, doublereal *vf, doublereal *vl, 
	doublereal *difl, doublereal *difr, doublereal *dsigma, doublereal *
	work, integer *info);
 
/* Subroutine */ int __cdecl DLASDA(integer *icompq, integer *smlsiz, integer *n, 
	integer *sqre, doublereal *d__, doublereal *e, doublereal *u, integer 
	*ldu, doublereal *vt, integer *k, doublereal *difl, doublereal *difr, 
	doublereal *z__, doublereal *poles, integer *givptr, integer *givcol, 
	integer *ldgcol, integer *perm, doublereal *givnum, doublereal *c__, 
	doublereal *s, doublereal *work, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl DLASDQ(char *uplo, integer *sqre, integer *n, integer *
	ncvt, integer *nru, integer *ncc, doublereal *d__, doublereal *e, 
	doublereal *vt, integer *ldvt, doublereal *u, integer *ldu, 
	doublereal *c__, integer *ldc, doublereal *work, integer *info);
 
/* Subroutine */ int __cdecl DLASDT(integer *n, integer *lvl, integer *nd, integer *
	inode, integer *ndiml, integer *ndimr, integer *msub);
 
/* Subroutine */ int __cdecl DLASET(char *uplo, integer *m, integer *n, doublereal *
	alpha, doublereal *beta, doublereal *a, integer *lda);
 
/* Subroutine */ int __cdecl DLASQ1(integer *n, doublereal *d__, doublereal *e, 
	doublereal *work, integer *info);
 
/* Subroutine */ int __cdecl DLASQ2(integer *n, doublereal *z__, integer *info);
 
/* Subroutine */ int __cdecl DLASQ3(integer *i0, integer *n0, doublereal *z__, 
	integer *pp, doublereal *dmin__, doublereal *sigma, doublereal *desig,
	 doublereal *qmax, integer *nfail, integer *iter, integer *ndiv, 
	logical *ieee);
 
/* Subroutine */ int __cdecl DLASQ4(integer *i0, integer *n0, doublereal *z__, 
	integer *pp, integer *n0in, doublereal *dmin__, doublereal *dmin1, 
	doublereal *dmin2, doublereal *dn, doublereal *dn1, doublereal *dn2, 
	doublereal *tau, integer *ttype);
 
/* Subroutine */ int __cdecl DLASQ5(integer *i0, integer *n0, doublereal *z__, 
	integer *pp, doublereal *tau, doublereal *dmin__, doublereal *dmin1, 
	doublereal *dmin2, doublereal *dn, doublereal *dnm1, doublereal *dnm2,
	 logical *ieee);
 
/* Subroutine */ int __cdecl DLASQ6(integer *i0, integer *n0, doublereal *z__, 
	integer *pp, doublereal *dmin__, doublereal *dmin1, doublereal *dmin2,
	 doublereal *dn, doublereal *dnm1, doublereal *dnm2);
 
/* Subroutine */ int __cdecl DLASR(char *side, char *pivot, char *direct, integer *m,
	 integer *n, doublereal *c__, doublereal *s, doublereal *a, integer *
	lda);
 
/* Subroutine */ int __cdecl DLASRT(char *id, integer *n, doublereal *d__, integer *
	info);
 
/* Subroutine */ int __cdecl DLASSQ(integer *n, doublereal *x, integer *incx, 
	doublereal *scale, doublereal *sumsq);
 
/* Subroutine */ int __cdecl DLASV2(doublereal *f, doublereal *g, doublereal *h__, 
	doublereal *ssmin, doublereal *ssmax, doublereal *snr, doublereal *
	csr, doublereal *snl, doublereal *csl);
 
/* Subroutine */ int __cdecl DLASWP(integer *n, doublereal *a, integer *lda, integer 
	*k1, integer *k2, integer *ipiv, integer *incx);
 
/* Subroutine */ int __cdecl DLASY2(logical *ltranl, logical *ltranr, integer *isgn, 
	integer *n1, integer *n2, doublereal *tl, integer *ldtl, doublereal *
	tr, integer *ldtr, doublereal *b, integer *ldb, doublereal *scale, 
	doublereal *x, integer *ldx, doublereal *xnorm, integer *info);
 
/* Subroutine */ int __cdecl DLASYF(char *uplo, integer *n, integer *nb, integer *kb,
	 doublereal *a, integer *lda, integer *ipiv, doublereal *w, integer *
	ldw, integer *info);
 
/* Subroutine */ int __cdecl DLATBS(char *uplo, char *trans, char *diag, char *
	normin, integer *n, integer *kd, doublereal *ab, integer *ldab, 
	doublereal *x, doublereal *scale, doublereal *cnorm, integer *info);
 
/* Subroutine */ int __cdecl DLATDF(integer *ijob, integer *n, doublereal *z__, 
	integer *ldz, doublereal *rhs, doublereal *rdsum, doublereal *rdscal, 
	integer *ipiv, integer *jpiv);
 
/* Subroutine */ int __cdecl DLATPS(char *uplo, char *trans, char *diag, char *
	normin, integer *n, doublereal *ap, doublereal *x, doublereal *scale, 
	doublereal *cnorm, integer *info);
 
/* Subroutine */ int __cdecl DLATRD(char *uplo, integer *n, integer *nb, doublereal *
	a, integer *lda, doublereal *e, doublereal *tau, doublereal *w, 
	integer *ldw);
 
/* Subroutine */ int __cdecl DLATRS(char *uplo, char *trans, char *diag, char *
	normin, integer *n, doublereal *a, integer *lda, doublereal *x, 
	doublereal *scale, doublereal *cnorm, integer *info);
 
/* Subroutine */ int __cdecl DLATRZ(integer *m, integer *n, integer *l, doublereal *
	a, integer *lda, doublereal *tau, doublereal *work);
 
/* Subroutine */ int __cdecl DLATZM(char *side, integer *m, integer *n, doublereal *
	v, integer *incv, doublereal *tau, doublereal *c1, doublereal *c2, 
	integer *ldc, doublereal *work);
 
/* Subroutine */ int __cdecl DLAUU2(char *uplo, integer *n, doublereal *a, integer *
	lda, integer *info);
 
/* Subroutine */ int __cdecl DLAUUM(char *uplo, integer *n, doublereal *a, integer *
	lda, integer *info);
 
/* Subroutine */ int __cdecl DOPGTR(char *uplo, integer *n, doublereal *ap, 
	doublereal *tau, doublereal *q, integer *ldq, doublereal *work, 
	integer *info);
 
/* Subroutine */ int __cdecl DOPMTR(char *side, char *uplo, char *trans, integer *m, 
	integer *n, doublereal *ap, doublereal *tau, doublereal *c__, integer 
	*ldc, doublereal *work, integer *info);
 
/* Subroutine */ int __cdecl DORG2L(integer *m, integer *n, integer *k, doublereal *
	a, integer *lda, doublereal *tau, doublereal *work, integer *info);
 
/* Subroutine */ int __cdecl DORG2R(integer *m, integer *n, integer *k, doublereal *
	a, integer *lda, doublereal *tau, doublereal *work, integer *info);
 
/* Subroutine */ int __cdecl DORGBR(char *vect, integer *m, integer *n, integer *k, 
	doublereal *a, integer *lda, doublereal *tau, doublereal *work, 
	integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl DORGHR(integer *n, integer *ilo, integer *ihi, 
	doublereal *a, integer *lda, doublereal *tau, doublereal *work, 
	integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl DORGL2(integer *m, integer *n, integer *k, doublereal *
	a, integer *lda, doublereal *tau, doublereal *work, integer *info);
 
/* Subroutine */ int __cdecl DORGLQ(integer *m, integer *n, integer *k, doublereal *
	a, integer *lda, doublereal *tau, doublereal *work, integer *lwork, 
	integer *info);
 
/* Subroutine */ int __cdecl DORGQL(integer *m, integer *n, integer *k, doublereal *
	a, integer *lda, doublereal *tau, doublereal *work, integer *lwork, 
	integer *info);
 
/* Subroutine */ int __cdecl DORGQR(integer *m, integer *n, integer *k, doublereal *
	a, integer *lda, doublereal *tau, doublereal *work, integer *lwork, 
	integer *info);
 
/* Subroutine */ int __cdecl DORGR2(integer *m, integer *n, integer *k, doublereal *
	a, integer *lda, doublereal *tau, doublereal *work, integer *info);
 
/* Subroutine */ int __cdecl DORGRQ(integer *m, integer *n, integer *k, doublereal *
	a, integer *lda, doublereal *tau, doublereal *work, integer *lwork, 
	integer *info);
 
/* Subroutine */ int __cdecl DORGTR(char *uplo, integer *n, doublereal *a, integer *
	lda, doublereal *tau, doublereal *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl DORM2L(char *side, char *trans, integer *m, integer *n, 
	integer *k, doublereal *a, integer *lda, doublereal *tau, doublereal *
	c__, integer *ldc, doublereal *work, integer *info);
 
/* Subroutine */ int __cdecl DORM2R(char *side, char *trans, integer *m, integer *n, 
	integer *k, doublereal *a, integer *lda, doublereal *tau, doublereal *
	c__, integer *ldc, doublereal *work, integer *info);
 
/* Subroutine */ int __cdecl DORMBR(char *vect, char *side, char *trans, integer *m, 
	integer *n, integer *k, doublereal *a, integer *lda, doublereal *tau, 
	doublereal *c__, integer *ldc, doublereal *work, integer *lwork, 
	integer *info);
 
/* Subroutine */ int __cdecl DORMHR(char *side, char *trans, integer *m, integer *n, 
	integer *ilo, integer *ihi, doublereal *a, integer *lda, doublereal *
	tau, doublereal *c__, integer *ldc, doublereal *work, integer *lwork, 
	integer *info);
 
/* Subroutine */ int __cdecl DORML2(char *side, char *trans, integer *m, integer *n, 
	integer *k, doublereal *a, integer *lda, doublereal *tau, doublereal *
	c__, integer *ldc, doublereal *work, integer *info);
 
/* Subroutine */ int __cdecl DORMLQ(char *side, char *trans, integer *m, integer *n, 
	integer *k, doublereal *a, integer *lda, doublereal *tau, doublereal *
	c__, integer *ldc, doublereal *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl DORMQL(char *side, char *trans, integer *m, integer *n, 
	integer *k, doublereal *a, integer *lda, doublereal *tau, doublereal *
	c__, integer *ldc, doublereal *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl DORMQR(char *side, char *trans, integer *m, integer *n, 
	integer *k, doublereal *a, integer *lda, doublereal *tau, doublereal *
	c__, integer *ldc, doublereal *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl DORMR2(char *side, char *trans, integer *m, integer *n, 
	integer *k, doublereal *a, integer *lda, doublereal *tau, doublereal *
	c__, integer *ldc, doublereal *work, integer *info);
 
/* Subroutine */ int __cdecl DORMR3(char *side, char *trans, integer *m, integer *n, 
	integer *k, integer *l, doublereal *a, integer *lda, doublereal *tau, 
	doublereal *c__, integer *ldc, doublereal *work, integer *info);
 
/* Subroutine */ int __cdecl DORMRQ(char *side, char *trans, integer *m, integer *n, 
	integer *k, doublereal *a, integer *lda, doublereal *tau, doublereal *
	c__, integer *ldc, doublereal *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl DORMRZ(char *side, char *trans, integer *m, integer *n, 
	integer *k, integer *l, doublereal *a, integer *lda, doublereal *tau, 
	doublereal *c__, integer *ldc, doublereal *work, integer *lwork, 
	integer *info);
 
/* Subroutine */ int __cdecl DORMTR(char *side, char *uplo, char *trans, integer *m, 
	integer *n, doublereal *a, integer *lda, doublereal *tau, doublereal *
	c__, integer *ldc, doublereal *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl DPBCON(char *uplo, integer *n, integer *kd, doublereal *
	ab, integer *ldab, doublereal *anorm, doublereal *rcond, doublereal *
	work, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl DPBEQU(char *uplo, integer *n, integer *kd, doublereal *
	ab, integer *ldab, doublereal *s, doublereal *scond, doublereal *amax,
	 integer *info);
 
/* Subroutine */ int __cdecl DPBRFS(char *uplo, integer *n, integer *kd, integer *
	nrhs, doublereal *ab, integer *ldab, doublereal *afb, integer *ldafb, 
	doublereal *b, integer *ldb, doublereal *x, integer *ldx, doublereal *
	ferr, doublereal *berr, doublereal *work, integer *iwork, integer *
	info);
 
/* Subroutine */ int __cdecl DPBSTF(char *uplo, integer *n, integer *kd, doublereal *
	ab, integer *ldab, integer *info);
 
/* Subroutine */ int __cdecl DPBSV(char *uplo, integer *n, integer *kd, integer *
	nrhs, doublereal *ab, integer *ldab, doublereal *b, integer *ldb, 
	integer *info);
 
/* Subroutine */ int __cdecl DPBSVX(char *fact, char *uplo, integer *n, integer *kd, 
	integer *nrhs, doublereal *ab, integer *ldab, doublereal *afb, 
	integer *ldafb, char *equed, doublereal *s, doublereal *b, integer *
	ldb, doublereal *x, integer *ldx, doublereal *rcond, doublereal *ferr,
	 doublereal *berr, doublereal *work, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl DPBTF2(char *uplo, integer *n, integer *kd, doublereal *
	ab, integer *ldab, integer *info);
 
/* Subroutine */ int __cdecl DPBTRF(char *uplo, integer *n, integer *kd, doublereal *
	ab, integer *ldab, integer *info);
 
/* Subroutine */ int __cdecl DPBTRS(char *uplo, integer *n, integer *kd, integer *
	nrhs, doublereal *ab, integer *ldab, doublereal *b, integer *ldb, 
	integer *info);
 
/* Subroutine */ int __cdecl DPOCON(char *uplo, integer *n, doublereal *a, integer *
	lda, doublereal *anorm, doublereal *rcond, doublereal *work, integer *
	iwork, integer *info);
 
/* Subroutine */ int __cdecl DPOEQU(integer *n, doublereal *a, integer *lda, 
	doublereal *s, doublereal *scond, doublereal *amax, integer *info);
 
/* Subroutine */ int __cdecl DPORFS(char *uplo, integer *n, integer *nrhs, 
	doublereal *a, integer *lda, doublereal *af, integer *ldaf, 
	doublereal *b, integer *ldb, doublereal *x, integer *ldx, doublereal *
	ferr, doublereal *berr, doublereal *work, integer *iwork, integer *
	info);
 
/* Subroutine */ int __cdecl DPOSV(char *uplo, integer *n, integer *nrhs, doublereal 
	*a, integer *lda, doublereal *b, integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl DPOSVX(char *fact, char *uplo, integer *n, integer *
	nrhs, doublereal *a, integer *lda, doublereal *af, integer *ldaf, 
	char *equed, doublereal *s, doublereal *b, integer *ldb, doublereal *
	x, integer *ldx, doublereal *rcond, doublereal *ferr, doublereal *
	berr, doublereal *work, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl DPOTF2(char *uplo, integer *n, doublereal *a, integer *
	lda, integer *info);
 
/* Subroutine */ int __cdecl DPOTRF(char *uplo, integer *n, doublereal *a, integer *
	lda, integer *info);
 
/* Subroutine */ int __cdecl DPOTRI(char *uplo, integer *n, doublereal *a, integer *
	lda, integer *info);
 
/* Subroutine */ int __cdecl DPOTRS(char *uplo, integer *n, integer *nrhs, 
	doublereal *a, integer *lda, doublereal *b, integer *ldb, integer *
	info);
 
/* Subroutine */ int __cdecl DPPCON(char *uplo, integer *n, doublereal *ap, 
	doublereal *anorm, doublereal *rcond, doublereal *work, integer *
	iwork, integer *info);
 
/* Subroutine */ int __cdecl DPPEQU(char *uplo, integer *n, doublereal *ap, 
	doublereal *s, doublereal *scond, doublereal *amax, integer *info);
 
/* Subroutine */ int __cdecl DPPRFS(char *uplo, integer *n, integer *nrhs, 
	doublereal *ap, doublereal *afp, doublereal *b, integer *ldb, 
	doublereal *x, integer *ldx, doublereal *ferr, doublereal *berr, 
	doublereal *work, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl DPPSV(char *uplo, integer *n, integer *nrhs, doublereal 
	*ap, doublereal *b, integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl DPPSVX(char *fact, char *uplo, integer *n, integer *
	nrhs, doublereal *ap, doublereal *afp, char *equed, doublereal *s, 
	doublereal *b, integer *ldb, doublereal *x, integer *ldx, doublereal *
	rcond, doublereal *ferr, doublereal *berr, doublereal *work, integer *
	iwork, integer *info);
 
/* Subroutine */ int __cdecl DPPTRF(char *uplo, integer *n, doublereal *ap, integer *
	info);
 
/* Subroutine */ int __cdecl DPPTRI(char *uplo, integer *n, doublereal *ap, integer *
	info);
 
/* Subroutine */ int __cdecl DPPTRS(char *uplo, integer *n, integer *nrhs, 
	doublereal *ap, doublereal *b, integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl DPTCON(integer *n, doublereal *d__, doublereal *e, 
	doublereal *anorm, doublereal *rcond, doublereal *work, integer *info);
 
/* Subroutine */ int __cdecl DPTEQR(char *compz, integer *n, doublereal *d__, 
	doublereal *e, doublereal *z__, integer *ldz, doublereal *work, 
	integer *info);
 
/* Subroutine */ int __cdecl DPTRFS(integer *n, integer *nrhs, doublereal *d__, 
	doublereal *e, doublereal *df, doublereal *ef, doublereal *b, integer 
	*ldb, doublereal *x, integer *ldx, doublereal *ferr, doublereal *berr,
	 doublereal *work, integer *info);
 
/* Subroutine */ int __cdecl DPTSV(integer *n, integer *nrhs, doublereal *d__, 
	doublereal *e, doublereal *b, integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl DPTSVX(char *fact, integer *n, integer *nrhs, 
	doublereal *d__, doublereal *e, doublereal *df, doublereal *ef, 
	doublereal *b, integer *ldb, doublereal *x, integer *ldx, doublereal *
	rcond, doublereal *ferr, doublereal *berr, doublereal *work, integer *
	info);
 
/* Subroutine */ int __cdecl DPTTRF(integer *n, doublereal *d__, doublereal *e, 
	integer *info);
 
/* Subroutine */ int __cdecl DPTTRS(integer *n, integer *nrhs, doublereal *d__, 
	doublereal *e, doublereal *b, integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl DPTTS2(integer *n, integer *nrhs, doublereal *d__, 
	doublereal *e, doublereal *b, integer *ldb);
 
/* Subroutine */ int __cdecl DRSCL(integer *n, doublereal *sa, doublereal *sx, 
	integer *incx);
 
/* Subroutine */ int __cdecl DSBEV(char *jobz, char *uplo, integer *n, integer *kd, 
	doublereal *ab, integer *ldab, doublereal *w, doublereal *z__, 
	integer *ldz, doublereal *work, integer *info);
 
/* Subroutine */ int __cdecl DSBEVD(char *jobz, char *uplo, integer *n, integer *kd, 
	doublereal *ab, integer *ldab, doublereal *w, doublereal *z__, 
	integer *ldz, doublereal *work, integer *lwork, integer *iwork, 
	integer *liwork, integer *info);
 
/* Subroutine */ int __cdecl DSBEVX(char *jobz, char *range, char *uplo, integer *n, 
	integer *kd, doublereal *ab, integer *ldab, doublereal *q, integer *
	ldq, doublereal *vl, doublereal *vu, integer *il, integer *iu, 
	doublereal *abstol, integer *m, doublereal *w, doublereal *z__, 
	integer *ldz, doublereal *work, integer *iwork, integer *ifail, 
	integer *info);
 
/* Subroutine */ int __cdecl DSBGST(char *vect, char *uplo, integer *n, integer *ka, 
	integer *kb, doublereal *ab, integer *ldab, doublereal *bb, integer *
	ldbb, doublereal *x, integer *ldx, doublereal *work, integer *info);
 
/* Subroutine */ int __cdecl DSBGV(char *jobz, char *uplo, integer *n, integer *ka, 
	integer *kb, doublereal *ab, integer *ldab, doublereal *bb, integer *
	ldbb, doublereal *w, doublereal *z__, integer *ldz, doublereal *work, 
	integer *info);
 
/* Subroutine */ int __cdecl DSBGVD(char *jobz, char *uplo, integer *n, integer *ka, 
	integer *kb, doublereal *ab, integer *ldab, doublereal *bb, integer *
	ldbb, doublereal *w, doublereal *z__, integer *ldz, doublereal *work, 
	integer *lwork, integer *iwork, integer *liwork, integer *info);
 
/* Subroutine */ int __cdecl DSBGVX(char *jobz, char *range, char *uplo, integer *n, 
	integer *ka, integer *kb, doublereal *ab, integer *ldab, doublereal *
	bb, integer *ldbb, doublereal *q, integer *ldq, doublereal *vl, 
	doublereal *vu, integer *il, integer *iu, doublereal *abstol, integer 
	*m, doublereal *w, doublereal *z__, integer *ldz, doublereal *work, 
	integer *iwork, integer *ifail, integer *info);
 
/* Subroutine */ int __cdecl DSBTRD(char *vect, char *uplo, integer *n, integer *kd, 
	doublereal *ab, integer *ldab, doublereal *d__, doublereal *e, 
	doublereal *q, integer *ldq, doublereal *work, integer *info);
 
/* Subroutine */ int __cdecl DSPCON(char *uplo, integer *n, doublereal *ap, integer *
	ipiv, doublereal *anorm, doublereal *rcond, doublereal *work, integer 
	*iwork, integer *info);
 
/* Subroutine */ int __cdecl DSPEV(char *jobz, char *uplo, integer *n, doublereal *
	ap, doublereal *w, doublereal *z__, integer *ldz, doublereal *work, 
	integer *info);
 
/* Subroutine */ int __cdecl DSPEVD(char *jobz, char *uplo, integer *n, doublereal *
	ap, doublereal *w, doublereal *z__, integer *ldz, doublereal *work, 
	integer *lwork, integer *iwork, integer *liwork, integer *info);
 
/* Subroutine */ int __cdecl DSPEVX(char *jobz, char *range, char *uplo, integer *n, 
	doublereal *ap, doublereal *vl, doublereal *vu, integer *il, integer *
	iu, doublereal *abstol, integer *m, doublereal *w, doublereal *z__, 
	integer *ldz, doublereal *work, integer *iwork, integer *ifail, 
	integer *info);
 
/* Subroutine */ int __cdecl DSPGST(integer *itype, char *uplo, integer *n, 
	doublereal *ap, doublereal *bp, integer *info);
 
/* Subroutine */ int __cdecl DSPGV(integer *itype, char *jobz, char *uplo, integer *
	n, doublereal *ap, doublereal *bp, doublereal *w, doublereal *z__, 
	integer *ldz, doublereal *work, integer *info);
 
/* Subroutine */ int __cdecl DSPGVD(integer *itype, char *jobz, char *uplo, integer *
	n, doublereal *ap, doublereal *bp, doublereal *w, doublereal *z__, 
	integer *ldz, doublereal *work, integer *lwork, integer *iwork, 
	integer *liwork, integer *info);
 
/* Subroutine */ int __cdecl DSPGVX(integer *itype, char *jobz, char *range, char *
	uplo, integer *n, doublereal *ap, doublereal *bp, doublereal *vl, 
	doublereal *vu, integer *il, integer *iu, doublereal *abstol, integer 
	*m, doublereal *w, doublereal *z__, integer *ldz, doublereal *work, 
	integer *iwork, integer *ifail, integer *info);
 
/* Subroutine */ int __cdecl DSPRFS(char *uplo, integer *n, integer *nrhs, 
	doublereal *ap, doublereal *afp, integer *ipiv, doublereal *b, 
	integer *ldb, doublereal *x, integer *ldx, doublereal *ferr, 
	doublereal *berr, doublereal *work, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl DSPSV(char *uplo, integer *n, integer *nrhs, doublereal 
	*ap, integer *ipiv, doublereal *b, integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl DSPSVX(char *fact, char *uplo, integer *n, integer *
	nrhs, doublereal *ap, doublereal *afp, integer *ipiv, doublereal *b, 
	integer *ldb, doublereal *x, integer *ldx, doublereal *rcond, 
	doublereal *ferr, doublereal *berr, doublereal *work, integer *iwork, 
	integer *info);
 
/* Subroutine */ int __cdecl DSPTRD(char *uplo, integer *n, doublereal *ap, 
	doublereal *d__, doublereal *e, doublereal *tau, integer *info);
 
/* Subroutine */ int __cdecl DSPTRF(char *uplo, integer *n, doublereal *ap, integer *
	ipiv, integer *info);
 
/* Subroutine */ int __cdecl DSPTRI(char *uplo, integer *n, doublereal *ap, integer *
	ipiv, doublereal *work, integer *info);
 
/* Subroutine */ int __cdecl DSPTRS(char *uplo, integer *n, integer *nrhs, 
	doublereal *ap, integer *ipiv, doublereal *b, integer *ldb, integer *
	info);
 
/* Subroutine */ int __cdecl DSTEBZ(char *range, char *order, integer *n, doublereal 
	*vl, doublereal *vu, integer *il, integer *iu, doublereal *abstol, 
	doublereal *d__, doublereal *e, integer *m, integer *nsplit, 
	doublereal *w, integer *iblock, integer *isplit, doublereal *work, 
	integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl DSTEDC(char *compz, integer *n, doublereal *d__, 
	doublereal *e, doublereal *z__, integer *ldz, doublereal *work, 
	integer *lwork, integer *iwork, integer *liwork, integer *info);
 
/* Subroutine */ int __cdecl DSTEGR(char *jobz, char *range, integer *n, doublereal *
	d__, doublereal *e, doublereal *vl, doublereal *vu, integer *il, 
	integer *iu, doublereal *abstol, integer *m, doublereal *w, 
	doublereal *z__, integer *ldz, integer *isuppz, doublereal *work, 
	integer *lwork, integer *iwork, integer *liwork, integer *info);
 
/* Subroutine */ int __cdecl DSTEIN(integer *n, doublereal *d__, doublereal *e, 
	integer *m, doublereal *w, integer *iblock, integer *isplit, 
	doublereal *z__, integer *ldz, doublereal *work, integer *iwork, 
	integer *ifail, integer *info);
 
/* Subroutine */ int __cdecl DSTEQR(char *compz, integer *n, doublereal *d__, 
	doublereal *e, doublereal *z__, integer *ldz, doublereal *work, 
	integer *info);
 
/* Subroutine */ int __cdecl DSTERF(integer *n, doublereal *d__, doublereal *e, 
	integer *info);
 
/* Subroutine */ int __cdecl DSTEV(char *jobz, integer *n, doublereal *d__, 
	doublereal *e, doublereal *z__, integer *ldz, doublereal *work, 
	integer *info);
 
/* Subroutine */ int __cdecl DSTEVD(char *jobz, integer *n, doublereal *d__, 
	doublereal *e, doublereal *z__, integer *ldz, doublereal *work, 
	integer *lwork, integer *iwork, integer *liwork, integer *info);
 
/* Subroutine */ int __cdecl DSTEVR(char *jobz, char *range, integer *n, doublereal *
	d__, doublereal *e, doublereal *vl, doublereal *vu, integer *il, 
	integer *iu, doublereal *abstol, integer *m, doublereal *w, 
	doublereal *z__, integer *ldz, integer *isuppz, doublereal *work, 
	integer *lwork, integer *iwork, integer *liwork, integer *info);
 
/* Subroutine */ int __cdecl DSTEVX(char *jobz, char *range, integer *n, doublereal *
	d__, doublereal *e, doublereal *vl, doublereal *vu, integer *il, 
	integer *iu, doublereal *abstol, integer *m, doublereal *w, 
	doublereal *z__, integer *ldz, doublereal *work, integer *iwork, 
	integer *ifail, integer *info);
 
/* Subroutine */ int __cdecl DSYCON(char *uplo, integer *n, doublereal *a, integer *
	lda, integer *ipiv, doublereal *anorm, doublereal *rcond, doublereal *
	work, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl DSYEV(char *jobz, char *uplo, integer *n, doublereal *a,
	 integer *lda, doublereal *w, doublereal *work, integer *lwork, 
	integer *info);
 
	 /* Subroutine */int dsyevd_(char *jobz, char *uplo, integer *n, doublereal *
	a, integer *lda, doublereal *w, doublereal *work, integer *lwork, 
		integer *iwork, integer *liwork, integer *info);
 
/* Subroutine */ int __cdecl DSYEVR(char *jobz, char *range, char *uplo, integer *n, 
	doublereal *a, integer *lda, doublereal *vl, doublereal *vu, integer *
	il, integer *iu, doublereal *abstol, integer *m, doublereal *w, 
	doublereal *z__, integer *ldz, integer *isuppz, doublereal *work, 
	integer *lwork, integer *iwork, integer *liwork, integer *info);
 
/* Subroutine */ int __cdecl DSYEVX(char *jobz, char *range, char *uplo, integer *n, 
	doublereal *a, integer *lda, doublereal *vl, doublereal *vu, integer *
	il, integer *iu, doublereal *abstol, integer *m, doublereal *w, 
	doublereal *z__, integer *ldz, doublereal *work, integer *lwork, 
	integer *iwork, integer *ifail, integer *info);
 
/* Subroutine */ int __cdecl DSYGS2(integer *itype, char *uplo, integer *n, 
	doublereal *a, integer *lda, doublereal *b, integer *ldb, integer *
	info);
 
/* Subroutine */ int __cdecl DSYGST(integer *itype, char *uplo, integer *n, 
	doublereal *a, integer *lda, doublereal *b, integer *ldb, integer *
	info);
 
/* Subroutine */ int __cdecl DSYGV(integer *itype, char *jobz, char *uplo, integer *
	n, doublereal *a, integer *lda, doublereal *b, integer *ldb, 
	doublereal *w, doublereal *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl DSYGVD(integer *itype, char *jobz, char *uplo, integer *
	n, doublereal *a, integer *lda, doublereal *b, integer *ldb, 
	doublereal *w, doublereal *work, integer *lwork, integer *iwork, 
	integer *liwork, integer *info);
 
/* Subroutine */ int __cdecl DSYGVX(integer *itype, char *jobz, char *range, char *
	uplo, integer *n, doublereal *a, integer *lda, doublereal *b, integer 
	*ldb, doublereal *vl, doublereal *vu, integer *il, integer *iu, 
	doublereal *abstol, integer *m, doublereal *w, doublereal *z__, 
	integer *ldz, doublereal *work, integer *lwork, integer *iwork, 
	integer *ifail, integer *info);
 
/* Subroutine */ int __cdecl DSYRFS(char *uplo, integer *n, integer *nrhs, 
	doublereal *a, integer *lda, doublereal *af, integer *ldaf, integer *
	ipiv, doublereal *b, integer *ldb, doublereal *x, integer *ldx, 
	doublereal *ferr, doublereal *berr, doublereal *work, integer *iwork, 
	integer *info);
 
/* Subroutine */ int __cdecl DSYSV(char *uplo, integer *n, integer *nrhs, doublereal 
	*a, integer *lda, integer *ipiv, doublereal *b, integer *ldb, 
	doublereal *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl DSYSVX(char *fact, char *uplo, integer *n, integer *
	nrhs, doublereal *a, integer *lda, doublereal *af, integer *ldaf, 
	integer *ipiv, doublereal *b, integer *ldb, doublereal *x, integer *
	ldx, doublereal *rcond, doublereal *ferr, doublereal *berr, 
	doublereal *work, integer *lwork, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl DSYTD2(char *uplo, integer *n, doublereal *a, integer *
	lda, doublereal *d__, doublereal *e, doublereal *tau, integer *info);
 
/* Subroutine */ int __cdecl DSYTF2(char *uplo, integer *n, doublereal *a, integer *
	lda, integer *ipiv, integer *info);
 
/* Subroutine */ int __cdecl DSYTRD(char *uplo, integer *n, doublereal *a, integer *
	lda, doublereal *d__, doublereal *e, doublereal *tau, doublereal *
	work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl DSYTRF(char *uplo, integer *n, doublereal *a, integer *
	lda, integer *ipiv, doublereal *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl DSYTRI(char *uplo, integer *n, doublereal *a, integer *
	lda, integer *ipiv, doublereal *work, integer *info);
 
/* Subroutine */ int __cdecl DSYTRS(char *uplo, integer *n, integer *nrhs, 
	doublereal *a, integer *lda, integer *ipiv, doublereal *b, integer *
	ldb, integer *info);
 
/* Subroutine */ int __cdecl DTBCON(char *norm, char *uplo, char *diag, integer *n, 
	integer *kd, doublereal *ab, integer *ldab, doublereal *rcond, 
	doublereal *work, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl DTBRFS(char *uplo, char *trans, char *diag, integer *n, 
	integer *kd, integer *nrhs, doublereal *ab, integer *ldab, doublereal 
	*b, integer *ldb, doublereal *x, integer *ldx, doublereal *ferr, 
	doublereal *berr, doublereal *work, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl DTBTRS(char *uplo, char *trans, char *diag, integer *n, 
	integer *kd, integer *nrhs, doublereal *ab, integer *ldab, doublereal 
	*b, integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl DTGEVC(char *side, char *howmny, logical *select, 
	integer *n, doublereal *a, integer *lda, doublereal *b, integer *ldb, 
	doublereal *vl, integer *ldvl, doublereal *vr, integer *ldvr, integer 
	*mm, integer *m, doublereal *work, integer *info);
 
/* Subroutine */ int __cdecl DTGEX2(logical *wantq, logical *wantz, integer *n, 
	doublereal *a, integer *lda, doublereal *b, integer *ldb, doublereal *
	q, integer *ldq, doublereal *z__, integer *ldz, integer *j1, integer *
	n1, integer *n2, doublereal *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl DTGEXC(logical *wantq, logical *wantz, integer *n, 
	doublereal *a, integer *lda, doublereal *b, integer *ldb, doublereal *
	q, integer *ldq, doublereal *z__, integer *ldz, integer *ifst, 
	integer *ilst, doublereal *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl DTGSEN(integer *ijob, logical *wantq, logical *wantz, 
	logical *select, integer *n, doublereal *a, integer *lda, doublereal *
	b, integer *ldb, doublereal *alphar, doublereal *alphai, doublereal *
	beta, doublereal *q, integer *ldq, doublereal *z__, integer *ldz, 
	integer *m, doublereal *pl, doublereal *pr, doublereal *dif, 
	doublereal *work, integer *lwork, integer *iwork, integer *liwork, 
	integer *info);
 
/* Subroutine */ int __cdecl DTGSJA(char *jobu, char *jobv, char *jobq, integer *m, 
	integer *p, integer *n, integer *k, integer *l, doublereal *a, 
	integer *lda, doublereal *b, integer *ldb, doublereal *tola, 
	doublereal *tolb, doublereal *alpha, doublereal *beta, doublereal *u, 
	integer *ldu, doublereal *v, integer *ldv, doublereal *q, integer *
	ldq, doublereal *work, integer *ncycle, integer *info);
 
/* Subroutine */ int __cdecl DTGSNA(char *job, char *howmny, logical *select, 
	integer *n, doublereal *a, integer *lda, doublereal *b, integer *ldb, 
	doublereal *vl, integer *ldvl, doublereal *vr, integer *ldvr, 
	doublereal *s, doublereal *dif, integer *mm, integer *m, doublereal *
	work, integer *lwork, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl DTGSY2(char *trans, integer *ijob, integer *m, integer *
	n, doublereal *a, integer *lda, doublereal *b, integer *ldb, 
	doublereal *c__, integer *ldc, doublereal *d__, integer *ldd, 
	doublereal *e, integer *lde, doublereal *f, integer *ldf, doublereal *
	scale, doublereal *rdsum, doublereal *rdscal, integer *iwork, integer 
	*pq, integer *info);
 
/* Subroutine */ int __cdecl DTGSYL(char *trans, integer *ijob, integer *m, integer *
	n, doublereal *a, integer *lda, doublereal *b, integer *ldb, 
	doublereal *c__, integer *ldc, doublereal *d__, integer *ldd, 
	doublereal *e, integer *lde, doublereal *f, integer *ldf, doublereal *
	scale, doublereal *dif, doublereal *work, integer *lwork, integer *
	iwork, integer *info);
 
/* Subroutine */ int __cdecl DTPCON(char *norm, char *uplo, char *diag, integer *n, 
	doublereal *ap, doublereal *rcond, doublereal *work, integer *iwork, 
	integer *info);
 
/* Subroutine */ int __cdecl DTPRFS(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, doublereal *ap, doublereal *b, integer *ldb, 
	doublereal *x, integer *ldx, doublereal *ferr, doublereal *berr, 
	doublereal *work, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl DTPTRI(char *uplo, char *diag, integer *n, doublereal *
	ap, integer *info);
 
/* Subroutine */ int __cdecl DTPTRS(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, doublereal *ap, doublereal *b, integer *ldb, integer *
	info);
 
/* Subroutine */ int __cdecl DTRCON(char *norm, char *uplo, char *diag, integer *n, 
	doublereal *a, integer *lda, doublereal *rcond, doublereal *work, 
	integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl DTREVC(char *side, char *howmny, logical *select, 
	integer *n, doublereal *t, integer *ldt, doublereal *vl, integer *
	ldvl, doublereal *vr, integer *ldvr, integer *mm, integer *m, 
	doublereal *work, integer *info);
 
/* Subroutine */ int __cdecl DTREXC(char *compq, integer *n, doublereal *t, integer *
	ldt, doublereal *q, integer *ldq, integer *ifst, integer *ilst, 
	doublereal *work, integer *info);
 
/* Subroutine */ int __cdecl DTRRFS(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, doublereal *a, integer *lda, doublereal *b, integer *
	ldb, doublereal *x, integer *ldx, doublereal *ferr, doublereal *berr, 
	doublereal *work, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl DTRSEN(char *job, char *compq, logical *select, integer 
	*n, doublereal *t, integer *ldt, doublereal *q, integer *ldq, 
	doublereal *wr, doublereal *wi, integer *m, doublereal *s, doublereal 
	*sep, doublereal *work, integer *lwork, integer *iwork, integer *
	liwork, integer *info);
 
/* Subroutine */ int __cdecl DTRSNA(char *job, char *howmny, logical *select, 
	integer *n, doublereal *t, integer *ldt, doublereal *vl, integer *
	ldvl, doublereal *vr, integer *ldvr, doublereal *s, doublereal *sep, 
	integer *mm, integer *m, doublereal *work, integer *ldwork, integer *
	iwork, integer *info);
 
/* Subroutine */ int __cdecl DTRSYL(char *trana, char *tranb, integer *isgn, integer 
	*m, integer *n, doublereal *a, integer *lda, doublereal *b, integer *
	ldb, doublereal *c__, integer *ldc, doublereal *scale, integer *info);
 
/* Subroutine */ int __cdecl DTRTI2(char *uplo, char *diag, integer *n, doublereal *
	a, integer *lda, integer *info);
 
/* Subroutine */ int __cdecl DTRTRI(char *uplo, char *diag, integer *n, doublereal *
	a, integer *lda, integer *info);
 
/* Subroutine */ int __cdecl DTRTRS(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, doublereal *a, integer *lda, doublereal *b, integer *
	ldb, integer *info);
 
/* Subroutine */ int __cdecl DTZRQF(integer *m, integer *n, doublereal *a, integer *
	lda, doublereal *tau, integer *info);
 
/* Subroutine */ int __cdecl DTZRZF(integer *m, integer *n, doublereal *a, integer *
	lda, doublereal *tau, doublereal *work, integer *lwork, integer *info);
 
integer icmax1_(integer *n, complex_ *cx, integer *incx);
 
integer ieeeck_(integer *ispec, real_ *zero, real_ *one);
 
integer ilaenv_(integer *ispec, char *name__, char *opts, integer *n1, 
	integer *n2, integer *n3, integer *n4, ftnlen name_len, ftnlen 
	opts_len);
 
integer izmax1_(integer *n, doublecomplex *cx, integer *incx);
 
/* Subroutine */ int __cdecl SBDSDC(char *uplo, char *compq, integer *n, real_ *d__, 
	real_ *e, real_ *u, integer *ldu, real_ *vt, integer *ldvt, real_ *q, 
	integer *iq, real_ *work, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl SBDSQR(char *uplo, integer *n, integer *ncvt, integer *
	nru, integer *ncc, real_ *d__, real_ *e, real_ *vt, integer *ldvt, real_ *
	u, integer *ldu, real_ *c__, integer *ldc, real_ *work, integer *info);
 
/* Subroutine */ int __cdecl SDISNA(char *job, integer *m, integer *n, real_ *d__, 
	real_ *sep, integer *info);
 
/* Subroutine */ int __cdecl SGBBRD(char *vect, integer *m, integer *n, integer *ncc,
	 integer *kl, integer *ku, real_ *ab, integer *ldab, real_ *d__, real_ *
	e, real_ *q, integer *ldq, real_ *pt, integer *ldpt, real_ *c__, integer 
	*ldc, real_ *work, integer *info);
 
/* Subroutine */ int __cdecl SGBCON(char *norm, integer *n, integer *kl, integer *ku,
	 real_ *ab, integer *ldab, integer *ipiv, real_ *anorm, real_ *rcond, 
	real_ *work, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl SGBEQU(integer *m, integer *n, integer *kl, integer *ku,
	 real_ *ab, integer *ldab, real_ *r__, real_ *c__, real_ *rowcnd, real_ *
	colcnd, real_ *amax, integer *info);
 
/* Subroutine */ int __cdecl SGBRFS(char *trans, integer *n, integer *kl, integer *
	ku, integer *nrhs, real_ *ab, integer *ldab, real_ *afb, integer *ldafb,
	 integer *ipiv, real_ *b, integer *ldb, real_ *x, integer *ldx, real_ *
	ferr, real_ *berr, real_ *work, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl SGBSV(integer *n, integer *kl, integer *ku, integer *
	nrhs, real_ *ab, integer *ldab, integer *ipiv, real_ *b, integer *ldb, 
	integer *info);
 
/* Subroutine */ int __cdecl SGBSVX(char *fact, char *trans, integer *n, integer *kl,
	 integer *ku, integer *nrhs, real_ *ab, integer *ldab, real_ *afb, 
	integer *ldafb, integer *ipiv, char *equed, real_ *r__, real_ *c__, 
	real_ *b, integer *ldb, real_ *x, integer *ldx, real_ *rcond, real_ *ferr,
	 real_ *berr, real_ *work, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl SGBTF2(integer *m, integer *n, integer *kl, integer *ku,
	 real_ *ab, integer *ldab, integer *ipiv, integer *info);
 
/* Subroutine */ int __cdecl SGBTRF(integer *m, integer *n, integer *kl, integer *ku,
	 real_ *ab, integer *ldab, integer *ipiv, integer *info);
 
/* Subroutine */ int __cdecl SGBTRS(char *trans, integer *n, integer *kl, integer *
	ku, integer *nrhs, real_ *ab, integer *ldab, integer *ipiv, real_ *b, 
	integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl SGEBAK(char *job, char *side, integer *n, integer *ilo, 
	integer *ihi, real_ *scale, integer *m, real_ *v, integer *ldv, integer 
	*info);
 
/* Subroutine */ int __cdecl SGEBAL(char *job, integer *n, real_ *a, integer *lda, 
	integer *ilo, integer *ihi, real_ *scale, integer *info);
 
/* Subroutine */ int __cdecl SGEBD2(integer *m, integer *n, real_ *a, integer *lda, 
	real_ *d__, real_ *e, real_ *tauq, real_ *taup, real_ *work, integer *info);
 
/* Subroutine */ int __cdecl SGEBRD(integer *m, integer *n, real_ *a, integer *lda, 
	real_ *d__, real_ *e, real_ *tauq, real_ *taup, real_ *work, integer *
	lwork, integer *info);
 
/* Subroutine */ int __cdecl SGECON(char *norm, integer *n, real_ *a, integer *lda, 
	real_ *anorm, real_ *rcond, real_ *work, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl SGEEQU(integer *m, integer *n, real_ *a, integer *lda, 
	real_ *r__, real_ *c__, real_ *rowcnd, real_ *colcnd, real_ *amax, integer 
	*info);
 
/* Subroutine */ int __cdecl SGEES(char *jobvs, char *sort, L_fp select, integer *n, 
	real_ *a, integer *lda, integer *sdim, real_ *wr, real_ *wi, real_ *vs, 
	integer *ldvs, real_ *work, integer *lwork, logical *bwork, integer *
	info);
 
/* Subroutine */ int __cdecl SGEESX(char *jobvs, char *sort, L_fp select, char *
	sense, integer *n, real_ *a, integer *lda, integer *sdim, real_ *wr, 
	real_ *wi, real_ *vs, integer *ldvs, real_ *rconde, real_ *rcondv, real_ *
	work, integer *lwork, integer *iwork, integer *liwork, logical *bwork,
	 integer *info);
 
/* Subroutine */ int __cdecl SGEEV(char *jobvl, char *jobvr, integer *n, real_ *a, 
	integer *lda, real_ *wr, real_ *wi, real_ *vl, integer *ldvl, real_ *vr, 
	integer *ldvr, real_ *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl SGEEVX(char *balanc, char *jobvl, char *jobvr, char *
	sense, integer *n, real_ *a, integer *lda, real_ *wr, real_ *wi, real_ *
	vl, integer *ldvl, real_ *vr, integer *ldvr, integer *ilo, integer *
	ihi, real_ *scale, real_ *abnrm, real_ *rconde, real_ *rcondv, real_ *work,
	 integer *lwork, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl SGEGS(char *jobvsl, char *jobvsr, integer *n, real_ *a, 
	integer *lda, real_ *b, integer *ldb, real_ *alphar, real_ *alphai, real_ 
	*beta, real_ *vsl, integer *ldvsl, real_ *vsr, integer *ldvsr, real_ *
	work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl SGEGV(char *jobvl, char *jobvr, integer *n, real_ *a, 
	integer *lda, real_ *b, integer *ldb, real_ *alphar, real_ *alphai, real_ 
	*beta, real_ *vl, integer *ldvl, real_ *vr, integer *ldvr, real_ *work, 
	integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl SGEHD2(integer *n, integer *ilo, integer *ihi, real_ *a, 
	integer *lda, real_ *tau, real_ *work, integer *info);
 
/* Subroutine */ int __cdecl SGEHRD(integer *n, integer *ilo, integer *ihi, real_ *a, 
	integer *lda, real_ *tau, real_ *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl SGELQ2(integer *m, integer *n, real_ *a, integer *lda, 
	real_ *tau, real_ *work, integer *info);
 
/* Subroutine */ int __cdecl SGELQF(integer *m, integer *n, real_ *a, integer *lda, 
	real_ *tau, real_ *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl SGELS(char *trans, integer *m, integer *n, integer *
	nrhs, real_ *a, integer *lda, real_ *b, integer *ldb, real_ *work, 
	integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl SGELSD(integer *m, integer *n, integer *nrhs, real_ *a, 
	integer *lda, real_ *b, integer *ldb, real_ *s, real_ *rcond, integer *
	rank, real_ *work, integer *lwork, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl SGELSS(integer *m, integer *n, integer *nrhs, real_ *a, 
	integer *lda, real_ *b, integer *ldb, real_ *s, real_ *rcond, integer *
	rank, real_ *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl SGELSX(integer *m, integer *n, integer *nrhs, real_ *a, 
	integer *lda, real_ *b, integer *ldb, integer *jpvt, real_ *rcond, 
	integer *rank, real_ *work, integer *info);
 
/* Subroutine */ int __cdecl SGELSY(integer *m, integer *n, integer *nrhs, real_ *a, 
	integer *lda, real_ *b, integer *ldb, integer *jpvt, real_ *rcond, 
	integer *rank, real_ *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl SGEQL2(integer *m, integer *n, real_ *a, integer *lda, 
	real_ *tau, real_ *work, integer *info);
 
/* Subroutine */ int __cdecl SGEQLF(integer *m, integer *n, real_ *a, integer *lda, 
	real_ *tau, real_ *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl SGEQP3(integer *m, integer *n, real_ *a, integer *lda, 
	integer *jpvt, real_ *tau, real_ *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl SGEQPF(integer *m, integer *n, real_ *a, integer *lda, 
	integer *jpvt, real_ *tau, real_ *work, integer *info);
 
/* Subroutine */ int __cdecl SGEQR2(integer *m, integer *n, real_ *a, integer *lda, 
	real_ *tau, real_ *work, integer *info);
 
/* Subroutine */ int __cdecl SGEQRF(integer *m, integer *n, real_ *a, integer *lda, 
	real_ *tau, real_ *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl SGERFS(char *trans, integer *n, integer *nrhs, real_ *a, 
	integer *lda, real_ *af, integer *ldaf, integer *ipiv, real_ *b, 
	integer *ldb, real_ *x, integer *ldx, real_ *ferr, real_ *berr, real_ *
	work, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl SGERQ2(integer *m, integer *n, real_ *a, integer *lda, 
	real_ *tau, real_ *work, integer *info);
 
/* Subroutine */ int __cdecl SGERQF(integer *m, integer *n, real_ *a, integer *lda, 
	real_ *tau, real_ *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl SGESC2(integer *n, real_ *a, integer *lda, real_ *rhs, 
	integer *ipiv, integer *jpiv, real_ *scale);
 
/* Subroutine */ int __cdecl SGESDD(char *jobz, integer *m, integer *n, real_ *a, 
	integer *lda, real_ *s, real_ *u, integer *ldu, real_ *vt, integer *ldvt,
	 real_ *work, integer *lwork, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl SGESV(integer *n, integer *nrhs, real_ *a, integer *lda, 
	integer *ipiv, real_ *b, integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl SGESVD(char *jobu, char *jobvt, integer *m, integer *n, 
	real_ *a, integer *lda, real_ *s, real_ *u, integer *ldu, real_ *vt, 
	integer *ldvt, real_ *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl SGESVX(char *fact, char *trans, integer *n, integer *
	nrhs, real_ *a, integer *lda, real_ *af, integer *ldaf, integer *ipiv, 
	char *equed, real_ *r__, real_ *c__, real_ *b, integer *ldb, real_ *x, 
	integer *ldx, real_ *rcond, real_ *ferr, real_ *berr, real_ *work, 
	integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl SGETC2(integer *n, real_ *a, integer *lda, integer *ipiv,
	 integer *jpiv, integer *info);
 
/* Subroutine */ int __cdecl SGETF2(integer *m, integer *n, real_ *a, integer *lda, 
	integer *ipiv, integer *info);
 
/* Subroutine */ int __cdecl SGETRF(integer *m, integer *n, real_ *a, integer *lda, 
	integer *ipiv, integer *info);
 
/* Subroutine */ int __cdecl SGETRI(integer *n, real_ *a, integer *lda, integer *ipiv,
	 real_ *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl SGETRS(char *trans, integer *n, integer *nrhs, real_ *a, 
	integer *lda, integer *ipiv, real_ *b, integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl SGGBAK(char *job, char *side, integer *n, integer *ilo, 
	integer *ihi, real_ *lscale, real_ *rscale, integer *m, real_ *v, 
	integer *ldv, integer *info);
 
/* Subroutine */ int __cdecl SGGBAL(char *job, integer *n, real_ *a, integer *lda, 
	real_ *b, integer *ldb, integer *ilo, integer *ihi, real_ *lscale, real_ 
	*rscale, real_ *work, integer *info);
 
/* Subroutine */ int __cdecl SGGES(char *jobvsl, char *jobvsr, char *sort, L_fp 
	selctg, integer *n, real_ *a, integer *lda, real_ *b, integer *ldb, 
	integer *sdim, real_ *alphar, real_ *alphai, real_ *beta, real_ *vsl, 
	integer *ldvsl, real_ *vsr, integer *ldvsr, real_ *work, integer *lwork,
	 logical *bwork, integer *info);
 
/* Subroutine */ int __cdecl SGGESX(char *jobvsl, char *jobvsr, char *sort, L_fp 
	selctg, char *sense, integer *n, real_ *a, integer *lda, real_ *b, 
	integer *ldb, integer *sdim, real_ *alphar, real_ *alphai, real_ *beta, 
	real_ *vsl, integer *ldvsl, real_ *vsr, integer *ldvsr, real_ *rconde, 
	real_ *rcondv, real_ *work, integer *lwork, integer *iwork, integer *
	liwork, logical *bwork, integer *info);
 
/* Subroutine */ int __cdecl SGGEV(char *jobvl, char *jobvr, integer *n, real_ *a, 
	integer *lda, real_ *b, integer *ldb, real_ *alphar, real_ *alphai, real_ 
	*beta, real_ *vl, integer *ldvl, real_ *vr, integer *ldvr, real_ *work, 
	integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl SGGEVX(char *balanc, char *jobvl, char *jobvr, char *
	sense, integer *n, real_ *a, integer *lda, real_ *b, integer *ldb, real_ 
	*alphar, real_ *alphai, real_ *beta, real_ *vl, integer *ldvl, real_ *vr, 
	integer *ldvr, integer *ilo, integer *ihi, real_ *lscale, real_ *rscale,
	 real_ *abnrm, real_ *bbnrm, real_ *rconde, real_ *rcondv, real_ *work, 
	integer *lwork, integer *iwork, logical *bwork, integer *info);
 
/* Subroutine */ int __cdecl SGGGLM(integer *n, integer *m, integer *p, real_ *a, 
	integer *lda, real_ *b, integer *ldb, real_ *d__, real_ *x, real_ *y, 
	real_ *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl SGGHRD(char *compq, char *compz, integer *n, integer *
	ilo, integer *ihi, real_ *a, integer *lda, real_ *b, integer *ldb, real_ 
	*q, integer *ldq, real_ *z__, integer *ldz, integer *info);
 
/* Subroutine */ int __cdecl SGGLSE(integer *m, integer *n, integer *p, real_ *a, 
	integer *lda, real_ *b, integer *ldb, real_ *c__, real_ *d__, real_ *x, 
	real_ *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl SGGQRF(integer *n, integer *m, integer *p, real_ *a, 
	integer *lda, real_ *taua, real_ *b, integer *ldb, real_ *taub, real_ *
	work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl SGGRQF(integer *m, integer *p, integer *n, real_ *a, 
	integer *lda, real_ *taua, real_ *b, integer *ldb, real_ *taub, real_ *
	work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl SGGSVD(char *jobu, char *jobv, char *jobq, integer *m, 
	integer *n, integer *p, integer *k, integer *l, real_ *a, integer *lda,
	 real_ *b, integer *ldb, real_ *alpha, real_ *beta, real_ *u, integer *
	ldu, real_ *v, integer *ldv, real_ *q, integer *ldq, real_ *work, 
	integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl SGGSVP(char *jobu, char *jobv, char *jobq, integer *m, 
	integer *p, integer *n, real_ *a, integer *lda, real_ *b, integer *ldb, 
	real_ *tola, real_ *tolb, integer *k, integer *l, real_ *u, integer *ldu,
	 real_ *v, integer *ldv, real_ *q, integer *ldq, integer *iwork, real_ *
	tau, real_ *work, integer *info);
 
/* Subroutine */ int __cdecl SGTCON(char *norm, integer *n, real_ *dl, real_ *d__, 
	real_ *du, real_ *du2, integer *ipiv, real_ *anorm, real_ *rcond, real_ *
	work, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl SGTRFS(char *trans, integer *n, integer *nrhs, real_ *dl,
	 real_ *d__, real_ *du, real_ *dlf, real_ *df, real_ *duf, real_ *du2, 
	integer *ipiv, real_ *b, integer *ldb, real_ *x, integer *ldx, real_ *
	ferr, real_ *berr, real_ *work, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl SGTSV(integer *n, integer *nrhs, real_ *dl, real_ *d__, 
	real_ *du, real_ *b, integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl SGTSVX(char *fact, char *trans, integer *n, integer *
	nrhs, real_ *dl, real_ *d__, real_ *du, real_ *dlf, real_ *df, real_ *duf, 
	real_ *du2, integer *ipiv, real_ *b, integer *ldb, real_ *x, integer *
	ldx, real_ *rcond, real_ *ferr, real_ *berr, real_ *work, integer *iwork, 
	integer *info);
 
/* Subroutine */ int __cdecl SGTTRF(integer *n, real_ *dl, real_ *d__, real_ *du, real_ *
	du2, integer *ipiv, integer *info);
 
/* Subroutine */ int __cdecl SGTTRS(char *trans, integer *n, integer *nrhs, real_ *dl,
	 real_ *d__, real_ *du, real_ *du2, integer *ipiv, real_ *b, integer *ldb,
	 integer *info);
 
/* Subroutine */ int __cdecl SGTTS2(integer *itrans, integer *n, integer *nrhs, real_ 
	*dl, real_ *d__, real_ *du, real_ *du2, integer *ipiv, real_ *b, integer *
	ldb);
 
/* Subroutine */ int __cdecl SHGEQZ(char *job, char *compq, char *compz, integer *n, 
	integer *ilo, integer *ihi, real_ *a, integer *lda, real_ *b, integer *
	ldb, real_ *alphar, real_ *alphai, real_ *beta, real_ *q, integer *ldq, 
	real_ *z__, integer *ldz, real_ *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl SHSEIN(char *side, char *eigsrc, char *initv, logical *
	select, integer *n, real_ *h__, integer *ldh, real_ *wr, real_ *wi, real_ 
	*vl, integer *ldvl, real_ *vr, integer *ldvr, integer *mm, integer *m, 
	real_ *work, integer *ifaill, integer *ifailr, integer *info);
 
/* Subroutine */ int __cdecl SHSEQR(char *job, char *compz, integer *n, integer *ilo,
	 integer *ihi, real_ *h__, integer *ldh, real_ *wr, real_ *wi, real_ *z__,
	 integer *ldz, real_ *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl SLABAD(real_ *small2, real_ *large);
 
/* Subroutine */ int __cdecl SLABRD(integer *m, integer *n, integer *nb, real_ *a, 
	integer *lda, real_ *d__, real_ *e, real_ *tauq, real_ *taup, real_ *x, 
	integer *ldx, real_ *y, integer *ldy);
 
/* Subroutine */ int __cdecl SLACON(integer *n, real_ *v, real_ *x, integer *isgn, 
	real_ *est, integer *kase);
 
/* Subroutine */ int __cdecl SLACPY(char *uplo, integer *m, integer *n, real_ *a, 
	integer *lda, real_ *b, integer *ldb);
 
/* Subroutine */ int __cdecl SLADIV(real_ *a, real_ *b, real_ *c__, real_ *d__, real_ *p, 
	real_ *q);
 
/* Subroutine */ int __cdecl SLAE2(real_ *a, real_ *b, real_ *c__, real_ *rt1, real_ *rt2);
 
/* Subroutine */ int __cdecl SLAEBZ(integer *ijob, integer *nitmax, integer *n, 
	integer *mmax, integer *minp, integer *nbmin, real_ *abstol, real_ *
	reltol, real_ *pivmin, real_ *d__, real_ *e, real_ *e2, integer *nval, 
	real_ *ab, real_ *c__, integer *mout, integer *nab, real_ *work, integer 
	*iwork, integer *info);
 
/* Subroutine */ int __cdecl SLAED0(integer *icompq, integer *qsiz, integer *n, real_ 
	*d__, real_ *e, real_ *q, integer *ldq, real_ *qstore, integer *ldqs, 
	real_ *work, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl SLAED1(integer *n, real_ *d__, real_ *q, integer *ldq, 
	integer *indxq, real_ *rho, integer *cutpnt, real_ *work, integer *
	iwork, integer *info);
 
/* Subroutine */ int __cdecl SLAED2(integer *k, integer *n, integer *n1, real_ *d__, 
	real_ *q, integer *ldq, integer *indxq, real_ *rho, real_ *z__, real_ *
	dlamda, real_ *w, real_ *q2, integer *indx, integer *indxc, integer *
	indxp, integer *coltyp, integer *info);
 
/* Subroutine */ int __cdecl SLAED3(integer *k, integer *n, integer *n1, real_ *d__, 
	real_ *q, integer *ldq, real_ *rho, real_ *dlamda, real_ *q2, integer *
	indx, integer *ctot, real_ *w, real_ *s, integer *info);
 
/* Subroutine */ int __cdecl SLAED4(integer *n, integer *i__, real_ *d__, real_ *z__, 
	real_ *delta, real_ *rho, real_ *dlam, integer *info);
 
/* Subroutine */ int __cdecl SLAED5(integer *i__, real_ *d__, real_ *z__, real_ *delta, 
	real_ *rho, real_ *dlam);
 
/* Subroutine */ int __cdecl SLAED6(integer *kniter, logical *orgati, real_ *rho, 
	real_ *d__, real_ *z__, real_ *finit, real_ *tau, integer *info);
 
/* Subroutine */ int __cdecl SLAED7(integer *icompq, integer *n, integer *qsiz, 
	integer *tlvls, integer *curlvl, integer *curpbm, real_ *d__, real_ *q, 
	integer *ldq, integer *indxq, real_ *rho, integer *cutpnt, real_ *
	qstore, integer *qptr, integer *prmptr, integer *perm, integer *
	givptr, integer *givcol, real_ *givnum, real_ *work, integer *iwork, 
	integer *info);
 
/* Subroutine */ int __cdecl SLAED8(integer *icompq, integer *k, integer *n, integer 
	*qsiz, real_ *d__, real_ *q, integer *ldq, integer *indxq, real_ *rho, 
	integer *cutpnt, real_ *z__, real_ *dlamda, real_ *q2, integer *ldq2, 
	real_ *w, integer *perm, integer *givptr, integer *givcol, real_ *
	givnum, integer *indxp, integer *indx, integer *info);
 
/* Subroutine */ int __cdecl SLAED9(integer *k, integer *kstart, integer *kstop, 
	integer *n, real_ *d__, real_ *q, integer *ldq, real_ *rho, real_ *dlamda,
	 real_ *w, real_ *s, integer *lds, integer *info);
 
/* Subroutine */ int __cdecl SLAEDA(integer *n, integer *tlvls, integer *curlvl, 
	integer *curpbm, integer *prmptr, integer *perm, integer *givptr, 
	integer *givcol, real_ *givnum, real_ *q, integer *qptr, real_ *z__, 
	real_ *ztemp, integer *info);
 
/* Subroutine */ int __cdecl SLAEIN(logical *rightv, logical *noinit, integer *n, 
	real_ *h__, integer *ldh, real_ *wr, real_ *wi, real_ *vr, real_ *vi, real_ 
	*b, integer *ldb, real_ *work, real_ *eps3, real_ *smlnum, real_ *bignum, 
	integer *info);
 
/* Subroutine */ int __cdecl SLAEV2(real_ *a, real_ *b, real_ *c__, real_ *rt1, real_ *
	rt2, real_ *cs1, real_ *sn1);
 
/* Subroutine */ int __cdecl SLAEXC(logical *wantq, integer *n, real_ *t, integer *
	ldt, real_ *q, integer *ldq, integer *j1, integer *n1, integer *n2, 
	real_ *work, integer *info);
 
/* Subroutine */ int __cdecl SLAG2(real_ *a, integer *lda, real_ *b, integer *ldb, 
	real_ *safmin, real_ *scale1, real_ *scale2, real_ *wr1, real_ *wr2, real_ *
	wi);
 
/* Subroutine */ int __cdecl SLAGS2(logical *upper, real_ *a1, real_ *a2, real_ *a3, 
	real_ *b1, real_ *b2, real_ *b3, real_ *csu, real_ *snu, real_ *csv, real_ *
	snv, real_ *csq, real_ *snq);
 
/* Subroutine */ int __cdecl SLAGTF(integer *n, real_ *a, real_ *lambda, real_ *b, real_ 
	*c__, real_ *tol, real_ *d__, integer *in, integer *info);
 
/* Subroutine */ int __cdecl SLAGTM(char *trans, integer *n, integer *nrhs, real_ *
	alpha, real_ *dl, real_ *d__, real_ *du, real_ *x, integer *ldx, real_ *
	beta, real_ *b, integer *ldb);
 
/* Subroutine */ int __cdecl SLAGTS(integer *job, integer *n, real_ *a, real_ *b, real_ 
	*c__, real_ *d__, integer *in, real_ *y, real_ *tol, integer *info);
 
/* Subroutine */ int __cdecl SLAGV2(real_ *a, integer *lda, real_ *b, integer *ldb, 
	real_ *alphar, real_ *alphai, real_ *beta, real_ *csl, real_ *snl, real_ *
	csr, real_ *snr);
 
/* Subroutine */ int __cdecl SLAHQR(logical *wantt, logical *wantz, integer *n, 
	integer *ilo, integer *ihi, real_ *h__, integer *ldh, real_ *wr, real_ *
	wi, integer *iloz, integer *ihiz, real_ *z__, integer *ldz, integer *
	info);
 
/* Subroutine */ int __cdecl SLAHRD(integer *n, integer *k, integer *nb, real_ *a, 
	integer *lda, real_ *tau, real_ *t, integer *ldt, real_ *y, integer *ldy);
 
/* Subroutine */ int __cdecl SLAIC1(integer *job, integer *j, real_ *x, real_ *sest, 
	real_ *w, real_ *gamma, real_ *sestpr, real_ *s, real_ *c__);
 
/* Subroutine */ int __cdecl SLALN2(logical *ltrans, integer *na, integer *nw, real_ *
	smin, real_ *ca, real_ *a, integer *lda, real_ *d1, real_ *d2, real_ *b, 
	integer *ldb, real_ *wr, real_ *wi, real_ *x, integer *ldx, real_ *scale, 
	real_ *xnorm, integer *info);
 
/* Subroutine */ int __cdecl SLALS0(integer *icompq, integer *nl, integer *nr, 
	integer *sqre, integer *nrhs, real_ *b, integer *ldb, real_ *bx, 
	integer *ldbx, integer *perm, integer *givptr, integer *givcol, 
	integer *ldgcol, real_ *givnum, integer *ldgnum, real_ *poles, real_ *
	difl, real_ *difr, real_ *z__, integer *k, real_ *c__, real_ *s, real_ *
	work, integer *info);
 
/* Subroutine */ int __cdecl SLALSA(integer *icompq, integer *smlsiz, integer *n, 
	integer *nrhs, real_ *b, integer *ldb, real_ *bx, integer *ldbx, real_ *
	u, integer *ldu, real_ *vt, integer *k, real_ *difl, real_ *difr, real_ *
	z__, real_ *poles, integer *givptr, integer *givcol, integer *ldgcol, 
	integer *perm, real_ *givnum, real_ *c__, real_ *s, real_ *work, integer *
	iwork, integer *info);
 
/* Subroutine */ int __cdecl SLALSD(char *uplo, integer *smlsiz, integer *n, integer 
	*nrhs, real_ *d__, real_ *e, real_ *b, integer *ldb, real_ *rcond, 
	integer *rank, real_ *work, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl SLAMC1(integer *beta, integer *t, logical *rnd, logical 
	*ieee1);
 
/* Subroutine */ int __cdecl SLAMC2(integer *beta, integer *t, logical *rnd, real_ *
	eps, integer *emin, real_ *rmin, integer *emax, real_ *rmax);
 
/* Subroutine */ int __cdecl SLAMC4(integer *emin, real_ *start, integer *base);
 
/* Subroutine */ int __cdecl SLAMC5(integer *beta, integer *p, integer *emin, 
	logical *ieee, integer *emax, real_ *rmax);
 
/* Subroutine */ int __cdecl SLAMRG(integer *n1, integer *n2, real_ *a, integer *
	strd1, integer *strd2, integer *index);
 
/* Subroutine */ int __cdecl SLANV2(real_ *a, real_ *b, real_ *c__, real_ *d__, real_ *
	rt1r, real_ *rt1i, real_ *rt2r, real_ *rt2i, real_ *cs, real_ *sn);
 
/* Subroutine */ int __cdecl SLAPLL(integer *n, real_ *x, integer *incx, real_ *y, 
	integer *incy, real_ *ssmin);
 
/* Subroutine */ int __cdecl SLAPMT(logical *forwrd, integer *m, integer *n, real_ *x,
	 integer *ldx, integer *k);
 
/* Subroutine */ int __cdecl SLAQGB(integer *m, integer *n, integer *kl, integer *ku,
	 real_ *ab, integer *ldab, real_ *r__, real_ *c__, real_ *rowcnd, real_ *
	colcnd, real_ *amax, char *equed);
 
/* Subroutine */ int __cdecl SLAQGE(integer *m, integer *n, real_ *a, integer *lda, 
	real_ *r__, real_ *c__, real_ *rowcnd, real_ *colcnd, real_ *amax, char *
	equed);
 
/* Subroutine */ int __cdecl SLAQP2(integer *m, integer *n, integer *offset, real_ *a,
	 integer *lda, integer *jpvt, real_ *tau, real_ *vn1, real_ *vn2, real_ *
	work);
 
/* Subroutine */ int __cdecl SLAQPS(integer *m, integer *n, integer *offset, integer 
	*nb, integer *kb, real_ *a, integer *lda, integer *jpvt, real_ *tau, 
	real_ *vn1, real_ *vn2, real_ *auxv, real_ *f, integer *ldf);
 
/* Subroutine */ int __cdecl SLAQSB(char *uplo, integer *n, integer *kd, real_ *ab, 
	integer *ldab, real_ *s, real_ *scond, real_ *amax, char *equed);
 
/* Subroutine */ int __cdecl SLAQSP(char *uplo, integer *n, real_ *ap, real_ *s, real_ *
	scond, real_ *amax, char *equed);
 
/* Subroutine */ int __cdecl SLAQSY(char *uplo, integer *n, real_ *a, integer *lda, 
	real_ *s, real_ *scond, real_ *amax, char *equed);
 
/* Subroutine */ int __cdecl SLAQTR(logical *ltran, logical *lreal, integer *n, real_ 
	*t, integer *ldt, real_ *b, real_ *w, real_ *scale, real_ *x, real_ *work, 
	integer *info);
 
/* Subroutine */ int __cdecl SLAR1V(integer *n, integer *b1, integer *bn, real_ *
	sigma, real_ *d__, real_ *l, real_ *ld, real_ *lld, real_ *gersch, real_ *
	z__, real_ *ztz, real_ *mingma, integer *r__, integer *isuppz, real_ *
	work);
 
/* Subroutine */ int __cdecl SLAR2V(integer *n, real_ *x, real_ *y, real_ *z__, integer 
	*incx, real_ *c__, real_ *s, integer *incc);
 
/* Subroutine */ int __cdecl SLARF(char *side, integer *m, integer *n, real_ *v, 
	integer *incv, real_ *tau, real_ *c__, integer *ldc, real_ *work);
 
/* Subroutine */ int __cdecl SLARFB(char *side, char *trans, char *direct, char *
	storev, integer *m, integer *n, integer *k, real_ *v, integer *ldv, 
	real_ *t, integer *ldt, real_ *c__, integer *ldc, real_ *work, integer *
	ldwork);
 
/* Subroutine */ int __cdecl SLARFG(integer *n, real_ *alpha, real_ *x, integer *incx, 
	real_ *tau);
 
/* Subroutine */ int __cdecl SLARFT(char *direct, char *storev, integer *n, integer *
	k, real_ *v, integer *ldv, real_ *tau, real_ *t, integer *ldt);
 
/* Subroutine */ int __cdecl SLARFX(char *side, integer *m, integer *n, real_ *v, 
	real_ *tau, real_ *c__, integer *ldc, real_ *work);
 
/* Subroutine */ int __cdecl SLARGV(integer *n, real_ *x, integer *incx, real_ *y, 
	integer *incy, real_ *c__, integer *incc);
 
/* Subroutine */ int __cdecl SLARNV(integer *idist, integer *iseed, integer *n, real_ 
	*x);
 
/* Subroutine */ int __cdecl SLARRB(integer *n, real_ *d__, real_ *l, real_ *ld, real_ *
	lld, integer *ifirst, integer *ilast, real_ *sigma, real_ *reltol, real_ 
	*w, real_ *wgap, real_ *werr, real_ *work, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl SLARRE(integer *n, real_ *d__, real_ *e, real_ *tol, 
	integer *nsplit, integer *isplit, integer *m, real_ *w, real_ *woff, 
	real_ *gersch, real_ *work, integer *info);
 
/* Subroutine */ int __cdecl SLARRF(integer *n, real_ *d__, real_ *l, real_ *ld, real_ *
	lld, integer *ifirst, integer *ilast, real_ *w, real_ *dplus, real_ *
	lplus, real_ *work, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl SLARRV(integer *n, real_ *d__, real_ *l, integer *isplit, 
	integer *m, real_ *w, integer *iblock, real_ *gersch, real_ *tol, real_ *
	z__, integer *ldz, integer *isuppz, real_ *work, integer *iwork, 
	integer *info);
 
/* Subroutine */ int __cdecl SLARTG(real_ *f, real_ *g, real_ *cs, real_ *sn, real_ *r__);
 
/* Subroutine */ int __cdecl SLARTV(integer *n, real_ *x, integer *incx, real_ *y, 
	integer *incy, real_ *c__, real_ *s, integer *incc);
 
/* Subroutine */ int __cdecl SLARUV(integer *iseed, integer *n, real_ *x);
 
/* Subroutine */ int __cdecl SLARZ(char *side, integer *m, integer *n, integer *l, 
	real_ *v, integer *incv, real_ *tau, real_ *c__, integer *ldc, real_ *
	work);
 
/* Subroutine */ int __cdecl SLARZB(char *side, char *trans, char *direct, char *
	storev, integer *m, integer *n, integer *k, integer *l, real_ *v, 
	integer *ldv, real_ *t, integer *ldt, real_ *c__, integer *ldc, real_ *
	work, integer *ldwork);
 
/* Subroutine */ int __cdecl SLARZT(char *direct, char *storev, integer *n, integer *
	k, real_ *v, integer *ldv, real_ *tau, real_ *t, integer *ldt);
 
/* Subroutine */ int __cdecl SLAS2(real_ *f, real_ *g, real_ *h__, real_ *ssmin, real_ *
	ssmax);
 
/* Subroutine */ int __cdecl SLASCL(char *type__, integer *kl, integer *ku, real_ *
	cfrom, real_ *cto, integer *m, integer *n, real_ *a, integer *lda, 
	integer *info);
 
/* Subroutine */ int __cdecl SLASD0(integer *n, integer *sqre, real_ *d__, real_ *e, 
	real_ *u, integer *ldu, real_ *vt, integer *ldvt, integer *smlsiz, 
	integer *iwork, real_ *work, integer *info);
 
/* Subroutine */ int __cdecl SLASD1(integer *nl, integer *nr, integer *sqre, real_ *
	d__, real_ *alpha, real_ *beta, real_ *u, integer *ldu, real_ *vt, 
	integer *ldvt, integer *idxq, integer *iwork, real_ *work, integer *
	info);
 
/* Subroutine */ int __cdecl SLASD2(integer *nl, integer *nr, integer *sqre, integer 
	*k, real_ *d__, real_ *z__, real_ *alpha, real_ *beta, real_ *u, integer *
	ldu, real_ *vt, integer *ldvt, real_ *dsigma, real_ *u2, integer *ldu2, 
	real_ *vt2, integer *ldvt2, integer *idxp, integer *idx, integer *idxc,
	 integer *idxq, integer *coltyp, integer *info);
 
/* Subroutine */ int __cdecl SLASD3(integer *nl, integer *nr, integer *sqre, integer 
	*k, real_ *d__, real_ *q, integer *ldq, real_ *dsigma, real_ *u, integer *
	ldu, real_ *u2, integer *ldu2, real_ *vt, integer *ldvt, real_ *vt2, 
	integer *ldvt2, integer *idxc, integer *ctot, real_ *z__, integer *
	info);
 
/* Subroutine */ int __cdecl SLASD4(integer *n, integer *i__, real_ *d__, real_ *z__, 
	real_ *delta, real_ *rho, real_ *sigma, real_ *work, integer *info);
 
/* Subroutine */ int __cdecl SLASD5(integer *i__, real_ *d__, real_ *z__, real_ *delta, 
	real_ *rho, real_ *dsigma, real_ *work);
 
/* Subroutine */ int __cdecl SLASD6(integer *icompq, integer *nl, integer *nr, 
	integer *sqre, real_ *d__, real_ *vf, real_ *vl, real_ *alpha, real_ *beta,
	 integer *idxq, integer *perm, integer *givptr, integer *givcol, 
	integer *ldgcol, real_ *givnum, integer *ldgnum, real_ *poles, real_ *
	difl, real_ *difr, real_ *z__, integer *k, real_ *c__, real_ *s, real_ *
	work, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl SLASD7(integer *icompq, integer *nl, integer *nr, 
	integer *sqre, integer *k, real_ *d__, real_ *z__, real_ *zw, real_ *vf, 
	real_ *vfw, real_ *vl, real_ *vlw, real_ *alpha, real_ *beta, real_ *dsigma,
	 integer *idx, integer *idxp, integer *idxq, integer *perm, integer *
	givptr, integer *givcol, integer *ldgcol, real_ *givnum, integer *
	ldgnum, real_ *c__, real_ *s, integer *info);
 
/* Subroutine */ int __cdecl SLASD8(integer *icompq, integer *k, real_ *d__, real_ *
	z__, real_ *vf, real_ *vl, real_ *difl, real_ *difr, integer *lddifr, 
	real_ *dsigma, real_ *work, integer *info);
 
/* Subroutine */ int __cdecl SLASD9(integer *icompq, integer *ldu, integer *k, real_ *
	d__, real_ *z__, real_ *vf, real_ *vl, real_ *difl, real_ *difr, real_ *
	dsigma, real_ *work, integer *info);
 
/* Subroutine */ int __cdecl SLASDA(integer *icompq, integer *smlsiz, integer *n, 
	integer *sqre, real_ *d__, real_ *e, real_ *u, integer *ldu, real_ *vt, 
	integer *k, real_ *difl, real_ *difr, real_ *z__, real_ *poles, integer *
	givptr, integer *givcol, integer *ldgcol, integer *perm, real_ *givnum,
	 real_ *c__, real_ *s, real_ *work, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl SLASDQ(char *uplo, integer *sqre, integer *n, integer *
	ncvt, integer *nru, integer *ncc, real_ *d__, real_ *e, real_ *vt, 
	integer *ldvt, real_ *u, integer *ldu, real_ *c__, integer *ldc, real_ *
	work, integer *info);
 
/* Subroutine */ int __cdecl SLASDT(integer *n, integer *lvl, integer *nd, integer *
	inode, integer *ndiml, integer *ndimr, integer *msub);
 
/* Subroutine */ int __cdecl SLASET(char *uplo, integer *m, integer *n, real_ *alpha, 
	real_ *beta, real_ *a, integer *lda);
 
/* Subroutine */ int __cdecl SLASQ1(integer *n, real_ *d__, real_ *e, real_ *work, 
	integer *info);
 
/* Subroutine */ int __cdecl SLASQ2(integer *n, real_ *z__, integer *info);
 
/* Subroutine */ int __cdecl SLASQ3(integer *i0, integer *n0, real_ *z__, integer *pp,
	 real_ *dmin__, real_ *sigma, real_ *desig, real_ *qmax, integer *nfail, 
	integer *iter, integer *ndiv, logical *ieee);
 
/* Subroutine */ int __cdecl SLASQ4(integer *i0, integer *n0, real_ *z__, integer *pp,
	 integer *n0in, real_ *dmin__, real_ *dmin1, real_ *dmin2, real_ *dn, 
	real_ *dn1, real_ *dn2, real_ *tau, integer *ttype);
 
/* Subroutine */ int __cdecl SLASQ5(integer *i0, integer *n0, real_ *z__, integer *pp,
	 real_ *tau, real_ *dmin__, real_ *dmin1, real_ *dmin2, real_ *dn, real_ *
	dnm1, real_ *dnm2, logical *ieee);
 
/* Subroutine */ int __cdecl SLASQ6(integer *i0, integer *n0, real_ *z__, integer *pp,
	 real_ *dmin__, real_ *dmin1, real_ *dmin2, real_ *dn, real_ *dnm1, real_ *
	dnm2);
 
/* Subroutine */ int __cdecl SLASR(char *side, char *pivot, char *direct, integer *m,
	 integer *n, real_ *c__, real_ *s, real_ *a, integer *lda);
 
/* Subroutine */ int __cdecl SLASRT(char *id, integer *n, real_ *d__, integer *info);
 
/* Subroutine */ int __cdecl SLASSQ(integer *n, real_ *x, integer *incx, real_ *scale, 
	real_ *sumsq);
 
/* Subroutine */ int __cdecl SLASV2(real_ *f, real_ *g, real_ *h__, real_ *ssmin, real_ *
	ssmax, real_ *snr, real_ *csr, real_ *snl, real_ *csl);
 
/* Subroutine */ int __cdecl SLASWP(integer *n, real_ *a, integer *lda, integer *k1, 
	integer *k2, integer *ipiv, integer *incx);
 
/* Subroutine */ int __cdecl SLASY2(logical *ltranl, logical *ltranr, integer *isgn, 
	integer *n1, integer *n2, real_ *tl, integer *ldtl, real_ *tr, integer *
	ldtr, real_ *b, integer *ldb, real_ *scale, real_ *x, integer *ldx, real_ 
	*xnorm, integer *info);
 
/* Subroutine */ int __cdecl SLASYF(char *uplo, integer *n, integer *nb, integer *kb,
	 real_ *a, integer *lda, integer *ipiv, real_ *w, integer *ldw, integer 
	*info);
 
/* Subroutine */ int __cdecl SLATBS(char *uplo, char *trans, char *diag, char *
	normin, integer *n, integer *kd, real_ *ab, integer *ldab, real_ *x, 
	real_ *scale, real_ *cnorm, integer *info);
 
/* Subroutine */ int __cdecl SLATDF(integer *ijob, integer *n, real_ *z__, integer *
	ldz, real_ *rhs, real_ *rdsum, real_ *rdscal, integer *ipiv, integer *
	jpiv);
 
/* Subroutine */ int __cdecl SLATPS(char *uplo, char *trans, char *diag, char *
	normin, integer *n, real_ *ap, real_ *x, real_ *scale, real_ *cnorm, 
	integer *info);
 
/* Subroutine */ int __cdecl SLATRD(char *uplo, integer *n, integer *nb, real_ *a, 
	integer *lda, real_ *e, real_ *tau, real_ *w, integer *ldw);
 
/* Subroutine */ int __cdecl SLATRS(char *uplo, char *trans, char *diag, char *
	normin, integer *n, real_ *a, integer *lda, real_ *x, real_ *scale, real_ 
	*cnorm, integer *info);
 
/* Subroutine */ int __cdecl SLATRZ(integer *m, integer *n, integer *l, real_ *a, 
	integer *lda, real_ *tau, real_ *work);
 
/* Subroutine */ int __cdecl SLATZM(char *side, integer *m, integer *n, real_ *v, 
	integer *incv, real_ *tau, real_ *c1, real_ *c2, integer *ldc, real_ *
	work);
 
/* Subroutine */ int __cdecl SLAUU2(char *uplo, integer *n, real_ *a, integer *lda, 
	integer *info);
 
/* Subroutine */ int __cdecl SLAUUM(char *uplo, integer *n, real_ *a, integer *lda, 
	integer *info);
 
/* Subroutine */ int __cdecl SOPGTR(char *uplo, integer *n, real_ *ap, real_ *tau, 
	real_ *q, integer *ldq, real_ *work, integer *info);
 
/* Subroutine */ int __cdecl SOPMTR(char *side, char *uplo, char *trans, integer *m, 
	integer *n, real_ *ap, real_ *tau, real_ *c__, integer *ldc, real_ *work, 
	integer *info);
 
/* Subroutine */ int __cdecl SORG2L(integer *m, integer *n, integer *k, real_ *a, 
	integer *lda, real_ *tau, real_ *work, integer *info);
 
/* Subroutine */ int __cdecl SORG2R(integer *m, integer *n, integer *k, real_ *a, 
	integer *lda, real_ *tau, real_ *work, integer *info);
 
/* Subroutine */ int __cdecl SORGBR(char *vect, integer *m, integer *n, integer *k, 
	real_ *a, integer *lda, real_ *tau, real_ *work, integer *lwork, integer 
	*info);
 
/* Subroutine */ int __cdecl SORGHR(integer *n, integer *ilo, integer *ihi, real_ *a, 
	integer *lda, real_ *tau, real_ *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl SORGL2(integer *m, integer *n, integer *k, real_ *a, 
	integer *lda, real_ *tau, real_ *work, integer *info);
 
/* Subroutine */ int __cdecl SORGLQ(integer *m, integer *n, integer *k, real_ *a, 
	integer *lda, real_ *tau, real_ *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl SORGQL(integer *m, integer *n, integer *k, real_ *a, 
	integer *lda, real_ *tau, real_ *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl SORGQR(integer *m, integer *n, integer *k, real_ *a, 
	integer *lda, real_ *tau, real_ *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl SORGR2(integer *m, integer *n, integer *k, real_ *a, 
	integer *lda, real_ *tau, real_ *work, integer *info);
 
/* Subroutine */ int __cdecl SORGRQ(integer *m, integer *n, integer *k, real_ *a, 
	integer *lda, real_ *tau, real_ *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl SORGTR(char *uplo, integer *n, real_ *a, integer *lda, 
	real_ *tau, real_ *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl SORM2L(char *side, char *trans, integer *m, integer *n, 
	integer *k, real_ *a, integer *lda, real_ *tau, real_ *c__, integer *ldc,
	 real_ *work, integer *info);
 
/* Subroutine */ int __cdecl SORM2R(char *side, char *trans, integer *m, integer *n, 
	integer *k, real_ *a, integer *lda, real_ *tau, real_ *c__, integer *ldc,
	 real_ *work, integer *info);
 
/* Subroutine */ int __cdecl SORMBR(char *vect, char *side, char *trans, integer *m, 
	integer *n, integer *k, real_ *a, integer *lda, real_ *tau, real_ *c__, 
	integer *ldc, real_ *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl SORMHR(char *side, char *trans, integer *m, integer *n, 
	integer *ilo, integer *ihi, real_ *a, integer *lda, real_ *tau, real_ *
	c__, integer *ldc, real_ *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl SORML2(char *side, char *trans, integer *m, integer *n, 
	integer *k, real_ *a, integer *lda, real_ *tau, real_ *c__, integer *ldc,
	 real_ *work, integer *info);
 
/* Subroutine */ int __cdecl SORMLQ(char *side, char *trans, integer *m, integer *n, 
	integer *k, real_ *a, integer *lda, real_ *tau, real_ *c__, integer *ldc,
	 real_ *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl SORMQL(char *side, char *trans, integer *m, integer *n, 
	integer *k, real_ *a, integer *lda, real_ *tau, real_ *c__, integer *ldc,
	 real_ *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl SORMQR(char *side, char *trans, integer *m, integer *n, 
	integer *k, real_ *a, integer *lda, real_ *tau, real_ *c__, integer *ldc,
	 real_ *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl SORMR2(char *side, char *trans, integer *m, integer *n, 
	integer *k, real_ *a, integer *lda, real_ *tau, real_ *c__, integer *ldc,
	 real_ *work, integer *info);
 
/* Subroutine */ int __cdecl SORMR3(char *side, char *trans, integer *m, integer *n, 
	integer *k, integer *l, real_ *a, integer *lda, real_ *tau, real_ *c__, 
	integer *ldc, real_ *work, integer *info);
 
/* Subroutine */ int __cdecl SORMRQ(char *side, char *trans, integer *m, integer *n, 
	integer *k, real_ *a, integer *lda, real_ *tau, real_ *c__, integer *ldc,
	 real_ *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl SORMRZ(char *side, char *trans, integer *m, integer *n, 
	integer *k, integer *l, real_ *a, integer *lda, real_ *tau, real_ *c__, 
	integer *ldc, real_ *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl SORMTR(char *side, char *uplo, char *trans, integer *m, 
	integer *n, real_ *a, integer *lda, real_ *tau, real_ *c__, integer *ldc,
	 real_ *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl SPBCON(char *uplo, integer *n, integer *kd, real_ *ab, 
	integer *ldab, real_ *anorm, real_ *rcond, real_ *work, integer *iwork, 
	integer *info);
 
/* Subroutine */ int __cdecl SPBEQU(char *uplo, integer *n, integer *kd, real_ *ab, 
	integer *ldab, real_ *s, real_ *scond, real_ *amax, integer *info);
 
/* Subroutine */ int __cdecl SPBRFS(char *uplo, integer *n, integer *kd, integer *
	nrhs, real_ *ab, integer *ldab, real_ *afb, integer *ldafb, real_ *b, 
	integer *ldb, real_ *x, integer *ldx, real_ *ferr, real_ *berr, real_ *
	work, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl SPBSTF(char *uplo, integer *n, integer *kd, real_ *ab, 
	integer *ldab, integer *info);
 
/* Subroutine */ int __cdecl SPBSV(char *uplo, integer *n, integer *kd, integer *
	nrhs, real_ *ab, integer *ldab, real_ *b, integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl SPBSVX(char *fact, char *uplo, integer *n, integer *kd, 
	integer *nrhs, real_ *ab, integer *ldab, real_ *afb, integer *ldafb, 
	char *equed, real_ *s, real_ *b, integer *ldb, real_ *x, integer *ldx, 
	real_ *rcond, real_ *ferr, real_ *berr, real_ *work, integer *iwork, 
	integer *info);
 
/* Subroutine */ int __cdecl SPBTF2(char *uplo, integer *n, integer *kd, real_ *ab, 
	integer *ldab, integer *info);
 
/* Subroutine */ int __cdecl SPBTRF(char *uplo, integer *n, integer *kd, real_ *ab, 
	integer *ldab, integer *info);
 
/* Subroutine */ int __cdecl SPBTRS(char *uplo, integer *n, integer *kd, integer *
	nrhs, real_ *ab, integer *ldab, real_ *b, integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl SPOCON(char *uplo, integer *n, real_ *a, integer *lda, 
	real_ *anorm, real_ *rcond, real_ *work, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl SPOEQU(integer *n, real_ *a, integer *lda, real_ *s, real_ 
	*scond, real_ *amax, integer *info);
 
/* Subroutine */ int __cdecl SPORFS(char *uplo, integer *n, integer *nrhs, real_ *a, 
	integer *lda, real_ *af, integer *ldaf, real_ *b, integer *ldb, real_ *x,
	 integer *ldx, real_ *ferr, real_ *berr, real_ *work, integer *iwork, 
	integer *info);
 
/* Subroutine */ int __cdecl SPOSV(char *uplo, integer *n, integer *nrhs, real_ *a, 
	integer *lda, real_ *b, integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl SPOSVX(char *fact, char *uplo, integer *n, integer *
	nrhs, real_ *a, integer *lda, real_ *af, integer *ldaf, char *equed, 
	real_ *s, real_ *b, integer *ldb, real_ *x, integer *ldx, real_ *rcond, 
	real_ *ferr, real_ *berr, real_ *work, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl SPOTF2(char *uplo, integer *n, real_ *a, integer *lda, 
	integer *info);
 
/* Subroutine */ int __cdecl SPOTRF(char *uplo, integer *n, real_ *a, integer *lda, 
	integer *info);
 
/* Subroutine */ int __cdecl SPOTRI(char *uplo, integer *n, real_ *a, integer *lda, 
	integer *info);
 
/* Subroutine */ int __cdecl SPOTRS(char *uplo, integer *n, integer *nrhs, real_ *a, 
	integer *lda, real_ *b, integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl SPPCON(char *uplo, integer *n, real_ *ap, real_ *anorm, 
	real_ *rcond, real_ *work, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl SPPEQU(char *uplo, integer *n, real_ *ap, real_ *s, real_ *
	scond, real_ *amax, integer *info);
 
/* Subroutine */ int __cdecl SPPRFS(char *uplo, integer *n, integer *nrhs, real_ *ap, 
	real_ *afp, real_ *b, integer *ldb, real_ *x, integer *ldx, real_ *ferr, 
	real_ *berr, real_ *work, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl SPPSV(char *uplo, integer *n, integer *nrhs, real_ *ap, 
	real_ *b, integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl SPPSVX(char *fact, char *uplo, integer *n, integer *
	nrhs, real_ *ap, real_ *afp, char *equed, real_ *s, real_ *b, integer *
	ldb, real_ *x, integer *ldx, real_ *rcond, real_ *ferr, real_ *berr, real_ 
	*work, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl SPPTRF(char *uplo, integer *n, real_ *ap, integer *info);
 
/* Subroutine */ int __cdecl SPPTRI(char *uplo, integer *n, real_ *ap, integer *info);
 
/* Subroutine */ int __cdecl SPPTRS(char *uplo, integer *n, integer *nrhs, real_ *ap, 
	real_ *b, integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl SPTCON(integer *n, real_ *d__, real_ *e, real_ *anorm, 
	real_ *rcond, real_ *work, integer *info);
 
/* Subroutine */ int __cdecl SPTEQR(char *compz, integer *n, real_ *d__, real_ *e, 
	real_ *z__, integer *ldz, real_ *work, integer *info);
 
/* Subroutine */ int __cdecl SPTRFS(integer *n, integer *nrhs, real_ *d__, real_ *e, 
	real_ *df, real_ *ef, real_ *b, integer *ldb, real_ *x, integer *ldx, 
	real_ *ferr, real_ *berr, real_ *work, integer *info);
 
/* Subroutine */ int __cdecl SPTSV(integer *n, integer *nrhs, real_ *d__, real_ *e, 
	real_ *b, integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl SPTSVX(char *fact, integer *n, integer *nrhs, real_ *d__,
	 real_ *e, real_ *df, real_ *ef, real_ *b, integer *ldb, real_ *x, integer 
	*ldx, real_ *rcond, real_ *ferr, real_ *berr, real_ *work, integer *info);
 
/* Subroutine */ int __cdecl SPTTRF(integer *n, real_ *d__, real_ *e, integer *info);
 
/* Subroutine */ int __cdecl SPTTRS(integer *n, integer *nrhs, real_ *d__, real_ *e, 
	real_ *b, integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl SPTTS2(integer *n, integer *nrhs, real_ *d__, real_ *e, 
	real_ *b, integer *ldb);
 
/* Subroutine */ int __cdecl SRSCL(integer *n, real_ *sa, real_ *sx, integer *incx);
 
/* Subroutine */ int __cdecl SSBEV(char *jobz, char *uplo, integer *n, integer *kd, 
	real_ *ab, integer *ldab, real_ *w, real_ *z__, integer *ldz, real_ *work,
	 integer *info);
 
/* Subroutine */ int __cdecl SSBEVD(char *jobz, char *uplo, integer *n, integer *kd, 
	real_ *ab, integer *ldab, real_ *w, real_ *z__, integer *ldz, real_ *work,
	 integer *lwork, integer *iwork, integer *liwork, integer *info);
 
/* Subroutine */ int __cdecl SSBEVX(char *jobz, char *range, char *uplo, integer *n, 
	integer *kd, real_ *ab, integer *ldab, real_ *q, integer *ldq, real_ *vl,
	 real_ *vu, integer *il, integer *iu, real_ *abstol, integer *m, real_ *
	w, real_ *z__, integer *ldz, real_ *work, integer *iwork, integer *
	ifail, integer *info);
 
/* Subroutine */ int __cdecl SSBGST(char *vect, char *uplo, integer *n, integer *ka, 
	integer *kb, real_ *ab, integer *ldab, real_ *bb, integer *ldbb, real_ *
	x, integer *ldx, real_ *work, integer *info);
 
/* Subroutine */ int __cdecl SSBGV(char *jobz, char *uplo, integer *n, integer *ka, 
	integer *kb, real_ *ab, integer *ldab, real_ *bb, integer *ldbb, real_ *
	w, real_ *z__, integer *ldz, real_ *work, integer *info);
 
/* Subroutine */ int __cdecl SSBGVD(char *jobz, char *uplo, integer *n, integer *ka, 
	integer *kb, real_ *ab, integer *ldab, real_ *bb, integer *ldbb, real_ *
	w, real_ *z__, integer *ldz, real_ *work, integer *lwork, integer *
	iwork, integer *liwork, integer *info);
 
/* Subroutine */ int __cdecl SSBGVX(char *jobz, char *range, char *uplo, integer *n, 
	integer *ka, integer *kb, real_ *ab, integer *ldab, real_ *bb, integer *
	ldbb, real_ *q, integer *ldq, real_ *vl, real_ *vu, integer *il, integer 
	*iu, real_ *abstol, integer *m, real_ *w, real_ *z__, integer *ldz, real_ 
	*work, integer *iwork, integer *ifail, integer *info);
 
/* Subroutine */ int __cdecl SSBTRD(char *vect, char *uplo, integer *n, integer *kd, 
	real_ *ab, integer *ldab, real_ *d__, real_ *e, real_ *q, integer *ldq, 
	real_ *work, integer *info);
 
/* Subroutine */ int __cdecl SSPCON(char *uplo, integer *n, real_ *ap, integer *ipiv, 
	real_ *anorm, real_ *rcond, real_ *work, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl SSPEV(char *jobz, char *uplo, integer *n, real_ *ap, 
	real_ *w, real_ *z__, integer *ldz, real_ *work, integer *info);
 
/* Subroutine */ int __cdecl SSPEVD(char *jobz, char *uplo, integer *n, real_ *ap, 
	real_ *w, real_ *z__, integer *ldz, real_ *work, integer *lwork, integer 
	*iwork, integer *liwork, integer *info);
 
/* Subroutine */ int __cdecl SSPEVX(char *jobz, char *range, char *uplo, integer *n, 
	real_ *ap, real_ *vl, real_ *vu, integer *il, integer *iu, real_ *abstol, 
	integer *m, real_ *w, real_ *z__, integer *ldz, real_ *work, integer *
	iwork, integer *ifail, integer *info);
 
/* Subroutine */ int __cdecl SSPGST(integer *itype, char *uplo, integer *n, real_ *ap,
	 real_ *bp, integer *info);
 
/* Subroutine */ int __cdecl SSPGV(integer *itype, char *jobz, char *uplo, integer *
	n, real_ *ap, real_ *bp, real_ *w, real_ *z__, integer *ldz, real_ *work, 
	integer *info);
 
/* Subroutine */ int __cdecl SSPGVD(integer *itype, char *jobz, char *uplo, integer *
	n, real_ *ap, real_ *bp, real_ *w, real_ *z__, integer *ldz, real_ *work, 
	integer *lwork, integer *iwork, integer *liwork, integer *info);
 
/* Subroutine */ int __cdecl SSPGVX(integer *itype, char *jobz, char *range, char *
	uplo, integer *n, real_ *ap, real_ *bp, real_ *vl, real_ *vu, integer *il,
	 integer *iu, real_ *abstol, integer *m, real_ *w, real_ *z__, integer *
	ldz, real_ *work, integer *iwork, integer *ifail, integer *info);
 
/* Subroutine */ int __cdecl SSPRFS(char *uplo, integer *n, integer *nrhs, real_ *ap, 
	real_ *afp, integer *ipiv, real_ *b, integer *ldb, real_ *x, integer *
	ldx, real_ *ferr, real_ *berr, real_ *work, integer *iwork, integer *
	info);
 
/* Subroutine */ int __cdecl SSPSV(char *uplo, integer *n, integer *nrhs, real_ *ap, 
	integer *ipiv, real_ *b, integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl SSPSVX(char *fact, char *uplo, integer *n, integer *
	nrhs, real_ *ap, real_ *afp, integer *ipiv, real_ *b, integer *ldb, real_ 
	*x, integer *ldx, real_ *rcond, real_ *ferr, real_ *berr, real_ *work, 
	integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl SSPTRD(char *uplo, integer *n, real_ *ap, real_ *d__, 
	real_ *e, real_ *tau, integer *info);
 
/* Subroutine */ int __cdecl SSPTRF(char *uplo, integer *n, real_ *ap, integer *ipiv, 
	integer *info);
 
/* Subroutine */ int __cdecl SSPTRI(char *uplo, integer *n, real_ *ap, integer *ipiv, 
	real_ *work, integer *info);
 
/* Subroutine */ int __cdecl SSPTRS(char *uplo, integer *n, integer *nrhs, real_ *ap, 
	integer *ipiv, real_ *b, integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl SSTEBZ(char *range, char *order, integer *n, real_ *vl, 
	real_ *vu, integer *il, integer *iu, real_ *abstol, real_ *d__, real_ *e, 
	integer *m, integer *nsplit, real_ *w, integer *iblock, integer *
	isplit, real_ *work, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl SSTEDC(char *compz, integer *n, real_ *d__, real_ *e, 
	real_ *z__, integer *ldz, real_ *work, integer *lwork, integer *iwork, 
	integer *liwork, integer *info);
 
/* Subroutine */ int __cdecl SSTEGR(char *jobz, char *range, integer *n, real_ *d__, 
	real_ *e, real_ *vl, real_ *vu, integer *il, integer *iu, real_ *abstol, 
	integer *m, real_ *w, real_ *z__, integer *ldz, integer *isuppz, real_ *
	work, integer *lwork, integer *iwork, integer *liwork, integer *info);
 
/* Subroutine */ int __cdecl SSTEIN(integer *n, real_ *d__, real_ *e, integer *m, real_ 
	*w, integer *iblock, integer *isplit, real_ *z__, integer *ldz, real_ *
	work, integer *iwork, integer *ifail, integer *info);
 
/* Subroutine */ int __cdecl SSTEQR(char *compz, integer *n, real_ *d__, real_ *e, 
	real_ *z__, integer *ldz, real_ *work, integer *info);
 
/* Subroutine */ int __cdecl SSTERF(integer *n, real_ *d__, real_ *e, integer *info);
 
/* Subroutine */ int __cdecl SSTEV(char *jobz, integer *n, real_ *d__, real_ *e, real_ *
	z__, integer *ldz, real_ *work, integer *info);
 
/* Subroutine */ int __cdecl SSTEVD(char *jobz, integer *n, real_ *d__, real_ *e, real_ 
	*z__, integer *ldz, real_ *work, integer *lwork, integer *iwork, 
	integer *liwork, integer *info);
 
/* Subroutine */ int __cdecl SSTEVR(char *jobz, char *range, integer *n, real_ *d__, 
	real_ *e, real_ *vl, real_ *vu, integer *il, integer *iu, real_ *abstol, 
	integer *m, real_ *w, real_ *z__, integer *ldz, integer *isuppz, real_ *
	work, integer *lwork, integer *iwork, integer *liwork, integer *info);
 
/* Subroutine */ int __cdecl SSTEVX(char *jobz, char *range, integer *n, real_ *d__, 
	real_ *e, real_ *vl, real_ *vu, integer *il, integer *iu, real_ *abstol, 
	integer *m, real_ *w, real_ *z__, integer *ldz, real_ *work, integer *
	iwork, integer *ifail, integer *info);
 
/* Subroutine */ int __cdecl SSYCON(char *uplo, integer *n, real_ *a, integer *lda, 
	integer *ipiv, real_ *anorm, real_ *rcond, real_ *work, integer *iwork, 
	integer *info);
 
/* Subroutine */ int __cdecl SSYEV(char *jobz, char *uplo, integer *n, real_ *a, 
	integer *lda, real_ *w, real_ *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl SSYEVD(char *jobz, char *uplo, integer *n, real_ *a, 
	integer *lda, real_ *w, real_ *work, integer *lwork, integer *iwork, 
	integer *liwork, integer *info);
 
/* Subroutine */ int __cdecl SSYEVR(char *jobz, char *range, char *uplo, integer *n, 
	real_ *a, integer *lda, real_ *vl, real_ *vu, integer *il, integer *iu, 
	real_ *abstol, integer *m, real_ *w, real_ *z__, integer *ldz, integer *
	isuppz, real_ *work, integer *lwork, integer *iwork, integer *liwork, 
	integer *info);
 
/* Subroutine */ int __cdecl SSYEVX(char *jobz, char *range, char *uplo, integer *n, 
	real_ *a, integer *lda, real_ *vl, real_ *vu, integer *il, integer *iu, 
	real_ *abstol, integer *m, real_ *w, real_ *z__, integer *ldz, real_ *
	work, integer *lwork, integer *iwork, integer *ifail, integer *info);
 
/* Subroutine */ int __cdecl SSYGS2(integer *itype, char *uplo, integer *n, real_ *a, 
	integer *lda, real_ *b, integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl SSYGST(integer *itype, char *uplo, integer *n, real_ *a, 
	integer *lda, real_ *b, integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl SSYGV(integer *itype, char *jobz, char *uplo, integer *
	n, real_ *a, integer *lda, real_ *b, integer *ldb, real_ *w, real_ *work, 
	integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl SSYGVD(integer *itype, char *jobz, char *uplo, integer *
	n, real_ *a, integer *lda, real_ *b, integer *ldb, real_ *w, real_ *work, 
	integer *lwork, integer *iwork, integer *liwork, integer *info);
 
/* Subroutine */ int __cdecl SSYGVX(integer *itype, char *jobz, char *range, char *
	uplo, integer *n, real_ *a, integer *lda, real_ *b, integer *ldb, real_ *
	vl, real_ *vu, integer *il, integer *iu, real_ *abstol, integer *m, 
	real_ *w, real_ *z__, integer *ldz, real_ *work, integer *lwork, integer 
	*iwork, integer *ifail, integer *info);
 
/* Subroutine */ int __cdecl SSYRFS(char *uplo, integer *n, integer *nrhs, real_ *a, 
	integer *lda, real_ *af, integer *ldaf, integer *ipiv, real_ *b, 
	integer *ldb, real_ *x, integer *ldx, real_ *ferr, real_ *berr, real_ *
	work, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl SSYSV(char *uplo, integer *n, integer *nrhs, real_ *a, 
	integer *lda, integer *ipiv, real_ *b, integer *ldb, real_ *work, 
	integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl SSYSVX(char *fact, char *uplo, integer *n, integer *
	nrhs, real_ *a, integer *lda, real_ *af, integer *ldaf, integer *ipiv, 
	real_ *b, integer *ldb, real_ *x, integer *ldx, real_ *rcond, real_ *ferr,
	 real_ *berr, real_ *work, integer *lwork, integer *iwork, integer *
	info);
 
/* Subroutine */ int __cdecl SSYTD2(char *uplo, integer *n, real_ *a, integer *lda, 
	real_ *d__, real_ *e, real_ *tau, integer *info);
 
/* Subroutine */ int __cdecl SSYTF2(char *uplo, integer *n, real_ *a, integer *lda, 
	integer *ipiv, integer *info);
 
/* Subroutine */ int __cdecl SSYTRD(char *uplo, integer *n, real_ *a, integer *lda, 
	real_ *d__, real_ *e, real_ *tau, real_ *work, integer *lwork, integer *
	info);
 
/* Subroutine */ int __cdecl SSYTRF(char *uplo, integer *n, real_ *a, integer *lda, 
	integer *ipiv, real_ *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl SSYTRI(char *uplo, integer *n, real_ *a, integer *lda, 
	integer *ipiv, real_ *work, integer *info);
 
/* Subroutine */ int __cdecl SSYTRS(char *uplo, integer *n, integer *nrhs, real_ *a, 
	integer *lda, integer *ipiv, real_ *b, integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl STBCON(char *norm, char *uplo, char *diag, integer *n, 
	integer *kd, real_ *ab, integer *ldab, real_ *rcond, real_ *work, 
	integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl STBRFS(char *uplo, char *trans, char *diag, integer *n, 
	integer *kd, integer *nrhs, real_ *ab, integer *ldab, real_ *b, integer 
	*ldb, real_ *x, integer *ldx, real_ *ferr, real_ *berr, real_ *work, 
	integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl STBTRS(char *uplo, char *trans, char *diag, integer *n, 
	integer *kd, integer *nrhs, real_ *ab, integer *ldab, real_ *b, integer 
	*ldb, integer *info);
 
/* Subroutine */ int __cdecl STGEVC(char *side, char *howmny, logical *select, 
	integer *n, real_ *a, integer *lda, real_ *b, integer *ldb, real_ *vl, 
	integer *ldvl, real_ *vr, integer *ldvr, integer *mm, integer *m, real_ 
	*work, integer *info);
 
/* Subroutine */ int __cdecl STGEX2(logical *wantq, logical *wantz, integer *n, real_ 
	*a, integer *lda, real_ *b, integer *ldb, real_ *q, integer *ldq, real_ *
	z__, integer *ldz, integer *j1, integer *n1, integer *n2, real_ *work, 
	integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl STGEXC(logical *wantq, logical *wantz, integer *n, real_ 
	*a, integer *lda, real_ *b, integer *ldb, real_ *q, integer *ldq, real_ *
	z__, integer *ldz, integer *ifst, integer *ilst, real_ *work, integer *
	lwork, integer *info);
 
/* Subroutine */ int __cdecl STGSEN(integer *ijob, logical *wantq, logical *wantz, 
	logical *select, integer *n, real_ *a, integer *lda, real_ *b, integer *
	ldb, real_ *alphar, real_ *alphai, real_ *beta, real_ *q, integer *ldq, 
	real_ *z__, integer *ldz, integer *m, real_ *pl, real_ *pr, real_ *dif, 
	real_ *work, integer *lwork, integer *iwork, integer *liwork, integer *
	info);
 
/* Subroutine */ int __cdecl STGSJA(char *jobu, char *jobv, char *jobq, integer *m, 
	integer *p, integer *n, integer *k, integer *l, real_ *a, integer *lda,
	 real_ *b, integer *ldb, real_ *tola, real_ *tolb, real_ *alpha, real_ *
	beta, real_ *u, integer *ldu, real_ *v, integer *ldv, real_ *q, integer *
	ldq, real_ *work, integer *ncycle, integer *info);
 
/* Subroutine */ int __cdecl STGSNA(char *job, char *howmny, logical *select, 
	integer *n, real_ *a, integer *lda, real_ *b, integer *ldb, real_ *vl, 
	integer *ldvl, real_ *vr, integer *ldvr, real_ *s, real_ *dif, integer *
	mm, integer *m, real_ *work, integer *lwork, integer *iwork, integer *
	info);
 
/* Subroutine */ int __cdecl STGSY2(char *trans, integer *ijob, integer *m, integer *
	n, real_ *a, integer *lda, real_ *b, integer *ldb, real_ *c__, integer *
	ldc, real_ *d__, integer *ldd, real_ *e, integer *lde, real_ *f, integer 
	*ldf, real_ *scale, real_ *rdsum, real_ *rdscal, integer *iwork, integer 
	*pq, integer *info);
 
/* Subroutine */ int __cdecl STGSYL(char *trans, integer *ijob, integer *m, integer *
	n, real_ *a, integer *lda, real_ *b, integer *ldb, real_ *c__, integer *
	ldc, real_ *d__, integer *ldd, real_ *e, integer *lde, real_ *f, integer 
	*ldf, real_ *scale, real_ *dif, real_ *work, integer *lwork, integer *
	iwork, integer *info);
 
/* Subroutine */ int __cdecl STPCON(char *norm, char *uplo, char *diag, integer *n, 
	real_ *ap, real_ *rcond, real_ *work, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl STPRFS(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, real_ *ap, real_ *b, integer *ldb, real_ *x, integer *ldx,
	 real_ *ferr, real_ *berr, real_ *work, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl STPTRI(char *uplo, char *diag, integer *n, real_ *ap, 
	integer *info);
 
/* Subroutine */ int __cdecl STPTRS(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, real_ *ap, real_ *b, integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl STRCON(char *norm, char *uplo, char *diag, integer *n, 
	real_ *a, integer *lda, real_ *rcond, real_ *work, integer *iwork, 
	integer *info);
 
/* Subroutine */ int __cdecl STREVC(char *side, char *howmny, logical *select, 
	integer *n, real_ *t, integer *ldt, real_ *vl, integer *ldvl, real_ *vr, 
	integer *ldvr, integer *mm, integer *m, real_ *work, integer *info);
 
/* Subroutine */ int __cdecl STREXC(char *compq, integer *n, real_ *t, integer *ldt, 
	real_ *q, integer *ldq, integer *ifst, integer *ilst, real_ *work, 
	integer *info);
 
/* Subroutine */ int __cdecl STRRFS(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, real_ *a, integer *lda, real_ *b, integer *ldb, real_ *x, 
	integer *ldx, real_ *ferr, real_ *berr, real_ *work, integer *iwork, 
	integer *info);
 
/* Subroutine */ int __cdecl STRSEN(char *job, char *compq, logical *select, integer 
	*n, real_ *t, integer *ldt, real_ *q, integer *ldq, real_ *wr, real_ *wi, 
	integer *m, real_ *s, real_ *sep, real_ *work, integer *lwork, integer *
	iwork, integer *liwork, integer *info);
 
/* Subroutine */ int __cdecl STRSNA(char *job, char *howmny, logical *select, 
	integer *n, real_ *t, integer *ldt, real_ *vl, integer *ldvl, real_ *vr, 
	integer *ldvr, real_ *s, real_ *sep, integer *mm, integer *m, real_ *
	work, integer *ldwork, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl STRSYL(char *trana, char *tranb, integer *isgn, integer 
	*m, integer *n, real_ *a, integer *lda, real_ *b, integer *ldb, real_ *
	c__, integer *ldc, real_ *scale, integer *info);
 
/* Subroutine */ int __cdecl STRTI2(char *uplo, char *diag, integer *n, real_ *a, 
	integer *lda, integer *info);
 
/* Subroutine */ int __cdecl STRTRI(char *uplo, char *diag, integer *n, real_ *a, 
	integer *lda, integer *info);
 
/* Subroutine */ int __cdecl STRTRS(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, real_ *a, integer *lda, real_ *b, integer *ldb, integer *
	info);
 
/* Subroutine */ int __cdecl STZRQF(integer *m, integer *n, real_ *a, integer *lda, 
	real_ *tau, integer *info);
 
/* Subroutine */ int __cdecl STZRZF(integer *m, integer *n, real_ *a, integer *lda, 
	real_ *tau, real_ *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl XERBLA(char *srname, integer *info);
 
/* Subroutine */ int __cdecl ZBDSQR(char *uplo, integer *n, integer *ncvt, integer *
	nru, integer *ncc, doublereal *d__, doublereal *e, doublecomplex *vt, 
	integer *ldvt, doublecomplex *u, integer *ldu, doublecomplex *c__, 
	integer *ldc, doublereal *rwork, integer *info);
 
/* Subroutine */ int __cdecl ZDROT(integer *n, doublecomplex *cx, integer *incx, 
	doublecomplex *cy, integer *incy, doublereal *c__, doublereal *s);
 
/* Subroutine */ int __cdecl ZDRSCL(integer *n, doublereal *sa, doublecomplex *sx, 
	integer *incx);
 
/* Subroutine */ int __cdecl ZGBBRD(char *vect, integer *m, integer *n, integer *ncc,
	 integer *kl, integer *ku, doublecomplex *ab, integer *ldab, 
	doublereal *d__, doublereal *e, doublecomplex *q, integer *ldq, 
	doublecomplex *pt, integer *ldpt, doublecomplex *c__, integer *ldc, 
	doublecomplex *work, doublereal *rwork, integer *info);
 
/* Subroutine */ int __cdecl ZGBCON(char *norm, integer *n, integer *kl, integer *ku,
	 doublecomplex *ab, integer *ldab, integer *ipiv, doublereal *anorm, 
	doublereal *rcond, doublecomplex *work, doublereal *rwork, integer *
	info);
 
/* Subroutine */ int __cdecl ZGBEQU(integer *m, integer *n, integer *kl, integer *ku,
	 doublecomplex *ab, integer *ldab, doublereal *r__, doublereal *c__, 
	doublereal *rowcnd, doublereal *colcnd, doublereal *amax, integer *
	info);
 
/* Subroutine */ int __cdecl ZGBRFS(char *trans, integer *n, integer *kl, integer *
	ku, integer *nrhs, doublecomplex *ab, integer *ldab, doublecomplex *
	afb, integer *ldafb, integer *ipiv, doublecomplex *b, integer *ldb, 
	doublecomplex *x, integer *ldx, doublereal *ferr, doublereal *berr, 
	doublecomplex *work, doublereal *rwork, integer *info);
 
/* Subroutine */ int __cdecl ZGBSV(integer *n, integer *kl, integer *ku, integer *
	nrhs, doublecomplex *ab, integer *ldab, integer *ipiv, doublecomplex *
	b, integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl ZGBSVX(char *fact, char *trans, integer *n, integer *kl,
	 integer *ku, integer *nrhs, doublecomplex *ab, integer *ldab, 
	doublecomplex *afb, integer *ldafb, integer *ipiv, char *equed, 
	doublereal *r__, doublereal *c__, doublecomplex *b, integer *ldb, 
	doublecomplex *x, integer *ldx, doublereal *rcond, doublereal *ferr, 
	doublereal *berr, doublecomplex *work, doublereal *rwork, integer *
	info);
 
/* Subroutine */ int __cdecl ZGBTF2(integer *m, integer *n, integer *kl, integer *ku,
	 doublecomplex *ab, integer *ldab, integer *ipiv, integer *info);
 
/* Subroutine */ int __cdecl ZGBTRF(integer *m, integer *n, integer *kl, integer *ku,
	 doublecomplex *ab, integer *ldab, integer *ipiv, integer *info);
 
/* Subroutine */ int __cdecl ZGBTRS(char *trans, integer *n, integer *kl, integer *
	ku, integer *nrhs, doublecomplex *ab, integer *ldab, integer *ipiv, 
	doublecomplex *b, integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl ZGEBAK(char *job, char *side, integer *n, integer *ilo, 
	integer *ihi, doublereal *scale, integer *m, doublecomplex *v, 
	integer *ldv, integer *info);
 
/* Subroutine */ int __cdecl ZGEBAL(char *job, integer *n, doublecomplex *a, integer 
	*lda, integer *ilo, integer *ihi, doublereal *scale, integer *info);
 
/* Subroutine */ int __cdecl ZGEBD2(integer *m, integer *n, doublecomplex *a, 
	integer *lda, doublereal *d__, doublereal *e, doublecomplex *tauq, 
	doublecomplex *taup, doublecomplex *work, integer *info);
 
/* Subroutine */ int __cdecl ZGEBRD(integer *m, integer *n, doublecomplex *a, 
	integer *lda, doublereal *d__, doublereal *e, doublecomplex *tauq, 
	doublecomplex *taup, doublecomplex *work, integer *lwork, integer *
	info);
 
/* Subroutine */ int __cdecl ZGECON(char *norm, integer *n, doublecomplex *a, 
	integer *lda, doublereal *anorm, doublereal *rcond, doublecomplex *
	work, doublereal *rwork, integer *info);
 
/* Subroutine */ int __cdecl ZGEEQU(integer *m, integer *n, doublecomplex *a, 
	integer *lda, doublereal *r__, doublereal *c__, doublereal *rowcnd, 
	doublereal *colcnd, doublereal *amax, integer *info);
 
/* Subroutine */ int __cdecl ZGEES(char *jobvs, char *sort, L_fp select, integer *n, 
	doublecomplex *a, integer *lda, integer *sdim, doublecomplex *w, 
	doublecomplex *vs, integer *ldvs, doublecomplex *work, integer *lwork,
	 doublereal *rwork, logical *bwork, integer *info);
 
/* Subroutine */ int __cdecl ZGEESX(char *jobvs, char *sort, L_fp select, char *
	sense, integer *n, doublecomplex *a, integer *lda, integer *sdim, 
	doublecomplex *w, doublecomplex *vs, integer *ldvs, doublereal *
	rconde, doublereal *rcondv, doublecomplex *work, integer *lwork, 
	doublereal *rwork, logical *bwork, integer *info);
 
/* Subroutine */ int __cdecl ZGEEV(char *jobvl, char *jobvr, integer *n, 
	doublecomplex *a, integer *lda, doublecomplex *w, doublecomplex *vl, 
	integer *ldvl, doublecomplex *vr, integer *ldvr, doublecomplex *work, 
	integer *lwork, doublereal *rwork, integer *info);
 
/* Subroutine */ int __cdecl ZGEEVX(char *balanc, char *jobvl, char *jobvr, char *
	sense, integer *n, doublecomplex *a, integer *lda, doublecomplex *w, 
	doublecomplex *vl, integer *ldvl, doublecomplex *vr, integer *ldvr, 
	integer *ilo, integer *ihi, doublereal *scale, doublereal *abnrm, 
	doublereal *rconde, doublereal *rcondv, doublecomplex *work, integer *
	lwork, doublereal *rwork, integer *info);
 
/* Subroutine */ int __cdecl ZGEGS(char *jobvsl, char *jobvsr, integer *n, 
	doublecomplex *a, integer *lda, doublecomplex *b, integer *ldb, 
	doublecomplex *alpha, doublecomplex *beta, doublecomplex *vsl, 
	integer *ldvsl, doublecomplex *vsr, integer *ldvsr, doublecomplex *
	work, integer *lwork, doublereal *rwork, integer *info);
 
/* Subroutine */ int __cdecl ZGEGV(char *jobvl, char *jobvr, integer *n, 
	doublecomplex *a, integer *lda, doublecomplex *b, integer *ldb, 
	doublecomplex *alpha, doublecomplex *beta, doublecomplex *vl, integer 
	*ldvl, doublecomplex *vr, integer *ldvr, doublecomplex *work, integer 
	*lwork, doublereal *rwork, integer *info);
 
/* Subroutine */ int __cdecl ZGEHD2(integer *n, integer *ilo, integer *ihi, 
	doublecomplex *a, integer *lda, doublecomplex *tau, doublecomplex *
	work, integer *info);
 
/* Subroutine */ int __cdecl ZGEHRD(integer *n, integer *ilo, integer *ihi, 
	doublecomplex *a, integer *lda, doublecomplex *tau, doublecomplex *
	work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl ZGELQ2(integer *m, integer *n, doublecomplex *a, 
	integer *lda, doublecomplex *tau, doublecomplex *work, integer *info);
 
/* Subroutine */ int __cdecl ZGELQF(integer *m, integer *n, doublecomplex *a, 
	integer *lda, doublecomplex *tau, doublecomplex *work, integer *lwork,
	 integer *info);
 
/* Subroutine */ int __cdecl ZGELS(char *trans, integer *m, integer *n, integer *
	nrhs, doublecomplex *a, integer *lda, doublecomplex *b, integer *ldb, 
	doublecomplex *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl ZGELSX(integer *m, integer *n, integer *nrhs, 
	doublecomplex *a, integer *lda, doublecomplex *b, integer *ldb, 
	integer *jpvt, doublereal *rcond, integer *rank, doublecomplex *work, 
	doublereal *rwork, integer *info);
 
/* Subroutine */ int __cdecl ZGELSY(integer *m, integer *n, integer *nrhs, 
	doublecomplex *a, integer *lda, doublecomplex *b, integer *ldb, 
	integer *jpvt, doublereal *rcond, integer *rank, doublecomplex *work, 
	integer *lwork, doublereal *rwork, integer *info);
 
/* Subroutine */ int __cdecl ZGEQL2(integer *m, integer *n, doublecomplex *a, 
	integer *lda, doublecomplex *tau, doublecomplex *work, integer *info);
 
/* Subroutine */ int __cdecl ZGEQLF(integer *m, integer *n, doublecomplex *a, 
	integer *lda, doublecomplex *tau, doublecomplex *work, integer *lwork,
	 integer *info);
 
/* Subroutine */ int __cdecl ZGEQP3(integer *m, integer *n, doublecomplex *a, 
	integer *lda, integer *jpvt, doublecomplex *tau, doublecomplex *work, 
	integer *lwork, doublereal *rwork, integer *info);
 
/* Subroutine */ int __cdecl ZGEQPF(integer *m, integer *n, doublecomplex *a, 
	integer *lda, integer *jpvt, doublecomplex *tau, doublecomplex *work, 
	doublereal *rwork, integer *info);
 
/* Subroutine */ int __cdecl ZGEQR2(integer *m, integer *n, doublecomplex *a, 
	integer *lda, doublecomplex *tau, doublecomplex *work, integer *info);
 
/* Subroutine */ int __cdecl ZGEQRF(integer *m, integer *n, doublecomplex *a, 
	integer *lda, doublecomplex *tau, doublecomplex *work, integer *lwork,
	 integer *info);
 
/* Subroutine */ int __cdecl ZGERFS(char *trans, integer *n, integer *nrhs, 
	doublecomplex *a, integer *lda, doublecomplex *af, integer *ldaf, 
	integer *ipiv, doublecomplex *b, integer *ldb, doublecomplex *x, 
	integer *ldx, doublereal *ferr, doublereal *berr, doublecomplex *work,
	 doublereal *rwork, integer *info);
 
/* Subroutine */ int __cdecl ZGERQ2(integer *m, integer *n, doublecomplex *a, 
	integer *lda, doublecomplex *tau, doublecomplex *work, integer *info);
 
/* Subroutine */ int __cdecl ZGERQF(integer *m, integer *n, doublecomplex *a, 
	integer *lda, doublecomplex *tau, doublecomplex *work, integer *lwork,
	 integer *info);
 
/* Subroutine */ int __cdecl ZGESC2(integer *n, doublecomplex *a, integer *lda, 
	doublecomplex *rhs, integer *ipiv, integer *jpiv, doublereal *scale);
 
/* Subroutine */ int __cdecl ZGESV(integer *n, integer *nrhs, doublecomplex *a, 
	integer *lda, integer *ipiv, doublecomplex *b, integer *ldb, integer *
	info);
 
/* Subroutine */ int __cdecl ZGESVX(char *fact, char *trans, integer *n, integer *
	nrhs, doublecomplex *a, integer *lda, doublecomplex *af, integer *
	ldaf, integer *ipiv, char *equed, doublereal *r__, doublereal *c__, 
	doublecomplex *b, integer *ldb, doublecomplex *x, integer *ldx, 
	doublereal *rcond, doublereal *ferr, doublereal *berr, doublecomplex *
	work, doublereal *rwork, integer *info);
 
/* Subroutine */ int __cdecl ZGETC2(integer *n, doublecomplex *a, integer *lda, 
	integer *ipiv, integer *jpiv, integer *info);
 
/* Subroutine */ int __cdecl ZGETF2(integer *m, integer *n, doublecomplex *a, 
	integer *lda, integer *ipiv, integer *info);
 
/* Subroutine */ int __cdecl ZGETRF(integer *m, integer *n, doublecomplex *a, 
	integer *lda, integer *ipiv, integer *info);
 
/* Subroutine */ int __cdecl ZGETRI(integer *n, doublecomplex *a, integer *lda, 
	integer *ipiv, doublecomplex *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl ZGETRS(char *trans, integer *n, integer *nrhs, 
	doublecomplex *a, integer *lda, integer *ipiv, doublecomplex *b, 
	integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl ZGGBAK(char *job, char *side, integer *n, integer *ilo, 
	integer *ihi, doublereal *lscale, doublereal *rscale, integer *m, 
	doublecomplex *v, integer *ldv, integer *info);
 
/* Subroutine */ int __cdecl ZGGBAL(char *job, integer *n, doublecomplex *a, integer 
	*lda, doublecomplex *b, integer *ldb, integer *ilo, integer *ihi, 
	doublereal *lscale, doublereal *rscale, doublereal *work, integer *
	info);
 
/* Subroutine */ int __cdecl ZGGES(char *jobvsl, char *jobvsr, char *sort, L_fp 
	delctg, integer *n, doublecomplex *a, integer *lda, doublecomplex *b, 
	integer *ldb, integer *sdim, doublecomplex *alpha, doublecomplex *
	beta, doublecomplex *vsl, integer *ldvsl, doublecomplex *vsr, integer 
	*ldvsr, doublecomplex *work, integer *lwork, doublereal *rwork, 
	logical *bwork, integer *info);
 
/* Subroutine */ int __cdecl ZGGESX(char *jobvsl, char *jobvsr, char *sort, L_fp 
	delctg, char *sense, integer *n, doublecomplex *a, integer *lda, 
	doublecomplex *b, integer *ldb, integer *sdim, doublecomplex *alpha, 
	doublecomplex *beta, doublecomplex *vsl, integer *ldvsl, 
	doublecomplex *vsr, integer *ldvsr, doublereal *rconde, doublereal *
	rcondv, doublecomplex *work, integer *lwork, doublereal *rwork, 
	integer *iwork, integer *liwork, logical *bwork, integer *info);
 
/* Subroutine */ int __cdecl ZGGEV(char *jobvl, char *jobvr, integer *n, 
	doublecomplex *a, integer *lda, doublecomplex *b, integer *ldb, 
	doublecomplex *alpha, doublecomplex *beta, doublecomplex *vl, integer 
	*ldvl, doublecomplex *vr, integer *ldvr, doublecomplex *work, integer 
	*lwork, doublereal *rwork, integer *info);
 
/* Subroutine */ int __cdecl ZGGEVX(char *balanc, char *jobvl, char *jobvr, char *
	sense, integer *n, doublecomplex *a, integer *lda, doublecomplex *b, 
	integer *ldb, doublecomplex *alpha, doublecomplex *beta, 
	doublecomplex *vl, integer *ldvl, doublecomplex *vr, integer *ldvr, 
	integer *ilo, integer *ihi, doublereal *lscale, doublereal *rscale, 
	doublereal *abnrm, doublereal *bbnrm, doublereal *rconde, doublereal *
	rcondv, doublecomplex *work, integer *lwork, doublereal *rwork, 
	integer *iwork, logical *bwork, integer *info);
 
/* Subroutine */ int __cdecl ZGGGLM(integer *n, integer *m, integer *p, 
	doublecomplex *a, integer *lda, doublecomplex *b, integer *ldb, 
	doublecomplex *d__, doublecomplex *x, doublecomplex *y, doublecomplex 
	*work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl ZGGHRD(char *compq, char *compz, integer *n, integer *
	ilo, integer *ihi, doublecomplex *a, integer *lda, doublecomplex *b, 
	integer *ldb, doublecomplex *q, integer *ldq, doublecomplex *z__, 
	integer *ldz, integer *info);
 
/* Subroutine */ int __cdecl ZGGLSE(integer *m, integer *n, integer *p, 
	doublecomplex *a, integer *lda, doublecomplex *b, integer *ldb, 
	doublecomplex *c__, doublecomplex *d__, doublecomplex *x, 
	doublecomplex *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl ZGGQRF(integer *n, integer *m, integer *p, 
	doublecomplex *a, integer *lda, doublecomplex *taua, doublecomplex *b,
	 integer *ldb, doublecomplex *taub, doublecomplex *work, integer *
	lwork, integer *info);
 
/* Subroutine */ int __cdecl ZGGRQF(integer *m, integer *p, integer *n, 
	doublecomplex *a, integer *lda, doublecomplex *taua, doublecomplex *b,
	 integer *ldb, doublecomplex *taub, doublecomplex *work, integer *
	lwork, integer *info);
 
/* Subroutine */ int __cdecl ZGGSVD(char *jobu, char *jobv, char *jobq, integer *m, 
	integer *n, integer *p, integer *k, integer *l, doublecomplex *a, 
	integer *lda, doublecomplex *b, integer *ldb, doublereal *alpha, 
	doublereal *beta, doublecomplex *u, integer *ldu, doublecomplex *v, 
	integer *ldv, doublecomplex *q, integer *ldq, doublecomplex *work, 
	doublereal *rwork, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl ZGGSVP(char *jobu, char *jobv, char *jobq, integer *m, 
	integer *p, integer *n, doublecomplex *a, integer *lda, doublecomplex 
	*b, integer *ldb, doublereal *tola, doublereal *tolb, integer *k, 
	integer *l, doublecomplex *u, integer *ldu, doublecomplex *v, integer 
	*ldv, doublecomplex *q, integer *ldq, integer *iwork, doublereal *
	rwork, doublecomplex *tau, doublecomplex *work, integer *info);
 
/* Subroutine */ int __cdecl ZGTCON(char *norm, integer *n, doublecomplex *dl, 
	doublecomplex *d__, doublecomplex *du, doublecomplex *du2, integer *
	ipiv, doublereal *anorm, doublereal *rcond, doublecomplex *work, 
	integer *info);
 
/* Subroutine */ int __cdecl ZGTRFS(char *trans, integer *n, integer *nrhs, 
	doublecomplex *dl, doublecomplex *d__, doublecomplex *du, 
	doublecomplex *dlf, doublecomplex *df, doublecomplex *duf, 
	doublecomplex *du2, integer *ipiv, doublecomplex *b, integer *ldb, 
	doublecomplex *x, integer *ldx, doublereal *ferr, doublereal *berr, 
	doublecomplex *work, doublereal *rwork, integer *info);
 
/* Subroutine */ int __cdecl ZGTSV(integer *n, integer *nrhs, doublecomplex *dl, 
	doublecomplex *d__, doublecomplex *du, doublecomplex *b, integer *ldb,
	 integer *info);
 
/* Subroutine */ int __cdecl ZGTSVX(char *fact, char *trans, integer *n, integer *
	nrhs, doublecomplex *dl, doublecomplex *d__, doublecomplex *du, 
	doublecomplex *dlf, doublecomplex *df, doublecomplex *duf, 
	doublecomplex *du2, integer *ipiv, doublecomplex *b, integer *ldb, 
	doublecomplex *x, integer *ldx, doublereal *rcond, doublereal *ferr, 
	doublereal *berr, doublecomplex *work, doublereal *rwork, integer *
	info);
 
/* Subroutine */ int __cdecl ZGTTRF(integer *n, doublecomplex *dl, doublecomplex *
	d__, doublecomplex *du, doublecomplex *du2, integer *ipiv, integer *
	info);
 
/* Subroutine */ int __cdecl ZGTTRS(char *trans, integer *n, integer *nrhs, 
	doublecomplex *dl, doublecomplex *d__, doublecomplex *du, 
	doublecomplex *du2, integer *ipiv, doublecomplex *b, integer *ldb, 
	integer *info);
 
/* Subroutine */ int __cdecl ZGTTS2(integer *itrans, integer *n, integer *nrhs, 
	doublecomplex *dl, doublecomplex *d__, doublecomplex *du, 
	doublecomplex *du2, integer *ipiv, doublecomplex *b, integer *ldb);
 
/* Subroutine */ int __cdecl ZHBEV(char *jobz, char *uplo, integer *n, integer *kd, 
	doublecomplex *ab, integer *ldab, doublereal *w, doublecomplex *z__, 
	integer *ldz, doublecomplex *work, doublereal *rwork, integer *info);
 
/* Subroutine */ int __cdecl ZHBEVD(char *jobz, char *uplo, integer *n, integer *kd, 
	doublecomplex *ab, integer *ldab, doublereal *w, doublecomplex *z__, 
	integer *ldz, doublecomplex *work, integer *lwork, doublereal *rwork, 
	integer *lrwork, integer *iwork, integer *liwork, integer *info);
 
/* Subroutine */ int __cdecl ZHBEVX(char *jobz, char *range, char *uplo, integer *n, 
	integer *kd, doublecomplex *ab, integer *ldab, doublecomplex *q, 
	integer *ldq, doublereal *vl, doublereal *vu, integer *il, integer *
	iu, doublereal *abstol, integer *m, doublereal *w, doublecomplex *z__,
	 integer *ldz, doublecomplex *work, doublereal *rwork, integer *iwork,
	 integer *ifail, integer *info);
 
/* Subroutine */ int __cdecl ZHBGST(char *vect, char *uplo, integer *n, integer *ka, 
	integer *kb, doublecomplex *ab, integer *ldab, doublecomplex *bb, 
	integer *ldbb, doublecomplex *x, integer *ldx, doublecomplex *work, 
	doublereal *rwork, integer *info);
 
/* Subroutine */ int __cdecl ZHBGV(char *jobz, char *uplo, integer *n, integer *ka, 
	integer *kb, doublecomplex *ab, integer *ldab, doublecomplex *bb, 
	integer *ldbb, doublereal *w, doublecomplex *z__, integer *ldz, 
	doublecomplex *work, doublereal *rwork, integer *info);
 
/* Subroutine */ int __cdecl ZHBGVX(char *jobz, char *range, char *uplo, integer *n, 
	integer *ka, integer *kb, doublecomplex *ab, integer *ldab, 
	doublecomplex *bb, integer *ldbb, doublecomplex *q, integer *ldq, 
	doublereal *vl, doublereal *vu, integer *il, integer *iu, doublereal *
	abstol, integer *m, doublereal *w, doublecomplex *z__, integer *ldz, 
	doublecomplex *work, doublereal *rwork, integer *iwork, integer *
	ifail, integer *info);
 
/* Subroutine */ int __cdecl ZHBTRD(char *vect, char *uplo, integer *n, integer *kd, 
	doublecomplex *ab, integer *ldab, doublereal *d__, doublereal *e, 
	doublecomplex *q, integer *ldq, doublecomplex *work, integer *info);
 
/* Subroutine */ int __cdecl ZHECON(char *uplo, integer *n, doublecomplex *a, 
	integer *lda, integer *ipiv, doublereal *anorm, doublereal *rcond, 
	doublecomplex *work, integer *info);
 
/* Subroutine */ int __cdecl ZHEEV(char *jobz, char *uplo, integer *n, doublecomplex 
	*a, integer *lda, doublereal *w, doublecomplex *work, integer *lwork, 
	doublereal *rwork, integer *info);
 
/* Subroutine */ int __cdecl ZHEEVD(char *jobz, char *uplo, integer *n, 
	doublecomplex *a, integer *lda, doublereal *w, doublecomplex *work, 
	integer *lwork, doublereal *rwork, integer *lrwork, integer *iwork, 
	integer *liwork, integer *info);
 
/* Subroutine */ int __cdecl ZHEEVR(char *jobz, char *range, char *uplo, integer *n, 
	doublecomplex *a, integer *lda, doublereal *vl, doublereal *vu, 
	integer *il, integer *iu, doublereal *abstol, integer *m, doublereal *
	w, doublecomplex *z__, integer *ldz, integer *isuppz, doublecomplex *
	work, integer *lwork, doublereal *rwork, integer *lrwork, integer *
	iwork, integer *liwork, integer *info);
 
/* Subroutine */ int __cdecl ZHEEVX(char *jobz, char *range, char *uplo, integer *n, 
	doublecomplex *a, integer *lda, doublereal *vl, doublereal *vu, 
	integer *il, integer *iu, doublereal *abstol, integer *m, doublereal *
	w, doublecomplex *z__, integer *ldz, doublecomplex *work, integer *
	lwork, doublereal *rwork, integer *iwork, integer *ifail, integer *
	info);
 
/* Subroutine */ int __cdecl ZHEGS2(integer *itype, char *uplo, integer *n, 
	doublecomplex *a, integer *lda, doublecomplex *b, integer *ldb, 
	integer *info);
 
/* Subroutine */ int __cdecl ZHEGST(integer *itype, char *uplo, integer *n, 
	doublecomplex *a, integer *lda, doublecomplex *b, integer *ldb, 
	integer *info);
 
/* Subroutine */ int __cdecl ZHEGV(integer *itype, char *jobz, char *uplo, integer *
	n, doublecomplex *a, integer *lda, doublecomplex *b, integer *ldb, 
	doublereal *w, doublecomplex *work, integer *lwork, doublereal *rwork,
	 integer *info);
 
/* Subroutine */ int __cdecl ZHEGVD(integer *itype, char *jobz, char *uplo, integer *
	n, doublecomplex *a, integer *lda, doublecomplex *b, integer *ldb, 
	doublereal *w, doublecomplex *work, integer *lwork, doublereal *rwork,
	 integer *lrwork, integer *iwork, integer *liwork, integer *info);
 
/* Subroutine */ int __cdecl ZHEGVX(integer *itype, char *jobz, char *range, char *
	uplo, integer *n, doublecomplex *a, integer *lda, doublecomplex *b, 
	integer *ldb, doublereal *vl, doublereal *vu, integer *il, integer *
	iu, doublereal *abstol, integer *m, doublereal *w, doublecomplex *z__,
	 integer *ldz, doublecomplex *work, integer *lwork, doublereal *rwork,
	 integer *iwork, integer *ifail, integer *info);
 
/* Subroutine */ int __cdecl ZHERFS(char *uplo, integer *n, integer *nrhs, 
	doublecomplex *a, integer *lda, doublecomplex *af, integer *ldaf, 
	integer *ipiv, doublecomplex *b, integer *ldb, doublecomplex *x, 
	integer *ldx, doublereal *ferr, doublereal *berr, doublecomplex *work,
	 doublereal *rwork, integer *info);
 
/* Subroutine */ int __cdecl ZHESV(char *uplo, integer *n, integer *nrhs, 
	doublecomplex *a, integer *lda, integer *ipiv, doublecomplex *b, 
	integer *ldb, doublecomplex *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl ZHESVX(char *fact, char *uplo, integer *n, integer *
	nrhs, doublecomplex *a, integer *lda, doublecomplex *af, integer *
	ldaf, integer *ipiv, doublecomplex *b, integer *ldb, doublecomplex *x,
	 integer *ldx, doublereal *rcond, doublereal *ferr, doublereal *berr, 
	doublecomplex *work, integer *lwork, doublereal *rwork, integer *info);
 
/* Subroutine */ int __cdecl ZHETF2(char *uplo, integer *n, doublecomplex *a, 
	integer *lda, integer *ipiv, integer *info);
 
/* Subroutine */ int __cdecl ZHETRD(char *uplo, integer *n, doublecomplex *a, 
	integer *lda, doublereal *d__, doublereal *e, doublecomplex *tau, 
	doublecomplex *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl ZHETRF(char *uplo, integer *n, doublecomplex *a, 
	integer *lda, integer *ipiv, doublecomplex *work, integer *lwork, 
	integer *info);
 
/* Subroutine */ int __cdecl ZHETRI(char *uplo, integer *n, doublecomplex *a, 
	integer *lda, integer *ipiv, doublecomplex *work, integer *info);
 
/* Subroutine */ int __cdecl ZHETRS(char *uplo, integer *n, integer *nrhs, 
	doublecomplex *a, integer *lda, integer *ipiv, doublecomplex *b, 
	integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl ZHGEQZ(char *job, char *compq, char *compz, integer *n, 
	integer *ilo, integer *ihi, doublecomplex *a, integer *lda, 
	doublecomplex *b, integer *ldb, doublecomplex *alpha, doublecomplex *
	beta, doublecomplex *q, integer *ldq, doublecomplex *z__, integer *
	ldz, doublecomplex *work, integer *lwork, doublereal *rwork, integer *
	info);
 
/* Subroutine */ int __cdecl ZHPCON(char *uplo, integer *n, doublecomplex *ap, 
	integer *ipiv, doublereal *anorm, doublereal *rcond, doublecomplex *
	work, integer *info);
 
/* Subroutine */ int __cdecl ZHPEV(char *jobz, char *uplo, integer *n, doublecomplex 
	*ap, doublereal *w, doublecomplex *z__, integer *ldz, doublecomplex *
	work, doublereal *rwork, integer *info);
 
/* Subroutine */ int __cdecl ZHPEVD(char *jobz, char *uplo, integer *n, 
	doublecomplex *ap, doublereal *w, doublecomplex *z__, integer *ldz, 
	doublecomplex *work, integer *lwork, doublereal *rwork, integer *
	lrwork, integer *iwork, integer *liwork, integer *info);
 
/* Subroutine */ int __cdecl ZHPEVX(char *jobz, char *range, char *uplo, integer *n, 
	doublecomplex *ap, doublereal *vl, doublereal *vu, integer *il, 
	integer *iu, doublereal *abstol, integer *m, doublereal *w, 
	doublecomplex *z__, integer *ldz, doublecomplex *work, doublereal *
	rwork, integer *iwork, integer *ifail, integer *info);
 
/* Subroutine */ int __cdecl ZHPGST(integer *itype, char *uplo, integer *n, 
	doublecomplex *ap, doublecomplex *bp, integer *info);
 
/* Subroutine */ int __cdecl ZHPGV(integer *itype, char *jobz, char *uplo, integer *
	n, doublecomplex *ap, doublecomplex *bp, doublereal *w, doublecomplex 
	*z__, integer *ldz, doublecomplex *work, doublereal *rwork, integer *
	info);
 
/* Subroutine */ int __cdecl ZHPGVD(integer *itype, char *jobz, char *uplo, integer *
	n, doublecomplex *ap, doublecomplex *bp, doublereal *w, doublecomplex 
	*z__, integer *ldz, doublecomplex *work, integer *lwork, doublereal *
	rwork, integer *lrwork, integer *iwork, integer *liwork, integer *
	info);
 
/* Subroutine */ int __cdecl ZHPGVX(integer *itype, char *jobz, char *range, char *
	uplo, integer *n, doublecomplex *ap, doublecomplex *bp, doublereal *
	vl, doublereal *vu, integer *il, integer *iu, doublereal *abstol, 
	integer *m, doublereal *w, doublecomplex *z__, integer *ldz, 
	doublecomplex *work, doublereal *rwork, integer *iwork, integer *
	ifail, integer *info);
 
/* Subroutine */ int __cdecl ZHPRFS(char *uplo, integer *n, integer *nrhs, 
	doublecomplex *ap, doublecomplex *afp, integer *ipiv, doublecomplex *
	b, integer *ldb, doublecomplex *x, integer *ldx, doublereal *ferr, 
	doublereal *berr, doublecomplex *work, doublereal *rwork, integer *
	info);
 
/* Subroutine */ int __cdecl ZHPSV(char *uplo, integer *n, integer *nrhs, 
	doublecomplex *ap, integer *ipiv, doublecomplex *b, integer *ldb, 
	integer *info);
 
/* Subroutine */ int __cdecl ZHPSVX(char *fact, char *uplo, integer *n, integer *
	nrhs, doublecomplex *ap, doublecomplex *afp, integer *ipiv, 
	doublecomplex *b, integer *ldb, doublecomplex *x, integer *ldx, 
	doublereal *rcond, doublereal *ferr, doublereal *berr, doublecomplex *
	work, doublereal *rwork, integer *info);
 
/* Subroutine */ int __cdecl ZHPTRD(char *uplo, integer *n, doublecomplex *ap, 
	doublereal *d__, doublereal *e, doublecomplex *tau, integer *info);
 
/* Subroutine */ int __cdecl ZHPTRF(char *uplo, integer *n, doublecomplex *ap, 
	integer *ipiv, integer *info);
 
/* Subroutine */ int __cdecl ZHPTRI(char *uplo, integer *n, doublecomplex *ap, 
	integer *ipiv, doublecomplex *work, integer *info);
 
/* Subroutine */ int __cdecl ZHPTRS(char *uplo, integer *n, integer *nrhs, 
	doublecomplex *ap, integer *ipiv, doublecomplex *b, integer *ldb, 
	integer *info);
 
/* Subroutine */ int __cdecl ZHSEIN(char *side, char *eigsrc, char *initv, logical *
	select, integer *n, doublecomplex *h__, integer *ldh, doublecomplex *
	w, doublecomplex *vl, integer *ldvl, doublecomplex *vr, integer *ldvr,
	 integer *mm, integer *m, doublecomplex *work, doublereal *rwork, 
	integer *ifaill, integer *ifailr, integer *info);
 
/* Subroutine */ int __cdecl ZHSEQR(char *job, char *compz, integer *n, integer *ilo,
	 integer *ihi, doublecomplex *h__, integer *ldh, doublecomplex *w, 
	doublecomplex *z__, integer *ldz, doublecomplex *work, integer *lwork,
	 integer *info);
 
/* Subroutine */ int __cdecl ZLABRD(integer *m, integer *n, integer *nb, 
	doublecomplex *a, integer *lda, doublereal *d__, doublereal *e, 
	doublecomplex *tauq, doublecomplex *taup, doublecomplex *x, integer *
	ldx, doublecomplex *y, integer *ldy);
 
/* Subroutine */ int __cdecl ZLACGV(integer *n, doublecomplex *x, integer *incx);
 
/* Subroutine */ int __cdecl ZLACON(integer *n, doublecomplex *v, doublecomplex *x, 
	doublereal *est, integer *kase);
 
/* Subroutine */ int __cdecl ZLACP2(char *uplo, integer *m, integer *n, doublereal *
	a, integer *lda, doublecomplex *b, integer *ldb);
 
/* Subroutine */ int __cdecl ZLACPY(char *uplo, integer *m, integer *n, 
	doublecomplex *a, integer *lda, doublecomplex *b, integer *ldb);
 
/* Subroutine */ int __cdecl ZLACRM(integer *m, integer *n, doublecomplex *a, 
	integer *lda, doublereal *b, integer *ldb, doublecomplex *c__, 
	integer *ldc, doublereal *rwork);
 
/* Subroutine */ int __cdecl ZLACRT(integer *n, doublecomplex *cx, integer *incx, 
	doublecomplex *cy, integer *incy, doublecomplex *c__, doublecomplex *
	s);
 
/* Subroutine */ int __cdecl ZLAED0(integer *qsiz, integer *n, doublereal *d__, 
	doublereal *e, doublecomplex *q, integer *ldq, doublecomplex *qstore, 
	integer *ldqs, doublereal *rwork, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl ZLAED7(integer *n, integer *cutpnt, integer *qsiz, 
	integer *tlvls, integer *curlvl, integer *curpbm, doublereal *d__, 
	doublecomplex *q, integer *ldq, doublereal *rho, integer *indxq, 
	doublereal *qstore, integer *qptr, integer *prmptr, integer *perm, 
	integer *givptr, integer *givcol, doublereal *givnum, doublecomplex *
	work, doublereal *rwork, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl ZLAED8(integer *k, integer *n, integer *qsiz, 
	doublecomplex *q, integer *ldq, doublereal *d__, doublereal *rho, 
	integer *cutpnt, doublereal *z__, doublereal *dlamda, doublecomplex *
	q2, integer *ldq2, doublereal *w, integer *indxp, integer *indx, 
	integer *indxq, integer *perm, integer *givptr, integer *givcol, 
	doublereal *givnum, integer *info);
 
/* Subroutine */ int __cdecl ZLAEIN(logical *rightv, logical *noinit, integer *n, 
	doublecomplex *h__, integer *ldh, doublecomplex *w, doublecomplex *v, 
	doublecomplex *b, integer *ldb, doublereal *rwork, doublereal *eps3, 
	doublereal *smlnum, integer *info);
 
/* Subroutine */ int __cdecl ZLAESY(doublecomplex *a, doublecomplex *b, 
	doublecomplex *c__, doublecomplex *rt1, doublecomplex *rt2, 
	doublecomplex *evscal, doublecomplex *cs1, doublecomplex *sn1);
 
/* Subroutine */ int __cdecl ZLAEV2(doublecomplex *a, doublecomplex *b, 
	doublecomplex *c__, doublereal *rt1, doublereal *rt2, doublereal *cs1,
	 doublecomplex *sn1);
 
/* Subroutine */ int __cdecl ZLAGS2(logical *upper, doublereal *a1, doublecomplex *
	a2, doublereal *a3, doublereal *b1, doublecomplex *b2, doublereal *b3,
	 doublereal *csu, doublecomplex *snu, doublereal *csv, doublecomplex *
	snv, doublereal *csq, doublecomplex *snq);
 
/* Subroutine */ int __cdecl ZLAGTM(char *trans, integer *n, integer *nrhs, 
	doublereal *alpha, doublecomplex *dl, doublecomplex *d__, 
	doublecomplex *du, doublecomplex *x, integer *ldx, doublereal *beta, 
	doublecomplex *b, integer *ldb);
 
/* Subroutine */ int __cdecl ZLAHEF(char *uplo, integer *n, integer *nb, integer *kb,
	 doublecomplex *a, integer *lda, integer *ipiv, doublecomplex *w, 
	integer *ldw, integer *info);
 
/* Subroutine */ int __cdecl ZLAHQR(logical *wantt, logical *wantz, integer *n, 
	integer *ilo, integer *ihi, doublecomplex *h__, integer *ldh, 
	doublecomplex *w, integer *iloz, integer *ihiz, doublecomplex *z__, 
	integer *ldz, integer *info);
 
/* Subroutine */ int __cdecl ZLAHRD(integer *n, integer *k, integer *nb, 
	doublecomplex *a, integer *lda, doublecomplex *tau, doublecomplex *t, 
	integer *ldt, doublecomplex *y, integer *ldy);
 
/* Subroutine */ int __cdecl ZLAIC1(integer *job, integer *j, doublecomplex *x, 
	doublereal *sest, doublecomplex *w, doublecomplex *gamma, doublereal *
	sestpr, doublecomplex *s, doublecomplex *c__);
 
/* Subroutine */ int __cdecl ZLALS0(integer *icompq, integer *nl, integer *nr, 
	integer *sqre, integer *nrhs, doublecomplex *b, integer *ldb, 
	doublecomplex *bx, integer *ldbx, integer *perm, integer *givptr, 
	integer *givcol, integer *ldgcol, doublereal *givnum, integer *ldgnum,
	 doublereal *poles, doublereal *difl, doublereal *difr, doublereal *
	z__, integer *k, doublereal *c__, doublereal *s, doublereal *rwork, 
	integer *info);
 
/* Subroutine */ int __cdecl ZLALSA(integer *icompq, integer *smlsiz, integer *n, 
	integer *nrhs, doublecomplex *b, integer *ldb, doublecomplex *bx, 
	integer *ldbx, doublereal *u, integer *ldu, doublereal *vt, integer *
	k, doublereal *difl, doublereal *difr, doublereal *z__, doublereal *
	poles, integer *givptr, integer *givcol, integer *ldgcol, integer *
	perm, doublereal *givnum, doublereal *c__, doublereal *s, doublereal *
	rwork, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl ZLAPLL(integer *n, doublecomplex *x, integer *incx, 
	doublecomplex *y, integer *incy, doublereal *ssmin);
 
/* Subroutine */ int __cdecl ZLAPMT(logical *forwrd, integer *m, integer *n, 
	doublecomplex *x, integer *ldx, integer *k);
 
/* Subroutine */ int __cdecl ZLAQGB(integer *m, integer *n, integer *kl, integer *ku,
	 doublecomplex *ab, integer *ldab, doublereal *r__, doublereal *c__, 
	doublereal *rowcnd, doublereal *colcnd, doublereal *amax, char *equed);
 
/* Subroutine */ int __cdecl ZLAQGE(integer *m, integer *n, doublecomplex *a, 
	integer *lda, doublereal *r__, doublereal *c__, doublereal *rowcnd, 
	doublereal *colcnd, doublereal *amax, char *equed);
 
/* Subroutine */ int __cdecl ZLAQHB(char *uplo, integer *n, integer *kd, 
	doublecomplex *ab, integer *ldab, doublereal *s, doublereal *scond, 
	doublereal *amax, char *equed);
 
/* Subroutine */ int __cdecl ZLAQHE(char *uplo, integer *n, doublecomplex *a, 
	integer *lda, doublereal *s, doublereal *scond, doublereal *amax, 
	char *equed);
 
/* Subroutine */ int __cdecl ZLAQHP(char *uplo, integer *n, doublecomplex *ap, 
	doublereal *s, doublereal *scond, doublereal *amax, char *equed);
 
/* Subroutine */ int __cdecl ZLAQP2(integer *m, integer *n, integer *offset, 
	doublecomplex *a, integer *lda, integer *jpvt, doublecomplex *tau, 
	doublereal *vn1, doublereal *vn2, doublecomplex *work);
 
/* Subroutine */ int __cdecl ZLAQPS(integer *m, integer *n, integer *offset, integer 
	*nb, integer *kb, doublecomplex *a, integer *lda, integer *jpvt, 
	doublecomplex *tau, doublereal *vn1, doublereal *vn2, doublecomplex *
	auxv, doublecomplex *f, integer *ldf);
 
/* Subroutine */ int __cdecl ZLAQSB(char *uplo, integer *n, integer *kd, 
	doublecomplex *ab, integer *ldab, doublereal *s, doublereal *scond, 
	doublereal *amax, char *equed);
 
/* Subroutine */ int __cdecl ZLAQSP(char *uplo, integer *n, doublecomplex *ap, 
	doublereal *s, doublereal *scond, doublereal *amax, char *equed);
 
/* Subroutine */ int __cdecl ZLAQSY(char *uplo, integer *n, doublecomplex *a, 
	integer *lda, doublereal *s, doublereal *scond, doublereal *amax, 
	char *equed);
 
/* Subroutine */ int __cdecl ZLAR1V(integer *n, integer *b1, integer *bn, doublereal 
	*sigma, doublereal *d__, doublereal *l, doublereal *ld, doublereal *
	lld, doublereal *gersch, doublecomplex *z__, doublereal *ztz, 
	doublereal *mingma, integer *r__, integer *isuppz, doublereal *work);
 
/* Subroutine */ int __cdecl ZLAR2V(integer *n, doublecomplex *x, doublecomplex *y, 
	doublecomplex *z__, integer *incx, doublereal *c__, doublecomplex *s, 
	integer *incc);
 
/* Subroutine */ int __cdecl ZLARCM(integer *m, integer *n, doublereal *a, integer *
	lda, doublecomplex *b, integer *ldb, doublecomplex *c__, integer *ldc,
	 doublereal *rwork);
 
/* Subroutine */ int __cdecl ZLARF(char *side, integer *m, integer *n, doublecomplex 
	*v, integer *incv, doublecomplex *tau, doublecomplex *c__, integer *
	ldc, doublecomplex *work);
 
/* Subroutine */ int __cdecl ZLARFB(char *side, char *trans, char *direct, char *
	storev, integer *m, integer *n, integer *k, doublecomplex *v, integer 
	*ldv, doublecomplex *t, integer *ldt, doublecomplex *c__, integer *
	ldc, doublecomplex *work, integer *ldwork);
 
/* Subroutine */ int __cdecl ZLARFG(integer *n, doublecomplex *alpha, doublecomplex *
	x, integer *incx, doublecomplex *tau);
 
/* Subroutine */ int __cdecl ZLARFT(char *direct, char *storev, integer *n, integer *
	k, doublecomplex *v, integer *ldv, doublecomplex *tau, doublecomplex *
	t, integer *ldt);
 
/* Subroutine */ int __cdecl ZLARFX(char *side, integer *m, integer *n, 
	doublecomplex *v, doublecomplex *tau, doublecomplex *c__, integer *
	ldc, doublecomplex *work);
 
/* Subroutine */ int __cdecl ZLARGV(integer *n, doublecomplex *x, integer *incx, 
	doublecomplex *y, integer *incy, doublereal *c__, integer *incc);
 
/* Subroutine */ int __cdecl ZLARNV(integer *idist, integer *iseed, integer *n, 
	doublecomplex *x);
 
/* Subroutine */ int __cdecl ZLARRV(integer *n, doublereal *d__, doublereal *l, 
	integer *isplit, integer *m, doublereal *w, integer *iblock, 
	doublereal *gersch, doublereal *tol, doublecomplex *z__, integer *ldz,
	 integer *isuppz, doublereal *work, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl ZLARTG(doublecomplex *f, doublecomplex *g, doublereal *
	cs, doublecomplex *sn, doublecomplex *r__);
 
/* Subroutine */ int __cdecl ZLARTV(integer *n, doublecomplex *x, integer *incx, 
	doublecomplex *y, integer *incy, doublereal *c__, doublecomplex *s, 
	integer *incc);
 
/* Subroutine */ int __cdecl ZLARZ(char *side, integer *m, integer *n, integer *l, 
	doublecomplex *v, integer *incv, doublecomplex *tau, doublecomplex *
	c__, integer *ldc, doublecomplex *work);
 
/* Subroutine */ int __cdecl ZLARZB(char *side, char *trans, char *direct, char *
	storev, integer *m, integer *n, integer *k, integer *l, doublecomplex 
	*v, integer *ldv, doublecomplex *t, integer *ldt, doublecomplex *c__, 
	integer *ldc, doublecomplex *work, integer *ldwork);
 
/* Subroutine */ int __cdecl ZLARZT(char *direct, char *storev, integer *n, integer *
	k, doublecomplex *v, integer *ldv, doublecomplex *tau, doublecomplex *
	t, integer *ldt);
 
/* Subroutine */ int __cdecl ZLASCL(char *type__, integer *kl, integer *ku, 
	doublereal *cfrom, doublereal *cto, integer *m, integer *n, 
	doublecomplex *a, integer *lda, integer *info);
 
/* Subroutine */ int __cdecl ZLASET(char *uplo, integer *m, integer *n, 
	doublecomplex *alpha, doublecomplex *beta, doublecomplex *a, integer *
	lda);
 
/* Subroutine */ int __cdecl ZLASR(char *side, char *pivot, char *direct, integer *m,
	 integer *n, doublereal *c__, doublereal *s, doublecomplex *a, 
	integer *lda);
 
/* Subroutine */ int __cdecl ZLASSQ(integer *n, doublecomplex *x, integer *incx, 
	doublereal *scale, doublereal *sumsq);
 
/* Subroutine */ int __cdecl ZLASWP(integer *n, doublecomplex *a, integer *lda, 
	integer *k1, integer *k2, integer *ipiv, integer *incx);
 
/* Subroutine */ int __cdecl ZLASYF(char *uplo, integer *n, integer *nb, integer *kb,
	 doublecomplex *a, integer *lda, integer *ipiv, doublecomplex *w, 
	integer *ldw, integer *info);
 
/* Subroutine */ int __cdecl ZLATBS(char *uplo, char *trans, char *diag, char *
	normin, integer *n, integer *kd, doublecomplex *ab, integer *ldab, 
	doublecomplex *x, doublereal *scale, doublereal *cnorm, integer *info);
 
/* Subroutine */ int __cdecl ZLATDF(integer *ijob, integer *n, doublecomplex *z__, 
	integer *ldz, doublecomplex *rhs, doublereal *rdsum, doublereal *
	rdscal, integer *ipiv, integer *jpiv);
 
/* Subroutine */ int __cdecl ZLATPS(char *uplo, char *trans, char *diag, char *
	normin, integer *n, doublecomplex *ap, doublecomplex *x, doublereal *
	scale, doublereal *cnorm, integer *info);
 
/* Subroutine */ int __cdecl ZLATRD(char *uplo, integer *n, integer *nb, 
	doublecomplex *a, integer *lda, doublereal *e, doublecomplex *tau, 
	doublecomplex *w, integer *ldw);
 
/* Subroutine */ int __cdecl ZLATRS(char *uplo, char *trans, char *diag, char *
	normin, integer *n, doublecomplex *a, integer *lda, doublecomplex *x, 
	doublereal *scale, doublereal *cnorm, integer *info);
 
/* Subroutine */ int __cdecl ZLATRZ(integer *m, integer *n, integer *l, 
	doublecomplex *a, integer *lda, doublecomplex *tau, doublecomplex *
	work);
 
/* Subroutine */ int __cdecl ZLATZM(char *side, integer *m, integer *n, 
	doublecomplex *v, integer *incv, doublecomplex *tau, doublecomplex *
	c1, doublecomplex *c2, integer *ldc, doublecomplex *work);
 
/* Subroutine */ int __cdecl ZLAUU2(char *uplo, integer *n, doublecomplex *a, 
	integer *lda, integer *info);
 
/* Subroutine */ int __cdecl ZLAUUM(char *uplo, integer *n, doublecomplex *a, 
	integer *lda, integer *info);
 
/* Subroutine */ int __cdecl ZPBCON(char *uplo, integer *n, integer *kd, 
	doublecomplex *ab, integer *ldab, doublereal *anorm, doublereal *
	rcond, doublecomplex *work, doublereal *rwork, integer *info);
 
/* Subroutine */ int __cdecl ZPBEQU(char *uplo, integer *n, integer *kd, 
	doublecomplex *ab, integer *ldab, doublereal *s, doublereal *scond, 
	doublereal *amax, integer *info);
 
/* Subroutine */ int __cdecl ZPBRFS(char *uplo, integer *n, integer *kd, integer *
	nrhs, doublecomplex *ab, integer *ldab, doublecomplex *afb, integer *
	ldafb, doublecomplex *b, integer *ldb, doublecomplex *x, integer *ldx,
	 doublereal *ferr, doublereal *berr, doublecomplex *work, doublereal *
	rwork, integer *info);
 
/* Subroutine */ int __cdecl ZPBSTF(char *uplo, integer *n, integer *kd, 
	doublecomplex *ab, integer *ldab, integer *info);
 
/* Subroutine */ int __cdecl ZPBSV(char *uplo, integer *n, integer *kd, integer *
	nrhs, doublecomplex *ab, integer *ldab, doublecomplex *b, integer *
	ldb, integer *info);
 
/* Subroutine */ int __cdecl ZPBSVX(char *fact, char *uplo, integer *n, integer *kd, 
	integer *nrhs, doublecomplex *ab, integer *ldab, doublecomplex *afb, 
	integer *ldafb, char *equed, doublereal *s, doublecomplex *b, integer 
	*ldb, doublecomplex *x, integer *ldx, doublereal *rcond, doublereal *
	ferr, doublereal *berr, doublecomplex *work, doublereal *rwork, 
	integer *info);
 
/* Subroutine */ int __cdecl ZPBTF2(char *uplo, integer *n, integer *kd, 
	doublecomplex *ab, integer *ldab, integer *info);
 
/* Subroutine */ int __cdecl ZPBTRF(char *uplo, integer *n, integer *kd, 
	doublecomplex *ab, integer *ldab, integer *info);
 
/* Subroutine */ int __cdecl ZPBTRS(char *uplo, integer *n, integer *kd, integer *
	nrhs, doublecomplex *ab, integer *ldab, doublecomplex *b, integer *
	ldb, integer *info);
 
/* Subroutine */ int __cdecl ZPOCON(char *uplo, integer *n, doublecomplex *a, 
	integer *lda, doublereal *anorm, doublereal *rcond, doublecomplex *
	work, doublereal *rwork, integer *info);
 
/* Subroutine */ int __cdecl ZPOEQU(integer *n, doublecomplex *a, integer *lda, 
	doublereal *s, doublereal *scond, doublereal *amax, integer *info);
 
/* Subroutine */ int __cdecl ZPORFS(char *uplo, integer *n, integer *nrhs, 
	doublecomplex *a, integer *lda, doublecomplex *af, integer *ldaf, 
	doublecomplex *b, integer *ldb, doublecomplex *x, integer *ldx, 
	doublereal *ferr, doublereal *berr, doublecomplex *work, doublereal *
	rwork, integer *info);
 
/* Subroutine */ int __cdecl ZPOSV(char *uplo, integer *n, integer *nrhs, 
	doublecomplex *a, integer *lda, doublecomplex *b, integer *ldb, 
	integer *info);
 
/* Subroutine */ int __cdecl ZPOSVX(char *fact, char *uplo, integer *n, integer *
	nrhs, doublecomplex *a, integer *lda, doublecomplex *af, integer *
	ldaf, char *equed, doublereal *s, doublecomplex *b, integer *ldb, 
	doublecomplex *x, integer *ldx, doublereal *rcond, doublereal *ferr, 
	doublereal *berr, doublecomplex *work, doublereal *rwork, integer *
	info);
 
/* Subroutine */ int __cdecl ZPOTF2(char *uplo, integer *n, doublecomplex *a, 
	integer *lda, integer *info);
 
/* Subroutine */ int __cdecl ZPOTRF(char *uplo, integer *n, doublecomplex *a, 
	integer *lda, integer *info);
 
/* Subroutine */ int __cdecl ZPOTRI(char *uplo, integer *n, doublecomplex *a, 
	integer *lda, integer *info);
 
/* Subroutine */ int __cdecl ZPOTRS(char *uplo, integer *n, integer *nrhs, 
	doublecomplex *a, integer *lda, doublecomplex *b, integer *ldb, 
	integer *info);
 
/* Subroutine */ int __cdecl ZPPCON(char *uplo, integer *n, doublecomplex *ap, 
	doublereal *anorm, doublereal *rcond, doublecomplex *work, doublereal 
	*rwork, integer *info);
 
/* Subroutine */ int __cdecl ZPPEQU(char *uplo, integer *n, doublecomplex *ap, 
	doublereal *s, doublereal *scond, doublereal *amax, integer *info);
 
/* Subroutine */ int __cdecl ZPPRFS(char *uplo, integer *n, integer *nrhs, 
	doublecomplex *ap, doublecomplex *afp, doublecomplex *b, integer *ldb,
	 doublecomplex *x, integer *ldx, doublereal *ferr, doublereal *berr, 
	doublecomplex *work, doublereal *rwork, integer *info);
 
/* Subroutine */ int __cdecl ZPPSV(char *uplo, integer *n, integer *nrhs, 
	doublecomplex *ap, doublecomplex *b, integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl ZPPSVX(char *fact, char *uplo, integer *n, integer *
	nrhs, doublecomplex *ap, doublecomplex *afp, char *equed, doublereal *
	s, doublecomplex *b, integer *ldb, doublecomplex *x, integer *ldx, 
	doublereal *rcond, doublereal *ferr, doublereal *berr, doublecomplex *
	work, doublereal *rwork, integer *info);
 
/* Subroutine */ int __cdecl ZPPTRF(char *uplo, integer *n, doublecomplex *ap, 
	integer *info);
 
/* Subroutine */ int __cdecl ZPPTRI(char *uplo, integer *n, doublecomplex *ap, 
	integer *info);
 
/* Subroutine */ int __cdecl ZPPTRS(char *uplo, integer *n, integer *nrhs, 
	doublecomplex *ap, doublecomplex *b, integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl ZPTCON(integer *n, doublereal *d__, doublecomplex *e, 
	doublereal *anorm, doublereal *rcond, doublereal *rwork, integer *
	info);
 
/* Subroutine */ int __cdecl ZPTRFS(char *uplo, integer *n, integer *nrhs, 
	doublereal *d__, doublecomplex *e, doublereal *df, doublecomplex *ef, 
	doublecomplex *b, integer *ldb, doublecomplex *x, integer *ldx, 
	doublereal *ferr, doublereal *berr, doublecomplex *work, doublereal *
	rwork, integer *info);
 
/* Subroutine */ int __cdecl ZPTSV(integer *n, integer *nrhs, doublereal *d__, 
	doublecomplex *e, doublecomplex *b, integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl ZPTSVX(char *fact, integer *n, integer *nrhs, 
	doublereal *d__, doublecomplex *e, doublereal *df, doublecomplex *ef, 
	doublecomplex *b, integer *ldb, doublecomplex *x, integer *ldx, 
	doublereal *rcond, doublereal *ferr, doublereal *berr, doublecomplex *
	work, doublereal *rwork, integer *info);
 
/* Subroutine */ int __cdecl ZPTTRF(integer *n, doublereal *d__, doublecomplex *e, 
	integer *info);
 
/* Subroutine */ int __cdecl ZPTTRS(char *uplo, integer *n, integer *nrhs, 
	doublereal *d__, doublecomplex *e, doublecomplex *b, integer *ldb, 
	integer *info);
 
/* Subroutine */ int __cdecl ZPTTS2(integer *iuplo, integer *n, integer *nrhs, 
	doublereal *d__, doublecomplex *e, doublecomplex *b, integer *ldb);
 
/* Subroutine */ int __cdecl ZROT(integer *n, doublecomplex *cx, integer *incx, 
	doublecomplex *cy, integer *incy, doublereal *c__, doublecomplex *s);
 
/* Subroutine */ int __cdecl ZSPCON(char *uplo, integer *n, doublecomplex *ap, 
	integer *ipiv, doublereal *anorm, doublereal *rcond, doublecomplex *
	work, integer *info);
 
/* Subroutine */ int __cdecl ZSPMV(char *uplo, integer *n, doublecomplex *alpha, 
	doublecomplex *ap, doublecomplex *x, integer *incx, doublecomplex *
	beta, doublecomplex *y, integer *incy);
 
/* Subroutine */ int __cdecl ZSPR(char *uplo, integer *n, doublecomplex *alpha, 
	doublecomplex *x, integer *incx, doublecomplex *ap);
 
/* Subroutine */ int __cdecl ZSPRFS(char *uplo, integer *n, integer *nrhs, 
	doublecomplex *ap, doublecomplex *afp, integer *ipiv, doublecomplex *
	b, integer *ldb, doublecomplex *x, integer *ldx, doublereal *ferr, 
	doublereal *berr, doublecomplex *work, doublereal *rwork, integer *
	info);
 
/* Subroutine */ int __cdecl ZSPSV(char *uplo, integer *n, integer *nrhs, 
	doublecomplex *ap, integer *ipiv, doublecomplex *b, integer *ldb, 
	integer *info);
 
/* Subroutine */ int __cdecl ZSPSVX(char *fact, char *uplo, integer *n, integer *
	nrhs, doublecomplex *ap, doublecomplex *afp, integer *ipiv, 
	doublecomplex *b, integer *ldb, doublecomplex *x, integer *ldx, 
	doublereal *rcond, doublereal *ferr, doublereal *berr, doublecomplex *
	work, doublereal *rwork, integer *info);
 
/* Subroutine */ int __cdecl ZSPTRF(char *uplo, integer *n, doublecomplex *ap, 
	integer *ipiv, integer *info);
 
/* Subroutine */ int __cdecl ZSPTRI(char *uplo, integer *n, doublecomplex *ap, 
	integer *ipiv, doublecomplex *work, integer *info);
 
/* Subroutine */ int __cdecl ZSPTRS(char *uplo, integer *n, integer *nrhs, 
	doublecomplex *ap, integer *ipiv, doublecomplex *b, integer *ldb, 
	integer *info);
 
/* Subroutine */ int __cdecl ZSTEDC(char *compz, integer *n, doublereal *d__, 
	doublereal *e, doublecomplex *z__, integer *ldz, doublecomplex *work, 
	integer *lwork, doublereal *rwork, integer *lrwork, integer *iwork, 
	integer *liwork, integer *info);
 
/* Subroutine */ int __cdecl ZSTEIN(integer *n, doublereal *d__, doublereal *e, 
	integer *m, doublereal *w, integer *iblock, integer *isplit, 
	doublecomplex *z__, integer *ldz, doublereal *work, integer *iwork, 
	integer *ifail, integer *info);
 
/* Subroutine */ int __cdecl ZSTEQR(char *compz, integer *n, doublereal *d__, 
	doublereal *e, doublecomplex *z__, integer *ldz, doublereal *work, 
	integer *info);
 
/* Subroutine */ int __cdecl ZSYCON(char *uplo, integer *n, doublecomplex *a, 
	integer *lda, integer *ipiv, doublereal *anorm, doublereal *rcond, 
	doublecomplex *work, integer *info);
 
/* Subroutine */ int __cdecl ZSYMV(char *uplo, integer *n, doublecomplex *alpha, 
	doublecomplex *a, integer *lda, doublecomplex *x, integer *incx, 
	doublecomplex *beta, doublecomplex *y, integer *incy);
 
/* Subroutine */ int __cdecl ZSYR(char *uplo, integer *n, doublecomplex *alpha, 
	doublecomplex *x, integer *incx, doublecomplex *a, integer *lda);
 
/* Subroutine */ int __cdecl ZSYRFS(char *uplo, integer *n, integer *nrhs, 
	doublecomplex *a, integer *lda, doublecomplex *af, integer *ldaf, 
	integer *ipiv, doublecomplex *b, integer *ldb, doublecomplex *x, 
	integer *ldx, doublereal *ferr, doublereal *berr, doublecomplex *work,
	 doublereal *rwork, integer *info);
 
/* Subroutine */ int __cdecl ZSYSV(char *uplo, integer *n, integer *nrhs, 
	doublecomplex *a, integer *lda, integer *ipiv, doublecomplex *b, 
	integer *ldb, doublecomplex *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl ZSYSVX(char *fact, char *uplo, integer *n, integer *
	nrhs, doublecomplex *a, integer *lda, doublecomplex *af, integer *
	ldaf, integer *ipiv, doublecomplex *b, integer *ldb, doublecomplex *x,
	 integer *ldx, doublereal *rcond, doublereal *ferr, doublereal *berr, 
	doublecomplex *work, integer *lwork, doublereal *rwork, integer *info);
 
/* Subroutine */ int __cdecl ZSYTF2(char *uplo, integer *n, doublecomplex *a, 
	integer *lda, integer *ipiv, integer *info);
 
/* Subroutine */ int __cdecl ZSYTRF(char *uplo, integer *n, doublecomplex *a, 
	integer *lda, integer *ipiv, doublecomplex *work, integer *lwork, 
	integer *info);
 
/* Subroutine */ int __cdecl ZSYTRI(char *uplo, integer *n, doublecomplex *a, 
	integer *lda, integer *ipiv, doublecomplex *work, integer *info);
 
/* Subroutine */ int __cdecl ZSYTRS(char *uplo, integer *n, integer *nrhs, 
	doublecomplex *a, integer *lda, integer *ipiv, doublecomplex *b, 
	integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl ZTBCON(char *norm, char *uplo, char *diag, integer *n, 
	integer *kd, doublecomplex *ab, integer *ldab, doublereal *rcond, 
	doublecomplex *work, doublereal *rwork, integer *info);
 
/* Subroutine */ int __cdecl ZTBRFS(char *uplo, char *trans, char *diag, integer *n, 
	integer *kd, integer *nrhs, doublecomplex *ab, integer *ldab, 
	doublecomplex *b, integer *ldb, doublecomplex *x, integer *ldx, 
	doublereal *ferr, doublereal *berr, doublecomplex *work, doublereal *
	rwork, integer *info);
 
/* Subroutine */ int __cdecl ZTBTRS(char *uplo, char *trans, char *diag, integer *n, 
	integer *kd, integer *nrhs, doublecomplex *ab, integer *ldab, 
	doublecomplex *b, integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl ZTGEVC(char *side, char *howmny, logical *select, 
	integer *n, doublecomplex *a, integer *lda, doublecomplex *b, integer 
	*ldb, doublecomplex *vl, integer *ldvl, doublecomplex *vr, integer *
	ldvr, integer *mm, integer *m, doublecomplex *work, doublereal *rwork,
	 integer *info);
 
/* Subroutine */ int __cdecl ZTGEX2(logical *wantq, logical *wantz, integer *n, 
	doublecomplex *a, integer *lda, doublecomplex *b, integer *ldb, 
	doublecomplex *q, integer *ldq, doublecomplex *z__, integer *ldz, 
	integer *j1, integer *info);
 
/* Subroutine */ int __cdecl ZTGEXC(logical *wantq, logical *wantz, integer *n, 
	doublecomplex *a, integer *lda, doublecomplex *b, integer *ldb, 
	doublecomplex *q, integer *ldq, doublecomplex *z__, integer *ldz, 
	integer *ifst, integer *ilst, integer *info);
 
/* Subroutine */ int __cdecl ZTGSEN(integer *ijob, logical *wantq, logical *wantz, 
	logical *select, integer *n, doublecomplex *a, integer *lda, 
	doublecomplex *b, integer *ldb, doublecomplex *alpha, doublecomplex *
	beta, doublecomplex *q, integer *ldq, doublecomplex *z__, integer *
	ldz, integer *m, doublereal *pl, doublereal *pr, doublereal *dif, 
	doublecomplex *work, integer *lwork, integer *iwork, integer *liwork, 
	integer *info);
 
/* Subroutine */ int __cdecl ZTGSJA(char *jobu, char *jobv, char *jobq, integer *m, 
	integer *p, integer *n, integer *k, integer *l, doublecomplex *a, 
	integer *lda, doublecomplex *b, integer *ldb, doublereal *tola, 
	doublereal *tolb, doublereal *alpha, doublereal *beta, doublecomplex *
	u, integer *ldu, doublecomplex *v, integer *ldv, doublecomplex *q, 
	integer *ldq, doublecomplex *work, integer *ncycle, integer *info);
 
/* Subroutine */ int __cdecl ZTGSNA(char *job, char *howmny, logical *select, 
	integer *n, doublecomplex *a, integer *lda, doublecomplex *b, integer 
	*ldb, doublecomplex *vl, integer *ldvl, doublecomplex *vr, integer *
	ldvr, doublereal *s, doublereal *dif, integer *mm, integer *m, 
	doublecomplex *work, integer *lwork, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl ZTGSY2(char *trans, integer *ijob, integer *m, integer *
	n, doublecomplex *a, integer *lda, doublecomplex *b, integer *ldb, 
	doublecomplex *c__, integer *ldc, doublecomplex *d__, integer *ldd, 
	doublecomplex *e, integer *lde, doublecomplex *f, integer *ldf, 
	doublereal *scale, doublereal *rdsum, doublereal *rdscal, integer *
	info);
 
/* Subroutine */ int __cdecl ZTGSYL(char *trans, integer *ijob, integer *m, integer *
	n, doublecomplex *a, integer *lda, doublecomplex *b, integer *ldb, 
	doublecomplex *c__, integer *ldc, doublecomplex *d__, integer *ldd, 
	doublecomplex *e, integer *lde, doublecomplex *f, integer *ldf, 
	doublereal *scale, doublereal *dif, doublecomplex *work, integer *
	lwork, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl ZTPCON(char *norm, char *uplo, char *diag, integer *n, 
	doublecomplex *ap, doublereal *rcond, doublecomplex *work, doublereal 
	*rwork, integer *info);
 
/* Subroutine */ int __cdecl ZTPRFS(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, doublecomplex *ap, doublecomplex *b, integer *ldb, 
	doublecomplex *x, integer *ldx, doublereal *ferr, doublereal *berr, 
	doublecomplex *work, doublereal *rwork, integer *info);
 
/* Subroutine */ int __cdecl ZTPTRI(char *uplo, char *diag, integer *n, 
	doublecomplex *ap, integer *info);
 
/* Subroutine */ int __cdecl ZTPTRS(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, doublecomplex *ap, doublecomplex *b, integer *ldb, 
	integer *info);
 
/* Subroutine */ int __cdecl ZTRCON(char *norm, char *uplo, char *diag, integer *n, 
	doublecomplex *a, integer *lda, doublereal *rcond, doublecomplex *
	work, doublereal *rwork, integer *info);
 
/* Subroutine */ int __cdecl ZTREVC(char *side, char *howmny, logical *select, 
	integer *n, doublecomplex *t, integer *ldt, doublecomplex *vl, 
	integer *ldvl, doublecomplex *vr, integer *ldvr, integer *mm, integer 
	*m, doublecomplex *work, doublereal *rwork, integer *info);
 
/* Subroutine */ int __cdecl ZTREXC(char *compq, integer *n, doublecomplex *t, 
	integer *ldt, doublecomplex *q, integer *ldq, integer *ifst, integer *
	ilst, integer *info);
 
/* Subroutine */ int __cdecl ZTRRFS(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, doublecomplex *a, integer *lda, doublecomplex *b, 
	integer *ldb, doublecomplex *x, integer *ldx, doublereal *ferr, 
	doublereal *berr, doublecomplex *work, doublereal *rwork, integer *
	info);
 
/* Subroutine */ int __cdecl ZTRSEN(char *job, char *compq, logical *select, integer 
	*n, doublecomplex *t, integer *ldt, doublecomplex *q, integer *ldq, 
	doublecomplex *w, integer *m, doublereal *s, doublereal *sep, 
	doublecomplex *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl ZTRSNA(char *job, char *howmny, logical *select, 
	integer *n, doublecomplex *t, integer *ldt, doublecomplex *vl, 
	integer *ldvl, doublecomplex *vr, integer *ldvr, doublereal *s, 
	doublereal *sep, integer *mm, integer *m, doublecomplex *work, 
	integer *ldwork, doublereal *rwork, integer *info);
 
/* Subroutine */ int __cdecl ZTRSYL(char *trana, char *tranb, integer *isgn, integer 
	*m, integer *n, doublecomplex *a, integer *lda, doublecomplex *b, 
	integer *ldb, doublecomplex *c__, integer *ldc, doublereal *scale, 
	integer *info);
 
/* Subroutine */ int __cdecl ZTRTI2(char *uplo, char *diag, integer *n, 
	doublecomplex *a, integer *lda, integer *info);
 
/* Subroutine */ int __cdecl ZTRTRI(char *uplo, char *diag, integer *n, 
	doublecomplex *a, integer *lda, integer *info);
 
/* Subroutine */ int __cdecl ZTRTRS(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, doublecomplex *a, integer *lda, doublecomplex *b, 
	integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl ZTZRQF(integer *m, integer *n, doublecomplex *a, 
	integer *lda, doublecomplex *tau, integer *info);
 
/* Subroutine */ int __cdecl ZTZRZF(integer *m, integer *n, doublecomplex *a, 
	integer *lda, doublecomplex *tau, doublecomplex *work, integer *lwork,
	 integer *info);
 
/* Subroutine */ int __cdecl ZUNG2L(integer *m, integer *n, integer *k, 
	doublecomplex *a, integer *lda, doublecomplex *tau, doublecomplex *
	work, integer *info);
 
/* Subroutine */ int __cdecl ZUNG2R(integer *m, integer *n, integer *k, 
	doublecomplex *a, integer *lda, doublecomplex *tau, doublecomplex *
	work, integer *info);
 
/* Subroutine */ int __cdecl ZUNGBR(char *vect, integer *m, integer *n, integer *k, 
	doublecomplex *a, integer *lda, doublecomplex *tau, doublecomplex *
	work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl ZUNGHR(integer *n, integer *ilo, integer *ihi, 
	doublecomplex *a, integer *lda, doublecomplex *tau, doublecomplex *
	work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl ZUNGL2(integer *m, integer *n, integer *k, 
	doublecomplex *a, integer *lda, doublecomplex *tau, doublecomplex *
	work, integer *info);
 
/* Subroutine */ int __cdecl ZUNGLQ(integer *m, integer *n, integer *k, 
	doublecomplex *a, integer *lda, doublecomplex *tau, doublecomplex *
	work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl ZUNGQL(integer *m, integer *n, integer *k, 
	doublecomplex *a, integer *lda, doublecomplex *tau, doublecomplex *
	work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl ZUNGQR(integer *m, integer *n, integer *k, 
	doublecomplex *a, integer *lda, doublecomplex *tau, doublecomplex *
	work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl ZUNGR2(integer *m, integer *n, integer *k, 
	doublecomplex *a, integer *lda, doublecomplex *tau, doublecomplex *
	work, integer *info);
 
/* Subroutine */ int __cdecl ZUNGRQ(integer *m, integer *n, integer *k, 
	doublecomplex *a, integer *lda, doublecomplex *tau, doublecomplex *
	work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl ZUNGTR(char *uplo, integer *n, doublecomplex *a, 
	integer *lda, doublecomplex *tau, doublecomplex *work, integer *lwork,
	 integer *info);
 
/* Subroutine */ int __cdecl ZUNM2L(char *side, char *trans, integer *m, integer *n, 
	integer *k, doublecomplex *a, integer *lda, doublecomplex *tau, 
	doublecomplex *c__, integer *ldc, doublecomplex *work, integer *info);
 
/* Subroutine */ int __cdecl ZUNM2R(char *side, char *trans, integer *m, integer *n, 
	integer *k, doublecomplex *a, integer *lda, doublecomplex *tau, 
	doublecomplex *c__, integer *ldc, doublecomplex *work, integer *info);
 
/* Subroutine */ int __cdecl ZUNMBR(char *vect, char *side, char *trans, integer *m, 
	integer *n, integer *k, doublecomplex *a, integer *lda, doublecomplex 
	*tau, doublecomplex *c__, integer *ldc, doublecomplex *work, integer *
	lwork, integer *info);
 
/* Subroutine */ int __cdecl ZUNMHR(char *side, char *trans, integer *m, integer *n, 
	integer *ilo, integer *ihi, doublecomplex *a, integer *lda, 
	doublecomplex *tau, doublecomplex *c__, integer *ldc, doublecomplex *
	work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl ZUNML2(char *side, char *trans, integer *m, integer *n, 
	integer *k, doublecomplex *a, integer *lda, doublecomplex *tau, 
	doublecomplex *c__, integer *ldc, doublecomplex *work, integer *info);
 
/* Subroutine */ int __cdecl ZUNMLQ(char *side, char *trans, integer *m, integer *n, 
	integer *k, doublecomplex *a, integer *lda, doublecomplex *tau, 
	doublecomplex *c__, integer *ldc, doublecomplex *work, integer *lwork,
	 integer *info);
 
/* Subroutine */ int __cdecl ZUNMQL(char *side, char *trans, integer *m, integer *n, 
	integer *k, doublecomplex *a, integer *lda, doublecomplex *tau, 
	doublecomplex *c__, integer *ldc, doublecomplex *work, integer *lwork,
	 integer *info);
 
/* Subroutine */ int __cdecl ZUNMQR(char *side, char *trans, integer *m, integer *n, 
	integer *k, doublecomplex *a, integer *lda, doublecomplex *tau, 
	doublecomplex *c__, integer *ldc, doublecomplex *work, integer *lwork,
	 integer *info);
 
/* Subroutine */ int __cdecl ZUNMR2(char *side, char *trans, integer *m, integer *n, 
	integer *k, doublecomplex *a, integer *lda, doublecomplex *tau, 
	doublecomplex *c__, integer *ldc, doublecomplex *work, integer *info);
 
/* Subroutine */ int __cdecl ZUNMR3(char *side, char *trans, integer *m, integer *n, 
	integer *k, integer *l, doublecomplex *a, integer *lda, doublecomplex 
	*tau, doublecomplex *c__, integer *ldc, doublecomplex *work, integer *
	info);
 
/* Subroutine */ int __cdecl ZUNMRQ(char *side, char *trans, integer *m, integer *n, 
	integer *k, doublecomplex *a, integer *lda, doublecomplex *tau, 
	doublecomplex *c__, integer *ldc, doublecomplex *work, integer *lwork,
	 integer *info);
 
/* Subroutine */ int __cdecl ZUNMRZ(char *side, char *trans, integer *m, integer *n, 
	integer *k, integer *l, doublecomplex *a, integer *lda, doublecomplex 
	*tau, doublecomplex *c__, integer *ldc, doublecomplex *work, integer *
	lwork, integer *info);
 
/* Subroutine */ int __cdecl ZUNMTR(char *side, char *uplo, char *trans, integer *m, 
	integer *n, doublecomplex *a, integer *lda, doublecomplex *tau, 
	doublecomplex *c__, integer *ldc, doublecomplex *work, integer *lwork,
	 integer *info);
 
/* Subroutine */ int __cdecl ZUPGTR(char *uplo, integer *n, doublecomplex *ap, 
	doublecomplex *tau, doublecomplex *q, integer *ldq, doublecomplex *
	work, integer *info);
 
/* Subroutine */ int __cdecl ZUPMTR(char *side, char *uplo, char *trans, integer *m, 
	integer *n, doublecomplex *ap, doublecomplex *tau, doublecomplex *c__,
	 integer *ldc, doublecomplex *work, integer *info);
}
 
#else
 
 extern "C" {
#include "f2c.h" 
	 
//for LINUX (fz)
#define __cdecl   
	 
//get clapack.h header and convert it to intel fortran compatible header use www.editpadpro.com
//  search: /\* Subroutine \*/ int ([a-z0-9]+)_
//  replace with: /* Subroutine */ int __cdecl \U1
/* Subroutine */ int __cdecl cbdsqr_(char *uplo, integer *n, integer *ncvt, integer *
	nru, integer *ncc, real_ *d__, real_ *e, complex_ *vt, integer *ldvt, 
	complex_ *u, integer *ldu, complex_ *c__, integer *ldc, real_ *rwork, 
	integer *info);
 
/* Subroutine */ int __cdecl cgbbrd_(char *vect, integer *m, integer *n, integer *ncc,
	 integer *kl, integer *ku, complex_ *ab, integer *ldab, real_ *d__, 
	real_ *e, complex_ *q, integer *ldq, complex_ *pt, integer *ldpt, 
	complex_ *c__, integer *ldc, complex_ *work, real_ *rwork, integer *info);
 
/* Subroutine */ int __cdecl cgbcon_(char *norm, integer *n, integer *kl, integer *ku,
	 complex_ *ab, integer *ldab, integer *ipiv, real_ *anorm, real_ *rcond, 
	complex_ *work, real_ *rwork, integer *info);
 
/* Subroutine */ int __cdecl cgbequ_(integer *m, integer *n, integer *kl, integer *ku,
	 complex_ *ab, integer *ldab, real_ *r__, real_ *c__, real_ *rowcnd, real_ 
	*colcnd, real_ *amax, integer *info);
 
/* Subroutine */ int __cdecl cgbrfs_(char *trans, integer *n, integer *kl, integer *
	ku, integer *nrhs, complex_ *ab, integer *ldab, complex_ *afb, integer *
	ldafb, integer *ipiv, complex_ *b, integer *ldb, complex_ *x, integer *
	ldx, real_ *ferr, real_ *berr, complex_ *work, real_ *rwork, integer *
	info);
 
/* Subroutine */ int __cdecl cgbsv_(integer *n, integer *kl, integer *ku, integer *
	nrhs, complex_ *ab, integer *ldab, integer *ipiv, complex_ *b, integer *
	ldb, integer *info);
 
/* Subroutine */ int __cdecl cgbsvx_(char *fact, char *trans, integer *n, integer *kl,
	 integer *ku, integer *nrhs, complex_ *ab, integer *ldab, complex_ *afb,
	 integer *ldafb, integer *ipiv, char *equed, real_ *r__, real_ *c__, 
	complex_ *b, integer *ldb, complex_ *x, integer *ldx, real_ *rcond, real_ 
	*ferr, real_ *berr, complex_ *work, real_ *rwork, integer *info);
 
/* Subroutine */ int __cdecl cgbtf2_(integer *m, integer *n, integer *kl, integer *ku,
	 complex_ *ab, integer *ldab, integer *ipiv, integer *info);
 
/* Subroutine */ int __cdecl cgbtrf_(integer *m, integer *n, integer *kl, integer *ku,
	 complex_ *ab, integer *ldab, integer *ipiv, integer *info);
 
/* Subroutine */ int __cdecl cgbtrs_(char *trans, integer *n, integer *kl, integer *
	ku, integer *nrhs, complex_ *ab, integer *ldab, integer *ipiv, complex_ 
	*b, integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl cgebak_(char *job, char *side, integer *n, integer *ilo, 
	integer *ihi, real_ *scale, integer *m, complex_ *v, integer *ldv, 
	integer *info);
 
/* Subroutine */ int __cdecl cgebal_(char *job, integer *n, complex_ *a, integer *lda, 
	integer *ilo, integer *ihi, real_ *scale, integer *info);
 
/* Subroutine */ int __cdecl cgebd2_(integer *m, integer *n, complex_ *a, integer *lda,
	 real_ *d__, real_ *e, complex_ *tauq, complex_ *taup, complex_ *work, 
	integer *info);
 
/* Subroutine */ int __cdecl cgebrd_(integer *m, integer *n, complex_ *a, integer *lda,
	 real_ *d__, real_ *e, complex_ *tauq, complex_ *taup, complex_ *work, 
	integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl cgecon_(char *norm, integer *n, complex_ *a, integer *lda,
	 real_ *anorm, real_ *rcond, complex_ *work, real_ *rwork, integer *info);
 
/* Subroutine */ int __cdecl cgeequ_(integer *m, integer *n, complex_ *a, integer *lda,
	 real_ *r__, real_ *c__, real_ *rowcnd, real_ *colcnd, real_ *amax, 
	integer *info);
 
/* Subroutine */ int __cdecl cgees_(char *jobvs, char *sort, L_fp select, integer *n, 
	complex_ *a, integer *lda, integer *sdim, complex_ *w, complex_ *vs, 
	integer *ldvs, complex_ *work, integer *lwork, real_ *rwork, logical *
	bwork, integer *info);
 
/* Subroutine */ int __cdecl cgeesx_(char *jobvs, char *sort, L_fp select, char *
	sense, integer *n, complex_ *a, integer *lda, integer *sdim, complex_ *
	w, complex_ *vs, integer *ldvs, real_ *rconde, real_ *rcondv, complex_ *
	work, integer *lwork, real_ *rwork, logical *bwork, integer *info);
 
/* Subroutine */ int __cdecl cgeev_(char *jobvl, char *jobvr, integer *n, complex_ *a, 
	integer *lda, complex_ *w, complex_ *vl, integer *ldvl, complex_ *vr, 
	integer *ldvr, complex_ *work, integer *lwork, real_ *rwork, integer *
	info);
 
/* Subroutine */ int __cdecl cgeevx_(char *balanc, char *jobvl, char *jobvr, char *
	sense, integer *n, complex_ *a, integer *lda, complex_ *w, complex_ *vl, 
	integer *ldvl, complex_ *vr, integer *ldvr, integer *ilo, integer *ihi,
	 real_ *scale, real_ *abnrm, real_ *rconde, real_ *rcondv, complex_ *work, 
	integer *lwork, real_ *rwork, integer *info);
 
/* Subroutine */ int __cdecl cgegs_(char *jobvsl, char *jobvsr, integer *n, complex_ *
	a, integer *lda, complex_ *b, integer *ldb, complex_ *alpha, complex_ *
	beta, complex_ *vsl, integer *ldvsl, complex_ *vsr, integer *ldvsr, 
	complex_ *work, integer *lwork, real_ *rwork, integer *info);
 
/* Subroutine */ int __cdecl cgegv_(char *jobvl, char *jobvr, integer *n, complex_ *a, 
	integer *lda, complex_ *b, integer *ldb, complex_ *alpha, complex_ *beta,
	 complex_ *vl, integer *ldvl, complex_ *vr, integer *ldvr, complex_ *
	work, integer *lwork, real_ *rwork, integer *info);
 
/* Subroutine */ int __cdecl cgehd2_(integer *n, integer *ilo, integer *ihi, complex_ *
	a, integer *lda, complex_ *tau, complex_ *work, integer *info);
 
/* Subroutine */ int __cdecl cgehrd_(integer *n, integer *ilo, integer *ihi, complex_ *
	a, integer *lda, complex_ *tau, complex_ *work, integer *lwork, integer 
	*info);
 
/* Subroutine */ int __cdecl cgelq2_(integer *m, integer *n, complex_ *a, integer *lda,
	 complex_ *tau, complex_ *work, integer *info);
 
/* Subroutine */ int __cdecl cgelqf_(integer *m, integer *n, complex_ *a, integer *lda,
	 complex_ *tau, complex_ *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl cgels_(char *trans, integer *m, integer *n, integer *
	nrhs, complex_ *a, integer *lda, complex_ *b, integer *ldb, complex_ *
	work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl cgelsx_(integer *m, integer *n, integer *nrhs, complex_ *
	a, integer *lda, complex_ *b, integer *ldb, integer *jpvt, real_ *rcond,
	 integer *rank, complex_ *work, real_ *rwork, integer *info);
 
/* Subroutine */ int __cdecl cgelsy_(integer *m, integer *n, integer *nrhs, complex_ *
	a, integer *lda, complex_ *b, integer *ldb, integer *jpvt, real_ *rcond,
	 integer *rank, complex_ *work, integer *lwork, real_ *rwork, integer *
	info);
 
/* Subroutine */ int __cdecl cgeql2_(integer *m, integer *n, complex_ *a, integer *lda,
	 complex_ *tau, complex_ *work, integer *info);
 
/* Subroutine */ int __cdecl cgeqlf_(integer *m, integer *n, complex_ *a, integer *lda,
	 complex_ *tau, complex_ *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl cgeqp3_(integer *m, integer *n, complex_ *a, integer *lda,
	 integer *jpvt, complex_ *tau, complex_ *work, integer *lwork, real_ *
	rwork, integer *info);
 
/* Subroutine */ int __cdecl cgeqpf_(integer *m, integer *n, complex_ *a, integer *lda,
	 integer *jpvt, complex_ *tau, complex_ *work, real_ *rwork, integer *
	info);
 
/* Subroutine */ int __cdecl cgeqr2_(integer *m, integer *n, complex_ *a, integer *lda,
	 complex_ *tau, complex_ *work, integer *info);
 
/* Subroutine */ int __cdecl cgeqrf_(integer *m, integer *n, complex_ *a, integer *lda,
	 complex_ *tau, complex_ *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl cgerfs_(char *trans, integer *n, integer *nrhs, complex_ *
	a, integer *lda, complex_ *af, integer *ldaf, integer *ipiv, complex_ *
	b, integer *ldb, complex_ *x, integer *ldx, real_ *ferr, real_ *berr, 
	complex_ *work, real_ *rwork, integer *info);
 
/* Subroutine */ int __cdecl cgerq2_(integer *m, integer *n, complex_ *a, integer *lda,
	 complex_ *tau, complex_ *work, integer *info);
 
/* Subroutine */ int __cdecl cgerqf_(integer *m, integer *n, complex_ *a, integer *lda,
	 complex_ *tau, complex_ *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl cgesc2_(integer *n, complex_ *a, integer *lda, complex_ *
	rhs, integer *ipiv, integer *jpiv, real_ *scale);
 
/* Subroutine */ int __cdecl cgesv_(integer *n, integer *nrhs, complex_ *a, integer *
	lda, integer *ipiv, complex_ *b, integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl cgesvx_(char *fact, char *trans, integer *n, integer *
	nrhs, complex_ *a, integer *lda, complex_ *af, integer *ldaf, integer *
	ipiv, char *equed, real_ *r__, real_ *c__, complex_ *b, integer *ldb, 
	complex_ *x, integer *ldx, real_ *rcond, real_ *ferr, real_ *berr, 
	complex_ *work, real_ *rwork, integer *info);
 
/* Subroutine */ int __cdecl cgetc2_(integer *n, complex_ *a, integer *lda, integer *
	ipiv, integer *jpiv, integer *info);
 
/* Subroutine */ int __cdecl cgetf2_(integer *m, integer *n, complex_ *a, integer *lda,
	 integer *ipiv, integer *info);
 
/* Subroutine */ int __cdecl cgetrf_(integer *m, integer *n, complex_ *a, integer *lda,
	 integer *ipiv, integer *info);
 
/* Subroutine */ int __cdecl cgetri_(integer *n, complex_ *a, integer *lda, integer *
	ipiv, complex_ *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl cgetrs_(char *trans, integer *n, integer *nrhs, complex_ *
	a, integer *lda, integer *ipiv, complex_ *b, integer *ldb, integer *
	info);
 
/* Subroutine */ int __cdecl cggbak_(char *job, char *side, integer *n, integer *ilo, 
	integer *ihi, real_ *lscale, real_ *rscale, integer *m, complex_ *v, 
	integer *ldv, integer *info);
 
/* Subroutine */ int __cdecl cggbal_(char *job, integer *n, complex_ *a, integer *lda, 
	complex_ *b, integer *ldb, integer *ilo, integer *ihi, real_ *lscale, 
	real_ *rscale, real_ *work, integer *info);
 
/* Subroutine */ int __cdecl cgges_(char *jobvsl, char *jobvsr, char *sort, L_fp 
	selctg, integer *n, complex_ *a, integer *lda, complex_ *b, integer *
	ldb, integer *sdim, complex_ *alpha, complex_ *beta, complex_ *vsl, 
	integer *ldvsl, complex_ *vsr, integer *ldvsr, complex_ *work, integer *
	lwork, real_ *rwork, logical *bwork, integer *info);
 
/* Subroutine */ int __cdecl cggesx_(char *jobvsl, char *jobvsr, char *sort, L_fp 
	selctg, char *sense, integer *n, complex_ *a, integer *lda, complex_ *b,
	 integer *ldb, integer *sdim, complex_ *alpha, complex_ *beta, complex_ *
	vsl, integer *ldvsl, complex_ *vsr, integer *ldvsr, real_ *rconde, real_ 
	*rcondv, complex_ *work, integer *lwork, real_ *rwork, integer *iwork, 
	integer *liwork, logical *bwork, integer *info);
 
/* Subroutine */ int __cdecl cggev_(char *jobvl, char *jobvr, integer *n, complex_ *a, 
	integer *lda, complex_ *b, integer *ldb, complex_ *alpha, complex_ *beta,
	 complex_ *vl, integer *ldvl, complex_ *vr, integer *ldvr, complex_ *
	work, integer *lwork, real_ *rwork, integer *info);
 
/* Subroutine */ int __cdecl cggevx_(char *balanc, char *jobvl, char *jobvr, char *
	sense, integer *n, complex_ *a, integer *lda, complex_ *b, integer *ldb,
	 complex_ *alpha, complex_ *beta, complex_ *vl, integer *ldvl, complex_ *
	vr, integer *ldvr, integer *ilo, integer *ihi, real_ *lscale, real_ *
	rscale, real_ *abnrm, real_ *bbnrm, real_ *rconde, real_ *rcondv, complex_ 
	*work, integer *lwork, real_ *rwork, integer *iwork, logical *bwork, 
	integer *info);
 
/* Subroutine */ int __cdecl cggglm_(integer *n, integer *m, integer *p, complex_ *a, 
	integer *lda, complex_ *b, integer *ldb, complex_ *d__, complex_ *x, 
	complex_ *y, complex_ *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl cgghrd_(char *compq, char *compz, integer *n, integer *
	ilo, integer *ihi, complex_ *a, integer *lda, complex_ *b, integer *ldb,
	 complex_ *q, integer *ldq, complex_ *z__, integer *ldz, integer *info);
 
/* Subroutine */ int __cdecl cgglse_(integer *m, integer *n, integer *p, complex_ *a, 
	integer *lda, complex_ *b, integer *ldb, complex_ *c__, complex_ *d__, 
	complex_ *x, complex_ *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl cggqrf_(integer *n, integer *m, integer *p, complex_ *a, 
	integer *lda, complex_ *taua, complex_ *b, integer *ldb, complex_ *taub, 
	complex_ *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl cggrqf_(integer *m, integer *p, integer *n, complex_ *a, 
	integer *lda, complex_ *taua, complex_ *b, integer *ldb, complex_ *taub, 
	complex_ *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl cggsvd_(char *jobu, char *jobv, char *jobq, integer *m, 
	integer *n, integer *p, integer *k, integer *l, complex_ *a, integer *
	lda, complex_ *b, integer *ldb, real_ *alpha, real_ *beta, complex_ *u, 
	integer *ldu, complex_ *v, integer *ldv, complex_ *q, integer *ldq, 
	complex_ *work, real_ *rwork, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl cggsvp_(char *jobu, char *jobv, char *jobq, integer *m, 
	integer *p, integer *n, complex_ *a, integer *lda, complex_ *b, integer 
	*ldb, real_ *tola, real_ *tolb, integer *k, integer *l, complex_ *u, 
	integer *ldu, complex_ *v, integer *ldv, complex_ *q, integer *ldq, 
	integer *iwork, real_ *rwork, complex_ *tau, complex_ *work, integer *
	info);
 
/* Subroutine */ int __cdecl cgtcon_(char *norm, integer *n, complex_ *dl, complex_ *
	d__, complex_ *du, complex_ *du2, integer *ipiv, real_ *anorm, real_ *
	rcond, complex_ *work, integer *info);
 
/* Subroutine */ int __cdecl cgtrfs_(char *trans, integer *n, integer *nrhs, complex_ *
	dl, complex_ *d__, complex_ *du, complex_ *dlf, complex_ *df, complex_ *
	duf, complex_ *du2, integer *ipiv, complex_ *b, integer *ldb, complex_ *
	x, integer *ldx, real_ *ferr, real_ *berr, complex_ *work, real_ *rwork, 
	integer *info);
 
/* Subroutine */ int __cdecl cgtsv_(integer *n, integer *nrhs, complex_ *dl, complex_ *
	d__, complex_ *du, complex_ *b, integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl cgtsvx_(char *fact, char *trans, integer *n, integer *
	nrhs, complex_ *dl, complex_ *d__, complex_ *du, complex_ *dlf, complex_ *
	df, complex_ *duf, complex_ *du2, integer *ipiv, complex_ *b, integer *
	ldb, complex_ *x, integer *ldx, real_ *rcond, real_ *ferr, real_ *berr, 
	complex_ *work, real_ *rwork, integer *info);
 
/* Subroutine */ int __cdecl cgttrf_(integer *n, complex_ *dl, complex_ *d__, complex_ *
	du, complex_ *du2, integer *ipiv, integer *info);
 
/* Subroutine */ int __cdecl cgttrs_(char *trans, integer *n, integer *nrhs, complex_ *
	dl, complex_ *d__, complex_ *du, complex_ *du2, integer *ipiv, complex_ *
	b, integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl cgtts2_(integer *itrans, integer *n, integer *nrhs, 
	complex_ *dl, complex_ *d__, complex_ *du, complex_ *du2, integer *ipiv, 
	complex_ *b, integer *ldb);
 
/* Subroutine */ int __cdecl chbev_(char *jobz, char *uplo, integer *n, integer *kd, 
	complex_ *ab, integer *ldab, real_ *w, complex_ *z__, integer *ldz, 
	complex_ *work, real_ *rwork, integer *info);
 
/* Subroutine */ int __cdecl chbevd_(char *jobz, char *uplo, integer *n, integer *kd, 
	complex_ *ab, integer *ldab, real_ *w, complex_ *z__, integer *ldz, 
	complex_ *work, integer *lwork, real_ *rwork, integer *lrwork, integer *
	iwork, integer *liwork, integer *info);
 
/* Subroutine */ int __cdecl chbevx_(char *jobz, char *range, char *uplo, integer *n, 
	integer *kd, complex_ *ab, integer *ldab, complex_ *q, integer *ldq, 
	real_ *vl, real_ *vu, integer *il, integer *iu, real_ *abstol, integer *
	m, real_ *w, complex_ *z__, integer *ldz, complex_ *work, real_ *rwork, 
	integer *iwork, integer *ifail, integer *info);
 
/* Subroutine */ int __cdecl chbgst_(char *vect, char *uplo, integer *n, integer *ka, 
	integer *kb, complex_ *ab, integer *ldab, complex_ *bb, integer *ldbb, 
	complex_ *x, integer *ldx, complex_ *work, real_ *rwork, integer *info);
 
/* Subroutine */ int __cdecl chbgv_(char *jobz, char *uplo, integer *n, integer *ka, 
	integer *kb, complex_ *ab, integer *ldab, complex_ *bb, integer *ldbb, 
	real_ *w, complex_ *z__, integer *ldz, complex_ *work, real_ *rwork, 
	integer *info);
 
/* Subroutine */ int __cdecl chbgvx_(char *jobz, char *range, char *uplo, integer *n, 
	integer *ka, integer *kb, complex_ *ab, integer *ldab, complex_ *bb, 
	integer *ldbb, complex_ *q, integer *ldq, real_ *vl, real_ *vu, integer *
	il, integer *iu, real_ *abstol, integer *m, real_ *w, complex_ *z__, 
	integer *ldz, complex_ *work, real_ *rwork, integer *iwork, integer *
	ifail, integer *info);
 
/* Subroutine */ int __cdecl chbtrd_(char *vect, char *uplo, integer *n, integer *kd, 
	complex_ *ab, integer *ldab, real_ *d__, real_ *e, complex_ *q, integer *
	ldq, complex_ *work, integer *info);
 
/* Subroutine */ int __cdecl checon_(char *uplo, integer *n, complex_ *a, integer *lda,
	 integer *ipiv, real_ *anorm, real_ *rcond, complex_ *work, integer *
	info);
 
/* Subroutine */ int __cdecl cheev_(char *jobz, char *uplo, integer *n, complex_ *a, 
	integer *lda, real_ *w, complex_ *work, integer *lwork, real_ *rwork, 
	integer *info);
 
/* Subroutine */ int __cdecl cheevd_(char *jobz, char *uplo, integer *n, complex_ *a, 
	integer *lda, real_ *w, complex_ *work, integer *lwork, real_ *rwork, 
	integer *lrwork, integer *iwork, integer *liwork, integer *info);
 
/* Subroutine */ int __cdecl cheevr_(char *jobz, char *range, char *uplo, integer *n, 
	complex_ *a, integer *lda, real_ *vl, real_ *vu, integer *il, integer *
	iu, real_ *abstol, integer *m, real_ *w, complex_ *z__, integer *ldz, 
	integer *isuppz, complex_ *work, integer *lwork, real_ *rwork, integer *
	lrwork, integer *iwork, integer *liwork, integer *info);
 
/* Subroutine */ int __cdecl cheevx_(char *jobz, char *range, char *uplo, integer *n, 
	complex_ *a, integer *lda, real_ *vl, real_ *vu, integer *il, integer *
	iu, real_ *abstol, integer *m, real_ *w, complex_ *z__, integer *ldz, 
	complex_ *work, integer *lwork, real_ *rwork, integer *iwork, integer *
	ifail, integer *info);
 
/* Subroutine */ int __cdecl chegs2_(integer *itype, char *uplo, integer *n, complex_ *
	a, integer *lda, complex_ *b, integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl chegst_(integer *itype, char *uplo, integer *n, complex_ *
	a, integer *lda, complex_ *b, integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl chegv_(integer *itype, char *jobz, char *uplo, integer *
	n, complex_ *a, integer *lda, complex_ *b, integer *ldb, real_ *w, 
	complex_ *work, integer *lwork, real_ *rwork, integer *info);
 
/* Subroutine */ int __cdecl chegvd_(integer *itype, char *jobz, char *uplo, integer *
	n, complex_ *a, integer *lda, complex_ *b, integer *ldb, real_ *w, 
	complex_ *work, integer *lwork, real_ *rwork, integer *lrwork, integer *
	iwork, integer *liwork, integer *info);
 
/* Subroutine */ int __cdecl chegvx_(integer *itype, char *jobz, char *range, char *
	uplo, integer *n, complex_ *a, integer *lda, complex_ *b, integer *ldb, 
	real_ *vl, real_ *vu, integer *il, integer *iu, real_ *abstol, integer *
	m, real_ *w, complex_ *z__, integer *ldz, complex_ *work, integer *lwork,
	 real_ *rwork, integer *iwork, integer *ifail, integer *info);
 
/* Subroutine */ int __cdecl cherfs_(char *uplo, integer *n, integer *nrhs, complex_ *
	a, integer *lda, complex_ *af, integer *ldaf, integer *ipiv, complex_ *
	b, integer *ldb, complex_ *x, integer *ldx, real_ *ferr, real_ *berr, 
	complex_ *work, real_ *rwork, integer *info);
 
/* Subroutine */ int __cdecl chesv_(char *uplo, integer *n, integer *nrhs, complex_ *a,
	 integer *lda, integer *ipiv, complex_ *b, integer *ldb, complex_ *work,
	 integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl chesvx_(char *fact, char *uplo, integer *n, integer *
	nrhs, complex_ *a, integer *lda, complex_ *af, integer *ldaf, integer *
	ipiv, complex_ *b, integer *ldb, complex_ *x, integer *ldx, real_ *rcond,
	 real_ *ferr, real_ *berr, complex_ *work, integer *lwork, real_ *rwork, 
	integer *info);
 
/* Subroutine */ int __cdecl chetf2_(char *uplo, integer *n, complex_ *a, integer *lda,
	 integer *ipiv, integer *info);
 
/* Subroutine */ int __cdecl chetrd_(char *uplo, integer *n, complex_ *a, integer *lda,
	 real_ *d__, real_ *e, complex_ *tau, complex_ *work, integer *lwork, 
	integer *info);
 
/* Subroutine */ int __cdecl chetrf_(char *uplo, integer *n, complex_ *a, integer *lda,
	 integer *ipiv, complex_ *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl chetri_(char *uplo, integer *n, complex_ *a, integer *lda,
	 integer *ipiv, complex_ *work, integer *info);
 
/* Subroutine */ int __cdecl chetrs_(char *uplo, integer *n, integer *nrhs, complex_ *
	a, integer *lda, integer *ipiv, complex_ *b, integer *ldb, integer *
	info);
 
/* Subroutine */ int __cdecl chgeqz_(char *job, char *compq, char *compz, integer *n, 
	integer *ilo, integer *ihi, complex_ *a, integer *lda, complex_ *b, 
	integer *ldb, complex_ *alpha, complex_ *beta, complex_ *q, integer *ldq,
	 complex_ *z__, integer *ldz, complex_ *work, integer *lwork, real_ *
	rwork, integer *info);
 
/* Subroutine */ int __cdecl chpcon_(char *uplo, integer *n, complex_ *ap, integer *
	ipiv, real_ *anorm, real_ *rcond, complex_ *work, integer *info);
 
/* Subroutine */ int __cdecl chpev_(char *jobz, char *uplo, integer *n, complex_ *ap, 
	real_ *w, complex_ *z__, integer *ldz, complex_ *work, real_ *rwork, 
	integer *info);
 
/* Subroutine */ int __cdecl chpevd_(char *jobz, char *uplo, integer *n, complex_ *ap, 
	real_ *w, complex_ *z__, integer *ldz, complex_ *work, integer *lwork, 
	real_ *rwork, integer *lrwork, integer *iwork, integer *liwork, 
	integer *info);
 
/* Subroutine */ int __cdecl chpevx_(char *jobz, char *range, char *uplo, integer *n, 
	complex_ *ap, real_ *vl, real_ *vu, integer *il, integer *iu, real_ *
	abstol, integer *m, real_ *w, complex_ *z__, integer *ldz, complex_ *
	work, real_ *rwork, integer *iwork, integer *ifail, integer *info);
 
/* Subroutine */ int __cdecl chpgst_(integer *itype, char *uplo, integer *n, complex_ *
	ap, complex_ *bp, integer *info);
 
/* Subroutine */ int __cdecl chpgv_(integer *itype, char *jobz, char *uplo, integer *
	n, complex_ *ap, complex_ *bp, real_ *w, complex_ *z__, integer *ldz, 
	complex_ *work, real_ *rwork, integer *info);
 
/* Subroutine */ int __cdecl chpgvd_(integer *itype, char *jobz, char *uplo, integer *
	n, complex_ *ap, complex_ *bp, real_ *w, complex_ *z__, integer *ldz, 
	complex_ *work, integer *lwork, real_ *rwork, integer *lrwork, integer *
	iwork, integer *liwork, integer *info);
 
/* Subroutine */ int __cdecl chpgvx_(integer *itype, char *jobz, char *range, char *
	uplo, integer *n, complex_ *ap, complex_ *bp, real_ *vl, real_ *vu, 
	integer *il, integer *iu, real_ *abstol, integer *m, real_ *w, complex_ *
	z__, integer *ldz, complex_ *work, real_ *rwork, integer *iwork, 
	integer *ifail, integer *info);
 
/* Subroutine */ int __cdecl chprfs_(char *uplo, integer *n, integer *nrhs, complex_ *
	ap, complex_ *afp, integer *ipiv, complex_ *b, integer *ldb, complex_ *x,
	 integer *ldx, real_ *ferr, real_ *berr, complex_ *work, real_ *rwork, 
	integer *info);
 
/* Subroutine */ int __cdecl chpsv_(char *uplo, integer *n, integer *nrhs, complex_ *
	ap, integer *ipiv, complex_ *b, integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl chpsvx_(char *fact, char *uplo, integer *n, integer *
	nrhs, complex_ *ap, complex_ *afp, integer *ipiv, complex_ *b, integer *
	ldb, complex_ *x, integer *ldx, real_ *rcond, real_ *ferr, real_ *berr, 
	complex_ *work, real_ *rwork, integer *info);
 
/* Subroutine */ int __cdecl chptrd_(char *uplo, integer *n, complex_ *ap, real_ *d__, 
	real_ *e, complex_ *tau, integer *info);
 
/* Subroutine */ int __cdecl chptrf_(char *uplo, integer *n, complex_ *ap, integer *
	ipiv, integer *info);
 
/* Subroutine */ int __cdecl chptri_(char *uplo, integer *n, complex_ *ap, integer *
	ipiv, complex_ *work, integer *info);
 
/* Subroutine */ int __cdecl chptrs_(char *uplo, integer *n, integer *nrhs, complex_ *
	ap, integer *ipiv, complex_ *b, integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl chsein_(char *side, char *eigsrc, char *initv, logical *
	select, integer *n, complex_ *h__, integer *ldh, complex_ *w, complex_ *
	vl, integer *ldvl, complex_ *vr, integer *ldvr, integer *mm, integer *
	m, complex_ *work, real_ *rwork, integer *ifaill, integer *ifailr, 
	integer *info);
 
/* Subroutine */ int __cdecl chseqr_(char *job, char *compz, integer *n, integer *ilo,
	 integer *ihi, complex_ *h__, integer *ldh, complex_ *w, complex_ *z__, 
	integer *ldz, complex_ *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl clabrd_(integer *m, integer *n, integer *nb, complex_ *a, 
	integer *lda, real_ *d__, real_ *e, complex_ *tauq, complex_ *taup, 
	complex_ *x, integer *ldx, complex_ *y, integer *ldy);
 
/* Subroutine */ int __cdecl clacgv_(integer *n, complex_ *x, integer *incx);
 
/* Subroutine */ int __cdecl clacon_(integer *n, complex_ *v, complex_ *x, real_ *est, 
	integer *kase);
 
/* Subroutine */ int __cdecl clacp2_(char *uplo, integer *m, integer *n, real_ *a, 
	integer *lda, complex_ *b, integer *ldb);
 
/* Subroutine */ int __cdecl clacpy_(char *uplo, integer *m, integer *n, complex_ *a, 
	integer *lda, complex_ *b, integer *ldb);
 
/* Subroutine */ int __cdecl clacrm_(integer *m, integer *n, complex_ *a, integer *lda,
	 real_ *b, integer *ldb, complex_ *c__, integer *ldc, real_ *rwork);
 
/* Subroutine */ int __cdecl clacrt_(integer *n, complex_ *cx, integer *incx, complex_ *
	cy, integer *incy, complex_ *c__, complex_ *s);
 
/* Subroutine */ int __cdecl claed0_(integer *qsiz, integer *n, real_ *d__, real_ *e, 
	complex_ *q, integer *ldq, complex_ *qstore, integer *ldqs, real_ *rwork,
	 integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl claed7_(integer *n, integer *cutpnt, integer *qsiz, 
	integer *tlvls, integer *curlvl, integer *curpbm, real_ *d__, complex_ *
	q, integer *ldq, real_ *rho, integer *indxq, real_ *qstore, integer *
	qptr, integer *prmptr, integer *perm, integer *givptr, integer *
	givcol, real_ *givnum, complex_ *work, real_ *rwork, integer *iwork, 
	integer *info);
 
/* Subroutine */ int __cdecl claed8_(integer *k, integer *n, integer *qsiz, complex_ *
	q, integer *ldq, real_ *d__, real_ *rho, integer *cutpnt, real_ *z__, 
	real_ *dlamda, complex_ *q2, integer *ldq2, real_ *w, integer *indxp, 
	integer *indx, integer *indxq, integer *perm, integer *givptr, 
	integer *givcol, real_ *givnum, integer *info);
 
/* Subroutine */ int __cdecl claein_(logical *rightv, logical *noinit, integer *n, 
	complex_ *h__, integer *ldh, complex_ *w, complex_ *v, complex_ *b, 
	integer *ldb, real_ *rwork, real_ *eps3, real_ *smlnum, integer *info);
 
/* Subroutine */ int __cdecl claesy_(complex_ *a, complex_ *b, complex_ *c__, complex_ *
	rt1, complex_ *rt2, complex_ *evscal, complex_ *cs1, complex_ *sn1);
 
/* Subroutine */ int __cdecl claev2_(complex_ *a, complex_ *b, complex_ *c__, real_ *rt1, 
	real_ *rt2, real_ *cs1, complex_ *sn1);
 
/* Subroutine */ int __cdecl clags2_(logical *upper, real_ *a1, complex_ *a2, real_ *a3, 
	real_ *b1, complex_ *b2, real_ *b3, real_ *csu, complex_ *snu, real_ *csv, 
	complex_ *snv, real_ *csq, complex_ *snq);
 
/* Subroutine */ int __cdecl clagtm_(char *trans, integer *n, integer *nrhs, real_ *
	alpha, complex_ *dl, complex_ *d__, complex_ *du, complex_ *x, integer *
	ldx, real_ *beta, complex_ *b, integer *ldb);
 
/* Subroutine */ int __cdecl clahef_(char *uplo, integer *n, integer *nb, integer *kb,
	 complex_ *a, integer *lda, integer *ipiv, complex_ *w, integer *ldw, 
	integer *info);
 
/* Subroutine */ int __cdecl clahqr_(logical *wantt, logical *wantz, integer *n, 
	integer *ilo, integer *ihi, complex_ *h__, integer *ldh, complex_ *w, 
	integer *iloz, integer *ihiz, complex_ *z__, integer *ldz, integer *
	info);
 
/* Subroutine */ int __cdecl clahrd_(integer *n, integer *k, integer *nb, complex_ *a, 
	integer *lda, complex_ *tau, complex_ *t, integer *ldt, complex_ *y, 
	integer *ldy);
 
/* Subroutine */ int __cdecl claic1_(integer *job, integer *j, complex_ *x, real_ *sest,
	 complex_ *w, complex_ *gamma, real_ *sestpr, complex_ *s, complex_ *c__);
 
/* Subroutine */ int __cdecl clals0_(integer *icompq, integer *nl, integer *nr, 
	integer *sqre, integer *nrhs, complex_ *b, integer *ldb, complex_ *bx, 
	integer *ldbx, integer *perm, integer *givptr, integer *givcol, 
	integer *ldgcol, real_ *givnum, integer *ldgnum, real_ *poles, real_ *
	difl, real_ *difr, real_ *z__, integer *k, real_ *c__, real_ *s, real_ *
	rwork, integer *info);
 
/* Subroutine */ int __cdecl clalsa_(integer *icompq, integer *smlsiz, integer *n, 
	integer *nrhs, complex_ *b, integer *ldb, complex_ *bx, integer *ldbx, 
	real_ *u, integer *ldu, real_ *vt, integer *k, real_ *difl, real_ *difr, 
	real_ *z__, real_ *poles, integer *givptr, integer *givcol, integer *
	ldgcol, integer *perm, real_ *givnum, real_ *c__, real_ *s, real_ *rwork, 
	integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl clapll_(integer *n, complex_ *x, integer *incx, complex_ *
	y, integer *incy, real_ *ssmin);
 
/* Subroutine */ int __cdecl clapmt_(logical *forwrd, integer *m, integer *n, complex_ 
	*x, integer *ldx, integer *k);
 
/* Subroutine */ int __cdecl claqgb_(integer *m, integer *n, integer *kl, integer *ku,
	 complex_ *ab, integer *ldab, real_ *r__, real_ *c__, real_ *rowcnd, real_ 
	*colcnd, real_ *amax, char *equed);
 
/* Subroutine */ int __cdecl claqge_(integer *m, integer *n, complex_ *a, integer *lda,
	 real_ *r__, real_ *c__, real_ *rowcnd, real_ *colcnd, real_ *amax, char *
	equed);
 
/* Subroutine */ int __cdecl claqhb_(char *uplo, integer *n, integer *kd, complex_ *ab,
	 integer *ldab, real_ *s, real_ *scond, real_ *amax, char *equed);
 
/* Subroutine */ int __cdecl claqhe_(char *uplo, integer *n, complex_ *a, integer *lda,
	 real_ *s, real_ *scond, real_ *amax, char *equed);
 
/* Subroutine */ int __cdecl claqhp_(char *uplo, integer *n, complex_ *ap, real_ *s, 
	real_ *scond, real_ *amax, char *equed);
 
/* Subroutine */ int __cdecl claqp2_(integer *m, integer *n, integer *offset, complex_ 
	*a, integer *lda, integer *jpvt, complex_ *tau, real_ *vn1, real_ *vn2, 
	complex_ *work);
 
/* Subroutine */ int __cdecl claqps_(integer *m, integer *n, integer *offset, integer 
	*nb, integer *kb, complex_ *a, integer *lda, integer *jpvt, complex_ *
	tau, real_ *vn1, real_ *vn2, complex_ *auxv, complex_ *f, integer *ldf);
 
/* Subroutine */ int __cdecl claqsb_(char *uplo, integer *n, integer *kd, complex_ *ab,
	 integer *ldab, real_ *s, real_ *scond, real_ *amax, char *equed);
 
/* Subroutine */ int __cdecl claqsp_(char *uplo, integer *n, complex_ *ap, real_ *s, 
	real_ *scond, real_ *amax, char *equed);
 
/* Subroutine */ int __cdecl claqsy_(char *uplo, integer *n, complex_ *a, integer *lda,
	 real_ *s, real_ *scond, real_ *amax, char *equed);
 
/* Subroutine */ int __cdecl CLAR1V(integer *n, integer *b1, integer *bn, real_ *
	sigma, real_ *d__, real_ *l, real_ *ld, real_ *lld, real_ *gersch, complex_ 
	*z__, real_ *ztz, real_ *mingma, integer *r__, integer *isuppz, real_ *
	work);
 
/* Subroutine */ int __cdecl CLAR2V(integer *n, complex_ *x, complex_ *y, complex_ *z__,
	 integer *incx, real_ *c__, complex_ *s, integer *incc);
 
/* Subroutine */ int __cdecl clarcm_(integer *m, integer *n, real_ *a, integer *lda, 
	complex_ *b, integer *ldb, complex_ *c__, integer *ldc, real_ *rwork);
 
/* Subroutine */ int __cdecl clarf_(char *side, integer *m, integer *n, complex_ *v, 
	integer *incv, complex_ *tau, complex_ *c__, integer *ldc, complex_ *
	work);
 
/* Subroutine */ int __cdecl clarfb_(char *side, char *trans, char *direct, char *
	storev, integer *m, integer *n, integer *k, complex_ *v, integer *ldv, 
	complex_ *t, integer *ldt, complex_ *c__, integer *ldc, complex_ *work, 
	integer *ldwork);
 
/* Subroutine */ int __cdecl clarfg_(integer *n, complex_ *alpha, complex_ *x, integer *
	incx, complex_ *tau);
 
/* Subroutine */ int __cdecl clarft_(char *direct, char *storev, integer *n, integer *
	k, complex_ *v, integer *ldv, complex_ *tau, complex_ *t, integer *ldt);
 
/* Subroutine */ int __cdecl clarfx_(char *side, integer *m, integer *n, complex_ *v, 
	complex_ *tau, complex_ *c__, integer *ldc, complex_ *work);
 
/* Subroutine */ int __cdecl clargv_(integer *n, complex_ *x, integer *incx, complex_ *
	y, integer *incy, real_ *c__, integer *incc);
 
/* Subroutine */ int __cdecl clarnv_(integer *idist, integer *iseed, integer *n, 
	complex_ *x);
 
/* Subroutine */ int __cdecl clarrv_(integer *n, real_ *d__, real_ *l, integer *isplit, 
	integer *m, real_ *w, integer *iblock, real_ *gersch, real_ *tol, 
	complex_ *z__, integer *ldz, integer *isuppz, real_ *work, integer *
	iwork, integer *info);
 
/* Subroutine */ int __cdecl clartg_(complex_ *f, complex_ *g, real_ *cs, complex_ *sn, 
	complex_ *r__);
 
/* Subroutine */ int __cdecl clartv_(integer *n, complex_ *x, integer *incx, complex_ *
	y, integer *incy, real_ *c__, complex_ *s, integer *incc);
 
/* Subroutine */ int __cdecl clarz_(char *side, integer *m, integer *n, integer *l, 
	complex_ *v, integer *incv, complex_ *tau, complex_ *c__, integer *ldc, 
	complex_ *work);
 
/* Subroutine */ int __cdecl clarzb_(char *side, char *trans, char *direct, char *
	storev, integer *m, integer *n, integer *k, integer *l, complex_ *v, 
	integer *ldv, complex_ *t, integer *ldt, complex_ *c__, integer *ldc, 
	complex_ *work, integer *ldwork);
 
/* Subroutine */ int __cdecl clarzt_(char *direct, char *storev, integer *n, integer *
	k, complex_ *v, integer *ldv, complex_ *tau, complex_ *t, integer *ldt);
 
/* Subroutine */ int __cdecl clascl_(char *type__, integer *kl, integer *ku, real_ *
	cfrom, real_ *cto, integer *m, integer *n, complex_ *a, integer *lda, 
	integer *info);
 
/* Subroutine */ int __cdecl claset_(char *uplo, integer *m, integer *n, complex_ *
	alpha, complex_ *beta, complex_ *a, integer *lda);
 
/* Subroutine */ int __cdecl clasr_(char *side, char *pivot, char *direct, integer *m,
	 integer *n, real_ *c__, real_ *s, complex_ *a, integer *lda);
 
/* Subroutine */ int __cdecl classq_(integer *n, complex_ *x, integer *incx, real_ *
	scale, real_ *sumsq);
 
/* Subroutine */ int __cdecl claswp_(integer *n, complex_ *a, integer *lda, integer *
	k1, integer *k2, integer *ipiv, integer *incx);
 
/* Subroutine */ int __cdecl clasyf_(char *uplo, integer *n, integer *nb, integer *kb,
	 complex_ *a, integer *lda, integer *ipiv, complex_ *w, integer *ldw, 
	integer *info);
 
/* Subroutine */ int __cdecl clatbs_(char *uplo, char *trans, char *diag, char *
	normin, integer *n, integer *kd, complex_ *ab, integer *ldab, complex_ *
	x, real_ *scale, real_ *cnorm, integer *info);
 
/* Subroutine */ int __cdecl clatdf_(integer *ijob, integer *n, complex_ *z__, integer 
	*ldz, complex_ *rhs, real_ *rdsum, real_ *rdscal, integer *ipiv, integer 
	*jpiv);
 
/* Subroutine */ int __cdecl clatps_(char *uplo, char *trans, char *diag, char *
	normin, integer *n, complex_ *ap, complex_ *x, real_ *scale, real_ *cnorm,
	 integer *info);
 
/* Subroutine */ int __cdecl clatrd_(char *uplo, integer *n, integer *nb, complex_ *a, 
	integer *lda, real_ *e, complex_ *tau, complex_ *w, integer *ldw);
 
/* Subroutine */ int __cdecl clatrs_(char *uplo, char *trans, char *diag, char *
	normin, integer *n, complex_ *a, integer *lda, complex_ *x, real_ *scale,
	 real_ *cnorm, integer *info);
 
/* Subroutine */ int __cdecl clatrz_(integer *m, integer *n, integer *l, complex_ *a, 
	integer *lda, complex_ *tau, complex_ *work);
 
/* Subroutine */ int __cdecl clatzm_(char *side, integer *m, integer *n, complex_ *v, 
	integer *incv, complex_ *tau, complex_ *c1, complex_ *c2, integer *ldc, 
	complex_ *work);
 
/* Subroutine */ int __cdecl clauu2_(char *uplo, integer *n, complex_ *a, integer *lda,
	 integer *info);
 
/* Subroutine */ int __cdecl clauum_(char *uplo, integer *n, complex_ *a, integer *lda,
	 integer *info);
 
/* Subroutine */ int __cdecl cpbcon_(char *uplo, integer *n, integer *kd, complex_ *ab,
	 integer *ldab, real_ *anorm, real_ *rcond, complex_ *work, real_ *rwork, 
	integer *info);
 
/* Subroutine */ int __cdecl cpbequ_(char *uplo, integer *n, integer *kd, complex_ *ab,
	 integer *ldab, real_ *s, real_ *scond, real_ *amax, integer *info);
 
/* Subroutine */ int __cdecl cpbrfs_(char *uplo, integer *n, integer *kd, integer *
	nrhs, complex_ *ab, integer *ldab, complex_ *afb, integer *ldafb, 
	complex_ *b, integer *ldb, complex_ *x, integer *ldx, real_ *ferr, real_ *
	berr, complex_ *work, real_ *rwork, integer *info);
 
/* Subroutine */ int __cdecl cpbstf_(char *uplo, integer *n, integer *kd, complex_ *ab,
	 integer *ldab, integer *info);
 
/* Subroutine */ int __cdecl cpbsv_(char *uplo, integer *n, integer *kd, integer *
	nrhs, complex_ *ab, integer *ldab, complex_ *b, integer *ldb, integer *
	info);
 
/* Subroutine */ int __cdecl cpbsvx_(char *fact, char *uplo, integer *n, integer *kd, 
	integer *nrhs, complex_ *ab, integer *ldab, complex_ *afb, integer *
	ldafb, char *equed, real_ *s, complex_ *b, integer *ldb, complex_ *x, 
	integer *ldx, real_ *rcond, real_ *ferr, real_ *berr, complex_ *work, 
	real_ *rwork, integer *info);
 
/* Subroutine */ int __cdecl cpbtf2_(char *uplo, integer *n, integer *kd, complex_ *ab,
	 integer *ldab, integer *info);
 
/* Subroutine */ int __cdecl cpbtrf_(char *uplo, integer *n, integer *kd, complex_ *ab,
	 integer *ldab, integer *info);
 
/* Subroutine */ int __cdecl cpbtrs_(char *uplo, integer *n, integer *kd, integer *
	nrhs, complex_ *ab, integer *ldab, complex_ *b, integer *ldb, integer *
	info);
 
/* Subroutine */ int __cdecl cpocon_(char *uplo, integer *n, complex_ *a, integer *lda,
	 real_ *anorm, real_ *rcond, complex_ *work, real_ *rwork, integer *info);
 
/* Subroutine */ int __cdecl cpoequ_(integer *n, complex_ *a, integer *lda, real_ *s, 
	real_ *scond, real_ *amax, integer *info);
 
/* Subroutine */ int __cdecl cporfs_(char *uplo, integer *n, integer *nrhs, complex_ *
	a, integer *lda, complex_ *af, integer *ldaf, complex_ *b, integer *ldb,
	 complex_ *x, integer *ldx, real_ *ferr, real_ *berr, complex_ *work, 
	real_ *rwork, integer *info);
 
/* Subroutine */ int __cdecl cposv_(char *uplo, integer *n, integer *nrhs, complex_ *a,
	 integer *lda, complex_ *b, integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl cposvx_(char *fact, char *uplo, integer *n, integer *
	nrhs, complex_ *a, integer *lda, complex_ *af, integer *ldaf, char *
	equed, real_ *s, complex_ *b, integer *ldb, complex_ *x, integer *ldx, 
	real_ *rcond, real_ *ferr, real_ *berr, complex_ *work, real_ *rwork, 
	integer *info);
 
/* Subroutine */ int __cdecl cpotf2_(char *uplo, integer *n, complex_ *a, integer *lda,
	 integer *info);
 
/* Subroutine */ int __cdecl cpotrf_(char *uplo, integer *n, complex_ *a, integer *lda,
	 integer *info);
 
/* Subroutine */ int __cdecl cpotri_(char *uplo, integer *n, complex_ *a, integer *lda,
	 integer *info);
 
/* Subroutine */ int __cdecl cpotrs_(char *uplo, integer *n, integer *nrhs, complex_ *
	a, integer *lda, complex_ *b, integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl cppcon_(char *uplo, integer *n, complex_ *ap, real_ *anorm,
	 real_ *rcond, complex_ *work, real_ *rwork, integer *info);
 
/* Subroutine */ int __cdecl cppequ_(char *uplo, integer *n, complex_ *ap, real_ *s, 
	real_ *scond, real_ *amax, integer *info);
 
/* Subroutine */ int __cdecl cpprfs_(char *uplo, integer *n, integer *nrhs, complex_ *
	ap, complex_ *afp, complex_ *b, integer *ldb, complex_ *x, integer *ldx, 
	real_ *ferr, real_ *berr, complex_ *work, real_ *rwork, integer *info);
 
/* Subroutine */ int __cdecl cppsv_(char *uplo, integer *n, integer *nrhs, complex_ *
	ap, complex_ *b, integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl cppsvx_(char *fact, char *uplo, integer *n, integer *
	nrhs, complex_ *ap, complex_ *afp, char *equed, real_ *s, complex_ *b, 
	integer *ldb, complex_ *x, integer *ldx, real_ *rcond, real_ *ferr, real_ 
	*berr, complex_ *work, real_ *rwork, integer *info);
 
/* Subroutine */ int __cdecl cpptrf_(char *uplo, integer *n, complex_ *ap, integer *
	info);
 
/* Subroutine */ int __cdecl cpptri_(char *uplo, integer *n, complex_ *ap, integer *
	info);
 
/* Subroutine */ int __cdecl cpptrs_(char *uplo, integer *n, integer *nrhs, complex_ *
	ap, complex_ *b, integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl cptcon_(integer *n, real_ *d__, complex_ *e, real_ *anorm, 
	real_ *rcond, real_ *rwork, integer *info);
 
/* Subroutine */ int __cdecl cptrfs_(char *uplo, integer *n, integer *nrhs, real_ *d__,
	 complex_ *e, real_ *df, complex_ *ef, complex_ *b, integer *ldb, complex_ 
	*x, integer *ldx, real_ *ferr, real_ *berr, complex_ *work, real_ *rwork, 
	integer *info);
 
/* Subroutine */ int __cdecl cptsv_(integer *n, integer *nrhs, real_ *d__, complex_ *e, 
	complex_ *b, integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl cptsvx_(char *fact, integer *n, integer *nrhs, real_ *d__,
	 complex_ *e, real_ *df, complex_ *ef, complex_ *b, integer *ldb, complex_ 
	*x, integer *ldx, real_ *rcond, real_ *ferr, real_ *berr, complex_ *work, 
	real_ *rwork, integer *info);
 
/* Subroutine */ int __cdecl cpttrf_(integer *n, real_ *d__, complex_ *e, integer *info);
 
/* Subroutine */ int __cdecl cpttrs_(char *uplo, integer *n, integer *nrhs, real_ *d__,
	 complex_ *e, complex_ *b, integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl cptts2_(integer *iuplo, integer *n, integer *nrhs, real_ *
	d__, complex_ *e, complex_ *b, integer *ldb);
 
/* Subroutine */ int __cdecl CROT(integer *n, complex_ *cx, integer *incx, complex_ *
	cy, integer *incy, real_ *c__, complex_ *s);
 
/* Subroutine */ int __cdecl cspcon_(char *uplo, integer *n, complex_ *ap, integer *
	ipiv, real_ *anorm, real_ *rcond, complex_ *work, integer *info);
 
/* Subroutine */ int __cdecl cspmv_(char *uplo, integer *n, complex_ *alpha, complex_ *
	ap, complex_ *x, integer *incx, complex_ *beta, complex_ *y, integer *
	incy);
 
/* Subroutine */ int __cdecl CSPR(char *uplo, integer *n, complex_ *alpha, complex_ *x,
	 integer *incx, complex_ *ap);
 
/* Subroutine */ int __cdecl csprfs_(char *uplo, integer *n, integer *nrhs, complex_ *
	ap, complex_ *afp, integer *ipiv, complex_ *b, integer *ldb, complex_ *x,
	 integer *ldx, real_ *ferr, real_ *berr, complex_ *work, real_ *rwork, 
	integer *info);
 
/* Subroutine */ int __cdecl cspsv_(char *uplo, integer *n, integer *nrhs, complex_ *
	ap, integer *ipiv, complex_ *b, integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl cspsvx_(char *fact, char *uplo, integer *n, integer *
	nrhs, complex_ *ap, complex_ *afp, integer *ipiv, complex_ *b, integer *
	ldb, complex_ *x, integer *ldx, real_ *rcond, real_ *ferr, real_ *berr, 
	complex_ *work, real_ *rwork, integer *info);
 
/* Subroutine */ int __cdecl csptrf_(char *uplo, integer *n, complex_ *ap, integer *
	ipiv, integer *info);
 
/* Subroutine */ int __cdecl csptri_(char *uplo, integer *n, complex_ *ap, integer *
	ipiv, complex_ *work, integer *info);
 
/* Subroutine */ int __cdecl csptrs_(char *uplo, integer *n, integer *nrhs, complex_ *
	ap, integer *ipiv, complex_ *b, integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl csrot_(integer *n, complex_ *cx, integer *incx, complex_ *
	cy, integer *incy, real_ *c__, real_ *s);
 
/* Subroutine */ int __cdecl csrscl_(integer *n, real_ *sa, complex_ *sx, integer *incx);
 
/* Subroutine */ int __cdecl cstedc_(char *compz, integer *n, real_ *d__, real_ *e, 
	complex_ *z__, integer *ldz, complex_ *work, integer *lwork, real_ *
	rwork, integer *lrwork, integer *iwork, integer *liwork, integer *
	info);
 
/* Subroutine */ int __cdecl cstein_(integer *n, real_ *d__, real_ *e, integer *m, real_ 
	*w, integer *iblock, integer *isplit, complex_ *z__, integer *ldz, 
	real_ *work, integer *iwork, integer *ifail, integer *info);
 
/* Subroutine */ int __cdecl csteqr_(char *compz, integer *n, real_ *d__, real_ *e, 
	complex_ *z__, integer *ldz, real_ *work, integer *info);
 
/* Subroutine */ int __cdecl csycon_(char *uplo, integer *n, complex_ *a, integer *lda,
	 integer *ipiv, real_ *anorm, real_ *rcond, complex_ *work, integer *
	info);
 
/* Subroutine */ int __cdecl csymv_(char *uplo, integer *n, complex_ *alpha, complex_ *
	a, integer *lda, complex_ *x, integer *incx, complex_ *beta, complex_ *y,
	 integer *incy);
 
/* Subroutine */ int __cdecl CSYR(char *uplo, integer *n, complex_ *alpha, complex_ *x,
	 integer *incx, complex_ *a, integer *lda);
 
/* Subroutine */ int __cdecl csyrfs_(char *uplo, integer *n, integer *nrhs, complex_ *
	a, integer *lda, complex_ *af, integer *ldaf, integer *ipiv, complex_ *
	b, integer *ldb, complex_ *x, integer *ldx, real_ *ferr, real_ *berr, 
	complex_ *work, real_ *rwork, integer *info);
 
/* Subroutine */ int __cdecl csysv_(char *uplo, integer *n, integer *nrhs, complex_ *a,
	 integer *lda, integer *ipiv, complex_ *b, integer *ldb, complex_ *work,
	 integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl csysvx_(char *fact, char *uplo, integer *n, integer *
	nrhs, complex_ *a, integer *lda, complex_ *af, integer *ldaf, integer *
	ipiv, complex_ *b, integer *ldb, complex_ *x, integer *ldx, real_ *rcond,
	 real_ *ferr, real_ *berr, complex_ *work, integer *lwork, real_ *rwork, 
	integer *info);
 
/* Subroutine */ int __cdecl csytf2_(char *uplo, integer *n, complex_ *a, integer *lda,
	 integer *ipiv, integer *info);
 
/* Subroutine */ int __cdecl csytrf_(char *uplo, integer *n, complex_ *a, integer *lda,
	 integer *ipiv, complex_ *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl csytri_(char *uplo, integer *n, complex_ *a, integer *lda,
	 integer *ipiv, complex_ *work, integer *info);
 
/* Subroutine */ int __cdecl csytrs_(char *uplo, integer *n, integer *nrhs, complex_ *
	a, integer *lda, integer *ipiv, complex_ *b, integer *ldb, integer *
	info);
 
/* Subroutine */ int __cdecl ctbcon_(char *norm, char *uplo, char *diag, integer *n, 
	integer *kd, complex_ *ab, integer *ldab, real_ *rcond, complex_ *work, 
	real_ *rwork, integer *info);
 
/* Subroutine */ int __cdecl ctbrfs_(char *uplo, char *trans, char *diag, integer *n, 
	integer *kd, integer *nrhs, complex_ *ab, integer *ldab, complex_ *b, 
	integer *ldb, complex_ *x, integer *ldx, real_ *ferr, real_ *berr, 
	complex_ *work, real_ *rwork, integer *info);
 
/* Subroutine */ int __cdecl ctbtrs_(char *uplo, char *trans, char *diag, integer *n, 
	integer *kd, integer *nrhs, complex_ *ab, integer *ldab, complex_ *b, 
	integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl ctgevc_(char *side, char *howmny, logical *select, 
	integer *n, complex_ *a, integer *lda, complex_ *b, integer *ldb, 
	complex_ *vl, integer *ldvl, complex_ *vr, integer *ldvr, integer *mm, 
	integer *m, complex_ *work, real_ *rwork, integer *info);
 
/* Subroutine */ int __cdecl ctgex2_(logical *wantq, logical *wantz, integer *n, 
	complex_ *a, integer *lda, complex_ *b, integer *ldb, complex_ *q, 
	integer *ldq, complex_ *z__, integer *ldz, integer *j1, integer *info);
 
/* Subroutine */ int __cdecl ctgexc_(logical *wantq, logical *wantz, integer *n, 
	complex_ *a, integer *lda, complex_ *b, integer *ldb, complex_ *q, 
	integer *ldq, complex_ *z__, integer *ldz, integer *ifst, integer *
	ilst, integer *info);
 
/* Subroutine */ int __cdecl ctgsen_(integer *ijob, logical *wantq, logical *wantz, 
	logical *select, integer *n, complex_ *a, integer *lda, complex_ *b, 
	integer *ldb, complex_ *alpha, complex_ *beta, complex_ *q, integer *ldq,
	 complex_ *z__, integer *ldz, integer *m, real_ *pl, real_ *pr, real_ *
	dif, complex_ *work, integer *lwork, integer *iwork, integer *liwork, 
	integer *info);
 
/* Subroutine */ int __cdecl ctgsja_(char *jobu, char *jobv, char *jobq, integer *m, 
	integer *p, integer *n, integer *k, integer *l, complex_ *a, integer *
	lda, complex_ *b, integer *ldb, real_ *tola, real_ *tolb, real_ *alpha, 
	real_ *beta, complex_ *u, integer *ldu, complex_ *v, integer *ldv, 
	complex_ *q, integer *ldq, complex_ *work, integer *ncycle, integer *
	info);
 
/* Subroutine */ int __cdecl ctgsna_(char *job, char *howmny, logical *select, 
	integer *n, complex_ *a, integer *lda, complex_ *b, integer *ldb, 
	complex_ *vl, integer *ldvl, complex_ *vr, integer *ldvr, real_ *s, real_ 
	*dif, integer *mm, integer *m, complex_ *work, integer *lwork, integer 
	*iwork, integer *info);
 
/* Subroutine */ int __cdecl ctgsy2_(char *trans, integer *ijob, integer *m, integer *
	n, complex_ *a, integer *lda, complex_ *b, integer *ldb, complex_ *c__, 
	integer *ldc, complex_ *d__, integer *ldd, complex_ *e, integer *lde, 
	complex_ *f, integer *ldf, real_ *scale, real_ *rdsum, real_ *rdscal, 
	integer *info);
 
/* Subroutine */ int __cdecl ctgsyl_(char *trans, integer *ijob, integer *m, integer *
	n, complex_ *a, integer *lda, complex_ *b, integer *ldb, complex_ *c__, 
	integer *ldc, complex_ *d__, integer *ldd, complex_ *e, integer *lde, 
	complex_ *f, integer *ldf, real_ *scale, real_ *dif, complex_ *work, 
	integer *lwork, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl ctpcon_(char *norm, char *uplo, char *diag, integer *n, 
	complex_ *ap, real_ *rcond, complex_ *work, real_ *rwork, integer *info);
 
/* Subroutine */ int __cdecl ctprfs_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, complex_ *ap, complex_ *b, integer *ldb, complex_ *x, 
	integer *ldx, real_ *ferr, real_ *berr, complex_ *work, real_ *rwork, 
	integer *info);
 
/* Subroutine */ int __cdecl ctptri_(char *uplo, char *diag, integer *n, complex_ *ap, 
	integer *info);
 
/* Subroutine */ int __cdecl ctptrs_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, complex_ *ap, complex_ *b, integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl ctrcon_(char *norm, char *uplo, char *diag, integer *n, 
	complex_ *a, integer *lda, real_ *rcond, complex_ *work, real_ *rwork, 
	integer *info);
 
/* Subroutine */ int __cdecl ctrevc_(char *side, char *howmny, logical *select, 
	integer *n, complex_ *t, integer *ldt, complex_ *vl, integer *ldvl, 
	complex_ *vr, integer *ldvr, integer *mm, integer *m, complex_ *work, 
	real_ *rwork, integer *info);
 
/* Subroutine */ int __cdecl ctrexc_(char *compq, integer *n, complex_ *t, integer *
	ldt, complex_ *q, integer *ldq, integer *ifst, integer *ilst, integer *
	info);
 
/* Subroutine */ int __cdecl ctrrfs_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, complex_ *a, integer *lda, complex_ *b, integer *ldb, 
	complex_ *x, integer *ldx, real_ *ferr, real_ *berr, complex_ *work, real_ 
	*rwork, integer *info);
 
/* Subroutine */ int __cdecl ctrsen_(char *job, char *compq, logical *select, integer 
	*n, complex_ *t, integer *ldt, complex_ *q, integer *ldq, complex_ *w, 
	integer *m, real_ *s, real_ *sep, complex_ *work, integer *lwork, 
	integer *info);
 
/* Subroutine */ int __cdecl ctrsna_(char *job, char *howmny, logical *select, 
	integer *n, complex_ *t, integer *ldt, complex_ *vl, integer *ldvl, 
	complex_ *vr, integer *ldvr, real_ *s, real_ *sep, integer *mm, integer *
	m, complex_ *work, integer *ldwork, real_ *rwork, integer *info);
 
/* Subroutine */ int __cdecl ctrsyl_(char *trana, char *tranb, integer *isgn, integer 
	*m, integer *n, complex_ *a, integer *lda, complex_ *b, integer *ldb, 
	complex_ *c__, integer *ldc, real_ *scale, integer *info);
 
/* Subroutine */ int __cdecl ctrti2_(char *uplo, char *diag, integer *n, complex_ *a, 
	integer *lda, integer *info);
 
/* Subroutine */ int __cdecl ctrtri_(char *uplo, char *diag, integer *n, complex_ *a, 
	integer *lda, integer *info);
 
/* Subroutine */ int __cdecl ctrtrs_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, complex_ *a, integer *lda, complex_ *b, integer *ldb, 
	integer *info);
 
/* Subroutine */ int __cdecl ctzrqf_(integer *m, integer *n, complex_ *a, integer *lda,
	 complex_ *tau, integer *info);
 
/* Subroutine */ int __cdecl ctzrzf_(integer *m, integer *n, complex_ *a, integer *lda,
	 complex_ *tau, complex_ *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl CUNG2L(integer *m, integer *n, integer *k, complex_ *a, 
	integer *lda, complex_ *tau, complex_ *work, integer *info);
 
/* Subroutine */ int __cdecl CUNG2R(integer *m, integer *n, integer *k, complex_ *a, 
	integer *lda, complex_ *tau, complex_ *work, integer *info);
 
/* Subroutine */ int __cdecl cungbr_(char *vect, integer *m, integer *n, integer *k, 
	complex_ *a, integer *lda, complex_ *tau, complex_ *work, integer *lwork,
	 integer *info);
 
/* Subroutine */ int __cdecl cunghr_(integer *n, integer *ilo, integer *ihi, complex_ *
	a, integer *lda, complex_ *tau, complex_ *work, integer *lwork, integer 
	*info);
 
/* Subroutine */ int __cdecl cungl2_(integer *m, integer *n, integer *k, complex_ *a, 
	integer *lda, complex_ *tau, complex_ *work, integer *info);
 
/* Subroutine */ int __cdecl cunglq_(integer *m, integer *n, integer *k, complex_ *a, 
	integer *lda, complex_ *tau, complex_ *work, integer *lwork, integer *
	info);
 
/* Subroutine */ int __cdecl cungql_(integer *m, integer *n, integer *k, complex_ *a, 
	integer *lda, complex_ *tau, complex_ *work, integer *lwork, integer *
	info);
 
/* Subroutine */ int __cdecl cungqr_(integer *m, integer *n, integer *k, complex_ *a, 
	integer *lda, complex_ *tau, complex_ *work, integer *lwork, integer *
	info);
 
/* Subroutine */ int __cdecl cungr2_(integer *m, integer *n, integer *k, complex_ *a, 
	integer *lda, complex_ *tau, complex_ *work, integer *info);
 
/* Subroutine */ int __cdecl cungrq_(integer *m, integer *n, integer *k, complex_ *a, 
	integer *lda, complex_ *tau, complex_ *work, integer *lwork, integer *
	info);
 
/* Subroutine */ int __cdecl cungtr_(char *uplo, integer *n, complex_ *a, integer *lda,
	 complex_ *tau, complex_ *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl CUNM2L(char *side, char *trans, integer *m, integer *n, 
	integer *k, complex_ *a, integer *lda, complex_ *tau, complex_ *c__, 
	integer *ldc, complex_ *work, integer *info);
 
/* Subroutine */ int __cdecl CUNM2R(char *side, char *trans, integer *m, integer *n, 
	integer *k, complex_ *a, integer *lda, complex_ *tau, complex_ *c__, 
	integer *ldc, complex_ *work, integer *info);
 
/* Subroutine */ int __cdecl cunmbr_(char *vect, char *side, char *trans, integer *m, 
	integer *n, integer *k, complex_ *a, integer *lda, complex_ *tau, 
	complex_ *c__, integer *ldc, complex_ *work, integer *lwork, integer *
	info);
 
/* Subroutine */ int __cdecl cunmhr_(char *side, char *trans, integer *m, integer *n, 
	integer *ilo, integer *ihi, complex_ *a, integer *lda, complex_ *tau, 
	complex_ *c__, integer *ldc, complex_ *work, integer *lwork, integer *
	info);
 
/* Subroutine */ int __cdecl cunml2_(char *side, char *trans, integer *m, integer *n, 
	integer *k, complex_ *a, integer *lda, complex_ *tau, complex_ *c__, 
	integer *ldc, complex_ *work, integer *info);
 
/* Subroutine */ int __cdecl cunmlq_(char *side, char *trans, integer *m, integer *n, 
	integer *k, complex_ *a, integer *lda, complex_ *tau, complex_ *c__, 
	integer *ldc, complex_ *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl cunmql_(char *side, char *trans, integer *m, integer *n, 
	integer *k, complex_ *a, integer *lda, complex_ *tau, complex_ *c__, 
	integer *ldc, complex_ *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl cunmqr_(char *side, char *trans, integer *m, integer *n, 
	integer *k, complex_ *a, integer *lda, complex_ *tau, complex_ *c__, 
	integer *ldc, complex_ *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl cunmr2_(char *side, char *trans, integer *m, integer *n, 
	integer *k, complex_ *a, integer *lda, complex_ *tau, complex_ *c__, 
	integer *ldc, complex_ *work, integer *info);
 
/* Subroutine */ int __cdecl cunmr3_(char *side, char *trans, integer *m, integer *n, 
	integer *k, integer *l, complex_ *a, integer *lda, complex_ *tau, 
	complex_ *c__, integer *ldc, complex_ *work, integer *info);
 
/* Subroutine */ int __cdecl cunmrq_(char *side, char *trans, integer *m, integer *n, 
	integer *k, complex_ *a, integer *lda, complex_ *tau, complex_ *c__, 
	integer *ldc, complex_ *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl cunmrz_(char *side, char *trans, integer *m, integer *n, 
	integer *k, integer *l, complex_ *a, integer *lda, complex_ *tau, 
	complex_ *c__, integer *ldc, complex_ *work, integer *lwork, integer *
	info);
 
/* Subroutine */ int __cdecl cunmtr_(char *side, char *uplo, char *trans, integer *m, 
	integer *n, complex_ *a, integer *lda, complex_ *tau, complex_ *c__, 
	integer *ldc, complex_ *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl cupgtr_(char *uplo, integer *n, complex_ *ap, complex_ *
	tau, complex_ *q, integer *ldq, complex_ *work, integer *info);
 
/* Subroutine */ int __cdecl cupmtr_(char *side, char *uplo, char *trans, integer *m, 
	integer *n, complex_ *ap, complex_ *tau, complex_ *c__, integer *ldc, 
	complex_ *work, integer *info);
 
/* Subroutine */ int __cdecl dbdsdc_(char *uplo, char *compq, integer *n, doublereal *
	d__, doublereal *e, doublereal *u, integer *ldu, doublereal *vt, 
	integer *ldvt, doublereal *q, integer *iq, doublereal *work, integer *
	iwork, integer *info);
 
/* Subroutine */ int __cdecl dbdsqr_(char *uplo, integer *n, integer *ncvt, integer *
	nru, integer *ncc, doublereal *d__, doublereal *e, doublereal *vt, 
	integer *ldvt, doublereal *u, integer *ldu, doublereal *c__, integer *
	ldc, doublereal *work, integer *info);
 
/* Subroutine */ int __cdecl ddisna_(char *job, integer *m, integer *n, doublereal *
	d__, doublereal *sep, integer *info);
 
/* Subroutine */ int __cdecl dgbbrd_(char *vect, integer *m, integer *n, integer *ncc,
	 integer *kl, integer *ku, doublereal *ab, integer *ldab, doublereal *
	d__, doublereal *e, doublereal *q, integer *ldq, doublereal *pt, 
	integer *ldpt, doublereal *c__, integer *ldc, doublereal *work, 
	integer *info);
 
/* Subroutine */ int __cdecl dgbcon_(char *norm, integer *n, integer *kl, integer *ku,
	 doublereal *ab, integer *ldab, integer *ipiv, doublereal *anorm, 
	doublereal *rcond, doublereal *work, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl dgbequ_(integer *m, integer *n, integer *kl, integer *ku,
	 doublereal *ab, integer *ldab, doublereal *r__, doublereal *c__, 
	doublereal *rowcnd, doublereal *colcnd, doublereal *amax, integer *
	info);
 
/* Subroutine */ int __cdecl dgbrfs_(char *trans, integer *n, integer *kl, integer *
	ku, integer *nrhs, doublereal *ab, integer *ldab, doublereal *afb, 
	integer *ldafb, integer *ipiv, doublereal *b, integer *ldb, 
	doublereal *x, integer *ldx, doublereal *ferr, doublereal *berr, 
	doublereal *work, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl dgbsv_(integer *n, integer *kl, integer *ku, integer *
	nrhs, doublereal *ab, integer *ldab, integer *ipiv, doublereal *b, 
	integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl dgbsvx_(char *fact, char *trans, integer *n, integer *kl,
	 integer *ku, integer *nrhs, doublereal *ab, integer *ldab, 
	doublereal *afb, integer *ldafb, integer *ipiv, char *equed, 
	doublereal *r__, doublereal *c__, doublereal *b, integer *ldb, 
	doublereal *x, integer *ldx, doublereal *rcond, doublereal *ferr, 
	doublereal *berr, doublereal *work, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl dgbtf2_(integer *m, integer *n, integer *kl, integer *ku,
	 doublereal *ab, integer *ldab, integer *ipiv, integer *info);
 
/* Subroutine */ int __cdecl dgbtrf_(integer *m, integer *n, integer *kl, integer *ku,
	 doublereal *ab, integer *ldab, integer *ipiv, integer *info);
 
/* Subroutine */ int __cdecl dgbtrs_(char *trans, integer *n, integer *kl, integer *
	ku, integer *nrhs, doublereal *ab, integer *ldab, integer *ipiv, 
	doublereal *b, integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl dgebak_(char *job, char *side, integer *n, integer *ilo, 
	integer *ihi, doublereal *scale, integer *m, doublereal *v, integer *
	ldv, integer *info);
 
/* Subroutine */ int __cdecl dgebal_(char *job, integer *n, doublereal *a, integer *
	lda, integer *ilo, integer *ihi, doublereal *scale, integer *info);
 
/* Subroutine */ int __cdecl dgebd2_(integer *m, integer *n, doublereal *a, integer *
	lda, doublereal *d__, doublereal *e, doublereal *tauq, doublereal *
	taup, doublereal *work, integer *info);
 
/* Subroutine */ int __cdecl dgebrd_(integer *m, integer *n, doublereal *a, integer *
	lda, doublereal *d__, doublereal *e, doublereal *tauq, doublereal *
	taup, doublereal *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl dgecon_(char *norm, integer *n, doublereal *a, integer *
	lda, doublereal *anorm, doublereal *rcond, doublereal *work, integer *
	iwork, integer *info);
 
/* Subroutine */ int __cdecl dgeequ_(integer *m, integer *n, doublereal *a, integer *
	lda, doublereal *r__, doublereal *c__, doublereal *rowcnd, doublereal 
	*colcnd, doublereal *amax, integer *info);
 
/* Subroutine */ int __cdecl dgees_(char *jobvs, char *sort, L_fp select, integer *n, 
	doublereal *a, integer *lda, integer *sdim, doublereal *wr, 
	doublereal *wi, doublereal *vs, integer *ldvs, doublereal *work, 
	integer *lwork, logical *bwork, integer *info);
 
/* Subroutine */ int __cdecl dgeesx_(char *jobvs, char *sort, L_fp select, char *
	sense, integer *n, doublereal *a, integer *lda, integer *sdim, 
	doublereal *wr, doublereal *wi, doublereal *vs, integer *ldvs, 
	doublereal *rconde, doublereal *rcondv, doublereal *work, integer *
	lwork, integer *iwork, integer *liwork, logical *bwork, integer *info);
 
/* Subroutine */ int __cdecl dgeev_(char *jobvl, char *jobvr, integer *n, doublereal *
	a, integer *lda, doublereal *wr, doublereal *wi, doublereal *vl, 
	integer *ldvl, doublereal *vr, integer *ldvr, doublereal *work, 
	integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl dgeevx_(char *balanc, char *jobvl, char *jobvr, char *
	sense, integer *n, doublereal *a, integer *lda, doublereal *wr, 
	doublereal *wi, doublereal *vl, integer *ldvl, doublereal *vr, 
	integer *ldvr, integer *ilo, integer *ihi, doublereal *scale, 
	doublereal *abnrm, doublereal *rconde, doublereal *rcondv, doublereal 
	*work, integer *lwork, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl dgegs_(char *jobvsl, char *jobvsr, integer *n, 
	doublereal *a, integer *lda, doublereal *b, integer *ldb, doublereal *
	alphar, doublereal *alphai, doublereal *beta, doublereal *vsl, 
	integer *ldvsl, doublereal *vsr, integer *ldvsr, doublereal *work, 
	integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl dgegv_(char *jobvl, char *jobvr, integer *n, doublereal *
	a, integer *lda, doublereal *b, integer *ldb, doublereal *alphar, 
	doublereal *alphai, doublereal *beta, doublereal *vl, integer *ldvl, 
	doublereal *vr, integer *ldvr, doublereal *work, integer *lwork, 
	integer *info);
 
/* Subroutine */ int __cdecl dgehd2_(integer *n, integer *ilo, integer *ihi, 
	doublereal *a, integer *lda, doublereal *tau, doublereal *work, 
	integer *info);
 
/* Subroutine */ int __cdecl dgehrd_(integer *n, integer *ilo, integer *ihi, 
	doublereal *a, integer *lda, doublereal *tau, doublereal *work, 
	integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl dgelq2_(integer *m, integer *n, doublereal *a, integer *
	lda, doublereal *tau, doublereal *work, integer *info);
 
/* Subroutine */ int __cdecl dgelqf_(integer *m, integer *n, doublereal *a, integer *
	lda, doublereal *tau, doublereal *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl dgels_(char *trans, integer *m, integer *n, integer *
	nrhs, doublereal *a, integer *lda, doublereal *b, integer *ldb, 
	doublereal *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl dgelsd_(integer *m, integer *n, integer *nrhs, 
	doublereal *a, integer *lda, doublereal *b, integer *ldb, doublereal *
	s, doublereal *rcond, integer *rank, doublereal *work, integer *lwork,
	 integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl dgelss_(integer *m, integer *n, integer *nrhs, 
	doublereal *a, integer *lda, doublereal *b, integer *ldb, doublereal *
	s, doublereal *rcond, integer *rank, doublereal *work, integer *lwork,
	 integer *info);
 
/* Subroutine */ int __cdecl dgelsx_(integer *m, integer *n, integer *nrhs, 
	doublereal *a, integer *lda, doublereal *b, integer *ldb, integer *
	jpvt, doublereal *rcond, integer *rank, doublereal *work, integer *
	info);
 
/* Subroutine */ int __cdecl dgelsy_(integer *m, integer *n, integer *nrhs, 
	doublereal *a, integer *lda, doublereal *b, integer *ldb, integer *
	jpvt, doublereal *rcond, integer *rank, doublereal *work, integer *
	lwork, integer *info);
 
/* Subroutine */ int __cdecl dgeql2_(integer *m, integer *n, doublereal *a, integer *
	lda, doublereal *tau, doublereal *work, integer *info);
 
/* Subroutine */ int __cdecl dgeqlf_(integer *m, integer *n, doublereal *a, integer *
	lda, doublereal *tau, doublereal *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl dgeqp3_(integer *m, integer *n, doublereal *a, integer *
	lda, integer *jpvt, doublereal *tau, doublereal *work, integer *lwork,
	 integer *info);
 
/* Subroutine */ int __cdecl dgeqpf_(integer *m, integer *n, doublereal *a, integer *
	lda, integer *jpvt, doublereal *tau, doublereal *work, integer *info);
 
/* Subroutine */ int __cdecl dgeqr2_(integer *m, integer *n, doublereal *a, integer *
	lda, doublereal *tau, doublereal *work, integer *info);
 
/* Subroutine */ int __cdecl dgeqrf_(integer *m, integer *n, doublereal *a, integer *
	lda, doublereal *tau, doublereal *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl dgerfs_(char *trans, integer *n, integer *nrhs, 
	doublereal *a, integer *lda, doublereal *af, integer *ldaf, integer *
	ipiv, doublereal *b, integer *ldb, doublereal *x, integer *ldx, 
	doublereal *ferr, doublereal *berr, doublereal *work, integer *iwork, 
	integer *info);
 
/* Subroutine */ int __cdecl dgerq2_(integer *m, integer *n, doublereal *a, integer *
	lda, doublereal *tau, doublereal *work, integer *info);
 
/* Subroutine */ int __cdecl dgerqf_(integer *m, integer *n, doublereal *a, integer *
	lda, doublereal *tau, doublereal *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl dgesc2_(integer *n, doublereal *a, integer *lda, 
	doublereal *rhs, integer *ipiv, integer *jpiv, doublereal *scale);
 
/* Subroutine */ int __cdecl dgesdd_(char *jobz, integer *m, integer *n, doublereal *
	a, integer *lda, doublereal *s, doublereal *u, integer *ldu, 
	doublereal *vt, integer *ldvt, doublereal *work, integer *lwork, 
	integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl dgesv_(integer *n, integer *nrhs, doublereal *a, integer 
	*lda, integer *ipiv, doublereal *b, integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl dgesvd_(char *jobu, char *jobvt, integer *m, integer *n, 
	doublereal *a, integer *lda, doublereal *s, doublereal *u, integer *
	ldu, doublereal *vt, integer *ldvt, doublereal *work, integer *lwork, 
	integer *info);
 
/* Subroutine */ int __cdecl dgesvx_(char *fact, char *trans, integer *n, integer *
	nrhs, doublereal *a, integer *lda, doublereal *af, integer *ldaf, 
	integer *ipiv, char *equed, doublereal *r__, doublereal *c__, 
	doublereal *b, integer *ldb, doublereal *x, integer *ldx, doublereal *
	rcond, doublereal *ferr, doublereal *berr, doublereal *work, integer *
	iwork, integer *info);
 
/* Subroutine */ int __cdecl dgetc2_(integer *n, doublereal *a, integer *lda, integer 
	*ipiv, integer *jpiv, integer *info);
 
/* Subroutine */ int __cdecl dgetf2_(integer *m, integer *n, doublereal *a, integer *
	lda, integer *ipiv, integer *info);

/* Subroutine */ int __cdecl dgetrf_(integer *m, integer *n, doublereal *a, integer *
	lda, integer *ipiv, integer *info);
 
/* Subroutine */ int __cdecl dgetri_(integer *n, doublereal *a, integer *lda, integer 
	*ipiv, doublereal *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl dgetrs_(char *trans, integer *n, integer *nrhs, 
	doublereal *a, integer *lda, integer *ipiv, doublereal *b, integer *
	ldb, integer *info);
 
/* Subroutine */ int __cdecl dggbak_(char *job, char *side, integer *n, integer *ilo, 
	integer *ihi, doublereal *lscale, doublereal *rscale, integer *m, 
	doublereal *v, integer *ldv, integer *info);
 
/* Subroutine */ int __cdecl dggbal_(char *job, integer *n, doublereal *a, integer *
	lda, doublereal *b, integer *ldb, integer *ilo, integer *ihi, 
	doublereal *lscale, doublereal *rscale, doublereal *work, integer *
	info);
 
/* Subroutine */ int __cdecl dgges_(char *jobvsl, char *jobvsr, char *sort, L_fp 
	delctg, integer *n, doublereal *a, integer *lda, doublereal *b, 
	integer *ldb, integer *sdim, doublereal *alphar, doublereal *alphai, 
	doublereal *beta, doublereal *vsl, integer *ldvsl, doublereal *vsr, 
	integer *ldvsr, doublereal *work, integer *lwork, logical *bwork, 
	integer *info);
 
/* Subroutine */ int __cdecl dggesx_(char *jobvsl, char *jobvsr, char *sort, L_fp 
	delctg, char *sense, integer *n, doublereal *a, integer *lda, 
	doublereal *b, integer *ldb, integer *sdim, doublereal *alphar, 
	doublereal *alphai, doublereal *beta, doublereal *vsl, integer *ldvsl,
	 doublereal *vsr, integer *ldvsr, doublereal *rconde, doublereal *
	rcondv, doublereal *work, integer *lwork, integer *iwork, integer *
	liwork, logical *bwork, integer *info);
 
/* Subroutine */ int __cdecl dggev_(char *jobvl, char *jobvr, integer *n, doublereal *
	a, integer *lda, doublereal *b, integer *ldb, doublereal *alphar, 
	doublereal *alphai, doublereal *beta, doublereal *vl, integer *ldvl, 
	doublereal *vr, integer *ldvr, doublereal *work, integer *lwork, 
	integer *info);
 
/* Subroutine */ int __cdecl dggevx_(char *balanc, char *jobvl, char *jobvr, char *
	sense, integer *n, doublereal *a, integer *lda, doublereal *b, 
	integer *ldb, doublereal *alphar, doublereal *alphai, doublereal *
	beta, doublereal *vl, integer *ldvl, doublereal *vr, integer *ldvr, 
	integer *ilo, integer *ihi, doublereal *lscale, doublereal *rscale, 
	doublereal *abnrm, doublereal *bbnrm, doublereal *rconde, doublereal *
	rcondv, doublereal *work, integer *lwork, integer *iwork, logical *
	bwork, integer *info);
 
/* Subroutine */ int __cdecl dggglm_(integer *n, integer *m, integer *p, doublereal *
	a, integer *lda, doublereal *b, integer *ldb, doublereal *d__, 
	doublereal *x, doublereal *y, doublereal *work, integer *lwork, 
	integer *info);
 
/* Subroutine */ int __cdecl dgghrd_(char *compq, char *compz, integer *n, integer *
	ilo, integer *ihi, doublereal *a, integer *lda, doublereal *b, 
	integer *ldb, doublereal *q, integer *ldq, doublereal *z__, integer *
	ldz, integer *info);
 
/* Subroutine */ int __cdecl dgglse_(integer *m, integer *n, integer *p, doublereal *
	a, integer *lda, doublereal *b, integer *ldb, doublereal *c__, 
	doublereal *d__, doublereal *x, doublereal *work, integer *lwork, 
	integer *info);
 
/* Subroutine */ int __cdecl dggqrf_(integer *n, integer *m, integer *p, doublereal *
	a, integer *lda, doublereal *taua, doublereal *b, integer *ldb, 
	doublereal *taub, doublereal *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl dggrqf_(integer *m, integer *p, integer *n, doublereal *
	a, integer *lda, doublereal *taua, doublereal *b, integer *ldb, 
	doublereal *taub, doublereal *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl dggsvd_(char *jobu, char *jobv, char *jobq, integer *m, 
	integer *n, integer *p, integer *k, integer *l, doublereal *a, 
	integer *lda, doublereal *b, integer *ldb, doublereal *alpha, 
	doublereal *beta, doublereal *u, integer *ldu, doublereal *v, integer 
	*ldv, doublereal *q, integer *ldq, doublereal *work, integer *iwork, 
	integer *info);
 
/* Subroutine */ int __cdecl dggsvp_(char *jobu, char *jobv, char *jobq, integer *m, 
	integer *p, integer *n, doublereal *a, integer *lda, doublereal *b, 
	integer *ldb, doublereal *tola, doublereal *tolb, integer *k, integer 
	*l, doublereal *u, integer *ldu, doublereal *v, integer *ldv, 
	doublereal *q, integer *ldq, integer *iwork, doublereal *tau, 
	doublereal *work, integer *info);
 
/* Subroutine */ int __cdecl dgtcon_(char *norm, integer *n, doublereal *dl, 
	doublereal *d__, doublereal *du, doublereal *du2, integer *ipiv, 
	doublereal *anorm, doublereal *rcond, doublereal *work, integer *
	iwork, integer *info);
 
/* Subroutine */ int __cdecl dgtrfs_(char *trans, integer *n, integer *nrhs, 
	doublereal *dl, doublereal *d__, doublereal *du, doublereal *dlf, 
	doublereal *df, doublereal *duf, doublereal *du2, integer *ipiv, 
	doublereal *b, integer *ldb, doublereal *x, integer *ldx, doublereal *
	ferr, doublereal *berr, doublereal *work, integer *iwork, integer *
	info);
 
/* Subroutine */ int __cdecl dgtsv_(integer *n, integer *nrhs, doublereal *dl, 
	doublereal *d__, doublereal *du, doublereal *b, integer *ldb, integer 
	*info);
 
/* Subroutine */ int __cdecl dgtsvx_(char *fact, char *trans, integer *n, integer *
	nrhs, doublereal *dl, doublereal *d__, doublereal *du, doublereal *
	dlf, doublereal *df, doublereal *duf, doublereal *du2, integer *ipiv, 
	doublereal *b, integer *ldb, doublereal *x, integer *ldx, doublereal *
	rcond, doublereal *ferr, doublereal *berr, doublereal *work, integer *
	iwork, integer *info);
 
/* Subroutine */ int __cdecl dgttrf_(integer *n, doublereal *dl, doublereal *d__, 
	doublereal *du, doublereal *du2, integer *ipiv, integer *info);
 
/* Subroutine */ int __cdecl dgttrs_(char *trans, integer *n, integer *nrhs, 
	doublereal *dl, doublereal *d__, doublereal *du, doublereal *du2, 
	integer *ipiv, doublereal *b, integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl dgtts2_(integer *itrans, integer *n, integer *nrhs, 
	doublereal *dl, doublereal *d__, doublereal *du, doublereal *du2, 
	integer *ipiv, doublereal *b, integer *ldb);
 
/* Subroutine */ int __cdecl dhgeqz_(char *job, char *compq, char *compz, integer *n, 
	integer *ilo, integer *ihi, doublereal *a, integer *lda, doublereal *
	b, integer *ldb, doublereal *alphar, doublereal *alphai, doublereal *
	beta, doublereal *q, integer *ldq, doublereal *z__, integer *ldz, 
	doublereal *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl dhsein_(char *side, char *eigsrc, char *initv, logical *
	select, integer *n, doublereal *h__, integer *ldh, doublereal *wr, 
	doublereal *wi, doublereal *vl, integer *ldvl, doublereal *vr, 
	integer *ldvr, integer *mm, integer *m, doublereal *work, integer *
	ifaill, integer *ifailr, integer *info);
 
/* Subroutine */ int __cdecl dhseqr_(char *job, char *compz, integer *n, integer *ilo,
	 integer *ihi, doublereal *h__, integer *ldh, doublereal *wr, 
	doublereal *wi, doublereal *z__, integer *ldz, doublereal *work, 
	integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl dlabad_(doublereal *small2, doublereal *large);
 
/* Subroutine */ int __cdecl dlabrd_(integer *m, integer *n, integer *nb, doublereal *
	a, integer *lda, doublereal *d__, doublereal *e, doublereal *tauq, 
	doublereal *taup, doublereal *x, integer *ldx, doublereal *y, integer 
	*ldy);
 
/* Subroutine */ int __cdecl dlacon_(integer *n, doublereal *v, doublereal *x, 
	integer *isgn, doublereal *est, integer *kase);
 
/* Subroutine */ int __cdecl dlacpy_(char *uplo, integer *m, integer *n, doublereal *
	a, integer *lda, doublereal *b, integer *ldb);
 
/* Subroutine */ int __cdecl dladiv_(doublereal *a, doublereal *b, doublereal *c__, 
	doublereal *d__, doublereal *p, doublereal *q);
 
/* Subroutine */ int __cdecl DLAE2(doublereal *a, doublereal *b, doublereal *c__, 
	doublereal *rt1, doublereal *rt2);
 
/* Subroutine */ int __cdecl dlaebz_(integer *ijob, integer *nitmax, integer *n, 
	integer *mmax, integer *minp, integer *nbmin, doublereal *abstol, 
	doublereal *reltol, doublereal *pivmin, doublereal *d__, doublereal *
	e, doublereal *e2, integer *nval, doublereal *ab, doublereal *c__, 
	integer *mout, integer *nab, doublereal *work, integer *iwork, 
	integer *info);
 
/* Subroutine */ int __cdecl dlaed0_(integer *icompq, integer *qsiz, integer *n, 
	doublereal *d__, doublereal *e, doublereal *q, integer *ldq, 
	doublereal *qstore, integer *ldqs, doublereal *work, integer *iwork, 
	integer *info);
 
/* Subroutine */ int __cdecl dlaed1_(integer *n, doublereal *d__, doublereal *q, 
	integer *ldq, integer *indxq, doublereal *rho, integer *cutpnt, 
	doublereal *work, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl dlaed2_(integer *k, integer *n, integer *n1, doublereal *
	d__, doublereal *q, integer *ldq, integer *indxq, doublereal *rho, 
	doublereal *z__, doublereal *dlamda, doublereal *w, doublereal *q2, 
	integer *indx, integer *indxc, integer *indxp, integer *coltyp, 
	integer *info);
 
/* Subroutine */ int __cdecl dlaed3_(integer *k, integer *n, integer *n1, doublereal *
	d__, doublereal *q, integer *ldq, doublereal *rho, doublereal *dlamda,
	 doublereal *q2, integer *indx, integer *ctot, doublereal *w, 
	doublereal *s, integer *info);
 
/* Subroutine */ int __cdecl dlaed4_(integer *n, integer *i__, doublereal *d__, 
	doublereal *z__, doublereal *delta, doublereal *rho, doublereal *dlam,
	 integer *info);
 
/* Subroutine */ int __cdecl dlaed5_(integer *i__, doublereal *d__, doublereal *z__, 
	doublereal *delta, doublereal *rho, doublereal *dlam);
 
/* Subroutine */ int __cdecl dlaed6_(integer *kniter, logical *orgati, doublereal *
	rho, doublereal *d__, doublereal *z__, doublereal *finit, doublereal *
	tau, integer *info);
 
/* Subroutine */ int __cdecl dlaed7_(integer *icompq, integer *n, integer *qsiz, 
	integer *tlvls, integer *curlvl, integer *curpbm, doublereal *d__, 
	doublereal *q, integer *ldq, integer *indxq, doublereal *rho, integer 
	*cutpnt, doublereal *qstore, integer *qptr, integer *prmptr, integer *
	perm, integer *givptr, integer *givcol, doublereal *givnum, 
	doublereal *work, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl dlaed8_(integer *icompq, integer *k, integer *n, integer 
	*qsiz, doublereal *d__, doublereal *q, integer *ldq, integer *indxq, 
	doublereal *rho, integer *cutpnt, doublereal *z__, doublereal *dlamda,
	 doublereal *q2, integer *ldq2, doublereal *w, integer *perm, integer 
	*givptr, integer *givcol, doublereal *givnum, integer *indxp, integer 
	*indx, integer *info);
 
/* Subroutine */ int __cdecl dlaed9_(integer *k, integer *kstart, integer *kstop, 
	integer *n, doublereal *d__, doublereal *q, integer *ldq, doublereal *
	rho, doublereal *dlamda, doublereal *w, doublereal *s, integer *lds, 
	integer *info);
 
/* Subroutine */ int __cdecl dlaeda_(integer *n, integer *tlvls, integer *curlvl, 
	integer *curpbm, integer *prmptr, integer *perm, integer *givptr, 
	integer *givcol, doublereal *givnum, doublereal *q, integer *qptr, 
	doublereal *z__, doublereal *ztemp, integer *info);
 
/* Subroutine */ int __cdecl dlaein_(logical *rightv, logical *noinit, integer *n, 
	doublereal *h__, integer *ldh, doublereal *wr, doublereal *wi, 
	doublereal *vr, doublereal *vi, doublereal *b, integer *ldb, 
	doublereal *work, doublereal *eps3, doublereal *smlnum, doublereal *
	bignum, integer *info);
 
/* Subroutine */ int __cdecl dlaev2_(doublereal *a, doublereal *b, doublereal *c__, 
	doublereal *rt1, doublereal *rt2, doublereal *cs1, doublereal *sn1);
 
/* Subroutine */ int __cdecl dlaexc_(logical *wantq, integer *n, doublereal *t, 
	integer *ldt, doublereal *q, integer *ldq, integer *j1, integer *n1, 
	integer *n2, doublereal *work, integer *info);
 
/* Subroutine */ int __cdecl DLAG2(doublereal *a, integer *lda, doublereal *b, 
	integer *ldb, doublereal *safmin, doublereal *scale1, doublereal *
	scale2, doublereal *wr1, doublereal *wr2, doublereal *wi);
 
/* Subroutine */ int __cdecl dlags2_(logical *upper, doublereal *a1, doublereal *a2, 
	doublereal *a3, doublereal *b1, doublereal *b2, doublereal *b3, 
	doublereal *csu, doublereal *snu, doublereal *csv, doublereal *snv, 
	doublereal *csq, doublereal *snq);
 
/* Subroutine */ int __cdecl dlagtf_(integer *n, doublereal *a, doublereal *lambda, 
	doublereal *b, doublereal *c__, doublereal *tol, doublereal *d__, 
	integer *in, integer *info);
 
/* Subroutine */ int __cdecl dlagtm_(char *trans, integer *n, integer *nrhs, 
	doublereal *alpha, doublereal *dl, doublereal *d__, doublereal *du, 
	doublereal *x, integer *ldx, doublereal *beta, doublereal *b, integer 
	*ldb);
 
/* Subroutine */ int __cdecl dlagts_(integer *job, integer *n, doublereal *a, 
	doublereal *b, doublereal *c__, doublereal *d__, integer *in, 
	doublereal *y, doublereal *tol, integer *info);
 
/* Subroutine */ int __cdecl dlagv2_(doublereal *a, integer *lda, doublereal *b, 
	integer *ldb, doublereal *alphar, doublereal *alphai, doublereal *
	beta, doublereal *csl, doublereal *snl, doublereal *csr, doublereal *
	snr);
 
/* Subroutine */ int __cdecl dlahqr_(logical *wantt, logical *wantz, integer *n, 
	integer *ilo, integer *ihi, doublereal *h__, integer *ldh, doublereal 
	*wr, doublereal *wi, integer *iloz, integer *ihiz, doublereal *z__, 
	integer *ldz, integer *info);
 
/* Subroutine */ int __cdecl dlahrd_(integer *n, integer *k, integer *nb, doublereal *
	a, integer *lda, doublereal *tau, doublereal *t, integer *ldt, 
	doublereal *y, integer *ldy);
 
/* Subroutine */ int __cdecl dlaic1_(integer *job, integer *j, doublereal *x, 
	doublereal *sest, doublereal *w, doublereal *gamma, doublereal *
	sestpr, doublereal *s, doublereal *c__);
 
/* Subroutine */ int __cdecl dlaln2_(logical *ltrans, integer *na, integer *nw, 
	doublereal *smin, doublereal *ca, doublereal *a, integer *lda, 
	doublereal *d1, doublereal *d2, doublereal *b, integer *ldb, 
	doublereal *wr, doublereal *wi, doublereal *x, integer *ldx, 
	doublereal *scale, doublereal *xnorm, integer *info);
 
/* Subroutine */ int __cdecl dlals0_(integer *icompq, integer *nl, integer *nr, 
	integer *sqre, integer *nrhs, doublereal *b, integer *ldb, doublereal 
	*bx, integer *ldbx, integer *perm, integer *givptr, integer *givcol, 
	integer *ldgcol, doublereal *givnum, integer *ldgnum, doublereal *
	poles, doublereal *difl, doublereal *difr, doublereal *z__, integer *
	k, doublereal *c__, doublereal *s, doublereal *work, integer *info);
 
/* Subroutine */ int __cdecl dlalsa_(integer *icompq, integer *smlsiz, integer *n, 
	integer *nrhs, doublereal *b, integer *ldb, doublereal *bx, integer *
	ldbx, doublereal *u, integer *ldu, doublereal *vt, integer *k, 
	doublereal *difl, doublereal *difr, doublereal *z__, doublereal *
	poles, integer *givptr, integer *givcol, integer *ldgcol, integer *
	perm, doublereal *givnum, doublereal *c__, doublereal *s, doublereal *
	work, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl dlalsd_(char *uplo, integer *smlsiz, integer *n, integer 
	*nrhs, doublereal *d__, doublereal *e, doublereal *b, integer *ldb, 
	doublereal *rcond, integer *rank, doublereal *work, integer *iwork, 
	integer *info);
 
/* Subroutine */ int __cdecl dlamc1_(integer *beta, integer *t, logical *rnd, logical 
	*ieee1);
 
/* Subroutine */ int __cdecl dlamc2_(integer *beta, integer *t, logical *rnd, 
	doublereal *eps, integer *emin, doublereal *rmin, integer *emax, 
	doublereal *rmax);
 
/* Subroutine */ int __cdecl dlamc4_(integer *emin, doublereal *start, integer *base);
 
/* Subroutine */ int __cdecl dlamc5_(integer *beta, integer *p, integer *emin, 
	logical *ieee, integer *emax, doublereal *rmax);
 
/* Subroutine */ int __cdecl dlamrg_(integer *n1, integer *n2, doublereal *a, integer 
	*dtrd1, integer *dtrd2, integer *index);
 
/* Subroutine */ int __cdecl dlanv2_(doublereal *a, doublereal *b, doublereal *c__, 
	doublereal *d__, doublereal *rt1r, doublereal *rt1i, doublereal *rt2r,
	 doublereal *rt2i, doublereal *cs, doublereal *sn);
 
/* Subroutine */ int __cdecl dlapll_(integer *n, doublereal *x, integer *incx, 
	doublereal *y, integer *incy, doublereal *ssmin);
 
/* Subroutine */ int __cdecl dlapmt_(logical *forwrd, integer *m, integer *n, 
	doublereal *x, integer *ldx, integer *k);
 
/* Subroutine */ int __cdecl dlaqgb_(integer *m, integer *n, integer *kl, integer *ku,
	 doublereal *ab, integer *ldab, doublereal *r__, doublereal *c__, 
	doublereal *rowcnd, doublereal *colcnd, doublereal *amax, char *equed);
 
/* Subroutine */ int __cdecl dlaqge_(integer *m, integer *n, doublereal *a, integer *
	lda, doublereal *r__, doublereal *c__, doublereal *rowcnd, doublereal 
	*colcnd, doublereal *amax, char *equed);
 
/* Subroutine */ int __cdecl dlaqp2_(integer *m, integer *n, integer *offset, 
	doublereal *a, integer *lda, integer *jpvt, doublereal *tau, 
	doublereal *vn1, doublereal *vn2, doublereal *work);
 
/* Subroutine */ int __cdecl dlaqps_(integer *m, integer *n, integer *offset, integer 
	*nb, integer *kb, doublereal *a, integer *lda, integer *jpvt, 
	doublereal *tau, doublereal *vn1, doublereal *vn2, doublereal *auxv, 
	doublereal *f, integer *ldf);
 
/* Subroutine */ int __cdecl dlaqsb_(char *uplo, integer *n, integer *kd, doublereal *
	ab, integer *ldab, doublereal *s, doublereal *scond, doublereal *amax,
	 char *equed);
 
/* Subroutine */ int __cdecl dlaqsp_(char *uplo, integer *n, doublereal *ap, 
	doublereal *s, doublereal *scond, doublereal *amax, char *equed);
 
/* Subroutine */ int __cdecl dlaqsy_(char *uplo, integer *n, doublereal *a, integer *
	lda, doublereal *s, doublereal *scond, doublereal *amax, char *equed);
 
/* Subroutine */ int __cdecl dlaqtr_(logical *ltran, logical *lreal, integer *n, 
	doublereal *t, integer *ldt, doublereal *b, doublereal *w, doublereal 
	*scale, doublereal *x, doublereal *work, integer *info);
 
/* Subroutine */ int __cdecl DLAR1V(integer *n, integer *b1, integer *bn, doublereal 
	*sigma, doublereal *d__, doublereal *l, doublereal *ld, doublereal *
	lld, doublereal *gersch, doublereal *z__, doublereal *ztz, doublereal 
	*mingma, integer *r__, integer *isuppz, doublereal *work);
 
/* Subroutine */ int __cdecl DLAR2V(integer *n, doublereal *x, doublereal *y, 
	doublereal *z__, integer *incx, doublereal *c__, doublereal *s, 
	integer *incc);
 
/* Subroutine */ int __cdecl dlarf_(char *side, integer *m, integer *n, doublereal *v,
	 integer *incv, doublereal *tau, doublereal *c__, integer *ldc, 
	doublereal *work);
 
/* Subroutine */ int __cdecl dlarfb_(char *side, char *trans, char *direct, char *
	storev, integer *m, integer *n, integer *k, doublereal *v, integer *
	ldv, doublereal *t, integer *ldt, doublereal *c__, integer *ldc, 
	doublereal *work, integer *ldwork);
 
/* Subroutine */ int __cdecl dlarfg_(integer *n, doublereal *alpha, doublereal *x, 
	integer *incx, doublereal *tau);
 
/* Subroutine */ int __cdecl dlarft_(char *direct, char *storev, integer *n, integer *
	k, doublereal *v, integer *ldv, doublereal *tau, doublereal *t, 
	integer *ldt);
 
/* Subroutine */ int __cdecl dlarfx_(char *side, integer *m, integer *n, doublereal *
	v, doublereal *tau, doublereal *c__, integer *ldc, doublereal *work);
 
/* Subroutine */ int __cdecl dlargv_(integer *n, doublereal *x, integer *incx, 
	doublereal *y, integer *incy, doublereal *c__, integer *incc);
 
/* Subroutine */ int __cdecl dlarnv_(integer *idist, integer *iseed, integer *n, 
	doublereal *x);
 
/* Subroutine */ int __cdecl dlarrb_(integer *n, doublereal *d__, doublereal *l, 
	doublereal *ld, doublereal *lld, integer *ifirst, integer *ilast, 
	doublereal *sigma, doublereal *reltol, doublereal *w, doublereal *
	wgap, doublereal *werr, doublereal *work, integer *iwork, integer *
	info);
 
/* Subroutine */ int __cdecl dlarre_(integer *n, doublereal *d__, doublereal *e, 
	doublereal *tol, integer *nsplit, integer *isplit, integer *m, 
	doublereal *w, doublereal *woff, doublereal *gersch, doublereal *work,
	 integer *info);
 
/* Subroutine */ int __cdecl dlarrf_(integer *n, doublereal *d__, doublereal *l, 
	doublereal *ld, doublereal *lld, integer *ifirst, integer *ilast, 
	doublereal *w, doublereal *dplus, doublereal *lplus, doublereal *work,
	 integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl dlarrv_(integer *n, doublereal *d__, doublereal *l, 
	integer *isplit, integer *m, doublereal *w, integer *iblock, 
	doublereal *gersch, doublereal *tol, doublereal *z__, integer *ldz, 
	integer *isuppz, doublereal *work, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl dlartg_(doublereal *f, doublereal *g, doublereal *cs, 
	doublereal *sn, doublereal *r__);
 
/* Subroutine */ int __cdecl dlartv_(integer *n, doublereal *x, integer *incx, 
	doublereal *y, integer *incy, doublereal *c__, doublereal *s, integer 
	*incc);
 
/* Subroutine */ int __cdecl dlaruv_(integer *iseed, integer *n, doublereal *x);
 
/* Subroutine */ int __cdecl dlarz_(char *side, integer *m, integer *n, integer *l, 
	doublereal *v, integer *incv, doublereal *tau, doublereal *c__, 
	integer *ldc, doublereal *work);
 
/* Subroutine */ int __cdecl dlarzb_(char *side, char *trans, char *direct, char *
	storev, integer *m, integer *n, integer *k, integer *l, doublereal *v,
	 integer *ldv, doublereal *t, integer *ldt, doublereal *c__, integer *
	ldc, doublereal *work, integer *ldwork);
 
/* Subroutine */ int __cdecl dlarzt_(char *direct, char *storev, integer *n, integer *
	k, doublereal *v, integer *ldv, doublereal *tau, doublereal *t, 
	integer *ldt);
 
/* Subroutine */ int __cdecl DLAS2(doublereal *f, doublereal *g, doublereal *h__, 
	doublereal *ssmin, doublereal *ssmax);
 
/* Subroutine */ int __cdecl dlascl_(char *type__, integer *kl, integer *ku, 
	doublereal *cfrom, doublereal *cto, integer *m, integer *n, 
	doublereal *a, integer *lda, integer *info);
 
/* Subroutine */ int __cdecl dlasd0_(integer *n, integer *sqre, doublereal *d__, 
	doublereal *e, doublereal *u, integer *ldu, doublereal *vt, integer *
	ldvt, integer *smlsiz, integer *iwork, doublereal *work, integer *
	info);
 
/* Subroutine */ int __cdecl dlasd1_(integer *nl, integer *nr, integer *sqre, 
	doublereal *d__, doublereal *alpha, doublereal *beta, doublereal *u, 
	integer *ldu, doublereal *vt, integer *ldvt, integer *idxq, integer *
	iwork, doublereal *work, integer *info);
 
/* Subroutine */ int __cdecl dlasd2_(integer *nl, integer *nr, integer *sqre, integer 
	*k, doublereal *d__, doublereal *z__, doublereal *alpha, doublereal *
	beta, doublereal *u, integer *ldu, doublereal *vt, integer *ldvt, 
	doublereal *dsigma, doublereal *u2, integer *ldu2, doublereal *vt2, 
	integer *ldvt2, integer *idxp, integer *idx, integer *idxc, integer *
	idxq, integer *coltyp, integer *info);
 
/* Subroutine */ int __cdecl dlasd3_(integer *nl, integer *nr, integer *sqre, integer 
	*k, doublereal *d__, doublereal *q, integer *ldq, doublereal *dsigma, 
	doublereal *u, integer *ldu, doublereal *u2, integer *ldu2, 
	doublereal *vt, integer *ldvt, doublereal *vt2, integer *ldvt2, 
	integer *idxc, integer *ctot, doublereal *z__, integer *info);
 
/* Subroutine */ int __cdecl dlasd4_(integer *n, integer *i__, doublereal *d__, 
	doublereal *z__, doublereal *delta, doublereal *rho, doublereal *
	sigma, doublereal *work, integer *info);
 
/* Subroutine */ int __cdecl dlasd5_(integer *i__, doublereal *d__, doublereal *z__, 
	doublereal *delta, doublereal *rho, doublereal *dsigma, doublereal *
	work);
 
/* Subroutine */ int __cdecl dlasd6_(integer *icompq, integer *nl, integer *nr, 
	integer *sqre, doublereal *d__, doublereal *vf, doublereal *vl, 
	doublereal *alpha, doublereal *beta, integer *idxq, integer *perm, 
	integer *givptr, integer *givcol, integer *ldgcol, doublereal *givnum,
	 integer *ldgnum, doublereal *poles, doublereal *difl, doublereal *
	difr, doublereal *z__, integer *k, doublereal *c__, doublereal *s, 
	doublereal *work, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl dlasd7_(integer *icompq, integer *nl, integer *nr, 
	integer *sqre, integer *k, doublereal *d__, doublereal *z__, 
	doublereal *zw, doublereal *vf, doublereal *vfw, doublereal *vl, 
	doublereal *vlw, doublereal *alpha, doublereal *beta, doublereal *
	dsigma, integer *idx, integer *idxp, integer *idxq, integer *perm, 
	integer *givptr, integer *givcol, integer *ldgcol, doublereal *givnum,
	 integer *ldgnum, doublereal *c__, doublereal *s, integer *info);
 
/* Subroutine */ int __cdecl dlasd8_(integer *icompq, integer *k, doublereal *d__, 
	doublereal *z__, doublereal *vf, doublereal *vl, doublereal *difl, 
	doublereal *difr, integer *lddifr, doublereal *dsigma, doublereal *
	work, integer *info);
 
/* Subroutine */ int __cdecl dlasd9_(integer *icompq, integer *ldu, integer *k, 
	doublereal *d__, doublereal *z__, doublereal *vf, doublereal *vl, 
	doublereal *difl, doublereal *difr, doublereal *dsigma, doublereal *
	work, integer *info);
 
/* Subroutine */ int __cdecl dlasda_(integer *icompq, integer *smlsiz, integer *n, 
	integer *sqre, doublereal *d__, doublereal *e, doublereal *u, integer 
	*ldu, doublereal *vt, integer *k, doublereal *difl, doublereal *difr, 
	doublereal *z__, doublereal *poles, integer *givptr, integer *givcol, 
	integer *ldgcol, integer *perm, doublereal *givnum, doublereal *c__, 
	doublereal *s, doublereal *work, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl dlasdq_(char *uplo, integer *sqre, integer *n, integer *
	ncvt, integer *nru, integer *ncc, doublereal *d__, doublereal *e, 
	doublereal *vt, integer *ldvt, doublereal *u, integer *ldu, 
	doublereal *c__, integer *ldc, doublereal *work, integer *info);
 
/* Subroutine */ int __cdecl dlasdt_(integer *n, integer *lvl, integer *nd, integer *
	inode, integer *ndiml, integer *ndimr, integer *msub);
 
/* Subroutine */ int __cdecl dlaset_(char *uplo, integer *m, integer *n, doublereal *
	alpha, doublereal *beta, doublereal *a, integer *lda);
 
/* Subroutine */ int __cdecl dlasq1_(integer *n, doublereal *d__, doublereal *e, 
	doublereal *work, integer *info);
 
/* Subroutine */ int __cdecl dlasq2_(integer *n, doublereal *z__, integer *info);
 
/* Subroutine */ int __cdecl dlasq3_(integer *i0, integer *n0, doublereal *z__, 
	integer *pp, doublereal *dmin__, doublereal *sigma, doublereal *desig,
	 doublereal *qmax, integer *nfail, integer *iter, integer *ndiv, 
	logical *ieee);
 
/* Subroutine */ int __cdecl dlasq4_(integer *i0, integer *n0, doublereal *z__, 
	integer *pp, integer *n0in, doublereal *dmin__, doublereal *dmin1, 
	doublereal *dmin2, doublereal *dn, doublereal *dn1, doublereal *dn2, 
	doublereal *tau, integer *ttype);
 
/* Subroutine */ int __cdecl dlasq5_(integer *i0, integer *n0, doublereal *z__, 
	integer *pp, doublereal *tau, doublereal *dmin__, doublereal *dmin1, 
	doublereal *dmin2, doublereal *dn, doublereal *dnm1, doublereal *dnm2,
	 logical *ieee);
 
/* Subroutine */ int __cdecl dlasq6_(integer *i0, integer *n0, doublereal *z__, 
	integer *pp, doublereal *dmin__, doublereal *dmin1, doublereal *dmin2,
	 doublereal *dn, doublereal *dnm1, doublereal *dnm2);
 
/* Subroutine */ int __cdecl dlasr_(char *side, char *pivot, char *direct, integer *m,
	 integer *n, doublereal *c__, doublereal *s, doublereal *a, integer *
	lda);
 
/* Subroutine */ int __cdecl dlasrt_(char *id, integer *n, doublereal *d__, integer *
	info);
 
/* Subroutine */ int __cdecl dlassq_(integer *n, doublereal *x, integer *incx, 
	doublereal *scale, doublereal *sumsq);
 
/* Subroutine */ int __cdecl dlasv2_(doublereal *f, doublereal *g, doublereal *h__, 
	doublereal *ssmin, doublereal *ssmax, doublereal *snr, doublereal *
	csr, doublereal *snl, doublereal *csl);
 
/* Subroutine */ int __cdecl dlaswp_(integer *n, doublereal *a, integer *lda, integer 
	*k1, integer *k2, integer *ipiv, integer *incx);
 
/* Subroutine */ int __cdecl dlasy2_(logical *ltranl, logical *ltranr, integer *isgn, 
	integer *n1, integer *n2, doublereal *tl, integer *ldtl, doublereal *
	tr, integer *ldtr, doublereal *b, integer *ldb, doublereal *scale, 
	doublereal *x, integer *ldx, doublereal *xnorm, integer *info);
 
/* Subroutine */ int __cdecl dlasyf_(char *uplo, integer *n, integer *nb, integer *kb,
	 doublereal *a, integer *lda, integer *ipiv, doublereal *w, integer *
	ldw, integer *info);
 
/* Subroutine */ int __cdecl dlatbs_(char *uplo, char *trans, char *diag, char *
	normin, integer *n, integer *kd, doublereal *ab, integer *ldab, 
	doublereal *x, doublereal *scale, doublereal *cnorm, integer *info);
 
/* Subroutine */ int __cdecl dlatdf_(integer *ijob, integer *n, doublereal *z__, 
	integer *ldz, doublereal *rhs, doublereal *rdsum, doublereal *rdscal, 
	integer *ipiv, integer *jpiv);
 
/* Subroutine */ int __cdecl dlatps_(char *uplo, char *trans, char *diag, char *
	normin, integer *n, doublereal *ap, doublereal *x, doublereal *scale, 
	doublereal *cnorm, integer *info);
 
/* Subroutine */ int __cdecl dlatrd_(char *uplo, integer *n, integer *nb, doublereal *
	a, integer *lda, doublereal *e, doublereal *tau, doublereal *w, 
	integer *ldw);
 
/* Subroutine */ int __cdecl dlatrs_(char *uplo, char *trans, char *diag, char *
	normin, integer *n, doublereal *a, integer *lda, doublereal *x, 
	doublereal *scale, doublereal *cnorm, integer *info);
 
/* Subroutine */ int __cdecl dlatrz_(integer *m, integer *n, integer *l, doublereal *
	a, integer *lda, doublereal *tau, doublereal *work);
 
/* Subroutine */ int __cdecl dlatzm_(char *side, integer *m, integer *n, doublereal *
	v, integer *incv, doublereal *tau, doublereal *c1, doublereal *c2, 
	integer *ldc, doublereal *work);
 
/* Subroutine */ int __cdecl dlauu2_(char *uplo, integer *n, doublereal *a, integer *
	lda, integer *info);
 
/* Subroutine */ int __cdecl dlauum_(char *uplo, integer *n, doublereal *a, integer *
	lda, integer *info);
 
/* Subroutine */ int __cdecl dopgtr_(char *uplo, integer *n, doublereal *ap, 
	doublereal *tau, doublereal *q, integer *ldq, doublereal *work, 
	integer *info);
 
/* Subroutine */ int __cdecl dopmtr_(char *side, char *uplo, char *trans, integer *m, 
	integer *n, doublereal *ap, doublereal *tau, doublereal *c__, integer 
	*ldc, doublereal *work, integer *info);
 
/* Subroutine */ int __cdecl DORG2L(integer *m, integer *n, integer *k, doublereal *
	a, integer *lda, doublereal *tau, doublereal *work, integer *info);
 
/* Subroutine */ int __cdecl DORG2R(integer *m, integer *n, integer *k, doublereal *
	a, integer *lda, doublereal *tau, doublereal *work, integer *info);
 
/* Subroutine */ int __cdecl dorgbr_(char *vect, integer *m, integer *n, integer *k, 
	doublereal *a, integer *lda, doublereal *tau, doublereal *work, 
	integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl dorghr_(integer *n, integer *ilo, integer *ihi, 
	doublereal *a, integer *lda, doublereal *tau, doublereal *work, 
	integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl dorgl2_(integer *m, integer *n, integer *k, doublereal *
	a, integer *lda, doublereal *tau, doublereal *work, integer *info);
 
/* Subroutine */ int __cdecl dorglq_(integer *m, integer *n, integer *k, doublereal *
	a, integer *lda, doublereal *tau, doublereal *work, integer *lwork, 
	integer *info);
 
/* Subroutine */ int __cdecl dorgql_(integer *m, integer *n, integer *k, doublereal *
	a, integer *lda, doublereal *tau, doublereal *work, integer *lwork, 
	integer *info);
 
/* Subroutine */ int __cdecl dorgqr_(integer *m, integer *n, integer *k, doublereal *
	a, integer *lda, doublereal *tau, doublereal *work, integer *lwork, 
	integer *info);
 
/* Subroutine */ int __cdecl dorgr2_(integer *m, integer *n, integer *k, doublereal *
	a, integer *lda, doublereal *tau, doublereal *work, integer *info);
 
/* Subroutine */ int __cdecl dorgrq_(integer *m, integer *n, integer *k, doublereal *
	a, integer *lda, doublereal *tau, doublereal *work, integer *lwork, 
	integer *info);
 
/* Subroutine */ int __cdecl dorgtr_(char *uplo, integer *n, doublereal *a, integer *
	lda, doublereal *tau, doublereal *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl DORM2L(char *side, char *trans, integer *m, integer *n, 
	integer *k, doublereal *a, integer *lda, doublereal *tau, doublereal *
	c__, integer *ldc, doublereal *work, integer *info);
 
/* Subroutine */ int __cdecl DORM2R(char *side, char *trans, integer *m, integer *n, 
	integer *k, doublereal *a, integer *lda, doublereal *tau, doublereal *
	c__, integer *ldc, doublereal *work, integer *info);
 
/* Subroutine */ int __cdecl dormbr_(char *vect, char *side, char *trans, integer *m, 
	integer *n, integer *k, doublereal *a, integer *lda, doublereal *tau, 
	doublereal *c__, integer *ldc, doublereal *work, integer *lwork, 
	integer *info);
 
/* Subroutine */ int __cdecl dormhr_(char *side, char *trans, integer *m, integer *n, 
	integer *ilo, integer *ihi, doublereal *a, integer *lda, doublereal *
	tau, doublereal *c__, integer *ldc, doublereal *work, integer *lwork, 
	integer *info);
 
/* Subroutine */ int __cdecl dorml2_(char *side, char *trans, integer *m, integer *n, 
	integer *k, doublereal *a, integer *lda, doublereal *tau, doublereal *
	c__, integer *ldc, doublereal *work, integer *info);
 
/* Subroutine */ int __cdecl dormlq_(char *side, char *trans, integer *m, integer *n, 
	integer *k, doublereal *a, integer *lda, doublereal *tau, doublereal *
	c__, integer *ldc, doublereal *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl dormql_(char *side, char *trans, integer *m, integer *n, 
	integer *k, doublereal *a, integer *lda, doublereal *tau, doublereal *
	c__, integer *ldc, doublereal *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl dormqr_(char *side, char *trans, integer *m, integer *n, 
	integer *k, doublereal *a, integer *lda, doublereal *tau, doublereal *
	c__, integer *ldc, doublereal *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl dormr2_(char *side, char *trans, integer *m, integer *n, 
	integer *k, doublereal *a, integer *lda, doublereal *tau, doublereal *
	c__, integer *ldc, doublereal *work, integer *info);
 
/* Subroutine */ int __cdecl dormr3_(char *side, char *trans, integer *m, integer *n, 
	integer *k, integer *l, doublereal *a, integer *lda, doublereal *tau, 
	doublereal *c__, integer *ldc, doublereal *work, integer *info);
 
/* Subroutine */ int __cdecl dormrq_(char *side, char *trans, integer *m, integer *n, 
	integer *k, doublereal *a, integer *lda, doublereal *tau, doublereal *
	c__, integer *ldc, doublereal *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl dormrz_(char *side, char *trans, integer *m, integer *n, 
	integer *k, integer *l, doublereal *a, integer *lda, doublereal *tau, 
	doublereal *c__, integer *ldc, doublereal *work, integer *lwork, 
	integer *info);
 
/* Subroutine */ int __cdecl dormtr_(char *side, char *uplo, char *trans, integer *m, 
	integer *n, doublereal *a, integer *lda, doublereal *tau, doublereal *
	c__, integer *ldc, doublereal *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl dpbcon_(char *uplo, integer *n, integer *kd, doublereal *
	ab, integer *ldab, doublereal *anorm, doublereal *rcond, doublereal *
	work, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl dpbequ_(char *uplo, integer *n, integer *kd, doublereal *
	ab, integer *ldab, doublereal *s, doublereal *scond, doublereal *amax,
	 integer *info);
 
/* Subroutine */ int __cdecl dpbrfs_(char *uplo, integer *n, integer *kd, integer *
	nrhs, doublereal *ab, integer *ldab, doublereal *afb, integer *ldafb, 
	doublereal *b, integer *ldb, doublereal *x, integer *ldx, doublereal *
	ferr, doublereal *berr, doublereal *work, integer *iwork, integer *
	info);
 
/* Subroutine */ int __cdecl dpbstf_(char *uplo, integer *n, integer *kd, doublereal *
	ab, integer *ldab, integer *info);
 
/* Subroutine */ int __cdecl dpbsv_(char *uplo, integer *n, integer *kd, integer *
	nrhs, doublereal *ab, integer *ldab, doublereal *b, integer *ldb, 
	integer *info);
 
/* Subroutine */ int __cdecl dpbsvx_(char *fact, char *uplo, integer *n, integer *kd, 
	integer *nrhs, doublereal *ab, integer *ldab, doublereal *afb, 
	integer *ldafb, char *equed, doublereal *s, doublereal *b, integer *
	ldb, doublereal *x, integer *ldx, doublereal *rcond, doublereal *ferr,
	 doublereal *berr, doublereal *work, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl dpbtf2_(char *uplo, integer *n, integer *kd, doublereal *
	ab, integer *ldab, integer *info);
 
/* Subroutine */ int __cdecl dpbtrf_(char *uplo, integer *n, integer *kd, doublereal *
	ab, integer *ldab, integer *info);
 
/* Subroutine */ int __cdecl dpbtrs_(char *uplo, integer *n, integer *kd, integer *
	nrhs, doublereal *ab, integer *ldab, doublereal *b, integer *ldb, 
	integer *info);
 
/* Subroutine */ int __cdecl dpocon_(char *uplo, integer *n, doublereal *a, integer *
	lda, doublereal *anorm, doublereal *rcond, doublereal *work, integer *
	iwork, integer *info);
 
/* Subroutine */ int __cdecl dpoequ_(integer *n, doublereal *a, integer *lda, 
	doublereal *s, doublereal *scond, doublereal *amax, integer *info);
 
/* Subroutine */ int __cdecl dporfs_(char *uplo, integer *n, integer *nrhs, 
	doublereal *a, integer *lda, doublereal *af, integer *ldaf, 
	doublereal *b, integer *ldb, doublereal *x, integer *ldx, doublereal *
	ferr, doublereal *berr, doublereal *work, integer *iwork, integer *
	info);
 
/* Subroutine */ int __cdecl dposv_(char *uplo, integer *n, integer *nrhs, doublereal 
	*a, integer *lda, doublereal *b, integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl dposvx_(char *fact, char *uplo, integer *n, integer *
	nrhs, doublereal *a, integer *lda, doublereal *af, integer *ldaf, 
	char *equed, doublereal *s, doublereal *b, integer *ldb, doublereal *
	x, integer *ldx, doublereal *rcond, doublereal *ferr, doublereal *
	berr, doublereal *work, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl dpotf2_(char *uplo, integer *n, doublereal *a, integer *
	lda, integer *info);
 
/* Subroutine */ int __cdecl dpotrf_(char *uplo, integer *n, doublereal *a, integer *
	lda, integer *info);
 
/* Subroutine */ int __cdecl dpotri_(char *uplo, integer *n, doublereal *a, integer *
	lda, integer *info);
 
/* Subroutine */ int __cdecl dpotrs_(char *uplo, integer *n, integer *nrhs, 
	doublereal *a, integer *lda, doublereal *b, integer *ldb, integer *
	info);
 
/* Subroutine */ int __cdecl dppcon_(char *uplo, integer *n, doublereal *ap, 
	doublereal *anorm, doublereal *rcond, doublereal *work, integer *
	iwork, integer *info);
 
/* Subroutine */ int __cdecl dppequ_(char *uplo, integer *n, doublereal *ap, 
	doublereal *s, doublereal *scond, doublereal *amax, integer *info);
 
/* Subroutine */ int __cdecl dpprfs_(char *uplo, integer *n, integer *nrhs, 
	doublereal *ap, doublereal *afp, doublereal *b, integer *ldb, 
	doublereal *x, integer *ldx, doublereal *ferr, doublereal *berr, 
	doublereal *work, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl dppsv_(char *uplo, integer *n, integer *nrhs, doublereal 
	*ap, doublereal *b, integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl dppsvx_(char *fact, char *uplo, integer *n, integer *
	nrhs, doublereal *ap, doublereal *afp, char *equed, doublereal *s, 
	doublereal *b, integer *ldb, doublereal *x, integer *ldx, doublereal *
	rcond, doublereal *ferr, doublereal *berr, doublereal *work, integer *
	iwork, integer *info);
 
/* Subroutine */ int __cdecl dpptrf_(char *uplo, integer *n, doublereal *ap, integer *
	info);
 
/* Subroutine */ int __cdecl dpptri_(char *uplo, integer *n, doublereal *ap, integer *
	info);
 
/* Subroutine */ int __cdecl dpptrs_(char *uplo, integer *n, integer *nrhs, 
	doublereal *ap, doublereal *b, integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl dptcon_(integer *n, doublereal *d__, doublereal *e, 
	doublereal *anorm, doublereal *rcond, doublereal *work, integer *info);
 
/* Subroutine */ int __cdecl dpteqr_(char *compz, integer *n, doublereal *d__, 
	doublereal *e, doublereal *z__, integer *ldz, doublereal *work, 
	integer *info);
 
/* Subroutine */ int __cdecl dptrfs_(integer *n, integer *nrhs, doublereal *d__, 
	doublereal *e, doublereal *df, doublereal *ef, doublereal *b, integer 
	*ldb, doublereal *x, integer *ldx, doublereal *ferr, doublereal *berr,
	 doublereal *work, integer *info);
 
/* Subroutine */ int __cdecl dptsv_(integer *n, integer *nrhs, doublereal *d__, 
	doublereal *e, doublereal *b, integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl dptsvx_(char *fact, integer *n, integer *nrhs, 
	doublereal *d__, doublereal *e, doublereal *df, doublereal *ef, 
	doublereal *b, integer *ldb, doublereal *x, integer *ldx, doublereal *
	rcond, doublereal *ferr, doublereal *berr, doublereal *work, integer *
	info);
 
/* Subroutine */ int __cdecl dpttrf_(integer *n, doublereal *d__, doublereal *e, 
	integer *info);
 
/* Subroutine */ int __cdecl dpttrs_(integer *n, integer *nrhs, doublereal *d__, 
	doublereal *e, doublereal *b, integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl dptts2_(integer *n, integer *nrhs, doublereal *d__, 
	doublereal *e, doublereal *b, integer *ldb);
 
/* Subroutine */ int __cdecl drscl_(integer *n, doublereal *sa, doublereal *sx, 
	integer *incx);
 
/* Subroutine */ int __cdecl dsbev_(char *jobz, char *uplo, integer *n, integer *kd, 
	doublereal *ab, integer *ldab, doublereal *w, doublereal *z__, 
	integer *ldz, doublereal *work, integer *info);
 
/* Subroutine */ int __cdecl dsbevd_(char *jobz, char *uplo, integer *n, integer *kd, 
	doublereal *ab, integer *ldab, doublereal *w, doublereal *z__, 
	integer *ldz, doublereal *work, integer *lwork, integer *iwork, 
	integer *liwork, integer *info);
 
/* Subroutine */ int __cdecl dsbevx_(char *jobz, char *range, char *uplo, integer *n, 
	integer *kd, doublereal *ab, integer *ldab, doublereal *q, integer *
	ldq, doublereal *vl, doublereal *vu, integer *il, integer *iu, 
	doublereal *abstol, integer *m, doublereal *w, doublereal *z__, 
	integer *ldz, doublereal *work, integer *iwork, integer *ifail, 
	integer *info);
 
/* Subroutine */ int __cdecl dsbgst_(char *vect, char *uplo, integer *n, integer *ka, 
	integer *kb, doublereal *ab, integer *ldab, doublereal *bb, integer *
	ldbb, doublereal *x, integer *ldx, doublereal *work, integer *info);
 
/* Subroutine */ int __cdecl dsbgv_(char *jobz, char *uplo, integer *n, integer *ka, 
	integer *kb, doublereal *ab, integer *ldab, doublereal *bb, integer *
	ldbb, doublereal *w, doublereal *z__, integer *ldz, doublereal *work, 
	integer *info);
 
/* Subroutine */ int __cdecl dsbgvd_(char *jobz, char *uplo, integer *n, integer *ka, 
	integer *kb, doublereal *ab, integer *ldab, doublereal *bb, integer *
	ldbb, doublereal *w, doublereal *z__, integer *ldz, doublereal *work, 
	integer *lwork, integer *iwork, integer *liwork, integer *info);
 
/* Subroutine */ int __cdecl dsbgvx_(char *jobz, char *range, char *uplo, integer *n, 
	integer *ka, integer *kb, doublereal *ab, integer *ldab, doublereal *
	bb, integer *ldbb, doublereal *q, integer *ldq, doublereal *vl, 
	doublereal *vu, integer *il, integer *iu, doublereal *abstol, integer 
	*m, doublereal *w, doublereal *z__, integer *ldz, doublereal *work, 
	integer *iwork, integer *ifail, integer *info);
 
/* Subroutine */ int __cdecl dsbtrd_(char *vect, char *uplo, integer *n, integer *kd, 
	doublereal *ab, integer *ldab, doublereal *d__, doublereal *e, 
	doublereal *q, integer *ldq, doublereal *work, integer *info);
 
/* Subroutine */ int __cdecl dspcon_(char *uplo, integer *n, doublereal *ap, integer *
	ipiv, doublereal *anorm, doublereal *rcond, doublereal *work, integer 
	*iwork, integer *info);
 
/* Subroutine */ int __cdecl dspev_(char *jobz, char *uplo, integer *n, doublereal *
	ap, doublereal *w, doublereal *z__, integer *ldz, doublereal *work, 
	integer *info);
 
/* Subroutine */ int __cdecl dspevd_(char *jobz, char *uplo, integer *n, doublereal *
	ap, doublereal *w, doublereal *z__, integer *ldz, doublereal *work, 
	integer *lwork, integer *iwork, integer *liwork, integer *info);
 
/* Subroutine */ int __cdecl dspevx_(char *jobz, char *range, char *uplo, integer *n, 
	doublereal *ap, doublereal *vl, doublereal *vu, integer *il, integer *
	iu, doublereal *abstol, integer *m, doublereal *w, doublereal *z__, 
	integer *ldz, doublereal *work, integer *iwork, integer *ifail, 
	integer *info);
 
/* Subroutine */ int __cdecl dspgst_(integer *itype, char *uplo, integer *n, 
	doublereal *ap, doublereal *bp, integer *info);
 
/* Subroutine */ int __cdecl dspgv_(integer *itype, char *jobz, char *uplo, integer *
	n, doublereal *ap, doublereal *bp, doublereal *w, doublereal *z__, 
	integer *ldz, doublereal *work, integer *info);
 
/* Subroutine */ int __cdecl dspgvd_(integer *itype, char *jobz, char *uplo, integer *
	n, doublereal *ap, doublereal *bp, doublereal *w, doublereal *z__, 
	integer *ldz, doublereal *work, integer *lwork, integer *iwork, 
	integer *liwork, integer *info);
 
/* Subroutine */ int __cdecl dspgvx_(integer *itype, char *jobz, char *range, char *
	uplo, integer *n, doublereal *ap, doublereal *bp, doublereal *vl, 
	doublereal *vu, integer *il, integer *iu, doublereal *abstol, integer 
	*m, doublereal *w, doublereal *z__, integer *ldz, doublereal *work, 
	integer *iwork, integer *ifail, integer *info);
 
/* Subroutine */ int __cdecl dsprfs_(char *uplo, integer *n, integer *nrhs, 
	doublereal *ap, doublereal *afp, integer *ipiv, doublereal *b, 
	integer *ldb, doublereal *x, integer *ldx, doublereal *ferr, 
	doublereal *berr, doublereal *work, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl dspsv_(char *uplo, integer *n, integer *nrhs, doublereal 
	*ap, integer *ipiv, doublereal *b, integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl dspsvx_(char *fact, char *uplo, integer *n, integer *
	nrhs, doublereal *ap, doublereal *afp, integer *ipiv, doublereal *b, 
	integer *ldb, doublereal *x, integer *ldx, doublereal *rcond, 
	doublereal *ferr, doublereal *berr, doublereal *work, integer *iwork, 
	integer *info);
 
/* Subroutine */ int __cdecl dsptrd_(char *uplo, integer *n, doublereal *ap, 
	doublereal *d__, doublereal *e, doublereal *tau, integer *info);
 
/* Subroutine */ int __cdecl dsptrf_(char *uplo, integer *n, doublereal *ap, integer *
	ipiv, integer *info);
 
/* Subroutine */ int __cdecl dsptri_(char *uplo, integer *n, doublereal *ap, integer *
	ipiv, doublereal *work, integer *info);
 
/* Subroutine */ int __cdecl dsptrs_(char *uplo, integer *n, integer *nrhs, 
	doublereal *ap, integer *ipiv, doublereal *b, integer *ldb, integer *
	info);
 
/* Subroutine */ int __cdecl dstebz_(char *range, char *order, integer *n, doublereal 
	*vl, doublereal *vu, integer *il, integer *iu, doublereal *abstol, 
	doublereal *d__, doublereal *e, integer *m, integer *nsplit, 
	doublereal *w, integer *iblock, integer *isplit, doublereal *work, 
	integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl dstedc_(char *compz, integer *n, doublereal *d__, 
	doublereal *e, doublereal *z__, integer *ldz, doublereal *work, 
	integer *lwork, integer *iwork, integer *liwork, integer *info);
 
/* Subroutine */ int __cdecl dstegr_(char *jobz, char *range, integer *n, doublereal *
	d__, doublereal *e, doublereal *vl, doublereal *vu, integer *il, 
	integer *iu, doublereal *abstol, integer *m, doublereal *w, 
	doublereal *z__, integer *ldz, integer *isuppz, doublereal *work, 
	integer *lwork, integer *iwork, integer *liwork, integer *info);
 
/* Subroutine */ int __cdecl dstein_(integer *n, doublereal *d__, doublereal *e, 
	integer *m, doublereal *w, integer *iblock, integer *isplit, 
	doublereal *z__, integer *ldz, doublereal *work, integer *iwork, 
	integer *ifail, integer *info);
 
/* Subroutine */ int __cdecl dsteqr_(char *compz, integer *n, doublereal *d__, 
	doublereal *e, doublereal *z__, integer *ldz, doublereal *work, 
	integer *info);
 
/* Subroutine */ int __cdecl dsterf_(integer *n, doublereal *d__, doublereal *e, 
	integer *info);
 
/* Subroutine */ int __cdecl dstev_(char *jobz, integer *n, doublereal *d__, 
	doublereal *e, doublereal *z__, integer *ldz, doublereal *work, 
	integer *info);
 
/* Subroutine */ int __cdecl dstevd_(char *jobz, integer *n, doublereal *d__, 
	doublereal *e, doublereal *z__, integer *ldz, doublereal *work, 
	integer *lwork, integer *iwork, integer *liwork, integer *info);
 
/* Subroutine */ int __cdecl dstevr_(char *jobz, char *range, integer *n, doublereal *
	d__, doublereal *e, doublereal *vl, doublereal *vu, integer *il, 
	integer *iu, doublereal *abstol, integer *m, doublereal *w, 
	doublereal *z__, integer *ldz, integer *isuppz, doublereal *work, 
	integer *lwork, integer *iwork, integer *liwork, integer *info);
 
/* Subroutine */ int __cdecl dstevx_(char *jobz, char *range, integer *n, doublereal *
	d__, doublereal *e, doublereal *vl, doublereal *vu, integer *il, 
	integer *iu, doublereal *abstol, integer *m, doublereal *w, 
	doublereal *z__, integer *ldz, doublereal *work, integer *iwork, 
	integer *ifail, integer *info);
 
/* Subroutine */ int __cdecl dsycon_(char *uplo, integer *n, doublereal *a, integer *
	lda, integer *ipiv, doublereal *anorm, doublereal *rcond, doublereal *
	work, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl dsyev_(char *jobz, char *uplo, integer *n, doublereal *a,
	 integer *lda, doublereal *w, doublereal *work, integer *lwork, 
	integer *info);
 
	 /* Subroutine */int dsyevd_(char *jobz, char *uplo, integer *n, doublereal *
	a, integer *lda, doublereal *w, doublereal *work, integer *lwork, 
		integer *iwork, integer *liwork, integer *info);
 
/* Subroutine */ int __cdecl dsyevr_(char *jobz, char *range, char *uplo, integer *n, 
	doublereal *a, integer *lda, doublereal *vl, doublereal *vu, integer *
	il, integer *iu, doublereal *abstol, integer *m, doublereal *w, 
	doublereal *z__, integer *ldz, integer *isuppz, doublereal *work, 
	integer *lwork, integer *iwork, integer *liwork, integer *info);
 
/* Subroutine */ int __cdecl dsyevx_(char *jobz, char *range, char *uplo, integer *n, 
	doublereal *a, integer *lda, doublereal *vl, doublereal *vu, integer *
	il, integer *iu, doublereal *abstol, integer *m, doublereal *w, 
	doublereal *z__, integer *ldz, doublereal *work, integer *lwork, 
	integer *iwork, integer *ifail, integer *info);
 
/* Subroutine */ int __cdecl dsygs2_(integer *itype, char *uplo, integer *n, 
	doublereal *a, integer *lda, doublereal *b, integer *ldb, integer *
	info);
 
/* Subroutine */ int __cdecl dsygst_(integer *itype, char *uplo, integer *n, 
	doublereal *a, integer *lda, doublereal *b, integer *ldb, integer *
	info);
 
/* Subroutine */ int __cdecl dsygv_(integer *itype, char *jobz, char *uplo, integer *
	n, doublereal *a, integer *lda, doublereal *b, integer *ldb, 
	doublereal *w, doublereal *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl dsygvd_(integer *itype, char *jobz, char *uplo, integer *
	n, doublereal *a, integer *lda, doublereal *b, integer *ldb, 
	doublereal *w, doublereal *work, integer *lwork, integer *iwork, 
	integer *liwork, integer *info);
 
/* Subroutine */ int __cdecl dsygvx_(integer *itype, char *jobz, char *range, char *
	uplo, integer *n, doublereal *a, integer *lda, doublereal *b, integer 
	*ldb, doublereal *vl, doublereal *vu, integer *il, integer *iu, 
	doublereal *abstol, integer *m, doublereal *w, doublereal *z__, 
	integer *ldz, doublereal *work, integer *lwork, integer *iwork, 
	integer *ifail, integer *info);
 
/* Subroutine */ int __cdecl dsyrfs_(char *uplo, integer *n, integer *nrhs, 
	doublereal *a, integer *lda, doublereal *af, integer *ldaf, integer *
	ipiv, doublereal *b, integer *ldb, doublereal *x, integer *ldx, 
	doublereal *ferr, doublereal *berr, doublereal *work, integer *iwork, 
	integer *info);
 
/* Subroutine */ int __cdecl dsysv_(char *uplo, integer *n, integer *nrhs, doublereal 
	*a, integer *lda, integer *ipiv, doublereal *b, integer *ldb, 
	doublereal *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl dsysvx_(char *fact, char *uplo, integer *n, integer *
	nrhs, doublereal *a, integer *lda, doublereal *af, integer *ldaf, 
	integer *ipiv, doublereal *b, integer *ldb, doublereal *x, integer *
	ldx, doublereal *rcond, doublereal *ferr, doublereal *berr, 
	doublereal *work, integer *lwork, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl dsytd2_(char *uplo, integer *n, doublereal *a, integer *
	lda, doublereal *d__, doublereal *e, doublereal *tau, integer *info);
 
/* Subroutine */ int __cdecl dsytf2_(char *uplo, integer *n, doublereal *a, integer *
	lda, integer *ipiv, integer *info);
 
/* Subroutine */ int __cdecl dsytrd_(char *uplo, integer *n, doublereal *a, integer *
	lda, doublereal *d__, doublereal *e, doublereal *tau, doublereal *
	work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl dsytrf_(char *uplo, integer *n, doublereal *a, integer *
	lda, integer *ipiv, doublereal *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl dsytri_(char *uplo, integer *n, doublereal *a, integer *
	lda, integer *ipiv, doublereal *work, integer *info);
 
/* Subroutine */ int __cdecl dsytrs_(char *uplo, integer *n, integer *nrhs, 
	doublereal *a, integer *lda, integer *ipiv, doublereal *b, integer *
	ldb, integer *info);
 
/* Subroutine */ int __cdecl dtbcon_(char *norm, char *uplo, char *diag, integer *n, 
	integer *kd, doublereal *ab, integer *ldab, doublereal *rcond, 
	doublereal *work, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl dtbrfs_(char *uplo, char *trans, char *diag, integer *n, 
	integer *kd, integer *nrhs, doublereal *ab, integer *ldab, doublereal 
	*b, integer *ldb, doublereal *x, integer *ldx, doublereal *ferr, 
	doublereal *berr, doublereal *work, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl dtbtrs_(char *uplo, char *trans, char *diag, integer *n, 
	integer *kd, integer *nrhs, doublereal *ab, integer *ldab, doublereal 
	*b, integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl dtgevc_(char *side, char *howmny, logical *select, 
	integer *n, doublereal *a, integer *lda, doublereal *b, integer *ldb, 
	doublereal *vl, integer *ldvl, doublereal *vr, integer *ldvr, integer 
	*mm, integer *m, doublereal *work, integer *info);
 
/* Subroutine */ int __cdecl dtgex2_(logical *wantq, logical *wantz, integer *n, 
	doublereal *a, integer *lda, doublereal *b, integer *ldb, doublereal *
	q, integer *ldq, doublereal *z__, integer *ldz, integer *j1, integer *
	n1, integer *n2, doublereal *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl dtgexc_(logical *wantq, logical *wantz, integer *n, 
	doublereal *a, integer *lda, doublereal *b, integer *ldb, doublereal *
	q, integer *ldq, doublereal *z__, integer *ldz, integer *ifst, 
	integer *ilst, doublereal *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl dtgsen_(integer *ijob, logical *wantq, logical *wantz, 
	logical *select, integer *n, doublereal *a, integer *lda, doublereal *
	b, integer *ldb, doublereal *alphar, doublereal *alphai, doublereal *
	beta, doublereal *q, integer *ldq, doublereal *z__, integer *ldz, 
	integer *m, doublereal *pl, doublereal *pr, doublereal *dif, 
	doublereal *work, integer *lwork, integer *iwork, integer *liwork, 
	integer *info);
 
/* Subroutine */ int __cdecl dtgsja_(char *jobu, char *jobv, char *jobq, integer *m, 
	integer *p, integer *n, integer *k, integer *l, doublereal *a, 
	integer *lda, doublereal *b, integer *ldb, doublereal *tola, 
	doublereal *tolb, doublereal *alpha, doublereal *beta, doublereal *u, 
	integer *ldu, doublereal *v, integer *ldv, doublereal *q, integer *
	ldq, doublereal *work, integer *ncycle, integer *info);
 
/* Subroutine */ int __cdecl dtgsna_(char *job, char *howmny, logical *select, 
	integer *n, doublereal *a, integer *lda, doublereal *b, integer *ldb, 
	doublereal *vl, integer *ldvl, doublereal *vr, integer *ldvr, 
	doublereal *s, doublereal *dif, integer *mm, integer *m, doublereal *
	work, integer *lwork, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl dtgsy2_(char *trans, integer *ijob, integer *m, integer *
	n, doublereal *a, integer *lda, doublereal *b, integer *ldb, 
	doublereal *c__, integer *ldc, doublereal *d__, integer *ldd, 
	doublereal *e, integer *lde, doublereal *f, integer *ldf, doublereal *
	scale, doublereal *rdsum, doublereal *rdscal, integer *iwork, integer 
	*pq, integer *info);
 
/* Subroutine */ int __cdecl dtgsyl_(char *trans, integer *ijob, integer *m, integer *
	n, doublereal *a, integer *lda, doublereal *b, integer *ldb, 
	doublereal *c__, integer *ldc, doublereal *d__, integer *ldd, 
	doublereal *e, integer *lde, doublereal *f, integer *ldf, doublereal *
	scale, doublereal *dif, doublereal *work, integer *lwork, integer *
	iwork, integer *info);
 
/* Subroutine */ int __cdecl dtpcon_(char *norm, char *uplo, char *diag, integer *n, 
	doublereal *ap, doublereal *rcond, doublereal *work, integer *iwork, 
	integer *info);
 
/* Subroutine */ int __cdecl dtprfs_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, doublereal *ap, doublereal *b, integer *ldb, 
	doublereal *x, integer *ldx, doublereal *ferr, doublereal *berr, 
	doublereal *work, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl dtptri_(char *uplo, char *diag, integer *n, doublereal *
	ap, integer *info);
 
/* Subroutine */ int __cdecl dtptrs_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, doublereal *ap, doublereal *b, integer *ldb, integer *
	info);
 
/* Subroutine */ int __cdecl dtrcon_(char *norm, char *uplo, char *diag, integer *n, 
	doublereal *a, integer *lda, doublereal *rcond, doublereal *work, 
	integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl dtrevc_(char *side, char *howmny, logical *select, 
	integer *n, doublereal *t, integer *ldt, doublereal *vl, integer *
	ldvl, doublereal *vr, integer *ldvr, integer *mm, integer *m, 
	doublereal *work, integer *info);
 
/* Subroutine */ int __cdecl dtrexc_(char *compq, integer *n, doublereal *t, integer *
	ldt, doublereal *q, integer *ldq, integer *ifst, integer *ilst, 
	doublereal *work, integer *info);
 
/* Subroutine */ int __cdecl dtrrfs_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, doublereal *a, integer *lda, doublereal *b, integer *
	ldb, doublereal *x, integer *ldx, doublereal *ferr, doublereal *berr, 
	doublereal *work, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl dtrsen_(char *job, char *compq, logical *select, integer 
	*n, doublereal *t, integer *ldt, doublereal *q, integer *ldq, 
	doublereal *wr, doublereal *wi, integer *m, doublereal *s, doublereal 
	*sep, doublereal *work, integer *lwork, integer *iwork, integer *
	liwork, integer *info);
 
/* Subroutine */ int __cdecl dtrsna_(char *job, char *howmny, logical *select, 
	integer *n, doublereal *t, integer *ldt, doublereal *vl, integer *
	ldvl, doublereal *vr, integer *ldvr, doublereal *s, doublereal *sep, 
	integer *mm, integer *m, doublereal *work, integer *ldwork, integer *
	iwork, integer *info);
 
/* Subroutine */ int __cdecl dtrsyl_(char *trana, char *tranb, integer *isgn, integer 
	*m, integer *n, doublereal *a, integer *lda, doublereal *b, integer *
	ldb, doublereal *c__, integer *ldc, doublereal *scale, integer *info);
 
/* Subroutine */ int __cdecl dtrti2_(char *uplo, char *diag, integer *n, doublereal *
	a, integer *lda, integer *info);
 
/* Subroutine */ int __cdecl dtrtri_(char *uplo, char *diag, integer *n, doublereal *
	a, integer *lda, integer *info);
 
/* Subroutine */ int __cdecl dtrtrs_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, doublereal *a, integer *lda, doublereal *b, integer *
	ldb, integer *info);
 
/* Subroutine */ int __cdecl dtzrqf_(integer *m, integer *n, doublereal *a, integer *
	lda, doublereal *tau, integer *info);
 
/* Subroutine */ int __cdecl dtzrzf_(integer *m, integer *n, doublereal *a, integer *
	lda, doublereal *tau, doublereal *work, integer *lwork, integer *info);
 
integer icmax1_(integer *n, complex_ *cx, integer *incx);
 
integer ieeeck_(integer *ispec, real_ *zero, real_ *one);
 
integer ilaenv_(integer *ispec, char *name__, char *opts, integer *n1, 
	integer *n2, integer *n3, integer *n4, ftnlen name_len, ftnlen 
	opts_len);
 
integer izmax1_(integer *n, doublecomplex *cx, integer *incx);
 
/* Subroutine */ int __cdecl sbdsdc_(char *uplo, char *compq, integer *n, real_ *d__, 
	real_ *e, real_ *u, integer *ldu, real_ *vt, integer *ldvt, real_ *q, 
	integer *iq, real_ *work, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl sbdsqr_(char *uplo, integer *n, integer *ncvt, integer *
	nru, integer *ncc, real_ *d__, real_ *e, real_ *vt, integer *ldvt, real_ *
	u, integer *ldu, real_ *c__, integer *ldc, real_ *work, integer *info);
 
/* Subroutine */ int __cdecl sdisna_(char *job, integer *m, integer *n, real_ *d__, 
	real_ *sep, integer *info);
 
/* Subroutine */ int __cdecl sgbbrd_(char *vect, integer *m, integer *n, integer *ncc,
	 integer *kl, integer *ku, real_ *ab, integer *ldab, real_ *d__, real_ *
	e, real_ *q, integer *ldq, real_ *pt, integer *ldpt, real_ *c__, integer 
	*ldc, real_ *work, integer *info);
 
/* Subroutine */ int __cdecl sgbcon_(char *norm, integer *n, integer *kl, integer *ku,
	 real_ *ab, integer *ldab, integer *ipiv, real_ *anorm, real_ *rcond, 
	real_ *work, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl sgbequ_(integer *m, integer *n, integer *kl, integer *ku,
	 real_ *ab, integer *ldab, real_ *r__, real_ *c__, real_ *rowcnd, real_ *
	colcnd, real_ *amax, integer *info);
 
/* Subroutine */ int __cdecl sgbrfs_(char *trans, integer *n, integer *kl, integer *
	ku, integer *nrhs, real_ *ab, integer *ldab, real_ *afb, integer *ldafb,
	 integer *ipiv, real_ *b, integer *ldb, real_ *x, integer *ldx, real_ *
	ferr, real_ *berr, real_ *work, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl sgbsv_(integer *n, integer *kl, integer *ku, integer *
	nrhs, real_ *ab, integer *ldab, integer *ipiv, real_ *b, integer *ldb, 
	integer *info);
 
/* Subroutine */ int __cdecl sgbsvx_(char *fact, char *trans, integer *n, integer *kl,
	 integer *ku, integer *nrhs, real_ *ab, integer *ldab, real_ *afb, 
	integer *ldafb, integer *ipiv, char *equed, real_ *r__, real_ *c__, 
	real_ *b, integer *ldb, real_ *x, integer *ldx, real_ *rcond, real_ *ferr,
	 real_ *berr, real_ *work, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl sgbtf2_(integer *m, integer *n, integer *kl, integer *ku,
	 real_ *ab, integer *ldab, integer *ipiv, integer *info);
 
/* Subroutine */ int __cdecl sgbtrf_(integer *m, integer *n, integer *kl, integer *ku,
	 real_ *ab, integer *ldab, integer *ipiv, integer *info);
 
/* Subroutine */ int __cdecl sgbtrs_(char *trans, integer *n, integer *kl, integer *
	ku, integer *nrhs, real_ *ab, integer *ldab, integer *ipiv, real_ *b, 
	integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl sgebak_(char *job, char *side, integer *n, integer *ilo, 
	integer *ihi, real_ *scale, integer *m, real_ *v, integer *ldv, integer 
	*info);
 
/* Subroutine */ int __cdecl sgebal_(char *job, integer *n, real_ *a, integer *lda, 
	integer *ilo, integer *ihi, real_ *scale, integer *info);
 
/* Subroutine */ int __cdecl sgebd2_(integer *m, integer *n, real_ *a, integer *lda, 
	real_ *d__, real_ *e, real_ *tauq, real_ *taup, real_ *work, integer *info);
 
/* Subroutine */ int __cdecl sgebrd_(integer *m, integer *n, real_ *a, integer *lda, 
	real_ *d__, real_ *e, real_ *tauq, real_ *taup, real_ *work, integer *
	lwork, integer *info);
 
/* Subroutine */ int __cdecl sgecon_(char *norm, integer *n, real_ *a, integer *lda, 
	real_ *anorm, real_ *rcond, real_ *work, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl sgeequ_(integer *m, integer *n, real_ *a, integer *lda, 
	real_ *r__, real_ *c__, real_ *rowcnd, real_ *colcnd, real_ *amax, integer 
	*info);
 
/* Subroutine */ int __cdecl sgees_(char *jobvs, char *sort, L_fp select, integer *n, 
	real_ *a, integer *lda, integer *sdim, real_ *wr, real_ *wi, real_ *vs, 
	integer *ldvs, real_ *work, integer *lwork, logical *bwork, integer *
	info);
 
/* Subroutine */ int __cdecl sgeesx_(char *jobvs, char *sort, L_fp select, char *
	sense, integer *n, real_ *a, integer *lda, integer *sdim, real_ *wr, 
	real_ *wi, real_ *vs, integer *ldvs, real_ *rconde, real_ *rcondv, real_ *
	work, integer *lwork, integer *iwork, integer *liwork, logical *bwork,
	 integer *info);
 
/* Subroutine */ int __cdecl sgeev_(char *jobvl, char *jobvr, integer *n, real_ *a, 
	integer *lda, real_ *wr, real_ *wi, real_ *vl, integer *ldvl, real_ *vr, 
	integer *ldvr, real_ *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl sgeevx_(char *balanc, char *jobvl, char *jobvr, char *
	sense, integer *n, real_ *a, integer *lda, real_ *wr, real_ *wi, real_ *
	vl, integer *ldvl, real_ *vr, integer *ldvr, integer *ilo, integer *
	ihi, real_ *scale, real_ *abnrm, real_ *rconde, real_ *rcondv, real_ *work,
	 integer *lwork, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl sgegs_(char *jobvsl, char *jobvsr, integer *n, real_ *a, 
	integer *lda, real_ *b, integer *ldb, real_ *alphar, real_ *alphai, real_ 
	*beta, real_ *vsl, integer *ldvsl, real_ *vsr, integer *ldvsr, real_ *
	work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl sgegv_(char *jobvl, char *jobvr, integer *n, real_ *a, 
	integer *lda, real_ *b, integer *ldb, real_ *alphar, real_ *alphai, real_ 
	*beta, real_ *vl, integer *ldvl, real_ *vr, integer *ldvr, real_ *work, 
	integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl sgehd2_(integer *n, integer *ilo, integer *ihi, real_ *a, 
	integer *lda, real_ *tau, real_ *work, integer *info);
 
/* Subroutine */ int __cdecl sgehrd_(integer *n, integer *ilo, integer *ihi, real_ *a, 
	integer *lda, real_ *tau, real_ *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl sgelq2_(integer *m, integer *n, real_ *a, integer *lda, 
	real_ *tau, real_ *work, integer *info);
 
/* Subroutine */ int __cdecl sgelqf_(integer *m, integer *n, real_ *a, integer *lda, 
	real_ *tau, real_ *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl sgels_(char *trans, integer *m, integer *n, integer *
	nrhs, real_ *a, integer *lda, real_ *b, integer *ldb, real_ *work, 
	integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl sgelsd_(integer *m, integer *n, integer *nrhs, real_ *a, 
	integer *lda, real_ *b, integer *ldb, real_ *s, real_ *rcond, integer *
	rank, real_ *work, integer *lwork, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl sgelss_(integer *m, integer *n, integer *nrhs, real_ *a, 
	integer *lda, real_ *b, integer *ldb, real_ *s, real_ *rcond, integer *
	rank, real_ *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl sgelsx_(integer *m, integer *n, integer *nrhs, real_ *a, 
	integer *lda, real_ *b, integer *ldb, integer *jpvt, real_ *rcond, 
	integer *rank, real_ *work, integer *info);
 
/* Subroutine */ int __cdecl sgelsy_(integer *m, integer *n, integer *nrhs, real_ *a, 
	integer *lda, real_ *b, integer *ldb, integer *jpvt, real_ *rcond, 
	integer *rank, real_ *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl sgeql2_(integer *m, integer *n, real_ *a, integer *lda, 
	real_ *tau, real_ *work, integer *info);
 
/* Subroutine */ int __cdecl sgeqlf_(integer *m, integer *n, real_ *a, integer *lda, 
	real_ *tau, real_ *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl sgeqp3_(integer *m, integer *n, real_ *a, integer *lda, 
	integer *jpvt, real_ *tau, real_ *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl sgeqpf_(integer *m, integer *n, real_ *a, integer *lda, 
	integer *jpvt, real_ *tau, real_ *work, integer *info);
 
/* Subroutine */ int __cdecl sgeqr2_(integer *m, integer *n, real_ *a, integer *lda, 
	real_ *tau, real_ *work, integer *info);
 
/* Subroutine */ int __cdecl sgeqrf_(integer *m, integer *n, real_ *a, integer *lda, 
	real_ *tau, real_ *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl sgerfs_(char *trans, integer *n, integer *nrhs, real_ *a, 
	integer *lda, real_ *af, integer *ldaf, integer *ipiv, real_ *b, 
	integer *ldb, real_ *x, integer *ldx, real_ *ferr, real_ *berr, real_ *
	work, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl sgerq2_(integer *m, integer *n, real_ *a, integer *lda, 
	real_ *tau, real_ *work, integer *info);
 
/* Subroutine */ int __cdecl sgerqf_(integer *m, integer *n, real_ *a, integer *lda, 
	real_ *tau, real_ *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl sgesc2_(integer *n, real_ *a, integer *lda, real_ *rhs, 
	integer *ipiv, integer *jpiv, real_ *scale);
 
/* Subroutine */ int __cdecl sgesdd_(char *jobz, integer *m, integer *n, real_ *a, 
	integer *lda, real_ *s, real_ *u, integer *ldu, real_ *vt, integer *ldvt,
	 real_ *work, integer *lwork, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl sgesv_(integer *n, integer *nrhs, real_ *a, integer *lda, 
	integer *ipiv, real_ *b, integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl sgesvd_(char *jobu, char *jobvt, integer *m, integer *n, 
	real_ *a, integer *lda, real_ *s, real_ *u, integer *ldu, real_ *vt, 
	integer *ldvt, real_ *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl sgesvx_(char *fact, char *trans, integer *n, integer *
	nrhs, real_ *a, integer *lda, real_ *af, integer *ldaf, integer *ipiv, 
	char *equed, real_ *r__, real_ *c__, real_ *b, integer *ldb, real_ *x, 
	integer *ldx, real_ *rcond, real_ *ferr, real_ *berr, real_ *work, 
	integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl sgetc2_(integer *n, real_ *a, integer *lda, integer *ipiv,
	 integer *jpiv, integer *info);
 
/* Subroutine */ int __cdecl sgetf2_(integer *m, integer *n, real_ *a, integer *lda, 
	integer *ipiv, integer *info);
 
/* Subroutine */ int __cdecl sgetrf_(integer *m, integer *n, real_ *a, integer *lda, 
	integer *ipiv, integer *info);
 
/* Subroutine */ int __cdecl sgetri_(integer *n, real_ *a, integer *lda, integer *ipiv,
	 real_ *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl sgetrs_(char *trans, integer *n, integer *nrhs, real_ *a, 
	integer *lda, integer *ipiv, real_ *b, integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl sggbak_(char *job, char *side, integer *n, integer *ilo, 
	integer *ihi, real_ *lscale, real_ *rscale, integer *m, real_ *v, 
	integer *ldv, integer *info);
 
/* Subroutine */ int __cdecl sggbal_(char *job, integer *n, real_ *a, integer *lda, 
	real_ *b, integer *ldb, integer *ilo, integer *ihi, real_ *lscale, real_ 
	*rscale, real_ *work, integer *info);
 
/* Subroutine */ int __cdecl sgges_(char *jobvsl, char *jobvsr, char *sort, L_fp 
	selctg, integer *n, real_ *a, integer *lda, real_ *b, integer *ldb, 
	integer *sdim, real_ *alphar, real_ *alphai, real_ *beta, real_ *vsl, 
	integer *ldvsl, real_ *vsr, integer *ldvsr, real_ *work, integer *lwork,
	 logical *bwork, integer *info);
 
/* Subroutine */ int __cdecl sggesx_(char *jobvsl, char *jobvsr, char *sort, L_fp 
	selctg, char *sense, integer *n, real_ *a, integer *lda, real_ *b, 
	integer *ldb, integer *sdim, real_ *alphar, real_ *alphai, real_ *beta, 
	real_ *vsl, integer *ldvsl, real_ *vsr, integer *ldvsr, real_ *rconde, 
	real_ *rcondv, real_ *work, integer *lwork, integer *iwork, integer *
	liwork, logical *bwork, integer *info);
 
/* Subroutine */ int __cdecl sggev_(char *jobvl, char *jobvr, integer *n, real_ *a, 
	integer *lda, real_ *b, integer *ldb, real_ *alphar, real_ *alphai, real_ 
	*beta, real_ *vl, integer *ldvl, real_ *vr, integer *ldvr, real_ *work, 
	integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl sggevx_(char *balanc, char *jobvl, char *jobvr, char *
	sense, integer *n, real_ *a, integer *lda, real_ *b, integer *ldb, real_ 
	*alphar, real_ *alphai, real_ *beta, real_ *vl, integer *ldvl, real_ *vr, 
	integer *ldvr, integer *ilo, integer *ihi, real_ *lscale, real_ *rscale,
	 real_ *abnrm, real_ *bbnrm, real_ *rconde, real_ *rcondv, real_ *work, 
	integer *lwork, integer *iwork, logical *bwork, integer *info);
 
/* Subroutine */ int __cdecl sggglm_(integer *n, integer *m, integer *p, real_ *a, 
	integer *lda, real_ *b, integer *ldb, real_ *d__, real_ *x, real_ *y, 
	real_ *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl sgghrd_(char *compq, char *compz, integer *n, integer *
	ilo, integer *ihi, real_ *a, integer *lda, real_ *b, integer *ldb, real_ 
	*q, integer *ldq, real_ *z__, integer *ldz, integer *info);
 
/* Subroutine */ int __cdecl sgglse_(integer *m, integer *n, integer *p, real_ *a, 
	integer *lda, real_ *b, integer *ldb, real_ *c__, real_ *d__, real_ *x, 
	real_ *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl sggqrf_(integer *n, integer *m, integer *p, real_ *a, 
	integer *lda, real_ *taua, real_ *b, integer *ldb, real_ *taub, real_ *
	work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl sggrqf_(integer *m, integer *p, integer *n, real_ *a, 
	integer *lda, real_ *taua, real_ *b, integer *ldb, real_ *taub, real_ *
	work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl sggsvd_(char *jobu, char *jobv, char *jobq, integer *m, 
	integer *n, integer *p, integer *k, integer *l, real_ *a, integer *lda,
	 real_ *b, integer *ldb, real_ *alpha, real_ *beta, real_ *u, integer *
	ldu, real_ *v, integer *ldv, real_ *q, integer *ldq, real_ *work, 
	integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl sggsvp_(char *jobu, char *jobv, char *jobq, integer *m, 
	integer *p, integer *n, real_ *a, integer *lda, real_ *b, integer *ldb, 
	real_ *tola, real_ *tolb, integer *k, integer *l, real_ *u, integer *ldu,
	 real_ *v, integer *ldv, real_ *q, integer *ldq, integer *iwork, real_ *
	tau, real_ *work, integer *info);
 
/* Subroutine */ int __cdecl sgtcon_(char *norm, integer *n, real_ *dl, real_ *d__, 
	real_ *du, real_ *du2, integer *ipiv, real_ *anorm, real_ *rcond, real_ *
	work, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl sgtrfs_(char *trans, integer *n, integer *nrhs, real_ *dl,
	 real_ *d__, real_ *du, real_ *dlf, real_ *df, real_ *duf, real_ *du2, 
	integer *ipiv, real_ *b, integer *ldb, real_ *x, integer *ldx, real_ *
	ferr, real_ *berr, real_ *work, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl sgtsv_(integer *n, integer *nrhs, real_ *dl, real_ *d__, 
	real_ *du, real_ *b, integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl sgtsvx_(char *fact, char *trans, integer *n, integer *
	nrhs, real_ *dl, real_ *d__, real_ *du, real_ *dlf, real_ *df, real_ *duf, 
	real_ *du2, integer *ipiv, real_ *b, integer *ldb, real_ *x, integer *
	ldx, real_ *rcond, real_ *ferr, real_ *berr, real_ *work, integer *iwork, 
	integer *info);
 
/* Subroutine */ int __cdecl sgttrf_(integer *n, real_ *dl, real_ *d__, real_ *du, real_ *
	du2, integer *ipiv, integer *info);
 
/* Subroutine */ int __cdecl sgttrs_(char *trans, integer *n, integer *nrhs, real_ *dl,
	 real_ *d__, real_ *du, real_ *du2, integer *ipiv, real_ *b, integer *ldb,
	 integer *info);
 
/* Subroutine */ int __cdecl sgtts2_(integer *itrans, integer *n, integer *nrhs, real_ 
	*dl, real_ *d__, real_ *du, real_ *du2, integer *ipiv, real_ *b, integer *
	ldb);
 
/* Subroutine */ int __cdecl shgeqz_(char *job, char *compq, char *compz, integer *n, 
	integer *ilo, integer *ihi, real_ *a, integer *lda, real_ *b, integer *
	ldb, real_ *alphar, real_ *alphai, real_ *beta, real_ *q, integer *ldq, 
	real_ *z__, integer *ldz, real_ *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl shsein_(char *side, char *eigsrc, char *initv, logical *
	select, integer *n, real_ *h__, integer *ldh, real_ *wr, real_ *wi, real_ 
	*vl, integer *ldvl, real_ *vr, integer *ldvr, integer *mm, integer *m, 
	real_ *work, integer *ifaill, integer *ifailr, integer *info);
 
/* Subroutine */ int __cdecl shseqr_(char *job, char *compz, integer *n, integer *ilo,
	 integer *ihi, real_ *h__, integer *ldh, real_ *wr, real_ *wi, real_ *z__,
	 integer *ldz, real_ *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl slabad_(real_ *small2, real_ *large);
 
/* Subroutine */ int __cdecl slabrd_(integer *m, integer *n, integer *nb, real_ *a, 
	integer *lda, real_ *d__, real_ *e, real_ *tauq, real_ *taup, real_ *x, 
	integer *ldx, real_ *y, integer *ldy);
 
/* Subroutine */ int __cdecl slacon_(integer *n, real_ *v, real_ *x, integer *isgn, 
	real_ *est, integer *kase);
 
/* Subroutine */ int __cdecl slacpy_(char *uplo, integer *m, integer *n, real_ *a, 
	integer *lda, real_ *b, integer *ldb);
 
/* Subroutine */ int __cdecl sladiv_(real_ *a, real_ *b, real_ *c__, real_ *d__, real_ *p, 
	real_ *q);
 
/* Subroutine */ int __cdecl SLAE2(real_ *a, real_ *b, real_ *c__, real_ *rt1, real_ *rt2);
 
/* Subroutine */ int __cdecl slaebz_(integer *ijob, integer *nitmax, integer *n, 
	integer *mmax, integer *minp, integer *nbmin, real_ *abstol, real_ *
	reltol, real_ *pivmin, real_ *d__, real_ *e, real_ *e2, integer *nval, 
	real_ *ab, real_ *c__, integer *mout, integer *nab, real_ *work, integer 
	*iwork, integer *info);
 
/* Subroutine */ int __cdecl slaed0_(integer *icompq, integer *qsiz, integer *n, real_ 
	*d__, real_ *e, real_ *q, integer *ldq, real_ *qstore, integer *ldqs, 
	real_ *work, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl slaed1_(integer *n, real_ *d__, real_ *q, integer *ldq, 
	integer *indxq, real_ *rho, integer *cutpnt, real_ *work, integer *
	iwork, integer *info);
 
/* Subroutine */ int __cdecl slaed2_(integer *k, integer *n, integer *n1, real_ *d__, 
	real_ *q, integer *ldq, integer *indxq, real_ *rho, real_ *z__, real_ *
	dlamda, real_ *w, real_ *q2, integer *indx, integer *indxc, integer *
	indxp, integer *coltyp, integer *info);
 
/* Subroutine */ int __cdecl slaed3_(integer *k, integer *n, integer *n1, real_ *d__, 
	real_ *q, integer *ldq, real_ *rho, real_ *dlamda, real_ *q2, integer *
	indx, integer *ctot, real_ *w, real_ *s, integer *info);
 
/* Subroutine */ int __cdecl slaed4_(integer *n, integer *i__, real_ *d__, real_ *z__, 
	real_ *delta, real_ *rho, real_ *dlam, integer *info);
 
/* Subroutine */ int __cdecl slaed5_(integer *i__, real_ *d__, real_ *z__, real_ *delta, 
	real_ *rho, real_ *dlam);
 
/* Subroutine */ int __cdecl slaed6_(integer *kniter, logical *orgati, real_ *rho, 
	real_ *d__, real_ *z__, real_ *finit, real_ *tau, integer *info);
 
/* Subroutine */ int __cdecl slaed7_(integer *icompq, integer *n, integer *qsiz, 
	integer *tlvls, integer *curlvl, integer *curpbm, real_ *d__, real_ *q, 
	integer *ldq, integer *indxq, real_ *rho, integer *cutpnt, real_ *
	qstore, integer *qptr, integer *prmptr, integer *perm, integer *
	givptr, integer *givcol, real_ *givnum, real_ *work, integer *iwork, 
	integer *info);
 
/* Subroutine */ int __cdecl slaed8_(integer *icompq, integer *k, integer *n, integer 
	*qsiz, real_ *d__, real_ *q, integer *ldq, integer *indxq, real_ *rho, 
	integer *cutpnt, real_ *z__, real_ *dlamda, real_ *q2, integer *ldq2, 
	real_ *w, integer *perm, integer *givptr, integer *givcol, real_ *
	givnum, integer *indxp, integer *indx, integer *info);
 
/* Subroutine */ int __cdecl slaed9_(integer *k, integer *kstart, integer *kstop, 
	integer *n, real_ *d__, real_ *q, integer *ldq, real_ *rho, real_ *dlamda,
	 real_ *w, real_ *s, integer *lds, integer *info);
 
/* Subroutine */ int __cdecl slaeda_(integer *n, integer *tlvls, integer *curlvl, 
	integer *curpbm, integer *prmptr, integer *perm, integer *givptr, 
	integer *givcol, real_ *givnum, real_ *q, integer *qptr, real_ *z__, 
	real_ *ztemp, integer *info);
 
/* Subroutine */ int __cdecl slaein_(logical *rightv, logical *noinit, integer *n, 
	real_ *h__, integer *ldh, real_ *wr, real_ *wi, real_ *vr, real_ *vi, real_ 
	*b, integer *ldb, real_ *work, real_ *eps3, real_ *smlnum, real_ *bignum, 
	integer *info);
 
/* Subroutine */ int __cdecl slaev2_(real_ *a, real_ *b, real_ *c__, real_ *rt1, real_ *
	rt2, real_ *cs1, real_ *sn1);
 
/* Subroutine */ int __cdecl slaexc_(logical *wantq, integer *n, real_ *t, integer *
	ldt, real_ *q, integer *ldq, integer *j1, integer *n1, integer *n2, 
	real_ *work, integer *info);
 
/* Subroutine */ int __cdecl SLAG2(real_ *a, integer *lda, real_ *b, integer *ldb, 
	real_ *safmin, real_ *scale1, real_ *scale2, real_ *wr1, real_ *wr2, real_ *
	wi);
 
/* Subroutine */ int __cdecl slags2_(logical *upper, real_ *a1, real_ *a2, real_ *a3, 
	real_ *b1, real_ *b2, real_ *b3, real_ *csu, real_ *snu, real_ *csv, real_ *
	snv, real_ *csq, real_ *snq);
 
/* Subroutine */ int __cdecl slagtf_(integer *n, real_ *a, real_ *lambda, real_ *b, real_ 
	*c__, real_ *tol, real_ *d__, integer *in, integer *info);
 
/* Subroutine */ int __cdecl slagtm_(char *trans, integer *n, integer *nrhs, real_ *
	alpha, real_ *dl, real_ *d__, real_ *du, real_ *x, integer *ldx, real_ *
	beta, real_ *b, integer *ldb);
 
/* Subroutine */ int __cdecl slagts_(integer *job, integer *n, real_ *a, real_ *b, real_ 
	*c__, real_ *d__, integer *in, real_ *y, real_ *tol, integer *info);
 
/* Subroutine */ int __cdecl slagv2_(real_ *a, integer *lda, real_ *b, integer *ldb, 
	real_ *alphar, real_ *alphai, real_ *beta, real_ *csl, real_ *snl, real_ *
	csr, real_ *snr);
 
/* Subroutine */ int __cdecl slahqr_(logical *wantt, logical *wantz, integer *n, 
	integer *ilo, integer *ihi, real_ *h__, integer *ldh, real_ *wr, real_ *
	wi, integer *iloz, integer *ihiz, real_ *z__, integer *ldz, integer *
	info);
 
/* Subroutine */ int __cdecl slahrd_(integer *n, integer *k, integer *nb, real_ *a, 
	integer *lda, real_ *tau, real_ *t, integer *ldt, real_ *y, integer *ldy);
 
/* Subroutine */ int __cdecl slaic1_(integer *job, integer *j, real_ *x, real_ *sest, 
	real_ *w, real_ *gamma, real_ *sestpr, real_ *s, real_ *c__);
 
/* Subroutine */ int __cdecl slaln2_(logical *ltrans, integer *na, integer *nw, real_ *
	smin, real_ *ca, real_ *a, integer *lda, real_ *d1, real_ *d2, real_ *b, 
	integer *ldb, real_ *wr, real_ *wi, real_ *x, integer *ldx, real_ *scale, 
	real_ *xnorm, integer *info);
 
/* Subroutine */ int __cdecl slals0_(integer *icompq, integer *nl, integer *nr, 
	integer *sqre, integer *nrhs, real_ *b, integer *ldb, real_ *bx, 
	integer *ldbx, integer *perm, integer *givptr, integer *givcol, 
	integer *ldgcol, real_ *givnum, integer *ldgnum, real_ *poles, real_ *
	difl, real_ *difr, real_ *z__, integer *k, real_ *c__, real_ *s, real_ *
	work, integer *info);
 
/* Subroutine */ int __cdecl slalsa_(integer *icompq, integer *smlsiz, integer *n, 
	integer *nrhs, real_ *b, integer *ldb, real_ *bx, integer *ldbx, real_ *
	u, integer *ldu, real_ *vt, integer *k, real_ *difl, real_ *difr, real_ *
	z__, real_ *poles, integer *givptr, integer *givcol, integer *ldgcol, 
	integer *perm, real_ *givnum, real_ *c__, real_ *s, real_ *work, integer *
	iwork, integer *info);
 
/* Subroutine */ int __cdecl slalsd_(char *uplo, integer *smlsiz, integer *n, integer 
	*nrhs, real_ *d__, real_ *e, real_ *b, integer *ldb, real_ *rcond, 
	integer *rank, real_ *work, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl slamc1_(integer *beta, integer *t, logical *rnd, logical 
	*ieee1);
 
/* Subroutine */ int __cdecl slamc2_(integer *beta, integer *t, logical *rnd, real_ *
	eps, integer *emin, real_ *rmin, integer *emax, real_ *rmax);
 
/* Subroutine */ int __cdecl slamc4_(integer *emin, real_ *start, integer *base);
 
/* Subroutine */ int __cdecl slamc5_(integer *beta, integer *p, integer *emin, 
	logical *ieee, integer *emax, real_ *rmax);
 
/* Subroutine */ int __cdecl slamrg_(integer *n1, integer *n2, real_ *a, integer *
	strd1, integer *strd2, integer *index);
 
/* Subroutine */ int __cdecl slanv2_(real_ *a, real_ *b, real_ *c__, real_ *d__, real_ *
	rt1r, real_ *rt1i, real_ *rt2r, real_ *rt2i, real_ *cs, real_ *sn);
 
/* Subroutine */ int __cdecl slapll_(integer *n, real_ *x, integer *incx, real_ *y, 
	integer *incy, real_ *ssmin);
 
/* Subroutine */ int __cdecl slapmt_(logical *forwrd, integer *m, integer *n, real_ *x,
	 integer *ldx, integer *k);
 
/* Subroutine */ int __cdecl slaqgb_(integer *m, integer *n, integer *kl, integer *ku,
	 real_ *ab, integer *ldab, real_ *r__, real_ *c__, real_ *rowcnd, real_ *
	colcnd, real_ *amax, char *equed);
 
/* Subroutine */ int __cdecl slaqge_(integer *m, integer *n, real_ *a, integer *lda, 
	real_ *r__, real_ *c__, real_ *rowcnd, real_ *colcnd, real_ *amax, char *
	equed);
 
/* Subroutine */ int __cdecl slaqp2_(integer *m, integer *n, integer *offset, real_ *a,
	 integer *lda, integer *jpvt, real_ *tau, real_ *vn1, real_ *vn2, real_ *
	work);
 
/* Subroutine */ int __cdecl slaqps_(integer *m, integer *n, integer *offset, integer 
	*nb, integer *kb, real_ *a, integer *lda, integer *jpvt, real_ *tau, 
	real_ *vn1, real_ *vn2, real_ *auxv, real_ *f, integer *ldf);
 
/* Subroutine */ int __cdecl slaqsb_(char *uplo, integer *n, integer *kd, real_ *ab, 
	integer *ldab, real_ *s, real_ *scond, real_ *amax, char *equed);
 
/* Subroutine */ int __cdecl slaqsp_(char *uplo, integer *n, real_ *ap, real_ *s, real_ *
	scond, real_ *amax, char *equed);
 
/* Subroutine */ int __cdecl slaqsy_(char *uplo, integer *n, real_ *a, integer *lda, 
	real_ *s, real_ *scond, real_ *amax, char *equed);
 
/* Subroutine */ int __cdecl slaqtr_(logical *ltran, logical *lreal, integer *n, real_ 
	*t, integer *ldt, real_ *b, real_ *w, real_ *scale, real_ *x, real_ *work, 
	integer *info);
 
/* Subroutine */ int __cdecl SLAR1V(integer *n, integer *b1, integer *bn, real_ *
	sigma, real_ *d__, real_ *l, real_ *ld, real_ *lld, real_ *gersch, real_ *
	z__, real_ *ztz, real_ *mingma, integer *r__, integer *isuppz, real_ *
	work);
 
/* Subroutine */ int __cdecl SLAR2V(integer *n, real_ *x, real_ *y, real_ *z__, integer 
	*incx, real_ *c__, real_ *s, integer *incc);
 
/* Subroutine */ int __cdecl slarf_(char *side, integer *m, integer *n, real_ *v, 
	integer *incv, real_ *tau, real_ *c__, integer *ldc, real_ *work);
 
/* Subroutine */ int __cdecl slarfb_(char *side, char *trans, char *direct, char *
	storev, integer *m, integer *n, integer *k, real_ *v, integer *ldv, 
	real_ *t, integer *ldt, real_ *c__, integer *ldc, real_ *work, integer *
	ldwork);
 
/* Subroutine */ int __cdecl slarfg_(integer *n, real_ *alpha, real_ *x, integer *incx, 
	real_ *tau);
 
/* Subroutine */ int __cdecl slarft_(char *direct, char *storev, integer *n, integer *
	k, real_ *v, integer *ldv, real_ *tau, real_ *t, integer *ldt);
 
/* Subroutine */ int __cdecl slarfx_(char *side, integer *m, integer *n, real_ *v, 
	real_ *tau, real_ *c__, integer *ldc, real_ *work);
 
/* Subroutine */ int __cdecl slargv_(integer *n, real_ *x, integer *incx, real_ *y, 
	integer *incy, real_ *c__, integer *incc);
 
/* Subroutine */ int __cdecl slarnv_(integer *idist, integer *iseed, integer *n, real_ 
	*x);
 
/* Subroutine */ int __cdecl slarrb_(integer *n, real_ *d__, real_ *l, real_ *ld, real_ *
	lld, integer *ifirst, integer *ilast, real_ *sigma, real_ *reltol, real_ 
	*w, real_ *wgap, real_ *werr, real_ *work, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl slarre_(integer *n, real_ *d__, real_ *e, real_ *tol, 
	integer *nsplit, integer *isplit, integer *m, real_ *w, real_ *woff, 
	real_ *gersch, real_ *work, integer *info);
 
/* Subroutine */ int __cdecl slarrf_(integer *n, real_ *d__, real_ *l, real_ *ld, real_ *
	lld, integer *ifirst, integer *ilast, real_ *w, real_ *dplus, real_ *
	lplus, real_ *work, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl slarrv_(integer *n, real_ *d__, real_ *l, integer *isplit, 
	integer *m, real_ *w, integer *iblock, real_ *gersch, real_ *tol, real_ *
	z__, integer *ldz, integer *isuppz, real_ *work, integer *iwork, 
	integer *info);
 
/* Subroutine */ int __cdecl slartg_(real_ *f, real_ *g, real_ *cs, real_ *sn, real_ *r__);
 
/* Subroutine */ int __cdecl slartv_(integer *n, real_ *x, integer *incx, real_ *y, 
	integer *incy, real_ *c__, real_ *s, integer *incc);
 
/* Subroutine */ int __cdecl slaruv_(integer *iseed, integer *n, real_ *x);
 
/* Subroutine */ int __cdecl slarz_(char *side, integer *m, integer *n, integer *l, 
	real_ *v, integer *incv, real_ *tau, real_ *c__, integer *ldc, real_ *
	work);
 
/* Subroutine */ int __cdecl slarzb_(char *side, char *trans, char *direct, char *
	storev, integer *m, integer *n, integer *k, integer *l, real_ *v, 
	integer *ldv, real_ *t, integer *ldt, real_ *c__, integer *ldc, real_ *
	work, integer *ldwork);
 
/* Subroutine */ int __cdecl slarzt_(char *direct, char *storev, integer *n, integer *
	k, real_ *v, integer *ldv, real_ *tau, real_ *t, integer *ldt);
 
/* Subroutine */ int __cdecl SLAS2(real_ *f, real_ *g, real_ *h__, real_ *ssmin, real_ *
	ssmax);
 
/* Subroutine */ int __cdecl slascl_(char *type__, integer *kl, integer *ku, real_ *
	cfrom, real_ *cto, integer *m, integer *n, real_ *a, integer *lda, 
	integer *info);
 
/* Subroutine */ int __cdecl slasd0_(integer *n, integer *sqre, real_ *d__, real_ *e, 
	real_ *u, integer *ldu, real_ *vt, integer *ldvt, integer *smlsiz, 
	integer *iwork, real_ *work, integer *info);
 
/* Subroutine */ int __cdecl slasd1_(integer *nl, integer *nr, integer *sqre, real_ *
	d__, real_ *alpha, real_ *beta, real_ *u, integer *ldu, real_ *vt, 
	integer *ldvt, integer *idxq, integer *iwork, real_ *work, integer *
	info);
 
/* Subroutine */ int __cdecl slasd2_(integer *nl, integer *nr, integer *sqre, integer 
	*k, real_ *d__, real_ *z__, real_ *alpha, real_ *beta, real_ *u, integer *
	ldu, real_ *vt, integer *ldvt, real_ *dsigma, real_ *u2, integer *ldu2, 
	real_ *vt2, integer *ldvt2, integer *idxp, integer *idx, integer *idxc,
	 integer *idxq, integer *coltyp, integer *info);
 
/* Subroutine */ int __cdecl slasd3_(integer *nl, integer *nr, integer *sqre, integer 
	*k, real_ *d__, real_ *q, integer *ldq, real_ *dsigma, real_ *u, integer *
	ldu, real_ *u2, integer *ldu2, real_ *vt, integer *ldvt, real_ *vt2, 
	integer *ldvt2, integer *idxc, integer *ctot, real_ *z__, integer *
	info);
 
/* Subroutine */ int __cdecl slasd4_(integer *n, integer *i__, real_ *d__, real_ *z__, 
	real_ *delta, real_ *rho, real_ *sigma, real_ *work, integer *info);
 
/* Subroutine */ int __cdecl slasd5_(integer *i__, real_ *d__, real_ *z__, real_ *delta, 
	real_ *rho, real_ *dsigma, real_ *work);
 
/* Subroutine */ int __cdecl slasd6_(integer *icompq, integer *nl, integer *nr, 
	integer *sqre, real_ *d__, real_ *vf, real_ *vl, real_ *alpha, real_ *beta,
	 integer *idxq, integer *perm, integer *givptr, integer *givcol, 
	integer *ldgcol, real_ *givnum, integer *ldgnum, real_ *poles, real_ *
	difl, real_ *difr, real_ *z__, integer *k, real_ *c__, real_ *s, real_ *
	work, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl slasd7_(integer *icompq, integer *nl, integer *nr, 
	integer *sqre, integer *k, real_ *d__, real_ *z__, real_ *zw, real_ *vf, 
	real_ *vfw, real_ *vl, real_ *vlw, real_ *alpha, real_ *beta, real_ *dsigma,
	 integer *idx, integer *idxp, integer *idxq, integer *perm, integer *
	givptr, integer *givcol, integer *ldgcol, real_ *givnum, integer *
	ldgnum, real_ *c__, real_ *s, integer *info);
 
/* Subroutine */ int __cdecl slasd8_(integer *icompq, integer *k, real_ *d__, real_ *
	z__, real_ *vf, real_ *vl, real_ *difl, real_ *difr, integer *lddifr, 
	real_ *dsigma, real_ *work, integer *info);
 
/* Subroutine */ int __cdecl slasd9_(integer *icompq, integer *ldu, integer *k, real_ *
	d__, real_ *z__, real_ *vf, real_ *vl, real_ *difl, real_ *difr, real_ *
	dsigma, real_ *work, integer *info);
 
/* Subroutine */ int __cdecl slasda_(integer *icompq, integer *smlsiz, integer *n, 
	integer *sqre, real_ *d__, real_ *e, real_ *u, integer *ldu, real_ *vt, 
	integer *k, real_ *difl, real_ *difr, real_ *z__, real_ *poles, integer *
	givptr, integer *givcol, integer *ldgcol, integer *perm, real_ *givnum,
	 real_ *c__, real_ *s, real_ *work, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl slasdq_(char *uplo, integer *sqre, integer *n, integer *
	ncvt, integer *nru, integer *ncc, real_ *d__, real_ *e, real_ *vt, 
	integer *ldvt, real_ *u, integer *ldu, real_ *c__, integer *ldc, real_ *
	work, integer *info);
 
/* Subroutine */ int __cdecl slasdt_(integer *n, integer *lvl, integer *nd, integer *
	inode, integer *ndiml, integer *ndimr, integer *msub);
 
/* Subroutine */ int __cdecl slaset_(char *uplo, integer *m, integer *n, real_ *alpha, 
	real_ *beta, real_ *a, integer *lda);
 
/* Subroutine */ int __cdecl slasq1_(integer *n, real_ *d__, real_ *e, real_ *work, 
	integer *info);
 
/* Subroutine */ int __cdecl slasq2_(integer *n, real_ *z__, integer *info);
 
/* Subroutine */ int __cdecl slasq3_(integer *i0, integer *n0, real_ *z__, integer *pp,
	 real_ *dmin__, real_ *sigma, real_ *desig, real_ *qmax, integer *nfail, 
	integer *iter, integer *ndiv, logical *ieee);
 
/* Subroutine */ int __cdecl slasq4_(integer *i0, integer *n0, real_ *z__, integer *pp,
	 integer *n0in, real_ *dmin__, real_ *dmin1, real_ *dmin2, real_ *dn, 
	real_ *dn1, real_ *dn2, real_ *tau, integer *ttype);
 
/* Subroutine */ int __cdecl slasq5_(integer *i0, integer *n0, real_ *z__, integer *pp,
	 real_ *tau, real_ *dmin__, real_ *dmin1, real_ *dmin2, real_ *dn, real_ *
	dnm1, real_ *dnm2, logical *ieee);
 
/* Subroutine */ int __cdecl slasq6_(integer *i0, integer *n0, real_ *z__, integer *pp,
	 real_ *dmin__, real_ *dmin1, real_ *dmin2, real_ *dn, real_ *dnm1, real_ *
	dnm2);
 
/* Subroutine */ int __cdecl slasr_(char *side, char *pivot, char *direct, integer *m,
	 integer *n, real_ *c__, real_ *s, real_ *a, integer *lda);
 
/* Subroutine */ int __cdecl slasrt_(char *id, integer *n, real_ *d__, integer *info);
 
/* Subroutine */ int __cdecl slassq_(integer *n, real_ *x, integer *incx, real_ *scale, 
	real_ *sumsq);
 
/* Subroutine */ int __cdecl slasv2_(real_ *f, real_ *g, real_ *h__, real_ *ssmin, real_ *
	ssmax, real_ *snr, real_ *csr, real_ *snl, real_ *csl);
 
/* Subroutine */ int __cdecl slaswp_(integer *n, real_ *a, integer *lda, integer *k1, 
	integer *k2, integer *ipiv, integer *incx);
 
/* Subroutine */ int __cdecl slasy2_(logical *ltranl, logical *ltranr, integer *isgn, 
	integer *n1, integer *n2, real_ *tl, integer *ldtl, real_ *tr, integer *
	ldtr, real_ *b, integer *ldb, real_ *scale, real_ *x, integer *ldx, real_ 
	*xnorm, integer *info);
 
/* Subroutine */ int __cdecl slasyf_(char *uplo, integer *n, integer *nb, integer *kb,
	 real_ *a, integer *lda, integer *ipiv, real_ *w, integer *ldw, integer 
	*info);
 
/* Subroutine */ int __cdecl slatbs_(char *uplo, char *trans, char *diag, char *
	normin, integer *n, integer *kd, real_ *ab, integer *ldab, real_ *x, 
	real_ *scale, real_ *cnorm, integer *info);
 
/* Subroutine */ int __cdecl slatdf_(integer *ijob, integer *n, real_ *z__, integer *
	ldz, real_ *rhs, real_ *rdsum, real_ *rdscal, integer *ipiv, integer *
	jpiv);
 
/* Subroutine */ int __cdecl slatps_(char *uplo, char *trans, char *diag, char *
	normin, integer *n, real_ *ap, real_ *x, real_ *scale, real_ *cnorm, 
	integer *info);
 
/* Subroutine */ int __cdecl slatrd_(char *uplo, integer *n, integer *nb, real_ *a, 
	integer *lda, real_ *e, real_ *tau, real_ *w, integer *ldw);
 
/* Subroutine */ int __cdecl slatrs_(char *uplo, char *trans, char *diag, char *
	normin, integer *n, real_ *a, integer *lda, real_ *x, real_ *scale, real_ 
	*cnorm, integer *info);
 
/* Subroutine */ int __cdecl slatrz_(integer *m, integer *n, integer *l, real_ *a, 
	integer *lda, real_ *tau, real_ *work);
 
/* Subroutine */ int __cdecl slatzm_(char *side, integer *m, integer *n, real_ *v, 
	integer *incv, real_ *tau, real_ *c1, real_ *c2, integer *ldc, real_ *
	work);
 
/* Subroutine */ int __cdecl slauu2_(char *uplo, integer *n, real_ *a, integer *lda, 
	integer *info);
 
/* Subroutine */ int __cdecl slauum_(char *uplo, integer *n, real_ *a, integer *lda, 
	integer *info);
 
/* Subroutine */ int __cdecl sopgtr_(char *uplo, integer *n, real_ *ap, real_ *tau, 
	real_ *q, integer *ldq, real_ *work, integer *info);
 
/* Subroutine */ int __cdecl sopmtr_(char *side, char *uplo, char *trans, integer *m, 
	integer *n, real_ *ap, real_ *tau, real_ *c__, integer *ldc, real_ *work, 
	integer *info);
 
/* Subroutine */ int __cdecl SORG2L(integer *m, integer *n, integer *k, real_ *a, 
	integer *lda, real_ *tau, real_ *work, integer *info);
 
/* Subroutine */ int __cdecl SORG2R(integer *m, integer *n, integer *k, real_ *a, 
	integer *lda, real_ *tau, real_ *work, integer *info);
 
/* Subroutine */ int __cdecl sorgbr_(char *vect, integer *m, integer *n, integer *k, 
	real_ *a, integer *lda, real_ *tau, real_ *work, integer *lwork, integer 
	*info);
 
/* Subroutine */ int __cdecl sorghr_(integer *n, integer *ilo, integer *ihi, real_ *a, 
	integer *lda, real_ *tau, real_ *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl sorgl2_(integer *m, integer *n, integer *k, real_ *a, 
	integer *lda, real_ *tau, real_ *work, integer *info);
 
/* Subroutine */ int __cdecl sorglq_(integer *m, integer *n, integer *k, real_ *a, 
	integer *lda, real_ *tau, real_ *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl sorgql_(integer *m, integer *n, integer *k, real_ *a, 
	integer *lda, real_ *tau, real_ *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl sorgqr_(integer *m, integer *n, integer *k, real_ *a, 
	integer *lda, real_ *tau, real_ *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl sorgr2_(integer *m, integer *n, integer *k, real_ *a, 
	integer *lda, real_ *tau, real_ *work, integer *info);
 
/* Subroutine */ int __cdecl sorgrq_(integer *m, integer *n, integer *k, real_ *a, 
	integer *lda, real_ *tau, real_ *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl sorgtr_(char *uplo, integer *n, real_ *a, integer *lda, 
	real_ *tau, real_ *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl SORM2L(char *side, char *trans, integer *m, integer *n, 
	integer *k, real_ *a, integer *lda, real_ *tau, real_ *c__, integer *ldc,
	 real_ *work, integer *info);
 
/* Subroutine */ int __cdecl SORM2R(char *side, char *trans, integer *m, integer *n, 
	integer *k, real_ *a, integer *lda, real_ *tau, real_ *c__, integer *ldc,
	 real_ *work, integer *info);
 
/* Subroutine */ int __cdecl sormbr_(char *vect, char *side, char *trans, integer *m, 
	integer *n, integer *k, real_ *a, integer *lda, real_ *tau, real_ *c__, 
	integer *ldc, real_ *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl sormhr_(char *side, char *trans, integer *m, integer *n, 
	integer *ilo, integer *ihi, real_ *a, integer *lda, real_ *tau, real_ *
	c__, integer *ldc, real_ *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl sorml2_(char *side, char *trans, integer *m, integer *n, 
	integer *k, real_ *a, integer *lda, real_ *tau, real_ *c__, integer *ldc,
	 real_ *work, integer *info);
 
/* Subroutine */ int __cdecl sormlq_(char *side, char *trans, integer *m, integer *n, 
	integer *k, real_ *a, integer *lda, real_ *tau, real_ *c__, integer *ldc,
	 real_ *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl sormql_(char *side, char *trans, integer *m, integer *n, 
	integer *k, real_ *a, integer *lda, real_ *tau, real_ *c__, integer *ldc,
	 real_ *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl sormqr_(char *side, char *trans, integer *m, integer *n, 
	integer *k, real_ *a, integer *lda, real_ *tau, real_ *c__, integer *ldc,
	 real_ *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl sormr2_(char *side, char *trans, integer *m, integer *n, 
	integer *k, real_ *a, integer *lda, real_ *tau, real_ *c__, integer *ldc,
	 real_ *work, integer *info);
 
/* Subroutine */ int __cdecl sormr3_(char *side, char *trans, integer *m, integer *n, 
	integer *k, integer *l, real_ *a, integer *lda, real_ *tau, real_ *c__, 
	integer *ldc, real_ *work, integer *info);
 
/* Subroutine */ int __cdecl sormrq_(char *side, char *trans, integer *m, integer *n, 
	integer *k, real_ *a, integer *lda, real_ *tau, real_ *c__, integer *ldc,
	 real_ *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl sormrz_(char *side, char *trans, integer *m, integer *n, 
	integer *k, integer *l, real_ *a, integer *lda, real_ *tau, real_ *c__, 
	integer *ldc, real_ *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl sormtr_(char *side, char *uplo, char *trans, integer *m, 
	integer *n, real_ *a, integer *lda, real_ *tau, real_ *c__, integer *ldc,
	 real_ *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl spbcon_(char *uplo, integer *n, integer *kd, real_ *ab, 
	integer *ldab, real_ *anorm, real_ *rcond, real_ *work, integer *iwork, 
	integer *info);
 
/* Subroutine */ int __cdecl spbequ_(char *uplo, integer *n, integer *kd, real_ *ab, 
	integer *ldab, real_ *s, real_ *scond, real_ *amax, integer *info);
 
/* Subroutine */ int __cdecl spbrfs_(char *uplo, integer *n, integer *kd, integer *
	nrhs, real_ *ab, integer *ldab, real_ *afb, integer *ldafb, real_ *b, 
	integer *ldb, real_ *x, integer *ldx, real_ *ferr, real_ *berr, real_ *
	work, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl spbstf_(char *uplo, integer *n, integer *kd, real_ *ab, 
	integer *ldab, integer *info);
 
/* Subroutine */ int __cdecl spbsv_(char *uplo, integer *n, integer *kd, integer *
	nrhs, real_ *ab, integer *ldab, real_ *b, integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl spbsvx_(char *fact, char *uplo, integer *n, integer *kd, 
	integer *nrhs, real_ *ab, integer *ldab, real_ *afb, integer *ldafb, 
	char *equed, real_ *s, real_ *b, integer *ldb, real_ *x, integer *ldx, 
	real_ *rcond, real_ *ferr, real_ *berr, real_ *work, integer *iwork, 
	integer *info);
 
/* Subroutine */ int __cdecl spbtf2_(char *uplo, integer *n, integer *kd, real_ *ab, 
	integer *ldab, integer *info);
 
/* Subroutine */ int __cdecl spbtrf_(char *uplo, integer *n, integer *kd, real_ *ab, 
	integer *ldab, integer *info);
 
/* Subroutine */ int __cdecl spbtrs_(char *uplo, integer *n, integer *kd, integer *
	nrhs, real_ *ab, integer *ldab, real_ *b, integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl spocon_(char *uplo, integer *n, real_ *a, integer *lda, 
	real_ *anorm, real_ *rcond, real_ *work, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl spoequ_(integer *n, real_ *a, integer *lda, real_ *s, real_ 
	*scond, real_ *amax, integer *info);
 
/* Subroutine */ int __cdecl sporfs_(char *uplo, integer *n, integer *nrhs, real_ *a, 
	integer *lda, real_ *af, integer *ldaf, real_ *b, integer *ldb, real_ *x,
	 integer *ldx, real_ *ferr, real_ *berr, real_ *work, integer *iwork, 
	integer *info);
 
/* Subroutine */ int __cdecl sposv_(char *uplo, integer *n, integer *nrhs, real_ *a, 
	integer *lda, real_ *b, integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl sposvx_(char *fact, char *uplo, integer *n, integer *
	nrhs, real_ *a, integer *lda, real_ *af, integer *ldaf, char *equed, 
	real_ *s, real_ *b, integer *ldb, real_ *x, integer *ldx, real_ *rcond, 
	real_ *ferr, real_ *berr, real_ *work, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl spotf2_(char *uplo, integer *n, real_ *a, integer *lda, 
	integer *info);
 
/* Subroutine */ int __cdecl spotrf_(char *uplo, integer *n, real_ *a, integer *lda, 
	integer *info);
 
/* Subroutine */ int __cdecl spotri_(char *uplo, integer *n, real_ *a, integer *lda, 
	integer *info);
 
/* Subroutine */ int __cdecl spotrs_(char *uplo, integer *n, integer *nrhs, real_ *a, 
	integer *lda, real_ *b, integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl sppcon_(char *uplo, integer *n, real_ *ap, real_ *anorm, 
	real_ *rcond, real_ *work, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl sppequ_(char *uplo, integer *n, real_ *ap, real_ *s, real_ *
	scond, real_ *amax, integer *info);
 
/* Subroutine */ int __cdecl spprfs_(char *uplo, integer *n, integer *nrhs, real_ *ap, 
	real_ *afp, real_ *b, integer *ldb, real_ *x, integer *ldx, real_ *ferr, 
	real_ *berr, real_ *work, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl sppsv_(char *uplo, integer *n, integer *nrhs, real_ *ap, 
	real_ *b, integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl sppsvx_(char *fact, char *uplo, integer *n, integer *
	nrhs, real_ *ap, real_ *afp, char *equed, real_ *s, real_ *b, integer *
	ldb, real_ *x, integer *ldx, real_ *rcond, real_ *ferr, real_ *berr, real_ 
	*work, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl spptrf_(char *uplo, integer *n, real_ *ap, integer *info);
 
/* Subroutine */ int __cdecl spptri_(char *uplo, integer *n, real_ *ap, integer *info);
 
/* Subroutine */ int __cdecl spptrs_(char *uplo, integer *n, integer *nrhs, real_ *ap, 
	real_ *b, integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl sptcon_(integer *n, real_ *d__, real_ *e, real_ *anorm, 
	real_ *rcond, real_ *work, integer *info);
 
/* Subroutine */ int __cdecl spteqr_(char *compz, integer *n, real_ *d__, real_ *e, 
	real_ *z__, integer *ldz, real_ *work, integer *info);
 
/* Subroutine */ int __cdecl sptrfs_(integer *n, integer *nrhs, real_ *d__, real_ *e, 
	real_ *df, real_ *ef, real_ *b, integer *ldb, real_ *x, integer *ldx, 
	real_ *ferr, real_ *berr, real_ *work, integer *info);
 
/* Subroutine */ int __cdecl sptsv_(integer *n, integer *nrhs, real_ *d__, real_ *e, 
	real_ *b, integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl sptsvx_(char *fact, integer *n, integer *nrhs, real_ *d__,
	 real_ *e, real_ *df, real_ *ef, real_ *b, integer *ldb, real_ *x, integer 
	*ldx, real_ *rcond, real_ *ferr, real_ *berr, real_ *work, integer *info);
 
/* Subroutine */ int __cdecl spttrf_(integer *n, real_ *d__, real_ *e, integer *info);
 
/* Subroutine */ int __cdecl spttrs_(integer *n, integer *nrhs, real_ *d__, real_ *e, 
	real_ *b, integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl sptts2_(integer *n, integer *nrhs, real_ *d__, real_ *e, 
	real_ *b, integer *ldb);
 
/* Subroutine */ int __cdecl srscl_(integer *n, real_ *sa, real_ *sx, integer *incx);
 
/* Subroutine */ int __cdecl ssbev_(char *jobz, char *uplo, integer *n, integer *kd, 
	real_ *ab, integer *ldab, real_ *w, real_ *z__, integer *ldz, real_ *work,
	 integer *info);
 
/* Subroutine */ int __cdecl ssbevd_(char *jobz, char *uplo, integer *n, integer *kd, 
	real_ *ab, integer *ldab, real_ *w, real_ *z__, integer *ldz, real_ *work,
	 integer *lwork, integer *iwork, integer *liwork, integer *info);
 
/* Subroutine */ int __cdecl ssbevx_(char *jobz, char *range, char *uplo, integer *n, 
	integer *kd, real_ *ab, integer *ldab, real_ *q, integer *ldq, real_ *vl,
	 real_ *vu, integer *il, integer *iu, real_ *abstol, integer *m, real_ *
	w, real_ *z__, integer *ldz, real_ *work, integer *iwork, integer *
	ifail, integer *info);
 
/* Subroutine */ int __cdecl ssbgst_(char *vect, char *uplo, integer *n, integer *ka, 
	integer *kb, real_ *ab, integer *ldab, real_ *bb, integer *ldbb, real_ *
	x, integer *ldx, real_ *work, integer *info);
 
/* Subroutine */ int __cdecl ssbgv_(char *jobz, char *uplo, integer *n, integer *ka, 
	integer *kb, real_ *ab, integer *ldab, real_ *bb, integer *ldbb, real_ *
	w, real_ *z__, integer *ldz, real_ *work, integer *info);
 
/* Subroutine */ int __cdecl ssbgvd_(char *jobz, char *uplo, integer *n, integer *ka, 
	integer *kb, real_ *ab, integer *ldab, real_ *bb, integer *ldbb, real_ *
	w, real_ *z__, integer *ldz, real_ *work, integer *lwork, integer *
	iwork, integer *liwork, integer *info);
 
/* Subroutine */ int __cdecl ssbgvx_(char *jobz, char *range, char *uplo, integer *n, 
	integer *ka, integer *kb, real_ *ab, integer *ldab, real_ *bb, integer *
	ldbb, real_ *q, integer *ldq, real_ *vl, real_ *vu, integer *il, integer 
	*iu, real_ *abstol, integer *m, real_ *w, real_ *z__, integer *ldz, real_ 
	*work, integer *iwork, integer *ifail, integer *info);
 
/* Subroutine */ int __cdecl ssbtrd_(char *vect, char *uplo, integer *n, integer *kd, 
	real_ *ab, integer *ldab, real_ *d__, real_ *e, real_ *q, integer *ldq, 
	real_ *work, integer *info);
 
/* Subroutine */ int __cdecl sspcon_(char *uplo, integer *n, real_ *ap, integer *ipiv, 
	real_ *anorm, real_ *rcond, real_ *work, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl sspev_(char *jobz, char *uplo, integer *n, real_ *ap, 
	real_ *w, real_ *z__, integer *ldz, real_ *work, integer *info);
 
/* Subroutine */ int __cdecl sspevd_(char *jobz, char *uplo, integer *n, real_ *ap, 
	real_ *w, real_ *z__, integer *ldz, real_ *work, integer *lwork, integer 
	*iwork, integer *liwork, integer *info);
 
/* Subroutine */ int __cdecl sspevx_(char *jobz, char *range, char *uplo, integer *n, 
	real_ *ap, real_ *vl, real_ *vu, integer *il, integer *iu, real_ *abstol, 
	integer *m, real_ *w, real_ *z__, integer *ldz, real_ *work, integer *
	iwork, integer *ifail, integer *info);
 
/* Subroutine */ int __cdecl sspgst_(integer *itype, char *uplo, integer *n, real_ *ap,
	 real_ *bp, integer *info);
 
/* Subroutine */ int __cdecl sspgv_(integer *itype, char *jobz, char *uplo, integer *
	n, real_ *ap, real_ *bp, real_ *w, real_ *z__, integer *ldz, real_ *work, 
	integer *info);
 
/* Subroutine */ int __cdecl sspgvd_(integer *itype, char *jobz, char *uplo, integer *
	n, real_ *ap, real_ *bp, real_ *w, real_ *z__, integer *ldz, real_ *work, 
	integer *lwork, integer *iwork, integer *liwork, integer *info);
 
/* Subroutine */ int __cdecl sspgvx_(integer *itype, char *jobz, char *range, char *
	uplo, integer *n, real_ *ap, real_ *bp, real_ *vl, real_ *vu, integer *il,
	 integer *iu, real_ *abstol, integer *m, real_ *w, real_ *z__, integer *
	ldz, real_ *work, integer *iwork, integer *ifail, integer *info);
 
/* Subroutine */ int __cdecl ssprfs_(char *uplo, integer *n, integer *nrhs, real_ *ap, 
	real_ *afp, integer *ipiv, real_ *b, integer *ldb, real_ *x, integer *
	ldx, real_ *ferr, real_ *berr, real_ *work, integer *iwork, integer *
	info);
 
/* Subroutine */ int __cdecl sspsv_(char *uplo, integer *n, integer *nrhs, real_ *ap, 
	integer *ipiv, real_ *b, integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl sspsvx_(char *fact, char *uplo, integer *n, integer *
	nrhs, real_ *ap, real_ *afp, integer *ipiv, real_ *b, integer *ldb, real_ 
	*x, integer *ldx, real_ *rcond, real_ *ferr, real_ *berr, real_ *work, 
	integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl ssptrd_(char *uplo, integer *n, real_ *ap, real_ *d__, 
	real_ *e, real_ *tau, integer *info);
 
/* Subroutine */ int __cdecl ssptrf_(char *uplo, integer *n, real_ *ap, integer *ipiv, 
	integer *info);
 
/* Subroutine */ int __cdecl ssptri_(char *uplo, integer *n, real_ *ap, integer *ipiv, 
	real_ *work, integer *info);
 
/* Subroutine */ int __cdecl ssptrs_(char *uplo, integer *n, integer *nrhs, real_ *ap, 
	integer *ipiv, real_ *b, integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl sstebz_(char *range, char *order, integer *n, real_ *vl, 
	real_ *vu, integer *il, integer *iu, real_ *abstol, real_ *d__, real_ *e, 
	integer *m, integer *nsplit, real_ *w, integer *iblock, integer *
	isplit, real_ *work, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl sstedc_(char *compz, integer *n, real_ *d__, real_ *e, 
	real_ *z__, integer *ldz, real_ *work, integer *lwork, integer *iwork, 
	integer *liwork, integer *info);
 
/* Subroutine */ int __cdecl sstegr_(char *jobz, char *range, integer *n, real_ *d__, 
	real_ *e, real_ *vl, real_ *vu, integer *il, integer *iu, real_ *abstol, 
	integer *m, real_ *w, real_ *z__, integer *ldz, integer *isuppz, real_ *
	work, integer *lwork, integer *iwork, integer *liwork, integer *info);
 
/* Subroutine */ int __cdecl sstein_(integer *n, real_ *d__, real_ *e, integer *m, real_ 
	*w, integer *iblock, integer *isplit, real_ *z__, integer *ldz, real_ *
	work, integer *iwork, integer *ifail, integer *info);
 
/* Subroutine */ int __cdecl ssteqr_(char *compz, integer *n, real_ *d__, real_ *e, 
	real_ *z__, integer *ldz, real_ *work, integer *info);
 
/* Subroutine */ int __cdecl ssterf_(integer *n, real_ *d__, real_ *e, integer *info);
 
/* Subroutine */ int __cdecl sstev_(char *jobz, integer *n, real_ *d__, real_ *e, real_ *
	z__, integer *ldz, real_ *work, integer *info);
 
/* Subroutine */ int __cdecl sstevd_(char *jobz, integer *n, real_ *d__, real_ *e, real_ 
	*z__, integer *ldz, real_ *work, integer *lwork, integer *iwork, 
	integer *liwork, integer *info);
 
/* Subroutine */ int __cdecl sstevr_(char *jobz, char *range, integer *n, real_ *d__, 
	real_ *e, real_ *vl, real_ *vu, integer *il, integer *iu, real_ *abstol, 
	integer *m, real_ *w, real_ *z__, integer *ldz, integer *isuppz, real_ *
	work, integer *lwork, integer *iwork, integer *liwork, integer *info);
 
/* Subroutine */ int __cdecl sstevx_(char *jobz, char *range, integer *n, real_ *d__, 
	real_ *e, real_ *vl, real_ *vu, integer *il, integer *iu, real_ *abstol, 
	integer *m, real_ *w, real_ *z__, integer *ldz, real_ *work, integer *
	iwork, integer *ifail, integer *info);
 
/* Subroutine */ int __cdecl ssycon_(char *uplo, integer *n, real_ *a, integer *lda, 
	integer *ipiv, real_ *anorm, real_ *rcond, real_ *work, integer *iwork, 
	integer *info);
 
/* Subroutine */ int __cdecl ssyev_(char *jobz, char *uplo, integer *n, real_ *a, 
	integer *lda, real_ *w, real_ *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl ssyevd_(char *jobz, char *uplo, integer *n, real_ *a, 
	integer *lda, real_ *w, real_ *work, integer *lwork, integer *iwork, 
	integer *liwork, integer *info);
 
/* Subroutine */ int __cdecl ssyevr_(char *jobz, char *range, char *uplo, integer *n, 
	real_ *a, integer *lda, real_ *vl, real_ *vu, integer *il, integer *iu, 
	real_ *abstol, integer *m, real_ *w, real_ *z__, integer *ldz, integer *
	isuppz, real_ *work, integer *lwork, integer *iwork, integer *liwork, 
	integer *info);
 
/* Subroutine */ int __cdecl ssyevx_(char *jobz, char *range, char *uplo, integer *n, 
	real_ *a, integer *lda, real_ *vl, real_ *vu, integer *il, integer *iu, 
	real_ *abstol, integer *m, real_ *w, real_ *z__, integer *ldz, real_ *
	work, integer *lwork, integer *iwork, integer *ifail, integer *info);
 
/* Subroutine */ int __cdecl ssygs2_(integer *itype, char *uplo, integer *n, real_ *a, 
	integer *lda, real_ *b, integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl ssygst_(integer *itype, char *uplo, integer *n, real_ *a, 
	integer *lda, real_ *b, integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl ssygv_(integer *itype, char *jobz, char *uplo, integer *
	n, real_ *a, integer *lda, real_ *b, integer *ldb, real_ *w, real_ *work, 
	integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl ssygvd_(integer *itype, char *jobz, char *uplo, integer *
	n, real_ *a, integer *lda, real_ *b, integer *ldb, real_ *w, real_ *work, 
	integer *lwork, integer *iwork, integer *liwork, integer *info);
 
/* Subroutine */ int __cdecl ssygvx_(integer *itype, char *jobz, char *range, char *
	uplo, integer *n, real_ *a, integer *lda, real_ *b, integer *ldb, real_ *
	vl, real_ *vu, integer *il, integer *iu, real_ *abstol, integer *m, 
	real_ *w, real_ *z__, integer *ldz, real_ *work, integer *lwork, integer 
	*iwork, integer *ifail, integer *info);
 
/* Subroutine */ int __cdecl ssyrfs_(char *uplo, integer *n, integer *nrhs, real_ *a, 
	integer *lda, real_ *af, integer *ldaf, integer *ipiv, real_ *b, 
	integer *ldb, real_ *x, integer *ldx, real_ *ferr, real_ *berr, real_ *
	work, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl ssysv_(char *uplo, integer *n, integer *nrhs, real_ *a, 
	integer *lda, integer *ipiv, real_ *b, integer *ldb, real_ *work, 
	integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl ssysvx_(char *fact, char *uplo, integer *n, integer *
	nrhs, real_ *a, integer *lda, real_ *af, integer *ldaf, integer *ipiv, 
	real_ *b, integer *ldb, real_ *x, integer *ldx, real_ *rcond, real_ *ferr,
	 real_ *berr, real_ *work, integer *lwork, integer *iwork, integer *
	info);
 
/* Subroutine */ int __cdecl ssytd2_(char *uplo, integer *n, real_ *a, integer *lda, 
	real_ *d__, real_ *e, real_ *tau, integer *info);
 
/* Subroutine */ int __cdecl ssytf2_(char *uplo, integer *n, real_ *a, integer *lda, 
	integer *ipiv, integer *info);
 
/* Subroutine */ int __cdecl ssytrd_(char *uplo, integer *n, real_ *a, integer *lda, 
	real_ *d__, real_ *e, real_ *tau, real_ *work, integer *lwork, integer *
	info);
 
/* Subroutine */ int __cdecl ssytrf_(char *uplo, integer *n, real_ *a, integer *lda, 
	integer *ipiv, real_ *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl ssytri_(char *uplo, integer *n, real_ *a, integer *lda, 
	integer *ipiv, real_ *work, integer *info);
 
/* Subroutine */ int __cdecl ssytrs_(char *uplo, integer *n, integer *nrhs, real_ *a, 
	integer *lda, integer *ipiv, real_ *b, integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl stbcon_(char *norm, char *uplo, char *diag, integer *n, 
	integer *kd, real_ *ab, integer *ldab, real_ *rcond, real_ *work, 
	integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl stbrfs_(char *uplo, char *trans, char *diag, integer *n, 
	integer *kd, integer *nrhs, real_ *ab, integer *ldab, real_ *b, integer 
	*ldb, real_ *x, integer *ldx, real_ *ferr, real_ *berr, real_ *work, 
	integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl stbtrs_(char *uplo, char *trans, char *diag, integer *n, 
	integer *kd, integer *nrhs, real_ *ab, integer *ldab, real_ *b, integer 
	*ldb, integer *info);
 
/* Subroutine */ int __cdecl stgevc_(char *side, char *howmny, logical *select, 
	integer *n, real_ *a, integer *lda, real_ *b, integer *ldb, real_ *vl, 
	integer *ldvl, real_ *vr, integer *ldvr, integer *mm, integer *m, real_ 
	*work, integer *info);
 
/* Subroutine */ int __cdecl stgex2_(logical *wantq, logical *wantz, integer *n, real_ 
	*a, integer *lda, real_ *b, integer *ldb, real_ *q, integer *ldq, real_ *
	z__, integer *ldz, integer *j1, integer *n1, integer *n2, real_ *work, 
	integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl stgexc_(logical *wantq, logical *wantz, integer *n, real_ 
	*a, integer *lda, real_ *b, integer *ldb, real_ *q, integer *ldq, real_ *
	z__, integer *ldz, integer *ifst, integer *ilst, real_ *work, integer *
	lwork, integer *info);
 
/* Subroutine */ int __cdecl stgsen_(integer *ijob, logical *wantq, logical *wantz, 
	logical *select, integer *n, real_ *a, integer *lda, real_ *b, integer *
	ldb, real_ *alphar, real_ *alphai, real_ *beta, real_ *q, integer *ldq, 
	real_ *z__, integer *ldz, integer *m, real_ *pl, real_ *pr, real_ *dif, 
	real_ *work, integer *lwork, integer *iwork, integer *liwork, integer *
	info);
 
/* Subroutine */ int __cdecl stgsja_(char *jobu, char *jobv, char *jobq, integer *m, 
	integer *p, integer *n, integer *k, integer *l, real_ *a, integer *lda,
	 real_ *b, integer *ldb, real_ *tola, real_ *tolb, real_ *alpha, real_ *
	beta, real_ *u, integer *ldu, real_ *v, integer *ldv, real_ *q, integer *
	ldq, real_ *work, integer *ncycle, integer *info);
 
/* Subroutine */ int __cdecl stgsna_(char *job, char *howmny, logical *select, 
	integer *n, real_ *a, integer *lda, real_ *b, integer *ldb, real_ *vl, 
	integer *ldvl, real_ *vr, integer *ldvr, real_ *s, real_ *dif, integer *
	mm, integer *m, real_ *work, integer *lwork, integer *iwork, integer *
	info);
 
/* Subroutine */ int __cdecl stgsy2_(char *trans, integer *ijob, integer *m, integer *
	n, real_ *a, integer *lda, real_ *b, integer *ldb, real_ *c__, integer *
	ldc, real_ *d__, integer *ldd, real_ *e, integer *lde, real_ *f, integer 
	*ldf, real_ *scale, real_ *rdsum, real_ *rdscal, integer *iwork, integer 
	*pq, integer *info);
 
/* Subroutine */ int __cdecl stgsyl_(char *trans, integer *ijob, integer *m, integer *
	n, real_ *a, integer *lda, real_ *b, integer *ldb, real_ *c__, integer *
	ldc, real_ *d__, integer *ldd, real_ *e, integer *lde, real_ *f, integer 
	*ldf, real_ *scale, real_ *dif, real_ *work, integer *lwork, integer *
	iwork, integer *info);
 
/* Subroutine */ int __cdecl stpcon_(char *norm, char *uplo, char *diag, integer *n, 
	real_ *ap, real_ *rcond, real_ *work, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl stprfs_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, real_ *ap, real_ *b, integer *ldb, real_ *x, integer *ldx,
	 real_ *ferr, real_ *berr, real_ *work, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl stptri_(char *uplo, char *diag, integer *n, real_ *ap, 
	integer *info);
 
/* Subroutine */ int __cdecl stptrs_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, real_ *ap, real_ *b, integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl strcon_(char *norm, char *uplo, char *diag, integer *n, 
	real_ *a, integer *lda, real_ *rcond, real_ *work, integer *iwork, 
	integer *info);
 
/* Subroutine */ int __cdecl strevc_(char *side, char *howmny, logical *select, 
	integer *n, real_ *t, integer *ldt, real_ *vl, integer *ldvl, real_ *vr, 
	integer *ldvr, integer *mm, integer *m, real_ *work, integer *info);
 
/* Subroutine */ int __cdecl strexc_(char *compq, integer *n, real_ *t, integer *ldt, 
	real_ *q, integer *ldq, integer *ifst, integer *ilst, real_ *work, 
	integer *info);
 
/* Subroutine */ int __cdecl strrfs_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, real_ *a, integer *lda, real_ *b, integer *ldb, real_ *x, 
	integer *ldx, real_ *ferr, real_ *berr, real_ *work, integer *iwork, 
	integer *info);
 
/* Subroutine */ int __cdecl strsen_(char *job, char *compq, logical *select, integer 
	*n, real_ *t, integer *ldt, real_ *q, integer *ldq, real_ *wr, real_ *wi, 
	integer *m, real_ *s, real_ *sep, real_ *work, integer *lwork, integer *
	iwork, integer *liwork, integer *info);
 
/* Subroutine */ int __cdecl strsna_(char *job, char *howmny, logical *select, 
	integer *n, real_ *t, integer *ldt, real_ *vl, integer *ldvl, real_ *vr, 
	integer *ldvr, real_ *s, real_ *sep, integer *mm, integer *m, real_ *
	work, integer *ldwork, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl strsyl_(char *trana, char *tranb, integer *isgn, integer 
	*m, integer *n, real_ *a, integer *lda, real_ *b, integer *ldb, real_ *
	c__, integer *ldc, real_ *scale, integer *info);
 
/* Subroutine */ int __cdecl strti2_(char *uplo, char *diag, integer *n, real_ *a, 
	integer *lda, integer *info);
 
/* Subroutine */ int __cdecl strtri_(char *uplo, char *diag, integer *n, real_ *a, 
	integer *lda, integer *info);
 
/* Subroutine */ int __cdecl strtrs_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, real_ *a, integer *lda, real_ *b, integer *ldb, integer *
	info);
 
/* Subroutine */ int __cdecl stzrqf_(integer *m, integer *n, real_ *a, integer *lda, 
	real_ *tau, integer *info);
 
/* Subroutine */ int __cdecl stzrzf_(integer *m, integer *n, real_ *a, integer *lda, 
	real_ *tau, real_ *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl xerbla_(char *srname, integer *info);
 
/* Subroutine */ int __cdecl zbdsqr_(char *uplo, integer *n, integer *ncvt, integer *
	nru, integer *ncc, doublereal *d__, doublereal *e, doublecomplex *vt, 
	integer *ldvt, doublecomplex *u, integer *ldu, doublecomplex *c__, 
	integer *ldc, doublereal *rwork, integer *info);
 
/* Subroutine */ int __cdecl zdrot_(integer *n, doublecomplex *cx, integer *incx, 
	doublecomplex *cy, integer *incy, doublereal *c__, doublereal *s);
 
/* Subroutine */ int __cdecl zdrscl_(integer *n, doublereal *sa, doublecomplex *sx, 
	integer *incx);
 
/* Subroutine */ int __cdecl zgbbrd_(char *vect, integer *m, integer *n, integer *ncc,
	 integer *kl, integer *ku, doublecomplex *ab, integer *ldab, 
	doublereal *d__, doublereal *e, doublecomplex *q, integer *ldq, 
	doublecomplex *pt, integer *ldpt, doublecomplex *c__, integer *ldc, 
	doublecomplex *work, doublereal *rwork, integer *info);
 
/* Subroutine */ int __cdecl zgbcon_(char *norm, integer *n, integer *kl, integer *ku,
	 doublecomplex *ab, integer *ldab, integer *ipiv, doublereal *anorm, 
	doublereal *rcond, doublecomplex *work, doublereal *rwork, integer *
	info);
 
/* Subroutine */ int __cdecl zgbequ_(integer *m, integer *n, integer *kl, integer *ku,
	 doublecomplex *ab, integer *ldab, doublereal *r__, doublereal *c__, 
	doublereal *rowcnd, doublereal *colcnd, doublereal *amax, integer *
	info);
 
/* Subroutine */ int __cdecl zgbrfs_(char *trans, integer *n, integer *kl, integer *
	ku, integer *nrhs, doublecomplex *ab, integer *ldab, doublecomplex *
	afb, integer *ldafb, integer *ipiv, doublecomplex *b, integer *ldb, 
	doublecomplex *x, integer *ldx, doublereal *ferr, doublereal *berr, 
	doublecomplex *work, doublereal *rwork, integer *info);
 
/* Subroutine */ int __cdecl zgbsv_(integer *n, integer *kl, integer *ku, integer *
	nrhs, doublecomplex *ab, integer *ldab, integer *ipiv, doublecomplex *
	b, integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl zgbsvx_(char *fact, char *trans, integer *n, integer *kl,
	 integer *ku, integer *nrhs, doublecomplex *ab, integer *ldab, 
	doublecomplex *afb, integer *ldafb, integer *ipiv, char *equed, 
	doublereal *r__, doublereal *c__, doublecomplex *b, integer *ldb, 
	doublecomplex *x, integer *ldx, doublereal *rcond, doublereal *ferr, 
	doublereal *berr, doublecomplex *work, doublereal *rwork, integer *
	info);
 
/* Subroutine */ int __cdecl zgbtf2_(integer *m, integer *n, integer *kl, integer *ku,
	 doublecomplex *ab, integer *ldab, integer *ipiv, integer *info);
 
/* Subroutine */ int __cdecl zgbtrf_(integer *m, integer *n, integer *kl, integer *ku,
	 doublecomplex *ab, integer *ldab, integer *ipiv, integer *info);
 
/* Subroutine */ int __cdecl zgbtrs_(char *trans, integer *n, integer *kl, integer *
	ku, integer *nrhs, doublecomplex *ab, integer *ldab, integer *ipiv, 
	doublecomplex *b, integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl zgebak_(char *job, char *side, integer *n, integer *ilo, 
	integer *ihi, doublereal *scale, integer *m, doublecomplex *v, 
	integer *ldv, integer *info);
 
/* Subroutine */ int __cdecl zgebal_(char *job, integer *n, doublecomplex *a, integer 
	*lda, integer *ilo, integer *ihi, doublereal *scale, integer *info);
 
/* Subroutine */ int __cdecl zgebd2_(integer *m, integer *n, doublecomplex *a, 
	integer *lda, doublereal *d__, doublereal *e, doublecomplex *tauq, 
	doublecomplex *taup, doublecomplex *work, integer *info);
 
/* Subroutine */ int __cdecl zgebrd_(integer *m, integer *n, doublecomplex *a, 
	integer *lda, doublereal *d__, doublereal *e, doublecomplex *tauq, 
	doublecomplex *taup, doublecomplex *work, integer *lwork, integer *
	info);
 
/* Subroutine */ int __cdecl zgecon_(char *norm, integer *n, doublecomplex *a, 
	integer *lda, doublereal *anorm, doublereal *rcond, doublecomplex *
	work, doublereal *rwork, integer *info);
 
/* Subroutine */ int __cdecl zgeequ_(integer *m, integer *n, doublecomplex *a, 
	integer *lda, doublereal *r__, doublereal *c__, doublereal *rowcnd, 
	doublereal *colcnd, doublereal *amax, integer *info);
 
/* Subroutine */ int __cdecl zgees_(char *jobvs, char *sort, L_fp select, integer *n, 
	doublecomplex *a, integer *lda, integer *sdim, doublecomplex *w, 
	doublecomplex *vs, integer *ldvs, doublecomplex *work, integer *lwork,
	 doublereal *rwork, logical *bwork, integer *info);
 
/* Subroutine */ int __cdecl zgeesx_(char *jobvs, char *sort, L_fp select, char *
	sense, integer *n, doublecomplex *a, integer *lda, integer *sdim, 
	doublecomplex *w, doublecomplex *vs, integer *ldvs, doublereal *
	rconde, doublereal *rcondv, doublecomplex *work, integer *lwork, 
	doublereal *rwork, logical *bwork, integer *info);
 
/* Subroutine */ int __cdecl zgeev_(char *jobvl, char *jobvr, integer *n, 
	doublecomplex *a, integer *lda, doublecomplex *w, doublecomplex *vl, 
	integer *ldvl, doublecomplex *vr, integer *ldvr, doublecomplex *work, 
	integer *lwork, doublereal *rwork, integer *info);
 
/* Subroutine */ int __cdecl zgeevx_(char *balanc, char *jobvl, char *jobvr, char *
	sense, integer *n, doublecomplex *a, integer *lda, doublecomplex *w, 
	doublecomplex *vl, integer *ldvl, doublecomplex *vr, integer *ldvr, 
	integer *ilo, integer *ihi, doublereal *scale, doublereal *abnrm, 
	doublereal *rconde, doublereal *rcondv, doublecomplex *work, integer *
	lwork, doublereal *rwork, integer *info);
 
/* Subroutine */ int __cdecl zgegs_(char *jobvsl, char *jobvsr, integer *n, 
	doublecomplex *a, integer *lda, doublecomplex *b, integer *ldb, 
	doublecomplex *alpha, doublecomplex *beta, doublecomplex *vsl, 
	integer *ldvsl, doublecomplex *vsr, integer *ldvsr, doublecomplex *
	work, integer *lwork, doublereal *rwork, integer *info);
 
/* Subroutine */ int __cdecl zgegv_(char *jobvl, char *jobvr, integer *n, 
	doublecomplex *a, integer *lda, doublecomplex *b, integer *ldb, 
	doublecomplex *alpha, doublecomplex *beta, doublecomplex *vl, integer 
	*ldvl, doublecomplex *vr, integer *ldvr, doublecomplex *work, integer 
	*lwork, doublereal *rwork, integer *info);
 
/* Subroutine */ int __cdecl zgehd2_(integer *n, integer *ilo, integer *ihi, 
	doublecomplex *a, integer *lda, doublecomplex *tau, doublecomplex *
	work, integer *info);
 
/* Subroutine */ int __cdecl zgehrd_(integer *n, integer *ilo, integer *ihi, 
	doublecomplex *a, integer *lda, doublecomplex *tau, doublecomplex *
	work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl zgelq2_(integer *m, integer *n, doublecomplex *a, 
	integer *lda, doublecomplex *tau, doublecomplex *work, integer *info);
 
/* Subroutine */ int __cdecl zgelqf_(integer *m, integer *n, doublecomplex *a, 
	integer *lda, doublecomplex *tau, doublecomplex *work, integer *lwork,
	 integer *info);
 
/* Subroutine */ int __cdecl zgels_(char *trans, integer *m, integer *n, integer *
	nrhs, doublecomplex *a, integer *lda, doublecomplex *b, integer *ldb, 
	doublecomplex *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl zgelsx_(integer *m, integer *n, integer *nrhs, 
	doublecomplex *a, integer *lda, doublecomplex *b, integer *ldb, 
	integer *jpvt, doublereal *rcond, integer *rank, doublecomplex *work, 
	doublereal *rwork, integer *info);
 
/* Subroutine */ int __cdecl zgelsy_(integer *m, integer *n, integer *nrhs, 
	doublecomplex *a, integer *lda, doublecomplex *b, integer *ldb, 
	integer *jpvt, doublereal *rcond, integer *rank, doublecomplex *work, 
	integer *lwork, doublereal *rwork, integer *info);
 
/* Subroutine */ int __cdecl zgeql2_(integer *m, integer *n, doublecomplex *a, 
	integer *lda, doublecomplex *tau, doublecomplex *work, integer *info);
 
/* Subroutine */ int __cdecl zgeqlf_(integer *m, integer *n, doublecomplex *a, 
	integer *lda, doublecomplex *tau, doublecomplex *work, integer *lwork,
	 integer *info);
 
/* Subroutine */ int __cdecl zgeqp3_(integer *m, integer *n, doublecomplex *a, 
	integer *lda, integer *jpvt, doublecomplex *tau, doublecomplex *work, 
	integer *lwork, doublereal *rwork, integer *info);
 
/* Subroutine */ int __cdecl zgeqpf_(integer *m, integer *n, doublecomplex *a, 
	integer *lda, integer *jpvt, doublecomplex *tau, doublecomplex *work, 
	doublereal *rwork, integer *info);
 
/* Subroutine */ int __cdecl zgeqr2_(integer *m, integer *n, doublecomplex *a, 
	integer *lda, doublecomplex *tau, doublecomplex *work, integer *info);
 
/* Subroutine */ int __cdecl zgeqrf_(integer *m, integer *n, doublecomplex *a, 
	integer *lda, doublecomplex *tau, doublecomplex *work, integer *lwork,
	 integer *info);
 
/* Subroutine */ int __cdecl zgerfs_(char *trans, integer *n, integer *nrhs, 
	doublecomplex *a, integer *lda, doublecomplex *af, integer *ldaf, 
	integer *ipiv, doublecomplex *b, integer *ldb, doublecomplex *x, 
	integer *ldx, doublereal *ferr, doublereal *berr, doublecomplex *work,
	 doublereal *rwork, integer *info);
 
/* Subroutine */ int __cdecl zgerq2_(integer *m, integer *n, doublecomplex *a, 
	integer *lda, doublecomplex *tau, doublecomplex *work, integer *info);
 
/* Subroutine */ int __cdecl zgerqf_(integer *m, integer *n, doublecomplex *a, 
	integer *lda, doublecomplex *tau, doublecomplex *work, integer *lwork,
	 integer *info);
 
/* Subroutine */ int __cdecl zgesc2_(integer *n, doublecomplex *a, integer *lda, 
	doublecomplex *rhs, integer *ipiv, integer *jpiv, doublereal *scale);
 
/* Subroutine */ int __cdecl zgesv_(integer *n, integer *nrhs, doublecomplex *a, 
	integer *lda, integer *ipiv, doublecomplex *b, integer *ldb, integer *
	info);
 
/* Subroutine */ int __cdecl zgesvx_(char *fact, char *trans, integer *n, integer *
	nrhs, doublecomplex *a, integer *lda, doublecomplex *af, integer *
	ldaf, integer *ipiv, char *equed, doublereal *r__, doublereal *c__, 
	doublecomplex *b, integer *ldb, doublecomplex *x, integer *ldx, 
	doublereal *rcond, doublereal *ferr, doublereal *berr, doublecomplex *
	work, doublereal *rwork, integer *info);
 
/* Subroutine */ int __cdecl zgetc2_(integer *n, doublecomplex *a, integer *lda, 
	integer *ipiv, integer *jpiv, integer *info);
 
/* Subroutine */ int __cdecl zgetf2_(integer *m, integer *n, doublecomplex *a, 
	integer *lda, integer *ipiv, integer *info);
 
/* Subroutine */ int __cdecl zgetrf_(integer *m, integer *n, doublecomplex *a, 
	integer *lda, integer *ipiv, integer *info);
 
/* Subroutine */ int __cdecl zgetri_(integer *n, doublecomplex *a, integer *lda, 
	integer *ipiv, doublecomplex *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl zgetrs_(char *trans, integer *n, integer *nrhs, 
	doublecomplex *a, integer *lda, integer *ipiv, doublecomplex *b, 
	integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl zggbak_(char *job, char *side, integer *n, integer *ilo, 
	integer *ihi, doublereal *lscale, doublereal *rscale, integer *m, 
	doublecomplex *v, integer *ldv, integer *info);
 
/* Subroutine */ int __cdecl zggbal_(char *job, integer *n, doublecomplex *a, integer 
	*lda, doublecomplex *b, integer *ldb, integer *ilo, integer *ihi, 
	doublereal *lscale, doublereal *rscale, doublereal *work, integer *
	info);
 
/* Subroutine */ int __cdecl zgges_(char *jobvsl, char *jobvsr, char *sort, L_fp 
	delctg, integer *n, doublecomplex *a, integer *lda, doublecomplex *b, 
	integer *ldb, integer *sdim, doublecomplex *alpha, doublecomplex *
	beta, doublecomplex *vsl, integer *ldvsl, doublecomplex *vsr, integer 
	*ldvsr, doublecomplex *work, integer *lwork, doublereal *rwork, 
	logical *bwork, integer *info);
 
/* Subroutine */ int __cdecl zggesx_(char *jobvsl, char *jobvsr, char *sort, L_fp 
	delctg, char *sense, integer *n, doublecomplex *a, integer *lda, 
	doublecomplex *b, integer *ldb, integer *sdim, doublecomplex *alpha, 
	doublecomplex *beta, doublecomplex *vsl, integer *ldvsl, 
	doublecomplex *vsr, integer *ldvsr, doublereal *rconde, doublereal *
	rcondv, doublecomplex *work, integer *lwork, doublereal *rwork, 
	integer *iwork, integer *liwork, logical *bwork, integer *info);
 
/* Subroutine */ int __cdecl zggev_(char *jobvl, char *jobvr, integer *n, 
	doublecomplex *a, integer *lda, doublecomplex *b, integer *ldb, 
	doublecomplex *alpha, doublecomplex *beta, doublecomplex *vl, integer 
	*ldvl, doublecomplex *vr, integer *ldvr, doublecomplex *work, integer 
	*lwork, doublereal *rwork, integer *info);
 
/* Subroutine */ int __cdecl zggevx_(char *balanc, char *jobvl, char *jobvr, char *
	sense, integer *n, doublecomplex *a, integer *lda, doublecomplex *b, 
	integer *ldb, doublecomplex *alpha, doublecomplex *beta, 
	doublecomplex *vl, integer *ldvl, doublecomplex *vr, integer *ldvr, 
	integer *ilo, integer *ihi, doublereal *lscale, doublereal *rscale, 
	doublereal *abnrm, doublereal *bbnrm, doublereal *rconde, doublereal *
	rcondv, doublecomplex *work, integer *lwork, doublereal *rwork, 
	integer *iwork, logical *bwork, integer *info);
 
/* Subroutine */ int __cdecl zggglm_(integer *n, integer *m, integer *p, 
	doublecomplex *a, integer *lda, doublecomplex *b, integer *ldb, 
	doublecomplex *d__, doublecomplex *x, doublecomplex *y, doublecomplex 
	*work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl zgghrd_(char *compq, char *compz, integer *n, integer *
	ilo, integer *ihi, doublecomplex *a, integer *lda, doublecomplex *b, 
	integer *ldb, doublecomplex *q, integer *ldq, doublecomplex *z__, 
	integer *ldz, integer *info);
 
/* Subroutine */ int __cdecl zgglse_(integer *m, integer *n, integer *p, 
	doublecomplex *a, integer *lda, doublecomplex *b, integer *ldb, 
	doublecomplex *c__, doublecomplex *d__, doublecomplex *x, 
	doublecomplex *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl zggqrf_(integer *n, integer *m, integer *p, 
	doublecomplex *a, integer *lda, doublecomplex *taua, doublecomplex *b,
	 integer *ldb, doublecomplex *taub, doublecomplex *work, integer *
	lwork, integer *info);
 
/* Subroutine */ int __cdecl zggrqf_(integer *m, integer *p, integer *n, 
	doublecomplex *a, integer *lda, doublecomplex *taua, doublecomplex *b,
	 integer *ldb, doublecomplex *taub, doublecomplex *work, integer *
	lwork, integer *info);
 
/* Subroutine */ int __cdecl zggsvd_(char *jobu, char *jobv, char *jobq, integer *m, 
	integer *n, integer *p, integer *k, integer *l, doublecomplex *a, 
	integer *lda, doublecomplex *b, integer *ldb, doublereal *alpha, 
	doublereal *beta, doublecomplex *u, integer *ldu, doublecomplex *v, 
	integer *ldv, doublecomplex *q, integer *ldq, doublecomplex *work, 
	doublereal *rwork, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl zggsvp_(char *jobu, char *jobv, char *jobq, integer *m, 
	integer *p, integer *n, doublecomplex *a, integer *lda, doublecomplex 
	*b, integer *ldb, doublereal *tola, doublereal *tolb, integer *k, 
	integer *l, doublecomplex *u, integer *ldu, doublecomplex *v, integer 
	*ldv, doublecomplex *q, integer *ldq, integer *iwork, doublereal *
	rwork, doublecomplex *tau, doublecomplex *work, integer *info);
 
/* Subroutine */ int __cdecl zgtcon_(char *norm, integer *n, doublecomplex *dl, 
	doublecomplex *d__, doublecomplex *du, doublecomplex *du2, integer *
	ipiv, doublereal *anorm, doublereal *rcond, doublecomplex *work, 
	integer *info);
 
/* Subroutine */ int __cdecl zgtrfs_(char *trans, integer *n, integer *nrhs, 
	doublecomplex *dl, doublecomplex *d__, doublecomplex *du, 
	doublecomplex *dlf, doublecomplex *df, doublecomplex *duf, 
	doublecomplex *du2, integer *ipiv, doublecomplex *b, integer *ldb, 
	doublecomplex *x, integer *ldx, doublereal *ferr, doublereal *berr, 
	doublecomplex *work, doublereal *rwork, integer *info);
 
/* Subroutine */ int __cdecl zgtsv_(integer *n, integer *nrhs, doublecomplex *dl, 
	doublecomplex *d__, doublecomplex *du, doublecomplex *b, integer *ldb,
	 integer *info);
 
/* Subroutine */ int __cdecl zgtsvx_(char *fact, char *trans, integer *n, integer *
	nrhs, doublecomplex *dl, doublecomplex *d__, doublecomplex *du, 
	doublecomplex *dlf, doublecomplex *df, doublecomplex *duf, 
	doublecomplex *du2, integer *ipiv, doublecomplex *b, integer *ldb, 
	doublecomplex *x, integer *ldx, doublereal *rcond, doublereal *ferr, 
	doublereal *berr, doublecomplex *work, doublereal *rwork, integer *
	info);
 
/* Subroutine */ int __cdecl zgttrf_(integer *n, doublecomplex *dl, doublecomplex *
	d__, doublecomplex *du, doublecomplex *du2, integer *ipiv, integer *
	info);
 
/* Subroutine */ int __cdecl zgttrs_(char *trans, integer *n, integer *nrhs, 
	doublecomplex *dl, doublecomplex *d__, doublecomplex *du, 
	doublecomplex *du2, integer *ipiv, doublecomplex *b, integer *ldb, 
	integer *info);
 
/* Subroutine */ int __cdecl zgtts2_(integer *itrans, integer *n, integer *nrhs, 
	doublecomplex *dl, doublecomplex *d__, doublecomplex *du, 
	doublecomplex *du2, integer *ipiv, doublecomplex *b, integer *ldb);
 
/* Subroutine */ int __cdecl zhbev_(char *jobz, char *uplo, integer *n, integer *kd, 
	doublecomplex *ab, integer *ldab, doublereal *w, doublecomplex *z__, 
	integer *ldz, doublecomplex *work, doublereal *rwork, integer *info);
 
/* Subroutine */ int __cdecl zhbevd_(char *jobz, char *uplo, integer *n, integer *kd, 
	doublecomplex *ab, integer *ldab, doublereal *w, doublecomplex *z__, 
	integer *ldz, doublecomplex *work, integer *lwork, doublereal *rwork, 
	integer *lrwork, integer *iwork, integer *liwork, integer *info);
 
/* Subroutine */ int __cdecl zhbevx_(char *jobz, char *range, char *uplo, integer *n, 
	integer *kd, doublecomplex *ab, integer *ldab, doublecomplex *q, 
	integer *ldq, doublereal *vl, doublereal *vu, integer *il, integer *
	iu, doublereal *abstol, integer *m, doublereal *w, doublecomplex *z__,
	 integer *ldz, doublecomplex *work, doublereal *rwork, integer *iwork,
	 integer *ifail, integer *info);
 
/* Subroutine */ int __cdecl zhbgst_(char *vect, char *uplo, integer *n, integer *ka, 
	integer *kb, doublecomplex *ab, integer *ldab, doublecomplex *bb, 
	integer *ldbb, doublecomplex *x, integer *ldx, doublecomplex *work, 
	doublereal *rwork, integer *info);
 
/* Subroutine */ int __cdecl zhbgv_(char *jobz, char *uplo, integer *n, integer *ka, 
	integer *kb, doublecomplex *ab, integer *ldab, doublecomplex *bb, 
	integer *ldbb, doublereal *w, doublecomplex *z__, integer *ldz, 
	doublecomplex *work, doublereal *rwork, integer *info);
 
/* Subroutine */ int __cdecl zhbgvx_(char *jobz, char *range, char *uplo, integer *n, 
	integer *ka, integer *kb, doublecomplex *ab, integer *ldab, 
	doublecomplex *bb, integer *ldbb, doublecomplex *q, integer *ldq, 
	doublereal *vl, doublereal *vu, integer *il, integer *iu, doublereal *
	abstol, integer *m, doublereal *w, doublecomplex *z__, integer *ldz, 
	doublecomplex *work, doublereal *rwork, integer *iwork, integer *
	ifail, integer *info);
 
/* Subroutine */ int __cdecl zhbtrd_(char *vect, char *uplo, integer *n, integer *kd, 
	doublecomplex *ab, integer *ldab, doublereal *d__, doublereal *e, 
	doublecomplex *q, integer *ldq, doublecomplex *work, integer *info);
 
/* Subroutine */ int __cdecl zhecon_(char *uplo, integer *n, doublecomplex *a, 
	integer *lda, integer *ipiv, doublereal *anorm, doublereal *rcond, 
	doublecomplex *work, integer *info);
 
/* Subroutine */ int __cdecl zheev_(char *jobz, char *uplo, integer *n, doublecomplex 
	*a, integer *lda, doublereal *w, doublecomplex *work, integer *lwork, 
	doublereal *rwork, integer *info);
 
/* Subroutine */ int __cdecl zheevd_(char *jobz, char *uplo, integer *n, 
	doublecomplex *a, integer *lda, doublereal *w, doublecomplex *work, 
	integer *lwork, doublereal *rwork, integer *lrwork, integer *iwork, 
	integer *liwork, integer *info);
 
/* Subroutine */ int __cdecl zheevr_(char *jobz, char *range, char *uplo, integer *n, 
	doublecomplex *a, integer *lda, doublereal *vl, doublereal *vu, 
	integer *il, integer *iu, doublereal *abstol, integer *m, doublereal *
	w, doublecomplex *z__, integer *ldz, integer *isuppz, doublecomplex *
	work, integer *lwork, doublereal *rwork, integer *lrwork, integer *
	iwork, integer *liwork, integer *info);
 
/* Subroutine */ int __cdecl zheevx_(char *jobz, char *range, char *uplo, integer *n, 
	doublecomplex *a, integer *lda, doublereal *vl, doublereal *vu, 
	integer *il, integer *iu, doublereal *abstol, integer *m, doublereal *
	w, doublecomplex *z__, integer *ldz, doublecomplex *work, integer *
	lwork, doublereal *rwork, integer *iwork, integer *ifail, integer *
	info);
 
/* Subroutine */ int __cdecl zhegs2_(integer *itype, char *uplo, integer *n, 
	doublecomplex *a, integer *lda, doublecomplex *b, integer *ldb, 
	integer *info);
 
/* Subroutine */ int __cdecl zhegst_(integer *itype, char *uplo, integer *n, 
	doublecomplex *a, integer *lda, doublecomplex *b, integer *ldb, 
	integer *info);
 
/* Subroutine */ int __cdecl zhegv_(integer *itype, char *jobz, char *uplo, integer *
	n, doublecomplex *a, integer *lda, doublecomplex *b, integer *ldb, 
	doublereal *w, doublecomplex *work, integer *lwork, doublereal *rwork,
	 integer *info);
 
/* Subroutine */ int __cdecl zhegvd_(integer *itype, char *jobz, char *uplo, integer *
	n, doublecomplex *a, integer *lda, doublecomplex *b, integer *ldb, 
	doublereal *w, doublecomplex *work, integer *lwork, doublereal *rwork,
	 integer *lrwork, integer *iwork, integer *liwork, integer *info);
 
/* Subroutine */ int __cdecl zhegvx_(integer *itype, char *jobz, char *range, char *
	uplo, integer *n, doublecomplex *a, integer *lda, doublecomplex *b, 
	integer *ldb, doublereal *vl, doublereal *vu, integer *il, integer *
	iu, doublereal *abstol, integer *m, doublereal *w, doublecomplex *z__,
	 integer *ldz, doublecomplex *work, integer *lwork, doublereal *rwork,
	 integer *iwork, integer *ifail, integer *info);
 
/* Subroutine */ int __cdecl zherfs_(char *uplo, integer *n, integer *nrhs, 
	doublecomplex *a, integer *lda, doublecomplex *af, integer *ldaf, 
	integer *ipiv, doublecomplex *b, integer *ldb, doublecomplex *x, 
	integer *ldx, doublereal *ferr, doublereal *berr, doublecomplex *work,
	 doublereal *rwork, integer *info);
 
/* Subroutine */ int __cdecl zhesv_(char *uplo, integer *n, integer *nrhs, 
	doublecomplex *a, integer *lda, integer *ipiv, doublecomplex *b, 
	integer *ldb, doublecomplex *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl zhesvx_(char *fact, char *uplo, integer *n, integer *
	nrhs, doublecomplex *a, integer *lda, doublecomplex *af, integer *
	ldaf, integer *ipiv, doublecomplex *b, integer *ldb, doublecomplex *x,
	 integer *ldx, doublereal *rcond, doublereal *ferr, doublereal *berr, 
	doublecomplex *work, integer *lwork, doublereal *rwork, integer *info);
 
/* Subroutine */ int __cdecl zhetf2_(char *uplo, integer *n, doublecomplex *a, 
	integer *lda, integer *ipiv, integer *info);
 
/* Subroutine */ int __cdecl zhetrd_(char *uplo, integer *n, doublecomplex *a, 
	integer *lda, doublereal *d__, doublereal *e, doublecomplex *tau, 
	doublecomplex *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl zhetrf_(char *uplo, integer *n, doublecomplex *a, 
	integer *lda, integer *ipiv, doublecomplex *work, integer *lwork, 
	integer *info);
 
/* Subroutine */ int __cdecl zhetri_(char *uplo, integer *n, doublecomplex *a, 
	integer *lda, integer *ipiv, doublecomplex *work, integer *info);
 
/* Subroutine */ int __cdecl zhetrs_(char *uplo, integer *n, integer *nrhs, 
	doublecomplex *a, integer *lda, integer *ipiv, doublecomplex *b, 
	integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl zhgeqz_(char *job, char *compq, char *compz, integer *n, 
	integer *ilo, integer *ihi, doublecomplex *a, integer *lda, 
	doublecomplex *b, integer *ldb, doublecomplex *alpha, doublecomplex *
	beta, doublecomplex *q, integer *ldq, doublecomplex *z__, integer *
	ldz, doublecomplex *work, integer *lwork, doublereal *rwork, integer *
	info);
 
/* Subroutine */ int __cdecl zhpcon_(char *uplo, integer *n, doublecomplex *ap, 
	integer *ipiv, doublereal *anorm, doublereal *rcond, doublecomplex *
	work, integer *info);
 
/* Subroutine */ int __cdecl zhpev_(char *jobz, char *uplo, integer *n, doublecomplex 
	*ap, doublereal *w, doublecomplex *z__, integer *ldz, doublecomplex *
	work, doublereal *rwork, integer *info);
 
/* Subroutine */ int __cdecl zhpevd_(char *jobz, char *uplo, integer *n, 
	doublecomplex *ap, doublereal *w, doublecomplex *z__, integer *ldz, 
	doublecomplex *work, integer *lwork, doublereal *rwork, integer *
	lrwork, integer *iwork, integer *liwork, integer *info);
 
/* Subroutine */ int __cdecl zhpevx_(char *jobz, char *range, char *uplo, integer *n, 
	doublecomplex *ap, doublereal *vl, doublereal *vu, integer *il, 
	integer *iu, doublereal *abstol, integer *m, doublereal *w, 
	doublecomplex *z__, integer *ldz, doublecomplex *work, doublereal *
	rwork, integer *iwork, integer *ifail, integer *info);
 
/* Subroutine */ int __cdecl zhpgst_(integer *itype, char *uplo, integer *n, 
	doublecomplex *ap, doublecomplex *bp, integer *info);
 
/* Subroutine */ int __cdecl zhpgv_(integer *itype, char *jobz, char *uplo, integer *
	n, doublecomplex *ap, doublecomplex *bp, doublereal *w, doublecomplex 
	*z__, integer *ldz, doublecomplex *work, doublereal *rwork, integer *
	info);
 
/* Subroutine */ int __cdecl zhpgvd_(integer *itype, char *jobz, char *uplo, integer *
	n, doublecomplex *ap, doublecomplex *bp, doublereal *w, doublecomplex 
	*z__, integer *ldz, doublecomplex *work, integer *lwork, doublereal *
	rwork, integer *lrwork, integer *iwork, integer *liwork, integer *
	info);
 
/* Subroutine */ int __cdecl zhpgvx_(integer *itype, char *jobz, char *range, char *
	uplo, integer *n, doublecomplex *ap, doublecomplex *bp, doublereal *
	vl, doublereal *vu, integer *il, integer *iu, doublereal *abstol, 
	integer *m, doublereal *w, doublecomplex *z__, integer *ldz, 
	doublecomplex *work, doublereal *rwork, integer *iwork, integer *
	ifail, integer *info);
 
/* Subroutine */ int __cdecl zhprfs_(char *uplo, integer *n, integer *nrhs, 
	doublecomplex *ap, doublecomplex *afp, integer *ipiv, doublecomplex *
	b, integer *ldb, doublecomplex *x, integer *ldx, doublereal *ferr, 
	doublereal *berr, doublecomplex *work, doublereal *rwork, integer *
	info);
 
/* Subroutine */ int __cdecl zhpsv_(char *uplo, integer *n, integer *nrhs, 
	doublecomplex *ap, integer *ipiv, doublecomplex *b, integer *ldb, 
	integer *info);
 
/* Subroutine */ int __cdecl zhpsvx_(char *fact, char *uplo, integer *n, integer *
	nrhs, doublecomplex *ap, doublecomplex *afp, integer *ipiv, 
	doublecomplex *b, integer *ldb, doublecomplex *x, integer *ldx, 
	doublereal *rcond, doublereal *ferr, doublereal *berr, doublecomplex *
	work, doublereal *rwork, integer *info);
 
/* Subroutine */ int __cdecl zhptrd_(char *uplo, integer *n, doublecomplex *ap, 
	doublereal *d__, doublereal *e, doublecomplex *tau, integer *info);
 
/* Subroutine */ int __cdecl zhptrf_(char *uplo, integer *n, doublecomplex *ap, 
	integer *ipiv, integer *info);
 
/* Subroutine */ int __cdecl zhptri_(char *uplo, integer *n, doublecomplex *ap, 
	integer *ipiv, doublecomplex *work, integer *info);
 
/* Subroutine */ int __cdecl zhptrs_(char *uplo, integer *n, integer *nrhs, 
	doublecomplex *ap, integer *ipiv, doublecomplex *b, integer *ldb, 
	integer *info);
 
/* Subroutine */ int __cdecl zhsein_(char *side, char *eigsrc, char *initv, logical *
	select, integer *n, doublecomplex *h__, integer *ldh, doublecomplex *
	w, doublecomplex *vl, integer *ldvl, doublecomplex *vr, integer *ldvr,
	 integer *mm, integer *m, doublecomplex *work, doublereal *rwork, 
	integer *ifaill, integer *ifailr, integer *info);
 
/* Subroutine */ int __cdecl zhseqr_(char *job, char *compz, integer *n, integer *ilo,
	 integer *ihi, doublecomplex *h__, integer *ldh, doublecomplex *w, 
	doublecomplex *z__, integer *ldz, doublecomplex *work, integer *lwork,
	 integer *info);
 
/* Subroutine */ int __cdecl zlabrd_(integer *m, integer *n, integer *nb, 
	doublecomplex *a, integer *lda, doublereal *d__, doublereal *e, 
	doublecomplex *tauq, doublecomplex *taup, doublecomplex *x, integer *
	ldx, doublecomplex *y, integer *ldy);
 
/* Subroutine */ int __cdecl zlacgv_(integer *n, doublecomplex *x, integer *incx);
 
/* Subroutine */ int __cdecl zlacon_(integer *n, doublecomplex *v, doublecomplex *x, 
	doublereal *est, integer *kase);
 
/* Subroutine */ int __cdecl zlacp2_(char *uplo, integer *m, integer *n, doublereal *
	a, integer *lda, doublecomplex *b, integer *ldb);
 
/* Subroutine */ int __cdecl zlacpy_(char *uplo, integer *m, integer *n, 
	doublecomplex *a, integer *lda, doublecomplex *b, integer *ldb);
 
/* Subroutine */ int __cdecl zlacrm_(integer *m, integer *n, doublecomplex *a, 
	integer *lda, doublereal *b, integer *ldb, doublecomplex *c__, 
	integer *ldc, doublereal *rwork);
 
/* Subroutine */ int __cdecl zlacrt_(integer *n, doublecomplex *cx, integer *incx, 
	doublecomplex *cy, integer *incy, doublecomplex *c__, doublecomplex *
	s);
 
/* Subroutine */ int __cdecl zlaed0_(integer *qsiz, integer *n, doublereal *d__, 
	doublereal *e, doublecomplex *q, integer *ldq, doublecomplex *qstore, 
	integer *ldqs, doublereal *rwork, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl zlaed7_(integer *n, integer *cutpnt, integer *qsiz, 
	integer *tlvls, integer *curlvl, integer *curpbm, doublereal *d__, 
	doublecomplex *q, integer *ldq, doublereal *rho, integer *indxq, 
	doublereal *qstore, integer *qptr, integer *prmptr, integer *perm, 
	integer *givptr, integer *givcol, doublereal *givnum, doublecomplex *
	work, doublereal *rwork, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl zlaed8_(integer *k, integer *n, integer *qsiz, 
	doublecomplex *q, integer *ldq, doublereal *d__, doublereal *rho, 
	integer *cutpnt, doublereal *z__, doublereal *dlamda, doublecomplex *
	q2, integer *ldq2, doublereal *w, integer *indxp, integer *indx, 
	integer *indxq, integer *perm, integer *givptr, integer *givcol, 
	doublereal *givnum, integer *info);
 
/* Subroutine */ int __cdecl zlaein_(logical *rightv, logical *noinit, integer *n, 
	doublecomplex *h__, integer *ldh, doublecomplex *w, doublecomplex *v, 
	doublecomplex *b, integer *ldb, doublereal *rwork, doublereal *eps3, 
	doublereal *smlnum, integer *info);
 
/* Subroutine */ int __cdecl zlaesy_(doublecomplex *a, doublecomplex *b, 
	doublecomplex *c__, doublecomplex *rt1, doublecomplex *rt2, 
	doublecomplex *evscal, doublecomplex *cs1, doublecomplex *sn1);
 
/* Subroutine */ int __cdecl zlaev2_(doublecomplex *a, doublecomplex *b, 
	doublecomplex *c__, doublereal *rt1, doublereal *rt2, doublereal *cs1,
	 doublecomplex *sn1);
 
/* Subroutine */ int __cdecl zlags2_(logical *upper, doublereal *a1, doublecomplex *
	a2, doublereal *a3, doublereal *b1, doublecomplex *b2, doublereal *b3,
	 doublereal *csu, doublecomplex *snu, doublereal *csv, doublecomplex *
	snv, doublereal *csq, doublecomplex *snq);
 
/* Subroutine */ int __cdecl zlagtm_(char *trans, integer *n, integer *nrhs, 
	doublereal *alpha, doublecomplex *dl, doublecomplex *d__, 
	doublecomplex *du, doublecomplex *x, integer *ldx, doublereal *beta, 
	doublecomplex *b, integer *ldb);
 
/* Subroutine */ int __cdecl zlahef_(char *uplo, integer *n, integer *nb, integer *kb,
	 doublecomplex *a, integer *lda, integer *ipiv, doublecomplex *w, 
	integer *ldw, integer *info);
 
/* Subroutine */ int __cdecl zlahqr_(logical *wantt, logical *wantz, integer *n, 
	integer *ilo, integer *ihi, doublecomplex *h__, integer *ldh, 
	doublecomplex *w, integer *iloz, integer *ihiz, doublecomplex *z__, 
	integer *ldz, integer *info);
 
/* Subroutine */ int __cdecl zlahrd_(integer *n, integer *k, integer *nb, 
	doublecomplex *a, integer *lda, doublecomplex *tau, doublecomplex *t, 
	integer *ldt, doublecomplex *y, integer *ldy);
 
/* Subroutine */ int __cdecl zlaic1_(integer *job, integer *j, doublecomplex *x, 
	doublereal *sest, doublecomplex *w, doublecomplex *gamma, doublereal *
	sestpr, doublecomplex *s, doublecomplex *c__);
 
/* Subroutine */ int __cdecl zlals0_(integer *icompq, integer *nl, integer *nr, 
	integer *sqre, integer *nrhs, doublecomplex *b, integer *ldb, 
	doublecomplex *bx, integer *ldbx, integer *perm, integer *givptr, 
	integer *givcol, integer *ldgcol, doublereal *givnum, integer *ldgnum,
	 doublereal *poles, doublereal *difl, doublereal *difr, doublereal *
	z__, integer *k, doublereal *c__, doublereal *s, doublereal *rwork, 
	integer *info);
 
/* Subroutine */ int __cdecl zlalsa_(integer *icompq, integer *smlsiz, integer *n, 
	integer *nrhs, doublecomplex *b, integer *ldb, doublecomplex *bx, 
	integer *ldbx, doublereal *u, integer *ldu, doublereal *vt, integer *
	k, doublereal *difl, doublereal *difr, doublereal *z__, doublereal *
	poles, integer *givptr, integer *givcol, integer *ldgcol, integer *
	perm, doublereal *givnum, doublereal *c__, doublereal *s, doublereal *
	rwork, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl zlapll_(integer *n, doublecomplex *x, integer *incx, 
	doublecomplex *y, integer *incy, doublereal *ssmin);
 
/* Subroutine */ int __cdecl zlapmt_(logical *forwrd, integer *m, integer *n, 
	doublecomplex *x, integer *ldx, integer *k);
 
/* Subroutine */ int __cdecl zlaqgb_(integer *m, integer *n, integer *kl, integer *ku,
	 doublecomplex *ab, integer *ldab, doublereal *r__, doublereal *c__, 
	doublereal *rowcnd, doublereal *colcnd, doublereal *amax, char *equed);
 
/* Subroutine */ int __cdecl zlaqge_(integer *m, integer *n, doublecomplex *a, 
	integer *lda, doublereal *r__, doublereal *c__, doublereal *rowcnd, 
	doublereal *colcnd, doublereal *amax, char *equed);
 
/* Subroutine */ int __cdecl zlaqhb_(char *uplo, integer *n, integer *kd, 
	doublecomplex *ab, integer *ldab, doublereal *s, doublereal *scond, 
	doublereal *amax, char *equed);
 
/* Subroutine */ int __cdecl zlaqhe_(char *uplo, integer *n, doublecomplex *a, 
	integer *lda, doublereal *s, doublereal *scond, doublereal *amax, 
	char *equed);
 
/* Subroutine */ int __cdecl zlaqhp_(char *uplo, integer *n, doublecomplex *ap, 
	doublereal *s, doublereal *scond, doublereal *amax, char *equed);
 
/* Subroutine */ int __cdecl zlaqp2_(integer *m, integer *n, integer *offset, 
	doublecomplex *a, integer *lda, integer *jpvt, doublecomplex *tau, 
	doublereal *vn1, doublereal *vn2, doublecomplex *work);
 
/* Subroutine */ int __cdecl zlaqps_(integer *m, integer *n, integer *offset, integer 
	*nb, integer *kb, doublecomplex *a, integer *lda, integer *jpvt, 
	doublecomplex *tau, doublereal *vn1, doublereal *vn2, doublecomplex *
	auxv, doublecomplex *f, integer *ldf);
 
/* Subroutine */ int __cdecl zlaqsb_(char *uplo, integer *n, integer *kd, 
	doublecomplex *ab, integer *ldab, doublereal *s, doublereal *scond, 
	doublereal *amax, char *equed);
 
/* Subroutine */ int __cdecl zlaqsp_(char *uplo, integer *n, doublecomplex *ap, 
	doublereal *s, doublereal *scond, doublereal *amax, char *equed);
 
/* Subroutine */ int __cdecl zlaqsy_(char *uplo, integer *n, doublecomplex *a, 
	integer *lda, doublereal *s, doublereal *scond, doublereal *amax, 
	char *equed);
 
/* Subroutine */ int __cdecl ZLAR1V(integer *n, integer *b1, integer *bn, doublereal 
	*sigma, doublereal *d__, doublereal *l, doublereal *ld, doublereal *
	lld, doublereal *gersch, doublecomplex *z__, doublereal *ztz, 
	doublereal *mingma, integer *r__, integer *isuppz, doublereal *work);
 
/* Subroutine */ int __cdecl ZLAR2V(integer *n, doublecomplex *x, doublecomplex *y, 
	doublecomplex *z__, integer *incx, doublereal *c__, doublecomplex *s, 
	integer *incc);
 
/* Subroutine */ int __cdecl zlarcm_(integer *m, integer *n, doublereal *a, integer *
	lda, doublecomplex *b, integer *ldb, doublecomplex *c__, integer *ldc,
	 doublereal *rwork);
 
/* Subroutine */ int __cdecl zlarf_(char *side, integer *m, integer *n, doublecomplex 
	*v, integer *incv, doublecomplex *tau, doublecomplex *c__, integer *
	ldc, doublecomplex *work);
 
/* Subroutine */ int __cdecl zlarfb_(char *side, char *trans, char *direct, char *
	storev, integer *m, integer *n, integer *k, doublecomplex *v, integer 
	*ldv, doublecomplex *t, integer *ldt, doublecomplex *c__, integer *
	ldc, doublecomplex *work, integer *ldwork);
 
/* Subroutine */ int __cdecl zlarfg_(integer *n, doublecomplex *alpha, doublecomplex *
	x, integer *incx, doublecomplex *tau);
 
/* Subroutine */ int __cdecl zlarft_(char *direct, char *storev, integer *n, integer *
	k, doublecomplex *v, integer *ldv, doublecomplex *tau, doublecomplex *
	t, integer *ldt);
 
/* Subroutine */ int __cdecl zlarfx_(char *side, integer *m, integer *n, 
	doublecomplex *v, doublecomplex *tau, doublecomplex *c__, integer *
	ldc, doublecomplex *work);
 
/* Subroutine */ int __cdecl zlargv_(integer *n, doublecomplex *x, integer *incx, 
	doublecomplex *y, integer *incy, doublereal *c__, integer *incc);
 
/* Subroutine */ int __cdecl zlarnv_(integer *idist, integer *iseed, integer *n, 
	doublecomplex *x);
 
/* Subroutine */ int __cdecl zlarrv_(integer *n, doublereal *d__, doublereal *l, 
	integer *isplit, integer *m, doublereal *w, integer *iblock, 
	doublereal *gersch, doublereal *tol, doublecomplex *z__, integer *ldz,
	 integer *isuppz, doublereal *work, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl zlartg_(doublecomplex *f, doublecomplex *g, doublereal *
	cs, doublecomplex *sn, doublecomplex *r__);
 
/* Subroutine */ int __cdecl zlartv_(integer *n, doublecomplex *x, integer *incx, 
	doublecomplex *y, integer *incy, doublereal *c__, doublecomplex *s, 
	integer *incc);
 
/* Subroutine */ int __cdecl zlarz_(char *side, integer *m, integer *n, integer *l, 
	doublecomplex *v, integer *incv, doublecomplex *tau, doublecomplex *
	c__, integer *ldc, doublecomplex *work);
 
/* Subroutine */ int __cdecl zlarzb_(char *side, char *trans, char *direct, char *
	storev, integer *m, integer *n, integer *k, integer *l, doublecomplex 
	*v, integer *ldv, doublecomplex *t, integer *ldt, doublecomplex *c__, 
	integer *ldc, doublecomplex *work, integer *ldwork);
 
/* Subroutine */ int __cdecl zlarzt_(char *direct, char *storev, integer *n, integer *
	k, doublecomplex *v, integer *ldv, doublecomplex *tau, doublecomplex *
	t, integer *ldt);
 
/* Subroutine */ int __cdecl zlascl_(char *type__, integer *kl, integer *ku, 
	doublereal *cfrom, doublereal *cto, integer *m, integer *n, 
	doublecomplex *a, integer *lda, integer *info);
 
/* Subroutine */ int __cdecl zlaset_(char *uplo, integer *m, integer *n, 
	doublecomplex *alpha, doublecomplex *beta, doublecomplex *a, integer *
	lda);
 
/* Subroutine */ int __cdecl zlasr_(char *side, char *pivot, char *direct, integer *m,
	 integer *n, doublereal *c__, doublereal *s, doublecomplex *a, 
	integer *lda);
 
/* Subroutine */ int __cdecl zlassq_(integer *n, doublecomplex *x, integer *incx, 
	doublereal *scale, doublereal *sumsq);
 
/* Subroutine */ int __cdecl zlaswp_(integer *n, doublecomplex *a, integer *lda, 
	integer *k1, integer *k2, integer *ipiv, integer *incx);
 
/* Subroutine */ int __cdecl zlasyf_(char *uplo, integer *n, integer *nb, integer *kb,
	 doublecomplex *a, integer *lda, integer *ipiv, doublecomplex *w, 
	integer *ldw, integer *info);
 
/* Subroutine */ int __cdecl zlatbs_(char *uplo, char *trans, char *diag, char *
	normin, integer *n, integer *kd, doublecomplex *ab, integer *ldab, 
	doublecomplex *x, doublereal *scale, doublereal *cnorm, integer *info);
 
/* Subroutine */ int __cdecl zlatdf_(integer *ijob, integer *n, doublecomplex *z__, 
	integer *ldz, doublecomplex *rhs, doublereal *rdsum, doublereal *
	rdscal, integer *ipiv, integer *jpiv);
 
/* Subroutine */ int __cdecl zlatps_(char *uplo, char *trans, char *diag, char *
	normin, integer *n, doublecomplex *ap, doublecomplex *x, doublereal *
	scale, doublereal *cnorm, integer *info);
 
/* Subroutine */ int __cdecl zlatrd_(char *uplo, integer *n, integer *nb, 
	doublecomplex *a, integer *lda, doublereal *e, doublecomplex *tau, 
	doublecomplex *w, integer *ldw);
 
/* Subroutine */ int __cdecl zlatrs_(char *uplo, char *trans, char *diag, char *
	normin, integer *n, doublecomplex *a, integer *lda, doublecomplex *x, 
	doublereal *scale, doublereal *cnorm, integer *info);
 
/* Subroutine */ int __cdecl zlatrz_(integer *m, integer *n, integer *l, 
	doublecomplex *a, integer *lda, doublecomplex *tau, doublecomplex *
	work);
 
/* Subroutine */ int __cdecl zlatzm_(char *side, integer *m, integer *n, 
	doublecomplex *v, integer *incv, doublecomplex *tau, doublecomplex *
	c1, doublecomplex *c2, integer *ldc, doublecomplex *work);
 
/* Subroutine */ int __cdecl zlauu2_(char *uplo, integer *n, doublecomplex *a, 
	integer *lda, integer *info);
 
/* Subroutine */ int __cdecl zlauum_(char *uplo, integer *n, doublecomplex *a, 
	integer *lda, integer *info);
 
/* Subroutine */ int __cdecl zpbcon_(char *uplo, integer *n, integer *kd, 
	doublecomplex *ab, integer *ldab, doublereal *anorm, doublereal *
	rcond, doublecomplex *work, doublereal *rwork, integer *info);
 
/* Subroutine */ int __cdecl zpbequ_(char *uplo, integer *n, integer *kd, 
	doublecomplex *ab, integer *ldab, doublereal *s, doublereal *scond, 
	doublereal *amax, integer *info);
 
/* Subroutine */ int __cdecl zpbrfs_(char *uplo, integer *n, integer *kd, integer *
	nrhs, doublecomplex *ab, integer *ldab, doublecomplex *afb, integer *
	ldafb, doublecomplex *b, integer *ldb, doublecomplex *x, integer *ldx,
	 doublereal *ferr, doublereal *berr, doublecomplex *work, doublereal *
	rwork, integer *info);
 
/* Subroutine */ int __cdecl zpbstf_(char *uplo, integer *n, integer *kd, 
	doublecomplex *ab, integer *ldab, integer *info);
 
/* Subroutine */ int __cdecl zpbsv_(char *uplo, integer *n, integer *kd, integer *
	nrhs, doublecomplex *ab, integer *ldab, doublecomplex *b, integer *
	ldb, integer *info);
 
/* Subroutine */ int __cdecl zpbsvx_(char *fact, char *uplo, integer *n, integer *kd, 
	integer *nrhs, doublecomplex *ab, integer *ldab, doublecomplex *afb, 
	integer *ldafb, char *equed, doublereal *s, doublecomplex *b, integer 
	*ldb, doublecomplex *x, integer *ldx, doublereal *rcond, doublereal *
	ferr, doublereal *berr, doublecomplex *work, doublereal *rwork, 
	integer *info);
 
/* Subroutine */ int __cdecl zpbtf2_(char *uplo, integer *n, integer *kd, 
	doublecomplex *ab, integer *ldab, integer *info);
 
/* Subroutine */ int __cdecl zpbtrf_(char *uplo, integer *n, integer *kd, 
	doublecomplex *ab, integer *ldab, integer *info);
 
/* Subroutine */ int __cdecl zpbtrs_(char *uplo, integer *n, integer *kd, integer *
	nrhs, doublecomplex *ab, integer *ldab, doublecomplex *b, integer *
	ldb, integer *info);
 
/* Subroutine */ int __cdecl zpocon_(char *uplo, integer *n, doublecomplex *a, 
	integer *lda, doublereal *anorm, doublereal *rcond, doublecomplex *
	work, doublereal *rwork, integer *info);
 
/* Subroutine */ int __cdecl zpoequ_(integer *n, doublecomplex *a, integer *lda, 
	doublereal *s, doublereal *scond, doublereal *amax, integer *info);
 
/* Subroutine */ int __cdecl zporfs_(char *uplo, integer *n, integer *nrhs, 
	doublecomplex *a, integer *lda, doublecomplex *af, integer *ldaf, 
	doublecomplex *b, integer *ldb, doublecomplex *x, integer *ldx, 
	doublereal *ferr, doublereal *berr, doublecomplex *work, doublereal *
	rwork, integer *info);
 
/* Subroutine */ int __cdecl zposv_(char *uplo, integer *n, integer *nrhs, 
	doublecomplex *a, integer *lda, doublecomplex *b, integer *ldb, 
	integer *info);
 
/* Subroutine */ int __cdecl zposvx_(char *fact, char *uplo, integer *n, integer *
	nrhs, doublecomplex *a, integer *lda, doublecomplex *af, integer *
	ldaf, char *equed, doublereal *s, doublecomplex *b, integer *ldb, 
	doublecomplex *x, integer *ldx, doublereal *rcond, doublereal *ferr, 
	doublereal *berr, doublecomplex *work, doublereal *rwork, integer *
	info);
 
/* Subroutine */ int __cdecl zpotf2_(char *uplo, integer *n, doublecomplex *a, 
	integer *lda, integer *info);
 
/* Subroutine */ int __cdecl zpotrf_(char *uplo, integer *n, doublecomplex *a, 
	integer *lda, integer *info);
 
/* Subroutine */ int __cdecl zpotri_(char *uplo, integer *n, doublecomplex *a, 
	integer *lda, integer *info);
 
/* Subroutine */ int __cdecl zpotrs_(char *uplo, integer *n, integer *nrhs, 
	doublecomplex *a, integer *lda, doublecomplex *b, integer *ldb, 
	integer *info);
 
/* Subroutine */ int __cdecl zppcon_(char *uplo, integer *n, doublecomplex *ap, 
	doublereal *anorm, doublereal *rcond, doublecomplex *work, doublereal 
	*rwork, integer *info);
 
/* Subroutine */ int __cdecl zppequ_(char *uplo, integer *n, doublecomplex *ap, 
	doublereal *s, doublereal *scond, doublereal *amax, integer *info);
 
/* Subroutine */ int __cdecl zpprfs_(char *uplo, integer *n, integer *nrhs, 
	doublecomplex *ap, doublecomplex *afp, doublecomplex *b, integer *ldb,
	 doublecomplex *x, integer *ldx, doublereal *ferr, doublereal *berr, 
	doublecomplex *work, doublereal *rwork, integer *info);
 
/* Subroutine */ int __cdecl zppsv_(char *uplo, integer *n, integer *nrhs, 
	doublecomplex *ap, doublecomplex *b, integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl zppsvx_(char *fact, char *uplo, integer *n, integer *
	nrhs, doublecomplex *ap, doublecomplex *afp, char *equed, doublereal *
	s, doublecomplex *b, integer *ldb, doublecomplex *x, integer *ldx, 
	doublereal *rcond, doublereal *ferr, doublereal *berr, doublecomplex *
	work, doublereal *rwork, integer *info);
 
/* Subroutine */ int __cdecl zpptrf_(char *uplo, integer *n, doublecomplex *ap, 
	integer *info);
 
/* Subroutine */ int __cdecl zpptri_(char *uplo, integer *n, doublecomplex *ap, 
	integer *info);
 
/* Subroutine */ int __cdecl zpptrs_(char *uplo, integer *n, integer *nrhs, 
	doublecomplex *ap, doublecomplex *b, integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl zptcon_(integer *n, doublereal *d__, doublecomplex *e, 
	doublereal *anorm, doublereal *rcond, doublereal *rwork, integer *
	info);
 
/* Subroutine */ int __cdecl zptrfs_(char *uplo, integer *n, integer *nrhs, 
	doublereal *d__, doublecomplex *e, doublereal *df, doublecomplex *ef, 
	doublecomplex *b, integer *ldb, doublecomplex *x, integer *ldx, 
	doublereal *ferr, doublereal *berr, doublecomplex *work, doublereal *
	rwork, integer *info);
 
/* Subroutine */ int __cdecl zptsv_(integer *n, integer *nrhs, doublereal *d__, 
	doublecomplex *e, doublecomplex *b, integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl zptsvx_(char *fact, integer *n, integer *nrhs, 
	doublereal *d__, doublecomplex *e, doublereal *df, doublecomplex *ef, 
	doublecomplex *b, integer *ldb, doublecomplex *x, integer *ldx, 
	doublereal *rcond, doublereal *ferr, doublereal *berr, doublecomplex *
	work, doublereal *rwork, integer *info);
 
/* Subroutine */ int __cdecl zpttrf_(integer *n, doublereal *d__, doublecomplex *e, 
	integer *info);
 
/* Subroutine */ int __cdecl zpttrs_(char *uplo, integer *n, integer *nrhs, 
	doublereal *d__, doublecomplex *e, doublecomplex *b, integer *ldb, 
	integer *info);
 
/* Subroutine */ int __cdecl zptts2_(integer *iuplo, integer *n, integer *nrhs, 
	doublereal *d__, doublecomplex *e, doublecomplex *b, integer *ldb);
 
/* Subroutine */ int __cdecl ZROT(integer *n, doublecomplex *cx, integer *incx, 
	doublecomplex *cy, integer *incy, doublereal *c__, doublecomplex *s);
 
/* Subroutine */ int __cdecl zspcon_(char *uplo, integer *n, doublecomplex *ap, 
	integer *ipiv, doublereal *anorm, doublereal *rcond, doublecomplex *
	work, integer *info);
 
/* Subroutine */ int __cdecl zspmv_(char *uplo, integer *n, doublecomplex *alpha, 
	doublecomplex *ap, doublecomplex *x, integer *incx, doublecomplex *
	beta, doublecomplex *y, integer *incy);
 
/* Subroutine */ int __cdecl ZSPR(char *uplo, integer *n, doublecomplex *alpha, 
	doublecomplex *x, integer *incx, doublecomplex *ap);
 
/* Subroutine */ int __cdecl zsprfs_(char *uplo, integer *n, integer *nrhs, 
	doublecomplex *ap, doublecomplex *afp, integer *ipiv, doublecomplex *
	b, integer *ldb, doublecomplex *x, integer *ldx, doublereal *ferr, 
	doublereal *berr, doublecomplex *work, doublereal *rwork, integer *
	info);
 
/* Subroutine */ int __cdecl zspsv_(char *uplo, integer *n, integer *nrhs, 
	doublecomplex *ap, integer *ipiv, doublecomplex *b, integer *ldb, 
	integer *info);
 
/* Subroutine */ int __cdecl zspsvx_(char *fact, char *uplo, integer *n, integer *
	nrhs, doublecomplex *ap, doublecomplex *afp, integer *ipiv, 
	doublecomplex *b, integer *ldb, doublecomplex *x, integer *ldx, 
	doublereal *rcond, doublereal *ferr, doublereal *berr, doublecomplex *
	work, doublereal *rwork, integer *info);
 
/* Subroutine */ int __cdecl zsptrf_(char *uplo, integer *n, doublecomplex *ap, 
	integer *ipiv, integer *info);
 
/* Subroutine */ int __cdecl zsptri_(char *uplo, integer *n, doublecomplex *ap, 
	integer *ipiv, doublecomplex *work, integer *info);
 
/* Subroutine */ int __cdecl zsptrs_(char *uplo, integer *n, integer *nrhs, 
	doublecomplex *ap, integer *ipiv, doublecomplex *b, integer *ldb, 
	integer *info);
 
/* Subroutine */ int __cdecl zstedc_(char *compz, integer *n, doublereal *d__, 
	doublereal *e, doublecomplex *z__, integer *ldz, doublecomplex *work, 
	integer *lwork, doublereal *rwork, integer *lrwork, integer *iwork, 
	integer *liwork, integer *info);
 
/* Subroutine */ int __cdecl zstein_(integer *n, doublereal *d__, doublereal *e, 
	integer *m, doublereal *w, integer *iblock, integer *isplit, 
	doublecomplex *z__, integer *ldz, doublereal *work, integer *iwork, 
	integer *ifail, integer *info);
 
/* Subroutine */ int __cdecl zsteqr_(char *compz, integer *n, doublereal *d__, 
	doublereal *e, doublecomplex *z__, integer *ldz, doublereal *work, 
	integer *info);
 
/* Subroutine */ int __cdecl zsycon_(char *uplo, integer *n, doublecomplex *a, 
	integer *lda, integer *ipiv, doublereal *anorm, doublereal *rcond, 
	doublecomplex *work, integer *info);
 
/* Subroutine */ int __cdecl zsymv_(char *uplo, integer *n, doublecomplex *alpha, 
	doublecomplex *a, integer *lda, doublecomplex *x, integer *incx, 
	doublecomplex *beta, doublecomplex *y, integer *incy);
 
/* Subroutine */ int __cdecl ZSYR(char *uplo, integer *n, doublecomplex *alpha, 
	doublecomplex *x, integer *incx, doublecomplex *a, integer *lda);
 
/* Subroutine */ int __cdecl zsyrfs_(char *uplo, integer *n, integer *nrhs, 
	doublecomplex *a, integer *lda, doublecomplex *af, integer *ldaf, 
	integer *ipiv, doublecomplex *b, integer *ldb, doublecomplex *x, 
	integer *ldx, doublereal *ferr, doublereal *berr, doublecomplex *work,
	 doublereal *rwork, integer *info);
 
/* Subroutine */ int __cdecl zsysv_(char *uplo, integer *n, integer *nrhs, 
	doublecomplex *a, integer *lda, integer *ipiv, doublecomplex *b, 
	integer *ldb, doublecomplex *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl zsysvx_(char *fact, char *uplo, integer *n, integer *
	nrhs, doublecomplex *a, integer *lda, doublecomplex *af, integer *
	ldaf, integer *ipiv, doublecomplex *b, integer *ldb, doublecomplex *x,
	 integer *ldx, doublereal *rcond, doublereal *ferr, doublereal *berr, 
	doublecomplex *work, integer *lwork, doublereal *rwork, integer *info);
 
/* Subroutine */ int __cdecl zsytf2_(char *uplo, integer *n, doublecomplex *a, 
	integer *lda, integer *ipiv, integer *info);
 
/* Subroutine */ int __cdecl zsytrf_(char *uplo, integer *n, doublecomplex *a, 
	integer *lda, integer *ipiv, doublecomplex *work, integer *lwork, 
	integer *info);
 
/* Subroutine */ int __cdecl zsytri_(char *uplo, integer *n, doublecomplex *a, 
	integer *lda, integer *ipiv, doublecomplex *work, integer *info);
 
/* Subroutine */ int __cdecl zsytrs_(char *uplo, integer *n, integer *nrhs, 
	doublecomplex *a, integer *lda, integer *ipiv, doublecomplex *b, 
	integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl ztbcon_(char *norm, char *uplo, char *diag, integer *n, 
	integer *kd, doublecomplex *ab, integer *ldab, doublereal *rcond, 
	doublecomplex *work, doublereal *rwork, integer *info);
 
/* Subroutine */ int __cdecl ztbrfs_(char *uplo, char *trans, char *diag, integer *n, 
	integer *kd, integer *nrhs, doublecomplex *ab, integer *ldab, 
	doublecomplex *b, integer *ldb, doublecomplex *x, integer *ldx, 
	doublereal *ferr, doublereal *berr, doublecomplex *work, doublereal *
	rwork, integer *info);
 
/* Subroutine */ int __cdecl ztbtrs_(char *uplo, char *trans, char *diag, integer *n, 
	integer *kd, integer *nrhs, doublecomplex *ab, integer *ldab, 
	doublecomplex *b, integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl ztgevc_(char *side, char *howmny, logical *select, 
	integer *n, doublecomplex *a, integer *lda, doublecomplex *b, integer 
	*ldb, doublecomplex *vl, integer *ldvl, doublecomplex *vr, integer *
	ldvr, integer *mm, integer *m, doublecomplex *work, doublereal *rwork,
	 integer *info);
 
/* Subroutine */ int __cdecl ztgex2_(logical *wantq, logical *wantz, integer *n, 
	doublecomplex *a, integer *lda, doublecomplex *b, integer *ldb, 
	doublecomplex *q, integer *ldq, doublecomplex *z__, integer *ldz, 
	integer *j1, integer *info);
 
/* Subroutine */ int __cdecl ztgexc_(logical *wantq, logical *wantz, integer *n, 
	doublecomplex *a, integer *lda, doublecomplex *b, integer *ldb, 
	doublecomplex *q, integer *ldq, doublecomplex *z__, integer *ldz, 
	integer *ifst, integer *ilst, integer *info);
 
/* Subroutine */ int __cdecl ztgsen_(integer *ijob, logical *wantq, logical *wantz, 
	logical *select, integer *n, doublecomplex *a, integer *lda, 
	doublecomplex *b, integer *ldb, doublecomplex *alpha, doublecomplex *
	beta, doublecomplex *q, integer *ldq, doublecomplex *z__, integer *
	ldz, integer *m, doublereal *pl, doublereal *pr, doublereal *dif, 
	doublecomplex *work, integer *lwork, integer *iwork, integer *liwork, 
	integer *info);
 
/* Subroutine */ int __cdecl ztgsja_(char *jobu, char *jobv, char *jobq, integer *m, 
	integer *p, integer *n, integer *k, integer *l, doublecomplex *a, 
	integer *lda, doublecomplex *b, integer *ldb, doublereal *tola, 
	doublereal *tolb, doublereal *alpha, doublereal *beta, doublecomplex *
	u, integer *ldu, doublecomplex *v, integer *ldv, doublecomplex *q, 
	integer *ldq, doublecomplex *work, integer *ncycle, integer *info);
 
/* Subroutine */ int __cdecl ztgsna_(char *job, char *howmny, logical *select, 
	integer *n, doublecomplex *a, integer *lda, doublecomplex *b, integer 
	*ldb, doublecomplex *vl, integer *ldvl, doublecomplex *vr, integer *
	ldvr, doublereal *s, doublereal *dif, integer *mm, integer *m, 
	doublecomplex *work, integer *lwork, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl ztgsy2_(char *trans, integer *ijob, integer *m, integer *
	n, doublecomplex *a, integer *lda, doublecomplex *b, integer *ldb, 
	doublecomplex *c__, integer *ldc, doublecomplex *d__, integer *ldd, 
	doublecomplex *e, integer *lde, doublecomplex *f, integer *ldf, 
	doublereal *scale, doublereal *rdsum, doublereal *rdscal, integer *
	info);
 
/* Subroutine */ int __cdecl ztgsyl_(char *trans, integer *ijob, integer *m, integer *
	n, doublecomplex *a, integer *lda, doublecomplex *b, integer *ldb, 
	doublecomplex *c__, integer *ldc, doublecomplex *d__, integer *ldd, 
	doublecomplex *e, integer *lde, doublecomplex *f, integer *ldf, 
	doublereal *scale, doublereal *dif, doublecomplex *work, integer *
	lwork, integer *iwork, integer *info);
 
/* Subroutine */ int __cdecl ztpcon_(char *norm, char *uplo, char *diag, integer *n, 
	doublecomplex *ap, doublereal *rcond, doublecomplex *work, doublereal 
	*rwork, integer *info);
 
/* Subroutine */ int __cdecl ztprfs_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, doublecomplex *ap, doublecomplex *b, integer *ldb, 
	doublecomplex *x, integer *ldx, doublereal *ferr, doublereal *berr, 
	doublecomplex *work, doublereal *rwork, integer *info);
 
/* Subroutine */ int __cdecl ztptri_(char *uplo, char *diag, integer *n, 
	doublecomplex *ap, integer *info);
 
/* Subroutine */ int __cdecl ztptrs_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, doublecomplex *ap, doublecomplex *b, integer *ldb, 
	integer *info);
 
/* Subroutine */ int __cdecl ztrcon_(char *norm, char *uplo, char *diag, integer *n, 
	doublecomplex *a, integer *lda, doublereal *rcond, doublecomplex *
	work, doublereal *rwork, integer *info);
 
/* Subroutine */ int __cdecl ztrevc_(char *side, char *howmny, logical *select, 
	integer *n, doublecomplex *t, integer *ldt, doublecomplex *vl, 
	integer *ldvl, doublecomplex *vr, integer *ldvr, integer *mm, integer 
	*m, doublecomplex *work, doublereal *rwork, integer *info);
 
/* Subroutine */ int __cdecl ztrexc_(char *compq, integer *n, doublecomplex *t, 
	integer *ldt, doublecomplex *q, integer *ldq, integer *ifst, integer *
	ilst, integer *info);
 
/* Subroutine */ int __cdecl ztrrfs_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, doublecomplex *a, integer *lda, doublecomplex *b, 
	integer *ldb, doublecomplex *x, integer *ldx, doublereal *ferr, 
	doublereal *berr, doublecomplex *work, doublereal *rwork, integer *
	info);
 
/* Subroutine */ int __cdecl ztrsen_(char *job, char *compq, logical *select, integer 
	*n, doublecomplex *t, integer *ldt, doublecomplex *q, integer *ldq, 
	doublecomplex *w, integer *m, doublereal *s, doublereal *sep, 
	doublecomplex *work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl ztrsna_(char *job, char *howmny, logical *select, 
	integer *n, doublecomplex *t, integer *ldt, doublecomplex *vl, 
	integer *ldvl, doublecomplex *vr, integer *ldvr, doublereal *s, 
	doublereal *sep, integer *mm, integer *m, doublecomplex *work, 
	integer *ldwork, doublereal *rwork, integer *info);
 
/* Subroutine */ int __cdecl ztrsyl_(char *trana, char *tranb, integer *isgn, integer 
	*m, integer *n, doublecomplex *a, integer *lda, doublecomplex *b, 
	integer *ldb, doublecomplex *c__, integer *ldc, doublereal *scale, 
	integer *info);
 
/* Subroutine */ int __cdecl ztrti2_(char *uplo, char *diag, integer *n, 
	doublecomplex *a, integer *lda, integer *info);
 
/* Subroutine */ int __cdecl ztrtri_(char *uplo, char *diag, integer *n, 
	doublecomplex *a, integer *lda, integer *info);
 
/* Subroutine */ int __cdecl ztrtrs_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, doublecomplex *a, integer *lda, doublecomplex *b, 
	integer *ldb, integer *info);
 
/* Subroutine */ int __cdecl ztzrqf_(integer *m, integer *n, doublecomplex *a, 
	integer *lda, doublecomplex *tau, integer *info);
 
/* Subroutine */ int __cdecl ztzrzf_(integer *m, integer *n, doublecomplex *a, 
	integer *lda, doublecomplex *tau, doublecomplex *work, integer *lwork,
	 integer *info);
 
/* Subroutine */ int __cdecl ZUNG2L(integer *m, integer *n, integer *k, 
	doublecomplex *a, integer *lda, doublecomplex *tau, doublecomplex *
	work, integer *info);
 
/* Subroutine */ int __cdecl ZUNG2R(integer *m, integer *n, integer *k, 
	doublecomplex *a, integer *lda, doublecomplex *tau, doublecomplex *
	work, integer *info);
 
/* Subroutine */ int __cdecl zungbr_(char *vect, integer *m, integer *n, integer *k, 
	doublecomplex *a, integer *lda, doublecomplex *tau, doublecomplex *
	work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl zunghr_(integer *n, integer *ilo, integer *ihi, 
	doublecomplex *a, integer *lda, doublecomplex *tau, doublecomplex *
	work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl zungl2_(integer *m, integer *n, integer *k, 
	doublecomplex *a, integer *lda, doublecomplex *tau, doublecomplex *
	work, integer *info);
 
/* Subroutine */ int __cdecl zunglq_(integer *m, integer *n, integer *k, 
	doublecomplex *a, integer *lda, doublecomplex *tau, doublecomplex *
	work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl zungql_(integer *m, integer *n, integer *k, 
	doublecomplex *a, integer *lda, doublecomplex *tau, doublecomplex *
	work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl zungqr_(integer *m, integer *n, integer *k, 
	doublecomplex *a, integer *lda, doublecomplex *tau, doublecomplex *
	work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl zungr2_(integer *m, integer *n, integer *k, 
	doublecomplex *a, integer *lda, doublecomplex *tau, doublecomplex *
	work, integer *info);
 
/* Subroutine */ int __cdecl zungrq_(integer *m, integer *n, integer *k, 
	doublecomplex *a, integer *lda, doublecomplex *tau, doublecomplex *
	work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl zungtr_(char *uplo, integer *n, doublecomplex *a, 
	integer *lda, doublecomplex *tau, doublecomplex *work, integer *lwork,
	 integer *info);
 
/* Subroutine */ int __cdecl ZUNM2L(char *side, char *trans, integer *m, integer *n, 
	integer *k, doublecomplex *a, integer *lda, doublecomplex *tau, 
	doublecomplex *c__, integer *ldc, doublecomplex *work, integer *info);
 
/* Subroutine */ int __cdecl ZUNM2R(char *side, char *trans, integer *m, integer *n, 
	integer *k, doublecomplex *a, integer *lda, doublecomplex *tau, 
	doublecomplex *c__, integer *ldc, doublecomplex *work, integer *info);
 
/* Subroutine */ int __cdecl zunmbr_(char *vect, char *side, char *trans, integer *m, 
	integer *n, integer *k, doublecomplex *a, integer *lda, doublecomplex 
	*tau, doublecomplex *c__, integer *ldc, doublecomplex *work, integer *
	lwork, integer *info);
 
/* Subroutine */ int __cdecl zunmhr_(char *side, char *trans, integer *m, integer *n, 
	integer *ilo, integer *ihi, doublecomplex *a, integer *lda, 
	doublecomplex *tau, doublecomplex *c__, integer *ldc, doublecomplex *
	work, integer *lwork, integer *info);
 
/* Subroutine */ int __cdecl zunml2_(char *side, char *trans, integer *m, integer *n, 
	integer *k, doublecomplex *a, integer *lda, doublecomplex *tau, 
	doublecomplex *c__, integer *ldc, doublecomplex *work, integer *info);
 
/* Subroutine */ int __cdecl zunmlq_(char *side, char *trans, integer *m, integer *n, 
	integer *k, doublecomplex *a, integer *lda, doublecomplex *tau, 
	doublecomplex *c__, integer *ldc, doublecomplex *work, integer *lwork,
	 integer *info);
 
/* Subroutine */ int __cdecl zunmql_(char *side, char *trans, integer *m, integer *n, 
	integer *k, doublecomplex *a, integer *lda, doublecomplex *tau, 
	doublecomplex *c__, integer *ldc, doublecomplex *work, integer *lwork,
	 integer *info);
 
/* Subroutine */ int __cdecl zunmqr_(char *side, char *trans, integer *m, integer *n, 
	integer *k, doublecomplex *a, integer *lda, doublecomplex *tau, 
	doublecomplex *c__, integer *ldc, doublecomplex *work, integer *lwork,
	 integer *info);
 
/* Subroutine */ int __cdecl zunmr2_(char *side, char *trans, integer *m, integer *n, 
	integer *k, doublecomplex *a, integer *lda, doublecomplex *tau, 
	doublecomplex *c__, integer *ldc, doublecomplex *work, integer *info);
 
/* Subroutine */ int __cdecl zunmr3_(char *side, char *trans, integer *m, integer *n, 
	integer *k, integer *l, doublecomplex *a, integer *lda, doublecomplex 
	*tau, doublecomplex *c__, integer *ldc, doublecomplex *work, integer *
	info);
 
/* Subroutine */ int __cdecl zunmrq_(char *side, char *trans, integer *m, integer *n, 
	integer *k, doublecomplex *a, integer *lda, doublecomplex *tau, 
	doublecomplex *c__, integer *ldc, doublecomplex *work, integer *lwork,
	 integer *info);
 
/* Subroutine */ int __cdecl zunmrz_(char *side, char *trans, integer *m, integer *n, 
	integer *k, integer *l, doublecomplex *a, integer *lda, doublecomplex 
	*tau, doublecomplex *c__, integer *ldc, doublecomplex *work, integer *
	lwork, integer *info);
 
/* Subroutine */ int __cdecl zunmtr_(char *side, char *uplo, char *trans, integer *m, 
	integer *n, doublecomplex *a, integer *lda, doublecomplex *tau, 
	doublecomplex *c__, integer *ldc, doublecomplex *work, integer *lwork,
	 integer *info);
 
/* Subroutine */ int __cdecl zupgtr_(char *uplo, integer *n, doublecomplex *ap, 
	doublecomplex *tau, doublecomplex *q, integer *ldq, doublecomplex *
	work, integer *info);
 
/* Subroutine */ int __cdecl zupmtr_(char *side, char *uplo, char *trans, integer *m, 
	integer *n, doublecomplex *ap, doublecomplex *tau, doublecomplex *c__,
	 integer *ldc, doublecomplex *work, integer *info);
}
#endif
 
#endif /* __CLAPACK_H */
 
 
