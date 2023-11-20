
/* Void SetText() */

void Assembly-CSharp.dll::VersionTextSetter::VersionTextSetter_SetText
               (VersionTextSetter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_u000Av__);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).textObject;
  pKVar2 = MVGameControllerBase::MVGameControllerBase_get_KoGaMaSettings((MethodInfo *)0x0);
  if (pKVar2 != (KoGaMaSettingsContainer *)0x0) {
    str0 = KoGaMaSettingsContainer::KoGaMaSettingsContainer_get_ReleaseName
                     (pKVar2,(MethodInfo *)0x0);
    pKVar2 = MVGameControllerBase::MVGameControllerBase_get_KoGaMaSettings((MethodInfo *)0x0);
    if (pKVar2 != (KoGaMaSettingsContainer *)0x0) {
      str2 = KoGaMaSettingsContainer::KoGaMaSettingsContainer_get_VersionStringNoBuild
                       (pKVar2,(MethodInfo *)0x0);
      pSStack3 =
           mscorlib.dll::System::String::String_Concat_4
                     (str0,StringLiteral_u000Av__,str2,(MethodInfo *)0x0);
      if (pTVar1 != (Text *)0x0) {
        pIStack4 = (pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr;
        pTStack5 = pTVar1;
        (*(code *)(pTVar1->klass->vtable).set_text.method)();
        return;
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

