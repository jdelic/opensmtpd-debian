/*	$OpenBSD: smtpd-defines.h,v 1.6 2015/11/30 14:39:21 gilles Exp $	*/

/*
 * Copyright (c) 2013 Gilles Chehade <gilles@poolp.org>
 *
 * Permission to use, copy, modify, and distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

#ifndef nitems
#define nitems(_a) (sizeof((_a)) / sizeof((_a)[0]))
#endif

#define	SMTPD_TABLENAME_SIZE	 (64 + 1)
#define	SMTPD_TAG_SIZE		 (32 + 1)

/* buffer sizes for email address components */
#define SMTPD_MAXLOCALPARTSIZE	 (255 + 1)
#define SMTPD_MAXDOMAINPARTSIZE	 (255 + 1)
#define	SMTPD_MAXMAILADDRSIZE	 (255 + 1)

/* buffer size for virtual username (can be email addresses) */
#define	SMTPD_VUSERNAME_SIZE	 (255 + 1)

#ifndef SMTPD_USER
#define SMTPD_USER		"_smtpd"
#endif
#ifndef PATH_CHROOT
#define PATH_CHROOT		"/var/empty"
#endif
#ifndef SMTPD_QUEUE_USER
#define SMTPD_QUEUE_USER	"_smtpq"
#endif
#ifndef SMTPD_QUEUE_GROUP
#define SMTPD_QUEUE_GROUP	"_smtpq"
#endif
#ifndef PATH_SPOOL
#define PATH_SPOOL		"/var/spool/smtpd"
#endif

#define TAG_CHAR		'+'


/* sendmail compat */

#define	EX_OK			0
#define	EX_NOHOST		68
#define	EX_UNAVAILABLE		69
#define	EX_SOFTWARE		70
#define	EX_TEMPFAIL		75
