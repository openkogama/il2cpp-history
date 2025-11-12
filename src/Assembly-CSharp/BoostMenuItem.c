
/* Void ActivateActiveBoostIconEffect() */

void Assembly-CSharp.dll::BoostMenuItem::BoostMenuItem_ActivateActiveBoostIconEffect
               (BoostMenuItem *this,MethodInfo *method)

{
  pNVar1 = (this->fields).boostActiveIconFader;
  if (pNVar1 != (NotificationFade *)0x0) {
    (pNVar1->fields).shouldHideWhenDone = 0;
    pNVar1 = (this->fields).boostActiveIconFader;
    if (pNVar1 != (NotificationFade *)0x0) {
      this_00 = (pNVar1->fields).group;
      (pNVar1->fields).playing = 1;
      (pNVar1->fields).pauseAt = (pNVar1->fields).duration;
      if (this_00 != (CanvasGroup *)0x0) {
        UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                  (this_00,0.0,(MethodInfo *)0x0);
        pcVar2 = pcRam_?;
        (pNVar1->fields).currentTime = 0.0;
        pcVar3 = pcRam_?;
        if ((pcVar2 == (code *)0x0) &&
           (pcVar2 = (code *)FUN_?(&UNK_?), pcVar3 = pcVar2, pcVar2 == (code *)0x0))
        {
          uVar4 = func_?(&UNK_?);
          FUN_?(uVar4,0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcRam_? = pcVar3;
        fVar5 = (float)(*pcVar2)();
        (this->fields).activeIconScaleEffectStartTime = fVar5;
        return;
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void BoostChanged() */

void Assembly-CSharp.dll::BoostMenuItem::BoostMenuItem_BoostChanged
               (BoostMenuItem *this,MethodInfo *method)

{
  MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,(MVPlayer *)method,in_R8);
  if (((extraout_RAX != 0) && (pBVar1 = (this->fields).boost, pBVar1 != (Boost *)0x0)) &&
     (*(BoostController **)(extraout_RAX + 0xa0) != (BoostController *)0x0)) {
    boostUnlocked =
         BoostController::BoostController_IsBoostActive
                   (*(BoostController **)(extraout_RAX + 0xa0),
                    (pBVar1->fields)._Type_k__BackingField,(MethodInfo *)0x0);
    BoostMenuItem_SetBoostUIUnlocked(this,boostUnlocked,(MethodInfo *)0x0);
    if (boostUnlocked == 0) {
      return;
    }
    pNVar2 = (this->fields).boostActiveIconFader;
    if (pNVar2 != (NotificationFade *)0x0) {
      (pNVar2->fields).shouldHideWhenDone = 0;
      pNVar2 = (this->fields).boostActiveIconFader;
      if (pNVar2 != (NotificationFade *)0x0) {
        this_00 = (pNVar2->fields).group;
        (pNVar2->fields).playing = 1;
        (pNVar2->fields).pauseAt = (pNVar2->fields).duration;
        if (this_00 != (CanvasGroup *)0x0) {
          UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                    (this_00,0.0,(MethodInfo *)0x0);
          pcVar3 = pcRam_?;
          (pNVar2->fields).currentTime = 0.0;
          pcVar4 = pcRam_?;
          if ((pcVar3 == (code *)0x0) &&
             (pcVar3 = (code *)FUN_?(&UNK_?), pcVar4 = pcVar3, pcVar3 == (code *)0x0
             )) {
            uVar5 = func_?(&UNK_?);
            FUN_?(uVar5,0);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pcRam_? = pcVar4;
          fVar6 = (float)(*pcVar3)();
          (this->fields).activeIconScaleEffectStartTime = fVar6;
          return;
        }
      }
    }
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void BoostUnlockedResponse(Boolean) */

void Assembly-CSharp.dll::BoostMenuItem::BoostMenuItem_BoostUnlockedResponse
               (BoostMenuItem *this,bool boostUnlocked,MethodInfo *method)

{
  BoostMenuItem_SetBoostUIUnlocked(this,boostUnlocked,(MethodInfo *)0x0);
  if (boostUnlocked == 0) {
    return;
  }
  pNVar1 = (this->fields).boostActiveIconFader;
  if (pNVar1 != (NotificationFade *)0x0) {
    (pNVar1->fields).shouldHideWhenDone = 0;
    pNVar1 = (this->fields).boostActiveIconFader;
    if (pNVar1 != (NotificationFade *)0x0) {
      this_00 = (pNVar1->fields).group;
      (pNVar1->fields).playing = 1;
      (pNVar1->fields).pauseAt = (pNVar1->fields).duration;
      if (this_00 != (CanvasGroup *)0x0) {
        UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                  (this_00,0.0,(MethodInfo *)0x0);
        pcVar2 = pcRam_?;
        (pNVar1->fields).currentTime = 0.0;
        pcVar3 = pcRam_?;
        if ((pcVar2 == (code *)0x0) &&
           (pcVar2 = (code *)FUN_?(&UNK_?), pcVar3 = pcVar2, pcVar2 == (code *)0x0))
        {
          uVar4 = func_?(&UNK_?);
          FUN_?(uVar4,0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcRam_? = pcVar3;
        fVar5 = (float)(*pcVar2)();
        (this->fields).activeIconScaleEffectStartTime = fVar5;
        return;
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Int32 GetBoostPrice() */

int32_t Assembly-CSharp.dll::BoostMenuItem::BoostMenuItem_GetBoostPrice
                  (BoostMenuItem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__get_NumericValue__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (((this_00 != (MVWorldObjectClientManager *)0x0) &&
      (this_01 = (MVGameOptionDataObject *)
                 MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject
                           (this_00,
                            MVGameOptionDataObject_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVGameOptionDataObject>__
                           ), this_01 != (MVGameOptionDataObject *)0x0)) &&
     (this_02 = MVGameOptionDataObject::MVGameOptionDataObject_get_GameBoosterSettingsManager
                          (this_01,(MethodInfo *)0x0), this_02 != (GameBoosterSettingsManager *)0x0)
     ) {
    pLVar1 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
              GameBoosterSettings::GameBoosterSettingsManager::
              GameBoosterSettingsManager_get_ActiveSettingsList(this_02,(MethodInfo *)0x0);
    uVar2 = 0;
    if (pLVar1 !=
        (List_1_MV_WorldObject_KogamaSettings_SpecializedSettingsTypes_GameBoosterSettings_GameBoosterSettingTypes_GameBoosterSettingWithGoldSetting_
         *)0x0) {
      uVar3 = (pLVar1->fields)._size;
      lVar4 = 0x20;
      while( true ) {
        if ((int)uVar3 <= (int)uVar2) {
          return 0;
        }
        if (uVar3 <= uVar2) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar5 = (code *)swi(3);
          iVar6 = (*pcVar5)();
          return iVar6;
        }
        pGVar7 = (pLVar1->fields)._items;
        if (pGVar7 == (GameBoosterSettingWithGoldSetting__Array *)0x0) goto code_?;
        if ((uint)pGVar7->max_length <= uVar2) {
          FUN_?();
          pcVar5 = (code *)swi(3);
          iVar6 = (*pcVar5)();
          return iVar6;
        }
        lVar8 = *(longlong *)((longlong)pGVar7->vector + lVar4 + -0x20);
        if ((lVar8 == 0) || (pBVar9 = (this->fields).boost, pBVar9 == (Boost *)0x0))
        goto code_?;
        pSVar10 = *(String **)(lVar8 + 0x18);
        pSVar11 = (pBVar9->fields)._BoostKey_k__BackingField;
        if ((pSVar10 == pSVar11) ||
           (((pSVar10 != (String *)0x0 && (pSVar11 != (String *)0x0)) &&
            (((pSVar10->fields)._stringLength == (pSVar11->fields)._stringLength &&
             (bVar12 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                ((uint8_t *)&(pSVar10->fields)._firstChar,
                                 (uint8_t *)&(pSVar11->fields)._firstChar,
                                 (longlong)(pSVar10->fields)._stringLength * 2,(MethodInfo *)0x0),
             bVar12 != 0)))))) break;
        uVar2 = uVar2 + 1;
        lVar4 = lVar4 + 8;
      }
      this_03 = (GameBoosterSettingWithGoldSetting *)FUN_?(pLVar1);
      if ((this_03 != (GameBoosterSettingWithGoldSetting *)0x0) &&
         (pKVar13 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
                    GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting
                    ::GameBoosterSettingWithGoldSetting_get_GoldPrice(this_03,(MethodInfo *)0x0),
         pKVar13 != (KogamaSettingNumericBase_1_System_Int32_ *)0x0)) {
        iVar6 = FUN_?(pKVar13,
                              MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__get_NumericValue__
                             );
        return iVar6;
      }
    }
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  iVar6 = (*pcVar5)();
  return iVar6;
}


/* Void Initialize(Boost, Boolean) */

void Assembly-CSharp.dll::BoostMenuItem::BoostMenuItem_Initialize
               (BoostMenuItem *this,Boost *boost,bool boostUnlocked,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__BoostMenuItem__BoostChanged__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<BoostMenuItem::BoosterDef>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<BoostMenuItem::BoosterDef>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject__UnityEngine__Transform__bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__UI__Image_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Image>_UnityEngine__UI__Image__UnityEngine__Transform__bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_N0);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields).boost = boost;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).boost >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pTVar6 = (this->fields).boostDescription;
  if (boost != (Boost *)0x0) {
    pSVar7 = (boost->fields).description;
    pOVar8 = Boost::Boost_get_Value(boost,(MethodInfo *)0x0);
    PStack_9._arg0 = (Object *)0x0;
    PStack_9._arg1 = (Object *)0x0;
    PStack_9._arg2 = (Object *)0x0;
    PStack_9._args = (Object__Array *)0x0;
    mscorlib.dll::System::ParamsArray::ParamsArray__ctor(&PStack_9,pOVar8,(MethodInfo *)0x0);
    PStack_10._arg0 = PStack_9._arg0;
    PStack_10._arg1 = PStack_9._arg1;
    PStack_10._arg2 = PStack_9._arg2;
    PStack_10._args = PStack_9._args;
    pSVar7 = mscorlib.dll::System::String::String_FormatHelper
                       ((IFormatProvider *)0x0,pSVar7,&PStack_10,(MethodInfo *)0x0);
    if (pTVar6 != (Text *)0x0) {
      (*(pTVar6->klass->vtable).set_text.methodPtr)(pTVar6,pSVar7);
      this_00 = (this->fields).boostImageController;
      if (this_00 != (BoostImageController *)0x0) {
        original_00 = BoostImageController::BoostImageController_GetBoostVisualization
                                (this_00,(boost->fields)._Type_k__BackingField,(MethodInfo *)0x0);
        this_01 = (this->fields).boostActiveIcon;
        if (this_01 != (RectTransform *)0x0) {
          pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)this_01,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                    ((Object *)original_00,pTVar11,0,
                     UnityEngine__UI__Image_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Image>_UnityEngine__UI__Image__UnityEngine__Transform__bool_
                    );
          method_00 = (MethodInfo *)0x0;
          player = (MVPlayer *)(ulonglong)boostUnlocked;
          BoostMenuItem_SetBoostUIUnlocked(this,boostUnlocked,(MethodInfo *)0x0);
          MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,player,method_00);
          if (extraout_RAX != 0) {
            this_02 = *(BoostController **)(extraout_RAX + 0xa0);
            type = (boost->fields)._Type_k__BackingField;
            this_04 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
            UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
            NavMesh_OnNavMeshPreUpdate__ctor
                      (this_04,(Object *)this,MethodInfo__BoostMenuItem__BoostChanged__,
                       (MethodInfo *)0x0);
            if (this_02 != (BoostController *)0x0) {
              BoostController::BoostController_SubscribeToBoostChanged
                        (this_02,type,(Action *)this_04,(MethodInfo *)0x0);
              pLVar12 = (this->fields).boosterList;
              uVar2 = 0;
              if (pLVar12 != (List_1_BoostMenuItem_BoosterDef_ *)0x0) {
                lVar13 = 0x20;
                for (; (int)uVar2 < (pLVar12->fields)._size; uVar2 = uVar2 + 1) {
                  if ((uint)(pLVar12->fields)._size <= uVar2) {
code_?:
                    mscorlib.dll::System::ThrowHelper::
                    ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                    pcVar14 = (code *)swi(3);
                    (*pcVar14)();
                    return;
                  }
                  pBVar15 = (pLVar12->fields)._items;
                  if (pBVar15 == (BoostMenuItem_BoosterDef__Array *)0x0) goto code_?;
                  if ((uint)pBVar15->max_length <= uVar2) {
code_?:
                    FUN_?();
                    pcVar14 = (code *)swi(3);
                    (*pcVar14)();
                    return;
                  }
                  if (*(int *)((longlong)
                               &((BoostMenuItem_BoosterDef__Array *)(pBVar15->vector + -2))->klass +
                              lVar13) == (boost->fields)._Type_k__BackingField) {
                    if ((uint)(pLVar12->fields)._size <= uVar2) goto code_?;
                    pBVar15 = (pLVar12->fields)._items;
                    if (pBVar15 == (BoostMenuItem_BoosterDef__Array *)0x0) goto code_?;
                    if ((uint)pBVar15->max_length <= uVar2) goto code_?;
                    pTVar11 = (Transform *)(this->fields).boostTypeImageParent;
                    original = pBVar15->vector[(int)uVar2].iconPrefab;
                    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                      FUN_?();
                    }
                    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                              ((Object *)original,pTVar11,0,
                               UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject__UnityEngine__Transform__bool_
                              );
                    break;
                  }
                  lVar13 = lVar13 + 0x10;
                }
                if (boostUnlocked != 0) {
                  this_03 = (this->fields).boostActiveIconCanvasGroup;
                  if (this_03 == (CanvasGroup *)0x0) goto code_?;
                  UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                            (this_03,_UNK_?,(MethodInfo *)0x0);
                }
                pTVar6 = (this->fields).priceText;
                value = BoostMenuItem_GetBoostPrice(this,(MethodInfo *)0x0);
                pSVar7 = StringLiteral_N0;
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__System__Number);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                if (cRam_? == '\0') {
                  FUN_?(&
                                MethodInfo__System__ReadOnlySpan<wchar_t>__ReadOnlySpan_System__Char___int_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                if (pSVar7 == (String *)0x0) {
                  pOVar8 = (Object *)0x0;
                  pOVar16 = (Object *)0x0;
                }
                else {
                  pOVar8 = (Object *)&(pSVar7->fields)._firstChar;
                  PStack_9._arg1 = (Object *)(ulonglong)(uint)(pSVar7->fields)._stringLength;
                  pOVar16 = PStack_9._arg1;
                  PStack_9._arg0 = pOVar8;
                }
                if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
                  FUN_?();
                }
                PStack_9._arg0 = pOVar8;
                PStack_9._arg1 = pOVar16;
                pSVar7 = mscorlib.dll::System::Number::Number_FormatInt32
                                   (value,(ReadOnlySpan_1_Char_ *)&PStack_9,(IFormatProvider *)0x0,
                                    (MethodInfo *)0x0);
                if ((pSVar7 != (String *)0x0) &&
                   (pSVar7 = mscorlib.dll::System::String::String_Replace_1
                                       (pSVar7,::StringLiteral__,::StringLiteral__,(MethodInfo *)0x0
                                       ), pTVar6 != (Text *)0x0)) {
                  UNRECOVERED_JUMPTABLE = (pTVar6->klass->vtable).set_text.methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*UNRECOVERED_JUMPTABLE)
                            (pTVar6,pSVar7,(pTVar6->klass->vtable).set_text.method,
                             UNRECOVERED_JUMPTABLE);
                  return;
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
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::BoostMenuItem::BoostMenuItem_OnDestroy
               (BoostMenuItem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,(MVPlayer *)method,in_R8);
  if (extraout_RAX != 0) {
    this_00 = *(BoostController **)(extraout_RAX + 0xa0);
    pBVar2 = (this->fields).boost;
    if (pBVar2 != (Boost *)0x0) {
      type = (pBVar2->fields)._Type_k__BackingField;
      this_01 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_01,(Object *)this,MethodInfo__BoostMenuItem__BoostChanged__,(MethodInfo *)0x0)
      ;
      if (this_00 != (BoostController *)0x0) {
        BoostController::BoostController_UnSubscribeToBoostChanged
                  (this_00,type,(Action *)this_01,(MethodInfo *)0x0);
        return;
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnPurchaseBoostPressed() */

void Assembly-CSharp.dll::BoostMenuItem::BoostMenuItem_OnPurchaseBoostPressed
               (BoostMenuItem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__BoostMenuItem__OnPurchaseSuccessful__);
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
                  BoostPurchasePopup_MethodInfo__UnityEngine__Object__Instantiate<BoostPurchasePopup>_BoostPurchasePopup_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__BoostMenuItem____c__DisplayClass29_0___OnPurchaseBoostPressed_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BoostMenuItem____c__DisplayClass29_0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__BoostMenuItem____c__DisplayClass29_1___OnPurchaseBoostPressed_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BoostMenuItem____c__DisplayClass29_1);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
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
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 != (GameSessionData *)0x0) {
    if ((pGVar1->fields).profileID < 1) {
      pOVar2 = (Object *)FUN_?(TypeInfo__BoostMenuItem____c__DisplayClass29_0);
      pGVar3 = (this->fields).boostTouristInformation;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pOVar4 = (Object__Class *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                         ((Object *)pGVar3,
                          UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                         );
      if (pOVar2 != (Object *)0x0) {
        bVar5 = iRam_? != 0;
        pOVar2[1].klass = pOVar4;
        if (bVar5) {
          uVar6 = (uint)((ulonglong)(pOVar2 + 1) >> 0xc);
          lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
          do {
            uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
            puVar9 = (ulonglong *)(lVar7 + 0xADDR);
            LOCK();
            bVar5 = uVar8 == *puVar9;
            if (bVar5) {
              *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (!bVar5);
        }
        pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
        pEVar10 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                               );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]
        ::ExecuteEvents_EventFunction_1_System_Object___ctor
                  (pEVar10,pOVar2,
                   MethodInfo__BoostMenuItem____c__DisplayClass29_0___OnPurchaseBoostPressed_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (pGVar3,(BaseEventData *)0x0,pEVar10,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        return;
      }
    }
    else {
      pOVar2 = (Object *)FUN_?(TypeInfo__BoostMenuItem____c__DisplayClass29_1);
      original = (this->fields).purchasePopupPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pOVar4 = (Object__Class *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                         ((Object *)original,
                          BoostPurchasePopup_MethodInfo__UnityEngine__Object__Instantiate<BoostPurchasePopup>_BoostPurchasePopup_
                         );
      if (pOVar2 != (Object *)0x0) {
        bVar5 = iRam_? != 0;
        pOVar2[1].klass = pOVar4;
        if (bVar5) {
          uVar6 = (uint)((ulonglong)(pOVar2 + 1) >> 0xc);
          lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
          do {
            uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
            puVar9 = (ulonglong *)(lVar7 + 0xADDR);
            LOCK();
            bVar5 = uVar8 == *puVar9;
            if (bVar5) {
              *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (!bVar5);
        }
        pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
        pEVar10 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                               );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]
        ::ExecuteEvents_EventFunction_1_System_Object___ctor
                  (pEVar10,pOVar2,
                   MethodInfo__BoostMenuItem____c__DisplayClass29_1___OnPurchaseBoostPressed_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (pGVar3,(BaseEventData *)0x0,pEVar10,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        price = BoostMenuItem_GetBoostPrice(this,(MethodInfo *)0x0);
        (this->fields).price = price;
        pBVar11 = (this->fields).boost;
        pOVar4 = pOVar2[1].klass;
        if (pBVar11 != (Boost *)0x0) {
          boostType = (pBVar11->fields)._Type_k__BackingField;
          boostKey = (pBVar11->fields)._BoostKey_k__BackingField;
          boostName = (pBVar11->fields)._EditTitle_k__BackingField;
          this_00 = (NavMesh_OnNavMeshPreUpdate *)
                    FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
          UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
          NavMesh_OnNavMeshPreUpdate__ctor
                    (this_00,(Object *)this,MethodInfo__BoostMenuItem__OnPurchaseSuccessful__,
                     (MethodInfo *)0x0);
          if (pOVar4 != (Object__Class *)0x0) {
            BoostPurchasePopup::BoostPurchasePopup_Initialize
                      ((BoostPurchasePopup *)pOVar4,boostType,boostKey,boostName,price,
                       (UnityAction *)this_00,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void OnPurchaseSuccessful() */

void Assembly-CSharp.dll::BoostMenuItem::BoostMenuItem_OnPurchaseSuccessful
               (BoostMenuItem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__BoostType);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__StatHatWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Purchase_Booster_GoldSpent);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Purchase_Booster_);
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
  if (((((pMVar1 != (MVGameControllerBase *)0x0) &&
        (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
       (this_01 = (pMVar2->fields).playerContainer, this_01 != (MVPlayerContainer *)0x0)) &&
      ((pMVar3 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_01,(MethodInfo *)0x0),
       pMVar3 != (MVLocalPlayer *)0x0 && (pBVar4 = (this->fields).boost, pBVar4 != (Boost *)0x0))))
     && (this_02 = (pMVar3->fields).boostController, this_02 != (BoostController *)0x0)) {
    BoostController::BoostController_ActivateBoost
              (this_02,(pBVar4->fields)._Type_k__BackingField,(MethodInfo *)0x0);
    pBVar4 = (this->fields).boost;
    if (pBVar4 != (Boost *)0x0) {
      EStack_5.klass = (Enum__Class *)TypeInfo__BoostType;
      iStack_6 = (pBVar4->fields)._Type_k__BackingField;
      EStack_5.monitor = (MonitorData *)0xffffffffffffffff;
      pSVar7 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_5,(MethodInfo *)0x0);
      pSVar7 = mscorlib.dll::System::String::String_Concat_4
                         (StringLiteral_Purchase_Booster_,pSVar7,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__StatHatWrapper->_1).field_0x1c == 0) {
        FUN_?();
      }
      StatHatWrapper::StatHatWrapper_Count(pSVar7,1,(MethodInfo *)0x0);
      count = (this->fields).price;
      player = (MVPlayer *)(ulonglong)count;
      method_00 = (MethodInfo *)0x0;
      StatHatWrapper::StatHatWrapper_Count
                (StringLiteral_Purchase_Booster_GoldSpent,count,(MethodInfo *)0x0);
      MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,player,method_00);
      if ((extraout_RAX != 0) && (pBVar4 = (this->fields).boost, pBVar4 != (Boost *)0x0)) {
        if (*(BoostController **)(extraout_RAX + 0xa0) != (BoostController *)0x0) {
          boostUnlocked =
               BoostController::BoostController_IsBoostActive
                         (*(BoostController **)(extraout_RAX + 0xa0),
                          (pBVar4->fields)._Type_k__BackingField,(MethodInfo *)0x0);
          BoostMenuItem_SetBoostUIUnlocked(this,boostUnlocked,(MethodInfo *)0x0);
          if (boostUnlocked == 0) {
            return;
          }
          pNVar8 = (this->fields).boostActiveIconFader;
          if (pNVar8 != (NotificationFade *)0x0) {
            (pNVar8->fields).shouldHideWhenDone = 0;
            pNVar8 = (this->fields).boostActiveIconFader;
            if (pNVar8 != (NotificationFade *)0x0) {
              this_00 = (pNVar8->fields).group;
              (pNVar8->fields).playing = 1;
              (pNVar8->fields).pauseAt = (pNVar8->fields).duration;
              if (this_00 != (CanvasGroup *)0x0) {
                UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                          (this_00,0.0,(MethodInfo *)0x0);
                pcVar9 = pcRam_?;
                (pNVar8->fields).currentTime = 0.0;
                pcVar10 = pcRam_?;
                if ((pcVar9 == (code *)0x0) &&
                   (pcVar9 = (code *)FUN_?(&UNK_?), pcVar10 = pcVar9,
                   pcVar9 == (code *)0x0)) {
                  uVar11 = func_?(&UNK_?);
                  FUN_?(uVar11,0);
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                pcRam_? = pcVar10;
                fVar12 = (float)(*pcVar9)();
                (this->fields).activeIconScaleEffectStartTime = fVar12;
                return;
              }
            }
          }
          FUN_?();
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnUnlockBoostWithAdClicked() */

void Assembly-CSharp.dll::BoostMenuItem::BoostMenuItem_OnUnlockBoostWithAdClicked
               (BoostMenuItem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__BoostMenuItem___OnUnlockBoostWithAdClicked_b__28_0_IBoostAdController__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IBoostAdController>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IBoostAdController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IBoostAdController>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
            FUN_?(
                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IBoostAdController>
                         );
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
  ExecuteEvents_EventFunction_1_System_Object___ctor
            (this_01,(Object *)this,
             MethodInfo__BoostMenuItem___OnUnlockBoostWithAdClicked_b__28_0_IBoostAdController__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar2 = 
  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IBoostAdController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IBoostAdController>_
  ;
  if ((
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IBoostAdController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IBoostAdController>_
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
    if ((pMVar2->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar2);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
            (pGVar1,(IList_1_UnityEngine_Transform_ *)
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                    s_InternalTransformList,(MethodInfo *)0x0);
  pLVar3 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
           s_InternalTransformList;
  if (pLVar3 != (List_1_UnityEngine_Transform_ *)0x0) {
    lVar4 = (longlong)(pLVar3->fields)._size;
    uVar5 = 0;
    if (0 < lVar4) {
      lVar6 = 0;
      lVar7 = 0x20;
      do {
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pLVar3 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar3 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
        if ((uint)(pLVar3->fields)._size <= uVar5) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pTVar9 = (pLVar3->fields)._items;
        if (pTVar9 == (Transform__Array *)0x0) goto code_?;
        if ((uint)pTVar9->max_length <= uVar5) {
          FUN_?();
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        this_00 = *(Component **)((longlong)pTVar9->vector + lVar7 + -0x20);
        if (this_00 == (Component *)0x0) goto code_?;
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           (this_00,(MethodInfo *)0x0);
        bVar10 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_Execute_18
                          (pGVar1,(BaseEventData *)0x0,this_01,
                           (pMVar2->field7_0x38).rgctx_data[1].method);
        if (bVar10 != 0) {
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    (this_00,(MethodInfo *)0x0);
          return;
        }
        uVar5 = uVar5 + 1;
        lVar6 = lVar6 + 1;
        lVar7 = lVar7 + 8;
      } while (lVar6 < lVar4);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnUnlockBoostWithSubscriptionClicked() */

void Assembly-CSharp.dll::BoostMenuItem::BoostMenuItem_OnUnlockBoostWithSubscriptionClicked
               (BoostMenuItem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((((pMVar1 != (MVGameControllerBase *)0x0) &&
        (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
       (this_00 = (pMVar2->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) &&
      ((pMVar3 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0),
       pMVar3 != (MVLocalPlayer *)0x0 && (pBVar4 = (this->fields).boost, pBVar4 != (Boost *)0x0))))
     && (this_01 = (pMVar3->fields).boostController, this_01 != (BoostController *)0x0)) {
    type = (pBVar4->fields)._Type_k__BackingField;
    player = (MVPlayer *)(ulonglong)type;
    method_00 = (MethodInfo *)0x0;
    BoostController::BoostController_ActivateBoost(this_01,type,(MethodInfo *)0x0);
    MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,player,method_00);
    if ((extraout_RAX != 0) && (pBVar4 = (this->fields).boost, pBVar4 != (Boost *)0x0)) {
      if (*(BoostController **)(extraout_RAX + 0xa0) != (BoostController *)0x0) {
        boostUnlocked =
             BoostController::BoostController_IsBoostActive
                       (*(BoostController **)(extraout_RAX + 0xa0),
                        (pBVar4->fields)._Type_k__BackingField,(MethodInfo *)0x0);
        BoostMenuItem_SetBoostUIUnlocked(this,boostUnlocked,(MethodInfo *)0x0);
        if (boostUnlocked == 0) {
          return;
        }
        pNVar5 = (this->fields).boostActiveIconFader;
        if (pNVar5 != (NotificationFade *)0x0) {
          (pNVar5->fields).shouldHideWhenDone = 0;
          pNVar5 = (this->fields).boostActiveIconFader;
          if (pNVar5 != (NotificationFade *)0x0) {
            this_02 = (pNVar5->fields).group;
            (pNVar5->fields).playing = 1;
            (pNVar5->fields).pauseAt = (pNVar5->fields).duration;
            if (this_02 != (CanvasGroup *)0x0) {
              UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                        (this_02,0.0,(MethodInfo *)0x0);
              pcVar6 = pcRam_?;
              (pNVar5->fields).currentTime = 0.0;
              pcVar7 = pcRam_?;
              if ((pcVar6 == (code *)0x0) &&
                 (pcVar6 = (code *)FUN_?(&UNK_?), pcVar7 = pcVar6,
                 pcVar6 == (code *)0x0)) {
                uVar8 = func_?(&UNK_?);
                FUN_?(uVar8,0);
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              pcRam_? = pcVar7;
              fVar9 = (float)(*pcVar6)();
              (this->fields).activeIconScaleEffectStartTime = fVar9;
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
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetBoostActive(Boolean) */

void Assembly-CSharp.dll::BoostMenuItem::BoostMenuItem_SetBoostActive
               (BoostMenuItem *this,bool isBoostActive,MethodInfo *method)

{
  BoostMenuItem_SetBoostUIUnlocked(this,isBoostActive,(MethodInfo *)0x0);
  if (isBoostActive == 0) {
    return;
  }
  pNVar1 = (this->fields).boostActiveIconFader;
  if (pNVar1 != (NotificationFade *)0x0) {
    (pNVar1->fields).shouldHideWhenDone = 0;
    pNVar1 = (this->fields).boostActiveIconFader;
    if (pNVar1 != (NotificationFade *)0x0) {
      this_00 = (pNVar1->fields).group;
      (pNVar1->fields).playing = 1;
      (pNVar1->fields).pauseAt = (pNVar1->fields).duration;
      if (this_00 != (CanvasGroup *)0x0) {
        UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                  (this_00,0.0,(MethodInfo *)0x0);
        pcVar2 = pcRam_?;
        (pNVar1->fields).currentTime = 0.0;
        pcVar3 = pcRam_?;
        if ((pcVar2 == (code *)0x0) &&
           (pcVar2 = (code *)FUN_?(&UNK_?), pcVar3 = pcVar2, pcVar2 == (code *)0x0))
        {
          uVar4 = func_?(&UNK_?);
          FUN_?(uVar4,0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcRam_? = pcVar3;
        fVar5 = (float)(*pcVar2)();
        (this->fields).activeIconScaleEffectStartTime = fVar5;
        return;
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetBoostUIUnlocked(Boolean) */

void Assembly-CSharp.dll::BoostMenuItem::BoostMenuItem_SetBoostUIUnlocked
               (BoostMenuItem *this,bool boostUnlocked,MethodInfo *method)

{
  bVar1 = MVClientSettings::MVClientSettings_get_IsSubscriber((MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVClientSettings);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar2 = false;
  if ((TypeInfo__MVClientSettings->static_fields->flags & 0x2000000U) == 0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pGVar3 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar3 == (GameSessionData *)0x0) goto code_?;
    bVar4 = (pGVar3->fields).gameMode == 0;
  }
  else {
    bVar4 = true;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVClientSettings);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (((TypeInfo__MVClientSettings->static_fields->flags & 0x4000000U) == 0) ||
     (bVar5 = MVClientSettings::MVClientSettings_get_IsSubscriber((MethodInfo *)0x0), bVar5 != 0)) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pGVar3 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar3 == (GameSessionData *)0x0) goto code_?;
    bVar6 = (pGVar3->fields).gameMode == 0;
  }
  else {
    bVar6 = true;
  }
  this_00 = (this->fields).timeLeftText;
  if ((this_00 != (Text *)0x0) &&
     (pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this_00,(MethodInfo *)0x0), pGVar7 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar7,boostUnlocked,(MethodInfo *)0x0);
    pGVar7 = (this->fields).boostUnlockedGlow;
    if (pGVar7 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar7,boostUnlocked,(MethodInfo *)0x0);
      pGVar7 = (this->fields).boostActiveUI;
      if (pGVar7 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar7,boostUnlocked,(MethodInfo *)0x0);
        pBVar8 = (this->fields).getWithAdOrSubscriptionButton;
        if (pBVar8 != (Button *)0x0) {
          pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pBVar8,(MethodInfo *)0x0);
          if (pGVar7 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar7,(bVar1 | bVar6) & (boostUnlocked ^ 1) & bVar4,(MethodInfo *)0x0);
            pBVar8 = (this->fields).getWithAdDisabled;
            if (pBVar8 != (Button *)0x0) {
              pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  ((Component *)pBVar8,(MethodInfo *)0x0);
              if (boostUnlocked == 0) {
                if (bVar4 == false) {
                  bVar1 = 1;
                }
                else if (bVar6 == false) {
                  bVar1 = bVar1 ^ 1;
                }
                else {
                  bVar1 = 0;
                }
              }
              else {
                bVar1 = 0;
              }
              if (pGVar7 != (GameObject *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar7,bVar1,(MethodInfo *)0x0);
                pGVar7 = (this->fields).buttonIcon;
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__MVGameControllerBase);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pGVar3 = TypeInfo__MVGameControllerBase->static_fields->
                         _GameSessionData_k__BackingField;
                if ((pGVar3 != (GameSessionData *)0x0) && (pGVar7 != (GameObject *)0x0)) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar7,(pGVar3->fields).gameMode != 0,(MethodInfo *)0x0);
                  pEVar9 = (this->fields).embeddedPlayerConfig;
                  if (pEVar9 != (EmbeddedPlayerConfig *)0x0) {
                    if (cRam_? == '\0') {
                      FUN_?(&TypeInfo__UnityEngine__Debug);
                      LOCK();
                      UNLOCK();
                      FUN_?(&StringLiteral_Embedded_site_data_not_initializ);
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    if ((pEVar9->fields).initialized == 0) {
                      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                        FUN_?();
                      }
                      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                                ((Object *)StringLiteral_Embedded_site_data_not_initializ,
                                 (MethodInfo *)0x0);
                      bVar1 = (pEVar9->fields).kogamaDefaultData.allowsOpenInNewTab;
                      bVar5 = (pEVar9->fields).kogamaDefaultData.allowsRedirectToWebpage;
                      bVar10 = (pEVar9->fields).kogamaDefaultData.allowsModals;
                      uVar11 = (pEVar9->fields).kogamaDefaultData.hideGoldShop;
                      cVar12 = uVar11;
                    }
                    else {
                      bVar1 = (pEVar9->fields).currentSite.allowsOpenInNewTab;
                      bVar5 = (pEVar9->fields).currentSite.allowsRedirectToWebpage;
                      bVar10 = (pEVar9->fields).currentSite.allowsModals;
                      cVar12 = (pEVar9->fields).currentSite.hideGoldShop;
                    }
                    bVar13 = 1;
                    if ((bVar10 == 0) && (bVar1 == 0)) {
                      bVar13 = bVar5;
                    }
                    pBVar8 = (this->fields).getWithGold;
                    if (pBVar8 != (Button *)0x0) {
                      pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_get_gameObject((Component *)pBVar8,(MethodInfo *)0x0);
                      bVar4 = false;
                      if (cVar12 == '\0') {
                        if (boostUnlocked == 0) {
                          if (cRam_? == '\0') {
                            FUN_?(&TypeInfo__MVGameControllerBase);
                            LOCK();
                            UNLOCK();
                            cRam_? = '\x01';
                          }
                          pGVar3 = TypeInfo__MVGameControllerBase->static_fields->
                                   _GameSessionData_k__BackingField;
                          if (pGVar3 == (GameSessionData *)0x0) goto code_?;
                          bVar2 = (pGVar3->fields).gameMode != 0;
                        }
                        if (bVar13 != 0) {
                          bVar4 = bVar2;
                        }
                      }
                      if (pGVar7 != (GameObject *)0x0) {
                        if (cRam_? == '\0') {
                          FUN_?(&
                                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                                        ,bVar4,0,in_R9,unaff_RSI);
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        if (pGVar7 == (GameObject *)0x0) {
                          FUN_?();
                          pcVar14 = (code *)swi(3);
                          (*pcVar14)();
                          return;
                        }
                        pvVar15 = (pGVar7->fields)._.m_CachedPtr;
                        if (pvVar15 == (void *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                          ThrowHelper_2_ThrowNullReferenceException
                                    ((Object *)pGVar7,(MethodInfo *)0x0);
                          pcVar14 = (code *)swi(3);
                          (*pcVar14)();
                          return;
                        }
                        pcVar14 = pcRam_?;
                        if ((pcRam_? == (code *)0x0) &&
                           (pcVar14 = (code *)FUN_?(&UNK_?), pcVar14 == (code *)0x0)
                           ) {
                          uVar16 = func_?(&UNK_?);
                          FUN_?(uVar16,0);
                          pcVar14 = (code *)swi(3);
                          (*pcVar14)();
                          return;
                        }
                        pcRam_? = pcVar14;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                        (*pcRam_?)(pvVar15,bVar4);
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
code_?:
  FUN_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::BoostMenuItem::BoostMenuItem_Update
               (BoostMenuItem *this,MethodInfo *method)

{
  obj = (this->fields).activeIconScaleEffect;
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
  fVar3 = (float)(*pcRam_?)();
  if (obj != (AnimationCurve *)0x0) {
    pvVar4 = (obj->fields).m_Ptr;
    if (pvVar4 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    fVar5 = (this->fields).activeIconScaleEffectStartTime;
    fVar6 = (this->fields).activeIconScaleEffectDuration;
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
    uVar7 = (*pcRam_?)(pvVar4,(fVar3 - fVar5) / fVar6);
    obj_00 = (this->fields).boostActiveIcon;
    if (obj_00 != (RectTransform *)0x0) {
      uStack_8 = CONCAT44(uVar7,uVar7);
      uStack_9 = 0;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar4 = (obj_00->fields)._._._.m_CachedPtr;
      if (pvVar4 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj_00,(MethodInfo *)0x0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
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
      (*pcRam_?)(pvVar4,&uStack_8);
      return;
    }
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <OnUnlockBoostWithAdClicked>b__28_0(IBoostAdController, BaseEventData) */

void Assembly-CSharp.dll::BoostMenuItem::BoostMenuItem__OnUnlockBoostWithAdClicked_b__28_0
               (BoostMenuItem *this,IBoostAdController *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<bool>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__BoostMenuItem__BoostUnlockedResponse_bool_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IBoostAdController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pBVar1 = (this->fields).boost;
  if (pBVar1 != (Boost *)0x0) {
    uVar2 = (pBVar1->fields)._Type_k__BackingField;
    uVar3 = FUN_?(TypeInfo__System__Action<bool>);
    FUN_?(uVar3,this,MethodInfo__BoostMenuItem__BoostUnlockedResponse_bool_);
    if (x != (IBoostAdController *)0x0) {
      pIVar4 = x->klass;
      uVar5 = 0;
      uVar6._0_1_ = (pIVar4->_1).rank;
      uVar6._1_1_ = (pIVar4->_1).minimumAlignment;
      if (uVar6 != 0) {
        do {
          if (pIVar4->interfaceOffsets[uVar5].interfaceType ==
              (Il2CppClass *)TypeInfo__IBoostAdController) {
            pIVar7 = &pIVar4->vtable + pIVar4->interfaceOffsets[uVar5].offset;
            goto code_?;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar6);
      }
      pIVar7 = (IBoostAdController__VTable *)FUN_?(x,TypeInfo__IBoostAdController,0);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pIVar7->TryShowAd).methodPtr)(x,(ulonglong)uVar2,uVar3,(pIVar7->TryShowAd).method);
      return;
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

