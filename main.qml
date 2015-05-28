import QtQuick 2.4
import QtQuick.Window 2.2
import dk.component 1.0

Window {
    visible: true
    width: 800
    height: 450

    CpuInfo {
        id: cpuInfo
    }

    Rectangle {
        anchors.fill: parent
        color: "white"

        Text {
            id: initText
            anchors.centerIn: parent
            text: "Show CPU Info"
        }

        MouseArea {
            anchors.fill: parent
            onClicked: {
                initText.visible = false
                flickable.visible = true
                textInfo.text = cpuInfo.data.replace(/[ \t]*\:/g," :").replace(/[\n\r]/g, "\n\n")
            }
        }

        Flickable {
            id: flickable
            anchors.fill: parent
            contentHeight: textInfo.height
            visible: false

            Text {
                id: textInfo
                anchors {
                    left: parent.left
                    right: parent.right
                }
                wrapMode: Text.Wrap
                height: contentHeight
            }

        }
    }
}
