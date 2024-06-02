/*-------------------------------------------------------------------------
 *
 * pg_collation_d.h
 *    Macro definitions for pg_collation
 *
 * Portions Copyright (c) 1996-2018, PostgreSQL Global Development Group
 * Portions Copyright (c) 1994, Regents of the University of California
 *
 * NOTES
 *  ******************************
 *  *** DO NOT EDIT THIS FILE! ***
 *  ******************************
 *
 *  It has been GENERATED by src/backend/catalog/genbki.pl
 *
 *-------------------------------------------------------------------------
 */
#ifndef PG_COLLATION_D_H
#define PG_COLLATION_D_H

#define CollationRelationId 3456

#define Anum_pg_collation_collname 1
#define Anum_pg_collation_collnamespace 2
#define Anum_pg_collation_collowner 3
#define Anum_pg_collation_collprovider 4
#define Anum_pg_collation_collencoding 5
#define Anum_pg_collation_collcollate 6
#define Anum_pg_collation_collctype 7
#define Anum_pg_collation_collversion 8

#define Natts_pg_collation 8


#define COLLPROVIDER_DEFAULT	'd'
#define COLLPROVIDER_ICU		'i'
#define COLLPROVIDER_LIBC		'c'

#define DEFAULT_COLLATION_OID 100
#define C_COLLATION_OID 950
#define POSIX_COLLATION_OID 951

#endif							/* PG_COLLATION_D_H */
