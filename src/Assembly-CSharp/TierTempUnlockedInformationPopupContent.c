
/* Void Initialize(GamePassTier, UnityAction) */

void Assembly-CSharp.dll::TierTempUnlockedInformationPopupContent::
     TierTempUnlockedInformationPopupContent_Initialize
               (TierTempUnlockedInformationPopupContent *this,
               GamePassTier__Enum unlockedGamePassTier,UnityAction *onDisplayDoneCallback,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    cRam_? = '\x01';
  }
  TierUnlockedPopupContentBase::TierUnlockedPopupContentBase_Initialize
            ((TierUnlockedPopupContentBase *)this,unlockedGamePassTier,onDisplayDoneCallback,
             (MethodInfo *)0x0);
  format = TM::TM__((this->fields).tempUnlockInformation,(MethodInfo *)0x0);
  pTVar1 = (this->fields).tempUnlockInformationText;
  onDisplayDoneCallback = (UnityAction *)(unlockedGamePassTier & 0xff);
  arg0 = (Object *)func_?(TypeInfo__System__Int32,&onDisplayDoneCallback);
  pUVar2 = (UnityAction *)mscorlib.dll::System::String::String_Format(format,arg0,(MethodInfo *)0x0)
  ;
  if (pTVar1 != (Text *)0x0) {
    pTVar3 = pTVar1->klass;
    method = (MethodInfo *)(pTVar3->vtable).CalculateLayoutInputHorizontal_1.methodPtr;
    onDisplayDoneCallback = pUVar2;
    (*(code *)(pTVar3->vtable).set_text.method)();
    return;
  }
  method = (MethodInfo *)&UNK_?;
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* TierTempUnlockedInformationPopupContent() */

void Assembly-CSharp.dll::TierTempUnlockedInformationPopupContent::
     TierTempUnlockedInformationPopupContent__ctor
               (TierTempUnlockedInformationPopupContent *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_Game_Tier__0__is_now_available_u);
    cRam_? = '\x01';
  }
  (this->fields).tempUnlockInformation = StringLiteral_Game_Tier__0__is_now_available_u;
  func_?(&(this->fields).tempUnlockInformation,
                  StringLiteral_Game_Tier__0__is_now_available_u);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

