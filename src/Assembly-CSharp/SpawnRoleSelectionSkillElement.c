
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).nameText;
  pSVar2 = skillDataManager;
  if (((skillDataManager != (SpawnRolesSkillDataManager *)0x0) &&
      (pSVar3 = SpawnRolesSkillDataManager::SpawnRolesSkillDataManager_GetNameText
                           (skillDataManager,skill,(MethodInfo *)0x0), pTVar1 != (Text *)0x0)) &&
     ((*(code *)(pTVar1->klass->vtable).set_text.method)
                (pTVar1,pSVar3,(pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr),
     pIVar4 = 
     TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
     , unaff_EDI = (SpawnRoleSelectionSkillElement *)skillSetting,
     skillSetting != (KogamaSettingValueWrapperBase *)0x0)) {
    iVar5 = func_?(skillSetting,
                             TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                            );
    pIVar6 = 
    TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
    ;
    if ((iVar5 == 0) ||
       (iVar5 = func_?(skillSetting,
                                 TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                                ), pIVar4 = pIVar6, iVar5 == 0)) {
      func_?(skillSetting,pIVar4);
    }
    else {
      iStack_7 = func_?(0,
                                  TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                                  ,iVar5);
      this_00 = SpawnRolesSkillDataManager::SpawnRolesSkillDataManager_GetImageClone
                          (skillDataManager,skill,(this->fields).iconColor,
                           (this->fields).iconBackgroundColor,(this->fields).iconWidth,
                           (this->fields).iconHeight,(MethodInfo *)0x0);
      if ((this_00 != (SpawnRoleSkillIconController *)0x0) &&
         (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                              ((Component_1 *)this_00,(MethodInfo *)0x0),
         this_01 != (Transform *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                  (this_01,(this->fields).skillIconContainer,0,(MethodInfo *)0x0);
        SpawnRoleSkillIconController::SpawnRoleSkillIconController_HandleNegativeState
                  (this_00,iStack_7,(MethodInfo *)0x0);
        uStack_8 = 0;
        pSStack_9 = (SpawnRolesSkillDataManager *)
                     func_?(TypeInfo__System__Int32,&uStack_8);
        pSStack_10 = _UNK_?;
        if (cRam_? == '\0') {
          func_?(_UNK_?);
          cRam_? = '\x01';
        }
        pSVar11 = (SpawnRolesSkillDataManager *)0x0;
        pLVar12 = (skillDataManager->fields).skillDataList;
        while (pSVar2 = pSVar11, pLVar12 != (List_1_SpawnRolesSkillDataManager_SkillData_ *)0x0) {
          pOVar13 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                    Serialization::JsonProperty]::
                    Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                              ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar12,
                               MethodInfo__System__Collections__Generic__List<SpawnRolesSkillDataManager::SkillData>__get_Count__
                              );
          if ((int)pOVar13 <= (int)pSVar11) {
            if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__String->_1).cctor_started == 0)) {
              func_?();
            }
            pSVar3 = mscorlib.dll::System::String::String_Concat_3
                                (StringLiteral_SkillDataManager_can_not_get_ski,skill,
                                 StringLiteral_s_zero_value_because_it_is_not_i,(MethodInfo *)0x0);
            if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
              func_?(TypeInfo__UnityEngine__Debug);
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                      ((Object *)pSVar3,(MethodInfo *)0x0);
            pSStack_14 = (SpawnRolesSkillDataManager *)0x0;
code_?:
            pKVar15 = skillSetting->klass;
            bVar16 = (pKVar15->_1).naturalAligment;
            bVar17 = (
                    TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
                    ->_1).naturalAligment;
            if ((bVar16 < bVar17) ||
               ((pKVar15->_1).typeHierarchy[bVar17 - 1] !=
                (Il2CppClass *)
                TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
               )) {
              bVar18 = false;
            }
            else {
              bVar18 = true;
            }
            pKVar19 = (KogamaSettingValueWrapperBase *)0x0;
            if (bVar18) {
              pKVar19 = skillSetting;
            }
            pSStack_20 = pSStack_14;
            if (pKVar19 == (KogamaSettingValueWrapperBase *)0x0) {
              bVar17 = (
                      TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
                      ->_1).naturalAligment;
              if ((bVar16 < bVar17) ||
                 ((pKVar15->_1).typeHierarchy[bVar17 - 1] !=
                  (Il2CppClass *)
                  TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
                 )) {
                bVar18 = false;
              }
              else {
                bVar18 = true;
              }
              pKVar19 = (KogamaSettingValueWrapperBase *)0x0;
              if (bVar18) {
                pKVar19 = skillSetting;
              }
              pSVar11 = pSStack_9;
              if (pKVar19 != (KogamaSettingValueWrapperBase *)0x0) {
                iVar5 = func_?(skillSetting,
                                         TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
                                        );
                method_00 = 
                MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>__get_NumericValue__
                ;
                pSVar2 = (SpawnRolesSkillDataManager *)(uint)bVar16;
                if (iVar5 == 0) break;
                pKVar21 = (KogamaSettingNumericBase_1_System_Int32_ *)
                          func_?(skillSetting,
                                          TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
                                         );
                MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                KogamaSettingTypes::KogamaSettingNumericBase`1[System::Int32]::
                KogamaSettingNumericBase_1_System_Int32__get_NumericValue(pKVar21,method_00);
                pSStack_22 = (SpawnRolesSkillDataManager *)(float)extraout_ST0;
                pSVar11 = (SpawnRolesSkillDataManager *)
                          func_?(TypeInfo__System__Single,&pSStack_22);
                iVar5 = func_?(skillSetting,
                                         TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
                                        );
                pSVar2 = pSVar11;
                if (iVar5 == 0) break;
                iVar5 = func_?(skillSetting,
                                         TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
                                        );
                if ((*(int *)(iVar5 + 0x14) == 0) ||
                   (iVar5 = *(int *)(*(int *)(iVar5 + 0x14) + 0x10), iVar5 == 0)) break;
                pSStack_10 = *(SpawnRolesSkillDataManager **)(iVar5 + 0xc);
                iVar5 = func_?(skillSetting,
                                         TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
                                        );
                if (iVar5 == 0) break;
                iVar5 = func_?(skillSetting,
                                         TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
                                        );
                if (((*(int *)(iVar5 + 0x14) == 0) ||
                    (iVar5 = *(int *)(*(int *)(iVar5 + 0x14) + 0x10), iVar5 == 0)) ||
                   (pSStack_9 = *(SpawnRolesSkillDataManager **)(iVar5 + 8),
                   pSVar11 == (SpawnRolesSkillDataManager *)0x0)) break;
                pIVar23 = (Int32__Class *)TypeInfo__System__Single;
                if ((((Object__Class *)pSVar11->klass)->_0).element_class !=
                    (TypeInfo__System__Single->_0).element_class) goto code_?;
                pfVar24 = (float *)func_?(pSVar11);
                fVar25 = *pfVar24;
                if (fVar25 <= (float)pSStack_20) {
                  fVar25 = fVar25 - (float)pSStack_9;
                  fVar26 = (float)pSStack_20 - (float)pSStack_9;
                  goto code_?;
                }
                pSVar2 = pSStack_9;
                if ((float)pSStack_9 < (float)pSStack_20) {
                  pSVar2 = pSStack_20;
                }
                pSVar27 = pSStack_10;
                if (0.0 < (float)pSStack_10) goto code_?;
                pSStack_10 = (SpawnRolesSkillDataManager *)
                            ((fVar25 - (float)pSStack_10) / ((float)pSStack_9 - (float)pSStack_10));
              }
            }
            else {
              bVar17 = (
                      TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
                      ->_1).naturalAligment;
              if ((bVar16 < bVar17) ||
                 (bStack_28 = 1,
                 (pKVar15->_1).typeHierarchy[bVar17 - 1] !=
                 (Il2CppClass *)
                 TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
                 )) {
                bStack_28 = 0;
              }
              pKVar19 = (KogamaSettingValueWrapperBase *)0x0;
              if (bStack_28 != 0) {
                pKVar19 = skillSetting;
              }
              pAVar29 = 
              TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
              ;
              if (pKVar19 == (KogamaSettingValueWrapperBase *)0x0) goto code_?;
              if ((bVar16 < bVar17) ||
                 ((pKVar15->_1).typeHierarchy[bVar17 - 1] !=
                  (Il2CppClass *)
                  TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
                 )) {
                bVar18 = false;
              }
              else {
                bVar18 = true;
              }
              pKVar21 = (KogamaSettingNumericBase_1_System_Int32_ *)0x0;
              if (bVar18) {
                pKVar21 = (KogamaSettingNumericBase_1_System_Int32_ *)skillSetting;
              }
              if (pKVar21 == (KogamaSettingNumericBase_1_System_Int32_ *)0x0) goto code_?;
              iStack_30 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                          KogamaSettingTypes::KogamaSettingNumericBase`1[System::Int32]::
                          KogamaSettingNumericBase_1_System_Int32__get_NumericValue
                                    (pKVar21,
                                     MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__get_NumericValue__
                                    );
              pSVar11 = (SpawnRolesSkillDataManager *)
                        func_?(TypeInfo__System__Int32,&iStack_30);
              pKVar15 = skillSetting->klass;
              bVar16 = (
                      TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
                      ->_1).naturalAligment;
              bStack_28 = (pKVar15->_1).naturalAligment;
              if ((bStack_28 < bVar16) ||
                 ((pKVar15->_1).typeHierarchy[bVar16 - 1] !=
                  (Il2CppClass *)
                  TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
                 )) {
                iVar5 = (uint)(uint3)bVar16 << 8;
                bVar18 = false;
              }
              else {
                iVar5 = CONCAT31((uint3)bVar16,1);
                bVar18 = true;
              }
              pKVar19 = (KogamaSettingValueWrapperBase *)0x0;
              if (bVar18) {
                pKVar19 = skillSetting;
              }
              pAVar29 = 
              TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
              ;
              pSStack_9 = pSVar11;
              if (pKVar19 == (KogamaSettingValueWrapperBase *)0x0) goto code_?;
              uVar31 = (uint3)((uint)iVar5 >> 8);
              if ((bStack_28 < (byte)((uint)iVar5 >> 8)) ||
                 ((pKVar15->_1).typeHierarchy[bVar16 - 1] !=
                  (Il2CppClass *)
                  TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
                 )) {
                pSVar2 = (SpawnRolesSkillDataManager *)((uint)uVar31 << 8);
              }
              else {
                pSVar2 = (SpawnRolesSkillDataManager *)CONCAT31(uVar31,1);
              }
              pKVar19 = (KogamaSettingValueWrapperBase *)0x0;
              if ((char)pSVar2 != '\0') {
                pKVar19 = skillSetting;
              }
              if (pKVar19 == (KogamaSettingValueWrapperBase *)0x0) goto code_?;
              if ((pKVar19[1].klass == (KogamaSettingValueWrapperBase__Class *)0x0) ||
                 (pIVar32 = ((pKVar19[1].klass)->_0).byval_arg.data.array,
                 pIVar32 == (Il2CppArrayType *)0x0)) break;
              pSStack_22 = (SpawnRolesSkillDataManager *)(float)(int)pIVar32->lobounds;
              uVar31 = (uint3)((uint)pSVar2 >> 8);
              if ((bStack_28 < (byte)((uint)pSVar2 >> 8)) ||
                 ((pKVar15->_1).typeHierarchy[bVar16 - 1] !=
                  (Il2CppClass *)
                  TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
                 )) {
                pSVar2 = (SpawnRolesSkillDataManager *)((uint)uVar31 << 8);
              }
              else {
                pSVar2 = (SpawnRolesSkillDataManager *)CONCAT31(uVar31,1);
              }
              pKVar19 = (KogamaSettingValueWrapperBase *)0x0;
              if ((char)pSVar2 != '\0') {
                pKVar19 = skillSetting;
              }
              if (pKVar19 == (KogamaSettingValueWrapperBase *)0x0) goto code_?;
              if ((bStack_28 < (byte)((uint)pSVar2 >> 8)) ||
                 ((pKVar15->_1).typeHierarchy[bVar16 - 1] !=
                  (Il2CppClass *)
                  TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
                 )) {
                bVar18 = false;
              }
              else {
                bVar18 = true;
              }
              pKVar19 = (KogamaSettingValueWrapperBase *)0x0;
              if (bVar18) {
                pKVar19 = skillSetting;
              }
              if (pKVar19 == (KogamaSettingValueWrapperBase *)0x0) goto code_?;
              if (((pKVar19[1].klass == (KogamaSettingValueWrapperBase__Class *)0x0) ||
                  (pIVar32 = ((pKVar19[1].klass)->_0).byval_arg.data.array,
                  pIVar32 == (Il2CppArrayType *)0x0)) ||
                 (pSStack_10 = (SpawnRolesSkillDataManager *)(float)(int)pIVar32->sizes,
                 pSVar2 = pSVar11, pSVar11 == (SpawnRolesSkillDataManager *)0x0)) break;
              pIVar23 = TypeInfo__System__Int32;
              if ((((Object__Class *)pSVar11->klass)->_0).element_class !=
                  (TypeInfo__System__Int32->_0).element_class) goto code_?;
              piVar33 = (int *)func_?(pSVar11);
              fVar25 = (float)*piVar33;
              if (fVar25 <= (float)pSStack_20) {
                fVar25 = fVar25 - (float)pSStack_10;
                fVar26 = (float)pSStack_20 - (float)pSStack_10;
code_?:
                pSStack_10 = (SpawnRolesSkillDataManager *)((float)_UNK_? - fVar25 / fVar26);
              }
              else {
                pSVar2 = pSStack_10;
                if ((float)pSStack_10 < (float)pSStack_20) {
                  pSVar2 = pSStack_20;
                }
                pSVar27 = pSStack_22;
                if (0.0 < (float)pSStack_22) {
code_?:
                  pSStack_10 = (SpawnRolesSkillDataManager *)
                              ((fVar25 - (float)pSVar2) / ((float)pSVar27 - (float)pSVar2));
                }
                else {
                  pSStack_10 = (SpawnRolesSkillDataManager *)
                              ((fVar25 - (float)pSStack_22) / ((float)pSStack_10 - (float)pSStack_22)
                              );
                }
              }
            }
            pTVar1 = (this->fields).descriptionText;
            pSVar3 = SpawnRolesSkillDataManager::SpawnRolesSkillDataManager_GetSkillDescription
                                (skillDataManager,skill,(Object *)pSVar11,iStack_7,
                                 (MethodInfo *)0x0);
            pSVar2 = pSVar11;
            unaff_EDI = this;
            if (pTVar1 != (Text *)0x0) {
              (*(code *)(pTVar1->klass->vtable).set_text.method)
                        (pTVar1,pSVar3,
                         (pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
              pIVar34 = (this->fields).powerFillImage;
              bVar18 = iStack_7 < 0;
              pSVar2 = (SpawnRolesSkillDataManager *)(uint)bVar18;
              if (pIVar34 != (Image *)0x0) {
                UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_fillAmount
                          (pIVar34,(float)pSStack_10,(MethodInfo *)0x0);
                pIVar34 = (this->fields).negativePowerFillImage;
                if (pIVar34 != (Image *)0x0) {
                  UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_fillAmount
                            (pIVar34,(float)pSStack_10,(MethodInfo *)0x0);
                  pIVar34 = (this->fields).powerFillImage;
                  if ((pIVar34 != (Image *)0x0) &&
                     (pGVar35 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_1_get_gameObject((Component_1 *)pIVar34,(MethodInfo *)0x0),
                     pGVar35 != (GameObject *)0x0)) {
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              (pGVar35,!bVar18,(MethodInfo *)0x0);
                    pIVar34 = (this->fields).negativePowerFillImage;
                    if ((pIVar34 != (Image *)0x0) &&
                       (pGVar35 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                  Component_1_get_gameObject
                                            ((Component_1 *)pIVar34,(MethodInfo *)0x0),
                       pGVar35 != (GameObject *)0x0)) {
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                (pGVar35,bVar18,(MethodInfo *)0x0);
                      return;
                    }
                  }
                }
              }
            }
            break;
          }
          pLVar12 = (skillDataManager->fields).skillDataList;
          pSVar2 = skillDataManager;
          if (pLVar12 == (List_1_SpawnRolesSkillDataManager_SkillData_ *)0x0) break;
          pSVar36 = mscorlib.dll::System::Collections::Generic::
                    List`1[SpawnRolesSkillDataManager+SkillData]::
                    List_1_SpawnRolesSkillDataManager_SkillData__get_Item
                              ((SpawnRolesSkillDataManager_SkillData *)&stack0xffffffac,pLVar12,
                               (int32_t)pSVar11,
                               MethodInfo__System__Collections__Generic__List<SpawnRolesSkillDataManager::SkillData>__get_Item_int_
                              );
          pSVar3 = pSVar36->type;
          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__String->_1).cctor_started == 0)) {
            func_?();
          }
          bVar37 = mscorlib.dll::System::String::String_op_Equality(skill,pSVar3,(MethodInfo *)0x0)
          ;
          pLVar12 = (skillDataManager->fields).skillDataList;
          if (bVar37 != 0) {
            if (pLVar12 != (List_1_SpawnRolesSkillDataManager_SkillData_ *)0x0) {
              iVar5 = func_?(&stack0xffffffac,pLVar12,pSVar11,
                                       MethodInfo__System__Collections__Generic__List<SpawnRolesSkillDataManager::SkillData>__get_Item_int_
                                      );
              pSStack_14 = (SpawnRolesSkillDataManager *)
                           ((ulonglong)*(undefined8 *)(iVar5 + 0x10) >> 0x20);
              goto code_?;
            }
            break;
          }
          pSVar11 = (SpawnRolesSkillDataManager *)((int)&pSVar11->klass + 1);
        }
      }
    }
  }
  func_?(0);
  pIVar23 = extraout_ECX;
  pSVar11 = pSVar2;
code_?:
  func_?(pSVar11,pIVar23);
  pAVar29 = extraout_ECX_00;
code_?:
  func_?(unaff_EDI,pAVar29);
  pAVar29 = extraout_EDX;
code_?:
  func_?(unaff_EDI,pAVar29);
  pcVar38 = (code *)swi(3);
  (*pcVar38)();
  return;
}

