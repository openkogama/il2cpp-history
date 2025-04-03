
/* Void add_OnValueChange(Action`1[MV.WorldObject.KogamaSettings.KogamaSettingsCore.IKogamaSetting])
    */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingBase::
     KogamaSettingBase_add_OnValueChange
               (KogamaSettingBase *this,
               Action_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_IKogamaSetting_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Action<MV::WorldObject::KogamaSettings::KogamaSettingsCore::IKogamaSetting>
                   );
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnValueChange;
  a = *ppAVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pAVar3 = 
    TypeInfo__System__Action<MV::WorldObject::KogamaSettings::KogamaSettingsCore::IKogamaSetting>;
    iVar4 = 0;
    if (pDVar2 != (Delegate *)0x0) {
      iVar4 = func_?(pDVar2,
                              TypeInfo__System__Action<MV::WorldObject::KogamaSettings::KogamaSettingsCore::IKogamaSetting>
                             );
      if (iVar4 == 0) {
        func_?(pDVar2,pAVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pAVar6 = (Action_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_IKogamaSetting_ *)
             func_?(ppAVar1,iVar4,a);
    bVar7 = pAVar6 != a;
    a = pAVar6;
  } while (bVar7);
  return;
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
    func_?(&
                    TypeInfo__System__Action<MV::WorldObject::KogamaSettings::KogamaSettingsCore::IKogamaSetting>
                   );
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnValueChange;
  source = *ppAVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pAVar3 = 
    TypeInfo__System__Action<MV::WorldObject::KogamaSettings::KogamaSettingsCore::IKogamaSetting>;
    iVar4 = 0;
    if (pDVar2 != (Delegate *)0x0) {
      iVar4 = func_?(pDVar2,
                              TypeInfo__System__Action<MV::WorldObject::KogamaSettings::KogamaSettingsCore::IKogamaSetting>
                             );
      if (iVar4 == 0) {
        func_?(pDVar2,pAVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pAVar6 = (Action_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_IKogamaSetting_ *)
             func_?(ppAVar1,iVar4,source);
    bVar7 = pAVar6 != source;
    source = pAVar6;
  } while (bVar7);
  return;
}


/* Void set_Value(Object) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingBase::
     KogamaSettingBase_set_Value(KogamaSettingBase *this,Object *value,MethodInfo *method)

{
  (this->fields).value = value;
  func_?(&this->fields,value);
  pAVar1 = (this->fields).OnValueChange;
  if (pAVar1 != (Action_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_IKogamaSetting_ *)0x0) {
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,this,(pAVar1->fields)._._.method);
  }
  return;
}

