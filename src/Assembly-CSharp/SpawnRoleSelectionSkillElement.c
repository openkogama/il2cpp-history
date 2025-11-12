
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
  if (max <= 0.0) {
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
    FUN_?(&
                  TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>__get_NumericValue__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__get_NumericValue__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).nameText;
  if (((skillDataManager == (SpawnRolesSkillDataManager *)0x0) ||
      (pSVar2 = SpawnRolesSkillDataManager::SpawnRolesSkillDataManager_GetNameText
                           (skillDataManager,skill,(MethodInfo *)0x0), pTVar1 == (Text *)0x0)) ||
     ((*(pTVar1->klass->vtable).set_text.methodPtr)
                (pTVar1,pSVar2,(pTVar1->klass->vtable).set_text.method),
     pIVar3 = 
     TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
     , skillSetting == (KogamaSettingValueWrapperBase *)0x0)) goto code_?;
  lVar4 = FUN_?(skillSetting,
                         TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                        );
  pIVar5 = 
  TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
  ;
  if (lVar4 == 0) {
    FUN_?(skillSetting,pIVar3);
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  lVar4 = FUN_?(skillSetting,
                         TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                        );
  if (lVar4 == 0) {
    FUN_?(skillSetting,pIVar5);
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  skillCost = FUN_?(0,
                            TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                            ,lVar4);
  this_00 = SpawnRolesSkillDataManager::SpawnRolesSkillDataManager_GetImageClone
                      (skillDataManager,skill,(this->fields).iconColor,
                       (this->fields).iconBackgroundColor,(this->fields).iconWidth,
                       (this->fields).iconHeight,(MethodInfo *)0x0);
  if ((this_00 == (SpawnRoleSkillIconController *)0x0) ||
     (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this_00,(MethodInfo *)0x0), this_01 == (Transform *)0x0))
  goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
            (this_01,(this->fields).skillIconContainer,0,(MethodInfo *)0x0);
  SpawnRoleSkillIconController::SpawnRoleSkillIconController_HandleNegativeState
            (this_00,skillCost,(MethodInfo *)0x0);
  uStackX_8 = (Object *)((ulonglong)uStackX_8._4_4_ << 0x20);
  settingValue = uStackX_8;
  if (*(int *)(lRam_? + 0x28) < 0) {
    if ((*(longlong *)(lRam_? + 0x60) == 0) ||
       ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
      settingValue = (Object *)FUN_?(lRam_?);
      FUN_?(settingValue + 1,&uStackX_8);
      if (iRam_? != 0) {
        uVar7 = (uint)((ulonglong)(settingValue + 1) >> 0xc);
        uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
        do {
          uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
          puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
          LOCK();
          bVar11 = uVar9 == *puVar10;
          if (bVar11) {
            *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
          }
          UNLOCK();
        } while (!bVar11);
      }
    }
    else {
      settingValue = (Object *)0x0;
    }
  }
  fVar12 = _UNK_?;
  fVar13 = SpawnRolesSkillDataManager::SpawnRolesSkillDataManager_GetZeroValue
                     (skillDataManager,skill,(MethodInfo *)0x0);
  pKVar14 = skillSetting->klass;
  bVar15 = (
          TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
          ->_1).naturalAligment;
  if (((pKVar14->_1).naturalAligment < bVar15) ||
     ((pKVar14->_1).typeHierarchy[(ulonglong)bVar15 - 1] !=
      (Il2CppClass *)
      TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
     )) {
    bVar15 = (
            TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
            ->_1).naturalAligment;
    if ((bVar15 <= (pKVar14->_1).naturalAligment) &&
       ((pKVar14->_1).typeHierarchy[(ulonglong)bVar15 - 1] ==
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
       )) {
      bVar15 = (
              TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
              ->_1).naturalAligment;
      if (((pKVar14->_1).naturalAligment < bVar15) ||
         ((pKVar14->_1).typeHierarchy[(ulonglong)bVar15 - 1] !=
          (Il2CppClass *)
          TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
         )) {
        FUN_?(skillSetting);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar16 = FUN_?(skillSetting,
                             MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>__get_NumericValue__
                            );
      uStackX_8 = (Object *)CONCAT44(uStackX_8._4_4_,uVar16);
      settingValue = (Object *)FUN_?(lRam_?,&uStackX_8);
      bVar15 = (
              TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
              ->_1).naturalAligment;
      if (((skillSetting->klass->_1).naturalAligment < bVar15) ||
         ((skillSetting->klass->_1).typeHierarchy[(ulonglong)bVar15 - 1] !=
          (Il2CppClass *)
          TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
         )) {
        FUN_?(skillSetting);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if ((skillSetting[1].klass == (KogamaSettingValueWrapperBase__Class *)0x0) ||
         (pIVar17 = ((skillSetting[1].klass)->_0).byval_arg.data.array,
         pIVar17 == (Il2CppArrayType *)0x0)) goto code_?;
      fVar18 = *(float *)((longlong)&pIVar17->sizes + 4);
      fVar19 = *(float *)&pIVar17->sizes;
      if (settingValue == (Object *)0x0) goto code_?;
      if ((settingValue->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40))
      {
        FUN_?(settingValue);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      fVar20 = *(float *)&settingValue[1].klass;
      if (fVar20 <= fVar13) goto code_?;
code_?:
      fVar12 = fVar19;
      if (fVar19 < fVar13) {
        fVar12 = fVar13;
      }
      if (0.0 < fVar18) {
        fVar12 = (fVar20 - fVar12) / (fVar18 - fVar12);
      }
      else {
        fVar12 = (fVar20 - fVar18) / (fVar19 - fVar18);
      }
    }
  }
  else {
    bVar15 = (
            TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
            ->_1).naturalAligment;
    if (((pKVar14->_1).naturalAligment < bVar15) ||
       ((pKVar14->_1).typeHierarchy[(ulonglong)bVar15 - 1] !=
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
       )) {
      FUN_?(skillSetting);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar16 = FUN_?(skillSetting,
                           MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__get_NumericValue__
                          );
    uStackX_8 = (Object *)CONCAT44(uStackX_8._4_4_,uVar16);
    settingValue = (Object *)FUN_?(lRam_?,&uStackX_8);
    bVar15 = (
            TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
            ->_1).naturalAligment;
    if (((skillSetting->klass->_1).naturalAligment < bVar15) ||
       ((skillSetting->klass->_1).typeHierarchy[(ulonglong)bVar15 - 1] !=
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
       )) {
      FUN_?(skillSetting);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if ((skillSetting[1].klass == (KogamaSettingValueWrapperBase__Class *)0x0) ||
       (pIVar17 = ((skillSetting[1].klass)->_0).byval_arg.data.array,
       pIVar17 == (Il2CppArrayType *)0x0)) goto code_?;
    fVar18 = (float)*(int *)((longlong)&pIVar17->sizes + 4);
    fVar19 = (float)*(int *)&pIVar17->sizes;
    if (settingValue == (Object *)0x0) goto code_?;
    if ((settingValue->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
      FUN_?(settingValue);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    fVar20 = (float)*(int *)&settingValue[1].klass;
    if (fVar13 < fVar20) goto code_?;
code_?:
    fVar12 = fVar12 - (fVar20 - fVar19) / (fVar13 - fVar19);
  }
  pTVar1 = (this->fields).descriptionText;
  SpawnRolesSkillDataManager::SpawnRolesSkillDataManager_GetSkillDescription
            (skillDataManager,skill,settingValue,skillCost,(MethodInfo *)0x0);
  if (pTVar1 != (Text *)0x0) {
    (*(pTVar1->klass->vtable).set_text.methodPtr)(pTVar1);
    pIVar21 = (this->fields).powerFillImage;
    if (pIVar21 != (Image *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_fillAmount
                (pIVar21,fVar12,(MethodInfo *)0x0);
      pIVar21 = (this->fields).negativePowerFillImage;
      if (pIVar21 != (Image *)0x0) {
        UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_fillAmount
                  (pIVar21,fVar12,(MethodInfo *)0x0);
        pIVar21 = (this->fields).powerFillImage;
        if ((pIVar21 != (Image *)0x0) &&
           (pGVar22 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)pIVar21,(MethodInfo *)0x0),
           pGVar22 != (GameObject *)0x0)) {
          bVar15 = (byte)(skillCost >> 0x18);
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar22,bVar15 >> 7 ^ 1,(MethodInfo *)0x0);
          pIVar21 = (this->fields).negativePowerFillImage;
          if ((pIVar21 != (Image *)0x0) &&
             (pGVar22 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  ((Component *)pIVar21,(MethodInfo *)0x0),
             pGVar22 != (GameObject *)0x0)) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                            ,skillCost >> 0x1f,0);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (pGVar22 == (GameObject *)0x0) {
              FUN_?();
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pvVar23 = (pGVar22->fields)._.m_CachedPtr;
            if (pvVar23 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar22,(MethodInfo *)0x0);
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pcVar6 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
              uVar24 = func_?(&UNK_?);
              FUN_?(uVar24,0);
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pcRam_? = pcVar6;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam_?)(pvVar23,bVar15 >> 7);
            return;
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

