
/* Void Initialize(GamePassTier, UnityAction) */

void Assembly-CSharp.dll::TierUnlockedPopupContentTierTempUnlocked::
     TierUnlockedPopupContentTierTempUnlocked_Initialize
               (TierUnlockedPopupContentTierTempUnlocked *this,
               GamePassTier__Enum unlockedGamePassTier,UnityAction *onDisplayDoneCallback,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_FREE_TRY_);
    cRam_? = '\x01';
  }
  TierUnlockedPopupContentBase::TierUnlockedPopupContentBase_Initialize
            ((TierUnlockedPopupContentBase *)this,unlockedGamePassTier,onDisplayDoneCallback,
             (MethodInfo *)0x0);
  pTVar1 = (this->fields).tierRankText;
  IStack_2.m_value = unlockedGamePassTier & 0xff;
  mscorlib.dll::System::Int32::Int32_ToString(&IStack_2,(MethodInfo *)0x0);
  if (pTVar1 != (Text *)0x0) {
    IStack_2.m_value = (int32_t)pTVar1;
    (*(pTVar1->klass->vtable).set_text.methodPtr)();
    pTVar1 = (this->fields)._.titleText;
    if (pTVar1 != (Text *)0x0) {
      IStack_2.m_value = (int32_t)pTVar1;
      (*(pTVar1->klass->vtable).set_text.methodPtr)();
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

