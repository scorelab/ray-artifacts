// This file was auto-generated by the C bindings generator.

#include "mojo/services/files/interfaces/ioctl_terminal.mojom-c.h"

#include <stdbool.h>

#include "mojo/public/c/bindings/lib/type_table.h"
#include "mojo/public/c/system/handle.h"

// Imports.


// Type tables definitions for structs, arrays and unions.

// Declarations for array type entries.
// Declarations for struct type tables.
// Declarations for union type tables.
// Array type entry definitions.
// Struct type table definitions.
// Union type table definitions.




// Definitions for constants.
// Top level constants:
const uint32_t mojo_files_kIoctlTerminalInvalid = 0;
const uint32_t mojo_files_kIoctlTerminalGetSettings = 1;
const uint32_t mojo_files_kIoctlTerminalSetSettings = 2;
const uint32_t mojo_files_kIoctlTerminalGetWindowSize = 3;
const uint32_t mojo_files_kIoctlTerminalSetWindowSize = 4;
const uint32_t mojo_files_kIoctlTerminalTermiosBaseFieldCount = 6;
const uint32_t mojo_files_kIoctlTerminalTermiosIFlagIndex = 0;
const uint32_t mojo_files_kIoctlTerminalTermiosOFlagIndex = 1;
const uint32_t mojo_files_kIoctlTerminalTermiosCFlagIndex = 2;
const uint32_t mojo_files_kIoctlTerminalTermiosLFlagIndex = 3;
const uint32_t mojo_files_kIoctlTerminalTermiosISpeedIndex = 4;
const uint32_t mojo_files_kIoctlTerminalTermiosOSpeedIndex = 5;
const uint32_t mojo_files_kIoctlTerminalTermiosCtrlCharCount = 17;
const uint32_t mojo_files_kIoctlTerminalTermiosCtrlCharVINTRIndex = 17;
const uint32_t mojo_files_kIoctlTerminalTermiosCtrlCharVQUITIndex = 18;
const uint32_t mojo_files_kIoctlTerminalTermiosCtrlCharVERASEIndex = 19;
const uint32_t mojo_files_kIoctlTerminalTermiosCtrlCharVKILLIndex = 20;
const uint32_t mojo_files_kIoctlTerminalTermiosCtrlCharVEOFIndex = 21;
const uint32_t mojo_files_kIoctlTerminalTermiosCtrlCharVTIMEIndex = 22;
const uint32_t mojo_files_kIoctlTerminalTermiosCtrlCharVMINIndex = 23;
const uint32_t mojo_files_kIoctlTerminalTermiosCtrlCharVSWTCIndex = 24;
const uint32_t mojo_files_kIoctlTerminalTermiosCtrlCharVSTARTIndex = 25;
const uint32_t mojo_files_kIoctlTerminalTermiosCtrlCharVSTOPIndex = 26;
const uint32_t mojo_files_kIoctlTerminalTermiosCtrlCharVSUSPIndex = 27;
const uint32_t mojo_files_kIoctlTerminalTermiosCtrlCharVEOLIndex = 28;
const uint32_t mojo_files_kIoctlTerminalTermiosCtrlCharVREPRINTIndex = 29;
const uint32_t mojo_files_kIoctlTerminalTermiosCtrlCharVDISCARDIndex = 30;
const uint32_t mojo_files_kIoctlTerminalTermiosCtrlCharVWERASEIndex = 31;
const uint32_t mojo_files_kIoctlTerminalTermiosCtrlCharVLNEXTIndex = 32;
const uint32_t mojo_files_kIoctlTerminalTermiosCtrlCharVEOL2Index = 33;
const uint32_t mojo_files_kIoctlTerminalTermiosIFlagIGNBRK = 1;
const uint32_t mojo_files_kIoctlTerminalTermiosIFlagBRKINT = 2;
const uint32_t mojo_files_kIoctlTerminalTermiosIFlagIGNPAR = 4;
const uint32_t mojo_files_kIoctlTerminalTermiosIFlagPARMRK = 8;
const uint32_t mojo_files_kIoctlTerminalTermiosIFlagINPCK = 16;
const uint32_t mojo_files_kIoctlTerminalTermiosIFlagISTRIP = 32;
const uint32_t mojo_files_kIoctlTerminalTermiosIFlagINLCR = 64;
const uint32_t mojo_files_kIoctlTerminalTermiosIFlagIGNCR = 128;
const uint32_t mojo_files_kIoctlTerminalTermiosIFlagICRNL = 256;
const uint32_t mojo_files_kIoctlTerminalTermiosIFlagIUCLC = 512;
const uint32_t mojo_files_kIoctlTerminalTermiosIFlagIXON = 1024;
const uint32_t mojo_files_kIoctlTerminalTermiosIFlagIXANY = 2048;
const uint32_t mojo_files_kIoctlTerminalTermiosIFlagIXOFF = 4096;
const uint32_t mojo_files_kIoctlTerminalTermiosIFlagIMAXBEL = 8192;
const uint32_t mojo_files_kIoctlTerminalTermiosIFlagIUTF8 = 16384;
const uint32_t mojo_files_kIoctlTerminalTermiosOFlagOPOST = 1;
const uint32_t mojo_files_kIoctlTerminalTermiosOFlagOLCUC = 2;
const uint32_t mojo_files_kIoctlTerminalTermiosOFlagONLCR = 4;
const uint32_t mojo_files_kIoctlTerminalTermiosOFlagOCRNL = 8;
const uint32_t mojo_files_kIoctlTerminalTermiosOFlagONOCR = 16;
const uint32_t mojo_files_kIoctlTerminalTermiosOFlagONLRET = 32;
const uint32_t mojo_files_kIoctlTerminalTermiosOFlagOFILL = 64;
const uint32_t mojo_files_kIoctlTerminalTermiosOFlagOFDEL = 128;
const uint32_t mojo_files_kIoctlTerminalTermiosOFlagNLDLY = 256;
const uint32_t mojo_files_kIoctlTerminalTermiosOFlagNL0 = 0;
const uint32_t mojo_files_kIoctlTerminalTermiosOFlagNL1 = 256;
const uint32_t mojo_files_kIoctlTerminalTermiosOFlagCRDLY = 1536;
const uint32_t mojo_files_kIoctlTerminalTermiosOFlagCR0 = 0;
const uint32_t mojo_files_kIoctlTerminalTermiosOFlagCR1 = 512;
const uint32_t mojo_files_kIoctlTerminalTermiosOFlagCR2 = 1024;
const uint32_t mojo_files_kIoctlTerminalTermiosOFlagCR3 = 1536;
const uint32_t mojo_files_kIoctlTerminalTermiosOFlagTABDLY = 6144;
const uint32_t mojo_files_kIoctlTerminalTermiosOFlagTAB0 = 0;
const uint32_t mojo_files_kIoctlTerminalTermiosOFlagTAB1 = 2048;
const uint32_t mojo_files_kIoctlTerminalTermiosOFlagTAB2 = 4096;
const uint32_t mojo_files_kIoctlTerminalTermiosOFlagTAB3 = 6144;
const uint32_t mojo_files_kIoctlTerminalTermiosOFlagBSDLY = 8192;
const uint32_t mojo_files_kIoctlTerminalTermiosOFlagBS0 = 0;
const uint32_t mojo_files_kIoctlTerminalTermiosOFlagBS1 = 8192;
const uint32_t mojo_files_kIoctlTerminalTermiosOFlagVTDLY = 16384;
const uint32_t mojo_files_kIoctlTerminalTermiosOFlagVT0 = 0;
const uint32_t mojo_files_kIoctlTerminalTermiosOFlagVT1 = 16384;
const uint32_t mojo_files_kIoctlTerminalTermiosOFlagFFDLY = 32768;
const uint32_t mojo_files_kIoctlTerminalTermiosOFlagFF0 = 0;
const uint32_t mojo_files_kIoctlTerminalTermiosOFlagFF1 = 32768;
const uint32_t mojo_files_kIoctlTerminalTermiosCFlagCSIZE = 3;
const uint32_t mojo_files_kIoctlTerminalTermiosCFlagCS5 = 0;
const uint32_t mojo_files_kIoctlTerminalTermiosCFlagCS6 = 1;
const uint32_t mojo_files_kIoctlTerminalTermiosCFlagCS7 = 2;
const uint32_t mojo_files_kIoctlTerminalTermiosCFlagCS8 = 3;
const uint32_t mojo_files_kIoctlTerminalTermiosCFlagCSTOPB = 4;
const uint32_t mojo_files_kIoctlTerminalTermiosCFlagCREAD = 8;
const uint32_t mojo_files_kIoctlTerminalTermiosCFlagPARENB = 16;
const uint32_t mojo_files_kIoctlTerminalTermiosCFlagPARODD = 32;
const uint32_t mojo_files_kIoctlTerminalTermiosCFlagHUPCL = 64;
const uint32_t mojo_files_kIoctlTerminalTermiosCFlagCLOCAL = 128;
const uint32_t mojo_files_kIoctlTerminalTermiosLFlagISIG = 1;
const uint32_t mojo_files_kIoctlTerminalTermiosLFlagICANON = 2;
const uint32_t mojo_files_kIoctlTerminalTermiosLFlagXCASE = 4;
const uint32_t mojo_files_kIoctlTerminalTermiosLFlagECHO = 8;
const uint32_t mojo_files_kIoctlTerminalTermiosLFlagECHOE = 16;
const uint32_t mojo_files_kIoctlTerminalTermiosLFlagECHOK = 32;
const uint32_t mojo_files_kIoctlTerminalTermiosLFlagECHONL = 64;
const uint32_t mojo_files_kIoctlTerminalTermiosLFlagNOFLSH = 128;
const uint32_t mojo_files_kIoctlTerminalTermiosLFlagTOSTOP = 256;
// Struct level constants:
// Interface level constants: