
/* Void <PressPlayWithCallback>b__0(InterstitialAdResult) */

void Assembly-CSharp.dll::LobbyStateButton+<>c__DisplayClass27_0::
     LobbyStateButton_c_DisplayClass27_0__PressPlayWithCallback_b__0
               (LobbyStateButton_c_DisplayClass27_0 *this,InterstitialAdResult__Enum result,
               MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pLVar2 = (this->fields).__4__this;
  if (pLVar2 != (LobbyStateButton *)0x0) {
    (pLVar2->fields).isInAd = 0;
    pAVar3 = (this->fields).callback;
    if (pAVar3 != (Action_1_Assets_Scripts_AdIntegration_InterstitialAdResult_ *)0x0) {
      puStack_1 = (pAVar3->fields)._._.method;
      IStack_4 = result;
      pvStack_5 = (pAVar3->fields)._._.method_code;
      (*(pAVar3->fields)._._.invoke_impl)();
      return;
    }
  }
  uVar6 = func_?(&pvStack_5);
  func_?(uVar6);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

