
/* Void BoostInputFieldChange() */

void Assembly-CSharp.dll::BoostEditFloatPopup::BoostEditFloatPopup_BoostInputFieldChange
               (BoostEditFloatPopup *this,MethodInfo *method)

{
  pIVar1 = (this->fields).boostInputField;
  afStackX_8[0] = 0.0;
  pBVar2 = this;
  if (pIVar1 != (InputField *)0x0) {
    pSVar3 = (pIVar1->fields).m_Text;
    if (pSVar3 != (String *)0x0) {
      if (cRam_? == '\0') {
        FUN_?();
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      RStack_4._pointer._value = &(pSVar3->fields)._firstChar;
      RStack_4._12_4_ = 0;
      RStack_4._length = (pSVar3->fields)._stringLength;
      info = mscorlib.dll::System::Globalization::NumberFormatInfo::NumberFormatInfo_get_CurrentInfo
                       ((MethodInfo *)0x0);
      mscorlib.dll::System::Single::Single_TryParse_2
                (&RStack_4,
                 NumberStyles__Enum_AllowExponent|NumberStyles__Enum_AllowThousands|
                 NumberStyles__Enum_AllowDecimalPoint|NumberStyles__Enum_Integer,info,afStackX_8,
                 (MethodInfo *)0x0);
    }
    pSVar5 = (this->fields).boostSlider;
    pBVar2 = (BoostEditFloatPopup *)0x0;
    if (pSVar5 != (Slider *)0x0) {
      (*(pSVar5->klass->vtable).set_value.methodPtr)
                (pSVar5,afStackX_8[0],(pSVar5->klass->vtable).set_value.method);
      BoostEditIntPopup::BoostEditIntPopup_UpdateBoostTextInputFieldWithBoostSliderValue
                ((BoostEditIntPopup *)this,(MethodInfo *)0x0);
      if ((this->fields)._.isInitialized == 0) {
        return;
      }
      pUVar6 = (this->fields)._.settingChangedCallback;
      pSVar5 = (this->fields).boostSlider;
      if (pSVar5 != (Slider *)0x0) {
        afStackX_8[0] =
             (float)(*(pSVar5->klass->vtable).get_value.methodPtr)
                              (pSVar5,(pSVar5->klass->vtable).get_value.method);
        uVar7 = FUN_?(uRam_?,afStackX_8);
        if (pUVar6 != (UnityAction_1_System_Object_ *)0x0) {
          UNRECOVERED_JUMPTABLE = (pUVar6->fields)._._.invoke_impl;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)
                    ((pUVar6->fields)._._.method_code,uVar7,(pUVar6->fields)._._.method,
                     UNRECOVERED_JUMPTABLE);
          return;
        }
      }
      FUN_?();
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  FUN_?(pBVar2,afStackX_8[0]);
  UNRECOVERED_JUMPTABLE = (code *)swi(3);
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


/* Void BoostSliderValueChanged() */

void Assembly-CSharp.dll::BoostEditFloatPopup::BoostEditFloatPopup_BoostSliderValueChanged
               (BoostEditFloatPopup *this,MethodInfo *method)

{
  BoostEditIntPopup::BoostEditIntPopup_UpdateBoostTextInputFieldWithBoostSliderValue
            ((BoostEditIntPopup *)this,(MethodInfo *)0x0);
  if ((this->fields)._.isInitialized == 0) {
    return;
  }
  pUVar1 = (this->fields)._.settingChangedCallback;
  pSVar2 = (this->fields).boostSlider;
  if (pSVar2 != (Slider *)0x0) {
    auStackX_8[0] =
         (*(pSVar2->klass->vtable).get_value.methodPtr)
                   (pSVar2,(pSVar2->klass->vtable).get_value.method);
    uVar3 = FUN_?(uRam_?,auStackX_8);
    if (pUVar1 != (UnityAction_1_System_Object_ *)0x0) {
      UNRECOVERED_JUMPTABLE = (pUVar1->fields)._._.invoke_impl;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)
                ((pUVar1->fields)._._.method_code,uVar3,(pUVar1->fields)._._.method,
                 UNRECOVERED_JUMPTABLE);
      return;
    }
  }
  FUN_?();
  UNRECOVERED_JUMPTABLE = (code *)swi(3);
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


/* Void Initialize(Boost, GameBoosterSettingWithGoldSetting, UnityAction`1[System.Object],
   UnityAction`1[System.Int32], UnityAction) */

void Assembly-CSharp.dll::BoostEditFloatPopup::BoostEditFloatPopup_Initialize
               (BoostEditFloatPopup *this,Boost *boost,
               GameBoosterSettingWithGoldSetting *boostSetting,
               UnityAction_1_System_Object_ *settingChangedCallback,
               UnityAction_1_System_Int32_ *priceChangedCallback,UnityAction *submitDataCallback,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>__get_NumericValue__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((((boost != (Boost *)0x0) &&
       (pTVar1 = (this->fields).boostSliderDescription, pTVar1 != (Text *)0x0)) &&
      ((*(pTVar1->klass->vtable).set_text.methodPtr)
                 (pTVar1,(boost->fields)._ValueDescription_k__BackingField,
                  (pTVar1->klass->vtable).set_text.method),
      boostSetting != (GameBoosterSettingWithGoldSetting *)0x0)) &&
     (pKVar2 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
                GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting::
                GameBoosterSettingWithGoldSetting_get_Setting(boostSetting,(MethodInfo *)0x0),
     pKVar2 != (KogamaSettingValueWrapperBase *)0x0)) {
    bVar3 = (
            TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>
            ->_1).naturalAligment;
    if (((pKVar2->klass->_1).naturalAligment < bVar3) ||
       ((pKVar2->klass->_1).typeHierarchy[(ulonglong)bVar3 - 1] !=
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>
       )) {
      FUN_?(pKVar2);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (((pKVar2[1].klass != (KogamaSettingValueWrapperBase__Class *)0x0) &&
        (pIVar5 = ((pKVar2[1].klass)->_0).byval_arg.data.array, pIVar5 != (Il2CppArrayType *)0x0))
       && (pSVar6 = (this->fields).boostSlider, pSVar6 != (Slider *)0x0)) {
      UnityEngine.UI.dll::UnityEngine::UI::Slider::Slider_set_maxValue
                (pSVar6,*(float *)((longlong)&pIVar5->sizes + 4),(MethodInfo *)0x0);
      if (((pKVar2[1].klass != (KogamaSettingValueWrapperBase__Class *)0x0) &&
          (pIVar5 = ((pKVar2[1].klass)->_0).byval_arg.data.array, pIVar5 != (Il2CppArrayType *)0x0)
          ) && (pSVar6 = (this->fields).boostSlider, pSVar6 != (Slider *)0x0)) {
        UnityEngine.UI.dll::UnityEngine::UI::Slider::Slider_set_minValue
                  (pSVar6,*(float *)&pIVar5->sizes,(MethodInfo *)0x0);
        pSVar6 = (this->fields).boostSlider;
        FUN_?(pKVar2,
                      MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>__get_NumericValue__
                     );
        if (pSVar6 != (Slider *)0x0) {
          (*(pSVar6->klass->vtable).set_value.methodPtr)(pSVar6);
          fVar7 = (float)FUN_?(pKVar2,
                                        MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>__get_NumericValue__
                                       );
          (this->fields).originalSettingValue = fVar7;
          if (cRam_? == '\0') {
            FUN_?();
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          iVar8 = iRam_?;
          (this->fields)._.boostSetting = boostSetting;
          if (iVar8 != 0) {
            uVar9 = (uint)((ulonglong)&(this->fields)._.boostSetting >> 0xc);
            uVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
            do {
              uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
              puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
              LOCK();
              bVar13 = uVar11 == *puVar12;
              if (bVar13) {
                *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
              }
              UNLOCK();
              iVar8 = iRam_?;
            } while (!bVar13);
          }
          (this->fields)._.settingChangedCallback = settingChangedCallback;
          iVar14 = 0;
          if (iVar8 != 0) {
            uVar9 = (uint)((ulonglong)&(this->fields)._.settingChangedCallback >> 0xc);
            uVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
            do {
              uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
              puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
              LOCK();
              bVar13 = uVar11 == *puVar12;
              if (bVar13) {
                *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
              }
              UNLOCK();
              iVar14 = iRam_?;
            } while (!bVar13);
          }
          (this->fields)._.priceChangedCallback = priceChangedCallback;
          iVar8 = 0;
          if (iVar14 != 0) {
            uVar9 = (uint)((ulonglong)&(this->fields)._.priceChangedCallback >> 0xc);
            uVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
            do {
              uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
              puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
              LOCK();
              bVar13 = uVar11 == *puVar12;
              if (bVar13) {
                *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
              }
              UNLOCK();
              iVar8 = iRam_?;
            } while (!bVar13);
          }
          (this->fields)._.submitDataCallback = submitDataCallback;
          if (iVar8 != 0) {
            uVar9 = (uint)((ulonglong)&(this->fields)._.submitDataCallback >> 0xc);
            uVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
            do {
              uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
              puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
              LOCK();
              bVar13 = uVar11 == *puVar12;
              if (bVar13) {
                *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
              }
              UNLOCK();
            } while (!bVar13);
          }
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__System__Collections__Generic__List<BoostEditPopup::BoosterDef>__get_Count__
                         );
            LOCK();
            UNLOCK();
            FUN_?(&
                          MethodInfo__System__Collections__Generic__List<BoostEditPopup::BoosterDef>__get_Item_int_
                         );
            LOCK();
            UNLOCK();
            FUN_?(&
                          UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                         );
            LOCK();
            UNLOCK();
            FUN_?();
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pLVar15 = (this->fields)._.boosterList;
          uVar9 = 0;
          if (pLVar15 != (List_1_BoostEditPopup_BoosterDef_ *)0x0) {
            lVar16 = 0x20;
            for (; (int)uVar9 < (pLVar15->fields)._size; uVar9 = uVar9 + 1) {
              if ((uint)(pLVar15->fields)._size <= uVar9) {
code_?:
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pBVar17 = (pLVar15->fields)._items;
              if (pBVar17 == (BoostEditPopup_BoosterDef__Array *)0x0) goto code_?;
              if ((uint)pBVar17->max_length <= uVar9) {
code_?:
                FUN_?();
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              if (boost == (Boost *)0x0) goto code_?;
              if (*(int *)((longlong)
                           &((BoostEditPopup_BoosterDef__Array *)(pBVar17->vector + -2))->klass +
                          lVar16) == (boost->fields)._Type_k__BackingField) {
                if ((uint)(pLVar15->fields)._size <= uVar9) goto code_?;
                pBVar17 = (pLVar15->fields)._items;
                if (pBVar17 == (BoostEditPopup_BoosterDef__Array *)0x0) goto code_?;
                if ((uint)pBVar17->max_length <= uVar9) goto code_?;
                pGVar18 = pBVar17->vector[(int)uVar9].iconPrefab;
                if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                  FUN_?();
                }
                pGVar18 = (GameObject *)
                          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                    ((Object *)pGVar18,
                                     UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                                    );
                if ((pGVar18 == (GameObject *)0x0) ||
                   (this_00 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                              GameObject_get_transform(pGVar18,(MethodInfo *)0x0),
                   this_00 == (Transform *)0x0)) goto code_?;
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                          (this_00,(Transform *)(this->fields)._.boostImageParent,0,
                           (MethodInfo *)0x0);
                goto code_?;
              }
              lVar16 = lVar16 + 0x10;
            }
            if (boost != (Boost *)0x0) {
code_?:
              pTVar1 = (this->fields)._.headerText;
              if (((pTVar1 != (Text *)0x0) &&
                  ((*(pTVar1->klass->vtable).set_text.methodPtr)(),
                  boostSetting != (GameBoosterSettingWithGoldSetting *)0x0)) &&
                 ((pKVar19 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::
                             SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes
                             ::GameBoosterSettingWithGoldSetting::
                             GameBoosterSettingWithGoldSetting_get_GoldPrice
                                       (boostSetting,(MethodInfo *)0x0),
                  pKVar19 != (KogamaSettingNumericBase_1_System_Int32_ *)0x0 &&
                  (((pKVar20 = (pKVar19->fields).KogamaSettingNumeric,
                    pKVar20 != (KogamaSettingNumeric_1_System_Int32_ *)0x0 &&
                    (pRVar21 = (pKVar20->fields).RangeValidator,
                    pRVar21 != (RangeValidator_1_System_Int32_ *)0x0)) &&
                   (pSVar6 = (this->fields)._.priceSlider, pSVar6 != (Slider *)0x0)))))) {
                UnityEngine.UI.dll::UnityEngine::UI::Slider::Slider_set_maxValue
                          (pSVar6,(float)(pRVar21->fields).max,(MethodInfo *)0x0);
                pKVar20 = (pKVar19->fields).KogamaSettingNumeric;
                if (((pKVar20 != (KogamaSettingNumeric_1_System_Int32_ *)0x0) &&
                    (pRVar21 = (pKVar20->fields).RangeValidator,
                    pRVar21 != (RangeValidator_1_System_Int32_ *)0x0)) &&
                   (pSVar6 = (this->fields)._.priceSlider, pSVar6 != (Slider *)0x0)) {
                  UnityEngine.UI.dll::UnityEngine::UI::Slider::Slider_set_minValue
                            (pSVar6,(float)(pRVar21->fields).min,(MethodInfo *)0x0);
                  pSVar6 = (this->fields)._.priceSlider;
                  FUN_?(pKVar19,
                                MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__get_NumericValue__
                               );
                  if (pSVar6 != (Slider *)0x0) {
                    (*(pSVar6->klass->vtable).set_value.methodPtr)(pSVar6);
                    iVar22 = FUN_?(pKVar19,
                                           MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__get_NumericValue__
                                          );
                    (this->fields)._.originalPrice = iVar22;
                    (this->fields)._.isInitialized = 1;
                    return;
                  }
                }
              }
            }
          }
code_?:
          FUN_?();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnCancelBoostEdit() */

void Assembly-CSharp.dll::BoostEditFloatPopup::BoostEditFloatPopup_OnCancelBoostEdit
               (BoostEditFloatPopup *this,MethodInfo *method)

{
  pSVar1 = (this->fields).boostSlider;
  if (pSVar1 == (Slider *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  (*(pSVar1->klass->vtable).set_value.methodPtr)
            (pSVar1,method,(pSVar1->klass->vtable).set_value.method);
  BoostEditFloatPopup_UpdateSettingData(this,(MethodInfo *)0x0);
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
                  MethodInfo__BoostEditPopup____c___OnCancelBoostEdit_b__13_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BoostEditPopup____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields)._.priceSlider;
  if (pSVar1 != (Slider *)0x0) {
    (*(pSVar1->klass->vtable).set_value.methodPtr)();
    if ((this->fields)._.isInitialized != 0) {
      pSVar1 = (this->fields)._.priceSlider;
      pUVar3 = (this->fields)._.priceChangedCallback;
      if ((pSVar1 == (Slider *)0x0) ||
         (fVar4 = (float)(*(pSVar1->klass->vtable).get_value.methodPtr)
                                    (pSVar1,(pSVar1->klass->vtable).get_value.method),
         pUVar3 == (UnityAction_1_System_Int32_ *)0x0)) goto DAT_?;
      (*(pUVar3->fields)._._.invoke_impl)
                ((pUVar3->fields)._._.method_code,(int)fVar4,(pUVar3->fields)._._.method);
    }
    pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__BoostEditPopup____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__BoostEditPopup____c);
    }
    this_01 = TypeInfo__BoostEditPopup____c->static_fields->__9__13_0;
    if (this_01 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      if (*(int *)&(TypeInfo__BoostEditPopup____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__BoostEditPopup____c);
      }
      object = TypeInfo__BoostEditPopup____c->static_fields->__9;
      this_01 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)object,
                 MethodInfo__BoostEditPopup____c___OnCancelBoostEdit_b__13_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__BoostEditPopup____c->static_fields->__9__13_0 = this_01;
      if (iRam_? != 0) {
        uVar6 = (uint)((ulonglong)&TypeInfo__BoostEditPopup____c->static_fields->__9__13_0 >> 0xc);
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
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    pMVar11 = 
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
      if ((pMVar11->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?(pMVar11);
      }
    }
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
              (pGVar5,(IList_1_UnityEngine_Transform_ *)
                       TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                       s_InternalTransformList,(MethodInfo *)0x0);
    pLVar12 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
             s_InternalTransformList;
    if (pLVar12 != (List_1_UnityEngine_Transform_ *)0x0) {
      lVar13 = (longlong)(pLVar12->fields)._size;
      uVar6 = 0;
      if (0 < lVar13) {
        lVar14 = 0;
        lVar15 = 0x20;
        do {
          if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
            FUN_?();
          }
          pLVar12 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                   s_InternalTransformList;
          if (pLVar12 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
          if ((uint)(pLVar12->fields)._size <= uVar6) {
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                      ((MethodInfo *)0x0);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pTVar16 = (pLVar12->fields)._items;
          if (pTVar16 == (Transform__Array *)0x0) goto code_?;
          if ((uint)pTVar16->max_length <= uVar6) {
            FUN_?();
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          this_00 = *(Component **)((longlong)pTVar16->vector + lVar15 + -0x20);
          if (this_00 == (Component *)0x0) goto code_?;
          pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              (this_00,(MethodInfo *)0x0);
          bVar17 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                  ExecuteEvents_Execute_18
                            (pGVar5,(BaseEventData *)0x0,
                             (ExecuteEvents_EventFunction_1_System_Object_ *)this_01,
                             (pMVar11->field7_0x38).rgctx_data[1].method);
          if (bVar17 != 0) {
            UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      (this_00,(MethodInfo *)0x0);
            return;
          }
          uVar6 = uVar6 + 1;
          lVar14 = lVar14 + 1;
          lVar15 = lVar15 + 8;
        } while (lVar14 < lVar13);
      }
      return;
    }
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
DAT_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void UpdateSettingData() */

void Assembly-CSharp.dll::BoostEditFloatPopup::BoostEditFloatPopup_UpdateSettingData
               (BoostEditFloatPopup *this,MethodInfo *method)

{
  if ((this->fields)._.isInitialized == 0) {
    return;
  }
  pUVar1 = (this->fields)._.settingChangedCallback;
  pSVar2 = (this->fields).boostSlider;
  if (pSVar2 != (Slider *)0x0) {
    auStackX_8[0] =
         (*(pSVar2->klass->vtable).get_value.methodPtr)
                   (pSVar2,(pSVar2->klass->vtable).get_value.method);
    uVar3 = FUN_?(uRam_?,auStackX_8);
    if (pUVar1 != (UnityAction_1_System_Object_ *)0x0) {
      UNRECOVERED_JUMPTABLE = (pUVar1->fields)._._.invoke_impl;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)
                ((pUVar1->fields)._._.method_code,uVar3,(pUVar1->fields)._._.method,
                 UNRECOVERED_JUMPTABLE);
      return;
    }
  }
  FUN_?();
  UNRECOVERED_JUMPTABLE = (code *)swi(3);
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

