## Control Flow

This is a simple, manually made example of control-flow obfuscation.
Commercial obfuscators are way better but they usually don't have free trial versions as that would let basically anybody create well obfuscated malware, this is why I just did it manually.

It uses multiple techniques:

- Control Flow Flattening - Global State Variable used in switch hides the execution order
- (Slight) Opaque Predicates - Argc will always be >= 1 but decompilers don't have this knowledge programmed into them
- Dead Code - There are comparisons and data that are never used

To make sure that the compiler doesn't optimise anything away, make sure to compile with no optimisation (`-O0`)

The "original" main function is commented out, but the differnece in readability is obvious.

Because the obfuscation is very basic, it can easily be solved using symbolic execution (`solve.py`)