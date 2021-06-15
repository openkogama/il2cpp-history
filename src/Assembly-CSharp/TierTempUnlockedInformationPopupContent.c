
/* Void Initialize(GamePassTier, UnityAction) */

void Assembly-CSharp.dll::TierTempUnlockedInformationPopupContent::
     TierTempUnlockedInformationPopupContent_Initialize
               (TierTempUnlockedInformationPopupContent *this,
               GamePassTier__Enum unlockedGamePassTier,UnityAction *onDisplayDoneCallback,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  TierUnlockedPopupContentBase::TierUnlockedPopupContentBase_Initialize
            ((TierUnlockedPopupContentBase *)this,unlockedGamePassTier,onDisplayDoneCallback,
             (MethodInfo *)0x0);
  format = TM::TM__((this->fields).tempUnlockInformation,(MethodInfo *)0x0);
  pTVar1 = (this->fields).tempUnlockInformationText;
  onDisplayDoneCallback = (UnityAction *)(unlockedGamePassTier & 0xff);
  arg0 = (Object *)func_?(TypeInfo__System__Int32,&onDisplayDoneCallback);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?();
  }
  onDisplayDoneCallback =
       (UnityAction *)mscorlib.dll::System::String::String_Format(format,arg0,(MethodInfo *)0x0);
  if (pTVar1 != (Text *)0x0) {
    pTVar2 = pTVar1->klass;
    method = (MethodInfo *)(pTVar2->vtable).CalculateLayoutInputHorizontal_1.methodPtr;
    (*(code *)(pTVar2->vtable).set_text.method)();
    return;
  }
  method = (MethodInfo *)0x0;
  onDisplayDoneCallback = (UnityAction *)&UNK_?;
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* TierTempUnlockedInformationPopupContent() */

void Assembly-CSharp.dll::TierTempUnlockedInformationPopupContent::
     TierTempUnlockedInformationPopupContent__ctor
               (TierTempUnlockedInformationPopupContent *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).tempUnlockInformation = StringLiteral_Game_Tier__0__is_now_available_u;
  if (cRam_? == '\0') {
    func_?(_UNK_?,unaff_EBP);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

