
/* Void <ExecuteToggleState>b__0(IGridSnapHandler, BaseEventData) */

void Assembly-CSharp.dll::ToggleSnapToGrid+<>c__DisplayClass0_0::
     ToggleSnapToGrid_c_DisplayClass0_0__ExecuteToggleState_b__0
               (ToggleSnapToGrid_c_DisplayClass0_0 *this,IGridSnapHandler *handler,
               BaseEventData *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppIStack_1 = &TypeInfo__UnityEngine__EventSystems__IGridSnapHandler;
    func_?();
    cRam_? = '\x01';
  }
  if (handler != (IGridSnapHandler *)0x0) {
    ppIStack_1 = (IGridSnapHandler__Class **)(uint)(this->fields).toggleState;
    pIStack_2 = handler;
    pIStack_3 = TypeInfo__UnityEngine__EventSystems__IGridSnapHandler;
    func_?(0);
    return;
  }
  ppIStack_1 = (IGridSnapHandler__Class **)&stack0xfffffffc;
  uVar4 = func_?(&pIStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

