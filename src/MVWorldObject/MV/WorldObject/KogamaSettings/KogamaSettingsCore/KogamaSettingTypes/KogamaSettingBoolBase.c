
/* KogamaSettingBoolBase(String, Boolean, KogamaSettingsCollectionBase) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
     KogamaSettingBoolBase::KogamaSettingBoolBase__ctor
               (KogamaSettingBoolBase *this,String *key,bool value,
               KogamaSettingsCollectionBase *parent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Action<MV::WorldObject::KogamaSettings::KogamaSettingsCore::IKogamaSetting>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingBool
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase__KogamaSettingOnOnValueChange_MV__WorldObject__KogamaSettings__KogamaSettingsCore__IKogamaSetting_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  KogamaSettingWrapperBase::KogamaSettingWrapperBase__ctor
            ((KogamaSettingWrapperBase *)this,key,parent,(MethodInfo *)0x0);
  this_00 = (KogamaSettingBase *)
            FUN_?(
                         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingBool
                         );
  abStackX_18[0] = value;
  value_00 = (Object *)FUN_?(uRam_?,abStackX_18);
  KogamaSettingBase::KogamaSettingBase_set_Value(this_00,value_00,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields).KogamaSettingBool = (KogamaSettingBool *)this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).KogamaSettingBool >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pKVar6 = (this->fields).KogamaSettingBool;
  this_01 = (UnityAction_1_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Action<MV::WorldObject::KogamaSettings::KogamaSettingsCore::IKogamaSetting>
                         );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (this_01,(Object *)this,
             MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase__KogamaSettingOnOnValueChange_MV__WorldObject__KogamaSettings__KogamaSettingsCore__IKogamaSetting_
             ,(MethodInfo *)0x0);
  if (pKVar6 == (KogamaSettingBool *)0x0) {
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Action<MV::WorldObject::KogamaSettings::KogamaSettingsCore::IKogamaSetting>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  a = (pKVar6->fields)._.OnValueChange;
  do {
    pDVar8 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)this_01,(MethodInfo *)0x0);
    pAVar9 = 
    TypeInfo__System__Action<MV::WorldObject::KogamaSettings::KogamaSettingsCore::IKogamaSetting>;
    if (pDVar8 == (Delegate *)0x0) {
      pAVar10 = (Action_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_IKogamaSetting_ *)0x0;
    }
    else {
      pAVar10 = (Action_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_IKogamaSetting_ *)
               FUN_?(pDVar8,
                             TypeInfo__System__Action<MV::WorldObject::KogamaSettings::KogamaSettingsCore::IKogamaSetting>
                            );
      if (pAVar10 == (Action_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_IKogamaSetting_ *)0x0
         ) {
        FUN_?(pDVar8,pAVar9);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    ppAVar11 = &(pKVar6->fields)._.OnValueChange;
    LOCK();
    pAVar12 = *ppAVar11;
    bVar1 = a == pAVar12;
    if (bVar1) {
      *ppAVar11 = pAVar10;
      pAVar12 = a;
    }
    UNLOCK();
    pAVar10 = a;
    if (!bVar1) {
      pAVar10 = pAVar12;
    }
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&(pKVar6->fields)._.OnValueChange >> 0xc);
      uVar4 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
      do {
        uVar13 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
        puVar5 = (ulonglong *)(uVar4 * 8 + 0xADDR);
        LOCK();
        bVar1 = uVar13 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar13 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
    bVar1 = pAVar10 != a;
    a = pAVar10;
  } while (bVar1);
  return;
}


/* Boolean get_ValueBool() */

bool MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
     KogamaSettingBoolBase::KogamaSettingBoolBase_get_ValueBool
               (KogamaSettingBoolBase *this,MethodInfo *method)

{
  pKVar1 = (this->fields).KogamaSettingBool;
  if (pKVar1 != (KogamaSettingBool *)0x0) {
    pOVar2 = (pKVar1->fields)._.value;
    if (pOVar2 != (Object *)0x0) {
      if ((pOVar2->klass->_0).element_class == *(Il2CppClass **)(lRam_? + 0x40)) {
        return *(bool *)&pOVar2[1].klass;
      }
      FUN_?(pOVar2,lRam_?);
      pcVar3 = (code *)swi(3);
      bVar4 = (*pcVar3)();
      return bVar4;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Void set_ValueBool(Boolean) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
     KogamaSettingBoolBase::KogamaSettingBoolBase_set_ValueBool
               (KogamaSettingBoolBase *this,bool value,MethodInfo *method)

{
  pKVar1 = (this->fields).KogamaSettingBool;
  if (pKVar1 == (KogamaSettingBool *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  abStackX_10[0] = value;
  pOVar3 = (Object *)FUN_?(uRam_?,abStackX_10);
  bVar4 = iRam_? != 0;
  (pKVar1->fields)._.value = pOVar3;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)&pKVar1->fields >> 0xc);
    puVar6 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar7 = *puVar6;
      LOCK();
      uVar8 = *puVar6;
      if (uVar7 == uVar8) {
        *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (uVar7 != uVar8);
  }
  if ((pKVar1->fields)._.OnValueChange ==
      (Action_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_IKogamaSetting_ *)0x0) {
    return;
  }
  pAVar9 = (pKVar1->fields)._.OnValueChange;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(pAVar9->fields)._._.invoke_impl)
            ((pAVar9->fields)._._.method_code,pKVar1,(pAVar9->fields)._._.method);
  return;
}

