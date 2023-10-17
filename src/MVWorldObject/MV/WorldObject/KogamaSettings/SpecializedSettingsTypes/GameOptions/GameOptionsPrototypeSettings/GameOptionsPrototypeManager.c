
/* KogamaSettingWrapperBase CreateOptionSettingPrototypes() */

KogamaSettingWrapperBase *
MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameOptions::
GameOptionsPrototypeSettings::GameOptionsPrototypeManager::
GameOptionsPrototypeManager_CreateOptionSettingPrototypes(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingBoolBase
                   );
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
                   );
    func_?(&StringLiteral_AllowRevive);
    func_?(&StringLiteral_GameOptionsRoot);
    cRam_? = '\x01';
  }
  this = (KogamaSettingsCollectionBase *)
         func_?(
                        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
                        );
  if (this != (KogamaSettingsCollectionBase *)0x0) {
    KogamaSettingsCore::KogamaSettingTypes::KogamaSettingsCollectionBase::
    KogamaSettingsCollectionBase__ctor
              (this,StringLiteral_GameOptionsRoot,(KogamaSettingsCollectionBase *)0x0,
               (MethodInfo *)0x0);
    this_00 = (KogamaSettingBoolBase *)
              func_?(
                             TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingBoolBase
                             );
    if (this_00 != (KogamaSettingBoolBase *)0x0) {
      KogamaSettingsCore::KogamaSettingTypes::KogamaSettingBoolBase::KogamaSettingBoolBase__ctor
                (this_00,StringLiteral_AllowRevive,1,this,(MethodInfo *)0x0);
      (*(this->klass->vtable).AddChild.methodPtr)
                (this,this_00,(this->klass->vtable).AddChild.method);
      return (KogamaSettingWrapperBase *)this;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  pKVar2 = (KogamaSettingWrapperBase *)(*pcVar1)();
  return pKVar2;
}

