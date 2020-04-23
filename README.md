# rime-combo-jyutping
UNDER CONSTRUCTION 開發中

並擊輸入粵語方案（暫依rime-combo-pinyin取名: 宮保粵拼)

Dependencies:
rime-cantonese

東風破口令：`rime-install tanxpyox/rime-combo-jyutping`


改編自 rime/rime-combo-pinyin 同埋 rime/rime-cantonese

Task list:
1. 搵常用字表計算各聲符頻率
2. 枚舉所有粵語嘅聲符組合，完成斷詞filter

聲母 |	韻腹 |	韻尾
--| -- | --
b |	aa(A)| 	i(y)
p	| a |	u(U)
m	| e |	m(M)
f	| i	| n(N)
d	| o |	ng(X)
t	| u	| p(P)
n	| oe/eo(O) |	t(T)
l	| yu(v)|	k(K)
g	|	
k	|	
h	|	
ng(x)		|
z		|
c		|
s		|
gw		|
kw		|
j		|
w		|


3. 決定鍵盤排位
4. 決定容錯機制
