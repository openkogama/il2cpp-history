
/* Void <CloneRoot>b__1(ICloneHandler, BaseEventData) */

void Assembly-CSharp.dll::ContextMenuController+<>c__DisplayClass37_0::
     ContextMenuController_c_DisplayClass37_0__CloneRoot_b__1
               (ContextMenuController_c_DisplayClass37_0 *this,ICloneHandler *handler,
               BaseEventData *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppIStack_1 = &TypeInfo__UnityEngine__EventSystems__ICloneHandler;
    func_?();
    cRam_? = '\x01';
  }
  if (handler != (ICloneHandler *)0x0) {
    ppIStack_1 = (ICloneHandler__Class **)0x0;
    puStack_2 = (undefined *)0x0;
    uStack_3 = 0;
    func_?(0,TypeInfo__UnityEngine__EventSystems__ICloneHandler,handler,(this->fields).root
                   );
    return;
  }
  ppIStack_1 = (ICloneHandler__Class **)&stack0xfffffffc;
  uVar4 = func_?(&uStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

