
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
    pMVar2 = (MethodInfo *)(skillDataManager->fields).skillDataList;
    unaff_EDI = (IAttributeSetting__Class *)0x0;
    while (pMVar2 != (MethodInfo *)0x0) {
      if ((int)pMVar2->name <= (int)unaff_EDI) {
        unaff_EDI = (IAttributeSetting__Class *)
                    mscorlib.dll::System::String::String_Concat_4
                              (StringLiteral_SkillDataManager_can_not_create_,skill,
                               StringLiteral__because_it_is_not_in_the_dataLi,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          auStack_3._0_4_ = TypeInfo__UnityEngine__Debug;
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                  ((Object *)unaff_EDI,(MethodInfo *)0x0);
        pSVar4 = ::StringLiteral__;
code_?:
        if ((pIStack_1 != (IAttributeSetting__Class *)0x0) &&
           (pIVar5 = (pIStack_1->_0).image,
           (**(code **)&pIVar5[0x11].dynamic)(pIStack_1,pSVar4,pIVar5[0x12].name),
           unaff_EDI = 
           TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
           , skillSetting != (KogamaSettingValueWrapperBase *)0x0)) {
          iVar6 = func_?(skillSetting,
                                   TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                                  );
          pIVar7 = 
          TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
          ;
          if ((iVar6 == 0) ||
             (iVar6 = func_?(skillSetting,
                                       TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                                      ), unaff_EDI = pIVar7, iVar6 == 0)) {
            func_?(skillSetting,unaff_EDI);
          }
          else {
            pIStack_8 = (Il2CppClass *)
                        func_?(0,
                                        TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                                        ,iVar6);
            unaff_EDI = (IAttributeSetting__Class *)
                        SpawnRolesSkillDataManager::SpawnRolesSkillDataManager_GetImageClone
                                  (skillDataManager,skill,(this->fields).iconColor,
                                   (this->fields).iconBackgroundColor,(this->fields).iconWidth,
                                   (this->fields).iconHeight,(MethodInfo *)0x0);
            if ((unaff_EDI != (IAttributeSetting__Class *)0x0) &&
               (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform((Component *)unaff_EDI,(MethodInfo *)0x0),
               this_01 != (Transform *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                        (this_01,(this->fields).skillIconContainer,0,(MethodInfo *)0x0);
              pCVar9 = (Component *)(unaff_EDI->_0).byval_arg.data.typeHandle;
              bVar10 = (int)pIStack_8 < 0;
              if ((pCVar9 != (Component *)0x0) &&
                 (pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_gameObject(pCVar9,(MethodInfo *)0x0),
                 pGVar11 != (GameObject *)0x0)) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar11,bVar10,(MethodInfo *)0x0);
                pCVar9 = *(Component **)&(unaff_EDI->_0).byval_arg.attrs;
                if ((pCVar9 != (Component *)0x0) &&
                   (pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_gameObject(pCVar9,(MethodInfo *)0x0),
                   pGVar11 != (GameObject *)0x0)) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar11,bVar10,(MethodInfo *)0x0);
                  p_Stack_14 = (Il2CppMetadataTypeHandle)0x0;
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
                  pMVar2 = (MethodInfo *)(this_00->fields).skillDataList;
                  unaff_EDI = (IAttributeSetting__Class *)0x0;
                  if (pMVar2 != (MethodInfo *)0x0) goto code_?;
                }
              }
            }
          }
        }
        break;
      }
      pLVar12 = (skillDataManager->fields).skillDataList;
      if (pLVar12 == (List_1_SpawnRolesSkillDataManager_SkillData_ *)0x0) break;
      pSVar13 = mscorlib.dll::System::Collections::Generic::
                List`1[SpawnRolesSkillDataManager+SkillData]::
                List_1_SpawnRolesSkillDataManager_SkillData__get_Item
                          ((SpawnRolesSkillDataManager_SkillData *)&_Stack_30,pLVar12,
                           (int32_t)unaff_EDI,
                           MethodInfo__System__Collections__Generic__List<SpawnRolesSkillDataManager::SkillData>__get_Item_int_
                          );
      auStack_3._16_8_ = *(undefined8 *)&pSVar13->settingsPrefab;
      bVar14 = mscorlib.dll::System::String::String_op_Equality
                        (skill,pSVar13->type,(MethodInfo *)0x0);
      pMVar2 = (MethodInfo *)(skillDataManager->fields).skillDataList;
      if (bVar14 != 0) {
        if (pMVar2 != (MethodInfo *)0x0) {
          auStack_3._12_4_ =
               MethodInfo__System__Collections__Generic__List<SpawnRolesSkillDataManager::SkillData>__get_Item_int_
          ;
          auStack_3._0_4_ = auStack_3;
          auStack_3._4_4_ = pMVar2;
          auStack_3._8_4_ = unaff_EDI;
          iVar6 = func_?();
          uStack_15 = *(undefined8 *)(iVar6 + 0x10);
          pSVar4 = *(String **)(iVar6 + 4);
          goto code_?;
        }
        break;
      }
      unaff_EDI = (IAttributeSetting__Class *)((int)&(unaff_EDI->_0).image + 1);
    }
  }
  goto code_?;
  while( true ) {
    pLVar12 = (this_00->fields).skillDataList;
    if (pLVar12 == (List_1_SpawnRolesSkillDataManager_SkillData_ *)0x0) break;
    pSVar13 = mscorlib.dll::System::Collections::Generic::
              List`1[SpawnRolesSkillDataManager+SkillData]::
              List_1_SpawnRolesSkillDataManager_SkillData__get_Item
                        ((SpawnRolesSkillDataManager_SkillData *)auStack_3,pLVar12,
                         (int32_t)unaff_EDI,
                         MethodInfo__System__Collections__Generic__List<SpawnRolesSkillDataManager::SkillData>__get_Item_int_
                        );
    uStack_15._0_4_ = (Il2CppClass *)pSVar13->settingsPrefab;
    pIStack_16 = (Il2CppClass *)pSVar13->zeroValue;
    bVar14 = mscorlib.dll::System::String::String_op_Equality(skill,pSVar13->type,(MethodInfo *)0x0);
    pMVar2 = (MethodInfo *)(this_00->fields).skillDataList;
    if (bVar14 != 0) {
      if (pMVar2 != (MethodInfo *)0x0) {
        auStack_3._12_4_ =
             MethodInfo__System__Collections__Generic__List<SpawnRolesSkillDataManager::SkillData>__get_Item_int_
        ;
        auStack_3._0_4_ = auStack_3;
        auStack_3._4_4_ = pMVar2;
        auStack_3._8_4_ = unaff_EDI;
        p_Var13 = (_union_86 *)func_?();
        _Stack_30 = *p_Var13;
        _Stack_2c = p_Var13[1];
        _Stack_28 = p_Var13[2];
        _Stack_24 = p_Var13[3];
        uStack_15 = *(undefined8 *)(p_Var13 + 4);
        pIStack_17 = pIStack_16;
        goto code_?;
      }
      break;
    }
    unaff_EDI = (IAttributeSetting__Class *)((int)&(unaff_EDI->_0).image + 1);
    if (pMVar2 == (MethodInfo *)0x0) break;
code_?:
    if ((int)pMVar2->name <= (int)unaff_EDI) {
      pSVar4 = mscorlib.dll::System::String::String_Concat_4
                          (StringLiteral_SkillDataManager_can_not_get_ski,skill,
                           StringLiteral_s_zero_value_because_it_is_not_i,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        auStack_3._0_4_ = TypeInfo__UnityEngine__Debug;
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)pSVar4,(MethodInfo *)0x0);
      pIStack_17 = (Il2CppClass *)0x0;
code_?:
      pKVar18 = skillSetting->klass;
      if (((pKVar18->_1).typeHierarchyDepth <
           (
           TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
           ->_1).typeHierarchyDepth) ||
         ((pKVar18->_1).typeHierarchy
          [(
           TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
           ->_1).typeHierarchyDepth - 1] !=
          (Il2CppClass *)
          TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
         )) {
        unaff_EDI = pIStack_1;
        if (((
             TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
             ->_1).typeHierarchyDepth <= (pKVar18->_1).typeHierarchyDepth) &&
           ((pKVar18->_1).typeHierarchy
            [(
             TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
             ->_1).typeHierarchyDepth - 1] ==
            (Il2CppClass *)
            TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
           )) {
          pAVar19 = 
          TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
          ;
          if (((pKVar18->_1).typeHierarchyDepth <
               (
               TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
               ->_1).typeHierarchyDepth) ||
             ((pKVar18->_1).typeHierarchy
              [(
               TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
               ->_1).typeHierarchyDepth - 1] !=
              (Il2CppClass *)
              TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
             )) goto code_?;
          pIStack_20 = (IAttributeSetting__Class *)
                       MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                       KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                       KogamaSettingNumericBase_1_System_Single__get_NumericValue
                                 ((KogamaSettingNumericBase_1_System_Single_ *)skillSetting,
                                  MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>__get_NumericValue__
                                 );
          unaff_EDI = (IAttributeSetting__Class *)
                      func_?(TypeInfo__System__Single,&pIStack_20);
          pAVar19 = 
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
             (iVar6 = ((skillSetting[1].klass)->_0).byval_arg.data.__klassIndex, iVar6 == 0))
          break;
          pIStack_1 = *(IAttributeSetting__Class **)(iVar6 + 0xc);
          iVar6 = ((skillSetting[1].klass)->_0).byval_arg.data.__klassIndex;
          if ((iVar6 == 0) ||
             (skillDataManager = *(SpawnRolesSkillDataManager **)(iVar6 + 8),
             unaff_EDI == (IAttributeSetting__Class *)0x0)) break;
          pSVar21 = TypeInfo__System__Single;
          if ((Il2CppClass *)((unaff_EDI->_0).image)->codeGenModule !=
              (TypeInfo__System__Single->_0).element_class) goto code_?;
          pfVar22 = (float *)func_?(unaff_EDI);
          fVar23 = *pfVar22;
          if (fVar23 <= (float)pIStack_17) goto code_?;
          pIVar24 = (Il2CppClass *)skillDataManager;
          if ((float)skillDataManager < (float)pIStack_17) {
            pIVar24 = pIStack_17;
          }
          pIVar7 = pIStack_1;
          if (0.0 < (float)pIStack_1) goto code_?;
          skillDataManager =
               (SpawnRolesSkillDataManager *)
               ((fVar23 - (float)pIStack_1) / ((float)skillDataManager - (float)pIStack_1));
        }
      }
      else {
        pAVar19 = (AttributeSettingFloat__Class *)
                  TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
        ;
        if (((pKVar18->_1).typeHierarchyDepth <
             (
             TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
             ->_1).typeHierarchyDepth) ||
           ((pKVar18->_1).typeHierarchy
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
        unaff_EDI = (IAttributeSetting__Class *)func_?(TypeInfo__System__Int32,&pIStack_1)
        ;
        pAVar19 = (AttributeSettingFloat__Class *)
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
           (pIVar25 = ((skillSetting[1].klass)->_0).byval_arg.data.array,
           pIVar25 == (Il2CppArrayType *)0x0)) break;
        pIStack_20 = (IAttributeSetting__Class *)(float)(int)pIVar25->lobounds;
        pIVar25 = ((skillSetting[1].klass)->_0).byval_arg.data.array;
        if ((pIVar25 == (Il2CppArrayType *)0x0) ||
           (skillDataManager = (SpawnRolesSkillDataManager *)(float)(int)pIVar25->sizes,
           unaff_EDI == (IAttributeSetting__Class *)0x0)) break;
        pSVar21 = (Single__Class *)TypeInfo__System__Int32;
        if ((Il2CppClass *)((unaff_EDI->_0).image)->codeGenModule !=
            (TypeInfo__System__Int32->_0).element_class) goto code_?;
        piVar26 = (int *)func_?(unaff_EDI);
        fVar23 = (float)*piVar26;
        if ((float)pIStack_17 < fVar23) {
          pIVar24 = (Il2CppClass *)skillDataManager;
          if ((float)skillDataManager < (float)pIStack_17) {
            pIVar24 = pIStack_17;
          }
          pIVar7 = pIStack_20;
          if (0.0 < (float)pIStack_20) {
code_?:
            skillDataManager =
                 (SpawnRolesSkillDataManager *)
                 ((fVar23 - (float)pIVar24) / ((float)pIVar7 - (float)pIVar24));
          }
          else {
            skillDataManager =
                 (SpawnRolesSkillDataManager *)
                 ((fVar23 - (float)pIStack_20) / ((float)skillDataManager - (float)pIStack_20));
          }
        }
        else {
code_?:
          skillDataManager =
               (SpawnRolesSkillDataManager *)
               ((float)_UNK_? -
               (fVar23 - (float)skillDataManager) / ((float)pIStack_17 - (float)skillDataManager));
        }
      }
      pTVar27 = (this->fields).descriptionText;
      pDVar28 = (Debug_1__Class *)
                SpawnRolesSkillDataManager::SpawnRolesSkillDataManager_GetSkillDescription
                          (this_00,skill,(Object *)unaff_EDI,(int32_t)pIStack_8,(MethodInfo *)0x0);
      skillSetting = (KogamaSettingValueWrapperBase *)0x0;
      if (pTVar27 != (Text *)0x0) {
        auStack_3._4_4_ = (pTVar27->klass->vtable).set_text.method;
        auStack_3._0_4_ = pDVar28;
        (*(pTVar27->klass->vtable).set_text.methodPtr)(pTVar27);
        bVar10 = (int)pIStack_8 < 0;
        pIVar29 = (this->fields).powerFillImage;
        skillSetting = (KogamaSettingValueWrapperBase *)this;
        if (pIVar29 != (Image *)0x0) {
          UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_fillAmount
                    (pIVar29,(float)skillDataManager,(MethodInfo *)0x0);
          pIVar29 = (this->fields).negativePowerFillImage;
          if (pIVar29 != (Image *)0x0) {
            UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_fillAmount
                      (pIVar29,(float)skillDataManager,(MethodInfo *)0x0);
            pIVar29 = (this->fields).powerFillImage;
            if ((pIVar29 != (Image *)0x0) &&
               (pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_gameObject((Component *)pIVar29,(MethodInfo *)0x0),
               pGVar11 != (GameObject *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar11,!bVar10,(MethodInfo *)0x0);
              pIVar29 = (this->fields).negativePowerFillImage;
              if ((pIVar29 != (Image *)0x0) &&
                 (pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_gameObject((Component *)pIVar29,(MethodInfo *)0x0),
                 pGVar11 != (GameObject *)0x0)) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar11,bVar10,(MethodInfo *)0x0);
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
  pSVar21 = (Single__Class *)extraout_ECX;
code_?:
  func_?(unaff_EDI,pSVar21);
  pAVar19 = extraout_EDX;
code_?:
  func_?(skillSetting,pAVar19);
  pcVar30 = (code *)swi(3);
  (*pcVar30)();
  return;
}

