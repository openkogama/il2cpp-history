
/* Void OnChange(Object) */

void Assembly-CSharp.dll::ProfileSettingsValue::ProfileSettingsValue_OnChange
               (ProfileSettingsValue *this,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
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
    cVar3 = '\0';
    if (value != (Object *)0x0) {
      pIVar4 = (value->klass->_0).element_class;
      pIVar5 = (TypeInfo__MV__WorldObject__MetaData__TargetFrameRateValue->_0).element_class;
      cVar3 = pIVar4 < pIVar5;
      if (pIVar4 != pIVar5) goto code_?;
      site = (CallSite_1_System_Object_ *)&UNK_?;
      args = (Object__Array *)value;
      pTVar6 = (TargetFrameRateValue__Enum *)func_?();
      value_00 = *pTVar6;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
        func_?(&StringLiteral__1_);
        func_?(&StringLiteral_Unlimited);
        func_?(&StringLiteral_Match_display_frequency);
        func_?(&StringLiteral__of_display_frequency);
        cRam_? = '\x01';
      }
      IStack_7.m_value = 0;
      this = (ProfileSettingsValue *)0x0;
      if (value_00 == TargetFrameRateValue__Enum_Unlimited) {
        pSVar2 = TM::TM__(StringLiteral_Unlimited,(MethodInfo *)0x0);
      }
      else if (value_00 == TargetFrameRateValue__Enum_SameAsScreenHz) {
        pSVar2 = TM::TM__(StringLiteral_Match_display_frequency,(MethodInfo *)0x0);
      }
      else {
        if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
        }
        pOVar8 = System.Core.dll::System::Runtime::CompilerServices::CallSiteBinder::
                 CallSiteBinder_BindDelegate((CallSiteBinder *)0x0,site,args,unaff_ESI);
        if (pOVar8 == (Object *)0x0) {
code_?:
          if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
              cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
          }
          IStack_7.m_value =
               Assets::Scripts::ProfileSettings::ProfileSettingsManager::
               ProfileSettingsManager_TargetFrameRateToVSyncValue(value_00,(MethodInfo *)0x0);
          pSVar2 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_7,(MethodInfo *)0x0);
          pSVar2 = mscorlib.dll::System::String::String_Concat_4
                             (StringLiteral__1_,pSVar2,StringLiteral__of_display_frequency,
                              (MethodInfo *)0x0);
          pSVar2 = TM::TM__(pSVar2,(MethodInfo *)0x0);
          unaff_ESI = pMStack_9;
        }
        else {
          if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
              cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
          }
          pOVar8 = System.Core.dll::System::Runtime::CompilerServices::CallSiteBinder::
                   CallSiteBinder_BindDelegate
                             ((CallSiteBinder *)0x0,(CallSite_1_System_Object_ *)unaff_ESI,unaff_EDI
                              ,(MethodInfo *)in_stack_10);
          unaff_ESI = in_stack_11;
          if (pOVar8 == (Object *)0x1) {
            unaff_EDI = (Object__Array *)0x0;
            cVar3 = func_?();
            unaff_ESI = in_stack_11;
            if (cVar3 == '\0') goto code_?;
          }
          if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
              cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
          }
          this = (ProfileSettingsValue *)
                 Assets::Scripts::ProfileSettings::ProfileSettingsManager::
                 ProfileSettingsManager_TargetFrameRateToInt(value_00,(MethodInfo *)0x0);
          pSVar2 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&this,(MethodInfo *)0x0);
          unaff_EDI = (Object__Array *)&UNK_?;
          pSVar2 = TM::TM__(pSVar2,(MethodInfo *)0x0);
        }
      }
      goto code_?;
    }
    break;
  case 2:
    cVar3 = '\0';
    if (value != (Object *)0x0) {
      pIVar4 = (value->klass->_0).element_class;
      pIVar5 = (TypeInfo__MV__WorldObject__MetaData__TextureQualityLevel->_0).element_class;
      cVar3 = pIVar4 < pIVar5;
      if (pIVar4 != pIVar5) goto code_?;
      puVar12 = (undefined4 *)func_?();
      uStack_13 = *puVar12;
      EStack_14.klass = (Enum__Class *)TypeInfo__MV__WorldObject__MetaData__TextureQualityLevel;
      this_01 = &EStack_14;
      EStack_14.monitor = (MonitorData *)0xffffffff;
code_?:
      pSVar2 = mscorlib.dll::System::Enum::Enum_ToString(this_01,(MethodInfo *)0x0);
      pSVar2 = TM::TM__(pSVar2,(MethodInfo *)0x0);
      goto code_?;
    }
    break;
  case 3:
    cVar3 = '\0';
    if (value != (Object *)0x0) {
      pIVar4 = (value->klass->_0).element_class;
      pIVar5 = (TypeInfo__UnityEngine__FilterMode->_0).element_class;
      cVar3 = pIVar4 < pIVar5;
      if (pIVar4 == pIVar5) {
        puVar12 = (undefined4 *)func_?();
        uStack_15 = *puVar12;
        EStack_16.klass = (Enum__Class *)TypeInfo__UnityEngine__FilterMode;
        this_01 = &EStack_16;
        EStack_16.monitor = (MonitorData *)0xffffffff;
        goto code_?;
      }
code_?:
      func_?(value);
    }
    break;
  case 4:
    cVar3 = '\0';
    if (value != (Object *)0x0) {
      pIVar4 = (value->klass->_0).element_class;
      pIVar5 = (TypeInfo__MV__WorldObject__MetaData__AnistropicFilteringLevel->_0).element_class;
      cVar3 = pIVar4 < pIVar5;
      if (pIVar4 != pIVar5) goto code_?;
      piVar17 = (int *)func_?();
      pMStack_9 = (MethodInfo *)*piVar17;
      EStack_18.klass = (Enum__Class *)TypeInfo__MV__WorldObject__MetaData__AnistropicFilteringLevel
      ;
      EStack_18.monitor = (MonitorData *)0xffffffff;
      pSVar2 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_18,(MethodInfo *)0x0);
      goto code_?;
    }
    break;
  case 5:
    cVar3 = '\0';
    if (value != (Object *)0x0) {
      pIVar4 = (value->klass->_0).element_class;
      pIVar5 = (TypeInfo__MV__WorldObject__MetaData__AntiAliasingLevel->_0).element_class;
      cVar3 = pIVar4 < pIVar5;
      if (pIVar4 != pIVar5) goto code_?;
      func_?();
      pAStack_19 = TypeInfo__MV__WorldObject__MetaData__AntiAliasingLevel;
      pSVar2 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&pAStack_19,(MethodInfo *)0x0);
      goto code_?;
    }
    break;
  case 6:
    cVar3 = '\0';
    if (value != (Object *)0x0) {
      pIVar4 = (value->klass->_0).element_class;
      pIVar5 = (TypeInfo__MV__WorldObject__MetaData__LightingQualityLevel->_0).element_class;
      cVar3 = pIVar4 < pIVar5;
      if (pIVar4 == pIVar5) {
        func_?();
        this_01 = (Enum *)&stack0xffffffbc;
        goto code_?;
      }
      goto code_?;
    }
    break;
  default:
code_?:
    cVar3 = '\0';
    if (pTVar1 != (Text *)0x0) {
      (*(code *)(pTVar1->klass->vtable).set_text.method)(pTVar1,pSVar2);
      return;
    }
  }
  func_?();
  func_?();
  pcVar20 = (char *)((int)&unaff_ESI[-0xea549a].parameters + 2);
  *pcVar20 = *pcVar20 + (char)extraout_EDX + cVar3;
  *extraout_EDX = *extraout_EDX + extraout_AH + (extraout_AH < (byte)*unaff_EBX);
  in_stack_21 =
       in_stack_21 + (char)((uint)extraout_ECX >> 8) +
       (&stack0xffffffb4 < (undefined1 *)*unaff_EBX);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<System::Object>,extraout_ECX,&stack0xfffffffc);
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
  pOVar8 = unaff_EDI->vector[0];
  if (this_00 ==
      (Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Action_1_Object_ *)0x0) {
    func_?(pTVar1,unaff_ESI);
code_?:
    func_?();
    pcVar22 = (code *)swi(3);
    (*pcVar22)();
    return;
  }
  pDVar23 = (Delegate *)
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
            Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                      ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,
                       (Int32Enum__Enum)pOVar8,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                      );
  this_02 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
             *)func_?(TypeInfo__System__Action<System::Object>);
  DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
  DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            (this_02,(Object *)unaff_EDI,MethodInfo__ProfileSettingsValue__OnChange_System__Object_,
             (MethodInfo *)0x0);
  pDVar23 = mscorlib.dll::System::Delegate::Delegate_Remove
                      (pDVar23,(Delegate *)this_02,(MethodInfo *)0x0);
  pMVar24 = 
  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__set_Item_MV__WorldObject__MetaData__ProfileSettingKey__System__Action<System::Object>_
  ;
  if (pDVar23 == (Delegate *)0x0) {
    value_01 = (Object *)0x0;
  }
  else {
    value_01 = (Object *)func_?();
    if (value_01 == (Object *)0x0) goto code_?;
  }
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__set_Item
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,(Int32Enum__Enum)pOVar8,
             value_01,pMVar24);
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

