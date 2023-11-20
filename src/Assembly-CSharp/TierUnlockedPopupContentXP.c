
/* Void Initialize(GamePassTier, UnityAction) */

void Assembly-CSharp.dll::TierUnlockedPopupContentXP::TierUnlockedPopupContentXP_Initialize
               (TierUnlockedPopupContentXP *this,GamePassTier__Enum unlockedGamePassTier,
               UnityAction *onDisplayDoneCallback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral__XP_);
    cRam_? = '\x01';
  }
  TierUnlockedPopupContentBase::TierUnlockedPopupContentBase_Initialize
            ((TierUnlockedPopupContentBase *)this,unlockedGamePassTier,onDisplayDoneCallback,
             (MethodInfo *)0x0);
  IStack_1.m_value =
       GamePassProgressionController::GamePassProgressionController_GetXPReward
                 (unlockedGamePassTier,(MethodInfo *)0x0);
  pTVar2 = (this->fields)._.titleText;
  str0 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_1,(MethodInfo *)0x0);
  pSStack3 =
       mscorlib.dll::System::String::String_Concat_3(str0,StringLiteral__XP_,(MethodInfo *)0x0);
  if (pTVar2 != (Text *)0x0) {
    pTVar4 = pTVar2->klass;
    pIStack5 = (pTVar4->vtable).CalculateLayoutInputHorizontal_1.methodPtr;
    (*(code *)(pTVar4->vtable).set_text.method)();
    return;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

