
/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::GameCoinRequirementSettings::GameCoinRequirementSettings_Initialize
               (GameCoinRequirementSettings *this,int32_t woID,GameObject *root,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Convert);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_gameCoinAmount);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Game_Coin_Requirement);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).settingsBase;
  pSVar1 = TM::TM__(StringLiteral_Game_Coin_Requirement,(MethodInfo *)0x0);
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
  this_05 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (((this_05 == (MVWorldObjectClientManager *)0x0) ||
      (pMVar5 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                           (this_05,woID,(MethodInfo *)0x0), pMVar5 == (MVWorldObjectClient *)0x0))
     || (this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                    *)(pMVar5->fields)._.data,
        this_01 ==
        (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)
        0x0)) goto code_?;
  iVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
          UIElements::StyleComplexSelector+PseudoStateData]::
          Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                    (this_01,(Object *)StringLiteral_gameCoinAmount,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                     ->klass->rgctx_data[0x21].method);
  lVar7 = lRam_?;
  if (iVar6 < 0) {
    pSStackX_8 = (String *)((ulonglong)pSStackX_8 & 0xffffffff00000000);
    pSVar1 = pSStackX_8;
    if (*(int *)(lRam_? + 0x28) < 0) {
      if ((*(longlong *)(lRam_? + 0x60) == 0) ||
         ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
        pSVar1 = (String *)FUN_?(lRam_?);
        FUN_?(&pSVar1->fields,&pSStackX_8,(longlong)*(int *)(lVar7 + 0xf8) + -0x10);
        if (iRam_? != 0) {
          uVar8 = (uint)((ulonglong)&pSVar1->fields >> 0xc);
          uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
          uVar4 = (ulonglong)(uVar8 & 0x3f);
          do {
            uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
            puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
            LOCK();
            bVar12 = uVar10 == *puVar11;
            if (bVar12) {
              *puVar11 = uVar10 | 1L << uVar4;
            }
            UNLOCK();
          } while (!bVar12);
        }
      }
      else {
        pSVar1 = (String *)0x0;
      }
    }
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this_01,
               (Object *)StringLiteral_gameCoinAmount,(Object *)pSVar1,
               (InsertionBehavior__Enum)CONCAT71((int7)(uVar4 >> 8),1),
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
  }
  value = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__get_Item
                    ((Dictionary_2_System_Object_System_Object_ *)this_01,
                     (Object *)StringLiteral_gameCoinAmount,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                    );
  if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar6 = mscorlib.dll::System::Convert::Convert_ToInt32(value,(MethodInfo *)0x0);
  this_02 = (this->fields).slider;
  if (this_02 == (SettingsSlider *)0x0) goto code_?;
  SettingsSlider::SettingsSlider_Initialize_1
            (this_02,StringLiteral_gameCoinAmount,iVar6,0,10000,(MethodInfo *)0x0);
  this_03 = (this->fields).inputField;
  if (this_03 == (SettingsInputFieldSlider *)0x0) goto code_?;
  bVar12 = iRam_? != 0;
  (this_03->fields).key = StringLiteral_gameCoinAmount;
  if (bVar12) {
    uVar8 = (uint)((ulonglong)&(this_03->fields).key >> 0xc);
    uVar4 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
    do {
      uVar9 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar11 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar12 = uVar9 == *puVar11;
      if (bVar12) {
        *puVar11 = uVar9 | 1L << (uVar8 & 0x3f);
      }
      UNLOCK();
    } while (!bVar12);
  }
  inputFieldValue =
       SettingsInputFieldSlider::SettingsInputFieldSlider_GetInputFieldValue
                 (this_03,(float)iVar6,(MethodInfo *)0x0);
  pSVar1 = SettingsInputFieldSlider::SettingsInputFieldSlider_ConvertFloatToString
                     (inputFieldValue,(MethodInfo *)0x0);
  this_04 = (this_03->fields).inputField;
  if (this_04 == (InputField *)0x0) {
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
  pSVar13 = (this_04->fields).m_Text;
  if (pSVar13 == pSVar1) {
    return;
  }
  if (pSVar13 == (String *)0x0) {
code_?:
    if (pSVar1 == (String *)0x0) {
code_?:
      pSVar1 = ::StringLiteral__;
      if (::StringLiteral__ == (String *)0x0) goto DAT_?;
    }
  }
  else {
    if (pSVar1 == (String *)0x0) goto code_?;
    if ((pSVar13->fields)._stringLength == (pSVar1->fields)._stringLength) {
      bVar14 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                        ((uint8_t *)&(pSVar13->fields)._firstChar,
                         (uint8_t *)&(pSVar1->fields)._firstChar,
                         (longlong)(pSVar13->fields)._stringLength * 2,(MethodInfo *)0x0);
      if (bVar14 != 0) {
        return;
      }
      goto code_?;
    }
  }
  pSVar1 = mscorlib.dll::System::String::String_Replace_1
                     (pSVar1,::StringLiteral__,
                      (String *)**(undefined8 **)(lRam_? + 0xb8),(MethodInfo *)0x0);
  if ((this_04->fields).m_LineType == 0) {
    if ((pSVar1 == (String *)0x0) ||
       (pSVar1 = mscorlib.dll::System::String::String_Replace_1
                           (pSVar1,StringLiteral_u000A,::StringLiteral__,(MethodInfo *)0x0),
       pSVar1 == (String *)0x0)) goto DAT_?;
    pSVar1 = mscorlib.dll::System::String::String_Replace_1
                       (pSVar1,StringLiteral_u0009,::StringLiteral__,(MethodInfo *)0x0);
  }
  if (((this_04->fields).m_OnValidateInput == (InputField_OnValidateInput *)0x0) &&
     ((this_04->fields).m_CharacterValidation == 0)) {
    if (0 < (this_04->fields).m_CharacterLimit) {
      if (pSVar1 == (String *)0x0) goto DAT_?;
      iVar15 = (this_04->fields).m_CharacterLimit;
      if (iVar15 < (pSVar1->fields)._stringLength) {
        pSVar1 = mscorlib.dll::System::String::String_Substring_1(pSVar1,0,iVar15,(MethodInfo *)0x0)
        ;
      }
    }
    (this_04->fields).m_Text = pSVar1;
    func_?(&(this_04->fields).m_Text);
  }
  else {
    bVar12 = iRam_? != 0;
    (this_04->fields).m_Text = ::StringLiteral__;
    if (bVar12) {
      uVar8 = (uint)((ulonglong)&(this_04->fields).m_Text >> 0xc);
      lVar7 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar11 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar12 = uVar4 == *puVar11;
        if (bVar12) {
          *puVar11 = uVar4 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar12);
    }
    pIVar16 = (this_04->fields).m_OnValidateInput;
    if (pIVar16 == (InputField_OnValidateInput *)0x0) {
      pIVar16 = (InputField_OnValidateInput *)
                FUN_?(TypeInfo__UnityEngine__UI__InputField__OnValidateInput);
      pMVar17 = MethodInfo__UnityEngine__UI__InputField__Validate_System__String__int__wchar_t_;
      bVar12 = iRam_? != 0;
      (pIVar16->fields)._._.method_ptr =
           MethodInfo__UnityEngine__UI__InputField__Validate_System__String__int__wchar_t_->
           virtualMethodPointer;
      (pIVar16->fields)._._.method = pMVar17;
      (pIVar16->fields)._._.m_target = (Object *)this_04;
      if (bVar12) {
        uVar8 = (uint)((ulonglong)&(pIVar16->fields)._._.m_target >> 0xc);
        lVar7 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
        do {
          uVar4 = *(ulonglong *)(lVar7 + 0xADDR);
          puVar11 = (ulonglong *)(lVar7 + 0xADDR);
          LOCK();
          bVar12 = uVar4 == *puVar11;
          if (bVar12) {
            *puVar11 = uVar4 | 1L << (uVar8 & 0x3f);
          }
          UNLOCK();
        } while (!bVar12);
      }
      uVar18 = pMVar17->parameters_count;
      (pIVar16->fields)._._.method_code = pIVar16;
      if ((pMVar17->flags & 0x10) == 0) {
        if (uVar18 != 2) goto code_?;
        pcVar2 = FUN_?;
      }
      else if (uVar18 == 3) {
        pcVar2 = FUN_?;
      }
      else {
code_?:
        (pIVar16->fields)._._.method_code = (pIVar16->fields)._._.m_target;
        pcVar2 = (pIVar16->fields)._._.method_ptr;
      }
      (pIVar16->fields)._._.invoke_impl = pcVar2;
      (pIVar16->fields)._._.extra_arg = FUN_?;
    }
    if (pSVar1 == (String *)0x0) goto DAT_?;
    iVar6 = (pSVar1->fields)._stringLength;
    (this_04->fields).m_CaretSelectPosition = iVar6;
    (this_04->fields).m_CaretPosition = iVar6;
    if ((this_04->fields).m_CharacterLimit < 1) {
      iVar15 = (pSVar1->fields)._stringLength;
    }
    else {
      iVar15 = (this_04->fields).m_CharacterLimit;
      iVar19 = (pSVar1->fields)._stringLength;
      if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (iVar19 < iVar15) {
        iVar15 = iVar19;
      }
    }
    uVar8 = 0;
    if (0 < iVar15) {
      puVar20 = &(pSVar1->fields)._firstChar;
      lVar7 = 0;
      do {
        pSVar13 = (this_04->fields).m_Text;
        if (pSVar13 == (String *)0x0) goto DAT_?;
        if ((longlong)(pSVar1->fields)._stringLength <= (longlong)(ulonglong)uVar8) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowIndexOutOfRangeException
                    ((MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (pIVar16 == (InputField_OnValidateInput *)0x0) goto DAT_?;
        c = (*(pIVar16->fields)._._.invoke_impl)
                      ((pIVar16->fields)._._.method_code,(this_04->fields).m_Text,
                       (pSVar13->fields)._stringLength,*puVar20,(pIVar16->fields)._._.method);
        if (c != 0) {
          pSStackX_8 = (this_04->fields).m_Text;
          if ((*(int *)(lRam_? + 0xe4) == 0) &&
             (FUN_?(), *(int *)(lRam_? + 0xe4) == 0)) {
            FUN_?();
          }
          pSVar13 = mscorlib.dll::System::Char::Char_ToString_2(c,(MethodInfo *)0x0);
          pSVar13 = mscorlib.dll::System::String::String_Concat_4
                              (pSStackX_8,pSVar13,(MethodInfo *)0x0);
          (this_04->fields).m_Text = pSVar13;
          func_?(&(this_04->fields).m_Text);
        }
        uVar8 = uVar8 + 1;
        lVar7 = lVar7 + 1;
        puVar20 = puVar20 + 1;
      } while (lVar7 < iVar15);
    }
  }
  if ((this_04->fields).m_Keyboard != (TouchScreenKeyboard *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::TouchScreenKeyboard::TouchScreenKeyboard_set_text
              ((this_04->fields).m_Keyboard,(this_04->fields).m_Text,(MethodInfo *)0x0);
  }
  pSVar1 = (this_04->fields).m_Text;
  if (pSVar1 == (String *)0x0) {
DAT_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar15 = (pSVar1->fields)._stringLength;
  if (iVar15 < (this_04->fields).m_CaretPosition) {
    (this_04->fields).m_CaretPosition = iVar15;
  }
  else if ((this_04->fields).m_CaretSelectPosition <= iVar15) goto code_?;
  (this_04->fields).m_CaretSelectPosition = iVar15;
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
            (StringLiteral_InputField_value,(Object_1 *)this_04,(MethodInfo *)0x0);
  if ((this_04->fields).m_OnValueChanged != (InputField_OnChangeEvent *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent`1[System::Object]::
    UnityEvent_1_System_Object__Invoke
              ((UnityEvent_1_System_Object_ *)(this_04->fields).m_OnValueChanged,
               (Object *)(this_04->fields).m_Text,
               MethodInfo__UnityEngine__Events__UnityEvent<System::String>__Invoke_System__String_);
  }
  UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_UpdateLabel(this_04,(MethodInfo *)0x0)
  ;
  return;
}


/* Void OnSettingChanged(String, Object) */

void Assembly-CSharp.dll::GameCoinRequirementSettings::GameCoinRequirementSettings_OnSettingChanged
               (GameCoinRequirementSettings *this,String *key,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Convert);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).settingsBase;
  if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
    FUN_?();
  }
  aiStackX_8[0] = mscorlib.dll::System::Convert::Convert_ToInt32(value,(MethodInfo *)0x0);
  value_00 = (Object *)FUN_?(uRam_?,aiStackX_8);
  if (pSVar1 != (SettingsBase *)0x0) {
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
    if ((((pSVar1->fields).woID != -1) && (key != (String *)0x0)) &&
       ((key->fields)._stringLength != 0)) {
      this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (this_01 != (MVWorldObjectClientManager *)0x0) {
        wo = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                       (this_01,(pSVar1->fields).woID,(MethodInfo *)0x0);
        if (wo == (MVWorldObjectClient *)0x0) {
          return;
        }
        if (*(int *)&(TypeInfo__WorldObjectDataValidator->_1).field_0x1c == 0) {
          FUN_?();
        }
        uVar2 = 0;
        WorldObjectDataValidator::WorldObjectDataValidator_Validate
                  (wo,key,value_00,(MethodInfo *)0x0);
        this_00 = (pSVar1->fields).result;
        if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    (this_00,(Object *)key,value_00,(InsertionBehavior__Enum)uVar2,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method);
          this_02 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                     *)FUN_?(
                                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                    );
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
          UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
          Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                    (this_02,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                    );
          if (this_02 !=
              (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
               *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryInsert
                      ((Dictionary_2_System_Object_System_Object_ *)this_02,(Object *)key,value_00,
                       (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar2 >> 8),2),
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                       ->klass->rgctx_data[0x22].method);
            (*(wo->klass->vtable).PartialUpdateWOData.methodPtr)
                      (wo,this_02,(wo->klass->vtable).PartialUpdateWOData.method);
            return;
          }
        }
      }
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

