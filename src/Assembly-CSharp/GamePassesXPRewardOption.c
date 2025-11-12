
/* Void Initialize(GamePassesXpRewardInfo, GamePassTier) */

void Assembly-CSharp.dll::GamePassesXPRewardOption::GamePassesXPRewardOption_Initialize
               (GamePassesXPRewardOption *this,GamePassesXpRewardInfo *rewardInfo,
               GamePassTier__Enum gpt,MethodInfo *method)

{
  (this->fields).gamePassTier = (uint8_t)gpt;
  pRVar1 = GamePassProgressionController::GamePassProgressionController_GetXPRewardRangeValidator
                     (gpt & 0xff,(MethodInfo *)0x0);
  if ((pRVar1 != (RangeValidator_1_System_Int32_ *)0x0) &&
     (pSVar2 = (this->fields).slider, pSVar2 != (Slider *)0x0)) {
    UnityEngine.UI.dll::UnityEngine::UI::Slider::Slider_set_minValue
              (pSVar2,(float)(pRVar1->fields).min,(MethodInfo *)0x0);
    pSVar2 = (this->fields).slider;
    if (pSVar2 != (Slider *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::Slider::Slider_set_maxValue
                (pSVar2,(float)(pRVar1->fields).max,(MethodInfo *)0x0);
      iVar3 = GamePassProgressionController::GamePassProgressionController_GetXPReward
                        (gpt & 0xff,(MethodInfo *)0x0);
      pSVar2 = (this->fields).slider;
      if (pSVar2 != (Slider *)0x0) {
        (*(pSVar2->klass->vtable).set_value.methodPtr)();
        this_00 = (this->fields).inputField;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__System__Number);
          LOCK();
          UNLOCK();
          FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->
             field_0x135 & 1) == 0) {
          FUN_?();
        }
        if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
          FUN_?();
        }
        aRStack_4[0]._pointer._value = (void *)0x0;
        aRStack_4[0]._length = 0;
        aRStack_4[0]._12_4_ = 0;
        pSVar5 = mscorlib.dll::System::Number::Number_FormatInt32
                           (iVar3,aRStack_4,(IFormatProvider *)0x0,(MethodInfo *)0x0);
        if (this_00 != (InputField *)0x0) {
          UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_SetText
                    (this_00,pSVar5,1,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__SubscriberRewardDataManager);
            LOCK();
            UNLOCK();
            FUN_?(&StringLiteral__XP_for_Elites);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__SubscriberRewardDataManager->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__SubscriberRewardDataManager);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__SubscriberRewardDataManager->_1).field_0x1c == 0) {
            FUN_?();
          }
          pTVar6 = (this->fields).bonusXPAmountText;
          iVar3 = FUN_?(((float)(TypeInfo__SubscriberRewardDataManager->static_fields->
                                        subscriberRewardData).baseXPBonus / _UNK_? +
                                _UNK_?) * (float)iVar3);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__System__Number);
            LOCK();
            UNLOCK();
            FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->
               field_0x135 & 1) == 0) {
            FUN_?();
          }
          if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
            FUN_?();
          }
          aRStack_4[0]._pointer._value = (void *)0x0;
          aRStack_4[0]._length = 0;
          aRStack_4[0]._12_4_ = 0;
          pSVar5 = mscorlib.dll::System::Number::Number_FormatInt32
                             (iVar3,aRStack_4,(IFormatProvider *)0x0,(MethodInfo *)0x0);
          pSVar5 = mscorlib.dll::System::String::String_Concat_4
                             (pSVar5,StringLiteral__XP_for_Elites,(MethodInfo *)0x0);
          if (pTVar6 != (Text *)0x0) {
            UNRECOVERED_JUMPTABLE = (pTVar6->klass->vtable).set_text.methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*UNRECOVERED_JUMPTABLE)
                      (pTVar6,pSVar5,(pTVar6->klass->vtable).set_text.method,UNRECOVERED_JUMPTABLE);
            return;
          }
          FUN_?();
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnInputFieldChange() */

void Assembly-CSharp.dll::GamePassesXPRewardOption::GamePassesXPRewardOption_OnInputFieldChange
               (GamePassesXPRewardOption *this,MethodInfo *method)

{
  pIVar1 = (this->fields).inputField;
  afStackX_8[0] = 0.0;
  if (pIVar1 == (InputField *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pSVar3 = (pIVar1->fields).m_Text;
  if (pSVar3 != (String *)0x0) {
    if (cRam_? == '\0') {
      FUN_?();
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    aRStack_4[0]._pointer._value = &(pSVar3->fields)._firstChar;
    aRStack_4[0]._12_4_ = 0;
    aRStack_4[0]._length = (pSVar3->fields)._stringLength;
    info = mscorlib.dll::System::Globalization::NumberFormatInfo::NumberFormatInfo_get_CurrentInfo
                     ((MethodInfo *)0x0);
    bVar5 = mscorlib.dll::System::Single::Single_TryParse_2
                      (aRStack_4,
                       NumberStyles__Enum_AllowExponent|NumberStyles__Enum_AllowThousands|
                       NumberStyles__Enum_AllowDecimalPoint|NumberStyles__Enum_Integer,info,
                       afStackX_8,(MethodInfo *)0x0);
    if (bVar5 != 0) {
      pSVar6 = (this->fields).slider;
      if (pSVar6 != (Slider *)0x0) {
        fVar7 = (pSVar6->fields).m_MinValue;
        if ((afStackX_8[0] < fVar7) ||
           (fVar7 = (pSVar6->fields).m_MaxValue, fVar8 = afStackX_8[0], fVar7 < afStackX_8[0])) {
          fVar8 = fVar7;
        }
        value = FUN_?(fVar8);
        pIVar1 = (this->fields).inputField;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__System__Number);
          LOCK();
          UNLOCK();
          FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->
             field_0x135 & 1) == 0) {
          FUN_?();
        }
        if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
          FUN_?();
        }
        aRStack_4[0]._pointer._value = (uint16_t *)0x0;
        aRStack_4[0]._8_8_ = 0;
        pSVar3 = mscorlib.dll::System::Number::Number_FormatInt32
                           (value,aRStack_4,(IFormatProvider *)0x0,(MethodInfo *)0x0);
        if (pIVar1 != (InputField *)0x0) {
          UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_SetText
                    (pIVar1,pSVar3,1,(MethodInfo *)0x0);
          pSVar6 = (this->fields).slider;
          if (pSVar6 != (Slider *)0x0) {
            (*(pSVar6->klass->vtable).set_value.methodPtr)();
            GamePassesXPRewardOption_UpdateBonusXpAmountText(this,value,(MethodInfo *)0x0);
            return;
          }
        }
      }
      goto code_?;
    }
  }
  return;
}


/* Void OnOkayPressed() */

void Assembly-CSharp.dll::GamePassesXPRewardOption::GamePassesXPRewardOption_OnOkayPressed
               (GamePassesXPRewardOption *this,MethodInfo *method)

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
                  MethodInfo__GamePassesXPRewardOption____c___OnOkayPressed_b__8_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassesXPRewardOption____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).slider;
  if (pSVar1 == (Slider *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  (*(pSVar1->klass->vtable).get_value.methodPtr)(pSVar1,(pSVar1->klass->vtable).get_value.method);
  xpReward = FUN_?();
  GamePassProgressionController::GamePassProgressionController_SetXPReward
            ((uint)(this->fields).gamePassTier,xpReward,(MethodInfo *)0x0);
  pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__GamePassesXPRewardOption____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__GamePassesXPRewardOption____c);
  }
  this_01 = TypeInfo__GamePassesXPRewardOption____c->static_fields->__9__8_0;
  if (this_01 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if (*(int *)&(TypeInfo__GamePassesXPRewardOption____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__GamePassesXPRewardOption____c);
    }
    object = TypeInfo__GamePassesXPRewardOption____c->static_fields->__9;
    this_01 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)object,
               MethodInfo__GamePassesXPRewardOption____c___OnOkayPressed_b__8_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__GamePassesXPRewardOption____c->static_fields->__9__8_0 = this_01;
    if (iRam_? != 0) {
      uVar4 = (uint)((ulonglong)&TypeInfo__GamePassesXPRewardOption____c->static_fields->__9__8_0
                     >> 0xc);
      uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
      do {
        uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
        puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
        LOCK();
        bVar8 = uVar6 == *puVar7;
        if (bVar8) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar8);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar9 = 
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
    if ((pMVar9->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar9);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
            (pGVar3,(IList_1_UnityEngine_Transform_ *)
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                    s_InternalTransformList,(MethodInfo *)0x0);
  pLVar10 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
           s_InternalTransformList;
  if (pLVar10 != (List_1_UnityEngine_Transform_ *)0x0) {
    lVar11 = (longlong)(pLVar10->fields)._size;
    uVar4 = 0;
    if (0 < lVar11) {
      lVar12 = 0;
      lVar13 = 0x20;
      do {
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pLVar10 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar10 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
        if ((uint)(pLVar10->fields)._size <= uVar4) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pTVar14 = (pLVar10->fields)._items;
        if (pTVar14 == (Transform__Array *)0x0) goto code_?;
        if ((uint)pTVar14->max_length <= uVar4) {
          FUN_?();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        this_00 = *(Component **)((longlong)pTVar14->vector + lVar13 + -0x20);
        if (this_00 == (Component *)0x0) goto code_?;
        pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           (this_00,(MethodInfo *)0x0);
        bVar15 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_Execute_18
                          (pGVar3,(BaseEventData *)0x0,
                           (ExecuteEvents_EventFunction_1_System_Object_ *)this_01,
                           (pMVar9->field7_0x38).rgctx_data[1].method);
        if (bVar15 != 0) {
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    (this_00,(MethodInfo *)0x0);
          return;
        }
        uVar4 = uVar4 + 1;
        lVar12 = lVar12 + 1;
        lVar13 = lVar13 + 8;
      } while (lVar12 < lVar11);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnSliderChange() */

void Assembly-CSharp.dll::GamePassesXPRewardOption::GamePassesXPRewardOption_OnSliderChange
               (GamePassesXPRewardOption *this,MethodInfo *method)

{
  pSVar1 = (this->fields).slider;
  if (pSVar1 != (Slider *)0x0) {
    (*(pSVar1->klass->vtable).get_value.methodPtr)(pSVar1,(pSVar1->klass->vtable).get_value.method);
    value = FUN_?();
    this_00 = (this->fields).inputField;
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
    aRStack_2[0]._pointer._value = (void *)0x0;
    aRStack_2[0]._length = 0;
    aRStack_2[0]._12_4_ = 0;
    pSVar3 = mscorlib.dll::System::Number::Number_FormatInt32
                       (value,aRStack_2,(IFormatProvider *)0x0,(MethodInfo *)0x0);
    if (this_00 != (InputField *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_SetText
                (this_00,pSVar3,1,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__SubscriberRewardDataManager);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral__XP_for_Elites);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__SubscriberRewardDataManager->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__SubscriberRewardDataManager);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__SubscriberRewardDataManager->_1).field_0x1c == 0) {
        FUN_?();
      }
      pTVar4 = (this->fields).bonusXPAmountText;
      value_00 = FUN_?(((float)(TypeInfo__SubscriberRewardDataManager->static_fields->
                                       subscriberRewardData).baseXPBonus / _UNK_? +
                               _UNK_?) * (float)value);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Number);
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->
           field_0x135 & 1) == 0) {
        FUN_?();
      }
      if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
        FUN_?();
      }
      aRStack_2[0]._pointer._value = (void *)0x0;
      aRStack_2[0]._length = 0;
      aRStack_2[0]._12_4_ = 0;
      pSVar3 = mscorlib.dll::System::Number::Number_FormatInt32
                         (value_00,aRStack_2,(IFormatProvider *)0x0,(MethodInfo *)0x0);
      pSVar3 = mscorlib.dll::System::String::String_Concat_4
                         (pSVar3,StringLiteral__XP_for_Elites,(MethodInfo *)0x0);
      if (pTVar4 != (Text *)0x0) {
        UNRECOVERED_JUMPTABLE = (pTVar4->klass->vtable).set_text.methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)
                  (pTVar4,pSVar3,(pTVar4->klass->vtable).set_text.method,UNRECOVERED_JUMPTABLE);
        return;
      }
      FUN_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void UpdateBonusXpAmountText(Int32) */

void Assembly-CSharp.dll::GamePassesXPRewardOption::GamePassesXPRewardOption_UpdateBonusXpAmountText
               (GamePassesXPRewardOption *this,int32_t xpRewardAmount,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__SubscriberRewardDataManager);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__XP_for_Elites);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__SubscriberRewardDataManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__SubscriberRewardDataManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__SubscriberRewardDataManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  pTVar1 = (this->fields).bonusXPAmountText;
  value = FUN_?(((float)(TypeInfo__SubscriberRewardDataManager->static_fields->
                                subscriberRewardData).baseXPBonus / _UNK_? + _UNK_?)
                        * (float)xpRewardAmount);
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
  aRStack_2[0]._pointer._value = (void *)0x0;
  aRStack_2[0]._length = 0;
  aRStack_2[0]._12_4_ = 0;
  pSVar3 = mscorlib.dll::System::Number::Number_FormatInt32
                     (value,aRStack_2,(IFormatProvider *)0x0,(MethodInfo *)0x0);
  pSVar3 = mscorlib.dll::System::String::String_Concat_4
                     (pSVar3,StringLiteral__XP_for_Elites,(MethodInfo *)0x0);
  if (pTVar1 != (Text *)0x0) {
    UNRECOVERED_JUMPTABLE = (pTVar1->klass->vtable).set_text.methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              (pTVar1,pSVar3,(pTVar1->klass->vtable).set_text.method,UNRECOVERED_JUMPTABLE);
    return;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UpdateXPData(Int32) */

void Assembly-CSharp.dll::GamePassesXPRewardOption::GamePassesXPRewardOption_UpdateXPData
               (GamePassesXPRewardOption *this,int32_t xpAmount,MethodInfo *method)

{
  bVar1 = (this->fields).gamePassTier;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__set_Item_MV__Common__GamePassTier__int_
                  ,CONCAT44(in_register_00000014,xpAmount),0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassProgressionController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__GamePassProgressionController->static_fields->isInitialized == 0) {
    GamePassProgressionController::GamePassProgressionController_Initialize((MethodInfo *)0x0);
  }
  pRVar2 = GamePassProgressionController::GamePassProgressionController_GetXPRewardRangeValidator
                      ((uint)bVar1,(MethodInfo *)0x0);
  if (pRVar2 != (RangeValidator_1_System_Int32_ *)0x0) {
    iVar3 = (pRVar2->fields).min;
    if ((xpAmount < iVar3) || (iVar3 = (pRVar2->fields).max, iVar3 < xpAmount)) {
      xpAmount = iVar3;
    }
    pMVar4 = TypeInfo__GamePassProgressionController->static_fields->progressionDataObject;
    if (pMVar4 != (MVGamePassProgressionDataObject *)0x0) {
      value = MVGamePassProgressionDataObject::
              MVGamePassProgressionDataObject_get_GamePassProgressionDataObjectShared
                        (pMVar4,(MethodInfo *)0x0);
      if (((value != (GamePassProgressionDataObjectShared *)0x0) &&
          (pGVar5 = (value->fields).xpTierRewards,
          pGVar5 != (GamePassProgressionDataObjectShared_XPTierRewards *)0x0)) &&
         (this_00 = (pGVar5->fields).xpTierRewards,
         this_00 != (Dictionary_2_MV_Common_GamePassTier_System_Int32_ *)0x0)) {
        uVar6 = CONCAT71((int7)((ulonglong)in_R9 >> 8),1);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Int32]::
        Dictionary_2_System_ByteEnum_System_Int32__TryInsert
                  ((Dictionary_2_System_ByteEnum_System_Int32_ *)this_00,(uint)bVar1,xpAmount,
                   (InsertionBehavior__Enum)uVar6,
                   MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__set_Item_MV__Common__GamePassTier__int_
                   ->klass->rgctx_data[0x22].method);
        pMVar4 = TypeInfo__GamePassProgressionController->static_fields->progressionDataObject;
        if (pMVar4 != (MVGamePassProgressionDataObject *)0x0) {
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
                          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                         );
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
            LOCK();
            UNLOCK();
            FUN_?(&StringLiteral_gamePassProgressionDataObject);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__Newtonsoft__Json__JsonConvert->_1).field_0x1c == 0) {
            FUN_?();
          }
          value_00 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_SerializeObject
                               ((Object *)value,(MethodInfo *)0x0);
          this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                     *)FUN_?(
                                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                    );
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
          UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
          Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                    (this_01,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                    );
          if (this_01 !=
              (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
               *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryInsert
                      ((Dictionary_2_System_Object_System_Object_ *)this_01,
                       (Object *)StringLiteral_gamePassProgressionDataObject,(Object *)value_00,
                       (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar6 >> 8),2),
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                       ->klass->rgctx_data[0x22].method);
            (*(pMVar4->klass->vtable).PartialUpdateWOData.methodPtr)
                      (pMVar4,this_01,(pMVar4->klass->vtable).PartialUpdateWOData.method);
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__MVGameControllerBase);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pMVar7 = TypeInfo__MVGameControllerBase->static_fields->instance;
            if (((pMVar7 != (MVGameControllerBase *)0x0) &&
                (pMVar8 = (pMVar7->fields).game, pMVar8 != (MVNetworkGame *)0x0)) &&
               (pMVar9 = (pMVar8->fields).operationRequests,
               pMVar9 != (MVNetworkGame_OperationRequests *)0x0)) {
              uVar6 = 0;
              if (cRam_? == '\0') {
                FUN_?(&
                              MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                              ,(pMVar4->fields)._._.id,this_01,0);
                LOCK();
                UNLOCK();
                FUN_?(&
                              MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                             );
                LOCK();
                UNLOCK();
                FUN_?(&
                              TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                             );
                LOCK();
                UNLOCK();
                FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              this_02 = (Dictionary_2_System_Byte_System_Object_ *)
                        FUN_?(
                                     TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                                     );
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]
              ::Dictionary_2_System_Byte_System_Object___ctor
                        (this_02,
                         MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                        );
              value_01 = (Object *)FUN_?(uRam_?,&stack0x00000010);
              if (this_02 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
                uVar10 = CONCAT71((int7)((ulonglong)uVar6 >> 8),2);
                method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                            ->klass->rgctx_data[0x22].method;
                uVar11 = (undefined7)((ulonglong)method_00 >> 8);
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                Object]::Dictionary_2_System_Byte_System_Object__TryInsert
                          (this_02,0x16,value_01,(InsertionBehavior__Enum)uVar10,method_00);
                uVar6 = CONCAT71(uVar11,0x12);
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                Object]::Dictionary_2_System_Byte_System_Object__TryInsert
                          (this_02,0x12,(Object *)this_01,
                           (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar10 >> 8),2),
                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                           ->klass->rgctx_data[0x22].method);
                pPVar12 = (pMVar9->fields).peer;
                if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0)
                {
                  FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
                }
                if (pPVar12 != (PhotonPeer *)0x0) {
                  (*(pPVar12->klass->vtable).SendOperation.methodPtr)
                            (pPVar12,CONCAT71((int7)((ulonglong)uVar6 >> 8),4),this_02,
                             TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->
                             SendReliable,(pPVar12->klass->vtable).SendOperation.method);
                  return;
                }
              }
              FUN_?();
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}

