
/* Void KogamaSettingOnOnValueChange(IKogamaSetting) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
     KogamaSettingValueWrapperBase::KogamaSettingValueWrapperBase_KogamaSettingOnOnValueChange
               (KogamaSettingValueWrapperBase *this,IKogamaSetting *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)
            (this->fields).OnValueChange;
  if (this_00 !=
      (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)0x0) {
    mscorlib.dll::System::Action`1[System::Collections::Generic::Dictionary`2[System::String,System
    ::Object]]::Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object__Invoke
              (this_00,(Dictionary_2_System_String_System_Object_ *)this,
               MethodInfo__System__Action<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>__Invoke_MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase_
              );
  }
  return;
}


/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes
         ::KogamaSettingValueWrapperBase::KogamaSettingValueWrapperBase_ToString
                   (KogamaSettingValueWrapperBase *this,MethodInfo *method)

{
  piVar1 = (int *)(*(code *)(this->klass->vtable).__unknown.method)(this,this->klass[1]._0.image);
  if (piVar1 != (int *)0x0) {
    pSVar2 = (String *)(**(code **)(*piVar1 + 0xd8))(piVar1,*(undefined4 *)(*piVar1 + 0xdc));
    return pSVar2;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  pSVar2 = (String *)(*pcVar3)();
  return pSVar2;
}


/* KogamaSettingValueWrapperBase(String, KogamaSettingsCollectionBase) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
     KogamaSettingValueWrapperBase::KogamaSettingValueWrapperBase__ctor
               (KogamaSettingValueWrapperBase *this,String *key,KogamaSettingsCollectionBase *parent
               ,MethodInfo *method)

{
  Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,unaff_ESI);
  (this->fields)._._Parent_k__BackingField = parent;
  (this->fields)._.key = key;
  return;
}

