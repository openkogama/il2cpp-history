
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
  pSVar1 = this;
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
  pTVar2 = (this->fields).nameText;
  if (((skillDataManager != (SpawnRolesSkillDataManager *)0x0) &&
      (pSVar3 = SpawnRolesSkillDataManager::SpawnRolesSkillDataManager_GetNameText
                          (skillDataManager,skill,(MethodInfo *)0x0), pTVar2 != (Text *)0x0)) &&
     ((*(code *)(pTVar2->klass->vtable).set_text.method)
                (pTVar2,pSVar3,(pTVar2->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr),
     settingValue = 
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
                               ), settingValue = pIVar5, iVar4 == 0)) {
      func_?(skillSetting,settingValue);
      pSVar6 = extraout_ECX;
code_?:
      func_?(settingValue,pSVar6);
    }
    else {
      iStack_7 = func_?(0,
                                 TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                                 ,iVar4);
      this_00 = SpawnRolesSkillDataManager::SpawnRolesSkillDataManager_GetImageClone
                          (skillDataManager,skill,(this->fields).iconColor,
                           (this->fields).iconBackgroundColor,(this->fields).iconWidth,
                           (this->fields).iconHeight,(MethodInfo *)0x0);
      if ((this_00 != (SpawnRoleSkillIconController *)0x0) &&
         (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)this_00,(MethodInfo *)0x0), this_01 != (Transform *)0x0)
         ) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                  (this_01,(this->fields).skillIconContainer,0,(MethodInfo *)0x0);
        SpawnRoleSkillIconController::SpawnRoleSkillIconController_HandleNegativeState
                  (this_00,iStack_7,(MethodInfo *)0x0);
        uStack_8 = 0;
        settingValue = (IAttributeSetting__Class *)
                       func_?(TypeInfo__System__Int32,&uStack_8);
        this = _UNK_?;
        pSStack_9 = (SpawnRoleSelectionSkillElement *)
                    SpawnRolesSkillDataManager::SpawnRolesSkillDataManager_GetZeroValue
                              (skillDataManager,skill,(MethodInfo *)0x0);
        if (((skillSetting->klass->_1).naturalAligment <
             (
             TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
             ->_1).naturalAligment) ||
           ((skillSetting->klass->_1).typeHierarchy
            [(
             TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
             ->_1).naturalAligment - 1] !=
            (Il2CppClass *)
            TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
           )) {
          if (((skillSetting->klass->_1).naturalAligment <
               (
               TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
               ->_1).naturalAligment) ||
             ((skillSetting->klass->_1).typeHierarchy
              [(
               TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
               ->_1).naturalAligment - 1] !=
              (Il2CppClass *)
              TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
             )) {
code_?:
            skillSetting = (KogamaSettingValueWrapperBase *)(pSVar1->fields).descriptionText;
            pSVar3 = SpawnRolesSkillDataManager::SpawnRolesSkillDataManager_GetSkillDescription
                               (skillDataManager,skill,(Object *)settingValue,iStack_7,
                                (MethodInfo *)0x0);
            if ((Text *)skillSetting != (Text *)0x0) {
              pSStack_10 = (String *)
                           (((Text *)skillSetting)->klass->vtable).CalculateLayoutInputHorizontal_1.
                           methodPtr;
              pSStack_11 = pSVar3;
              (*(code *)(((Text *)skillSetting)->klass->vtable).set_text.method)(skillSetting);
              value = iStack_7 < 0;
              pIVar12 = (pSVar1->fields).powerFillImage;
              if (pIVar12 != (Image *)0x0) {
                UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_fillAmount
                          (pIVar12,(float)this,(MethodInfo *)0x0);
                pIVar12 = (pSVar1->fields).negativePowerFillImage;
                if (pIVar12 != (Image *)0x0) {
                  UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_fillAmount
                            (pIVar12,(float)this,(MethodInfo *)0x0);
                  pIVar12 = (pSVar1->fields).powerFillImage;
                  if ((pIVar12 != (Image *)0x0) &&
                     (pGVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_get_gameObject((Component *)pIVar12,(MethodInfo *)0x0),
                     pGVar13 != (GameObject *)0x0)) {
                    skillSetting = (KogamaSettingValueWrapperBase *)skill;
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              (pGVar13,!value,(MethodInfo *)0x0);
                    pIVar12 = (pSVar1->fields).negativePowerFillImage;
                    if ((pIVar12 != (Image *)0x0) &&
                       (pGVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                  Component_get_gameObject((Component *)pIVar12,(MethodInfo *)0x0),
                       pGVar13 != (GameObject *)0x0)) {
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                (pGVar13,value,(MethodInfo *)0x0);
                      return;
                    }
                  }
                }
              }
            }
          }
          else {
            pAVar14 = 
            TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
            ;
            if (((skillSetting->klass->_1).naturalAligment <
                 (
                 TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
                 ->_1).naturalAligment) ||
               ((skillSetting->klass->_1).typeHierarchy
                [(
                 TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
                 ->_1).naturalAligment - 1] !=
                (Il2CppClass *)
                TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
               )) goto code_?;
            pSStack_11 = (String *)
                         MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                         KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                         KogamaSettingNumericBase_1_System_Single__get_NumericValue
                                   ((KogamaSettingNumericBase_1_System_Single_ *)skillSetting,
                                    MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>__get_NumericValue__
                                   );
            settingValue = (IAttributeSetting__Class *)
                           func_?(TypeInfo__System__Single,&pSStack_11);
            pAVar14 = 
            TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
            ;
            if (((skillSetting->klass->_1).naturalAligment <
                 (
                 TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
                 ->_1).naturalAligment) ||
               ((skillSetting->klass->_1).typeHierarchy
                [(
                 TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
                 ->_1).naturalAligment - 1] !=
                (Il2CppClass *)
                TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
               )) goto code_?;
            if ((skillSetting[1].klass != (KogamaSettingValueWrapperBase__Class *)0x0) &&
               (iVar4 = ((skillSetting[1].klass)->_0).byval_arg.data.__klassIndex, iVar4 != 0)) {
              pSStack_10 = *(String **)(iVar4 + 0xc);
              iVar4 = ((skillSetting[1].klass)->_0).byval_arg.data.__klassIndex;
              if ((iVar4 != 0) &&
                 (this = *(SpawnRoleSelectionSkillElement **)(iVar4 + 8),
                 settingValue != (IAttributeSetting__Class *)0x0)) {
                pSVar6 = TypeInfo__System__Single;
                if ((Il2CppClass *)((settingValue->_0).image)->codeGenModule ==
                    (TypeInfo__System__Single->_0).element_class) {
                  pfVar15 = (float *)func_?(settingValue);
                  fVar16 = *pfVar15;
                  if ((float)pSStack_9 < fVar16) {
                    pSVar3 = pSStack_10;
                    pSVar17 = this;
                    if ((float)this < (float)pSStack_9) {
                      pSVar17 = pSStack_9;
                    }
                    goto code_?;
                  }
                  goto code_?;
                }
                goto code_?;
              }
            }
          }
        }
        else {
          pAVar14 = (AttributeSettingFloat__Class *)
                    TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
          ;
          if (((skillSetting->klass->_1).naturalAligment <
               (
               TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
               ->_1).naturalAligment) ||
             ((skillSetting->klass->_1).typeHierarchy
              [(
               TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
               ->_1).naturalAligment - 1] !=
              (Il2CppClass *)
              TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
             )) goto code_?;
          pSStack_10 = (String *)
                       MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                       KogamaSettingTypes::KogamaSettingNumericBase`1[System::Int32]::
                       KogamaSettingNumericBase_1_System_Int32__get_NumericValue
                                 ((KogamaSettingNumericBase_1_System_Int32_ *)skillSetting,
                                  MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__get_NumericValue__
                                 );
          settingValue = (IAttributeSetting__Class *)
                         func_?(TypeInfo__System__Int32,&pSStack_10);
          pAVar14 = (AttributeSettingFloat__Class *)
                    TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
          ;
          if (((skillSetting->klass->_1).naturalAligment <
               (
               TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
               ->_1).naturalAligment) ||
             ((skillSetting->klass->_1).typeHierarchy
              [(
               TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
               ->_1).naturalAligment - 1] !=
              (Il2CppClass *)
              TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
             )) goto code_?;
          if ((skillSetting[1].klass != (KogamaSettingValueWrapperBase__Class *)0x0) &&
             (pIVar18 = ((skillSetting[1].klass)->_0).byval_arg.data.array,
             pIVar18 != (Il2CppArrayType *)0x0)) {
            pSStack_11 = (String *)(float)(int)pIVar18->lobounds;
            pIVar18 = ((skillSetting[1].klass)->_0).byval_arg.data.array;
            if ((pIVar18 != (Il2CppArrayType *)0x0) &&
               (this = (SpawnRoleSelectionSkillElement *)(float)(int)pIVar18->sizes,
               settingValue != (IAttributeSetting__Class *)0x0)) {
              pSVar6 = (Single__Class *)TypeInfo__System__Int32;
              if ((Il2CppClass *)((settingValue->_0).image)->codeGenModule !=
                  (TypeInfo__System__Int32->_0).element_class) goto code_?;
              piVar19 = (int *)func_?(settingValue);
              fVar16 = (float)*piVar19;
              if ((float)pSStack_9 < fVar16) {
                pSVar3 = pSStack_11;
                pSVar17 = this;
                if ((float)this < (float)pSStack_9) {
                  pSVar17 = pSStack_9;
                }
code_?:
                if (_UNK_? < (float)pSVar3) {
                  this = (SpawnRoleSelectionSkillElement *)
                         ((fVar16 - (float)pSVar17) / ((float)pSVar3 - (float)pSVar17));
                }
                else {
                  this = (SpawnRoleSelectionSkillElement *)
                         ((fVar16 - (float)pSVar3) / ((float)this - (float)pSVar3));
                }
              }
              else {
code_?:
                this = (SpawnRoleSelectionSkillElement *)
                       ((float)_UNK_? -
                       (fVar16 - (float)this) / ((float)pSStack_9 - (float)this));
              }
              goto code_?;
            }
          }
        }
      }
    }
  }
  func_?();
  pAVar14 = extraout_EDX;
code_?:
  func_?(skillSetting,pAVar14);
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}

