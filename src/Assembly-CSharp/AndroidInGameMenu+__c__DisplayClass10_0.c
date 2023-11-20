
/* Void <OnEnable>b__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::AndroidInGameMenu+<>c__DisplayClass10_0::
     AndroidInGameMenu_c_DisplayClass10_0__OnEnable_b__0
               (AndroidInGameMenu_c_DisplayClass10_0 *this,IUIStack *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  ptr = (this->fields).claimGoldRewardPopup;
  if (ptr != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
    UnsafeUtility_AsRef_1((Void *)ptr,(MethodInfo *)0x0);
    if (x != (IUIStack *)0x0) {
      pIStack_1 = x;
      func_?(1,TypeInfo__UnityEngine__EventSystems__IUIStack);
      return;
    }
  }
  uVar2 = func_?(&pIStack_1);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

