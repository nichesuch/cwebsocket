## Overview
The code is customized for RealTime Monitor for Accelerometer.
Original URL is [http://github.com/NaotakaSaito/cwebsocket](http://github.com/NaotakaSaito/cwebsocket).
The code is pure C websocket server code that of original URL is [http://github.com/m8rge/cwebsocket](http://github.com/m8rge/cwebsocket).

## Modified from Original site
- Tail and send logfile(csvformat unixtime,x,y,z) via websocket, and plot to line graph at real time.

# How to use
- build executable file and execute websocket server.
```
   sudo apt install git
   git clone -b feature/realtime_monitor https://github.com/nichesuch/cwebsocket.git
   cd cwebsocket
   cd raspberry_pi
   make
   ./websocket
```  

- Open client.html by browser.


## 概要
このコードは[http://github.com/m8rge/cwebsocket](http://github.com/m8rge/cwebsocket)を元に変更を行ったC言語によるwebsockerのサーバー用コードである
[http://github.com/NaotakaSaito/cwebsocket](http://github.com/NaotakaSaito/cwebsocket)を元に地震計(加速度計)をリアルタイムモニタするコードです。

## 変更点
- ログファイルをtailしてwebsocket経由で送り、折れ線グラフをリアルタイムに表示します。

## 使用方法
- 以下の手順で事項ファイルを作成してからサーバーを起動します。
```
   sudo apt install git
   git clone -b feature/realtime_monitor https://github.com/nichesuch/cwebsocket.git
   cd cwebsocket
   cd raspberry_pi
   make
   ./websocket
```  

- ブラウザで同梱されているclient.htmlを開いてください。
- ラズベリーパイの`ws:IPアドレス:8088/echo`に接続してください。
- 表示間隔を入力して開始してください。

## 表示形式
- client.html : Plotly Streamingを利用した折れ線グラフ
- client_noplot.html : 受信した内容をそのまま表示
- client_simpleplot.html : CUI的な表示(Plotly版より高速)

## 調整
`main.c`の以下の定義で調整
- PORT 8088 : websocketの受信ポート
- BUF_LEN 1024 : バッファサイズ(tailした時にこれを超えてしまうとグラフが崩れる)
- LOG_FILE_PATH "/tmp/sample.log" : ログファイルのパス
- CHECK_INTERVAL 500 : ログファイルをチェックする間隔(clientWorker内のwhileループを回る回数、ここを大きくする場合はバッファサイズも大きくする。)
