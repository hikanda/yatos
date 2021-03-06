/* -*- mode: C; coding:utf-8 -*- */
/**********************************************************************/
/*  Yet Another Teachable Operating System                            */
/*  Copyright 2016 Takeharu KATO                                      */
/*                                                                    */
/*  bss clear routines                                                */
/*                                                                    */
/**********************************************************************/

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

extern uintptr_t _bss_start;
extern uintptr_t _bss_end;
 
/** BSS領域を初期化する
 */
void
_clear_bss(void) {
	uintptr_t *start = &_bss_start;
	uintptr_t *end =   &_bss_end;

	/*
	 * Clear BSS
	 */
	while(start<end) 
		*start++ = 0x0;
}
