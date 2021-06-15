
/* Void <>m__0(IPointerDownHandler, BaseEventData) */

void Assembly-CSharp.dll::DragSuppress+<OnPointerDown>c__AnonStorey3::
     DragSuppress_OnPointerDown_c_AnonStorey3___m__0
               (DragSuppress_OnPointerDown_c_AnonStorey3 *this,IPointerDownHandler *handler,
               BaseEventData *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (handler != (IPointerDownHandler *)0x0) {
    func_?(0,TypeInfo__UnityEngine__EventSystems__IPointerDownHandler,handler,
                    (this->fields).eventData);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

