# DP
教師研習用

---
## 所需素材

##### Driver (Ch340 or Ch341)  
- [網站](https://reurl.cc/mk1XlG/)  
- [執行檔](https://cdn.sparkfun.com/assets/learn_tutorials/8/4/4/CH341SER.EXE)  
##### Arduino IDE 2.3.7 Link
- [網站](https://www.arduino.cc/en/software/)  
- [執行檔](https://downloads.arduino.cc/arduino-ide/arduino-ide_2.3.7_Windows_64bit.exe)
##### Arduino IDE 1.8.19 zip
- [壓縮檔](https://downloads.arduino.cc/arduino-1.8.19-windows.zip)  
##### Additional borads managers URLs(File -> Preferences 複製即可)  
- `https://dl.espressif.com/dl/package_esp32_index.json`  
##### Arduino main code  
- [程式碼](https://raw.githubusercontent.com/jason910727/DP/main/sketch_jan30a.ino)
##### 接線範例  
- [接線圖](https://wokwi.com/projects/455042136815107073)

## 步驟

Step1. 下載上述所有檔案  

Step2. 執行**CH341SER.EXE**按照預設步驟安裝後開啟**CH341SER**(直接按INSTALL就好)  
<img width="416" height="271" alt="image" src="https://github.com/user-attachments/assets/486881bd-16bb-44e7-9442-984bb105c373" />  

Step3. 執行**arduino-ide_2.3.7_Windows_64bit.exe**按照預設步驟安裝後開啟**Arduino IDE**  

Step4. 增加Arduino IDE非常規支援板子  
在Arduino IDE內 **File -> Preferences** 貼上 `https://dl.espressif.com/dl/package_esp32_index.json`  
<img width="633" height="356" alt="image" src="https://github.com/user-attachments/assets/5d9cc727-95a0-45c9-beec-27c16d56225b" />  
<img width="633" height="356" alt="image" src="https://github.com/user-attachments/assets/521e5319-89b4-434f-ab2a-1337025f211c" />  

Step5. 新增ESP32-S板
點擊 **左欄第二個**(或Tools -> Board -> Boards Manager) 打開**開發版管理** 查詢`ESP32` **INSTALL**
<img width="633" height="356" alt="image" src="https://github.com/user-attachments/assets/609c4a09-5605-470b-966a-706676f531ab" />  

Step6. 把附上的主程式貼上去  
<img width="633" height="356" alt="image" src="https://github.com/user-attachments/assets/b464fa65-6c7d-4b80-98fc-848a5e2da9f5" />

Step7. 插上接完線的板子 選擇板子 **Tools -> Board -> esp32 -> ESP32 Dev Module**  
<img width="633" height="356" alt="image" src="https://github.com/user-attachments/assets/d5983a78-69e8-4027-8dcd-6a1801e834fc" />  

Step8. 選擇序列埠 **Tools -> Port -> 你的序列埠**  
<img width="633" height="356" alt="image" src="https://github.com/user-attachments/assets/abad7ff5-ca51-4ccb-bc93-9d9caa50a1aa" />  
可以從 **裝置管理員** 找到 **USB-SERIAL CH340 (COMx)** 找到對應Port  
<img width="633" height="356" alt="image" src="https://github.com/user-attachments/assets/86804bb9-6048-48da-95a3-54ef9a8808f1" />  

Step9. 點擊**✔(Verify)**沒有報錯後即可把程式燒錄到板子**點擊→(Upload)**
<img width="633" height="356" alt="image" src="https://github.com/user-attachments/assets/74eb97dc-d9a6-439f-a213-5b79c0f7e6ad" />  




## 例外狀況
<font color=#FF0000>Error: 4 DEADLINE_EXCEEDED: net/http: request canceled (Client.Timeout or context cancellation while reading body)</font>  
到 **"C:\Users\\<使用者名稱>\\.arduinoIDE\arduino-cli.yaml"**  
新增以下字串  
`network:`  
`    connection_timeout: "0"`
