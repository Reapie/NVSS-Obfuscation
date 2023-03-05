## Instruction Overlapping

Some opcodes can contain others, this is the easiest to do when you have a huge argument which you can control.

You basically want to build a chain of linked instructions, but that only leaves two bytes of actual content per instruction, so it slighly limits your capabilities.

I chose NOPs because they are very obvious and also used in the paper I copied (https://lucris.lub.lu.se/ws/portalfiles/portal/78489284/nop_obfs.pdf), but there are a few other options.

Cyberchef can help immensely when crafting these embedded instructions:
https://gchq.github.io/CyberChef/#recipe=Swap_endianness('Hex',4,true)Disassemble_x86('64','Full%20x86%20architecture',16,0,false,false)&input=MDNlYmMwMzEKMHg5MDkwYzBmZg

But for some reason it disassembles `03eb` to `jmp 7` not `jmp 5`, but the basic principle still works.

To build this demo, just run `make` in this directory and make sure you have nasm installed before.



