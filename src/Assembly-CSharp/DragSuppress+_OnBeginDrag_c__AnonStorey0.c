
/* Void <>m__0(IBeginDragHandler, BaseEventData) */

void Assembly-CSharp.dll::DragSuppress+<OnBeginDrag>c__AnonStorey0::
     DragSuppress_OnBeginDrag_c_AnonStorey0___m__0
               (DragSuppress_OnBeginDrag_c_AnonStorey0 *this,IBeginDragHandler *handler,
               BaseEventData *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (handler != (IBeginDragHandler *)0x0) {
    func_?(0,TypeInfo__UnityEngine__EventSystems__IBeginDragHandler,handler,
                    (this->fields).eventData);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

