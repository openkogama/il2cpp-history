
/* Void <>m__0(IGridSnapHandler, BaseEventData) */

void Assembly-CSharp.dll::ToggleSnapToGrid+<ExecuteToggleState>c__AnonStorey0::
     ToggleSnapToGrid_ExecuteToggleState_c_AnonStorey0___m__0
               (ToggleSnapToGrid_ExecuteToggleState_c_AnonStorey0 *this,IGridSnapHandler *handler,
               BaseEventData *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (handler != (IGridSnapHandler *)0x0) {
    func_?(0,TypeInfo__UnityEngine__EventSystems__IGridSnapHandler,handler,
                    (this->fields).toggleState);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

