
/* Single CalculateSkillPowerPercentage(Single, Single, Single, Single) */

float Assembly-CSharp.dll::SpawnRoleSelectionSkillElement::
      SpawnRoleSelectionSkillElement_CalculateSkillPowerPercentage
                (SpawnRoleSelectionSkillElement *this,float value,float max,float min,
                float zeroValue,MethodInfo *method)

{
  if (value <= zeroValue) {
    return _UNK_? - (value - min) / (zeroValue - min);
  }
  fVar1 = min;
  if (min < zeroValue) {
    fVar1 = zeroValue;
  }
  if (max <= _UNK_?) {
    return (value - max) / (min - max);
  }
  return (value - fVar1) / (max - fVar1);
}


/* Void Initialize(String, SpawnRolesSkillDataManager, KogamaSettingValueWrapperBase) */

void Assembly-CSharp.dll::SpawnRoleSelectionSkillElement::SpawnRoleSelectionSkillElement_Initialize
               (SpawnRoleSelectionSkillElement *this,String *skill,
               SpawnRolesSkillDataManager *skillDataManager,
               KogamaSettingValueWrapperBase *skillSetting,MethodInfo *method)

{
  this_00 = skillDataManager;
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
                   );
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
                   );
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&
                    MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>__get_NumericValue__
                   );
    func_?(&
                    MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__get_NumericValue__
                   );
    func_?(&TypeInfo__System__Single);
    cRam_? = '\x01';
  }
  pIStack_1 = (IAttributeSetting__Class *)(this->fields).nameText;
  if (skillDataManager != (SpawnRolesSkillDataManager *)0x0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Debug);
      func_?(&
                      MethodInfo__System__Collections__Generic__List<SpawnRolesSkillDataManager::SkillData>__get_Count__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__List<SpawnRolesSkillDataManager::SkillData>__get_Item_int_
                     );
      func_?(&StringLiteral__because_it_is_not_in_the_dataLi);
      func_?(&StringLiteral_SkillDataManager_can_not_create_);
      func_?(&::StringLiteral__);
      cRam_? = '\x01';
    }
    pLVar2 = (skillDataManager->fields).skillDataList;
    unaff_EBX = (IAttributeSetting__Class *)0x0;
    while (pLVar2 != (List_1_SpawnRolesSkillDataManager_SkillData_ *)0x0) {
      if ((pLVar2->fields)._size <= (int)unaff_EBX) {
        unaff_EBX = (IAttributeSetting__Class *)
                    mscorlib.dll::System::String::String_Concat_4
                              (StringLiteral_SkillDataManager_can_not_create_,skill,
                               StringLiteral__because_it_is_not_in_the_dataLi,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          _Stack_60.typeHandle = (Il2CppMetadataTypeHandle)TypeInfo__UnityEngine__Debug;
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                  ((Object *)unaff_EBX,(MethodInfo *)0x0);
        pSVar3 = ::StringLiteral__;
code_?:
        if ((pIStack_1 != (IAttributeSetting__Class *)0x0) &&
           (pIVar4 = (pIStack_1->_0).image,
           (**(code **)&pIVar4[0x11].dynamic)(pIStack_1,pSVar3,pIVar4[0x12].name),
           unaff_EBX = 
           TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
           , skillSetting != (KogamaSettingValueWrapperBase *)0x0)) {
          iVar5 = func_?(skillSetting,
                                  TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                                 );
          pIVar6 = 
          TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
          ;
          if ((iVar5 == 0) ||
             (iVar5 = func_?(skillSetting,
                                      TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                                     ), unaff_EBX = pIVar6, iVar5 == 0)) {
            func_?(skillSetting,unaff_EBX);
          }
          else {
            iStack_7 = func_?(0,
                                       TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                                       ,iVar5);
            unaff_EBX = (IAttributeSetting__Class *)
                        SpawnRolesSkillDataManager::SpawnRolesSkillDataManager_GetImageClone
                                  (skillDataManager,skill,(this->fields).iconColor,
                                   (this->fields).iconBackgroundColor,(this->fields).iconWidth,
                                   (this->fields).iconHeight,(MethodInfo *)0x0);
            if ((unaff_EBX != (IAttributeSetting__Class *)0x0) &&
               (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform((Component *)unaff_EBX,(MethodInfo *)0x0),
               this_01 != (Transform *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                        (this_01,(this->fields).skillIconContainer,0,(MethodInfo *)0x0);
              pCVar8 = (Component *)(unaff_EBX->_0).byval_arg.data.typeHandle;
              bVar9 = iStack_7 < 0;
              skillDataManager =
                   (SpawnRolesSkillDataManager *)CONCAT31(skillDataManager._1_3_,bVar9);
              if ((pCVar8 != (Component *)0x0) &&
                 (pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_gameObject(pCVar8,(MethodInfo *)0x0),
                 pGVar10 != (GameObject *)0x0)) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar10,bVar9,(MethodInfo *)0x0);
                pCVar8 = *(Component **)&(unaff_EBX->_0).byval_arg.attrs;
                if ((pCVar8 != (Component *)0x0) &&
                   (pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_gameObject(pCVar8,(MethodInfo *)0x0),
                   pGVar10 != (GameObject *)0x0)) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar10,bVar9,(MethodInfo *)0x0);
                  p_Stack_14 = (Il2CppMetadataTypeHandle)0x0;
                  method_00 = (String **)skillDataManager;
                  pIStack_1 = (IAttributeSetting__Class *)
                               func_?(TypeInfo__System__Int32,&p_Stack_14);
                  skillDataManager = _UNK_?;
                  if (cRam_? == '\0') {
                    func_?(&TypeInfo__UnityEngine__Debug);
                    func_?(&
                                    MethodInfo__System__Collections__Generic__List<SpawnRolesSkillDataManager::SkillData>__get_Count__
                                   );
                    func_?(&
                                    MethodInfo__System__Collections__Generic__List<SpawnRolesSkillDataManager::SkillData>__get_Item_int_
                                   );
                    func_?(&StringLiteral_s_zero_value_because_it_is_not_i);
                    func_?(&StringLiteral_SkillDataManager_can_not_get_ski);
                    cRam_? = '\x01';
                  }
                  pLVar2 = (this_00->fields).skillDataList;
                  unaff_EBX = (IAttributeSetting__Class *)0x0;
                  if (pLVar2 != (List_1_SpawnRolesSkillDataManager_SkillData_ *)0x0)
                  goto code_?;
                }
              }
            }
          }
        }
        break;
      }
      pLVar2 = (skillDataManager->fields).skillDataList;
      if (pLVar2 == (List_1_SpawnRolesSkillDataManager_SkillData_ *)0x0) break;
      pSVar11 = mscorlib.dll::System::Collections::Generic::
               List`1[SpawnRolesSkillDataManager+SkillData]::
               List_1_SpawnRolesSkillDataManager_SkillData__get_Item
                         ((SpawnRolesSkillDataManager_SkillData *)&_Stack_48,pLVar2,
                          (int32_t)unaff_EBX,
                          MethodInfo__System__Collections__Generic__List<SpawnRolesSkillDataManager::SkillData>__get_Item_int_
                         );
      uStack_12._0_4_ = pSVar11->settingsPrefab;
      uStack_12._4_4_ = (Text *)pSVar11->zeroValue;
      bVar13 = mscorlib.dll::System::String::String_op_Equality(skill,pSVar11->type,(MethodInfo *)0x0)
      ;
      pLVar2 = (skillDataManager->fields).skillDataList;
      if (bVar13 != 0) {
        if (pLVar2 != (List_1_SpawnRolesSkillDataManager_SkillData_ *)0x0) {
          pMStack_14 = 
          MethodInfo__System__Collections__Generic__List<SpawnRolesSkillDataManager::SkillData>__get_Item_int_
          ;
          _Stack_60.dummy = &_Stack_48;
          pLStack_15 = pLVar2;
          pIStack_16 = unaff_EBX;
          iVar5 = func_?();
          uStack_12 = *(undefined8 *)(iVar5 + 0x10);
          pSVar3 = *(String **)(iVar5 + 4);
          goto code_?;
        }
        break;
      }
      unaff_EBX = (IAttributeSetting__Class *)((int)&(unaff_EBX->_0).image + 1);
    }
  }
  goto code_?;
  while( true ) {
    pLVar2 = (this_00->fields).skillDataList;
    if (pLVar2 == (List_1_SpawnRolesSkillDataManager_SkillData_ *)0x0) break;
    pSVar11 = mscorlib.dll::System::Collections::Generic::
             List`1[SpawnRolesSkillDataManager+SkillData]::
             List_1_SpawnRolesSkillDataManager_SkillData__get_Item
                       ((SpawnRolesSkillDataManager_SkillData *)&_Stack_48,pLVar2,
                        (int32_t)unaff_EBX,
                        MethodInfo__System__Collections__Generic__List<SpawnRolesSkillDataManager::SkillData>__get_Item_int_
                       );
    uStack_12._0_4_ = pSVar11->settingsPrefab;
    uStack_12._4_4_ = (Text *)pSVar11->zeroValue;
    bVar13 = mscorlib.dll::System::String::String_op_Equality(skill,pSVar11->type,(MethodInfo *)0x0);
    pLVar2 = (this_00->fields).skillDataList;
    if (bVar13 != 0) {
      if (pLVar2 != (List_1_SpawnRolesSkillDataManager_SkillData_ *)0x0) {
        pMStack_14 = 
        MethodInfo__System__Collections__Generic__List<SpawnRolesSkillDataManager::SkillData>__get_Item_int_
        ;
        _Stack_60.dummy = &_Stack_48;
        pLStack_15 = pLVar2;
        pIStack_16 = unaff_EBX;
        puVar17 = (undefined4 *)func_?();
        uStack_18 = *puVar17;
        uStack_19 = puVar17[1];
        _Stack_28 = *(_union_86 *)(puVar17 + 2);
        uStack_20 = puVar17[3];
        uStack_12._4_4_ = (Text *)((ulonglong)*(undefined8 *)(puVar17 + 4) >> 0x20);
        pTStack_21 = uStack_12._4_4_;
        uStack_12 = *(undefined8 *)(puVar17 + 4);
        goto code_?;
      }
      break;
    }
    unaff_EBX = (IAttributeSetting__Class *)((int)&(unaff_EBX->_0).image + 1);
    if (pLVar2 == (List_1_SpawnRolesSkillDataManager_SkillData_ *)0x0) break;
code_?:
    if ((pLVar2->fields)._size <= (int)unaff_EBX) {
      pSVar3 = mscorlib.dll::System::String::String_Concat_4
                          (StringLiteral_SkillDataManager_can_not_get_ski,skill,
                           StringLiteral_s_zero_value_because_it_is_not_i,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        _Stack_60.typeHandle = (Il2CppMetadataTypeHandle)TypeInfo__UnityEngine__Debug;
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)pSVar3,(MethodInfo *)0x0);
      pTStack_21 = (Text *)0x0;
code_?:
      pKVar22 = skillSetting->klass;
      if (((pKVar22->_1).typeHierarchyDepth <
           (
           TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
           ->_1).typeHierarchyDepth) ||
         ((pKVar22->_1).typeHierarchy
          [(
           TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
           ->_1).typeHierarchyDepth - 1] !=
          (Il2CppClass *)
          TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
         )) {
        unaff_EBX = pIStack_1;
        if (((
             TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
             ->_1).typeHierarchyDepth <= (pKVar22->_1).typeHierarchyDepth) &&
           ((pKVar22->_1).typeHierarchy
            [(
             TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
             ->_1).typeHierarchyDepth - 1] ==
            (Il2CppClass *)
            TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
           )) {
          pAVar23 = 
          TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
          ;
          if (((pKVar22->_1).typeHierarchyDepth <
               (
               TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
               ->_1).typeHierarchyDepth) ||
             ((pKVar22->_1).typeHierarchy
              [(
               TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
               ->_1).typeHierarchyDepth - 1] !=
              (Il2CppClass *)
              TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
             )) goto code_?;
          pIStack_24 = (IAttributeSetting__Class *)
                       MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                       KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                       KogamaSettingNumericBase_1_System_Single__get_NumericValue
                                 ((KogamaSettingNumericBase_1_System_Single_ *)skillSetting,
                                  MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>__get_NumericValue__
                                 );
          unaff_EBX = (IAttributeSetting__Class *)
                      func_?(TypeInfo__System__Single,&pIStack_24);
          pAVar23 = 
          TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
          ;
          if (((skillSetting->klass->_1).typeHierarchyDepth <
               (
               TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
               ->_1).typeHierarchyDepth) ||
             ((skillSetting->klass->_1).typeHierarchy
              [(
               TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
               ->_1).typeHierarchyDepth - 1] !=
              (Il2CppClass *)
              TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
             )) goto code_?;
          if ((skillSetting[1].klass == (KogamaSettingValueWrapperBase__Class *)0x0) ||
             (iVar5 = ((skillSetting[1].klass)->_0).byval_arg.data.__klassIndex, iVar5 == 0)) break;
          pIStack_1 = *(IAttributeSetting__Class **)(iVar5 + 0xc);
          iVar5 = ((skillSetting[1].klass)->_0).byval_arg.data.__klassIndex;
          if ((iVar5 == 0) ||
             (skillDataManager = *(SpawnRolesSkillDataManager **)(iVar5 + 8),
             unaff_EBX == (IAttributeSetting__Class *)0x0)) break;
          pSVar25 = TypeInfo__System__Single;
          if ((Il2CppClass *)((unaff_EBX->_0).image)->codeGenModule !=
              (TypeInfo__System__Single->_0).element_class) goto code_?;
          pfVar26 = (float *)func_?(unaff_EBX);
          fVar27 = *pfVar26;
          if (fVar27 <= (float)pTStack_21) goto code_?;
          pTVar28 = (Text *)skillDataManager;
          if ((float)skillDataManager < (float)pTStack_21) {
            pTVar28 = pTStack_21;
          }
          pIVar6 = pIStack_1;
          if (0.0 < (float)pIStack_1) goto code_?;
          skillDataManager =
               (SpawnRolesSkillDataManager *)
               ((fVar27 - (float)pIStack_1) / ((float)skillDataManager - (float)pIStack_1));
        }
      }
      else {
        pAVar23 = (AttributeSettingFloat__Class *)
                  TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
        ;
        if (((pKVar22->_1).typeHierarchyDepth <
             (
             TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
             ->_1).typeHierarchyDepth) ||
           ((pKVar22->_1).typeHierarchy
            [(
             TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
             ->_1).typeHierarchyDepth - 1] !=
            (Il2CppClass *)
            TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
           )) goto code_?;
        pIStack_1 = (IAttributeSetting__Class *)
                     MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                     KogamaSettingTypes::KogamaSettingNumericBase`1[System::Object]::
                     KogamaSettingNumericBase_1_System_Object__get_NumericValue
                               ((KogamaSettingNumericBase_1_System_Object_ *)skillSetting,
                                MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__get_NumericValue__
                               );
        unaff_EBX = (IAttributeSetting__Class *)func_?(TypeInfo__System__Int32,&pIStack_1)
        ;
        pAVar23 = (AttributeSettingFloat__Class *)
                  TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
        ;
        if (((skillSetting->klass->_1).typeHierarchyDepth <
             (
             TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
             ->_1).typeHierarchyDepth) ||
           ((skillSetting->klass->_1).typeHierarchy
            [(
             TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
             ->_1).typeHierarchyDepth - 1] !=
            (Il2CppClass *)
            TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
           )) goto code_?;
        if ((skillSetting[1].klass == (KogamaSettingValueWrapperBase__Class *)0x0) ||
           (pIVar29 = ((skillSetting[1].klass)->_0).byval_arg.data.array,
           pIVar29 == (Il2CppArrayType *)0x0)) break;
        pIStack_24 = (IAttributeSetting__Class *)(float)(int)pIVar29->lobounds;
        pIVar29 = ((skillSetting[1].klass)->_0).byval_arg.data.array;
        if ((pIVar29 == (Il2CppArrayType *)0x0) ||
           (skillDataManager = (SpawnRolesSkillDataManager *)(float)(int)pIVar29->sizes,
           unaff_EBX == (IAttributeSetting__Class *)0x0)) break;
        pSVar25 = (Single__Class *)TypeInfo__System__Int32;
        if ((Il2CppClass *)((unaff_EBX->_0).image)->codeGenModule !=
            (TypeInfo__System__Int32->_0).element_class) goto code_?;
        piVar30 = (int *)func_?(unaff_EBX);
        fVar27 = (float)*piVar30;
        if ((float)pTStack_21 < fVar27) {
          pTVar28 = (Text *)skillDataManager;
          if ((float)skillDataManager < (float)pTStack_21) {
            pTVar28 = pTStack_21;
          }
          pIVar6 = pIStack_24;
          if (0.0 < (float)pIStack_24) {
code_?:
            skillDataManager =
                 (SpawnRolesSkillDataManager *)
                 ((fVar27 - (float)pTVar28) / ((float)pIVar6 - (float)pTVar28));
          }
          else {
            skillDataManager =
                 (SpawnRolesSkillDataManager *)
                 ((fVar27 - (float)pIStack_24) / ((float)skillDataManager - (float)pIStack_24));
          }
        }
        else {
code_?:
          skillDataManager =
               (SpawnRolesSkillDataManager *)
               ((float)_UNK_? -
               (fVar27 - (float)skillDataManager) / ((float)pTStack_21 - (float)skillDataManager));
        }
      }
      pTStack_21 = (this->fields).descriptionText;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Debug);
        func_?(&
                        MethodInfo__System__Collections__Generic__List<SpawnRolesSkillDataManager::SkillData>__get_Count__
                       );
        func_?(&
                        MethodInfo__System__Collections__Generic__List<SpawnRolesSkillDataManager::SkillData>__get_Item_int_
                       );
        func_?(&TypeInfo__Styles);
        func_?(&StringLiteral__because_it_is_not_in_the_dataLi);
        func_?(&StringLiteral_SkillDataManager_can_not_create_);
        method_00 = &::StringLiteral__;
        func_?();
        cRam_? = '\x01';
      }
      pLVar2 = (this_00->fields).skillDataList;
      skillSetting = (KogamaSettingValueWrapperBase *)0x0;
      if (pLVar2 != (List_1_SpawnRolesSkillDataManager_SkillData_ *)0x0) goto code_?;
      break;
    }
  }
  goto code_?;
  while( true ) {
    pLVar2 = (this_00->fields).skillDataList;
    if (pLVar2 == (List_1_SpawnRolesSkillDataManager_SkillData_ *)0x0) break;
    pSVar11 = mscorlib.dll::System::Collections::Generic::
             List`1[SpawnRolesSkillDataManager+SkillData]::
             List_1_SpawnRolesSkillDataManager_SkillData__get_Item
                       ((SpawnRolesSkillDataManager_SkillData *)&_Stack_48,pLVar2,
                        (int32_t)skillSetting,
                        MethodInfo__System__Collections__Generic__List<SpawnRolesSkillDataManager::SkillData>__get_Item_int_
                       );
    uStack_12._0_4_ = pSVar11->settingsPrefab;
    uStack_12._4_4_ = (Text *)pSVar11->zeroValue;
    bVar13 = mscorlib.dll::System::String::String_op_Equality(skill,pSVar11->type,(MethodInfo *)0x0);
    pLVar2 = (this_00->fields).skillDataList;
    if (bVar13 != 0) {
      if (pLVar2 != (List_1_SpawnRolesSkillDataManager_SkillData_ *)0x0) {
        pMStack_14 = 
        MethodInfo__System__Collections__Generic__List<SpawnRolesSkillDataManager::SkillData>__get_Item_int_
        ;
        _Stack_60.dummy = &_Stack_60;
        pLStack_15 = pLVar2;
        pIStack_16 = (IAttributeSetting__Class *)skillSetting;
        p_Var14 = (_union_86 *)func_?();
        _Stack_48 = *p_Var14;
        _Stack_44 = p_Var14[1];
        pSStack_31 = (String *)p_Var14[2].typeHandle;
        _Stack_3c = p_Var14[3];
        uStack_32 = *(undefined8 *)(p_Var14 + 4);
        pCVar33 = SpawnRolesSkillDataManager::SpawnRolesSkillDataManager_GetValueColor
                            ((Color *)&_Stack_28,this_00,iStack_7,(MethodInfo *)0x0);
        CVar34 = UnityEngine.CoreModule.dll::UnityEngine::Color32::Color32_op_Implicit
                           (*pCVar33,(MethodInfo *)0x0);
        skillSetting = (KogamaSettingValueWrapperBase *)CVar34.rgba;
        if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__Styles);
        }
        pSVar3 = Styles::Styles_ColorToHex
                            ((Color32)((ulonglong)CVar34 & 0xffffffff),(MethodInfo *)method_00);
        pSVar3 = mscorlib.dll::System::String::String_Format_1
                            (pSStack_31,(Object *)pSVar3,(Object *)unaff_EBX,(MethodInfo *)0x0);
        goto code_?;
      }
      break;
    }
    skillSetting = (KogamaSettingValueWrapperBase *)
                   ((int)&(((IAttributeSetting__Class *)skillSetting)->_0).image + 1);
    if (pLVar2 == (List_1_SpawnRolesSkillDataManager_SkillData_ *)0x0) break;
code_?:
    if ((pLVar2->fields)._size <= (int)skillSetting) {
      skillSetting = (KogamaSettingValueWrapperBase *)
                     mscorlib.dll::System::String::String_Concat_4
                               (StringLiteral_SkillDataManager_can_not_create_,skill,
                                StringLiteral__because_it_is_not_in_the_dataLi,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        _Stack_60.typeHandle = (Il2CppMetadataTypeHandle)TypeInfo__UnityEngine__Debug;
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)skillSetting,(MethodInfo *)0x0);
      pSVar3 = ::StringLiteral__;
code_?:
      if (pTStack_21 != (Text *)0x0) {
        (*(pTStack_21->klass->vtable).set_text.methodPtr)
                  (pTStack_21,pSVar3,(pTStack_21->klass->vtable).set_text.method);
        bVar9 = iStack_7 < 0;
        unaff_EBX = (IAttributeSetting__Class *)(uint)bVar9;
        pIVar35 = (this->fields).powerFillImage;
        skillSetting = (KogamaSettingValueWrapperBase *)this;
        if (pIVar35 != (Image *)0x0) {
          UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_fillAmount
                    (pIVar35,(float)skillDataManager,(MethodInfo *)0x0);
          pIVar35 = (this->fields).negativePowerFillImage;
          if (pIVar35 != (Image *)0x0) {
            UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_fillAmount
                      (pIVar35,(float)skillDataManager,(MethodInfo *)0x0);
            pIVar35 = (this->fields).powerFillImage;
            if ((pIVar35 != (Image *)0x0) &&
               (pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_gameObject((Component *)pIVar35,(MethodInfo *)0x0),
               pGVar10 != (GameObject *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar10,!bVar9,(MethodInfo *)0x0);
              pIVar35 = (this->fields).negativePowerFillImage;
              if ((pIVar35 != (Image *)0x0) &&
                 (pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_gameObject((Component *)pIVar35,(MethodInfo *)0x0),
                 pGVar10 != (GameObject *)0x0)) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar10,bVar9,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
      break;
    }
  }
code_?:
  func_?();
  pSVar25 = (Single__Class *)extraout_ECX;
code_?:
  func_?(unaff_EBX,pSVar25);
  pAVar23 = extraout_EDX;
code_?:
  func_?(skillSetting,pAVar23);
  pcVar36 = (code *)swi(3);
  (*pcVar36)();
  return;
}

