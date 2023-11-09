## EADG

To calculate the decimal representation of the base-17 number "EADG," you need to convert each digit from base-17 to decimal and then calculate the sum. Here's the breakdown:

- E (14 in base-17)
- A (10 in base-17)
- D (13 in base-17)
- G (16 in base-17)

Now, calculate the decimal representation:

\[EADG = (14 \cdot 17^3) + (10 \cdot 17^2) + (13 \cdot 17^1) + (16 \cdot 17^0) = 614125\]

So, EADG in decimal is 614125.

## Jaco's Favorite Problem

### Base-2:
To represent the decimal number 1234 in binary, you need to find the binary digits for each power of 2 and assemble them:

- \(2^{10}\) - 1 bit
- \(2^9\) - 0 bits
- \(2^8\) - 1 bit
- \(2^7\) - 1 bit
- \(2^6\) - 0 bits
- \(2^5\) - 1 bit
- \(2^4\) - 1 bit
- \(2^3\) - 0 bits
- \(2^2\) - 0 bits
- \(2^1\) - 1 bit
- \(2^0\) - 0 bits

So, 1234 in base-2 is 010011001010.

### Base-16:
To represent the decimal number 1234 in hexadecimal (base-16), you can group the binary bits into sets of 4 bits each and convert them to their hexadecimal equivalents:

- 0100 - 4 in hexadecimal
- 1101 - D in hexadecimal
- 0010 - 2 in hexadecimal

So, 1234 in base-16 is 4D2.

### Base-8:
To represent the decimal number 1234 in octal (base-8), you can group the binary bits into sets of 3 bits each and convert them to their octal equivalents:

- 010 - 2 in octal
- 011 - 3 in octal
- 010 - 2 in octal
- 010 - 2 in octal

So, 1234 in base-8 is 2322.

## Hyperbase

The sum of decimal 25, binary 11001, and hex 0x3F is as follows:

- Decimal 25 is 25 in decimal.
- Binary 11001 is \(2^4 + 2^3 + 2^0 = 16 + 8 + 1 = 25\) in decimal.
- Hexadecimal 0x3F is \(2^5 + 2^4 + 2^3 + 2^2 + 2^1 + 2^0 = 32 + 16 + 8 + 4 + 2 + 1 = 63\) in decimal.

So, the sum is \(25 + 25 + 63 = 113\).

In decimal: 113
In hexadecimal: 71

## Complements

To calculate the following decimal sums in 8-bit binary two's complement:

### -100 + 90

-100 in two's complement:

- Calculate the binary representation: 100 - 64 - 32 - 4 = 0
- So, -100 is represented as 01100100 in two's complement.

90 in two's complement:

- Calculate the binary representation: 90 - 64 - 16 - 8 - 2 = 0
- So, 90 is represented as 01011010 in two's complement.

Now, perform the addition:

```
    01100100
  + 01011010
  ------------
  110111110
```

Since it's an 8-bit representation, the most significant bit is a 1, indicating a negative number. So, the result is -11011110.

### 89 - 74

89 in two's complement:

- Calculate the binary representation: 89 - 64 - 16 - 8 - 1 = 0
- So, 89 is represented as 01011001 in two's complement.

-74 in two's complement:

- Calculate the binary representation: 74 - 64 - 8 - 2 = 0
- So, -74 is represented as 10110110 in two's complement.

Now, perform the subtraction:

```
    01011001
  - 10110110
  ------------
  00001111
```

So, 89 - 74 is 00001111 in two's complement.

## Encodings

UTF-8 encoding is a character encoding standard that represents characters as sequences of bytes. It uses variable-length encoding, which means that the number of bytes used to represent a character can vary based on the character itself. The UTF-8 encoding scheme can represent any Unicode character, making it versatile and suitable for various languages and scripts.

Advantages of UTF-8 for English-language documents:
1. Compatibility: UTF-8 is backward compatible with ASCII, which means that English text encoded in ASCII can be read and displayed using UTF-8 encoding without any issues.
2. Memory Efficiency: For English text, UTF-8 encoding typically uses one byte per character, making it memory-efficient.
3. Universality: UTF-8 is a universal encoding scheme, allowing you to seamlessly mix English and non-English characters in the same document or system.

The Java char type represents character values using a 16-bit (two-byte) encoding. Java uses the UTF-16 encoding to represent Unicode characters. This means that a Java char can represent any Unicode character, including characters from various languages and symbols.

## hextoi

The `hextoi` function converts a hexadecimal string to a decimal integer in C. Here's the code with explanations:

```c
int hextoi(char *hex) {
    int value = 0;  // Initialize the result.
    
    while (*hex) {  // Loop through each character in the hexadecimal string.
        char c = *hex++;  // Get the current character and move to the next.
        if (c >= '0' && c <= '9') {
            c = c - '0';  // Convert the character '0' to '9' to its decimal value.
        } else if (c >= 'a' && c <= 'f') {
            c = c - 'a' + 10;  // Convert the lowercase hexadecimal character to its decimal value.
        } else if (c >= 'A' && c <= 'F') {
            c = c - 'A' + 10;  // Convert the uppercase hexadecimal character to its decimal value.
        }
        value = (value << 4) | c;  // Shift the current value 4 bits left and add the converted character.
    }
    return value;  // Return the final decimal value.
}
```

It's essential to handle both uppercase and lowercase hexadecimal characters
