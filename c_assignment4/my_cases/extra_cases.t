- init:
    run: rm -f assignment4
    blocker: true

- build:
    run: gcc -std=c99 -Wall -Werror assignment4.c -o assignment4  # timeout: 5
    blocker: true

- case1_given_with_hw:
   run: ./assignment4 alice.txt instructions.txt
   points: 10
   script:
        - expect: "[ \r\n]*fight for your right to party[ \r\n]*"  # timeout: 5
        - expect: _EOF_  # timeout: 5
   return: 0

- case2_normal:
   run: ./assignment4 alice.txt instructions2.txt
   points: 10
   script:
        - expect: "[ \r\n]*theres is nothing permanent except change[ \r\n]*"  # timeout: 5
        - expect: _EOF_  # timeout: 5
   return: 0

- case3_long:
   run: ./assignment4 alice.txt instructions3.txt
   points: 10
   script:
        - expect: "[ \r\n]*gutenberg came to me and said mind your own business[ \r\n]*"  # timeout: 5
        - expect: _EOF_  # timeout: 5
   return: 0

- case4_edges:
   run: ./assignment4 alice.txt instructions4.txt
   points: 10
   script:
        - expect: "[ \r\n]*no meaning just edge case project this wonderland author ebooks[ \r\n]*"  # timeout: 5
        - expect: _EOF_  # timeout: 5
   return: 0

- case5_quote:
   run: ./assignment4 mobydick.txt instructions5.txt
   points: 10
   script:
        - expect: "[ \r\n]*live as if you were to die tomorrow[ \r\n]*"  # timeout: 5
        - expect: _EOF_  # timeout: 5
   return: 0

- case6_quote:
   run: ./assignment4 mobydick.txt instructions6.txt
   points: 10
   script:
        - expect: "[ \r\n]*learn as if you were to live tomorrow[ \r\n]*"  # timeout: 5
        - expect: _EOF_  # timeout: 5
   return: 0

- case7_quote2:
   run: ./assignment4 frankenstein.txt instructions7.txt
   points: 10
   script:
        - expect: "[ \r\n]*you must be the change you wish to see in the world[ \r\n]*"  # timeout: 5
        - expect: _EOF_  # timeout: 5
   return: 0

- case8_quote3:
   run: ./assignment4 frankenstein.txt instructions8.txt
   points: 10
   script:
        - expect: "[ \r\n]*that which does not kill us makes us stronger[ \r\n]*"  # timeout: 5
        - expect: _EOF_  # timeout: 5
   return: 0

- case9_all_punc:
   run: ./assignment4 macbeth.txt instructions9.txt
   points: 10
   script:
        - expect: "[ \r\n]*macbeth this hartpoboxcom disk as print prisoner macbeth[ \r\n]*"  # timeout: 5
        - expect: _EOF_  # timeout: 5
   return: 0

- case10_signature_xd:
   run: ./assignment4 macbeth.txt instructions10.txt
   points: 10
   script:
        - expect: "[ \r\n]*tesekkurler salih bora ozturk[ \r\n]*"  # timeout: 5
        - expect: _EOF_  # timeout: 5
   return: 0
