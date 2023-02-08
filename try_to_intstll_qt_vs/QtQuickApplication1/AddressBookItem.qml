import QtQuick 2.3

Rectangle {
    id: adressBookItem
    color: (index % 2) == 0 ? "dimgray" : "lightgray"
    anchors.left: parent.left
    anchors.right: parent.right
    height: itemText.height + 12
    signal removed();
    RowLayout{
        spacing: 12
        anchors.left: parent.left
        anchors.leftMatgin: spacing
        RoundButton {
            id: deleteButton
            text: "🗙"
            font.pointSize: 12
            palette.buttonText: "red"
            onClicked: addressBookItem.removed()
        }
        Text {
            id: itemText
            font.pointSize: 24
            text: "<b>" + name + "</b><br><i>" + addr + "</i>"
        }
    }
}
