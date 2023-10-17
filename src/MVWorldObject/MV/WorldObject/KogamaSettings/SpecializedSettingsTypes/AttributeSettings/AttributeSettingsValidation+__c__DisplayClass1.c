
/* Void <ValidateUpdate>b__0(KogamaSettingWrapperBase) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings
     ::AttributeSettingsValidation+<>c__DisplayClass1::
     AttributeSettingsValidation_c_DisplayClass1__ValidateUpdate_b__0
               (AttributeSettingsValidation_c_DisplayClass1 *this,
               KogamaSettingWrapperBase *baseWrapper,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                   );
    cRam_? = '\x01';
  }
  iVar1 = func_?(baseWrapper,
                          TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                         );
  pIVar2 = 
  TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
  ;
  if (iVar1 == 0) {
    return;
  }
  if (baseWrapper == (KogamaSettingWrapperBase *)0x0) {
    func_?();
  }
  else {
    iVar1 = func_?(baseWrapper,
                            TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                           );
    if (iVar1 != 0) {
      uVar3 = (this->fields).destinationExclusivityFlag;
      uVar4 = func_?(1,
                              TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                              ,iVar1);
      (this->fields).destinationExclusivityFlag = uVar4 | uVar3;
      return;
    }
  }
  func_?(baseWrapper,pIVar2);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

