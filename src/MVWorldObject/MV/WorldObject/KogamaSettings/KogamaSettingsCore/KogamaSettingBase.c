
/* Void add_OnValueChange(Action`1[MV.WorldObject.KogamaSettings.KogamaSettingsCore.IKogamaSetting])
    */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingBase::
     KogamaSettingBase_add_OnValueChange
               (KogamaSettingBase *this,
               Action_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_IKogamaSetting_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnValueChange;
  a = *ppAVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((Action_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_IKogamaSetting___Class *)
          pDVar2->klass ==
          TypeInfo__System__Action<MV::WorldObject::KogamaSettings::KogamaSettingsCore::IKogamaSetting>
         ) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,
                        TypeInfo__System__Action<MV::WorldObject::KogamaSettings::KogamaSettingsCore::IKogamaSetting>
                       );
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pAVar5 = (Action_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_IKogamaSetting_ *)
             func_?(ppAVar1,pDVar3,a);
    bVar6 = pAVar5 == a;
    a = pAVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void 
   remove_OnValueChange(Action`1[MV.WorldObject.KogamaSettings.KogamaSettingsCore.IKogamaSetting])
    */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingBase::
     KogamaSettingBase_remove_OnValueChange
               (KogamaSettingBase *this,
               Action_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_IKogamaSetting_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnValueChange;
  source = *ppAVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((Action_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_IKogamaSetting___Class *)
          pDVar2->klass ==
          TypeInfo__System__Action<MV::WorldObject::KogamaSettings::KogamaSettingsCore::IKogamaSetting>
         ) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,
                        TypeInfo__System__Action<MV::WorldObject::KogamaSettings::KogamaSettingsCore::IKogamaSetting>
                       );
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pAVar5 = (Action_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_IKogamaSetting_ *)
             func_?(ppAVar1,pDVar3,source);
    bVar6 = pAVar5 == source;
    source = pAVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void set_Value(Object) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingBase::
     KogamaSettingBase_set_Value(KogamaSettingBase *this,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).value = value;
  this_00 = (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)
            (this->fields).OnValueChange;
  if (this_00 !=
      (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)0x0) {
    mscorlib.dll::System::Action`1[System::Collections::Generic::Dictionary`2[System::String,System
    ::Object]]::Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object__Invoke
              (this_00,(Dictionary_2_System_String_System_Object_ *)this,
               MethodInfo__System__Action<MV::WorldObject::KogamaSettings::KogamaSettingsCore::IKogamaSetting>__Invoke_MV__WorldObject__KogamaSettings__KogamaSettingsCore__IKogamaSetting_
              );
  }
  return;
}

