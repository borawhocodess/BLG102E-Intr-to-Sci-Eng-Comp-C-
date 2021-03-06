- init:
    run: rm -f assignment2
    blocker: true

- build:
    run: gcc -std=c99 -Wall -Werror assignment2.c -o assignment2  # timeout: 2
    blocker: true

- case0:
    run: ./assignment2
    points: 1
    script:
        - expect: "Target: "  # timeout: 2
        - send: "101"
        - expect: "Throw: "                   # timeout: 2
        - send: "18 S"
        - expect: "Points: 101\r\n"                   # timeout: 2
        - expect: "Throw: "                   # timeout: 2
        - send: "7 T"
        - expect: "Points: 101\r\n"                   # timeout: 2
        - expect: "Throw: "                   # timeout: 2
        - send: "9 D"
        - expect: "Points: 83\r\n"                   # timeout: 2
        - expect: "Throw: "                   # timeout: 2
        - send: "1 O"
        - expect: "Points: 58\r\n"                   # timeout: 2
        - expect: "Throw: "                   # timeout: 2
        - send: "10 T"
        - expect: "Points: 28\r\n"                   # timeout: 2
        - expect: "Throw: "                   # timeout: 2
        - send: "15 T"
        - expect: "Points: 28\r\n"                   # timeout: 2
        - expect: "Throw: "                   # timeout: 2
        - send: "12 S"
        - expect: "Points: 16\r\n"                   # timeout: 2
        - expect: "Throw: "                   # timeout: 2
        - send: "16 S"
        - expect: "Points: 16\r\n"                   # timeout: 2
        - expect: "Throw: "                   # timeout: 2
        - send: "8 D"
        - expect: "Points: 0\r\n"                   # timeout: 2
    exit: 0

- case1:
    run: ./assignment2
    points: 1
    script:
        - expect: "Target: "  # timeout: 2
        - send: "301"
        - expect: "Throw: "                   # timeout: 2
        - send: "1 O"
        - expect: "Points: 301\r\n"                   # timeout: 2
        - expect: "Throw: "                   # timeout: 2
        - send: "1 I"
        - expect: "Points: 301\r\n"                   # timeout: 2
        - expect: "Throw: "                   # timeout: 2
        - send: "20 D"
        - expect: "Points: 261\r\n"                   # timeout: 2
        - expect: "Throw: "                   # timeout: 2
        - send: "20 S"
        - expect: "Points: 241\r\n"                   # timeout: 2
        - expect: "Throw: "                   # timeout: 2
        - send: "17 S"
        - expect: "Points: 224\r\n"                   # timeout: 2
        - expect: "Throw: "                   # timeout: 2
        - send: "8 T"
        - expect: "Points: 200\r\n"                   # timeout: 2
        - expect: "Throw: "                   # timeout: 2
        - send: "1 I"
        - expect: "Points: 150\r\n"                   # timeout: 2
        - expect: "Throw: "                   # timeout: 2
        - send: "1 O"
        - expect: "Points: 125\r\n"                   # timeout: 2
        - expect: "Throw: "                   # timeout: 2
        - send: "13 T"
        - expect: "Points: 86\r\n"                   # timeout: 2
        - expect: "Throw: "                   # timeout: 2
        - send: "8 S"
        - expect: "Points: 78\r\n"                   # timeout: 2
        - expect: "Throw: "                   # timeout: 2
        - send: "19 T"
        - expect: "Points: 21\r\n"                   # timeout: 2
        - expect: "Throw: "                   # timeout: 2
        - send: "1 S"
        - expect: "Points: 20\r\n"                   # timeout: 2
        - expect: "Throw: "                   # timeout: 2
        - send: "10 D"
        - expect: "Points: 0\r\n"                   # timeout: 2

- case2:
    run: ./assignment2
    points: 1
    script:
        - expect: "Target: "  # timeout: 2
        - send: "301"
        - expect: "Throw: "                   # timeout: 2
        - send: "20 I"
        - expect: "Points: 301\r\n"                   # timeout: 2
        - expect: "Throw: "                   # timeout: 2
        - send: "1 O"
        - expect: "Points: 301\r\n"                   # timeout: 2
        - expect: "Throw: "                   # timeout: 2
        - send: "10 D"
        - expect: "Points: 281\r\n"                   # timeout: 2
        - expect: "Throw: "                   # timeout: 2
        - send: "30 S"
        - expect: "Points: 251\r\n"                   # timeout: 2
        - expect: "Throw: "                   # timeout: 2
        - send: "17 S"
        - expect: "Points: 234\r\n"                   # timeout: 2
        - expect: "Throw: "                   # timeout: 2
        - send: "8 T"
        - expect: "Points: 210\r\n"                   # timeout: 2
        - expect: "Throw: "                   # timeout: 2
        - send: "1 I"
        - expect: "Points: 160\r\n"                   # timeout: 2
        - expect: "Throw: "                   # timeout: 2
        - send: "1 O"
        - expect: "Points: 135\r\n"                   # timeout: 2
        - expect: "Throw: "                   # timeout: 2
        - send: "13 T"
        - expect: "Points: 96\r\n"                   # timeout: 2
        - expect: "Throw: "                   # timeout: 2
        - send: "8 S"
        - expect: "Points: 88\r\n"                   # timeout: 2
        - expect: "Throw: "                   # timeout: 2
        - send: "19 T"
        - expect: "Points: 31\r\n"                   # timeout: 2
        - expect: "Throw: "                   # timeout: 2
        - send: "1 S"
        - expect: "Points: 30\r\n"                   # timeout: 2
        - expect: "Throw: "                   # timeout: 2
        - send: "10 S"
        - expect: "Points: 20\r\n"                   # timeout: 2
        - expect: "Throw: "                   # timeout: 2
        - send: "10 T"
        - expect: "Points: 20\r\n"                   # timeout: 2
        - expect: "Throw: "                   # timeout: 2
        - send: "10 D"
        - expect: "Points: 0\r\n"                    # timeout: 2

- case3:
    run: ./assignment2
    points: 1
    script:
        - expect: "Target: "  # timeout: 2
        - send: "101"
        - expect: "Throw: "                   # timeout: 2
        - send: "10 T"
        - expect: "Points: 101\r\n"                   # timeout: 2
        - expect: "Throw: "                   # timeout: 2
        - send: "5 O"
        - expect: "Points: 101\r\n"                   # timeout: 2
        - expect: "Throw: "                   # timeout: 2
        - send: "5 D"
        - expect: "Points: 91\r\n"                   # timeout: 2
        - expect: "Throw: "                   # timeout: 2
        - send: "10 S"
        - expect: "Points: 81\r\n"                   # timeout: 2
        - expect: "Throw: "                   # timeout: 2
        - send: "17 T"
        - expect: "Points: 30\r\n"                   # timeout: 2
        - expect: "Throw: "                   # timeout: 2
        - send: "1 T"
        - expect: "Points: 27\r\n"                   # timeout: 2
        - expect: "Throw: "                   # timeout: 2
        - send: "2 D"
        - expect: "Points: 23\r\n"                   # timeout: 2
        - expect: "Throw: "                   # timeout: 2
        - send: "1 O"
        - expect: "Points: 23\r\n"                   # timeout: 2
        - expect: "Throw: "                   # timeout: 2
        - send: "13 T"
        - expect: "Points: 23\r\n"                   # timeout: 2
        - expect: "Throw: "                   # timeout: 2
        - send: "8 T"
        - expect: "Points: 23\r\n"                   # timeout: 2
        - expect: "Throw: "                   # timeout: 2
        - send: "9 D"
        - expect: "Points: 5\r\n"                   # timeout: 2
        - expect: "Throw: "                   # timeout: 2
        - send: "1 S"
        - expect: "Points: 4\r\n"                   # timeout: 2
        - expect: "Throw: "                   # timeout: 2
        - send: "10 S"
        - expect: "Points: 4\r\n"                   # timeout: 2
        - expect: "Throw: "                   # timeout: 2
        - send: "10 T"
        - expect: "Points: 4\r\n"                   # timeout: 2
        - expect: "Throw: "                   # timeout: 2
        - send: "4  S"
        - expect: "Points: 4\r\n"                    # timeout: 2
        - send: "2  D"
        - expect: "Points: 0\r\n"                    # timeout: 2

- case4:
    run: ./assignment2
    points: 1
    script:
        - expect: "Target: "  # timeout: 2
        - send: "501"
        - expect: "Throw: "                   # timeout: 2
        - send: "20 T"
        - expect: "Points: 501\r\n"                   # timeout: 2
        - expect: "Throw: "                   # timeout: 2
        - send: "10 S"
        - expect: "Points: 501\r\n"                   # timeout: 2
        - expect: "Throw: "                   # timeout: 2
        - send: "6 O"
        - expect: "Points: 501\r\n"                   # timeout: 2
        - expect: "Throw: "                   # timeout: 2
        - send: "10 S"
        - expect: "Points: 501\r\n"                   # timeout: 2
        - expect: "Throw: "                   # timeout: 2
        - send: "20 D"
        - expect: "Points: 461\r\n"                   # timeout: 2
        - expect: "Throw: "                   # timeout: 2
        - send: "20 T"
        - expect: "Points: 401\r\n"                   # timeout: 2
        - expect: "Throw: "                   # timeout: 2
        - send: "15 T"
        - expect: "Points: 356\r\n"                   # timeout: 2
        - expect: "Throw: "                   # timeout: 2
        - send: "1 I"
        - expect: "Points: 306\r\n"                   # timeout: 2
        - expect: "Throw: "                   # timeout: 2
        - send: "1 O"
        - expect: "Points: 281\r\n"                   # timeout: 2
        - expect: "Throw: "                   # timeout: 2
        - send: "13 I"
        - expect: "Points: 231\r\n"                   # timeout: 2
        - expect: "Throw: "                   # timeout: 2
        - send: "8 T"
        - expect: "Points: 207\r\n"                   # timeout: 2
        - expect: "Throw: "                   # timeout: 2
        - send: "19 D"
        - expect: "Points: 169\r\n"                   # timeout: 2
        - expect: "Throw: "                   # timeout: 2
        - send: "20 T"
        - expect: "Points: 109\r\n"                   # timeout: 2
        - expect: "Throw: "                   # timeout: 2
        - send: "10 S"
        - expect: "Points: 99\r\n"                   # timeout: 2
        - expect: "Throw: "                   # timeout: 2
        - send: "10 T"
        - expect: "Points: 69\r\n"                   # timeout: 2
        - expect: "Throw: "                   # timeout: 2
        - send: "10  I"
        - expect: "Points: 19\r\n"                    # timeout: 2
        - expect: "Throw: "                   # timeout: 2
        - send: "19  D"
        - expect: "Points: 19\r\n"                    # timeout: 2
        - expect: "Throw: "                   # timeout: 2
        - send: "1   S"
        - expect: "Points: 18\r\n"                    # timeout: 2
        - send: "9   D"
        - expect: "Points: 0\r\n"                    # timeout: 2
    exit: 0