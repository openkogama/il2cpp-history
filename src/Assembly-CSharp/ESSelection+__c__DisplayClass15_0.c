
/* Void <HandleDeleteSelection>b__0(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::ESSelection+<>c__DisplayClass15_0::
     ESSelection_c_DisplayClass15_0__HandleDeleteSelection_b__0
               (ESSelection_c_DisplayClass15_0 *this,IModalPopupCreator *handler,BaseEventData *data
               ,MethodInfo *method)

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
    pSStack_2 = (this->fields).errorText;
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

