
/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* Void OnChange(Object) */

void Assembly-CSharp.dll::ProfileSettingsValue::ProfileSettingsValue_OnChange
               (ProfileSettingsValue *this,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  pAVar1 = (Action_1_Object___Class *)(this->fields).text;
  switch((this->fields).profileSettingKey) {
  case 1:
    bVar2 = 0;
    if (value != (Object *)0x0) {
      pIVar3 = (value->klass->_0).element_class;
      pIVar4 = (TypeInfo__MV__WorldObject__MetaData__TargetFrameRateValue->_0).element_class;
      bVar2 = pIVar3 < pIVar4;
      if (pIVar3 != pIVar4) goto code_?;
      site = (CallSite_1_System_Object_ *)&UNK_?;
      args = (Object__Array *)value;
      pTVar5 = (TargetFrameRateValue__Enum *)func_?();
      value_00 = *pTVar5;
      if (cRam_? == '\0') {
        func_?();
        func_?();
        func_?(&StringLiteral_Unlimited);
        func_?(&StringLiteral_Match_display_frequency);
        func_?(&StringLiteral__of_display_frequency);
        cRam_? = '\x01';
      }
      IStack_6.m_value = 0;
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
          func_?();
        }
        pOVar7 = System.Core.dll::System::Runtime::CompilerServices::CallSiteBinder::
                  CallSiteBinder_BindDelegate
                            ((CallSiteBinder *)0x0,site,args,(MethodInfo *)unaff_ESI);
        if (pOVar7 != (Object *)0x0) {
          if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
              cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pOVar7 = System.Core.dll::System::Runtime::CompilerServices::CallSiteBinder::
                    CallSiteBinder_BindDelegate
                              ((CallSiteBinder *)0x0,(CallSite_1_System_Object_ *)unaff_ESI,
                               unaff_EDI,(MethodInfo *)in_stack_8);
          unaff_ESI = in_stack_9;
          if ((pOVar7 != (Object *)0x1) ||
             (cVar10 = func_?(), unaff_ESI = in_stack_9, cVar10 != '\0')) {
            if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
                cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            this = (ProfileSettingsValue *)
                   Assets::Scripts::ProfileSettings::ProfileSettingsManager::
                   ProfileSettingsManager_TargetFrameRateToInt(value_00,(MethodInfo *)0x0);
            pSVar11 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&this,(MethodInfo *)0x0);
            TM::TM__(pSVar11,(MethodInfo *)0x0);
            goto code_?;
          }
        }
        if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        IStack_6.m_value =
             Assets::Scripts::ProfileSettings::ProfileSettingsManager::
             ProfileSettingsManager_TargetFrameRateToVSyncValue(value_00,(MethodInfo *)0x0);
        pSVar11 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_6,(MethodInfo *)0x0);
        pSVar11 = mscorlib.dll::System::String::String_Concat_4
                            (StringLiteral__1_,pSVar11,StringLiteral__of_display_frequency,
                             (MethodInfo *)0x0);
        TM::TM__(pSVar11,(MethodInfo *)0x0);
        unaff_ESI = pDStack_12;
      }
      goto code_?;
    }
    break;
  case 2:
    bVar2 = 0;
    if (value != (Object *)0x0) {
      pIVar3 = (value->klass->_0).element_class;
      pIVar4 = (TypeInfo__MV__WorldObject__MetaData__TextureQualityLevel->_0).element_class;
      bVar2 = pIVar3 < pIVar4;
      if (pIVar3 != pIVar4) goto code_?;
      puVar13 = (undefined4 *)func_?();
      uStack_14 = *puVar13;
      EStack_15.klass = (Enum__Class *)TypeInfo__MV__WorldObject__MetaData__TextureQualityLevel;
      this_00 = &EStack_15;
      EStack_15.monitor = (MonitorData *)0xffffffff;
code_?:
      pSVar11 = mscorlib.dll::System::Enum::Enum_ToString(this_00,(MethodInfo *)0x0);
      TM::TM__(pSVar11,(MethodInfo *)0x0);
      goto code_?;
    }
    break;
  case 3:
    bVar2 = 0;
    if (value != (Object *)0x0) {
      pIVar3 = (value->klass->_0).element_class;
      pIVar4 = (TypeInfo__UnityEngine__FilterMode->_0).element_class;
      bVar2 = pIVar3 < pIVar4;
      if (pIVar3 == pIVar4) {
        puVar13 = (undefined4 *)func_?();
        uStack_16 = *puVar13;
        EStack_17.klass = (Enum__Class *)TypeInfo__UnityEngine__FilterMode;
        this_00 = &EStack_17;
        EStack_17.monitor = (MonitorData *)0xffffffff;
        goto code_?;
      }
code_?:
      func_?();
    }
    break;
  case 4:
    bVar2 = 0;
    if (value != (Object *)0x0) {
      pIVar3 = (value->klass->_0).element_class;
      pIVar4 = (TypeInfo__MV__WorldObject__MetaData__AnistropicFilteringLevel->_0).element_class;
      bVar2 = pIVar3 < pIVar4;
      if (pIVar3 != pIVar4) goto code_?;
      puVar13 = (undefined4 *)func_?();
      pDStack_12 = (Delegate *)*puVar13;
      EStack_18.klass = (Enum__Class *)TypeInfo__MV__WorldObject__MetaData__AnistropicFilteringLevel
      ;
      EStack_18.monitor = (MonitorData *)0xffffffff;
      mscorlib.dll::System::Enum::Enum_ToString(&EStack_18,(MethodInfo *)0x0);
      goto code_?;
    }
    break;
  case 5:
    bVar2 = 0;
    if (value != (Object *)0x0) {
      pIVar3 = (value->klass->_0).element_class;
      pIVar4 = (TypeInfo__MV__WorldObject__MetaData__AntiAliasingLevel->_0).element_class;
      bVar2 = pIVar3 < pIVar4;
      if (pIVar3 != pIVar4) goto code_?;
      func_?();
      pAStack_19 = TypeInfo__MV__WorldObject__MetaData__AntiAliasingLevel;
      mscorlib.dll::System::Enum::Enum_ToString((Enum *)&pAStack_19,(MethodInfo *)0x0);
      goto code_?;
    }
    break;
  case 6:
    bVar2 = 0;
    if (value != (Object *)0x0) {
      pIVar3 = (value->klass->_0).element_class;
      pIVar4 = (TypeInfo__MV__WorldObject__MetaData__LightingQualityLevel->_0).element_class;
      bVar2 = pIVar3 < pIVar4;
      if (pIVar3 == pIVar4) {
        func_?();
        this_00 = (Enum *)&stack0xffffffbc;
        goto code_?;
      }
      goto code_?;
    }
    break;
  default:
code_?:
    bVar2 = 0;
    if (pAVar1 != (Action_1_Object___Class *)0x0) {
      (*(code *)(pAVar1->_0).image[0x12].name)();
      return;
    }
  }
  func_?();
  func_?();
  pbVar20 = (byte *)((int)&unaff_ESI[-0xbb76e2].fields.m_target + 2);
  bVar21 = *pbVar20 + (byte)extraout_EDX;
  bVar22 = CARRY1(*pbVar20,(byte)extraout_EDX) || CARRY1(bVar21,bVar2);
  *pbVar20 = bVar21 + bVar2;
  bVar23 = extraout_AH - (byte)*unaff_EBX;
  bVar24 = extraout_AH < (byte)*unaff_EBX || bVar23 < bVar22;
  bVar23 = bVar23 - bVar22;
  bVar2 = *extraout_EDX;
  bVar21 = *extraout_EDX + bVar23;
  *extraout_EDX = bVar21 + bVar24;
  puVar25 = (undefined1 *)(uint)(CARRY1(bVar2,bVar23) || CARRY1(bVar21,bVar24));
  puVar26 = &stack0xffffffb4 + -*unaff_EBX;
  iVar27 = -(int)puVar25;
  in_stack_28 =
       in_stack_28 + (char)((uint)extraout_ECX >> 8) +
       (&stack0xffffffb4 < (undefined1 *)*unaff_EBX || puVar26 < puVar25);
  *(undefined1 **)(puVar26 + iVar27 + -4) = &stack0xfffffffc;
  puVar29 = puVar26 + iVar27 + -8;
  *(undefined4 *)(puVar26 + iVar27 + -8) = extraout_ECX;
  if (cRam_? == '\0') {
    *(Action_1_Object___Class ***)(puVar26 + iVar27 + -0xc) =
         &TypeInfo__System__Action<System::Object>;
    puVar30 = puVar26 + iVar27 + -0x10;
    *(undefined **)(puVar26 + iVar27 + -0x10) = &UNK_?;
    func_?();
    *(MethodInfo ***)(puVar30 + -4) =
         &
         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
    ;
    puVar31 = puVar30 + -8;
    *(undefined **)(puVar30 + -8) = &UNK_?;
    func_?();
    *(MethodInfo ***)(puVar31 + -4) =
         &
         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__set_Item_MV__WorldObject__MetaData__ProfileSettingKey__System__Action<System::Object>_
    ;
    puVar32 = puVar31 + -8;
    *(undefined **)(puVar31 + -8) = &UNK_?;
    func_?();
    *(ProfileSettingsManager__Class ***)(puVar32 + -4) =
         &TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager;
    puVar33 = puVar32 + -8;
    *(undefined **)(puVar32 + -8) = &UNK_?;
    func_?();
    *(MethodInfo ***)(puVar33 + -4) = &MethodInfo__ProfileSettingsValue__OnChange_System__Object_;
    puVar34 = puVar33 + -8;
    *(undefined **)(puVar33 + -8) = &UNK_?;
    func_?();
    puVar29 = puVar34 + 0x14;
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
      cctor_finished_or_no_cctor == 0) {
    *(ProfileSettingsManager__Class **)(puVar29 + -4) =
         TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager;
    puVar35 = puVar29 + -8;
    *(undefined **)(puVar29 + -8) = &UNK_?;
    func_?();
    puVar29 = puVar35 + 4;
  }
  pPVar36 = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields;
  *(uint **)(puVar29 + -4) = unaff_EBX;
  *(Delegate **)(puVar29 + -8) = unaff_ESI;
  *(Action_1_Object___Class **)(puVar29 + -0xc) = pAVar1;
  pDVar37 = pPVar36->ProfileSettingsChanged;
  uVar38 = *(undefined4 *)(*(int *)(puVar26 + iVar27 + 4) + 0x10);
  *(undefined4 *)(puVar26 + iVar27 + -8) = uVar38;
  if (pDVar37 == (Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Action_1_Object_ *)
                0x0) {
    puVar39 = puVar29 + -0x10;
    *(undefined **)(puVar29 + -0x10) = &UNK_?;
    func_?();
code_?:
    *(Action_1_Object___Class **)(puVar39 + -4) = pAVar1;
    *(Delegate **)(puVar39 + -8) = unaff_ESI;
    *(undefined **)(puVar39 + -0xc) = &UNK_?;
    func_?();
    pcVar40 = (code *)swi(3);
    (*pcVar40)();
    return;
  }
  *(MethodInfo **)(puVar29 + -0x10) =
       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
  ;
  *(undefined4 *)(puVar29 + -0x14) = uVar38;
  *(Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Action_1_Object_ **)
   (puVar29 + -0x18) = pDVar37;
  *(undefined **)(puVar29 + -0x1c) = &UNK_?;
  pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
            Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                      (*(Dictionary_2_System_Int32Enum_System_Object_ **)(puVar29 + -0x18),
                       *(Int32Enum__Enum *)(puVar29 + -0x14),*(MethodInfo **)(puVar29 + -0x10));
  *(Action_1_Object___Class **)(puVar29 + -0x10) = TypeInfo__System__Action<System::Object>;
  puVar41 = puVar29 + -0x14;
  *(undefined **)(puVar29 + -0x14) = &UNK_?;
  uVar38 = func_?();
  *(undefined4 *)(puVar41 + -4) = 0;
  *(MethodInfo **)(puVar41 + -8) = MethodInfo__ProfileSettingsValue__OnChange_System__Object_;
  *(undefined4 *)(puVar41 + -0xc) = *(undefined4 *)(puVar26 + iVar27 + 4);
  *(undefined4 *)(puVar41 + -0x10) = uVar38;
  *(undefined **)(puVar41 + -0x14) = &UNK_?;
  Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
  SpawnRoleVariable`1[T]+SubDelegate[System::Object]::
  SpawnRoleVariable_1_T_SubDelegate_System_Object___ctor
            (*(SpawnRoleVariable_1_T_SubDelegate_System_Object_ **)(puVar41 + -0x10),
             *(Object **)(puVar41 + -0xc),*(void **)(puVar41 + -8),*(MethodInfo **)(puVar41 + -4));
  *(undefined4 *)(puVar41 + -4) = 0;
  *(undefined4 *)(puVar41 + -8) = uVar38;
  *(Object **)(puVar41 + -0xc) = pOVar7;
  *(undefined **)(puVar41 + -0x10) = &UNK_?;
  unaff_ESI = mscorlib.dll::System::Delegate::Delegate_Remove
                        (*(Delegate **)(puVar41 + -0xc),*(Delegate **)(puVar41 + -8),
                         *(MethodInfo **)(puVar41 + -4));
  pAVar1 = TypeInfo__System__Action<System::Object>;
  puVar42 = puVar41 + 0x2c;
  *(MethodInfo **)(puVar26 + iVar27 + 4) =
       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__set_Item_MV__WorldObject__MetaData__ProfileSettingKey__System__Action<System::Object>_
  ;
  if (unaff_ESI == (Delegate *)0x0) {
    iVar43 = 0;
  }
  else {
    *(Action_1_Object___Class **)(puVar41 + 0x28) = TypeInfo__System__Action<System::Object>;
    *(Delegate **)(puVar41 + 0x24) = unaff_ESI;
    puVar44 = puVar41 + 0x20;
    *(undefined **)(puVar41 + 0x20) = &UNK_?;
    iVar43 = func_?();
    puVar42 = puVar44 + 8;
    puVar39 = puVar44 + 8;
    if (iVar43 == 0) goto code_?;
  }
  *(undefined4 *)(puVar42 + -4) = *(undefined4 *)(puVar26 + iVar27 + 4);
  *(int *)(puVar42 + -8) = iVar43;
  *(undefined4 *)(puVar42 + -0xc) = *(undefined4 *)(puVar26 + iVar27 + -8);
  *(Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Action_1_Object_ **)
   (puVar42 + -0x10) = pDVar37;
  *(undefined **)(puVar42 + -0x14) = &UNK_?;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__set_Item
            (*(Dictionary_2_System_Int32Enum_System_Object_ **)(puVar42 + -0x10),
             *(Int32Enum__Enum *)(puVar42 + -0xc),*(Object **)(puVar42 + -8),
             *(MethodInfo **)(puVar42 + -4));
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

