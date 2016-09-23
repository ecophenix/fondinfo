#!/usr/bin/env python3
'''
@author Michele Tomaiuolo - http://www.ce.unipr.it/people/tomamic
@license This software is free - http://www.gnu.org/licenses/gpl.html
'''

FIRST = -15
COLS = 5
ROWS = 12

for y in range(ROWS):
    for x in range(COLS):
        cent = y + x * ROWS + FIRST
        fahr = 32 + 1.8 * cent
        print('{:4}{:8.2f} |'.format(cent, fahr), end='')
    print()
