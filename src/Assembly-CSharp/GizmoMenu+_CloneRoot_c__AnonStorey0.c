
/* Void <>m__0(ICloneHandler, BaseEventData) */

void Assembly-CSharp.dll::GizmoMenu+<CloneRoot>c__AnonStorey0::
     GizmoMenu_CloneRoot_c_AnonStorey0___m__0
               (GizmoMenu_CloneRoot_c_AnonStorey0 *this,ICloneHandler *handler,BaseEventData *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (handler != (ICloneHandler *)0x0) {
    func_?(0,TypeInfo__UnityEngine__EventSystems__ICloneHandler,handler,(this->fields).root
                    ,0,0);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

