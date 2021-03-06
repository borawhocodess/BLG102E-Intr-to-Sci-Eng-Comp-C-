- init:
    run: rm -f assignment3
    blocker: true

- build:
    run: gcc -std=c99 -Wall -Werror assignment3.c -o assignment3  # timeout: 2
    blocker: true

- case0:
    run: ./assignment3
    points: 2
    script:
        - expect: "Size: "
        - send: "10"
        - expect: "Cars: "
        - send: "26"
        - expect: "Locations: "
        - send: "10 10"
        - expect: "Locations: "
        - send: "3 3"
        - expect: "Locations: "
        - send: "3 3"
        - expect: "Locations: "
        - send: "10 9"
        - expect: "Locations: "
        - send: "2 7"
        - expect: "Locations: "
        - send: "1 4"
        - expect: "Locations: "
        - send: "7 7"
        - expect: "Locations: "
        - send: "2 2"
        - expect: "Locations: "
        - send: "2 5"
        - expect: "Locations: "
        - send: "10 10"
        - expect: "Locations: "
        - send: "1 3"
        - expect: "Locations: "
        - send: "4 2"
        - expect: "Locations: "
        - send: "8 5"
        - expect: "Locations: "
        - send: "8 6"
        - expect: "Locations: "
        - send: "7 6"
        - expect: "Locations: "
        - send: "2 6"
        - expect: "Locations: "
        - send: "7 4"
        - expect: "Locations: "
        - send: "10 10"
        - expect: "Locations: "
        - send: "8 9"
        - expect: "Locations: "
        - send: "10 10"
        - expect: "Locations: "
        - send: "8 10"
        - expect: "Locations: "
        - send: "3 6"
        - expect: "Locations: "
        - send: "9 4"
        - expect: "Locations: "
        - send: "7 10"
        - expect: "Locations: "
        - send: "10 6"
        - expect: "Locations: "
        - send: "2 10"
        - expect: "Best Slot Found In: 8 1\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    return: 0

- case1:
    run: ./assignment3
    points: 2
    script:
        - expect: "Size: "
        - send: "11"
        - expect: "Cars: "
        - send: "9"
        - expect: "Locations: "
        - send: "6 5"
        - expect: "Locations: "
        - send: "3 5"
        - expect: "Locations: "
        - send: "1 3"
        - expect: "Locations: "
        - send: "9 6"
        - expect: "Locations: "
        - send: "9 8"
        - expect: "Locations: "
        - send: "7 3"
        - expect: "Locations: "
        - send: "10 4"
        - expect: "Locations: "
        - send: "5 7"
        - expect: "Locations: "
        - send: "2 5"
        - expect: "Best Slot Found In: 1 11\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    return: 0

- case2:
    run: ./assignment3
    points: 2
    script:
        - expect: "Size: "
        - send: "11"
        - expect: "Cars: "
        - send: "46"
        - expect: "Locations: "
        - send: "8 1"
        - expect: "Locations: "
        - send: "11 10"
        - expect: "Locations: "
        - send: "7 3"
        - expect: "Locations: "
        - send: "11 1"
        - expect: "Locations: "
        - send: "1 3"
        - expect: "Locations: "
        - send: "10 4"
        - expect: "Locations: "
        - send: "5 10"
        - expect: "Locations: "
        - send: "8 6"
        - expect: "Locations: "
        - send: "1 4"
        - expect: "Locations: "
        - send: "9 9"
        - expect: "Locations: "
        - send: "11 4"
        - expect: "Locations: "
        - send: "10 9"
        - expect: "Locations: "
        - send: "7 3"
        - expect: "Locations: "
        - send: "2 6"
        - expect: "Locations: "
        - send: "7 9"
        - expect: "Locations: "
        - send: "8 1"
        - expect: "Locations: "
        - send: "10 5"
        - expect: "Locations: "
        - send: "10 5"
        - expect: "Locations: "
        - send: "8 7"
        - expect: "Locations: "
        - send: "3 6"
        - expect: "Locations: "
        - send: "7 10"
        - expect: "Locations: "
        - send: "9 1"
        - expect: "Locations: "
        - send: "8 4"
        - expect: "Locations: "
        - send: "4 6"
        - expect: "Locations: "
        - send: "7 1"
        - expect: "Locations: "
        - send: "4 6"
        - expect: "Locations: "
        - send: "4 11"
        - expect: "Locations: "
        - send: "1 9"
        - expect: "Locations: "
        - send: "2 11"
        - expect: "Locations: "
        - send: "3 6"
        - expect: "Locations: "
        - send: "8 9"
        - expect: "Locations: "
        - send: "4 4"
        - expect: "Locations: "
        - send: "2 2"
        - expect: "Locations: "
        - send: "6 7"
        - expect: "Locations: "
        - send: "6 8"
        - expect: "Locations: "
        - send: "1 10"
        - expect: "Locations: "
        - send: "6 10"
        - expect: "Locations: "
        - send: "10 11"
        - expect: "Locations: "
        - send: "2 2"
        - expect: "Locations: "
        - send: "6 6"
        - expect: "Locations: "
        - send: "11 7"
        - expect: "Locations: "
        - send: "9 2"
        - expect: "Locations: "
        - send: "6 9"
        - expect: "Locations: "
        - send: "10 5"
        - expect: "Locations: "
        - send: "6 1"
        - expect: "Locations: "
        - send: "10 11"
        - expect: "Best Slot Found In: 1 1\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    return: 0

- case3:
    run: ./assignment3
    points: 2
    script:
        - expect: "Size: "
        - send: "8"
        - expect: "Cars: "
        - send: "10"
        - expect: "Locations: "
        - send: "5 8"
        - expect: "Locations: "
        - send: "4 7"
        - expect: "Locations: "
        - send: "4 1"
        - expect: "Locations: "
        - send: "5 3"
        - expect: "Locations: "
        - send: "6 1"
        - expect: "Locations: "
        - send: "8 4"
        - expect: "Locations: "
        - send: "1 4"
        - expect: "Locations: "
        - send: "5 2"
        - expect: "Locations: "
        - send: "1 7"
        - expect: "Locations: "
        - send: "7 3"
        - expect: "Best Slot Found In: 1 1\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    return: 0

- case4:
    run: ./assignment3
    points: 2
    script:
        - expect: "Size: "
        - send: "11"
        - expect: "Cars: "
        - send: "91"
        - expect: "Locations: "
        - send: "8 6"
        - expect: "Locations: "
        - send: "8 11"
        - expect: "Locations: "
        - send: "4 4"
        - expect: "Locations: "
        - send: "8 2"
        - expect: "Locations: "
        - send: "3 9"
        - expect: "Locations: "
        - send: "8 3"
        - expect: "Locations: "
        - send: "3 9"
        - expect: "Locations: "
        - send: "4 4"
        - expect: "Locations: "
        - send: "11 3"
        - expect: "Locations: "
        - send: "8 9"
        - expect: "Locations: "
        - send: "1 10"
        - expect: "Locations: "
        - send: "8 8"
        - expect: "Locations: "
        - send: "4 10"
        - expect: "Locations: "
        - send: "3 4"
        - expect: "Locations: "
        - send: "9 1"
        - expect: "Locations: "
        - send: "7 3"
        - expect: "Locations: "
        - send: "4 1"
        - expect: "Locations: "
        - send: "2 7"
        - expect: "Locations: "
        - send: "4 8"
        - expect: "Locations: "
        - send: "6 6"
        - expect: "Locations: "
        - send: "5 2"
        - expect: "Locations: "
        - send: "6 7"
        - expect: "Locations: "
        - send: "11 9"
        - expect: "Locations: "
        - send: "8 8"
        - expect: "Locations: "
        - send: "1 3"
        - expect: "Locations: "
        - send: "6 10"
        - expect: "Locations: "
        - send: "1 11"
        - expect: "Locations: "
        - send: "6 3"
        - expect: "Locations: "
        - send: "8 8"
        - expect: "Locations: "
        - send: "6 5"
        - expect: "Locations: "
        - send: "6 11"
        - expect: "Locations: "
        - send: "6 7"
        - expect: "Locations: "
        - send: "11 5"
        - expect: "Locations: "
        - send: "3 4"
        - expect: "Locations: "
        - send: "1 8"
        - expect: "Locations: "
        - send: "9 6"
        - expect: "Locations: "
        - send: "8 4"
        - expect: "Locations: "
        - send: "10 5"
        - expect: "Locations: "
        - send: "10 7"
        - expect: "Locations: "
        - send: "1 8"
        - expect: "Locations: "
        - send: "9 6"
        - expect: "Locations: "
        - send: "7 7"
        - expect: "Locations: "
        - send: "4 10"
        - expect: "Locations: "
        - send: "9 11"
        - expect: "Locations: "
        - send: "5 4"
        - expect: "Locations: "
        - send: "2 8"
        - expect: "Locations: "
        - send: "3 7"
        - expect: "Locations: "
        - send: "4 2"
        - expect: "Locations: "
        - send: "1 6"
        - expect: "Locations: "
        - send: "3 1"
        - expect: "Locations: "
        - send: "11 1"
        - expect: "Locations: "
        - send: "4 7"
        - expect: "Locations: "
        - send: "2 3"
        - expect: "Locations: "
        - send: "11 9"
        - expect: "Locations: "
        - send: "7 1"
        - expect: "Locations: "
        - send: "6 4"
        - expect: "Locations: "
        - send: "4 10"
        - expect: "Locations: "
        - send: "10 7"
        - expect: "Locations: "
        - send: "8 8"
        - expect: "Locations: "
        - send: "4 1"
        - expect: "Locations: "
        - send: "9 6"
        - expect: "Locations: "
        - send: "7 11"
        - expect: "Locations: "
        - send: "1 10"
        - expect: "Locations: "
        - send: "10 1"
        - expect: "Locations: "
        - send: "4 11"
        - expect: "Locations: "
        - send: "11 1"
        - expect: "Locations: "
        - send: "11 1"
        - expect: "Locations: "
        - send: "8 10"
        - expect: "Locations: "
        - send: "1 5"
        - expect: "Locations: "
        - send: "7 7"
        - expect: "Locations: "
        - send: "3 10"
        - expect: "Locations: "
        - send: "10 5"
        - expect: "Locations: "
        - send: "8 7"
        - expect: "Locations: "
        - send: "11 3"
        - expect: "Locations: "
        - send: "3 4"
        - expect: "Locations: "
        - send: "1 11"
        - expect: "Locations: "
        - send: "7 7"
        - expect: "Locations: "
        - send: "8 7"
        - expect: "Locations: "
        - send: "5 4"
        - expect: "Locations: "
        - send: "6 6"
        - expect: "Locations: "
        - send: "3 3"
        - expect: "Locations: "
        - send: "7 11"
        - expect: "Locations: "
        - send: "3 1"
        - expect: "Locations: "
        - send: "7 4"
        - expect: "Locations: "
        - send: "5 1"
        - expect: "Locations: "
        - send: "8 8"
        - expect: "Locations: "
        - send: "10 7"
        - expect: "Locations: "
        - send: "1 5"
        - expect: "Locations: "
        - send: "2 9"
        - expect: "Locations: "
        - send: "7 2"
        - expect: "Locations: "
        - send: "10 7"
        - expect: "Best Slot Found In: 1 1\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    return: 0

- case5:
    run: ./assignment3
    points: 2
    script:
        - expect: "Size: "
        - send: "11"
        - expect: "Cars: "
        - send: "4"
        - expect: "Locations: "
        - send: "3 6"
        - expect: "Locations: "
        - send: "10 5"
        - expect: "Locations: "
        - send: "9 4"
        - expect: "Locations: "
        - send: "11 10"
        - expect: "Best Slot Found In: 1 1\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    return: 0

- case6:
    run: ./assignment3
    points: 2
    script:
        - expect: "Size: "
        - send: "9"
        - expect: "Cars: "
        - send: "1"
        - expect: "Locations: "
        - send: "1 5"
        - expect: "Best Slot Found In: 9 1\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    return: 0

- case7:
    run: ./assignment3
    points: 2
    script:
        - expect: "Size: "
        - send: "6"
        - expect: "Cars: "
        - send: "23"
        - expect: "Locations: "
        - send: "2 4"
        - expect: "Locations: "
        - send: "4 6"
        - expect: "Locations: "
        - send: "4 6"
        - expect: "Locations: "
        - send: "2 3"
        - expect: "Locations: "
        - send: "2 3"
        - expect: "Locations: "
        - send: "4 5"
        - expect: "Locations: "
        - send: "3 1"
        - expect: "Locations: "
        - send: "4 2"
        - expect: "Locations: "
        - send: "4 5"
        - expect: "Locations: "
        - send: "5 6"
        - expect: "Locations: "
        - send: "4 5"
        - expect: "Locations: "
        - send: "6 6"
        - expect: "Locations: "
        - send: "3 1"
        - expect: "Locations: "
        - send: "6 2"
        - expect: "Locations: "
        - send: "5 4"
        - expect: "Locations: "
        - send: "5 5"
        - expect: "Locations: "
        - send: "6 6"
        - expect: "Locations: "
        - send: "2 1"
        - expect: "Locations: "
        - send: "5 3"
        - expect: "Locations: "
        - send: "4 1"
        - expect: "Locations: "
        - send: "3 5"
        - expect: "Locations: "
        - send: "3 5"
        - expect: "Locations: "
        - send: "5 6"
        - expect: "Best Slot Found In: 1 6\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    return: 0

- case8:
    run: ./assignment3
    points: 2
    script:
        - expect: "Size: "
        - send: "13"
        - expect: "Cars: "
        - send: "20"
        - expect: "Locations: "
        - send: "12 1"
        - expect: "Locations: "
        - send: "10 5"
        - expect: "Locations: "
        - send: "9 6"
        - expect: "Locations: "
        - send: "1 4"
        - expect: "Locations: "
        - send: "12 9"
        - expect: "Locations: "
        - send: "1 3"
        - expect: "Locations: "
        - send: "9 2"
        - expect: "Locations: "
        - send: "8 6"
        - expect: "Locations: "
        - send: "8 7"
        - expect: "Locations: "
        - send: "2 8"
        - expect: "Locations: "
        - send: "8 6"
        - expect: "Locations: "
        - send: "7 11"
        - expect: "Locations: "
        - send: "10 5"
        - expect: "Locations: "
        - send: "3 2"
        - expect: "Locations: "
        - send: "12 7"
        - expect: "Locations: "
        - send: "10 13"
        - expect: "Locations: "
        - send: "7 8"
        - expect: "Locations: "
        - send: "4 4"
        - expect: "Locations: "
        - send: "3 6"
        - expect: "Locations: "
        - send: "9 3"
        - expect: "Best Slot Found In: 1 13\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    return: 0

- case9:
    run: ./assignment3
    points: 2
    script:
        - expect: "Size: "
        - send: "7"
        - expect: "Cars: "
        - send: "37"
        - expect: "Locations: "
        - send: "1 3"
        - expect: "Locations: "
        - send: "1 6"
        - expect: "Locations: "
        - send: "1 4"
        - expect: "Locations: "
        - send: "4 1"
        - expect: "Locations: "
        - send: "4 5"
        - expect: "Locations: "
        - send: "3 6"
        - expect: "Locations: "
        - send: "5 7"
        - expect: "Locations: "
        - send: "1 4"
        - expect: "Locations: "
        - send: "1 5"
        - expect: "Locations: "
        - send: "3 4"
        - expect: "Locations: "
        - send: "2 1"
        - expect: "Locations: "
        - send: "5 6"
        - expect: "Locations: "
        - send: "6 5"
        - expect: "Locations: "
        - send: "2 2"
        - expect: "Locations: "
        - send: "4 6"
        - expect: "Locations: "
        - send: "5 2"
        - expect: "Locations: "
        - send: "6 3"
        - expect: "Locations: "
        - send: "1 6"
        - expect: "Locations: "
        - send: "7 4"
        - expect: "Locations: "
        - send: "7 1"
        - expect: "Locations: "
        - send: "2 7"
        - expect: "Locations: "
        - send: "6 6"
        - expect: "Locations: "
        - send: "5 7"
        - expect: "Locations: "
        - send: "1 3"
        - expect: "Locations: "
        - send: "2 3"
        - expect: "Locations: "
        - send: "4 1"
        - expect: "Locations: "
        - send: "2 1"
        - expect: "Locations: "
        - send: "4 7"
        - expect: "Locations: "
        - send: "4 5"
        - expect: "Locations: "
        - send: "1 7"
        - expect: "Locations: "
        - send: "1 3"
        - expect: "Locations: "
        - send: "1 6"
        - expect: "Locations: "
        - send: "6 6"
        - expect: "Locations: "
        - send: "5 3"
        - expect: "Locations: "
        - send: "1 2"
        - expect: "Locations: "
        - send: "3 2"
        - expect: "Locations: "
        - send: "6 6"
        - expect: "Best Slot Found In: 7 7\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    return: 0

- case10:
    run: ./assignment3
    points: 2
    script:
        - expect: "Size: "
        - send: "6"
        - expect: "Cars: "
        - send: "34"
        - expect: "Locations: "
        - send: "6 5"
        - expect: "Locations: "
        - send: "3 4"
        - expect: "Locations: "
        - send: "5 2"
        - expect: "Locations: "
        - send: "3 3"
        - expect: "Locations: "
        - send: "5 2"
        - expect: "Locations: "
        - send: "4 3"
        - expect: "Locations: "
        - send: "5 4"
        - expect: "Locations: "
        - send: "2 2"
        - expect: "Locations: "
        - send: "4 3"
        - expect: "Locations: "
        - send: "6 5"
        - expect: "Locations: "
        - send: "5 3"
        - expect: "Locations: "
        - send: "6 1"
        - expect: "Locations: "
        - send: "4 2"
        - expect: "Locations: "
        - send: "3 3"
        - expect: "Locations: "
        - send: "6 1"
        - expect: "Locations: "
        - send: "6 6"
        - expect: "Locations: "
        - send: "6 2"
        - expect: "Locations: "
        - send: "3 2"
        - expect: "Locations: "
        - send: "2 4"
        - expect: "Locations: "
        - send: "2 6"
        - expect: "Locations: "
        - send: "5 5"
        - expect: "Locations: "
        - send: "6 1"
        - expect: "Locations: "
        - send: "6 1"
        - expect: "Locations: "
        - send: "1 3"
        - expect: "Locations: "
        - send: "1 6"
        - expect: "Locations: "
        - send: "1 5"
        - expect: "Locations: "
        - send: "6 6"
        - expect: "Locations: "
        - send: "5 1"
        - expect: "Locations: "
        - send: "5 5"
        - expect: "Locations: "
        - send: "3 3"
        - expect: "Locations: "
        - send: "6 2"
        - expect: "Locations: "
        - send: "2 3"
        - expect: "Locations: "
        - send: "2 2"
        - expect: "Locations: "
        - send: "4 3"
        - expect: "Best Slot Found In: 1 1\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    return: 0

- case11:
    run: ./assignment3
    points: 2
    script:
        - expect: "Size: "
        - send: "12"
        - expect: "Cars: "
        - send: "88"
        - expect: "Locations: "
        - send: "12 2"
        - expect: "Locations: "
        - send: "1 11"
        - expect: "Locations: "
        - send: "12 12"
        - expect: "Locations: "
        - send: "11 4"
        - expect: "Locations: "
        - send: "7 3"
        - expect: "Locations: "
        - send: "7 7"
        - expect: "Locations: "
        - send: "8 12"
        - expect: "Locations: "
        - send: "11 10"
        - expect: "Locations: "
        - send: "6 7"
        - expect: "Locations: "
        - send: "9 1"
        - expect: "Locations: "
        - send: "3 12"
        - expect: "Locations: "
        - send: "6 10"
        - expect: "Locations: "
        - send: "2 7"
        - expect: "Locations: "
        - send: "10 3"
        - expect: "Locations: "
        - send: "7 12"
        - expect: "Locations: "
        - send: "7 10"
        - expect: "Locations: "
        - send: "5 11"
        - expect: "Locations: "
        - send: "12 9"
        - expect: "Locations: "
        - send: "2 2"
        - expect: "Locations: "
        - send: "12 8"
        - expect: "Locations: "
        - send: "5 7"
        - expect: "Locations: "
        - send: "7 12"
        - expect: "Locations: "
        - send: "6 5"
        - expect: "Locations: "
        - send: "1 4"
        - expect: "Locations: "
        - send: "11 1"
        - expect: "Locations: "
        - send: "4 6"
        - expect: "Locations: "
        - send: "12 1"
        - expect: "Locations: "
        - send: "7 1"
        - expect: "Locations: "
        - send: "8 4"
        - expect: "Locations: "
        - send: "7 6"
        - expect: "Locations: "
        - send: "8 1"
        - expect: "Locations: "
        - send: "8 12"
        - expect: "Locations: "
        - send: "3 7"
        - expect: "Locations: "
        - send: "8 5"
        - expect: "Locations: "
        - send: "9 8"
        - expect: "Locations: "
        - send: "12 1"
        - expect: "Locations: "
        - send: "6 6"
        - expect: "Locations: "
        - send: "4 3"
        - expect: "Locations: "
        - send: "2 8"
        - expect: "Locations: "
        - send: "6 5"
        - expect: "Locations: "
        - send: "9 1"
        - expect: "Locations: "
        - send: "10 12"
        - expect: "Locations: "
        - send: "2 8"
        - expect: "Locations: "
        - send: "5 1"
        - expect: "Locations: "
        - send: "12 11"
        - expect: "Locations: "
        - send: "10 7"
        - expect: "Locations: "
        - send: "4 5"
        - expect: "Locations: "
        - send: "10 6"
        - expect: "Locations: "
        - send: "12 6"
        - expect: "Locations: "
        - send: "2 12"
        - expect: "Locations: "
        - send: "5 6"
        - expect: "Locations: "
        - send: "4 10"
        - expect: "Locations: "
        - send: "3 7"
        - expect: "Locations: "
        - send: "12 5"
        - expect: "Locations: "
        - send: "6 10"
        - expect: "Locations: "
        - send: "1 6"
        - expect: "Locations: "
        - send: "10 2"
        - expect: "Locations: "
        - send: "6 3"
        - expect: "Locations: "
        - send: "9 2"
        - expect: "Locations: "
        - send: "7 12"
        - expect: "Locations: "
        - send: "12 5"
        - expect: "Locations: "
        - send: "6 3"
        - expect: "Locations: "
        - send: "9 8"
        - expect: "Locations: "
        - send: "1 8"
        - expect: "Locations: "
        - send: "1 2"
        - expect: "Locations: "
        - send: "7 9"
        - expect: "Locations: "
        - send: "7 10"
        - expect: "Locations: "
        - send: "6 2"
        - expect: "Locations: "
        - send: "8 9"
        - expect: "Locations: "
        - send: "10 6"
        - expect: "Locations: "
        - send: "6 10"
        - expect: "Locations: "
        - send: "11 8"
        - expect: "Locations: "
        - send: "3 8"
        - expect: "Locations: "
        - send: "2 11"
        - expect: "Locations: "
        - send: "9 9"
        - expect: "Locations: "
        - send: "11 9"
        - expect: "Locations: "
        - send: "1 8"
        - expect: "Locations: "
        - send: "3 9"
        - expect: "Locations: "
        - send: "3 3"
        - expect: "Locations: "
        - send: "9 7"
        - expect: "Locations: "
        - send: "9 7"
        - expect: "Locations: "
        - send: "3 7"
        - expect: "Locations: "
        - send: "9 8"
        - expect: "Locations: "
        - send: "8 8"
        - expect: "Locations: "
        - send: "9 5"
        - expect: "Locations: "
        - send: "1 6"
        - expect: "Locations: "
        - send: "6 4"
        - expect: "Locations: "
        - send: "5 8"
        - expect: "Best Slot Found In: 2 5\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    return: 0

- case12:
    run: ./assignment3
    points: 2
    script:
        - expect: "Size: "
        - send: "12"
        - expect: "Cars: "
        - send: "54"
        - expect: "Locations: "
        - send: "7 8"
        - expect: "Locations: "
        - send: "7 9"
        - expect: "Locations: "
        - send: "8 7"
        - expect: "Locations: "
        - send: "8 2"
        - expect: "Locations: "
        - send: "7 11"
        - expect: "Locations: "
        - send: "5 7"
        - expect: "Locations: "
        - send: "5 5"
        - expect: "Locations: "
        - send: "2 8"
        - expect: "Locations: "
        - send: "11 2"
        - expect: "Locations: "
        - send: "7 11"
        - expect: "Locations: "
        - send: "9 7"
        - expect: "Locations: "
        - send: "7 2"
        - expect: "Locations: "
        - send: "1 1"
        - expect: "Locations: "
        - send: "5 9"
        - expect: "Locations: "
        - send: "8 3"
        - expect: "Locations: "
        - send: "3 6"
        - expect: "Locations: "
        - send: "2 1"
        - expect: "Locations: "
        - send: "6 1"
        - expect: "Locations: "
        - send: "7 2"
        - expect: "Locations: "
        - send: "3 6"
        - expect: "Locations: "
        - send: "4 11"
        - expect: "Locations: "
        - send: "12 8"
        - expect: "Locations: "
        - send: "3 5"
        - expect: "Locations: "
        - send: "7 5"
        - expect: "Locations: "
        - send: "6 6"
        - expect: "Locations: "
        - send: "7 3"
        - expect: "Locations: "
        - send: "12 2"
        - expect: "Locations: "
        - send: "4 4"
        - expect: "Locations: "
        - send: "6 8"
        - expect: "Locations: "
        - send: "1 5"
        - expect: "Locations: "
        - send: "2 7"
        - expect: "Locations: "
        - send: "11 8"
        - expect: "Locations: "
        - send: "8 8"
        - expect: "Locations: "
        - send: "8 6"
        - expect: "Locations: "
        - send: "9 2"
        - expect: "Locations: "
        - send: "11 12"
        - expect: "Locations: "
        - send: "12 11"
        - expect: "Locations: "
        - send: "12 6"
        - expect: "Locations: "
        - send: "3 10"
        - expect: "Locations: "
        - send: "3 9"
        - expect: "Locations: "
        - send: "3 9"
        - expect: "Locations: "
        - send: "3 3"
        - expect: "Locations: "
        - send: "2 6"
        - expect: "Locations: "
        - send: "10 7"
        - expect: "Locations: "
        - send: "5 10"
        - expect: "Locations: "
        - send: "12 10"
        - expect: "Locations: "
        - send: "5 2"
        - expect: "Locations: "
        - send: "5 12"
        - expect: "Locations: "
        - send: "9 5"
        - expect: "Locations: "
        - send: "5 10"
        - expect: "Locations: "
        - send: "6 8"
        - expect: "Locations: "
        - send: "1 10"
        - expect: "Locations: "
        - send: "6 4"
        - expect: "Locations: "
        - send: "7 12"
        - expect: "Best Slot Found In: 2 12\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    return: 0

- case13:
    run: ./assignment3
    points: 2
    script:
        - expect: "Size: "
        - send: "7"
        - expect: "Cars: "
        - send: "17"
        - expect: "Locations: "
        - send: "1 4"
        - expect: "Locations: "
        - send: "6 4"
        - expect: "Locations: "
        - send: "4 4"
        - expect: "Locations: "
        - send: "3 4"
        - expect: "Locations: "
        - send: "5 4"
        - expect: "Locations: "
        - send: "5 3"
        - expect: "Locations: "
        - send: "5 2"
        - expect: "Locations: "
        - send: "5 2"
        - expect: "Locations: "
        - send: "6 6"
        - expect: "Locations: "
        - send: "6 5"
        - expect: "Locations: "
        - send: "1 5"
        - expect: "Locations: "
        - send: "4 7"
        - expect: "Locations: "
        - send: "7 1"
        - expect: "Locations: "
        - send: "3 1"
        - expect: "Locations: "
        - send: "4 2"
        - expect: "Locations: "
        - send: "3 5"
        - expect: "Locations: "
        - send: "4 1"
        - expect: "Best Slot Found In: 1 1\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    return: 0

- case14:
    run: ./assignment3
    points: 2
    script:
        - expect: "Size: "
        - send: "10"
        - expect: "Cars: "
        - send: "24"
        - expect: "Locations: "
        - send: "2 6"
        - expect: "Locations: "
        - send: "10 5"
        - expect: "Locations: "
        - send: "10 9"
        - expect: "Locations: "
        - send: "3 4"
        - expect: "Locations: "
        - send: "5 6"
        - expect: "Locations: "
        - send: "1 9"
        - expect: "Locations: "
        - send: "2 9"
        - expect: "Locations: "
        - send: "5 6"
        - expect: "Locations: "
        - send: "5 6"
        - expect: "Locations: "
        - send: "3 10"
        - expect: "Locations: "
        - send: "4 8"
        - expect: "Locations: "
        - send: "8 1"
        - expect: "Locations: "
        - send: "1 10"
        - expect: "Locations: "
        - send: "8 6"
        - expect: "Locations: "
        - send: "7 1"
        - expect: "Locations: "
        - send: "3 8"
        - expect: "Locations: "
        - send: "8 2"
        - expect: "Locations: "
        - send: "5 7"
        - expect: "Locations: "
        - send: "10 9"
        - expect: "Locations: "
        - send: "1 7"
        - expect: "Locations: "
        - send: "7 3"
        - expect: "Locations: "
        - send: "5 8"
        - expect: "Locations: "
        - send: "1 1"
        - expect: "Locations: "
        - send: "5 6"
        - expect: "Best Slot Found In: 7 10\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    return: 0

