	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 14, 0	sdk_version 14, 0
	.globl	_main                           ; -- Begin function main
	.p2align	2
_main:                                  ; @main
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #32
	.cfi_def_cfa_offset 32
	stp	x29, x30, [sp, #16]             ; 16-byte Folded Spill
	add	x29, sp, #16
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	stur	wzr, [x29, #-4]
	adrp	x0, l_.str@PAGE
	add	x0, x0, l_.str@PAGEOFF
	bl	_printf
	bl	_getchar
	sturb	w0, [x29, #-5]
	ldursb	w10, [x29, #-5]
	mov	x9, sp
                                        ; implicit-def: $x8
	mov	x8, x10
	str	x8, [x9]
	adrp	x0, l_.str.1@PAGE
	add	x0, x0, l_.str.1@PAGEOFF
	bl	_printf
	ldursb	w0, [x29, #-5]
	bl	_isalpha
	subs	w8, w0, #0
	cset	w8, ne
	tbnz	w8, #0, LBB0_3
	b	LBB0_1
LBB0_1:
	ldursb	w0, [x29, #-5]
	bl	_isdigit
	subs	w8, w0, #0
	cset	w8, ne
	tbnz	w8, #0, LBB0_3
	b	LBB0_2
LBB0_2:
	adrp	x0, l_.str.2@PAGE
	add	x0, x0, l_.str.2@PAGEOFF
	bl	_printf
	b	LBB0_3
LBB0_3:
	ldursb	w0, [x29, #-5]
	bl	_isupper
	subs	w8, w0, #0
	cset	w8, eq
	tbnz	w8, #0, LBB0_5
	b	LBB0_4
LBB0_4:
	adrp	x0, l_.str.3@PAGE
	add	x0, x0, l_.str.3@PAGEOFF
	bl	_printf
	b	LBB0_6
LBB0_5:
	adrp	x0, l_.str.4@PAGE
	add	x0, x0, l_.str.4@PAGEOFF
	bl	_printf
	b	LBB0_6
LBB0_6:
	mov	w0, #0
	ldp	x29, x30, [sp, #16]             ; 16-byte Folded Reload
	add	sp, sp, #32
	ret
	.cfi_endproc
                                        ; -- End function
	.section	__TEXT,__cstring,cstring_literals
l_.str:                                 ; @.str
	.asciz	"Enter any character: "

l_.str.1:                               ; @.str.1
	.asciz	"'%c' is "

l_.str.2:                               ; @.str.2
	.asciz	"not a valid character\n"

l_.str.3:                               ; @.str.3
	.asciz	"uppercase\n"

l_.str.4:                               ; @.str.4
	.asciz	"lowercase\n"

.subsections_via_symbols
