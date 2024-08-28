
/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* Void OnChange(Object) */

void Assembly-CSharp.dll::ProfileSettingsValue::ProfileSettingsValue_OnChange
               (ProfileSettingsValue *this,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
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
      site = (CallSite_1_System_Object_ *)&UNK_?;
      args = (Object__Array *)value;
      pTVar4 = (TargetFrameRateValue__Enum *)func_?();
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
        if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
        }
        pOVar6 = System.Core.dll::System::Runtime::CompilerServices::CallSiteBinder::
                  CallSiteBinder_BindDelegate((CallSiteBinder *)0x0,site,args,unaff_ESI);
        if (pOVar6 != (Object *)0x0) {
          if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
              cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
          }
          pOVar6 = System.Core.dll::System::Runtime::CompilerServices::CallSiteBinder::
                    CallSiteBinder_BindDelegate
                              ((CallSiteBinder *)0x0,(CallSite_1_System_Object_ *)unaff_ESI,
                               unaff_EDI,(MethodInfo *)in_stack_7);
          unaff_ESI = in_stack_8;
          if ((pOVar6 != (Object *)0x1) ||
             (cVar9 = func_?(), unaff_ESI = in_stack_8, cVar9 != '\0')) {
            if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
                cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
            }
            this = (ProfileSettingsValue *)
                   Assets::Scripts::ProfileSettings::ProfileSettingsManager::
                   ProfileSettingsManager_TargetFrameRateToInt(value_00,(MethodInfo *)0x0);
            pSVar2 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&this,(MethodInfo *)0x0);
            pSVar2 = TM::TM__(pSVar2,(MethodInfo *)0x0);
            goto code_?;
          }
        }
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
        unaff_ESI = pMStack_10;
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
      puVar11 = (undefined4 *)func_?(value);
      uStack_12 = *puVar11;
      EStack_13.klass = (Enum__Class *)TypeInfo__MV__WorldObject__MetaData__TextureQualityLevel;
      this_00 = &EStack_13;
      EStack_13.monitor = (MonitorData *)0xffffffff;
code_?:
      pSVar2 = mscorlib.dll::System::Enum::Enum_ToString(this_00,(MethodInfo *)0x0);
      pSVar2 = TM::TM__(pSVar2,(MethodInfo *)0x0);
      goto code_?;
    }
    break;
  case 3:
    if (value != (Object *)0x0) {
      pAVar3 = (AntiAliasingLevel__Enum__Class *)TypeInfo__UnityEngine__FilterMode;
      if ((value->klass->_0).element_class == (TypeInfo__UnityEngine__FilterMode->_0).element_class)
      {
        puVar11 = (undefined4 *)func_?(value);
        uStack_14 = *puVar11;
        EStack_15.klass = (Enum__Class *)TypeInfo__UnityEngine__FilterMode;
        this_00 = &EStack_15;
        EStack_15.monitor = (MonitorData *)0xffffffff;
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
      piVar16 = (int *)func_?(value);
      pMStack_10 = (MethodInfo *)*piVar16;
      EStack_17.klass = (Enum__Class *)TypeInfo__MV__WorldObject__MetaData__AnistropicFilteringLevel
      ;
      EStack_17.monitor = (MonitorData *)0xffffffff;
      pSVar2 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_17,(MethodInfo *)0x0);
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
      pAStack_18 = TypeInfo__MV__WorldObject__MetaData__AntiAliasingLevel;
      pSVar2 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&pAStack_18,(MethodInfo *)0x0);
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
        this_00 = (Enum *)&stack0xffffffbc;
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
  uVar19 = func_?();
  pbVar20 = (byte *)((ulonglong)uVar19 >> 0x20);
  *(char *)&pTVar1->klass = (char)uVar19;
  *pbVar20 = *pbVar20 ^ (byte)((ulonglong)uVar19 >> 8);
  pbVar20 = (byte *)uVar19 + 0x32;
  bVar21 = (byte)((ulonglong)uVar19 >> 0x20);
  *pbVar20 = *pbVar20 + bVar21;
  puVar22 = (uint *)CONCAT31((int3)((ulonglong)uVar19 >> 0x28),bVar21 & *(byte *)uVar19);
  pAVar23 = (Action_1_Object___Class *)((int)&pTVar1->klass + 2);
  pDVar24 = (Delegate *)((int)&unaff_ESI->methodPointer + 1);
  *(char *)puVar22 = (char)*puVar22 + (char)((ulonglong)uVar19 >> 0x28);
  uVar25 = (uint)&stack0xffffffb8 ^ *puVar22;
  in_stack_26 = in_stack_26 + (char)((uint)unaff_EBX >> 8);
  *(undefined1 **)(uVar25 - 4) = &stack0xfffffffc;
  puVar27 = (undefined1 *)(uVar25 - 8);
  *(undefined4 *)(uVar25 - 8) = extraout_ECX;
  if (cRam_? == '\0') {
    *(Action_1_Object___Class ***)(uVar25 - 0xc) = &TypeInfo__System__Action<System::Object>;
    puVar28 = (undefined1 *)(uVar25 - 0x10);
    *(undefined **)(uVar25 - 0x10) = &UNK_?;
    func_?();
    *(MethodInfo ***)(puVar28 + -4) =
         &
         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
    ;
    puVar29 = puVar28 + -8;
    *(undefined **)(puVar28 + -8) = &UNK_?;
    func_?();
    *(MethodInfo ***)(puVar29 + -4) =
         &
         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__set_Item_MV__WorldObject__MetaData__ProfileSettingKey__System__Action<System::Object>_
    ;
    puVar30 = puVar29 + -8;
    *(undefined **)(puVar29 + -8) = &UNK_?;
    func_?();
    *(ProfileSettingsManager__Class ***)(puVar30 + -4) =
         &TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager;
    puVar31 = puVar30 + -8;
    *(undefined **)(puVar30 + -8) = &UNK_?;
    func_?();
    *(MethodInfo ***)(puVar31 + -4) = &MethodInfo__ProfileSettingsValue__OnChange_System__Object_;
    puVar32 = puVar31 + -8;
    *(undefined **)(puVar31 + -8) = &UNK_?;
    func_?();
    puVar27 = puVar32 + 0x14;
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
      cctor_finished_or_no_cctor == 0) {
    *(ProfileSettingsManager__Class **)(puVar27 + -4) =
         TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager;
    puVar33 = puVar27 + -8;
    *(undefined **)(puVar27 + -8) = &UNK_?;
    func_?();
    puVar27 = puVar33 + 4;
  }
  pPVar34 = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields;
  *(undefined4 *)(puVar27 + -4) = unaff_EBX;
  *(Delegate **)(puVar27 + -8) = pDVar24;
  *(Action_1_Object___Class **)(puVar27 + -0xc) = pAVar23;
  pDVar35 = pPVar34->ProfileSettingsChanged;
  uVar36 = *(undefined4 *)(*(int *)(uVar25 + 4) + 0x10);
  *(undefined4 *)(uVar25 - 8) = uVar36;
  if (pDVar35 == (Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Action_1_Object_ *)
                0x0) {
    puVar37 = puVar27 + -0x10;
    *(undefined **)(puVar27 + -0x10) = &UNK_?;
    func_?();
code_?:
    *(Action_1_Object___Class **)(puVar37 + -4) = pAVar23;
    *(Delegate **)(puVar37 + -8) = pDVar24;
    *(undefined **)(puVar37 + -0xc) = &UNK_?;
    func_?();
    pcVar38 = (code *)swi(3);
    (*pcVar38)();
    return;
  }
  *(MethodInfo **)(puVar27 + -0x10) =
       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
  ;
  *(undefined4 *)(puVar27 + -0x14) = uVar36;
  *(Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Action_1_Object_ **)
   (puVar27 + -0x18) = pDVar35;
  *(undefined **)(puVar27 + -0x1c) = &UNK_?;
  pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
            Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                      (*(Dictionary_2_System_Int32Enum_System_Object_ **)(puVar27 + -0x18),
                       *(Int32Enum__Enum *)(puVar27 + -0x14),*(MethodInfo **)(puVar27 + -0x10));
  *(Action_1_Object___Class **)(puVar27 + -0x10) = TypeInfo__System__Action<System::Object>;
  puVar39 = puVar27 + -0x14;
  *(undefined **)(puVar27 + -0x14) = &UNK_?;
  uVar36 = func_?();
  *(undefined4 *)(puVar39 + -4) = 0;
  *(MethodInfo **)(puVar39 + -8) = MethodInfo__ProfileSettingsValue__OnChange_System__Object_;
  *(undefined4 *)(puVar39 + -0xc) = *(undefined4 *)(uVar25 + 4);
  *(undefined4 *)(puVar39 + -0x10) = uVar36;
  *(undefined **)(puVar39 + -0x14) = &UNK_?;
  DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
  DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            (*(DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
               **)(puVar39 + -0x10),*(Object **)(puVar39 + -0xc),*(void **)(puVar39 + -8),
             *(MethodInfo **)(puVar39 + -4));
  *(undefined4 *)(puVar39 + -4) = 0;
  *(undefined4 *)(puVar39 + -8) = uVar36;
  *(Object **)(puVar39 + -0xc) = pOVar6;
  *(undefined **)(puVar39 + -0x10) = &UNK_?;
  pDVar24 = mscorlib.dll::System::Delegate::Delegate_Remove
                      (*(Delegate **)(puVar39 + -0xc),*(Delegate **)(puVar39 + -8),
                       *(MethodInfo **)(puVar39 + -4));
  pAVar23 = TypeInfo__System__Action<System::Object>;
  puVar40 = puVar39 + 0x2c;
  *(MethodInfo **)(uVar25 + 4) =
       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__set_Item_MV__WorldObject__MetaData__ProfileSettingKey__System__Action<System::Object>_
  ;
  if (pDVar24 == (Delegate *)0x0) {
    iVar41 = 0;
  }
  else {
    *(Action_1_Object___Class **)(puVar39 + 0x28) = pAVar23;
    *(Delegate **)(puVar39 + 0x24) = pDVar24;
    puVar42 = puVar39 + 0x20;
    *(undefined **)(puVar39 + 0x20) = &UNK_?;
    iVar41 = func_?();
    puVar40 = puVar42 + 8;
    puVar37 = puVar42 + 8;
    if (iVar41 == 0) goto code_?;
  }
  *(undefined4 *)(puVar40 + -4) = *(undefined4 *)(uVar25 + 4);
  *(int *)(puVar40 + -8) = iVar41;
  *(undefined4 *)(puVar40 + -0xc) = *(undefined4 *)(uVar25 - 8);
  *(Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Action_1_Object_ **)
   (puVar40 + -0x10) = pDVar35;
  *(undefined **)(puVar40 + -0x14) = &UNK_?;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__set_Item
            (*(Dictionary_2_System_Int32Enum_System_Object_ **)(puVar40 + -0x10),
             *(Int32Enum__Enum *)(puVar40 + -0xc),*(Object **)(puVar40 + -8),
             *(MethodInfo **)(puVar40 + -4));
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
  ppTVar2 = &(this->fields).text;
  *ppTVar2 = pTVar1;
  func_?(ppTVar2,pTVar1);
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
  }
  key = (this->fields).profileSettingKey;
  this_00 = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
            ProfileSettingsChanged;
  if (this_00 !=
      (Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Action_1_Object_ *)0x0) {
    pDVar3 = (Delegate *)
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
    pDVar3 = mscorlib.dll::System::Delegate::Delegate_Combine
                       (pDVar3,(Delegate *)this_01,(MethodInfo *)0x0);
    method_00 = 
    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__set_Item_MV__WorldObject__MetaData__ProfileSettingKey__System__Action<System::Object>_
    ;
    if (pDVar3 == (Delegate *)0x0) {
      pOVar4 = (Object *)0x0;
    }
    else {
      pOVar4 = (Object *)func_?();
      if (pOVar4 == (Object *)0x0) goto code_?;
    }
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__set_Item
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,key,pOVar4,method_00);
    pOVar4 = Assets::Scripts::ProfileSettings::ProfileSettingsManager::
             ProfileSettingsManager_GetSettingValue
                       ((this->fields).profileSettingKey,(MethodInfo *)0x0);
    ProfileSettingsValue_OnChange(this,pOVar4,(MethodInfo *)0x0);
    return;
  }
  func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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

