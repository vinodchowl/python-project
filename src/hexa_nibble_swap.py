import sys
import io
import os

def swapnibbles (sample):
    return sample[2:4]+sample[0:2]
    
def addition (a,b):
    return a+b
def multiplication(a,b):
    return a*b
def subtraction (a,b):
    return a-b
def devision(a,b):
    return a//b
try:
    os.chdir(os.path.dirname(sys.argv[1]))
    
    with open(sys.argv[1], 'r', encoding='utf-8-sig') as fh1, open('swapped_'+os.path.basename(sys.argv[1]), 'w+', newline='\r\n') as fh2:
        for line in fh1:
            fh2.write(swapnibbles(line)+'\n')
except Exception as e:
    print ('Below Exception is raised, program excecution failed.')
    print (e)
