
/* Void Initialize(String, SpawnRolesSkillDataManager, Int32, Int32, GamePassTier,
   KogamaSettingValueWrapperBase,
   UnityAction`1[MV.WorldObject.KogamaSettings.KogamaSettingsCore.KogamaSettingTypes.KogamaSettingValueWrapperBase],
   UnityAction`1[MV.WorldObject.KogamaSettings.KogamaSettingsCore.KogamaSettingTypes.KogamaSettingValueWrapperBase],
   UnityAction, UnityAction) */

void Assembly-CSharp.dll::SkillSettingFloat::SkillSettingFloat_Initialize
               (SkillSettingFloat *this,String *skill,SpawnRolesSkillDataManager *skillDataManager,
               int32_t skillCost,int32_t spawnRoleCost,GamePassTier__Enum spawnRoleTier,
               KogamaSettingValueWrapperBase *skillSetting,
               UnityAction_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_
               *removeSkillCallback,
               UnityAction_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_
               *updateSkillCallback,UnityAction *cantUpdateSkillCallback,
               UnityAction *cantRemoveSkillCallback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>__get_NumericValue__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (skillSetting == (KogamaSettingValueWrapperBase *)0x0) {
    (this->fields).skillPercentageSetting = (AttributeSettingFloat *)0x0;
  }
  else {
    bVar1 = (
            TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
            ->_1).naturalAligment;
    if (((skillSetting->klass->_1).naturalAligment < bVar1) ||
       ((skillSetting->klass->_1).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
       )) {
      FUN_?(skillSetting);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (this->fields).skillPercentageSetting = (AttributeSettingFloat *)skillSetting;
    bVar1 = (
            TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
            ->_1).naturalAligment;
    if (((skillSetting->klass->_1).naturalAligment < bVar1) ||
       ((skillSetting->klass->_1).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingFloat
       )) {
      FUN_?(skillSetting);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)&(this->fields).skillPercentageSetting >> 0xc);
    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar7);
  }
  pAVar8 = (this->fields).skillPercentageSetting;
  if (pAVar8 != (AttributeSettingFloat *)0x0) {
    fVar9 = (float)FUN_?(pAVar8,
                                  MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>__get_NumericValue__
                                 );
    (this->fields).settingValue = fVar9;
    SkillSettingBase::SkillSettingBase_Initialize
              ((SkillSettingBase *)this,skill,skillDataManager,skillCost,spawnRoleCost,
               CONCAT31((int3)((uint)in_stack_10 >> 8),(undefined1)spawnRoleTier),
               skillSetting,removeSkillCallback,updateSkillCallback,cantUpdateSkillCallback,
               cantRemoveSkillCallback,(MethodInfo *)0x0);
    pAVar8 = (this->fields).skillPercentageSetting;
    if ((((pAVar8 != (AttributeSettingFloat *)0x0) &&
         (pKVar11 = (pAVar8->fields)._.KogamaSettingNumeric,
         pKVar11 != (KogamaSettingNumeric_1_System_Single_ *)0x0)) &&
        (pRVar12 = (pKVar11->fields).RangeValidator, pRVar12 != (RangeValidator_1_System_Single_ *)0x0)
        ) && (pSVar13 = (this->fields).slider, pSVar13 != (Slider *)0x0)) {
      UnityEngine.UI.dll::UnityEngine::UI::Slider::Slider_set_minValue
                (pSVar13,(pRVar12->fields).min,(MethodInfo *)0x0);
      pAVar8 = (this->fields).skillPercentageSetting;
      if (((pAVar8 != (AttributeSettingFloat *)0x0) &&
          (pKVar11 = (pAVar8->fields)._.KogamaSettingNumeric,
          pKVar11 != (KogamaSettingNumeric_1_System_Single_ *)0x0)) &&
         ((pRVar12 = (pKVar11->fields).RangeValidator,
          pRVar12 != (RangeValidator_1_System_Single_ *)0x0 &&
          (pSVar13 = (this->fields).slider, pSVar13 != (Slider *)0x0)))) {
        UnityEngine.UI.dll::UnityEngine::UI::Slider::Slider_set_maxValue
                  (pSVar13,(pRVar12->fields).max,(MethodInfo *)0x0);
        pSVar13 = (this->fields).slider;
        if (pSVar13 != (Slider *)0x0) {
          (*(pSVar13->klass->vtable).set_value.methodPtr)
                    (pSVar13,(this->fields).settingValue,(pSVar13->klass->vtable).set_value.method);
          SkillSettingInt::SkillSettingInt_UpdateTextInputFieldWithSliderValue
                    ((SkillSettingInt *)this,(MethodInfo *)0x0);
          (this->fields).isInitialized = 1;
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SliderValueChanged() */

void Assembly-CSharp.dll::SkillSettingFloat::SkillSettingFloat_SliderValueChanged
               (SkillSettingFloat *this,MethodInfo *method)

{
  pSVar1 = (this->fields).slider;
  if (pSVar1 != (Slider *)0x0) {
    (*(pSVar1->klass->vtable).get_value.methodPtr)(pSVar1);
    uVar2 = func_?();
    (*(pSVar1->klass->vtable).set_value.methodPtr)
              (pSVar1,uVar2,(pSVar1->klass->vtable).set_value.method);
    SkillSettingInt::SkillSettingInt_UpdateTextInputFieldWithSliderValue
              ((SkillSettingInt *)this,(MethodInfo *)0x0);
    pSVar1 = (this->fields).slider;
    if (pSVar1 != (Slider *)0x0) {
      auStackX_8[0] =
           (*(pSVar1->klass->vtable).get_value.methodPtr)
                     (pSVar1,(pSVar1->klass->vtable).get_value.method);
      uVar3 = FUN_?(uRam_?,auStackX_8);
      UNRECOVERED_JUMPTABLE = (this->klass->vtable).UpdateSkillData.methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)
                (this,uVar3,(this->klass->vtable).UpdateSkillData.method,UNRECOVERED_JUMPTABLE);
      return;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UpdateSkillData(Object) */

void Assembly-CSharp.dll::SkillSettingFloat::SkillSettingFloat_UpdateSkillData
               (SkillSettingFloat *this,Object *newValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
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
                  MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>__set_NumericValue_float_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).isInitialized == 0) {
    return;
  }
  SkillSettingBase::SkillSettingBase_UpdateSkillData
            ((SkillSettingBase *)this,newValue,(MethodInfo *)0x0);
  pAVar1 = (this->fields).skillPercentageSetting;
  if (pAVar1 != (AttributeSettingFloat *)0x0) {
    uVar2 = FUN_?(pAVar1,
                           MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>__get_NumericValue__
                          );
    pAVar1 = (this->fields).skillPercentageSetting;
    if ((pAVar1 != (AttributeSettingFloat *)0x0) && (newValue != (Object *)0x0)) {
      if ((newValue->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
        FUN_?(newValue);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pKVar4 = (pAVar1->fields)._.KogamaSettingNumeric;
      if (pKVar4 != (KogamaSettingNumeric_1_System_Single_ *)0x0) {
        FUN_?(pKVar4,*(undefined4 *)&newValue[1].klass,
                      MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>__set_NumericValue_float_
                      ->klass->rgctx_data[4].rgctxDataDummy);
        pIVar5 = 
        TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
        ;
        pKVar6 = (this->fields)._.skillSetting;
        if (pKVar6 != (KogamaSettingValueWrapperBase *)0x0) {
          lVar7 = FUN_?(pKVar6,
                                 TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                                );
          pIVar8 = 
          TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
          ;
          if (lVar7 == 0) {
            FUN_?(pKVar6,pIVar5);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          lVar7 = FUN_?(pKVar6,
                                 TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                                );
          if (lVar7 == 0) {
            FUN_?(pKVar6,pIVar8);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar9 = FUN_?(0,
                                 TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                                 ,lVar7);
          if (((this->fields)._.spawnRoleTier == 0) &&
             (100 < ((this->fields)._.spawnRoleCost - (this->fields)._.currentSkillCost) + iVar9))
          {
            pAVar1 = (this->fields).skillPercentageSetting;
            if ((pAVar1 != (AttributeSettingFloat *)0x0) &&
               (pKVar4 = (pAVar1->fields)._.KogamaSettingNumeric,
               pKVar4 != (KogamaSettingNumeric_1_System_Single_ *)0x0)) {
              FUN_?(pKVar4,uVar2,
                            MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>__set_NumericValue_float_
                            ->klass->rgctx_data[4].rgctxDataDummy);
              pSVar10 = (this->fields).slider;
              if (pSVar10 != (Slider *)0x0) {
                (*(pSVar10->klass->vtable).set_value.methodPtr)
                          (pSVar10,uVar2,(pSVar10->klass->vtable).set_value.method);
                SkillSettingInt::SkillSettingInt_UpdateTextInputFieldWithSliderValue
                          ((SkillSettingInt *)this,(MethodInfo *)0x0);
                pUVar11 = (this->fields)._.cantUpdateSkillCallback;
                if (pUVar11 != (UnityAction *)0x0) {
                  (*(pUVar11->fields)._._.invoke_impl)
                            ((pUVar11->fields)._._.method_code,(pUVar11->fields)._._.method);
                  return;
                }
              }
            }
          }
          else {
            pUVar12 = (this->fields)._.updateSkillCallback;
            if (pUVar12 != (UnityAction_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_
                           *)0x0) {
              (*(pUVar12->fields)._._.invoke_impl)
                        ((pUVar12->fields)._._.method_code,(this->fields).skillPercentageSetting,
                         (pUVar12->fields)._._.method);
              SkillSettingBase::SkillSettingBase_UpdateSkillCost
                        ((SkillSettingBase *)this,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

