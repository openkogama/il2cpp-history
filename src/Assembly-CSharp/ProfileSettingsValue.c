
/* Void OnChange(Object) */

void Assembly-CSharp.dll::ProfileSettingsValue::ProfileSettingsValue_OnChange
               (ProfileSettingsValue *this,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__MetaData__AnistropicFilteringLevel);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__MetaData__AntiAliasingLevel);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__FilterMode);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__MetaData__LightingQualityLevel);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__MetaData__TargetFrameRateValue);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__MetaData__TextureQualityLevel);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).text;
  pSVar2 = ::StringLiteral__;
  switch((this->fields).profileSettingKey) {
  case 1:
    if (value == (Object *)0x0) goto code_?;
    if ((value->klass->_0).element_class !=
        (TypeInfo__MV__WorldObject__MetaData__TargetFrameRateValue->_0).element_class) {
      FUN_?(value);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar4 = *(int *)&value[1].klass;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral__of_display);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral__1_);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_Unlimited);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_Match_display);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pSVar2 = StringLiteral_Unlimited;
    if ((iVar4 == 0) || (pSVar2 = StringLiteral_Match_display, iVar4 == 4)) {
      pSVar2 = TM::TM__(pSVar2,(MethodInfo *)0x0);
      pSVar2 = TM::TM__(pSVar2,(MethodInfo *)0x0);
    }
    else {
      if ((*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
                    field_0x1c == 0) &&
         (FUN_?(),
         *(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
                  field_0x1c == 0)) {
        FUN_?();
      }
      if (iVar4 == 0) {
        aIStackX_8[0].m_value = 0;
      }
      else if (iVar4 == 1) {
        aIStackX_8[0].m_value = 4;
      }
      else if (iVar4 == 2) {
        aIStackX_8[0].m_value = 3;
      }
      else if (iVar4 == 3) {
        aIStackX_8[0].m_value = 2;
      }
      else {
        aIStackX_8[0].m_value = 1;
      }
      pSVar2 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_8,(MethodInfo *)0x0);
      str2 = TM::TM__(StringLiteral__of_display,(MethodInfo *)0x0);
      pSVar2 = mscorlib.dll::System::String::String_Concat_5
                         (StringLiteral__1_,pSVar2,str2,(MethodInfo *)0x0);
      pSVar2 = TM::TM__(pSVar2,(MethodInfo *)0x0);
    }
    break;
  case 2:
    if (value == (Object *)0x0) goto code_?;
    if ((value->klass->_0).element_class !=
        (TypeInfo__MV__WorldObject__MetaData__TextureQualityLevel->_0).element_class) {
      FUN_?(value);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uStack_5 = *(undefined4 *)&value[1].klass;
    EStack_6.klass = (Enum__Class *)TypeInfo__MV__WorldObject__MetaData__TextureQualityLevel;
    EStack_6.monitor = (MonitorData *)0xffffffffffffffff;
    pSVar2 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_6,(MethodInfo *)0x0);
    pSVar2 = TM::TM__(pSVar2,(MethodInfo *)0x0);
    break;
  case 3:
    if (value == (Object *)0x0) goto code_?;
    if ((value->klass->_0).element_class != (TypeInfo__UnityEngine__FilterMode->_0).element_class) {
      FUN_?(value);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uStack_5 = *(undefined4 *)&value[1].klass;
    EStack_6.klass = (Enum__Class *)TypeInfo__UnityEngine__FilterMode;
    EStack_6.monitor = (MonitorData *)0xffffffffffffffff;
    pSVar2 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_6,(MethodInfo *)0x0);
    pSVar2 = TM::TM__(pSVar2,(MethodInfo *)0x0);
    break;
  case 4:
    if (value == (Object *)0x0) goto code_?;
    if ((value->klass->_0).element_class !=
        (TypeInfo__MV__WorldObject__MetaData__AnistropicFilteringLevel->_0).element_class) {
      FUN_?(value);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uStack_5 = *(undefined4 *)&value[1].klass;
    EStack_6.klass = (Enum__Class *)TypeInfo__MV__WorldObject__MetaData__AnistropicFilteringLevel;
    EStack_6.monitor = (MonitorData *)0xffffffffffffffff;
    pSVar2 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_6,(MethodInfo *)0x0);
    break;
  case 5:
    if (value == (Object *)0x0) goto code_?;
    if ((value->klass->_0).element_class !=
        (TypeInfo__MV__WorldObject__MetaData__AntiAliasingLevel->_0).element_class) {
      FUN_?(value);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uStack_5 = *(undefined4 *)&value[1].klass;
    EStack_6.klass = (Enum__Class *)TypeInfo__MV__WorldObject__MetaData__AntiAliasingLevel;
    EStack_6.monitor = (MonitorData *)0xffffffffffffffff;
    pSVar2 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_6,(MethodInfo *)0x0);
    break;
  case 6:
    if (value == (Object *)0x0) goto code_?;
    if ((value->klass->_0).element_class !=
        (TypeInfo__MV__WorldObject__MetaData__LightingQualityLevel->_0).element_class) {
      FUN_?(value);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uStack_5 = *(undefined4 *)&value[1].klass;
    EStack_6.klass = (Enum__Class *)TypeInfo__MV__WorldObject__MetaData__LightingQualityLevel;
    EStack_6.monitor = (MonitorData *)0xffffffffffffffff;
    pSVar2 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_6,(MethodInfo *)0x0);
    pSVar2 = TM::TM__(pSVar2,(MethodInfo *)0x0);
  }
  if (pTVar1 != (Text *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pTVar1->klass->vtable).set_text.methodPtr)
              (pTVar1,pSVar2,(pTVar1->klass->vtable).set_text.method);
    return;
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::ProfileSettingsValue::ProfileSettingsValue_OnDestroy
               (ProfileSettingsValue *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<System::Object>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__set_Item_MV__WorldObject__MetaData__ProfileSettingKey__System__Action<System::Object>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__ProfileSettingsValue__OnChange_System__Object_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).field_0x1c
      == 0) {
    FUN_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
  }
  this_00 = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
            ProfileSettingsChanged;
  if (this_00 !=
      (Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Action_1_Object_ *)0x0) {
    key = (this->fields).profileSettingKey;
    pDVar1 = (Delegate *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
             Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                       ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,key,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                       );
    this_01 = (UnityAction_1_System_Object_ *)
              FUN_?(TypeInfo__System__Action<System::Object>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
    UnityAction_1_System_Object___ctor
              (this_01,(Object *)this,MethodInfo__ProfileSettingsValue__OnChange_System__Object_,
               (MethodInfo *)0x0);
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       (pDVar1,(Delegate *)this_01,(MethodInfo *)0x0);
    pAVar2 = TypeInfo__System__Action<System::Object>;
    pMVar3 = 
    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__set_Item_MV__WorldObject__MetaData__ProfileSettingKey__System__Action<System::Object>_
    ;
    if (pDVar1 == (Delegate *)0x0) {
      value = (Object *)0x0;
    }
    else {
      value = (Object *)FUN_?(pDVar1,TypeInfo__System__Action<System::Object>);
      if (value == (Object *)0x0) {
        FUN_?(pDVar1,pAVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pIVar5 = pMVar3->klass->rgctx_data;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__TryInsert
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,key,value,
               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pIVar5 >> 8),1),
               pIVar5[0x22].method);
    return;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::ProfileSettingsValue::ProfileSettingsValue_Start
               (ProfileSettingsValue *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<System::Object>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__UI__Text_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::Text>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__set_Item_MV__WorldObject__MetaData__ProfileSettingKey__System__Action<System::Object>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__ProfileSettingsValue__OnChange_System__Object_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (Text *)UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                             ((Component *)this,
                              UnityEngine__UI__Text_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::Text>__
                             );
  bVar2 = iRam_? != 0;
  (this->fields).text = pTVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).text >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).field_0x1c
      == 0) {
    FUN_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
  }
  this_00 = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
            ProfileSettingsChanged;
  if (this_00 ==
      (Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Action_1_Object_ *)0x0) {
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  key = (this->fields).profileSettingKey;
  pDVar8 = (Delegate *)
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
            Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                      ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,key,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                      );
  this_01 = (UnityAction_1_System_Object_ *)FUN_?(TypeInfo__System__Action<System::Object>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (this_01,(Object *)this,MethodInfo__ProfileSettingsValue__OnChange_System__Object_,
             (MethodInfo *)0x0);
  pDVar8 = mscorlib.dll::System::Delegate::Delegate_Combine
                      (pDVar8,(Delegate *)this_01,(MethodInfo *)0x0);
  pAVar9 = TypeInfo__System__Action<System::Object>;
  pMVar10 = 
  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__set_Item_MV__WorldObject__MetaData__ProfileSettingKey__System__Action<System::Object>_
  ;
  if (pDVar8 == (Delegate *)0x0) {
    pOVar11 = (Object *)0x0;
  }
  else {
    pOVar11 = (Object *)FUN_?(pDVar8,TypeInfo__System__Action<System::Object>);
    if (pOVar11 == (Object *)0x0) {
      FUN_?(pDVar8,pAVar9);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pIVar12 = pMVar10->klass->rgctx_data;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,key,pOVar11,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pIVar12 >> 8),1),pIVar12[0x22].method
            );
  pOVar11 = Assets::Scripts::ProfileSettings::ProfileSettingsManager::
            ProfileSettingsManager_GetSettingValue
                      ((this->fields).profileSettingKey,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__MetaData__AnistropicFilteringLevel,pOVar11,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__MetaData__AntiAliasingLevel);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__FilterMode);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__MetaData__LightingQualityLevel);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__MetaData__TargetFrameRateValue);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__MetaData__TextureQualityLevel);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).text;
  pSVar13 = ::StringLiteral__;
  switch((this->fields).profileSettingKey) {
  case 1:
    if (pOVar11 == (Object *)0x0) goto code_?;
    if ((pOVar11->klass->_0).element_class !=
        (TypeInfo__MV__WorldObject__MetaData__TargetFrameRateValue->_0).element_class) {
      FUN_?(pOVar11);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar14 = *(int *)&pOVar11[1].klass;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral__of_display);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral__1_);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_Unlimited);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_Match_display);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pSVar13 = StringLiteral_Unlimited;
    if ((iVar14 == 0) || (pSVar13 = StringLiteral_Match_display, iVar14 == 4)) {
      pSVar13 = TM::TM__(pSVar13,(MethodInfo *)0x0);
      pSVar13 = TM::TM__(pSVar13,(MethodInfo *)0x0);
    }
    else {
      if ((*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
                    field_0x1c == 0) &&
         (FUN_?(),
         *(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
                  field_0x1c == 0)) {
        FUN_?();
      }
      pSVar13 = mscorlib.dll::System::Int32::Int32_ToString
                          ((Int32 *)&stack0x00000008,(MethodInfo *)0x0);
      str2 = TM::TM__(StringLiteral__of_display,(MethodInfo *)0x0);
      pSVar13 = mscorlib.dll::System::String::String_Concat_5
                          (StringLiteral__1_,pSVar13,str2,(MethodInfo *)0x0);
      pSVar13 = TM::TM__(pSVar13,(MethodInfo *)0x0);
    }
    break;
  case 2:
    if (pOVar11 == (Object *)0x0) goto code_?;
    if ((pOVar11->klass->_0).element_class !=
        (TypeInfo__MV__WorldObject__MetaData__TextureQualityLevel->_0).element_class) {
      FUN_?(pOVar11);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pSVar13 = mscorlib.dll::System::Enum::Enum_ToString
                        ((Enum *)&stack0xffffffffffffffd8,(MethodInfo *)0x0);
    pSVar13 = TM::TM__(pSVar13,(MethodInfo *)0x0);
    break;
  case 3:
    if (pOVar11 == (Object *)0x0) goto code_?;
    if ((pOVar11->klass->_0).element_class != (TypeInfo__UnityEngine__FilterMode->_0).element_class)
    {
      FUN_?(pOVar11);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pSVar13 = mscorlib.dll::System::Enum::Enum_ToString
                        ((Enum *)&stack0xffffffffffffffd8,(MethodInfo *)0x0);
    pSVar13 = TM::TM__(pSVar13,(MethodInfo *)0x0);
    break;
  case 4:
    if (pOVar11 == (Object *)0x0) goto code_?;
    if ((pOVar11->klass->_0).element_class !=
        (TypeInfo__MV__WorldObject__MetaData__AnistropicFilteringLevel->_0).element_class) {
      FUN_?(pOVar11);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pSVar13 = mscorlib.dll::System::Enum::Enum_ToString
                        ((Enum *)&stack0xffffffffffffffd8,(MethodInfo *)0x0);
    break;
  case 5:
    if (pOVar11 == (Object *)0x0) goto code_?;
    if ((pOVar11->klass->_0).element_class !=
        (TypeInfo__MV__WorldObject__MetaData__AntiAliasingLevel->_0).element_class) {
      FUN_?(pOVar11);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pSVar13 = mscorlib.dll::System::Enum::Enum_ToString
                        ((Enum *)&stack0xffffffffffffffd8,(MethodInfo *)0x0);
    break;
  case 6:
    if (pOVar11 == (Object *)0x0) goto code_?;
    if ((pOVar11->klass->_0).element_class !=
        (TypeInfo__MV__WorldObject__MetaData__LightingQualityLevel->_0).element_class) {
      FUN_?(pOVar11);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pSVar13 = mscorlib.dll::System::Enum::Enum_ToString
                        ((Enum *)&stack0xffffffffffffffd8,(MethodInfo *)0x0);
    pSVar13 = TM::TM__(pSVar13,(MethodInfo *)0x0);
  }
  if (pTVar1 != (Text *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pTVar1->klass->vtable).set_text.methodPtr)
              (pTVar1,pSVar13,(pTVar1->klass->vtable).set_text.method);
    return;
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* String TargetFrameRateValueToString(TargetFrameRateValue) */

String * Assembly-CSharp.dll::ProfileSettingsValue::
         ProfileSettingsValue_TargetFrameRateValueToString
                   (ProfileSettingsValue *this,TargetFrameRateValue__Enum value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__of_display);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__1_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Unlimited);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Match_display);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_Unlimited;
  if ((value != TargetFrameRateValue__Enum_Unlimited) &&
     (pSVar1 = StringLiteral_Match_display, value != TargetFrameRateValue__Enum_SameAsScreenHz)) {
    if ((*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
                  field_0x1c == 0) &&
       (FUN_?(),
       *(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).field_0x1c
       == 0)) {
      FUN_?();
    }
    pSVar2 = mscorlib.dll::System::Int32::Int32_ToString
                       ((Int32 *)&stack0x00000010,(MethodInfo *)0x0);
    pSVar3 = TM::TM__(StringLiteral__of_display,(MethodInfo *)0x0);
    pSVar1 = StringLiteral__1_;
    pSVar4 = pSVar2;
    pSVar5 = pSVar3;
    if (((((StringLiteral__1_ == (String *)0x0) || ((StringLiteral__1_->fields)._stringLength == 0))
         || (pSVar4 = StringLiteral__1_, pSVar2 == (String *)0x0)) ||
        (((pSVar2->fields)._stringLength == 0 || (pSVar5 = pSVar2, pSVar3 == (String *)0x0)))) ||
       ((pSVar3->fields)._stringLength == 0)) {
      if ((pSVar4 == (String *)0x0) || ((pSVar4->fields)._stringLength == 0)) {
        if ((pSVar5 != (String *)0x0) && ((pSVar5->fields)._stringLength != 0)) {
          return pSVar5;
        }
        return (String *)**(undefined8 **)(lRam_? + 0xb8);
      }
      if ((pSVar5 == (String *)0x0) || ((pSVar5->fields)._stringLength == 0)) {
        return pSVar4;
      }
      iVar6 = (pSVar4->fields)._stringLength;
      pSVar1 = (String *)
                FUN_?((pSVar5->fields)._stringLength + iVar6,pSVar5,0,0,unaff_RDI);
      if (pSVar1 == (String *)0x0) {
        FUN_?();
        pcVar7 = (code *)swi(3);
        pSVar1 = (String *)(*pcVar7)();
        return pSVar1;
      }
      if ((pSVar4->fields)._stringLength <= (pSVar1->fields)._stringLength) {
        puVar8 = &(pSVar1->fields)._firstChar;
        puVar9 = &(pSVar4->fields)._firstChar;
        uVar10 = (pSVar4->fields)._stringLength * 2;
        if (((ulonglong)((longlong)puVar8 - (longlong)puVar9) < (ulonglong)uVar10) ||
           ((ulonglong)((longlong)puVar9 - (longlong)puVar8) < (ulonglong)uVar10)) {
          FUN_?();
        }
        else {
          mscorlib.dll::System::Buffer::Buffer_Memcpy_1
                    ((uint8_t *)puVar8,(uint8_t *)puVar9,uVar10,(MethodInfo *)0x0);
        }
        if ((pSVar5->fields)._stringLength <= (pSVar1->fields)._stringLength - iVar6) {
          puVar9 = &(pSVar1->fields)._firstChar + iVar6;
          puVar8 = &(pSVar5->fields)._firstChar;
          uVar10 = (pSVar5->fields)._stringLength * 2;
          if (((ulonglong)((longlong)puVar9 - (longlong)puVar8) < (ulonglong)uVar10) ||
             ((ulonglong)((longlong)puVar8 - (longlong)puVar9) < (ulonglong)uVar10)) {
            FUN_?();
          }
          else {
            mscorlib.dll::System::Buffer::Buffer_Memcpy_1
                      ((uint8_t *)puVar9,(uint8_t *)puVar8,uVar10,(MethodInfo *)0x0);
          }
          return pSVar1;
        }
        uVar11 = func_?(&TypeInfo__System__IndexOutOfRangeException);
        pIVar12 = (IndexOutOfRangeException *)func_?(uVar11);
        mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor
                  (pIVar12,(MethodInfo *)0x0);
        uVar11 = func_?(&
                                     MethodInfo__System__String__FillStringChecked_MethodInfo__System__String__int__MethodInfo__System__String_
                                    );
        FUN_?(pIVar12,uVar11);
        pcVar7 = (code *)swi(3);
        pSVar1 = (String *)(*pcVar7)();
        return pSVar1;
      }
      uVar11 = func_?(&TypeInfo__System__IndexOutOfRangeException);
      pIVar12 = (IndexOutOfRangeException *)func_?(uVar11);
      mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor
                (pIVar12,(MethodInfo *)0x0);
      uVar11 = func_?(&
                                   MethodInfo__System__String__FillStringChecked_MethodInfo__System__String__int__MethodInfo__System__String_
                                  );
      FUN_?(pIVar12,uVar11);
      pcVar7 = (code *)swi(3);
      pSVar1 = (String *)(*pcVar7)();
      return pSVar1;
    }
    pSVar4 = (String *)
             FUN_?((StringLiteral__1_->fields)._stringLength +
                           (pSVar2->fields)._stringLength + (pSVar3->fields)._stringLength,pSVar2,
                           pSVar3,0);
    if (pSVar4 == (String *)0x0) {
      FUN_?();
      pcVar7 = (code *)swi(3);
      pSVar1 = (String *)(*pcVar7)();
      return pSVar1;
    }
    if ((pSVar4->fields)._stringLength < (pSVar1->fields)._stringLength) {
      uVar11 = func_?(&TypeInfo__System__IndexOutOfRangeException);
      pIVar12 = (IndexOutOfRangeException *)func_?(uVar11);
      mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor
                (pIVar12,(MethodInfo *)0x0);
      uVar11 = func_?(&
                                   MethodInfo__System__String__FillStringChecked_MethodInfo__System__String__int__MethodInfo__System__String_
                                  );
      FUN_?(pIVar12,uVar11);
      pcVar7 = (code *)swi(3);
      pSVar1 = (String *)(*pcVar7)();
      return pSVar1;
    }
    puVar8 = &(pSVar4->fields)._firstChar;
    puVar9 = &(pSVar1->fields)._firstChar;
    uVar10 = (pSVar1->fields)._stringLength * 2;
    if (((ulonglong)((longlong)puVar8 - (longlong)puVar9) < (ulonglong)uVar10) ||
       ((ulonglong)((longlong)puVar9 - (longlong)puVar8) < (ulonglong)uVar10)) {
      FUN_?();
    }
    else {
      mscorlib.dll::System::Buffer::Buffer_Memcpy_1
                ((uint8_t *)puVar8,(uint8_t *)puVar9,uVar10,(MethodInfo *)0x0);
    }
    iVar6 = (pSVar1->fields)._stringLength;
    if ((pSVar4->fields)._stringLength - iVar6 < (pSVar2->fields)._stringLength) {
      uVar11 = func_?(&TypeInfo__System__IndexOutOfRangeException);
      pIVar12 = (IndexOutOfRangeException *)func_?(uVar11);
      mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor
                (pIVar12,(MethodInfo *)0x0);
      uVar11 = func_?(&
                                   MethodInfo__System__String__FillStringChecked_MethodInfo__System__String__int__MethodInfo__System__String_
                                  );
      FUN_?(pIVar12,uVar11);
      pcVar7 = (code *)swi(3);
      pSVar1 = (String *)(*pcVar7)();
      return pSVar1;
    }
    puVar9 = &(pSVar4->fields)._firstChar + iVar6;
    puVar8 = &(pSVar2->fields)._firstChar;
    uVar10 = (pSVar2->fields)._stringLength * 2;
    if (((ulonglong)((longlong)puVar9 - (longlong)puVar8) < (ulonglong)uVar10) ||
       ((ulonglong)((longlong)puVar8 - (longlong)puVar9) < (ulonglong)uVar10)) {
      FUN_?();
    }
    else {
      mscorlib.dll::System::Buffer::Buffer_Memcpy_1
                ((uint8_t *)puVar9,(uint8_t *)puVar8,uVar10,(MethodInfo *)0x0);
    }
    iVar6 = (pSVar1->fields)._stringLength + (pSVar2->fields)._stringLength;
    if ((pSVar3->fields)._stringLength <= (pSVar4->fields)._stringLength - iVar6) {
      puVar8 = &(pSVar3->fields)._firstChar;
      puVar9 = &(pSVar4->fields)._firstChar + iVar6;
      uVar10 = (pSVar3->fields)._stringLength * 2;
      if (((ulonglong)((longlong)puVar9 - (longlong)puVar8) < (ulonglong)uVar10) ||
         ((ulonglong)((longlong)puVar8 - (longlong)puVar9) < (ulonglong)uVar10)) {
        FUN_?();
      }
      else {
        mscorlib.dll::System::Buffer::Buffer_Memcpy_1
                  ((uint8_t *)puVar9,(uint8_t *)puVar8,uVar10,(MethodInfo *)0x0);
      }
      return pSVar4;
    }
    uVar11 = func_?(&TypeInfo__System__IndexOutOfRangeException);
    pIVar12 = (IndexOutOfRangeException *)func_?(uVar11);
    mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor
              (pIVar12,(MethodInfo *)0x0);
    uVar11 = func_?(&
                                 MethodInfo__System__String__FillStringChecked_MethodInfo__System__String__int__MethodInfo__System__String_
                                );
    FUN_?(pIVar12,uVar11);
    pcVar7 = (code *)swi(3);
    pSVar1 = (String *)(*pcVar7)();
    return pSVar1;
  }
  if (cRam_? == '\0') {
    FUN_?(&::StringLiteral__,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Text__RegularExpressions__Regex);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral___sPtr___sPtr_____________Ptr_________);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pSVar1 == (String *)0x0) {
    return (String *)0x0;
  }
  this_01 = (Regex *)FUN_?(TypeInfo__System__Text__RegularExpressions__Regex);
  System.dll::System::Text::RegularExpressions::Regex::Regex__ctor_1
            (this_01,StringLiteral___sPtr___sPtr_____________Ptr_________,(MethodInfo *)0x0);
  if (this_01 != (Regex *)0x0) {
    if (((this_01->fields).roptions & 0x40) == 0) {
      startat = 0;
    }
    else {
      startat = (pSVar1->fields)._stringLength;
    }
    pMVar13 = System.dll::System::Text::RegularExpressions::Regex::Regex_Run
                       (this_01,0,-1,pSVar1,0,(pSVar1->fields)._stringLength,startat,
                        (MethodInfo *)0x0);
    if (pMVar13 != (Match *)0x0) {
      if ((pMVar13->fields)._._capcount != 0) {
        this_02 = (GroupCollection *)
                  (*(pMVar13->klass->vtable).get_Groups.methodPtr)
                            (pMVar13,(pMVar13->klass->vtable).get_Groups.method);
        if (((this_02 == (GroupCollection *)0x0) ||
            (pGVar14 = System.dll::System::Text::RegularExpressions::GroupCollection::
                      GroupCollection_GetGroup(this_02,1,(MethodInfo *)0x0), pGVar14 == (Group *)0x0)
            ) || (pSVar1 = (String *)
                            (*(pGVar14->klass->vtable).ToString.methodPtr)
                                      (pGVar14,(pGVar14->klass->vtable).ToString.method),
                 pSVar1 == (String *)0x0)) goto code_?;
        pSVar1 = mscorlib.dll::System::String::String_Substring_1
                            (pSVar1,1,(pSVar1->fields)._stringLength + -2,(MethodInfo *)0x0);
        pSVar1 = GNU::Gettext::StringEscaping::StringEscaping_FromGettextFormat
                            (pSVar1,(MethodInfo *)0x0);
      }
      if ((pSVar1 != (String *)0x0) && ((pSVar1->fields)._stringLength != 0)) {
        pTVar15 = TM::TM_get_Instance((MethodInfo *)0x0);
        if (pTVar15 == (TM *)0x0) goto code_?;
        if ((pTVar15->fields).catalog != (Catalog *)0x0) {
          pTVar15 = TM::TM_get_Instance((MethodInfo *)0x0);
          if ((pTVar15 == (TM *)0x0) ||
             (this_00 = (pTVar15->fields).catalog, this_00 == (Catalog *)0x0))
          goto code_?;
          this_03 = GNU::Gettext::Catalog::Catalog_FindItem
                              (this_00,pSVar1,::StringLiteral__,(MethodInfo *)0x0);
          if ((this_03 != (CatalogEntry *)0x0) &&
             ((pSVar4 = GNU::Gettext::CatalogEntry::CatalogEntry_GetTranslation
                                  (this_03,0,(MethodInfo *)0x0), pSVar4 != (String *)0x0 &&
              ((pSVar4->fields)._stringLength != 0)))) {
            pSVar1 = GNU::Gettext::StringEscaping::StringEscaping_FromGettextFormat
                                (pSVar4,(MethodInfo *)0x0);
            return pSVar1;
          }
        }
      }
      return pSVar1;
    }
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar7)();
  return pSVar1;
}

