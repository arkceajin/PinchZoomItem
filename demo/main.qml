import QtQuick 2.3
import QtQuick.Controls 1.2
import PinchZoomItem 1.0

ApplicationWindow {
    visible: true
    width: 1000
    height: 1000

    PinchZoomItem{
        anchors.fill: parent
        Rectangle{
            id: rect
            anchors.centerIn: parent
            width: 200; height: 200
            color: "green"
            border.color: "red"
        }
    }
}
