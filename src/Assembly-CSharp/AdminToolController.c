
/* MVPlayer GetPlayer(String) */

MVPlayer *
Assembly-CSharp.dll::AdminToolController::AdminToolController_GetPlayer
          (String *userName,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
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
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (pMVar3 = (pMVar2->fields).playerContainer, pMVar3 != (MVPlayerContainer *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__get_Values__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)
           (pMVar3->fields).players;
    if ((this != (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                  *)0x0) &&
       (pDVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                  TypeConverterRegistry+ConverterKey,System::Object]::
                  Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Values
                            (this,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__get_Values__
                            ),
       pDVar4 !=
       (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
        *)0x0)) {
      pDStack_5 = (pDVar4->fields)._dictionary;
      ppDStack_6 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                     **)0x0;
      uStack_7 = 0;
      if (iRam_? != 0) {
        uVar8 = (uint)((ulonglong)&pDStack_9 >> 0xc);
        puVar10 = (ulonglong *)((ulonglong)((uVar8 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar11 = *puVar10;
          LOCK();
          uVar12 = *puVar10;
          if (uVar11 == uVar12) {
            *puVar10 = uVar11 | 1L << (uVar8 & 0x3f);
          }
          UNLOCK();
        } while (uVar11 != uVar12);
      }
      if (pDStack_5 ==
          (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)
          0x0) {
        pDStack_9 = pDStack_5;
        FUN_?();
        pcVar13 = (code *)swi(3);
        pMVar14 = (MVPlayer *)(*pcVar13)();
        return pMVar14;
      }
      ppDStack_6 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                     **)((ulonglong)(uint)(pDStack_5->fields)._version << 0x20);
      uStack_7 = 0;
      uStack_15 = (ulonglong)ppDStack_6;
      pMStack_16 = (MVPlayer *)0x0;
      pDStack_9 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                    *)0x0;
      ppDStack_6 = &pDStack_5;
      while (pDStack_5 !=
             (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
              *)0x0) {
        if (uStack_15._4_4_ != (pDStack_5->fields)._version) goto code_?;
        uVar12 = uStack_15 & 0xffffffff;
        do {
          if (pDStack_5 ==
              (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
               *)0x0) goto code_?;
          uVar8 = (uint)uVar12;
          if ((uint)(pDStack_5->fields)._count <= uVar8) {
            return (MVPlayer *)0x0;
          }
          pDVar17 = (pDStack_5->fields)._entries;
          uVar12 = (ulonglong)(uVar8 + 1);
          uStack_15 = CONCAT44(uStack_15._4_4_,uVar8 + 1);
          if (pDVar17 == (Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
                         *)0x0) goto code_?;
          if ((uint)pDVar17->max_length <= uVar8) goto code_?;
        } while ((&pDVar17->vector[0].hashCode)[(longlong)(int)uVar8 * 6] < 0);
        pMStack_16 = *(MVPlayer **)
                      ((longlong)&pDVar17->vector[0].key + (longlong)(int)uVar8 * 0x18 + 8);
        func_?();
        pMVar14 = pMStack_16;
        if (pMStack_16 == (MVPlayer *)0x0) goto code_?;
        pUVar18 = (pMStack_16->fields)._UserProfileData_k__BackingField;
        if (pUVar18 == (UserProfileData *)0x0) goto code_?;
        pSVar19 = (pUVar18->fields).UserName;
        if ((pSVar19 == userName) ||
           (((pSVar19 != (String *)0x0 && (userName != (String *)0x0)) &&
            (((pSVar19->fields)._stringLength == (userName->fields)._stringLength &&
             (bVar20 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                 ((uint8_t *)&(pSVar19->fields)._firstChar,
                                  (uint8_t *)&(userName->fields)._firstChar,
                                  (longlong)(pSVar19->fields)._stringLength * 2,(MethodInfo *)0x0),
             bVar20 != 0)))))) {
          return pMVar14;
        }
      }
      goto code_?;
    }
  }
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  mscorlib.dll::System::ThrowHelper::
  ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion((MethodInfo *)0x0)
  ;
code_?:
  FUN_?();
  FUN_?();
  pcVar13 = (code *)swi(3);
  pMVar14 = (MVPlayer *)(*pcVar13)();
  return pMVar14;
}


/* Void Initialize(String) */

void Assembly-CSharp.dll::AdminToolController::AdminToolController_Initialize
               (AdminToolController *this,String *playerNameString,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__AdminToolController__OnDefaultBanDropdownChanged_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<int>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UnityEngine__Events__UnityEvent<int>__AddListener_UnityEngine__Events__UnityAction<int>_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).playerName;
  if (pTVar1 != (Text *)0x0) {
    (*(pTVar1->klass->vtable).set_text.methodPtr)
              (pTVar1,playerNameString,(pTVar1->klass->vtable).set_text.method);
    pDVar2 = (this->fields).presetBansDropdown;
    if (pDVar2 != (Dropdown *)0x0) {
      pDVar3 = (pDVar2->fields).m_OnValueChanged;
      uVar4 = FUN_?(TypeInfo__UnityEngine__Events__UnityAction<int>);
      FUN_?(uVar4,this,MethodInfo__AdminToolController__OnDefaultBanDropdownChanged_int_);
      if (pDVar3 != (Dropdown_DropdownEvent *)0x0) {
        FUN_?(pDVar3);
        this_00 = (this->fields).ownerKickButton;
        if (this_00 != (Button *)0x0) {
          this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)this_00,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pGVar5 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
          if (pGVar5 != (GameSessionData *)0x0) {
            if ((pGVar5->fields).gameMode == 0) {
              value_00 = true;
            }
            else {
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__MVGameControllerBase);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pGVar5 = TypeInfo__MVGameControllerBase->static_fields->
                       _GameSessionData_k__BackingField;
              if (pGVar5 == (GameSessionData *)0x0) goto code_?;
              value_00 = (pGVar5->fields).gameMode == 4;
            }
            if (this_01 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (this_01,value_00,(MethodInfo *)0x0);
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__AdminToolController,0,0);
                LOCK();
                UNLOCK();
                FUN_?(&
                              MethodInfo__System__Collections__Generic__Dictionary<System::String,_AdminToolController::DefaultBan>__get_Item_System__String_
                             );
                LOCK();
                UNLOCK();
                FUN_?(&
                              MethodInfo__System__Collections__Generic__List<UnityEngine::UI::Dropdown::OptionData>__get_Count__
                             );
                LOCK();
                UNLOCK();
                FUN_?();
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pDVar2 = (this->fields).presetBansDropdown;
              if (((pDVar2 != (Dropdown *)0x0) &&
                  (pDVar6 = (pDVar2->fields).m_Options, pDVar6 != (Dropdown_OptionDataList *)0x0))
                 && (pLVar7 = (pDVar6->fields).m_Options,
                    pLVar7 != (List_1_UnityEngine_UI_Dropdown_OptionData_ *)0x0)) {
                if ((pLVar7->fields)._size == 0) {
code_?:
                  mscorlib.dll::System::ThrowHelper::
                  ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                pDVar9 = (pLVar7->fields)._items;
                if (pDVar9 != (Dropdown_OptionData__Array *)0x0) {
                  if ((int)pDVar9->max_length == 0) {
code_?:
                    FUN_?();
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  if (pDVar9->vector[0] != (Dropdown_OptionData *)0x0) {
                    pSVar10 = (pDVar9->vector[0]->fields).m_Text;
                    pIVar11 = (this->fields).reason;
                    if (*(int *)&(TypeInfo__AdminToolController->_1).field_0x1c == 0) {
                      FUN_?(TypeInfo__AdminToolController);
                    }
                    pDVar12 = TypeInfo__AdminToolController->static_fields->defaultBanLookup;
                    if (pDVar12 != (Dictionary_2_System_String_AdminToolController_DefaultBan_ *)0x0
                       ) {
                      uVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                               Object,AdminToolController+DefaultBan]::
                               Dictionary_2_System_Object_AdminToolController_DefaultBan__FindEntry
                                         ((Dictionary_2_System_Object_AdminToolController_DefaultBan_
                                           *)pDVar12,(Object *)pSVar10,
                                          MethodInfo__System__Collections__Generic__Dictionary<System::String,_AdminToolController::DefaultBan>__get_Item_System__String_
                                          ->klass->rgctx_data[0x21].method);
                      if ((int)uVar13 < 0) {
                        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowKeyNotFoundException
                                  ((Object *)pSVar10,(MethodInfo *)0x0);
                        pcVar8 = (code *)swi(3);
                        (*pcVar8)();
                        return;
                      }
                      pDVar14 = (pDVar12->fields)._entries;
                      if (pDVar14 !=
                          (Dictionary_2_TKey_TValue_Entry_System_String_AdminToolController_DefaultBan___Array
                           *)0x0) {
                        if ((uint)pDVar14->max_length <= uVar13) goto code_?;
                        if (pIVar11 != (InputField *)0x0) {
                          UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_SetText
                                    (pIVar11,pDVar14->vector[(int)uVar13].value.BanReason,1,
                                     (MethodInfo *)0x0);
                          pIVar11 = (this->fields).duration;
                          pDVar12 = TypeInfo__AdminToolController->static_fields->defaultBanLookup;
                          if (pDVar12 !=
                              (Dictionary_2_System_String_AdminToolController_DefaultBan_ *)0x0) {
                            uVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System
                                     ::Object,AdminToolController+DefaultBan]::
                                     Dictionary_2_System_Object_AdminToolController_DefaultBan__FindEntry
                                               ((Dictionary_2_System_Object_AdminToolController_DefaultBan_
                                                 *)pDVar12,(Object *)pSVar10,
                                                MethodInfo__System__Collections__Generic__Dictionary<System::String,_AdminToolController::DefaultBan>__get_Item_System__String_
                                                ->klass->rgctx_data[0x21].method);
                            if ((int)uVar13 < 0) {
                              mscorlib.dll::System::ThrowHelper::
                              ThrowHelper_1_ThrowKeyNotFoundException
                                        ((Object *)pSVar10,(MethodInfo *)0x0);
                              pcVar8 = (code *)swi(3);
                              (*pcVar8)();
                              return;
                            }
                            pDVar14 = (pDVar12->fields)._entries;
                            if (pDVar14 !=
                                (Dictionary_2_TKey_TValue_Entry_System_String_AdminToolController_DefaultBan___Array
                                 *)0x0) {
                              if ((uint)pDVar14->max_length <= uVar13) goto code_?;
                              if (pIVar11 != (InputField *)0x0) {
                                UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_SetText
                                          (pIVar11,pDVar14->vector[(int)uVar13].value.BanDuration,1,
                                           (MethodInfo *)0x0);
                                pDVar12 = TypeInfo__AdminToolController->static_fields->
                                          defaultBanLookup;
                                if (pDVar12 !=
                                    (Dictionary_2_System_String_AdminToolController_DefaultBan_ *)
                                    0x0) {
                                  uVar13 = mscorlib.dll::System::Collections::Generic::
                                           Dictionary`2[System::
                                           Object,AdminToolController+DefaultBan]::
                                           Dictionary_2_System_Object_AdminToolController_DefaultBan__FindEntry
                                                     ((
                                                  Dictionary_2_System_Object_AdminToolController_DefaultBan_
                                                  *)pDVar12,(Object *)pSVar10,
                                                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_AdminToolController::DefaultBan>__get_Item_System__String_
                                                  ->klass->rgctx_data[0x21].method);
                                  if ((int)uVar13 < 0) {
                                    mscorlib.dll::System::ThrowHelper::
                                    ThrowHelper_1_ThrowKeyNotFoundException
                                              ((Object *)pSVar10,(MethodInfo *)0x0);
                                    pcVar8 = (code *)swi(3);
                                    (*pcVar8)();
                                    return;
                                  }
                                  pDVar14 = (pDVar12->fields)._entries;
                                  if (pDVar14 !=
                                      (Dictionary_2_TKey_TValue_Entry_System_String_AdminToolController_DefaultBan___Array
                                       *)0x0) {
                                    if ((uint)pDVar14->max_length <= uVar13)
                                    goto code_?;
                                    value = 0;
                                    pDVar2 = (this->fields).banDurationMultiplier;
                                    pSVar10 = pDVar14->vector[(int)uVar13].value.BanDurationFormat;
                                    if (pDVar2 != (Dropdown *)0x0) {
                                      lVar15 = 0x20;
                                      while ((pDVar6 = (pDVar2->fields).m_Options,
                                             pDVar6 != (Dropdown_OptionDataList *)0x0 &&
                                             (pLVar7 = (pDVar6->fields).m_Options,
                                             pLVar7 != (List_1_UnityEngine_UI_Dropdown_OptionData_ *
                                                       )0x0))) {
                                        if ((pLVar7->fields)._size <= (int)value) {
                                          return;
                                        }
                                        pDVar6 = (pDVar2->fields).m_Options;
                                        if ((pDVar6 == (Dropdown_OptionDataList *)0x0) ||
                                           (pLVar7 = (pDVar6->fields).m_Options,
                                           pLVar7 == (List_1_UnityEngine_UI_Dropdown_OptionData_ *)
                                                     0x0)) break;
                                        if ((uint)(pLVar7->fields)._size <= value)
                                        goto code_?;
                                        pDVar9 = (pLVar7->fields)._items;
                                        if (pDVar9 == (Dropdown_OptionData__Array *)0x0) break;
                                        if ((uint)pDVar9->max_length <= value)
                                        goto code_?;
                                        lVar16 = *(longlong *)
                                                  ((longlong)pDVar9->vector + lVar15 + -0x20);
                                        if (lVar16 == 0) break;
                                        pSVar17 = *(String **)(lVar16 + 0x10);
                                        if (pSVar17 == pSVar10) {
code_?:
                                          UnityEngine.UI.dll::UnityEngine::UI::Dropdown::
                                          Dropdown_Set(pDVar2,value,1,(MethodInfo *)0x0);
                                          return;
                                        }
                                        if (((pSVar17 == (String *)0x0) || (pSVar10 == (String *)0x0)
                                            ) || ((pSVar17->fields)._stringLength !=
                                                  (pSVar10->fields)._stringLength)) {
                                          value = value + 1;
                                          lVar15 = lVar15 + 8;
                                        }
                                        else {
                                          bVar18 = mscorlib.dll::System::SpanHelpers::
                                                   SpanHelpers_SequenceEqual
                                                             ((uint8_t *)
                                                              &(pSVar17->fields)._firstChar,
                                                              (uint8_t *)
                                                              &(pSVar10->fields)._firstChar,
                                                              (longlong)
                                                              (pSVar17->fields)._stringLength * 2,
                                                              (MethodInfo *)0x0);
                                          if (bVar18 != 0) goto code_?;
                                          value = value + 1;
                                          lVar15 = lVar15 + 8;
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
              }
              FUN_?();
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Boolean IsBanFieldsValid() */

bool Assembly-CSharp.dll::AdminToolController::AdminToolController_IsBanFieldsValid
               (AdminToolController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).reason;
  aiStackX_8[0] = 0;
  if (pIVar1 == (InputField *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  pSVar4 = (pIVar1->fields).m_Text;
  if (pSVar4 != ::StringLiteral__) {
    if ((((pSVar4 != (String *)0x0) && (::StringLiteral__ != (String *)0x0)) &&
        ((pSVar4->fields)._stringLength == (::StringLiteral__->fields)._stringLength)) &&
       (bVar3 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                          ((uint8_t *)&(pSVar4->fields)._firstChar,
                           (uint8_t *)&(::StringLiteral__->fields)._firstChar,
                           (longlong)(pSVar4->fields)._stringLength * 2,(MethodInfo *)0x0),
       bVar3 != 0)) {
      return 0;
    }
    pIVar1 = (this->fields).duration;
    if (pIVar1 == (InputField *)0x0) goto code_?;
    pSVar4 = (pIVar1->fields).m_Text;
    if (cRam_? == '\0') {
      FUN_?();
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (pSVar4 != (String *)0x0) {
      if (cRam_? == '\0') {
        FUN_?();
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      RStack_5._pointer._value = &(pSVar4->fields)._firstChar;
      RStack_5._12_4_ = 0;
      RStack_5._length = (pSVar4->fields)._stringLength;
      info = mscorlib.dll::System::Globalization::NumberFormatInfo::NumberFormatInfo_get_CurrentInfo
                       ((MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
        FUN_?();
      }
      bVar3 = mscorlib.dll::System::Number::Number_TryParseInt32
                        (&RStack_5,NumberStyles__Enum_Integer,info,aiStackX_8,(MethodInfo *)0x0);
      if (bVar3 != 0) {
        return 1;
      }
    }
  }
  return 0;
}


/* Void OnBanClicked() */

void Assembly-CSharp.dll::AdminToolController::AdminToolController_OnBanClicked
               (AdminToolController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AdminToolController);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                 );
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
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::UI::Dropdown::OptionData>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__String);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AdminToolController____c___OnBanClicked_b__9_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AdminToolController____c___OnBanClicked_b__9_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AdminToolController____c);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Expel);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral___);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Banning_);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__for__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Invalid_admin_fields__Specify_re);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Player_non_existant_in_game);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).playerName;
  if (pTVar1 == (Text *)0x0) goto code_?;
  pSVar2 = (String *)(*(pTVar1->klass->vtable).get_text.methodPtr)();
  if (*(int *)&(TypeInfo__AdminToolController->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar3 = AdminToolController_GetPlayer(pSVar2,(MethodInfo *)0x0);
  if (pMVar3 == (MVPlayer *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
              ((Object *)StringLiteral_Player_non_existant_in_game,(MethodInfo *)0x0);
    return;
  }
  pDVar4 = (this->fields).banDurationMultiplier;
  if ((pDVar4 == (Dropdown *)0x0) ||
     (pDVar5 = (pDVar4->fields).m_Options, pDVar5 == (Dropdown_OptionDataList *)0x0))
  goto code_?;
  pLVar6 = (pDVar5->fields).m_Options;
  if (pLVar6 == (List_1_UnityEngine_UI_Dropdown_OptionData_ *)0x0) goto code_?;
  uVar7 = (((this->fields).banDurationMultiplier)->fields).m_Value;
  if ((uint)(pLVar6->fields)._size <= uVar7) goto code_?;
  pDVar8 = (pLVar6->fields)._items;
  if (pDVar8 == (Dropdown_OptionData__Array *)0x0) goto code_?;
  if ((uint)pDVar8->max_length <= uVar7) goto code_?;
  if (pDVar8->vector[(int)uVar7] == (Dropdown_OptionData *)0x0) goto code_?;
  pSVar2 = (pDVar8->vector[(int)uVar7]->fields).m_Text;
  if ((pSVar2 == StringLiteral_Expel) ||
     ((((pSVar2 != (String *)0x0 && (StringLiteral_Expel != (String *)0x0)) &&
       ((pSVar2->fields)._stringLength == (StringLiteral_Expel->fields)._stringLength)) &&
      (bVar9 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                          ((uint8_t *)&(pSVar2->fields)._firstChar,
                           (uint8_t *)&(StringLiteral_Expel->fields)._firstChar,
                           (longlong)(pSVar2->fields)._stringLength * 2,(MethodInfo *)0x0),
      bVar9 != 0)))) {
    pMVar10 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (((pMVar10 == (MVNetworkGame *)0x0) ||
        (pIVar11 = (this->fields).reason, pIVar11 == (InputField *)0x0)) ||
       (pMVar12 = (pMVar10->fields).operationRequests,
       pMVar12 == (MVNetworkGame_OperationRequests *)0x0)) goto code_?;
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_AdminOperation
              (pMVar12,2,0,(pMVar3->fields)._ProfileID_k__BackingField,(pIVar11->fields).m_Text,
               (MethodInfo *)0x0);
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__AdminToolController____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__AdminToolController____c);
    }
    this_01 = TypeInfo__AdminToolController____c->static_fields->__9__9_0;
    if (this_01 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      if (*(int *)&(TypeInfo__AdminToolController____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__AdminToolController____c);
      }
      pAVar13 = TypeInfo__AdminToolController____c->static_fields->__9;
      this_01 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)pAVar13,
                 MethodInfo__AdminToolController____c___OnBanClicked_b__9_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__AdminToolController____c->static_fields->__9__9_0 = this_01;
      ppEVar14 = &TypeInfo__AdminToolController____c->static_fields->__9__9_0;
code_?:
      func_?(ppEVar14);
    }
code_?:
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_01,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&::StringLiteral__);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pIVar11 = (this->fields).reason;
    aIStackX_8[0].m_value = 0;
    if (pIVar11 == (InputField *)0x0) {
code_?:
      FUN_?();
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
    pSVar2 = (pIVar11->fields).m_Text;
    if ((pSVar2 != ::StringLiteral__) &&
       (((pSVar2 == (String *)0x0 || (::StringLiteral__ == (String *)0x0)) ||
        (((pSVar2->fields)._stringLength != (::StringLiteral__->fields)._stringLength ||
         (bVar9 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                             ((uint8_t *)&(pSVar2->fields)._firstChar,
                              (uint8_t *)&(::StringLiteral__->fields)._firstChar,
                              (longlong)(pSVar2->fields)._stringLength * 2,(MethodInfo *)0x0),
         bVar9 == 0)))))) {
      pIVar11 = (this->fields).duration;
      if (pIVar11 == (InputField *)0x0) goto code_?;
      pSVar2 = (pIVar11->fields).m_Text;
      if (cRam_? == '\0') {
        FUN_?();
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pSVar2 != (String *)0x0) {
        if (cRam_? == '\0') {
          FUN_?();
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        RStack_16._pointer._value = &(pSVar2->fields)._firstChar;
        RStack_16._12_4_ = 0;
        RStack_16._length = (pSVar2->fields)._stringLength;
        info = mscorlib.dll::System::Globalization::NumberFormatInfo::
               NumberFormatInfo_get_CurrentInfo((MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
          FUN_?();
        }
        bVar9 = mscorlib.dll::System::Number::Number_TryParseInt32
                           (&RStack_16,NumberStyles__Enum_Integer,info,&aIStackX_8[0].m_value,
                            (MethodInfo *)0x0);
        if (bVar9 != 0) {
          pIVar11 = (this->fields).duration;
          if (pIVar11 == (InputField *)0x0) goto code_?;
          iVar17 = mscorlib.dll::System::Int32::Int32_Parse
                             ((pIVar11->fields).m_Text,(MethodInfo *)0x0);
          aIStackX_8[0].m_value = iVar17;
          if (*(int *)&(TypeInfo__AdminToolController->_1).field_0x1c == 0) {
            FUN_?();
          }
          pDVar4 = (this->fields).banDurationMultiplier;
          this_00 = TypeInfo__AdminToolController->static_fields->durationMultiplier;
          if ((pDVar4 == (Dropdown *)0x0) ||
             (pDVar5 = (pDVar4->fields).m_Options, pDVar5 == (Dropdown_OptionDataList *)0x0))
          goto code_?;
          pLVar6 = (pDVar5->fields).m_Options;
          if (pLVar6 == (List_1_UnityEngine_UI_Dropdown_OptionData_ *)0x0)
          goto code_?;
          uVar7 = (((this->fields).banDurationMultiplier)->fields).m_Value;
          if ((uint)(pLVar6->fields)._size <= uVar7) {
code_?:
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                      ((MethodInfo *)0x0);
            pcVar15 = (code *)swi(3);
            (*pcVar15)();
            return;
          }
          pDVar8 = (pLVar6->fields)._items;
          if (pDVar8 == (Dropdown_OptionData__Array *)0x0) goto code_?;
          if ((uint)pDVar8->max_length <= uVar7) {
code_?:
            FUN_?();
            pcVar15 = (code *)swi(3);
            (*pcVar15)();
            return;
          }
          if ((pDVar8->vector[(int)uVar7] == (Dropdown_OptionData *)0x0) ||
             (this_00 == (Dictionary_2_System_String_System_Int32_ *)0x0))
          goto code_?;
          IVar18 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                   Int32Enum]::Dictionary_2_System_Object_System_Int32Enum__get_Item
                             ((Dictionary_2_System_Object_System_Int32Enum_ *)this_00,
                              (Object *)(pDVar8->vector[(int)uVar7]->fields).m_Text,
                              MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                             );
          values = (String__Array *)FUN_?(TypeInfo__System__String,8);
          if (values == (String__Array *)0x0) goto code_?;
          FUN_?(values,0,StringLiteral_Banning_);
          pTVar1 = (this->fields).playerName;
          if (pTVar1 == (Text *)0x0) goto code_?;
          uVar19 = (*(pTVar1->klass->vtable).get_text.methodPtr)
                             (pTVar1,(pTVar1->klass->vtable).get_text.method);
          FUN_?(values,1,uVar19);
          FUN_?(values,2,::StringLiteral___);
          pSVar2 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_8,(MethodInfo *)0x0);
          FUN_?(values,3,pSVar2);
          FUN_?(values,4,::StringLiteral__);
          pDVar4 = (this->fields).banDurationMultiplier;
          if ((pDVar4 == (Dropdown *)0x0) ||
             (pDVar5 = (pDVar4->fields).m_Options, pDVar5 == (Dropdown_OptionDataList *)0x0))
          goto code_?;
          pLVar6 = (pDVar5->fields).m_Options;
          if (pLVar6 == (List_1_UnityEngine_UI_Dropdown_OptionData_ *)0x0)
          goto code_?;
          uVar7 = (((this->fields).banDurationMultiplier)->fields).m_Value;
          if ((uint)(pLVar6->fields)._size <= uVar7) goto code_?;
          pDVar8 = (pLVar6->fields)._items;
          if (pDVar8 == (Dropdown_OptionData__Array *)0x0) goto code_?;
          if ((uint)pDVar8->max_length <= uVar7) goto code_?;
          if (pDVar8->vector[(int)uVar7] == (Dropdown_OptionData *)0x0) goto code_?;
          FUN_?(values,5,(pDVar8->vector[(int)uVar7]->fields).m_Text);
          FUN_?(values,6,StringLiteral__for__);
          pIVar11 = (this->fields).reason;
          if (pIVar11 == (InputField *)0x0) goto code_?;
          FUN_?(values,7,(pIVar11->fields).m_Text);
          pSVar2 = mscorlib.dll::System::String::String_Concat_7(values,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                    ((Object *)pSVar2,(MethodInfo *)0x0);
          pMVar10 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (((pMVar10 == (MVNetworkGame *)0x0) ||
              (pIVar11 = (this->fields).reason, pIVar11 == (InputField *)0x0)) ||
             (pMVar12 = (pMVar10->fields).operationRequests,
             pMVar12 == (MVNetworkGame_OperationRequests *)0x0)) goto code_?;
          MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_AdminOperation
                    (pMVar12,1,IVar18 * iVar17,(pMVar3->fields)._ProfileID_k__BackingField,
                     (pIVar11->fields).m_Text,(MethodInfo *)0x0);
          root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__AdminToolController____c->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__AdminToolController____c);
          }
          this_01 = TypeInfo__AdminToolController____c->static_fields->__9__9_1;
          if (this_01 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
            if (*(int *)&(TypeInfo__AdminToolController____c->_1).field_0x1c == 0) {
              FUN_?(TypeInfo__AdminToolController____c);
            }
            pAVar13 = TypeInfo__AdminToolController____c->static_fields->__9;
            this_01 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                      FUN_?(
                                   TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                   );
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
            Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                      ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)pAVar13,
                       MethodInfo__AdminToolController____c___OnBanClicked_b__9_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            TypeInfo__AdminToolController____c->static_fields->__9__9_1 = this_01;
            ppEVar14 = &TypeInfo__AdminToolController____c->static_fields->__9__9_1;
            goto code_?;
          }
          goto code_?;
        }
      }
    }
    pIVar11 = (this->fields).duration;
    if ((pIVar11 == (InputField *)0x0) ||
       (pIVar20 = (this->fields).reason, pIVar20 == (InputField *)0x0)) {
code_?:
      FUN_?();
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
    pSVar2 = mscorlib.dll::System::String::String_Concat_5
                        ((pIVar11->fields).m_Text,::StringLiteral__,(pIVar20->fields).m_Text,
                         (MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar2,(MethodInfo *)0x0)
    ;
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_Invalid_admin_fields__Specify_re,(MethodInfo *)0x0);
  }
  return;
}


/* Void OnDefaultBanDropdownChanged(Int32) */

void Assembly-CSharp.dll::AdminToolController::AdminToolController_OnDefaultBanDropdownChanged
               (AdminToolController *this,int32_t option,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AdminToolController);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_AdminToolController::DefaultBan>__get_Item_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::UI::Dropdown::OptionData>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).presetBansDropdown;
  if (((pDVar1 != (Dropdown *)0x0) &&
      (pDVar2 = (pDVar1->fields).m_Options, pDVar2 != (Dropdown_OptionDataList *)0x0)) &&
     (pLVar3 = (pDVar2->fields).m_Options,
     pLVar3 != (List_1_UnityEngine_UI_Dropdown_OptionData_ *)0x0)) {
    if ((uint)(pLVar3->fields)._size <= (uint)option) {
code_?:
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pDVar5 = (pLVar3->fields)._items;
    if (pDVar5 != (Dropdown_OptionData__Array *)0x0) {
      if ((uint)pDVar5->max_length <= (uint)option) {
code_?:
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (pDVar5->vector[option] != (Dropdown_OptionData *)0x0) {
        pSVar6 = (pDVar5->vector[option]->fields).m_Text;
        pIVar7 = (this->fields).reason;
        if (*(int *)&(TypeInfo__AdminToolController->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__AdminToolController);
        }
        pDVar8 = TypeInfo__AdminToolController->static_fields->defaultBanLookup;
        if (pDVar8 != (Dictionary_2_System_String_AdminToolController_DefaultBan_ *)0x0) {
          uVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                   Object,AdminToolController+DefaultBan]::
                   Dictionary_2_System_Object_AdminToolController_DefaultBan__FindEntry
                             ((Dictionary_2_System_Object_AdminToolController_DefaultBan_ *)pDVar8,
                              (Object *)pSVar6,
                              MethodInfo__System__Collections__Generic__Dictionary<System::String,_AdminToolController::DefaultBan>__get_Item_System__String_
                              ->klass->rgctx_data[0x21].method);
          if ((int)uVar9 < 0) {
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowKeyNotFoundException
                      ((Object *)pSVar6,(MethodInfo *)0x0);
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pDVar10 = (pDVar8->fields)._entries;
          if (pDVar10 != (Dictionary_2_TKey_TValue_Entry_System_String_AdminToolController_DefaultBan___Array
                         *)0x0) {
            if ((uint)pDVar10->max_length <= uVar9) goto code_?;
            if (pIVar7 != (InputField *)0x0) {
              UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_SetText
                        (pIVar7,pDVar10->vector[(int)uVar9].value.BanReason,1,(MethodInfo *)0x0);
              pIVar7 = (this->fields).duration;
              pDVar8 = TypeInfo__AdminToolController->static_fields->defaultBanLookup;
              if (pDVar8 != (Dictionary_2_System_String_AdminToolController_DefaultBan_ *)0x0) {
                uVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Object,AdminToolController+DefaultBan]::
                         Dictionary_2_System_Object_AdminToolController_DefaultBan__FindEntry
                                   ((Dictionary_2_System_Object_AdminToolController_DefaultBan_ *)
                                    pDVar8,(Object *)pSVar6,
                                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_AdminToolController::DefaultBan>__get_Item_System__String_
                                    ->klass->rgctx_data[0x21].method);
                if ((int)uVar9 < 0) {
                  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowKeyNotFoundException
                            ((Object *)pSVar6,(MethodInfo *)0x0);
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                pDVar10 = (pDVar8->fields)._entries;
                if (pDVar10 != (Dictionary_2_TKey_TValue_Entry_System_String_AdminToolController_DefaultBan___Array
                               *)0x0) {
                  if ((uint)pDVar10->max_length <= uVar9) goto code_?;
                  if (pIVar7 != (InputField *)0x0) {
                    UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_SetText
                              (pIVar7,pDVar10->vector[(int)uVar9].value.BanDuration,1,
                               (MethodInfo *)0x0);
                    pDVar8 = TypeInfo__AdminToolController->static_fields->defaultBanLookup;
                    if (pDVar8 != (Dictionary_2_System_String_AdminToolController_DefaultBan_ *)0x0)
                    {
                      uVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                               Object,AdminToolController+DefaultBan]::
                               Dictionary_2_System_Object_AdminToolController_DefaultBan__FindEntry
                                         ((Dictionary_2_System_Object_AdminToolController_DefaultBan_
                                           *)pDVar8,(Object *)pSVar6,
                                          MethodInfo__System__Collections__Generic__Dictionary<System::String,_AdminToolController::DefaultBan>__get_Item_System__String_
                                          ->klass->rgctx_data[0x21].method);
                      if ((int)uVar9 < 0) {
                        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowKeyNotFoundException
                                  ((Object *)pSVar6,(MethodInfo *)0x0);
                        pcVar4 = (code *)swi(3);
                        (*pcVar4)();
                        return;
                      }
                      pDVar10 = (pDVar8->fields)._entries;
                      if (pDVar10 != (Dictionary_2_TKey_TValue_Entry_System_String_AdminToolController_DefaultBan___Array
                                     *)0x0) {
                        if ((uint)pDVar10->max_length <= uVar9) goto code_?;
                        value = 0;
                        pDVar1 = (this->fields).banDurationMultiplier;
                        pSVar6 = pDVar10->vector[(int)uVar9].value.BanDurationFormat;
                        if (pDVar1 != (Dropdown *)0x0) {
                          lVar11 = 0x20;
                          while ((pDVar2 = (pDVar1->fields).m_Options,
                                 pDVar2 != (Dropdown_OptionDataList *)0x0 &&
                                 (pLVar3 = (pDVar2->fields).m_Options,
                                 pLVar3 != (List_1_UnityEngine_UI_Dropdown_OptionData_ *)0x0))) {
                            if ((pLVar3->fields)._size <= (int)value) {
                              return;
                            }
                            pDVar2 = (pDVar1->fields).m_Options;
                            if ((pDVar2 == (Dropdown_OptionDataList *)0x0) ||
                               (pLVar3 = (pDVar2->fields).m_Options,
                               pLVar3 == (List_1_UnityEngine_UI_Dropdown_OptionData_ *)0x0)) break;
                            if ((uint)(pLVar3->fields)._size <= value) goto code_?;
                            pDVar5 = (pLVar3->fields)._items;
                            if (pDVar5 == (Dropdown_OptionData__Array *)0x0) break;
                            if ((uint)pDVar5->max_length <= value) goto code_?;
                            lVar12 = *(longlong *)((longlong)pDVar5->vector + lVar11 + -0x20);
                            if (lVar12 == 0) break;
                            pSVar13 = *(String **)(lVar12 + 0x10);
                            if (pSVar13 == pSVar6) {
code_?:
                              UnityEngine.UI.dll::UnityEngine::UI::Dropdown::Dropdown_Set
                                        (pDVar1,value,1,(MethodInfo *)0x0);
                              return;
                            }
                            if (((pSVar13 == (String *)0x0) || (pSVar6 == (String *)0x0)) ||
                               ((pSVar13->fields)._stringLength != (pSVar6->fields)._stringLength))
                            {
                              value = value + 1;
                              lVar11 = lVar11 + 8;
                            }
                            else {
                              bVar14 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                                 ((uint8_t *)&(pSVar13->fields)._firstChar,
                                                  (uint8_t *)&(pSVar6->fields)._firstChar,
                                                  (longlong)(pSVar13->fields)._stringLength * 2,
                                                  (MethodInfo *)0x0);
                              if (bVar14 != 0) goto code_?;
                              value = value + 1;
                              lVar11 = lVar11 + 8;
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
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnKickClicked() */

void Assembly-CSharp.dll::AdminToolController::AdminToolController_OnKickClicked
               (AdminToolController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AdminToolController);
    LOCK();
    UNLOCK();
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
    FUN_?(&
                  MethodInfo__AdminToolController____c___OnKickClicked_b__10_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AdminToolController____c);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__kicked_by_admin_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Player_non_existant_in_game);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).playerName;
  if (pTVar1 != (Text *)0x0) {
    pSVar2 = (String *)(*(pTVar1->klass->vtable).get_text.methodPtr)();
    if (*(int *)&(TypeInfo__AdminToolController->_1).field_0x1c == 0) {
      FUN_?();
    }
    pMVar3 = AdminToolController_GetPlayer(pSVar2,(MethodInfo *)0x0);
    if (pMVar3 == (MVPlayer *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      pSVar2 = StringLiteral_Player_non_existant_in_game;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Debug,0);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__UnityEngine__ILogger);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Debug);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      pIVar4 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
      if (pIVar4 != (ILogger_1 *)0x0) {
        FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar4,2,pSVar2);
        return;
      }
      FUN_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pTVar1 = (this->fields).playerName;
    if (pTVar1 != (Text *)0x0) {
      pSVar2 = (String *)
                (*(pTVar1->klass->vtable).get_text.methodPtr)
                          (pTVar1,(pTVar1->klass->vtable).get_text.method);
      pSVar2 = mscorlib.dll::System::String::String_Concat_4
                          (pSVar2,StringLiteral__kicked_by_admin_,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)pSVar2,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if ((((pMVar6 != (MVGameControllerBase *)0x0) &&
           (pMVar7 = (pMVar6->fields).game, pMVar7 != (MVNetworkGame *)0x0)) &&
          (pIVar8 = (this->fields).reason, pIVar8 != (InputField *)0x0)) &&
         (this_00 = (pMVar7->fields).operationRequests,
         this_00 != (MVNetworkGame_OperationRequests *)0x0)) {
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_AdminOperation
                  (this_00,0,0,(pMVar3->fields)._ProfileID_k__BackingField,(pIVar8->fields).m_Text,
                   (MethodInfo *)0x0);
        pGVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__AdminToolController____c->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__AdminToolController____c);
        }
        this_02 = TypeInfo__AdminToolController____c->static_fields->__9__10_0;
        if (this_02 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
          if (*(int *)&(TypeInfo__AdminToolController____c->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__AdminToolController____c);
          }
          object = TypeInfo__AdminToolController____c->static_fields->__9;
          this_02 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                    FUN_?(
                                 TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                 );
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
          Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                    ((ExecuteEvents_EventFunction_1_System_Object_ *)this_02,(Object *)object,
                     MethodInfo__AdminToolController____c___OnKickClicked_b__10_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          TypeInfo__AdminToolController____c->static_fields->__9__10_0 = this_02;
          if (iRam_? != 0) {
            uVar10 = (uint)((ulonglong)&TypeInfo__AdminToolController____c->static_fields->__9__10_0
                           >> 0xc);
            puVar11 = (ulonglong *)((ulonglong)((uVar10 & 0x1fffff) >> 6) * 8 + 0xADDR);
            do {
              uVar12 = *puVar11;
              LOCK();
              uVar13 = *puVar11;
              if (uVar12 == uVar13) {
                *puVar11 = uVar12 | 1L << (uVar10 & 0x3f);
              }
              UNLOCK();
            } while (uVar12 != uVar13);
          }
        }
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pMVar14 = 
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
          if ((pMVar14->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
            FUN_?(pMVar14);
          }
        }
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
                  (pGVar9,(IList_1_UnityEngine_Transform_ *)
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                           s_InternalTransformList,(MethodInfo *)0x0);
        pLVar15 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar15 != (List_1_UnityEngine_Transform_ *)0x0) {
          lVar16 = (longlong)(pLVar15->fields)._size;
          uVar10 = 0;
          if (0 < lVar16) {
            lVar17 = 0;
            lVar18 = 0x20;
            do {
              if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0)
              {
                FUN_?();
              }
              pLVar15 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                       s_InternalTransformList;
              if (pLVar15 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
              if ((uint)(pLVar15->fields)._size <= uVar10) {
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              pTVar19 = (pLVar15->fields)._items;
              if (pTVar19 == (Transform__Array *)0x0) goto code_?;
              if ((uint)pTVar19->max_length <= uVar10) {
                FUN_?();
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              this_01 = *(Component **)((longlong)pTVar19->vector + lVar18 + -0x20);
              if (this_01 == (Component *)0x0) goto code_?;
              pGVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  (this_01,(MethodInfo *)0x0);
              bVar20 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                       ExecuteEvents_Execute_18
                                 (pGVar9,(BaseEventData *)0x0,
                                  (ExecuteEvents_EventFunction_1_System_Object_ *)this_02,
                                  (pMVar14->field7_0x38).rgctx_data[1].method);
              if (bVar20 != 0) {
                UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          (this_01,(MethodInfo *)0x0);
                return;
              }
              uVar10 = uVar10 + 1;
              lVar17 = lVar17 + 1;
              lVar18 = lVar18 + 8;
            } while (lVar17 < lVar16);
          }
          return;
        }
code_?:
        FUN_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnRevokeEditRightsClicked() */

void Assembly-CSharp.dll::AdminToolController::AdminToolController_OnRevokeEditRightsClicked
               (AdminToolController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AdminToolController);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Player_is_not_present_in_session);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).playerName;
  if (pTVar1 == (Text *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pSVar3 = (String *)(*(pTVar1->klass->vtable).get_text.methodPtr)();
  if (*(int *)&(TypeInfo__AdminToolController->_1).field_0x1c == 0) {
    FUN_?();
  }
  target = AdminToolController_GetPlayer(pSVar3,(MethodInfo *)0x0);
  if (target == (MVPlayer *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    pSVar3 = StringLiteral_Player_is_not_present_in_session;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug,0);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UnityEngine__ILogger);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    pIVar4 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
    if (pIVar4 != (ILogger_1 *)0x0) {
      FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar4,2,pSVar3);
      return;
    }
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
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
                  MethodInfo__OwnerOps____c___RevokeEditRightsAndKick_b__1_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__OwnerOps____c);
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
  pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar6 == (MVGameControllerBase *)0x0) ||
      (pMVar7 = (pMVar6->fields).game, pMVar7 == (MVNetworkGame *)0x0)) ||
     (this_00 = (pMVar7->fields).operationRequests,
     this_00 == (MVNetworkGame_OperationRequests *)0x0)) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_RevokeEditRights
            (this_00,target,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__OwnerOps____c->_1).field_0x1c == 0) {
    FUN_?();
  }
  this_02 = TypeInfo__OwnerOps____c->static_fields->__9__1_0;
  if (this_02 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if (*(int *)&(TypeInfo__OwnerOps____c->_1).field_0x1c == 0) {
      FUN_?();
    }
    object = TypeInfo__OwnerOps____c->static_fields->__9;
    this_02 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_02,(Object *)object,
               MethodInfo__OwnerOps____c___RevokeEditRightsAndKick_b__1_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__OwnerOps____c->static_fields->__9__1_0 = this_02;
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)&TypeInfo__OwnerOps____c->static_fields->__9__1_0 >> 0xc);
      puVar9 = (ulonglong *)((ulonglong)((uVar8 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar10 = *puVar9;
        LOCK();
        uVar11 = *puVar9;
        if (uVar10 == uVar11) {
          *puVar9 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (uVar10 != uVar11);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar12 = 
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
    if ((pMVar12->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar12);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
            (pGVar5,(IList_1_UnityEngine_Transform_ *)
                     TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                     s_InternalTransformList,(MethodInfo *)0x0);
  pLVar13 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
           s_InternalTransformList;
  if (pLVar13 != (List_1_UnityEngine_Transform_ *)0x0) {
    lVar14 = (longlong)(pLVar13->fields)._size;
    uVar8 = 0;
    if (0 < lVar14) {
      lVar15 = 0;
      lVar16 = 0x20;
      do {
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pLVar13 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar13 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
        if ((uint)(pLVar13->fields)._size <= uVar8) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pTVar17 = (pLVar13->fields)._items;
        if (pTVar17 == (Transform__Array *)0x0) goto code_?;
        if ((uint)pTVar17->max_length <= uVar8) {
          FUN_?();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        this_01 = *(Component **)((longlong)pTVar17->vector + lVar16 + -0x20);
        if (this_01 == (Component *)0x0) goto code_?;
        pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            (this_01,(MethodInfo *)0x0);
        bVar18 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                 ExecuteEvents_Execute_18
                           (pGVar5,(BaseEventData *)0x0,
                            (ExecuteEvents_EventFunction_1_System_Object_ *)this_02,
                            (pMVar12->field7_0x38).rgctx_data[1].method);
        if (bVar18 != 0) {
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    (this_01,(MethodInfo *)0x0);
          return;
        }
        uVar8 = uVar8 + 1;
        lVar15 = lVar15 + 1;
        lVar16 = lVar16 + 8;
      } while (lVar15 < lVar14);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* AdminToolController() */

void Assembly-CSharp.dll::AdminToolController::AdminToolController__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AdminToolController);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Add_System__String__int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_AdminToolController::DefaultBan>__Add_System__String__AdminToolController__DefaultBan_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_AdminToolController::DefaultBan>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::String,_AdminToolController::DefaultBan>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<System::String,_int>);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Hours);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__2);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_You_are_banned_for_inappropriate);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Weeks);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Admin_impersonation);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_You_are_banned_for_pretending_to);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_You_are_banned_for_sexual_behavi);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__7);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Abusive_chat);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Sexual_behavior);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Days);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Cheating);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_You_are_banned_for_cheating_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__24);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
          *)FUN_?(TypeInfo__System__Collections__Generic__Dictionary<System::String,_int>);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (this,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Dictionary__
            );
  if (this != (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
               *)0x0) {
    uVar1 = CONCAT71((int7)((ulonglong)in_R9 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Int32]::
    Dictionary_2_System_Object_System_Int32__TryInsert
              ((Dictionary_2_System_Object_System_Int32_ *)this,(Object *)StringLiteral_Hours,1,
               (InsertionBehavior__Enum)uVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Add_System__String__int_
               ->klass->rgctx_data[0x22].method);
    uVar1 = CONCAT71((int7)((ulonglong)uVar1 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Int32]::
    Dictionary_2_System_Object_System_Int32__TryInsert
              ((Dictionary_2_System_Object_System_Int32_ *)this,(Object *)StringLiteral_Days,0x18,
               (InsertionBehavior__Enum)uVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Add_System__String__int_
               ->klass->rgctx_data[0x22].method);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Int32]::
    Dictionary_2_System_Object_System_Int32__TryInsert
              ((Dictionary_2_System_Object_System_Int32_ *)this,(Object *)StringLiteral_Weeks,0xa8,
               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar1 >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Add_System__String__int_
               ->klass->rgctx_data[0x22].method);
    TypeInfo__AdminToolController->static_fields->durationMultiplier =
         (Dictionary_2_System_String_System_Int32_ *)this;
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)TypeInfo__AdminToolController->static_fields >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar6 = uVar4 == *puVar5;
        if (bVar6) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
    this_00 = (Dictionary_2_System_String_AdminToolController_DefaultBan_ *)
              FUN_?(
                           TypeInfo__System__Collections__Generic__Dictionary<System::String,_AdminToolController::DefaultBan>
                           );
    pEVar7 = mscorlib.dll::System::Collections::Generic::EqualityComparer`1[System::Object]::
             EqualityComparer_1_System_Object__get_Default
                       (MethodInfo__System__Collections__Generic__Dictionary<System::String,_AdminToolController::DefaultBan>__Dictionary__
                        ->klass->rgctx_data->method->klass->rgctx_data[3].method);
    if ((pEVar7 != (EqualityComparer_1_System_Object_ *)0x0) &&
       (bVar6 = iRam_? != 0,
       (this_00->fields)._comparer = (IEqualityComparer_1_System_String_ *)0x0, bVar6)) {
      uVar2 = (uint)((ulonglong)&(this_00->fields)._comparer >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar6 = uVar4 == *puVar5;
        if (bVar6) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
    VStack_8.Item1 = (Object *)0x0;
    VStack_8.Item2 = (Object *)0x0;
    VStack_8.Item3 = (Object *)0x0;
    pSVar9 = StringLiteral_Days;
    mscorlib.dll::System::ValueTuple`3[Object,Object,Object]::
    ValueTuple_3_Object_Object_Object___ctor
              (&VStack_8,(Object *)StringLiteral_You_are_banned_for_cheating_,
               (Object *)StringLiteral__7,(Object *)StringLiteral_Days,(MethodInfo *)0x0);
    if (this_00 != (Dictionary_2_System_String_AdminToolController_DefaultBan_ *)0x0) {
      AStack_10.BanReason = (String *)VStack_8.Item1;
      AStack_10.BanDuration = (String *)VStack_8.Item2;
      AStack_10.BanDurationFormat = (String *)VStack_8.Item3;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
      Object,AdminToolController+DefaultBan]::
      Dictionary_2_System_Object_AdminToolController_DefaultBan__TryInsert
                ((Dictionary_2_System_Object_AdminToolController_DefaultBan_ *)this_00,
                 (Object *)StringLiteral_Cheating,&AStack_10,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pSVar9 >> 8),2),
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_AdminToolController::DefaultBan>__Add_System__String__AdminToolController__DefaultBan_
                 ->klass->rgctx_data[0x22].method);
      VStack_11.Item1 = (Object *)0x0;
      VStack_11.Item2 = (Object *)0x0;
      VStack_11.Item3 = (Object *)0x0;
      pSVar9 = StringLiteral_Hours;
      mscorlib.dll::System::ValueTuple`3[Object,Object,Object]::
      ValueTuple_3_Object_Object_Object___ctor
                (&VStack_11,(Object *)StringLiteral_You_are_banned_for_inappropriate,
                 (Object *)StringLiteral__24,(Object *)StringLiteral_Hours,(MethodInfo *)0x0);
      AStack_10.BanReason = (String *)VStack_11.Item1;
      AStack_10.BanDuration = (String *)VStack_11.Item2;
      AStack_10.BanDurationFormat = (String *)VStack_11.Item3;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
      Object,AdminToolController+DefaultBan]::
      Dictionary_2_System_Object_AdminToolController_DefaultBan__TryInsert
                ((Dictionary_2_System_Object_AdminToolController_DefaultBan_ *)this_00,
                 (Object *)StringLiteral_Abusive_chat,&AStack_10,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pSVar9 >> 8),2),
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_AdminToolController::DefaultBan>__Add_System__String__AdminToolController__DefaultBan_
                 ->klass->rgctx_data[0x22].method);
      VStack_12.Item1 = (Object *)0x0;
      VStack_12.Item2 = (Object *)0x0;
      VStack_12.Item3 = (Object *)0x0;
      pSVar9 = StringLiteral_Weeks;
      mscorlib.dll::System::ValueTuple`3[Object,Object,Object]::
      ValueTuple_3_Object_Object_Object___ctor
                (&VStack_12,(Object *)StringLiteral_You_are_banned_for_sexual_behavi,
                 (Object *)StringLiteral__2,(Object *)StringLiteral_Weeks,(MethodInfo *)0x0);
      AStack_10.BanReason = (String *)VStack_12.Item1;
      AStack_10.BanDuration = (String *)VStack_12.Item2;
      AStack_10.BanDurationFormat = (String *)VStack_12.Item3;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
      Object,AdminToolController+DefaultBan]::
      Dictionary_2_System_Object_AdminToolController_DefaultBan__TryInsert
                ((Dictionary_2_System_Object_AdminToolController_DefaultBan_ *)this_00,
                 (Object *)StringLiteral_Sexual_behavior,&AStack_10,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pSVar9 >> 8),2),
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_AdminToolController::DefaultBan>__Add_System__String__AdminToolController__DefaultBan_
                 ->klass->rgctx_data[0x22].method);
      VStack_13.Item1 = (Object *)0x0;
      VStack_13.Item2 = (Object *)0x0;
      VStack_13.Item3 = (Object *)0x0;
      pSVar9 = StringLiteral_Weeks;
      mscorlib.dll::System::ValueTuple`3[Object,Object,Object]::
      ValueTuple_3_Object_Object_Object___ctor
                (&VStack_13,(Object *)StringLiteral_You_are_banned_for_pretending_to,
                 (Object *)StringLiteral__2,(Object *)StringLiteral_Weeks,(MethodInfo *)0x0);
      AStack_10.BanReason = (String *)VStack_13.Item1;
      AStack_10.BanDuration = (String *)VStack_13.Item2;
      AStack_10.BanDurationFormat = (String *)VStack_13.Item3;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
      Object,AdminToolController+DefaultBan]::
      Dictionary_2_System_Object_AdminToolController_DefaultBan__TryInsert
                ((Dictionary_2_System_Object_AdminToolController_DefaultBan_ *)this_00,
                 (Object *)StringLiteral_Admin_impersonation,&AStack_10,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pSVar9 >> 8),2),
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_AdminToolController::DefaultBan>__Add_System__String__AdminToolController__DefaultBan_
                 ->klass->rgctx_data[0x22].method);
      TypeInfo__AdminToolController->static_fields->defaultBanLookup = this_00;
      if (iRam_? != 0) {
        uVar2 = (uint)((ulonglong)&TypeInfo__AdminToolController->static_fields->defaultBanLookup >>
                      0xc);
        uVar4 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
        do {
          uVar14 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
          puVar5 = (ulonglong *)(uVar4 * 8 + 0xADDR);
          LOCK();
          bVar6 = uVar14 == *puVar5;
          if (bVar6) {
            *puVar5 = uVar14 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (!bVar6);
      }
      return;
    }
  }
  FUN_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}

