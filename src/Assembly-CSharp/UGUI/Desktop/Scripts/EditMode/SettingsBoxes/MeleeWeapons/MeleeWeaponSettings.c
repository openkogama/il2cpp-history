
/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::MeleeWeapons::
     MeleeWeaponSettings::MeleeWeaponSettings_Initialize
               (MeleeWeaponSettings *this,int32_t woID,GameObject *root,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__Extensions);
    func_?(&TypeInfo__System__Int32);
    func_?(&MethodInfo__System__Collections__Generic__List<int>__Add_int_);
    func_?(&MethodInfo__System__Collections__Generic__List<int>__List_int_);
    func_?(&TypeInfo__System__Collections__Generic__List<int>);
    func_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData);
    func_?(&TypeInfo__System__Single);
    func_?(&TypeInfo__System__String);
    func_?(&StringLiteral_Damage);
    func_?(&StringLiteral_ImpulseStrength);
    func_?(&StringLiteral_TrailColor);
    func_?(&StringLiteral_Name);
    func_?(&StringLiteral_AttackAnimationTime);
    func_?(&StringLiteral_AttackCooldown);
    func_?(&StringLiteral_HitSoundEffect);
    func_?(&StringLiteral_itemData);
    func_?(&StringLiteral_RecoilStrength);
    func_?(&StringLiteral_FireSoundEffect);
    func_?(&StringLiteral_Range);
    func_?(&StringLiteral_HitEffectColor);
    cRam_? = '\x01';
  }
  if (woID == -1) {
    if ((TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData);
    }
    pDVar1 = Assets::Scripts::WorldObjectTypes::MeleeWeapon::MeleeWeaponData::
              MeleeWeaponData_DefaultData((MethodInfo *)0x0);
    (this->fields).data = pDVar1;
    func_?(&(this->fields).data,pDVar1);
    pDVar2 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)(this->fields).data;
    if (pDVar2 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
    goto code_?;
    TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
             UIElements::TextureId]::
             Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                       (pDVar2,(Object *)StringLiteral_itemData,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (TVar3.m_Index == 0) {
      (this->fields).itemData = (Dictionary_2_System_Object_System_Object_ *)0x0;
    }
    else {
      if ((*(byte *)(*(int *)TVar3.m_Index + 0xb8) <
           (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment) ||
         (*(Dictionary_2_System_Object_System_Object___Class **)
           (*(int *)(*(int *)TVar3.m_Index + 100) + -4 +
           (uint)(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 ->_1).naturalAligment * 4) !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
      goto code_?;
      (this->fields).itemData = (Dictionary_2_System_Object_System_Object_ *)TVar3.m_Index;
      if ((*(byte *)(*(int *)TVar3.m_Index + 0xb8) <
           (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment) ||
         (*(Dictionary_2_System_Object_System_Object___Class **)
           (*(int *)(*(int *)TVar3.m_Index + 100) + -4 +
           (uint)(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 ->_1).naturalAligment * 4) !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
      goto code_?;
    }
code_?:
    func_?();
    this_00 = (this->fields).settingsBase;
    if (this_00 == (SettingsBase *)0x0) goto code_?;
    SettingsBase::SettingsBase_Initialize
              (this_00,woID,root,MVWorldObjectDocumentationType__Enum_MeleeWeapon,(MethodInfo *)0x0)
    ;
    if ((TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData);
    }
    VVar4 = Assets::Scripts::WorldObjectTypes::MeleeWeapon::MeleeWeaponData::
             MeleeWeaponData_MinMaxValue(StringLiteral_Damage,(MethodInfo *)0x0);
    VVar5 = Assets::Scripts::WorldObjectTypes::MeleeWeapon::MeleeWeaponData::
             MeleeWeaponData_MinMaxValue(StringLiteral_ImpulseStrength,(MethodInfo *)0x0);
    VVar6 = Assets::Scripts::WorldObjectTypes::MeleeWeapon::MeleeWeaponData::
             MeleeWeaponData_MinMaxValue(StringLiteral_RecoilStrength,(MethodInfo *)0x0);
    Assets::Scripts::WorldObjectTypes::MeleeWeapon::MeleeWeaponData::MeleeWeaponData_MinMaxValue
              (StringLiteral_AttackAnimationTime,(MethodInfo *)0x0);
    Assets::Scripts::WorldObjectTypes::MeleeWeapon::MeleeWeaponData::MeleeWeaponData_MinMaxValue
              (StringLiteral_AttackCooldown,(MethodInfo *)0x0);
    Assets::Scripts::WorldObjectTypes::MeleeWeapon::MeleeWeaponData::MeleeWeaponData_MinMaxValue
              (StringLiteral_Range,(MethodInfo *)0x0);
    pSVar7 = TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData->
             static_fields->fireSoundEffects;
    if (pSVar7 == (String__Array *)0x0) goto code_?;
    this_03 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
               *)func_?();
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
    MultiColumnCollectionHeader+ViewState+ColumnState]::
    List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
              (this_03,pSVar7->max_length,
               MethodInfo__System__Collections__Generic__List<int>__List_int_);
    iVar8 = 0;
    while( true ) {
      while( true ) {
        if ((TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pMVar9 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
        pSVar7 = TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData->
                 static_fields->fireSoundEffects;
        if (pSVar7 == (String__Array *)0x0) goto code_?;
        if ((int)pSVar7->max_length <= iVar8) {
          if ((TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData->_1).
              cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pSVar7 = TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData->
                   static_fields->hitSoundEffects;
          if (pSVar7 == (String__Array *)0x0) goto code_?;
          this_04 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                     *)func_?();
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
          MultiColumnCollectionHeader+ViewState+ColumnState]::
          List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
                    (this_04,pSVar7->max_length,
                     MethodInfo__System__Collections__Generic__List<int>__List_int_);
          iVar8 = 0;
          goto code_?;
        }
        if (this_03 ==
            (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
             *)0x0) goto code_?;
        piVar10 = &(this_03->fields)._version;
        *piVar10 = *piVar10 + 1;
        pMVar11 = (this_03->fields)._items;
        if (pMVar11 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
        goto code_?;
        uVar12 = (this_03->fields)._size;
        if (uVar12 < pMVar11->max_length) break;
        mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
        List_1_System_Int32__AddWithResize
                  ((List_1_System_Int32_ *)this_03,iVar8,pMVar9->klass->rgctx_data[0xe].method);
        iVar8 = iVar8 + 1;
      }
      (this_03->fields)._size = uVar12 + 1;
      if (pMVar11->max_length <= uVar12) break;
      (&pMVar11->vector[0].index)[uVar12] = iVar8;
      iVar8 = iVar8 + 1;
    }
  }
  else {
    this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_02 != (MVWorldObjectClientManager *)0x0) {
      pMVar13 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          (this_02,woID,(MethodInfo *)0x0);
      if (pMVar13 != (MVWorldObject *)0x0) {
        (this->fields).data = (pMVar13->fields).data;
        func_?(&(this->fields).data);
        pDVar1 = MeleeWeaponSettings_ReadWorldObjectItemData
                            (this,(this->fields).data,(MethodInfo *)0x0);
        (this->fields).itemData = pDVar1;
        goto code_?;
      }
    }
code_?:
    func_?();
  }
code_?:
  func_?();
  TVar3.m_Index = extraout_EDX;
code_?:
  func_?(TVar3.m_Index);
  TVar3.m_Index = extraout_ECX;
code_?:
  TVar14.m_Index = func_?(TVar3.m_Index);
code_?:
  func_?(TVar14.m_Index);
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
code_?:
  if ((TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pMVar9 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
  pSVar7 = TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData->static_fields
           ->hitSoundEffects;
  if (pSVar7 == (String__Array *)0x0) goto code_?;
  if ((int)pSVar7->max_length <= iVar8) {
    this_01 = (this->fields).nameInputField;
    pDVar2 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)(this->fields).itemData
    ;
    if (pDVar2 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
    goto code_?;
    TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
             UIElements::TextureId]::
             Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                       (pDVar2,(Object *)StringLiteral_Name,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (this_01 == (SettingsInputField *)0x0) goto code_?;
    TVar14.m_Index = 0;
    if (TVar3.m_Index != 0) {
      if (*(String__Class **)TVar3.m_Index == TypeInfo__System__String) {
        TVar14 = TVar3;
      }
      if ((String *)TVar14.m_Index == (String *)0x0) goto code_?;
    }
    uVar16 = (ulonglong)(uint)TVar14.m_Index;
    SettingsInputField::SettingsInputField_Initialize
              (this_01,StringLiteral_Name,(String *)TVar14.m_Index,(MethodInfo *)0x0);
    pSVar17 = (this->fields).weaponDamageSlider;
    pDVar2 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)(this->fields).itemData
    ;
    if (pDVar2 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
    goto code_?;
    minValue = StringLiteral_Damage;
    pMVar9 = 
    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
    ;
    TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
             UIElements::TextureId]::
             Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                       (pDVar2,(Object *)StringLiteral_Damage,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if ((pSVar17 == (SettingsSlider *)0x0) || (TVar3.m_Index == 0)) goto code_?;
    TVar14 = TVar3;
    if (*(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) !=
        (TypeInfo__System__Single->_0).element_class) goto code_?;
    fStack_18 = VVar5.Item2;
    fStack_19 = VVar6.Item1;
    pfVar20 = (float *)func_?();
    fStack_21 = VVar4.Item2;
    fStack_22 = VVar4.Item1;
    SettingsSlider::SettingsSlider_Initialize
              (pSVar17,StringLiteral_Damage,*pfVar20,fStack_22,fStack_21,(MethodInfo *)0x0);
    pSVar23 = (this->fields).weaponDamageInputSlider;
    pDVar24 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)(this->fields).itemData
    ;
    if (pDVar24 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
    goto code_?;
    TVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
             UIElements::TextureId]::
             Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                       (pDVar24,(Object *)StringLiteral_Damage,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if ((pSVar23 == (SettingsInputFieldSlider *)0x0) || (TVar14.m_Index == 0)) goto code_?;
    if (*(Il2CppClass **)(*(int *)TVar14.m_Index + 0x20) !=
        (TypeInfo__System__Single->_0).element_class) goto code_?;
    pfVar20 = (float *)func_?();
    SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize
              (pSVar23,StringLiteral_Damage,*pfVar20,(MethodInfo *)0x0);
    pSVar17 = (this->fields).ImpulseStrengthSlider;
    pDVar24 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)(this->fields).itemData
    ;
    if (pDVar24 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
    goto code_?;
    TVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
             UIElements::TextureId]::
             Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                       (pDVar24,(Object *)StringLiteral_ImpulseStrength,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if ((pSVar17 == (SettingsSlider *)0x0) || (TVar14.m_Index == 0)) goto code_?;
    if (*(Il2CppClass **)(*(int *)TVar14.m_Index + 0x20) !=
        (TypeInfo__System__Single->_0).element_class) goto code_?;
    pfVar20 = (float *)func_?();
    SettingsSlider::SettingsSlider_Initialize
              (pSVar17,StringLiteral_ImpulseStrength,*pfVar20,(float)TVar3.m_Index,fStack_18,
               (MethodInfo *)0x0);
    pSVar23 = (this->fields).ImpulseStrengthInputSlider;
    pDVar24 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)(this->fields).itemData
    ;
    if (pDVar24 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
    goto code_?;
    TVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
             UIElements::TextureId]::
             Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                       (pDVar24,(Object *)StringLiteral_ImpulseStrength,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if ((pSVar23 == (SettingsInputFieldSlider *)0x0) || (TVar14.m_Index == 0)) goto code_?;
    if (*(Il2CppClass **)(*(int *)TVar14.m_Index + 0x20) !=
        (TypeInfo__System__Single->_0).element_class) goto code_?;
    pfVar20 = (float *)func_?();
    SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize
              (pSVar23,StringLiteral_ImpulseStrength,*pfVar20,(MethodInfo *)0x0);
    pSVar17 = (this->fields).RecoilStrengthSlider;
    pDVar24 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)(this->fields).itemData
    ;
    if (pDVar24 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
    goto code_?;
    TVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
             UIElements::TextureId]::
             Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                       (pDVar24,(Object *)StringLiteral_RecoilStrength,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if ((pSVar17 == (SettingsSlider *)0x0) || (TVar14.m_Index == 0)) goto code_?;
    if (*(Il2CppClass **)(*(int *)TVar14.m_Index + 0x20) !=
        (TypeInfo__System__Single->_0).element_class) goto code_?;
    pfVar20 = (float *)func_?();
    SettingsSlider::SettingsSlider_Initialize
              (pSVar17,StringLiteral_RecoilStrength,*pfVar20,fStack_19,4.0096462e-29,
               (MethodInfo *)0x0);
    pSVar23 = (this->fields).RecoilStrengthInputSlider;
    pDVar24 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)(this->fields).itemData
    ;
    if (pDVar24 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
    goto code_?;
    TVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
             UIElements::TextureId]::
             Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                       (pDVar24,(Object *)StringLiteral_RecoilStrength,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if ((pSVar23 == (SettingsInputFieldSlider *)0x0) || (TVar14.m_Index == 0)) goto code_?;
    if (*(Il2CppClass **)(*(int *)TVar14.m_Index + 0x20) !=
        (TypeInfo__System__Single->_0).element_class) goto code_?;
    pfVar20 = (float *)func_?();
    SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize
              (pSVar23,StringLiteral_RecoilStrength,*pfVar20,(MethodInfo *)0x0);
    pSVar17 = (this->fields).attackAnimationSlider;
    pDVar24 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)(this->fields).itemData
    ;
    if (pDVar24 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
    goto code_?;
    TVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
             UIElements::TextureId]::
             Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                       (pDVar24,(Object *)StringLiteral_AttackAnimationTime,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if ((pSVar17 == (SettingsSlider *)0x0) || (TVar14.m_Index == 0)) goto code_?;
    if (*(Il2CppClass **)(*(int *)TVar14.m_Index + 0x20) !=
        (TypeInfo__System__Single->_0).element_class) goto code_?;
    pfVar20 = (float *)func_?();
    SettingsSlider::SettingsSlider_Initialize
              (pSVar17,StringLiteral_AttackAnimationTime,*pfVar20,(float)minValue,(float)pMVar9,
               (MethodInfo *)0x0);
    pSVar23 = (this->fields).attackAnimationInputSlider;
    pDVar24 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)(this->fields).itemData
    ;
    if (pDVar24 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
    goto code_?;
    TVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
             UIElements::TextureId]::
             Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                       (pDVar24,(Object *)StringLiteral_AttackAnimationTime,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if ((pSVar23 == (SettingsInputFieldSlider *)0x0) || (TVar14.m_Index == 0)) goto code_?;
    if (*(Il2CppClass **)(*(int *)TVar14.m_Index + 0x20) !=
        (TypeInfo__System__Single->_0).element_class) goto code_?;
    pfVar20 = (float *)func_?();
    SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize
              (pSVar23,StringLiteral_AttackAnimationTime,*pfVar20,(MethodInfo *)0x0);
    pSVar17 = (this->fields).attackCooldownSlider;
    pDVar24 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)(this->fields).itemData
    ;
    if (pDVar24 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
    goto code_?;
    TVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
             UIElements::TextureId]::
             Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                       (pDVar24,(Object *)StringLiteral_AttackCooldown,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if ((pSVar17 == (SettingsSlider *)0x0) || (TVar14.m_Index == 0)) goto code_?;
    if (*(Il2CppClass **)(*(int *)TVar14.m_Index + 0x20) !=
        (TypeInfo__System__Single->_0).element_class) goto code_?;
    pfVar20 = (float *)func_?();
    SettingsSlider::SettingsSlider_Initialize
              (pSVar17,StringLiteral_AttackCooldown,*pfVar20,4.009632e-29,(float)pDVar2,
               (MethodInfo *)0x0);
    pSVar23 = (this->fields).attackCooldownInputSlider;
    pDVar2 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)(this->fields).itemData
    ;
    if (pDVar2 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
    goto code_?;
    TVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
             UIElements::TextureId]::
             Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                       (pDVar2,(Object *)StringLiteral_AttackCooldown,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if ((pSVar23 == (SettingsInputFieldSlider *)0x0) || (TVar14.m_Index == 0)) goto code_?;
    if (*(Il2CppClass **)(*(int *)TVar14.m_Index + 0x20) !=
        (TypeInfo__System__Single->_0).element_class) goto code_?;
    pfVar20 = (float *)func_?();
    SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize
              (pSVar23,StringLiteral_AttackCooldown,*pfVar20,(MethodInfo *)0x0);
    pSVar17 = (this->fields).rangeSlider;
    pDVar2 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)(this->fields).itemData
    ;
    if (pDVar2 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
    goto code_?;
    TVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
             UIElements::TextureId]::
             Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                       (pDVar2,(Object *)StringLiteral_Range,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if ((pSVar17 == (SettingsSlider *)0x0) || (TVar14.m_Index == 0)) goto code_?;
    if (*(Il2CppClass **)(*(int *)TVar14.m_Index + 0x20) !=
        (TypeInfo__System__Single->_0).element_class) goto code_?;
    pfVar20 = (float *)func_?();
    SettingsSlider::SettingsSlider_Initialize
              (pSVar17,StringLiteral_Range,*pfVar20,(float)uVar16,(float)(uVar16 >> 0x20),
               (MethodInfo *)0x0);
    pSVar23 = (this->fields).rangeInputSlider;
    pDVar2 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)(this->fields).itemData
    ;
    if (pDVar2 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
    goto code_?;
    TVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
             UIElements::TextureId]::
             Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                       (pDVar2,(Object *)StringLiteral_Range,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if ((pSVar23 == (SettingsInputFieldSlider *)0x0) || (TVar14.m_Index == 0)) goto code_?;
    if (*(Il2CppClass **)(*(int *)TVar14.m_Index + 0x20) !=
        (TypeInfo__System__Single->_0).element_class) goto code_?;
    pfVar20 = (float *)func_?();
    SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize
              (pSVar23,StringLiteral_Range,*pfVar20,(MethodInfo *)0x0);
    pSVar25 = (this->fields).fireSoundEffectDropdown;
    pDVar2 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)(this->fields).itemData
    ;
    if (pDVar2 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
    goto code_?;
    TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
             UIElements::TextureId]::
             Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                       (pDVar2,(Object *)StringLiteral_FireSoundEffect,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if ((TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pSVar7 = TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData->
             static_fields->fireSoundEffects;
    if ((pSVar25 == (SettingsDropdown *)0x0) || (TVar3.m_Index == 0)) goto code_?;
    if (*(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) !=
        (TypeInfo__System__Int32->_0).element_class) goto code_?;
    piVar10 = (int32_t *)func_?();
    SettingsDropdown::SettingsDropdown_Initialize
              (pSVar25,StringLiteral_FireSoundEffect,*piVar10,pSVar7,(List_1_System_Int32_ *)this_03,
               (MethodInfo *)0x0);
    pDVar2 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)(this->fields).itemData
    ;
    pSVar25 = (this->fields).hitSoundEffectDropdown;
    if (pDVar2 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
    goto code_?;
    TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
             UIElements::TextureId]::
             Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                       (pDVar2,(Object *)StringLiteral_HitSoundEffect,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    pSVar7 = TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData->
             static_fields->hitSoundEffects;
    if ((pSVar25 == (SettingsDropdown *)0x0) || (TVar3.m_Index == 0)) goto code_?;
    if (*(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) !=
        (TypeInfo__System__Int32->_0).element_class) goto code_?;
    piVar10 = (int32_t *)func_?();
    SettingsDropdown::SettingsDropdown_Initialize
              (pSVar25,StringLiteral_HitSoundEffect,*piVar10,pSVar7,(List_1_System_Int32_ *)this_04,
               (MethodInfo *)0x0);
    pIVar26 = (this->fields).trailColorImage;
    pDVar1 = (this->fields).itemData;
    if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Extensions);
    }
    pCVar27 = Extensions::Extensions_GetColor
                        ((Color *)&stack0xffffffbc,pDVar1,StringLiteral_TrailColor,
                         (MethodInfo *)0x0);
    if (pIVar26 != (Image *)0x0) {
      (*(code *)(pIVar26->klass->vtable).set_color.method)
                (pIVar26,pCVar27->r,pCVar27->g,pCVar27->b,pCVar27->a);
      pIVar26 = (this->fields).hitEffectColorImage;
      pCVar27 = Extensions::Extensions_GetColor
                          ((Color *)&stack0xffffffbc,(this->fields).itemData,
                           StringLiteral_HitEffectColor,(MethodInfo *)0x0);
      if (pIVar26 != (Image *)0x0) {
        (*(code *)(pIVar26->klass->vtable).set_color.method)
                  (pIVar26,pCVar27->r,pCVar27->g,pCVar27->b,pCVar27->a);
        return;
      }
    }
    goto code_?;
  }
  if (this_04 ==
      (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_ *)
      0x0) goto code_?;
  piVar10 = &(this_04->fields)._version;
  *piVar10 = *piVar10 + 1;
  pMVar11 = (this_04->fields)._items;
  if (pMVar11 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
  goto code_?;
  uVar12 = (this_04->fields)._size;
  if (pMVar11->max_length <= uVar12) {
    mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
    List_1_System_Int32__AddWithResize
              ((List_1_System_Int32_ *)this_04,iVar8,pMVar9->klass->rgctx_data[0xe].method);
    iVar8 = iVar8 + 1;
    goto code_?;
  }
  (this_04->fields)._size = uVar12 + 1;
  if (pMVar11->max_length <= uVar12) goto code_?;
  (&pMVar11->vector[0].index)[uVar12] = iVar8;
  iVar8 = iVar8 + 1;
  goto code_?;
}


/* Void OnColorEdited() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::MeleeWeapons::
     MeleeWeaponSettings::MeleeWeaponSettings_OnColorEdited
               (MeleeWeaponSettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Extensions);
    func_?(&
                    TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__MeleeWeapons__MeleeWeaponSettings
                   );
    func_?(&StringLiteral_TrailColor);
    func_?(&StringLiteral_itemData);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  bVar1 = mscorlib.dll::System::String::String_op_Equality
                    ((this->fields).editingColorKey,StringLiteral_TrailColor,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    pIVar2 = (this->fields).hitEffectColorImage;
  }
  else {
    pIVar2 = (this->fields).trailColorImage;
  }
  pSVar3 = (this->fields).colorR;
  if (pSVar3 != (SettingsSlider *)0x0) {
    pEVar4 = (Extensions__Class *)SettingsSlider::SettingsSlider_get_Value(pSVar3,(MethodInfo *)0x0)
    ;
    pSVar3 = (this->fields).colorG;
    if (pSVar3 != (SettingsSlider *)0x0) {
      fVar5 = SettingsSlider::SettingsSlider_get_Value(pSVar3,(MethodInfo *)0x0);
      pSVar3 = (this->fields).colorB;
      if (pSVar3 != (SettingsSlider *)0x0) {
        fVar6 = SettingsSlider::SettingsSlider_get_Value(pSVar3,(MethodInfo *)0x0);
        pSVar3 = (this->fields).colorA;
        if (pSVar3 != (SettingsSlider *)0x0) {
          fVar7 = SettingsSlider::SettingsSlider_get_Value(pSVar3,(MethodInfo *)0x0);
          if (pIVar2 != (Image *)0x0) {
            puVar8 = &UNK_?;
            pEVar9 = pEVar4;
            (*(code *)(pIVar2->klass->vtable).set_color.method)
                      (pIVar2,pEVar4,fVar5,fVar6,fVar7,
                       (pIVar2->klass->vtable).get_raycastTarget.methodPtr);
            hashtable = (this->fields).itemData;
            colorKey = (this->fields).editingColorKey;
            if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
              pEVar4 = TypeInfo__Extensions;
              func_?();
            }
            color.g = (float)puVar8;
            color.r = (float)pEVar4;
            color.b = (float)pIVar2;
            color.a = (float)pEVar9;
            Extensions::Extensions_SetColor(hashtable,colorKey,color,(MethodInfo *)0x0);
            this_00 = (this->fields).settingsBase;
            if (this_00 != (SettingsBase *)0x0) {
              SettingsBase::SettingsBase_OnSettingChanged
                        (this_00,StringLiteral_itemData,(Object *)(this->fields).itemData,
                         (MethodInfo *)0x0);
              (this->fields).editingColorKey = ::StringLiteral__;
              func_?(&(this->fields).editingColorKey,::StringLiteral__);
              this_01 = (this->fields).colorPicker;
              if (this_01 != (GameObject *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (this_01,0,(MethodInfo *)0x0);
                this_02 = (this->fields).canvas;
                if ((
                    TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__MeleeWeapons__MeleeWeaponSettings
                    ->_1).cctor_finished_or_no_cctor == 0) {
                  func_?(
                                 TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__MeleeWeapons__MeleeWeaponSettings
                                 );
                }
                if (this_02 != (RectTransform *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                  RectTransform_set_sizeDelta
                            (this_02,TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__MeleeWeapons__MeleeWeaponSettings
                                     ->static_fields->NormalEditingCanvasSize,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void OnColorPressed(String) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::MeleeWeapons::
     MeleeWeaponSettings::MeleeWeaponSettings_OnColorPressed
               (MeleeWeaponSettings *this,String *colorKey,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Extensions);
    func_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData);
    func_?(&
                    TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__MeleeWeapons__MeleeWeaponSettings
                   );
    func_?(&StringLiteral_colorB);
    func_?(&StringLiteral_colorA);
    func_?(&StringLiteral_colorR);
    func_?(&StringLiteral_colorG);
    cRam_? = '\x01';
  }
  hashtable = (this->fields).itemData;
  if ((TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData);
  }
  pCVar1 = Assets::Scripts::WorldObjectTypes::MeleeWeapon::MeleeWeaponData::
           MeleeWeaponData_DefaultColor((Color *)&fStack_2,colorKey,(MethodInfo *)0x0);
  fStack_2 = pCVar1->r;
  puStack_3 = (undefined *)pCVar1->g;
  fVar4 = pCVar1->b;
  fVar5 = pCVar1->a;
  if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Extensions);
  }
  defaultColor.g = (float)puStack_3;
  defaultColor.r = fStack_2;
  defaultColor.b = fVar4;
  defaultColor.a = fVar5;
  pCVar1 = Extensions::Extensions_GetColorOrDefault
                     ((Color *)&fStack_2,hashtable,colorKey,defaultColor,(MethodInfo *)0x0);
  fStack_2 = pCVar1->r;
  puStack_3 = (undefined *)pCVar1->g;
  pSVar6 = (this->fields).colorR;
  if (pSVar6 != (SettingsSlider *)0x0) {
    value = StringLiteral_colorR;
    SettingsSlider::SettingsSlider_Initialize
              (pSVar6,StringLiteral_colorR,fStack_2,0.0,1.0,(MethodInfo *)0x0);
    pSVar7 = (this->fields).colorG;
    if (pSVar7 != (SettingsSlider *)0x0) {
      SettingsSlider::SettingsSlider_Initialize
                (pSVar7,StringLiteral_colorG,(float)puStack_3,0.0,1.0,(MethodInfo *)0x0);
      pSVar7 = (this->fields).colorB;
      if (pSVar7 != (SettingsSlider *)0x0) {
        SettingsSlider::SettingsSlider_Initialize
                  (pSVar7,StringLiteral_colorB,(float)pSVar6,0.0,1.0,(MethodInfo *)0x0);
        pSVar6 = (this->fields).colorA;
        if (pSVar6 != (SettingsSlider *)0x0) {
          SettingsSlider::SettingsSlider_Initialize
                    (pSVar6,StringLiteral_colorA,(float)value,0.0,1.0,(MethodInfo *)0x0);
          pIVar8 = (this->fields).colorPickerPreview;
          if (pIVar8 != (Image *)0x0) {
            (*(code *)(pIVar8->klass->vtable).set_color.method)();
            (this->fields).editingColorKey = colorKey;
            func_?();
            this_00 = (this->fields).colorPicker;
            if (this_00 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (this_00,1,(MethodInfo *)0x0);
              this_01 = (this->fields).canvas;
              if ((
                  TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__MeleeWeapons__MeleeWeaponSettings
                  ->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              if (this_01 != (RectTransform *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
                          (this_01,TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__MeleeWeapons__MeleeWeaponSettings
                                   ->static_fields->ColorEditingCanvasSize,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnSettingChanged(String, Object) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::MeleeWeapons::
     MeleeWeaponSettings::MeleeWeaponSettings_OnSettingChanged
               (MeleeWeaponSettings *this,String *key,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   );
    func_?(&StringLiteral_itemData);
    func_?(&StringLiteral_color);
    cRam_? = '\x01';
  }
  bVar1 = mscorlib.dll::System::String::String_IsNullOrEmpty(key,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    return;
  }
  if (key != (String *)0x0) {
    if (5 < (key->fields)._stringLength) {
      a = mscorlib.dll::System::String::String_Substring_1(key,0,5,(MethodInfo *)0x0);
      bVar1 = mscorlib.dll::System::String::String_op_Equality
                        (a,StringLiteral_color,(MethodInfo *)0x0);
      if (bVar1 != 0) {
        pSVar2 = (this->fields).colorR;
        pIVar3 = (this->fields).colorPickerPreview;
        if (pSVar2 != (SettingsSlider *)0x0) {
          SettingsSlider::SettingsSlider_get_Value(pSVar2,(MethodInfo *)0x0);
          pSVar2 = (this->fields).colorG;
          if (pSVar2 != (SettingsSlider *)0x0) {
            SettingsSlider::SettingsSlider_get_Value(pSVar2,(MethodInfo *)0x0);
            pSVar2 = (this->fields).colorB;
            if (pSVar2 != (SettingsSlider *)0x0) {
              SettingsSlider::SettingsSlider_get_Value(pSVar2,(MethodInfo *)0x0);
              pSVar2 = (this->fields).colorA;
              if ((pSVar2 != (SettingsSlider *)0x0) &&
                 (SettingsSlider::SettingsSlider_get_Value(pSVar2,(MethodInfo *)0x0),
                 pIVar3 != (Image *)0x0)) {
                (*(code *)(pIVar3->klass->vtable).set_color.method)();
                return;
              }
            }
          }
        }
        goto code_?;
      }
    }
    this_00 = (this->fields).itemData;
    if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__set_Item
                (this_00,(Object *)key,value,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                );
      this_01 = (this->fields).settingsBase;
      if (this_01 != (SettingsBase *)0x0) {
        SettingsBase::SettingsBase_OnSettingChanged
                  (this_01,StringLiteral_itemData,(Object *)(this->fields).itemData,
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Dictionary`2[System.Object,System.Object]
   ReadWorldObjectItemData(Dictionary`2[System.Object,System.Object]) */

Dictionary_2_System_Object_System_Object_ *
Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::MeleeWeapons::
MeleeWeaponSettings::MeleeWeaponSettings_ReadWorldObjectItemData
          (MeleeWeaponSettings *this,Dictionary_2_System_Object_System_Object_ *woData,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&
                    int_MethodInfo__Extensions__GetValueOrDefault<int>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__int_
                   );
    func_?(&
                    System__Single__MethodInfo__Extensions__GetValueOrDefault<System::Single_[]>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__System__Single________
                   );
    func_?(&
                    float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                   );
    func_?(&
                    System__String_MethodInfo__Extensions__GetValueOrDefault<System::String>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__System__String_
                   );
    func_?(&TypeInfo__Extensions);
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData);
    func_?(&TypeInfo__System__Single);
    func_?(&TypeInfo__System__Single);
    func_?(&TypeInfo__System__String);
    func_?(&StringLiteral_Damage);
    func_?(&StringLiteral_ImpulseStrength);
    func_?(&StringLiteral_TrailColor);
    func_?(&StringLiteral_Name);
    func_?(&StringLiteral_AttackAnimationTime);
    func_?(&StringLiteral_AttackCooldown);
    func_?(&StringLiteral_HitSoundEffect);
    func_?(&StringLiteral_itemData);
    func_?(&StringLiteral_RecoilStrength);
    func_?(&StringLiteral_FireSoundEffect);
    func_?(&StringLiteral_Range);
    func_?(&StringLiteral_HitEffectColor);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData);
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
            Assets::Scripts::WorldObjectTypes::MeleeWeapon::MeleeWeaponData::
            MeleeWeaponData_DefaultItemData((MethodInfo *)0x0);
  if (woData == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
  bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
          UIElements::TextureId]::
          Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                    ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)woData,
                     (Object *)StringLiteral_itemData,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                    );
  if (bVar1 == 0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (woData,(Object *)StringLiteral_itemData,(Object *)(this->fields).itemData,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    return (this->fields).itemData;
  }
  hashtable = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)woData,
                         (Object *)StringLiteral_itemData,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
  if ((hashtable.m_Index != 0) &&
     ((*(byte *)(*(int *)hashtable.m_Index + 0xb8) <
       (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
       naturalAligment ||
      (*(Dictionary_2_System_Object_System_Object___Class **)
        (*(int *)(*(int *)hashtable.m_Index + 100) + -4 +
        (uint)(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).naturalAligment * 4) !=
       TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))))
  goto code_?;
  if (this_00 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
  goto code_?;
  TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
          UIElements::TextureId]::
          Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                    (this_00,(Object *)StringLiteral_Name,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                    );
  if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  defaultValue.m_Index = 0;
  if (TVar2.m_Index == 0) {
code_?:
    pOVar3 = Extensions::Extensions_GetValueOrDefault_3
                       ((Dictionary_2_System_Object_System_Object_ *)hashtable.m_Index,
                        StringLiteral_Name,(Object *)defaultValue.m_Index,
                        System__String_MethodInfo__Extensions__GetValueOrDefault<System::String>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__System__String_
                       );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__set_Item
              ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)StringLiteral_Name,
               pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
              );
    TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      (this_00,(Object *)StringLiteral_Damage,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    pMVar4 = 
    float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
    ;
    if (TVar2.m_Index != 0) {
      if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) ==
          (TypeInfo__System__Single->_0).element_class) {
        pfVar5 = (float *)func_?();
        Extensions::Extensions_GetValueOrDefault_4
                  ((Dictionary_2_System_Object_System_Object_ *)hashtable.m_Index,
                   StringLiteral_Damage,*pfVar5,pMVar4);
        pOVar3 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__set_Item
                  ((Dictionary_2_System_Object_System_Object_ *)this_00,
                   (Object *)StringLiteral_Damage,pOVar3,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                  );
        TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          (this_00,(Object *)StringLiteral_ImpulseStrength,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
        pMVar4 = 
        float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
        ;
        if (TVar2.m_Index == 0) goto code_?;
        if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) !=
            (TypeInfo__System__Single->_0).element_class) goto code_?;
        pfVar5 = (float *)func_?();
        Extensions::Extensions_GetValueOrDefault_4
                  ((Dictionary_2_System_Object_System_Object_ *)hashtable.m_Index,
                   StringLiteral_ImpulseStrength,*pfVar5,pMVar4);
        pOVar3 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__set_Item
                  ((Dictionary_2_System_Object_System_Object_ *)this_00,
                   (Object *)StringLiteral_ImpulseStrength,pOVar3,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                  );
        TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          (this_00,(Object *)StringLiteral_RecoilStrength,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
        pMVar4 = 
        float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
        ;
        if (TVar2.m_Index == 0) goto code_?;
        if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) !=
            (TypeInfo__System__Single->_0).element_class) goto code_?;
        pfVar5 = (float *)func_?();
        Extensions::Extensions_GetValueOrDefault_4
                  ((Dictionary_2_System_Object_System_Object_ *)hashtable.m_Index,
                   StringLiteral_RecoilStrength,*pfVar5,pMVar4);
        pOVar3 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__set_Item
                  ((Dictionary_2_System_Object_System_Object_ *)this_00,
                   (Object *)StringLiteral_RecoilStrength,pOVar3,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                  );
        TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          (this_00,(Object *)StringLiteral_AttackAnimationTime,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
        pMVar4 = 
        float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
        ;
        if (TVar2.m_Index == 0) goto code_?;
        if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) !=
            (TypeInfo__System__Single->_0).element_class) goto code_?;
        pfVar5 = (float *)func_?();
        Extensions::Extensions_GetValueOrDefault_4
                  ((Dictionary_2_System_Object_System_Object_ *)hashtable.m_Index,
                   StringLiteral_AttackAnimationTime,*pfVar5,pMVar4);
        pOVar3 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__set_Item
                  ((Dictionary_2_System_Object_System_Object_ *)this_00,
                   (Object *)StringLiteral_AttackAnimationTime,pOVar3,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                  );
        TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          (this_00,(Object *)StringLiteral_AttackCooldown,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
        pMVar4 = 
        float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
        ;
        if (TVar2.m_Index == 0) goto code_?;
        if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) !=
            (TypeInfo__System__Single->_0).element_class) goto code_?;
        pfVar5 = (float *)func_?();
        Extensions::Extensions_GetValueOrDefault_4
                  ((Dictionary_2_System_Object_System_Object_ *)hashtable.m_Index,
                   StringLiteral_AttackCooldown,*pfVar5,pMVar4);
        pOVar3 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__set_Item
                  ((Dictionary_2_System_Object_System_Object_ *)this_00,
                   (Object *)StringLiteral_AttackCooldown,pOVar3,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                  );
        TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          (this_00,(Object *)StringLiteral_Range,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
        pMVar4 = 
        float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
        ;
        if (TVar2.m_Index == 0) goto code_?;
        if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) !=
            (TypeInfo__System__Single->_0).element_class) goto code_?;
        pfVar5 = (float *)func_?();
        Extensions::Extensions_GetValueOrDefault_4
                  ((Dictionary_2_System_Object_System_Object_ *)hashtable.m_Index,
                   StringLiteral_Range,*pfVar5,pMVar4);
        pOVar3 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__set_Item
                  ((Dictionary_2_System_Object_System_Object_ *)this_00,
                   (Object *)StringLiteral_Range,pOVar3,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                  );
        TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          (this_00,(Object *)StringLiteral_FireSoundEffect,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
        pMVar4 = 
        int_MethodInfo__Extensions__GetValueOrDefault<int>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__int_
        ;
        if (TVar2.m_Index == 0) goto code_?;
        if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) !=
            (TypeInfo__System__Int32->_0).element_class) goto code_?;
        pIVar6 = (Int32Enum__Enum *)func_?();
        Extensions::Extensions_GetValueOrDefault_2
                  ((Dictionary_2_System_Object_System_Object_ *)hashtable.m_Index,
                   StringLiteral_FireSoundEffect,*pIVar6,pMVar4);
        pOVar3 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__set_Item
                  ((Dictionary_2_System_Object_System_Object_ *)this_00,
                   (Object *)StringLiteral_FireSoundEffect,pOVar3,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                  );
        TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          (this_00,(Object *)StringLiteral_HitSoundEffect,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
        pMVar4 = 
        int_MethodInfo__Extensions__GetValueOrDefault<int>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__int_
        ;
        if (TVar2.m_Index == 0) goto code_?;
        if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) !=
            (TypeInfo__System__Int32->_0).element_class) goto code_?;
        pIVar6 = (Int32Enum__Enum *)func_?();
        Extensions::Extensions_GetValueOrDefault_2
                  ((Dictionary_2_System_Object_System_Object_ *)hashtable.m_Index,
                   StringLiteral_HitSoundEffect,*pIVar6,pMVar4);
        pOVar3 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__set_Item
                  ((Dictionary_2_System_Object_System_Object_ *)this_00,
                   (Object *)StringLiteral_HitSoundEffect,pOVar3,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                  );
        TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          (this_00,(Object *)StringLiteral_TrailColor,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
        pMVar4 = 
        System__Single__MethodInfo__Extensions__GetValueOrDefault<System::Single_[]>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__System__Single________
        ;
        if (TVar2.m_Index == 0) {
          pOVar3 = (Object *)0x0;
code_?:
          pOVar3 = Extensions::Extensions_GetValueOrDefault_3
                             ((Dictionary_2_System_Object_System_Object_ *)hashtable.m_Index,
                              StringLiteral_TrailColor,pOVar3,pMVar4);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__set_Item
                    ((Dictionary_2_System_Object_System_Object_ *)this_00,
                     (Object *)StringLiteral_TrailColor,pOVar3,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                    );
          TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::TextureId]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                            (this_00,(Object *)StringLiteral_HitEffectColor,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
          pMVar4 = 
          System__Single__MethodInfo__Extensions__GetValueOrDefault<System::Single_[]>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__System__Single________
          ;
          if (TVar2.m_Index == 0) {
            pOVar3 = (Object *)0x0;
code_?:
            pOVar3 = Extensions::Extensions_GetValueOrDefault_3
                               ((Dictionary_2_System_Object_System_Object_ *)hashtable.m_Index,
                                StringLiteral_HitEffectColor,pOVar3,pMVar4);
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__set_Item
                      ((Dictionary_2_System_Object_System_Object_ *)this_00,
                       (Object *)StringLiteral_HitEffectColor,pOVar3,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                      );
            return (Dictionary_2_System_Object_System_Object_ *)this_00;
          }
          pOVar3 = (Object *)func_?();
          if (pOVar3 != (Object *)0x0) goto code_?;
        }
        else {
          pOVar3 = (Object *)func_?();
          if (pOVar3 != (Object *)0x0) goto code_?;
        }
        func_?();
      }
code_?:
      func_?();
      goto code_?;
    }
  }
  else {
    if (*(String__Class **)TVar2.m_Index == TypeInfo__System__String) {
      defaultValue = TVar2;
    }
    if ((Object *)defaultValue.m_Index != (Object *)0x0) goto code_?;
code_?:
    func_?();
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  pDVar8 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar7)();
  return pDVar8;
}


/* Void UpdateColorPickerPreview() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::MeleeWeapons::
     MeleeWeaponSettings::MeleeWeaponSettings_UpdateColorPickerPreview
               (MeleeWeaponSettings *this,MethodInfo *method)

{
  pSVar1 = (this->fields).colorR;
  pIVar2 = (this->fields).colorPickerPreview;
  if (pSVar1 != (SettingsSlider *)0x0) {
    fVar3 = SettingsSlider::SettingsSlider_get_Value(pSVar1,(MethodInfo *)0x0);
    pSVar1 = (this->fields).colorG;
    if (pSVar1 != (SettingsSlider *)0x0) {
      SettingsSlider::SettingsSlider_get_Value(pSVar1,(MethodInfo *)0x0);
      pSVar1 = (this->fields).colorB;
      if (pSVar1 != (SettingsSlider *)0x0) {
        pSVar1 = (SettingsSlider *)
                 SettingsSlider::SettingsSlider_get_Value(pSVar1,(MethodInfo *)0x0);
        if ((this->fields).colorA != (SettingsSlider *)0x0) {
          puVar4 = &UNK_?;
          fVar5 = SettingsSlider::SettingsSlider_get_Value(pSVar1,(MethodInfo *)0x0);
          if (pIVar2 != (Image *)0x0) {
            (*(code *)(pIVar2->klass->vtable).set_color.method)
                      (pIVar2,fVar3,puVar4,pSVar1,fVar5,
                       (pIVar2->klass->vtable).get_raycastTarget.methodPtr);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* MeleeWeaponSettings() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::MeleeWeapons::
     MeleeWeaponSettings::MeleeWeaponSettings__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__MeleeWeapons__MeleeWeaponSettings
                   );
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__MeleeWeapons__MeleeWeaponSettings
           ->static_fields;
  (pMVar1->NormalEditingCanvasSize).x = 1150.0;
  (pMVar1->NormalEditingCanvasSize).y = 860.0;
  pMVar1 = TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__MeleeWeapons__MeleeWeaponSettings
           ->static_fields;
  (pMVar1->ColorEditingCanvasSize).x = 800.0;
  (pMVar1->ColorEditingCanvasSize).y = 700.0;
  return;
}


/* MeleeWeaponSettings() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::MeleeWeapons::
     MeleeWeaponSettings::MeleeWeaponSettings__ctor(MeleeWeaponSettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  (this->fields).editingColorKey = ::StringLiteral__;
  func_?(&(this->fields).editingColorKey,::StringLiteral__);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

