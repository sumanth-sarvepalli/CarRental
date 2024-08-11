import QtQuick
import QtQuick.Controls
import QtQuick.Layouts
import CustomerDatabase 1.0

Rectangle {
    width: 640
    height: 480
    color: "black"

    Label {
        id: infoLbl
        anchors {
            top: parent.top
            topMargin: 10
            horizontalCenter: parent.horizontalCenter
        }

        text: "Customer Information"
        font.pointSize: 20
    }

    GridLayout {
        id: lblColumn
        anchors{
            top: infoLbl.bottom
            topMargin: 30
            horizontalCenter: parent.horizontalCenter
        }
        columns: 4
        columnSpacing: 30

        Label {
            text: qsTr("First Name:")
            Layout.alignment: Qt.AlignLeft
        }
        TextField {
            id: firstNameField
            placeholderText: qsTr("First Name")
        }

        Label {
            text: qsTr("Second Name:")
            Layout.alignment: Qt.AlignLeft
        }
        TextField {
            id: lastNameField
            placeholderText: qsTr("Last Name")
        }

        Label {
            text: qsTr("Contact Number:")
            Layout.alignment: Qt.AlignLeft
        }
        TextField {
            id: phnNumField
            placeholderText: qsTr("Contact Number")
        }

        Label {
            text: qsTr("Liscence Number:")
            Layout.alignment: Qt.AlignLeft
        }
        TextField {
            id: liscenceNumField
            placeholderText: qsTr("Liscence Number")
        }

        Label {
            text: qsTr("Address:")
            Layout.alignment: Qt.AlignLeft
        }
        TextField {
            id: addressField
            height: 100
            placeholderText: qsTr("Address")
        }

        Label {
            text: qsTr("Id Proof:")
            Layout.alignment: Qt.AlignLeft
        }
        ComboBox{
           id: idCombo
           width:200
           model: [ "", "Aadhar", "VoterID", "Liscence" ]
        }
    }

    Button {
        id: submitBtn
        anchors {
            bottom: parent.bottom
            bottomMargin: 50
            horizontalCenter: parent.horizontalCenter
        }

        text: qsTr("Submit")
        onClicked: {
            CustomerDatabase.addCustomer(firstNameField.text, lastNameField.text)
            pageloader.source = "CarList.qml"
        }
    }

    Loader {
        id:pageloader
        anchors.fill: parent
    }
}
