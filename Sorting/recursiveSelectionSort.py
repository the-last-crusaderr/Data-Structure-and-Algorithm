# find max number in a array of size n


def selectMax(sequence, index):
    ''' Base Case 
        Inductive Hyptothesis
        Indecutive Step'''
    
    #print("current Index Value", sequence[index])        
        
    if index > 0:
        maxElement = selectMax(sequence, index - 1)
        if sequence[index] > sequence[maxElement]:
     #       print("Doing comparison with",sequence[index],"and",sequence[maxElement])
            return index;
        return maxElement        
    
    return index;    
    
    

def selectionSort(sequence, index):
    
    print("current Index Value", sequence[index])  
     
    if index > 0:
        maxElement = selectMax(sequence, index)
        sequence[maxElement], sequence[index] = sequence[index], sequence[maxElement]
        selectionSort(sequence, index - 1)
        return sequence
        
    return sequence    
        
        
    
    
    
    
    
    

seq = [5,3,4,61,100,2,7,9,1]

#print(selectMax(seq,2))
print(selectionSort(seq, len(seq)-1))
