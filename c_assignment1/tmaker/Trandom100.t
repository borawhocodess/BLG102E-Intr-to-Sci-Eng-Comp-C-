- init:
    run: rm -f assignment1
    blocker: true

- build:
    run: gcc -std=c99 -Wall -Werror assignment1.c -o assignment1  # timeout: 2
    blocker: true

- case_1900_1_1_1999:
    run: ./assignment1
    points: 1
    script:
        - expect: "Enter date \\[year month day\\]: "  # timeout: 2
        - send: "1900 1 1"
        - expect: "Enter end year: "                   # timeout: 2
        - send: "1999"
        - expect: "It's a Monday.\r\n"                 # timeout: 2
        - expect: "Same day-and-month on same weekday between 1901 and 1999: 14\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    exit: 0

- case_2001_6_11_2020:
    run: ./assignment1
    points: 1
    script:
        - expect: "Enter date \\[year month day\\]: "  # timeout: 2
        - send: "2001 6 11"
        - expect: "Enter end year: "                   # timeout: 2
        - send: "2020"
        - expect: "It's a Monday.\r\n"                 # timeout: 2
        - expect: "Same day-and-month on same weekday between 2002 and 2020: 3\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    exit: 0

- case_1995_6_27_2140:
    run: ./assignment1
    points: 1
    script:
        - expect: "Enter date \\[year month day\\]: "  # timeout: 2
        - send: "1995 6 27"
        - expect: "Enter end year: "                   # timeout: 2
        - send: "2140"
        - expect: "It's a Tuesday.\r\n"                 # timeout: 2
        - expect: "Same day-and-month on same weekday between 1996 and 2140: 19\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    exit: 0

- case_1899_11_14_1985:
    run: ./assignment1
    points: 1
    script:
        - expect: "Enter date \\[year month day\\]: "  # timeout: 2
        - send: "1899 11 14"
        - expect: "Enter end year: "                   # timeout: 2
        - send: "1985"
        - expect: "It's a Tuesday.\r\n"                 # timeout: 2
        - expect: "Same day-and-month on same weekday between 1900 and 1985: 12\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    exit: 0

- case_1922_1_6_1983:
    run: ./assignment1
    points: 1
    script:
        - expect: "Enter date \\[year month day\\]: "  # timeout: 2
        - send: "1922 1 6"
        - expect: "Enter end year: "                   # timeout: 2
        - send: "1983"
        - expect: "It's a Friday.\r\n"                 # timeout: 2
        - expect: "Same day-and-month on same weekday between 1923 and 1983: 8\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    exit: 0

- case_2020_7_26_2134:
    run: ./assignment1
    points: 1
    script:
        - expect: "Enter date \\[year month day\\]: "  # timeout: 2
        - send: "2020 7 26"
        - expect: "Enter end year: "                   # timeout: 2
        - send: "2134"
        - expect: "It's a Sunday.\r\n"                 # timeout: 2
        - expect: "Same day-and-month on same weekday between 2021 and 2134: 16\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    exit: 0

- case_1919_4_8_2010:
    run: ./assignment1
    points: 1
    script:
        - expect: "Enter date \\[year month day\\]: "  # timeout: 2
        - send: "1919 4 8"
        - expect: "Enter end year: "                   # timeout: 2
        - send: "2010"
        - expect: "It's a Tuesday.\r\n"                 # timeout: 2
        - expect: "Same day-and-month on same weekday between 1920 and 2010: 13\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    exit: 0

- case_1960_9_19_1994:
    run: ./assignment1
    points: 1
    script:
        - expect: "Enter date \\[year month day\\]: "  # timeout: 2
        - send: "1960 9 19"
        - expect: "Enter end year: "                   # timeout: 2
        - send: "1994"
        - expect: "It's a Monday.\r\n"                 # timeout: 2
        - expect: "Same day-and-month on same weekday between 1961 and 1994: 5\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    exit: 0

- case_2025_3_23_2066:
    run: ./assignment1
    points: 1
    script:
        - expect: "Enter date \\[year month day\\]: "  # timeout: 2
        - send: "2025 3 23"
        - expect: "Enter end year: "                   # timeout: 2
        - send: "2066"
        - expect: "It's a Sunday.\r\n"                 # timeout: 2
        - expect: "Same day-and-month on same weekday between 2026 and 2066: 6\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    exit: 0

- case_1901_10_14_1965:
    run: ./assignment1
    points: 1
    script:
        - expect: "Enter date \\[year month day\\]: "  # timeout: 2
        - send: "1901 10 14"
        - expect: "Enter end year: "                   # timeout: 2
        - send: "1965"
        - expect: "It's a Monday.\r\n"                 # timeout: 2
        - expect: "Same day-and-month on same weekday between 1902 and 1965: 9\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    exit: 0

- case_1962_4_19_2013:
    run: ./assignment1
    points: 1
    script:
        - expect: "Enter date \\[year month day\\]: "  # timeout: 2
        - send: "1962 4 19"
        - expect: "Enter end year: "                   # timeout: 2
        - send: "2013"
        - expect: "It's a Thursday.\r\n"                 # timeout: 2
        - expect: "Same day-and-month on same weekday between 1963 and 2013: 7\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    exit: 0

- case_2056_12_24_2180:
    run: ./assignment1
    points: 1
    script:
        - expect: "Enter date \\[year month day\\]: "  # timeout: 2
        - send: "2056 12 24"
        - expect: "Enter end year: "                   # timeout: 2
        - send: "2180"
        - expect: "It's a Sunday.\r\n"                 # timeout: 2
        - expect: "Same day-and-month on same weekday between 2057 and 2180: 17\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    exit: 0

- case_2062_7_18_2188:
    run: ./assignment1
    points: 1
    script:
        - expect: "Enter date \\[year month day\\]: "  # timeout: 2
        - send: "2062 7 18"
        - expect: "Enter end year: "                   # timeout: 2
        - send: "2188"
        - expect: "It's a Tuesday.\r\n"                 # timeout: 2
        - expect: "Same day-and-month on same weekday between 2063 and 2188: 17\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    exit: 0

- case_2087_8_8_2136:
    run: ./assignment1
    points: 1
    script:
        - expect: "Enter date \\[year month day\\]: "  # timeout: 2
        - send: "2087 8 8"
        - expect: "Enter end year: "                   # timeout: 2
        - send: "2136"
        - expect: "It's a Friday.\r\n"                 # timeout: 2
        - expect: "Same day-and-month on same weekday between 2088 and 2136: 7\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    exit: 0

- case_2023_2_4_2133:
    run: ./assignment1
    points: 1
    script:
        - expect: "Enter date \\[year month day\\]: "  # timeout: 2
        - send: "2023 2 4"
        - expect: "Enter end year: "                   # timeout: 2
        - send: "2133"
        - expect: "It's a Saturday.\r\n"                 # timeout: 2
        - expect: "Same day-and-month on same weekday between 2024 and 2133: 15\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    exit: 0

- case_1988_11_4_2127:
    run: ./assignment1
    points: 1
    script:
        - expect: "Enter date \\[year month day\\]: "  # timeout: 2
        - send: "1988 11 4"
        - expect: "Enter end year: "                   # timeout: 2
        - send: "2127"
        - expect: "It's a Friday.\r\n"                 # timeout: 2
        - expect: "Same day-and-month on same weekday between 1989 and 2127: 19\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    exit: 0

- case_1962_2_22_2013:
    run: ./assignment1
    points: 1
    script:
        - expect: "Enter date \\[year month day\\]: "  # timeout: 2
        - send: "1962 2 22"
        - expect: "Enter end year: "                   # timeout: 2
        - send: "2013"
        - expect: "It's a Thursday.\r\n"                 # timeout: 2
        - expect: "Same day-and-month on same weekday between 1963 and 2013: 7\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    exit: 0

- case_2044_1_15_2154:
    run: ./assignment1
    points: 1
    script:
        - expect: "Enter date \\[year month day\\]: "  # timeout: 2
        - send: "2044 1 15"
        - expect: "Enter end year: "                   # timeout: 2
        - send: "2154"
        - expect: "It's a Friday.\r\n"                 # timeout: 2
        - expect: "Same day-and-month on same weekday between 2045 and 2154: 16\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    exit: 0

- case_2100_3_27_2173:
    run: ./assignment1
    points: 1
    script:
        - expect: "Enter date \\[year month day\\]: "  # timeout: 2
        - send: "2100 3 27"
        - expect: "Enter end year: "                   # timeout: 2
        - send: "2173"
        - expect: "It's a Saturday.\r\n"                 # timeout: 2
        - expect: "Same day-and-month on same weekday between 2101 and 2173: 10\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    exit: 0

- case_1973_12_16_2030:
    run: ./assignment1
    points: 1
    script:
        - expect: "Enter date \\[year month day\\]: "  # timeout: 2
        - send: "1973 12 16"
        - expect: "Enter end year: "                   # timeout: 2
        - send: "2030"
        - expect: "It's a Sunday.\r\n"                 # timeout: 2
        - expect: "Same day-and-month on same weekday between 1974 and 2030: 8\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    exit: 0

- case_2032_5_28_2131:
    run: ./assignment1
    points: 1
    script:
        - expect: "Enter date \\[year month day\\]: "  # timeout: 2
        - send: "2032 5 28"
        - expect: "Enter end year: "                   # timeout: 2
        - send: "2131"
        - expect: "It's a Friday.\r\n"                 # timeout: 2
        - expect: "Same day-and-month on same weekday between 2033 and 2131: 14\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    exit: 0

- case_1916_3_21_1941:
    run: ./assignment1
    points: 1
    script:
        - expect: "Enter date \\[year month day\\]: "  # timeout: 2
        - send: "1916 3 21"
        - expect: "Enter end year: "                   # timeout: 2
        - send: "1941"
        - expect: "It's a Tuesday.\r\n"                 # timeout: 2
        - expect: "Same day-and-month on same weekday between 1917 and 1941: 3\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    exit: 0

- case_1995_4_6_2082:
    run: ./assignment1
    points: 1
    script:
        - expect: "Enter date \\[year month day\\]: "  # timeout: 2
        - send: "1995 4 6"
        - expect: "Enter end year: "                   # timeout: 2
        - send: "2082"
        - expect: "It's a Thursday.\r\n"                 # timeout: 2
        - expect: "Same day-and-month on same weekday between 1996 and 2082: 12\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    exit: 0

- case_2093_9_12_2126:
    run: ./assignment1
    points: 1
    script:
        - expect: "Enter date \\[year month day\\]: "  # timeout: 2
        - send: "2093 9 12"
        - expect: "Enter end year: "                   # timeout: 2
        - send: "2126"
        - expect: "It's a Saturday.\r\n"                 # timeout: 2
        - expect: "Same day-and-month on same weekday between 2094 and 2126: 5\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    exit: 0

- case_1959_12_26_1961:
    run: ./assignment1
    points: 1
    script:
        - expect: "Enter date \\[year month day\\]: "  # timeout: 2
        - send: "1959 12 26"
        - expect: "Enter end year: "                   # timeout: 2
        - send: "1961"
        - expect: "It's a Saturday.\r\n"                 # timeout: 2
        - expect: "Same day-and-month on same weekday between 1960 and 1961: 0\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    exit: 0

- case_2038_12_23_2093:
    run: ./assignment1
    points: 1
    script:
        - expect: "Enter date \\[year month day\\]: "  # timeout: 2
        - send: "2038 12 23"
        - expect: "Enter end year: "                   # timeout: 2
        - send: "2093"
        - expect: "It's a Thursday.\r\n"                 # timeout: 2
        - expect: "Same day-and-month on same weekday between 2039 and 2093: 7\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    exit: 0

- case_2008_1_21_2137:
    run: ./assignment1
    points: 1
    script:
        - expect: "Enter date \\[year month day\\]: "  # timeout: 2
        - send: "2008 1 21"
        - expect: "Enter end year: "                   # timeout: 2
        - send: "2137"
        - expect: "It's a Monday.\r\n"                 # timeout: 2
        - expect: "Same day-and-month on same weekday between 2009 and 2137: 19\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    exit: 0

- case_1990_3_30_2054:
    run: ./assignment1
    points: 1
    script:
        - expect: "Enter date \\[year month day\\]: "  # timeout: 2
        - send: "1990 3 30"
        - expect: "Enter end year: "                   # timeout: 2
        - send: "2054"
        - expect: "It's a Friday.\r\n"                 # timeout: 2
        - expect: "Same day-and-month on same weekday between 1991 and 2054: 8\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    exit: 0

- case_2021_10_15_2044:
    run: ./assignment1
    points: 1
    script:
        - expect: "Enter date \\[year month day\\]: "  # timeout: 2
        - send: "2021 10 15"
        - expect: "Enter end year: "                   # timeout: 2
        - send: "2044"
        - expect: "It's a Friday.\r\n"                 # timeout: 2
        - expect: "Same day-and-month on same weekday between 2022 and 2044: 3\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    exit: 0

- case_1913_3_19_2032:
    run: ./assignment1
    points: 1
    script:
        - expect: "Enter date \\[year month day\\]: "  # timeout: 2
        - send: "1913 3 19"
        - expect: "Enter end year: "                   # timeout: 2
        - send: "2032"
        - expect: "It's a Wednesday.\r\n"                 # timeout: 2
        - expect: "Same day-and-month on same weekday between 1914 and 2032: 17\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    exit: 0

- case_1958_2_16_1966:
    run: ./assignment1
    points: 1
    script:
        - expect: "Enter date \\[year month day\\]: "  # timeout: 2
        - send: "1958 2 16"
        - expect: "Enter end year: "                   # timeout: 2
        - send: "1966"
        - expect: "It's a Sunday.\r\n"                 # timeout: 2
        - expect: "Same day-and-month on same weekday between 1959 and 1966: 1\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    exit: 0

- case_2049_8_3_2056:
    run: ./assignment1
    points: 1
    script:
        - expect: "Enter date \\[year month day\\]: "  # timeout: 2
        - send: "2049 8 3"
        - expect: "Enter end year: "                   # timeout: 2
        - send: "2056"
        - expect: "It's a Tuesday.\r\n"                 # timeout: 2
        - expect: "Same day-and-month on same weekday between 2050 and 2056: 1\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    exit: 0

- case_2009_10_20_2015:
    run: ./assignment1
    points: 1
    script:
        - expect: "Enter date \\[year month day\\]: "  # timeout: 2
        - send: "2009 10 20"
        - expect: "Enter end year: "                   # timeout: 2
        - send: "2015"
        - expect: "It's a Tuesday.\r\n"                 # timeout: 2
        - expect: "Same day-and-month on same weekday between 2010 and 2015: 1\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    exit: 0

- case_1999_5_4_2070:
    run: ./assignment1
    points: 1
    script:
        - expect: "Enter date \\[year month day\\]: "  # timeout: 2
        - send: "1999 5 4"
        - expect: "Enter end year: "                   # timeout: 2
        - send: "2070"
        - expect: "It's a Tuesday.\r\n"                 # timeout: 2
        - expect: "Same day-and-month on same weekday between 2000 and 2070: 10\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    exit: 0

- case_1981_2_28_2035:
    run: ./assignment1
    points: 1
    script:
        - expect: "Enter date \\[year month day\\]: "  # timeout: 2
        - send: "1981 2 28"
        - expect: "Enter end year: "                   # timeout: 2
        - send: "2035"
        - expect: "It's a Saturday.\r\n"                 # timeout: 2
        - expect: "Same day-and-month on same weekday between 1982 and 2035: 7\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    exit: 0

- case_1952_3_31_2071:
    run: ./assignment1
    points: 1
    script:
        - expect: "Enter date \\[year month day\\]: "  # timeout: 2
        - send: "1952 3 31"
        - expect: "Enter end year: "                   # timeout: 2
        - send: "2071"
        - expect: "It's a Monday.\r\n"                 # timeout: 2
        - expect: "Same day-and-month on same weekday between 1953 and 2071: 17\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    exit: 0

- case_2026_12_1_2050:
    run: ./assignment1
    points: 1
    script:
        - expect: "Enter date \\[year month day\\]: "  # timeout: 2
        - send: "2026 12 1"
        - expect: "Enter end year: "                   # timeout: 2
        - send: "2050"
        - expect: "It's a Tuesday.\r\n"                 # timeout: 2
        - expect: "Same day-and-month on same weekday between 2027 and 2050: 3\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    exit: 0

- case_2080_12_25_2201:
    run: ./assignment1
    points: 1
    script:
        - expect: "Enter date \\[year month day\\]: "  # timeout: 2
        - send: "2080 12 25"
        - expect: "Enter end year: "                   # timeout: 2
        - send: "2201"
        - expect: "It's a Wednesday.\r\n"                 # timeout: 2
        - expect: "Same day-and-month on same weekday between 2081 and 2201: 16\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    exit: 0

- case_1896_10_13_2029:
    run: ./assignment1
    points: 1
    script:
        - expect: "Enter date \\[year month day\\]: "  # timeout: 2
        - send: "1896 10 13"
        - expect: "Enter end year: "                   # timeout: 2
        - send: "2029"
        - expect: "It's a Tuesday.\r\n"                 # timeout: 2
        - expect: "Same day-and-month on same weekday between 1897 and 2029: 19\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    exit: 0

- case_2097_9_28_2162:
    run: ./assignment1
    points: 1
    script:
        - expect: "Enter date \\[year month day\\]: "  # timeout: 2
        - send: "2097 9 28"
        - expect: "Enter end year: "                   # timeout: 2
        - send: "2162"
        - expect: "It's a Saturday.\r\n"                 # timeout: 2
        - expect: "Same day-and-month on same weekday between 2098 and 2162: 8\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    exit: 0

- case_2014_9_26_2049:
    run: ./assignment1
    points: 1
    script:
        - expect: "Enter date \\[year month day\\]: "  # timeout: 2
        - send: "2014 9 26"
        - expect: "Enter end year: "                   # timeout: 2
        - send: "2049"
        - expect: "It's a Friday.\r\n"                 # timeout: 2
        - expect: "Same day-and-month on same weekday between 2015 and 2049: 4\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    exit: 0

- case_1941_11_14_2032:
    run: ./assignment1
    points: 1
    script:
        - expect: "Enter date \\[year month day\\]: "  # timeout: 2
        - send: "1941 11 14"
        - expect: "Enter end year: "                   # timeout: 2
        - send: "2032"
        - expect: "It's a Friday.\r\n"                 # timeout: 2
        - expect: "Same day-and-month on same weekday between 1942 and 2032: 13\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    exit: 0

- case_2072_1_25_2202:
    run: ./assignment1
    points: 1
    script:
        - expect: "Enter date \\[year month day\\]: "  # timeout: 2
        - send: "2072 1 25"
        - expect: "Enter end year: "                   # timeout: 2
        - send: "2202"
        - expect: "It's a Monday.\r\n"                 # timeout: 2
        - expect: "Same day-and-month on same weekday between 2073 and 2202: 19\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    exit: 0

- case_2029_9_12_2043:
    run: ./assignment1
    points: 1
    script:
        - expect: "Enter date \\[year month day\\]: "  # timeout: 2
        - send: "2029 9 12"
        - expect: "Enter end year: "                   # timeout: 2
        - send: "2043"
        - expect: "It's a Wednesday.\r\n"                 # timeout: 2
        - expect: "Same day-and-month on same weekday between 2030 and 2043: 2\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    exit: 0

- case_2074_4_26_2082:
    run: ./assignment1
    points: 1
    script:
        - expect: "Enter date \\[year month day\\]: "  # timeout: 2
        - send: "2074 4 26"
        - expect: "Enter end year: "                   # timeout: 2
        - send: "2082"
        - expect: "It's a Thursday.\r\n"                 # timeout: 2
        - expect: "Same day-and-month on same weekday between 2075 and 2082: 0\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    exit: 0

- case_1957_9_5_2061:
    run: ./assignment1
    points: 1
    script:
        - expect: "Enter date \\[year month day\\]: "  # timeout: 2
        - send: "1957 9 5"
        - expect: "Enter end year: "                   # timeout: 2
        - send: "2061"
        - expect: "It's a Thursday.\r\n"                 # timeout: 2
        - expect: "Same day-and-month on same weekday between 1958 and 2061: 15\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    exit: 0

- case_2014_1_1_2124:
    run: ./assignment1
    points: 1
    script:
        - expect: "Enter date \\[year month day\\]: "  # timeout: 2
        - send: "2014 1 1"
        - expect: "Enter end year: "                   # timeout: 2
        - send: "2124"
        - expect: "It's a Wednesday.\r\n"                 # timeout: 2
        - expect: "Same day-and-month on same weekday between 2015 and 2124: 15\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    exit: 0

- case_1980_6_30_2017:
    run: ./assignment1
    points: 1
    script:
        - expect: "Enter date \\[year month day\\]: "  # timeout: 2
        - send: "1980 6 30"
        - expect: "Enter end year: "                   # timeout: 2
        - send: "2017"
        - expect: "It's a Monday.\r\n"                 # timeout: 2
        - expect: "Same day-and-month on same weekday between 1981 and 2017: 5\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    exit: 0

- case_2092_7_25_2168:
    run: ./assignment1
    points: 1
    script:
        - expect: "Enter date \\[year month day\\]: "  # timeout: 2
        - send: "2092 7 25"
        - expect: "Enter end year: "                   # timeout: 2
        - send: "2168"
        - expect: "It's a Friday.\r\n"                 # timeout: 2
        - expect: "Same day-and-month on same weekday between 2093 and 2168: 11\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    exit: 0

- case_1963_12_16_2104:
    run: ./assignment1
    points: 1
    script:
        - expect: "Enter date \\[year month day\\]: "  # timeout: 2
        - send: "1963 12 16"
        - expect: "Enter end year: "                   # timeout: 2
        - send: "2104"
        - expect: "It's a Monday.\r\n"                 # timeout: 2
        - expect: "Same day-and-month on same weekday between 1964 and 2104: 19\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    exit: 0

- case_1914_10_2_1964:
    run: ./assignment1
    points: 1
    script:
        - expect: "Enter date \\[year month day\\]: "  # timeout: 2
        - send: "1914 10 2"
        - expect: "Enter end year: "                   # timeout: 2
        - send: "1964"
        - expect: "It's a Friday.\r\n"                 # timeout: 2
        - expect: "Same day-and-month on same weekday between 1915 and 1964: 7\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    exit: 0

- case_2015_8_23_2070:
    run: ./assignment1
    points: 1
    script:
        - expect: "Enter date \\[year month day\\]: "  # timeout: 2
        - send: "2015 8 23"
        - expect: "Enter end year: "                   # timeout: 2
        - send: "2070"
        - expect: "It's a Sunday.\r\n"                 # timeout: 2
        - expect: "Same day-and-month on same weekday between 2016 and 2070: 7\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    exit: 0

- case_1987_11_21_2073:
    run: ./assignment1
    points: 1
    script:
        - expect: "Enter date \\[year month day\\]: "  # timeout: 2
        - send: "1987 11 21"
        - expect: "Enter end year: "                   # timeout: 2
        - send: "2073"
        - expect: "It's a Saturday.\r\n"                 # timeout: 2
        - expect: "Same day-and-month on same weekday between 1988 and 2073: 12\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    exit: 0

- case_2036_5_30_2135:
    run: ./assignment1
    points: 1
    script:
        - expect: "Enter date \\[year month day\\]: "  # timeout: 2
        - send: "2036 5 30"
        - expect: "Enter end year: "                   # timeout: 2
        - send: "2135"
        - expect: "It's a Friday.\r\n"                 # timeout: 2
        - expect: "Same day-and-month on same weekday between 2037 and 2135: 14\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    exit: 0

- case_2091_7_9_2128:
    run: ./assignment1
    points: 1
    script:
        - expect: "Enter date \\[year month day\\]: "  # timeout: 2
        - send: "2091 7 9"
        - expect: "Enter end year: "                   # timeout: 2
        - send: "2128"
        - expect: "It's a Monday.\r\n"                 # timeout: 2
        - expect: "Same day-and-month on same weekday between 2092 and 2128: 5\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    exit: 0

- case_2038_7_21_2124:
    run: ./assignment1
    points: 1
    script:
        - expect: "Enter date \\[year month day\\]: "  # timeout: 2
        - send: "2038 7 21"
        - expect: "Enter end year: "                   # timeout: 2
        - send: "2124"
        - expect: "It's a Wednesday.\r\n"                 # timeout: 2
        - expect: "Same day-and-month on same weekday between 2039 and 2124: 12\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    exit: 0

- case_2014_7_27_2098:
    run: ./assignment1
    points: 1
    script:
        - expect: "Enter date \\[year month day\\]: "  # timeout: 2
        - send: "2014 7 27"
        - expect: "Enter end year: "                   # timeout: 2
        - send: "2098"
        - expect: "It's a Sunday.\r\n"                 # timeout: 2
        - expect: "Same day-and-month on same weekday between 2015 and 2098: 12\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    exit: 0

- case_1906_3_22_2019:
    run: ./assignment1
    points: 1
    script:
        - expect: "Enter date \\[year month day\\]: "  # timeout: 2
        - send: "1906 3 22"
        - expect: "Enter end year: "                   # timeout: 2
        - send: "2019"
        - expect: "It's a Thursday.\r\n"                 # timeout: 2
        - expect: "Same day-and-month on same weekday between 1907 and 2019: 16\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    exit: 0

- case_2038_5_13_2090:
    run: ./assignment1
    points: 1
    script:
        - expect: "Enter date \\[year month day\\]: "  # timeout: 2
        - send: "2038 5 13"
        - expect: "Enter end year: "                   # timeout: 2
        - send: "2090"
        - expect: "It's a Thursday.\r\n"                 # timeout: 2
        - expect: "Same day-and-month on same weekday between 2039 and 2090: 7\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    exit: 0

- case_2044_9_3_2055:
    run: ./assignment1
    points: 1
    script:
        - expect: "Enter date \\[year month day\\]: "  # timeout: 2
        - send: "2044 9 3"
        - expect: "Enter end year: "                   # timeout: 2
        - send: "2055"
        - expect: "It's a Saturday.\r\n"                 # timeout: 2
        - expect: "Same day-and-month on same weekday between 2045 and 2055: 1\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    exit: 0

- case_1996_9_26_2132:
    run: ./assignment1
    points: 1
    script:
        - expect: "Enter date \\[year month day\\]: "  # timeout: 2
        - send: "1996 9 26"
        - expect: "Enter end year: "                   # timeout: 2
        - send: "2132"
        - expect: "It's a Thursday.\r\n"                 # timeout: 2
        - expect: "Same day-and-month on same weekday between 1997 and 2132: 18\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    exit: 0

- case_2063_9_3_2195:
    run: ./assignment1
    points: 1
    script:
        - expect: "Enter date \\[year month day\\]: "  # timeout: 2
        - send: "2063 9 3"
        - expect: "Enter end year: "                   # timeout: 2
        - send: "2195"
        - expect: "It's a Monday.\r\n"                 # timeout: 2
        - expect: "Same day-and-month on same weekday between 2064 and 2195: 19\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    exit: 0

- case_1895_9_1_1976:
    run: ./assignment1
    points: 1
    script:
        - expect: "Enter date \\[year month day\\]: "  # timeout: 2
        - send: "1895 9 1"
        - expect: "Enter end year: "                   # timeout: 2
        - send: "1976"
        - expect: "It's a Sunday.\r\n"                 # timeout: 2
        - expect: "Same day-and-month on same weekday between 1896 and 1976: 12\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    exit: 0

- case_1998_4_26_2072:
    run: ./assignment1
    points: 1
    script:
        - expect: "Enter date \\[year month day\\]: "  # timeout: 2
        - send: "1998 4 26"
        - expect: "Enter end year: "                   # timeout: 2
        - send: "2072"
        - expect: "It's a Sunday.\r\n"                 # timeout: 2
        - expect: "Same day-and-month on same weekday between 1999 and 2072: 10\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    exit: 0

- case_1982_7_11_1996:
    run: ./assignment1
    points: 1
    script:
        - expect: "Enter date \\[year month day\\]: "  # timeout: 2
        - send: "1982 7 11"
        - expect: "Enter end year: "                   # timeout: 2
        - send: "1996"
        - expect: "It's a Sunday.\r\n"                 # timeout: 2
        - expect: "Same day-and-month on same weekday between 1983 and 1996: 1\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    exit: 0

- case_1999_11_24_2078:
    run: ./assignment1
    points: 1
    script:
        - expect: "Enter date \\[year month day\\]: "  # timeout: 2
        - send: "1999 11 24"
        - expect: "Enter end year: "                   # timeout: 2
        - send: "2078"
        - expect: "It's a Wednesday.\r\n"                 # timeout: 2
        - expect: "Same day-and-month on same weekday between 2000 and 2078: 11\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    exit: 0

- case_2047_7_28_2138:
    run: ./assignment1
    points: 1
    script:
        - expect: "Enter date \\[year month day\\]: "  # timeout: 2
        - send: "2047 7 28"
        - expect: "Enter end year: "                   # timeout: 2
        - send: "2138"
        - expect: "It's a Sunday.\r\n"                 # timeout: 2
        - expect: "Same day-and-month on same weekday between 2048 and 2138: 12\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    exit: 0

- case_1973_2_3_2027:
    run: ./assignment1
    points: 1
    script:
        - expect: "Enter date \\[year month day\\]: "  # timeout: 2
        - send: "1973 2 3"
        - expect: "Enter end year: "                   # timeout: 2
        - send: "2027"
        - expect: "It's a Saturday.\r\n"                 # timeout: 2
        - expect: "Same day-and-month on same weekday between 1974 and 2027: 7\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    exit: 0

- case_2090_11_16_2161:
    run: ./assignment1
    points: 1
    script:
        - expect: "Enter date \\[year month day\\]: "  # timeout: 2
        - send: "2090 11 16"
        - expect: "Enter end year: "                   # timeout: 2
        - send: "2161"
        - expect: "It's a Thursday.\r\n"                 # timeout: 2
        - expect: "Same day-and-month on same weekday between 2091 and 2161: 9\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    exit: 0

- case_2013_10_8_2133:
    run: ./assignment1
    points: 1
    script:
        - expect: "Enter date \\[year month day\\]: "  # timeout: 2
        - send: "2013 10 8"
        - expect: "Enter end year: "                   # timeout: 2
        - send: "2133"
        - expect: "It's a Tuesday.\r\n"                 # timeout: 2
        - expect: "Same day-and-month on same weekday between 2014 and 2133: 16\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    exit: 0

- case_1901_11_15_2030:
    run: ./assignment1
    points: 1
    script:
        - expect: "Enter date \\[year month day\\]: "  # timeout: 2
        - send: "1901 11 15"
        - expect: "Enter end year: "                   # timeout: 2
        - send: "2030"
        - expect: "It's a Friday.\r\n"                 # timeout: 2
        - expect: "Same day-and-month on same weekday between 1902 and 2030: 19\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    exit: 0

- case_1908_10_3_2029:
    run: ./assignment1
    points: 1
    script:
        - expect: "Enter date \\[year month day\\]: "  # timeout: 2
        - send: "1908 10 3"
        - expect: "Enter end year: "                   # timeout: 2
        - send: "2029"
        - expect: "It's a Saturday.\r\n"                 # timeout: 2
        - expect: "Same day-and-month on same weekday between 1909 and 2029: 17\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    exit: 0

- case_2100_11_5_2115:
    run: ./assignment1
    points: 1
    script:
        - expect: "Enter date \\[year month day\\]: "  # timeout: 2
        - send: "2100 11 5"
        - expect: "Enter end year: "                   # timeout: 2
        - send: "2115"
        - expect: "It's a Friday.\r\n"                 # timeout: 2
        - expect: "Same day-and-month on same weekday between 2101 and 2115: 1\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    exit: 0

- case_2046_2_6_2117:
    run: ./assignment1
    points: 1
    script:
        - expect: "Enter date \\[year month day\\]: "  # timeout: 2
        - send: "2046 2 6"
        - expect: "Enter end year: "                   # timeout: 2
        - send: "2117"
        - expect: "It's a Tuesday.\r\n"                 # timeout: 2
        - expect: "Same day-and-month on same weekday between 2047 and 2117: 9\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    exit: 0

- case_1932_8_27_1984:
    run: ./assignment1
    points: 1
    script:
        - expect: "Enter date \\[year month day\\]: "  # timeout: 2
        - send: "1932 8 27"
        - expect: "Enter end year: "                   # timeout: 2
        - send: "1984"
        - expect: "It's a Saturday.\r\n"                 # timeout: 2
        - expect: "Same day-and-month on same weekday between 1933 and 1984: 7\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    exit: 0

- case_2048_12_9_2124:
    run: ./assignment1
    points: 1
    script:
        - expect: "Enter date \\[year month day\\]: "  # timeout: 2
        - send: "2048 12 9"
        - expect: "Enter end year: "                   # timeout: 2
        - send: "2124"
        - expect: "It's a Wednesday.\r\n"                 # timeout: 2
        - expect: "Same day-and-month on same weekday between 2049 and 2124: 11\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    exit: 0

- case_1920_8_27_2044:
    run: ./assignment1
    points: 1
    script:
        - expect: "Enter date \\[year month day\\]: "  # timeout: 2
        - send: "1920 8 27"
        - expect: "Enter end year: "                   # timeout: 2
        - send: "2044"
        - expect: "It's a Friday.\r\n"                 # timeout: 2
        - expect: "Same day-and-month on same weekday between 1921 and 2044: 17\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    exit: 0

- case_1929_10_31_2052:
    run: ./assignment1
    points: 1
    script:
        - expect: "Enter date \\[year month day\\]: "  # timeout: 2
        - send: "1929 10 31"
        - expect: "Enter end year: "                   # timeout: 2
        - send: "2052"
        - expect: "It's a Thursday.\r\n"                 # timeout: 2
        - expect: "Same day-and-month on same weekday between 1930 and 2052: 18\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    exit: 0

- case_1954_6_14_1984:
    run: ./assignment1
    points: 1
    script:
        - expect: "Enter date \\[year month day\\]: "  # timeout: 2
        - send: "1954 6 14"
        - expect: "Enter end year: "                   # timeout: 2
        - send: "1984"
        - expect: "It's a Monday.\r\n"                 # timeout: 2
        - expect: "Same day-and-month on same weekday between 1955 and 1984: 4\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    exit: 0

- case_1896_10_27_1933:
    run: ./assignment1
    points: 1
    script:
        - expect: "Enter date \\[year month day\\]: "  # timeout: 2
        - send: "1896 10 27"
        - expect: "Enter end year: "                   # timeout: 2
        - send: "1933"
        - expect: "It's a Tuesday.\r\n"                 # timeout: 2
        - expect: "Same day-and-month on same weekday between 1897 and 1933: 5\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    exit: 0

- case_1926_5_7_1962:
    run: ./assignment1
    points: 1
    script:
        - expect: "Enter date \\[year month day\\]: "  # timeout: 2
        - send: "1926 5 7"
        - expect: "Enter end year: "                   # timeout: 2
        - send: "1962"
        - expect: "It's a Friday.\r\n"                 # timeout: 2
        - expect: "Same day-and-month on same weekday between 1927 and 1962: 4\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    exit: 0

- case_2030_3_29_2118:
    run: ./assignment1
    points: 1
    script:
        - expect: "Enter date \\[year month day\\]: "  # timeout: 2
        - send: "2030 3 29"
        - expect: "Enter end year: "                   # timeout: 2
        - send: "2118"
        - expect: "It's a Friday.\r\n"                 # timeout: 2
        - expect: "Same day-and-month on same weekday between 2031 and 2118: 11\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    exit: 0

- case_2001_10_17_2133:
    run: ./assignment1
    points: 1
    script:
        - expect: "Enter date \\[year month day\\]: "  # timeout: 2
        - send: "2001 10 17"
        - expect: "Enter end year: "                   # timeout: 2
        - send: "2133"
        - expect: "It's a Wednesday.\r\n"                 # timeout: 2
        - expect: "Same day-and-month on same weekday between 2002 and 2133: 19\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    exit: 0

- case_1933_7_29_2038:
    run: ./assignment1
    points: 1
    script:
        - expect: "Enter date \\[year month day\\]: "  # timeout: 2
        - send: "1933 7 29"
        - expect: "Enter end year: "                   # timeout: 2
        - send: "2038"
        - expect: "It's a Saturday.\r\n"                 # timeout: 2
        - expect: "Same day-and-month on same weekday between 1934 and 2038: 15\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    exit: 0

- case_1962_3_3_1979:
    run: ./assignment1
    points: 1
    script:
        - expect: "Enter date \\[year month day\\]: "  # timeout: 2
        - send: "1962 3 3"
        - expect: "Enter end year: "                   # timeout: 2
        - send: "1979"
        - expect: "It's a Saturday.\r\n"                 # timeout: 2
        - expect: "Same day-and-month on same weekday between 1963 and 1979: 2\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    exit: 0

- case_1916_4_7_1995:
    run: ./assignment1
    points: 1
    script:
        - expect: "Enter date \\[year month day\\]: "  # timeout: 2
        - send: "1916 4 7"
        - expect: "Enter end year: "                   # timeout: 2
        - send: "1995"
        - expect: "It's a Friday.\r\n"                 # timeout: 2
        - expect: "Same day-and-month on same weekday between 1917 and 1995: 11\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    exit: 0

- case_1913_1_17_2059:
    run: ./assignment1
    points: 1
    script:
        - expect: "Enter date \\[year month day\\]: "  # timeout: 2
        - send: "1913 1 17"
        - expect: "Enter end year: "                   # timeout: 2
        - send: "2059"
        - expect: "It's a Friday.\r\n"                 # timeout: 2
        - expect: "Same day-and-month on same weekday between 1914 and 2059: 21\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    exit: 0

- case_2018_12_25_2024:
    run: ./assignment1
    points: 1
    script:
        - expect: "Enter date \\[year month day\\]: "  # timeout: 2
        - send: "2018 12 25"
        - expect: "Enter end year: "                   # timeout: 2
        - send: "2024"
        - expect: "It's a Tuesday.\r\n"                 # timeout: 2
        - expect: "Same day-and-month on same weekday between 2019 and 2024: 0\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    exit: 0

- case_2028_9_30_2109:
    run: ./assignment1
    points: 1
    script:
        - expect: "Enter date \\[year month day\\]: "  # timeout: 2
        - send: "2028 9 30"
        - expect: "Enter end year: "                   # timeout: 2
        - send: "2109"
        - expect: "It's a Saturday.\r\n"                 # timeout: 2
        - expect: "Same day-and-month on same weekday between 2029 and 2109: 10\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    exit: 0

- case_1930_2_13_1965:
    run: ./assignment1
    points: 1
    script:
        - expect: "Enter date \\[year month day\\]: "  # timeout: 2
        - send: "1930 2 13"
        - expect: "Enter end year: "                   # timeout: 2
        - send: "1965"
        - expect: "It's a Thursday.\r\n"                 # timeout: 2
        - expect: "Same day-and-month on same weekday between 1931 and 1965: 5\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    exit: 0

- case_2073_6_25_2163:
    run: ./assignment1
    points: 1
    script:
        - expect: "Enter date \\[year month day\\]: "  # timeout: 2
        - send: "2073 6 25"
        - expect: "Enter end year: "                   # timeout: 2
        - send: "2163"
        - expect: "It's a Sunday.\r\n"                 # timeout: 2
        - expect: "Same day-and-month on same weekday between 2074 and 2163: 12\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    exit: 0

- case_1976_10_11_2105:
    run: ./assignment1
    points: 1
    script:
        - expect: "Enter date \\[year month day\\]: "  # timeout: 2
        - send: "1976 10 11"
        - expect: "Enter end year: "                   # timeout: 2
        - send: "2105"
        - expect: "It's a Monday.\r\n"                 # timeout: 2
        - expect: "Same day-and-month on same weekday between 1977 and 2105: 18\r\n"  # timeout: 2
        - expect: _EOF_  # timeout: 2
    exit: 0


- case_invalid_13_13:
    run: ./assignment1
    points: 1
    script:
        - expect: "Enter date \\[year month day\\]: "  # timeout: 2
        - send: "2020 13 13"
        - expect: "Invalid date.\r\n"                  # timeout: 2
        - expect: _EOF_                                # timeout: 2
    exit: 1

- case_invalid_13_32:
    run: ./assignment1
    points: 1
    script:
        - expect: "Enter date \\[year month day\\]: "  # timeout: 2
        - send: "2020 13 32"
        - expect: "Invalid date.\r\n"                  # timeout: 2
        - expect: _EOF_                                # timeout: 2
    exit: 1

- case_invalid_14_28:
    run: ./assignment1
    points: 1
    script:
        - expect: "Enter date \\[year month day\\]: "  # timeout: 2
        - send: "2020 14 28"
        - expect: "Invalid date.\r\n"                  # timeout: 2
        - expect: _EOF_                                # timeout: 2
    exit: 1

- case_invalid_1_32:
    run: ./assignment1
    points: 1
    script:
        - expect: "Enter date \\[year month day\\]: "  # timeout: 2
        - send: "2020 1 32"
        - expect: "Invalid date.\r\n"                  # timeout: 2
        - expect: _EOF_                                # timeout: 2
    exit: 1

- case_invalid_2_30:
    run: ./assignment1
    points: 1
    script:
        - expect: "Enter date \\[year month day\\]: "  # timeout: 2
        - send: "2020 2 30"
        - expect: "Invalid date.\r\n"                  # timeout: 2
        - expect: _EOF_                                # timeout: 2
    exit: 1

- case_invalid_3_32:
    run: ./assignment1
    points: 1
    script:
        - expect: "Enter date \\[year month day\\]: "  # timeout: 2
        - send: "2020 3 32"
        - expect: "Invalid date.\r\n"                  # timeout: 2
        - expect: _EOF_                                # timeout: 2
    exit: 1

- case_invalid_4_31:
    run: ./assignment1
    points: 1
    script:
        - expect: "Enter date \\[year month day\\]: "  # timeout: 2
        - send: "2020 4 31"
        - expect: "Invalid date.\r\n"                  # timeout: 2
        - expect: _EOF_                                # timeout: 2
    exit: 1

- case_invalid_11_31:
    run: ./assignment1
    points: 1
    script:
        - expect: "Enter date \\[year month day\\]: "  # timeout: 2
        - send: "2020 11 31"
        - expect: "Invalid date.\r\n"                  # timeout: 2
        - expect: _EOF_                                # timeout: 2
    exit: 1