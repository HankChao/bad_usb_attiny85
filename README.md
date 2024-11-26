# bad_usb_attiny85
Using attiny85 usb to simulate keyboard input.And using hot key to open cmd and do some bad things.


## 為甚麼要做這個??
目前我發認為在網路上相關製作教學都偏老舊，我自己在製作時也遇到了兩個主要問題。
1. 驅動程式問題
製作時需要安裝特定的驅動程式，我嘗試了老久都無法成功安裝，為此還常是許多奇怪的東西，最後終於被我找到一個能正常安裝的教學!

2. arduino擴充包問題
模擬鍵盤使用的程式需要在偏好設定引入並安裝一些擴充包讓arduino ide支援使用attiny85，但現今教學的網址連不上，我也不知道為甚麼，所以我去他們的github翻找，才把我的project做出來

## 開始做吧!

### 1.安裝Arduino IDE
我是使用1.8.13版，其他版本尚未測試過
**IDE大家應該都會裝吧?就不多說了!**

### 2.下載Attiny85驅動程式
我是參考此篇[github](https://github.com/MTK911/Attiny85?tab=readme-ov-file)做的，但有些東西因更新已經不適用了。不過驅動程式這塊倒是正常。

[驅動程式教學](https://maker.pro/arduino/projects/how-to-build-a-rubber-ducky-usb-with-arduino-using-a-digispark-module)

[驅動程式安裝包(雲端備份)](https://drive.google.com/drive/folders/1F5WSncNgPM-GISmHQYXSQY5sP7w13X-U?usp=sharing)

解壓縮後，根據自己電腦不同執行不同執行檔安裝(身為win11筆電用戶的我使用 DPinst64.exe)

安裝好後前往工作管理員，插上attiny85檢查是否能夠成功讀取

### 3.Arduino擴充包
在Arduino IDE中，很多教學都是說打開檔案->偏好設定->在額外的開發版管理員網址中打上:http://digistump.com/package_digistump_index.json 。
但我在做的時候發現他是壞的，根本連不上。

在我翻了他們官方的github後，發現有更新，而更新的網址是: https://raw.githubusercontent.com/ArminJo/DigistumpArduino/master/package_digistump_index.json ，
打好後點擊確認

接著前往工具->開發版->開發版管理員，搜尋**Digistump AVR Boards**套件進行安裝，安裝完成後，就可以開始設計attiny85的程式啦!!

### 4.設計程式
問chatgpt吧!我也是如此><

### 5.上傳程式
程式打好並選好開發版後，按上傳，他的上傳方式比較特別，點擊上傳後，他會叫你插入attiny85，插入後便開始upload程式碼，到100%就完成了!

### 6.測試
將上傳好的attiny85重新插入電腦，等待一下讓他讀取，接著就會執行你寫入的程式了!!


## 補充:

### 器材
- 喔對了!我attiny85是在蝦皮的[這家](https://shopee.tw/%E3%80%90%E6%A8%82%E6%84%8F%E5%89%B5%E5%AE%A2%E5%AE%98%E6%96%B9%E5%BA%97%E3%80%91%E3%80%8A%E9%99%84%E7%99%BC%E7%A5%A8%E3%80%8BAttiny85-USB%E9%96%8B%E7%99%BC%E6%9D%BFDigispark-kickstarter-%E9%81%A9%E7%94%A8Arduino-i.139069730.12602209118)買的!

- 打開cmd的程式碼附在payload中，我知道很陽春，請多包涵

### 初稿
這篇README是我的第一份也是我的初版!我會慢慢修正的，別砲太兇><



