
/* Void Initialize(String, SpawnRolesSkillDataManager, Int32, Int32, GamePassTier,
   KogamaSettingValueWrapperBase,
   UnityAction`1[MV.WorldObject.KogamaSettings.KogamaSettingsCore.KogamaSettingTypes.KogamaSettingValueWrapperBase],
   UnityAction`1[MV.WorldObject.KogamaSettings.KogamaSettingsCore.KogamaSettingTypes.KogamaSettingValueWrapperBase],
   UnityAction, UnityAction) */

void Assembly-CSharp.dll::SkillSettingInt::SkillSettingInt_Initialize
               (SkillSettingInt *this,String *skill,SpawnRolesSkillDataManager *skillDataManager,
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
                  TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
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
  if (skillSetting == (KogamaSettingValueWrapperBase *)0x0) {
    (this->fields).skillPercentageSetting = (AttributeSettingInt *)0x0;
  }
  else {
    bVar1 = (
            TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
            ->_1).naturalAligment;
    if (((skillSetting->klass->_1).naturalAligment < bVar1) ||
       ((skillSetting->klass->_1).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
       )) {
      FUN_?(skillSetting);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (this->fields).skillPercentageSetting = (AttributeSettingInt *)skillSetting;
    bVar1 = (
            TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
            ->_1).naturalAligment;
    if (((skillSetting->klass->_1).naturalAligment < bVar1) ||
       ((skillSetting->klass->_1).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingInt
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
  if (pAVar8 != (AttributeSettingInt *)0x0) {
    iVar9 = FUN_?(pAVar8,
                          MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__get_NumericValue__
                         );
    (this->fields).settingValue = (float)iVar9;
    SkillSettingBase::SkillSettingBase_Initialize
              ((SkillSettingBase *)this,skill,skillDataManager,skillCost,spawnRoleCost,
               CONCAT31((int3)((uint)in_stack_10 >> 8),(undefined1)spawnRoleTier),
               skillSetting,removeSkillCallback,updateSkillCallback,cantUpdateSkillCallback,
               cantRemoveSkillCallback,(MethodInfo *)0x0);
    pAVar8 = (this->fields).skillPercentageSetting;
    if ((((pAVar8 != (AttributeSettingInt *)0x0) &&
         (pKVar11 = (pAVar8->fields)._.KogamaSettingNumeric,
         pKVar11 != (KogamaSettingNumeric_1_System_Int32_ *)0x0)) &&
        (pRVar12 = (pKVar11->fields).RangeValidator, pRVar12 != (RangeValidator_1_System_Int32_ *)0x0))
       && (pSVar13 = (this->fields).slider, pSVar13 != (Slider *)0x0)) {
      UnityEngine.UI.dll::UnityEngine::UI::Slider::Slider_set_minValue
                (pSVar13,(float)(pRVar12->fields).min,(MethodInfo *)0x0);
      pAVar8 = (this->fields).skillPercentageSetting;
      if (((pAVar8 != (AttributeSettingInt *)0x0) &&
          (pKVar11 = (pAVar8->fields)._.KogamaSettingNumeric,
          pKVar11 != (KogamaSettingNumeric_1_System_Int32_ *)0x0)) &&
         ((pRVar12 = (pKVar11->fields).RangeValidator, pRVar12 != (RangeValidator_1_System_Int32_ *)0x0
          && (pSVar13 = (this->fields).slider, pSVar13 != (Slider *)0x0)))) {
        UnityEngine.UI.dll::UnityEngine::UI::Slider::Slider_set_maxValue
                  (pSVar13,(float)(pRVar12->fields).max,(MethodInfo *)0x0);
        pSVar13 = (this->fields).slider;
        if (pSVar13 != (Slider *)0x0) {
          (*(pSVar13->klass->vtable).set_value.methodPtr)();
          SkillSettingInt_UpdateTextInputFieldWithSliderValue(this,(MethodInfo *)0x0);
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

void Assembly-CSharp.dll::SkillSettingInt::SkillSettingInt_InitializeInfoButton
               (SkillSettingInt *this,String *skill,int32_t skillCost,
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

void Assembly-CSharp.dll::SkillSettingInt::SkillSettingInt_InputFieldChange
               (SkillSettingInt *this,MethodInfo *method)

{
  pIVar1 = (this->fields).inputField;
  afStackX_8[0] = 0.0;
  if (pIVar1 != (InputField *)0x0) {
    pSVar2 = (pIVar1->fields).m_Text;
    if (pSVar2 != (String *)0x0) {
      if (cRam_? == '\0') {
        FUN_?();
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      RStack_3._pointer._value = &(pSVar2->fields)._firstChar;
      RStack_3._12_4_ = 0;
      RStack_3._length = (pSVar2->fields)._stringLength;
      info = mscorlib.dll::System::Globalization::NumberFormatInfo::NumberFormatInfo_get_CurrentInfo
                       ((MethodInfo *)0x0);
      mscorlib.dll::System::Single::Single_TryParse_2
                (&RStack_3,
                 NumberStyles__Enum_AllowExponent|NumberStyles__Enum_AllowThousands|
                 NumberStyles__Enum_AllowDecimalPoint|NumberStyles__Enum_Integer,info,afStackX_8,
                 (MethodInfo *)0x0);
    }
    pSVar4 = (this->fields).slider;
    if (pSVar4 != (Slider *)0x0) {
      (*(pSVar4->klass->vtable).set_value.methodPtr)
                (pSVar4,afStackX_8[0],(pSVar4->klass->vtable).set_value.method);
      SkillSettingInt_UpdateTextInputFieldWithSliderValue(this,(MethodInfo *)0x0);
      pSVar4 = (this->fields).slider;
      if (pSVar4 != (Slider *)0x0) {
        afStackX_8[0] =
             (float)(*(pSVar4->klass->vtable).get_value.methodPtr)
                              (pSVar4,(pSVar4->klass->vtable).get_value.method);
        uVar5 = FUN_?(uRam_?,afStackX_8);
        UNRECOVERED_JUMPTABLE = (this->klass->vtable).UpdateSkillData.methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)
                  (this,uVar5,(this->klass->vtable).UpdateSkillData.method,UNRECOVERED_JUMPTABLE);
        return;
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SliderValueChanged() */

void Assembly-CSharp.dll::SkillSettingInt::SkillSettingInt_SliderValueChanged
               (SkillSettingInt *this,MethodInfo *method)

{
  SkillSettingInt_UpdateTextInputFieldWithSliderValue(this,(MethodInfo *)0x0);
  pSVar1 = (this->fields).slider;
  if (pSVar1 != (Slider *)0x0) {
    auStackX_8[0] =
         (*(pSVar1->klass->vtable).get_value.methodPtr)
                   (pSVar1,(pSVar1->klass->vtable).get_value.method);
    uVar2 = FUN_?(uRam_?,auStackX_8);
    UNRECOVERED_JUMPTABLE = (this->klass->vtable).UpdateSkillData.methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              (this,uVar2,(this->klass->vtable).UpdateSkillData.method,UNRECOVERED_JUMPTABLE);
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void UpdateSkillData(Object) */

void Assembly-CSharp.dll::SkillSettingInt::SkillSettingInt_UpdateSkillData
               (SkillSettingInt *this,Object *newValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__get_NumericValue__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__set_NumericValue_int_
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
  if (pAVar1 != (AttributeSettingInt *)0x0) {
    uVar2 = FUN_?(pAVar1,
                           MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__get_NumericValue__
                          );
    pAVar1 = (this->fields).skillPercentageSetting;
    if (newValue != (Object *)0x0) {
      if ((newValue->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
        FUN_?(newValue,lRam_?);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar4 = FUN_?(*(undefined4 *)&newValue[1].klass);
      if ((pAVar1 != (AttributeSettingInt *)0x0) &&
         (pKVar5 = (pAVar1->fields)._.KogamaSettingNumeric,
         pKVar5 != (KogamaSettingNumeric_1_System_Int32_ *)0x0)) {
        FUN_?(pKVar5,uVar4,
                      MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__set_NumericValue_int_
                      ->klass->rgctx_data[4].rgctxDataDummy);
        pIVar6 = 
        TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
        ;
        pKVar7 = (this->fields)._.skillSetting;
        if (pKVar7 != (KogamaSettingValueWrapperBase *)0x0) {
          lVar8 = FUN_?(pKVar7,
                                 TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                                );
          pIVar9 = 
          TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
          ;
          if (lVar8 == 0) {
            FUN_?(pKVar7,pIVar6);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          lVar8 = FUN_?(pKVar7,
                                 TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                                );
          if (lVar8 == 0) {
            FUN_?(pKVar7,pIVar9);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar10 = FUN_?(0,
                                 TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                                 ,lVar8);
          if (((this->fields)._.spawnRoleTier == 0) &&
             (100 < ((this->fields)._.spawnRoleCost - (this->fields)._.currentSkillCost) + iVar10))
          {
            pAVar1 = (this->fields).skillPercentageSetting;
            if ((pAVar1 != (AttributeSettingInt *)0x0) &&
               (pKVar5 = (pAVar1->fields)._.KogamaSettingNumeric,
               pKVar5 != (KogamaSettingNumeric_1_System_Int32_ *)0x0)) {
              FUN_?(pKVar5,uVar2,
                            MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__set_NumericValue_int_
                            ->klass->rgctx_data[4].rgctxDataDummy);
              pSVar11 = (this->fields).slider;
              if (pSVar11 != (Slider *)0x0) {
                (*(pSVar11->klass->vtable).set_value.methodPtr)();
                SkillSettingInt_UpdateTextInputFieldWithSliderValue(this,(MethodInfo *)0x0);
                pUVar12 = (this->fields)._.cantUpdateSkillCallback;
                if (pUVar12 != (UnityAction *)0x0) {
                  (*(pUVar12->fields)._._.invoke_impl)
                            ((pUVar12->fields)._._.method_code,(pUVar12->fields)._._.method);
                  return;
                }
              }
            }
          }
          else {
            pUVar13 = (this->fields)._.updateSkillCallback;
            if (pUVar13 != (UnityAction_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_
                           *)0x0) {
              (*(pUVar13->fields)._._.invoke_impl)
                        ((pUVar13->fields)._._.method_code,(this->fields).skillPercentageSetting,
                         (pUVar13->fields)._._.method);
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


/* Void UpdateSliderValueWithInputFieldText() */

void Assembly-CSharp.dll::SkillSettingInt::SkillSettingInt_UpdateSliderValueWithInputFieldText
               (SkillSettingInt *this,MethodInfo *method)

{
  pIVar1 = (this->fields).inputField;
  afStackX_8[0] = 0.0;
  if (pIVar1 != (InputField *)0x0) {
    pSVar2 = (pIVar1->fields).m_Text;
    if (pSVar2 != (String *)0x0) {
      if (cRam_? == '\0') {
        FUN_?();
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      RStack_3._pointer._value = &(pSVar2->fields)._firstChar;
      RStack_3._12_4_ = 0;
      RStack_3._length = (pSVar2->fields)._stringLength;
      info = mscorlib.dll::System::Globalization::NumberFormatInfo::NumberFormatInfo_get_CurrentInfo
                       ((MethodInfo *)0x0);
      mscorlib.dll::System::Single::Single_TryParse_2
                (&RStack_3,
                 NumberStyles__Enum_AllowExponent|NumberStyles__Enum_AllowThousands|
                 NumberStyles__Enum_AllowDecimalPoint|NumberStyles__Enum_Integer,info,afStackX_8,
                 (MethodInfo *)0x0);
    }
    pSVar4 = (this->fields).slider;
    this = (SkillSettingInt *)0x0;
    if (pSVar4 != (Slider *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pSVar4->klass->vtable).set_value.methodPtr)
                (pSVar4,afStackX_8[0],(pSVar4->klass->vtable).set_value.method);
      return;
    }
  }
  FUN_?(this,afStackX_8[0]);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void UpdateTextInputFieldWithSliderValue() */

void Assembly-CSharp.dll::SkillSettingInt::SkillSettingInt_UpdateTextInputFieldWithSliderValue
               (SkillSettingInt *this,MethodInfo *method)

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
  (*(pSVar1->klass->vtable).get_value.methodPtr)(pSVar1,(pSVar1->klass->vtable).get_value.method);
  iVar3 = FUN_?();
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Number);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->field_0x135 &
      1) == 0) {
    FUN_?();
  }
  if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar4 = mscorlib.dll::System::Number::Number_FormatInt32
                     (iVar3,(ReadOnlySpan_1_Char_ *)&stack0xffffffffffffffd8,(IFormatProvider *)0x0,
                      (MethodInfo *)0x0);
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
  pSVar5 = (this_00->fields).m_Text;
  if (pSVar5 == pSVar4) {
    return;
  }
  if (pSVar5 == (String *)0x0) {
code_?:
    if (pSVar4 == (String *)0x0) {
code_?:
      pSVar4 = ::StringLiteral__;
      if (::StringLiteral__ == (String *)0x0) goto DAT_?;
    }
  }
  else {
    if (pSVar4 == (String *)0x0) goto code_?;
    if ((pSVar5->fields)._stringLength == (pSVar4->fields)._stringLength) {
      bVar6 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                        ((uint8_t *)&(pSVar5->fields)._firstChar,
                         (uint8_t *)&(pSVar4->fields)._firstChar,
                         (longlong)(pSVar5->fields)._stringLength * 2,(MethodInfo *)0x0);
      if (bVar6 != 0) {
        return;
      }
      goto code_?;
    }
  }
  pSVar4 = mscorlib.dll::System::String::String_Replace_1
                     (pSVar4,::StringLiteral__,
                      (String *)**(undefined8 **)(lRam_? + 0xb8),(MethodInfo *)0x0);
  if ((this_00->fields).m_LineType == 0) {
    if ((pSVar4 == (String *)0x0) ||
       (pSVar4 = mscorlib.dll::System::String::String_Replace_1
                           (pSVar4,StringLiteral_u000A,::StringLiteral__,(MethodInfo *)0x0),
       pSVar4 == (String *)0x0)) goto DAT_?;
    pSVar4 = mscorlib.dll::System::String::String_Replace_1
                       (pSVar4,StringLiteral_u0009,::StringLiteral__,(MethodInfo *)0x0);
  }
  if (((this_00->fields).m_OnValidateInput == (InputField_OnValidateInput *)0x0) &&
     ((this_00->fields).m_CharacterValidation == 0)) {
    if (0 < (this_00->fields).m_CharacterLimit) {
      if (pSVar4 == (String *)0x0) goto DAT_?;
      iVar7 = (this_00->fields).m_CharacterLimit;
      if (iVar7 < (pSVar4->fields)._stringLength) {
        pSVar4 = mscorlib.dll::System::String::String_Substring_1(pSVar4,0,iVar7,(MethodInfo *)0x0)
        ;
      }
    }
    (this_00->fields).m_Text = pSVar4;
    func_?(&(this_00->fields).m_Text);
  }
  else {
    bVar8 = iRam_? != 0;
    (this_00->fields).m_Text = ::StringLiteral__;
    if (bVar8) {
      uVar9 = (uint)((ulonglong)&(this_00->fields).m_Text >> 0xc);
      lVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6) * 8;
      do {
        uVar11 = *(ulonglong *)(lVar10 + 0xADDR);
        puVar12 = (ulonglong *)(lVar10 + 0xADDR);
        LOCK();
        bVar8 = uVar11 == *puVar12;
        if (bVar8) {
          *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
        }
        UNLOCK();
      } while (!bVar8);
    }
    pIVar13 = (this_00->fields).m_OnValidateInput;
    if (pIVar13 == (InputField_OnValidateInput *)0x0) {
      pIVar13 = (InputField_OnValidateInput *)
                FUN_?(TypeInfo__UnityEngine__UI__InputField__OnValidateInput);
      pMVar14 = MethodInfo__UnityEngine__UI__InputField__Validate_System__String__int__wchar_t_;
      bVar8 = iRam_? != 0;
      (pIVar13->fields)._._.method_ptr =
           MethodInfo__UnityEngine__UI__InputField__Validate_System__String__int__wchar_t_->
           virtualMethodPointer;
      (pIVar13->fields)._._.method = pMVar14;
      (pIVar13->fields)._._.m_target = (Object *)this_00;
      if (bVar8) {
        uVar9 = (uint)((ulonglong)&(pIVar13->fields)._._.m_target >> 0xc);
        lVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6) * 8;
        do {
          uVar11 = *(ulonglong *)(lVar10 + 0xADDR);
          puVar12 = (ulonglong *)(lVar10 + 0xADDR);
          LOCK();
          bVar8 = uVar11 == *puVar12;
          if (bVar8) {
            *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
          }
          UNLOCK();
        } while (!bVar8);
      }
      uVar15 = pMVar14->parameters_count;
      (pIVar13->fields)._._.method_code = pIVar13;
      if ((pMVar14->flags & 0x10) == 0) {
        if (uVar15 != 2) goto code_?;
        pcVar2 = FUN_?;
      }
      else if (uVar15 == 3) {
        pcVar2 = FUN_?;
      }
      else {
code_?:
        (pIVar13->fields)._._.method_code = (pIVar13->fields)._._.m_target;
        pcVar2 = (pIVar13->fields)._._.method_ptr;
      }
      (pIVar13->fields)._._.invoke_impl = pcVar2;
      (pIVar13->fields)._._.extra_arg = FUN_?;
    }
    if (pSVar4 == (String *)0x0) goto DAT_?;
    iVar3 = (pSVar4->fields)._stringLength;
    (this_00->fields).m_CaretSelectPosition = iVar3;
    (this_00->fields).m_CaretPosition = iVar3;
    if ((this_00->fields).m_CharacterLimit < 1) {
      iVar7 = (pSVar4->fields)._stringLength;
    }
    else {
      iVar7 = (this_00->fields).m_CharacterLimit;
      iVar16 = (pSVar4->fields)._stringLength;
      if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (iVar16 < iVar7) {
        iVar7 = iVar16;
      }
    }
    uVar9 = 0;
    if (0 < iVar7) {
      puVar17 = &(pSVar4->fields)._firstChar;
      lVar10 = 0;
      do {
        pSVar5 = (this_00->fields).m_Text;
        if (pSVar5 == (String *)0x0) goto DAT_?;
        if ((longlong)(pSVar4->fields)._stringLength <= (longlong)(ulonglong)uVar9) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowIndexOutOfRangeException
                    ((MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (pIVar13 == (InputField_OnValidateInput *)0x0) goto DAT_?;
        c = (*(pIVar13->fields)._._.invoke_impl)
                      ((pIVar13->fields)._._.method_code,(this_00->fields).m_Text,
                       (pSVar5->fields)._stringLength,*puVar17,(pIVar13->fields)._._.method);
        if (c != 0) {
          pSVar5 = (this_00->fields).m_Text;
          if ((*(int *)(lRam_? + 0xe4) == 0) &&
             (FUN_?(), *(int *)(lRam_? + 0xe4) == 0)) {
            FUN_?();
          }
          str1 = mscorlib.dll::System::Char::Char_ToString_2(c,(MethodInfo *)0x0);
          pSVar5 = mscorlib.dll::System::String::String_Concat_4(pSVar5,str1,(MethodInfo *)0x0);
          (this_00->fields).m_Text = pSVar5;
          func_?(&(this_00->fields).m_Text);
        }
        uVar9 = uVar9 + 1;
        lVar10 = lVar10 + 1;
        puVar17 = puVar17 + 1;
      } while (lVar10 < iVar7);
    }
  }
  if ((this_00->fields).m_Keyboard != (TouchScreenKeyboard *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::TouchScreenKeyboard::TouchScreenKeyboard_set_text
              ((this_00->fields).m_Keyboard,(this_00->fields).m_Text,(MethodInfo *)0x0);
  }
  pSVar4 = (this_00->fields).m_Text;
  if (pSVar4 == (String *)0x0) {
DAT_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar7 = (pSVar4->fields)._stringLength;
  if (iVar7 < (this_00->fields).m_CaretPosition) {
    (this_00->fields).m_CaretPosition = iVar7;
  }
  else if ((this_00->fields).m_CaretSelectPosition <= iVar7) goto code_?;
  (this_00->fields).m_CaretSelectPosition = iVar7;
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

