import QtQuick
import QtQuick.Controls
import QtQuick.Layouts

Window {
    id: window
    width: 640
    height: 480
    visible: true
    title: qsTr("CarRental")
    color: "black"

    Label {
        id: headLbl
        anchors {
            top: parent.top
            topMargin: 5
            horizontalCenter: parent.horizontalCenter
        }
        text: qsTr("Car Rentals")
        font.pointSize: 48
    }

    GridLayout{
        id: txtBoxGrid
        anchors.centerIn: parent
        columns: 2
        columnSpacing: 10

        Label {
            id: userIdLbl
            text: qsTr("UserID:")
            Layout.alignment: Qt.AlignLeft
        }

        TextField {
            id: userIdField
            placeholderText: "User ID"
            width: 150
            validator: RegularExpressionValidator {
                regularExpression: /^[a-zA-Z0-9_]+$/
            } // User ID must be alphanumeric
        }

        Label {
            id: passwdLbl
            text: qsTr("Password:")
            Layout.alignment: Qt.AlignLeft
        }

        TextField {
            id: passwordField
            placeholderText: "Password"
            echoMode: TextInput.Password
            width: 150
            validator: RegularExpressionValidator {
                regularExpression: /^(?=.*[A-Za-z])(?=.*\d)[A-Za-z\d]{8,}$/
            } // Password must be minimum eight characters, at least one letter and one number
        }
    }

    Button {
        id: loginBtn
        text: "Login"
        anchors {
            top: txtBoxGrid.bottom
            topMargin: 20
            horizontalCenter: parent.horizontalCenter
        }

        onClicked: {
            if (userIdField.acceptableInput && passwordField.acceptableInput) {
                console.log("User ID: " + userIdField.text);
                console.log("Password: " + passwordField.text);
                pageloader.source = "GUI/View/CarRental.qml"
            } else {
                console.log("Invalid input");
                errorPopup.open()
            }
        }
    }

    Popup{
        id: errorPopup
        anchors.centerIn: parent
        width: 200
        height: 100
        modal: true
        focus: true
        closePolicy: Popup.CloseOnEscape | Popup.CloseOnPressOutside
        contentItem: Text {
            text: "Invalid UserID or Password"
            color: "white"
        }
    }

    Loader {
        id:pageloader
        anchors.fill: parent
    }
}
