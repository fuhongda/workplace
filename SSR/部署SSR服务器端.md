#### 部署 Shadowsocks 服务器端



以下是3条命令，每次输入一行、回车，等待屏幕上的操作完成后再输入下一条。

```
yum install wget -y
wget —no-check-certificate https://freed.ga/github/shadowsocksR.sh; bash shadowsocksR.sh
```

#### TCP Fast Open

实际上只要具备上述四个信息，你就可以在自己的任意设备上进行登录使用了。但是为了更好的连接速度，你还需要多做几步。
首先是打开 TCP Fast Open，输入以下命令，意为用 nano 这个编辑器打开一个文件。

```
nano /etc/rc.local
```

黏贴到最后，输入 "Y"，回车确认

```
echo 3 > /proc/sys/net/ipv4/tcp_fastopen
```

```
nano /etc/sysctl.conf
```

添加

```
net.ipv4.tcp_fastopen = 3
```

再打开一个 Shadowsocks 配置文件。

```
nano /etc/shadowsocks.json
```

把其中 “fast_open” 一项的 false 替换成 true。

```
"fast_open":true
```

## 安装 BBR

```
wget --no-check-certificate https://github.com/teddysun/across/raw/master/bbr.sh && chmod +x bbr.sh && ./bbr.sh
```
