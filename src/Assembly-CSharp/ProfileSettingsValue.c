
/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* Void OnChange(Object) */

void Assembly-CSharp.dll::ProfileSettingsValue::ProfileSettingsValue_OnChange
               (ProfileSettingsValue *this,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    func_?(&TypeInfo__MV__WorldObject__MetaData__LightingQualityLevel);
    func_?(&TypeInfo__MV__WorldObject__MetaData__TargetFrameRateValue);
    func_?(&TypeInfo__MV__WorldObject__MetaData__TextureQualityLevel);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  pAVar1 = (Action_1_Object___Class *)(this->fields).text;
  switch((this->fields).profileSettingKey) {
  case 1:
    if (value != (Object *)0x0) {
      if ((value->klass->_0).element_class !=
          (TypeInfo__MV__WorldObject__MetaData__TargetFrameRateValue->_0).element_class)
      goto code_?;
      site = (CallSite_1_System_Object_ *)&UNK_?;
      args = (Object__Array *)value;
      pTVar2 = (TargetFrameRateValue__Enum *)func_?();
      value_00 = *pTVar2;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
        func_?(&StringLiteral__1_);
        func_?(&StringLiteral_Unlimited);
        func_?(&StringLiteral_Match_display_frequency);
        func_?(&StringLiteral__of_display_frequency);
        cRam_? = '\x01';
      }
      IStack_3.m_value = 0;
      this = (ProfileSettingsValue *)0x0;
      if (value_00 == TargetFrameRateValue__Enum_Unlimited) {
        TM::TM__(StringLiteral_Unlimited,(MethodInfo *)0x0);
      }
      else if (value_00 == TargetFrameRateValue__Enum_SameAsScreenHz) {
        TM::TM__(StringLiteral_Match_display_frequency,(MethodInfo *)0x0);
      }
      else {
        if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
        }
        pOVar4 = System.Core.dll::System::Runtime::CompilerServices::CallSiteBinder::
                  CallSiteBinder_BindDelegate
                            ((CallSiteBinder *)0x0,site,args,(MethodInfo *)unaff_ESI);
        if (pOVar4 == (Object *)0x0) {
code_?:
          if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
              cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          IStack_3.m_value =
               Assets::Scripts::ProfileSettings::ProfileSettingsManager::
               ProfileSettingsManager_TargetFrameRateToVSyncValue(value_00,(MethodInfo *)0x0);
          pSVar5 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_3,(MethodInfo *)0x0);
          pSVar5 = mscorlib.dll::System::String::String_Concat_4
                             (StringLiteral__1_,pSVar5,StringLiteral__of_display_frequency,
                              (MethodInfo *)0x0);
          TM::TM__(pSVar5,(MethodInfo *)0x0);
          unaff_ESI = pDStack_6;
        }
        else {
          if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
              cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pOVar4 = System.Core.dll::System::Runtime::CompilerServices::CallSiteBinder::
                    CallSiteBinder_BindDelegate
                              ((CallSiteBinder *)0x0,(CallSite_1_System_Object_ *)unaff_ESI,
                               unaff_EDI,(MethodInfo *)in_stack_7);
          unaff_ESI = in_stack_8;
          if (pOVar4 == (Object *)0x1) {
            unaff_EDI = (Object__Array *)0x0;
            cVar9 = func_?();
            unaff_ESI = in_stack_8;
            if (cVar9 == '\0') goto code_?;
          }
          if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
              cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          this = (ProfileSettingsValue *)
                 Assets::Scripts::ProfileSettings::ProfileSettingsManager::
                 ProfileSettingsManager_TargetFrameRateToInt(value_00,(MethodInfo *)0x0);
          pSVar5 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&this,(MethodInfo *)0x0);
          unaff_EDI = (Object__Array *)&UNK_?;
          TM::TM__(pSVar5,(MethodInfo *)0x0);
        }
      }
      goto code_?;
    }
    break;
  case 2:
    if (value != (Object *)0x0) {
      if ((value->klass->_0).element_class !=
          (TypeInfo__MV__WorldObject__MetaData__TextureQualityLevel->_0).element_class)
      goto code_?;
      puVar10 = (undefined4 *)func_?();
      uStack_11 = *puVar10;
      EStack_12.klass = (Enum__Class *)TypeInfo__MV__WorldObject__MetaData__TextureQualityLevel;
      this_00 = &EStack_12;
      EStack_12.monitor = (MonitorData *)0xffffffff;
code_?:
      pSVar5 = mscorlib.dll::System::Enum::Enum_ToString(this_00,(MethodInfo *)0x0);
      TM::TM__(pSVar5,(MethodInfo *)0x0);
      goto code_?;
    }
    break;
  case 3:
    if (value != (Object *)0x0) {
      if ((value->klass->_0).element_class == (TypeInfo__UnityEngine__FilterMode->_0).element_class)
      {
        puVar10 = (undefined4 *)func_?();
        uStack_13 = *puVar10;
        EStack_14.klass = (Enum__Class *)TypeInfo__UnityEngine__FilterMode;
        this_00 = &EStack_14;
        EStack_14.monitor = (MonitorData *)0xffffffff;
        goto code_?;
      }
code_?:
      func_?();
    }
    break;
  case 4:
    if (value != (Object *)0x0) {
      if ((value->klass->_0).element_class !=
          (TypeInfo__MV__WorldObject__MetaData__AnistropicFilteringLevel->_0).element_class)
      goto code_?;
      puVar10 = (undefined4 *)func_?();
      pDStack_6 = (Delegate *)*puVar10;
      EStack_15.klass = (Enum__Class *)TypeInfo__MV__WorldObject__MetaData__AnistropicFilteringLevel
      ;
      EStack_15.monitor = (MonitorData *)0xffffffff;
      mscorlib.dll::System::Enum::Enum_ToString(&EStack_15,(MethodInfo *)0x0);
      goto code_?;
    }
    break;
  case 5:
    if (value != (Object *)0x0) {
      if ((value->klass->_0).element_class !=
          (TypeInfo__MV__WorldObject__MetaData__AntiAliasingLevel->_0).element_class)
      goto code_?;
      func_?();
      pAStack_16 = TypeInfo__MV__WorldObject__MetaData__AntiAliasingLevel;
      mscorlib.dll::System::Enum::Enum_ToString((Enum *)&pAStack_16,(MethodInfo *)0x0);
      goto code_?;
    }
    break;
  case 6:
    if (value != (Object *)0x0) {
      if ((value->klass->_0).element_class ==
          (TypeInfo__MV__WorldObject__MetaData__LightingQualityLevel->_0).element_class) {
        func_?();
        this_00 = (Enum *)&stack0xffffffbc;
        goto code_?;
      }
      goto code_?;
    }
    break;
  default:
code_?:
    if (pAVar1 != (Action_1_Object___Class *)0x0) {
      (*(code *)(pAVar1->_0).image[0x12].name)(pAVar1);
      return;
    }
  }
  uVar17 = func_?();
  puVar18 = (uint *)uVar17;
  uVar19 = *puVar18;
  pbVar20 = (byte *)((uint)((ulonglong)uVar17 >> 0x20) & *puVar18);
  *pbVar20 = *pbVar20 ^ (byte)uVar19;
  uVar21 = *puVar18;
  LOCK();
  *(byte *)((uint)pbVar20 & uVar21) = (byte)uVar19;
  UNLOCK();
  puVar22 = (undefined6 *)((uint)pbVar20 & uVar21 & *puVar18);
  uVar23 = *puVar22;
  puVar24 = (uint *)CONCAT31((int3)((uint6)uVar23 >> 8),(char)uVar23 + *(char *)uVar23);
  uVar21 = (uint)puVar22 & *puVar18 & *puVar18;
  iVar25 = -*puVar24;
  pcVar26 = (char *)((int)unaff_EDI[-1].vector + 0xb);
  *pcVar26 = *pcVar26 + (char)uVar21 + (&stack0xffffffbc < (undefined1 *)*puVar24);
  in((short)uVar21);
  puVar27 = &stack0xffffffb8 + iVar25;
  *(undefined4 *)(&stack0xffffffb8 + iVar25) = extraout_ECX;
  if (cRam_? == '\0') {
    *(Action_1_Object___Class ***)(&stack0xffffffb4 + iVar25) =
         &TypeInfo__System__Action<System::Object>;
    puVar28 = &stack0xffffffb0 + iVar25;
    *(undefined **)(&stack0xffffffb0 + iVar25) = &UNK_?;
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
  *(uint **)(puVar27 + -4) = puVar24;
  *(Delegate **)(puVar27 + -8) = unaff_ESI;
  *(Action_1_Object___Class **)(puVar27 + -0xc) = pAVar1;
  pDVar35 = pPVar34->ProfileSettingsChanged;
  pOVar4 = (Object *)unaff_EDI->bounds[2].length;
  unaff_EDI[-1].vector[0x1f] = pOVar4;
  if (pDVar35 == (Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Action_1_Object_ *)
                0x0) {
    puVar36 = puVar27 + -0x10;
    *(undefined **)(puVar27 + -0x10) = &UNK_?;
    func_?();
code_?:
    *(Action_1_Object___Class **)(puVar36 + -4) = pAVar1;
    *(Delegate **)(puVar36 + -8) = unaff_ESI;
    *(undefined **)(puVar36 + -0xc) = &UNK_?;
    func_?();
    pcVar37 = (code *)swi(3);
    (*pcVar37)();
    return;
  }
  *(MethodInfo **)(puVar27 + -0x10) =
       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
  ;
  *(Object **)(puVar27 + -0x14) = pOVar4;
  *(Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Action_1_Object_ **)
   (puVar27 + -0x18) = pDVar35;
  *(undefined **)(puVar27 + -0x1c) = &UNK_?;
  pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
            Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                      (*(Dictionary_2_System_Int32Enum_System_Object_ **)(puVar27 + -0x18),
                       *(Int32Enum__Enum *)(puVar27 + -0x14),*(MethodInfo **)(puVar27 + -0x10));
  *(Action_1_Object___Class **)(puVar27 + -0x10) = TypeInfo__System__Action<System::Object>;
  puVar38 = puVar27 + -0x14;
  *(undefined **)(puVar27 + -0x14) = &UNK_?;
  uVar39 = func_?();
  *(undefined4 *)(puVar38 + -4) = 0;
  *(MethodInfo **)(puVar38 + -8) = MethodInfo__ProfileSettingsValue__OnChange_System__Object_;
  *(Il2CppArrayBounds **)(puVar38 + -0xc) = unaff_EDI->bounds;
  *(undefined4 *)(puVar38 + -0x10) = uVar39;
  *(undefined **)(puVar38 + -0x14) = &UNK_?;
  Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
  SpawnRoleVariable`1[T]+SubDelegate[System::Object]::
  SpawnRoleVariable_1_T_SubDelegate_System_Object___ctor
            (*(SpawnRoleVariable_1_T_SubDelegate_System_Object_ **)(puVar38 + -0x10),
             *(Object **)(puVar38 + -0xc),*(void **)(puVar38 + -8),*(MethodInfo **)(puVar38 + -4));
  *(undefined4 *)(puVar38 + -4) = 0;
  *(undefined4 *)(puVar38 + -8) = uVar39;
  *(Object **)(puVar38 + -0xc) = pOVar4;
  *(undefined **)(puVar38 + -0x10) = &UNK_?;
  unaff_ESI = mscorlib.dll::System::Delegate::Delegate_Remove
                        (*(Delegate **)(puVar38 + -0xc),*(Delegate **)(puVar38 + -8),
                         *(MethodInfo **)(puVar38 + -4));
  pAVar1 = TypeInfo__System__Action<System::Object>;
  puVar40 = puVar38 + 0x2c;
  unaff_EDI->bounds =
       (Il2CppArrayBounds *)
       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__set_Item_MV__WorldObject__MetaData__ProfileSettingKey__System__Action<System::Object>_
  ;
  if (unaff_ESI == (Delegate *)0x0) {
    iVar25 = 0;
  }
  else {
    *(Action_1_Object___Class **)(puVar38 + 0x28) = pAVar1;
    *(Delegate **)(puVar38 + 0x24) = unaff_ESI;
    puVar41 = puVar38 + 0x20;
    *(undefined **)(puVar38 + 0x20) = &UNK_?;
    iVar25 = func_?();
    puVar40 = puVar41 + 8;
    puVar36 = puVar41 + 8;
    if (iVar25 == 0) goto code_?;
  }
  *(Il2CppArrayBounds **)(puVar40 + -4) = unaff_EDI->bounds;
  *(int *)(puVar40 + -8) = iVar25;
  *(Object **)(puVar40 + -0xc) = unaff_EDI[-1].vector[0x1f];
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

