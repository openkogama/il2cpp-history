
/* Void <PressPlayWithCallback>b__0(InterstitialAdResult) */

void Assembly-CSharp.dll::LobbyStateButton+<>c__DisplayClass24_0::
     LobbyStateButton_c_DisplayClass24_0__PressPlayWithCallback_b__0
               (LobbyStateButton_c_DisplayClass24_0 *this,InterstitialAdResult__Enum result,
               MethodInfo *method)

{
  pLVar1 = (this->fields).__4__this;
  if (pLVar1 != (LobbyStateButton *)0x0) {
    (pLVar1->fields).isInAd = 0;
    pAVar2 = (this->fields).callback;
    if (pAVar2 != (Action_1_Assets_Scripts_AdIntegration_InterstitialAdResult_ *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pAVar2->fields)._._.invoke_impl)
                ((pAVar2->fields)._._.method_code,result,(pAVar2->fields)._._.method);
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

