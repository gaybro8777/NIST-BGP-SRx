/**
 * This software was developed at the National Institute of Standards and
 * Technology by employees of the Federal Government in the course of
 * their official duties. Pursuant to title 17 Section 105 of the United
 * States Code this software is not subject to copyright protection and
 * is in the public domain.
 * 
 * NIST assumes no responsibility whatsoever for its use by other parties,
 * and makes no guarantees, expressed or implied, about its quality,
 * reliability, or any other characteristic.
 * 
 * We would appreciate acknowledgement if the software is used.
 * 
 * NIST ALLOWS FREE USE OF THIS SOFTWARE IN ITS "AS IS" CONDITION AND
 * DISCLAIM ANY LIABILITY OF ANY KIND FOR ANY DAMAGES WHATSOEVER RESULTING
 * FROM THE USE OF THIS SOFTWARE.
 * 
 * 
 * This software might use libraries that are under GNU public license or
 * other licenses. Please refer to the licenses of all libraries required 
 * by thsi software.
 *
 */
/* 
 * File:   crc32.h
 * Author: borchert
 *
 * Created on May 1, 2011, 8:57 PM
 */

#include <stdint.h>

#ifndef CRC32_H
#define	CRC32_H

#ifdef	__cplusplus
extern "C" {
#endif

uint32_t crc32(uint8_t *pData, uint32_t uSize);

#ifdef	__cplusplus
}
#endif

#endif	/* CRC32_H */

