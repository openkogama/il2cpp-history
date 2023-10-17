
/* Void <PostErrorPopup>b__0(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::PlayerSocialPopup+<>c__DisplayClass24_0::
     PlayerSocialPopup_c_DisplayClass24_0__PostErrorPopup_b__0
               (PlayerSocialPopup_c_DisplayClass24_0 *this,IModalPopupCreator *x,BaseEventData *y,
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
    pSStack_2 = (this->fields).error;
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

