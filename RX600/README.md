Renesas RX600 シリーズ・ハードウェアー定義テンプレート
=========

## 概要
ルネサス RX600 シリーズ用ハードウェアー定義 C++ テンプレート・クラス   
ルネサスが提供する、iodefine.h は C言語の規約に違反している為、特定の環境でしか   
コンパイルする事が出来ません。   
※ビットフィールドの定義は、バイトサイズなら規約に準拠しますが、１６ビット、又は   
それ以上は、エンディアンの関係などから、結果はコンパイラに依存します。   
   
また、非常に冗長であり、可読性が悪いです。   
※独自の方法を使い、プログラムで生成しているものと思います。   
   
C++ テンプレートを活用したハードウェアー定義は、C++11 準拠のコンパイラならエラー   
無くコンパイルする事が可能で、ハードウェアー・マニュアルのレジスター説明に準拠し   
た正式な名称を使っています。   
「iodefine.h」では、ビットフィールド定義の構造上、ビットアクセス、ワードアクセス   
で異なった、インスタンスを付加する必要があり冗長です。
   
ハードウェアーマニュアルに沿った、モジュール別にソースを分割しています。   
   
テンプレートクラスなので、最適化も最大限活用でき、さらなる最適化に向けた実装の余   
地もあります。   
   
## ペリフェラル名
 - 各デバイスモジュールを抽象化する為、ペリフェラル名を定義しています。
 - この名称は、省電力切り替え、専用ポート、割り込み制御など、多様な場面で、識別子
 として使われており、ペリフェラル全体で必要な、細かい設定を自動化する為に使われます。
 - [peripheral](peripheral.hpp?ts=4)
   
## プロジェクト・リスト
 - 
 
   
   
-----
   
License
----

MIT

