# Detecting Single Instruction Multiple Data (SIMD) for OS and CPU

Single instruction, multiple data (SIMD) is a class of parallel computers in Flynn's taxonomy. It describes computers with multiple processing elements that perform the same operation on multiple data points simultaneously. Such machines exploit data level parallelism, but not concurrency: there are simultaneous (parallel) computations, but only a single process (instruction) at a given moment. SIMD is particularly applicable to common tasks such as adjusting the contrast in a digital image or adjusting the volume of digital audio. Most modern CPU designs include SIMD instructions to improve the performance of multimedia use.

```bash
CPU Vendor String: GenuineIntel

CPU Vendor:
    AMD         = No
    Intel       = Yes

OS Features:
    OS AVX      = Yes
    OS AVX512   = No

Hardware Features:
    MMX         = Yes
    x64         = Yes
    ABM         = Yes
    RDRAND      = Yes
    BMI1        = Yes
    BMI2        = Yes
    ADX         = No
    MPX         = No
    PREFETCHWT1 = No

SIMD: 128-bit
    SSE         = Yes
    SSE2        = Yes
+   1 # Detecting Single Instruction Multiple Data (SIMD) for OS and CPU
    SSE3        = Yes
    SSSE3       = Yes
    SSE4a       = No
    SSE4.1      = Yes
    SSE4.2      = Yes
    AES-NI      = Yes
    SHA         = No

SIMD: 256-bit
    AVX         = Yes
    XOP         = No
    FMA3        = Yes
    FMA4        = No
    AVX2        = Yes

SIMD: 512-bit
    AVX512-F    = No
    AVX512-CD   = No
    AVX512-PF   = No
    AVX512-ER   = No
    AVX512-VL   = No
    AVX512-BW   = No
    AVX512-DQ   = No
    AVX512-IFMA = No
    AVX512-VBMI = No

Summary:
    Safe to use AVX:     Yes
    Safe to use AVX512:  No
```
