
/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* Void OnChange(Object) */

void Assembly-CSharp.dll::ProfileSettingsValue::ProfileSettingsValue_OnChange
               (ProfileSettingsValue *this,Object *value,MethodInfo *method)

{
  puVar1 = &stack0xfffffffc;
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
  pTVar2 = (this->fields).text;
  pSVar3 = ::StringLiteral__;
  switch((this->fields).profileSettingKey) {
  case 1:
    if (value != (Object *)0x0) {
      pAVar4 = (AntiAliasingLevel__Enum__Class *)
                TypeInfo__MV__WorldObject__MetaData__TargetFrameRateValue;
      if ((value->klass->_0).element_class !=
          (TypeInfo__MV__WorldObject__MetaData__TargetFrameRateValue->_0).element_class)
      goto code_?;
      site = (CallSite_1_System_Object_ *)&UNK_?;
      args = (Object__Array *)value;
      pTVar5 = (TargetFrameRateValue__Enum *)func_?();
      value_00 = *pTVar5;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
        func_?(&StringLiteral__1_);
        func_?(&StringLiteral_Unlimited);
        func_?(&StringLiteral_Match_display_frequency);
        func_?(&StringLiteral__of_display_frequency);
        cRam_? = '\x01';
      }
      IStack_6.m_value = 0;
      this = (ProfileSettingsValue *)0x0;
      if (value_00 == TargetFrameRateValue__Enum_Unlimited) {
        pSVar3 = TM::TM__(StringLiteral_Unlimited,(MethodInfo *)0x0);
      }
      else if (value_00 == TargetFrameRateValue__Enum_SameAsScreenHz) {
        pSVar3 = TM::TM__(StringLiteral_Match_display_frequency,(MethodInfo *)0x0);
      }
      else {
        if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
        }
        pOVar7 = System.Core.dll::System::Runtime::CompilerServices::CallSiteBinder::
                 CallSiteBinder_BindDelegate((CallSiteBinder *)0x0,site,args,unaff_ESI);
        if (pOVar7 != (Object *)0x0) {
          if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
              cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
          }
          pOVar7 = System.Core.dll::System::Runtime::CompilerServices::CallSiteBinder::
                   CallSiteBinder_BindDelegate
                             ((CallSiteBinder *)0x0,(CallSite_1_System_Object_ *)unaff_ESI,unaff_EDI
                              ,(MethodInfo *)in_stack_8);
          unaff_ESI = in_stack_9;
          if ((pOVar7 != (Object *)0x1) ||
             (cVar10 = func_?(), unaff_ESI = in_stack_9, cVar10 != '\0')) {
            if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
                cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
            }
            this = (ProfileSettingsValue *)
                   Assets::Scripts::ProfileSettings::ProfileSettingsManager::
                   ProfileSettingsManager_TargetFrameRateToInt(value_00,(MethodInfo *)0x0);
            pSVar3 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&this,(MethodInfo *)0x0);
            pSVar3 = TM::TM__(pSVar3,(MethodInfo *)0x0);
            goto code_?;
          }
        }
        if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
        }
        IStack_6.m_value =
             Assets::Scripts::ProfileSettings::ProfileSettingsManager::
             ProfileSettingsManager_TargetFrameRateToVSyncValue(value_00,(MethodInfo *)0x0);
        pSVar3 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_6,(MethodInfo *)0x0);
        pSVar3 = mscorlib.dll::System::String::String_Concat_4
                           (StringLiteral__1_,pSVar3,StringLiteral__of_display_frequency,
                            (MethodInfo *)0x0);
        pSVar3 = TM::TM__(pSVar3,(MethodInfo *)0x0);
        unaff_ESI = pMStack_11;
      }
      goto code_?;
    }
    break;
  case 2:
    if (value != (Object *)0x0) {
      pAVar4 = (AntiAliasingLevel__Enum__Class *)
                TypeInfo__MV__WorldObject__MetaData__TextureQualityLevel;
      if ((value->klass->_0).element_class !=
          (TypeInfo__MV__WorldObject__MetaData__TextureQualityLevel->_0).element_class)
      goto code_?;
      puVar12 = (undefined4 *)func_?(value);
      uStack_13 = *puVar12;
      EStack_14.klass = (Enum__Class *)TypeInfo__MV__WorldObject__MetaData__TextureQualityLevel;
      this_01 = &EStack_14;
      EStack_14.monitor = (MonitorData *)0xffffffff;
code_?:
      pSVar3 = mscorlib.dll::System::Enum::Enum_ToString(this_01,(MethodInfo *)0x0);
      pSVar3 = TM::TM__(pSVar3,(MethodInfo *)0x0);
      goto code_?;
    }
    break;
  case 3:
    if (value != (Object *)0x0) {
      pAVar4 = (AntiAliasingLevel__Enum__Class *)TypeInfo__UnityEngine__FilterMode;
      if ((value->klass->_0).element_class == (TypeInfo__UnityEngine__FilterMode->_0).element_class)
      {
        puVar12 = (undefined4 *)func_?(value);
        uStack_15 = *puVar12;
        EStack_16.klass = (Enum__Class *)TypeInfo__UnityEngine__FilterMode;
        this_01 = &EStack_16;
        EStack_16.monitor = (MonitorData *)0xffffffff;
        goto code_?;
      }
code_?:
      func_?(value,pAVar4);
    }
    break;
  case 4:
    if (value != (Object *)0x0) {
      pAVar4 = (AntiAliasingLevel__Enum__Class *)
                TypeInfo__MV__WorldObject__MetaData__AnistropicFilteringLevel;
      if ((value->klass->_0).element_class !=
          (TypeInfo__MV__WorldObject__MetaData__AnistropicFilteringLevel->_0).element_class)
      goto code_?;
      puVar12 = (undefined4 *)func_?(value);
      pMStack_11 = (MethodInfo *)*puVar12;
      EStack_17.klass = (Enum__Class *)TypeInfo__MV__WorldObject__MetaData__AnistropicFilteringLevel
      ;
      EStack_17.monitor = (MonitorData *)0xffffffff;
      pSVar3 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_17,(MethodInfo *)0x0);
      goto code_?;
    }
    break;
  case 5:
    if (value != (Object *)0x0) {
      pAVar4 = TypeInfo__MV__WorldObject__MetaData__AntiAliasingLevel;
      if ((value->klass->_0).element_class !=
          (TypeInfo__MV__WorldObject__MetaData__AntiAliasingLevel->_0).element_class)
      goto code_?;
      func_?(value);
      pSVar3 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&stack0xffffffc8,(MethodInfo *)0x0)
      ;
      goto code_?;
    }
    break;
  case 6:
    if (value != (Object *)0x0) {
      pAVar4 = (AntiAliasingLevel__Enum__Class *)
                TypeInfo__MV__WorldObject__MetaData__LightingQualityLevel;
      if ((value->klass->_0).element_class ==
          (TypeInfo__MV__WorldObject__MetaData__LightingQualityLevel->_0).element_class) {
        func_?(value);
        this_01 = (Enum *)&stack0xffffffbc;
        goto code_?;
      }
      goto code_?;
    }
    break;
  default:
code_?:
    if (pTVar2 != (Text *)0x0) {
      (*(code *)(pTVar2->klass->vtable).set_text.method)
                (pTVar2,pSVar3,(pTVar2->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
      return;
    }
  }
  uVar18 = func_?();
  uVar19 = (uint)((ulonglong)uVar18 >> 0x20) & *(uint *)uVar18;
  ppAVar20 = (Action_1_Object___Class **)(extraout_ECX + -1);
  if (ppAVar20 == (Action_1_Object___Class **)0x0 || uVar19 == 0) {
    uVar21 = *(uint *)uVar18;
    *unaff_EBX = *unaff_EBX & (uint)&stack0xffffffb8;
    *(char *)(extraout_ECX + 0x22) =
         *(char *)(extraout_ECX + 0x22) + ((byte)(uVar19 >> 8) & (byte)(uVar21 >> 8));
    *unaff_EBX = *unaff_EBX & (uint)&stack0xffffffb8;
    cRam_? = cRam_? + (char)ppAVar20;
    puVar1 = &stack0xffffffb8;
    puVar22 = &stack0xffffffb8;
    if (cRam_? == '\0') goto code_?;
  }
  else {
code_?:
    ppAVar20 = &TypeInfo__System__Action<System::Object>;
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
    puVar22 = puVar1;
  }
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager,ppAVar20);
  }
  this_00 = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
            ProfileSettingsChanged;
  key = *(Int32Enum__Enum *)(*(int *)(puVar22 + 8) + 0x10);
  *(Int32Enum__Enum *)(puVar22 + -4) = key;
  if (this_00 ==
      (Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Action_1_Object_ *)0x0) {
    func_?(pTVar2,unaff_ESI);
code_?:
    func_?();
    pcVar23 = (code *)swi(3);
    (*pcVar23)();
    return;
  }
  pDVar24 = (Delegate *)
           mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
           Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                     ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,key,
                      MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                     );
  this_02 = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)
            func_?(TypeInfo__System__Action<System::Object>);
  Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
  SpawnRoleVariable`1[T]+SubDelegate[System::Object]::
  SpawnRoleVariable_1_T_SubDelegate_System_Object___ctor
            (this_02,*(Object **)(puVar22 + 8),
             MethodInfo__ProfileSettingsValue__OnChange_System__Object_,(MethodInfo *)0x0);
  pDVar24 = mscorlib.dll::System::Delegate::Delegate_Remove
                     (pDVar24,(Delegate *)this_02,(MethodInfo *)0x0);
  *(MethodInfo **)(puVar22 + 8) =
       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__set_Item_MV__WorldObject__MetaData__ProfileSettingKey__System__Action<System::Object>_
  ;
  if (pDVar24 == (Delegate *)0x0) {
    pOVar7 = (Object *)0x0;
  }
  else {
    pOVar7 = (Object *)func_?();
    if (pOVar7 == (Object *)0x0) goto code_?;
  }
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__set_Item
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,
             *(Int32Enum__Enum *)(puVar22 + -4),pOVar7,*(MethodInfo **)(puVar22 + 8));
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
    this_01 = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)
              func_?(TypeInfo__System__Action<System::Object>);
    Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
    SpawnRoleVariable`1[T]+SubDelegate[System::Object]::
    SpawnRoleVariable_1_T_SubDelegate_System_Object___ctor
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
    this_01 = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)
              func_?(TypeInfo__System__Action<System::Object>);
    Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
    SpawnRoleVariable`1[T]+SubDelegate[System::Object]::
    SpawnRoleVariable_1_T_SubDelegate_System_Object___ctor
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

