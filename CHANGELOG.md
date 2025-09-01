commit 45de4661968a818c0a10e1714d5d6f5f97a6cfe4
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Mon Aug 25 15:06:45 2025 +0200

    added pure attribute to strncmp

commit e8ffdaa73acd03d293ac247077852c14f013a7a8
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Mon Aug 25 15:05:25 2025 +0200

    fixed strncpy implementation

commit 62f59fec0a5ecacc6f4f4256ed51cddf8b3cdb4d
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Mon Aug 25 14:36:54 2025 +0200

    malloc set errno on failure

commit 66e5d96a98f63d892e3166a05659bde294345643
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Mon Aug 25 14:36:13 2025 +0200

    __errno takes no arguments not unspecified

commit 8dd5635b7c4884b300c9b05bee88b7e30f517ec1
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Mon Aug 25 14:34:01 2025 +0200

    fixed cast in linux _read/_write implementation

commit e5c0e3b8cc3bf7dbb806451e1114821ccd606905
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Thu Dec 28 00:28:09 2023 +0100

    use EXIT_FAILURE instead of magic constant

commit a0fd878080e6316efa14b82cb1fa029755d336dd
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Thu Dec 28 00:26:02 2023 +0100

    re-worked setvbuf implementation
    
    added buffer reuse
    optimized codepath for simplicity

commit d3b5e708dcfcc3cc084197685de18d7cc9c45fcf
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Thu Dec 28 00:25:27 2023 +0100

    clear file objects before reuse

commit 6ff4d118a78667f39a00351f17bae892a4661a5e
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Wed Dec 27 22:49:50 2023 +0100

    re-arranged and optimized make flag generation

commit 1e2d9ca158e88bef285c16d86290b4e685868043
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Wed Dec 27 22:49:08 2023 +0100

    added automatic include dependency tracking

commit ec53164622acd71d1ec325bcad428aded83097c3
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Wed Dec 27 22:48:29 2023 +0100

    added build folder

commit 74e9688e2681022b48b964315868b420596bda13
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Wed Dec 27 22:42:19 2023 +0100

    use long options

commit 96a3bb8d42ada9eafcc71ce8e30d78c161837f4a
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Thu Mar 31 11:31:23 2022 +0200

    fixed code style globally

commit 9d383ccf89481d3d0b1776886dde0de94e3f1c0b
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Sat Nov 20 12:03:23 2021 +0100

    added wcrtomb implementation with exclusive ascii support

commit 1999fb1679e53bcbc13dfa22aeb8966e0b503cc7
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Sat Nov 20 11:45:01 2021 +0100

    fixed __libc_init_malloc
    
    base.first must be NULL when find_free_block is invoked for the first time

commit acb442e0e0b46b4a833a3ebc7455f7b887dc590d
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Sat Nov 20 11:44:19 2021 +0100

    vfprintf implemented the %p format specifier

commit e8726f8907fa17faa619b56a5aa92bb0b411460d
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Sat Nov 20 11:31:25 2021 +0100

    vfprintf set width and length to zero make precision similar to width

commit 26164ea8810dad9cb33d943220753bcf9588c18f
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Fri Nov 19 00:36:25 2021 +0100

    updated .gitlab-ci.yml for the new Makefile arguments
    
    added the x86_64 libc port to the builds
    removed -mfloat-abi=hard (let gcc auto determine this setting)

commit 9e5078b2bec3ae78b580df9e9c5470eed26d3354
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Fri Nov 19 00:24:07 2021 +0100

    updated stdlib/alloc.c using __libc_init
    
    added __libc_init_malloc called by __libc_init to initialize the malloc base
    struct. Removed the create_block function (alway fail with ENOMEM).
    
    in the future use the syscall _brk instead of the __heap_* variables from the
    linker.
    
    TODO: re implement create_block using _brk

commit 56a2d7dc154b5b3c5a5c2753454060f609ff6836
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Thu Nov 18 23:14:00 2021 +0100

    malloc merge_blocks ensure block->next/prev are not NULL

commit 27012322310d173e260a48b4a84f655a85bd056c
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Thu Nov 18 23:10:00 2021 +0100

    malloc cast size to unsigned int for clz

commit 9c77bbae05e52749bf2043520cd2cd3a8d7d99b5
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Thu Nov 18 23:07:29 2021 +0100

    fixed missing include and const in FE_DFL_ENV.h

commit 96a597a76eb13a0dbaa80abf9bf6524cf50f0386
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Thu Nov 18 22:58:33 2021 +0100

    added ferror and clearerr and rewind functions

commit 921088889ee57d5188d6f3d6eb7494c26812d1eb
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Thu Nov 18 22:56:42 2021 +0100

    added fopen implementation using the _open syscall

commit 86516c5d888987eb6410adefcb7d8835b13510fc
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Thu Nov 18 22:32:48 2021 +0100

    added the program entry point _start for thumb NOSYS

commit 9bd82a5e73b5920387cab44b08c362d84771ade9
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Thu Nov 18 22:31:06 2021 +0100

    removed unnecessary cast to unsigned char in fread

commit 3a87128c70769ee032c808737b41464a4e52b8ed
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Thu Nov 18 22:30:11 2021 +0100

    optimized unbuffered fputs using direct _write

commit e4426ea0ddcba711c23c2fa205b0ce202e19f88f
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Thu Nov 18 22:28:39 2021 +0100

    fixed infinite loop in vfprintf and explicitly set precision to 0

commit d7c7f364a2797a49df48d47563dceec810fff4a9
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Thu Nov 18 22:27:43 2021 +0100

    replaced the format_flags_t enum with an int and simple macros

commit c816de6dcee0991e72a8906a235b89a5d8905b36
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Thu Nov 18 22:24:21 2021 +0100

    implemented signal/raise with the _kill (and _getpid) syscall

commit d887587cb2fac66c4386753d76bddaf78d5319c1
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Thu Nov 18 22:12:19 2021 +0100

    added fgetc with the _read syscall buffering currently not handled

commit 256b2eac7c0e8b9aaeb1ee26d926bb63b15feb49
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Thu Nov 18 22:05:22 2021 +0100

    added fflush with the _fsync syscall

commit 75d2e7c8f2d652dfe69c537b175338268186f5ad
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Thu Nov 18 22:01:20 2021 +0100

    added fputc with the _write syscall handle buffering in fputc

commit 6aa1a84cc1e6ea8368599374c81b405fc5c9479e
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Thu Nov 18 21:43:16 2021 +0100

    added setbuf and setvbuf implementation

commit 1602ffdd62997a7dfe55a8c436bd42ee367325e6
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Thu Nov 18 21:40:46 2021 +0100

    added fclose implementation and the _close syscall

commit c67f4213f1f5e8ec027f8c16c67b9fc004b7e46c
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Thu Nov 18 21:26:41 2021 +0100

    added __libc_fini calling __libc_fini_files

commit 1f3493f739629e314cf0a15983db441c722e7f17
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Thu Nov 18 21:23:45 2021 +0100

    added __libc_init calling __libc_init_files

commit 462aedd1d3904ccfa069912dc2712cf0a0427c5d
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Thu Nov 18 21:22:31 2021 +0100

    added __libc_init/fini_files and _get_FILE

commit 185be0cf3206eff1891b5fe290f620ed336e06ed
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Thu Nov 18 21:21:08 2021 +0100

    fixed file FLAGS

commit ae07447395cddaf6a33cdbaec40695c5d5486b78
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Thu Nov 18 21:20:12 2021 +0100

    fixed the comment style in x86_64/linux/crt0.S

commit f1f549ad7c40c80978f0f879e59c5e9d7c3e5dec
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Thu Nov 18 00:19:06 2021 +0100

    updated FILE type with flags and a buffer

commit 4af390e7c04c6d28849fe6acf50468bbd63356e2
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Thu Nov 18 00:14:57 2021 +0100

    added crt0.S and __libc_main to linux on x86_64
    
    with this, a working C program can be compiled with this library.

commit d9fc809ec3d1c1a44e89c5d05cda1c2b5ad224fe
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Thu Nov 18 00:09:12 2021 +0100

    added include/sys/thumb/none to .clang_complete

commit 53fdc3ee09c19590505177e7882b0606bde068b3
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Thu Nov 18 00:08:50 2021 +0100

    updated Makefile
    
    added the Makefile parameters ARCH SYS and CPU
    ARCH defines the architecture of the build, one of (x86_64, arm or thumb)
    SYS defines the operating system ABI can be one of (none, linux)
    CPU defines the specific CPU see the GCC manual for possible values
    
    added a crude compiler selector, this should be expanded to support clang
    increased debug information using -g3 instead of -g
    added -Wformat=2 warnings
    removed C++ only options
    added a target for compiling ASM files

commit 5d654a23e0c83129b55ac3720cdde8d29034d0ee
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Thu Nov 18 00:06:50 2021 +0100

    added _exit system call for linux on x86_64

commit 21742da4e8629d12d7afd2c8235f78cf7394c786
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Wed Nov 17 23:29:48 2021 +0100

    added _Exit implementation with the beginning of system integration

commit 0e31cef9ac41fe2aa0eea9b4706c1ad24319bf4b
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Wed Nov 17 23:20:26 2021 +0100

    fixed exit() function
    
    added todo's for the missing functionality

commit 4d55fbc31b9e4d33c444ca1945fec69632b1b613
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Wed Nov 17 23:05:45 2021 +0100

    fixed abort
    
    the standard specifies that abort causes abnormal program termination via
    raise(SIGABRT) not via NMI

commit 589d2c0621736382db0b3c2c2875c3d569e451d9
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Wed Nov 17 23:00:17 2021 +0100

    replaced FILE __std* with pointers
    
    all files will be stored in a single array, this will simplify file closing
    during program exit.

commit e6e66c8e8e8d0b083cb924e17a363285417f9f0e
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Wed Nov 17 22:53:04 2021 +0100

    fixed quick_exit
    
    the standard specifies that quick_exit causes program termination via
    _Exit(status) not via abort();

commit 68e6bcfbee94cc33351804643952468ef18b76b8
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Wed Nov 17 22:51:25 2021 +0100

    added cast for strtol used in atoi
    
    strtol returns long, which must be cast to int for returning it from atoi

commit 7f160deebe132ea91722ffa7a7131f22a11b90bd
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Wed Nov 17 22:48:30 2021 +0100

    fixed SIG_* macros
    
    The C standard specifies for the SIG_* macros:
     "whose values compare unequal to the address of any declarable function;"
    
    which means they cannot be pointers to real functions

commit 9c19e5ba86d2d648af3fb9ba13b2758cd794c8bf
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Wed Nov 17 22:45:08 2021 +0100

    fixed atexit and at_quick_exit
    
    __atexit_functions and __at_quick_exit_functions will be moved into a central
    global container for all implementation data.

commit c5a9afb23e39d3357d5db44815783010e061f376
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Wed Nov 17 22:43:16 2021 +0100

    fixed fwrite not checking the return value of fputc correctly

commit 385ce063ce0078a6c0aeeee22bfd01c8cc617bce
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Wed Nov 17 22:41:39 2021 +0100

    added the pure attribute to certain string functions
    
    fixed some formatting

commit 892028382460ca42337df8a6207a2cdcd6a5a4b1
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Wed Nov 17 22:39:40 2021 +0100

    fixed int128_t using the wrong macro

commit 4bc7ddfd6659631c1b5704551a47dd904e6886ab
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Wed Nov 17 22:38:44 2021 +0100

    fixed assert macro formatting

commit 676afaf5e459013b922a76310ff3848966e3c892
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Wed Nov 17 22:36:59 2021 +0100

    fixed typo for the BUFSIZ macro

commit a8902b7238dcc6d217c0fced2b6f6ae812c08d50
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Thu Mar 19 22:20:30 2020 +0100

    removed dead code

commit 50cff461b29fd7815cfc73b8efd3a86fdf787144
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Wed Mar 18 22:24:04 2020 +0100

    implemented "%s" for printf functions
    
    "%ls" does not behave correctly for now

commit 5477450fd19eed5841e62ba4c337ecf18a5ac963
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Wed Mar 18 22:17:56 2020 +0100

    implemented "%c" for printf functions

commit a756ce903d1cfe14383e927b5b0dc415da6d288b
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Wed Mar 18 22:04:25 2020 +0100

    implemented %n (number of characters written output parameter)

commit 73731083ede75d873bea81760df4929af61f816d
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Wed Mar 18 22:02:38 2020 +0100

    check for EOF and increment num_chars

commit 227d508132f2e68f8a9713bd9b7471165e4bc304
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Wed Mar 18 21:47:28 2020 +0100

    check for EOF

commit 28cc31c87c1769ce7915e72a32682da112d614f5
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Wed Mar 18 21:24:41 2020 +0100

    added the start of a vfprintf implementation

commit 402b5fa9244babbec0fe1e4f4beffd7bb8cc4c14
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Sat Jan 11 16:35:46 2020 +0100

    added u/int128_t

commit 789013156017f6a9fffc42c473d12862c0891404
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Sat Dec 28 19:50:47 2019 +0100

    fix all uses of 'noreturn' and use '_Noreturn'

commit f5ac29064b774a4ba5aca6ce4393b6b17e4dc31e
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Thu Dec 12 21:26:06 2019 +0100

    update stdnoreturn for compatibility with C++

commit e6e34b1a83a5ef355cf7fe50d6fc8f0cd8b6a3b3
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Mon Dec 9 00:31:54 2019 +0100

    use new smaller docker image

commit 943b0dd07e46bf930233f959cae9e3d16e81492f
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Mon Dec 2 11:26:34 2019 +0100

    improved Makefile
    
    isolate Common/C/C++ Warning options
    allow exceptions and rtti to be enabled/disabled
    allow threadsafe statics to be enabled/disabled

commit f29a21a9081d0f90af0a1133677ab3e5a2500d30
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Mon Dec 2 11:08:28 2019 +0100

    replaced `NAME` with `TARGET_NAME` in Makefile

commit 03b7d43e8f9d6c535b68482d93524dd65b787405
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Tue Nov 5 20:08:08 2019 +0100

    fixed .clang_complete

commit 0fe28cf9f10aa5529841047587620a9d2250bc70
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Tue Nov 5 20:07:38 2019 +0100

    replace __attribute__((noreturn)) with noreturn

commit 1a373a21dc57f69b7e1b36499cdf948a827cbbae
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Tue Nov 5 19:50:51 2019 +0100

    implemented _Exit(int)

commit 97d94f5db1f500537ad701bd2c48528f3664782a
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Tue Nov 5 19:48:20 2019 +0100

    implemented at_quick_exit(fun) and quick_exit(int)

commit e57f18524cb1aab122c5dcee10e942033eea0ece
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Tue Nov 5 19:47:27 2019 +0100

    implemented atexit(fun) and exit(int)

commit 3a18026d3e46099e72ce68aabb23c030c45f00cf
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Tue Nov 5 19:37:00 2019 +0100

    use gcc builtins for math classification and comparison macros

commit 2ec080aee7a4e4f18c3314f13bbec2a20b8f5774
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Tue Nov 5 19:36:10 2019 +0100

    use __asm instead of asm (for clang)

commit 55a4301f2d5ebdae43bb4b72b3252281e0d8c30e
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Thu Oct 31 16:35:36 2019 +0100

    fixed all header comments again...

commit 22821dc9cb55fed5cfd084a2bcd8b55511b3b1b5
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Thu Oct 31 11:11:58 2019 +0100

    fixed assumption size_t == 32bits
    
    use sizeof to determine the size at compile time

commit 8f06d64fc677b2d848e0fc26c810e71792550f09
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Thu Oct 31 11:10:09 2019 +0100

    deleted old obsolete documentation
    
    Documentation coming soon...

commit 199a8853adcc3ee69595922499979031377a875d
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Tue Oct 15 21:54:23 2019 +0200

    fixed CLOCKS_PER_SEC must be of type clock_t

commit e47039bf24451aac7c4f2b83c589f536f25d258a
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Tue Oct 15 20:58:42 2019 +0200

    implemented signal and raise

commit 7aa1616aee947a18e7bfff8a4f61ae00fe1d43fa
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Tue Oct 15 20:55:57 2019 +0200

    moved signal macros to macros/

commit cf57295eb785a6231381b9d57cf7c6408fa77d39
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Sun Oct 13 22:35:48 2019 +0200

    added license to header comment

commit e3e6e6c9da4fe8c1e69588367d8981e98ec807a8
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Sun Sep 15 22:12:03 2019 +0200

    added .clang_complete for irony(emacs)

commit 7f6bf9a7416601fbed2567dccd22d925924acacb
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Sun Sep 15 22:08:46 2019 +0200

    added .dir-locals.el

commit fd2b90b265a34f0ccabcaaac7a507da2cf0f6b70
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Sun Sep 15 22:06:54 2019 +0200

    removed .dir-locals.el and .clang_complete from .gitignore

commit 52574d4a71049608da4628fe8f2682567e15f3e6
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Mon Jul 8 10:43:16 2019 +0000

    removed compiler flag not available on older compilers (gcc 7.1)

commit 24b11a606e9086f1d1ec3c60072fed01265389d7
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Wed Jul 3 07:56:17 2019 +0000

    updated Makefile

commit b52df108cd5e10ca9444cbb4edb4e715d854edb2
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Wed Jul 3 07:52:56 2019 +0000

    updated Makefile
    updated .gitlab-ci.yaml

commit 28db6c6f868363977112800566a2791186557a80
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Tue May 14 07:26:49 2019 +0000

    fixed include guards of stdin/out/err macro headers

commit 9e440cd2efc4f77280a97617da501dfbd484564c
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Mon May 13 11:53:35 2019 +0200

    moved jmp_buf to types/

commit be5461b684021051d89aa0e2bdf3f5c634e6de4f
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Mon May 13 11:32:52 2019 +0200

    added fenv implementation

commit 761807e977508c26f34efffbf7c9692e5b5443e7
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Mon May 13 11:25:55 2019 +0200

    added language guards to math macros

commit 254a8e5cdbc6e354b89f84660655167dc58a86d9
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Mon May 13 11:12:04 2019 +0200

    changed all includes to use <> instead of ""

commit 79c150e6fdd38644666b2530dee0f3adf8da613b
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Mon May 13 11:09:38 2019 +0200

    fixed macro/variable name collision

commit bcefcdaadcb1207485bca2b121fc65ef9a527e9f
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Mon May 13 11:04:00 2019 +0200

    made a macro out of errno for compatibility with POSIX and C++
    
    made a function for accessing errno,
    this allows for multiple errno's in the future.

commit 46639a48a68e5bc83535df785b339cc6bf698f74
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Mon May 13 10:54:44 2019 +0200

    added language guards around stdin/out/err

commit b830e31513df625d6247b5ce25ec25bfa6e9cd36
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Mon May 13 10:48:34 2019 +0200

    Made macros out of stdin/out/err for future improvements
    
    renamed extern declarations to use double underscores

commit 024e9165ae1270329ace0aff64e8352073bf508d
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Mon May 13 10:18:12 2019 +0200

    removed deprecated compiler flag

commit f931946f81f1623cc37f8a171c4736855d8700b2
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Mon May 13 10:15:50 2019 +0200

    fixed comments of all files

commit fe2846e37c6bfa03947779c9d97e466c17e1dd22
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Sat May 4 12:58:15 2019 +0200

    added setjmp header

commit 2557a004173e6893c1fab316b9b50b6844c66483
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Sat May 4 12:55:46 2019 +0200

    fixed header comments

commit bb1aab76774499741252de762feab6aceb36827f
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Mon Apr 29 09:17:23 2019 +0000

    NAME must be set explicitly

commit d44d548b61f39cded66ff4fb9e14e4543738116e
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Sun Mar 10 23:51:17 2019 +0100

    char16_t/char32_t are keywords in C++

commit b791216cead095f4fbf8b0226bafcf8d09ee113c
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Sun Mar 10 23:49:51 2019 +0100

    fixed keyword usage

commit da8c77f689a0fbf0354174b9bb6293a418756d21
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Thu Jan 17 01:44:19 2019 +0100

    added fno-exceptions and fno-threadsafe-statics

commit 221cef2d5ec20fac415799d016b79fc4048e768b
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Thu Jan 17 01:39:00 2019 +0100

    changed VERBOSE option

commit d2da36f7185ed4ccb4f29365a46a072f8eb1f33e
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Thu Jan 17 01:34:04 2019 +0100

    added configurable debug build

commit 1bf6c86ba6b29b368ced47cddc12aff0683747d8
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Thu Jan 17 01:28:14 2019 +0100

    removed headercheck target

commit 2178bbfd0614f464b9cedf248eb50cba20c87668
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Thu Jan 17 01:25:24 2019 +0100

    changed Makefile VERBOSE option

commit 216a63d60416177b21c12bd6b5db2994e404729d
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Thu Jan 17 01:23:19 2019 +0100

    fixed comments for prototypes

commit 5f8c8017f04d4b7f3923f36f962618f68c232744
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Sat Dec 15 10:59:39 2018 +0100

    fixed header brief's

commit a00d0d90785a40f9c373903b90c46a44805c935f
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Sun Dec 2 21:48:04 2018 +0100

    added missing macros to stdlib.h
    
    NULL
    EXIT_FAILURE
    EXIT_SUCCESS
    RAND_MAX
    MB_CUR_MAX

commit 636592f595e79bf34cefb88b3a39e7ad30a1b783
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Sat Dec 1 15:08:23 2018 +0100

    implemented feof(FILE* stream)
    
    added eof attribute to FILE type

commit b4c5979a8a9b426dc5a50a007e24cafaf1a0bd98
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Sat Dec 1 15:03:29 2018 +0100

    changed stdfiles to be extern variables
    
    added fd(file descriptor) attribute to FILE type

commit 5ace87eb512b3ad80748ae65f9e18d2d21ae05a8
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Sat Dec 1 14:55:33 2018 +0100

    fixed fwrite
    
    return characters written not total requested characters to be written

commit 57757991bc45aa29e4e93f1d161a12a5d7ea1c8c
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Mon Nov 19 11:42:04 2018 +0100

    changed conflicting name 'new' to '_new'

commit 415bf32208b4b849e327d4615ff0504efc73bd1c
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Mon Nov 19 09:07:50 2018 +0100

    added putc implementation

commit 5f674469fe97a10af629dfed60ff21d20e9981c5
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Mon Nov 19 09:02:55 2018 +0100

    added getc implementation

commit 8ac3603002397bfae6fb469afe7e4a07ab7fe7c6
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Mon Nov 19 08:56:35 2018 +0100

    added puts implementation

commit a5889c04c5e24d7899d57044b91b2bf805d05b99
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Mon Nov 19 08:48:31 2018 +0100

    added fputs implementation

commit 205ae73bc2fda956b8edbda5bd42d731e8696547
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Mon Nov 19 08:45:36 2018 +0100

    added fgets implementation

commit f6d5524a4e3bcabaa7c85f77b7aafd8402897df6
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Mon Nov 19 08:35:28 2018 +0100

    added fwrite/fread implementation

commit e264e7ba68ca94b139b52dd0bacfa1863e601c40
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Sun Sep 16 10:16:09 2018 +0200

    removed duplicate -g flag

commit 13bd787eeb443365b074ff086a6974d995e2a72c
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Tue Aug 21 19:34:17 2018 +0200

    added [U]INTn_C(c) macros to stdint.h

commit dff5b70bfddf047912f4ab5a7f0c090e1e0419e7
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Tue Aug 21 19:29:14 2018 +0200

    added No errors to strerror()

commit 8d63d4f45c46d78538ef84fd440c4e0c5285c30e
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Mon Aug 20 12:48:10 2018 +0200

    added FPU option to Makefile removed LTO addded debug flag

commit 2d5a27bedf556e7f098451b0b2542993392cfd11
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Mon Aug 20 12:46:27 2018 +0200

    removed unused macro select first fit

commit 007f84d6fb749a7cf7691e035a0d6d7e819e5f13
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Mon Aug 20 12:40:08 2018 +0200

    split memory allocation into multiple files
    added aligned_alloc.c --> empty
    reworked create_block()
      round uo the size of the requested block
    moved malloc to src/malloc.c
    moved malloc to src/calloc.c
    moved malloc to src/free.c
    moved malloc to src/realloc.c
      added more code for checking special cases
      if the block is the last block

commit c726012265e075be8f29f68c27a8b4e2f154a729
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Mon Aug 20 12:11:54 2018 +0200

    added atof() atoi() atol() and atoll()

commit 595c0bac0995df7d3dbb8b1b1c1bfae345f191d9
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Mon Aug 20 11:41:24 2018 +0200

    added .clang_complete to .gitignore

commit b6dfefe7be7cf82271af32d558865368898a5766
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Mon Aug 20 11:39:06 2018 +0200

    changed memmove from void* memmove(void*,void*,size_t) to void* memmove(void*,const void*,size_t)

commit ef764ed2f9f1fec4eae6f1141d125d8321a4a1d5
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Sat Aug 11 13:13:08 2018 +0200

    added optimizer flags
    added debug flag

commit df54a581799d8b730a1ca50c3460729b754e5477
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Sat Aug 11 11:39:29 2018 +0200

    added suggested noreturn attribute to __assert()

commit c531d25e7f66be13abc18586e00541abee45176e
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Sat Aug 11 11:37:16 2018 +0200

    added address checker, added attribute suggestion

commit ee258bc59e0e06b86ea7fad3625753d0a2e9ac37
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Fri Aug 10 21:19:08 2018 +0200

    added more errors to errno.h for C++
    added new errors to strerror() function

commit 8821b2eb111c7a02df82a663ea3b9954ed1460a0
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Fri Aug 10 17:29:44 2018 +0200

    changed documentation

commit bdc79925b1d95a641bcab5e5f697fabacec850a2
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Thu Aug 9 18:31:21 2018 +0200

    moved ctype functions to separate files
    added ctype directory
    doxygen @file use full path

commit 01a677a3b23b1e413825854a8ce627ea84366c98
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Wed Aug 8 22:44:08 2018 +0200

    added comment to function group

commit 3807a78f98f9a6b10d18ee53e2a3ca5917969df1
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Wed Aug 8 22:11:45 2018 +0200

    added folder to doxygen @file
    for all files in include/macros/

commit 15949d9f2e5d55765ac8dfcdd9ccb1f96db2d950
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Wed Aug 8 22:06:38 2018 +0200

    moved macros from header to separate files

commit bc0c8f3135f409c501c4d9a0b7579c2603f0ec7e
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Wed Aug 8 21:58:14 2018 +0200

    added MACRO_ prefix to include guard
    for all files in include/macros/

commit c18515ad15578ff923e04ba3742b150d3dcfeae3
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Wed Aug 8 21:31:38 2018 +0200

    added folder to doxygen @file
    for all files in include/types/

commit 99c97afd6837ddf1cb428056fda8a00ec70761a0
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Wed Aug 8 21:23:55 2018 +0200

    added TYPE_ prefix to include guard
    for all files in include/types/

commit 4cac29762d487fc1a25639d4f3456169136038bd
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Wed Aug 8 19:05:48 2018 +0200

    changed C++ to CXX

commit dac6d0702666a77590e575d87416d6c5b9e70fc3
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Wed Aug 8 16:06:30 2018 +0200

    static_assert is a keyword in c++

commit 6d4922efa66e90d8979516ac8813bacc4bb14146
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Wed Aug 8 11:54:23 2018 +0200

    removed c++ nullptr_t

commit 25dcb4f888d3991aaa016c66f253465003ab9643
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Fri Aug 3 11:25:31 2018 +0200

    moved docker image to docker hub

commit b214a8520306558cae324458b5f3ef89385de922
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Thu Aug 2 17:16:07 2018 +0200

    typo in .gitignore

commit 0efd0b2702c1eab87ad88102ec8af6d093a0ca6a
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Thu Aug 2 16:45:06 2018 +0200

    make ar non verbose and delete archive if it exists

commit 48408281fc8e83f96892198b676720c932d30016
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Wed Aug 1 19:48:05 2018 +0200

    adjusted .gitignore

commit 8bb750a2816aa4c223e38f036593125cedd8b070
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Sun Jul 29 20:28:51 2018 +0200

    renamed SRC to CSRC and HDR to CHDR

commit a260a03d612902824e8740883dad4a73defcc027
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Thu Jul 26 19:59:23 2018 +0200

    added getchar() and putchar() implementation

commit 34e4ea23cec85f9bb394c48c25616b73c0db4e46
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Thu Jul 26 19:50:26 2018 +0200

    added implementations for stdio.h functions
    fprintf()
    fscanf()
    snprintf()
    sprintf()
    sscanf()
    vprintf()
    vscanf()

commit 816f3892061750d582d3e88b86993450b1c65c9f
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Thu Jul 26 19:07:27 2018 +0200

    added scanf() implementation

commit 0bb0375673825f73aa6ded0e6a2feade910ac8b2
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Thu Jul 26 19:00:25 2018 +0200

    added printf() implementation

commit dc4304d990b4537e9d67ca317a612e2688027243
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Wed Jul 25 21:45:44 2018 +0200

    code refactoring

commit 63d1759af7d71060c63843748fbcc67845a415e5
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Wed Jul 25 20:28:16 2018 +0200

    added strerror() implementation

commit 9b6fab6a3d3c20e487a60991d00b844872f25286
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Wed Jul 25 20:27:54 2018 +0200

    added strtok() implementation

commit 8f82e8bf0e14a4bfebd0c94f42f6f21359033d16
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Wed Jul 25 20:27:29 2018 +0200

    added strstr() implementation

commit 6594cb8c03bafe475f8e6cfba1ba1ea91811be77
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Wed Jul 25 20:27:09 2018 +0200

    added strspn() implementation

commit d651fbd2e3542b0b6721c796072777c4128a402f
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Wed Jul 25 20:26:47 2018 +0200

    added strrchr() implementation

commit bf3df8ceb03ce28387c97eaba78b4dedebfce940
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Wed Jul 25 20:26:25 2018 +0200

    added strpbrk() implementation

commit bb9b341902fc708691fff4f682f41303b731b5e0
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Wed Jul 25 20:26:00 2018 +0200

    added strcspn() implementation

commit f42494e4cb709b05c72a7dbccc0e9b3369ece679
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Wed Jul 25 20:24:47 2018 +0200

    added strchr() implementation

commit 30a5cb44561f73461e05f3a5ab73cc508f6304b5
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Wed Jul 25 20:24:14 2018 +0200

    added memchr() implementation

commit 40cd47a885ec86abca4800f0ef0249e17ca1523e
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Wed Jul 25 20:23:36 2018 +0200

    added strncmp() implementation

commit 1b2e9ffaee4cf3c134d1836f007b4b1e449df42d
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Wed Jul 25 20:22:50 2018 +0200

    added strncat() implementation

commit 224e3c51f871c1d7380f8c04bf4eff583505bec7
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Wed Jul 25 20:22:15 2018 +0200

    added strcat() implementation

commit 835d508fb6e2f28548f2fdfc14f424887fba6b3b
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Wed Jul 25 20:21:35 2018 +0200

    added strncpy() implementation

commit 281f3676bd2abe32c6be9c0f6ca4b88fe8f67770
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Wed Jul 25 20:21:05 2018 +0200

    added strcpy() implementation

commit e54c0abffc5e5cf0bb368e1adc07322aaf1b0486
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Wed Jul 25 20:19:37 2018 +0200

    remove duplicate functions and group functions

commit 2258accaef8fbf6317e99aaa8afea69c8697fc43
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Wed Jul 25 19:08:13 2018 +0200

    changed Exxx macros in errno.h

commit 0fec5aba5032253a23960ab41612de3f4b894819
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Wed Jul 25 00:47:49 2018 +0200

    added wchar.h types macros and prototypes

commit b74247729905878c8d996b6d2c3bc0fdb06fe4e0
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Wed Jul 25 00:42:34 2018 +0200

    added wctype types macros and prototypes

commit a82d0e7c69437958b5e16c78dcd91f1e768fa2f1
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Wed Jul 25 00:38:01 2018 +0200

    added uchar.h types and prototypes

commit 47cbeea1715e683a50943d9bcbb7f48f4e38b313
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Wed Jul 25 00:23:18 2018 +0200

    added signal types macros and prototypes

commit 5c84c07f3c281f332cbfd8d5d3040dc372e5a793
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Wed Jul 25 00:16:30 2018 +0200

    added math.h macros and prototypes

commit 7055328816497d077c47e804d87da1dbe3b4e6dc
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Wed Jul 25 00:07:24 2018 +0200

    added stdio types macros and prototypes
    added perror() implementation

commit ad7fd9250c8d4d0d9a1374ce19022b69c86953f7
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Tue Jul 24 21:35:43 2018 +0200

    removed pedantic from headercheck -> too many false positives

commit e789549cdf2084eaa29f8dcee53d64b3f92c3210
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Tue Jul 24 21:34:34 2018 +0200

    dont use undefined identifiers

commit 42f51ec37a16c1987e6e92adfc72ac6027ba9c83
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Tue Jul 24 21:23:50 2018 +0200

    renamed target includecheck to headercheck

commit 135354356c43d736b8102268fcd7e5a38c069d5a
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Tue Jul 24 21:19:54 2018 +0200

    added time.h macros types and prototypes

commit 7dd0c429fd6135d48f3d8207dd0acc7f6e4a57f8
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Tue Jul 24 19:04:42 2018 +0200

    added header check target

commit de1c242a35c19597bbc1e09c420538c212598c0d
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Tue Jul 24 18:39:41 2018 +0200

    no threads and atomics ...

commit 517492a9edaa1aee50b331bc29efd5895888f801
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Tue Jul 24 06:21:47 2018 +0200

    added math.h macros and types

commit c2531a1d78777791ac89472af6330af3f4430a74
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Mon Jul 23 21:34:59 2018 +0200

    added inttypes.h with some implementation

commit 60a07f847dc91493c1ae63c62f3aa1cca921f3f4
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Mon Jul 23 20:59:39 2018 +0200

    added locale.h prototypes

commit 0d532a4e9f6c1aad9d4cc621a7721d0c914795ce
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Mon Jul 23 20:49:24 2018 +0200

    unified file modes

commit 8f7cfcec8ae53a62d86d4e5b8f497d2db9ab0672
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Mon Jul 23 19:07:09 2018 +0200

    added stdnoreturn.h with implementation

commit 35153c824f62e4093912f0be67c0149ea6d81a24
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Mon Jul 23 19:04:37 2018 +0200

    added feature test macros to stdalign.h

commit 1568c5e5203dc8a1dc4a575d4e7165fbabacd752
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Sun Jul 22 22:11:19 2018 +0200

    added memmove() and memcpy() implementation

commit 8eea08e8343a108f85eeaf14f60eb9ce67ad5a78
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Sun Jul 22 21:42:33 2018 +0200

    added strcmp() implementation

commit 1e450a10fe64325106363a8512f7bd62dcc4e90c
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Sun Jul 22 21:35:23 2018 +0200

    added memcmp() implementation

commit e4f499eae2bfb910c09f7e6d7be9e9144bd76579
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Sun Jul 22 21:27:30 2018 +0200

    added memset() implementation

commit 63438855be67baf55d9b464d29a2953548c164ba
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Sun Jul 22 21:09:33 2018 +0200

    added src/string/ to the makefile
    added simple strlen implementation

commit 9756626c613ac6bbbdacc0be848d6912a7374bef
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Sun Jul 22 18:50:30 2018 +0200

    added function prototypes to string.h

commit 24d78bd984238f098ff88cae140758027d26fdec
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Sun Jul 22 18:19:02 2018 +0200

    ignore DEV directory

commit 35af0fd91bfa98d461743992f314a002d44c040c
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Sun Jul 22 18:00:42 2018 +0200

    corrected block size
     the included char* does not contribute
     to the meta-data
    
    replaced extern int with extern char
     extern addresses point to chars
    
    use extern variables with &
     the value of linker symbols is irellevant
     the address is needed

commit 3aad3d3acb69629a1d23f5c9f858152ad43c6f9e
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Sun Jul 22 16:47:12 2018 +0200

    added custom docker image with compiler pre installed

commit 8362ccdc0888e345c34703570a4e8ee1e8729607
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Sat Jul 21 20:02:52 2018 +0200

    Makefile refactoring
    suppress compile commands
    added option to re enable output of compile commands
    
    changed SRC file adding
    changed file suffix replacement
    added more warning flags
    https://gcc.gnu.org/onlinedocs/gcc/Warning-Options.html
      -Wduplicated-cond           - warn about duplicate if conditions
      -Wduplicated-branches       - warn about if else duplicates
      -Wlogical-op                - warn about suspicious uses of logical operators in expressions
      -Wnull-dereference          - warn if paths dereference a null pointer
      -Wjump-misses-init          - warn if variable initialization may be jumped
      -Wshadow                    - warn if a local type or variable shadows another
      -Wdouble-promotion          - warn if a float is implicitly promoted to double
      -Wchkp                      - warn about invalid memory access
      -Winit-self                 - warn if variable is self initialized
      -Wswitch-default            - warn if switch has no default
      -Wswitch-enum               - warn if not all enum values are checked in switch case
      -Wunsafe-loop-optimizations - warn if loops cannot be optimized because unclear of loop bounds
      -Wundef                     - warn if an undefined identifier is evaluated
      -Wconversion                - warn for implicit conversion that may alter a value
      -Winline                    - warn if inline function cannot be inlined
    
    changed make rules to output less noise
    inspired by linux kernel make output

commit d24755538f5d088bcc54af32ab1ab3d1ec9051be
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Sat Jul 21 18:12:15 2018 +0200

    added __extension__ to non ISO C feature
    to suppres warnings
    added cast to macro
    in create_block
       added explicit cast
    in split_block
       suppress unused parameter warnings

commit 3a7b63db1f6e6eac0b1ba109e1324b2510dd2da4
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Sat Jul 21 18:08:16 2018 +0200

    added element to empty struct

commit 57b7f1a8f186c1f56d09b4f6b8ec40e17614f834
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Sat Jul 21 15:06:55 2018 +0200

    typo ...

commit 2eba63a242a0bac9dabf8c588f79d520515ae8a5
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Sat Jul 21 14:54:33 2018 +0200

    C++ compatibility
    changed restrict to __restrict__
    added extern C if used in C++ code

commit c4e6d8dfb4f647dc5a831186d3fb999eb1be3046
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Sat Jul 21 14:52:57 2018 +0200

    initializing errno to 0

commit 8d56ecb3977705156b3a407e732e27bb24c3320b
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Thu Jul 19 20:15:34 2018 +0200

    Makefile error
    the archiver was only archiving the first object file
    $< first prerequisite
    $^ all prerequisite
    oops ...

commit e081bb91e66f75234d09b6fb7cd5231a991868ee
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Thu Jul 19 20:08:12 2018 +0200

    wchar_t is a builtin type in C++

commit abb027c421d3cf745d9ea200c090e1c5da381f08
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Thu Jul 19 20:06:57 2018 +0200

    more Warnings

commit 08c2d2066190e7282642a73962891b1b129792a5
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Mon Jul 16 22:04:20 2018 +0200

    implemented creal() and cimag()

commit 9a86678782efdb30cee97bd7e629478573ceafd4
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Mon Jul 16 21:55:04 2018 +0200

    implemented bsearch()

commit 7b5344ae04cf8080004e0c8ced93d9592b989e44
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Mon Jul 16 21:51:50 2018 +0200

    implemented abs() and div() functions

commit 2b9e89be972e1bb19cf7df77ece24a735a7fff42
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Mon Jul 16 21:48:06 2018 +0200

    implemented abort()

commit 1f51e468925e5d2513fc3eb1520f0f092ce8d7d6
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Mon Jul 16 21:36:47 2018 +0200

    renamed bot to start and top to end

commit eb55cc1e8f16c7a044e1f7fa35289f6de6007519
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Fri Jul 13 22:33:31 2018 +0200

    moved some configuration to the appropriate location
    the size and limits of the heap are best defined in the linker script

commit 503c57ca8ae582fc59e0b5b0e94d5360b015cfdf
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Fri Jul 13 09:47:11 2018 +0200

    Makefile updates
    makefile parameters
    added more ci tests

commit ba73b45b761899cbd03922f5736012d4eed77278
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Fri Jul 13 09:34:19 2018 +0200

    added gitlab ci

commit f2be21e0f58d2562e0bde00a7a0ad14c541385c8
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Fri Jul 13 06:29:10 2018 +0200

    moved types from include/stdlib.h to include/types/*

commit 2edf467af0cdbaf6864708e8af46b3f5ba6a0dd7
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Fri Jul 13 06:07:34 2018 +0200

    added configuration documentation

commit 283c0ec23aa06526bda5425a0d6867b8e6b97ef9
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Thu Jul 12 21:53:54 2018 +0200

    Moved important configuration to Makefile
    changed MALLOC_HEAP_BOT to HEAP_BOT
    changed MALLOC_HEAP_TOP to HEAP_SIZE
    all processor dependant information can be changed via the Makefile
    this is to enable easy configuration

commit 9e46ee77f3a08c61c625f8bf0cfeaa94f7fd6285
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Thu Jul 12 21:38:14 2018 +0200

    fixed create_block
    missing overflow check
    control flow adjustments

commit df6a59f4449262cb2fbb2abfa48965746955c973
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Thu Jul 12 09:39:44 2018 +0200

    added function prototypes in complex.h

commit 96640b0092edfcbab706a270db173eb9ade68052
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Thu Jul 12 09:37:13 2018 +0200

    implemented malloc family of functions

commit 8e3db188cb81c7283ad24e41d18825dc6b3a562f
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Thu Jul 12 09:34:28 2018 +0200

    added .gitignore

commit 1806b761de0c450485edc17d7e6f205d8ac6f01b
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Thu Jul 12 09:33:04 2018 +0200

    typo

commit 00d3b09a07b1faf67cd58f7aad3b6facd6bfed24
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Tue Jul 10 14:34:59 2018 +0200

    Added Makefile
    moved config file
    starting with malloc family of functions
    implemented rand

commit 60ae99d63257e781483aae9d2988feb64c5b2d35
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Tue Jul 10 11:40:49 2018 +0200

    updated doc

commit bae23d5ac81c74040774d2a02cf7addfbd6e1e6c
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Tue Jul 10 11:40:14 2018 +0200

    reworked float

commit 9623064794c3a68ce28366b1cfd2273ceebd2bf7
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Tue Jul 10 11:07:49 2018 +0200

    completed limits

commit eecd16601e5a7cddd8a292b539614cdda51d2afd
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Tue Jul 10 10:50:21 2018 +0200

    completed stddef and moved NULL to macros

commit 40a847673e6b5d50095dab60d0d225291a30f2f6
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Tue Jul 10 10:26:16 2018 +0200

    moved stdint to individual headers

commit 7501c8e0df644dc452e56c44b69cf6ca3174acc9
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Tue Jul 10 10:09:35 2018 +0200

    added assert message

commit 4831844105851133226af53080ec1e35a9d919dc
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Tue Jul 10 09:52:33 2018 +0200

    implemented errno

commit af6315986a0ac36f44dd54c6e44a388cc15934a5
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Tue Jul 10 09:51:01 2018 +0200

    removed include guards from source files

commit 1e6d3bc097228d86e3f9a2453cfe6ff395e57572
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Tue Jul 10 09:45:29 2018 +0200

    ctype rework

commit fa8810d60dea8005a80acde18034957fa95e0758
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Tue Jul 10 09:09:39 2018 +0200

    assert rework

commit 90e237d8a0d55a236d2cffda282d5af0d9f9746a
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Mon Jul 9 22:58:56 2018 +0200

    moved Include/ to include/

commit 5d2afca988350503938d59a66027d08f02e2b67d
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Fri Feb 9 06:31:15 2018 +0100

    implemented ctype
    implemented stdlib allocation (incomplete)
    started assert interface
    added config.h

commit 70a29d50e0a88e8b9c841f9160073553e944d412
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Wed Feb 7 01:29:07 2018 +0100

    added missing libc headers (empty)

commit 9e0cbf34cd2e18b09e559865c6b29e85ae223c98
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Wed Feb 7 00:49:38 2018 +0100

    Updated Documentation/Headers.md
    removed Include/stdnoreturn.h
    updated freestanding headers
    moved types to Include/types/

commit faa3f44aafa2c99f08cd2ac8a7d80435980edcf9
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Sun Feb 4 14:58:01 2018 +0100

    fixed inverted C++ check

commit 8067555b28f328d4c826f6a68537554a61b71e66
Author: Peter Züger <zueger.peter@icloud.com>
Date:   Tue Jan 30 09:50:39 2018 +0100

    initial commit
