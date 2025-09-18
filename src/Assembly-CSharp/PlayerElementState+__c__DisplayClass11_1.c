
/* Void <SetupButtons>b__4(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::PlayerElementState+<>c__DisplayClass11_1::
     PlayerElementState_c_DisplayClass11_1__SetupButtons_b__4
               (PlayerElementState_c_DisplayClass11_1 *this,IModalPopupCreator *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    pSStack_1 = (String *)&TypeInfo__UnityEngine__EventSystems__IModalPopupCreator;
    func_?();
    pSStack_2 = (String *)&StringLiteral_Error__;
    func_?();
    cRam_? = '\x01';
  }
  if (x != (IModalPopupCreator *)0x0) {
    pSStack_1 = StringLiteral_Error__;
    pSStack_2 = (this->fields).errorText;
    pIStack_3 = x;
    func_?(4,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator);
    return;
  }
  pSStack_1 = (String *)&stack0xfffffffc;
  uVar4 = func_?(&pIStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

