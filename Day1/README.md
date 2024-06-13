# Day 1

## Qt Framework Overview
<pre>
- Qt is a C++ GUI Framework
- is a cross-platform framework
- in other the source code is compilable in all platforms (Mac, Linux & Windows )
- Qt can be used with Python to devel HMI application
- Qt is used by companies who work in
  - Infotainment
  - Automotive Industry
  - Semiconductor companies
- Qt has two majors frameworks
  - Qt Widgets Framework ( Purely C++ Framework )
  - QML Framework ( 80% Javascript, 20% C++ - Fluid UI)

- Qt IDE
  - is called Qt Creator
</pre>

## What is Layout in Qt?
<pre>
- Qt support many layout manager to arrange the widgets in horizontal, vertical or grid like fashion
- Whenever the parent window size increases, the additional space is divided by the layout manager and it equally divides the extra space to all the child widgets added to the layout
- though the child widgets would receive an event notification each time the windows size changes, it is finally up to the widget to use the extra space or ignore it
- on the similar line, when the parent window size decreases, the layout manager recalculates the dimensions of all child widgets in the layout and notifies the child widgets.
- child widget can receive the resize event and adjust their size accordingly to keep them visible in the window
- Example
  Qt Widgets Module supports many types of layouts
  1. Horizontal Box Layout
  2. Vertical Box Layout
  3. Box Layout
  4. Grid Layout
  5. Stacked Layout
  6. Form Layout
</pre>

##  Cloning the Training Repository ( only the first time )
```
cd ~
git clone https://github.com/tektutor/qt-june-2024.git
```

## Pulling only the delta changes after your have cloned once
```
cd ~/qt-june-2024
git pull
```
