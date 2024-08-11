import QtQuick
import QtQuick.Controls
import QtQuick.Layouts

Rectangle {
    color: "black"

    Label {
        id: infoLbl
        anchors {
            top: parent.top
            topMargin: 10
            horizontalCenter: parent.horizontalCenter
        }

        text: "Cars List"
        font.pointSize: 20
    }

    Column {
        Label {
            text: qsTr("Car Company:")
            Layout.alignment: Qt.AlignLeft
        }
        ComboBox{
           id: compCombo
           width:200
           model: [ "", "Suzuki", "Renault", "Hyundai" ]
        }

        Label {
            text: qsTr("Car Model:")
            Layout.alignment: Qt.AlignLeft
        }
        ComboBox{
           id: modelCombo
           width:200
           editable: false //(compCombo.model !== "") ? true : false
           model: [ "", "Suzuki", "Renault", "Hyundai" ]
        }

        Label {
            text: qsTr("Car Model:")
            Layout.alignment: Qt.AlignLeft
        }

    }

}
