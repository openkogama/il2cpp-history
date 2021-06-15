
/* Void <>m__0(IDragHandler, BaseEventData) */

void Assembly-CSharp.dll::DragSuppress+<OnDrag>c__AnonStorey2::
     DragSuppress_OnDrag_c_AnonStorey2___m__0
               (DragSuppress_OnDrag_c_AnonStorey2 *this,IDragHandler *handler,BaseEventData *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (handler != (IDragHandler *)0x0) {
    func_?(0,TypeInfo__UnityEngine__EventSystems__IDragHandler,handler,
                    (this->fields).eventData);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

