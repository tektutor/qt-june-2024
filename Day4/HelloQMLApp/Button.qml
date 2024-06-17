import QtQuick

Rectangle {
	width: 300; height: 100
	color: "orange"
	border.width: 5
	border.color: "green"

	property string caption: "Button"

	radius: 100

	Text {
		anchors.centerIn: parent
		text: caption 
		font.pointSize: 25
		color: "blue"
	}

	MouseArea {
		anchors.fill: parent
		hoverEnabled: true
		onClicked:
			console.log("Button clicked")
		onEntered:
			parent.scale = 1.1

		onExited:
			parent.scale = 1.0
	}
}
