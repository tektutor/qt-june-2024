import QtQuick

Window {
	width: 1200
	height: 600
	visible: true

	Row {
		spacing: 25
		anchors.centerIn: parent
		Button { caption: "Button1" }
		Button { caption: "Button2"  }
		Button { caption: "Button3"  }
	}
}
