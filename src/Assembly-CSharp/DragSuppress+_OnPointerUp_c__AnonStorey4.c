
/* Void <>m__0(IPointerUpHandler, BaseEventData) */

void Assembly-CSharp.dll::DragSuppress+<OnPointerUp>c__AnonStorey4::
     DragSuppress_OnPointerUp_c_AnonStorey4___m__0
               (DragSuppress_OnPointerUp_c_AnonStorey4 *this,IPointerUpHandler *handler,
               BaseEventData *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (handler != (IPointerUpHandler *)0x0) {
    func_?(0,TypeInfo__UnityEngine__EventSystems__IPointerUpHandler,handler,
                    (this->fields).eventData);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

