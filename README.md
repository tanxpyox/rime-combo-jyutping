# 宮保粵拼：Rime 並擊輸入粵語方案

配方：℞ `tanxpyox/rime-combo-jyutping`

本方案係[宮保拼音](https://github.com/rime/rime-combo-pinyin)嘅粵拼改編，其中鍵盤排位根據語言頻率調查結果定製，以配合粵語使用者嘅語言習慣。

***使用需知***:
* 由於本方案要求用家同時按下1-5鍵嚟鍵入拼音，一般鍵盤上可能會出現「鬼鍵」嘅情況，無法同時錄入用家嘅按鍵組合。
  * 出現呢個情況嘅時候，用家可以逐一放開手指，令電腦可以捕捉按鍵訊號。
  * 長遠計，用家可以試下支援「防鬼鍵」("Anti-Ghosting") 或者「N鍵齊按」("N-Key Rollover") 嘅鍵盤，充分發揮本方案嘅潛力。
  * 利申：我嘅配置只係個普通Logitech無線鍵盤，所以恕我唔可以介紹任何「防鬼鍵」嘅鍵盤。

***開發步驟（參考用）***:
1. [列出粵語所有音素（同埋將佢哋約簡)](https://github.com/tanxpyox/rime-combo-jyutping/wiki/%E7%B2%B5%E8%AA%9E%E9%9F%B3%E7%B4%A0%E8%80%83%E5%AF%9F)
2. [搵常用字表](https://github.com/tanxpyox/rime-combo-jyutping/blob/fq-calc/out.txt)計算[各音素頻率](https://github.com/tanxpyox/rime-combo-jyutping/wiki/2000%E5%B8%B8%E7%94%A8%E5%AD%97%E9%9F%B3%E7%B4%A0%E7%B5%B1%E8%A8%88)
3. [枚舉所有粵語嘅音節組合，完成斷詞filter](https://github.com/tanxpyox/rime-combo-jyutping/wiki/%E7%B2%B5%E8%AA%9E%E9%9F%B3%E7%AF%80%E6%9E%9A%E8%88%89)
4. 根據常用字嘅音素頻率，決定鍵盤排位（儘量將常用嘅音素放喺Home row)
5. 決定容錯機制

## 安裝
* 本方案依賴於：
  * 粵語拼音 [rime-cantonese](https://github.com/rime/rime-cantonese)
  
[東風破](https://github.com/rime/plum)口令：`bash rime-install tanxpyox/rime-combo-jyutping`
