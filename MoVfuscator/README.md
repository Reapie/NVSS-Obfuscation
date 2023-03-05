## MoVfuscator

https://github.com/xoreaxeaxeax/movfuscator

https://www.youtube.com/watch?v=R7EEoWg6Ekk

xoreaxeax does awesome stuff and has many interesting talks, his MoVfuscator project makes use of a "basic" building block to turn C code into only MOV instructions.

https://www.xorpd.net/pages/xchg_rax/snip_2c.html


```x86asm
mov      qword [rbx + 8*rcx],0
mov      qword [rbx + 8*rdx],1
mov      rax,qword [rbx + 8*rcx]

mov      qword [rbx],rsi
mov      qword [rbx + 8],rdi
mov      rax,qword [rbx + 8*rax]
```

This piece of code is the basis of the MoVfuscator and moves rsi or rdi into rax depending on whether rcx and rdx are different or not.
It is equivalent to this ternary construct: `rax = (rcx == rdx) ? rdi : rsi`

As already mentioned, it is pure novelty and is basically never used in real-world applications but still very intersting.

The input file for this sample was: `../simple_program.c`