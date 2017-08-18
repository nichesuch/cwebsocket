## Overview
The code is pure C websocket server code that of original URL is [http://github.com/m8rge/cwebsocket](http://github.com/m8rge/cwebsocket).

## Modified from Original site
- Original code supports to Arduino and x86. It does not work on Raspberry Pi. This code works the both of x86 and Raspberry Pi.
- Supporting to the both compilier of gcc and g++.
- Add Makefile

# How to use
- build executable file and execute websocket server.
```
   git clone git://github.com/NaotakaSaito/cwebsocket
   cd cwebsocket
   cd raspberry_pi
   make
   ./websocket
```  

- Open client.html by browser.


## 概要
このコードは[http://github.com/m8rge/cwebsocket](http://github.com/m8rge/cwebsocket)を元に変更を行ったC言語によるwebsockerのサーバー用コードです。

## 変更点
- オリジナルコードはArduinoとX86をサポートしていますが、本ソフトウエアはRaspberry Piとx86をサポートしています。
- gccとg++の双方でコンパイルができます。
- Makefileを作成しました。

## 使用方法
- 以下の手順で事項ファイルを作成してからサーバーを起動します。
```
   git clone git://github.com/NaotakaSaito/cwebsocket
   cd cwebsocket
   cd raspberry_pi
   make
   ./websocket
```  

- ブラウザで同梱されているclient.htmlを開いてください。
