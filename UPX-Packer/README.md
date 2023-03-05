## UPX Packer

One again, enterprise products are way out of my budget.
UPX has a built in unpacker and signs binaries it packs (`strings simple_packed | grep UPX`).

The input for the packer was once again ../simple_program.

Looking at the binary in some Reverse Engineering Tool reveals how good Packers are, but UPX has a builtin decompress function.
To use it just run `upx -d <file>`, but make sure you don't run it on the original file because it decompresses in-place.