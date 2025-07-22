
/* Void OnChange(Object) */

void Assembly-CSharp.dll::ProfileSettingsValue::ProfileSettingsValue_OnChange
               (ProfileSettingsValue *this,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?(&TypeInfo__MV__WorldObject__MetaData__AntiAliasingLevel);
    func_?(&TypeInfo__UnityEngine__FilterMode);
    func_?(&TypeInfo__MV__WorldObject__MetaData__LightingQualityLevel);
    in_stack_1 = &TypeInfo__MV__WorldObject__MetaData__TargetFrameRateValue;
    func_?();
    in_stack_2 = &TypeInfo__MV__WorldObject__MetaData__TextureQualityLevel;
    func_?();
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  pTVar3 = (this->fields).text;
  pSVar4 = ::StringLiteral__;
  switch((this->fields).profileSettingKey) {
  case 1:
    if (value == (Object *)0x0) goto code_?;
    pAVar5 = (AntiAliasingLevel__Enum__Class *)
             TypeInfo__MV__WorldObject__MetaData__TargetFrameRateValue;
    if ((value->klass->_0).element_class ==
        (TypeInfo__MV__WorldObject__MetaData__TargetFrameRateValue->_0).element_class) {
      method_00 = (MethodInfo *)&UNK_?;
      args = (Object__Array *)value;
      pTVar6 = (TargetFrameRateValue__Enum *)func_?();
      value_00 = *pTVar6;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
        func_?(&StringLiteral__of_display);
        func_?(&StringLiteral__1_);
        func_?(&StringLiteral_Unlimited);
        func_?(&StringLiteral_Match_display);
        cRam_? = '\x01';
      }
      IStack_7.m_value = 0;
      this = (ProfileSettingsValue *)0x0;
      pSVar4 = StringLiteral_Unlimited;
      if ((value_00 == TargetFrameRateValue__Enum_Unlimited) ||
         (pSVar4 = StringLiteral_Match_display,
         value_00 == TargetFrameRateValue__Enum_SameAsScreenHz)) {
        pSVar4 = TM::TM__(pSVar4,(MethodInfo *)0x0);
        pSVar4 = TM::TM__(pSVar4,(MethodInfo *)0x0);
      }
      else {
        if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
        }
        pOVar8 = System.Core.dll::System::Runtime::CompilerServices::CallSiteBinder::
                 CallSiteBinder_BindDelegate
                           ((CallSiteBinder *)0x0,(CallSite_1_System_Object_ *)in_stack_2,
                            (Object__Array *)in_stack_1,method_00);
        if (pOVar8 != (Object *)0x0) {
          if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
              cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
          }
          pOVar8 = System.Core.dll::System::Runtime::CompilerServices::CallSiteBinder::
                   CallSiteBinder_BindDelegate
                             ((CallSiteBinder *)0x0,(CallSite_1_System_Object_ *)method_00,args,
                              unaff_ESI);
          if ((pOVar8 != (Object *)0x1) || (cVar9 = func_?(0), cVar9 != '\0')) {
            if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
                cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
            }
            this = (ProfileSettingsValue *)
                   Assets::Scripts::ProfileSettings::ProfileSettingsManager::
                   ProfileSettingsManager_TargetFrameRateToInt(value_00,(MethodInfo *)0x0);
            pSVar4 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&this,(MethodInfo *)0x0);
            pSVar4 = TM::TM__(pSVar4,(MethodInfo *)0x0);
            goto code_?;
          }
        }
        if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
        }
        IStack_7.m_value =
             Assets::Scripts::ProfileSettings::ProfileSettingsManager::
             ProfileSettingsManager_TargetFrameRateToVSyncValue(value_00,(MethodInfo *)0x0);
        pSVar4 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_7,(MethodInfo *)0x0);
        str2 = TM::TM__(StringLiteral__of_display,(MethodInfo *)0x0);
        pSVar4 = mscorlib.dll::System::String::String_Concat_4
                           (StringLiteral__1_,pSVar4,str2,(MethodInfo *)0x0);
        pSVar4 = TM::TM__(pSVar4,(MethodInfo *)0x0);
      }
      goto code_?;
    }
    break;
  case 2:
    if (value == (Object *)0x0) goto code_?;
    pAVar5 = (AntiAliasingLevel__Enum__Class *)
             TypeInfo__MV__WorldObject__MetaData__TextureQualityLevel;
    if ((value->klass->_0).element_class ==
        (TypeInfo__MV__WorldObject__MetaData__TextureQualityLevel->_0).element_class) {
      puVar10 = (undefined4 *)func_?(value);
      uStack_11 = *puVar10;
      EStack_12.klass = (Enum__Class *)TypeInfo__MV__WorldObject__MetaData__TextureQualityLevel;
      this_00 = &EStack_12;
      EStack_12.monitor = (MonitorData *)0xffffffff;
code_?:
      pSVar4 = mscorlib.dll::System::Enum::Enum_ToString(this_00,(MethodInfo *)0x0);
      pSVar4 = TM::TM__(pSVar4,(MethodInfo *)0x0);
      goto code_?;
    }
    break;
  case 3:
    if (value == (Object *)0x0) goto code_?;
    pAVar5 = (AntiAliasingLevel__Enum__Class *)TypeInfo__UnityEngine__FilterMode;
    if ((value->klass->_0).element_class == (TypeInfo__UnityEngine__FilterMode->_0).element_class) {
      puVar10 = (undefined4 *)func_?(value);
      uStack_13 = *puVar10;
      EStack_14.klass = (Enum__Class *)TypeInfo__UnityEngine__FilterMode;
      this_00 = &EStack_14;
      EStack_14.monitor = (MonitorData *)0xffffffff;
      goto code_?;
    }
    break;
  case 4:
    if (value == (Object *)0x0) goto code_?;
    pAVar5 = (AntiAliasingLevel__Enum__Class *)
             TypeInfo__MV__WorldObject__MetaData__AnistropicFilteringLevel;
    if ((value->klass->_0).element_class ==
        (TypeInfo__MV__WorldObject__MetaData__AnistropicFilteringLevel->_0).element_class) {
      puVar10 = (undefined4 *)func_?(value);
      uStack_15 = *puVar10;
      EStack_16.klass = (Enum__Class *)TypeInfo__MV__WorldObject__MetaData__AnistropicFilteringLevel
      ;
      EStack_16.monitor = (MonitorData *)0xffffffff;
      pSVar4 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_16,(MethodInfo *)0x0);
      goto code_?;
    }
    break;
  case 5:
    if (value == (Object *)0x0) goto code_?;
    pAVar5 = TypeInfo__MV__WorldObject__MetaData__AntiAliasingLevel;
    if ((value->klass->_0).element_class ==
        (TypeInfo__MV__WorldObject__MetaData__AntiAliasingLevel->_0).element_class) {
      func_?(value);
      pAStack_17 = TypeInfo__MV__WorldObject__MetaData__AntiAliasingLevel;
      pSVar4 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&pAStack_17,(MethodInfo *)0x0);
      goto code_?;
    }
    break;
  case 6:
    if (value == (Object *)0x0) goto code_?;
    pAVar5 = (AntiAliasingLevel__Enum__Class *)
             TypeInfo__MV__WorldObject__MetaData__LightingQualityLevel;
    if ((value->klass->_0).element_class ==
        (TypeInfo__MV__WorldObject__MetaData__LightingQualityLevel->_0).element_class) {
      puVar10 = (undefined4 *)func_?(value);
      uStack_18 = *puVar10;
      EStack_19.klass = (Enum__Class *)TypeInfo__MV__WorldObject__MetaData__LightingQualityLevel;
      this_00 = &EStack_19;
      EStack_19.monitor = (MonitorData *)0xffffffff;
      goto code_?;
    }
    break;
  default:
code_?:
    if (pTVar3 != (Text *)0x0) {
      (*(code *)(pTVar3->klass->vtable).set_text.method)
                (pTVar3,pSVar4,(pTVar3->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
      return;
    }
    goto code_?;
  }
  func_?(value,pAVar5);
code_?:
  func_?();
  *(char *)(extraout_ECX + -0x1befdcc5) =
       *(char *)(extraout_ECX + -0x1befdcc5) + (char)unaff_EBX +
       (&stack0xffffffb8 <
       *(undefined1 **)CONCAT22((short)((uint)unaff_EBX >> 0x10),CONCAT11(0x3a,(char)unaff_EBX)));
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
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
    func_?(&StringLiteral__of_display);
    func_?(&StringLiteral__1_);
    func_?(&StringLiteral_Unlimited);
    func_?(&StringLiteral_Match_display);
    cRam_? = '\x01';
  }
  if (value == TargetFrameRateValue__Enum_Unlimited) {
    pSVar1 = TM::TM__(StringLiteral_Unlimited,(MethodInfo *)0x0);
    return pSVar1;
  }
  if (value == TargetFrameRateValue__Enum_SameAsScreenHz) {
    pSVar1 = TM::TM__(StringLiteral_Match_display,(MethodInfo *)0x0);
    return pSVar1;
  }
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
  }
  pOVar2 = System.Core.dll::System::Runtime::CompilerServices::CallSiteBinder::
           CallSiteBinder_BindDelegate
                     ((CallSiteBinder *)0x0,unaff_ESI,(Object__Array *)in_stack_3.m_value,
                      (MethodInfo *)in_stack_4.m_value);
  if (pOVar2 != (Object *)0x0) {
    if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pOVar2 = System.Core.dll::System::Runtime::CompilerServices::CallSiteBinder::
             CallSiteBinder_BindDelegate
                       ((CallSiteBinder *)0x0,(CallSite_1_System_Object_ *)in_stack_4.m_value
                        ,unaff_EBP,unaff_retaddr);
    if (pOVar2 == (Object *)0x1) {
      cVar5 = func_?();
      if (cVar5 == '\0') goto code_?;
    }
    if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    Assets::Scripts::ProfileSettings::ProfileSettingsManager::
    ProfileSettingsManager_TargetFrameRateToInt(value,(MethodInfo *)0x0);
    pSVar1 = mscorlib.dll::System::Int32::Int32_ToString
                       ((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
    return pSVar1;
  }
code_?:
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  Assets::Scripts::ProfileSettings::ProfileSettingsManager::
  ProfileSettingsManager_TargetFrameRateToVSyncValue(value,(MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&stack0xfffffff4,(MethodInfo *)0x0);
  str2 = TM::TM__(StringLiteral__of_display,(MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::String::String_Concat_4
                     (StringLiteral__1_,pSVar1,str2,(MethodInfo *)0x0);
  return pSVar1;
}

