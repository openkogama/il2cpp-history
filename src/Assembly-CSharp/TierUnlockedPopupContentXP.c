
/* Void Initialize(GamePassTier, UnityAction) */

void Assembly-CSharp.dll::TierUnlockedPopupContentXP::TierUnlockedPopupContentXP_Initialize
               (TierUnlockedPopupContentXP *this,GamePassTier__Enum unlockedGamePassTier,
               UnityAction *onDisplayDoneCallback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  TierUnlockedPopupContentBase::TierUnlockedPopupContentBase_Initialize
            ((TierUnlockedPopupContentBase *)this,unlockedGamePassTier,onDisplayDoneCallback,
             (MethodInfo *)0x0);
  if ((((uint)(TypeInfo__GamePassProgressionController->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__GamePassProgressionController->_1).cctor_started == 0)) {
    func_?();
  }
  GamePassProgressionController::GamePassProgressionController_GetXPReward
            (unlockedGamePassTier,(MethodInfo *)0x0);
  pTVar1 = (this->fields)._.titleText;
  arg0 = (Object *)func_?(TypeInfo__System__Int32);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?();
  }
  mscorlib.dll::System::String::String_Concat(arg0,(Object *)StringLiteral__XP_,(MethodInfo *)0x0);
  if (pTVar1 != (Text *)0x0) {
    pTVar2 = pTVar1->klass;
    pIStack3 = (pTVar2->vtable).CalculateLayoutInputHorizontal_1.methodPtr;
    (*(code *)(pTVar2->vtable).set_text.method)();
    return;
  }
  pIStack3 = (Il2CppMethodPointer)0x0;
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

