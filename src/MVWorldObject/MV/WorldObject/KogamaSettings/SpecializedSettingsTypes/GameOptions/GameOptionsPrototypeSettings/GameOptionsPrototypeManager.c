
/* KogamaSettingWrapperBase CreateOptionSettingPrototypes() */

KogamaSettingWrapperBase *
MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameOptions::
GameOptionsPrototypeSettings::GameOptionsPrototypeManager::
GameOptionsPrototypeManager_CreateOptionSettingPrototypes(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingBoolBase
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_AllowRevive);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_GameOptionsRoot);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this = (KogamaSettingsCollectionBase *)
         FUN_?(
                      TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
                      );
  KogamaSettingsCore::KogamaSettingTypes::KogamaSettingsCollectionBase::
  KogamaSettingsCollectionBase__ctor
            (this,StringLiteral_GameOptionsRoot,(KogamaSettingsCollectionBase *)0x0,
             (MethodInfo *)0x0);
  this_00 = (KogamaSettingBoolBase *)
            FUN_?(
                         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingBoolBase
                         );
  KogamaSettingsCore::KogamaSettingTypes::KogamaSettingBoolBase::KogamaSettingBoolBase__ctor
            (this_00,StringLiteral_AllowRevive,0,this,(MethodInfo *)0x0);
  if (this != (KogamaSettingsCollectionBase *)0x0) {
    (*(this->klass->vtable).AddChild.methodPtr)(this,this_00,(this->klass->vtable).AddChild.method);
    return (KogamaSettingWrapperBase *)this;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  pKVar2 = (KogamaSettingWrapperBase *)(*pcVar1)();
  return pKVar2;
}

