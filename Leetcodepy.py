# shifting the zeros to right side 

l = [ 8 , 0 , 1 , 2 , 0 ] 

j = 0 
print(l)

def shift(list):
    
    for i in range(0 ,len(l)):
        if l[i] == 0 :
            j = i 
            break
    for i in range(j+1 , len(l)) :
        if l[i] != 0 :
            l[i] , l[j] = l[j] , l[i] 
            j += 1     
            
shift(l)   

print(l)        


