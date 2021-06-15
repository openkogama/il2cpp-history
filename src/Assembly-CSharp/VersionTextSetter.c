
/* Void SetText() */

void Assembly-CSharp.dll::VersionTextSetter::VersionTextSetter_SetText
               (VersionTextSetter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).textObject;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pKVar2 = MVGameControllerBase::MVGameControllerBase_get_KoGaMaSettings((MethodInfo *)0x0);
  if (pKVar2 != (KoGaMaSettingsContainer *)0x0) {
    str0 = KoGaMaSettingsContainer::KoGaMaSettingsContainer_get_ReleaseName
                     (pKVar2,(MethodInfo *)0x0);
    pKVar2 = MVGameControllerBase::MVGameControllerBase_get_KoGaMaSettings((MethodInfo *)0x0);
    if (pKVar2 != (KoGaMaSettingsContainer *)0x0) {
      str2 = KoGaMaSettingsContainer::KoGaMaSettingsContainer_get_VersionStringNoBuild
                       (pKVar2,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      pSStack3 =
           mscorlib.dll::System::String::String_Concat_3
                     (str0,StringLiteral_u000Av__,str2,(MethodInfo *)0x0);
      if (pTVar1 != (Text *)0x0) {
        pIStack4 = (pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr;
        pTStack5 = pTVar1;
        (*(code *)(pTVar1->klass->vtable).set_text.method)();
        return;
      }
    }
  }
  pIStack4 = (Il2CppMethodPointer)0x0;
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

