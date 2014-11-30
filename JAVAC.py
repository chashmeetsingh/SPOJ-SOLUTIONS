def jtoc(st):
    if st[0].isupper():
        return 'Error!'
    ans = ''
    for i in st:
        if i.isupper():
            ans += '_'+i.lower()
        else:
            ans += i
    return ans
 
def ctoj(st):
    tmpLst = st.split('_')
    ans = tmpLst[0]
    for i in ans:
        if i.isupper():
            return 'Error!'
    for i in range(1, len(tmpLst)):
        if tmpLst[i] == '':
            return 'Error!'
        for j in tmpLst[i]:
            if j.isupper():
                return 'Error!'
        ans += tmpLst[i].capitalize()
    return ans
while True:
    try:
        st = raw_input()
        if st == '_' or st[0] == '_' or st[-1] == '_':
            print 'Error!'
        elif '_' in st:
            print ctoj(st)
        else:
            print jtoc(st)
    except EOFError:
        break
