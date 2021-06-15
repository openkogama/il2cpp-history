
/* Void <>m__0(IEndDragHandler, BaseEventData) */

void Assembly-CSharp.dll::DragSuppress+<OnEndDrag>c__AnonStorey1::
     DragSuppress_OnEndDrag_c_AnonStorey1___m__0
               (DragSuppress_OnEndDrag_c_AnonStorey1 *this,IEndDragHandler *handler,
               BaseEventData *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (handler != (IEndDragHandler *)0x0) {
    func_?(0,TypeInfo__UnityEngine__EventSystems__IEndDragHandler,handler,
                    (this->fields).eventData);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

