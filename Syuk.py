tokens = {'슈숙.':'>', '슈슉.':'<', 
          '슉.':'+', '시.':'-', 
          '슈슉 슈숙.':'.', '시발.':',', 
          '시발럼아.':'[', '시발롬아.':']'}
f = open("슉슈슉.txt", "r", encoding='utf-8')
of = open("Syuk.txt", "w")

lines = f.readlines()

for line in lines:
    read_tok = ''
    output = ''
    for token in line:
        read_tok += token
        if token == '.':
            output += tokens[read_tok]
            read_tok = ''
    of.write(output+'\n')

f.close()
of.close()