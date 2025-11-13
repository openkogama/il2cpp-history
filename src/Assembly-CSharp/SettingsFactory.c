
/* Void CreateBlueprintSettings(Int32) */

void Assembly-CSharp.dll::SettingsFactory::SettingsFactory_CreateBlueprintSettings
               (SettingsFactory *this,int32_t woID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__Common__BlueprintData);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__BlueprintType);
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
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (((pMVar1 == (MVWorldObjectClientManager *)0x0) ||
      (pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                           (pMVar1,woID,(MethodInfo *)0x0), pMVar2 == (MVWorldObjectClient *)0x0))
     || (pDVar3 = (pMVar2->fields)._.data,
        pDVar3 == (Dictionary_2_System_Object_System_Object_ *)0x0)) {
code_?:
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pDVar3 = (Dictionary_2_System_Object_System_Object_ *)
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__get_Item
                      (pDVar3,(Object *)StringLiteral_BlueprintData,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
  pSVar5 = mscorlib.dll::System::Enum::Enum_ToString
                      ((Enum *)&stack0xffffffffffffffd8,(MethodInfo *)0x0);
  if (pDVar3 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
  bVar6 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
          naturalAligment;
  if (((pDVar3->klass->_1).naturalAligment < bVar6) ||
     ((Dictionary_2_System_Object_System_Object___Class *)
      (pDVar3->klass->_1).typeHierarchy[(ulonglong)bVar6 - 1] !=
      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
    FUN_?(pDVar3,
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__get_Item
                      (pDVar3,(Object *)pSVar5,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
  if (pOVar7 == (Object *)0x0) goto code_?;
  if ((pOVar7->klass->_0).element_class !=
      (TypeInfo__MV__WorldObject__BlueprintType->_0).element_class) {
    FUN_?(pOVar7,TypeInfo__MV__WorldObject__BlueprintType);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (*(char *)&pOVar7[1].klass == '\f') {
    if (cRam_? == '\0') {
      FUN_?(&
                    MovablesSettings_MethodInfo__UnityEngine__Object__Instantiate<MovablesSettings>_MovablesSettings_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar8 = (this->fields).movablesSettingsPrefab;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    pMVar8 = (MovablesSettings *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)pMVar8,
                         MovablesSettings_MethodInfo__UnityEngine__Object__Instantiate<MovablesSettings>_MovablesSettings_
                        );
    pGVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    if (pMVar8 != (MovablesSettings *)0x0) {
      MovablesSettings::MovablesSettings_Initialize(pMVar8,woID,pGVar9,(MethodInfo *)0x0);
      return;
    }
    goto code_?;
  }
  if (*(char *)&pOVar7[1].klass != '\r') {
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  RotatorSettings_MethodInfo__UnityEngine__Object__Instantiate<RotatorSettings>_RotatorSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  original = (this->fields).rotatorSettingsPrefab;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                      ((Object *)original,
                       RotatorSettings_MethodInfo__UnityEngine__Object__Instantiate<RotatorSettings>_RotatorSettings_
                      );
  pGVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  if (pOVar7 == (Object *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  ,woID,pGVar9,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Rotator);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_AngularSpeed);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_BlueprintData_AngularSpeed);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_BlueprintData);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar10 = pOVar7[2].klass;
  pSVar5 = TM::TM__(StringLiteral_Rotator,(MethodInfo *)0x0);
  if (pOVar10 == (Object__Class *)0x0) {
code_?:
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pTVar11 = (Text *)(pOVar10->_0).byval_arg.data.array;
  (pOVar10->_0).byval_arg.attrs = (short)woID;
  (pOVar10->_0).byval_arg.type = (char)((uint)woID >> 0x10);
  (pOVar10->_0).byval_arg.field_0xb = (char)((uint)woID >> 0x18);
  if (pTVar11 == (Text *)0x0) goto code_?;
  (*(pTVar11->klass->vtable).set_text.methodPtr)
            (pTVar11,pSVar5,(pTVar11->klass->vtable).set_text.method);
  SettingsBase::SettingsBase_InitializeHierarchy
            ((SettingsBase *)pOVar10,woID,pGVar9,(MethodInfo *)0x0);
  if (woID == -1) {
    uVar12 = func_?(&TypeInfo__System__NotImplementedException);
    this_01 = (NotImplementedException *)func_?(uVar12);
    mscorlib.dll::System::NotImplementedException::NotImplementedException__ctor
              (this_01,(MethodInfo *)0x0);
    uVar12 = func_?(&
                                 MethodInfo__RotatorSettings__Initialize_int__UnityEngine__GameObject_
                                );
    FUN_?(this_01,uVar12);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((pMVar1 == (MVWorldObjectClientManager *)0x0) ||
     (pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                          (pMVar1,woID,(MethodInfo *)0x0), pMVar2 == (MVWorldObjectClient *)0x0))
  goto code_?;
  pDVar3 = (pMVar2->fields)._.data;
  *(int32_t *)&pOVar7[4].klass = woID;
  if (pDVar3 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
  pOVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__get_Item
                      (pDVar3,(Object *)StringLiteral_BlueprintData,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
  if (pOVar13 == (Object *)0x0) {
    pOVar7[3].monitor = (MonitorData *)0x0;
  }
  else {
    bVar6 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment;
    if (((pOVar13->klass->_1).naturalAligment < bVar6) ||
       ((Dictionary_2_System_Object_System_Object___Class *)
        (pOVar13->klass->_1).typeHierarchy[(ulonglong)bVar6 - 1] !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      FUN_?(pOVar13);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pOVar7[3].monitor = (MonitorData *)pOVar13;
    bVar6 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment;
    if (((pOVar13->klass->_1).naturalAligment < bVar6) ||
       ((Dictionary_2_System_Object_System_Object___Class *)
        (pOVar13->klass->_1).typeHierarchy[(ulonglong)bVar6 - 1] !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      FUN_?(pOVar13);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar14 = (uint)((ulonglong)&pOVar7[3].monitor >> 0xc);
    uVar15 = (ulonglong)((uVar14 & 0x1fffff) >> 6);
    do {
      uVar16 = *(ulonglong *)(uVar15 * 8 + 0xADDR);
      puVar17 = (ulonglong *)(uVar15 * 8 + 0xADDR);
      LOCK();
      bVar18 = uVar16 == *puVar17;
      if (bVar18) {
        *puVar17 = uVar16 | 1L << (uVar14 & 0x3f);
      }
      UNLOCK();
    } while (!bVar18);
  }
  if (((Dictionary_2_System_Object_System_Object_ *)pOVar7[3].monitor ==
       (Dictionary_2_System_Object_System_Object_ *)0x0) ||
     (pOVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__get_Item
                          ((Dictionary_2_System_Object_System_Object_ *)pOVar7[3].monitor,
                           (Object *)StringLiteral_AngularSpeed,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          ), pOVar13 == (Object *)0x0)) goto code_?;
  if ((pOVar13->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
    FUN_?(pOVar13,lRam_?);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((SettingsSlider *)pOVar7[2].monitor == (SettingsSlider *)0x0) goto code_?;
  fVar19 = *(float *)&pOVar13[1].klass;
  SettingsSlider::SettingsSlider_Initialize
            ((SettingsSlider *)pOVar7[2].monitor,StringLiteral_BlueprintData_AngularSpeed,fVar19,
             0.0,_UNK_?,(MethodInfo *)0x0);
  pOVar10 = pOVar7[3].klass;
  if (pOVar10 == (Object__Class *)0x0) goto code_?;
  bVar18 = iRam_? != 0;
  (pOVar10->_0).element_class = (Il2CppClass *)StringLiteral_BlueprintData_AngularSpeed;
  if (bVar18) {
    uVar14 = (uint)((ulonglong)&(pOVar10->_0).element_class >> 0xc);
    uVar15 = (ulonglong)((uVar14 & 0x1fffff) >> 6);
    do {
      uVar16 = *(ulonglong *)(uVar15 * 8 + 0xADDR);
      puVar17 = (ulonglong *)(uVar15 * 8 + 0xADDR);
      LOCK();
      bVar18 = uVar16 == *puVar17;
      if (bVar18) {
        *puVar17 = uVar16 | 1L << (uVar14 & 0x3f);
      }
      UNLOCK();
    } while (!bVar18);
  }
  fVar19 = SettingsInputFieldSlider::SettingsInputFieldSlider_GetInputFieldValue
                     ((SettingsInputFieldSlider *)pOVar10,fVar19,(MethodInfo *)0x0);
  pSVar5 = SettingsInputFieldSlider::SettingsInputFieldSlider_ConvertFloatToString
                      (fVar19,(MethodInfo *)0x0);
  this_00 = (InputField *)(pOVar10->_0).byval_arg.data.array;
  if (this_00 == (InputField *)0x0) {
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
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
  pSVar20 = (this_00->fields).m_Text;
  if (pSVar20 == pSVar5) {
    return;
  }
  if (pSVar20 == (String *)0x0) {
code_?:
    if (pSVar5 == (String *)0x0) {
code_?:
      pSVar5 = ::StringLiteral__;
      if (::StringLiteral__ == (String *)0x0) goto DAT_?;
    }
  }
  else {
    if (pSVar5 == (String *)0x0) goto code_?;
    if ((pSVar20->fields)._stringLength == (pSVar5->fields)._stringLength) {
      bVar21 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                         ((uint8_t *)&(pSVar20->fields)._firstChar,
                          (uint8_t *)&(pSVar5->fields)._firstChar,
                          (longlong)(pSVar20->fields)._stringLength * 2,(MethodInfo *)0x0);
      if (bVar21 != 0) {
        return;
      }
      goto code_?;
    }
  }
  pSVar5 = mscorlib.dll::System::String::String_Replace_1
                      (pSVar5,::StringLiteral__,
                       (String *)**(undefined8 **)(lRam_? + 0xb8),(MethodInfo *)0x0);
  if ((this_00->fields).m_LineType == 0) {
    if ((pSVar5 == (String *)0x0) ||
       (pSVar5 = mscorlib.dll::System::String::String_Replace_1
                            (pSVar5,StringLiteral_u000A,::StringLiteral__,(MethodInfo *)0x0),
       pSVar5 == (String *)0x0)) goto DAT_?;
    pSVar5 = mscorlib.dll::System::String::String_Replace_1
                        (pSVar5,StringLiteral_u0009,::StringLiteral__,(MethodInfo *)0x0);
  }
  if (((this_00->fields).m_OnValidateInput == (InputField_OnValidateInput *)0x0) &&
     ((this_00->fields).m_CharacterValidation == 0)) {
    if (0 < (this_00->fields).m_CharacterLimit) {
      if (pSVar5 == (String *)0x0) goto DAT_?;
      iVar22 = (this_00->fields).m_CharacterLimit;
      if (iVar22 < (pSVar5->fields)._stringLength) {
        pSVar5 = mscorlib.dll::System::String::String_Substring_1
                            (pSVar5,0,iVar22,(MethodInfo *)0x0);
      }
    }
    (this_00->fields).m_Text = pSVar5;
    func_?(&(this_00->fields).m_Text);
  }
  else {
    bVar18 = iRam_? != 0;
    (this_00->fields).m_Text = ::StringLiteral__;
    if (bVar18) {
      uVar14 = (uint)((ulonglong)&(this_00->fields).m_Text >> 0xc);
      lVar23 = (ulonglong)((uVar14 & 0x1fffff) >> 6) * 8;
      do {
        uVar15 = *(ulonglong *)(lVar23 + 0xADDR);
        puVar17 = (ulonglong *)(lVar23 + 0xADDR);
        LOCK();
        bVar18 = uVar15 == *puVar17;
        if (bVar18) {
          *puVar17 = uVar15 | 1L << (uVar14 & 0x3f);
        }
        UNLOCK();
      } while (!bVar18);
    }
    pIVar24 = (this_00->fields).m_OnValidateInput;
    if (pIVar24 == (InputField_OnValidateInput *)0x0) {
      pIVar24 = (InputField_OnValidateInput *)
                FUN_?(TypeInfo__UnityEngine__UI__InputField__OnValidateInput);
      pMVar25 = MethodInfo__UnityEngine__UI__InputField__Validate_System__String__int__wchar_t_;
      bVar18 = iRam_? != 0;
      (pIVar24->fields)._._.method_ptr =
           MethodInfo__UnityEngine__UI__InputField__Validate_System__String__int__wchar_t_->
           virtualMethodPointer;
      (pIVar24->fields)._._.method = pMVar25;
      (pIVar24->fields)._._.m_target = (Object *)this_00;
      if (bVar18) {
        uVar14 = (uint)((ulonglong)&(pIVar24->fields)._._.m_target >> 0xc);
        lVar23 = (ulonglong)((uVar14 & 0x1fffff) >> 6) * 8;
        do {
          uVar15 = *(ulonglong *)(lVar23 + 0xADDR);
          puVar17 = (ulonglong *)(lVar23 + 0xADDR);
          LOCK();
          bVar18 = uVar15 == *puVar17;
          if (bVar18) {
            *puVar17 = uVar15 | 1L << (uVar14 & 0x3f);
          }
          UNLOCK();
        } while (!bVar18);
      }
      uVar26 = pMVar25->parameters_count;
      (pIVar24->fields)._._.method_code = pIVar24;
      if ((pMVar25->flags & 0x10) == 0) {
        if (uVar26 != 2) goto code_?;
        pcVar4 = FUN_?;
      }
      else if (uVar26 == 3) {
        pcVar4 = FUN_?;
      }
      else {
code_?:
        (pIVar24->fields)._._.method_code = (pIVar24->fields)._._.m_target;
        pcVar4 = (pIVar24->fields)._._.method_ptr;
      }
      (pIVar24->fields)._._.invoke_impl = pcVar4;
      (pIVar24->fields)._._.extra_arg = FUN_?;
    }
    if (pSVar5 == (String *)0x0) goto DAT_?;
    iVar27 = (pSVar5->fields)._stringLength;
    (this_00->fields).m_CaretSelectPosition = iVar27;
    (this_00->fields).m_CaretPosition = iVar27;
    if ((this_00->fields).m_CharacterLimit < 1) {
      iVar22 = (pSVar5->fields)._stringLength;
    }
    else {
      iVar22 = (this_00->fields).m_CharacterLimit;
      iVar28 = (pSVar5->fields)._stringLength;
      if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (iVar28 < iVar22) {
        iVar22 = iVar28;
      }
    }
    uVar14 = 0;
    if (0 < iVar22) {
      puVar29 = &(pSVar5->fields)._firstChar;
      lVar23 = 0;
      do {
        pSVar20 = (this_00->fields).m_Text;
        if (pSVar20 == (String *)0x0) goto DAT_?;
        if ((longlong)(pSVar5->fields)._stringLength <= (longlong)(ulonglong)uVar14) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowIndexOutOfRangeException
                    ((MethodInfo *)0x0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (pIVar24 == (InputField_OnValidateInput *)0x0) goto DAT_?;
        c = (*(pIVar24->fields)._._.invoke_impl)
                      ((pIVar24->fields)._._.method_code,(this_00->fields).m_Text,
                       (pSVar20->fields)._stringLength,*puVar29,(pIVar24->fields)._._.method);
        if (c != 0) {
          pSVar20 = (this_00->fields).m_Text;
          if ((*(int *)(lRam_? + 0xe4) == 0) &&
             (FUN_?(), *(int *)(lRam_? + 0xe4) == 0)) {
            FUN_?();
          }
          str1 = mscorlib.dll::System::Char::Char_ToString_2(c,(MethodInfo *)0x0);
          pSVar20 = mscorlib.dll::System::String::String_Concat_4(pSVar20,str1,(MethodInfo *)0x0);
          (this_00->fields).m_Text = pSVar20;
          func_?(&(this_00->fields).m_Text);
        }
        uVar14 = uVar14 + 1;
        lVar23 = lVar23 + 1;
        puVar29 = puVar29 + 1;
      } while (lVar23 < iVar22);
    }
  }
  if ((this_00->fields).m_Keyboard != (TouchScreenKeyboard *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::TouchScreenKeyboard::TouchScreenKeyboard_set_text
              ((this_00->fields).m_Keyboard,(this_00->fields).m_Text,(MethodInfo *)0x0);
  }
  pSVar5 = (this_00->fields).m_Text;
  if (pSVar5 == (String *)0x0) {
DAT_?:
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar22 = (pSVar5->fields)._stringLength;
  if (iVar22 < (this_00->fields).m_CaretPosition) {
    (this_00->fields).m_CaretPosition = iVar22;
  }
  else if ((this_00->fields).m_CaretSelectPosition <= iVar22) goto code_?;
  (this_00->fields).m_CaretSelectPosition = iVar22;
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


/* Void CreateChangeScaleSettings(Int32) */

void Assembly-CSharp.dll::SettingsFactory::SettingsFactory_CreateChangeScaleSettings
               (SettingsFactory *this,int32_t woID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  CubeModelPopup_MethodInfo__UnityEngine__Object__Instantiate<CubeModelPopup>_CubeModelPopup_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__SettingsFactory____c__DisplayClass64_0___CreateChangeScaleSettings_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SettingsFactory____c__DisplayClass64_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__SettingsFactory____c__DisplayClass64_0);
  original = (this->fields).changeScaleSettingsPrefab;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar1 = (Object__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)original,
                      CubeModelPopup_MethodInfo__UnityEngine__Object__Instantiate<CubeModelPopup>_CubeModelPopup_
                     );
  if (object != (Object *)0x0) {
    bVar2 = iRam_? != 0;
    object[1].klass = pOVar1;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)(object + 1) >> 0xc);
      puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar5 = *puVar4;
        LOCK();
        uVar6 = *puVar4;
        if (uVar5 == uVar6) {
          *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (uVar5 != uVar6);
    }
    if (object[1].klass != (Object__Class *)0x0) {
      CubeModelPopup::CubeModelPopup_Initialize
                ((CubeModelPopup *)object[1].klass,0x15,woID,(MethodInfo *)0x0);
      pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                (this_01,object,
                 MethodInfo__SettingsFactory____c__DisplayClass64_0___CreateChangeScaleSettings_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      pMVar8 = 
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
      ;
      if ((
          UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
          ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Count__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_
                     );
        LOCK();
        UNLOCK();
        if ((pMVar8->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
          FUN_?(pMVar8);
        }
      }
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
                (pGVar7,(IList_1_UnityEngine_Transform_ *)
                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                         s_InternalTransformList,(MethodInfo *)0x0);
      pLVar9 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
               s_InternalTransformList;
      if (pLVar9 != (List_1_UnityEngine_Transform_ *)0x0) {
        lVar10 = (longlong)(pLVar9->fields)._size;
        uVar3 = 0;
        if (0 < lVar10) {
          lVar11 = 0;
          lVar12 = 0x20;
          do {
            if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
              FUN_?();
            }
            pLVar9 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                     s_InternalTransformList;
            if (pLVar9 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
            if ((uint)(pLVar9->fields)._size <= uVar3) {
              mscorlib.dll::System::ThrowHelper::
              ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            pTVar14 = (pLVar9->fields)._items;
            if (pTVar14 == (Transform__Array *)0x0) goto code_?;
            if ((uint)pTVar14->max_length <= uVar3) {
              FUN_?();
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            this_00 = *(Component **)((longlong)pTVar14->vector + lVar12 + -0x20);
            if (this_00 == (Component *)0x0) goto code_?;
            pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                (this_00,(MethodInfo *)0x0);
            bVar15 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                    ExecuteEvents_Execute_18
                              (pGVar7,(BaseEventData *)0x0,this_01,
                               (pMVar8->field7_0x38).rgctx_data[1].method);
            if (bVar15 != 0) {
              UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        (this_00,(MethodInfo *)0x0);
              return;
            }
            uVar3 = uVar3 + 1;
            lVar11 = lVar11 + 1;
            lVar12 = lVar12 + 8;
          } while (lVar11 < lVar10);
        }
        return;
      }
code_?:
      FUN_?();
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void CreateEditablePickupItemsSettings(Int32) */

void Assembly-CSharp.dll::SettingsFactory::SettingsFactory_CreateEditablePickupItemsSettings
               (SettingsFactory *this,int32_t woID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__Assets__Scripts__WorldObjectTypes__EditablePickupItem__MVEditablePickupItemBaseBlueprint
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Costume__CostumeSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Costume::CostumeSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Costume__CostumeSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UGUI__Desktop__Scripts__EditMode__SettingsBoxes__CustomGuns__CustomGunSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::CustomGuns::CustomGunSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__CustomGuns__CustomGunSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UGUI__Desktop__Scripts__EditMode__SettingsBoxes__MeleeWeapons__MeleeWeaponSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::MeleeWeapons::MeleeWeaponSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__MeleeWeapons__MeleeWeaponSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar1 == (MVWorldObjectClientManager *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pMVar3 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                      (pMVar1,woID,(MethodInfo *)0x0);
  if (pMVar3 == (MVWorldObjectClient *)0x0) goto code_?;
  bVar4 = (
          TypeInfo__Assets__Scripts__WorldObjectTypes__EditablePickupItem__MVEditablePickupItemBaseBlueprint
          ->_1).naturalAligment;
  if (((pMVar3->klass->_1).naturalAligment < bVar4) ||
     ((MVEditablePickupItemBaseBlueprint__Class *)
      (pMVar3->klass->_1).typeHierarchy[(ulonglong)bVar4 - 1] !=
      TypeInfo__Assets__Scripts__WorldObjectTypes__EditablePickupItem__MVEditablePickupItemBaseBlueprint
     )) {
    FUN_?(pMVar3,
                  TypeInfo__Assets__Scripts__WorldObjectTypes__EditablePickupItem__MVEditablePickupItemBaseBlueprint
                 );
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pLVar5 = pMVar3[1].fields._.outputLinkRefs;
  if (pLVar5 == (List_1_MV_WorldObject_Link_ *)0x0) goto code_?;
  iVar6 = *(int *)((longlong)&pLVar5[9].fields._items + 4);
  if (iVar6 == 8) {
    pMVar7 = (this->fields).meleeSettingsPrefab;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    pMVar7 = (MeleeWeaponSettings *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)pMVar7,
                         UGUI__Desktop__Scripts__EditMode__SettingsBoxes__MeleeWeapons__MeleeWeaponSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::MeleeWeapons::MeleeWeaponSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__MeleeWeapons__MeleeWeaponSettings_
                        );
    woID_00 = *(int32_t *)&(pLVar5->fields)._items;
    pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    if (pMVar7 != (MeleeWeaponSettings *)0x0) {
      UGUI::Desktop::Scripts::EditMode::SettingsBoxes::MeleeWeapons::MeleeWeaponSettings::
      MeleeWeaponSettings_Initialize(pMVar7,woID_00,pGVar8,(MethodInfo *)0x0);
      return;
    }
    goto code_?;
  }
  if (iVar6 == 0xf) {
    original = (this->fields).customGunSettingsPrefab;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    pOVar9 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)original,
                         UGUI__Desktop__Scripts__EditMode__SettingsBoxes__CustomGuns__CustomGunSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::CustomGuns::CustomGunSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__CustomGuns__CustomGunSettings_
                        );
    uVar10 = *(undefined4 *)&(pLVar5->fields)._items;
    pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    if (pOVar9 != (Object *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)pOVar9->klass[1]._0.declaringType)
                (pOVar9,uVar10,pGVar8,pOVar9->klass[1]._0.parent);
      return;
    }
    goto code_?;
  }
  if (iVar6 != 0x3b) {
    return;
  }
  pCVar11 = (this->fields).costumeSettingsPrefab;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pCVar11 = (CostumeSettings *)
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                      ((Object *)pCVar11,
                       UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Costume__CostumeSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Costume::CostumeSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Costume__CostumeSettings_
                      );
  iVar6 = *(int *)&(pLVar5->fields)._items;
  pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  if (pCVar11 == (CostumeSettings *)0x0) goto code_?;
  uVar12 = 0;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__Costume__CostumeData,iVar6,pGVar8,0
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
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_TrailEnabled);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_TrailLength);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_PlayersCanCollide);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_TrailColor);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_PlayerInvisible);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Name);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Health);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_MovementSpeed);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar13 = (String *)0x0;
  if (iVar6 == -1) {
    if (*(int *)&(TypeInfo__Assets__Scripts__WorldObjectTypes__Costume__CostumeData->_1).field_0x1c
        == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MV__Common__AvatarItemType);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__Costume__CostumeData);
      LOCK();
      UNLOCK();
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
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_itemData);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_itemType);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this_02 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
               *)FUN_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::UIR::UIRenderDevice+DisableForceGammaMaterial]::
    Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
              (this_02,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    if (*(int *)&(TypeInfo__Assets__Scripts__WorldObjectTypes__Costume__CostumeData->_1).field_0x1c
        == 0) {
      FUN_?();
    }
    pDVar14 = Assets::Scripts::WorldObjectTypes::Costume::CostumeData::CostumeData_DefaultItemData
                        ((MethodInfo *)0x0);
    if (this_02 ==
        (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
         *)0x0) goto code_?;
    uVar12 = CONCAT71((int7)((ulonglong)uVar12 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this_02,(Object *)StringLiteral_itemData
               ,(Object *)pDVar14,(InsertionBehavior__Enum)uVar12,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    pOVar9 = (Object *)FUN_?(TypeInfo__MV__Common__AvatarItemType,&stack0x00000010);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this_02,(Object *)StringLiteral_itemType
               ,pOVar9,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar12 >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    bVar15 = iRam_? != 0;
    (pCVar11->fields).data = (Dictionary_2_System_Object_System_Object_ *)this_02;
    if (bVar15) {
      uVar16 = (uint)((ulonglong)&(pCVar11->fields).data >> 0xc);
      uVar17 = (ulonglong)((uVar16 & 0x1fffff) >> 6);
      do {
        uVar18 = *(ulonglong *)(uVar17 * 8 + 0xADDR);
        puVar19 = (ulonglong *)(uVar17 * 8 + 0xADDR);
        LOCK();
        bVar15 = uVar18 == *puVar19;
        if (bVar15) {
          *puVar19 = uVar18 | 1L << (uVar16 & 0x3f);
        }
        UNLOCK();
      } while (!bVar15);
    }
    pDVar14 = (pCVar11->fields).data;
    if (pDVar14 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    pDVar14 = (Dictionary_2_System_Object_System_Object_ *)
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__get_Item
                        (pDVar14,(Object *)StringLiteral_itemData,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
    if (pDVar14 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
      (pCVar11->fields).itemData = (Dictionary_2_System_Object_System_Object_ *)0x0;
    }
    else {
      bVar4 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).naturalAligment;
      if (((pDVar14->klass->_1).naturalAligment < bVar4) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (pDVar14->klass->_1).typeHierarchy[(ulonglong)bVar4 - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        FUN_?(pDVar14);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (pCVar11->fields).itemData = pDVar14;
      bVar4 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).naturalAligment;
      if (((pDVar14->klass->_1).naturalAligment < bVar4) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (pDVar14->klass->_1).typeHierarchy[(ulonglong)bVar4 - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        FUN_?(pDVar14);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar16 = (uint)((ulonglong)&(pCVar11->fields).itemData >> 0xc);
      uVar17 = (ulonglong)((uVar16 & 0x1fffff) >> 6);
      do {
        uVar18 = *(ulonglong *)(uVar17 * 8 + 0xADDR);
        puVar19 = (ulonglong *)(uVar17 * 8 + 0xADDR);
        LOCK();
        bVar15 = uVar18 == *puVar19;
        if (bVar15) {
          *puVar19 = uVar18 | 1L << (uVar16 & 0x3f);
        }
        UNLOCK();
      } while (!bVar15);
    }
  }
  else {
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if ((pMVar1 == (MVWorldObjectClientManager *)0x0) ||
       (pMVar3 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                            (pMVar1,iVar6,(MethodInfo *)0x0), pMVar3 == (MVWorldObjectClient *)0x0
       )) goto code_?;
    bVar15 = iRam_? != 0;
    (pCVar11->fields).data = (pMVar3->fields)._.data;
    if (bVar15) {
      uVar16 = (uint)((ulonglong)&(pCVar11->fields).data >> 0xc);
      uVar17 = (ulonglong)((uVar16 & 0x1fffff) >> 6);
      do {
        uVar18 = *(ulonglong *)(uVar17 * 8 + 0xADDR);
        puVar19 = (ulonglong *)(uVar17 * 8 + 0xADDR);
        LOCK();
        bVar15 = uVar18 == *puVar19;
        if (bVar15) {
          *puVar19 = uVar18 | 1L << (uVar16 & 0x3f);
        }
        UNLOCK();
      } while (!bVar15);
    }
    pDVar14 = UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Costume::CostumeSettings::
              CostumeSettings_ReadWorldObjectItemData
                        (pCVar11,(pCVar11->fields).data,(MethodInfo *)0x0);
    bVar15 = iRam_? != 0;
    (pCVar11->fields).itemData = pDVar14;
    if (bVar15) {
      uVar16 = (uint)((ulonglong)&(pCVar11->fields).itemData >> 0xc);
      uVar17 = (ulonglong)((uVar16 & 0x1fffff) >> 6);
      do {
        uVar18 = *(ulonglong *)(uVar17 * 8 + 0xADDR);
        puVar19 = (ulonglong *)(uVar17 * 8 + 0xADDR);
        LOCK();
        bVar15 = uVar18 == *puVar19;
        if (bVar15) {
          *puVar19 = uVar18 | 1L << (uVar16 & 0x3f);
        }
        UNLOCK();
      } while (!bVar15);
    }
  }
  this_00 = (pCVar11->fields).settingsBase;
  if (this_00 != (SettingsBase *)0x0) {
    SettingsBase::SettingsBase_Initialize
              (this_00,iVar6,pGVar8,MVWorldObjectDocumentationType__Enum_Costume,(MethodInfo *)0x0)
    ;
    if (*(int *)&(TypeInfo__Assets__Scripts__WorldObjectTypes__Costume__CostumeData->_1).field_0x1c
        == 0) {
      FUN_?();
    }
    VVar20 = Assets::Scripts::WorldObjectTypes::Costume::CostumeData::CostumeData_MinMaxValue
                       (StringLiteral_Health,(MethodInfo *)0x0);
    VStack_21 = Assets::Scripts::WorldObjectTypes::Costume::CostumeData::CostumeData_MinMaxValue
                          (StringLiteral_MovementSpeed,(MethodInfo *)0x0);
    VStack_22 = Assets::Scripts::WorldObjectTypes::Costume::CostumeData::CostumeData_MinMaxValue
                          (StringLiteral_TrailLength,(MethodInfo *)0x0);
    pDVar14 = (pCVar11->fields).itemData;
    this_01 = (pCVar11->fields).nameInputField;
    if ((pDVar14 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
       (pSVar23 = (String *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__get_Item
                            (pDVar14,(Object *)StringLiteral_Name,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            ), this_01 != (SettingsInputField *)0x0)) {
      if (pSVar23 != (String *)0x0) {
        if (pSVar23->klass == pSRam0000000182db2520) {
          pSVar13 = pSVar23;
        }
        if (pSVar13 == (String *)0x0) {
          FUN_?(pSVar23);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      SettingsInputField::SettingsInputField_Initialize
                (this_01,StringLiteral_Name,pSVar13,(MethodInfo *)0x0);
      pDVar14 = (pCVar11->fields).itemData;
      pSVar24 = (pCVar11->fields).healthSlider;
      if (((pDVar14 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
          (pOVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                     ::Object]::Dictionary_2_System_Object_System_Object__get_Item
                               (pDVar14,(Object *)StringLiteral_Health,
                                MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                               ), pSVar24 != (SettingsSlider *)0x0)) && (pOVar9 != (Object *)0x0)) {
        if ((pOVar9->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
          FUN_?(pOVar9,lRam_?);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        fStack_25 = VVar20.Item2;
        fStack_26 = VVar20.Item1;
        SettingsSlider::SettingsSlider_Initialize
                  (pSVar24,StringLiteral_Health,*(float *)&pOVar9[1].klass,fStack_26,fStack_25,
                   (MethodInfo *)0x0);
        pDVar14 = (pCVar11->fields).itemData;
        pSVar27 = (pCVar11->fields).healthInputSlider;
        if (((pDVar14 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
            (pOVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Object,System::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                 (pDVar14,(Object *)StringLiteral_Health,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                 ), pSVar27 != (SettingsInputFieldSlider *)0x0)) &&
           (pOVar9 != (Object *)0x0)) {
          if ((pOVar9->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40))
          {
            FUN_?(pOVar9,lRam_?);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_1
                    (pSVar27,StringLiteral_Health,*(float *)&pOVar9[1].klass,(MethodInfo *)0x0);
          pDVar14 = (pCVar11->fields).itemData;
          pSVar24 = (pCVar11->fields).movementSpeedSlider;
          if (((pDVar14 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
              (pOVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Object,System::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                   (pDVar14,(Object *)StringLiteral_MovementSpeed,
                                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                   ), pSVar24 != (SettingsSlider *)0x0)) &&
             (pOVar9 != (Object *)0x0)) {
            if ((pOVar9->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)
               ) {
              FUN_?(pOVar9,lRam_?);
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            SettingsSlider::SettingsSlider_Initialize
                      (pSVar24,StringLiteral_MovementSpeed,*(float *)&pOVar9[1].klass,
                       VStack_21.Item1,VStack_21.Item2,(MethodInfo *)0x0);
            pDVar14 = (pCVar11->fields).itemData;
            pSVar27 = (pCVar11->fields).movementSpeedInputSlider;
            if (((pDVar14 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
                (pOVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                           Object,System::Object]::
                           Dictionary_2_System_Object_System_Object__get_Item
                                     (pDVar14,(Object *)StringLiteral_MovementSpeed,
                                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                     ), pSVar27 != (SettingsInputFieldSlider *)0x0)) &&
               (pOVar9 != (Object *)0x0)) {
              if ((pOVar9->klass->_0).element_class !=
                  *(Il2CppClass **)(lRam_? + 0x40)) {
                FUN_?(pOVar9,lRam_?);
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_1
                        (pSVar27,StringLiteral_MovementSpeed,*(float *)&pOVar9[1].klass,
                         (MethodInfo *)0x0);
              pDVar14 = (pCVar11->fields).itemData;
              pSVar28 = (pCVar11->fields).playerInvisibleToggle;
              if (((pDVar14 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
                  (pOVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                             Object,System::Object]::
                             Dictionary_2_System_Object_System_Object__get_Item
                                       (pDVar14,(Object *)StringLiteral_PlayerInvisible,
                                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                       ), pSVar28 != (SettingsToggle *)0x0)) &&
                 (pOVar9 != (Object *)0x0)) {
                if ((pOVar9->klass->_0).element_class !=
                    *(Il2CppClass **)(lRam_? + 0x40)) {
                  FUN_?(pOVar9,lRam_?);
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                SettingsToggle::SettingsToggle_Initialize
                          (pSVar28,StringLiteral_PlayerInvisible,*(bool *)&pOVar9[1].klass,
                           (MethodInfo *)0x0);
                pDVar14 = (pCVar11->fields).itemData;
                pSVar28 = (pCVar11->fields).playersCanCollideToggle;
                if (((pDVar14 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
                    (pOVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                               Object,System::Object]::
                               Dictionary_2_System_Object_System_Object__get_Item
                                         (pDVar14,(Object *)StringLiteral_PlayersCanCollide,
                                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                         ), pSVar28 != (SettingsToggle *)0x0)) &&
                   (pOVar9 != (Object *)0x0)) {
                  if ((pOVar9->klass->_0).element_class !=
                      *(Il2CppClass **)(lRam_? + 0x40)) {
                    FUN_?(pOVar9,lRam_?);
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  SettingsToggle::SettingsToggle_Initialize
                            (pSVar28,StringLiteral_PlayersCanCollide,*(bool *)&pOVar9[1].klass,
                             (MethodInfo *)0x0);
                  pDVar14 = (pCVar11->fields).itemData;
                  pSVar28 = (pCVar11->fields).trailToggle;
                  if (((pDVar14 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
                      (pOVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                 Object,System::Object]::
                                 Dictionary_2_System_Object_System_Object__get_Item
                                           (pDVar14,(Object *)StringLiteral_TrailEnabled,
                                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                           ), pSVar28 != (SettingsToggle *)0x0)) &&
                     (pOVar9 != (Object *)0x0)) {
                    if ((pOVar9->klass->_0).element_class !=
                        *(Il2CppClass **)(lRam_? + 0x40)) {
                      FUN_?(pOVar9,lRam_?);
                      pcVar2 = (code *)swi(3);
                      (*pcVar2)();
                      return;
                    }
                    SettingsToggle::SettingsToggle_Initialize
                              (pSVar28,StringLiteral_TrailEnabled,*(bool *)&pOVar9[1].klass,
                               (MethodInfo *)0x0);
                    pDVar14 = (pCVar11->fields).itemData;
                    pSVar24 = (pCVar11->fields).trailLengthSlider;
                    if (((pDVar14 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
                        (pOVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                   Object,System::Object]::
                                   Dictionary_2_System_Object_System_Object__get_Item
                                             (pDVar14,(Object *)StringLiteral_TrailLength,
                                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                             ), pSVar24 != (SettingsSlider *)0x0)) &&
                       (pOVar9 != (Object *)0x0)) {
                      if ((pOVar9->klass->_0).element_class !=
                          *(Il2CppClass **)(lRam_? + 0x40)) {
                        FUN_?(pOVar9,lRam_?);
                        pcVar2 = (code *)swi(3);
                        (*pcVar2)();
                        return;
                      }
                      SettingsSlider::SettingsSlider_Initialize
                                (pSVar24,StringLiteral_TrailLength,*(float *)&pOVar9[1].klass,
                                 VStack_22.Item1,VStack_22.Item2,(MethodInfo *)0x0);
                      pDVar14 = (pCVar11->fields).itemData;
                      pSVar27 = (pCVar11->fields).trailLengthInputSlider;
                      if (((pDVar14 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
                          (pOVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System
                                     ::Object,System::Object]::
                                     Dictionary_2_System_Object_System_Object__get_Item
                                               (pDVar14,(Object *)StringLiteral_TrailLength,
                                                MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                               ), pSVar27 != (SettingsInputFieldSlider *)0x0)) &&
                         (pOVar9 != (Object *)0x0)) {
                        if ((pOVar9->klass->_0).element_class !=
                            *(Il2CppClass **)(lRam_? + 0x40)) {
                          FUN_?(pOVar9,lRam_?);
                          pcVar2 = (code *)swi(3);
                          (*pcVar2)();
                          return;
                        }
                        SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_1
                                  (pSVar27,StringLiteral_TrailLength,*(float *)&pOVar9[1].klass,
                                   (MethodInfo *)0x0);
                        pIVar29 = (pCVar11->fields).trailColorImage;
                        pDVar14 = (pCVar11->fields).itemData;
                        if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
                          FUN_?();
                        }
                        pSVar13 = StringLiteral_TrailColor;
                        if (cRam_? == '\0') {
                          FUN_?(&TypeInfo__Extensions);
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
                          FUN_?();
                        }
                        VStack_22.Item1 = 0.0;
                        VStack_22.Item2 = 0.0;
                        puStack_30 = (undefined *)0x0;
                        pCVar31 = Extensions::Extensions_GetColorOrDefault
                                            ((Color *)&VStack_21,pDVar14,pSVar13,(Color *)&VStack_22
                                             ,(MethodInfo *)0x0);
                        if (pIVar29 != (Image *)0x0) {
                          VStack_22.Item1 = pCVar31->r;
                          VStack_22.Item2 = pCVar31->g;
                          puStack_30._0_4_ = pCVar31->b;
                          puStack_30._4_4_ = pCVar31->a;
                          (*(pIVar29->klass->vtable).set_color.methodPtr)
                                    (pIVar29,&VStack_22,(pIVar29->klass->vtable).set_color.method);
                          return;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void CreateGamePointsMinorRewardSettings(Int32) */

void Assembly-CSharp.dll::SettingsFactory::SettingsFactory_CreateGamePointsMinorRewardSettings
               (SettingsFactory *this,int32_t woID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  GamePointMinorRewardSettings_MethodInfo__UnityEngine__Object__Instantiate<GamePointMinorRewardSettings>_GamePointMinorRewardSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  original = (this->fields).gamePointMinorRewardSettingsPrefab;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                      ((Object *)original,
                       GamePointMinorRewardSettings_MethodInfo__UnityEngine__Object__Instantiate<GamePointMinorRewardSettings>_GamePointMinorRewardSettings_
                      );
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if (pOVar1 == (Object *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
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
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Crystal_Reward);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_gamePointAmount);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar3 = pOVar1[2].klass;
  *(int32_t *)&pOVar1[3].monitor = woID;
  pSVar4 = StringLiteral_Crystal_Reward;
  if (pOVar3 == (Object__Class *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pTVar5 = (Text *)(pOVar3->_0).byval_arg.data.array;
  (pOVar3->_0).byval_arg.attrs = (short)woID;
  (pOVar3->_0).byval_arg.type = (char)((uint)woID >> 0x10);
  (pOVar3->_0).byval_arg.field_0xb = (char)((uint)woID >> 0x18);
  if (pTVar5 == (Text *)0x0) goto code_?;
  (*(pTVar5->klass->vtable).set_text.methodPtr)
            (pTVar5,pSVar4,(pTVar5->klass->vtable).set_text.method);
  uVar6 = 0;
  SettingsBase::SettingsBase_InitializeHierarchy((SettingsBase *)pOVar3,woID,root,(MethodInfo *)0x0)
  ;
  this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (((this_02 == (MVWorldObjectClientManager *)0x0) ||
      (pMVar7 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                           (this_02,woID,(MethodInfo *)0x0), pMVar7 == (MVWorldObjectClient *)0x0))
     || (this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                    *)(pMVar7->fields)._.data,
        this_00 ==
        (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)
        0x0)) goto code_?;
  iVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
          UIElements::StyleComplexSelector+PseudoStateData]::
          Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                    (this_00,(Object *)StringLiteral_gamePointAmount,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                     ->klass->rgctx_data[0x21].method);
  lVar9 = lRam_?;
  if (iVar8 < 0) {
    pOVar10 = (Object *)(unaff_RBX & 0xffffffff00000000);
    if (*(int *)(lRam_? + 0x28) < 0) {
      if ((*(longlong *)(lRam_? + 0x60) == 0) ||
         ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
        pOVar10 = (Object *)FUN_?(lRam_?);
        FUN_?(pOVar10 + 1,&stack0x00000008,(longlong)*(int *)(lVar9 + 0xf8) + -0x10);
        if (iRam_? != 0) {
          uVar11 = (uint)((ulonglong)(pOVar10 + 1) >> 0xc);
          uVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
          uVar6 = (ulonglong)(uVar11 & 0x3f);
          do {
            uVar13 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
            puVar14 = (ulonglong *)(uVar12 * 8 + 0xADDR);
            LOCK();
            bVar15 = uVar13 == *puVar14;
            if (bVar15) {
              *puVar14 = uVar13 | 1L << uVar6;
            }
            UNLOCK();
          } while (!bVar15);
        }
      }
      else {
        pOVar10 = (Object *)0x0;
      }
    }
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this_00,
               (Object *)StringLiteral_gamePointAmount,pOVar10,
               (InsertionBehavior__Enum)CONCAT71((int7)(uVar6 >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
  }
  pOVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__get_Item
                      ((Dictionary_2_System_Object_System_Object_ *)this_00,
                       (Object *)StringLiteral_gamePointAmount,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
  if (pOVar10 == (Object *)0x0) goto code_?;
  if ((pOVar10->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
    FUN_?(pOVar10,lRam_?);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((SettingsSlider *)pOVar1[2].monitor == (SettingsSlider *)0x0) goto code_?;
  iVar8 = *(int32_t *)&pOVar10[1].klass;
  SettingsSlider::SettingsSlider_Initialize_1
            ((SettingsSlider *)pOVar1[2].monitor,StringLiteral_gamePointAmount,iVar8,0,100,
             (MethodInfo *)0x0);
  pOVar3 = pOVar1[3].klass;
  if (pOVar3 == (Object__Class *)0x0) goto code_?;
  bVar15 = iRam_? != 0;
  (pOVar3->_0).element_class = (Il2CppClass *)StringLiteral_gamePointAmount;
  if (bVar15) {
    uVar11 = (uint)((ulonglong)&(pOVar3->_0).element_class >> 0xc);
    uVar6 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
    do {
      uVar12 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar14 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar15 = uVar12 == *puVar14;
      if (bVar15) {
        *puVar14 = uVar12 | 1L << (uVar11 & 0x3f);
      }
      UNLOCK();
    } while (!bVar15);
  }
  inputFieldValue =
       SettingsInputFieldSlider::SettingsInputFieldSlider_GetInputFieldValue
                 ((SettingsInputFieldSlider *)pOVar3,(float)iVar8,(MethodInfo *)0x0);
  pSVar4 = SettingsInputFieldSlider::SettingsInputFieldSlider_ConvertFloatToString
                      (inputFieldValue,(MethodInfo *)0x0);
  this_01 = (InputField *)(pOVar3->_0).byval_arg.data.array;
  if (this_01 == (InputField *)0x0) {
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
  pSVar16 = (this_01->fields).m_Text;
  if (pSVar16 == pSVar4) {
    return;
  }
  if (pSVar16 == (String *)0x0) {
code_?:
    if (pSVar4 == (String *)0x0) {
code_?:
      pSVar4 = ::StringLiteral__;
      if (::StringLiteral__ == (String *)0x0) goto DAT_?;
    }
  }
  else {
    if (pSVar4 == (String *)0x0) goto code_?;
    if ((pSVar16->fields)._stringLength == (pSVar4->fields)._stringLength) {
      bVar17 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                        ((uint8_t *)&(pSVar16->fields)._firstChar,
                         (uint8_t *)&(pSVar4->fields)._firstChar,
                         (longlong)(pSVar16->fields)._stringLength * 2,(MethodInfo *)0x0);
      if (bVar17 != 0) {
        return;
      }
      goto code_?;
    }
  }
  pSVar4 = mscorlib.dll::System::String::String_Replace_1
                      (pSVar4,::StringLiteral__,
                       (String *)**(undefined8 **)(lRam_? + 0xb8),(MethodInfo *)0x0);
  if ((this_01->fields).m_LineType == 0) {
    if ((pSVar4 == (String *)0x0) ||
       (pSVar4 = mscorlib.dll::System::String::String_Replace_1
                            (pSVar4,StringLiteral_u000A,::StringLiteral__,(MethodInfo *)0x0),
       pSVar4 == (String *)0x0)) goto DAT_?;
    pSVar4 = mscorlib.dll::System::String::String_Replace_1
                        (pSVar4,StringLiteral_u0009,::StringLiteral__,(MethodInfo *)0x0);
  }
  if (((this_01->fields).m_OnValidateInput == (InputField_OnValidateInput *)0x0) &&
     ((this_01->fields).m_CharacterValidation == 0)) {
    if (0 < (this_01->fields).m_CharacterLimit) {
      if (pSVar4 == (String *)0x0) goto DAT_?;
      iVar18 = (this_01->fields).m_CharacterLimit;
      if (iVar18 < (pSVar4->fields)._stringLength) {
        pSVar4 = mscorlib.dll::System::String::String_Substring_1
                            (pSVar4,0,iVar18,(MethodInfo *)0x0);
      }
    }
    (this_01->fields).m_Text = pSVar4;
    func_?(&(this_01->fields).m_Text);
  }
  else {
    bVar15 = iRam_? != 0;
    (this_01->fields).m_Text = ::StringLiteral__;
    if (bVar15) {
      uVar11 = (uint)((ulonglong)&(this_01->fields).m_Text >> 0xc);
      lVar9 = (ulonglong)((uVar11 & 0x1fffff) >> 6) * 8;
      do {
        uVar6 = *(ulonglong *)(lVar9 + 0xADDR);
        puVar14 = (ulonglong *)(lVar9 + 0xADDR);
        LOCK();
        bVar15 = uVar6 == *puVar14;
        if (bVar15) {
          *puVar14 = uVar6 | 1L << (uVar11 & 0x3f);
        }
        UNLOCK();
      } while (!bVar15);
    }
    pIVar19 = (this_01->fields).m_OnValidateInput;
    if (pIVar19 == (InputField_OnValidateInput *)0x0) {
      pIVar19 = (InputField_OnValidateInput *)
                FUN_?(TypeInfo__UnityEngine__UI__InputField__OnValidateInput);
      pMVar20 = MethodInfo__UnityEngine__UI__InputField__Validate_System__String__int__wchar_t_;
      bVar15 = iRam_? != 0;
      (pIVar19->fields)._._.method_ptr =
           MethodInfo__UnityEngine__UI__InputField__Validate_System__String__int__wchar_t_->
           virtualMethodPointer;
      (pIVar19->fields)._._.method = pMVar20;
      (pIVar19->fields)._._.m_target = (Object *)this_01;
      if (bVar15) {
        uVar11 = (uint)((ulonglong)&(pIVar19->fields)._._.m_target >> 0xc);
        lVar9 = (ulonglong)((uVar11 & 0x1fffff) >> 6) * 8;
        do {
          uVar6 = *(ulonglong *)(lVar9 + 0xADDR);
          puVar14 = (ulonglong *)(lVar9 + 0xADDR);
          LOCK();
          bVar15 = uVar6 == *puVar14;
          if (bVar15) {
            *puVar14 = uVar6 | 1L << (uVar11 & 0x3f);
          }
          UNLOCK();
        } while (!bVar15);
      }
      uVar21 = pMVar20->parameters_count;
      (pIVar19->fields)._._.method_code = pIVar19;
      if ((pMVar20->flags & 0x10) == 0) {
        if (uVar21 != 2) goto code_?;
        pcVar2 = FUN_?;
      }
      else if (uVar21 == 3) {
        pcVar2 = FUN_?;
      }
      else {
code_?:
        (pIVar19->fields)._._.method_code = (pIVar19->fields)._._.m_target;
        pcVar2 = (pIVar19->fields)._._.method_ptr;
      }
      (pIVar19->fields)._._.invoke_impl = pcVar2;
      (pIVar19->fields)._._.extra_arg = FUN_?;
    }
    if (pSVar4 == (String *)0x0) goto DAT_?;
    iVar8 = (pSVar4->fields)._stringLength;
    (this_01->fields).m_CaretSelectPosition = iVar8;
    (this_01->fields).m_CaretPosition = iVar8;
    if ((this_01->fields).m_CharacterLimit < 1) {
      iVar18 = (pSVar4->fields)._stringLength;
    }
    else {
      iVar18 = (this_01->fields).m_CharacterLimit;
      iVar22 = (pSVar4->fields)._stringLength;
      if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (iVar22 < iVar18) {
        iVar18 = iVar22;
      }
    }
    uVar11 = 0;
    if (0 < iVar18) {
      puVar23 = &(pSVar4->fields)._firstChar;
      lVar9 = 0;
      do {
        pSVar16 = (this_01->fields).m_Text;
        if (pSVar16 == (String *)0x0) goto DAT_?;
        if ((longlong)(pSVar4->fields)._stringLength <= (longlong)(ulonglong)uVar11) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowIndexOutOfRangeException
                    ((MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (pIVar19 == (InputField_OnValidateInput *)0x0) goto DAT_?;
        c = (*(pIVar19->fields)._._.invoke_impl)
                      ((pIVar19->fields)._._.method_code,(this_01->fields).m_Text,
                       (pSVar16->fields)._stringLength,*puVar23,(pIVar19->fields)._._.method);
        if (c != 0) {
          pSVar16 = (this_01->fields).m_Text;
          if ((*(int *)(lRam_? + 0xe4) == 0) &&
             (FUN_?(), *(int *)(lRam_? + 0xe4) == 0)) {
            FUN_?();
          }
          str1 = mscorlib.dll::System::Char::Char_ToString_2(c,(MethodInfo *)0x0);
          pSVar16 = mscorlib.dll::System::String::String_Concat_4(pSVar16,str1,(MethodInfo *)0x0);
          (this_01->fields).m_Text = pSVar16;
          func_?(&(this_01->fields).m_Text);
        }
        uVar11 = uVar11 + 1;
        lVar9 = lVar9 + 1;
        puVar23 = puVar23 + 1;
      } while (lVar9 < iVar18);
    }
  }
  if ((this_01->fields).m_Keyboard != (TouchScreenKeyboard *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::TouchScreenKeyboard::TouchScreenKeyboard_set_text
              ((this_01->fields).m_Keyboard,(this_01->fields).m_Text,(MethodInfo *)0x0);
  }
  pSVar4 = (this_01->fields).m_Text;
  if (pSVar4 == (String *)0x0) {
DAT_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar18 = (pSVar4->fields)._stringLength;
  if (iVar18 < (this_01->fields).m_CaretPosition) {
    (this_01->fields).m_CaretPosition = iVar18;
  }
  else if ((this_01->fields).m_CaretSelectPosition <= iVar18) goto code_?;
  (this_01->fields).m_CaretSelectPosition = iVar18;
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
            (StringLiteral_InputField_value,(Object_1 *)this_01,(MethodInfo *)0x0);
  if ((this_01->fields).m_OnValueChanged != (InputField_OnChangeEvent *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent`1[System::Object]::
    UnityEvent_1_System_Object__Invoke
              ((UnityEvent_1_System_Object_ *)(this_01->fields).m_OnValueChanged,
               (Object *)(this_01->fields).m_Text,
               MethodInfo__UnityEngine__Events__UnityEvent<System::String>__Invoke_System__String_);
  }
  UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_UpdateLabel(this_01,(MethodInfo *)0x0)
  ;
  return;
}


/* Void CreateGamePointsSettings(Int32) */

void Assembly-CSharp.dll::SettingsFactory::SettingsFactory_CreateGamePointsSettings
               (SettingsFactory *this,int32_t woID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  GamePointSettings_MethodInfo__UnityEngine__Object__Instantiate<GamePointSettings>_GamePointSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  original = (this->fields).gamePointSettingsPrefab;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                      ((Object *)original,
                       GamePointSettings_MethodInfo__UnityEngine__Object__Instantiate<GamePointSettings>_GamePointSettings_
                      );
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if (pOVar1 == (Object *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
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
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Crystal_Reward);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_gamePointAmount);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar3 = pOVar1[2].klass;
  *(int32_t *)&pOVar1[3].monitor = woID;
  pSVar4 = StringLiteral_Crystal_Reward;
  if (pOVar3 == (Object__Class *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pTVar5 = (Text *)(pOVar3->_0).byval_arg.data.array;
  (pOVar3->_0).byval_arg.attrs = (short)woID;
  (pOVar3->_0).byval_arg.type = (char)((uint)woID >> 0x10);
  (pOVar3->_0).byval_arg.field_0xb = (char)((uint)woID >> 0x18);
  if (pTVar5 == (Text *)0x0) goto code_?;
  (*(pTVar5->klass->vtable).set_text.methodPtr)
            (pTVar5,pSVar4,(pTVar5->klass->vtable).set_text.method);
  uVar6 = 0;
  SettingsBase::SettingsBase_InitializeHierarchy((SettingsBase *)pOVar3,woID,root,(MethodInfo *)0x0)
  ;
  this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (((this_02 == (MVWorldObjectClientManager *)0x0) ||
      (pMVar7 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                           (this_02,woID,(MethodInfo *)0x0), pMVar7 == (MVWorldObjectClient *)0x0))
     || (this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                    *)(pMVar7->fields)._.data,
        this_00 ==
        (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)
        0x0)) goto code_?;
  iVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
          UIElements::StyleComplexSelector+PseudoStateData]::
          Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                    (this_00,(Object *)StringLiteral_gamePointAmount,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                     ->klass->rgctx_data[0x21].method);
  lVar9 = lRam_?;
  if (iVar8 < 0) {
    pOVar10 = (Object *)(unaff_RBX & 0xffffffff00000000);
    if (*(int *)(lRam_? + 0x28) < 0) {
      if ((*(longlong *)(lRam_? + 0x60) == 0) ||
         ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
        pOVar10 = (Object *)FUN_?(lRam_?);
        FUN_?(pOVar10 + 1,&stack0x00000008,(longlong)*(int *)(lVar9 + 0xf8) + -0x10);
        if (iRam_? != 0) {
          uVar11 = (uint)((ulonglong)(pOVar10 + 1) >> 0xc);
          uVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
          uVar6 = (ulonglong)(uVar11 & 0x3f);
          do {
            uVar13 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
            puVar14 = (ulonglong *)(uVar12 * 8 + 0xADDR);
            LOCK();
            bVar15 = uVar13 == *puVar14;
            if (bVar15) {
              *puVar14 = uVar13 | 1L << uVar6;
            }
            UNLOCK();
          } while (!bVar15);
        }
      }
      else {
        pOVar10 = (Object *)0x0;
      }
    }
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this_00,
               (Object *)StringLiteral_gamePointAmount,pOVar10,
               (InsertionBehavior__Enum)CONCAT71((int7)(uVar6 >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
  }
  pOVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__get_Item
                      ((Dictionary_2_System_Object_System_Object_ *)this_00,
                       (Object *)StringLiteral_gamePointAmount,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
  if (pOVar10 == (Object *)0x0) goto code_?;
  if ((pOVar10->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
    FUN_?(pOVar10,lRam_?);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((SettingsSlider *)pOVar1[2].monitor == (SettingsSlider *)0x0) goto code_?;
  iVar8 = *(int32_t *)&pOVar10[1].klass;
  SettingsSlider::SettingsSlider_Initialize_1
            ((SettingsSlider *)pOVar1[2].monitor,StringLiteral_gamePointAmount,iVar8,0,1000,
             (MethodInfo *)0x0);
  pOVar3 = pOVar1[3].klass;
  if (pOVar3 == (Object__Class *)0x0) goto code_?;
  bVar15 = iRam_? != 0;
  (pOVar3->_0).element_class = (Il2CppClass *)StringLiteral_gamePointAmount;
  if (bVar15) {
    uVar11 = (uint)((ulonglong)&(pOVar3->_0).element_class >> 0xc);
    uVar6 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
    do {
      uVar12 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar14 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar15 = uVar12 == *puVar14;
      if (bVar15) {
        *puVar14 = uVar12 | 1L << (uVar11 & 0x3f);
      }
      UNLOCK();
    } while (!bVar15);
  }
  inputFieldValue =
       SettingsInputFieldSlider::SettingsInputFieldSlider_GetInputFieldValue
                 ((SettingsInputFieldSlider *)pOVar3,(float)iVar8,(MethodInfo *)0x0);
  pSVar4 = SettingsInputFieldSlider::SettingsInputFieldSlider_ConvertFloatToString
                      (inputFieldValue,(MethodInfo *)0x0);
  this_01 = (InputField *)(pOVar3->_0).byval_arg.data.array;
  if (this_01 == (InputField *)0x0) {
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
  pSVar16 = (this_01->fields).m_Text;
  if (pSVar16 == pSVar4) {
    return;
  }
  if (pSVar16 == (String *)0x0) {
code_?:
    if (pSVar4 == (String *)0x0) {
code_?:
      pSVar4 = ::StringLiteral__;
      if (::StringLiteral__ == (String *)0x0) goto DAT_?;
    }
  }
  else {
    if (pSVar4 == (String *)0x0) goto code_?;
    if ((pSVar16->fields)._stringLength == (pSVar4->fields)._stringLength) {
      bVar17 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                        ((uint8_t *)&(pSVar16->fields)._firstChar,
                         (uint8_t *)&(pSVar4->fields)._firstChar,
                         (longlong)(pSVar16->fields)._stringLength * 2,(MethodInfo *)0x0);
      if (bVar17 != 0) {
        return;
      }
      goto code_?;
    }
  }
  pSVar4 = mscorlib.dll::System::String::String_Replace_1
                      (pSVar4,::StringLiteral__,
                       (String *)**(undefined8 **)(lRam_? + 0xb8),(MethodInfo *)0x0);
  if ((this_01->fields).m_LineType == 0) {
    if ((pSVar4 == (String *)0x0) ||
       (pSVar4 = mscorlib.dll::System::String::String_Replace_1
                            (pSVar4,StringLiteral_u000A,::StringLiteral__,(MethodInfo *)0x0),
       pSVar4 == (String *)0x0)) goto DAT_?;
    pSVar4 = mscorlib.dll::System::String::String_Replace_1
                        (pSVar4,StringLiteral_u0009,::StringLiteral__,(MethodInfo *)0x0);
  }
  if (((this_01->fields).m_OnValidateInput == (InputField_OnValidateInput *)0x0) &&
     ((this_01->fields).m_CharacterValidation == 0)) {
    if (0 < (this_01->fields).m_CharacterLimit) {
      if (pSVar4 == (String *)0x0) goto DAT_?;
      iVar18 = (this_01->fields).m_CharacterLimit;
      if (iVar18 < (pSVar4->fields)._stringLength) {
        pSVar4 = mscorlib.dll::System::String::String_Substring_1
                            (pSVar4,0,iVar18,(MethodInfo *)0x0);
      }
    }
    (this_01->fields).m_Text = pSVar4;
    func_?(&(this_01->fields).m_Text);
  }
  else {
    bVar15 = iRam_? != 0;
    (this_01->fields).m_Text = ::StringLiteral__;
    if (bVar15) {
      uVar11 = (uint)((ulonglong)&(this_01->fields).m_Text >> 0xc);
      lVar9 = (ulonglong)((uVar11 & 0x1fffff) >> 6) * 8;
      do {
        uVar6 = *(ulonglong *)(lVar9 + 0xADDR);
        puVar14 = (ulonglong *)(lVar9 + 0xADDR);
        LOCK();
        bVar15 = uVar6 == *puVar14;
        if (bVar15) {
          *puVar14 = uVar6 | 1L << (uVar11 & 0x3f);
        }
        UNLOCK();
      } while (!bVar15);
    }
    pIVar19 = (this_01->fields).m_OnValidateInput;
    if (pIVar19 == (InputField_OnValidateInput *)0x0) {
      pIVar19 = (InputField_OnValidateInput *)
                FUN_?(TypeInfo__UnityEngine__UI__InputField__OnValidateInput);
      pMVar20 = MethodInfo__UnityEngine__UI__InputField__Validate_System__String__int__wchar_t_;
      bVar15 = iRam_? != 0;
      (pIVar19->fields)._._.method_ptr =
           MethodInfo__UnityEngine__UI__InputField__Validate_System__String__int__wchar_t_->
           virtualMethodPointer;
      (pIVar19->fields)._._.method = pMVar20;
      (pIVar19->fields)._._.m_target = (Object *)this_01;
      if (bVar15) {
        uVar11 = (uint)((ulonglong)&(pIVar19->fields)._._.m_target >> 0xc);
        lVar9 = (ulonglong)((uVar11 & 0x1fffff) >> 6) * 8;
        do {
          uVar6 = *(ulonglong *)(lVar9 + 0xADDR);
          puVar14 = (ulonglong *)(lVar9 + 0xADDR);
          LOCK();
          bVar15 = uVar6 == *puVar14;
          if (bVar15) {
            *puVar14 = uVar6 | 1L << (uVar11 & 0x3f);
          }
          UNLOCK();
        } while (!bVar15);
      }
      uVar21 = pMVar20->parameters_count;
      (pIVar19->fields)._._.method_code = pIVar19;
      if ((pMVar20->flags & 0x10) == 0) {
        if (uVar21 != 2) goto code_?;
        pcVar2 = FUN_?;
      }
      else if (uVar21 == 3) {
        pcVar2 = FUN_?;
      }
      else {
code_?:
        (pIVar19->fields)._._.method_code = (pIVar19->fields)._._.m_target;
        pcVar2 = (pIVar19->fields)._._.method_ptr;
      }
      (pIVar19->fields)._._.invoke_impl = pcVar2;
      (pIVar19->fields)._._.extra_arg = FUN_?;
    }
    if (pSVar4 == (String *)0x0) goto DAT_?;
    iVar8 = (pSVar4->fields)._stringLength;
    (this_01->fields).m_CaretSelectPosition = iVar8;
    (this_01->fields).m_CaretPosition = iVar8;
    if ((this_01->fields).m_CharacterLimit < 1) {
      iVar18 = (pSVar4->fields)._stringLength;
    }
    else {
      iVar18 = (this_01->fields).m_CharacterLimit;
      iVar22 = (pSVar4->fields)._stringLength;
      if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (iVar22 < iVar18) {
        iVar18 = iVar22;
      }
    }
    uVar11 = 0;
    if (0 < iVar18) {
      puVar23 = &(pSVar4->fields)._firstChar;
      lVar9 = 0;
      do {
        pSVar16 = (this_01->fields).m_Text;
        if (pSVar16 == (String *)0x0) goto DAT_?;
        if ((longlong)(pSVar4->fields)._stringLength <= (longlong)(ulonglong)uVar11) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowIndexOutOfRangeException
                    ((MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (pIVar19 == (InputField_OnValidateInput *)0x0) goto DAT_?;
        c = (*(pIVar19->fields)._._.invoke_impl)
                      ((pIVar19->fields)._._.method_code,(this_01->fields).m_Text,
                       (pSVar16->fields)._stringLength,*puVar23,(pIVar19->fields)._._.method);
        if (c != 0) {
          pSVar16 = (this_01->fields).m_Text;
          if ((*(int *)(lRam_? + 0xe4) == 0) &&
             (FUN_?(), *(int *)(lRam_? + 0xe4) == 0)) {
            FUN_?();
          }
          str1 = mscorlib.dll::System::Char::Char_ToString_2(c,(MethodInfo *)0x0);
          pSVar16 = mscorlib.dll::System::String::String_Concat_4(pSVar16,str1,(MethodInfo *)0x0);
          (this_01->fields).m_Text = pSVar16;
          func_?(&(this_01->fields).m_Text);
        }
        uVar11 = uVar11 + 1;
        lVar9 = lVar9 + 1;
        puVar23 = puVar23 + 1;
      } while (lVar9 < iVar18);
    }
  }
  if ((this_01->fields).m_Keyboard != (TouchScreenKeyboard *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::TouchScreenKeyboard::TouchScreenKeyboard_set_text
              ((this_01->fields).m_Keyboard,(this_01->fields).m_Text,(MethodInfo *)0x0);
  }
  pSVar4 = (this_01->fields).m_Text;
  if (pSVar4 == (String *)0x0) {
DAT_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar18 = (pSVar4->fields)._stringLength;
  if (iVar18 < (this_01->fields).m_CaretPosition) {
    (this_01->fields).m_CaretPosition = iVar18;
  }
  else if ((this_01->fields).m_CaretSelectPosition <= iVar18) goto code_?;
  (this_01->fields).m_CaretSelectPosition = iVar18;
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
            (StringLiteral_InputField_value,(Object_1 *)this_01,(MethodInfo *)0x0);
  if ((this_01->fields).m_OnValueChanged != (InputField_OnChangeEvent *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent`1[System::Object]::
    UnityEvent_1_System_Object__Invoke
              ((UnityEvent_1_System_Object_ *)(this_01->fields).m_OnValueChanged,
               (Object *)(this_01->fields).m_Text,
               MethodInfo__UnityEngine__Events__UnityEvent<System::String>__Invoke_System__String_);
  }
  UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_UpdateLabel(this_01,(MethodInfo *)0x0)
  ;
  return;
}


/* Void CreateGlobalSoundsInventory(Int32) */

void Assembly-CSharp.dll::SettingsFactory::SettingsFactory_CreateGlobalSoundsInventory
               (SettingsFactory *this,int32_t woID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  SoundInventoryController_MethodInfo__UnityEngine__Object__Instantiate<SoundInventoryController>_SoundInventoryController_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  original = (this->fields).globalSoundInventoryControllerPrefab;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  this_11 = (Component *)
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                      ((Object *)original,
                       SoundInventoryController_MethodInfo__UnityEngine__Object__Instantiate<SoundInventoryController>_SoundInventoryController_
                      );
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_11 == (Component *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Add_System__String__int_
                  ,woID,pGVar1,0);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__Add_int__TabState_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<SoundTabInfo>_>__Add_int__System__Collections__Generic__List<SoundTabInfo>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__ContainsKey_int_)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__ContainsKey_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<SoundTabInfo>_>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<SoundTabInfo>_>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_int>__set_Item_int__int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  bool_MethodInfo__System__Linq__Enumerable__All<SoundTabInfo>_System__Collections__Generic__IEnumerable<SoundTabInfo>__System__Func<SoundTabInfo,_bool>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Func<SoundTabInfo,_bool>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<SoundTabInfo>__Add_SoundTabInfo_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<SoundTabInfo>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<StreamedAudioClipInfo>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<StreamedAudioClipInfo>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<SoundTabInfo>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  InventoryController_MethodInfo__UnityEngine__Object__Instantiate<InventoryController>_InventoryController__UnityEngine__Transform__bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__SoundInventoryController__PageTurned_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__SoundInventoryController__TabSelected_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SoundTabInfo);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TabState);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__SoundInventoryController____c__DisplayClass13_0___Initialize_b__0_SoundTabInfo_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SoundInventoryController____c__DisplayClass13_0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<int>);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_url);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar3 = this_11[3].fields._.m_CachedPtr;
  if (pSVar3 != (SettingsBase *)0x0) {
    pCVar4 = (Component__Class *)0x0;
    uVar5 = 0;
    SettingsBase::SettingsBase_Initialize
              (pSVar3,woID,pGVar1,MVWorldObjectDocumentationType__Enum_SoundEmitter,
               (MethodInfo *)0x0);
    *(undefined4 *)&this_11[2].klass = 1;
    this_06 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_06 != (MVWorldObjectClientManager *)0x0) {
      pMVar6 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                          (this_06,woID,(MethodInfo *)0x0);
      if ((pMVar6 != (MVWorldObjectClient *)0x0) &&
         (this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                     *)(pMVar6->fields)._.data,
         this_00 !=
         (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)
         0x0)) {
        iVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                 ::UIElements::StyleComplexSelector+PseudoStateData]::
                 Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                           (this_00,(Object *)StringLiteral_url,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                            ->klass->rgctx_data[0x21].method);
        if (iVar7 < 0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    ((Dictionary_2_System_Object_System_Object_ *)this_00,
                     (Object *)StringLiteral_url,(Object *)::StringLiteral__,
                     (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar5 >> 8),2),
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method);
        }
        SoundInventoryController::SoundInventoryController_DebugPrintSound
                  ((Dictionary_2_System_Object_System_Object_ *)this_00,(MethodInfo *)0x0);
        pCVar8 = (Component__Class *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__get_Item
                            ((Dictionary_2_System_Object_System_Object_ *)this_00,
                             (Object *)StringLiteral_url,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
        if (pCVar8 == (Component__Class *)0x0) {
          this_11[5].klass = (Component__Class *)0x0;
        }
        else {
          pCVar9 = pCVar4;
          if ((Object__Class *)(pCVar8->_0).image == pORam0000000182db2520) {
            pCVar9 = pCVar8;
          }
          if (pCVar9 == (Component__Class *)0x0) {
            FUN_?();
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          this_11[5].klass = pCVar9;
          pCVar9 = pCVar4;
          if ((Object__Class *)(pCVar8->_0).image == pORam0000000182db2520) {
            pCVar9 = pCVar8;
          }
          if (pCVar9 == (Component__Class *)0x0) {
            FUN_?();
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        if (iRam_? != 0) {
          uVar10 = (uint)((ulonglong)(this_11 + 5) >> 0xc);
          lVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6) * 8;
          do {
            uVar12 = *(ulonglong *)(lVar11 + 0xADDR);
            puVar13 = (ulonglong *)(lVar11 + 0xADDR);
            LOCK();
            bVar14 = uVar12 == *puVar13;
            if (bVar14) {
              *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
            }
            UNLOCK();
          } while (!bVar14);
        }
        iVar15 = iRam_?;
        if (this_11[4].klass != (Component__Class *)0x0) {
          this_11[4].monitor = (MonitorData *)((this_11[4].klass)->_0).byval_arg.data;
          if (iVar15 != 0) {
            uVar10 = (uint)((ulonglong)&this_11[4].monitor >> 0xc);
            lVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6) * 8;
            do {
              uVar12 = *(ulonglong *)(lVar11 + 0xADDR);
              puVar13 = (ulonglong *)(lVar11 + 0xADDR);
              LOCK();
              bVar14 = uVar12 == *puVar13;
              if (bVar14) {
                *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
              }
              UNLOCK();
            } while (!bVar14);
          }
          pOVar16 = this_11[2].fields._.m_CachedPtr;
          parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             (this_11,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          pMVar17 = 
          InventoryController_MethodInfo__UnityEngine__Object__Instantiate<InventoryController>_InventoryController__UnityEngine__Transform__bool_
          ;
          pOVar16 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                              (pOVar16,parent,0,
                               InventoryController_MethodInfo__UnityEngine__Object__Instantiate<InventoryController>_InventoryController__UnityEngine__Transform__bool_
                              );
          bVar14 = iRam_? != 0;
          this_11[1].monitor = (MonitorData *)pOVar16;
          if (bVar14) {
            uVar10 = (uint)((ulonglong)&this_11[1].monitor >> 0xc);
            lVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6) * 8;
            do {
              uVar12 = *(ulonglong *)(lVar11 + 0xADDR);
              puVar13 = (ulonglong *)(lVar11 + 0xADDR);
              LOCK();
              bVar14 = uVar12 == *puVar13;
              if (bVar14) {
                *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
              }
              UNLOCK();
            } while (!bVar14);
          }
          pMVar18 = this_11[1].monitor;
          if (pMVar18 != (MonitorData *)0x0) {
            pDVar19 = *(Delegate **)(pMVar18 + 0x40);
            pDVar20 = (Delegate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction<int>);
            FUN_?(pDVar20,this_11);
            pDVar19 = mscorlib.dll::System::Delegate::Delegate_Combine
                                (pDVar19,pDVar20,(MethodInfo *)0x0);
            pUVar21 = TypeInfo__UnityEngine__Events__UnityAction<int>;
            if (pDVar19 == (Delegate *)0x0) {
              *(undefined8 *)(pMVar18 + 0x40) = 0;
            }
            else {
              lVar11 = FUN_?(pDVar19,TypeInfo__UnityEngine__Events__UnityAction<int>);
              if (lVar11 == 0) {
                FUN_?(pDVar19,pUVar21);
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              *(longlong *)(pMVar18 + 0x40) = lVar11;
              pUVar21 = TypeInfo__UnityEngine__Events__UnityAction<int>;
              lVar11 = FUN_?(pDVar19,TypeInfo__UnityEngine__Events__UnityAction<int>);
              if (lVar11 == 0) {
                FUN_?(pDVar19,pUVar21);
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
            }
            if (iRam_? != 0) {
              uVar10 = (uint)((ulonglong)(pMVar18 + 0x40) >> 0xc);
              lVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6) * 8;
              do {
                uVar12 = *(ulonglong *)(lVar11 + 0xADDR);
                puVar13 = (ulonglong *)(lVar11 + 0xADDR);
                LOCK();
                bVar14 = uVar12 == *puVar13;
                if (bVar14) {
                  *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
                }
                UNLOCK();
              } while (!bVar14);
            }
            pMVar18 = this_11[1].monitor;
            if (pMVar18 != (MonitorData *)0x0) {
              pDVar19 = *(Delegate **)(pMVar18 + 0x48);
              pDVar20 = (Delegate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction<int>);
              FUN_?(pDVar20,this_11);
              pDVar19 = mscorlib.dll::System::Delegate::Delegate_Combine
                                  (pDVar19,pDVar20,(MethodInfo *)0x0);
              pUVar21 = TypeInfo__UnityEngine__Events__UnityAction<int>;
              if (pDVar19 == (Delegate *)0x0) {
                *(undefined8 *)(pMVar18 + 0x48) = 0;
              }
              else {
                lVar11 = FUN_?(pDVar19,TypeInfo__UnityEngine__Events__UnityAction<int>);
                if (lVar11 == 0) {
                  FUN_?(pDVar19,pUVar21);
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                *(longlong *)(pMVar18 + 0x48) = lVar11;
                pUVar21 = TypeInfo__UnityEngine__Events__UnityAction<int>;
                lVar11 = FUN_?(pDVar19,TypeInfo__UnityEngine__Events__UnityAction<int>);
                if (lVar11 == 0) {
                  FUN_?(pDVar19,pUVar21);
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
              }
              if (iRam_? != 0) {
                uVar10 = (uint)((ulonglong)(pMVar18 + 0x48) >> 0xc);
                lVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6) * 8;
                do {
                  uVar12 = *(ulonglong *)(lVar11 + 0xADDR);
                  puVar13 = (ulonglong *)(lVar11 + 0xADDR);
                  LOCK();
                  bVar14 = uVar12 == *puVar13;
                  if (bVar14) {
                    *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar14);
              }
              if ((InventoryController *)this_11[1].monitor != (InventoryController *)0x0) {
                InventoryController::InventoryController_Initialize
                          ((InventoryController *)this_11[1].monitor,*(int32_t *)&this_11[3].klass,
                           (MethodInfo *)0x0);
                pMVar18 = this_11[4].monitor;
                if (pMVar18 != (MonitorData *)0x0) {
                  lVar11 = 0x20;
                  do {
                    uVar10 = (uint)pCVar4;
                    if (*(int *)(pMVar18 + 0x18) <= (int)uVar10) {
                      if (cRam_? == '\0') {
                        FUN_?(&
                                      MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<SoundTabInfo>_>__get_Item_int_
                                      ,0);
                        LOCK();
                        UNLOCK();
                        FUN_?(&
                                      MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                                     );
                        LOCK();
                        UNLOCK();
                        FUN_?(&
                                      MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Item_int_
                                     );
                        LOCK();
                        UNLOCK();
                        FUN_?(&
                                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<SoundViewItem>__Dispose__
                                     );
                        LOCK();
                        UNLOCK();
                        FUN_?(&
                                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<SoundViewItem>__MoveNext__
                                     );
                        LOCK();
                        UNLOCK();
                        FUN_?(&
                                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<SoundViewItem>__get_Current__
                                     );
                        LOCK();
                        UNLOCK();
                        FUN_?(&
                                      System__Collections__Generic__List<SoundViewItem>_MethodInfo__InventoryController__GetComponentsOfSlotsWithType<SoundViewItem>__
                                     );
                        LOCK();
                        UNLOCK();
                        FUN_?(&
                                      MethodInfo__System__Collections__Generic__List<SoundViewItem>__GetEnumerator__
                                     );
                        LOCK();
                        UNLOCK();
                        FUN_?(&
                                      MethodInfo__System__Collections__Generic__List<SoundTabInfo>__get_Item_int_
                                     );
                        LOCK();
                        UNLOCK();
                        FUN_?(&
                                      SoundViewItem_MethodInfo__UnityEngine__Object__Instantiate<SoundViewItem>_SoundViewItem_
                                     );
                        LOCK();
                        UNLOCK();
                        FUN_?(&TypeInfo__UnityEngine__Object);
                        LOCK();
                        UNLOCK();
                        FUN_?(&
                                      MethodInfo__SoundInventoryController__SetNewOriginalUrl_System__String_
                                     );
                        LOCK();
                        UNLOCK();
                        FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<System::String>);
                        LOCK();
                        UNLOCK();
                        FUN_?(&StringLiteral_url);
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      if (((InventoryController *)this_11[1].monitor != (InventoryController *)0x0)
                         && (pLVar22 = InventoryController::
                                       InventoryController_GetComponentsOfSlotsWithType
                                                 ((InventoryController *)this_11[1].monitor,
                                                  System__Collections__Generic__List<SoundViewItem>_MethodInfo__InventoryController__GetComponentsOfSlotsWithType<SoundViewItem>__
                                                 ), pLVar22 != (List_1_System_Object_ *)0x0)) {
                        if (iRam_? != 0) {
                          uVar10 = (uint)((ulonglong)&puStack_23 >> 0xc);
                          uVar12 = (ulonglong)((uVar10 & 0x1fffff) >> 6);
                          do {
                            uVar24 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
                            puVar13 = (ulonglong *)(uVar12 * 8 + 0xADDR);
                            LOCK();
                            bVar14 = uVar24 == *puVar13;
                            if (bVar14) {
                              *puVar13 = uVar24 | 1L << (uVar10 & 0x3f);
                            }
                            UNLOCK();
                          } while (!bVar14);
                        }
                        ppLStack_25 = (List_1_System_Object_ **)
                                      ((ulonglong)(uint)(pLVar22->fields)._version << 0x20);
                        uStack_26 = 0;
                        lStack_27 = (longlong)ppLStack_25;
                        pSVar28 = (SoundViewItem *)0x0;
                        puStack_23 = (undefined *)0x0;
                        ppLStack_25 = &pLStack_29;
                        pLStack_29 = pLVar22;
                        while (bVar30 = mscorlib.dll::System::Collections::Generic::
                                        List`1[T]+Enumerator[System::Object]::
                                        List_1_T_Enumerator_System_Object__MoveNext
                                                  ((List_1_T_Enumerator_System_Object_ *)&pLStack_29
                                                   ,
                                                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<SoundViewItem>__MoveNext__
                                                  ), bVar30 != 0) {
                          if (pSVar28 == (SoundViewItem *)0x0) goto code_?;
                          SoundViewItem::SoundViewItem_UnsubscribePendingDownloads
                                    (pSVar28,(MethodInfo *)0x0);
                        }
                        if ((this_11[1].monitor != (MonitorData *)0x0) &&
                           (this_04 = *(InventorySlots **)(this_11[1].monitor + 0x30),
                           this_04 != (InventorySlots *)0x0)) {
                          InventorySlots::InventorySlots_Clear(this_04,(MethodInfo *)0x0);
                          pMVar18 = this_11[1].monitor;
                          iVar7 = *(int32_t *)&this_11[2].klass;
                          pDVar31 = this_11[1].fields._.m_CachedPtr;
                          if ((pDVar31 != (Dictionary_2_System_Int32_System_Object_ *)0x0) &&
                             (pOVar16 = mscorlib.dll::System::Collections::Generic::
                                        Dictionary`2[System::Int32,System::Object]::
                                        Dictionary_2_System_Int32_System_Object__get_Item
                                                  (pDVar31,iVar7,
                                                                                                      
                                                  MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                                                  ), pOVar16 != (Object *)0x0)) {
                            page = *(int32_t *)((longlong)&pOVar16[2].klass + 4);
                            pDVar31 = this_11[1].fields._.m_CachedPtr;
                            if ((pDVar31 != (Dictionary_2_System_Int32_System_Object_ *)0x0) &&
                               (pOVar16 = mscorlib.dll::System::Collections::Generic::
                                          Dictionary`2[System::Int32,System::Object]::
                                          Dictionary_2_System_Int32_System_Object__get_Item
                                                    (pDVar31,*(int32_t *)&this_11[2].klass,
                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                                                  ), pOVar16 != (Object *)0x0)) {
                              iVar32 = FUN_?((float)*(int *)&pOVar16[2].klass /
                                                     (float)*(int *)&pOVar16[1].klass);
                              iVar15 = 1;
                              if (1 < iVar32) {
                                iVar15 = iVar32;
                              }
                              if ((pMVar18 != (MonitorData *)0x0) &&
                                 (plVar33 = *(longlong **)(pMVar18 + 0x28), plVar33 != (longlong *)0x0
                                 )) {
                                (**(code **)(*plVar33 + 0x188))
                                          (plVar33,iVar7,page,iVar15,*(undefined8 *)(*plVar33 + 400))
                                ;
                                if (*(InventorySlots **)(pMVar18 + 0x30) != (InventorySlots *)0x0) {
                                  InventorySlots::InventorySlots_UpdateAbsoluteSlotValues
                                            (*(InventorySlots **)(pMVar18 + 0x30),page,
                                             *(int32_t *)(pMVar18 + 0x20),(MethodInfo *)0x0);
                                  pSVar34 = StringLiteral_url;
                                  pCVar4 = this_11[5].klass;
                                  if (cRam_? == '\0') {
                                    FUN_?(&TypeInfo__System__Convert);
                                    LOCK();
                                    UNLOCK();
                                    cRam_? = '\x01';
                                  }
                                  pSVar3 = this_11[3].fields._.m_CachedPtr;
                                  if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
                                    FUN_?();
                                  }
                                  if (cRam_? == '\0') {
                                    FUN_?(&TypeInfo__System__Convert);
                                    LOCK();
                                    UNLOCK();
                                    cRam_? = '\x01';
                                  }
                                  if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
                                    FUN_?();
                                  }
                                  value = mscorlib.dll::System::Convert::Convert_ToString_1
                                                    ((Object *)pCVar4,(IFormatProvider *)0x0,
                                                     (MethodInfo *)0x0);
                                  if (pSVar3 != (SettingsBase *)0x0) {
                                    SettingsBase::SettingsBase_OnSettingChanged
                                              (pSVar3,pSVar34,(Object *)value,(MethodInfo *)0x0);
                                    if ((Dictionary_2_System_Int32_System_Object_ *)
                                        this_11[2].monitor !=
                                        (Dictionary_2_System_Int32_System_Object_ *)0x0) {
                                      this_09 = (List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize_
                                                 *)mscorlib.dll::System::Collections::Generic::
                                                   Dictionary`2[System::Int32,System::Object]::
                                                   Dictionary_2_System_Int32_System_Object__get_Item
                                                             ((
                                                  Dictionary_2_System_Int32_System_Object_ *)
                                                  this_11[2].monitor,*(int32_t *)&this_11[2].klass,
                                                  MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<SoundTabInfo>_>__get_Item_int_
                                                  );
                                      pvVar35 = this_11[4].fields._.m_CachedPtr;
                                      if (pvVar35 != (void *)0x0) {
                                        iVar15 = FUN_?(pvVar35,*(undefined4 *)
                                                                       &this_11[2].klass,
                                                                                                                              
                                                  MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Item_int_
                                                  );
                                        iVar32 = 0;
                                        if (iVar15 < 1) {
                                          return;
                                        }
                                        while (((pDVar31 = this_11[1].fields._.m_CachedPtr,
                                                pDVar31 != (Dictionary_2_System_Int32_System_Object_
                                                           *)0x0 &&
                                                (pTVar36 = (TabState *)
                                                           mscorlib.dll::System::Collections::
                                                           Generic::Dictionary`2[System::
                                                           Int32,System::Object]::
                                                                                                                      
                                                  Dictionary_2_System_Int32_System_Object__get_Item
                                                            (pDVar31,*(int32_t *)&this_11[2].klass,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                                                  ), pTVar36 != (TabState *)0x0)) &&
                                               (pIVar37 = TabState::TabState_get_SlotRange
                                                                    (pTVar36,(MethodInfo *)0x0),
                                               pIVar37 != (Int32__Array *)0x0))) {
                                          if ((int)pIVar37->max_length == 0) {
code_?:
                                            FUN_?();
                                            pcVar2 = (code *)swi(3);
                                            (*pcVar2)();
                                            return;
                                          }
                                          if (pIVar37->vector[0] <= iVar32) {
                                            if ((uint)pIVar37->max_length < 2)
                                            goto code_?;
                                            if (iVar32 < pIVar37->vector[1]) {
                                              pOVar16 = (Object *)this_11[3].monitor;
                                              if (*(int *)&(TypeInfo__UnityEngine__Object->_1).
                                                           field_0x1c == 0) {
                                                FUN_?();
                                              }
                                              pSVar28 = (SoundViewItem *)
                                                        UnityEngine.CoreModule.dll::UnityEngine::
                                                        Object::Object_1_Instantiate_4
                                                                  (pOVar16,
                                                  SoundViewItem_MethodInfo__UnityEngine__Object__Instantiate<SoundViewItem>_SoundViewItem_
                                                  );
                                              if (this_09 !=
                                                  (
                                                  List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize_
                                                  *)0x0) {
                                                info = mscorlib.dll::System::Collections::Generic::
                                                       List`1[UnityEngine::UIElements::UIR::
                                                       EntryPreProcessor+AllocSize]::
                                                                                                              
                                                  List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize__get_Item
                                                            (this_09,iVar32,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__List<SoundTabInfo>__get_Item_int_
                                                  );
                                                pCVar4 = this_11[5].klass;
                                                this_10 = (UnityAction_1_System_Object_ *)
                                                          FUN_?(
                                                  TypeInfo__UnityEngine__Events__UnityAction<System::String>
                                                  );
                                                UnityEngine.CoreModule.dll::UnityEngine::Events::
                                                UnityAction`1[System::Object]::
                                                UnityAction_1_System_Object___ctor
                                                          (this_10,(Object *)this_11,
                                                                                                                      
                                                  MethodInfo__SoundInventoryController__SetNewOriginalUrl_System__String_
                                                  ,(MethodInfo *)0x0);
                                                if (pSVar28 != (SoundViewItem *)0x0) {
                                                  SoundViewItem::SoundViewItem_Initialize
                                                            (pSVar28,(SoundTabInfo *)info,
                                                             (String *)pCVar4,
                                                             (UnityAction_1_System_String_ *)this_10
                                                             ,(MethodInfo *)0x0);
                                                  this_05 = (InventoryController *)
                                                            this_11[1].monitor;
                                                  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine
                                                            ::Component::Component_get_gameObject
                                                                      ((Component *)pSVar28,
                                                                       (MethodInfo *)0x0);
                                                  if (this_05 != (InventoryController *)0x0) {
                                                    InventoryController::
                                                    InventoryController_AddObject
                                                              (this_05,pGVar1,
                                                               iVar32 % *(int *)&this_11[3].klass,
                                                               (MethodInfo *)0x0);
                                                    goto code_?;
                                                  }
                                                }
                                              }
                                              break;
                                            }
                                          }
code_?:
                                          iVar32 = iVar32 + 1;
                                          if (iVar15 <= iVar32) {
                                            return;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                      FUN_?();
code_?:
                      FUN_?();
                      FUN_?();
                      pcVar2 = (code *)swi(3);
                      (*pcVar2)();
                      return;
                    }
                    pOVar16 = (Object *)
                              FUN_?(
                                           TypeInfo__SoundInventoryController____c__DisplayClass13_0
                                           );
                    pMVar18 = this_11[4].monitor;
                    if (pMVar18 == (MonitorData *)0x0) break;
                    if (*(uint *)(pMVar18 + 0x18) <= uVar10) {
                      mscorlib.dll::System::ThrowHelper::
                      ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                      pcVar2 = (code *)swi(3);
                      (*pcVar2)();
                      return;
                    }
                    lVar38 = *(longlong *)(pMVar18 + 0x10);
                    if (lVar38 == 0) break;
                    if (*(uint *)(lVar38 + 0x18) <= uVar10) {
                      FUN_?();
                      pcVar2 = (code *)swi(3);
                      (*pcVar2)();
                      return;
                    }
                    if (*(longlong *)(lVar38 + lVar11) == 0) break;
                    pSVar34 = *(String **)(*(longlong *)(lVar38 + lVar11) + 0x20);
                    if (pOVar16 == (Object *)0x0) break;
                    bVar14 = iRam_? != 0;
                    pOVar16[1].klass =
                         *(Object__Class **)
                          (*(longlong *)(lVar11 + *(longlong *)(this_11[4].monitor + 0x10)) + 0x18);
                    if (bVar14) {
                      uVar39 = (uint)((ulonglong)(pOVar16 + 1) >> 0xc);
                      lVar38 = (ulonglong)((uVar39 & 0x1fffff) >> 6) * 8;
                      do {
                        uVar12 = *(ulonglong *)(lVar38 + 0xADDR);
                        puVar13 = (ulonglong *)(lVar38 + 0xADDR);
                        LOCK();
                        bVar14 = uVar12 == *puVar13;
                        if (bVar14) {
                          *puVar13 = uVar12 | 1L << (uVar39 & 0x3f);
                        }
                        UNLOCK();
                      } while (!bVar14);
                    }
                    if ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                         *)this_11[5].monitor ==
                        (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                         *)0x0) break;
                    iVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                             Object,UnityEngine::UIElements::StyleComplexSelector+PseudoStateData]::
                             Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                                       ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                                         *)this_11[5].monitor,(Object *)pSVar34,
                                        MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__ContainsKey_System__String_
                                        ->klass->rgctx_data[0x21].method);
                    if (iVar7 < 0) {
                      pMVar18 = this_11[5].monitor;
                      if (pMVar18 == (MonitorData *)0x0) break;
                      pMVar17 = (MethodInfo *)CONCAT71((int7)((ulonglong)pMVar17 >> 8),2);
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                      ::Int32]::Dictionary_2_System_Object_System_Int32__TryInsert
                                ((Dictionary_2_System_Object_System_Int32_ *)this_11[5].monitor,
                                 (Object *)pSVar34,
                                 (*(int *)(pMVar18 + 0x20) - *(int *)(pMVar18 + 0x28)) + 1,
                                 (InsertionBehavior__Enum)pMVar17,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Add_System__String__int_
                                 ->klass->rgctx_data[0x22].method);
                    }
                    if ((Dictionary_2_System_Object_System_Int32Enum_ *)this_11[5].monitor ==
                        (Dictionary_2_System_Object_System_Int32Enum_ *)0x0) break;
                    IVar40 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                             Object,System::Int32Enum]::
                             Dictionary_2_System_Object_System_Int32Enum__get_Item
                                       ((Dictionary_2_System_Object_System_Int32Enum_ *)
                                        this_11[5].monitor,(Object *)pSVar34,
                                        MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                                       );
                    this_01 = this_11[1].fields._.m_CachedPtr;
                    if ((Dictionary_2_System_Object_System_Int32Enum_ *)this_11[5].monitor ==
                        (Dictionary_2_System_Object_System_Int32Enum_ *)0x0) break;
                    key = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Object,System::Int32Enum]::
                          Dictionary_2_System_Object_System_Int32Enum__get_Item
                                    ((Dictionary_2_System_Object_System_Int32Enum_ *)
                                     this_11[5].monitor,(Object *)pSVar34,
                                     MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                                    );
                    if (this_01 == (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) break;
                    iVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                             Int32,UnityEngine::Vector3]::
                             Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                                       (this_01,key,
                                        MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__ContainsKey_int_
                                        ->klass->rgctx_data[0x21].method);
                    if (iVar7 < 0) {
                      uVar39 = *(uint *)&this_11[3].klass;
                      pTVar36 = (TabState *)FUN_?(TypeInfo__TabState);
                      uVar12 = (ulonglong)uVar39;
                      TabState::TabState__ctor(pTVar36,IVar40,pSVar34,uVar39,(MethodInfo *)0x0);
                      pDVar31 = this_11[1].fields._.m_CachedPtr;
                      if (pDVar31 == (Dictionary_2_System_Int32_System_Object_ *)0x0) break;
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                      ::Object]::Dictionary_2_System_Int32_System_Object__TryInsert
                                (pDVar31,IVar40,(Object *)pTVar36,
                                 (InsertionBehavior__Enum)CONCAT71((int7)(uVar12 >> 8),2),
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__Add_int__TabState_
                                 ->klass->rgctx_data[0x22].method);
                      if (((pTVar36 == (TabState *)0x0) ||
                          (this_11[1].monitor == (MonitorData *)0x0)) ||
                         (plVar33 = *(longlong **)(this_11[1].monitor + 0x28),
                         plVar33 == (longlong *)0x0)) break;
                      pMVar17 = *(MethodInfo **)(*plVar33 + 0x180);
                      (**(code **)(*plVar33 + 0x178))(plVar33,IVar40,(pTVar36->fields).name);
                    }
                    if ((Dictionary_2_System_Int32_UnityEngine_Vector3_ *)this_11[2].monitor ==
                        (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) break;
                    iVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                             Int32,UnityEngine::Vector3]::
                             Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                                       ((Dictionary_2_System_Int32_UnityEngine_Vector3_ *)
                                        this_11[2].monitor,IVar40,
                                        MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<SoundTabInfo>_>__ContainsKey_int_
                                        ->klass->rgctx_data[0x21].method);
                    if (iVar7 < 0) {
                      pDVar31 = (Dictionary_2_System_Int32_System_Object_ *)this_11[2].monitor;
                      this_07 = (LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                                 *)FUN_?(
                                                TypeInfo__System__Collections__Generic__List<SoundTabInfo>
                                                );
                      mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::
                      Metadata::__Il2CppFullySharedGenericType]::
                      LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                                (this_07,
                                 MethodInfo__System__Collections__Generic__List<SoundTabInfo>__List__
                                );
                      if (pDVar31 == (Dictionary_2_System_Int32_System_Object_ *)0x0) break;
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                      ::Object]::Dictionary_2_System_Int32_System_Object__TryInsert
                                (pDVar31,IVar40,(Object *)this_07,
                                 (InsertionBehavior__Enum)
                                 CONCAT71((int7)((ulonglong)pMVar17 >> 8),2),
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<SoundTabInfo>_>__Add_int__System__Collections__Generic__List<SoundTabInfo>_
                                 ->klass->rgctx_data[0x22].method);
                    }
                    if ((Dictionary_2_System_Int32_System_Object_ *)this_11[2].monitor ==
                        (Dictionary_2_System_Int32_System_Object_ *)0x0) break;
                    pOVar41 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                              Int32,System::Object]::
                              Dictionary_2_System_Int32_System_Object__get_Item
                                        ((Dictionary_2_System_Int32_System_Object_ *)
                                         this_11[2].monitor,IVar40,
                                         MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<SoundTabInfo>_>__get_Item_int_
                                        );
                    this_08 = (Predicate_1_Object_ *)
                              FUN_?(TypeInfo__System__Func<SoundTabInfo,_bool>);
                    uVar5 = 0;
                    mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
                              (this_08,pOVar16,
                               MethodInfo__SoundInventoryController____c__DisplayClass13_0___Initialize_b__0_SoundTabInfo_
                               ,(MethodInfo *)0x0);
                    bVar30 = System.Core.dll::System::Linq::Enumerable::Enumerable_All
                                       ((IEnumerable_1_System_Object_ *)pOVar41,
                                        (Func_2_Object_Boolean_ *)this_08,
                                        bool_MethodInfo__System__Linq__Enumerable__All<SoundTabInfo>_System__Collections__Generic__IEnumerable<SoundTabInfo>__System__Func<SoundTabInfo,_bool>_
                                       );
                    if (bVar30 != 0) {
                      if ((Dictionary_2_System_Int32_System_Object_ *)this_11[2].monitor ==
                          (Dictionary_2_System_Int32_System_Object_ *)0x0) break;
                      pLVar22 = (List_1_System_Object_ *)
                                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                Int32,System::Object]::
                                Dictionary_2_System_Int32_System_Object__get_Item
                                          ((Dictionary_2_System_Int32_System_Object_ *)
                                           this_11[2].monitor,IVar40,
                                           MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<SoundTabInfo>_>__get_Item_int_
                                          );
                      pOVar41 = (Object *)FUN_?(TypeInfo__SoundTabInfo);
                      if (pOVar41 == (Object *)0x0) break;
                      pOVar41[1].klass = pOVar16[1].klass;
                      func_?(pOVar41 + 1);
                      pOVar41[1].monitor = (MonitorData *)pSVar34;
                      func_?(&pOVar41[1].monitor);
                      if (this_11[4].monitor == (MonitorData *)0x0) break;
                      lVar38 = FUN_?(this_11[4].monitor,pCVar4);
                      if (lVar38 == 0) break;
                      pOVar41[2].klass = *(Object__Class **)(lVar38 + 0x10);
                      func_?(pOVar41 + 2);
                      if (pLVar22 == (List_1_System_Object_ *)0x0) break;
                      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                      List_1_System_Object__Add
                                (pLVar22,pOVar41,
                                 MethodInfo__System__Collections__Generic__List<SoundTabInfo>__Add_SoundTabInfo_
                                );
                    }
                    this_02 = this_11[4].fields._.m_CachedPtr;
                    if (this_02 == (Dictionary_2_System_Int32_System_Single_ *)0x0) break;
                    iVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                             Int32,System::Single]::
                             Dictionary_2_System_Int32_System_Single__FindEntry
                                       (this_02,IVar40,
                                        MethodInfo__System__Collections__Generic__Dictionary<int,_int>__ContainsKey_int_
                                        ->klass->rgctx_data[0x21].method);
                    this_03 = this_11[4].fields._.m_CachedPtr;
                    if (iVar7 < 0) {
                      if (this_03 == (Dictionary_2_System_Int32_System_Int32_ *)0x0) break;
                      iVar7 = 1;
                      pMVar17 = (MethodInfo *)CONCAT71((int7)((ulonglong)uVar5 >> 8),2);
                      pIVar42 = MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_
                                ->klass->rgctx_data;
                    }
                    else {
                      if (this_03 == (Dictionary_2_System_Int32_System_Int32_ *)0x0) break;
                      iVar15 = FUN_?(this_03,IVar40,
                                             MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Item_int_
                                            );
                      pMVar17 = (MethodInfo *)CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
                      iVar7 = iVar15 + 1;
                      pIVar42 = MethodInfo__System__Collections__Generic__Dictionary<int,_int>__set_Item_int__int_
                                ->klass->rgctx_data;
                    }
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                    Int32]::Dictionary_2_System_Int32_System_Int32__TryInsert
                              (this_03,IVar40,iVar7,(InsertionBehavior__Enum)pMVar17,
                               pIVar42[0x22].method);
                    pDVar31 = this_11[1].fields._.m_CachedPtr;
                    if ((Dictionary_2_System_Object_System_Int32Enum_ *)this_11[5].monitor ==
                        (Dictionary_2_System_Object_System_Int32Enum_ *)0x0) break;
                    IVar40 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                             Object,System::Int32Enum]::
                             Dictionary_2_System_Object_System_Int32Enum__get_Item
                                       ((Dictionary_2_System_Object_System_Int32Enum_ *)
                                        this_11[5].monitor,(Object *)pSVar34,
                                        MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                                       );
                    if (pDVar31 == (Dictionary_2_System_Int32_System_Object_ *)0x0) break;
                    pOVar16 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                              Int32,System::Object]::
                              Dictionary_2_System_Int32_System_Object__get_Item
                                        (pDVar31,IVar40,
                                         MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                                        );
                    if (pOVar16 == (Object *)0x0) break;
                    *(int *)&pOVar16[2].klass = *(int *)&pOVar16[2].klass + 1;
                    pCVar4 = (Component__Class *)(ulonglong)(uVar10 + 1);
                    pMVar18 = this_11[4].monitor;
                    lVar11 = lVar11 + 8;
                  } while (pMVar18 != (MonitorData *)0x0);
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void CreateMovablesSettings(Int32) */

void Assembly-CSharp.dll::SettingsFactory::SettingsFactory_CreateMovablesSettings
               (SettingsFactory *this,int32_t woID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MovablesSettings_MethodInfo__UnityEngine__Object__Instantiate<MovablesSettings>_MovablesSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  original = (this->fields).movablesSettingsPrefab;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                      ((Object *)original,
                       MovablesSettings_MethodInfo__UnityEngine__Object__Instantiate<MovablesSettings>_MovablesSettings_
                      );
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if (pOVar1 == (Object *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug,woID,root,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVMovingPlatformGroup);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_BlueprintData_Velocity);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_MVMovingPlatformGroup_not_found_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Wo_not_found);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pOVar1[2].klass != (Object__Class *)0x0) {
    SettingsBase::SettingsBase_Initialize
              ((SettingsBase *)pOVar1[2].klass,woID,root,
               MVWorldObjectDocumentationType__Enum_MovingPlatform,(MethodInfo *)0x0);
    if (woID == -1) {
      pSVar3 = StringLiteral_Wo_not_found;
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
        pSVar3 = StringLiteral_Wo_not_found;
      }
code_?:
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)pSVar3,(MethodInfo *)0x0);
      return;
    }
    this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_00 != (MVWorldObjectClientManager *)0x0) {
      pOVar4 = (Object__Class *)
               MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                         (this_00,woID,(MethodInfo *)0x0);
      pOVar5 = pOVar4;
      if (pOVar4 != (Object__Class *)0x0) {
        pMVar6 = (MVWorldObjectClient__Class *)(pOVar4->_0).image;
        bVar7 = (TypeInfo__MVMovingPlatformGroup->_1).naturalAligment;
        if (((pMVar6->_1).naturalAligment < bVar7) ||
           ((MVMovingPlatformGroup__Class *)(pMVar6->_1).typeHierarchy[(ulonglong)bVar7 - 1] !=
            TypeInfo__MVMovingPlatformGroup)) {
          bVar8 = false;
        }
        else {
          bVar8 = true;
        }
        pOVar5 = (Object__Class *)0x0;
        if (bVar8) {
          pOVar5 = pOVar4;
        }
      }
      bVar8 = iRam_? != 0;
      pOVar1[4].klass = pOVar5;
      if (bVar8) {
        uVar9 = (uint)((ulonglong)(pOVar1 + 4) >> 0xc);
        uVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
        do {
          uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
          puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
          LOCK();
          bVar8 = uVar11 == *puVar12;
          if (bVar8) {
            *puVar12 = uVar11 | 1L << (ulonglong)(uVar9 & 0x3f);
          }
          UNLOCK();
        } while (!bVar8);
      }
      if (pOVar1[4].klass == (Object__Class *)0x0) {
        pSVar3 = mscorlib.dll::System::Int32::Int32_ToString
                           ((Int32 *)&stack0x00000010,(MethodInfo *)0x0);
        pSVar3 = mscorlib.dll::System::String::String_Concat_4
                           (StringLiteral_MVMovingPlatformGroup_not_found_,pSVar3,(MethodInfo *)0x0)
        ;
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        goto code_?;
      }
      *(undefined1 *)&pOVar1[4].monitor = 1;
      if ((pOVar1[4].klass != (Object__Class *)0x0) &&
         (pcVar13 = pOVar1[4].klass[1]._0.namespaze, pcVar13 != (char *)0x0)) {
        uStack_14 = *(undefined8 *)(pcVar13 + 0x1a4);
        uStack_15 = *(undefined4 *)(pcVar13 + 0x1ac);
        value = (float)FUN_?(&uStack_14);
        if ((SettingsSlider *)pOVar1[2].monitor != (SettingsSlider *)0x0) {
          SettingsSlider::SettingsSlider_Initialize
                    ((SettingsSlider *)pOVar1[2].monitor,StringLiteral_BlueprintData_Velocity,value
                     ,_UNK_?,_UNK_?,(MethodInfo *)0x0);
          if (pOVar1[3].klass != (Object__Class *)0x0) {
            SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_1
                      ((SettingsInputFieldSlider *)pOVar1[3].klass,
                       StringLiteral_BlueprintData_Velocity,value,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void CreateRespawnSetting(Int32) */

void Assembly-CSharp.dll::SettingsFactory::SettingsFactory_CreateRespawnSetting
               (SettingsFactory *this,int32_t woID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  RespawnSettings_MethodInfo__UnityEngine__Object__Instantiate<RespawnSettings>_RespawnSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  original = (this->fields).respawnSettingsPrefab;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)original,
                      RespawnSettings_MethodInfo__UnityEngine__Object__Instantiate<RespawnSettings>_RespawnSettings_
                     );
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if (pOVar1 == (Object *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
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
    FUN_?(&StringLiteral_Respawn);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_respawnTime);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = pOVar1[2].klass;
  *(int32_t *)&pOVar1[5].klass = woID;
  pSVar3 = StringLiteral_Respawn;
  if (this_00 != (Object__Class *)0x0) {
    pTVar4 = (Text *)(this_00->_0).byval_arg.data.array;
    (this_00->_0).byval_arg.attrs = (short)woID;
    (this_00->_0).byval_arg.type = (char)((uint)woID >> 0x10);
    (this_00->_0).byval_arg.field_0xb = (char)((uint)woID >> 0x18);
    if (pTVar4 != (Text *)0x0) {
      (*(pTVar4->klass->vtable).set_text.methodPtr)
                (pTVar4,pSVar3,(pTVar4->klass->vtable).set_text.method);
      SettingsBase::SettingsBase_InitializeHierarchy
                ((SettingsBase *)this_00,woID,root,(MethodInfo *)0x0);
      this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (this_02 != (MVWorldObjectClientManager *)0x0) {
        pMVar5 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                           (this_02,woID,(MethodInfo *)0x0);
        if (pMVar5 != (MVWorldObjectClient *)0x0) {
          this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                     *)(pMVar5->fields)._.data;
          value_00 = 0x1e;
          if (this_01 !=
              (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
               *)0x0) {
            iVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Object,UnityEngine::UIElements::StyleComplexSelector+PseudoStateData]::
                    Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                              (this_01,(Object *)StringLiteral_respawnTime,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                               ->klass->rgctx_data[0x21].method);
            bVar7 = (byte)((uint)iVar6 >> 0x1f) ^ 1;
            *(byte *)((longlong)&pOVar1[5].klass + 5) = bVar7;
            if (bVar7 != 0) {
              pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Object,System::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                 ((Dictionary_2_System_Object_System_Object_ *)this_01,
                                  (Object *)StringLiteral_respawnTime,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                 );
              if (pOVar8 == (Object *)0x0) goto code_?;
              if ((pOVar8->klass->_0).element_class !=
                  *(Il2CppClass **)(lRam_? + 0x40)) {
                FUN_?(pOVar8,lRam_?);
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              value_00 = *(int32_t *)&pOVar8[1].klass;
            }
            if ((SettingsSlider *)pOVar1[2].monitor != (SettingsSlider *)0x0) {
              SettingsSlider::SettingsSlider_Initialize_1
                        ((SettingsSlider *)pOVar1[2].monitor,StringLiteral_respawnTime,value_00,0x1e
                         ,0x708,(MethodInfo *)0x0);
              if (pOVar1[3].klass != (Object__Class *)0x0) {
                SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_1
                          ((SettingsInputFieldSlider *)pOVar1[3].klass,StringLiteral_respawnTime,
                           (float)value_00,(MethodInfo *)0x0);
                if ((GameObject *)pOVar1[3].monitor != (GameObject *)0x0) {
                  value = *(bool *)((longlong)&pOVar1[5].klass + 5);
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            ((GameObject *)pOVar1[3].monitor,value,(MethodInfo *)0x0);
                  if (pOVar1[4].klass != (Object__Class *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              ((GameObject *)pOVar1[4].klass,value,(MethodInfo *)0x0);
                    if ((Toggle *)pOVar1[4].monitor != (Toggle *)0x0) {
                      UnityEngine.UI.dll::UnityEngine::UI::Toggle::Toggle_Set
                                ((Toggle *)pOVar1[4].monitor,value,1,(MethodInfo *)0x0);
                      *(undefined1 *)((longlong)&pOVar1[5].klass + 4) = 1;
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void CreateRotatorSettings(Int32) */

void Assembly-CSharp.dll::SettingsFactory::SettingsFactory_CreateRotatorSettings
               (SettingsFactory *this,int32_t woID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  RotatorSettings_MethodInfo__UnityEngine__Object__Instantiate<RotatorSettings>_RotatorSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  original = (this->fields).rotatorSettingsPrefab;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                      ((Object *)original,
                       RotatorSettings_MethodInfo__UnityEngine__Object__Instantiate<RotatorSettings>_RotatorSettings_
                      );
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if (pOVar1 == (Object *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  ,woID,root,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Rotator);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_AngularSpeed);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_BlueprintData_AngularSpeed);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_BlueprintData);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar3 = pOVar1[2].klass;
  pSVar4 = TM::TM__(StringLiteral_Rotator,(MethodInfo *)0x0);
  if (pOVar3 == (Object__Class *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pTVar5 = (Text *)(pOVar3->_0).byval_arg.data.array;
  (pOVar3->_0).byval_arg.attrs = (short)woID;
  (pOVar3->_0).byval_arg.type = (char)((uint)woID >> 0x10);
  (pOVar3->_0).byval_arg.field_0xb = (char)((uint)woID >> 0x18);
  if (pTVar5 == (Text *)0x0) goto code_?;
  (*(pTVar5->klass->vtable).set_text.methodPtr)
            (pTVar5,pSVar4,(pTVar5->klass->vtable).set_text.method);
  SettingsBase::SettingsBase_InitializeHierarchy((SettingsBase *)pOVar3,woID,root,(MethodInfo *)0x0)
  ;
  if (woID == -1) {
    uVar6 = func_?(&TypeInfo__System__NotImplementedException);
    this_03 = (NotImplementedException *)func_?(uVar6);
    mscorlib.dll::System::NotImplementedException::NotImplementedException__ctor
              (this_03,(MethodInfo *)0x0);
    uVar6 = func_?(&
                                 MethodInfo__RotatorSettings__Initialize_int__UnityEngine__GameObject_
                                );
    FUN_?(this_03,uVar6);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((this_02 == (MVWorldObjectClientManager *)0x0) ||
     (pMVar7 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                          (this_02,woID,(MethodInfo *)0x0), pMVar7 == (MVWorldObjectClient *)0x0))
  goto code_?;
  this_00 = (pMVar7->fields)._.data;
  *(int32_t *)&pOVar1[4].klass = woID;
  if (this_00 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
  pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__get_Item
                      (this_00,(Object *)StringLiteral_BlueprintData,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
  if (pOVar8 == (Object *)0x0) {
    pOVar1[3].monitor = (MonitorData *)0x0;
  }
  else {
    bVar9 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment;
    if (((pOVar8->klass->_1).naturalAligment < bVar9) ||
       ((Dictionary_2_System_Object_System_Object___Class *)
        (pOVar8->klass->_1).typeHierarchy[(ulonglong)bVar9 - 1] !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      FUN_?(pOVar8);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pOVar1[3].monitor = (MonitorData *)pOVar8;
    bVar9 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment;
    if (((pOVar8->klass->_1).naturalAligment < bVar9) ||
       ((Dictionary_2_System_Object_System_Object___Class *)
        (pOVar8->klass->_1).typeHierarchy[(ulonglong)bVar9 - 1] !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      FUN_?(pOVar8);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar10 = (uint)((ulonglong)&pOVar1[3].monitor >> 0xc);
    uVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6);
    do {
      uVar12 = *(ulonglong *)(uVar11 * 8 + 0xADDR);
      puVar13 = (ulonglong *)(uVar11 * 8 + 0xADDR);
      LOCK();
      bVar14 = uVar12 == *puVar13;
      if (bVar14) {
        *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
      }
      UNLOCK();
    } while (!bVar14);
  }
  if (((Dictionary_2_System_Object_System_Object_ *)pOVar1[3].monitor ==
       (Dictionary_2_System_Object_System_Object_ *)0x0) ||
     (pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__get_Item
                          ((Dictionary_2_System_Object_System_Object_ *)pOVar1[3].monitor,
                           (Object *)StringLiteral_AngularSpeed,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          ), pOVar8 == (Object *)0x0)) goto code_?;
  if ((pOVar8->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
    FUN_?(pOVar8,lRam_?);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((SettingsSlider *)pOVar1[2].monitor == (SettingsSlider *)0x0) goto code_?;
  fVar15 = *(float *)&pOVar8[1].klass;
  SettingsSlider::SettingsSlider_Initialize
            ((SettingsSlider *)pOVar1[2].monitor,StringLiteral_BlueprintData_AngularSpeed,fVar15,
             0.0,_UNK_?,(MethodInfo *)0x0);
  pOVar3 = pOVar1[3].klass;
  if (pOVar3 == (Object__Class *)0x0) goto code_?;
  bVar14 = iRam_? != 0;
  (pOVar3->_0).element_class = (Il2CppClass *)StringLiteral_BlueprintData_AngularSpeed;
  if (bVar14) {
    uVar10 = (uint)((ulonglong)&(pOVar3->_0).element_class >> 0xc);
    uVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6);
    do {
      uVar12 = *(ulonglong *)(uVar11 * 8 + 0xADDR);
      puVar13 = (ulonglong *)(uVar11 * 8 + 0xADDR);
      LOCK();
      bVar14 = uVar12 == *puVar13;
      if (bVar14) {
        *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
      }
      UNLOCK();
    } while (!bVar14);
  }
  fVar15 = SettingsInputFieldSlider::SettingsInputFieldSlider_GetInputFieldValue
                     ((SettingsInputFieldSlider *)pOVar3,fVar15,(MethodInfo *)0x0);
  pSVar4 = SettingsInputFieldSlider::SettingsInputFieldSlider_ConvertFloatToString
                      (fVar15,(MethodInfo *)0x0);
  this_01 = (InputField *)(pOVar3->_0).byval_arg.data.array;
  if (this_01 == (InputField *)0x0) {
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
  pSVar16 = (this_01->fields).m_Text;
  if (pSVar16 == pSVar4) {
    return;
  }
  if (pSVar16 == (String *)0x0) {
code_?:
    if (pSVar4 == (String *)0x0) {
code_?:
      pSVar4 = ::StringLiteral__;
      if (::StringLiteral__ == (String *)0x0) goto DAT_?;
    }
  }
  else {
    if (pSVar4 == (String *)0x0) goto code_?;
    if ((pSVar16->fields)._stringLength == (pSVar4->fields)._stringLength) {
      bVar17 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                         ((uint8_t *)&(pSVar16->fields)._firstChar,
                          (uint8_t *)&(pSVar4->fields)._firstChar,
                          (longlong)(pSVar16->fields)._stringLength * 2,(MethodInfo *)0x0);
      if (bVar17 != 0) {
        return;
      }
      goto code_?;
    }
  }
  pSVar4 = mscorlib.dll::System::String::String_Replace_1
                      (pSVar4,::StringLiteral__,
                       (String *)**(undefined8 **)(lRam_? + 0xb8),(MethodInfo *)0x0);
  if ((this_01->fields).m_LineType == 0) {
    if ((pSVar4 == (String *)0x0) ||
       (pSVar4 = mscorlib.dll::System::String::String_Replace_1
                            (pSVar4,StringLiteral_u000A,::StringLiteral__,(MethodInfo *)0x0),
       pSVar4 == (String *)0x0)) goto DAT_?;
    pSVar4 = mscorlib.dll::System::String::String_Replace_1
                        (pSVar4,StringLiteral_u0009,::StringLiteral__,(MethodInfo *)0x0);
  }
  if (((this_01->fields).m_OnValidateInput == (InputField_OnValidateInput *)0x0) &&
     ((this_01->fields).m_CharacterValidation == 0)) {
    if (0 < (this_01->fields).m_CharacterLimit) {
      if (pSVar4 == (String *)0x0) goto DAT_?;
      iVar18 = (this_01->fields).m_CharacterLimit;
      if (iVar18 < (pSVar4->fields)._stringLength) {
        pSVar4 = mscorlib.dll::System::String::String_Substring_1
                            (pSVar4,0,iVar18,(MethodInfo *)0x0);
      }
    }
    (this_01->fields).m_Text = pSVar4;
    func_?(&(this_01->fields).m_Text);
  }
  else {
    bVar14 = iRam_? != 0;
    (this_01->fields).m_Text = ::StringLiteral__;
    if (bVar14) {
      uVar10 = (uint)((ulonglong)&(this_01->fields).m_Text >> 0xc);
      lVar19 = (ulonglong)((uVar10 & 0x1fffff) >> 6) * 8;
      do {
        uVar11 = *(ulonglong *)(lVar19 + 0xADDR);
        puVar13 = (ulonglong *)(lVar19 + 0xADDR);
        LOCK();
        bVar14 = uVar11 == *puVar13;
        if (bVar14) {
          *puVar13 = uVar11 | 1L << (uVar10 & 0x3f);
        }
        UNLOCK();
      } while (!bVar14);
    }
    pIVar20 = (this_01->fields).m_OnValidateInput;
    if (pIVar20 == (InputField_OnValidateInput *)0x0) {
      pIVar20 = (InputField_OnValidateInput *)
                FUN_?(TypeInfo__UnityEngine__UI__InputField__OnValidateInput);
      pMVar21 = MethodInfo__UnityEngine__UI__InputField__Validate_System__String__int__wchar_t_;
      bVar14 = iRam_? != 0;
      (pIVar20->fields)._._.method_ptr =
           MethodInfo__UnityEngine__UI__InputField__Validate_System__String__int__wchar_t_->
           virtualMethodPointer;
      (pIVar20->fields)._._.method = pMVar21;
      (pIVar20->fields)._._.m_target = (Object *)this_01;
      if (bVar14) {
        uVar10 = (uint)((ulonglong)&(pIVar20->fields)._._.m_target >> 0xc);
        lVar19 = (ulonglong)((uVar10 & 0x1fffff) >> 6) * 8;
        do {
          uVar11 = *(ulonglong *)(lVar19 + 0xADDR);
          puVar13 = (ulonglong *)(lVar19 + 0xADDR);
          LOCK();
          bVar14 = uVar11 == *puVar13;
          if (bVar14) {
            *puVar13 = uVar11 | 1L << (uVar10 & 0x3f);
          }
          UNLOCK();
        } while (!bVar14);
      }
      uVar22 = pMVar21->parameters_count;
      (pIVar20->fields)._._.method_code = pIVar20;
      if ((pMVar21->flags & 0x10) == 0) {
        if (uVar22 != 2) goto code_?;
        pcVar2 = FUN_?;
      }
      else if (uVar22 == 3) {
        pcVar2 = FUN_?;
      }
      else {
code_?:
        (pIVar20->fields)._._.method_code = (pIVar20->fields)._._.m_target;
        pcVar2 = (pIVar20->fields)._._.method_ptr;
      }
      (pIVar20->fields)._._.invoke_impl = pcVar2;
      (pIVar20->fields)._._.extra_arg = FUN_?;
    }
    if (pSVar4 == (String *)0x0) goto DAT_?;
    iVar23 = (pSVar4->fields)._stringLength;
    (this_01->fields).m_CaretSelectPosition = iVar23;
    (this_01->fields).m_CaretPosition = iVar23;
    if ((this_01->fields).m_CharacterLimit < 1) {
      iVar18 = (pSVar4->fields)._stringLength;
    }
    else {
      iVar18 = (this_01->fields).m_CharacterLimit;
      iVar24 = (pSVar4->fields)._stringLength;
      if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (iVar24 < iVar18) {
        iVar18 = iVar24;
      }
    }
    uVar10 = 0;
    if (0 < iVar18) {
      puVar25 = &(pSVar4->fields)._firstChar;
      lVar19 = 0;
      do {
        pSVar16 = (this_01->fields).m_Text;
        if (pSVar16 == (String *)0x0) goto DAT_?;
        if ((longlong)(pSVar4->fields)._stringLength <= (longlong)(ulonglong)uVar10) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowIndexOutOfRangeException
                    ((MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (pIVar20 == (InputField_OnValidateInput *)0x0) goto DAT_?;
        c = (*(pIVar20->fields)._._.invoke_impl)
                      ((pIVar20->fields)._._.method_code,(this_01->fields).m_Text,
                       (pSVar16->fields)._stringLength,*puVar25,(pIVar20->fields)._._.method);
        if (c != 0) {
          pSVar16 = (this_01->fields).m_Text;
          if ((*(int *)(lRam_? + 0xe4) == 0) &&
             (FUN_?(), *(int *)(lRam_? + 0xe4) == 0)) {
            FUN_?();
          }
          str1 = mscorlib.dll::System::Char::Char_ToString_2(c,(MethodInfo *)0x0);
          pSVar16 = mscorlib.dll::System::String::String_Concat_4(pSVar16,str1,(MethodInfo *)0x0);
          (this_01->fields).m_Text = pSVar16;
          func_?(&(this_01->fields).m_Text);
        }
        uVar10 = uVar10 + 1;
        lVar19 = lVar19 + 1;
        puVar25 = puVar25 + 1;
      } while (lVar19 < iVar18);
    }
  }
  if ((this_01->fields).m_Keyboard != (TouchScreenKeyboard *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::TouchScreenKeyboard::TouchScreenKeyboard_set_text
              ((this_01->fields).m_Keyboard,(this_01->fields).m_Text,(MethodInfo *)0x0);
  }
  pSVar4 = (this_01->fields).m_Text;
  if (pSVar4 == (String *)0x0) {
DAT_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar18 = (pSVar4->fields)._stringLength;
  if (iVar18 < (this_01->fields).m_CaretPosition) {
    (this_01->fields).m_CaretPosition = iVar18;
  }
  else if ((this_01->fields).m_CaretSelectPosition <= iVar18) goto code_?;
  (this_01->fields).m_CaretSelectPosition = iVar18;
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
            (StringLiteral_InputField_value,(Object_1 *)this_01,(MethodInfo *)0x0);
  if ((this_01->fields).m_OnValueChanged != (InputField_OnChangeEvent *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent`1[System::Object]::
    UnityEvent_1_System_Object__Invoke
              ((UnityEvent_1_System_Object_ *)(this_01->fields).m_OnValueChanged,
               (Object *)(this_01->fields).m_Text,
               MethodInfo__UnityEngine__Events__UnityEvent<System::String>__Invoke_System__String_);
  }
  UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_UpdateLabel(this_01,(MethodInfo *)0x0)
  ;
  return;
}


/* Void CreateSettingsDialog(Int32) */

void Assembly-CSharp.dll::SettingsFactory::SettingsFactory_CreateSettingsDialog
               (SettingsFactory *this,int32_t woID,MethodInfo *method)

{
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((pMVar1 == (MVWorldObjectClientManager *)0x0) ||
     (pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                          (pMVar1,woID,(MethodInfo *)0x0), pMVar2 == (MVWorldObjectClient *)0x0)) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar4 = (pMVar2->fields)._.type;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__WorldObjectTypes__MVDoor__MVDoorBlueprint);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVVehicleBase);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVWorldObjectSpawnerVehicle);
    LOCK();
    UNLOCK();
    FUN_?(&
                  UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Camera__CameraBoxSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Camera::CameraBoxSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Camera__CameraBoxSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  CollectTheItemDropoffSettings_MethodInfo__UnityEngine__Object__Instantiate<CollectTheItemDropoffSettings>_CollectTheItemDropoffSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  CollectTheItemSettings_MethodInfo__UnityEngine__Object__Instantiate<CollectTheItemSettings>_CollectTheItemSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  CountingCubeSettings_MethodInfo__UnityEngine__Object__Instantiate<CountingCubeSettings>_CountingCubeSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  CubeGunSettings_MethodInfo__UnityEngine__Object__Instantiate<CubeGunSettings>_CubeGunSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Doors__DoorSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Doors::DoorSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Doors__DoorSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  FireSettings_MethodInfo__UnityEngine__Object__Instantiate<FireSettings>_FireSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  GameCoinChestSettings_MethodInfo__UnityEngine__Object__Instantiate<GameCoinChestSettings>_GameCoinChestSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  GamePointChestSettings_MethodInfo__UnityEngine__Object__Instantiate<GamePointChestSettings>_GamePointChestSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  GlobalSoundEmitterSettings_MethodInfo__UnityEngine__Object__Instantiate<GlobalSoundEmitterSettings>_GlobalSoundEmitterSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HamsterWheelSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::HamsterWheelSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HamsterWheelSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HoverCraftSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::HoverCraftSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HoverCraftSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__JetpackSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::JetpackSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__JetpackSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  KillLimitSettings_MethodInfo__UnityEngine__Object__Instantiate<KillLimitSettings>_KillLimitSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  LeverSettings_MethodInfo__UnityEngine__Object__Instantiate<LeverSettings>_LeverSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MessageBoxSettings_MethodInfo__UnityEngine__Object__Instantiate<MessageBoxSettings>_MessageBoxSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  ObjectEnablerSettings_MethodInfo__UnityEngine__Object__Instantiate<ObjectEnablerSettings>_ObjectEnablerSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UGUI__Desktop__Scripts__EditMode__SettingsBoxes__ObjectTransparencySettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::ObjectTransparencySettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__ObjectTransparencySettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  OculusSettings_MethodInfo__UnityEngine__Object__Instantiate<OculusSettings>_OculusSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  PointLightSettings_MethodInfo__UnityEngine__Object__Instantiate<PointLightSettings>_PointLightSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  PressurePlateSettings_MethodInfo__UnityEngine__Object__Instantiate<PressurePlateSettings>_PressurePlateSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  PulseBoxSettings_MethodInfo__UnityEngine__Object__Instantiate<PulseBoxSettings>_PulseBoxSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UGUI__Desktop__Scripts__EditMode__SettingsBoxes__RoundCubeSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::RoundCubeSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__RoundCubeSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  ShootablePlateSettings_MethodInfo__UnityEngine__Object__Instantiate<ShootablePlateSettings>_ShootablePlateSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  SkyboxSettings_MethodInfo__UnityEngine__Object__Instantiate<SkyboxSettings>_SkyboxSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  SmokeSettings_MethodInfo__UnityEngine__Object__Instantiate<SmokeSettings>_SmokeSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  SoundEmitterSettings_MethodInfo__UnityEngine__Object__Instantiate<SoundEmitterSettings>_SoundEmitterSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  SpawnPointSettings_MethodInfo__UnityEngine__Object__Instantiate<SpawnPointSettings>_SpawnPointSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  SpawnRoleEditorMenu_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleEditorMenu>_SpawnRoleEditorMenu_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TeamEditorSettings_MethodInfo__UnityEngine__Object__Instantiate<TeamEditorSettings>_TeamEditorSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TimeTriggerSettings_MethodInfo__UnityEngine__Object__Instantiate<TimeTriggerSettings>_TimeTriggerSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  ToggleBoxSettings_MethodInfo__UnityEngine__Object__Instantiate<ToggleBoxSettings>_ToggleBoxSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TriggerCubeSettings_MethodInfo__UnityEngine__Object__Instantiate<TriggerCubeSettings>_TriggerCubeSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__VehicleEnergySettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::VehicleEnergySettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__VehicleEnergySettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  WaterBoxSettings_MethodInfo__UnityEngine__Object__Instantiate<WaterBoxSettings>_WaterBoxSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  WindTurbineSettings_MethodInfo__UnityEngine__Object__Instantiate<WindTurbineSettings>_WindTurbineSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__SettingsFactory____c__DisplayClass58_0___CreateSettingsDialog_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SettingsFactory____c__DisplayClass58_0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__WorldObjectType);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Oculus_Kill_Limit);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_WorldObjectType__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__has_no_settings_dialogue_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Kill_Limit);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__SettingsFactory____c__DisplayClass58_0);
  if (iVar4 < 0x42) {
    if (iVar4 < 0xe) {
      if (iVar4 == 2) {
        pPVar5 = (this->fields).pointLightSettingsPrefab;
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        pPVar5 = (PointLightSettings *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)pPVar5,
                             PointLightSettings_MethodInfo__UnityEngine__Object__Instantiate<PointLightSettings>_PointLightSettings_
                            );
        pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        if (pPVar5 != (PointLightSettings *)0x0) {
          PointLightSettings::PointLightSettings_Initialize(pPVar5,woID,pGVar6,(MethodInfo *)0x0);
          return;
        }
        goto code_?;
      }
      if (iVar4 == 0xd) {
        pSVar7 = (this->fields).soundEmitterSettingsPrefab;
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        pSVar7 = (SoundEmitterSettings *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)pSVar7,
                             SoundEmitterSettings_MethodInfo__UnityEngine__Object__Instantiate<SoundEmitterSettings>_SoundEmitterSettings_
                            );
        pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        if (pSVar7 != (SoundEmitterSettings *)0x0) {
          SoundEmitterSettings::SoundEmitterSettings_Initialize
                    (pSVar7,woID,pGVar6,(MethodInfo *)0x0);
          return;
        }
        goto code_?;
      }
      goto code_?;
    }
    switch(iVar4) {
    case 0x14:
      pTVar8 = (this->fields).toggleBoxSettingsPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pTVar8 = (ToggleBoxSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pTVar8,
                           ToggleBoxSettings_MethodInfo__UnityEngine__Object__Instantiate<ToggleBoxSettings>_ToggleBoxSettings_
                          );
      pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (pTVar8 == (ToggleBoxSettings *)0x0) goto code_?;
      ToggleBoxSettings::ToggleBoxSettings_Initialize(pTVar8,woID,pGVar6,(MethodInfo *)0x0);
      break;
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x1c:
    case 0x1d:
    case 0x1e:
    case 0x1f:
    case 0x20:
    case 0x22:
    case 0x23:
    case 0x24:
    case 0x25:
      goto code_?;
    case 0x18:
      pMVar9 = (this->fields).messageBoxSettingsPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pMVar9 = (MessageBoxSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pMVar9,
                           MessageBoxSettings_MethodInfo__UnityEngine__Object__Instantiate<MessageBoxSettings>_MessageBoxSettings_
                          );
      pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (pMVar9 == (MessageBoxSettings *)0x0) goto code_?;
      MessageBoxSettings::MessageBoxSettings_Initialize(pMVar9,woID,pGVar6,(MethodInfo *)0x0);
      break;
    case 0x19:
      pFVar10 = (this->fields).fireSettingsPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pFVar10 = (FireSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pFVar10,
                           FireSettings_MethodInfo__UnityEngine__Object__Instantiate<FireSettings>_FireSettings_
                          );
      pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (pFVar10 == (FireSettings *)0x0) goto code_?;
      FireSettings::FireSettings_Initialize(pFVar10,woID,pGVar6,(MethodInfo *)0x0);
      break;
    case 0x1a:
      pSVar11 = (this->fields).smokeSettingsPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pSVar11 = (SmokeSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pSVar11,
                           SmokeSettings_MethodInfo__UnityEngine__Object__Instantiate<SmokeSettings>_SmokeSettings_
                          );
      pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (pSVar11 == (SmokeSettings *)0x0) goto code_?;
      SmokeSettings::SmokeSettings_Initialize(pSVar11,woID,pGVar6,(MethodInfo *)0x0);
      break;
    case 0x1b:
      pTVar12 = (this->fields).timeTriggerSettingsPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pTVar12 = (TimeTriggerSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pTVar12,
                           TimeTriggerSettings_MethodInfo__UnityEngine__Object__Instantiate<TimeTriggerSettings>_TimeTriggerSettings_
                          );
      pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (pTVar12 == (TimeTriggerSettings *)0x0) goto code_?;
      TimeTriggerSettings::TimeTriggerSettings_Initialize(pTVar12,woID,pGVar6,(MethodInfo *)0x0);
      break;
    case 0x21:
      pPVar13 = (this->fields).pressurePlateSettingsPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pPVar13 = (PressurePlateSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pPVar13,
                           PressurePlateSettings_MethodInfo__UnityEngine__Object__Instantiate<PressurePlateSettings>_PressurePlateSettings_
                          );
      pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (pPVar13 == (PressurePlateSettings *)0x0) goto code_?;
      PressurePlateSettings::PressurePlateSettings_Initialize
                (pPVar13,woID,pGVar6,(MethodInfo *)0x0);
      break;
    case 0x26:
      pSVar14 = (this->fields).skyboxSettingsPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pSVar14 = (SkyboxSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pSVar14,
                           SkyboxSettings_MethodInfo__UnityEngine__Object__Instantiate<SkyboxSettings>_SkyboxSettings_
                          );
      pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (pSVar14 == (SkyboxSettings *)0x0) goto code_?;
      SkyboxSettings::SkyboxSettings_Initialize(pSVar14,woID,pGVar6,(MethodInfo *)0x0);
      break;
    case 0x27:
    case 0x28:
    case 0x29:
    case 0x2a:
      pSVar15 = (this->fields).spawnPointSettingsPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pSVar15 = (SpawnPointSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pSVar15,
                           SpawnPointSettings_MethodInfo__UnityEngine__Object__Instantiate<SpawnPointSettings>_SpawnPointSettings_
                          );
      pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (pSVar15 == (SpawnPointSettings *)0x0) goto code_?;
      SpawnPointSettings::SpawnPointSettings_Initialize(pSVar15,woID,pGVar6,(MethodInfo *)0x0);
      break;
    case 0x2b:
      pOVar16 = (this->fields).objectEnablerPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pOVar16 = (ObjectEnablerSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pOVar16,
                           ObjectEnablerSettings_MethodInfo__UnityEngine__Object__Instantiate<ObjectEnablerSettings>_ObjectEnablerSettings_
                          );
      pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (pOVar16 == (ObjectEnablerSettings *)0x0) goto code_?;
      ObjectEnablerSettings::ObjectEnablerSettings_Initialize
                (pOVar16,woID,pGVar6,(MethodInfo *)0x0);
      break;
    case 0x2c:
      pWVar17 = (this->fields).waterBoxSettingsPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pWVar17 = (WaterBoxSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pWVar17,
                           WaterBoxSettings_MethodInfo__UnityEngine__Object__Instantiate<WaterBoxSettings>_WaterBoxSettings_
                          );
      pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (pWVar17 == (WaterBoxSettings *)0x0) goto code_?;
      WaterBoxSettings::WaterBoxSettings_Initialize(pWVar17,woID,pGVar6,(MethodInfo *)0x0);
      break;
    case 0x2d:
      SettingsFactory_CreateBlueprintSettings(this,woID,(MethodInfo *)0x0);
      break;
    case 0x2e:
      pPVar18 = (this->fields).pulseBoxPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pPVar18 = (PulseBoxSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pPVar18,
                           PulseBoxSettings_MethodInfo__UnityEngine__Object__Instantiate<PulseBoxSettings>_PulseBoxSettings_
                          );
      pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (pPVar18 == (PulseBoxSettings *)0x0) goto code_?;
      PulseBoxSettings::PulseBoxSettings_Initialize(pPVar18,woID,pGVar6,(MethodInfo *)0x0);
      break;
    default:
      switch(iVar4) {
      case 0x36:
        pCVar19 = (this->fields).cubeGunSettingsPrefab;
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        pCVar19 = (CubeGunSettings *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)pCVar19,
                             CubeGunSettings_MethodInfo__UnityEngine__Object__Instantiate<CubeGunSettings>_CubeGunSettings_
                            );
        if (pCVar19 == (CubeGunSettings *)0x0) goto code_?;
        CubeGunSettings::CubeGunSettings_Initialize
                  (pCVar19,woID,(this->fields).materialsController,(MethodInfo *)0x0);
        break;
      default:
        goto code_?;
      case 0x39:
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (pMVar1 == (MVWorldObjectClientManager *)0x0) goto code_?;
        pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                            (pMVar1,woID,(MethodInfo *)0x0);
        if (pMVar2 == (MVWorldObjectClient *)0x0) {
          MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          goto code_?;
        }
        bVar20 = (TypeInfo__MVWorldObjectSpawnerVehicle->_1).naturalAligment;
        if (((pMVar2->klass->_1).naturalAligment < bVar20) ||
           ((MVWorldObjectSpawnerVehicle__Class *)
            (pMVar2->klass->_1).typeHierarchy[(ulonglong)bVar20 - 1] !=
            TypeInfo__MVWorldObjectSpawnerVehicle)) {
          FUN_?(pMVar2);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (pMVar1 == (MVWorldObjectClientManager *)0x0) goto code_?;
        pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                            (pMVar1,pMVar2[1].fields._.ownerActorNr,(MethodInfo *)0x0);
        this_02 = (VehicleBaseSettings *)0x0;
        if (pMVar2 == (MVWorldObjectClient *)0x0) goto code_?;
        pMVar21 = pMVar2->klass;
        bVar20 = (TypeInfo__MVVehicleBase->_1).naturalAligment;
        if (((pMVar21->_1).naturalAligment < bVar20) ||
           ((MVVehicleBase__Class *)(pMVar21->_1).typeHierarchy[(ulonglong)bVar20 - 1] !=
            TypeInfo__MVVehicleBase)) {
          FUN_?(pMVar2,TypeInfo__MVVehicleBase);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar4 = (*(pMVar21->vtable).get_DocumentationType.methodPtr)();
        if (iVar4 < 0x1b) {
          if (iVar4 == 0x19) {
            original_00 = (this->fields).hoverCraftSettingsPrefab;
            method_00 = 
            UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HoverCraftSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::HoverCraftSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HoverCraftSettings_
            ;
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
              method_00 = 
              UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HoverCraftSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::HoverCraftSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HoverCraftSettings_
              ;
            }
          }
          else {
            if (iVar4 != 0x1a) goto code_?;
            original_00 = (HoverCraftSettings *)(this->fields).hamsterWheelSettingsPrefab;
            method_00 = 
            UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HamsterWheelSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::HamsterWheelSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HamsterWheelSettings_
            ;
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
              method_00 = 
              UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HamsterWheelSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::HamsterWheelSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HamsterWheelSettings_
              ;
            }
          }
code_?:
          this_02 = (VehicleBaseSettings *)
                    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                              ((Object *)original_00,method_00);
        }
        else if ((iVar4 == 0x1f) || (iVar4 == 0x22)) {
          original_00 = (HoverCraftSettings *)(this->fields).jetpackSettingsPrefab;
          method_00 = 
          UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__JetpackSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::JetpackSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__JetpackSettings_
          ;
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
            method_00 = 
            UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__JetpackSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::JetpackSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__JetpackSettings_
            ;
          }
          goto code_?;
        }
code_?:
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (this_02 != (VehicleBaseSettings *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if ((this_02->fields)._._._._.m_CachedPtr != (void *)0x0) {
            pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)this,(MethodInfo *)0x0);
            UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::VehicleBaseSettings::
            VehicleBaseSettings_Initialize(this_02,woID,pGVar6,(MethodInfo *)0x0);
          }
        }
        break;
      case 0x3c:
        pRVar22 = (this->fields).roundCubeSettingsPrefab;
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        pRVar22 = (RoundCubeSettings *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)pRVar22,
                             UGUI__Desktop__Scripts__EditMode__SettingsBoxes__RoundCubeSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::RoundCubeSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__RoundCubeSettings_
                            );
        pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        if (pRVar22 == (RoundCubeSettings *)0x0) goto code_?;
        UGUI::Desktop::Scripts::EditMode::SettingsBoxes::RoundCubeSettings::
        RoundCubeSettings_Initialize(pRVar22,woID,pGVar6,(MethodInfo *)0x0);
        break;
      case 0x3d:
        pOVar23 = (this->fields).oculusSettingsPrefab;
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        pOVar23 = (OculusSettings *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)pOVar23,
                             OculusSettings_MethodInfo__UnityEngine__Object__Instantiate<OculusSettings>_OculusSettings_
                            );
        pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        if (pOVar23 == (OculusSettings *)0x0) goto code_?;
        OculusSettings::OculusSettings_Initialize(pOVar23,woID,pGVar6,(MethodInfo *)0x0);
        break;
      case 0x3f:
        pKVar24 = (this->fields).killLimitSettingsPrefab;
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        pKVar24 = (KillLimitSettings *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)pKVar24,
                             KillLimitSettings_MethodInfo__UnityEngine__Object__Instantiate<KillLimitSettings>_KillLimitSettings_
                            );
        pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        pSVar25 = StringLiteral_Kill_Limit;
        goto code_?;
      case 0x40:
        pKVar24 = (this->fields).killLimitSettingsPrefab;
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        pKVar24 = (KillLimitSettings *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)pKVar24,
                             KillLimitSettings_MethodInfo__UnityEngine__Object__Instantiate<KillLimitSettings>_KillLimitSettings_
                            );
        pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        pSVar25 = StringLiteral_Oculus_Kill_Limit;
code_?:
        pSVar25 = TM::TM__(pSVar25,(MethodInfo *)0x0);
        if (pKVar24 == (KillLimitSettings *)0x0) {
code_?:
          FUN_?();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        KillLimitSettings::KillLimitSettings_Initialize
                  (pKVar24,woID,pGVar6,pSVar25,(MethodInfo *)0x0);
        break;
      case 0x41:
        pCVar26 = (this->fields).countingCubeSettingsPrefab;
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        pCVar26 = (CountingCubeSettings *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)pCVar26,
                             CountingCubeSettings_MethodInfo__UnityEngine__Object__Instantiate<CountingCubeSettings>_CountingCubeSettings_
                            );
        pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        if (pCVar26 == (CountingCubeSettings *)0x0) goto code_?;
        CountingCubeSettings::CountingCubeSettings_Initialize
                  (pCVar26,woID,pGVar6,(MethodInfo *)0x0);
      }
    }
  }
  else {
    if (iVar4 < 0x87) {
      if (iVar4 == 0x77) {
        pVVar27 = (this->fields).vehicleEnergySettingsPrefab;
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        pVVar27 = (VehicleEnergySettings *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)pVVar27,
                             UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__VehicleEnergySettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::VehicleEnergySettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__VehicleEnergySettings_
                            );
        pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        if (pVVar27 != (VehicleEnergySettings *)0x0) {
          UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::VehicleEnergySettings::
          VehicleEnergySettings_Initialize(pVVar27,woID,pGVar6,(MethodInfo *)0x0);
          return;
        }
        goto code_?;
      }
      if (iVar4 == 0x86) {
        original = (this->fields).spawnRoleEditorPrefab;
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        pOVar28 = (Object__Class *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)original,
                             SpawnRoleEditorMenu_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleEditorMenu>_SpawnRoleEditorMenu_
                            );
        if (object != (Object *)0x0) {
          object[1].klass = pOVar28;
          func_?(object + 1);
          if (object[1].klass != (Object__Class *)0x0) {
            SpawnRoleEditorMenu::SpawnRoleEditorMenu_Initialize
                      ((SpawnRoleEditorMenu *)object[1].klass,woID,(MethodInfo *)0x0);
            pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)this,(MethodInfo *)0x0);
            this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                      FUN_?(
                                   TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                   );
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
            Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                      (this_01,object,
                       MethodInfo__SettingsFactory____c__DisplayClass58_0___CreateSettingsDialog_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
              FUN_?();
            }
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy
                      (pGVar6,(BaseEventData *)0x0,this_01,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                      );
            return;
          }
        }
        goto code_?;
      }
      goto code_?;
    }
    if (iVar4 == 0x88) {
      pOVar29 = (this->fields).objectTransparencySettingsPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pOVar29 = (ObjectTransparencySettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pOVar29,
                           UGUI__Desktop__Scripts__EditMode__SettingsBoxes__ObjectTransparencySettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::ObjectTransparencySettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__ObjectTransparencySettings_
                          );
      pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (pOVar29 != (ObjectTransparencySettings *)0x0) {
        UGUI::Desktop::Scripts::EditMode::SettingsBoxes::ObjectTransparencySettings::
        ObjectTransparencySettings_Initialize(pOVar29,woID,pGVar6,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
    switch(iVar4) {
    case 0x91:
      pCVar30 = (this->fields).cameraBoxSettingsPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pCVar30 = (CameraBoxSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pCVar30,
                           UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Camera__CameraBoxSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Camera::CameraBoxSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Camera__CameraBoxSettings_
                          );
      pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (pCVar30 == (CameraBoxSettings *)0x0) goto code_?;
      UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Camera::CameraBoxSettings::
      CameraBoxSettings_Initialize(pCVar30,woID,pGVar6,(MethodInfo *)0x0);
      break;
    case 0x95:
      pGVar31 = (this->fields).gameCoinChestSettingsPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pGVar31 = (GameCoinChestSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pGVar31,
                           GameCoinChestSettings_MethodInfo__UnityEngine__Object__Instantiate<GameCoinChestSettings>_GameCoinChestSettings_
                          );
      pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (pGVar31 == (GameCoinChestSettings *)0x0) goto code_?;
      GameCoinChestSettings::GameCoinChestSettings_Initialize
                (pGVar31,woID,pGVar6,(MethodInfo *)0x0);
      break;
    case 0x98:
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if ((pMVar1 != (MVWorldObjectClientManager *)0x0) &&
         (pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                              (pMVar1,woID,(MethodInfo *)0x0), pMVar2 != (MVWorldObjectClient *)0x0
         )) {
        bVar20 = (TypeInfo__WorldObjectTypes__MVDoor__MVDoorBlueprint->_1).naturalAligment;
        if (((pMVar2->klass->_1).naturalAligment < bVar20) ||
           ((MVDoorBlueprint__Class *)(pMVar2->klass->_1).typeHierarchy[(ulonglong)bVar20 - 1] !=
            TypeInfo__WorldObjectTypes__MVDoor__MVDoorBlueprint)) {
          FUN_?(pMVar2,TypeInfo__WorldObjectTypes__MVDoor__MVDoorBlueprint);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pLVar32 = pMVar2[1].fields._.outputLinkRefs;
        if (pLVar32 != (List_1_MV_WorldObject_Link_ *)0x0) {
          woID_00 = *(int32_t *)&(pLVar32->fields)._items;
          pDVar33 = (this->fields).doorSettingsPrefab;
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          pDVar33 = (DoorSettings *)
                    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                              ((Object *)pDVar33,
                               UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Doors__DoorSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Doors::DoorSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Doors__DoorSettings_
                              );
          pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)this,(MethodInfo *)0x0);
          if (pDVar33 != (DoorSettings *)0x0) {
            UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Doors::DoorSettings::
            DoorSettings_Initialize(pDVar33,woID_00,pGVar6,(MethodInfo *)0x0);
            return;
          }
        }
      }
      goto code_?;
    case 0x9a:
    case 0x9c:
    case 0x9e:
      SettingsFactory_CreateEditablePickupItemsSettings(this,woID,(MethodInfo *)0x0);
      break;
    case 0xa1:
      pTVar34 = (this->fields).teamEditorSettingsPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pTVar34 = (TeamEditorSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pTVar34,
                           TeamEditorSettings_MethodInfo__UnityEngine__Object__Instantiate<TeamEditorSettings>_TeamEditorSettings_
                          );
      pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (pTVar34 != (TeamEditorSettings *)0x0) {
        this_00 = (pTVar34->fields).settingsBase;
        (pTVar34->fields).woID = woID;
        if (this_00 != (SettingsBase *)0x0) {
          SettingsBase::SettingsBase_Initialize
                    (this_00,woID,pGVar6,MVWorldObjectDocumentationType__Enum_TeamEditor,
                     (MethodInfo *)0x0);
          pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          if ((pMVar1 != (MVWorldObjectClientManager *)0x0) &&
             (pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                                  (pMVar1,woID,(MethodInfo *)0x0),
             pMVar2 != (MVWorldObjectClient *)0x0)) {
            bVar35 = iRam_? != 0;
            (pTVar34->fields).teamData = (pMVar2->fields)._.data;
            if (bVar35) {
              uVar36 = (uint)((ulonglong)&(pTVar34->fields).teamData >> 0xc);
              puVar37 = (ulonglong *)((ulonglong)((uVar36 & 0x1fffff) >> 6) * 8 + 0xADDR);
              do {
                uVar38 = *puVar37;
                LOCK();
                uVar39 = *puVar37;
                if (uVar38 == uVar39) {
                  *puVar37 = uVar38 | 1L << (uVar36 & 0x3f);
                }
                UNLOCK();
              } while (uVar38 != uVar39);
            }
            TeamEditorSettings::TeamEditorSettings_InitInputfield
                      (pTVar34,(pTVar34->fields).blueTeam,(pTVar34->fields).blueTeamButton,
                       MVTeam__Enum_Blue,(MethodInfo *)0x0);
            TeamEditorSettings::TeamEditorSettings_InitInputfield
                      (pTVar34,(pTVar34->fields).redTeam,(pTVar34->fields).redTeamButton,
                       MVTeam__Enum_Red,(MethodInfo *)0x0);
            TeamEditorSettings::TeamEditorSettings_InitInputfield
                      (pTVar34,(pTVar34->fields).greenTeam,(pTVar34->fields).greenTeamButton,
                       MVTeam__Enum_Green,(MethodInfo *)0x0);
            TeamEditorSettings::TeamEditorSettings_InitInputfield
                      (pTVar34,(pTVar34->fields).yellowTeam,(pTVar34->fields).yellowTeamButton,
                       MVTeam__Enum_Yellow,(MethodInfo *)0x0);
            TeamEditorSettings::TeamEditorSettings_SetActiveButtons
                      (pTVar34,(pTVar34->fields).teamData,(MethodInfo *)0x0);
            bVar35 = iRam_? == 0;
            (pTVar34->fields).teamData = (Dictionary_2_System_Object_System_Object_ *)0x0;
            if (bVar35) {
              return;
            }
            uVar36 = (uint)((ulonglong)&(pTVar34->fields).teamData >> 0xc);
            puVar37 = (ulonglong *)((ulonglong)((uVar36 & 0x1fffff) >> 6) * 8 + 0xADDR);
            do {
              uVar38 = *puVar37;
              LOCK();
              uVar39 = *puVar37;
              if (uVar38 == uVar39) {
                *puVar37 = uVar38 | 1L << (uVar36 & 0x3f);
              }
              UNLOCK();
            } while (uVar38 != uVar39);
            return;
          }
        }
      }
      goto code_?;
    case 0xa2:
      pTVar40 = (this->fields).triggerCubeSettingsPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pTVar40 = (TriggerCubeSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pTVar40,
                           TriggerCubeSettings_MethodInfo__UnityEngine__Object__Instantiate<TriggerCubeSettings>_TriggerCubeSettings_
                          );
      pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (pTVar40 == (TriggerCubeSettings *)0x0) goto code_?;
      TriggerCubeSettings::TriggerCubeSettings_Initialize(pTVar40,woID,pGVar6,(MethodInfo *)0x0);
      break;
    case 0xa5:
      pSVar41 = (this->fields).shootablePlateSettingsPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pSVar41 = (ShootablePlateSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pSVar41,
                           ShootablePlateSettings_MethodInfo__UnityEngine__Object__Instantiate<ShootablePlateSettings>_ShootablePlateSettings_
                          );
      pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (pSVar41 == (ShootablePlateSettings *)0x0) goto code_?;
      ShootablePlateSettings::ShootablePlateSettings_Initialize
                (pSVar41,woID,pGVar6,(MethodInfo *)0x0);
      break;
    case 0xa6:
      pLVar42 = (this->fields).leverSettingsPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pLVar42 = (LeverSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pLVar42,
                           LeverSettings_MethodInfo__UnityEngine__Object__Instantiate<LeverSettings>_LeverSettings_
                          );
      pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (pLVar42 == (LeverSettings *)0x0) goto code_?;
      LeverSettings::LeverSettings_Initialize(pLVar42,woID,pGVar6,(MethodInfo *)0x0);
      break;
    case 0xa7:
      pCVar43 = (this->fields).collectTheItemDropoffSettingsPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pCVar43 = (CollectTheItemDropoffSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pCVar43,
                           CollectTheItemDropoffSettings_MethodInfo__UnityEngine__Object__Instantiate<CollectTheItemDropoffSettings>_CollectTheItemDropoffSettings_
                          );
      pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (pCVar43 == (CollectTheItemDropoffSettings *)0x0) goto code_?;
      CollectTheItemDropoffSettings::CollectTheItemDropoffSettings_Initialize
                (pCVar43,woID,pGVar6,(MethodInfo *)0x0);
      break;
    case 0xa8:
      pCVar44 = (this->fields).collectTheItemSettingsPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pCVar44 = (CollectTheItemSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pCVar44,
                           CollectTheItemSettings_MethodInfo__UnityEngine__Object__Instantiate<CollectTheItemSettings>_CollectTheItemSettings_
                          );
      pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (pCVar44 == (CollectTheItemSettings *)0x0) goto code_?;
      CollectTheItemSettings::CollectTheItemSettings_Initialize
                (pCVar44,woID,pGVar6,(MethodInfo *)0x0);
      break;
    case 0xaa:
      pWVar45 = (this->fields).windTurbineSettingsPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pWVar45 = (WindTurbineSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pWVar45,
                           WindTurbineSettings_MethodInfo__UnityEngine__Object__Instantiate<WindTurbineSettings>_WindTurbineSettings_
                          );
      pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (pWVar45 == (WindTurbineSettings *)0x0) goto code_?;
      WindTurbineSettings::WindTurbineSettings_Initialize(pWVar45,woID,pGVar6,(MethodInfo *)0x0);
      break;
    case 0xab:
      pGVar46 = (this->fields).globalSoundEmitterSettingsPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pGVar46 = (GlobalSoundEmitterSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pGVar46,
                           GlobalSoundEmitterSettings_MethodInfo__UnityEngine__Object__Instantiate<GlobalSoundEmitterSettings>_GlobalSoundEmitterSettings_
                          );
      pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (pGVar46 == (GlobalSoundEmitterSettings *)0x0) goto code_?;
      GlobalSoundEmitterSettings::GlobalSoundEmitterSettings_Initialize
                (pGVar46,woID,pGVar6,(MethodInfo *)0x0);
      break;
    default:
      if (iVar4 == 0xb5) {
        pGVar47 = (this->fields).gamePointChestSettingsPrefab;
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        pGVar47 = (GamePointChestSettings *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)pGVar47,
                             GamePointChestSettings_MethodInfo__UnityEngine__Object__Instantiate<GamePointChestSettings>_GamePointChestSettings_
                            );
        pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        if (pGVar47 != (GamePointChestSettings *)0x0) {
          GamePointChestSettings::GamePointChestSettings_Initialize
                    (pGVar47,woID,pGVar6,(MethodInfo *)0x0);
          return;
        }
        goto code_?;
      }
    case 0x92:
    case 0x93:
    case 0x94:
    case 0x96:
    case 0x97:
    case 0x99:
    case 0x9b:
    case 0x9d:
    case 0x9f:
    case 0xa0:
    case 0xa3:
    case 0xa4:
    case 0xa9:
code_?:
      EStack_48.klass = (Enum__Class *)TypeInfo__MV__WorldObject__WorldObjectType;
      EStack_48.monitor = (MonitorData *)0xffffffffffffffff;
      iStack_49 = iVar4;
      pSVar25 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_48,(MethodInfo *)0x0);
      pSVar25 = mscorlib.dll::System::String::String_Concat_5
                          (StringLiteral_WorldObjectType__,pSVar25,
                           StringLiteral__has_no_settings_dialogue_,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)pSVar25,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void CreateSettingsDialog(Int32, UseRequirementType) */

void Assembly-CSharp.dll::SettingsFactory::SettingsFactory_CreateSettingsDialog_1
               (SettingsFactory *this,int32_t woID,UseRequirementType__Enum requirementType,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  GameCoinRequirementSettings_MethodInfo__UnityEngine__Object__Instantiate<GameCoinRequirementSettings>_GameCoinRequirementSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  GameRankRequirementSettings_MethodInfo__UnityEngine__Object__Instantiate<GameRankRequirementSettings>_GameRankRequirementSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  LevelRequirementSettings_MethodInfo__UnityEngine__Object__Instantiate<LevelRequirementSettings>_LevelRequirementSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UGUI__Desktop__Scripts__EditMode__SettingsBoxes__RewardedAdRequirementSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::RewardedAdRequirementSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__RewardedAdRequirementSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  StarsRequirementSettings_MethodInfo__UnityEngine__Object__Instantiate<StarsRequirementSettings>_StarsRequirementSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TeamRequirementSettings_MethodInfo__UnityEngine__Object__Instantiate<TeamRequirementSettings>_TeamRequirementSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  switch(requirementType) {
  case UseRequirementType__Enum_Level:
    pLVar1 = (this->fields).levelRequirementSettingsPrefab;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    pLVar1 = (LevelRequirementSettings *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)pLVar1,
                         LevelRequirementSettings_MethodInfo__UnityEngine__Object__Instantiate<LevelRequirementSettings>_LevelRequirementSettings_
                        );
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    if (pLVar1 != (LevelRequirementSettings *)0x0) {
      LevelRequirementSettings::LevelRequirementSettings_Initialize
                (pLVar1,woID,pGVar2,(MethodInfo *)0x0);
      return;
    }
    goto code_?;
  case UseRequirementType__Enum_GameCoin:
    original = (this->fields).gameCoinRequirementSettingsPrefab;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    pOVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)original,
                         GameCoinRequirementSettings_MethodInfo__UnityEngine__Object__Instantiate<GameCoinRequirementSettings>_GameCoinRequirementSettings_
                        );
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    if (pOVar3 == (Object *)0x0) goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Convert,woID,pGVar2,0);
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
    pOVar4 = pOVar3[2].klass;
    pSVar5 = TM::TM__(StringLiteral_Game_Coin_Requirement,(MethodInfo *)0x0);
    if (pOVar4 == (Object__Class *)0x0) {
code_?:
      FUN_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pTVar7 = (Text *)(pOVar4->_0).byval_arg.data.array;
    (pOVar4->_0).byval_arg.attrs = (short)woID;
    (pOVar4->_0).byval_arg.type = (char)((uint)woID >> 0x10);
    (pOVar4->_0).byval_arg.field_0xb = (char)((uint)woID >> 0x18);
    if (pTVar7 == (Text *)0x0) goto code_?;
    (*(pTVar7->klass->vtable).set_text.methodPtr)
              (pTVar7,pSVar5,(pTVar7->klass->vtable).set_text.method);
    uVar8 = 0;
    SettingsBase::SettingsBase_InitializeHierarchy
              ((SettingsBase *)pOVar4,woID,pGVar2,(MethodInfo *)0x0);
    pMVar9 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (((pMVar9 == (MVWorldObjectClientManager *)0x0) ||
        (pMVar10 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                             (pMVar9,woID,(MethodInfo *)0x0), pMVar10 == (MVWorldObjectClient *)0x0
        )) || (pDVar11 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                          *)(pMVar10->fields)._.data,
              pDVar11 ==
              (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
               *)0x0)) goto code_?;
    iVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
             UIElements::StyleComplexSelector+PseudoStateData]::
             Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                       (pDVar11,(Object *)StringLiteral_gameCoinAmount,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                        ->klass->rgctx_data[0x21].method);
    lVar13 = lRam_?;
    if (iVar12 < 0) {
      pOVar14 = (Object *)((ulonglong)unaff_RBX & 0xffffffff00000000);
      if (*(int *)(lRam_? + 0x28) < 0) {
        if ((*(longlong *)(lRam_? + 0x60) == 0) ||
           ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
          pOVar14 = (Object *)FUN_?(lRam_?);
          FUN_?(pOVar14 + 1,&stack0x00000008,(longlong)*(int *)(lVar13 + 0xf8) + -0x10);
          if (iRam_? != 0) {
            uVar15 = (uint)((ulonglong)(pOVar14 + 1) >> 0xc);
            uVar16 = (ulonglong)((uVar15 & 0x1fffff) >> 6);
            uVar8 = (ulonglong)(uVar15 & 0x3f);
            do {
              uVar17 = *(ulonglong *)(uVar16 * 8 + 0xADDR);
              puVar18 = (ulonglong *)(uVar16 * 8 + 0xADDR);
              LOCK();
              bVar19 = uVar17 == *puVar18;
              if (bVar19) {
                *puVar18 = uVar17 | 1L << uVar8;
              }
              UNLOCK();
            } while (!bVar19);
          }
        }
        else {
          pOVar14 = (Object *)0x0;
        }
      }
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)pDVar11,
                 (Object *)StringLiteral_gameCoinAmount,pOVar14,
                 (InsertionBehavior__Enum)CONCAT71((int7)(uVar8 >> 8),1),
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
    }
    pOVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__get_Item
                        ((Dictionary_2_System_Object_System_Object_ *)pDVar11,
                         (Object *)StringLiteral_gameCoinAmount,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
    if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
      FUN_?();
    }
    iVar12 = mscorlib.dll::System::Convert::Convert_ToInt32(pOVar14,(MethodInfo *)0x0);
    if ((SettingsSlider *)pOVar3[2].monitor == (SettingsSlider *)0x0) goto code_?;
    SettingsSlider::SettingsSlider_Initialize_1
              ((SettingsSlider *)pOVar3[2].monitor,StringLiteral_gameCoinAmount,iVar12,0,10000,
               (MethodInfo *)0x0);
    pOVar4 = pOVar3[3].klass;
    if (pOVar4 == (Object__Class *)0x0) goto code_?;
    fVar20 = (float)iVar12;
    pIVar21 = (Il2CppClass *)StringLiteral_gameCoinAmount;
    break;
  case UseRequirementType__Enum_Star:
    pSVar22 = (this->fields).starsRequirementSettingsPrefab;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    pSVar22 = (StarsRequirementSettings *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)pSVar22,
                         StarsRequirementSettings_MethodInfo__UnityEngine__Object__Instantiate<StarsRequirementSettings>_StarsRequirementSettings_
                        );
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    if (pSVar22 == (StarsRequirementSettings *)0x0) goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Convert,woID,pGVar2,0);
      LOCK();
      UNLOCK();
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
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_starAmount);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_Star_Requirement);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pSVar23 = (pSVar22->fields).settingsBase;
    pSVar5 = TM::TM__(StringLiteral_Star_Requirement,(MethodInfo *)0x0);
    if (pSVar23 == (SettingsBase *)0x0) {
code_?:
      FUN_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pTVar7 = (pSVar23->fields).headerText;
    (pSVar23->fields).woID = woID;
    if (pTVar7 == (Text *)0x0) goto code_?;
    (*(pTVar7->klass->vtable).set_text.methodPtr)
              (pTVar7,pSVar5,(pTVar7->klass->vtable).set_text.method);
    uVar8 = 0;
    SettingsBase::SettingsBase_InitializeHierarchy(pSVar23,woID,pGVar2,(MethodInfo *)0x0);
    if (woID == -1) {
      pDVar24 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                 *)FUN_?(
                                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
      Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                (pDVar24,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      lVar13 = lRam_?;
      unaff_RBX = (Object *)((ulonglong)unaff_RBX & 0xffffffff00000000);
      pOVar3 = unaff_RBX;
      if (*(int *)(lRam_? + 0x28) < 0) {
        if ((*(longlong *)(lRam_? + 0x60) == 0) ||
           ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
          pOVar3 = (Object *)FUN_?(lRam_?);
          FUN_?(pOVar3 + 1,&stack0x00000008,(longlong)*(int *)(lVar13 + 0xf8) + -0x10);
          if (iRam_? != 0) {
            uVar15 = (uint)((ulonglong)(pOVar3 + 1) >> 0xc);
            uVar16 = (ulonglong)((uVar15 & 0x1fffff) >> 6);
            do {
              uVar17 = *(ulonglong *)(uVar16 * 8 + 0xADDR);
              puVar18 = (ulonglong *)(uVar16 * 8 + 0xADDR);
              LOCK();
              bVar19 = uVar17 == *puVar18;
              if (bVar19) {
                *puVar18 = uVar17 | 1L << (uVar15 & 0x3f);
              }
              UNLOCK();
            } while (!bVar19);
          }
        }
        else {
          pOVar3 = (Object *)0x0;
        }
      }
      if (pDVar24 ==
          (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
           *)0x0) goto code_?;
      uVar8 = CONCAT71((int7)(uVar8 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)pDVar24,
                 (Object *)StringLiteral_starAmount,pOVar3,(InsertionBehavior__Enum)uVar8,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
    }
    else {
      pMVar9 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (((pMVar9 == (MVWorldObjectClientManager *)0x0) ||
          (pMVar10 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                               (pMVar9,woID,(MethodInfo *)0x0),
          pMVar10 == (MVWorldObjectClient *)0x0)) ||
         (pDVar24 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                     *)(pMVar10->fields)._.data,
         pDVar24 ==
         (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
          *)0x0)) goto code_?;
    }
    iVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
             UIElements::StyleComplexSelector+PseudoStateData]::
             Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                       ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                         *)pDVar24,(Object *)StringLiteral_starAmount,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                        ->klass->rgctx_data[0x21].method);
    lVar13 = lRam_?;
    if (iVar12 < 0) {
      pOVar3 = (Object *)((ulonglong)unaff_RBX & 0xffffffff00000000);
      if (*(int *)(lRam_? + 0x28) < 0) {
        if ((*(longlong *)(lRam_? + 0x60) == 0) ||
           ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
          pOVar3 = (Object *)FUN_?(lRam_?);
          FUN_?(pOVar3 + 1,&stack0x00000008,(longlong)*(int *)(lVar13 + 0xf8) + -0x10);
          if (iRam_? != 0) {
            uVar15 = (uint)((ulonglong)(pOVar3 + 1) >> 0xc);
            uVar16 = (ulonglong)((uVar15 & 0x1fffff) >> 6);
            uVar8 = (ulonglong)(uVar15 & 0x3f);
            do {
              uVar17 = *(ulonglong *)(uVar16 * 8 + 0xADDR);
              puVar18 = (ulonglong *)(uVar16 * 8 + 0xADDR);
              LOCK();
              bVar19 = uVar17 == *puVar18;
              if (bVar19) {
                *puVar18 = uVar17 | 1L << uVar8;
              }
              UNLOCK();
            } while (!bVar19);
          }
        }
        else {
          pOVar3 = (Object *)0x0;
        }
      }
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)pDVar24,
                 (Object *)StringLiteral_starAmount,pOVar3,
                 (InsertionBehavior__Enum)CONCAT71((int7)(uVar8 >> 8),1),
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
    }
    pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__get_Item
                        ((Dictionary_2_System_Object_System_Object_ *)pDVar24,
                         (Object *)StringLiteral_starAmount,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
    if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
      FUN_?();
    }
    iVar12 = mscorlib.dll::System::Convert::Convert_ToInt32(pOVar3,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&
                    AllCollectiblesCollectedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<AllCollectiblesCollectedClient>__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar25 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar25 == (MVGameControllerBase *)0x0) ||
        (pMVar26 = (pMVar25->fields).game, pMVar26 == (MVNetworkGame *)0x0)) ||
       (this_00 = (pMVar26->fields)._WinningConditionManager_k__BackingField,
       this_00 == (WinningConditionManager *)0x0)) goto code_?;
    pAVar27 = (AllCollectiblesCollectedClient *)
              MVWorldObject.dll::WinningConditionManager::
              WinningConditionManager_GetSingletonWinnerConditionByType
                        (this_00,
                         AllCollectiblesCollectedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<AllCollectiblesCollectedClient>__
                        );
    bVar19 = iRam_? != 0;
    (pSVar22->fields).collectible = pAVar27;
    if (bVar19) {
      uVar15 = (uint)((ulonglong)&(pSVar22->fields).collectible >> 0xc);
      uVar8 = (ulonglong)((uVar15 & 0x1fffff) >> 6);
      do {
        uVar16 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
        puVar18 = (ulonglong *)(uVar8 * 8 + 0xADDR);
        LOCK();
        bVar19 = uVar16 == *puVar18;
        if (bVar19) {
          *puVar18 = uVar16 | 1L << (uVar15 & 0x3f);
        }
        UNLOCK();
      } while (!bVar19);
    }
    if ((pSVar22->fields).collectible != (AllCollectiblesCollectedClient *)0x0) {
      (pSVar22->fields).maxValue = (((pSVar22->fields).collectible)->fields)._._.limit + -1;
    }
    StarsRequirementSettings::StarsRequirementSettings_UpdateMessage
              (pSVar22,iVar12,(MethodInfo *)0x0);
    this_01 = (pSVar22->fields).slider;
    if (this_01 == (SettingsSlider *)0x0) goto code_?;
    SettingsSlider::SettingsSlider_Initialize_1
              (this_01,StringLiteral_starAmount,iVar12,0,(pSVar22->fields).maxValue,
               (MethodInfo *)0x0);
    pOVar4 = (Object__Class *)(pSVar22->fields).inputField;
    if (pOVar4 == (Object__Class *)0x0) goto code_?;
    fVar20 = (float)iVar12;
    pIVar21 = (Il2CppClass *)StringLiteral_starAmount;
    break;
  case UseRequirementType__Enum_Team:
    pTVar28 = (this->fields).teamRequirementSettingsPrefab;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    pTVar28 = (TeamRequirementSettings *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)pTVar28,
                         TeamRequirementSettings_MethodInfo__UnityEngine__Object__Instantiate<TeamRequirementSettings>_TeamRequirementSettings_
                        );
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    if (pTVar28 != (TeamRequirementSettings *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Convert,woID,pGVar2,0);
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
                      MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__MV__WorldObject__MVTeam);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_Team_Requirement);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_team);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pSVar23 = (pTVar28->fields).settingsBase;
      pSVar5 = TM::TM__(StringLiteral_Team_Requirement,(MethodInfo *)0x0);
      if (pSVar23 != (SettingsBase *)0x0) {
        pTVar7 = (pSVar23->fields).headerText;
        (pSVar23->fields).woID = woID;
        if (pTVar7 != (Text *)0x0) {
          (*(pTVar7->klass->vtable).set_text.methodPtr)
                    (pTVar7,pSVar5,(pTVar7->klass->vtable).set_text.method);
          uVar29 = 0;
          SettingsBase::SettingsBase_InitializeHierarchy(pSVar23,woID,pGVar2,(MethodInfo *)0x0);
          pMVar9 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          if (((pMVar9 != (MVWorldObjectClientManager *)0x0) &&
              (pMVar10 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                                   (pMVar9,woID,(MethodInfo *)0x0),
              pMVar10 != (MVWorldObjectClient *)0x0)) &&
             (pDVar11 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                         *)(pMVar10->fields)._.data,
             pDVar11 !=
             (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
              *)0x0)) {
            iVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     Object,UnityEngine::UIElements::StyleComplexSelector+PseudoStateData]::
                     Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                               (pDVar11,(Object *)StringLiteral_team,
                                MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                                ->klass->rgctx_data[0x21].method);
            if (iVar12 < 0) {
              pOVar3 = (Object *)FUN_?(TypeInfo__MV__WorldObject__MVTeam);
              if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
                FUN_?();
              }
              mscorlib.dll::System::Convert::Convert_ToInt32(pOVar3,(MethodInfo *)0x0);
              pOVar3 = (Object *)FUN_?(lRam_?,&stack0x00000010);
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__TryInsert
                        ((Dictionary_2_System_Object_System_Object_ *)pDVar11,
                         (Object *)StringLiteral_team,pOVar3,
                         (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar29 >> 8),1),
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                         ->klass->rgctx_data[0x22].method);
            }
            bVar19 = iRam_? != 0;
            (pTVar28->fields).currentOutline = (pTVar28->fields).outlineTeamNone;
            if (bVar19) {
              uVar15 = (uint)((ulonglong)&(pTVar28->fields).currentOutline >> 0xc);
              lVar13 = (ulonglong)((uVar15 & 0x1fffff) >> 6) * 8;
              do {
                uVar8 = *(ulonglong *)(lVar13 + 0xADDR);
                puVar18 = (ulonglong *)(lVar13 + 0xADDR);
                LOCK();
                bVar19 = uVar8 == *puVar18;
                if (bVar19) {
                  *puVar18 = uVar8 | 1L << (uVar15 & 0x3f);
                }
                UNLOCK();
              } while (!bVar19);
            }
            pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                      ::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                ((Dictionary_2_System_Object_System_Object_ *)pDVar11,
                                 (Object *)StringLiteral_team,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                );
            if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
              FUN_?();
            }
            mscorlib.dll::System::Convert::Convert_ToInt32(pOVar3,(MethodInfo *)0x0);
            pOVar3 = (Object *)FUN_?(lRam_?,&stack0x00000010);
            TeamRequirementSettings::TeamRequirementSettings_OnSettingChanged
                      (pTVar28,StringLiteral_team,pOVar3,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__MVGameControllerBase);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pMVar25 = TypeInfo__MVGameControllerBase->static_fields->instance;
            if (((pMVar25 != (MVGameControllerBase *)0x0) &&
                (pMVar26 = (pMVar25->fields).game, pMVar26 != (MVNetworkGame *)0x0)) &&
               (pMVar30 = (pMVar26->fields).teamManager, pMVar30 != (MVTeamManager *)0x0)) {
              this_02 = (pMVar30->fields).teamNames;
              pTVar7 = (pTVar28->fields).buttonTeamBlueName;
              if ((this_02 != (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)0x0) &&
                 (pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Int32Enum,System::Object]::
                            Dictionary_2_System_Int32Enum_System_Object__get_Item
                                      ((Dictionary_2_System_Int32Enum_System_Object_ *)this_02,0,
                                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                                      ), pTVar7 != (Text *)0x0)) {
                (*(pTVar7->klass->vtable).set_text.methodPtr)
                          (pTVar7,pOVar3,(pTVar7->klass->vtable).set_text.method);
                pTVar7 = (pTVar28->fields).buttonTeamRedName;
                pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32Enum,System::Object]::
                          Dictionary_2_System_Int32Enum_System_Object__get_Item
                                    ((Dictionary_2_System_Int32Enum_System_Object_ *)this_02,1,
                                     MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                                    );
                if (pTVar7 != (Text *)0x0) {
                  (*(pTVar7->klass->vtable).set_text.methodPtr)
                            (pTVar7,pOVar3,(pTVar7->klass->vtable).set_text.method);
                  pTVar7 = (pTVar28->fields).buttonTeamGreenName;
                  pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Int32Enum,System::Object]::
                            Dictionary_2_System_Int32Enum_System_Object__get_Item
                                      ((Dictionary_2_System_Int32Enum_System_Object_ *)this_02,2,
                                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                                      );
                  if (pTVar7 != (Text *)0x0) {
                    (*(pTVar7->klass->vtable).set_text.methodPtr)
                              (pTVar7,pOVar3,(pTVar7->klass->vtable).set_text.method);
                    pTVar7 = (pTVar28->fields).buttonTeamYellowName;
                    pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                              Int32Enum,System::Object]::
                              Dictionary_2_System_Int32Enum_System_Object__get_Item
                                        ((Dictionary_2_System_Int32Enum_System_Object_ *)this_02,3,
                                         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                                        );
                    if (pTVar7 != (Text *)0x0) {
                      (*(pTVar7->klass->vtable).set_text.methodPtr)
                                (pTVar7,pOVar3,(pTVar7->klass->vtable).set_text.method);
                      pSVar31 = (pTVar28->fields).buttonTeamNone;
                      pOVar3 = (Object *)FUN_?(TypeInfo__MV__WorldObject__MVTeam);
                      iVar12 = mscorlib.dll::System::Convert::Convert_ToInt32
                                         (pOVar3,(MethodInfo *)0x0);
                      if (pSVar31 != (SettingsButton *)0x0) {
                        SettingsButton::SettingsButton_Initialize
                                  (pSVar31,StringLiteral_team,iVar12,MVTeam__Enum_None,1,
                                   (MethodInfo *)0x0);
                        pSVar31 = (pTVar28->fields).buttonTeamBlue;
                        pOVar3 = (Object *)((ulonglong)unaff_RBX & 0xffffffff00000000);
                        iVar32._0_2_ = (TypeInfo__MV__WorldObject__MVTeam->_0).byval_arg.attrs;
                        iVar32._2_1_ = (TypeInfo__MV__WorldObject__MVTeam->_0).byval_arg.type;
                        iVar32._3_1_ = (TypeInfo__MV__WorldObject__MVTeam->_0).byval_arg.field_0xb;
                        if ((iVar32 < 0) &&
                           (((TypeInfo__MV__WorldObject__MVTeam->_0).generic_class ==
                             (Il2CppGenericClass *)0x0 ||
                            (pOVar3 = (Object *)0x0,
                            ((TypeInfo__MV__WorldObject__MVTeam->_1).field_0x6d & 8) == 0)))) {
                          pOVar3 = (Object *)FUN_?(TypeInfo__MV__WorldObject__MVTeam);
                          FUN_?(pOVar3 + 1);
                          if (iRam_? != 0) {
                            uVar15 = (uint)((ulonglong)(pOVar3 + 1) >> 0xc);
                            lVar13 = (ulonglong)((uVar15 & 0x1fffff) >> 6) * 8;
                            do {
                              uVar8 = *(ulonglong *)(lVar13 + 0xADDR);
                              puVar18 = (ulonglong *)(lVar13 + 0xADDR);
                              LOCK();
                              bVar19 = uVar8 == *puVar18;
                              if (bVar19) {
                                *puVar18 = uVar8 | 1L << (uVar15 & 0x3f);
                              }
                              UNLOCK();
                            } while (!bVar19);
                          }
                        }
                        iVar12 = mscorlib.dll::System::Convert::Convert_ToInt32
                                           (pOVar3,(MethodInfo *)0x0);
                        if (cRam_? == '\0') {
                          FUN_?(&TypeInfo__MVGameControllerBase);
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        pMVar25 = TypeInfo__MVGameControllerBase->static_fields->instance;
                        if ((((pMVar25 != (MVGameControllerBase *)0x0) &&
                             (pMVar26 = (pMVar25->fields).game, pMVar26 != (MVNetworkGame *)0x0)) &&
                            (pMVar30 = (pMVar26->fields).teamManager, pMVar30 != (MVTeamManager *)0x0))
                           && (bVar33 = MVTeamManager::MVTeamManager_HasTeam
                                                  (pMVar30,MVTeam__Enum_Blue,(MethodInfo *)0x0),
                              pSVar31 != (SettingsButton *)0x0)) {
                          SettingsButton::SettingsButton_Initialize
                                    (pSVar31,StringLiteral_team,iVar12,MVTeam__Enum_Blue,bVar33,
                                     (MethodInfo *)0x0);
                          pSVar31 = (pTVar28->fields).buttonTeamRed;
                          pOVar3 = (Object *)FUN_?(TypeInfo__MV__WorldObject__MVTeam);
                          iVar12 = mscorlib.dll::System::Convert::Convert_ToInt32
                                             (pOVar3,(MethodInfo *)0x0);
                          if (cRam_? == '\0') {
                            FUN_?(&TypeInfo__MVGameControllerBase);
                            LOCK();
                            UNLOCK();
                            cRam_? = '\x01';
                          }
                          pMVar25 = TypeInfo__MVGameControllerBase->static_fields->instance;
                          if (((pMVar25 != (MVGameControllerBase *)0x0) &&
                              (pMVar26 = (pMVar25->fields).game, pMVar26 != (MVNetworkGame *)0x0)) &&
                             ((pMVar30 = (pMVar26->fields).teamManager, pMVar30 != (MVTeamManager *)0x0
                              && (bVar33 = MVTeamManager::MVTeamManager_HasTeam
                                                     (pMVar30,MVTeam__Enum_Red,(MethodInfo *)0x0),
                                 pSVar31 != (SettingsButton *)0x0)))) {
                            SettingsButton::SettingsButton_Initialize
                                      (pSVar31,StringLiteral_team,iVar12,MVTeam__Enum_Red,bVar33,
                                       (MethodInfo *)0x0);
                            pSVar31 = (pTVar28->fields).buttonTeamGreen;
                            pOVar3 = (Object *)FUN_?(TypeInfo__MV__WorldObject__MVTeam);
                            iVar12 = mscorlib.dll::System::Convert::Convert_ToInt32
                                               (pOVar3,(MethodInfo *)0x0);
                            if (cRam_? == '\0') {
                              FUN_?(&TypeInfo__MVGameControllerBase);
                              LOCK();
                              UNLOCK();
                              cRam_? = '\x01';
                            }
                            pMVar25 = TypeInfo__MVGameControllerBase->static_fields->instance;
                            if (((pMVar25 != (MVGameControllerBase *)0x0) &&
                                (pMVar26 = (pMVar25->fields).game, pMVar26 != (MVNetworkGame *)0x0)) &&
                               ((pMVar30 = (pMVar26->fields).teamManager,
                                pMVar30 != (MVTeamManager *)0x0 &&
                                (bVar33 = MVTeamManager::MVTeamManager_HasTeam
                                                    (pMVar30,MVTeam__Enum_Green,(MethodInfo *)0x0),
                                pSVar31 != (SettingsButton *)0x0)))) {
                              SettingsButton::SettingsButton_Initialize
                                        (pSVar31,StringLiteral_team,iVar12,MVTeam__Enum_Green,bVar33,
                                         (MethodInfo *)0x0);
                              pSVar31 = (pTVar28->fields).buttonTeamYellow;
                              pOVar3 = (Object *)FUN_?(TypeInfo__MV__WorldObject__MVTeam);
                              iVar12 = mscorlib.dll::System::Convert::Convert_ToInt32
                                                 (pOVar3,(MethodInfo *)0x0);
                              if (cRam_? == '\0') {
                                FUN_?(&TypeInfo__MVGameControllerBase);
                                LOCK();
                                UNLOCK();
                                cRam_? = '\x01';
                              }
                              pMVar25 = TypeInfo__MVGameControllerBase->static_fields->instance;
                              if ((((pMVar25 != (MVGameControllerBase *)0x0) &&
                                   (pMVar26 = (pMVar25->fields).game, pMVar26 != (MVNetworkGame *)0x0))
                                  && (pMVar30 = (pMVar26->fields).teamManager,
                                     pMVar30 != (MVTeamManager *)0x0)) &&
                                 (bVar33 = MVTeamManager::MVTeamManager_HasTeam
                                                     (pMVar30,MVTeam__Enum_Yellow,(MethodInfo *)0x0),
                                 pSVar31 != (SettingsButton *)0x0)) {
                                SettingsButton::SettingsButton_Initialize
                                          (pSVar31,StringLiteral_team,iVar12,MVTeam__Enum_Yellow,
                                           bVar33,(MethodInfo *)0x0);
                                return;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      FUN_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    goto code_?;
  case UseRequirementType__Enum_GameRank:
    original_00 = (this->fields).gameRankRequirementSettingsPrefab;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    pOVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)original_00,
                         GameRankRequirementSettings_MethodInfo__UnityEngine__Object__Instantiate<GameRankRequirementSettings>_GameRankRequirementSettings_
                        );
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    if (pOVar3 == (Object *)0x0) goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    ,woID,pGVar2,0);
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
    pOVar4 = pOVar3[2].klass;
    pSVar5 = TM::TM__(StringLiteral_Game_Tier_Requirement,(MethodInfo *)0x0);
    if (pOVar4 == (Object__Class *)0x0) {
code_?:
      FUN_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pTVar7 = (Text *)(pOVar4->_0).byval_arg.data.array;
    (pOVar4->_0).byval_arg.attrs = (short)woID;
    (pOVar4->_0).byval_arg.type = (char)((uint)woID >> 0x10);
    (pOVar4->_0).byval_arg.field_0xb = (char)((uint)woID >> 0x18);
    if (pTVar7 == (Text *)0x0) goto code_?;
    (*(pTVar7->klass->vtable).set_text.methodPtr)
              (pTVar7,pSVar5,(pTVar7->klass->vtable).set_text.method);
    uVar8 = 0;
    SettingsBase::SettingsBase_InitializeHierarchy
              ((SettingsBase *)pOVar4,woID,pGVar2,(MethodInfo *)0x0);
    if (woID == -1) {
      pDVar24 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                 *)FUN_?(
                                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
      Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                (pDVar24,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      lVar13 = lRam_?;
      unaff_RBX = (Object *)((ulonglong)unaff_RBX & 0xffffffff00000000);
      pOVar14 = unaff_RBX;
      if (*(int *)(lRam_? + 0x28) < 0) {
        if ((*(longlong *)(lRam_? + 0x60) == 0) ||
           ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
          pOVar14 = (Object *)FUN_?(lRam_?);
          FUN_?(pOVar14 + 1,&stack0x00000008,(longlong)*(int *)(lVar13 + 0xf8) + -0x10);
          if (iRam_? != 0) {
            uVar15 = (uint)((ulonglong)(pOVar14 + 1) >> 0xc);
            uVar16 = (ulonglong)((uVar15 & 0x1fffff) >> 6);
            do {
              uVar17 = *(ulonglong *)(uVar16 * 8 + 0xADDR);
              puVar18 = (ulonglong *)(uVar16 * 8 + 0xADDR);
              LOCK();
              bVar19 = uVar17 == *puVar18;
              if (bVar19) {
                *puVar18 = uVar17 | 1L << (uVar15 & 0x3f);
              }
              UNLOCK();
            } while (!bVar19);
          }
        }
        else {
          pOVar14 = (Object *)0x0;
        }
      }
      if (pDVar24 ==
          (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
           *)0x0) goto code_?;
      uVar8 = CONCAT71((int7)(uVar8 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)pDVar24,
                 (Object *)StringLiteral_RequiredRank,pOVar14,(InsertionBehavior__Enum)uVar8,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
    }
    else {
      pMVar9 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (((pMVar9 == (MVWorldObjectClientManager *)0x0) ||
          (pMVar10 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                               (pMVar9,woID,(MethodInfo *)0x0),
          pMVar10 == (MVWorldObjectClient *)0x0)) ||
         (pDVar24 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                     *)(pMVar10->fields)._.data,
         pDVar24 ==
         (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
          *)0x0)) goto code_?;
    }
    iVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
             UIElements::StyleComplexSelector+PseudoStateData]::
             Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                       ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                         *)pDVar24,(Object *)StringLiteral_RequiredRank,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                        ->klass->rgctx_data[0x21].method);
    lVar13 = lRam_?;
    if (iVar12 < 0) {
      pOVar14 = (Object *)((ulonglong)unaff_RBX & 0xffffffff00000000);
      if (*(int *)(lRam_? + 0x28) < 0) {
        if ((*(longlong *)(lRam_? + 0x60) == 0) ||
           ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
          pOVar14 = (Object *)FUN_?(lRam_?);
          FUN_?(pOVar14 + 1,&stack0x00000008,(longlong)*(int *)(lVar13 + 0xf8) + -0x10);
          if (iRam_? != 0) {
            uVar15 = (uint)((ulonglong)(pOVar14 + 1) >> 0xc);
            uVar16 = (ulonglong)((uVar15 & 0x1fffff) >> 6);
            uVar8 = (ulonglong)(uVar15 & 0x3f);
            do {
              uVar17 = *(ulonglong *)(uVar16 * 8 + 0xADDR);
              puVar18 = (ulonglong *)(uVar16 * 8 + 0xADDR);
              LOCK();
              bVar19 = uVar17 == *puVar18;
              if (bVar19) {
                *puVar18 = uVar17 | 1L << uVar8;
              }
              UNLOCK();
            } while (!bVar19);
          }
        }
        else {
          pOVar14 = (Object *)0x0;
        }
      }
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)pDVar24,
                 (Object *)StringLiteral_RequiredRank,pOVar14,
                 (InsertionBehavior__Enum)CONCAT71((int7)(uVar8 >> 8),2),
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
    }
    pOVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__get_Item
                        ((Dictionary_2_System_Object_System_Object_ *)pDVar24,
                         (Object *)StringLiteral_RequiredRank,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
    if (pOVar14 == (Object *)0x0) goto code_?;
    if ((pOVar14->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
      FUN_?(pOVar14,lRam_?);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if ((SettingsSlider *)pOVar3[2].monitor == (SettingsSlider *)0x0) goto code_?;
    iVar12 = *(int32_t *)&pOVar14[1].klass;
    SettingsSlider::SettingsSlider_Initialize_1
              ((SettingsSlider *)pOVar3[2].monitor,StringLiteral_RequiredRank,iVar12,0,3,
               (MethodInfo *)0x0);
    pOVar4 = pOVar3[3].klass;
    if (pOVar4 == (Object__Class *)0x0) goto code_?;
    fVar20 = (float)iVar12;
    pIVar21 = (Il2CppClass *)StringLiteral_RequiredRank;
    break;
  case UseRequirementType__Enum_RewardedAd:
    original_01 = (this->fields).rewardedAdRequirementSettingsPrefab;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    pOVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)original_01,
                         UGUI__Desktop__Scripts__EditMode__SettingsBoxes__RewardedAdRequirementSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::RewardedAdRequirementSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__RewardedAdRequirementSettings_
                        );
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    if (pOVar3 != (Object *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      ,woID,pGVar2,0);
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
        FUN_?(&StringLiteral_Rewarded_ad_requirement);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_rewardedAd);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pOVar4 = pOVar3[2].klass;
      pSVar5 = TM::TM__(StringLiteral_Rewarded_ad_requirement,(MethodInfo *)0x0);
      if (pOVar4 != (Object__Class *)0x0) {
        pTVar7 = (Text *)(pOVar4->_0).byval_arg.data.array;
        (pOVar4->_0).byval_arg.attrs = (short)woID;
        (pOVar4->_0).byval_arg.type = (char)((uint)woID >> 0x10);
        (pOVar4->_0).byval_arg.field_0xb = (char)((uint)woID >> 0x18);
        if (pTVar7 != (Text *)0x0) {
          (*(pTVar7->klass->vtable).set_text.methodPtr)
                    (pTVar7,pSVar5,(pTVar7->klass->vtable).set_text.method);
          uVar8 = 0;
          SettingsBase::SettingsBase_InitializeHierarchy
                    ((SettingsBase *)pOVar4,woID,pGVar2,(MethodInfo *)0x0);
          pMVar9 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          if (((pMVar9 != (MVWorldObjectClientManager *)0x0) &&
              (pMVar10 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                                   (pMVar9,woID,(MethodInfo *)0x0),
              pMVar10 != (MVWorldObjectClient *)0x0)) &&
             (pDVar11 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                         *)(pMVar10->fields)._.data,
             pDVar11 !=
             (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
              *)0x0)) {
            iVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     Object,UnityEngine::UIElements::StyleComplexSelector+PseudoStateData]::
                     Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                               (pDVar11,(Object *)StringLiteral_rewardedAd,
                                MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                                ->klass->rgctx_data[0x21].method);
            lVar13 = lRam_?;
            if (iVar12 < 0) {
              pOVar14 = (Object *)(unaff_RSI & 0xffffffffffffff00);
              if (*(int *)(lRam_? + 0x28) < 0) {
                if ((*(longlong *)(lRam_? + 0x60) == 0) ||
                   ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
                  pOVar14 = (Object *)FUN_?(lRam_?);
                  FUN_?(pOVar14 + 1,&stack0x00000010,
                                (longlong)*(int *)(lVar13 + 0xf8) + -0x10);
                  if (iRam_? != 0) {
                    uVar15 = (uint)((ulonglong)(pOVar14 + 1) >> 0xc);
                    uVar8 = (ulonglong)(uVar15 & 0x3f);
                    puVar18 = (ulonglong *)((ulonglong)((uVar15 & 0x1fffff) >> 6) * 8 + 0xADDR);
                    do {
                      uVar17 = *puVar18;
                      LOCK();
                      uVar16 = *puVar18;
                      if (uVar17 == uVar16) {
                        *puVar18 = uVar17 | 1L << uVar8;
                      }
                      UNLOCK();
                    } while (uVar17 != uVar16);
                  }
                }
                else {
                  pOVar14 = (Object *)0x0;
                }
              }
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__TryInsert
                        ((Dictionary_2_System_Object_System_Object_ *)pDVar11,
                         (Object *)StringLiteral_rewardedAd,pOVar14,
                         (InsertionBehavior__Enum)CONCAT71((int7)(uVar8 >> 8),1),
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                         ->klass->rgctx_data[0x22].method);
            }
            pMVar34 = pOVar3[2].monitor;
            pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                      ::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                ((Dictionary_2_System_Object_System_Object_ *)pDVar11,
                                 (Object *)StringLiteral_rewardedAd,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                );
            pSVar5 = StringLiteral_rewardedAd;
            if ((pMVar34 != (MonitorData *)0x0) && (pOVar3 != (Object *)0x0)) {
              if ((pOVar3->klass->_0).element_class !=
                  *(Il2CppClass **)(lRam_? + 0x40)) {
                FUN_?(pOVar3,lRam_?);
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              bVar33 = *(bool *)&pOVar3[1].klass;
              if (cRam_? == '\0') {
                FUN_?(&MethodInfo__SettingsToggle__ValueChanged_bool_,
                              StringLiteral_rewardedAd,bVar33,0,unaff_RDI);
                LOCK();
                UNLOCK();
                FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<bool>);
                LOCK();
                UNLOCK();
                FUN_?(&
                              MethodInfo__UnityEngine__Events__UnityEvent<bool>__AddListener_UnityEngine__Events__UnityAction<bool>_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              bVar19 = iRam_? != 0;
              *(String **)(pMVar34 + 0x28) = pSVar5;
              if (bVar19) {
                uVar15 = (uint)((ulonglong)(pMVar34 + 0x28) >> 0xc);
                puVar18 = (ulonglong *)((ulonglong)((uVar15 & 0x1fffff) >> 6) * 8 + 0xADDR);
                do {
                  uVar16 = *puVar18;
                  LOCK();
                  uVar8 = *puVar18;
                  if (uVar16 == uVar8) {
                    *puVar18 = uVar16 | 1L << (uVar15 & 0x3f);
                  }
                  UNLOCK();
                } while (uVar16 != uVar8);
              }
              if (*(Toggle **)(pMVar34 + 0x20) != (Toggle *)0x0) {
                UnityEngine.UI.dll::UnityEngine::UI::Toggle::Toggle_Set
                          (*(Toggle **)(pMVar34 + 0x20),bVar33,1,(MethodInfo *)0x0);
                if (*(longlong *)(pMVar34 + 0x20) != 0) {
                  lVar13 = *(longlong *)(*(longlong *)(pMVar34 + 0x20) + 0x118);
                  uVar29 = FUN_?(TypeInfo__UnityEngine__Events__UnityAction<bool>);
                  FUN_?(uVar29,pMVar34,MethodInfo__SettingsToggle__ValueChanged_bool_);
                  if (lVar13 != 0) {
                    pMVar35 = MethodInfo__UnityEngine__Events__UnityEvent<bool>__AddListener_UnityEngine__Events__UnityAction<bool>_
                             ->klass->rgctx_data[2].method;
                    pIVar21 = pMVar35->klass;
                    if ((pIVar21->field_0x135 & 1) == 0) {
                      pIVar21 = (Il2CppClass *)FUN_?(pIVar21);
                    }
                    pvVar36 = pIVar21->rgctx_data[5].rgctxDataDummy;
                    if ((*(byte *)((longlong)pvVar36 + 0x135) & 1) == 0) {
                      pvVar36 = (void *)FUN_?(pvVar36);
                    }
                    uVar37 = FUN_?(pvVar36);
                    pIVar21 = pMVar35->klass;
                    if ((pIVar21->field_0x135 & 1) == 0) {
                      pIVar21 = (Il2CppClass *)FUN_?(pIVar21);
                    }
                    FUN_?(uVar37,uVar29,
                                  (pIVar21->rgctx_data[7].method)->klass->rgctx_data[4].
                                  rgctxDataDummy);
                    if ((lVar13 != 0) && (lVar13 = *(longlong *)(lVar13 + 0x10), lVar13 != 0)) {
                      if (cRam_? == '\0') {
                        FUN_?(&
                                      MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__Add_UnityEngine__Events__BaseInvokableCall_
                                     );
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      if (*(longlong *)(lVar13 + 0x18) != 0) {
                        FUN_?(*(longlong *)(lVar13 + 0x18),uVar37);
                        *(undefined1 *)(lVar13 + 0x28) = 1;
                        return;
                      }
                    }
                    FUN_?();
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                }
              }
              FUN_?();
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
        }
      }
      FUN_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
code_?:
    FUN_?();
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  default:
    return;
  }
  bVar19 = iRam_? != 0;
  (pOVar4->_0).element_class = pIVar21;
  if (bVar19) {
    uVar15 = (uint)((ulonglong)&(pOVar4->_0).element_class >> 0xc);
    uVar8 = (ulonglong)((uVar15 & 0x1fffff) >> 6);
    do {
      uVar16 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
      puVar18 = (ulonglong *)(uVar8 * 8 + 0xADDR);
      LOCK();
      bVar19 = uVar16 == *puVar18;
      if (bVar19) {
        *puVar18 = uVar16 | 1L << (uVar15 & 0x3f);
      }
      UNLOCK();
    } while (!bVar19);
  }
  fVar20 = SettingsInputFieldSlider::SettingsInputFieldSlider_GetInputFieldValue
                     ((SettingsInputFieldSlider *)pOVar4,fVar20,(MethodInfo *)0x0);
  pSVar5 = SettingsInputFieldSlider::SettingsInputFieldSlider_ConvertFloatToString
                      (fVar20,(MethodInfo *)0x0);
  this_03 = (InputField *)(pOVar4->_0).byval_arg.data.array;
  if (this_03 == (InputField *)0x0) {
    FUN_?();
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
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
  pSVar38 = (this_03->fields).m_Text;
  if (pSVar38 == pSVar5) {
    return;
  }
  if (pSVar38 == (String *)0x0) {
code_?:
    if (pSVar5 == (String *)0x0) {
code_?:
      pSVar5 = ::StringLiteral__;
      if (::StringLiteral__ == (String *)0x0) goto DAT_?;
    }
  }
  else {
    if (pSVar5 == (String *)0x0) goto code_?;
    if ((pSVar38->fields)._stringLength == (pSVar5->fields)._stringLength) {
      bVar33 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                         ((uint8_t *)&(pSVar38->fields)._firstChar,
                          (uint8_t *)&(pSVar5->fields)._firstChar,
                          (longlong)(pSVar38->fields)._stringLength * 2,(MethodInfo *)0x0);
      if (bVar33 != 0) {
        return;
      }
      goto code_?;
    }
  }
  pSVar5 = mscorlib.dll::System::String::String_Replace_1
                      (pSVar5,::StringLiteral__,
                       (String *)**(undefined8 **)(lRam_? + 0xb8),(MethodInfo *)0x0);
  if ((this_03->fields).m_LineType == 0) {
    if ((pSVar5 == (String *)0x0) ||
       (pSVar5 = mscorlib.dll::System::String::String_Replace_1
                            (pSVar5,StringLiteral_u000A,::StringLiteral__,(MethodInfo *)0x0),
       pSVar5 == (String *)0x0)) goto DAT_?;
    pSVar5 = mscorlib.dll::System::String::String_Replace_1
                        (pSVar5,StringLiteral_u0009,::StringLiteral__,(MethodInfo *)0x0);
  }
  if (((this_03->fields).m_OnValidateInput == (InputField_OnValidateInput *)0x0) &&
     ((this_03->fields).m_CharacterValidation == 0)) {
    if (0 < (this_03->fields).m_CharacterLimit) {
      if (pSVar5 == (String *)0x0) goto DAT_?;
      iVar32 = (this_03->fields).m_CharacterLimit;
      if (iVar32 < (pSVar5->fields)._stringLength) {
        pSVar5 = mscorlib.dll::System::String::String_Substring_1
                            (pSVar5,0,iVar32,(MethodInfo *)0x0);
      }
    }
    (this_03->fields).m_Text = pSVar5;
    func_?(&(this_03->fields).m_Text);
  }
  else {
    bVar19 = iRam_? != 0;
    (this_03->fields).m_Text = ::StringLiteral__;
    if (bVar19) {
      uVar15 = (uint)((ulonglong)&(this_03->fields).m_Text >> 0xc);
      lVar13 = (ulonglong)((uVar15 & 0x1fffff) >> 6) * 8;
      do {
        uVar8 = *(ulonglong *)(lVar13 + 0xADDR);
        puVar18 = (ulonglong *)(lVar13 + 0xADDR);
        LOCK();
        bVar19 = uVar8 == *puVar18;
        if (bVar19) {
          *puVar18 = uVar8 | 1L << (uVar15 & 0x3f);
        }
        UNLOCK();
      } while (!bVar19);
    }
    pIVar39 = (this_03->fields).m_OnValidateInput;
    if (pIVar39 == (InputField_OnValidateInput *)0x0) {
      pIVar39 = (InputField_OnValidateInput *)
                FUN_?(TypeInfo__UnityEngine__UI__InputField__OnValidateInput);
      pMVar35 = MethodInfo__UnityEngine__UI__InputField__Validate_System__String__int__wchar_t_;
      bVar19 = iRam_? != 0;
      (pIVar39->fields)._._.method_ptr =
           MethodInfo__UnityEngine__UI__InputField__Validate_System__String__int__wchar_t_->
           virtualMethodPointer;
      (pIVar39->fields)._._.method = pMVar35;
      (pIVar39->fields)._._.m_target = (Object *)this_03;
      if (bVar19) {
        uVar15 = (uint)((ulonglong)&(pIVar39->fields)._._.m_target >> 0xc);
        lVar13 = (ulonglong)((uVar15 & 0x1fffff) >> 6) * 8;
        do {
          uVar8 = *(ulonglong *)(lVar13 + 0xADDR);
          puVar18 = (ulonglong *)(lVar13 + 0xADDR);
          LOCK();
          bVar19 = uVar8 == *puVar18;
          if (bVar19) {
            *puVar18 = uVar8 | 1L << (uVar15 & 0x3f);
          }
          UNLOCK();
        } while (!bVar19);
      }
      uVar40 = pMVar35->parameters_count;
      (pIVar39->fields)._._.method_code = pIVar39;
      if ((pMVar35->flags & 0x10) == 0) {
        if (uVar40 != 2) goto code_?;
        pcVar6 = FUN_?;
      }
      else if (uVar40 == 3) {
        pcVar6 = FUN_?;
      }
      else {
code_?:
        (pIVar39->fields)._._.method_code = (pIVar39->fields)._._.m_target;
        pcVar6 = (pIVar39->fields)._._.method_ptr;
      }
      (pIVar39->fields)._._.invoke_impl = pcVar6;
      (pIVar39->fields)._._.extra_arg = FUN_?;
    }
    if (pSVar5 == (String *)0x0) goto DAT_?;
    iVar12 = (pSVar5->fields)._stringLength;
    (this_03->fields).m_CaretSelectPosition = iVar12;
    (this_03->fields).m_CaretPosition = iVar12;
    if ((this_03->fields).m_CharacterLimit < 1) {
      iVar32 = (pSVar5->fields)._stringLength;
    }
    else {
      iVar32 = (this_03->fields).m_CharacterLimit;
      iVar41 = (pSVar5->fields)._stringLength;
      if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (iVar41 < iVar32) {
        iVar32 = iVar41;
      }
    }
    uVar15 = 0;
    if (0 < iVar32) {
      puVar42 = &(pSVar5->fields)._firstChar;
      lVar13 = 0;
      do {
        pSVar38 = (this_03->fields).m_Text;
        if (pSVar38 == (String *)0x0) goto DAT_?;
        if ((longlong)(pSVar5->fields)._stringLength <= (longlong)(ulonglong)uVar15) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowIndexOutOfRangeException
                    ((MethodInfo *)0x0);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (pIVar39 == (InputField_OnValidateInput *)0x0) goto DAT_?;
        c = (*(pIVar39->fields)._._.invoke_impl)
                      ((pIVar39->fields)._._.method_code,(this_03->fields).m_Text,
                       (pSVar38->fields)._stringLength,*puVar42,(pIVar39->fields)._._.method);
        if (c != 0) {
          pSVar38 = (this_03->fields).m_Text;
          if ((*(int *)(lRam_? + 0xe4) == 0) &&
             (FUN_?(), *(int *)(lRam_? + 0xe4) == 0)) {
            FUN_?();
          }
          str1 = mscorlib.dll::System::Char::Char_ToString_2(c,(MethodInfo *)0x0);
          pSVar38 = mscorlib.dll::System::String::String_Concat_4(pSVar38,str1,(MethodInfo *)0x0);
          (this_03->fields).m_Text = pSVar38;
          func_?(&(this_03->fields).m_Text);
        }
        uVar15 = uVar15 + 1;
        lVar13 = lVar13 + 1;
        puVar42 = puVar42 + 1;
      } while (lVar13 < iVar32);
    }
  }
  if ((this_03->fields).m_Keyboard != (TouchScreenKeyboard *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::TouchScreenKeyboard::TouchScreenKeyboard_set_text
              ((this_03->fields).m_Keyboard,(this_03->fields).m_Text,(MethodInfo *)0x0);
  }
  pSVar5 = (this_03->fields).m_Text;
  if (pSVar5 == (String *)0x0) {
DAT_?:
    FUN_?();
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar32 = (pSVar5->fields)._stringLength;
  if (iVar32 < (this_03->fields).m_CaretPosition) {
    (this_03->fields).m_CaretPosition = iVar32;
  }
  else if ((this_03->fields).m_CaretSelectPosition <= iVar32) goto code_?;
  (this_03->fields).m_CaretSelectPosition = iVar32;
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


/* Void CreateSettingsDialog(Int32, WorldObjectType) */

void Assembly-CSharp.dll::SettingsFactory::SettingsFactory_CreateSettingsDialog_2
               (SettingsFactory *this,int32_t woID,WorldObjectType__Enum worldObjectType,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__WorldObjectTypes__MVDoor__MVDoorBlueprint);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVVehicleBase);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVWorldObjectSpawnerVehicle);
    LOCK();
    UNLOCK();
    FUN_?(&
                  UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Camera__CameraBoxSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Camera::CameraBoxSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Camera__CameraBoxSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  CollectTheItemDropoffSettings_MethodInfo__UnityEngine__Object__Instantiate<CollectTheItemDropoffSettings>_CollectTheItemDropoffSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  CollectTheItemSettings_MethodInfo__UnityEngine__Object__Instantiate<CollectTheItemSettings>_CollectTheItemSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  CountingCubeSettings_MethodInfo__UnityEngine__Object__Instantiate<CountingCubeSettings>_CountingCubeSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  CubeGunSettings_MethodInfo__UnityEngine__Object__Instantiate<CubeGunSettings>_CubeGunSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Doors__DoorSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Doors::DoorSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Doors__DoorSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  FireSettings_MethodInfo__UnityEngine__Object__Instantiate<FireSettings>_FireSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  GameCoinChestSettings_MethodInfo__UnityEngine__Object__Instantiate<GameCoinChestSettings>_GameCoinChestSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  GamePointChestSettings_MethodInfo__UnityEngine__Object__Instantiate<GamePointChestSettings>_GamePointChestSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  GlobalSoundEmitterSettings_MethodInfo__UnityEngine__Object__Instantiate<GlobalSoundEmitterSettings>_GlobalSoundEmitterSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HamsterWheelSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::HamsterWheelSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HamsterWheelSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HoverCraftSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::HoverCraftSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HoverCraftSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__JetpackSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::JetpackSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__JetpackSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  KillLimitSettings_MethodInfo__UnityEngine__Object__Instantiate<KillLimitSettings>_KillLimitSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  LeverSettings_MethodInfo__UnityEngine__Object__Instantiate<LeverSettings>_LeverSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MessageBoxSettings_MethodInfo__UnityEngine__Object__Instantiate<MessageBoxSettings>_MessageBoxSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  ObjectEnablerSettings_MethodInfo__UnityEngine__Object__Instantiate<ObjectEnablerSettings>_ObjectEnablerSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UGUI__Desktop__Scripts__EditMode__SettingsBoxes__ObjectTransparencySettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::ObjectTransparencySettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__ObjectTransparencySettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  OculusSettings_MethodInfo__UnityEngine__Object__Instantiate<OculusSettings>_OculusSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  PointLightSettings_MethodInfo__UnityEngine__Object__Instantiate<PointLightSettings>_PointLightSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  PressurePlateSettings_MethodInfo__UnityEngine__Object__Instantiate<PressurePlateSettings>_PressurePlateSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  PulseBoxSettings_MethodInfo__UnityEngine__Object__Instantiate<PulseBoxSettings>_PulseBoxSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UGUI__Desktop__Scripts__EditMode__SettingsBoxes__RoundCubeSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::RoundCubeSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__RoundCubeSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  ShootablePlateSettings_MethodInfo__UnityEngine__Object__Instantiate<ShootablePlateSettings>_ShootablePlateSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  SkyboxSettings_MethodInfo__UnityEngine__Object__Instantiate<SkyboxSettings>_SkyboxSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  SmokeSettings_MethodInfo__UnityEngine__Object__Instantiate<SmokeSettings>_SmokeSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  SoundEmitterSettings_MethodInfo__UnityEngine__Object__Instantiate<SoundEmitterSettings>_SoundEmitterSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  SpawnPointSettings_MethodInfo__UnityEngine__Object__Instantiate<SpawnPointSettings>_SpawnPointSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  SpawnRoleEditorMenu_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleEditorMenu>_SpawnRoleEditorMenu_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TeamEditorSettings_MethodInfo__UnityEngine__Object__Instantiate<TeamEditorSettings>_TeamEditorSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TimeTriggerSettings_MethodInfo__UnityEngine__Object__Instantiate<TimeTriggerSettings>_TimeTriggerSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  ToggleBoxSettings_MethodInfo__UnityEngine__Object__Instantiate<ToggleBoxSettings>_ToggleBoxSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TriggerCubeSettings_MethodInfo__UnityEngine__Object__Instantiate<TriggerCubeSettings>_TriggerCubeSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__VehicleEnergySettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::VehicleEnergySettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__VehicleEnergySettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  WaterBoxSettings_MethodInfo__UnityEngine__Object__Instantiate<WaterBoxSettings>_WaterBoxSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  WindTurbineSettings_MethodInfo__UnityEngine__Object__Instantiate<WindTurbineSettings>_WindTurbineSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__SettingsFactory____c__DisplayClass58_0___CreateSettingsDialog_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SettingsFactory____c__DisplayClass58_0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__WorldObjectType);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Oculus_Kill_Limit);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_WorldObjectType__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__has_no_settings_dialogue_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Kill_Limit);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__SettingsFactory____c__DisplayClass58_0);
  if ((int)worldObjectType < 0x42) {
    if ((int)worldObjectType < 0xe) {
      if (worldObjectType == WorldObjectType__Enum_PointLight) {
        pPVar1 = (this->fields).pointLightSettingsPrefab;
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        pPVar1 = (PointLightSettings *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)pPVar1,
                             PointLightSettings_MethodInfo__UnityEngine__Object__Instantiate<PointLightSettings>_PointLightSettings_
                            );
        pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        if (pPVar1 != (PointLightSettings *)0x0) {
          PointLightSettings::PointLightSettings_Initialize(pPVar1,woID,pGVar2,(MethodInfo *)0x0);
          return;
        }
        goto code_?;
      }
      if (worldObjectType == WorldObjectType__Enum_SoundEmitter) {
        pSVar3 = (this->fields).soundEmitterSettingsPrefab;
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        pSVar3 = (SoundEmitterSettings *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)pSVar3,
                             SoundEmitterSettings_MethodInfo__UnityEngine__Object__Instantiate<SoundEmitterSettings>_SoundEmitterSettings_
                            );
        pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        if (pSVar3 != (SoundEmitterSettings *)0x0) {
          SoundEmitterSettings::SoundEmitterSettings_Initialize
                    (pSVar3,woID,pGVar2,(MethodInfo *)0x0);
          return;
        }
        goto code_?;
      }
      goto code_?;
    }
    switch(worldObjectType) {
    case WorldObjectType__Enum_ToggleBox:
      pTVar4 = (this->fields).toggleBoxSettingsPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pTVar4 = (ToggleBoxSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pTVar4,
                           ToggleBoxSettings_MethodInfo__UnityEngine__Object__Instantiate<ToggleBoxSettings>_ToggleBoxSettings_
                          );
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (pTVar4 == (ToggleBoxSettings *)0x0) goto code_?;
      ToggleBoxSettings::ToggleBoxSettings_Initialize(pTVar4,woID,pGVar2,(MethodInfo *)0x0);
      break;
    case WorldObjectType__Enum_Negate:
    case WorldObjectType__Enum_And:
    case WorldObjectType__Enum_Explosives:
    case WorldObjectType__Enum_Teleporter:
    case WorldObjectType__Enum_Goal:
    case WorldObjectType__Enum_PickupItemHealthPack:
    case WorldObjectType__Enum_PickupItemCenterGun:
    case WorldObjectType__Enum_CubeModelTerrainFineGrained:
    case WorldObjectType__Enum_PickupItemImpulseGun:
    case WorldObjectType__Enum_PickupItemBazookaGun:
    case WorldObjectType__Enum_PickupItemRailGun:
    case WorldObjectType__Enum_PickupItemSpawner:
      goto code_?;
    case WorldObjectType__Enum_TextMsg:
      pMVar5 = (this->fields).messageBoxSettingsPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pMVar5 = (MessageBoxSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pMVar5,
                           MessageBoxSettings_MethodInfo__UnityEngine__Object__Instantiate<MessageBoxSettings>_MessageBoxSettings_
                          );
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (pMVar5 == (MessageBoxSettings *)0x0) goto code_?;
      MessageBoxSettings::MessageBoxSettings_Initialize(pMVar5,woID,pGVar2,(MethodInfo *)0x0);
      break;
    case WorldObjectType__Enum_Fire:
      pFVar6 = (this->fields).fireSettingsPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pFVar6 = (FireSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pFVar6,
                           FireSettings_MethodInfo__UnityEngine__Object__Instantiate<FireSettings>_FireSettings_
                          );
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (pFVar6 == (FireSettings *)0x0) goto code_?;
      FireSettings::FireSettings_Initialize(pFVar6,woID,pGVar2,(MethodInfo *)0x0);
      break;
    case WorldObjectType__Enum_Smoke:
      pSVar7 = (this->fields).smokeSettingsPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pSVar7 = (SmokeSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pSVar7,
                           SmokeSettings_MethodInfo__UnityEngine__Object__Instantiate<SmokeSettings>_SmokeSettings_
                          );
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (pSVar7 == (SmokeSettings *)0x0) goto code_?;
      SmokeSettings::SmokeSettings_Initialize(pSVar7,woID,pGVar2,(MethodInfo *)0x0);
      break;
    case WorldObjectType__Enum_TimeTrigger:
      pTVar8 = (this->fields).timeTriggerSettingsPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pTVar8 = (TimeTriggerSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pTVar8,
                           TimeTriggerSettings_MethodInfo__UnityEngine__Object__Instantiate<TimeTriggerSettings>_TimeTriggerSettings_
                          );
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (pTVar8 == (TimeTriggerSettings *)0x0) goto code_?;
      TimeTriggerSettings::TimeTriggerSettings_Initialize(pTVar8,woID,pGVar2,(MethodInfo *)0x0);
      break;
    case WorldObjectType__Enum_PressurePlate:
      pPVar9 = (this->fields).pressurePlateSettingsPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pPVar9 = (PressurePlateSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pPVar9,
                           PressurePlateSettings_MethodInfo__UnityEngine__Object__Instantiate<PressurePlateSettings>_PressurePlateSettings_
                          );
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (pPVar9 == (PressurePlateSettings *)0x0) goto code_?;
      PressurePlateSettings::PressurePlateSettings_Initialize
                (pPVar9,woID,pGVar2,(MethodInfo *)0x0);
      break;
    case WorldObjectType__Enum_Skybox:
      pSVar10 = (this->fields).skyboxSettingsPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pSVar10 = (SkyboxSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pSVar10,
                           SkyboxSettings_MethodInfo__UnityEngine__Object__Instantiate<SkyboxSettings>_SkyboxSettings_
                          );
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (pSVar10 == (SkyboxSettings *)0x0) goto code_?;
      SkyboxSettings::SkyboxSettings_Initialize(pSVar10,woID,pGVar2,(MethodInfo *)0x0);
      break;
    case WorldObjectType__Enum_SpawnPointRed:
    case WorldObjectType__Enum_SpawnPointGreen:
    case WorldObjectType__Enum_SpawnPointYellow:
    case WorldObjectType__Enum_SpawnPointBlue:
      pSVar11 = (this->fields).spawnPointSettingsPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pSVar11 = (SpawnPointSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pSVar11,
                           SpawnPointSettings_MethodInfo__UnityEngine__Object__Instantiate<SpawnPointSettings>_SpawnPointSettings_
                          );
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (pSVar11 == (SpawnPointSettings *)0x0) goto code_?;
      SpawnPointSettings::SpawnPointSettings_Initialize(pSVar11,woID,pGVar2,(MethodInfo *)0x0);
      break;
    case WorldObjectType__Enum_ModelToggle:
      pOVar12 = (this->fields).objectEnablerPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pOVar12 = (ObjectEnablerSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pOVar12,
                           ObjectEnablerSettings_MethodInfo__UnityEngine__Object__Instantiate<ObjectEnablerSettings>_ObjectEnablerSettings_
                          );
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (pOVar12 == (ObjectEnablerSettings *)0x0) goto code_?;
      ObjectEnablerSettings::ObjectEnablerSettings_Initialize
                (pOVar12,woID,pGVar2,(MethodInfo *)0x0);
      break;
    case WorldObjectType__Enum_WaterPlane:
      pWVar13 = (this->fields).waterBoxSettingsPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pWVar13 = (WaterBoxSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pWVar13,
                           WaterBoxSettings_MethodInfo__UnityEngine__Object__Instantiate<WaterBoxSettings>_WaterBoxSettings_
                          );
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (pWVar13 == (WaterBoxSettings *)0x0) goto code_?;
      WaterBoxSettings::WaterBoxSettings_Initialize(pWVar13,woID,pGVar2,(MethodInfo *)0x0);
      break;
    case WorldObjectType__Enum_Blueprint:
      SettingsFactory_CreateBlueprintSettings(this,woID,(MethodInfo *)0x0);
      break;
    case WorldObjectType__Enum_PulseBox:
      pPVar14 = (this->fields).pulseBoxPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pPVar14 = (PulseBoxSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pPVar14,
                           PulseBoxSettings_MethodInfo__UnityEngine__Object__Instantiate<PulseBoxSettings>_PulseBoxSettings_
                          );
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (pPVar14 == (PulseBoxSettings *)0x0) goto code_?;
      PulseBoxSettings::PulseBoxSettings_Initialize(pPVar14,woID,pGVar2,(MethodInfo *)0x0);
      break;
    default:
      switch(worldObjectType) {
      case WorldObjectType__Enum_PickupCubeGun:
        pCVar15 = (this->fields).cubeGunSettingsPrefab;
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        pCVar15 = (CubeGunSettings *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)pCVar15,
                             CubeGunSettings_MethodInfo__UnityEngine__Object__Instantiate<CubeGunSettings>_CubeGunSettings_
                            );
        if (pCVar15 == (CubeGunSettings *)0x0) goto code_?;
        CubeGunSettings::CubeGunSettings_Initialize
                  (pCVar15,woID,(this->fields).materialsController,(MethodInfo *)0x0);
        break;
      default:
        goto code_?;
      case WorldObjectType__Enum_WorldObjectSpawnerVehicle:
        pMVar16 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (pMVar16 == (MVWorldObjectClientManager *)0x0) goto code_?;
        pMVar17 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                            (pMVar16,woID,(MethodInfo *)0x0);
        if (pMVar17 == (MVWorldObjectClient *)0x0) {
          MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          goto code_?;
        }
        bVar18 = (TypeInfo__MVWorldObjectSpawnerVehicle->_1).naturalAligment;
        if (((pMVar17->klass->_1).naturalAligment < bVar18) ||
           ((MVWorldObjectSpawnerVehicle__Class *)
            (pMVar17->klass->_1).typeHierarchy[(ulonglong)bVar18 - 1] !=
            TypeInfo__MVWorldObjectSpawnerVehicle)) {
          FUN_?(pMVar17);
          pcVar19 = (code *)swi(3);
          (*pcVar19)();
          return;
        }
        pMVar16 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (pMVar16 == (MVWorldObjectClientManager *)0x0) goto code_?;
        pMVar17 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                            (pMVar16,pMVar17[1].fields._.ownerActorNr,(MethodInfo *)0x0);
        this_02 = (VehicleBaseSettings *)0x0;
        if (pMVar17 == (MVWorldObjectClient *)0x0) goto code_?;
        pMVar20 = pMVar17->klass;
        bVar18 = (TypeInfo__MVVehicleBase->_1).naturalAligment;
        if (((pMVar20->_1).naturalAligment < bVar18) ||
           ((MVVehicleBase__Class *)(pMVar20->_1).typeHierarchy[(ulonglong)bVar18 - 1] !=
            TypeInfo__MVVehicleBase)) {
          FUN_?(pMVar17,TypeInfo__MVVehicleBase);
          pcVar19 = (code *)swi(3);
          (*pcVar19)();
          return;
        }
        iVar21 = (*(pMVar20->vtable).get_DocumentationType.methodPtr)();
        if (iVar21 < 0x1b) {
          if (iVar21 == 0x19) {
            original_00 = (this->fields).hoverCraftSettingsPrefab;
            method_00 = 
            UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HoverCraftSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::HoverCraftSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HoverCraftSettings_
            ;
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
              method_00 = 
              UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HoverCraftSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::HoverCraftSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HoverCraftSettings_
              ;
            }
          }
          else {
            if (iVar21 != 0x1a) goto code_?;
            original_00 = (HoverCraftSettings *)(this->fields).hamsterWheelSettingsPrefab;
            method_00 = 
            UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HamsterWheelSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::HamsterWheelSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HamsterWheelSettings_
            ;
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
              method_00 = 
              UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HamsterWheelSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::HamsterWheelSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HamsterWheelSettings_
              ;
            }
          }
code_?:
          this_02 = (VehicleBaseSettings *)
                    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                              ((Object *)original_00,method_00);
        }
        else if ((iVar21 == 0x1f) || (iVar21 == 0x22)) {
          original_00 = (HoverCraftSettings *)(this->fields).jetpackSettingsPrefab;
          method_00 = 
          UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__JetpackSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::JetpackSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__JetpackSettings_
          ;
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
            method_00 = 
            UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__JetpackSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::JetpackSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__JetpackSettings_
            ;
          }
          goto code_?;
        }
code_?:
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (this_02 != (VehicleBaseSettings *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if ((this_02->fields)._._._._.m_CachedPtr != (void *)0x0) {
            pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)this,(MethodInfo *)0x0);
            UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::VehicleBaseSettings::
            VehicleBaseSettings_Initialize(this_02,woID,pGVar2,(MethodInfo *)0x0);
          }
        }
        break;
      case WorldObjectType__Enum_RoundCube:
        pRVar22 = (this->fields).roundCubeSettingsPrefab;
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        pRVar22 = (RoundCubeSettings *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)pRVar22,
                             UGUI__Desktop__Scripts__EditMode__SettingsBoxes__RoundCubeSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::RoundCubeSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__RoundCubeSettings_
                            );
        pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        if (pRVar22 == (RoundCubeSettings *)0x0) goto code_?;
        UGUI::Desktop::Scripts::EditMode::SettingsBoxes::RoundCubeSettings::
        RoundCubeSettings_Initialize(pRVar22,woID,pGVar2,(MethodInfo *)0x0);
        break;
      case WorldObjectType__Enum_AdvancedGhost:
        pOVar23 = (this->fields).oculusSettingsPrefab;
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        pOVar23 = (OculusSettings *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)pOVar23,
                             OculusSettings_MethodInfo__UnityEngine__Object__Instantiate<OculusSettings>_OculusSettings_
                            );
        pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        if (pOVar23 == (OculusSettings *)0x0) goto code_?;
        OculusSettings::OculusSettings_Initialize(pOVar23,woID,pGVar2,(MethodInfo *)0x0);
        break;
      case WorldObjectType__Enum_KillLimit:
        pKVar24 = (this->fields).killLimitSettingsPrefab;
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        pKVar24 = (KillLimitSettings *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)pKVar24,
                             KillLimitSettings_MethodInfo__UnityEngine__Object__Instantiate<KillLimitSettings>_KillLimitSettings_
                            );
        pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        pSVar25 = StringLiteral_Kill_Limit;
        goto code_?;
      case WorldObjectType__Enum_OculusKillLimit:
        pKVar24 = (this->fields).killLimitSettingsPrefab;
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        pKVar24 = (KillLimitSettings *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)pKVar24,
                             KillLimitSettings_MethodInfo__UnityEngine__Object__Instantiate<KillLimitSettings>_KillLimitSettings_
                            );
        pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        pSVar25 = StringLiteral_Oculus_Kill_Limit;
code_?:
        pSVar25 = TM::TM__(pSVar25,(MethodInfo *)0x0);
        if (pKVar24 == (KillLimitSettings *)0x0) {
code_?:
          FUN_?();
          pcVar19 = (code *)swi(3);
          (*pcVar19)();
          return;
        }
        KillLimitSettings::KillLimitSettings_Initialize
                  (pKVar24,woID,pGVar2,pSVar25,(MethodInfo *)0x0);
        break;
      case WorldObjectType__Enum_CountingCube:
        pCVar26 = (this->fields).countingCubeSettingsPrefab;
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        pCVar26 = (CountingCubeSettings *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)pCVar26,
                             CountingCubeSettings_MethodInfo__UnityEngine__Object__Instantiate<CountingCubeSettings>_CountingCubeSettings_
                            );
        pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        if (pCVar26 == (CountingCubeSettings *)0x0) goto code_?;
        CountingCubeSettings::CountingCubeSettings_Initialize
                  (pCVar26,woID,pGVar2,(MethodInfo *)0x0);
      }
    }
  }
  else {
    if ((int)worldObjectType < 0x87) {
      if (worldObjectType == WorldObjectType__Enum_WorldObjectSpawnerVehicleEnergy) {
        pVVar27 = (this->fields).vehicleEnergySettingsPrefab;
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        pVVar27 = (VehicleEnergySettings *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)pVVar27,
                             UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__VehicleEnergySettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::VehicleEnergySettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__VehicleEnergySettings_
                            );
        pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        if (pVVar27 != (VehicleEnergySettings *)0x0) {
          UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::VehicleEnergySettings::
          VehicleEnergySettings_Initialize(pVVar27,woID,pGVar2,(MethodInfo *)0x0);
          return;
        }
        goto code_?;
      }
      if (worldObjectType == WorldObjectType__Enum_AvatarSpawnRoleCreator) {
        original = (this->fields).spawnRoleEditorPrefab;
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        pOVar28 = (Object__Class *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)original,
                             SpawnRoleEditorMenu_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleEditorMenu>_SpawnRoleEditorMenu_
                            );
        if (object != (Object *)0x0) {
          object[1].klass = pOVar28;
          func_?(object + 1);
          if (object[1].klass != (Object__Class *)0x0) {
            SpawnRoleEditorMenu::SpawnRoleEditorMenu_Initialize
                      ((SpawnRoleEditorMenu *)object[1].klass,woID,(MethodInfo *)0x0);
            pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)this,(MethodInfo *)0x0);
            this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                      FUN_?(
                                   TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                   );
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
            Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                      (this_01,object,
                       MethodInfo__SettingsFactory____c__DisplayClass58_0___CreateSettingsDialog_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
              FUN_?();
            }
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy
                      (pGVar2,(BaseEventData *)0x0,this_01,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                      );
            return;
          }
        }
        goto code_?;
      }
      goto code_?;
    }
    if (worldObjectType == WorldObjectType__Enum_ModelTransparency) {
      pOVar29 = (this->fields).objectTransparencySettingsPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pOVar29 = (ObjectTransparencySettings *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                         ((Object *)pOVar29,
                          UGUI__Desktop__Scripts__EditMode__SettingsBoxes__ObjectTransparencySettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::ObjectTransparencySettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__ObjectTransparencySettings_
                         );
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (pOVar29 != (ObjectTransparencySettings *)0x0) {
        UGUI::Desktop::Scripts::EditMode::SettingsBoxes::ObjectTransparencySettings::
        ObjectTransparencySettings_Initialize(pOVar29,woID,pGVar2,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
    switch(worldObjectType) {
    case WorldObjectType__Enum_CameraSettings:
      pCVar30 = (this->fields).cameraBoxSettingsPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pCVar30 = (CameraBoxSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pCVar30,
                           UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Camera__CameraBoxSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Camera::CameraBoxSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Camera__CameraBoxSettings_
                          );
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (pCVar30 == (CameraBoxSettings *)0x0) goto code_?;
      UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Camera::CameraBoxSettings::
      CameraBoxSettings_Initialize(pCVar30,woID,pGVar2,(MethodInfo *)0x0);
      break;
    case WorldObjectType__Enum_GameCoinChest:
      pGVar31 = (this->fields).gameCoinChestSettingsPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pGVar31 = (GameCoinChestSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pGVar31,
                           GameCoinChestSettings_MethodInfo__UnityEngine__Object__Instantiate<GameCoinChestSettings>_GameCoinChestSettings_
                          );
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (pGVar31 == (GameCoinChestSettings *)0x0) goto code_?;
      GameCoinChestSettings::GameCoinChestSettings_Initialize
                (pGVar31,woID,pGVar2,(MethodInfo *)0x0);
      break;
    case WorldObjectType__Enum_BlueprintDoor:
      pMVar16 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if ((pMVar16 != (MVWorldObjectClientManager *)0x0) &&
         (pMVar17 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                              (pMVar16,woID,(MethodInfo *)0x0),
         pMVar17 != (MVWorldObjectClient *)0x0)) {
        bVar18 = (TypeInfo__WorldObjectTypes__MVDoor__MVDoorBlueprint->_1).naturalAligment;
        if (((pMVar17->klass->_1).naturalAligment < bVar18) ||
           ((MVDoorBlueprint__Class *)(pMVar17->klass->_1).typeHierarchy[(ulonglong)bVar18 - 1] !=
            TypeInfo__WorldObjectTypes__MVDoor__MVDoorBlueprint)) {
          FUN_?(pMVar17,TypeInfo__WorldObjectTypes__MVDoor__MVDoorBlueprint);
          pcVar19 = (code *)swi(3);
          (*pcVar19)();
          return;
        }
        pLVar32 = pMVar17[1].fields._.outputLinkRefs;
        if (pLVar32 != (List_1_MV_WorldObject_Link_ *)0x0) {
          woID_00 = *(int32_t *)&(pLVar32->fields)._items;
          pDVar33 = (this->fields).doorSettingsPrefab;
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          pDVar33 = (DoorSettings *)
                    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                              ((Object *)pDVar33,
                               UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Doors__DoorSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Doors::DoorSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Doors__DoorSettings_
                              );
          pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)this,(MethodInfo *)0x0);
          if (pDVar33 != (DoorSettings *)0x0) {
            UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Doors::DoorSettings::
            DoorSettings_Initialize(pDVar33,woID_00,pGVar2,(MethodInfo *)0x0);
            return;
          }
        }
      }
      goto code_?;
    case WorldObjectType__Enum_BlueprintMeleeWeapon:
    case WorldObjectType__Enum_BlueprintCostume:
    case WorldObjectType__Enum_BlueprintCustomGun:
      SettingsFactory_CreateEditablePickupItemsSettings(this,woID,(MethodInfo *)0x0);
      break;
    case WorldObjectType__Enum_TeamEditor:
      pTVar34 = (this->fields).teamEditorSettingsPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pTVar34 = (TeamEditorSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pTVar34,
                           TeamEditorSettings_MethodInfo__UnityEngine__Object__Instantiate<TeamEditorSettings>_TeamEditorSettings_
                          );
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (pTVar34 != (TeamEditorSettings *)0x0) {
        this_00 = (pTVar34->fields).settingsBase;
        (pTVar34->fields).woID = woID;
        if (this_00 != (SettingsBase *)0x0) {
          SettingsBase::SettingsBase_Initialize
                    (this_00,woID,pGVar2,MVWorldObjectDocumentationType__Enum_TeamEditor,
                     (MethodInfo *)0x0);
          pMVar16 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          if ((pMVar16 != (MVWorldObjectClientManager *)0x0) &&
             (pMVar17 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                                  (pMVar16,woID,(MethodInfo *)0x0),
             pMVar17 != (MVWorldObjectClient *)0x0)) {
            bVar35 = iRam_? != 0;
            (pTVar34->fields).teamData = (pMVar17->fields)._.data;
            if (bVar35) {
              uVar36 = (uint)((ulonglong)&(pTVar34->fields).teamData >> 0xc);
              puVar37 = (ulonglong *)((ulonglong)((uVar36 & 0x1fffff) >> 6) * 8 + 0xADDR);
              do {
                uVar38 = *puVar37;
                LOCK();
                uVar39 = *puVar37;
                if (uVar38 == uVar39) {
                  *puVar37 = uVar38 | 1L << (uVar36 & 0x3f);
                }
                UNLOCK();
              } while (uVar38 != uVar39);
            }
            TeamEditorSettings::TeamEditorSettings_InitInputfield
                      (pTVar34,(pTVar34->fields).blueTeam,(pTVar34->fields).blueTeamButton,
                       MVTeam__Enum_Blue,(MethodInfo *)0x0);
            TeamEditorSettings::TeamEditorSettings_InitInputfield
                      (pTVar34,(pTVar34->fields).redTeam,(pTVar34->fields).redTeamButton,
                       MVTeam__Enum_Red,(MethodInfo *)0x0);
            TeamEditorSettings::TeamEditorSettings_InitInputfield
                      (pTVar34,(pTVar34->fields).greenTeam,(pTVar34->fields).greenTeamButton,
                       MVTeam__Enum_Green,(MethodInfo *)0x0);
            TeamEditorSettings::TeamEditorSettings_InitInputfield
                      (pTVar34,(pTVar34->fields).yellowTeam,(pTVar34->fields).yellowTeamButton,
                       MVTeam__Enum_Yellow,(MethodInfo *)0x0);
            TeamEditorSettings::TeamEditorSettings_SetActiveButtons
                      (pTVar34,(pTVar34->fields).teamData,(MethodInfo *)0x0);
            bVar35 = iRam_? == 0;
            (pTVar34->fields).teamData = (Dictionary_2_System_Object_System_Object_ *)0x0;
            if (bVar35) {
              return;
            }
            uVar36 = (uint)((ulonglong)&(pTVar34->fields).teamData >> 0xc);
            puVar37 = (ulonglong *)((ulonglong)((uVar36 & 0x1fffff) >> 6) * 8 + 0xADDR);
            do {
              uVar38 = *puVar37;
              LOCK();
              uVar39 = *puVar37;
              if (uVar38 == uVar39) {
                *puVar37 = uVar38 | 1L << (uVar36 & 0x3f);
              }
              UNLOCK();
            } while (uVar38 != uVar39);
            return;
          }
        }
      }
      goto code_?;
    case WorldObjectType__Enum_TriggerCube:
      pTVar40 = (this->fields).triggerCubeSettingsPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pTVar40 = (TriggerCubeSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pTVar40,
                           TriggerCubeSettings_MethodInfo__UnityEngine__Object__Instantiate<TriggerCubeSettings>_TriggerCubeSettings_
                          );
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (pTVar40 == (TriggerCubeSettings *)0x0) goto code_?;
      TriggerCubeSettings::TriggerCubeSettings_Initialize(pTVar40,woID,pGVar2,(MethodInfo *)0x0);
      break;
    case WorldObjectType__Enum_ShootableButton:
      pSVar41 = (this->fields).shootablePlateSettingsPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pSVar41 = (ShootablePlateSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pSVar41,
                           ShootablePlateSettings_MethodInfo__UnityEngine__Object__Instantiate<ShootablePlateSettings>_ShootablePlateSettings_
                          );
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (pSVar41 == (ShootablePlateSettings *)0x0) goto code_?;
      ShootablePlateSettings::ShootablePlateSettings_Initialize
                (pSVar41,woID,pGVar2,(MethodInfo *)0x0);
      break;
    case WorldObjectType__Enum_UseLever:
      pLVar42 = (this->fields).leverSettingsPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pLVar42 = (LeverSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pLVar42,
                           LeverSettings_MethodInfo__UnityEngine__Object__Instantiate<LeverSettings>_LeverSettings_
                          );
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (pLVar42 == (LeverSettings *)0x0) goto code_?;
      LeverSettings::LeverSettings_Initialize(pLVar42,woID,pGVar2,(MethodInfo *)0x0);
      break;
    case WorldObjectType__Enum_CollectTheItemDropOff:
      pCVar43 = (this->fields).collectTheItemDropoffSettingsPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pCVar43 = (CollectTheItemDropoffSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pCVar43,
                           CollectTheItemDropoffSettings_MethodInfo__UnityEngine__Object__Instantiate<CollectTheItemDropoffSettings>_CollectTheItemDropoffSettings_
                          );
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (pCVar43 == (CollectTheItemDropoffSettings *)0x0) goto code_?;
      CollectTheItemDropoffSettings::CollectTheItemDropoffSettings_Initialize
                (pCVar43,woID,pGVar2,(MethodInfo *)0x0);
      break;
    case WorldObjectType__Enum_CollectTheItemCollectable:
      pCVar44 = (this->fields).collectTheItemSettingsPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pCVar44 = (CollectTheItemSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pCVar44,
                           CollectTheItemSettings_MethodInfo__UnityEngine__Object__Instantiate<CollectTheItemSettings>_CollectTheItemSettings_
                          );
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (pCVar44 == (CollectTheItemSettings *)0x0) goto code_?;
      CollectTheItemSettings::CollectTheItemSettings_Initialize
                (pCVar44,woID,pGVar2,(MethodInfo *)0x0);
      break;
    case WorldObjectType__Enum_WindTurbine:
      pWVar45 = (this->fields).windTurbineSettingsPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pWVar45 = (WindTurbineSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pWVar45,
                           WindTurbineSettings_MethodInfo__UnityEngine__Object__Instantiate<WindTurbineSettings>_WindTurbineSettings_
                          );
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (pWVar45 == (WindTurbineSettings *)0x0) goto code_?;
      WindTurbineSettings::WindTurbineSettings_Initialize(pWVar45,woID,pGVar2,(MethodInfo *)0x0);
      break;
    case WorldObjectType__Enum_GlobalSoundEmitter:
      pGVar46 = (this->fields).globalSoundEmitterSettingsPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pGVar46 = (GlobalSoundEmitterSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pGVar46,
                           GlobalSoundEmitterSettings_MethodInfo__UnityEngine__Object__Instantiate<GlobalSoundEmitterSettings>_GlobalSoundEmitterSettings_
                          );
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (pGVar46 == (GlobalSoundEmitterSettings *)0x0) goto code_?;
      GlobalSoundEmitterSettings::GlobalSoundEmitterSettings_Initialize
                (pGVar46,woID,pGVar2,(MethodInfo *)0x0);
      break;
    default:
      if (worldObjectType == WorldObjectType__Enum_GamePointChest) {
        pGVar47 = (this->fields).gamePointChestSettingsPrefab;
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        pGVar47 = (GamePointChestSettings *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)pGVar47,
                             GamePointChestSettings_MethodInfo__UnityEngine__Object__Instantiate<GamePointChestSettings>_GamePointChestSettings_
                            );
        pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        if (pGVar47 != (GamePointChestSettings *)0x0) {
          GamePointChestSettings::GamePointChestSettings_Initialize
                    (pGVar47,woID,pGVar2,(MethodInfo *)0x0);
          return;
        }
        goto code_?;
      }
    case WorldObjectType__Enum_GravityCube:
    case WorldObjectType__Enum_GravityCube|WorldObjectType__Enum_CubeModel:
    case WorldObjectType__Enum_GameCoin:
    case WorldObjectType__Enum_Theme:
    case WorldObjectType__Enum_Door:
    case WorldObjectType__Enum_PickupMeleeWeapon:
    case WorldObjectType__Enum_PickupCostume:
    case WorldObjectType__Enum_PickupCustomGun:
    case WorldObjectType__Enum_Caspar15:
    case WorldObjectType__Enum_ShrinkGun:
    case WorldObjectType__Enum_Thomas4:
    case WorldObjectType__Enum_CollectTheItemCollectableInstance:
    case WorldObjectType__Enum_CollectTheItem:
code_?:
      EStack_48.klass = (Enum__Class *)TypeInfo__MV__WorldObject__WorldObjectType;
      EStack_48.monitor = (MonitorData *)0xffffffffffffffff;
      WStack_49 = worldObjectType;
      pSVar25 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_48,(MethodInfo *)0x0);
      pSVar25 = mscorlib.dll::System::String::String_Concat_5
                          (StringLiteral_WorldObjectType__,pSVar25,
                           StringLiteral__has_no_settings_dialogue_,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)pSVar25,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void CreateSoundsInventory(Int32) */

void Assembly-CSharp.dll::SettingsFactory::SettingsFactory_CreateSoundsInventory
               (SettingsFactory *this,int32_t woID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  SoundInventoryController_MethodInfo__UnityEngine__Object__Instantiate<SoundInventoryController>_SoundInventoryController_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  original = (this->fields).soundInventoryControllerPrefab;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  this_11 = (Component *)
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                      ((Object *)original,
                       SoundInventoryController_MethodInfo__UnityEngine__Object__Instantiate<SoundInventoryController>_SoundInventoryController_
                      );
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_11 == (Component *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Add_System__String__int_
                  ,woID,pGVar1,0);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__Add_int__TabState_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<SoundTabInfo>_>__Add_int__System__Collections__Generic__List<SoundTabInfo>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__ContainsKey_int_)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__ContainsKey_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<SoundTabInfo>_>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<SoundTabInfo>_>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_int>__set_Item_int__int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  bool_MethodInfo__System__Linq__Enumerable__All<SoundTabInfo>_System__Collections__Generic__IEnumerable<SoundTabInfo>__System__Func<SoundTabInfo,_bool>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Func<SoundTabInfo,_bool>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<SoundTabInfo>__Add_SoundTabInfo_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<SoundTabInfo>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<StreamedAudioClipInfo>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<StreamedAudioClipInfo>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<SoundTabInfo>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  InventoryController_MethodInfo__UnityEngine__Object__Instantiate<InventoryController>_InventoryController__UnityEngine__Transform__bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__SoundInventoryController__PageTurned_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__SoundInventoryController__TabSelected_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SoundTabInfo);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TabState);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__SoundInventoryController____c__DisplayClass13_0___Initialize_b__0_SoundTabInfo_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SoundInventoryController____c__DisplayClass13_0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<int>);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_url);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar3 = this_11[3].fields._.m_CachedPtr;
  if (pSVar3 != (SettingsBase *)0x0) {
    pCVar4 = (Component__Class *)0x0;
    uVar5 = 0;
    SettingsBase::SettingsBase_Initialize
              (pSVar3,woID,pGVar1,MVWorldObjectDocumentationType__Enum_SoundEmitter,
               (MethodInfo *)0x0);
    *(undefined4 *)&this_11[2].klass = 1;
    this_06 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_06 != (MVWorldObjectClientManager *)0x0) {
      pMVar6 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                          (this_06,woID,(MethodInfo *)0x0);
      if ((pMVar6 != (MVWorldObjectClient *)0x0) &&
         (this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                     *)(pMVar6->fields)._.data,
         this_00 !=
         (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)
         0x0)) {
        iVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                 ::UIElements::StyleComplexSelector+PseudoStateData]::
                 Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                           (this_00,(Object *)StringLiteral_url,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                            ->klass->rgctx_data[0x21].method);
        if (iVar7 < 0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    ((Dictionary_2_System_Object_System_Object_ *)this_00,
                     (Object *)StringLiteral_url,(Object *)::StringLiteral__,
                     (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar5 >> 8),2),
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method);
        }
        SoundInventoryController::SoundInventoryController_DebugPrintSound
                  ((Dictionary_2_System_Object_System_Object_ *)this_00,(MethodInfo *)0x0);
        pCVar8 = (Component__Class *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__get_Item
                            ((Dictionary_2_System_Object_System_Object_ *)this_00,
                             (Object *)StringLiteral_url,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
        if (pCVar8 == (Component__Class *)0x0) {
          this_11[5].klass = (Component__Class *)0x0;
        }
        else {
          pCVar9 = pCVar4;
          if ((Object__Class *)(pCVar8->_0).image == pORam0000000182db2520) {
            pCVar9 = pCVar8;
          }
          if (pCVar9 == (Component__Class *)0x0) {
            FUN_?();
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          this_11[5].klass = pCVar9;
          pCVar9 = pCVar4;
          if ((Object__Class *)(pCVar8->_0).image == pORam0000000182db2520) {
            pCVar9 = pCVar8;
          }
          if (pCVar9 == (Component__Class *)0x0) {
            FUN_?();
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        if (iRam_? != 0) {
          uVar10 = (uint)((ulonglong)(this_11 + 5) >> 0xc);
          lVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6) * 8;
          do {
            uVar12 = *(ulonglong *)(lVar11 + 0xADDR);
            puVar13 = (ulonglong *)(lVar11 + 0xADDR);
            LOCK();
            bVar14 = uVar12 == *puVar13;
            if (bVar14) {
              *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
            }
            UNLOCK();
          } while (!bVar14);
        }
        iVar15 = iRam_?;
        if (this_11[4].klass != (Component__Class *)0x0) {
          this_11[4].monitor = (MonitorData *)((this_11[4].klass)->_0).byval_arg.data;
          if (iVar15 != 0) {
            uVar10 = (uint)((ulonglong)&this_11[4].monitor >> 0xc);
            lVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6) * 8;
            do {
              uVar12 = *(ulonglong *)(lVar11 + 0xADDR);
              puVar13 = (ulonglong *)(lVar11 + 0xADDR);
              LOCK();
              bVar14 = uVar12 == *puVar13;
              if (bVar14) {
                *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
              }
              UNLOCK();
            } while (!bVar14);
          }
          pOVar16 = this_11[2].fields._.m_CachedPtr;
          parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             (this_11,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          pMVar17 = 
          InventoryController_MethodInfo__UnityEngine__Object__Instantiate<InventoryController>_InventoryController__UnityEngine__Transform__bool_
          ;
          pOVar16 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                              (pOVar16,parent,0,
                               InventoryController_MethodInfo__UnityEngine__Object__Instantiate<InventoryController>_InventoryController__UnityEngine__Transform__bool_
                              );
          bVar14 = iRam_? != 0;
          this_11[1].monitor = (MonitorData *)pOVar16;
          if (bVar14) {
            uVar10 = (uint)((ulonglong)&this_11[1].monitor >> 0xc);
            lVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6) * 8;
            do {
              uVar12 = *(ulonglong *)(lVar11 + 0xADDR);
              puVar13 = (ulonglong *)(lVar11 + 0xADDR);
              LOCK();
              bVar14 = uVar12 == *puVar13;
              if (bVar14) {
                *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
              }
              UNLOCK();
            } while (!bVar14);
          }
          pMVar18 = this_11[1].monitor;
          if (pMVar18 != (MonitorData *)0x0) {
            pDVar19 = *(Delegate **)(pMVar18 + 0x40);
            pDVar20 = (Delegate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction<int>);
            FUN_?(pDVar20,this_11);
            pDVar19 = mscorlib.dll::System::Delegate::Delegate_Combine
                                (pDVar19,pDVar20,(MethodInfo *)0x0);
            pUVar21 = TypeInfo__UnityEngine__Events__UnityAction<int>;
            if (pDVar19 == (Delegate *)0x0) {
              *(undefined8 *)(pMVar18 + 0x40) = 0;
            }
            else {
              lVar11 = FUN_?(pDVar19,TypeInfo__UnityEngine__Events__UnityAction<int>);
              if (lVar11 == 0) {
                FUN_?(pDVar19,pUVar21);
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              *(longlong *)(pMVar18 + 0x40) = lVar11;
              pUVar21 = TypeInfo__UnityEngine__Events__UnityAction<int>;
              lVar11 = FUN_?(pDVar19,TypeInfo__UnityEngine__Events__UnityAction<int>);
              if (lVar11 == 0) {
                FUN_?(pDVar19,pUVar21);
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
            }
            if (iRam_? != 0) {
              uVar10 = (uint)((ulonglong)(pMVar18 + 0x40) >> 0xc);
              lVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6) * 8;
              do {
                uVar12 = *(ulonglong *)(lVar11 + 0xADDR);
                puVar13 = (ulonglong *)(lVar11 + 0xADDR);
                LOCK();
                bVar14 = uVar12 == *puVar13;
                if (bVar14) {
                  *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
                }
                UNLOCK();
              } while (!bVar14);
            }
            pMVar18 = this_11[1].monitor;
            if (pMVar18 != (MonitorData *)0x0) {
              pDVar19 = *(Delegate **)(pMVar18 + 0x48);
              pDVar20 = (Delegate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction<int>);
              FUN_?(pDVar20,this_11);
              pDVar19 = mscorlib.dll::System::Delegate::Delegate_Combine
                                  (pDVar19,pDVar20,(MethodInfo *)0x0);
              pUVar21 = TypeInfo__UnityEngine__Events__UnityAction<int>;
              if (pDVar19 == (Delegate *)0x0) {
                *(undefined8 *)(pMVar18 + 0x48) = 0;
              }
              else {
                lVar11 = FUN_?(pDVar19,TypeInfo__UnityEngine__Events__UnityAction<int>);
                if (lVar11 == 0) {
                  FUN_?(pDVar19,pUVar21);
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                *(longlong *)(pMVar18 + 0x48) = lVar11;
                pUVar21 = TypeInfo__UnityEngine__Events__UnityAction<int>;
                lVar11 = FUN_?(pDVar19,TypeInfo__UnityEngine__Events__UnityAction<int>);
                if (lVar11 == 0) {
                  FUN_?(pDVar19,pUVar21);
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
              }
              if (iRam_? != 0) {
                uVar10 = (uint)((ulonglong)(pMVar18 + 0x48) >> 0xc);
                lVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6) * 8;
                do {
                  uVar12 = *(ulonglong *)(lVar11 + 0xADDR);
                  puVar13 = (ulonglong *)(lVar11 + 0xADDR);
                  LOCK();
                  bVar14 = uVar12 == *puVar13;
                  if (bVar14) {
                    *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar14);
              }
              if ((InventoryController *)this_11[1].monitor != (InventoryController *)0x0) {
                InventoryController::InventoryController_Initialize
                          ((InventoryController *)this_11[1].monitor,*(int32_t *)&this_11[3].klass,
                           (MethodInfo *)0x0);
                pMVar18 = this_11[4].monitor;
                if (pMVar18 != (MonitorData *)0x0) {
                  lVar11 = 0x20;
                  do {
                    uVar10 = (uint)pCVar4;
                    if (*(int *)(pMVar18 + 0x18) <= (int)uVar10) {
                      if (cRam_? == '\0') {
                        FUN_?(&
                                      MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<SoundTabInfo>_>__get_Item_int_
                                      ,0);
                        LOCK();
                        UNLOCK();
                        FUN_?(&
                                      MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                                     );
                        LOCK();
                        UNLOCK();
                        FUN_?(&
                                      MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Item_int_
                                     );
                        LOCK();
                        UNLOCK();
                        FUN_?(&
                                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<SoundViewItem>__Dispose__
                                     );
                        LOCK();
                        UNLOCK();
                        FUN_?(&
                                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<SoundViewItem>__MoveNext__
                                     );
                        LOCK();
                        UNLOCK();
                        FUN_?(&
                                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<SoundViewItem>__get_Current__
                                     );
                        LOCK();
                        UNLOCK();
                        FUN_?(&
                                      System__Collections__Generic__List<SoundViewItem>_MethodInfo__InventoryController__GetComponentsOfSlotsWithType<SoundViewItem>__
                                     );
                        LOCK();
                        UNLOCK();
                        FUN_?(&
                                      MethodInfo__System__Collections__Generic__List<SoundViewItem>__GetEnumerator__
                                     );
                        LOCK();
                        UNLOCK();
                        FUN_?(&
                                      MethodInfo__System__Collections__Generic__List<SoundTabInfo>__get_Item_int_
                                     );
                        LOCK();
                        UNLOCK();
                        FUN_?(&
                                      SoundViewItem_MethodInfo__UnityEngine__Object__Instantiate<SoundViewItem>_SoundViewItem_
                                     );
                        LOCK();
                        UNLOCK();
                        FUN_?(&TypeInfo__UnityEngine__Object);
                        LOCK();
                        UNLOCK();
                        FUN_?(&
                                      MethodInfo__SoundInventoryController__SetNewOriginalUrl_System__String_
                                     );
                        LOCK();
                        UNLOCK();
                        FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<System::String>);
                        LOCK();
                        UNLOCK();
                        FUN_?(&StringLiteral_url);
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      if (((InventoryController *)this_11[1].monitor != (InventoryController *)0x0)
                         && (pLVar22 = InventoryController::
                                       InventoryController_GetComponentsOfSlotsWithType
                                                 ((InventoryController *)this_11[1].monitor,
                                                  System__Collections__Generic__List<SoundViewItem>_MethodInfo__InventoryController__GetComponentsOfSlotsWithType<SoundViewItem>__
                                                 ), pLVar22 != (List_1_System_Object_ *)0x0)) {
                        if (iRam_? != 0) {
                          uVar10 = (uint)((ulonglong)&puStack_23 >> 0xc);
                          uVar12 = (ulonglong)((uVar10 & 0x1fffff) >> 6);
                          do {
                            uVar24 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
                            puVar13 = (ulonglong *)(uVar12 * 8 + 0xADDR);
                            LOCK();
                            bVar14 = uVar24 == *puVar13;
                            if (bVar14) {
                              *puVar13 = uVar24 | 1L << (uVar10 & 0x3f);
                            }
                            UNLOCK();
                          } while (!bVar14);
                        }
                        ppLStack_25 = (List_1_System_Object_ **)
                                      ((ulonglong)(uint)(pLVar22->fields)._version << 0x20);
                        uStack_26 = 0;
                        lStack_27 = (longlong)ppLStack_25;
                        pSVar28 = (SoundViewItem *)0x0;
                        puStack_23 = (undefined *)0x0;
                        ppLStack_25 = &pLStack_29;
                        pLStack_29 = pLVar22;
                        while (bVar30 = mscorlib.dll::System::Collections::Generic::
                                        List`1[T]+Enumerator[System::Object]::
                                        List_1_T_Enumerator_System_Object__MoveNext
                                                  ((List_1_T_Enumerator_System_Object_ *)&pLStack_29
                                                   ,
                                                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<SoundViewItem>__MoveNext__
                                                  ), bVar30 != 0) {
                          if (pSVar28 == (SoundViewItem *)0x0) goto code_?;
                          SoundViewItem::SoundViewItem_UnsubscribePendingDownloads
                                    (pSVar28,(MethodInfo *)0x0);
                        }
                        if ((this_11[1].monitor != (MonitorData *)0x0) &&
                           (this_04 = *(InventorySlots **)(this_11[1].monitor + 0x30),
                           this_04 != (InventorySlots *)0x0)) {
                          InventorySlots::InventorySlots_Clear(this_04,(MethodInfo *)0x0);
                          pMVar18 = this_11[1].monitor;
                          iVar7 = *(int32_t *)&this_11[2].klass;
                          pDVar31 = this_11[1].fields._.m_CachedPtr;
                          if ((pDVar31 != (Dictionary_2_System_Int32_System_Object_ *)0x0) &&
                             (pOVar16 = mscorlib.dll::System::Collections::Generic::
                                        Dictionary`2[System::Int32,System::Object]::
                                        Dictionary_2_System_Int32_System_Object__get_Item
                                                  (pDVar31,iVar7,
                                                                                                      
                                                  MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                                                  ), pOVar16 != (Object *)0x0)) {
                            page = *(int32_t *)((longlong)&pOVar16[2].klass + 4);
                            pDVar31 = this_11[1].fields._.m_CachedPtr;
                            if ((pDVar31 != (Dictionary_2_System_Int32_System_Object_ *)0x0) &&
                               (pOVar16 = mscorlib.dll::System::Collections::Generic::
                                          Dictionary`2[System::Int32,System::Object]::
                                          Dictionary_2_System_Int32_System_Object__get_Item
                                                    (pDVar31,*(int32_t *)&this_11[2].klass,
                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                                                  ), pOVar16 != (Object *)0x0)) {
                              iVar32 = FUN_?((float)*(int *)&pOVar16[2].klass /
                                                     (float)*(int *)&pOVar16[1].klass);
                              iVar15 = 1;
                              if (1 < iVar32) {
                                iVar15 = iVar32;
                              }
                              if ((pMVar18 != (MonitorData *)0x0) &&
                                 (plVar33 = *(longlong **)(pMVar18 + 0x28), plVar33 != (longlong *)0x0
                                 )) {
                                (**(code **)(*plVar33 + 0x188))
                                          (plVar33,iVar7,page,iVar15,*(undefined8 *)(*plVar33 + 400))
                                ;
                                if (*(InventorySlots **)(pMVar18 + 0x30) != (InventorySlots *)0x0) {
                                  InventorySlots::InventorySlots_UpdateAbsoluteSlotValues
                                            (*(InventorySlots **)(pMVar18 + 0x30),page,
                                             *(int32_t *)(pMVar18 + 0x20),(MethodInfo *)0x0);
                                  pSVar34 = StringLiteral_url;
                                  pCVar4 = this_11[5].klass;
                                  if (cRam_? == '\0') {
                                    FUN_?(&TypeInfo__System__Convert);
                                    LOCK();
                                    UNLOCK();
                                    cRam_? = '\x01';
                                  }
                                  pSVar3 = this_11[3].fields._.m_CachedPtr;
                                  if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
                                    FUN_?();
                                  }
                                  if (cRam_? == '\0') {
                                    FUN_?(&TypeInfo__System__Convert);
                                    LOCK();
                                    UNLOCK();
                                    cRam_? = '\x01';
                                  }
                                  if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
                                    FUN_?();
                                  }
                                  value = mscorlib.dll::System::Convert::Convert_ToString_1
                                                    ((Object *)pCVar4,(IFormatProvider *)0x0,
                                                     (MethodInfo *)0x0);
                                  if (pSVar3 != (SettingsBase *)0x0) {
                                    SettingsBase::SettingsBase_OnSettingChanged
                                              (pSVar3,pSVar34,(Object *)value,(MethodInfo *)0x0);
                                    if ((Dictionary_2_System_Int32_System_Object_ *)
                                        this_11[2].monitor !=
                                        (Dictionary_2_System_Int32_System_Object_ *)0x0) {
                                      this_09 = (List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize_
                                                 *)mscorlib.dll::System::Collections::Generic::
                                                   Dictionary`2[System::Int32,System::Object]::
                                                   Dictionary_2_System_Int32_System_Object__get_Item
                                                             ((
                                                  Dictionary_2_System_Int32_System_Object_ *)
                                                  this_11[2].monitor,*(int32_t *)&this_11[2].klass,
                                                  MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<SoundTabInfo>_>__get_Item_int_
                                                  );
                                      pvVar35 = this_11[4].fields._.m_CachedPtr;
                                      if (pvVar35 != (void *)0x0) {
                                        iVar15 = FUN_?(pvVar35,*(undefined4 *)
                                                                       &this_11[2].klass,
                                                                                                                              
                                                  MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Item_int_
                                                  );
                                        iVar32 = 0;
                                        if (iVar15 < 1) {
                                          return;
                                        }
                                        while (((pDVar31 = this_11[1].fields._.m_CachedPtr,
                                                pDVar31 != (Dictionary_2_System_Int32_System_Object_
                                                           *)0x0 &&
                                                (pTVar36 = (TabState *)
                                                           mscorlib.dll::System::Collections::
                                                           Generic::Dictionary`2[System::
                                                           Int32,System::Object]::
                                                                                                                      
                                                  Dictionary_2_System_Int32_System_Object__get_Item
                                                            (pDVar31,*(int32_t *)&this_11[2].klass,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                                                  ), pTVar36 != (TabState *)0x0)) &&
                                               (pIVar37 = TabState::TabState_get_SlotRange
                                                                    (pTVar36,(MethodInfo *)0x0),
                                               pIVar37 != (Int32__Array *)0x0))) {
                                          if ((int)pIVar37->max_length == 0) {
code_?:
                                            FUN_?();
                                            pcVar2 = (code *)swi(3);
                                            (*pcVar2)();
                                            return;
                                          }
                                          if (pIVar37->vector[0] <= iVar32) {
                                            if ((uint)pIVar37->max_length < 2)
                                            goto code_?;
                                            if (iVar32 < pIVar37->vector[1]) {
                                              pOVar16 = (Object *)this_11[3].monitor;
                                              if (*(int *)&(TypeInfo__UnityEngine__Object->_1).
                                                           field_0x1c == 0) {
                                                FUN_?();
                                              }
                                              pSVar28 = (SoundViewItem *)
                                                        UnityEngine.CoreModule.dll::UnityEngine::
                                                        Object::Object_1_Instantiate_4
                                                                  (pOVar16,
                                                  SoundViewItem_MethodInfo__UnityEngine__Object__Instantiate<SoundViewItem>_SoundViewItem_
                                                  );
                                              if (this_09 !=
                                                  (
                                                  List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize_
                                                  *)0x0) {
                                                info = mscorlib.dll::System::Collections::Generic::
                                                       List`1[UnityEngine::UIElements::UIR::
                                                       EntryPreProcessor+AllocSize]::
                                                                                                              
                                                  List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize__get_Item
                                                            (this_09,iVar32,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__List<SoundTabInfo>__get_Item_int_
                                                  );
                                                pCVar4 = this_11[5].klass;
                                                this_10 = (UnityAction_1_System_Object_ *)
                                                          FUN_?(
                                                  TypeInfo__UnityEngine__Events__UnityAction<System::String>
                                                  );
                                                UnityEngine.CoreModule.dll::UnityEngine::Events::
                                                UnityAction`1[System::Object]::
                                                UnityAction_1_System_Object___ctor
                                                          (this_10,(Object *)this_11,
                                                                                                                      
                                                  MethodInfo__SoundInventoryController__SetNewOriginalUrl_System__String_
                                                  ,(MethodInfo *)0x0);
                                                if (pSVar28 != (SoundViewItem *)0x0) {
                                                  SoundViewItem::SoundViewItem_Initialize
                                                            (pSVar28,(SoundTabInfo *)info,
                                                             (String *)pCVar4,
                                                             (UnityAction_1_System_String_ *)this_10
                                                             ,(MethodInfo *)0x0);
                                                  this_05 = (InventoryController *)
                                                            this_11[1].monitor;
                                                  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine
                                                            ::Component::Component_get_gameObject
                                                                      ((Component *)pSVar28,
                                                                       (MethodInfo *)0x0);
                                                  if (this_05 != (InventoryController *)0x0) {
                                                    InventoryController::
                                                    InventoryController_AddObject
                                                              (this_05,pGVar1,
                                                               iVar32 % *(int *)&this_11[3].klass,
                                                               (MethodInfo *)0x0);
                                                    goto code_?;
                                                  }
                                                }
                                              }
                                              break;
                                            }
                                          }
code_?:
                                          iVar32 = iVar32 + 1;
                                          if (iVar15 <= iVar32) {
                                            return;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                      FUN_?();
code_?:
                      FUN_?();
                      FUN_?();
                      pcVar2 = (code *)swi(3);
                      (*pcVar2)();
                      return;
                    }
                    pOVar16 = (Object *)
                              FUN_?(
                                           TypeInfo__SoundInventoryController____c__DisplayClass13_0
                                           );
                    pMVar18 = this_11[4].monitor;
                    if (pMVar18 == (MonitorData *)0x0) break;
                    if (*(uint *)(pMVar18 + 0x18) <= uVar10) {
                      mscorlib.dll::System::ThrowHelper::
                      ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                      pcVar2 = (code *)swi(3);
                      (*pcVar2)();
                      return;
                    }
                    lVar38 = *(longlong *)(pMVar18 + 0x10);
                    if (lVar38 == 0) break;
                    if (*(uint *)(lVar38 + 0x18) <= uVar10) {
                      FUN_?();
                      pcVar2 = (code *)swi(3);
                      (*pcVar2)();
                      return;
                    }
                    if (*(longlong *)(lVar38 + lVar11) == 0) break;
                    pSVar34 = *(String **)(*(longlong *)(lVar38 + lVar11) + 0x20);
                    if (pOVar16 == (Object *)0x0) break;
                    bVar14 = iRam_? != 0;
                    pOVar16[1].klass =
                         *(Object__Class **)
                          (*(longlong *)(lVar11 + *(longlong *)(this_11[4].monitor + 0x10)) + 0x18);
                    if (bVar14) {
                      uVar39 = (uint)((ulonglong)(pOVar16 + 1) >> 0xc);
                      lVar38 = (ulonglong)((uVar39 & 0x1fffff) >> 6) * 8;
                      do {
                        uVar12 = *(ulonglong *)(lVar38 + 0xADDR);
                        puVar13 = (ulonglong *)(lVar38 + 0xADDR);
                        LOCK();
                        bVar14 = uVar12 == *puVar13;
                        if (bVar14) {
                          *puVar13 = uVar12 | 1L << (uVar39 & 0x3f);
                        }
                        UNLOCK();
                      } while (!bVar14);
                    }
                    if ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                         *)this_11[5].monitor ==
                        (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                         *)0x0) break;
                    iVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                             Object,UnityEngine::UIElements::StyleComplexSelector+PseudoStateData]::
                             Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                                       ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                                         *)this_11[5].monitor,(Object *)pSVar34,
                                        MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__ContainsKey_System__String_
                                        ->klass->rgctx_data[0x21].method);
                    if (iVar7 < 0) {
                      pMVar18 = this_11[5].monitor;
                      if (pMVar18 == (MonitorData *)0x0) break;
                      pMVar17 = (MethodInfo *)CONCAT71((int7)((ulonglong)pMVar17 >> 8),2);
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                      ::Int32]::Dictionary_2_System_Object_System_Int32__TryInsert
                                ((Dictionary_2_System_Object_System_Int32_ *)this_11[5].monitor,
                                 (Object *)pSVar34,
                                 (*(int *)(pMVar18 + 0x20) - *(int *)(pMVar18 + 0x28)) + 1,
                                 (InsertionBehavior__Enum)pMVar17,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Add_System__String__int_
                                 ->klass->rgctx_data[0x22].method);
                    }
                    if ((Dictionary_2_System_Object_System_Int32Enum_ *)this_11[5].monitor ==
                        (Dictionary_2_System_Object_System_Int32Enum_ *)0x0) break;
                    IVar40 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                             Object,System::Int32Enum]::
                             Dictionary_2_System_Object_System_Int32Enum__get_Item
                                       ((Dictionary_2_System_Object_System_Int32Enum_ *)
                                        this_11[5].monitor,(Object *)pSVar34,
                                        MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                                       );
                    this_01 = this_11[1].fields._.m_CachedPtr;
                    if ((Dictionary_2_System_Object_System_Int32Enum_ *)this_11[5].monitor ==
                        (Dictionary_2_System_Object_System_Int32Enum_ *)0x0) break;
                    key = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Object,System::Int32Enum]::
                          Dictionary_2_System_Object_System_Int32Enum__get_Item
                                    ((Dictionary_2_System_Object_System_Int32Enum_ *)
                                     this_11[5].monitor,(Object *)pSVar34,
                                     MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                                    );
                    if (this_01 == (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) break;
                    iVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                             Int32,UnityEngine::Vector3]::
                             Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                                       (this_01,key,
                                        MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__ContainsKey_int_
                                        ->klass->rgctx_data[0x21].method);
                    if (iVar7 < 0) {
                      uVar39 = *(uint *)&this_11[3].klass;
                      pTVar36 = (TabState *)FUN_?(TypeInfo__TabState);
                      uVar12 = (ulonglong)uVar39;
                      TabState::TabState__ctor(pTVar36,IVar40,pSVar34,uVar39,(MethodInfo *)0x0);
                      pDVar31 = this_11[1].fields._.m_CachedPtr;
                      if (pDVar31 == (Dictionary_2_System_Int32_System_Object_ *)0x0) break;
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                      ::Object]::Dictionary_2_System_Int32_System_Object__TryInsert
                                (pDVar31,IVar40,(Object *)pTVar36,
                                 (InsertionBehavior__Enum)CONCAT71((int7)(uVar12 >> 8),2),
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__Add_int__TabState_
                                 ->klass->rgctx_data[0x22].method);
                      if (((pTVar36 == (TabState *)0x0) ||
                          (this_11[1].monitor == (MonitorData *)0x0)) ||
                         (plVar33 = *(longlong **)(this_11[1].monitor + 0x28),
                         plVar33 == (longlong *)0x0)) break;
                      pMVar17 = *(MethodInfo **)(*plVar33 + 0x180);
                      (**(code **)(*plVar33 + 0x178))(plVar33,IVar40,(pTVar36->fields).name);
                    }
                    if ((Dictionary_2_System_Int32_UnityEngine_Vector3_ *)this_11[2].monitor ==
                        (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) break;
                    iVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                             Int32,UnityEngine::Vector3]::
                             Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                                       ((Dictionary_2_System_Int32_UnityEngine_Vector3_ *)
                                        this_11[2].monitor,IVar40,
                                        MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<SoundTabInfo>_>__ContainsKey_int_
                                        ->klass->rgctx_data[0x21].method);
                    if (iVar7 < 0) {
                      pDVar31 = (Dictionary_2_System_Int32_System_Object_ *)this_11[2].monitor;
                      this_07 = (LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                                 *)FUN_?(
                                                TypeInfo__System__Collections__Generic__List<SoundTabInfo>
                                                );
                      mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::
                      Metadata::__Il2CppFullySharedGenericType]::
                      LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                                (this_07,
                                 MethodInfo__System__Collections__Generic__List<SoundTabInfo>__List__
                                );
                      if (pDVar31 == (Dictionary_2_System_Int32_System_Object_ *)0x0) break;
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                      ::Object]::Dictionary_2_System_Int32_System_Object__TryInsert
                                (pDVar31,IVar40,(Object *)this_07,
                                 (InsertionBehavior__Enum)
                                 CONCAT71((int7)((ulonglong)pMVar17 >> 8),2),
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<SoundTabInfo>_>__Add_int__System__Collections__Generic__List<SoundTabInfo>_
                                 ->klass->rgctx_data[0x22].method);
                    }
                    if ((Dictionary_2_System_Int32_System_Object_ *)this_11[2].monitor ==
                        (Dictionary_2_System_Int32_System_Object_ *)0x0) break;
                    pOVar41 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                              Int32,System::Object]::
                              Dictionary_2_System_Int32_System_Object__get_Item
                                        ((Dictionary_2_System_Int32_System_Object_ *)
                                         this_11[2].monitor,IVar40,
                                         MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<SoundTabInfo>_>__get_Item_int_
                                        );
                    this_08 = (Predicate_1_Object_ *)
                              FUN_?(TypeInfo__System__Func<SoundTabInfo,_bool>);
                    uVar5 = 0;
                    mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
                              (this_08,pOVar16,
                               MethodInfo__SoundInventoryController____c__DisplayClass13_0___Initialize_b__0_SoundTabInfo_
                               ,(MethodInfo *)0x0);
                    bVar30 = System.Core.dll::System::Linq::Enumerable::Enumerable_All
                                       ((IEnumerable_1_System_Object_ *)pOVar41,
                                        (Func_2_Object_Boolean_ *)this_08,
                                        bool_MethodInfo__System__Linq__Enumerable__All<SoundTabInfo>_System__Collections__Generic__IEnumerable<SoundTabInfo>__System__Func<SoundTabInfo,_bool>_
                                       );
                    if (bVar30 != 0) {
                      if ((Dictionary_2_System_Int32_System_Object_ *)this_11[2].monitor ==
                          (Dictionary_2_System_Int32_System_Object_ *)0x0) break;
                      pLVar22 = (List_1_System_Object_ *)
                                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                Int32,System::Object]::
                                Dictionary_2_System_Int32_System_Object__get_Item
                                          ((Dictionary_2_System_Int32_System_Object_ *)
                                           this_11[2].monitor,IVar40,
                                           MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<SoundTabInfo>_>__get_Item_int_
                                          );
                      pOVar41 = (Object *)FUN_?(TypeInfo__SoundTabInfo);
                      if (pOVar41 == (Object *)0x0) break;
                      pOVar41[1].klass = pOVar16[1].klass;
                      func_?(pOVar41 + 1);
                      pOVar41[1].monitor = (MonitorData *)pSVar34;
                      func_?(&pOVar41[1].monitor);
                      if (this_11[4].monitor == (MonitorData *)0x0) break;
                      lVar38 = FUN_?(this_11[4].monitor,pCVar4);
                      if (lVar38 == 0) break;
                      pOVar41[2].klass = *(Object__Class **)(lVar38 + 0x10);
                      func_?(pOVar41 + 2);
                      if (pLVar22 == (List_1_System_Object_ *)0x0) break;
                      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                      List_1_System_Object__Add
                                (pLVar22,pOVar41,
                                 MethodInfo__System__Collections__Generic__List<SoundTabInfo>__Add_SoundTabInfo_
                                );
                    }
                    this_02 = this_11[4].fields._.m_CachedPtr;
                    if (this_02 == (Dictionary_2_System_Int32_System_Single_ *)0x0) break;
                    iVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                             Int32,System::Single]::
                             Dictionary_2_System_Int32_System_Single__FindEntry
                                       (this_02,IVar40,
                                        MethodInfo__System__Collections__Generic__Dictionary<int,_int>__ContainsKey_int_
                                        ->klass->rgctx_data[0x21].method);
                    this_03 = this_11[4].fields._.m_CachedPtr;
                    if (iVar7 < 0) {
                      if (this_03 == (Dictionary_2_System_Int32_System_Int32_ *)0x0) break;
                      iVar7 = 1;
                      pMVar17 = (MethodInfo *)CONCAT71((int7)((ulonglong)uVar5 >> 8),2);
                      pIVar42 = MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_
                                ->klass->rgctx_data;
                    }
                    else {
                      if (this_03 == (Dictionary_2_System_Int32_System_Int32_ *)0x0) break;
                      iVar15 = FUN_?(this_03,IVar40,
                                             MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Item_int_
                                            );
                      pMVar17 = (MethodInfo *)CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
                      iVar7 = iVar15 + 1;
                      pIVar42 = MethodInfo__System__Collections__Generic__Dictionary<int,_int>__set_Item_int__int_
                                ->klass->rgctx_data;
                    }
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                    Int32]::Dictionary_2_System_Int32_System_Int32__TryInsert
                              (this_03,IVar40,iVar7,(InsertionBehavior__Enum)pMVar17,
                               pIVar42[0x22].method);
                    pDVar31 = this_11[1].fields._.m_CachedPtr;
                    if ((Dictionary_2_System_Object_System_Int32Enum_ *)this_11[5].monitor ==
                        (Dictionary_2_System_Object_System_Int32Enum_ *)0x0) break;
                    IVar40 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                             Object,System::Int32Enum]::
                             Dictionary_2_System_Object_System_Int32Enum__get_Item
                                       ((Dictionary_2_System_Object_System_Int32Enum_ *)
                                        this_11[5].monitor,(Object *)pSVar34,
                                        MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                                       );
                    if (pDVar31 == (Dictionary_2_System_Int32_System_Object_ *)0x0) break;
                    pOVar16 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                              Int32,System::Object]::
                              Dictionary_2_System_Int32_System_Object__get_Item
                                        (pDVar31,IVar40,
                                         MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                                        );
                    if (pOVar16 == (Object *)0x0) break;
                    *(int *)&pOVar16[2].klass = *(int *)&pOVar16[2].klass + 1;
                    pCVar4 = (Component__Class *)(ulonglong)(uVar10 + 1);
                    pMVar18 = this_11[4].monitor;
                    lVar11 = lVar11 + 8;
                  } while (pMVar18 != (MonitorData *)0x0);
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnValidate() */

void Assembly-CSharp.dll::SettingsFactory::SettingsFactory_OnValidate
               (SettingsFactory *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Application);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Application->_1).field_0x1c == 0) {
    FUN_?();
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  cVar3 = (*pcRam_?)();
  if ((cVar3 != '\0') || ((this->fields).previewSettingsPopup == 0)) {
    return;
  }
  iVar4 = (this->fields).worldObjectType;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__WorldObjectTypes__MVDoor__MVDoorBlueprint);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVVehicleBase);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVWorldObjectSpawnerVehicle);
    LOCK();
    UNLOCK();
    FUN_?(&
                  UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Camera__CameraBoxSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Camera::CameraBoxSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Camera__CameraBoxSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  CollectTheItemDropoffSettings_MethodInfo__UnityEngine__Object__Instantiate<CollectTheItemDropoffSettings>_CollectTheItemDropoffSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  CollectTheItemSettings_MethodInfo__UnityEngine__Object__Instantiate<CollectTheItemSettings>_CollectTheItemSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  CountingCubeSettings_MethodInfo__UnityEngine__Object__Instantiate<CountingCubeSettings>_CountingCubeSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  CubeGunSettings_MethodInfo__UnityEngine__Object__Instantiate<CubeGunSettings>_CubeGunSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Doors__DoorSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Doors::DoorSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Doors__DoorSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  FireSettings_MethodInfo__UnityEngine__Object__Instantiate<FireSettings>_FireSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  GameCoinChestSettings_MethodInfo__UnityEngine__Object__Instantiate<GameCoinChestSettings>_GameCoinChestSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  GamePointChestSettings_MethodInfo__UnityEngine__Object__Instantiate<GamePointChestSettings>_GamePointChestSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  GlobalSoundEmitterSettings_MethodInfo__UnityEngine__Object__Instantiate<GlobalSoundEmitterSettings>_GlobalSoundEmitterSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HamsterWheelSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::HamsterWheelSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HamsterWheelSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HoverCraftSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::HoverCraftSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HoverCraftSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__JetpackSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::JetpackSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__JetpackSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  KillLimitSettings_MethodInfo__UnityEngine__Object__Instantiate<KillLimitSettings>_KillLimitSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  LeverSettings_MethodInfo__UnityEngine__Object__Instantiate<LeverSettings>_LeverSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MessageBoxSettings_MethodInfo__UnityEngine__Object__Instantiate<MessageBoxSettings>_MessageBoxSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  ObjectEnablerSettings_MethodInfo__UnityEngine__Object__Instantiate<ObjectEnablerSettings>_ObjectEnablerSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UGUI__Desktop__Scripts__EditMode__SettingsBoxes__ObjectTransparencySettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::ObjectTransparencySettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__ObjectTransparencySettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  OculusSettings_MethodInfo__UnityEngine__Object__Instantiate<OculusSettings>_OculusSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  PointLightSettings_MethodInfo__UnityEngine__Object__Instantiate<PointLightSettings>_PointLightSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  PressurePlateSettings_MethodInfo__UnityEngine__Object__Instantiate<PressurePlateSettings>_PressurePlateSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  PulseBoxSettings_MethodInfo__UnityEngine__Object__Instantiate<PulseBoxSettings>_PulseBoxSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UGUI__Desktop__Scripts__EditMode__SettingsBoxes__RoundCubeSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::RoundCubeSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__RoundCubeSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  ShootablePlateSettings_MethodInfo__UnityEngine__Object__Instantiate<ShootablePlateSettings>_ShootablePlateSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  SkyboxSettings_MethodInfo__UnityEngine__Object__Instantiate<SkyboxSettings>_SkyboxSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  SmokeSettings_MethodInfo__UnityEngine__Object__Instantiate<SmokeSettings>_SmokeSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  SoundEmitterSettings_MethodInfo__UnityEngine__Object__Instantiate<SoundEmitterSettings>_SoundEmitterSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  SpawnPointSettings_MethodInfo__UnityEngine__Object__Instantiate<SpawnPointSettings>_SpawnPointSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  SpawnRoleEditorMenu_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleEditorMenu>_SpawnRoleEditorMenu_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TeamEditorSettings_MethodInfo__UnityEngine__Object__Instantiate<TeamEditorSettings>_TeamEditorSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TimeTriggerSettings_MethodInfo__UnityEngine__Object__Instantiate<TimeTriggerSettings>_TimeTriggerSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  ToggleBoxSettings_MethodInfo__UnityEngine__Object__Instantiate<ToggleBoxSettings>_ToggleBoxSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TriggerCubeSettings_MethodInfo__UnityEngine__Object__Instantiate<TriggerCubeSettings>_TriggerCubeSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__VehicleEnergySettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::VehicleEnergySettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__VehicleEnergySettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  WaterBoxSettings_MethodInfo__UnityEngine__Object__Instantiate<WaterBoxSettings>_WaterBoxSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  WindTurbineSettings_MethodInfo__UnityEngine__Object__Instantiate<WindTurbineSettings>_WindTurbineSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__SettingsFactory____c__DisplayClass58_0___CreateSettingsDialog_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SettingsFactory____c__DisplayClass58_0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__WorldObjectType);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Oculus_Kill_Limit);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_WorldObjectType__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__has_no_settings_dialogue_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Kill_Limit);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__SettingsFactory____c__DisplayClass58_0);
  if (iVar4 < 0x42) {
    if (iVar4 < 0xe) {
      if (iVar4 == 2) {
        pPVar5 = (this->fields).pointLightSettingsPrefab;
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        pPVar5 = (PointLightSettings *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)pPVar5,
                             PointLightSettings_MethodInfo__UnityEngine__Object__Instantiate<PointLightSettings>_PointLightSettings_
                            );
        pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        if (pPVar5 != (PointLightSettings *)0x0) {
          PointLightSettings::PointLightSettings_Initialize(pPVar5,-1,pGVar6,(MethodInfo *)0x0);
          return;
        }
        goto code_?;
      }
      if (iVar4 == 0xd) {
        pSVar7 = (this->fields).soundEmitterSettingsPrefab;
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        pSVar7 = (SoundEmitterSettings *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)pSVar7,
                             SoundEmitterSettings_MethodInfo__UnityEngine__Object__Instantiate<SoundEmitterSettings>_SoundEmitterSettings_
                            );
        pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        if (pSVar7 != (SoundEmitterSettings *)0x0) {
          SoundEmitterSettings::SoundEmitterSettings_Initialize
                    (pSVar7,-1,pGVar6,(MethodInfo *)0x0);
          return;
        }
        goto code_?;
      }
      goto code_?;
    }
    switch(iVar4) {
    case 0x14:
      pTVar8 = (this->fields).toggleBoxSettingsPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pTVar8 = (ToggleBoxSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pTVar8,
                           ToggleBoxSettings_MethodInfo__UnityEngine__Object__Instantiate<ToggleBoxSettings>_ToggleBoxSettings_
                          );
      pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (pTVar8 == (ToggleBoxSettings *)0x0) goto code_?;
      ToggleBoxSettings::ToggleBoxSettings_Initialize(pTVar8,-1,pGVar6,(MethodInfo *)0x0);
      break;
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x1c:
    case 0x1d:
    case 0x1e:
    case 0x1f:
    case 0x20:
    case 0x22:
    case 0x23:
    case 0x24:
    case 0x25:
      goto code_?;
    case 0x18:
      pMVar9 = (this->fields).messageBoxSettingsPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pMVar9 = (MessageBoxSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pMVar9,
                           MessageBoxSettings_MethodInfo__UnityEngine__Object__Instantiate<MessageBoxSettings>_MessageBoxSettings_
                          );
      pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (pMVar9 == (MessageBoxSettings *)0x0) goto code_?;
      MessageBoxSettings::MessageBoxSettings_Initialize(pMVar9,-1,pGVar6,(MethodInfo *)0x0);
      break;
    case 0x19:
      pFVar10 = (this->fields).fireSettingsPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pFVar10 = (FireSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pFVar10,
                           FireSettings_MethodInfo__UnityEngine__Object__Instantiate<FireSettings>_FireSettings_
                          );
      pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (pFVar10 == (FireSettings *)0x0) goto code_?;
      FireSettings::FireSettings_Initialize(pFVar10,-1,pGVar6,(MethodInfo *)0x0);
      break;
    case 0x1a:
      pSVar11 = (this->fields).smokeSettingsPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pSVar11 = (SmokeSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pSVar11,
                           SmokeSettings_MethodInfo__UnityEngine__Object__Instantiate<SmokeSettings>_SmokeSettings_
                          );
      pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (pSVar11 == (SmokeSettings *)0x0) goto code_?;
      SmokeSettings::SmokeSettings_Initialize(pSVar11,-1,pGVar6,(MethodInfo *)0x0);
      break;
    case 0x1b:
      pTVar12 = (this->fields).timeTriggerSettingsPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pTVar12 = (TimeTriggerSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pTVar12,
                           TimeTriggerSettings_MethodInfo__UnityEngine__Object__Instantiate<TimeTriggerSettings>_TimeTriggerSettings_
                          );
      pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (pTVar12 == (TimeTriggerSettings *)0x0) goto code_?;
      TimeTriggerSettings::TimeTriggerSettings_Initialize(pTVar12,-1,pGVar6,(MethodInfo *)0x0);
      break;
    case 0x21:
      pPVar13 = (this->fields).pressurePlateSettingsPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pPVar13 = (PressurePlateSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pPVar13,
                           PressurePlateSettings_MethodInfo__UnityEngine__Object__Instantiate<PressurePlateSettings>_PressurePlateSettings_
                          );
      pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (pPVar13 == (PressurePlateSettings *)0x0) goto code_?;
      PressurePlateSettings::PressurePlateSettings_Initialize(pPVar13,-1,pGVar6,(MethodInfo *)0x0);
      break;
    case 0x26:
      pSVar14 = (this->fields).skyboxSettingsPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pSVar14 = (SkyboxSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pSVar14,
                           SkyboxSettings_MethodInfo__UnityEngine__Object__Instantiate<SkyboxSettings>_SkyboxSettings_
                          );
      pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (pSVar14 == (SkyboxSettings *)0x0) goto code_?;
      SkyboxSettings::SkyboxSettings_Initialize(pSVar14,-1,pGVar6,(MethodInfo *)0x0);
      break;
    case 0x27:
    case 0x28:
    case 0x29:
    case 0x2a:
      pSVar15 = (this->fields).spawnPointSettingsPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pSVar15 = (SpawnPointSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pSVar15,
                           SpawnPointSettings_MethodInfo__UnityEngine__Object__Instantiate<SpawnPointSettings>_SpawnPointSettings_
                          );
      pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (pSVar15 == (SpawnPointSettings *)0x0) goto code_?;
      SpawnPointSettings::SpawnPointSettings_Initialize(pSVar15,-1,pGVar6,(MethodInfo *)0x0);
      break;
    case 0x2b:
      pOVar16 = (this->fields).objectEnablerPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pOVar16 = (ObjectEnablerSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pOVar16,
                           ObjectEnablerSettings_MethodInfo__UnityEngine__Object__Instantiate<ObjectEnablerSettings>_ObjectEnablerSettings_
                          );
      pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (pOVar16 == (ObjectEnablerSettings *)0x0) goto code_?;
      ObjectEnablerSettings::ObjectEnablerSettings_Initialize(pOVar16,-1,pGVar6,(MethodInfo *)0x0);
      break;
    case 0x2c:
      pWVar17 = (this->fields).waterBoxSettingsPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pWVar17 = (WaterBoxSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pWVar17,
                           WaterBoxSettings_MethodInfo__UnityEngine__Object__Instantiate<WaterBoxSettings>_WaterBoxSettings_
                          );
      pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (pWVar17 == (WaterBoxSettings *)0x0) goto code_?;
      WaterBoxSettings::WaterBoxSettings_Initialize(pWVar17,-1,pGVar6,(MethodInfo *)0x0);
      break;
    case 0x2d:
      SettingsFactory_CreateBlueprintSettings(this,-1,(MethodInfo *)0x0);
      break;
    case 0x2e:
      pPVar18 = (this->fields).pulseBoxPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pPVar18 = (PulseBoxSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pPVar18,
                           PulseBoxSettings_MethodInfo__UnityEngine__Object__Instantiate<PulseBoxSettings>_PulseBoxSettings_
                          );
      pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (pPVar18 == (PulseBoxSettings *)0x0) goto code_?;
      PulseBoxSettings::PulseBoxSettings_Initialize(pPVar18,-1,pGVar6,(MethodInfo *)0x0);
      break;
    default:
      switch(iVar4) {
      case 0x36:
        pCVar19 = (this->fields).cubeGunSettingsPrefab;
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        pCVar19 = (CubeGunSettings *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)pCVar19,
                             CubeGunSettings_MethodInfo__UnityEngine__Object__Instantiate<CubeGunSettings>_CubeGunSettings_
                            );
        if (pCVar19 == (CubeGunSettings *)0x0) goto code_?;
        CubeGunSettings::CubeGunSettings_Initialize
                  (pCVar19,-1,(this->fields).materialsController,(MethodInfo *)0x0);
        break;
      default:
        goto code_?;
      case 0x39:
        pMVar20 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (pMVar20 == (MVWorldObjectClientManager *)0x0) goto code_?;
        pMVar21 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                            (pMVar20,-1,(MethodInfo *)0x0);
        if (pMVar21 == (MVWorldObjectClient *)0x0) {
          MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          goto code_?;
        }
        bVar22 = (TypeInfo__MVWorldObjectSpawnerVehicle->_1).naturalAligment;
        if (((pMVar21->klass->_1).naturalAligment < bVar22) ||
           ((MVWorldObjectSpawnerVehicle__Class *)
            (pMVar21->klass->_1).typeHierarchy[(ulonglong)bVar22 - 1] !=
            TypeInfo__MVWorldObjectSpawnerVehicle)) {
          FUN_?(pMVar21);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pMVar20 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (pMVar20 == (MVWorldObjectClientManager *)0x0) goto code_?;
        pMVar21 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                            (pMVar20,pMVar21[1].fields._.ownerActorNr,(MethodInfo *)0x0);
        this_02 = (VehicleBaseSettings *)0x0;
        if (pMVar21 == (MVWorldObjectClient *)0x0) goto code_?;
        pMVar23 = pMVar21->klass;
        bVar22 = (TypeInfo__MVVehicleBase->_1).naturalAligment;
        if (((pMVar23->_1).naturalAligment < bVar22) ||
           ((MVVehicleBase__Class *)(pMVar23->_1).typeHierarchy[(ulonglong)bVar22 - 1] !=
            TypeInfo__MVVehicleBase)) {
          FUN_?(pMVar21,TypeInfo__MVVehicleBase);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar4 = (*(pMVar23->vtable).get_DocumentationType.methodPtr)();
        if (iVar4 < 0x1b) {
          if (iVar4 == 0x19) {
            original_00 = (this->fields).hoverCraftSettingsPrefab;
            method_00 = 
            UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HoverCraftSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::HoverCraftSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HoverCraftSettings_
            ;
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
              method_00 = 
              UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HoverCraftSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::HoverCraftSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HoverCraftSettings_
              ;
            }
          }
          else {
            if (iVar4 != 0x1a) goto code_?;
            original_00 = (HoverCraftSettings *)(this->fields).hamsterWheelSettingsPrefab;
            method_00 = 
            UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HamsterWheelSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::HamsterWheelSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HamsterWheelSettings_
            ;
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
              method_00 = 
              UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HamsterWheelSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::HamsterWheelSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HamsterWheelSettings_
              ;
            }
          }
code_?:
          this_02 = (VehicleBaseSettings *)
                    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                              ((Object *)original_00,method_00);
        }
        else if ((iVar4 == 0x1f) || (iVar4 == 0x22)) {
          original_00 = (HoverCraftSettings *)(this->fields).jetpackSettingsPrefab;
          method_00 = 
          UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__JetpackSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::JetpackSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__JetpackSettings_
          ;
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
            method_00 = 
            UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__JetpackSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::JetpackSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__JetpackSettings_
            ;
          }
          goto code_?;
        }
code_?:
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (this_02 != (VehicleBaseSettings *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if ((this_02->fields)._._._._.m_CachedPtr != (void *)0x0) {
            pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)this,(MethodInfo *)0x0);
            UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::VehicleBaseSettings::
            VehicleBaseSettings_Initialize(this_02,-1,pGVar6,(MethodInfo *)0x0);
          }
        }
        break;
      case 0x3c:
        pRVar24 = (this->fields).roundCubeSettingsPrefab;
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        pRVar24 = (RoundCubeSettings *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)pRVar24,
                             UGUI__Desktop__Scripts__EditMode__SettingsBoxes__RoundCubeSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::RoundCubeSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__RoundCubeSettings_
                            );
        pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        if (pRVar24 == (RoundCubeSettings *)0x0) goto code_?;
        UGUI::Desktop::Scripts::EditMode::SettingsBoxes::RoundCubeSettings::
        RoundCubeSettings_Initialize(pRVar24,-1,pGVar6,(MethodInfo *)0x0);
        break;
      case 0x3d:
        pOVar25 = (this->fields).oculusSettingsPrefab;
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        pOVar25 = (OculusSettings *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)pOVar25,
                             OculusSettings_MethodInfo__UnityEngine__Object__Instantiate<OculusSettings>_OculusSettings_
                            );
        pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        if (pOVar25 == (OculusSettings *)0x0) goto code_?;
        OculusSettings::OculusSettings_Initialize(pOVar25,-1,pGVar6,(MethodInfo *)0x0);
        break;
      case 0x3f:
        pKVar26 = (this->fields).killLimitSettingsPrefab;
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        pKVar26 = (KillLimitSettings *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)pKVar26,
                             KillLimitSettings_MethodInfo__UnityEngine__Object__Instantiate<KillLimitSettings>_KillLimitSettings_
                            );
        pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        pSVar27 = StringLiteral_Kill_Limit;
        goto code_?;
      case 0x40:
        pKVar26 = (this->fields).killLimitSettingsPrefab;
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        pKVar26 = (KillLimitSettings *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)pKVar26,
                             KillLimitSettings_MethodInfo__UnityEngine__Object__Instantiate<KillLimitSettings>_KillLimitSettings_
                            );
        pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        pSVar27 = StringLiteral_Oculus_Kill_Limit;
code_?:
        pSVar27 = TM::TM__(pSVar27,(MethodInfo *)0x0);
        if (pKVar26 == (KillLimitSettings *)0x0) {
code_?:
          FUN_?();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        KillLimitSettings::KillLimitSettings_Initialize
                  (pKVar26,-1,pGVar6,pSVar27,(MethodInfo *)0x0);
        break;
      case 0x41:
        pCVar28 = (this->fields).countingCubeSettingsPrefab;
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        pCVar28 = (CountingCubeSettings *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)pCVar28,
                             CountingCubeSettings_MethodInfo__UnityEngine__Object__Instantiate<CountingCubeSettings>_CountingCubeSettings_
                            );
        pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        if (pCVar28 == (CountingCubeSettings *)0x0) goto code_?;
        CountingCubeSettings::CountingCubeSettings_Initialize(pCVar28,-1,pGVar6,(MethodInfo *)0x0);
      }
    }
  }
  else {
    if (iVar4 < 0x87) {
      if (iVar4 == 0x77) {
        pVVar29 = (this->fields).vehicleEnergySettingsPrefab;
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        pVVar29 = (VehicleEnergySettings *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)pVVar29,
                             UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__VehicleEnergySettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::VehicleEnergySettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__VehicleEnergySettings_
                            );
        pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        if (pVVar29 != (VehicleEnergySettings *)0x0) {
          UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::VehicleEnergySettings::
          VehicleEnergySettings_Initialize(pVVar29,-1,pGVar6,(MethodInfo *)0x0);
          return;
        }
        goto code_?;
      }
      if (iVar4 == 0x86) {
        original = (this->fields).spawnRoleEditorPrefab;
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        pOVar30 = (Object__Class *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)original,
                             SpawnRoleEditorMenu_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleEditorMenu>_SpawnRoleEditorMenu_
                            );
        if (object != (Object *)0x0) {
          object[1].klass = pOVar30;
          func_?(object + 1);
          if (object[1].klass != (Object__Class *)0x0) {
            SpawnRoleEditorMenu::SpawnRoleEditorMenu_Initialize
                      ((SpawnRoleEditorMenu *)object[1].klass,-1,(MethodInfo *)0x0);
            pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)this,(MethodInfo *)0x0);
            this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                      FUN_?(
                                   TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                   );
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
            Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                      (this_01,object,
                       MethodInfo__SettingsFactory____c__DisplayClass58_0___CreateSettingsDialog_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
              FUN_?();
            }
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy
                      (pGVar6,(BaseEventData *)0x0,this_01,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                      );
            return;
          }
        }
        goto code_?;
      }
      goto code_?;
    }
    if (iVar4 == 0x88) {
      pOVar31 = (this->fields).objectTransparencySettingsPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pOVar31 = (ObjectTransparencySettings *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                         ((Object *)pOVar31,
                          UGUI__Desktop__Scripts__EditMode__SettingsBoxes__ObjectTransparencySettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::ObjectTransparencySettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__ObjectTransparencySettings_
                         );
      pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (pOVar31 != (ObjectTransparencySettings *)0x0) {
        UGUI::Desktop::Scripts::EditMode::SettingsBoxes::ObjectTransparencySettings::
        ObjectTransparencySettings_Initialize(pOVar31,-1,pGVar6,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
    switch(iVar4) {
    case 0x91:
      pCVar32 = (this->fields).cameraBoxSettingsPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pCVar32 = (CameraBoxSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pCVar32,
                           UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Camera__CameraBoxSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Camera::CameraBoxSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Camera__CameraBoxSettings_
                          );
      pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (pCVar32 == (CameraBoxSettings *)0x0) goto code_?;
      UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Camera::CameraBoxSettings::
      CameraBoxSettings_Initialize(pCVar32,-1,pGVar6,(MethodInfo *)0x0);
      break;
    case 0x95:
      pGVar33 = (this->fields).gameCoinChestSettingsPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pGVar33 = (GameCoinChestSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pGVar33,
                           GameCoinChestSettings_MethodInfo__UnityEngine__Object__Instantiate<GameCoinChestSettings>_GameCoinChestSettings_
                          );
      pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (pGVar33 == (GameCoinChestSettings *)0x0) goto code_?;
      GameCoinChestSettings::GameCoinChestSettings_Initialize(pGVar33,-1,pGVar6,(MethodInfo *)0x0);
      break;
    case 0x98:
      pMVar20 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if ((pMVar20 != (MVWorldObjectClientManager *)0x0) &&
         (pMVar21 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                              (pMVar20,-1,(MethodInfo *)0x0), pMVar21 != (MVWorldObjectClient *)0x0)
         ) {
        bVar22 = (TypeInfo__WorldObjectTypes__MVDoor__MVDoorBlueprint->_1).naturalAligment;
        if (((pMVar21->klass->_1).naturalAligment < bVar22) ||
           ((MVDoorBlueprint__Class *)(pMVar21->klass->_1).typeHierarchy[(ulonglong)bVar22 - 1] !=
            TypeInfo__WorldObjectTypes__MVDoor__MVDoorBlueprint)) {
          FUN_?(pMVar21,TypeInfo__WorldObjectTypes__MVDoor__MVDoorBlueprint);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pLVar34 = pMVar21[1].fields._.outputLinkRefs;
        if (pLVar34 != (List_1_MV_WorldObject_Link_ *)0x0) {
          woID = *(int32_t *)&(pLVar34->fields)._items;
          pDVar35 = (this->fields).doorSettingsPrefab;
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          pDVar35 = (DoorSettings *)
                    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                              ((Object *)pDVar35,
                               UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Doors__DoorSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Doors::DoorSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Doors__DoorSettings_
                              );
          pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)this,(MethodInfo *)0x0);
          if (pDVar35 != (DoorSettings *)0x0) {
            UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Doors::DoorSettings::
            DoorSettings_Initialize(pDVar35,woID,pGVar6,(MethodInfo *)0x0);
            return;
          }
        }
      }
      goto code_?;
    case 0x9a:
    case 0x9c:
    case 0x9e:
      SettingsFactory_CreateEditablePickupItemsSettings(this,-1,(MethodInfo *)0x0);
      break;
    case 0xa1:
      pTVar36 = (this->fields).teamEditorSettingsPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pTVar36 = (TeamEditorSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pTVar36,
                           TeamEditorSettings_MethodInfo__UnityEngine__Object__Instantiate<TeamEditorSettings>_TeamEditorSettings_
                          );
      pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (pTVar36 != (TeamEditorSettings *)0x0) {
        this_00 = (pTVar36->fields).settingsBase;
        (pTVar36->fields).woID = -1;
        if (this_00 != (SettingsBase *)0x0) {
          SettingsBase::SettingsBase_Initialize
                    (this_00,-1,pGVar6,MVWorldObjectDocumentationType__Enum_TeamEditor,
                     (MethodInfo *)0x0);
          pMVar20 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          if ((pMVar20 != (MVWorldObjectClientManager *)0x0) &&
             (pMVar21 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                                  (pMVar20,-1,(MethodInfo *)0x0),
             pMVar21 != (MVWorldObjectClient *)0x0)) {
            bVar37 = iRam_? != 0;
            (pTVar36->fields).teamData = (pMVar21->fields)._.data;
            if (bVar37) {
              uVar38 = (uint)((ulonglong)&(pTVar36->fields).teamData >> 0xc);
              puVar39 = (ulonglong *)((ulonglong)((uVar38 & 0x1fffff) >> 6) * 8 + 0xADDR);
              do {
                uVar40 = *puVar39;
                LOCK();
                uVar41 = *puVar39;
                if (uVar40 == uVar41) {
                  *puVar39 = uVar40 | 1L << (uVar38 & 0x3f);
                }
                UNLOCK();
              } while (uVar40 != uVar41);
            }
            TeamEditorSettings::TeamEditorSettings_InitInputfield
                      (pTVar36,(pTVar36->fields).blueTeam,(pTVar36->fields).blueTeamButton,
                       MVTeam__Enum_Blue,(MethodInfo *)0x0);
            TeamEditorSettings::TeamEditorSettings_InitInputfield
                      (pTVar36,(pTVar36->fields).redTeam,(pTVar36->fields).redTeamButton,
                       MVTeam__Enum_Red,(MethodInfo *)0x0);
            TeamEditorSettings::TeamEditorSettings_InitInputfield
                      (pTVar36,(pTVar36->fields).greenTeam,(pTVar36->fields).greenTeamButton,
                       MVTeam__Enum_Green,(MethodInfo *)0x0);
            TeamEditorSettings::TeamEditorSettings_InitInputfield
                      (pTVar36,(pTVar36->fields).yellowTeam,(pTVar36->fields).yellowTeamButton,
                       MVTeam__Enum_Yellow,(MethodInfo *)0x0);
            TeamEditorSettings::TeamEditorSettings_SetActiveButtons
                      (pTVar36,(pTVar36->fields).teamData,(MethodInfo *)0x0);
            bVar37 = iRam_? == 0;
            (pTVar36->fields).teamData = (Dictionary_2_System_Object_System_Object_ *)0x0;
            if (bVar37) {
              return;
            }
            uVar38 = (uint)((ulonglong)&(pTVar36->fields).teamData >> 0xc);
            puVar39 = (ulonglong *)((ulonglong)((uVar38 & 0x1fffff) >> 6) * 8 + 0xADDR);
            do {
              uVar40 = *puVar39;
              LOCK();
              uVar41 = *puVar39;
              if (uVar40 == uVar41) {
                *puVar39 = uVar40 | 1L << (uVar38 & 0x3f);
              }
              UNLOCK();
            } while (uVar40 != uVar41);
            return;
          }
        }
      }
      goto code_?;
    case 0xa2:
      pTVar42 = (this->fields).triggerCubeSettingsPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pTVar42 = (TriggerCubeSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pTVar42,
                           TriggerCubeSettings_MethodInfo__UnityEngine__Object__Instantiate<TriggerCubeSettings>_TriggerCubeSettings_
                          );
      pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (pTVar42 == (TriggerCubeSettings *)0x0) goto code_?;
      TriggerCubeSettings::TriggerCubeSettings_Initialize(pTVar42,-1,pGVar6,(MethodInfo *)0x0);
      break;
    case 0xa5:
      pSVar43 = (this->fields).shootablePlateSettingsPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pSVar43 = (ShootablePlateSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pSVar43,
                           ShootablePlateSettings_MethodInfo__UnityEngine__Object__Instantiate<ShootablePlateSettings>_ShootablePlateSettings_
                          );
      pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (pSVar43 == (ShootablePlateSettings *)0x0) goto code_?;
      ShootablePlateSettings::ShootablePlateSettings_Initialize
                (pSVar43,-1,pGVar6,(MethodInfo *)0x0);
      break;
    case 0xa6:
      pLVar44 = (this->fields).leverSettingsPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pLVar44 = (LeverSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pLVar44,
                           LeverSettings_MethodInfo__UnityEngine__Object__Instantiate<LeverSettings>_LeverSettings_
                          );
      pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (pLVar44 == (LeverSettings *)0x0) goto code_?;
      LeverSettings::LeverSettings_Initialize(pLVar44,-1,pGVar6,(MethodInfo *)0x0);
      break;
    case 0xa7:
      pCVar45 = (this->fields).collectTheItemDropoffSettingsPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pCVar45 = (CollectTheItemDropoffSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pCVar45,
                           CollectTheItemDropoffSettings_MethodInfo__UnityEngine__Object__Instantiate<CollectTheItemDropoffSettings>_CollectTheItemDropoffSettings_
                          );
      pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (pCVar45 == (CollectTheItemDropoffSettings *)0x0) goto code_?;
      CollectTheItemDropoffSettings::CollectTheItemDropoffSettings_Initialize
                (pCVar45,-1,pGVar6,(MethodInfo *)0x0);
      break;
    case 0xa8:
      pCVar46 = (this->fields).collectTheItemSettingsPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pCVar46 = (CollectTheItemSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pCVar46,
                           CollectTheItemSettings_MethodInfo__UnityEngine__Object__Instantiate<CollectTheItemSettings>_CollectTheItemSettings_
                          );
      pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (pCVar46 == (CollectTheItemSettings *)0x0) goto code_?;
      CollectTheItemSettings::CollectTheItemSettings_Initialize
                (pCVar46,-1,pGVar6,(MethodInfo *)0x0);
      break;
    case 0xaa:
      pWVar47 = (this->fields).windTurbineSettingsPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pWVar47 = (WindTurbineSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pWVar47,
                           WindTurbineSettings_MethodInfo__UnityEngine__Object__Instantiate<WindTurbineSettings>_WindTurbineSettings_
                          );
      pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (pWVar47 == (WindTurbineSettings *)0x0) goto code_?;
      WindTurbineSettings::WindTurbineSettings_Initialize(pWVar47,-1,pGVar6,(MethodInfo *)0x0);
      break;
    case 0xab:
      pGVar48 = (this->fields).globalSoundEmitterSettingsPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pGVar48 = (GlobalSoundEmitterSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pGVar48,
                           GlobalSoundEmitterSettings_MethodInfo__UnityEngine__Object__Instantiate<GlobalSoundEmitterSettings>_GlobalSoundEmitterSettings_
                          );
      pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (pGVar48 == (GlobalSoundEmitterSettings *)0x0) goto code_?;
      GlobalSoundEmitterSettings::GlobalSoundEmitterSettings_Initialize
                (pGVar48,-1,pGVar6,(MethodInfo *)0x0);
      break;
    default:
      if (iVar4 == 0xb5) {
        pGVar49 = (this->fields).gamePointChestSettingsPrefab;
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        pGVar49 = (GamePointChestSettings *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)pGVar49,
                             GamePointChestSettings_MethodInfo__UnityEngine__Object__Instantiate<GamePointChestSettings>_GamePointChestSettings_
                            );
        pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        if (pGVar49 != (GamePointChestSettings *)0x0) {
          GamePointChestSettings::GamePointChestSettings_Initialize
                    (pGVar49,-1,pGVar6,(MethodInfo *)0x0);
          return;
        }
        goto code_?;
      }
    case 0x92:
    case 0x93:
    case 0x94:
    case 0x96:
    case 0x97:
    case 0x99:
    case 0x9b:
    case 0x9d:
    case 0x9f:
    case 0xa0:
    case 0xa3:
    case 0xa4:
    case 0xa9:
code_?:
      EStack_50.klass = (Enum__Class *)TypeInfo__MV__WorldObject__WorldObjectType;
      EStack_50.monitor = (MonitorData *)0xffffffffffffffff;
      iStack_51 = iVar4;
      pSVar27 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_50,(MethodInfo *)0x0);
      pSVar27 = mscorlib.dll::System::String::String_Concat_5
                          (StringLiteral_WorldObjectType__,pSVar27,
                           StringLiteral__has_no_settings_dialogue_,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)pSVar27,(MethodInfo *)0x0);
    }
  }
  return;
}

