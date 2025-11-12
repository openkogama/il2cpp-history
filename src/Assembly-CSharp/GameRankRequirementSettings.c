
/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::GameRankRequirementSettings::GameRankRequirementSettings_Initialize
               (GameRankRequirementSettings *this,int32_t woID,GameObject *root,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Game_Tier_Requirement);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_RequiredRank);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).settingsBase;
  pSVar1 = TM::TM__(StringLiteral_Game_Tier_Requirement,(MethodInfo *)0x0);
  if (this_00 == (SettingsBase *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pTVar3 = (this_00->fields).headerText;
  (this_00->fields).woID = woID;
  if (pTVar3 == (Text *)0x0) goto code_?;
  (*(pTVar3->klass->vtable).set_text.methodPtr)
            (pTVar3,pSVar1,(pTVar3->klass->vtable).set_text.method);
  uVar4 = 0;
  SettingsBase::SettingsBase_InitializeHierarchy(this_00,woID,root,(MethodInfo *)0x0);
  if (woID == -1) {
    this_05 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
               *)FUN_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::UIR::UIRenderDevice+DisableForceGammaMaterial]::
    Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
              (this_05,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    lVar5 = lRam_?;
    uStackX_8 = (String *)((ulonglong)uStackX_8._4_4_ << 0x20);
    pSVar1 = uStackX_8;
    if (*(int *)(lRam_? + 0x28) < 0) {
      if ((*(longlong *)(lRam_? + 0x60) == 0) ||
         ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
        pSVar1 = (String *)FUN_?(lRam_?);
        FUN_?(&pSVar1->fields,&uStackX_8,(longlong)*(int *)(lVar5 + 0xf8) + -0x10);
        if (iRam_? != 0) {
          uVar6 = (uint)((ulonglong)&pSVar1->fields >> 0xc);
          uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
          do {
            uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
            puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
            LOCK();
            bVar10 = uVar8 == *puVar9;
            if (bVar10) {
              *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (!bVar10);
        }
      }
      else {
        pSVar1 = (String *)0x0;
      }
    }
    if (this_05 ==
        (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
         *)0x0) goto code_?;
    uVar4 = CONCAT71((int7)(uVar4 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this_05,
               (Object *)StringLiteral_RequiredRank,(Object *)pSVar1,(InsertionBehavior__Enum)uVar4
               ,MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                ->klass->rgctx_data[0x22].method);
  }
  else {
    this_04 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (((this_04 == (MVWorldObjectClientManager *)0x0) ||
        (pMVar11 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                             (this_04,woID,(MethodInfo *)0x0), pMVar11 == (MVWorldObjectClient *)0x0
        )) || (this_05 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                          *)(pMVar11->fields)._.data,
              this_05 ==
              (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
               *)0x0)) goto code_?;
  }
  iVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
          UIElements::StyleComplexSelector+PseudoStateData]::
          Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                    ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                      *)this_05,(Object *)StringLiteral_RequiredRank,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                     ->klass->rgctx_data[0x21].method);
  lVar5 = lRam_?;
  if (iVar12 < 0) {
    uStackX_8 = (String *)((ulonglong)uStackX_8 & 0xffffffff00000000);
    pSVar1 = uStackX_8;
    if (*(int *)(lRam_? + 0x28) < 0) {
      if ((*(longlong *)(lRam_? + 0x60) == 0) ||
         ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
        pSVar1 = (String *)FUN_?(lRam_?);
        FUN_?(&pSVar1->fields,&uStackX_8,(longlong)*(int *)(lVar5 + 0xf8) + -0x10);
        if (iRam_? != 0) {
          uVar6 = (uint)((ulonglong)&pSVar1->fields >> 0xc);
          uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
          uVar4 = (ulonglong)(uVar6 & 0x3f);
          do {
            uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
            puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
            LOCK();
            bVar10 = uVar8 == *puVar9;
            if (bVar10) {
              *puVar9 = uVar8 | 1L << uVar4;
            }
            UNLOCK();
          } while (!bVar10);
        }
      }
      else {
        pSVar1 = (String *)0x0;
      }
    }
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this_05,
               (Object *)StringLiteral_RequiredRank,(Object *)pSVar1,
               (InsertionBehavior__Enum)CONCAT71((int7)(uVar4 >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
  }
  pOVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__get_Item
                      ((Dictionary_2_System_Object_System_Object_ *)this_05,
                       (Object *)StringLiteral_RequiredRank,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
  if (pOVar13 == (Object *)0x0) goto code_?;
  if ((pOVar13->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
    FUN_?(pOVar13,lRam_?);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this_01 = (this->fields).slider;
  if (this_01 == (SettingsSlider *)0x0) goto code_?;
  iVar12 = *(int32_t *)&pOVar13[1].klass;
  SettingsSlider::SettingsSlider_Initialize_1
            (this_01,StringLiteral_RequiredRank,iVar12,0,3,(MethodInfo *)0x0);
  this_02 = (this->fields).gameTierRequirementInputField;
  if (this_02 == (SettingsInputFieldSlider *)0x0) goto code_?;
  bVar10 = iRam_? != 0;
  (this_02->fields).key = StringLiteral_RequiredRank;
  if (bVar10) {
    uVar6 = (uint)((ulonglong)&(this_02->fields).key >> 0xc);
    uVar4 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar9 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar10 = uVar7 == *puVar9;
      if (bVar10) {
        *puVar9 = uVar7 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar10);
  }
  inputFieldValue =
       SettingsInputFieldSlider::SettingsInputFieldSlider_GetInputFieldValue
                 (this_02,(float)iVar12,(MethodInfo *)0x0);
  pSVar1 = SettingsInputFieldSlider::SettingsInputFieldSlider_ConvertFloatToString
                     (inputFieldValue,(MethodInfo *)0x0);
  this_03 = (this_02->fields).inputField;
  if (this_03 == (InputField *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
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
  pSVar14 = (this_03->fields).m_Text;
  if (pSVar14 == pSVar1) {
    return;
  }
  if (pSVar14 == (String *)0x0) {
code_?:
    if (pSVar1 == (String *)0x0) {
code_?:
      pSVar1 = ::StringLiteral__;
      if (::StringLiteral__ == (String *)0x0) goto DAT_?;
    }
  }
  else {
    if (pSVar1 == (String *)0x0) goto code_?;
    if ((pSVar14->fields)._stringLength == (pSVar1->fields)._stringLength) {
      bVar15 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                        ((uint8_t *)&(pSVar14->fields)._firstChar,
                         (uint8_t *)&(pSVar1->fields)._firstChar,
                         (longlong)(pSVar14->fields)._stringLength * 2,(MethodInfo *)0x0);
      if (bVar15 != 0) {
        return;
      }
      goto code_?;
    }
  }
  pSVar1 = mscorlib.dll::System::String::String_Replace_1
                     (pSVar1,::StringLiteral__,
                      (String *)**(undefined8 **)(lRam_? + 0xb8),(MethodInfo *)0x0);
  if ((this_03->fields).m_LineType == 0) {
    if ((pSVar1 == (String *)0x0) ||
       (pSVar1 = mscorlib.dll::System::String::String_Replace_1
                           (pSVar1,StringLiteral_u000A,::StringLiteral__,(MethodInfo *)0x0),
       pSVar1 == (String *)0x0)) goto DAT_?;
    pSVar1 = mscorlib.dll::System::String::String_Replace_1
                       (pSVar1,StringLiteral_u0009,::StringLiteral__,(MethodInfo *)0x0);
  }
  if (((this_03->fields).m_OnValidateInput == (InputField_OnValidateInput *)0x0) &&
     ((this_03->fields).m_CharacterValidation == 0)) {
    if (0 < (this_03->fields).m_CharacterLimit) {
      if (pSVar1 == (String *)0x0) goto DAT_?;
      iVar16 = (this_03->fields).m_CharacterLimit;
      if (iVar16 < (pSVar1->fields)._stringLength) {
        pSVar1 = mscorlib.dll::System::String::String_Substring_1(pSVar1,0,iVar16,(MethodInfo *)0x0)
        ;
      }
    }
    (this_03->fields).m_Text = pSVar1;
    func_?(&(this_03->fields).m_Text);
  }
  else {
    bVar10 = iRam_? != 0;
    (this_03->fields).m_Text = ::StringLiteral__;
    if (bVar10) {
      uVar6 = (uint)((ulonglong)&(this_03->fields).m_Text >> 0xc);
      lVar5 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar5 + 0xADDR);
        puVar9 = (ulonglong *)(lVar5 + 0xADDR);
        LOCK();
        bVar10 = uVar4 == *puVar9;
        if (bVar10) {
          *puVar9 = uVar4 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar10);
    }
    pIVar17 = (this_03->fields).m_OnValidateInput;
    if (pIVar17 == (InputField_OnValidateInput *)0x0) {
      pIVar17 = (InputField_OnValidateInput *)
                FUN_?(TypeInfo__UnityEngine__UI__InputField__OnValidateInput);
      pMVar18 = MethodInfo__UnityEngine__UI__InputField__Validate_System__String__int__wchar_t_;
      bVar10 = iRam_? != 0;
      (pIVar17->fields)._._.method_ptr =
           MethodInfo__UnityEngine__UI__InputField__Validate_System__String__int__wchar_t_->
           virtualMethodPointer;
      (pIVar17->fields)._._.method = pMVar18;
      (pIVar17->fields)._._.m_target = (Object *)this_03;
      if (bVar10) {
        uVar6 = (uint)((ulonglong)&(pIVar17->fields)._._.m_target >> 0xc);
        lVar5 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
        do {
          uVar4 = *(ulonglong *)(lVar5 + 0xADDR);
          puVar9 = (ulonglong *)(lVar5 + 0xADDR);
          LOCK();
          bVar10 = uVar4 == *puVar9;
          if (bVar10) {
            *puVar9 = uVar4 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar10);
      }
      uVar19 = pMVar18->parameters_count;
      (pIVar17->fields)._._.method_code = pIVar17;
      if ((pMVar18->flags & 0x10) == 0) {
        if (uVar19 != 2) goto code_?;
        pcVar2 = FUN_?;
      }
      else if (uVar19 == 3) {
        pcVar2 = FUN_?;
      }
      else {
code_?:
        (pIVar17->fields)._._.method_code = (pIVar17->fields)._._.m_target;
        pcVar2 = (pIVar17->fields)._._.method_ptr;
      }
      (pIVar17->fields)._._.invoke_impl = pcVar2;
      (pIVar17->fields)._._.extra_arg = FUN_?;
    }
    if (pSVar1 == (String *)0x0) goto DAT_?;
    iVar12 = (pSVar1->fields)._stringLength;
    (this_03->fields).m_CaretSelectPosition = iVar12;
    (this_03->fields).m_CaretPosition = iVar12;
    if ((this_03->fields).m_CharacterLimit < 1) {
      iVar16 = (pSVar1->fields)._stringLength;
    }
    else {
      iVar16 = (this_03->fields).m_CharacterLimit;
      iVar20 = (pSVar1->fields)._stringLength;
      if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (iVar20 < iVar16) {
        iVar16 = iVar20;
      }
    }
    uVar6 = 0;
    if (0 < iVar16) {
      puVar21 = &(pSVar1->fields)._firstChar;
      lVar5 = 0;
      do {
        pSVar14 = (this_03->fields).m_Text;
        if (pSVar14 == (String *)0x0) goto DAT_?;
        if ((longlong)(pSVar1->fields)._stringLength <= (longlong)(ulonglong)uVar6) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowIndexOutOfRangeException
                    ((MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (pIVar17 == (InputField_OnValidateInput *)0x0) goto DAT_?;
        c = (*(pIVar17->fields)._._.invoke_impl)
                      ((pIVar17->fields)._._.method_code,(this_03->fields).m_Text,
                       (pSVar14->fields)._stringLength,*puVar21,(pIVar17->fields)._._.method);
        if (c != 0) {
          uStackX_8 = (this_03->fields).m_Text;
          if ((*(int *)(lRam_? + 0xe4) == 0) &&
             (FUN_?(), *(int *)(lRam_? + 0xe4) == 0)) {
            FUN_?();
          }
          pSVar14 = mscorlib.dll::System::Char::Char_ToString_2(c,(MethodInfo *)0x0);
          pSVar14 = mscorlib.dll::System::String::String_Concat_4
                              (uStackX_8,pSVar14,(MethodInfo *)0x0);
          (this_03->fields).m_Text = pSVar14;
          func_?(&(this_03->fields).m_Text);
        }
        uVar6 = uVar6 + 1;
        lVar5 = lVar5 + 1;
        puVar21 = puVar21 + 1;
      } while (lVar5 < iVar16);
    }
  }
  if ((this_03->fields).m_Keyboard != (TouchScreenKeyboard *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::TouchScreenKeyboard::TouchScreenKeyboard_set_text
              ((this_03->fields).m_Keyboard,(this_03->fields).m_Text,(MethodInfo *)0x0);
  }
  pSVar1 = (this_03->fields).m_Text;
  if (pSVar1 == (String *)0x0) {
DAT_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar16 = (pSVar1->fields)._stringLength;
  if (iVar16 < (this_03->fields).m_CaretPosition) {
    (this_03->fields).m_CaretPosition = iVar16;
  }
  else if ((this_03->fields).m_CaretSelectPosition <= iVar16) goto code_?;
  (this_03->fields).m_CaretSelectPosition = iVar16;
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
            (StringLiteral_InputField_value,(Object_1 *)this_03,(MethodInfo *)0x0);
  if ((this_03->fields).m_OnValueChanged != (InputField_OnChangeEvent *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent`1[System::Object]::
    UnityEvent_1_System_Object__Invoke
              ((UnityEvent_1_System_Object_ *)(this_03->fields).m_OnValueChanged,
               (Object *)(this_03->fields).m_Text,
               MethodInfo__UnityEngine__Events__UnityEvent<System::String>__Invoke_System__String_);
  }
  UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_UpdateLabel(this_03,(MethodInfo *)0x0)
  ;
  return;
}


/* Void OnSettingChanged(String, Object) */

void Assembly-CSharp.dll::GameRankRequirementSettings::GameRankRequirementSettings_OnSettingChanged
               (GameRankRequirementSettings *this,String *key,Object *value,MethodInfo *method)

{
  if (value != (Object *)0x0) {
    if ((value->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
      FUN_?(value);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    value_00 = FUN_?(*(undefined4 *)&value[1].klass);
    pSVar2 = (this->fields).gameTierRequirementInputField;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Number);
      LOCK();
      UNLOCK();
      FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->field_0x135
        & 1) == 0) {
      FUN_?();
    }
    if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
      FUN_?();
    }
    aRStackY_38[0]._pointer._value = (void *)0x0;
    aRStackY_38[0]._length = 0;
    aRStackY_38[0]._12_4_ = 0;
    value_01 = mscorlib.dll::System::Number::Number_FormatInt32
                         (value_00,aRStackY_38,(IFormatProvider *)0x0,(MethodInfo *)0x0);
    if ((pSVar2 != (SettingsInputFieldSlider *)0x0) &&
       (pIVar3 = (pSVar2->fields).inputField, pIVar3 != (InputField *)0x0)) {
      UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_set_contentType
                (pIVar3,InputField_ContentType__Enum_Standard,(MethodInfo *)0x0);
      pIVar3 = (pSVar2->fields).inputField;
      if (pIVar3 != (InputField *)0x0) {
        UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_SetText
                  (pIVar3,value_01,1,(MethodInfo *)0x0);
        pSVar4 = (this->fields).settingsBase;
        aiStackX_18[0] = value_00;
        value_02 = (Object *)FUN_?(uRam_?,aiStackX_18);
        if (pSVar4 != (SettingsBase *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                         );
            LOCK();
            UNLOCK();
            FUN_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                         );
            LOCK();
            UNLOCK();
            FUN_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                         );
            LOCK();
            UNLOCK();
            FUN_?(&
                          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                         );
            LOCK();
            UNLOCK();
            FUN_?();
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if ((((pSVar4->fields).woID != -1) && (key != (String *)0x0)) &&
             ((key->fields)._stringLength != 0)) {
            this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
            if (this_01 != (MVWorldObjectClientManager *)0x0) {
              wo = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                             (this_01,(pSVar4->fields).woID,(MethodInfo *)0x0);
              if (wo == (MVWorldObjectClient *)0x0) {
                return;
              }
              if (*(int *)&(TypeInfo__WorldObjectDataValidator->_1).field_0x1c == 0) {
                FUN_?();
              }
              uVar5 = 0;
              WorldObjectDataValidator::WorldObjectDataValidator_Validate
                        (wo,key,value_02,(MethodInfo *)0x0);
              this_00 = (pSVar4->fields).result;
              if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                uVar5 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__TryInsert
                          (this_00,(Object *)key,value_02,(InsertionBehavior__Enum)uVar5,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                           ->klass->rgctx_data[0x22].method);
                this_02 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                           *)FUN_?(
                                          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                          );
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
                Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                          (this_02,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                          );
                if (this_02 !=
                    (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                     *)0x0) {
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__TryInsert
                            ((Dictionary_2_System_Object_System_Object_ *)this_02,(Object *)key,
                             value_02,(InsertionBehavior__Enum)
                                      CONCAT71((int7)((ulonglong)uVar5 >> 8),2),
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                             ->klass->rgctx_data[0x22].method);
                  (*(wo->klass->vtable).PartialUpdateWOData.methodPtr)
                            (wo,this_02,(wo->klass->vtable).PartialUpdateWOData.method);
                  return;
                }
              }
            }
            FUN_?();
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

