
/* Void Initialize(GamePassTier, UnityAction) */

void Assembly-CSharp.dll::TierUnlockedPopupContentTierUnlocked::
     TierUnlockedPopupContentTierUnlocked_Initialize
               (TierUnlockedPopupContentTierUnlocked *this,GamePassTier__Enum unlockedGamePassTier,
               UnityAction *onDisplayDoneCallback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pUStack_1 = (UnityAction *)0x0;
  TierUnlockedPopupContentBase::TierUnlockedPopupContentBase_Initialize
            ((TierUnlockedPopupContentBase *)this,unlockedGamePassTier,onDisplayDoneCallback,
             (MethodInfo *)0x0);
  pTVar2 = (this->fields).tierRankText;
  pUStack_1 = (UnityAction *)(unlockedGamePassTier & 0xff);
  uVar3 = func_?(&pUStack_1,0);
  if (pTVar2 != (Text *)0x0) {
    pUStack_1 = (UnityAction *)(pTVar2->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr;
    (*(code *)(pTVar2->klass->vtable).set_text.method)(pTVar2,uVar3);
    pTVar2 = (this->fields)._.titleText;
    onDisplayDoneCallback = pUStack_1;
    arg1 = (Object *)func_?(TypeInfo__System__Int32,&onDisplayDoneCallback);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar4 = mscorlib.dll::System::String::String_Concat_1
                       ((Object *)StringLiteral_TIER_,arg1,(Object *)StringLiteral__UNLOCKED_,
                        (MethodInfo *)0x0);
    if (pTVar2 != (Text *)0x0) {
      pUStack_1 = (UnityAction *)(pTVar2->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr;
      (*(code *)(pTVar2->klass->vtable).set_text.method)(pTVar2,pSVar4);
      return;
    }
  }
  pUStack_1 = (UnityAction *)0x0;
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

