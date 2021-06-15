
/* Void <>m__0(ICloneHandler, BaseEventData) */

void Assembly-CSharp.dll::ContextMenuController+<CloneRoot>c__AnonStorey2::
     ContextMenuController_CloneRoot_c_AnonStorey2___m__0
               (ContextMenuController_CloneRoot_c_AnonStorey2 *this,ICloneHandler *handler,
               BaseEventData *data,MethodInfo *method)

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

