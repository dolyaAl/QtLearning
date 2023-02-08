import QtQuick 2.3

Popup {
    id: newAddressPopup
    modal: true
    focus: true
    width: parent.width*0.9
    x: (parent.width - width)/2
    y: 35
    onOpened:{
        nameField.text = "";
        emailField.text = "";
        nameField.focus = true;
    }
    ColumnLayout {
        anchors.fill: parent
        TextField: {
            id:nameField
            placeholderText: qtTr("Name")
            font.pointSize: 24
            background: Rectangle {color: "lightgray"}
            Layout.prefferedWidth: newAddressPopup/2
            Layout.fillWidth: true
        }
        TextField: {
            id:emailField
            placeholderText: qtTr("Email Address")
            font.pointSize: 24
            background: Rectangle {color: "lightgray"}
            Layout.prefferedWidth: newAddressPopup/2
            Layout.fillWidth: true
        }
        RowLayout{
            anchors.left: parent.left; anchors.right: parent.right
            Button{
                text: "Add"
                enabled: nameField.length > 0 && emailField.length > 0
                font.pointSize: 24
                Layout.preferredWidth: newAddressPopup / 2
                Layout.fillWidth: true
                onClicked: {
                    newAddressPopup.addressAdded(nameField.text, addrField.text)
                    newAddressPopup.close()
                }
            }
            signal addressAdded(string newName, string newAddr)
            Button {
                text: "Cancel"
                font.pointSize: 24
                Layout.preferredWidth: newAddressPopup / 2
                Layout.fillWidth: true
                onClicked: newAddressPopup.close()
            }
        }
    }
}
