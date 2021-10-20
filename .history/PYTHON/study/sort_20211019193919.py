def insertionSort(A):
    for i in range(1,len(A)):
        key = A[i]
        j=i-1   
        while(j>=0 and key <A[j]) :
            A[j+1]=A[j]
            j-=1 
        A[j+1]=key
    return A
# merge sort

def merge_sort(A,lower, upper):
    if lower < upper:
        mid = (lower+upper)//2
        merge_sort(A, lower, mid)
        merge_sort(A, mid + 1, upper)
        merge(A, lower, mid, upper)

def merge(A, lower, mid, upper):
    # Bước 1: Tạo Bản sao của A [dưới, giữa] thành tmpL và A [giữa + 1, trên] thành tmpR 
    tmpL = [0]*((mid - lower + 1)+1)  #mid - low + 1 = len (tmpL), +1 để thêm vị trí cho Điểm dừng
    for i in range(0, (mid - lower)+1):  #len (A [thấp hơn, giữa] ) = giữa - dưới + 1 
        tmpL[i] = A[i+lower]
    tmpL[mid-lower+1] = float('inf') #add các stopper đến hết tmpl
    
    tmpR = [0]*(upper - mid + 1) # [trên - (giữa + 1) + 1] + 1 = trên - giữa + 1 
    for j in range(0, upper - mid): #len (A [mid + 1, upper]) = upper - (mid + 1) + 1 = upper - mid 
        tmpR[j] = A[j+mid+1]
    tmpR[upper - mid] = float('inf')  # thêm nút chặn vào cuối tmpR 
    
    # Bước 2: Bắt đầu hợp nhất tmpL và tmpR trở lại A [dưới, trên] 
    i, j = 0, 0
    for k in range(lower, upper + 1):
        if tmpL[i] <= tmpR[j]:
            A[k] = tmpL[i]
            i+=1
        else:
            A[k] = tmpR[j]
            j+=1       
