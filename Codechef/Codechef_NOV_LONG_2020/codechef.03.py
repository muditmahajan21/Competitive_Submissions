try:
    test = int(input())
    for _ in range(test):
        n, k = input().split()
        n, k = (int)(n), (int)(k)

        s = input()

        count, temp, i_ptr, m_ptr, colon, power = 0, 0, 0, 0, 0, k + 1
        while i_ptr < n and m_ptr < n:

            colon = 0
            
            if s[m_ptr] == 'M':
                
                if s[i_ptr] == 'I':
                    
                    if i_ptr < m_ptr:
                        start = i_ptr
                        end = m_ptr
                    
                    else:
                        start = m_ptr
                        end = i_ptr
                    
                    for i in range(start, end):
                        if s[i] == ':':
                            colon += 1
                    
                    temp = power - abs(i_ptr - m_ptr) - colon
                    
                    if temp > 0:
                        count += 1
                        m_ptr += 1
                        i_ptr += 1
                    
                    else:
                        
                        if i_ptr < m_ptr:
                            i_ptr += 1
                        
                        else:
                            m_ptr += 1
                
                elif s[i_ptr] == 'X':
                    m_ptr = i_ptr
                    m_ptr += 1
                    i_ptr += 1
                
                else:
                    i_ptr += 1
            
            elif s[m_ptr] == 'X':
                i_ptr = m_ptr
                i_ptr += 1
                m_ptr += 1
            
            else:
                m_ptr += 1
        
        print(count)
except:
    pass