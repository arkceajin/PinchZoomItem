# PinchZoomItem
The QML module for QQuickItem pinch zooming.

## How to use it
1. Include src file `pinchzoomitem.h` into your project.
2. Register the `PinchZoomItem` module.
3. Create the `PinchZoomItem`, and set the target item to `zoomTarget`, or it will choose the first child item as `zoomTarget`. 
4. Control zooming of target item by multi-touch gesture or mouse wheel.

## Properties for adjusting of zoom:
* wheelFactor:  the increment/decrement factor of zooming by mouse wheel, the default value is `0.1`.
* zoomFactor:   the total factor of zooming, the default value is `1`.
* zoomMax:      the maximum value of zooming, the default value is base on the size of target's parent item.
* zoomMin:      the minimum value of zooming, the default value is `0.5`.
