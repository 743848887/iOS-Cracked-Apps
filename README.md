# iOS-Cracked-Apps

<p align="center">

<img src="Images/banner.jpg" alt="Debug" title="Debug"/>

</p>

> 提供国内外知名 App 破解二进制文件，可以将这些已经破解的二进制文件通过反编译工具进行静态分析，另外仓库中已经从破解的二进制文件 dump 出了 Class 信息。

## Apps

| App | Version | Dumped Classes | 砸壳工具 | 
|:-------:|:-------:|:------|:------|
| 微信 | 6.5.12 | [WeChat](./DumpedClasses/WeChat/) | dumpdecrypted |
| 携程 | 7.5.2 | [Ctrip](./DumpedClasses/Ctrip/) | dumpdecrypted |
| 手机QQ | 7.1.5 | [QQ](./DumpedClasses/QQ/) | Clutch |
| 腾讯视频 | 7.1.5 | [TencentLive](./DumpedClasses/TencentLive/) | Clutch |
| 爱奇艺 | 8.7.5 | [iQiYiPhoneVideo](./DumpedClasses/iQiYiPhoneVideo/) | dumpdecrypted |
| 饿了么 | 7.1.5 | [Eleme](./DumpedClasses/Eleme/) | dumpdecrypted |
| 小红书 | 4.22.1 | [Discover](./DumpedClasses/Discover/) | dumpdecrypted |
| 摩拜 | 5.3.1 | [Mobike](./DumpedClasses/Mobike/) | dumpdecrypted |
| 网易云音乐 | 4.1.2 | [NeteaseMusic](./DumpedClasses/NeteaseMusic/) | dumpdecrypted |
| 酷狗音乐 | 8.8.0 | [Kugou](./DumpedClasses/Kugou/) | dumpdecrypted |
| 今日头条 | 6.2.1 | [News](./DumpedClasses/News/) | dumpdecrypted |
| 滴滴出行 | 5.1.4 | [OneTravel](./DumpedClasses/OneTravel/) | dumpdecrypted |
| 格瓦拉 | 9.0.1 | [GWMovie](./DumpedClasses/GWMovie/) | dumpdecrypted |
| 腾讯手机管家 | 7.1 | [MQQSecure](./DumpedClasses/MQQSecure/) | dumpdecrypted |
| 流利说 | 5.4 | [Lingome](./DumpedClasses/Lingome/) | dumpdecrypted |
| WIFI万能钥匙 | 4.2.3 | [Zeus](./DumpedClasses/Zeus/) | dumpdecrypted |
| Tweetbot 3 | 3.6.2 | [Tweetbot](./DumpedClasses/Tweetbot/) | dumpdecrypted |
| Facebook | 94.0 | [Facebook](./DumpedClasses/Facebook/) | dumpdecrypted |
| 简易系统状态 | 3.0.2 | [U_Status_Lite](./DumpedClasses/U_Status_Lite/) | dumpdecrypted |
| Battery Memory System Status Monitor | 1.1.8 | [MonitorAds](./DumpedClasses/MonitorAds/) | dumpdecrypted |

### 阿里

支付宝和口碑都使用了 [Visionary Lab](https://github.com/Vizzle) 组织开源出来的库：[VZFlexLayout](https://github.com/Vizzle/VZFlexLayout), [VZHTTPNetwork](https://github.com/Vizzle/VZHTTPNetwork)。这个组织应该是阿里的。此外还使用了[天眼(TianYan)](./DumpedClasses/Alipay/TianYan.h)，这是一个性能监控 SDK，主要用于监控应用的 FPS，卡顿，CPU，和检测内存泄漏等，天眼 SDK 未开源。

## SDKs

| SDK | Version | Dumped Classes | Note |
|:-------:|:-------:|:------|:------|
| 听云 | 2.5.9 | [NBSAppAgent](./DumpedClasses/NBSAppAgent/) | |
| New Relic | 5.13.0 | [NewRelic](./DumpedClasses/NewRelic/) | |
| Skynet | x.x.x | [Skynet](./DumpedClasses/Skynet/) | 饿了么 APM SDK |


> 由于是在 64 位机器上砸壳，**dumpdecrypted** 只会对当前运行机器架构进行内存 dump，比如二进制包含 armv7 和 arm64 两种架构，但是因为是在 64 位机器砸壳，所以破解的 Mach-O 文件中只有 arm64 这种架构是破解后的。另外 Hopper V3 是不支持生成 arm64 的伪代码的，若想要获取伪代码，则应该使用 Hopper V4。

> **dumpdecrypted** 砸壳后的破解是一个文件，而 **Clutch** 砸壳后是将主应用和各 Extension 的 Mach-O 文件区分目录导出的。