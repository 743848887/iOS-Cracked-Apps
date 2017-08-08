# iOS-Cracked-Apps

<p align="center">

<img src="Images/banner.jpg" alt="Debug" title="Debug"/>

</p>

> 提供国内外知名 App 破解二进制文件，可以将这些已经破解的二进制文件通过反编译工具进行静态分析，另外仓库中已经从破解的二进制文件 dump 出了 Class 信息。

## Apps

| App | Version | Dumped Classes | 砸壳工具 | 
|:-------:|:-------:|:------|:------|
| 微信 | 6.5.12 | [WeChat](./DumpedClasses/WeChat/) | dumpdecrypted |
| 支付宝| 10.0.19 | [Alipay](./DumpedClasses/Alipay/) | dumpdecrypted 砸壳失败 Clutch 砸壳成功 |
| 携程 | 7.5.2 | [Ctrip](./DumpedClasses/Ctrip/) | dumpdecrypted |
| 手机淘宝 | 6.9.1 | [Taobao](./DumpedClasses/Taobao/) | Clutch 砸壳失败 dumpdecrypted 砸壳成功|
| 手机QQ | 7.1.5 | [QQ](./DumpedClasses/QQ/) | Clutch |
| 腾讯视频 | 7.1.5 | [TencentLive](./DumpedClasses/TencentLive/) | Clutch |
| 饿了么 | 7.1.5 | [Eleme](./DumpedClasses/Eleme/) | dumpdecrypted |
| 闲鱼 | 5.8.7 | [FleaMarket](./DumpedClasses/FleaMarket/) | dumpdecrypted |
| 小红书 | 4.22.1 | [Discover](./DumpedClasses/Discover/) | dumpdecrypted |
| 摩拜 | 5.3.1 | [Mobike](./DumpedClasses/Mobike/) | dumpdecrypted |
| 网易云音乐 | 4.1.2 | [NeteaseMusic](./DumpedClasses/NeteaseMusic/) | dumpdecrypted |
| 酷狗音乐 | 8.8.0 | [Kugou](./DumpedClasses/Kugou/) | dumpdecrypted |
| 今日头条 | 6.2.1 | [News](./DumpedClasses/News/) | dumpdecrypted |
| 滴滴出行 | 5.1.4 | [OneTravel](./DumpedClasses/OneTravel/) | dumpdecrypted |
| 格瓦拉 | 9.0.1 | [GWMovie](./DumpedClasses/GWMovie/) | dumpdecrypted |
| Tweetbot 3 | 3.6.2 | [Tweetbot](./DumpedClasses/Tweetbot/) | dumpdecrypted |

## SDKs

| SDK | Version | Dumped Classes | 
|:-------:|:-------:|:------|
| 听云 | 2.5.9 | [NBSAppAgent](./DumpedClasses/NBSAppAgent/) |


> 由于是在 64 位机器上砸壳，**dumpdecrypted** 只会对当前运行机器架构进行内存 dump，比如二进制包含 armv7 和 arm64 两种架构，但是因为是在 64 位机器砸壳，所以破解的 Mach-O 文件中只有 arm64 这种架构是破解后的。另外 Hopper V3 是不支持生成 arm64 的伪代码的，若想要获取伪代码，则应该使用 Hopper V4。

> **dumpdecrypted** 砸壳后的破解是一个文件，而 **Clutch** 砸壳后是将主应用和各 Extension 的 Mach-O 文件区分目录导出的。

> 有些项目使用 Objective-C 和 Swift 混编，因此无法直接使用 `class-dump`，dump 的时候会抛出 `Error: Cannot find offset for address xxx in stringAtAddress` 的错误，就像上面列表中的格瓦拉就是混编的情况，我 Fork 了 `class-dump` 修改后，现在可以支持 Objective-C 和 Swift 混编的 Mach-O 文件，但只会 dump 出来 Objective-C 的头文件，Swift 的文件不处理，有兴趣的可以去[这个仓库](https://github.com/aozhimin/iOS-Class-Dump)下载来使用。