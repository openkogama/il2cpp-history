
/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* Void OnChange(Object) */

void Assembly-CSharp.dll::ProfileSettingsValue::ProfileSettingsValue_OnChange
               (ProfileSettingsValue *this,Object *value,MethodInfo *method)

{
  puVar1 = (undefined4 *)&stack0xfffffffc;
  puVar2 = (undefined4 *)&stack0xfffffffc;
  puVar3 = (undefined4 *)&stack0xfffffffc;
  puVar4 = (undefined4 *)&stack0xfffffffc;
  puVar5 = (undefined4 *)&stack0xfffffffc;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__MetaData__AnistropicFilteringLevel);
    func_?(&TypeInfo__MV__WorldObject__MetaData__AntiAliasingLevel);
    func_?(&TypeInfo__UnityEngine__FilterMode);
    func_?(&TypeInfo__MV__WorldObject__MetaData__LightingQualityLevel);
    func_?(&TypeInfo__MV__WorldObject__MetaData__TargetFrameRateValue);
    func_?(&TypeInfo__MV__WorldObject__MetaData__TextureQualityLevel);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  pTVar6 = (this->fields).text;
  pSVar7 = ::StringLiteral__;
  pOVar8 = value;
  switch((this->fields).profileSettingKey) {
  case 1:
    if (value == (Object *)0x0) goto code_?;
    pAVar9 = (AnistropicFilteringLevel__Enum__Class *)
             TypeInfo__MV__WorldObject__MetaData__TargetFrameRateValue;
    if ((value->klass->_0).element_class !=
        (TypeInfo__MV__WorldObject__MetaData__TargetFrameRateValue->_0).element_class)
    goto code_?;
    site = (CallSite_1_System_Object_ *)&UNK_?;
    args = (Object__Array *)value;
    pTVar10 = (TargetFrameRateValue__Enum *)func_?();
    value_00 = *pTVar10;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
      func_?(&StringLiteral__1_);
      func_?(&StringLiteral_Unlimited);
      func_?(&StringLiteral_Match_display_frequency);
      func_?(&StringLiteral__of_display_frequency);
      cRam_? = '\x01';
    }
    IStack_11.m_value = 0;
    this = (ProfileSettingsValue *)0x0;
    if (value_00 == TargetFrameRateValue__Enum_Unlimited) {
      pSVar7 = TM::TM__(StringLiteral_Unlimited,(MethodInfo *)0x0);
      puVar2 = (undefined4 *)&stack0xfffffffc;
    }
    else if (value_00 == TargetFrameRateValue__Enum_SameAsScreenHz) {
      pSVar7 = TM::TM__(StringLiteral_Match_display_frequency,(MethodInfo *)0x0);
      puVar2 = (undefined4 *)&stack0xfffffffc;
    }
    else {
      if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
      }
      pOVar8 = System.Core.dll::System::Runtime::CompilerServices::CallSiteBinder::
               CallSiteBinder_BindDelegate((CallSiteBinder *)0x0,site,args,unaff_ESI);
      if (pOVar8 != (Object *)0x0) {
        if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
        }
        pOVar8 = System.Core.dll::System::Runtime::CompilerServices::CallSiteBinder::
                 CallSiteBinder_BindDelegate
                           ((CallSiteBinder *)0x0,(CallSite_1_System_Object_ *)unaff_ESI,unaff_EDI,
                            in_stack_12);
        if ((pOVar8 != (Object *)0x1) || (cVar13 = func_?(0), cVar13 != '\0')) {
          if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
              cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
          }
          this = (ProfileSettingsValue *)
                 Assets::Scripts::ProfileSettings::ProfileSettingsManager::
                 ProfileSettingsManager_TargetFrameRateToInt(value_00,(MethodInfo *)0x0);
          pSVar7 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&this,(MethodInfo *)0x0);
          pSVar7 = TM::TM__(pSVar7,(MethodInfo *)0x0);
          puVar2 = (undefined4 *)&stack0xfffffffc;
          break;
        }
      }
      if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
      }
      IStack_11.m_value =
           Assets::Scripts::ProfileSettings::ProfileSettingsManager::
           ProfileSettingsManager_TargetFrameRateToVSyncValue(value_00,(MethodInfo *)0x0);
      pSVar7 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_11,(MethodInfo *)0x0);
      pSVar7 = mscorlib.dll::System::String::String_Concat_4
                         (StringLiteral__1_,pSVar7,StringLiteral__of_display_frequency,
                          (MethodInfo *)0x0);
      pSVar7 = TM::TM__(pSVar7,(MethodInfo *)0x0);
      puVar2 = (undefined4 *)&stack0xfffffffc;
    }
    break;
  case 2:
    puVar5 = (undefined4 *)&stack0xfffffffc;
    if (value == (Object *)0x0) goto code_?;
    pAVar9 = (AnistropicFilteringLevel__Enum__Class *)
             TypeInfo__MV__WorldObject__MetaData__TextureQualityLevel;
    puVar4 = (undefined4 *)&stack0xfffffffc;
    if ((value->klass->_0).element_class !=
        (TypeInfo__MV__WorldObject__MetaData__TextureQualityLevel->_0).element_class)
    goto code_?;
    puVar5 = (undefined4 *)func_?(value);
    uStack_14 = *puVar5;
    EStack_15.klass = (Enum__Class *)TypeInfo__MV__WorldObject__MetaData__TextureQualityLevel;
    this_00 = &EStack_15;
    EStack_15.monitor = (MonitorData *)0xffffffff;
    goto code_?;
  case 3:
    puVar5 = (undefined4 *)&stack0xfffffffc;
    if (value == (Object *)0x0) goto code_?;
    pAVar9 = (AnistropicFilteringLevel__Enum__Class *)TypeInfo__UnityEngine__FilterMode;
    puVar4 = (undefined4 *)&stack0xfffffffc;
    if ((value->klass->_0).element_class != (TypeInfo__UnityEngine__FilterMode->_0).element_class)
    goto code_?;
    puVar5 = (undefined4 *)func_?(value);
    uStack_16 = *puVar5;
    EStack_17.klass = (Enum__Class *)TypeInfo__UnityEngine__FilterMode;
    this_00 = &EStack_17;
    EStack_17.monitor = (MonitorData *)0xffffffff;
    puVar3 = (undefined4 *)&stack0xfffffffc;
    goto code_?;
  case 4:
    puVar5 = (undefined4 *)&stack0xfffffffc;
    if (value == (Object *)0x0) goto code_?;
    pAVar9 = TypeInfo__MV__WorldObject__MetaData__AnistropicFilteringLevel;
    puVar4 = (undefined4 *)&stack0xfffffffc;
    if ((value->klass->_0).element_class !=
        (TypeInfo__MV__WorldObject__MetaData__AnistropicFilteringLevel->_0).element_class)
    goto code_?;
    puVar5 = (undefined4 *)func_?(value);
    uStack_18 = *puVar5;
    EStack_19.klass = (Enum__Class *)TypeInfo__MV__WorldObject__MetaData__AnistropicFilteringLevel;
    EStack_19.monitor = (MonitorData *)0xffffffff;
    pSVar7 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_19,(MethodInfo *)0x0);
    puVar2 = (undefined4 *)&stack0xfffffffc;
    break;
  case 5:
    puVar5 = (undefined4 *)&stack0xfffffffc;
    if (value == (Object *)0x0) goto code_?;
    pAVar9 = (AnistropicFilteringLevel__Enum__Class *)
             TypeInfo__MV__WorldObject__MetaData__AntiAliasingLevel;
    puVar4 = (undefined4 *)&stack0xfffffffc;
    if ((value->klass->_0).element_class !=
        (TypeInfo__MV__WorldObject__MetaData__AntiAliasingLevel->_0).element_class)
    goto code_?;
    func_?(value);
    pAStack_20 = TypeInfo__MV__WorldObject__MetaData__AntiAliasingLevel;
    pSVar7 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&pAStack_20,(MethodInfo *)0x0);
    puVar2 = (undefined4 *)&stack0xfffffffc;
    break;
  case 6:
    bVar21 = value == (Object *)0x0;
    pAVar9 = (AnistropicFilteringLevel__Enum__Class *)
             TypeInfo__MV__WorldObject__MetaData__LightingQualityLevel;
    goto code_?;
  }
  do {
    puVar5 = puVar2;
    if (pTVar6 != (Text *)0x0) {
      (*(code *)(pTVar6->klass->vtable).set_text.method)
                (pTVar6,pSVar7,(pTVar6->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
      return;
    }
code_?:
    while( true ) {
      do {
        uVar22 = func_?();
        bVar23 = (byte)((ulonglong)uVar22 >> 0x20) & *(byte *)&((Object *)uVar22)->klass &
                *extraout_ECX;
        if (bVar23 != 0) {
          return;
        }
        puVar1 = (undefined4 *)*puVar5;
        bVar21 = true;
        pOVar8 = (Object *)uVar22;
        pAVar9 = (AnistropicFilteringLevel__Enum__Class *)
                 CONCAT31((int3)((ulonglong)uVar22 >> 0x28),bVar23);
code_?:
        puVar5 = puVar1;
      } while (bVar21);
      puVar4 = puVar1;
      if ((pOVar8->klass->_0).element_class == (pAVar9->_0).element_class) break;
code_?:
      func_?(pOVar8,pAVar9);
      puVar5 = puVar4;
    }
    puVar5 = (undefined4 *)func_?(pOVar8);
    uVar24 = *puVar5;
    puVar1[-0x10] = TypeInfo__MV__WorldObject__MetaData__LightingQualityLevel;
    this_00 = (Enum *)(puVar1 + -0x10);
    puVar1[-0xf] = 0xffffffff;
    puVar1[-0xe] = uVar24;
    puVar3 = puVar1;
code_?:
    pSVar7 = mscorlib.dll::System::Enum::Enum_ToString(this_00,(MethodInfo *)0x0);
    pSVar7 = TM::TM__(pSVar7,(MethodInfo *)0x0);
    puVar2 = puVar3;
  } while( true );
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::ProfileSettingsValue::ProfileSettingsValue_OnDestroy
               (ProfileSettingsValue *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<System::Object>);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__set_Item_MV__WorldObject__MetaData__ProfileSettingKey__System__Action<System::Object>_
                   );
    func_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    func_?(&MethodInfo__ProfileSettingsValue__OnChange_System__Object_);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
  }
  this_00 = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
            ProfileSettingsChanged;
  key = (this->fields).profileSettingKey;
  if (this_00 !=
      (Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Action_1_Object_ *)0x0) {
    pDVar1 = (Delegate *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
             Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                       ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,key,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                       );
    this_01 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
               *)func_?(TypeInfo__System__Action<System::Object>);
    DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
    DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              (this_01,(Object *)this,MethodInfo__ProfileSettingsValue__OnChange_System__Object_,
               (MethodInfo *)0x0);
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       (pDVar1,(Delegate *)this_01,(MethodInfo *)0x0);
    method_00 = 
    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__set_Item_MV__WorldObject__MetaData__ProfileSettingKey__System__Action<System::Object>_
    ;
    if (pDVar1 == (Delegate *)0x0) {
      value = (Object *)0x0;
    }
    else {
      value = (Object *)func_?();
      if (value == (Object *)0x0) goto code_?;
    }
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__set_Item
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,key,value,method_00);
    return;
  }
  func_?();
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::ProfileSettingsValue::ProfileSettingsValue_Start
               (ProfileSettingsValue *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<System::Object>);
    func_?(&
                    UnityEngine__UI__Text_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::Text>__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__set_Item_MV__WorldObject__MetaData__ProfileSettingKey__System__Action<System::Object>_
                   );
    func_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    func_?(&MethodInfo__ProfileSettingsValue__OnChange_System__Object_);
    cRam_? = '\x01';
  }
  pTVar1 = (Text *)UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                             ((Component *)this,
                              UnityEngine__UI__Text_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::Text>__
                             );
  (this->fields).text = pTVar1;
  func_?(&(this->fields).text,pTVar1);
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
  }
  key = (this->fields).profileSettingKey;
  this_00 = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
            ProfileSettingsChanged;
  if (this_00 !=
      (Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Action_1_Object_ *)0x0) {
    pDVar2 = (Delegate *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
             Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                       ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,key,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                       );
    this_01 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
               *)func_?(TypeInfo__System__Action<System::Object>);
    DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
    DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              (this_01,(Object *)this,MethodInfo__ProfileSettingsValue__OnChange_System__Object_,
               (MethodInfo *)0x0);
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       (pDVar2,(Delegate *)this_01,(MethodInfo *)0x0);
    method_00 = 
    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__set_Item_MV__WorldObject__MetaData__ProfileSettingKey__System__Action<System::Object>_
    ;
    if (pDVar2 == (Delegate *)0x0) {
      pOVar3 = (Object *)0x0;
    }
    else {
      pOVar3 = (Object *)func_?();
      if (pOVar3 == (Object *)0x0) goto code_?;
    }
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__set_Item
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,key,pOVar3,method_00);
    pOVar3 = Assets::Scripts::ProfileSettings::ProfileSettingsManager::
             ProfileSettingsManager_GetSettingValue
                       ((this->fields).profileSettingKey,(MethodInfo *)0x0);
    ProfileSettingsValue_OnChange(this,pOVar3,(MethodInfo *)0x0);
    return;
  }
  func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* String TargetFrameRateValueToString(TargetFrameRateValue) */

String * Assembly-CSharp.dll::ProfileSettingsValue::
         ProfileSettingsValue_TargetFrameRateValueToString
                   (ProfileSettingsValue *this,TargetFrameRateValue__Enum value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    func_?(&StringLiteral__1_);
    func_?(&StringLiteral_Unlimited);
    func_?(&StringLiteral_Match_display_frequency);
    func_?(&StringLiteral__of_display_frequency);
    cRam_? = '\x01';
  }
  if (value == TargetFrameRateValue__Enum_Unlimited) {
    return StringLiteral_Unlimited;
  }
  if (value == TargetFrameRateValue__Enum_SameAsScreenHz) {
    return StringLiteral_Match_display_frequency;
  }
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
  }
  pOVar1 = System.Core.dll::System::Runtime::CompilerServices::CallSiteBinder::
           CallSiteBinder_BindDelegate
                     ((CallSiteBinder *)0x0,unaff_ESI,(Object__Array *)in_stack_2.m_value,
                      (MethodInfo *)in_stack_3.m_value);
  if (pOVar1 != (Object *)0x0) {
    if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pOVar1 = System.Core.dll::System::Runtime::CompilerServices::CallSiteBinder::
             CallSiteBinder_BindDelegate
                       ((CallSiteBinder *)0x0,(CallSite_1_System_Object_ *)in_stack_3.m_value
                        ,unaff_EBP,unaff_retaddr);
    if (pOVar1 == (Object *)0x1) {
      cVar4 = func_?();
      if (cVar4 == '\0') goto code_?;
    }
    if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    Assets::Scripts::ProfileSettings::ProfileSettingsManager::
    ProfileSettingsManager_TargetFrameRateToInt(value,(MethodInfo *)0x0);
    pSVar5 = mscorlib.dll::System::Int32::Int32_ToString
                       ((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
    return pSVar5;
  }
code_?:
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  Assets::Scripts::ProfileSettings::ProfileSettingsManager::
  ProfileSettingsManager_TargetFrameRateToVSyncValue(value,(MethodInfo *)0x0);
  pSVar5 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&stack0xfffffff4,(MethodInfo *)0x0);
  pSVar5 = mscorlib.dll::System::String::String_Concat_4
                     (StringLiteral__1_,pSVar5,StringLiteral__of_display_frequency,(MethodInfo *)0x0
                     );
  return pSVar5;
}

