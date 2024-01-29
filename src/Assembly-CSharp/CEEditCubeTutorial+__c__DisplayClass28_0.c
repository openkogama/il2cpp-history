
/* Void <Exit>b__0(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::CEEditCubeTutorial+<>c__DisplayClass28_0::
     CEEditCubeTutorial_c_DisplayClass28_0__Exit_b__0
               (CEEditCubeTutorial_c_DisplayClass28_0 *this,IModalPopupCreator *handler,
               BaseEventData *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pSStack_1 = (String *)&TypeInfo__UnityEngine__EventSystems__IModalPopupCreator;
    func_?();
    pSStack_2 = (String *)&StringLiteral_Error;
    func_?();
    cRam_? = '\x01';
  }
  if (handler != (IModalPopupCreator *)0x0) {
    pSStack_1 = StringLiteral_Error;
    pSStack_2 = (this->fields).err;
    pIStack_3 = handler;
    func_?(1,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator);
    return;
  }
  pSStack_1 = (String *)&stack0xfffffffc;
  uVar4 = func_?(&pIStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

