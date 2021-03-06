// Generated by sandbox/linux/bpf_dsl/golden/generate.py

#ifndef SANDBOX_LINUX_BPF_DSL_GOLDEN_GOLDEN_FILES_H_
#define SANDBOX_LINUX_BPF_DSL_GOLDEN_GOLDEN_FILES_H_

namespace sandbox {
namespace bpf_dsl {
namespace golden {

struct Golden {
  const char* i386_dump;
  const char* x86_64_dump;
};

const Golden kArgSizePolicy = {
  "  1) LOAD 4  // Architecture\n\
  2) if A == 0x40000003; then JMP 3 else JMP 10\n\
  3) LOAD 0  // System call number\n\
  4) if A & 0x40000000; then JMP 10 else JMP 5\n\
  5) if A >= 0x7b; then JMP 6 else JMP 7\n\
  6) if A >= 0x401; then JMP 15 else JMP 14\n\
  7) if A >= 0x7a; then JMP 8 else JMP 14\n\
  8) LOAD 20  // Argument 0 (MSB)\n\
  9) if A == 0x0; then JMP 11 else JMP 10\n\
 10) RET 0x0  // Kill\n\
 11) LOAD 16  // Argument 0 (LSB)\n\
 12) if A == 0xdeadbeef; then JMP 13 else JMP 14\n\
 13) RET 0x50001  // errno = 1\n\
 14) RET 0x7fff0000  // Allowed\n\
 15) RET 0x50026  // errno = 38\n\
",
  "  1) LOAD 4  // Architecture\n\
  2) if A == 0xc000003e; then JMP 3 else JMP 5\n\
  3) LOAD 0  // System call number\n\
  4) if A & 0x40000000; then JMP 5 else JMP 6\n\
  5) RET 0x0  // Kill\n\
  6) if A >= 0x40; then JMP 7 else JMP 8\n\
  7) if A >= 0x401; then JMP 15 else JMP 14\n\
  8) if A >= 0x3f; then JMP 9 else JMP 14\n\
  9) LOAD 20  // Argument 0 (MSB)\n\
 10) if A == 0xdeadbeef; then JMP 11 else JMP 14\n\
 11) LOAD 16  // Argument 0 (LSB)\n\
 12) if A == 0xdeadbeef; then JMP 13 else JMP 14\n\
 13) RET 0x50001  // errno = 1\n\
 14) RET 0x7fff0000  // Allowed\n\
 15) RET 0x50026  // errno = 38\n\
",
};

const Golden kBasicPolicy = {
  "  1) LOAD 4  // Architecture\n\
  2) if A == 0x40000003; then JMP 3 else JMP 20\n\
  3) LOAD 0  // System call number\n\
  4) if A & 0x40000000; then JMP 20 else JMP 5\n\
  5) if A >= 0x84; then JMP 6 else JMP 8\n\
  6) if A >= 0x85; then JMP 7 else JMP 10\n\
  7) if A >= 0x401; then JMP 22 else JMP 21\n\
  8) if A >= 0x17; then JMP 9 else JMP 21\n\
  9) if A >= 0x18; then JMP 21 else JMP 16\n\
 10) LOAD 20  // Argument 0 (MSB)\n\
 11) if A == 0x0; then JMP 12 else JMP 20\n\
 12) LOAD 16  // Argument 0 (LSB)\n\
 13) if A == 0x0; then JMP 15 else JMP 14\n\
 14) RET 0x50016  // errno = 22\n\
 15) RET 0x50001  // errno = 1\n\
 16) LOAD 20  // Argument 0 (MSB)\n\
 17) if A == 0x0; then JMP 18 else JMP 20\n\
 18) LOAD 16  // Argument 0 (LSB)\n\
 19) if A == 0x2a; then JMP 21 else JMP 20\n\
 20) RET 0x0  // Kill\n\
 21) RET 0x7fff0000  // Allowed\n\
 22) RET 0x50026  // errno = 38\n\
",
  "  1) LOAD 4  // Architecture\n\
  2) if A == 0xc000003e; then JMP 3 else JMP 26\n\
  3) LOAD 0  // System call number\n\
  4) if A & 0x40000000; then JMP 26 else JMP 5\n\
  5) if A >= 0x79; then JMP 6 else JMP 8\n\
  6) if A >= 0x7a; then JMP 7 else JMP 10\n\
  7) if A >= 0x401; then JMP 28 else JMP 27\n\
  8) if A >= 0x69; then JMP 9 else JMP 27\n\
  9) if A >= 0x6a; then JMP 27 else JMP 19\n\
 10) LOAD 20  // Argument 0 (MSB)\n\
 11) if A == 0x0; then JMP 15 else JMP 12\n\
 12) if A == 0xffffffff; then JMP 13 else JMP 26\n\
 13) LOAD 16  // Argument 0 (LSB)\n\
 14) if A & 0x80000000; then JMP 15 else JMP 26\n\
 15) LOAD 16  // Argument 0 (LSB)\n\
 16) if A == 0x0; then JMP 18 else JMP 17\n\
 17) RET 0x50016  // errno = 22\n\
 18) RET 0x50001  // errno = 1\n\
 19) LOAD 20  // Argument 0 (MSB)\n\
 20) if A == 0x0; then JMP 24 else JMP 21\n\
 21) if A == 0xffffffff; then JMP 22 else JMP 26\n\
 22) LOAD 16  // Argument 0 (LSB)\n\
 23) if A & 0x80000000; then JMP 24 else JMP 26\n\
 24) LOAD 16  // Argument 0 (LSB)\n\
 25) if A == 0x2a; then JMP 27 else JMP 26\n\
 26) RET 0x0  // Kill\n\
 27) RET 0x7fff0000  // Allowed\n\
 28) RET 0x50026  // errno = 38\n\
",
};

const Golden kBooleanLogicPolicy = {
  nullptr,
  "  1) LOAD 4  // Architecture\n\
  2) if A == 0xc000003e; then JMP 3 else JMP 34\n\
  3) LOAD 0  // System call number\n\
  4) if A & 0x40000000; then JMP 34 else JMP 5\n\
  5) if A >= 0x36; then JMP 6 else JMP 7\n\
  6) if A >= 0x401; then JMP 40 else JMP 39\n\
  7) if A >= 0x35; then JMP 8 else JMP 39\n\
  8) LOAD 20  // Argument 0 (MSB)\n\
  9) if A == 0x0; then JMP 13 else JMP 10\n\
 10) if A == 0xffffffff; then JMP 11 else JMP 34\n\
 11) LOAD 16  // Argument 0 (LSB)\n\
 12) if A & 0x80000000; then JMP 13 else JMP 34\n\
 13) LOAD 16  // Argument 0 (LSB)\n\
 14) if A == 0x1; then JMP 15 else JMP 37\n\
 15) LOAD 28  // Argument 1 (MSB)\n\
 16) if A == 0x0; then JMP 20 else JMP 17\n\
 17) if A == 0xffffffff; then JMP 18 else JMP 34\n\
 18) LOAD 24  // Argument 1 (LSB)\n\
 19) if A & 0x80000000; then JMP 20 else JMP 34\n\
 20) LOAD 24  // Argument 1 (LSB)\n\
 21) if A == 0x1; then JMP 29 else JMP 22\n\
 22) LOAD 28  // Argument 1 (MSB)\n\
 23) if A == 0x0; then JMP 27 else JMP 24\n\
 24) if A == 0xffffffff; then JMP 25 else JMP 34\n\
 25) LOAD 24  // Argument 1 (LSB)\n\
 26) if A & 0x80000000; then JMP 27 else JMP 34\n\
 27) LOAD 24  // Argument 1 (LSB)\n\
 28) if A == 0x2; then JMP 29 else JMP 37\n\
 29) LOAD 36  // Argument 2 (MSB)\n\
 30) if A == 0x0; then JMP 35 else JMP 31\n\
 31) if A == 0xffffffff; then JMP 32 else JMP 34\n\
 32) LOAD 32  // Argument 2 (LSB)\n\
 33) if A & 0x80000000; then JMP 35 else JMP 34\n\
 34) RET 0x0  // Kill\n\
 35) LOAD 32  // Argument 2 (LSB)\n\
 36) if A == 0x0; then JMP 38 else JMP 37\n\
 37) RET 0x50016  // errno = 22\n\
 38) RET 0x50001  // errno = 1\n\
 39) RET 0x7fff0000  // Allowed\n\
 40) RET 0x50026  // errno = 38\n\
",
};

const Golden kElseIfPolicy = {
  "  1) LOAD 4  // Architecture\n\
  2) if A == 0x40000003; then JMP 3 else JMP 18\n\
  3) LOAD 0  // System call number\n\
  4) if A & 0x40000000; then JMP 18 else JMP 5\n\
  5) if A >= 0x18; then JMP 6 else JMP 7\n\
  6) if A >= 0x401; then JMP 26 else JMP 25\n\
  7) if A >= 0x17; then JMP 8 else JMP 25\n\
  8) LOAD 20  // Argument 0 (MSB)\n\
  9) if A == 0x0; then JMP 10 else JMP 18\n\
 10) LOAD 16  // Argument 0 (LSB)\n\
 11) if A & 0xfff; then JMP 12 else JMP 24\n\
 12) LOAD 20  // Argument 0 (MSB)\n\
 13) if A == 0x0; then JMP 14 else JMP 18\n\
 14) LOAD 16  // Argument 0 (LSB)\n\
 15) if A & 0xff0; then JMP 16 else JMP 23\n\
 16) LOAD 20  // Argument 0 (MSB)\n\
 17) if A == 0x0; then JMP 19 else JMP 18\n\
 18) RET 0x0  // Kill\n\
 19) LOAD 16  // Argument 0 (LSB)\n\
 20) if A & 0xf00; then JMP 21 else JMP 22\n\
 21) RET 0x5000d  // errno = 13\n\
 22) RET 0x50011  // errno = 17\n\
 23) RET 0x50016  // errno = 22\n\
 24) RET 0x50000  // errno = 0\n\
 25) RET 0x7fff0000  // Allowed\n\
 26) RET 0x50026  // errno = 38\n\
",
  "  1) LOAD 4  // Architecture\n\
  2) if A == 0xc000003e; then JMP 3 else JMP 27\n\
  3) LOAD 0  // System call number\n\
  4) if A & 0x40000000; then JMP 27 else JMP 5\n\
  5) if A >= 0x6a; then JMP 6 else JMP 7\n\
  6) if A >= 0x401; then JMP 35 else JMP 34\n\
  7) if A >= 0x69; then JMP 8 else JMP 34\n\
  8) LOAD 20  // Argument 0 (MSB)\n\
  9) if A == 0x0; then JMP 13 else JMP 10\n\
 10) if A == 0xffffffff; then JMP 11 else JMP 27\n\
 11) LOAD 16  // Argument 0 (LSB)\n\
 12) if A & 0x80000000; then JMP 13 else JMP 27\n\
 13) LOAD 16  // Argument 0 (LSB)\n\
 14) if A & 0xfff; then JMP 15 else JMP 33\n\
 15) LOAD 20  // Argument 0 (MSB)\n\
 16) if A == 0x0; then JMP 20 else JMP 17\n\
 17) if A == 0xffffffff; then JMP 18 else JMP 27\n\
 18) LOAD 16  // Argument 0 (LSB)\n\
 19) if A & 0x80000000; then JMP 20 else JMP 27\n\
 20) LOAD 16  // Argument 0 (LSB)\n\
 21) if A & 0xff0; then JMP 22 else JMP 32\n\
 22) LOAD 20  // Argument 0 (MSB)\n\
 23) if A == 0x0; then JMP 28 else JMP 24\n\
 24) if A == 0xffffffff; then JMP 25 else JMP 27\n\
 25) LOAD 16  // Argument 0 (LSB)\n\
 26) if A & 0x80000000; then JMP 28 else JMP 27\n\
 27) RET 0x0  // Kill\n\
 28) LOAD 16  // Argument 0 (LSB)\n\
 29) if A & 0xf00; then JMP 30 else JMP 31\n\
 30) RET 0x5000d  // errno = 13\n\
 31) RET 0x50011  // errno = 17\n\
 32) RET 0x50016  // errno = 22\n\
 33) RET 0x50000  // errno = 0\n\
 34) RET 0x7fff0000  // Allowed\n\
 35) RET 0x50026  // errno = 38\n\
",
};

const Golden kMaskingPolicy = {
  "  1) LOAD 4  // Architecture\n\
  2) if A == 0x40000003; then JMP 3 else JMP 24\n\
  3) LOAD 0  // System call number\n\
  4) if A & 0x40000000; then JMP 24 else JMP 5\n\
  5) if A >= 0x2f; then JMP 6 else JMP 9\n\
  6) if A >= 0x3a; then JMP 7 else JMP 8\n\
  7) if A >= 0x401; then JMP 30 else JMP 29\n\
  8) if A >= 0x39; then JMP 12 else JMP 29\n\
  9) if A >= 0x18; then JMP 10 else JMP 11\n\
 10) if A >= 0x2e; then JMP 17 else JMP 29\n\
 11) if A >= 0x17; then JMP 22 else JMP 29\n\
 12) LOAD 20  // Argument 0 (MSB)\n\
 13) if A == 0x0; then JMP 14 else JMP 24\n\
 14) LOAD 16  // Argument 0 (LSB)\n\
 15) A := A & 0xa5\n\
 16) if A == 0xa0; then JMP 28 else JMP 27\n\
 17) LOAD 20  // Argument 0 (MSB)\n\
 18) if A == 0x0; then JMP 19 else JMP 24\n\
 19) LOAD 16  // Argument 0 (LSB)\n\
 20) A := A & 0xf0\n\
 21) if A == 0xf0; then JMP 28 else JMP 27\n\
 22) LOAD 20  // Argument 0 (MSB)\n\
 23) if A == 0x0; then JMP 25 else JMP 24\n\
 24) RET 0x0  // Kill\n\
 25) LOAD 16  // Argument 0 (LSB)\n\
 26) if A & 0xf; then JMP 27 else JMP 28\n\
 27) RET 0x5000d  // errno = 13\n\
 28) RET 0x50016  // errno = 22\n\
 29) RET 0x7fff0000  // Allowed\n\
 30) RET 0x50026  // errno = 38\n\
",
  "  1) LOAD 4  // Architecture\n\
  2) if A == 0xc000003e; then JMP 3 else JMP 32\n\
  3) LOAD 0  // System call number\n\
  4) if A & 0x40000000; then JMP 32 else JMP 5\n\
  5) if A >= 0x6b; then JMP 6 else JMP 9\n\
  6) if A >= 0x6e; then JMP 7 else JMP 8\n\
  7) if A >= 0x401; then JMP 38 else JMP 37\n\
  8) if A >= 0x6d; then JMP 11 else JMP 37\n\
  9) if A >= 0x69; then JMP 10 else JMP 37\n\
 10) if A >= 0x6a; then JMP 19 else JMP 27\n\
 11) LOAD 20  // Argument 0 (MSB)\n\
 12) if A == 0x0; then JMP 16 else JMP 13\n\
 13) if A == 0xffffffff; then JMP 14 else JMP 32\n\
 14) LOAD 16  // Argument 0 (LSB)\n\
 15) if A & 0x80000000; then JMP 16 else JMP 32\n\
 16) LOAD 16  // Argument 0 (LSB)\n\
 17) A := A & 0xa5\n\
 18) if A == 0xa0; then JMP 36 else JMP 35\n\
 19) LOAD 20  // Argument 0 (MSB)\n\
 20) if A == 0x0; then JMP 24 else JMP 21\n\
 21) if A == 0xffffffff; then JMP 22 else JMP 32\n\
 22) LOAD 16  // Argument 0 (LSB)\n\
 23) if A & 0x80000000; then JMP 24 else JMP 32\n\
 24) LOAD 16  // Argument 0 (LSB)\n\
 25) A := A & 0xf0\n\
 26) if A == 0xf0; then JMP 36 else JMP 35\n\
 27) LOAD 20  // Argument 0 (MSB)\n\
 28) if A == 0x0; then JMP 33 else JMP 29\n\
 29) if A == 0xffffffff; then JMP 30 else JMP 32\n\
 30) LOAD 16  // Argument 0 (LSB)\n\
 31) if A & 0x80000000; then JMP 33 else JMP 32\n\
 32) RET 0x0  // Kill\n\
 33) LOAD 16  // Argument 0 (LSB)\n\
 34) if A & 0xf; then JMP 35 else JMP 36\n\
 35) RET 0x5000d  // errno = 13\n\
 36) RET 0x50016  // errno = 22\n\
 37) RET 0x7fff0000  // Allowed\n\
 38) RET 0x50026  // errno = 38\n\
",
};

const Golden kMoreBooleanLogicPolicy = {
  "  1) LOAD 4  // Architecture\n\
  2) if A == 0x40000003; then JMP 3 else JMP 30\n\
  3) LOAD 0  // System call number\n\
  4) if A & 0x40000000; then JMP 30 else JMP 5\n\
  5) if A >= 0xa5; then JMP 6 else JMP 7\n\
  6) if A >= 0x401; then JMP 37 else JMP 36\n\
  7) if A >= 0xa4; then JMP 8 else JMP 36\n\
  8) LOAD 20  // Argument 0 (MSB)\n\
  9) if A == 0x0; then JMP 10 else JMP 30\n\
 10) LOAD 16  // Argument 0 (LSB)\n\
 11) if A == 0x0; then JMP 35 else JMP 12\n\
 12) LOAD 28  // Argument 1 (MSB)\n\
 13) if A == 0x0; then JMP 14 else JMP 30\n\
 14) LOAD 24  // Argument 1 (LSB)\n\
 15) if A == 0x0; then JMP 35 else JMP 16\n\
 16) LOAD 36  // Argument 2 (MSB)\n\
 17) if A == 0x0; then JMP 18 else JMP 30\n\
 18) LOAD 32  // Argument 2 (LSB)\n\
 19) if A == 0x0; then JMP 35 else JMP 20\n\
 20) LOAD 20  // Argument 0 (MSB)\n\
 21) if A == 0x0; then JMP 22 else JMP 30\n\
 22) LOAD 16  // Argument 0 (LSB)\n\
 23) if A == 0x1; then JMP 24 else JMP 33\n\
 24) LOAD 28  // Argument 1 (MSB)\n\
 25) if A == 0x0; then JMP 26 else JMP 30\n\
 26) LOAD 24  // Argument 1 (LSB)\n\
 27) if A == 0x1; then JMP 28 else JMP 33\n\
 28) LOAD 36  // Argument 2 (MSB)\n\
 29) if A == 0x0; then JMP 31 else JMP 30\n\
 30) RET 0x0  // Kill\n\
 31) LOAD 32  // Argument 2 (LSB)\n\
 32) if A == 0x1; then JMP 34 else JMP 33\n\
 33) RET 0x50016  // errno = 22\n\
 34) RET 0x5000b  // errno = 11\n\
 35) RET 0x50001  // errno = 1\n\
 36) RET 0x7fff0000  // Allowed\n\
 37) RET 0x50026  // errno = 38\n\
",
  "  1) LOAD 4  // Architecture\n\
  2) if A == 0xc000003e; then JMP 3 else JMP 48\n\
  3) LOAD 0  // System call number\n\
  4) if A & 0x40000000; then JMP 48 else JMP 5\n\
  5) if A >= 0x76; then JMP 6 else JMP 7\n\
  6) if A >= 0x401; then JMP 55 else JMP 54\n\
  7) if A >= 0x75; then JMP 8 else JMP 54\n\
  8) LOAD 20  // Argument 0 (MSB)\n\
  9) if A == 0x0; then JMP 13 else JMP 10\n\
 10) if A == 0xffffffff; then JMP 11 else JMP 48\n\
 11) LOAD 16  // Argument 0 (LSB)\n\
 12) if A & 0x80000000; then JMP 13 else JMP 48\n\
 13) LOAD 16  // Argument 0 (LSB)\n\
 14) if A == 0x0; then JMP 53 else JMP 15\n\
 15) LOAD 28  // Argument 1 (MSB)\n\
 16) if A == 0x0; then JMP 20 else JMP 17\n\
 17) if A == 0xffffffff; then JMP 18 else JMP 48\n\
 18) LOAD 24  // Argument 1 (LSB)\n\
 19) if A & 0x80000000; then JMP 20 else JMP 48\n\
 20) LOAD 24  // Argument 1 (LSB)\n\
 21) if A == 0x0; then JMP 53 else JMP 22\n\
 22) LOAD 36  // Argument 2 (MSB)\n\
 23) if A == 0x0; then JMP 27 else JMP 24\n\
 24) if A == 0xffffffff; then JMP 25 else JMP 48\n\
 25) LOAD 32  // Argument 2 (LSB)\n\
 26) if A & 0x80000000; then JMP 27 else JMP 48\n\
 27) LOAD 32  // Argument 2 (LSB)\n\
 28) if A == 0x0; then JMP 53 else JMP 29\n\
 29) LOAD 20  // Argument 0 (MSB)\n\
 30) if A == 0x0; then JMP 34 else JMP 31\n\
 31) if A == 0xffffffff; then JMP 32 else JMP 48\n\
 32) LOAD 16  // Argument 0 (LSB)\n\
 33) if A & 0x80000000; then JMP 34 else JMP 48\n\
 34) LOAD 16  // Argument 0 (LSB)\n\
 35) if A == 0x1; then JMP 36 else JMP 51\n\
 36) LOAD 28  // Argument 1 (MSB)\n\
 37) if A == 0x0; then JMP 41 else JMP 38\n\
 38) if A == 0xffffffff; then JMP 39 else JMP 48\n\
 39) LOAD 24  // Argument 1 (LSB)\n\
 40) if A & 0x80000000; then JMP 41 else JMP 48\n\
 41) LOAD 24  // Argument 1 (LSB)\n\
 42) if A == 0x1; then JMP 43 else JMP 51\n\
 43) LOAD 36  // Argument 2 (MSB)\n\
 44) if A == 0x0; then JMP 49 else JMP 45\n\
 45) if A == 0xffffffff; then JMP 46 else JMP 48\n\
 46) LOAD 32  // Argument 2 (LSB)\n\
 47) if A & 0x80000000; then JMP 49 else JMP 48\n\
 48) RET 0x0  // Kill\n\
 49) LOAD 32  // Argument 2 (LSB)\n\
 50) if A == 0x1; then JMP 52 else JMP 51\n\
 51) RET 0x50016  // errno = 22\n\
 52) RET 0x5000b  // errno = 11\n\
 53) RET 0x50001  // errno = 1\n\
 54) RET 0x7fff0000  // Allowed\n\
 55) RET 0x50026  // errno = 38\n\
",
};

const Golden kNegativeConstantsPolicy = {
  "  1) LOAD 4  // Architecture\n\
  2) if A == 0x40000003; then JMP 3 else JMP 10\n\
  3) LOAD 0  // System call number\n\
  4) if A & 0x40000000; then JMP 10 else JMP 5\n\
  5) if A >= 0x38; then JMP 6 else JMP 7\n\
  6) if A >= 0x401; then JMP 15 else JMP 14\n\
  7) if A >= 0x37; then JMP 8 else JMP 14\n\
  8) LOAD 20  // Argument 0 (MSB)\n\
  9) if A == 0x0; then JMP 11 else JMP 10\n\
 10) RET 0x0  // Kill\n\
 11) LOAD 16  // Argument 0 (LSB)\n\
 12) if A == 0xfffffec6; then JMP 13 else JMP 14\n\
 13) RET 0x50001  // errno = 1\n\
 14) RET 0x7fff0000  // Allowed\n\
 15) RET 0x50026  // errno = 38\n\
",
  "  1) LOAD 4  // Architecture\n\
  2) if A == 0xc000003e; then JMP 3 else JMP 13\n\
  3) LOAD 0  // System call number\n\
  4) if A & 0x40000000; then JMP 13 else JMP 5\n\
  5) if A >= 0x49; then JMP 6 else JMP 7\n\
  6) if A >= 0x401; then JMP 18 else JMP 17\n\
  7) if A >= 0x48; then JMP 8 else JMP 17\n\
  8) LOAD 20  // Argument 0 (MSB)\n\
  9) if A == 0x0; then JMP 14 else JMP 10\n\
 10) if A == 0xffffffff; then JMP 11 else JMP 13\n\
 11) LOAD 16  // Argument 0 (LSB)\n\
 12) if A & 0x80000000; then JMP 14 else JMP 13\n\
 13) RET 0x0  // Kill\n\
 14) LOAD 16  // Argument 0 (LSB)\n\
 15) if A == 0xfffffec6; then JMP 16 else JMP 17\n\
 16) RET 0x50001  // errno = 1\n\
 17) RET 0x7fff0000  // Allowed\n\
 18) RET 0x50026  // errno = 38\n\
",
};

const Golden kSwitchPolicy = {
  "  1) LOAD 4  // Architecture\n\
  2) if A == 0x40000003; then JMP 3 else JMP 28\n\
  3) LOAD 0  // System call number\n\
  4) if A & 0x40000000; then JMP 28 else JMP 5\n\
  5) if A >= 0x38; then JMP 6 else JMP 7\n\
  6) if A >= 0x401; then JMP 34 else JMP 33\n\
  7) if A >= 0x37; then JMP 8 else JMP 33\n\
  8) LOAD 28  // Argument 1 (MSB)\n\
  9) if A == 0x0; then JMP 10 else JMP 28\n\
 10) LOAD 24  // Argument 1 (LSB)\n\
 11) if A == 0x3; then JMP 32 else JMP 12\n\
 12) LOAD 28  // Argument 1 (MSB)\n\
 13) if A == 0x0; then JMP 14 else JMP 28\n\
 14) LOAD 24  // Argument 1 (LSB)\n\
 15) if A == 0x1; then JMP 32 else JMP 16\n\
 16) LOAD 28  // Argument 1 (MSB)\n\
 17) if A == 0x0; then JMP 18 else JMP 28\n\
 18) LOAD 24  // Argument 1 (LSB)\n\
 19) if A == 0x2; then JMP 26 else JMP 20\n\
 20) LOAD 28  // Argument 1 (MSB)\n\
 21) if A == 0x0; then JMP 22 else JMP 28\n\
 22) LOAD 24  // Argument 1 (LSB)\n\
 23) if A == 0x4; then JMP 25 else JMP 24\n\
 24) RET 0x5000d  // errno = 13\n\
 25) RET 0x50001  // errno = 1\n\
 26) LOAD 36  // Argument 2 (MSB)\n\
 27) if A == 0x0; then JMP 29 else JMP 28\n\
 28) RET 0x0  // Kill\n\
 29) LOAD 32  // Argument 2 (LSB)\n\
 30) if A == 0x80000; then JMP 33 else JMP 31\n\
 31) RET 0x50016  // errno = 22\n\
 32) RET 0x50002  // errno = 2\n\
 33) RET 0x7fff0000  // Allowed\n\
 34) RET 0x50026  // errno = 38\n\
",
  "  1) LOAD 4  // Architecture\n\
  2) if A == 0xc000003e; then JMP 3 else JMP 34\n\
  3) LOAD 0  // System call number\n\
  4) if A & 0x40000000; then JMP 34 else JMP 5\n\
  5) if A >= 0x49; then JMP 6 else JMP 7\n\
  6) if A >= 0x401; then JMP 46 else JMP 45\n\
  7) if A >= 0x48; then JMP 8 else JMP 45\n\
  8) LOAD 28  // Argument 1 (MSB)\n\
  9) if A == 0x0; then JMP 13 else JMP 10\n\
 10) if A == 0xffffffff; then JMP 11 else JMP 34\n\
 11) LOAD 24  // Argument 1 (LSB)\n\
 12) if A & 0x80000000; then JMP 13 else JMP 34\n\
 13) LOAD 24  // Argument 1 (LSB)\n\
 14) if A == 0x3; then JMP 44 else JMP 15\n\
 15) LOAD 28  // Argument 1 (MSB)\n\
 16) if A == 0x0; then JMP 20 else JMP 17\n\
 17) if A == 0xffffffff; then JMP 18 else JMP 34\n\
 18) LOAD 24  // Argument 1 (LSB)\n\
 19) if A & 0x80000000; then JMP 20 else JMP 34\n\
 20) LOAD 24  // Argument 1 (LSB)\n\
 21) if A == 0x1; then JMP 44 else JMP 22\n\
 22) LOAD 28  // Argument 1 (MSB)\n\
 23) if A == 0x0; then JMP 27 else JMP 24\n\
 24) if A == 0xffffffff; then JMP 25 else JMP 34\n\
 25) LOAD 24  // Argument 1 (LSB)\n\
 26) if A & 0x80000000; then JMP 27 else JMP 34\n\
 27) LOAD 24  // Argument 1 (LSB)\n\
 28) if A == 0x2; then JMP 39 else JMP 29\n\
 29) LOAD 28  // Argument 1 (MSB)\n\
 30) if A == 0x0; then JMP 35 else JMP 31\n\
 31) if A == 0xffffffff; then JMP 32 else JMP 34\n\
 32) LOAD 24  // Argument 1 (LSB)\n\
 33) if A & 0x80000000; then JMP 35 else JMP 34\n\
 34) RET 0x0  // Kill\n\
 35) LOAD 24  // Argument 1 (LSB)\n\
 36) if A == 0x4; then JMP 38 else JMP 37\n\
 37) RET 0x5000d  // errno = 13\n\
 38) RET 0x50001  // errno = 1\n\
 39) LOAD 36  // Argument 2 (MSB)\n\
 40) if A == 0x0; then JMP 41 else JMP 43\n\
 41) LOAD 32  // Argument 2 (LSB)\n\
 42) if A == 0x80000; then JMP 45 else JMP 43\n\
 43) RET 0x50016  // errno = 22\n\
 44) RET 0x50002  // errno = 2\n\
 45) RET 0x7fff0000  // Allowed\n\
 46) RET 0x50026  // errno = 38\n\
",
};

}  // namespace golden
}  // namespace bpf_dsl
}  // namespace sandbox

#endif  // SANDBOX_LINUX_BPF_DSL_GOLDEN_GOLDEN_FILES_H_
