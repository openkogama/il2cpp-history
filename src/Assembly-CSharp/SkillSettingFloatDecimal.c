
/* Void Initialize(String, SpawnRolesSkillDataManager, Int32, Int32, GamePassTier,
   KogamaSettingValueWrapperBase,
   UnityAction`1[MV.WorldObject.KogamaSettings.KogamaSettingsCore.KogamaSettingTypes.KogamaSettingValueWrapperBase],
   UnityAction`1[MV.WorldObject.KogamaSettings.KogamaSettingsCore.KogamaSettingTypes.KogamaSettingValueWrapperBase],
   UnityAction, UnityAction) */

void Assembly-CSharp.dll::SkillSettingFloatDecimal::SkillSettingFloatDecimal_Initialize
               (SkillSettingFloatDecimal *this,String *skill,
               SpawnRolesSkillDataManager *skillDataManager,int32_t skillCost,int32_t spawnRoleCost,
               GamePassTier__Enum spawnRoleTier,KogamaSettingValueWrapperBase *skillSetting,
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
          SkillSettingFloatDecimal_UpdateTextInputFieldWithSliderValue(this,(MethodInfo *)0x0);
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


/* Void InitializeInfoButton(String, Int32, SpawnRolesSkillDataManager) */

void Assembly-CSharp.dll::SkillSettingFloatDecimal::SkillSettingFloatDecimal_InitializeInfoButton
               (SkillSettingFloatDecimal *this,String *skill,int32_t skillCost,
               SpawnRolesSkillDataManager *skillDataManager,MethodInfo *method)

{
  afStackX_18[0] = (this->fields).settingValue;
  this_00 = (this->fields)._.infoButton;
  skillValue = (Object *)FUN_?(uRam_?,afStackX_18);
  if (this_00 != (SpawnRoleSkillInfoButton *)0x0) {
    SpawnRoleSkillInfoButton::SpawnRoleSkillInfoButton_Initialize
              (this_00,skill,skillValue,skillCost,skillDataManager,(MethodInfo *)0x0);
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void InputFieldChange() */

void Assembly-CSharp.dll::SkillSettingFloatDecimal::SkillSettingFloatDecimal_InputFieldChange
               (SkillSettingFloatDecimal *this,MethodInfo *method)

{
  fVar1 = (float)FUN_?(this,_UNK_?);
  pSVar2 = (this->fields).slider;
  if (pSVar2 != (Slider *)0x0) {
    auVar3._0_8_ = (*(pSVar2->klass->vtable).get_value.methodPtr)(pSVar2);
    auVar3._8_8_ = extraout_XMM0_Qb;
    auVar4._4_12_ = auVar3._4_12_;
    auVar4._0_4_ = (float)auVar3._0_8_ * fVar1;
    fVar5 = (float)func_?(auVar4._0_8_);
    (*(pSVar2->klass->vtable).set_value.methodPtr)
              (pSVar2,fVar5 / fVar1,(pSVar2->klass->vtable).set_value.method);
    pIVar6 = (this->fields).inputField;
    afStackX_8[0] = 0.0;
    if (pIVar6 != (InputField *)0x0) {
      pSVar7 = (pIVar6->fields).m_Text;
      if (pSVar7 != (String *)0x0) {
        if (cRam_? == '\0') {
          FUN_?();
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        aRStack_8[0]._pointer._value = &(pSVar7->fields)._firstChar;
        aRStack_8[0]._12_4_ = 0;
        aRStack_8[0]._length = (pSVar7->fields)._stringLength;
        info = mscorlib.dll::System::Globalization::NumberFormatInfo::
               NumberFormatInfo_get_CurrentInfo((MethodInfo *)0x0);
        mscorlib.dll::System::Single::Single_TryParse_2
                  (aRStack_8,
                   NumberStyles__Enum_AllowExponent|NumberStyles__Enum_AllowThousands|
                   NumberStyles__Enum_AllowDecimalPoint|NumberStyles__Enum_Integer,info,afStackX_8,
                   (MethodInfo *)0x0);
      }
      pSVar2 = (this->fields).slider;
      if (pSVar2 != (Slider *)0x0) {
        (*(pSVar2->klass->vtable).set_value.methodPtr)
                  (pSVar2,afStackX_8[0],(pSVar2->klass->vtable).set_value.method);
        SkillSettingFloatDecimal_UpdateTextInputFieldWithSliderValue(this,(MethodInfo *)0x0);
        pSVar2 = (this->fields).slider;
        if (pSVar2 != (Slider *)0x0) {
          afStackX_8[0] =
               (float)(*(pSVar2->klass->vtable).get_value.methodPtr)
                                (pSVar2,(pSVar2->klass->vtable).get_value.method);
          uVar9 = FUN_?(uRam_?,afStackX_8);
          UNRECOVERED_JUMPTABLE = (this->klass->vtable).UpdateSkillData.methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)
                    (this,uVar9,(this->klass->vtable).UpdateSkillData.method,UNRECOVERED_JUMPTABLE);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void SliderValueChanged() */

void Assembly-CSharp.dll::SkillSettingFloatDecimal::SkillSettingFloatDecimal_SliderValueChanged
               (SkillSettingFloatDecimal *this,MethodInfo *method)

{
  fVar1 = (float)FUN_?(this,_UNK_?);
  pSVar2 = (this->fields).slider;
  if (pSVar2 != (Slider *)0x0) {
    auVar3._0_8_ = (*(pSVar2->klass->vtable).get_value.methodPtr)(pSVar2);
    auVar3._8_8_ = extraout_XMM0_Qb;
    auVar4._4_12_ = auVar3._4_12_;
    auVar4._0_4_ = (float)auVar3._0_8_ * fVar1;
    fVar5 = (float)func_?(auVar4._0_8_);
    (*(pSVar2->klass->vtable).set_value.methodPtr)
              (pSVar2,fVar5 / fVar1,(pSVar2->klass->vtable).set_value.method);
    SkillSettingFloatDecimal_UpdateTextInputFieldWithSliderValue(this,(MethodInfo *)0x0);
    pSVar2 = (this->fields).slider;
    if (pSVar2 != (Slider *)0x0) {
      auStackX_8[0] =
           (*(pSVar2->klass->vtable).get_value.methodPtr)
                     (pSVar2,(pSVar2->klass->vtable).get_value.method);
      uVar6 = FUN_?(uRam_?,auStackX_8);
      UNRECOVERED_JUMPTABLE = (this->klass->vtable).UpdateSkillData.methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)
                (this,uVar6,(this->klass->vtable).UpdateSkillData.method,UNRECOVERED_JUMPTABLE);
      return;
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void UpdateSkillData(Object) */

void Assembly-CSharp.dll::SkillSettingFloatDecimal::SkillSettingFloatDecimal_UpdateSkillData
               (SkillSettingFloatDecimal *this,Object *newValue,MethodInfo *method)

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
    auVar3._0_8_ = FUN_?();
    auVar3._8_8_ = extraout_XMM0_Qb;
    if (newValue != (Object *)0x0) {
      if ((newValue->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
        FUN_?(newValue);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pAVar1 = (this->fields).skillPercentageSetting;
      if ((pAVar1 != (AttributeSettingFloat *)0x0) &&
         (pKVar5 = (pAVar1->fields)._.KogamaSettingNumeric,
         pKVar5 != (KogamaSettingNumeric_1_System_Single_ *)0x0)) {
        auVar6._4_12_ = auVar3._4_12_;
        auVar6._0_4_ = (float)auVar3._0_8_ * *(float *)&newValue[1].klass;
        pIVar7 = MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>__set_NumericValue_float_
                 ->klass->rgctx_data;
        fVar8 = (float)func_?(auVar6._0_8_);
        FUN_?(pKVar5,fVar8 / (float)auVar3._0_8_,pIVar7[4].rgctxDataDummy);
        pIVar9 = 
        TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
        ;
        pKVar10 = (this->fields)._.skillSetting;
        if (pKVar10 != (KogamaSettingValueWrapperBase *)0x0) {
          lVar11 = FUN_?(pKVar10,
                                 TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                                );
          pIVar12 = 
          TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
          ;
          if (lVar11 == 0) {
            FUN_?(pKVar10,pIVar9);
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          lVar11 = FUN_?(pKVar10,
                                 TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                                );
          if (lVar11 == 0) {
            FUN_?(pKVar10,pIVar12);
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar13 = FUN_?(0,
                                 TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                                 ,lVar11);
          if (((this->fields)._.spawnRoleTier == 0) &&
             (100 < ((this->fields)._.spawnRoleCost - (this->fields)._.currentSkillCost) + iVar13))
          {
            pAVar1 = (this->fields).skillPercentageSetting;
            if ((pAVar1 != (AttributeSettingFloat *)0x0) &&
               (pKVar5 = (pAVar1->fields)._.KogamaSettingNumeric,
               pKVar5 != (KogamaSettingNumeric_1_System_Single_ *)0x0)) {
              FUN_?(pKVar5,uVar2,
                            MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>__set_NumericValue_float_
                            ->klass->rgctx_data[4].rgctxDataDummy);
              pSVar14 = (this->fields).slider;
              if (pSVar14 != (Slider *)0x0) {
                (*(pSVar14->klass->vtable).set_value.methodPtr)
                          (pSVar14,uVar2,(pSVar14->klass->vtable).set_value.method);
                SkillSettingFloatDecimal_UpdateTextInputFieldWithSliderValue(this,(MethodInfo *)0x0)
                ;
                pUVar15 = (this->fields)._.cantUpdateSkillCallback;
                if (pUVar15 != (UnityAction *)0x0) {
                  (*(pUVar15->fields)._._.invoke_impl)
                            ((pUVar15->fields)._._.method_code,(pUVar15->fields)._._.method);
                  return;
                }
              }
            }
          }
          else {
            pUVar16 = (this->fields)._.updateSkillCallback;
            if (pUVar16 != (UnityAction_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_
                           *)0x0) {
              (*(pUVar16->fields)._._.invoke_impl)
                        ((pUVar16->fields)._._.method_code,(this->fields).skillPercentageSetting,
                         (pUVar16->fields)._._.method);
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
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UpdateTextInputFieldWithSliderValue() */

void Assembly-CSharp.dll::SkillSettingFloatDecimal::
     SkillSettingFloatDecimal_UpdateTextInputFieldWithSliderValue
               (SkillSettingFloatDecimal *this,MethodInfo *method)

{
  this_00 = (this->fields).inputField;
  pSVar1 = (this->fields).slider;
  if (pSVar1 == (Slider *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  value = (float)(*(pSVar1->klass->vtable).get_value.methodPtr)();
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  info = mscorlib.dll::System::Globalization::NumberFormatInfo::NumberFormatInfo_get_CurrentInfo
                   ((MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar3 = mscorlib.dll::System::Number::Number_FormatSingle
                     (value,(String *)0x0,info,(MethodInfo *)0x0);
  if (this_00 == (InputField *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__UnityEngine__UI__InputField__Validate_System__String__int__wchar_t_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Math);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__UI__InputField__OnValidateInput);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_u000A);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_u0009);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar4 = (this_00->fields).m_Text;
  if (pSVar4 == pSVar3) {
    return;
  }
  if (pSVar4 == (String *)0x0) {
code_?:
    if (pSVar3 == (String *)0x0) {
code_?:
      pSVar3 = ::StringLiteral__;
      if (::StringLiteral__ == (String *)0x0) goto DAT_?;
    }
  }
  else {
    if (pSVar3 == (String *)0x0) goto code_?;
    if ((pSVar4->fields)._stringLength == (pSVar3->fields)._stringLength) {
      bVar5 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                        ((uint8_t *)&(pSVar4->fields)._firstChar,
                         (uint8_t *)&(pSVar3->fields)._firstChar,
                         (longlong)(pSVar4->fields)._stringLength * 2,(MethodInfo *)0x0);
      if (bVar5 != 0) {
        return;
      }
      goto code_?;
    }
  }
  pSVar3 = mscorlib.dll::System::String::String_Replace_1
                     (pSVar3,::StringLiteral__,
                      (String *)**(undefined8 **)(lRam_? + 0xb8),(MethodInfo *)0x0);
  if ((this_00->fields).m_LineType == 0) {
    if ((pSVar3 == (String *)0x0) ||
       (pSVar3 = mscorlib.dll::System::String::String_Replace_1
                           (pSVar3,StringLiteral_u000A,::StringLiteral__,(MethodInfo *)0x0),
       pSVar3 == (String *)0x0)) goto DAT_?;
    pSVar3 = mscorlib.dll::System::String::String_Replace_1
                       (pSVar3,StringLiteral_u0009,::StringLiteral__,(MethodInfo *)0x0);
  }
  if (((this_00->fields).m_OnValidateInput == (InputField_OnValidateInput *)0x0) &&
     ((this_00->fields).m_CharacterValidation == 0)) {
    if (0 < (this_00->fields).m_CharacterLimit) {
      if (pSVar3 == (String *)0x0) goto DAT_?;
      iVar6 = (this_00->fields).m_CharacterLimit;
      if (iVar6 < (pSVar3->fields)._stringLength) {
        pSVar3 = mscorlib.dll::System::String::String_Substring_1(pSVar3,0,iVar6,(MethodInfo *)0x0)
        ;
      }
    }
    (this_00->fields).m_Text = pSVar3;
    func_?(&(this_00->fields).m_Text);
  }
  else {
    bVar7 = iRam_? != 0;
    (this_00->fields).m_Text = ::StringLiteral__;
    if (bVar7) {
      uVar8 = (uint)((ulonglong)&(this_00->fields).m_Text >> 0xc);
      lVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
      do {
        uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
        puVar11 = (ulonglong *)(lVar9 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    pIVar12 = (this_00->fields).m_OnValidateInput;
    if (pIVar12 == (InputField_OnValidateInput *)0x0) {
      pIVar12 = (InputField_OnValidateInput *)
                FUN_?(TypeInfo__UnityEngine__UI__InputField__OnValidateInput);
      pMVar13 = MethodInfo__UnityEngine__UI__InputField__Validate_System__String__int__wchar_t_;
      bVar7 = iRam_? != 0;
      (pIVar12->fields)._._.method_ptr =
           MethodInfo__UnityEngine__UI__InputField__Validate_System__String__int__wchar_t_->
           virtualMethodPointer;
      (pIVar12->fields)._._.method = pMVar13;
      (pIVar12->fields)._._.m_target = (Object *)this_00;
      if (bVar7) {
        uVar8 = (uint)((ulonglong)&(pIVar12->fields)._._.m_target >> 0xc);
        lVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
        do {
          uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
          puVar11 = (ulonglong *)(lVar9 + 0xADDR);
          LOCK();
          bVar7 = uVar10 == *puVar11;
          if (bVar7) {
            *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
          }
          UNLOCK();
        } while (!bVar7);
      }
      uVar14 = pMVar13->parameters_count;
      (pIVar12->fields)._._.method_code = pIVar12;
      if ((pMVar13->flags & 0x10) == 0) {
        if (uVar14 != 2) goto code_?;
        pcVar2 = FUN_?;
      }
      else if (uVar14 == 3) {
        pcVar2 = FUN_?;
      }
      else {
code_?:
        (pIVar12->fields)._._.method_code = (pIVar12->fields)._._.m_target;
        pcVar2 = (pIVar12->fields)._._.method_ptr;
      }
      (pIVar12->fields)._._.invoke_impl = pcVar2;
      (pIVar12->fields)._._.extra_arg = FUN_?;
    }
    if (pSVar3 == (String *)0x0) goto DAT_?;
    iVar15 = (pSVar3->fields)._stringLength;
    (this_00->fields).m_CaretSelectPosition = iVar15;
    (this_00->fields).m_CaretPosition = iVar15;
    if ((this_00->fields).m_CharacterLimit < 1) {
      iVar6 = (pSVar3->fields)._stringLength;
    }
    else {
      iVar6 = (this_00->fields).m_CharacterLimit;
      iVar16 = (pSVar3->fields)._stringLength;
      if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (iVar16 < iVar6) {
        iVar6 = iVar16;
      }
    }
    uVar8 = 0;
    if (0 < iVar6) {
      puVar17 = &(pSVar3->fields)._firstChar;
      lVar9 = 0;
      do {
        pSVar4 = (this_00->fields).m_Text;
        if (pSVar4 == (String *)0x0) goto DAT_?;
        if ((longlong)(pSVar3->fields)._stringLength <= (longlong)(ulonglong)uVar8) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowIndexOutOfRangeException
                    ((MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (pIVar12 == (InputField_OnValidateInput *)0x0) goto DAT_?;
        c = (*(pIVar12->fields)._._.invoke_impl)
                      ((pIVar12->fields)._._.method_code,(this_00->fields).m_Text,
                       (pSVar4->fields)._stringLength,*puVar17,(pIVar12->fields)._._.method);
        if (c != 0) {
          pSVar4 = (this_00->fields).m_Text;
          if ((*(int *)(lRam_? + 0xe4) == 0) &&
             (FUN_?(), *(int *)(lRam_? + 0xe4) == 0)) {
            FUN_?();
          }
          str1 = mscorlib.dll::System::Char::Char_ToString_2(c,(MethodInfo *)0x0);
          pSVar4 = mscorlib.dll::System::String::String_Concat_4(pSVar4,str1,(MethodInfo *)0x0);
          (this_00->fields).m_Text = pSVar4;
          func_?(&(this_00->fields).m_Text);
        }
        uVar8 = uVar8 + 1;
        lVar9 = lVar9 + 1;
        puVar17 = puVar17 + 1;
      } while (lVar9 < iVar6);
    }
  }
  if ((this_00->fields).m_Keyboard != (TouchScreenKeyboard *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::TouchScreenKeyboard::TouchScreenKeyboard_set_text
              ((this_00->fields).m_Keyboard,(this_00->fields).m_Text,(MethodInfo *)0x0);
  }
  pSVar3 = (this_00->fields).m_Text;
  if (pSVar3 == (String *)0x0) {
DAT_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar6 = (pSVar3->fields)._stringLength;
  if (iVar6 < (this_00->fields).m_CaretPosition) {
    (this_00->fields).m_CaretPosition = iVar6;
  }
  else if ((this_00->fields).m_CaretSelectPosition <= iVar6) goto code_?;
  (this_00->fields).m_CaretSelectPosition = iVar6;
code_?:
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__UnityEngine__Events__UnityEvent<System::String>__Invoke_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_InputField_value);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  UnityEngine.UIModule.dll::UnityEngine::UISystemProfilerApi::UISystemProfilerApi_AddMarker
            (StringLiteral_InputField_value,(Object_1 *)this_00,(MethodInfo *)0x0);
  if ((this_00->fields).m_OnValueChanged != (InputField_OnChangeEvent *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent`1[System::Object]::
    UnityEvent_1_System_Object__Invoke
              ((UnityEvent_1_System_Object_ *)(this_00->fields).m_OnValueChanged,
               (Object *)(this_00->fields).m_Text,
               MethodInfo__UnityEngine__Events__UnityEvent<System::String>__Invoke_System__String_);
  }
  UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_UpdateLabel(this_00,(MethodInfo *)0x0)
  ;
  return;
}


/* SkillSettingFloatDecimal() */

void Assembly-CSharp.dll::SkillSettingFloatDecimal::SkillSettingFloatDecimal__ctor
               (SkillSettingFloatDecimal *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields).decimalPlaces = 2;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar2 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar3 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  lVar4 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
  ppMVar5 = ppMVar3;
  if (lVar4 == lRam_?) {
    iRam_? = iRam_? + 1;
    lVar4 = lRam_?;
  }
  else {
    do {
      uVar6 = (uint)ppMVar5;
      LOCK();
      bVar1 = uVar6 != uRam_?;
      uVar7 = uVar6;
      uVar8 = uVar6 + 1;
      if (bVar1) {
        uVar7 = uRam_?;
        uVar8 = uRam_?;
      }
      uRam_? = uVar8;
      UNLOCK();
    } while ((bVar1) && (ppMVar5 = (MethodInfo **)(ulonglong)uVar7, uVar6 = uVar7, uVar7 != 2)
            );
    while (uVar6 != 0) {
      _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
      uVar6 = uRam_?;
      LOCK();
      uRam_? = 2;
      UNLOCK();
    }
  }
  lRam_? = lVar4;
  puVar9 = &(pOVar2->_1).field_0x1c;
  LOCK();
  bVar1 = *(int *)puVar9 == 1;
  if (bVar1) {
    *(undefined4 *)puVar9 = 1;
  }
  uVar6 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? != 0) {
      iRam_? = iRam_? + -1;
      return;
    }
    lRam_? = 0;
    LOCK();
    uRam_? = 0;
    UNLOCK();
    if (uVar6 != 2) {
      uRam_? = 0;
      lRam_? = 0;
      return;
    }
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
              (0xADDR,1,0);
    return;
  }
  puVar10 = &(pOVar2->_1).cctor_finished_or_no_cctor;
  LOCK();
  bVar1 = *puVar10 == 1;
  if (bVar1) {
    *puVar10 = 1;
  }
  uVar6 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar6 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    uVar6 = GetCurrentThreadId();
    psVar11 = &(pOVar2->_1).cctor_thread;
    LOCK();
    bVar1 = (ulonglong)uVar6 == *psVar11;
    if (bVar1) {
      *psVar11 = (ulonglong)uVar6;
    }
    UNLOCK();
    if (bVar1) {
      return;
    }
    while( true ) {
      puVar9 = &(pOVar2->_1).field_0x1c;
      LOCK();
      bVar1 = *(int *)puVar9 == 1;
      if (bVar1) {
        *(undefined4 *)puVar9 = 1;
      }
      UNLOCK();
      if (bVar1) break;
      LOCK();
      lVar4._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
      lVar4._4_4_ = (pOVar2->_1).cctor_started;
      if (lVar4 == 0) {
        (pOVar2->_1).initializationExceptionGCHandle = 0;
        (pOVar2->_1).cctor_started = 0;
      }
      UNLOCK();
      if (lVar4 != 0) break;
      FUN_?(*puRam_?);
    }
code_?:
    lVar12._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
    lVar12._4_4_ = (pOVar2->_1).cctor_started;
    if (lVar12 == 0) {
      return;
    }
  }
  else {
    uVar6 = GetCurrentThreadId();
    LOCK();
    (pOVar2->_1).cctor_thread = (ulonglong)uVar6;
    UNLOCK();
    LOCK();
    (pOVar2->_1).cctor_finished_or_no_cctor = 1;
    uVar6 = uRam_?;
    UNLOCK();
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar6 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    lStackX_10 = 0;
    if (((pOVar2->_1).field_0x6e & 4) != 0) {
      FUN_?(pOVar2);
      ppMVar5 = ppMVar3;
      pIVar13 = (Il2CppClass *)pOVar2;
code_?:
      do {
        if (ppMVar5 == (MethodInfo **)0x0) {
          FUN_?(pIVar13);
          if (pIVar13->field_count != 0) {
            ppMVar5 = pIVar13->methods;
            pMVar14 = *ppMVar5;
code_?:
            if (pMVar14 != (MethodInfo *)0x0) {
              if ((*pMVar14->name == '.') && ((pMVar14->flags & 0x800) != 0)) {
                ppMVar15 = ppMVar3;
                while (pcVar16 = (char *)((longlong)ppMVar15 + 0xADDR),
                      ppMVar15 = (MethodInfo **)((longlong)ppMVar15 + 1),
                      *pcVar16 == (pMVar14->name + -1)[(longlong)ppMVar15]) {
                  if (ppMVar15 == (MethodInfo **)0x7) {
                    FUN_?(pMVar14,0,0,&lStackX_10);
                    goto code_?;
                  }
                }
              }
              goto code_?;
            }
          }
        }
        else {
          ppMVar5 = ppMVar5 + 1;
          if (ppMVar5 < pIVar13->methods + pIVar13->field_count) {
            pMVar14 = *ppMVar5;
            goto code_?;
          }
        }
        pIVar13 = pIVar13->parent;
        ppMVar5 = ppMVar3;
      } while (pIVar13 != (Il2CppClass *)0x0);
    }
code_?:
    LOCK();
    (pOVar2->_1).cctor_thread = 0;
    uVar17 = _UNK_?;
    uVar18 = _UNK_?;
    UNLOCK();
    if (lStackX_10 == 0) {
      LOCK();
      *(undefined4 *)&(pOVar2->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_19 = 0;
    uStack_20 = _UNK_?;
    uStack_21 = _UNK_?;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar2->_0).byval_arg,0,0);
    pppppppuVar16 = &pppppppuStack_78;
    if (0xf < uStack_21) {
      pppppppuVar16 = pppppppuStack_78;
    }
    FUN_?(apppppppuStack_58,&UNK_?,pppppppuVar16);
    if (uStack_21 < 0x10) {
code_?:
      lVar4 = lStackX_10;
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar16 = apppppppuStack_58;
      if (0xf < uStack_22) {
        pppppppuVar16 = apppppppuStack_58[0];
      }
      uStack_20 = uVar18;
      uStack_21 = uVar17;
      lVar12 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar16);
      if (lVar4 != 0) {
        *(longlong *)(lVar12 + 0x28U) = lVar4;
        if (iRam_? != 0) {
          uVar6 = (uint)(lVar12 + 0x28U >> 0xc);
          puVar23 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar24 = *puVar23;
            LOCK();
            uVar17 = *puVar23;
            if (uVar24 == uVar17) {
              *puVar23 = uVar24 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (uVar24 != uVar17);
        }
      }
      FUN_?(pOVar2,lVar12);
      if (0xf < uStack_22) {
        pppppppuVar16 = apppppppuStack_58[0];
        if ((0xfff < uStack_22 + 1) &&
           (pppppppuVar16 = (undefined8 *******)apppppppuStack_58[0][-1],
           0x1f < (ulonglong)((longlong)apppppppuStack_58[0] + (-8 - (longlong)pppppppuVar16))))
        goto code_?;
        func_?(pppppppuVar16);
      }
      goto code_?;
    }
    pppppppuVar16 = pppppppuStack_78;
    if ((uStack_21 + 1 < 0x1000) ||
       (pppppppuVar16 = (undefined8 *******)pppppppuStack_78[-1],
       (ulonglong)((longlong)pppppppuStack_78 + (-8 - (longlong)pppppppuVar16)) < 0x20)) {
      func_?(pppppppuVar16);
      uVar18 = _UNK_?;
      uVar17 = _UNK_?;
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar18._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
  uVar18._4_4_ = (pOVar2->_1).cctor_started;
  uVar18 = FUN_?(uVar18);
  FUN_?(uVar18,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}

