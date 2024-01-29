
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
    if (value != (Object *)0x0) {
      pAVar3 = (AntiAliasingLevel__Enum__Class *)
                TypeInfo__MV__WorldObject__MetaData__TargetFrameRateValue;
      if ((value->klass->_0).element_class !=
          (TypeInfo__MV__WorldObject__MetaData__TargetFrameRateValue->_0).element_class)
      goto code_?;
      puVar4 = (undefined4 *)func_?(value);
      uVar5 = *puVar4;
      if (cRam_? == '\0') {
        func_?(&StringLiteral__20);
        func_?(&StringLiteral__120);
        func_?(&StringLiteral__60);
        func_?(&StringLiteral_Match_display_frequency);
        func_?(&StringLiteral__30);
        func_?(&::StringLiteral__);
        cRam_? = '\x01';
      }
      switch(uVar5) {
      case 0:
        pSVar2 = TM::TM__(StringLiteral__20,(MethodInfo *)0x0);
        break;
      case 1:
        pSVar2 = TM::TM__(StringLiteral__30,(MethodInfo *)0x0);
        break;
      case 2:
        pSVar2 = TM::TM__(StringLiteral__60,(MethodInfo *)0x0);
        break;
      case 3:
        pSVar2 = TM::TM__(StringLiteral__120,(MethodInfo *)0x0);
        break;
      case 4:
        pSVar2 = TM::TM__(StringLiteral_Match_display_frequency,(MethodInfo *)0x0);
        break;
      default:
        pSVar2 = TM::TM__(::StringLiteral__,(MethodInfo *)0x0);
      }
      goto code_?;
    }
    break;
  case 2:
    if (value != (Object *)0x0) {
      pAVar3 = (AntiAliasingLevel__Enum__Class *)
                TypeInfo__MV__WorldObject__MetaData__TextureQualityLevel;
      if ((value->klass->_0).element_class !=
          (TypeInfo__MV__WorldObject__MetaData__TextureQualityLevel->_0).element_class)
      goto code_?;
      puVar4 = (undefined4 *)func_?(value);
      IStack_6 = *puVar4;
      EStack_7.klass = (Enum__Class *)TypeInfo__MV__WorldObject__MetaData__TextureQualityLevel;
      this_01 = &EStack_7;
      EStack_7.monitor = (MonitorData *)0xffffffff;
code_?:
      pSVar2 = mscorlib.dll::System::Enum::Enum_ToString(this_01,(MethodInfo *)0x0);
      pSVar2 = TM::TM__(pSVar2,(MethodInfo *)0x0);
      goto code_?;
    }
    break;
  case 3:
    if (value != (Object *)0x0) {
      pAVar3 = (AntiAliasingLevel__Enum__Class *)TypeInfo__UnityEngine__FilterMode;
      if ((value->klass->_0).element_class == (TypeInfo__UnityEngine__FilterMode->_0).element_class)
      {
        puVar4 = (undefined4 *)func_?(value);
        uStack_8 = *puVar4;
        EStack_9.klass = (Enum__Class *)TypeInfo__UnityEngine__FilterMode;
        this_01 = &EStack_9;
        EStack_9.monitor = (MonitorData *)0xffffffff;
        goto code_?;
      }
code_?:
      func_?(value,pAVar3);
    }
    break;
  case 4:
    if (value != (Object *)0x0) {
      pAVar3 = (AntiAliasingLevel__Enum__Class *)
                TypeInfo__MV__WorldObject__MetaData__AnistropicFilteringLevel;
      if ((value->klass->_0).element_class !=
          (TypeInfo__MV__WorldObject__MetaData__AnistropicFilteringLevel->_0).element_class)
      goto code_?;
      puVar4 = (undefined4 *)func_?(value);
      uStack_10 = *puVar4;
      EStack_11.klass = (Enum__Class *)TypeInfo__MV__WorldObject__MetaData__AnistropicFilteringLevel
      ;
      EStack_11.monitor = (MonitorData *)0xffffffff;
      pSVar2 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_11,(MethodInfo *)0x0);
      goto code_?;
    }
    break;
  case 5:
    if (value != (Object *)0x0) {
      pAVar3 = TypeInfo__MV__WorldObject__MetaData__AntiAliasingLevel;
      if ((value->klass->_0).element_class !=
          (TypeInfo__MV__WorldObject__MetaData__AntiAliasingLevel->_0).element_class)
      goto code_?;
      func_?(value);
      pSVar2 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&stack0xffffffcc,(MethodInfo *)0x0)
      ;
      goto code_?;
    }
    break;
  case 6:
    if (value != (Object *)0x0) {
      pAVar3 = (AntiAliasingLevel__Enum__Class *)
                TypeInfo__MV__WorldObject__MetaData__LightingQualityLevel;
      if ((value->klass->_0).element_class ==
          (TypeInfo__MV__WorldObject__MetaData__LightingQualityLevel->_0).element_class) {
        func_?(value);
        EStack_12.klass = (Enum__Class *)TypeInfo__MV__WorldObject__MetaData__LightingQualityLevel;
        this_01 = &EStack_12;
        EStack_12.monitor = (MonitorData *)0xffffffff;
        goto code_?;
      }
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
  }
  uVar13 = func_?();
  pbVar14 = (byte *)uVar13 + -0x80;
  bVar15 = (byte)((ulonglong)uVar13 >> 0x20);
  *pbVar14 = *pbVar14 + bVar15 +
             ((byte)((uint)unaff_EBX >> 8) < *(byte *)((int)&(pTVar1->fields)._._.m_Color.a + 2));
  uVar16 = (undefined3)((ulonglong)uVar13 >> 0x28);
  bVar15 = bVar15 & *(byte *)uVar13;
  pbVar14 = (byte *)CONCAT31(uVar16,bVar15);
  *pbVar14 = *pbVar14 & 0x10;
  uVar17 = (undefined3)((ulonglong)uVar13 >> 8);
  bVar18 = in(0x80);
  bVar19 = bVar18 ^ *(byte *)(extraout_ECX + -0x7e82efde);
  pbVar14 = (byte *)CONCAT31(uVar16,bVar15 & *(byte *)CONCAT31(uVar17,bVar18) &
                                    *(byte *)CONCAT31(uVar17,bVar19));
  pcVar20 = (char *)((int)&(pTVar1->fields)._._.m_Color.a + 3);
  cVar21 = *pcVar20;
  *pcVar20 = *pcVar20 >> 0x10;
  bVar22 = (cVar21 >> 0xf & 1U) != 0;
  bVar23 = (byte)((ulonglong)uVar13 >> 0x28);
  bVar18 = bVar19 + bVar23;
  bVar15 = bVar18 + bVar22;
  pcVar20 = (char *)CONCAT31(uVar17,bVar15);
  if (bVar15 == 0 || (SCARRY1(bVar19,bVar23) != SCARRY1(bVar18,bVar22)) != (char)bVar15 < '\0') {
    *pcVar20 = *pcVar20 + (char)extraout_ECX + (CARRY1(bVar19,bVar23) || CARRY1(bVar18,bVar22));
    *pbVar14 = *pbVar14 & 0x10;
    pcVar20[-0x3333efde] = pcVar20[-0x3333efde] & bVar15;
    pcVar24 = (code *)swi(3);
    (*pcVar24)();
    return;
  }
  func_?(&TypeInfo__System__Action<System::Object>);
  func_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                 );
  func_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__set_Item_MV__WorldObject__MetaData__ProfileSettingKey__System__Action<System::Object>_
                 );
  func_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
  func_?(&MethodInfo__ProfileSettingsValue__OnChange_System__Object_);
  uRam_? = 1;
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
  }
  this_00 = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
            ProfileSettingsChanged;
  IStack_6 = (this->fields).profileSettingKey;
  if (this_00 ==
      (Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Action_1_Object_ *)0x0) {
    func_?((undefined1 *)((int)&pTVar1->klass + 1),unaff_ESI + 1);
code_?:
    func_?();
    pcVar24 = (code *)swi(3);
    (*pcVar24)();
    return;
  }
  pDVar25 = (Delegate *)
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
            Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                      ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,IStack_6,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                      );
  this_02 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
             *)func_?(TypeInfo__System__Action<System::Object>);
  DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
  DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            (this_02,(Object *)this,MethodInfo__ProfileSettingsValue__OnChange_System__Object_,
             (MethodInfo *)0x0);
  pDVar25 = mscorlib.dll::System::Delegate::Delegate_Remove
                      (pDVar25,(Delegate *)this_02,(MethodInfo *)0x0);
  method_00 = 
  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__set_Item_MV__WorldObject__MetaData__ProfileSettingKey__System__Action<System::Object>_
  ;
  if (pDVar25 == (Delegate *)0x0) {
    value_00 = (Object *)0x0;
  }
  else {
    value_00 = (Object *)func_?();
    if (value_00 == (Object *)0x0) goto code_?;
  }
  EStack_12.monitor = (MonitorData *)&UNK_?;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__set_Item
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,IStack_6,value_00,method_00);
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
    func_?(&StringLiteral__20);
    func_?(&StringLiteral__120);
    func_?(&StringLiteral__60);
    func_?(&StringLiteral_Match_display_frequency);
    func_?(&StringLiteral__30);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  switch(value) {
  case TargetFrameRateValue__Enum__20:
    return StringLiteral__20;
  case TargetFrameRateValue__Enum__30:
    return StringLiteral__30;
  case TargetFrameRateValue__Enum__60:
    return StringLiteral__60;
  case TargetFrameRateValue__Enum__120:
    return StringLiteral__120;
  case TargetFrameRateValue__Enum_SameAsScreenHz:
    return StringLiteral_Match_display_frequency;
  default:
    return ::StringLiteral__;
  }
}

