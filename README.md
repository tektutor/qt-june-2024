# qt-june-2024

## Downloading Qt opensource Online Installer for Windows/Linux/Mac
https://www.qt.io/download-qt-installer-oss

Things to keep in mind while installing Qt 6.6.x
1. Make sure you install Qt source to get examples and tutorials
2. Make sure Qt creator and Qt Design Studio is also installed
3. Make sure Mobile ( Android and IOS ) and Desktops targets are selected otherwise you don't get Kits without this we can't compile and run applications, in short our installation will be useless without this
4. Installation may take several hours, at times may have to try over night, so don't even think of installing Qt6 over mobile internet or any slow internet

#### Troubleshooting
- With Qt Maintenance tool, it is possible to add/remove or Update Qt components if you have already installed Qt6 but missed to installed certain Qt components
- If you are getting Network error while installing Qt from online installer, you need to supply alternate mirror url as shown below

Using alternate mirror link while using online installer
```
qt-unified-linux-x64-4.6.1-online.run --mirror http://qt.mirror.constant.com
```

Using alternate mirror link while using Maintainence tool
```
./MaintenanceTool --mirror http://qt.mirror.constant.com
```

## Downloading Qt Examples separately
Download the file qt-everywhere-src-6.6.1.tar.xz from 
```
https://download.qt.io/official_releases/qt/6.6/6.6.1/submodules/
```
## Some quick references
<pre>
- https://www.apriorit.com/dev-blog/475-qt-qml-with-cmake
- https://doc.qt.io/qt-5/qtquick3d-index.html
</pre>
