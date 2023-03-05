bits 64
global overlapping

overlapping:
    xor eax, eax
    nop dword [rax+0x03ebc031] ; xor eax, eax ; jmp 0x5
    nop dword [rax+0x9090c0ff] ; inc eax ; nop ; nop
	;nop dword [rax-0x3f009970] ; same as above but overflowed into negative
    ret