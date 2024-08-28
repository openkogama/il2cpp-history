
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
  settingValue = (Il2CppClass *)(this->fields).nameText;
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
    pLVar1 = (skillDataManager->fields).skillDataList;
    unaff_ESI = (AttributeSettingFloat__Class *)0x0;
    while (pLVar1 != (List_1_SpawnRolesSkillDataManager_SkillData_ *)0x0) {
      unaff_EDI = (SpawnRoleSelectionSkillElement *)skillSetting;
      if ((pLVar1->fields)._size <= (int)unaff_ESI) {
        unaff_ESI = (AttributeSettingFloat__Class *)
                    mscorlib.dll::System::String::String_Concat_4
                              (StringLiteral_SkillDataManager_can_not_create_,skill,
                               StringLiteral__because_it_is_not_in_the_dataLi,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          MStack_2.index = (int32_t)TypeInfo__UnityEngine__Debug;
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)unaff_ESI,(MethodInfo *)0x0);
        pSVar3 = ::StringLiteral__;
code_?:
        if ((settingValue != (Il2CppClass *)0x0) &&
           ((*(code *)(((Text__Class *)settingValue->image)->vtable).set_text.method)
                      (settingValue,pSVar3,
                       (((Text__Class *)settingValue->image)->vtable).
                       CalculateLayoutInputHorizontal_1.methodPtr),
           unaff_ESI = (AttributeSettingFloat__Class *)
                       TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
           , skillSetting != (KogamaSettingValueWrapperBase *)0x0)) {
          iVar4 = func_?(skillSetting,
                                   TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                                  );
          pIVar5 = 
          TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
          ;
          if ((iVar4 == 0) ||
             (iVar4 = func_?(skillSetting,
                                       TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                                      ), unaff_ESI = (AttributeSettingFloat__Class *)pIVar5,
             iVar4 == 0)) goto code_?;
          pFStack_6 = (FieldInfo *)
                       func_?(0,
                                       TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                                       ,iVar4);
          unaff_ESI = (AttributeSettingFloat__Class *)
                      SpawnRolesSkillDataManager::SpawnRolesSkillDataManager_GetImageClone
                                (skillDataManager,skill,(this->fields).iconColor,
                                 (this->fields).iconBackgroundColor,(this->fields).iconWidth,
                                 (this->fields).iconHeight,(MethodInfo *)0x0);
          settingValue = (Il2CppClass *)this;
          if ((unaff_ESI != (AttributeSettingFloat__Class *)0x0) &&
             (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)unaff_ESI,(MethodInfo *)0x0),
             this_00 != (Transform *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                      (this_00,(this->fields).skillIconContainer,0,(MethodInfo *)0x0);
            pIStack_7 = (Il2CppClass *)
                         CONCAT31((int3)((uint)extraout_EAX >> 8),(int)pFStack_6 < 0);
            pIStack_8 = (Il2CppClass *)CONCAT31(pIStack_8._1_3_,(int)pFStack_6 < 0);
            pCVar9 = *(Component **)&(unaff_ESI->_0).byval_arg.attrs;
            if ((pCVar9 != (Component *)0x0) &&
               (pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_gameObject(pCVar9,(MethodInfo *)0x0), pIVar11 = pIStack_8,
               pGVar10 != (GameObject *)0x0)) {
              bVar12 = (bool)pIStack_8;
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar10,bVar12,(MethodInfo *)0x0);
              pCVar9 = (Component *)(unaff_ESI->_0).this_arg.data.typeHandle;
              settingValue = pIVar11;
              if ((pCVar9 != (Component *)0x0) &&
                 (pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_gameObject(pCVar9,(MethodInfo *)0x0),
                 pGVar10 != (GameObject *)0x0)) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar10,bVar12,(MethodInfo *)0x0);
                pIStack_13 = (Il2CppClass *)0x0;
                settingValue = (Il2CppClass *)func_?(TypeInfo__System__Int32,&pIStack_13);
                pIStack_14 = _UNK_?;
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
                unaff_ESI = (AttributeSettingFloat__Class *)0x0;
                pLVar1 = (skillDataManager->fields).skillDataList;
                if (pLVar1 != (List_1_SpawnRolesSkillDataManager_SkillData_ *)0x0)
                goto code_?;
              }
            }
          }
        }
        break;
      }
      if (pLVar1 == (List_1_SpawnRolesSkillDataManager_SkillData_ *)0x0) break;
      pMVar15 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal
                ::MultiColumnCollectionHeader+ViewState+ColumnState]::
                List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__get_Item
                          ((MultiColumnCollectionHeader_ViewState_ColumnState *)&_Stack_38,
                           (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                            *)pLVar1,(int32_t)unaff_ESI,
                           MethodInfo__System__Collections__Generic__List<SpawnRolesSkillDataManager::SkillData>__get_Item_int_
                          );
      MStack_2._16_8_ = *(undefined8 *)&(pMVar15->width).m_Unit;
      bVar12 = mscorlib.dll::System::String::String_op_Equality
                         (skill,(String *)pMVar15->index,(MethodInfo *)0x0);
      pLVar1 = (skillDataManager->fields).skillDataList;
      if (bVar12 != 0) {
        if (pLVar1 != (List_1_SpawnRolesSkillDataManager_SkillData_ *)0x0) {
          MStack_2.width.m_Value =
               (float)
               MethodInfo__System__Collections__Generic__List<SpawnRolesSkillDataManager::SkillData>__get_Item_int_
          ;
          MStack_2.index = (int32_t)&MStack_2;
          MStack_2.name = (String *)pLVar1;
          MStack_2.actualWidth = (float)unaff_ESI;
          iVar4 = func_?();
          uStack_16 = *(undefined8 *)(iVar4 + 0x10);
          pSVar3 = *(String **)(iVar4 + 4);
          goto code_?;
        }
        break;
      }
      unaff_ESI = (AttributeSettingFloat__Class *)((int)&(unaff_ESI->_0).image + 1);
    }
  }
  goto code_?;
  while( true ) {
    if (pLVar1 == (List_1_SpawnRolesSkillDataManager_SkillData_ *)0x0) break;
    pMVar15 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
              MultiColumnCollectionHeader+ViewState+ColumnState]::
              List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__get_Item
                        (&MStack_2,
                         (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                          *)pLVar1,(int32_t)unaff_ESI,
                         MethodInfo__System__Collections__Generic__List<SpawnRolesSkillDataManager::SkillData>__get_Item_int_
                        );
    uStack_16 = *(undefined8 *)&(pMVar15->width).m_Unit;
    bVar12 = mscorlib.dll::System::String::String_op_Equality
                       (skill,(String *)pMVar15->index,(MethodInfo *)0x0);
    pLVar1 = (skillDataManager->fields).skillDataList;
    if (bVar12 != 0) {
      if (pLVar1 != (List_1_SpawnRolesSkillDataManager_SkillData_ *)0x0) {
        MStack_2.width.m_Value =
             (float)
             MethodInfo__System__Collections__Generic__List<SpawnRolesSkillDataManager::SkillData>__get_Item_int_
        ;
        MStack_2.index = (int32_t)&MStack_2;
        MStack_2.name = (String *)pLVar1;
        MStack_2.actualWidth = (float)unaff_ESI;
        p_Var14 = (_union_86 *)func_?();
        _Stack_38 = *p_Var14;
        _Stack_34 = p_Var14[1];
        _Stack_30 = p_Var14[2];
        _Stack_2c = p_Var14[3];
        uStack_16 = *(undefined8 *)(p_Var14 + 4);
        pIStack_8 = pIStack_17;
        goto code_?;
      }
      break;
    }
    unaff_ESI = (AttributeSettingFloat__Class *)((int)&(unaff_ESI->_0).image + 1);
    if (pLVar1 == (List_1_SpawnRolesSkillDataManager_SkillData_ *)0x0) break;
code_?:
    if ((pLVar1->fields)._size <= (int)unaff_ESI) {
      pSVar3 = mscorlib.dll::System::String::String_Concat_4
                          (StringLiteral_SkillDataManager_can_not_get_ski,skill,
                           StringLiteral_s_zero_value_because_it_is_not_i,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        MStack_2.index = (int32_t)TypeInfo__UnityEngine__Debug;
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)pSVar3,(MethodInfo *)0x0);
      pIStack_8 = (Il2CppClass *)0x0;
code_?:
      pAVar18 = 
      TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
      ;
      unaff_ESI = 
      TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
      ;
      pKVar19 = skillSetting->klass;
      bVar20 = (
              TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
              ->_1).naturalAligment;
      if (((pKVar19->_1).naturalAligment < bVar20) ||
         ((pKVar19->_1).typeHierarchy[bVar20 - 1] !=
          (Il2CppClass *)
          TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
         )) {
        bVar20 = (
                TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
                ->_1).naturalAligment;
        if ((bVar20 <= (pKVar19->_1).naturalAligment) &&
           ((pKVar19->_1).typeHierarchy[bVar20 - 1] ==
            (Il2CppClass *)
            TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
           )) {
          bVar20 = (
                  TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
                  ->_1).naturalAligment;
          if (((pKVar19->_1).naturalAligment < bVar20) ||
             ((pKVar19->_1).typeHierarchy[bVar20 - 1] !=
              (Il2CppClass *)
              TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
             )) goto code_?;
          pIStack_21 = (Il2CppInteropData *)
                       MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                       KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                       KogamaSettingNumericBase_1_System_Single__get_NumericValue
                                 ((KogamaSettingNumericBase_1_System_Single_ *)skillSetting,
                                  MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>__get_NumericValue__
                                 );
          settingValue = (Il2CppClass *)func_?(TypeInfo__System__Single,&pIStack_21);
          bVar20 = (
                  TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
                  ->_1).naturalAligment;
          pAVar22 = 
          TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
          ;
          if (((skillSetting->klass->_1).naturalAligment < bVar20) ||
             ((skillSetting->klass->_1).typeHierarchy[bVar20 - 1] !=
              (Il2CppClass *)
              TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
             )) goto code_?;
          if ((skillSetting[1].klass != (KogamaSettingValueWrapperBase__Class *)0x0) &&
             (iVar4 = ((skillSetting[1].klass)->_0).byval_arg.data.__klassIndex, iVar4 != 0)) {
            pIStack_23 = *(Il2CppInteropData **)(iVar4 + 0xc);
            if ((skillSetting[1].klass != (KogamaSettingValueWrapperBase__Class *)0x0) &&
               ((iVar4 = ((skillSetting[1].klass)->_0).byval_arg.data.__klassIndex, iVar4 != 0 &&
                (pIStack_14 = *(Il2CppClass **)(iVar4 + 8), settingValue != (Il2CppClass *)0x0)))) {
              pSVar24 = TypeInfo__System__Single;
              if ((((Text__Class *)settingValue->image)->_0).element_class ==
                  (TypeInfo__System__Single->_0).element_class) {
                pfVar25 = (float *)func_?(settingValue);
                fVar26 = *pfVar25;
                if ((float)pIStack_8 < fVar26) {
                  pIVar27 = pIStack_23;
                  pIVar11 = pIStack_14;
                  if ((float)pIStack_14 < (float)pIStack_8) {
                    pIVar11 = pIStack_8;
                  }
                  goto code_?;
                }
                goto code_?;
              }
              goto code_?;
            }
          }
          break;
        }
      }
      else {
        bVar20 = (
                TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
                ->_1).naturalAligment;
        unaff_ESI = (AttributeSettingFloat__Class *)
                    TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
        ;
        if (((pKVar19->_1).naturalAligment < bVar20) ||
           ((pKVar19->_1).typeHierarchy[bVar20 - 1] !=
            (Il2CppClass *)
            TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
           )) goto code_?;
        pIStack_23 = (Il2CppInteropData *)
                     MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                     KogamaSettingTypes::KogamaSettingNumericBase`1[System::Int32]::
                     KogamaSettingNumericBase_1_System_Int32__get_NumericValue
                               ((KogamaSettingNumericBase_1_System_Int32_ *)skillSetting,
                                MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__get_NumericValue__
                               );
        settingValue = (Il2CppClass *)func_?(TypeInfo__System__Int32,&pIStack_23);
        bVar20 = (
                TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
                ->_1).naturalAligment;
        pAVar22 = (AttributeSettingFloat__Class *)
                  TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
        ;
        unaff_ESI = (AttributeSettingFloat__Class *)pAVar18;
        if (((skillSetting->klass->_1).naturalAligment < bVar20) ||
           ((skillSetting->klass->_1).typeHierarchy[bVar20 - 1] !=
            (Il2CppClass *)
            TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
           )) goto code_?;
        if ((skillSetting[1].klass == (KogamaSettingValueWrapperBase__Class *)0x0) ||
           (pIVar28 = ((skillSetting[1].klass)->_0).byval_arg.data.array,
           pIVar28 == (Il2CppArrayType *)0x0)) break;
        pIStack_21 = (Il2CppInteropData *)(float)(int)pIVar28->lobounds;
        if ((skillSetting[1].klass == (KogamaSettingValueWrapperBase__Class *)0x0) ||
           ((pIVar28 = ((skillSetting[1].klass)->_0).byval_arg.data.array,
            pIVar28 == (Il2CppArrayType *)0x0 ||
            (pIStack_14 = (Il2CppClass *)(float)(int)pIVar28->sizes,
            settingValue == (Il2CppClass *)0x0)))) break;
        pSVar24 = (Single__Class *)TypeInfo__System__Int32;
        if ((((Text__Class *)settingValue->image)->_0).element_class !=
            (TypeInfo__System__Int32->_0).element_class) goto code_?;
        piVar29 = (int *)func_?(settingValue);
        fVar26 = (float)*piVar29;
        if ((float)pIStack_8 < fVar26) {
          pIVar27 = pIStack_21;
          pIVar11 = pIStack_14;
          if ((float)pIStack_14 < (float)pIStack_8) {
            pIVar11 = pIStack_8;
          }
code_?:
          if (0.0 < (float)pIVar27) {
            pIStack_14 = (Il2CppClass *)
                        ((fVar26 - (float)pIVar11) / ((float)pIVar27 - (float)pIVar11));
          }
          else {
            pIStack_14 = (Il2CppClass *)
                        ((fVar26 - (float)pIVar27) / ((float)pIStack_14 - (float)pIVar27));
          }
        }
        else {
code_?:
          pIStack_14 = (Il2CppClass *)
                      ((float)_UNK_? -
                      (fVar26 - (float)pIStack_14) / ((float)pIStack_8 - (float)pIStack_14));
        }
      }
      unaff_ESI = (AttributeSettingFloat__Class *)(this->fields).descriptionText;
      pSVar3 = SpawnRolesSkillDataManager::SpawnRolesSkillDataManager_GetSkillDescription
                          (skillDataManager,skill,(Object *)settingValue,(int32_t)pFStack_6,
                           (MethodInfo *)0x0);
      unaff_EDI = this;
      if (unaff_ESI != (AttributeSettingFloat__Class *)0x0) {
        pIVar30 = (unaff_ESI->_0).image;
        (*(code *)pIVar30[0x12].name)(unaff_ESI,pSVar3,pIVar30[0x12].nameNoExt);
        pIVar31 = (this->fields).powerFillImage;
        if (pIVar31 != (Image *)0x0) {
          UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_fillAmount
                    (pIVar31,(float)pIStack_14,(MethodInfo *)0x0);
          pIVar31 = (this->fields).negativePowerFillImage;
          if (pIVar31 != (Image *)0x0) {
            UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_fillAmount
                      (pIVar31,(float)pIStack_14,(MethodInfo *)0x0);
            pIVar31 = (this->fields).powerFillImage;
            if ((pIVar31 != (Image *)0x0) &&
               (pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_gameObject((Component *)pIVar31,(MethodInfo *)0x0),
               pIVar11 = pIStack_7, pGVar10 != (GameObject *)0x0)) {
              bVar20 = (byte)pIStack_7;
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar10,bVar20 ^ 1,(MethodInfo *)0x0);
              pIVar31 = (this->fields).negativePowerFillImage;
              settingValue = pIVar11;
              if ((pIVar31 != (Image *)0x0) &&
                 (pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_gameObject((Component *)pIVar31,(MethodInfo *)0x0),
                 pGVar10 != (GameObject *)0x0)) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar10,bVar20,(MethodInfo *)0x0);
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
  pSVar24 = (Single__Class *)extraout_ECX;
code_?:
  func_?(settingValue,pSVar24);
  pAVar22 = extraout_EDX;
  skillSetting = (KogamaSettingValueWrapperBase *)unaff_EDI;
code_?:
  func_?(skillSetting,pAVar22);
code_?:
  func_?(skillSetting,unaff_ESI);
  pcVar32 = (code *)swi(3);
  (*pcVar32)();
  return;
}

