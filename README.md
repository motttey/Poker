# CPoker
##Cでポーカーやるやつ
##[作成日] 2014/02/10

#分割したファイルの一覧
1.main.c
main関数が格納されているソースファイル
2.checkhand.h
ポーカーの役を判定する関数プロトタイプや記号定数が格納されているヘッダファイル
3.checkhand.c
checkhand.hで宣言された関数の内容が記述されているソースファイル
4.primitivepoker.h
カードをシャッフルする関数shuffle,カードを配る関数deal等の関数プロトタイプや記号定数が格納されているヘッダファイル
5.primitivepoker.c
primitivepoker.hで宣言された関数の内容が記述されているソースファイル
6.sort.h
配列をソートする関数sortが格納されているヘッダファイル
7.sort.c
sort関数の内容が記述されているソースファイル
8.makefile
上述のファイル群より実行ファイルpoker.oを生成するMakefile
また、make cleanで実行ファイルを削除する。


#$make 及び $make clean の実行結果

''
$ make
gcc    -c -o main.o main.c
gcc -o poker.o primitivepoker.o checkhand.o sort.o main.o
$ make clean
rm -f primitivepoker.o checkhand.o sort.o poker_main.o *
''

#poker.oの実行結果

''
$ ./poker.o
Dealed cards are ...

  Six of Spades
 Five of Diamonds
Queen of Spades
Eight of Diamonds
  Ace of Clubs
Hand is...

no pair

''
