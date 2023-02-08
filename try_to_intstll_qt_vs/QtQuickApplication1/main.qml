import QtQuick 2.9
import QtQuick.Window 2.2
import QtQuick.Controls 2.15
import QtQuick.Layouts 1.15


Window {
    id: mainWindow
    visible: true
    width: 480
    height: 640
    color: "darkgray"
    title: qsTr("Address Book")
    ColumnLayout {
        id: mainWindowLayout
        anchors.left: parent.left; anchors.right: parent.right
        spacing: 0
        Button{
            id: addButton
            anchors.left: parent.left
            anchors.right: parent.right
            text: "Add..."
            font.pointSize: 24
            onClicked: newAddressPopup.open()
        }
        Repeater{
            id: addressListViewer
            model: addressList
            anchors.left: parent.left
            anchors.right: parent.right
            AddressBookItem {
                id: addressBookItem
                onRemoved: addressList.remove(index)
            }
        }
    }
    ListModel{
        id: addressList   
    }
    NewAddressPopup {
        id: newAddressPopup
        onAddressAdded: addressList.append({name: newName, addr: newAddr})
    }
    
}