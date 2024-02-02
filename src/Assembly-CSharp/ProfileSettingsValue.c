
/* Void OnChange(Object) */

void Assembly-CSharp.dll::ProfileSettingsValue::ProfileSettingsValue_OnChange
               (ProfileSettingsValue *this,Object *value,MethodInfo *method)

{
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
  pTVar1 = (this->fields).text;
  pSVar2 = ::StringLiteral__;
  switch((this->fields).profileSettingKey) {
  case 1:
    if (value == (Object *)0x0) goto code_?;
    pAVar3 = (AntiAliasingLevel__Enum__Class *)
             TypeInfo__MV__WorldObject__MetaData__TargetFrameRateValue;
    if ((value->klass->_0).element_class ==
        (TypeInfo__MV__WorldObject__MetaData__TargetFrameRateValue->_0).element_class) {
      method_00 = (MethodInfo *)&UNK_?;
      pTVar4 = (TargetFrameRateValue__Enum *)func_?(value);
      value_00 = *pTVar4;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
        func_?(&StringLiteral__1_);
        func_?(&StringLiteral_Unlimited);
        func_?(&StringLiteral_Match_display_frequency);
        func_?(&StringLiteral__of_display_frequency);
        cRam_? = '\x01';
      }
      IStack_5.m_value = 0;
      this = (ProfileSettingsValue *)0x0;
      if (value_00 == TargetFrameRateValue__Enum_Unlimited) {
        pSVar2 = TM::TM__(StringLiteral_Unlimited,(MethodInfo *)0x0);
      }
      else if (value_00 == TargetFrameRateValue__Enum_SameAsScreenHz) {
        pSVar2 = TM::TM__(StringLiteral_Match_display_frequency,(MethodInfo *)0x0);
      }
      else {
        bVar6 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
                VerticalVirtualizationController`1[System::Object]::
                VerticalVirtualizationController_1_System_Object__get_alwaysRebindOnRefresh
                          ((VerticalVirtualizationController_1_System_Object_ *)0x0,method_00);
        if ((bVar6 == 1) || ((bVar6 == 2 && (cVar7 = func_?(0), cVar7 == '\0')))) {
          if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
              cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
          }
          IStack_5.m_value =
               Assets::Scripts::ProfileSettings::ProfileSettingsManager::
               ProfileSettingsManager_TargetFrameRateToVSyncValue(value_00,(MethodInfo *)0x0);
          pSVar2 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_5,(MethodInfo *)0x0);
          pSVar2 = mscorlib.dll::System::String::String_Concat_4
                             (StringLiteral__1_,pSVar2,StringLiteral__of_display_frequency,
                              (MethodInfo *)0x0);
          pSVar2 = TM::TM__(pSVar2,(MethodInfo *)0x0);
        }
        else {
          if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
              cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
          }
          this = (ProfileSettingsValue *)
                 Assets::Scripts::ProfileSettings::ProfileSettingsManager::
                 ProfileSettingsManager_TargetFrameRateToInt(value_00,(MethodInfo *)0x0);
          pSVar2 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&this,(MethodInfo *)0x0);
          pSVar2 = TM::TM__(pSVar2,(MethodInfo *)0x0);
        }
      }
      goto code_?;
    }
    break;
  case 2:
    if (value == (Object *)0x0) goto code_?;
    pAVar3 = (AntiAliasingLevel__Enum__Class *)
             TypeInfo__MV__WorldObject__MetaData__TextureQualityLevel;
    if ((value->klass->_0).element_class ==
        (TypeInfo__MV__WorldObject__MetaData__TextureQualityLevel->_0).element_class) {
      puVar8 = (undefined4 *)func_?(value);
      uStack_9 = *puVar8;
      EStack_10.klass = (Enum__Class *)TypeInfo__MV__WorldObject__MetaData__TextureQualityLevel;
      this_00 = &EStack_10;
      EStack_10.monitor = (MonitorData *)0xffffffff;
code_?:
      pSVar2 = mscorlib.dll::System::Enum::Enum_ToString(this_00,(MethodInfo *)0x0);
      pSVar2 = TM::TM__(pSVar2,(MethodInfo *)0x0);
      goto code_?;
    }
    break;
  case 3:
    if (value == (Object *)0x0) goto code_?;
    pAVar3 = (AntiAliasingLevel__Enum__Class *)TypeInfo__UnityEngine__FilterMode;
    if ((value->klass->_0).element_class == (TypeInfo__UnityEngine__FilterMode->_0).element_class) {
      puVar8 = (undefined4 *)func_?(value);
      uStack_11 = *puVar8;
      EStack_12.klass = (Enum__Class *)TypeInfo__UnityEngine__FilterMode;
      this_00 = &EStack_12;
      EStack_12.monitor = (MonitorData *)0xffffffff;
      goto code_?;
    }
    break;
  case 4:
    if (value == (Object *)0x0) goto code_?;
    pAVar3 = (AntiAliasingLevel__Enum__Class *)
             TypeInfo__MV__WorldObject__MetaData__AnistropicFilteringLevel;
    if ((value->klass->_0).element_class ==
        (TypeInfo__MV__WorldObject__MetaData__AnistropicFilteringLevel->_0).element_class) {
      puVar8 = (undefined4 *)func_?(value);
      uStack_13 = *puVar8;
      EStack_14.klass = (Enum__Class *)TypeInfo__MV__WorldObject__MetaData__AnistropicFilteringLevel
      ;
      EStack_14.monitor = (MonitorData *)0xffffffff;
      pSVar2 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_14,(MethodInfo *)0x0);
      goto code_?;
    }
    break;
  case 5:
    if (value == (Object *)0x0) goto code_?;
    pAVar3 = TypeInfo__MV__WorldObject__MetaData__AntiAliasingLevel;
    if ((value->klass->_0).element_class ==
        (TypeInfo__MV__WorldObject__MetaData__AntiAliasingLevel->_0).element_class) {
      func_?(value);
      pAStack_15 = TypeInfo__MV__WorldObject__MetaData__AntiAliasingLevel;
      pSVar2 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&pAStack_15,(MethodInfo *)0x0);
      goto code_?;
    }
    break;
  case 6:
    if (value == (Object *)0x0) goto code_?;
    pAVar3 = (AntiAliasingLevel__Enum__Class *)
             TypeInfo__MV__WorldObject__MetaData__LightingQualityLevel;
    if ((value->klass->_0).element_class ==
        (TypeInfo__MV__WorldObject__MetaData__LightingQualityLevel->_0).element_class) {
      func_?(value);
      this_00 = (Enum *)&stack0xffffffbc;
      goto code_?;
    }
    break;
  default:
code_?:
    if (pTVar1 != (Text *)0x0) {
      (*(code *)(pTVar1->klass->vtable).set_text.method)
                (pTVar1,pSVar2,(pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
      return;
    }
    goto code_?;
  }
  func_?(value,pAVar3);
code_?:
  func_?();
  *extraout_EDX = *extraout_EDX & 0x22814110;
  pcVar16 = (char *)((int)&pTVar1[-0x3e416c].fields._._.m_OnDirtyMaterialCallback + 1);
  *pcVar16 = *pcVar16 + extraout_CL;
  *extraout_EDX = *extraout_EDX & 0xcccccc10;
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
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
  bVar1 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
          VerticalVirtualizationController`1[System::Object]::
          VerticalVirtualizationController_1_System_Object__get_alwaysRebindOnRefresh
                    ((VerticalVirtualizationController_1_System_Object_ *)0x0,unaff_ESI);
  if (bVar1 != 1) {
    if (bVar1 == 2) {
      cVar2 = func_?();
      if (cVar2 == '\0') goto code_?;
    }
    if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    IStack_3.m_value =
         Assets::Scripts::ProfileSettings::ProfileSettingsManager::
         ProfileSettingsManager_TargetFrameRateToInt(value,(MethodInfo *)0x0);
    pSVar4 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_3,(MethodInfo *)0x0);
    return pSVar4;
  }
code_?:
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  Assets::Scripts::ProfileSettings::ProfileSettingsManager::
  ProfileSettingsManager_TargetFrameRateToVSyncValue(value,(MethodInfo *)0x0);
  pSVar4 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&stack0xfffffff4,(MethodInfo *)0x0);
  pSVar4 = mscorlib.dll::System::String::String_Concat_4
                     (StringLiteral__1_,pSVar4,StringLiteral__of_display_frequency,(MethodInfo *)0x0
                     );
  return pSVar4;
}

