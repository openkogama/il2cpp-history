
/* Void add_OnValueChange(Action`1[MV.WorldObject.KogamaSettings.KogamaSettingsCore.IKogamaSetting])
    */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingBase::
     KogamaSettingBase_add_OnValueChange
               (KogamaSettingBase *this,
               Action_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_IKogamaSetting_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Action<MV::WorldObject::KogamaSettings::KogamaSettingsCore::IKogamaSetting>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnValueChange;
  a = (this->fields).OnValueChange;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pAVar3 = 
    TypeInfo__System__Action<MV::WorldObject::KogamaSettings::KogamaSettingsCore::IKogamaSetting>;
    if (pDVar2 == (Delegate *)0x0) {
      pAVar4 = (Action_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_IKogamaSetting_ *)0x0;
    }
    else {
      pAVar4 = (Action_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_IKogamaSetting_ *)
               FUN_?(pDVar2,
                             TypeInfo__System__Action<MV::WorldObject::KogamaSettings::KogamaSettingsCore::IKogamaSetting>
                            );
      if (pAVar4 == (Action_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_IKogamaSetting_ *)0x0
         ) {
        FUN_?(pDVar2,pAVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    LOCK();
    pAVar6 = *ppAVar1;
    bVar7 = a == pAVar6;
    if (bVar7) {
      *ppAVar1 = pAVar4;
      pAVar6 = a;
    }
    UNLOCK();
    pAVar4 = a;
    if (!bVar7) {
      pAVar4 = pAVar6;
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)ppAVar1 >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    bVar7 = pAVar4 != a;
    a = pAVar4;
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
    FUN_?(&
                  TypeInfo__System__Action<MV::WorldObject::KogamaSettings::KogamaSettingsCore::IKogamaSetting>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnValueChange;
  source = (this->fields).OnValueChange;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pAVar3 = 
    TypeInfo__System__Action<MV::WorldObject::KogamaSettings::KogamaSettingsCore::IKogamaSetting>;
    if (pDVar2 == (Delegate *)0x0) {
      pAVar4 = (Action_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_IKogamaSetting_ *)0x0;
    }
    else {
      pAVar4 = (Action_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_IKogamaSetting_ *)
               FUN_?(pDVar2,
                             TypeInfo__System__Action<MV::WorldObject::KogamaSettings::KogamaSettingsCore::IKogamaSetting>
                            );
      if (pAVar4 == (Action_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_IKogamaSetting_ *)0x0
         ) {
        FUN_?(pDVar2,pAVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    LOCK();
    pAVar6 = *ppAVar1;
    bVar7 = source == pAVar6;
    if (bVar7) {
      *ppAVar1 = pAVar4;
      pAVar6 = source;
    }
    UNLOCK();
    pAVar4 = source;
    if (!bVar7) {
      pAVar4 = pAVar6;
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)ppAVar1 >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    bVar7 = pAVar4 != source;
    source = pAVar4;
  } while (bVar7);
  return;
}


/* Void set_Value(Object) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingBase::
     KogamaSettingBase_set_Value(KogamaSettingBase *this,Object *value,MethodInfo *method)

{
  bVar1 = iRam_? != 0;
  (this->fields).value = value;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  if ((this->fields).OnValueChange ==
      (Action_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_IKogamaSetting_ *)0x0) {
    return;
  }
  pAVar6 = (this->fields).OnValueChange;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(pAVar6->fields)._._.invoke_impl)
            ((pAVar6->fields)._._.method_code,this,(pAVar6->fields)._._.method);
  return;
}

