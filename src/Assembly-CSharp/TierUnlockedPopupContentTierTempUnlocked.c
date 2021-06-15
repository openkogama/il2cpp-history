
/* Void Initialize(GamePassTier, UnityAction) */

void Assembly-CSharp.dll::TierUnlockedPopupContentTierTempUnlocked::
     TierUnlockedPopupContentTierTempUnlocked_Initialize
               (TierUnlockedPopupContentTierTempUnlocked *this,
               GamePassTier__Enum unlockedGamePassTier,UnityAction *onDisplayDoneCallback,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIStack_1 = (Il2CppMethodPointer)0x0;
  TierUnlockedPopupContentBase::TierUnlockedPopupContentBase_Initialize
            ((TierUnlockedPopupContentBase *)this,unlockedGamePassTier,onDisplayDoneCallback,
             (MethodInfo *)0x0);
  pTVar2 = (this->fields).tierRankText;
  pIStack_1 = (Il2CppMethodPointer)(unlockedGamePassTier & 0xff);
  uVar3 = func_?(&pIStack_1,0);
  if (pTVar2 != (Text *)0x0) {
    pIStack_1 = (pTVar2->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr;
    (*(code *)(pTVar2->klass->vtable).set_text.method)(pTVar2,uVar3);
    pTVar2 = (this->fields)._.titleText;
    if (pTVar2 != (Text *)0x0) {
      pIStack_1 = (pTVar2->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr;
      (*(code *)(pTVar2->klass->vtable).set_text.method)(pTVar2,StringLiteral_FREE_TRY_);
      return;
    }
  }
  pIStack_1 = (Il2CppMethodPointer)0x0;
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

