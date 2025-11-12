
/* Void CreateBoostImage(Boost) */

void Assembly-CSharp.dll::BoostEditPopup::BoostEditPopup_CreateBoostImage
               (BoostEditPopup *this,Boost *boost,MethodInfo *method)

{
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
  pLVar1 = (this->fields).boosterList;
  uVar2 = 0;
  if (pLVar1 == (List_1_BoostEditPopup_BoosterDef_ *)0x0) {
code_?:
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar4 = 0x20;
  do {
    if ((pLVar1->fields)._size <= (int)uVar2) {
      return;
    }
    if ((uint)(pLVar1->fields)._size <= uVar2) {
code_?:
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pBVar5 = (pLVar1->fields)._items;
    if (pBVar5 == (BoostEditPopup_BoosterDef__Array *)0x0) goto code_?;
    if ((uint)pBVar5->max_length <= uVar2) {
code_?:
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (boost == (Boost *)0x0) goto code_?;
    if (*(int *)((longlong)&((BoostEditPopup_BoosterDef__Array *)(pBVar5->vector + -2))->klass +
                lVar4) == (boost->fields)._Type_k__BackingField) {
      if ((uint)(pLVar1->fields)._size <= uVar2) goto code_?;
      pBVar5 = (pLVar1->fields)._items;
      if (pBVar5 != (BoostEditPopup_BoosterDef__Array *)0x0) {
        if ((uint)pBVar5->max_length <= uVar2) goto code_?;
        pGVar6 = pBVar5->vector[(int)uVar2].iconPrefab;
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        pGVar6 = (GameObject *)
                 UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                           ((Object *)pGVar6,
                            UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                           );
        if ((pGVar6 != (GameObject *)0x0) &&
           (this_00 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                (pGVar6,(MethodInfo *)0x0), this_00 != (Transform *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                    (this_00,(Transform *)(this->fields).boostImageParent,0,(MethodInfo *)0x0);
          return;
        }
      }
      goto code_?;
    }
    uVar2 = uVar2 + 1;
    lVar4 = lVar4 + 0x10;
  } while( true );
}


/* Void Initialize(Boost, GameBoosterSettingWithGoldSetting, UnityAction`1[System.Object],
   UnityAction`1[System.Int32], UnityAction) */

void Assembly-CSharp.dll::BoostEditPopup::BoostEditPopup_Initialize
               (BoostEditPopup *this,Boost *boost,GameBoosterSettingWithGoldSetting *boostSetting,
               UnityAction_1_System_Object_ *settingChangedCallback,
               UnityAction_1_System_Int32_ *priceChangedCallback,UnityAction *submitDataCallback,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = iRam_?;
  (this->fields).boostSetting = boostSetting;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).boostSetting >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar1 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).settingChangedCallback = settingChangedCallback;
  iVar7 = 0;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).settingChangedCallback >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar7 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).priceChangedCallback = priceChangedCallback;
  iVar1 = 0;
  if (iVar7 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).priceChangedCallback >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar1 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).submitDataCallback = submitDataCallback;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).submitDataCallback >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
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
  pLVar8 = (this->fields).boosterList;
  uVar2 = 0;
  if (pLVar8 != (List_1_BoostEditPopup_BoosterDef_ *)0x0) {
    lVar9 = 0x20;
    for (; (int)uVar2 < (pLVar8->fields)._size; uVar2 = uVar2 + 1) {
      if ((uint)(pLVar8->fields)._size <= uVar2) {
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pBVar11 = (pLVar8->fields)._items;
      if (pBVar11 == (BoostEditPopup_BoosterDef__Array *)0x0) goto code_?;
      if ((uint)pBVar11->max_length <= uVar2) {
code_?:
        FUN_?();
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      if (boost == (Boost *)0x0) goto code_?;
      if (*(int *)((longlong)&((BoostEditPopup_BoosterDef__Array *)(pBVar11->vector + -2))->klass +
                  lVar9) == (boost->fields)._Type_k__BackingField) {
        if ((uint)(pLVar8->fields)._size <= uVar2) goto code_?;
        pBVar11 = (pLVar8->fields)._items;
        if (pBVar11 == (BoostEditPopup_BoosterDef__Array *)0x0) goto code_?;
        if ((uint)pBVar11->max_length <= uVar2) goto code_?;
        pGVar12 = pBVar11->vector[(int)uVar2].iconPrefab;
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        pGVar12 = (GameObject *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)pGVar12,
                             UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                            );
        if ((pGVar12 == (GameObject *)0x0) ||
           (this_00 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                (pGVar12,(MethodInfo *)0x0), this_00 == (Transform *)0x0))
        goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                  (this_00,(Transform *)(this->fields).boostImageParent,0,(MethodInfo *)0x0);
        goto code_?;
      }
      lVar9 = lVar9 + 0x10;
    }
    if (boost != (Boost *)0x0) {
code_?:
      pTVar13 = (this->fields).headerText;
      if (((((pTVar13 != (Text *)0x0) &&
            ((*(pTVar13->klass->vtable).set_text.methodPtr)(),
            boostSetting != (GameBoosterSettingWithGoldSetting *)0x0)) &&
           (pKVar14 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
                      GameBoosterSettings::GameBoosterSettingTypes::
                      GameBoosterSettingWithGoldSetting::
                      GameBoosterSettingWithGoldSetting_get_GoldPrice
                                (boostSetting,(MethodInfo *)0x0),
           pKVar14 != (KogamaSettingNumericBase_1_System_Int32_ *)0x0)) &&
          ((pKVar15 = (pKVar14->fields).KogamaSettingNumeric,
           pKVar15 != (KogamaSettingNumeric_1_System_Int32_ *)0x0 &&
           (pRVar16 = (pKVar15->fields).RangeValidator,
           pRVar16 != (RangeValidator_1_System_Int32_ *)0x0)))) &&
         (pSVar17 = (this->fields).priceSlider, pSVar17 != (Slider *)0x0)) {
        UnityEngine.UI.dll::UnityEngine::UI::Slider::Slider_set_maxValue
                  (pSVar17,(float)(pRVar16->fields).max,(MethodInfo *)0x0);
        pKVar15 = (pKVar14->fields).KogamaSettingNumeric;
        if (((pKVar15 != (KogamaSettingNumeric_1_System_Int32_ *)0x0) &&
            (pRVar16 = (pKVar15->fields).RangeValidator,
            pRVar16 != (RangeValidator_1_System_Int32_ *)0x0)) &&
           (pSVar17 = (this->fields).priceSlider, pSVar17 != (Slider *)0x0)) {
          UnityEngine.UI.dll::UnityEngine::UI::Slider::Slider_set_minValue
                    (pSVar17,(float)(pRVar16->fields).min,(MethodInfo *)0x0);
          pSVar17 = (this->fields).priceSlider;
          FUN_?(pKVar14,
                        MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__get_NumericValue__
                       );
          if (pSVar17 != (Slider *)0x0) {
            (*(pSVar17->klass->vtable).set_value.methodPtr)(pSVar17);
            iVar18 = FUN_?(pKVar14,
                                   MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__get_NumericValue__
                                  );
            (this->fields).originalPrice = iVar18;
            (this->fields).isInitialized = 1;
            return;
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void OnCancelBoostEdit() */

void Assembly-CSharp.dll::BoostEditPopup::BoostEditPopup_OnCancelBoostEdit
               (BoostEditPopup *this,MethodInfo *method)

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
                  MethodInfo__BoostEditPopup____c___OnCancelBoostEdit_b__13_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BoostEditPopup____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).priceSlider;
  if (pSVar1 != (Slider *)0x0) {
    (*(pSVar1->klass->vtable).set_value.methodPtr)();
    if ((this->fields).isInitialized != 0) {
      pSVar1 = (this->fields).priceSlider;
      pUVar2 = (this->fields).priceChangedCallback;
      if ((pSVar1 == (Slider *)0x0) ||
         (fVar3 = (float)(*(pSVar1->klass->vtable).get_value.methodPtr)
                                    (pSVar1,(pSVar1->klass->vtable).get_value.method),
         pUVar2 == (UnityAction_1_System_Int32_ *)0x0)) goto DAT_?;
      (*(pUVar2->fields)._._.invoke_impl)
                ((pUVar2->fields)._._.method_code,(int)fVar3,(pUVar2->fields)._._.method);
    }
    pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
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
        uVar5 = (uint)((ulonglong)&TypeInfo__BoostEditPopup____c->static_fields->__9__13_0 >> 0xc);
        uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
        do {
          uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
          puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
          LOCK();
          bVar9 = uVar7 == *puVar8;
          if (bVar9) {
            *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
          }
          UNLOCK();
        } while (!bVar9);
      }
    }
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    pMVar10 = 
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
      if ((pMVar10->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?(pMVar10);
      }
    }
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
              (pGVar4,(IList_1_UnityEngine_Transform_ *)
                       TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                       s_InternalTransformList,(MethodInfo *)0x0);
    pLVar11 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
             s_InternalTransformList;
    if (pLVar11 != (List_1_UnityEngine_Transform_ *)0x0) {
      lVar12 = (longlong)(pLVar11->fields)._size;
      uVar5 = 0;
      if (0 < lVar12) {
        lVar13 = 0;
        lVar14 = 0x20;
        do {
          if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
            FUN_?();
          }
          pLVar11 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                   s_InternalTransformList;
          if (pLVar11 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
          if ((uint)(pLVar11->fields)._size <= uVar5) {
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                      ((MethodInfo *)0x0);
            pcVar15 = (code *)swi(3);
            (*pcVar15)();
            return;
          }
          pTVar16 = (pLVar11->fields)._items;
          if (pTVar16 == (Transform__Array *)0x0) goto code_?;
          if ((uint)pTVar16->max_length <= uVar5) {
            FUN_?();
            pcVar15 = (code *)swi(3);
            (*pcVar15)();
            return;
          }
          this_00 = *(Component **)((longlong)pTVar16->vector + lVar14 + -0x20);
          if (this_00 == (Component *)0x0) goto code_?;
          pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              (this_00,(MethodInfo *)0x0);
          bVar17 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                  ExecuteEvents_Execute_18
                            (pGVar4,(BaseEventData *)0x0,
                             (ExecuteEvents_EventFunction_1_System_Object_ *)this_01,
                             (pMVar10->field7_0x38).rgctx_data[1].method);
          if (bVar17 != 0) {
            UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      (this_00,(MethodInfo *)0x0);
            return;
          }
          uVar5 = uVar5 + 1;
          lVar13 = lVar13 + 1;
          lVar14 = lVar14 + 8;
        } while (lVar13 < lVar12);
      }
      return;
    }
code_?:
    FUN_?();
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
DAT_?:
  FUN_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void OnConfirmButtonPressed() */

void Assembly-CSharp.dll::BoostEditPopup::BoostEditPopup_OnConfirmButtonPressed
               (BoostEditPopup *this,MethodInfo *method)

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
                  MethodInfo__BoostEditPopup____c___OnConfirmButtonPressed_b__12_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BoostEditPopup____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__BoostEditPopup____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__BoostEditPopup____c);
  }
  this_00 = TypeInfo__BoostEditPopup____c->static_fields->__9__12_0;
  if (this_00 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if (*(int *)&(TypeInfo__BoostEditPopup____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__BoostEditPopup____c);
    }
    object = TypeInfo__BoostEditPopup____c->static_fields->__9;
    this_00 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_00,(Object *)object,
               MethodInfo__BoostEditPopup____c___OnConfirmButtonPressed_b__12_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__BoostEditPopup____c->static_fields->__9__12_0 = this_00;
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)&TypeInfo__BoostEditPopup____c->static_fields->__9__12_0 >> 0xc);
      puVar2 = (ulonglong *)((ulonglong)((uVar1 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar3 = *puVar2;
        LOCK();
        uVar4 = *puVar2;
        if (uVar3 == uVar4) {
          *puVar2 = uVar3 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (uVar3 != uVar4);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_00,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  pUVar5 = (this->fields).submitDataCallback;
  if (pUVar5 == (UnityAction *)0x0) {
    FUN_?();
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(pUVar5->fields)._._.invoke_impl)((pUVar5->fields)._._.method_code,(pUVar5->fields)._._.method);
  return;
}


/* Void PriceInputFieldChange() */

void Assembly-CSharp.dll::BoostEditPopup::BoostEditPopup_PriceInputFieldChange
               (BoostEditPopup *this,MethodInfo *method)

{
  pIVar1 = (this->fields).priceInputField;
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
    pSVar4 = (this->fields).priceSlider;
    if (pSVar4 != (Slider *)0x0) {
      (*(pSVar4->klass->vtable).set_value.methodPtr)
                (pSVar4,afStackX_8[0],(pSVar4->klass->vtable).set_value.method);
      BoostEditPopup_UpdatePriceTextInputFieldWithPriceSliderValue(this,(MethodInfo *)0x0);
      if ((this->fields).isInitialized == 0) {
        return;
      }
      pSVar4 = (this->fields).priceSlider;
      pUVar5 = (this->fields).priceChangedCallback;
      if ((pSVar4 != (Slider *)0x0) &&
         (fVar6 = (float)(*(pSVar4->klass->vtable).get_value.methodPtr)
                                   (pSVar4,(pSVar4->klass->vtable).get_value.method),
         pUVar5 != (UnityAction_1_System_Int32_ *)0x0)) {
        (*(pUVar5->fields)._._.invoke_impl)
                  ((pUVar5->fields)._._.method_code,(int)fVar6,(pUVar5->fields)._._.method);
        return;
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void PriceSliderValueChanged() */

void Assembly-CSharp.dll::BoostEditPopup::BoostEditPopup_PriceSliderValueChanged
               (BoostEditPopup *this,MethodInfo *method)

{
  BoostEditPopup_UpdatePriceTextInputFieldWithPriceSliderValue(this,(MethodInfo *)0x0);
  if ((this->fields).isInitialized == 0) {
    return;
  }
  pSVar1 = (this->fields).priceSlider;
  pUVar2 = (this->fields).priceChangedCallback;
  if ((pSVar1 != (Slider *)0x0) &&
     (fVar3 = (float)(*(pSVar1->klass->vtable).get_value.methodPtr)
                               (pSVar1,(pSVar1->klass->vtable).get_value.method),
     pUVar2 != (UnityAction_1_System_Int32_ *)0x0)) {
    (*(pUVar2->fields)._._.invoke_impl)
              ((pUVar2->fields)._._.method_code,(int)fVar3,(pUVar2->fields)._._.method);
    return;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UpdatePriceData() */

void Assembly-CSharp.dll::BoostEditPopup::BoostEditPopup_UpdatePriceData
               (BoostEditPopup *this,MethodInfo *method)

{
  if ((this->fields).isInitialized == 0) {
    return;
  }
  pUVar1 = (this->fields).priceChangedCallback;
  pSVar2 = (this->fields).priceSlider;
  if (pSVar2 != (Slider *)0x0) {
    fVar3 = (float)(*(pSVar2->klass->vtable).get_value.methodPtr)
                             (pSVar2,(pSVar2->klass->vtable).get_value.method);
    if (pUVar1 != (UnityAction_1_System_Int32_ *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pUVar1->fields)._._.invoke_impl)
                ((pUVar1->fields)._._.method_code,(int)fVar3,(pUVar1->fields)._._.method);
      return;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UpdatePriceSliderValueWithPriceInputFieldText() */

void Assembly-CSharp.dll::BoostEditPopup::
     BoostEditPopup_UpdatePriceSliderValueWithPriceInputFieldText
               (BoostEditPopup *this,MethodInfo *method)

{
  pIVar1 = (this->fields).priceInputField;
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
    pSVar4 = (this->fields).priceSlider;
    this = (BoostEditPopup *)0x0;
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


/* Void UpdatePriceTextInputFieldWithPriceSliderValue() */

void Assembly-CSharp.dll::BoostEditPopup::
     BoostEditPopup_UpdatePriceTextInputFieldWithPriceSliderValue
               (BoostEditPopup *this,MethodInfo *method)

{
  this_00 = (this->fields).priceInputField;
  pSVar1 = (this->fields).priceSlider;
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

