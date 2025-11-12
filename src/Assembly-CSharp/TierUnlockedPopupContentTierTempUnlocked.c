
/* Void Initialize(GamePassTier, UnityAction) */

void Assembly-CSharp.dll::TierUnlockedPopupContentTierTempUnlocked::
     TierUnlockedPopupContentTierTempUnlocked_Initialize
               (TierUnlockedPopupContentTierTempUnlocked *this,
               GamePassTier__Enum unlockedGamePassTier,UnityAction *onDisplayDoneCallback,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_FREE_TRY_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TierUnlockedPopupContentBase::TierUnlockedPopupContentBase_Initialize
            ((TierUnlockedPopupContentBase *)this,unlockedGamePassTier & 0xff,onDisplayDoneCallback,
             (MethodInfo *)0x0);
  pTVar1 = (this->fields).tierRankText;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Number);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->field_0x135 &
      1) == 0) {
    FUN_?();
  }
  if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
    FUN_?();
  }
  aRStack_2[0]._pointer._value = (void *)0x0;
  aRStack_2[0]._length = 0;
  aRStack_2[0]._12_4_ = 0;
  pSVar3 = mscorlib.dll::System::Number::Number_FormatInt32
                     (unlockedGamePassTier & 0xff,aRStack_2,(IFormatProvider *)0x0,
                      (MethodInfo *)0x0);
  if (pTVar1 != (Text *)0x0) {
    (*(pTVar1->klass->vtable).set_text.methodPtr)
              (pTVar1,pSVar3,(pTVar1->klass->vtable).set_text.method);
    pTVar1 = (this->fields)._.titleText;
    if (pTVar1 != (Text *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pTVar1->klass->vtable).set_text.methodPtr)
                (pTVar1,StringLiteral_FREE_TRY_,(pTVar1->klass->vtable).set_text.method);
      return;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

