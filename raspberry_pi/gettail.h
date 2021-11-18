#ifndef GETTAIL_H
#define	GETTAIL_H

#ifdef	__cplusplus
extern "C" {
#endif

	#include <stdio.h> /* file */

	/**
	 * @param path File path for tailing 
	 * @param ft File position of the end
	 */
	void initTail(const char* path, fpos_t* ft);

	/**
	 * @param fp File pointer
	 * @param ft File position of the end
	 * @param buffer Buffer for read
	 * @param max_size Buffer size
	 * @return read size
	 */
	long getTail(const char* path, fpos_t* ft, unsigned char* buffer, short max_size);

#ifdef	__cplusplus
}
#endif

#endif	/* GETTAIL_H */
