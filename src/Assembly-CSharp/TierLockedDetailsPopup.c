
/* String GetHeaderText() */

String * Assembly-CSharp.dll::TierLockedDetailsPopup::TierLockedDetailsPopup_GetHeaderText
                   (TierLockedDetailsPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_Game_Tier__0___Locked);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = TM::TM__(StringLiteral_Game_Tier__0___Locked,(MethodInfo *)0x0);
  auStackX_8[0] = (uint)(this->fields).tierToPurchase;
  arg0 = (Object *)FUN_?(uRam_?,auStackX_8);
  PStack_2._arg0 = (Object *)0x0;
  PStack_2._arg1 = (Object *)0x0;
  PStack_2._arg2 = (Object *)0x0;
  PStack_2._args = (Object__Array *)0x0;
  mscorlib.dll::System::ParamsArray::ParamsArray__ctor(&PStack_2,arg0,(MethodInfo *)0x0);
  PStack_3._arg0 = PStack_2._arg0;
  PStack_3._arg1 = PStack_2._arg1;
  PStack_3._arg2 = PStack_2._arg2;
  PStack_3._args = PStack_2._args;
  pSVar1 = mscorlib.dll::System::String::String_FormatHelper
                     ((IFormatProvider *)0x0,pSVar1,&PStack_3,(MethodInfo *)0x0);
  return pSVar1;
}


/* String GetLockedButtonText() */

String * Assembly-CSharp.dll::TierLockedDetailsPopup::TierLockedDetailsPopup_GetLockedButtonText
                   (TierLockedDetailsPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_GO_TO_TIER__0_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar1 != (PlayerPlanetData *)0x0) {
    uVar2 = (pPVar1->fields).gamePassTier;
    pSVar3 = TM::TM__(StringLiteral_GO_TO_TIER__0_,(MethodInfo *)0x0);
    auStackX_18[0] = (uint)(byte)(uVar2 + 1);
    arg0 = (Object *)FUN_?(uRam_?,auStackX_18);
    PStack_4._arg0 = (Object *)0x0;
    PStack_4._arg1 = (Object *)0x0;
    PStack_4._arg2 = (Object *)0x0;
    PStack_4._args = (Object__Array *)0x0;
    mscorlib.dll::System::ParamsArray::ParamsArray__ctor(&PStack_4,arg0,(MethodInfo *)0x0);
    PStack_5._arg0 = PStack_4._arg0;
    PStack_5._arg1 = PStack_4._arg1;
    PStack_5._arg2 = PStack_4._arg2;
    PStack_5._args = PStack_4._args;
    pSVar3 = mscorlib.dll::System::String::String_FormatHelper
                       ((IFormatProvider *)0x0,pSVar3,&PStack_5,(MethodInfo *)0x0);
    return pSVar3;
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  pSVar3 = (String *)(*pcVar6)();
  return pSVar3;
}


/* String GetLockedDescription() */

String * Assembly-CSharp.dll::TierLockedDetailsPopup::TierLockedDetailsPopup_GetLockedDescription
                   (TierLockedDetailsPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_You_need_to_unlock_Tier__0__and_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_You_need_to_unlock_Tier__0__befo);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar1 != (PlayerPlanetData *)0x0) {
    bVar2 = (pPVar1->fields).gamePassTier + 1;
    if ((int)((uint)(this->fields).tierToPurchase - (uint)bVar2) < 2) {
      pSVar3 = TM::TM__(StringLiteral_You_need_to_unlock_Tier__0__befo,(MethodInfo *)0x0);
      auStackX_18[0] = (uint)bVar2;
      pOVar4 = (Object *)FUN_?(uRam_?,auStackX_18);
      PStack_5._arg0 = (Object *)0x0;
      PStack_5._arg1 = (Object *)0x0;
      PStack_5._arg2 = (Object *)0x0;
      PStack_5._args = (Object__Array *)0x0;
      mscorlib.dll::System::ParamsArray::ParamsArray__ctor(&PStack_5,pOVar4,(MethodInfo *)0x0);
      PStack_6._arg0 = PStack_5._arg0;
      PStack_6._arg1 = PStack_5._arg1;
      PStack_6._arg2 = PStack_5._arg2;
      PStack_6._args = PStack_5._args;
      pSVar3 = mscorlib.dll::System::String::String_FormatHelper
                         ((IFormatProvider *)0x0,pSVar3,&PStack_6,(MethodInfo *)0x0);
      return pSVar3;
    }
    pSVar3 = TM::TM__(StringLiteral_You_need_to_unlock_Tier__0__and_,(MethodInfo *)0x0);
    auStackX_18[0] = (uint)bVar2;
    pOVar4 = (Object *)FUN_?(uRam_?,auStackX_18);
    auStackX_18[0] = bVar2 + 1;
    arg1 = (Object *)FUN_?(uRam_?,auStackX_18);
    PStack_5._arg0 = (Object *)0x0;
    PStack_5._arg1 = (Object *)0x0;
    PStack_5._arg2 = (Object *)0x0;
    PStack_5._args = (Object__Array *)0x0;
    mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1(&PStack_5,pOVar4,arg1,(MethodInfo *)0x0)
    ;
    PStack_6._arg0 = PStack_5._arg0;
    PStack_6._arg1 = PStack_5._arg1;
    PStack_6._arg2 = PStack_5._arg2;
    PStack_6._args = PStack_5._args;
    pSVar3 = mscorlib.dll::System::String::String_FormatHelper
                       ((IFormatProvider *)0x0,pSVar3,&PStack_6,(MethodInfo *)0x0);
    return pSVar3;
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  pSVar3 = (String *)(*pcVar7)();
  return pSVar3;
}


/* GamePassTier GetLockedTier() */

GamePassTier__Enum
Assembly-CSharp.dll::TierLockedDetailsPopup::TierLockedDetailsPopup_GetLockedTier
          (TierLockedDetailsPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar1 != (PlayerPlanetData *)0x0) {
    return (GamePassTier__Enum)(byte)((pPVar1->fields).gamePassTier + 1);
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  GVar3 = (*pcVar2)();
  return GVar3;
}


/* Void Initialize(GamePassTier, UnityAction) */

void Assembly-CSharp.dll::TierLockedDetailsPopup::TierLockedDetailsPopup_Initialize
               (TierLockedDetailsPopup *this,GamePassTier__Enum tierToPurchase,
               UnityAction *OnPurchaseSuccessful,MethodInfo *method)

{
  bVar1 = iRam_? != 0;
  (this->fields).tierToPurchase = (uint8_t)tierToPurchase;
  (this->fields).onPurchaseSuccessful = OnPurchaseSuccessful;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).onPurchaseSuccessful >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (ulonglong)(uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  pTVar6 = (this->fields).tierText;
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
  aRStack_7[0]._pointer._value = (void *)0x0;
  aRStack_7[0]._length = 0;
  aRStack_7[0]._12_4_ = 0;
  pSVar8 = mscorlib.dll::System::Number::Number_FormatInt32
                     (tierToPurchase & 0xff,aRStack_7,(IFormatProvider *)0x0,(MethodInfo *)0x0);
  if (pTVar6 == (Text *)0x0) {
    FUN_?();
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  (*(pTVar6->klass->vtable).set_text.methodPtr)
            (pTVar6,pSVar8,(pTVar6->klass->vtable).set_text.method);
  TierLockedDetailsPopup_UpdateLockedText(this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField != 0) {
    TierLockedDetailsPopup_UpdateTierProgressBar(this,(MethodInfo *)0x0);
  }
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::TierLockedDetailsPopup::TierLockedDetailsPopup_OnEnable
               (TierLockedDetailsPopup *this,MethodInfo *method)

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
                  MethodInfo__TierLockedDetailsPopup____c___OnEnable_b__20_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TierLockedDetailsPopup____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar1 == (PlayerPlanetData *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((byte)((this->fields).tierToPurchase - 1) <= (pPVar1->fields).gamePassTier) {
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__TierLockedDetailsPopup____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__TierLockedDetailsPopup____c);
    }
    this_01 = TypeInfo__TierLockedDetailsPopup____c->static_fields->__9__20_0;
    if (this_01 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      if (*(int *)&(TypeInfo__TierLockedDetailsPopup____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__TierLockedDetailsPopup____c);
      }
      object = TypeInfo__TierLockedDetailsPopup____c->static_fields->__9;
      this_01 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)object,
                 MethodInfo__TierLockedDetailsPopup____c___OnEnable_b__20_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__TierLockedDetailsPopup____c->static_fields->__9__20_0 = this_01;
      if (iRam_? != 0) {
        uVar4 = (uint)((ulonglong)&TypeInfo__TierLockedDetailsPopup____c->static_fields->__9__20_0
                       >> 0xc);
        puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar6 = *puVar5;
          LOCK();
          uVar7 = *puVar5;
          if (uVar6 == uVar7) {
            *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
        } while (uVar6 != uVar7);
      }
    }
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar3,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_01,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                    ,0);
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
      FUN_?(&TypeInfo__GamePassesManager);
      LOCK();
      UNLOCK();
      FUN_?(&
                    TierUnlockDetailsPopup_MethodInfo__UnityEngine__Object__Instantiate<TierUnlockDetailsPopup>_TierUnlockDetailsPopup_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__TierLockedDetailsPopup____c__DisplayClass21_0___ShowPurchasePopup_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__TierLockedDetailsPopup____c__DisplayClass21_0);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pOVar8 = (Object *)FUN_?(TypeInfo__TierLockedDetailsPopup____c__DisplayClass21_0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__GamePassesManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar1 != (PlayerPlanetData *)0x0) {
      iVar9 = (pPVar1->fields).progressionGamePoints;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__GamePassesManager);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
      if (pPVar1 != (PlayerPlanetData *)0x0) {
        pPVar10 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator;
        bVar11 = (pPVar1->fields).gamePassTier;
        if (pPVar10 != (PlayerTierStateCalculator *)0x0) {
          if ((pPVar10->fields).gamePointVelocityIsZero == 0) {
            pDVar12 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator
                      ::PlayerTierStateCalculator_GetTierPricingStateBasedOnUserGamePointAmount
                                (pPVar10,iVar9,(uint)bVar11,(MethodInfo *)0x0);
          }
          else {
            pDVar12 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator
                      ::PlayerTierStateCalculator_GetTierPricingStateBasedOnUserTier
                                (pPVar10,(uint)bVar11,(MethodInfo *)0x0);
          }
          if ((pDVar12 !=
               (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *
               )0x0) &&
             (pOVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        ByteEnum,System::Object]::
                        Dictionary_2_System_ByteEnum_System_Object__get_Item
                                  ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar12,
                                   (uint)(this->fields).tierToPurchase,
                                   MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                                  ), pOVar13 != (Object *)0x0)) {
            iVar9 = *(int32_t *)&pOVar13[1].monitor;
            original = (this->fields).tierUnlockDetailsPrefab;
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            pOVar14 = (Object__Class *)
                      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                ((Object *)original,
                                 TierUnlockDetailsPopup_MethodInfo__UnityEngine__Object__Instantiate<TierUnlockDetailsPopup>_TierUnlockDetailsPopup_
                                );
            if (pOVar8 != (Object *)0x0) {
              bVar15 = iRam_? != 0;
              pOVar8[1].klass = pOVar14;
              if (bVar15) {
                uVar4 = (uint)((ulonglong)(pOVar8 + 1) >> 0xc);
                puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
                do {
                  uVar6 = *puVar5;
                  LOCK();
                  uVar7 = *puVar5;
                  if (uVar6 == uVar7) {
                    *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
                  }
                  UNLOCK();
                } while (uVar6 != uVar7);
              }
              pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  ((Component *)this,(MethodInfo *)0x0);
              this_02 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                        FUN_?(
                                     TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                     );
              UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
              Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                        (this_02,pOVar8,
                         MethodInfo__TierLockedDetailsPopup____c__DisplayClass21_0___ShowPurchasePopup_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                         ,(MethodInfo *)0x0);
              if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0)
              {
                FUN_?();
              }
              UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
              ExecuteEvents_ExecuteHierarchy
                        (pGVar3,(BaseEventData *)0x0,this_02,
                         UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                        );
              if (pOVar8[1].klass != (Object__Class *)0x0) {
                TierUnlockDetailsPopup::TierUnlockDetailsPopup_Initialize
                          ((TierUnlockDetailsPopup *)pOVar8[1].klass,
                           (uint)(this->fields).tierToPurchase,iVar9,
                           (this->fields).onPurchaseSuccessful,(MethodInfo *)0x0);
                return;
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
  TierLockedDetailsPopup_UpdateLockedText(this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                  ,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral____);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar1 != (PlayerPlanetData *)0x0) {
    iVar9 = (pPVar1->fields).progressionGamePoints;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__GamePassesManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar1 != (PlayerPlanetData *)0x0) {
      pPVar10 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator;
      bVar11 = (pPVar1->fields).gamePassTier;
      if (pPVar10 != (PlayerTierStateCalculator *)0x0) {
        if ((pPVar10->fields).gamePointVelocityIsZero == 0) {
          pDVar12 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
                    PlayerTierStateCalculator_GetTierPricingStateBasedOnUserGamePointAmount
                              (pPVar10,iVar9,(uint)bVar11,(MethodInfo *)0x0);
        }
        else {
          pDVar12 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
                    PlayerTierStateCalculator_GetTierPricingStateBasedOnUserTier
                              (pPVar10,(uint)bVar11,(MethodInfo *)0x0);
        }
        bVar11 = (this->fields).tierToPurchase;
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        BVar16 = bVar11 - 1;
        if (0 < (int)BVar16) {
          if (pDVar12 ==
              (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)
              0x0) goto code_?;
          do {
            pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      ByteEnum,System::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                                ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar12,
                                 BVar16 & 0xff,
                                 MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                                );
            if (pOVar8 == (Object *)0x0) goto code_?;
            iVar9 = iVar9 - *(int *)&pOVar8[2].klass;
            BVar16 = BVar16 - 1;
          } while (0 < (int)BVar16);
        }
        iVar17 = 0;
        if (0.0 <= (float)iVar9) {
          iVar17 = iVar9;
        }
        if ((pDVar12 !=
             (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)
             0x0) && (pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                ByteEnum,System::Object]::
                                Dictionary_2_System_ByteEnum_System_Object__get_Item
                                          ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar12,
                                           (uint)(this->fields).tierToPurchase,
                                           MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                                          ), pOVar8 != (Object *)0x0)) {
          value = *(int *)&pOVar8[2].klass;
          pPVar18 = (this->fields).tierProgressBar;
          value_00 = value;
          if (iVar17 <= value) {
            value_00 = iVar17;
          }
          if (pPVar18 != (ProgressBar *)0x0) {
            value_01 = (float)value_00 / (float)value;
            if (value_01 < 0.0) {
              value_01 = 0.0;
            }
            else if (_UNK_? < value_01) {
              value_01 = _UNK_?;
            }
            this_00 = (pPVar18->fields).progressBar;
            (pPVar18->fields).progress = value_01;
            if (this_00 != (Scrollbar *)0x0) {
              UnityEngine.UI.dll::UnityEngine::UI::Scrollbar::Scrollbar_set_size
                        (this_00,value_01,(MethodInfo *)0x0);
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__System__Number);
                LOCK();
                UNLOCK();
                FUN_?(&
                              MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____
                             );
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
              RStackY_28._pointer._value = (void *)0x0;
              RStackY_28._length = 0;
              RStackY_28._12_4_ = 0;
              pSVar19 = mscorlib.dll::System::Number::Number_FormatInt32
                                  (value_00,&RStackY_28,(IFormatProvider *)0x0,(MethodInfo *)0x0);
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__System__Number);
                LOCK();
                UNLOCK();
                FUN_?(&
                              MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____
                             );
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
              RStackY_28._pointer._value = (void *)0x0;
              RStackY_28._length = 0;
              RStackY_28._12_4_ = 0;
              str2 = mscorlib.dll::System::Number::Number_FormatInt32
                               (value,&RStackY_28,(IFormatProvider *)0x0,(MethodInfo *)0x0);
              pSVar19 = mscorlib.dll::System::String::String_Concat_5
                                  (pSVar19,::StringLiteral____,str2,(MethodInfo *)0x0);
              pTVar20 = (this->fields).progressText;
              if (pTVar20 != (Text *)0x0) {
                UNRECOVERED_JUMPTABLE = (pTVar20->klass->vtable).set_text.methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*UNRECOVERED_JUMPTABLE)
                          (pTVar20,pSVar19,(pTVar20->klass->vtable).set_text.method,
                           UNRECOVERED_JUMPTABLE);
                return;
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


/* Int32 ReduceGamePointsWithPreviousTierRequirements(GamePassTier, Int32,
   Dictionary`2[MV.Common.GamePassTier,MV.WorldObject.GamePassSystem.PlayerTierState]) */

int32_t Assembly-CSharp.dll::TierLockedDetailsPopup::
        TierLockedDetailsPopup_ReduceGamePointsWithPreviousTierRequirements
                  (TierLockedDetailsPopup *this,GamePassTier__Enum gamePassTierToDisplay,
                  int32_t gamePoints,
                  Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_
                  *gameTierShopStatus,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  BVar1 = (gamePassTierToDisplay & 0xff) - 1;
  if (0 < (int)BVar1) {
    if (gameTierShopStatus ==
        (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)0x0) {
code_?:
      FUN_?();
      pcVar2 = (code *)swi(3);
      iVar3 = (*pcVar2)();
      return iVar3;
    }
    do {
      pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
               Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                         ((Dictionary_2_System_ByteEnum_System_Object_ *)gameTierShopStatus,
                          BVar1 & 0xff,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                         );
      if (pOVar4 == (Object *)0x0) goto code_?;
      gamePoints = gamePoints - *(int *)&pOVar4[2].klass;
      BVar1 = BVar1 - 1;
    } while (0 < (int)BVar1);
  }
  return gamePoints;
}


/* Void ShowLockedTier() */

void Assembly-CSharp.dll::TierLockedDetailsPopup::TierLockedDetailsPopup_ShowLockedTier
               (TierLockedDetailsPopup *this,MethodInfo *method)

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
                  GamePassesShop_MethodInfo__UnityEngine__Object__Instantiate<GamePassesShop>_GamePassesShop_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__TierLockedDetailsPopup____c__DisplayClass12_0___ShowLockedTier_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TierLockedDetailsPopup____c__DisplayClass12_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__TierLockedDetailsPopup____c__DisplayClass12_0);
  original = (this->fields).gamePassesShopPrefab;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar1 = (Object__Class *)
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                      ((Object *)original,
                       GamePassesShop_MethodInfo__UnityEngine__Object__Instantiate<GamePassesShop>_GamePassesShop_
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
    pOVar1 = object[1].klass;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__GamePassesManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar7 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if ((pPVar7 != (PlayerPlanetData *)0x0) && (pOVar1 != (Object__Class *)0x0)) {
      GamePassesShop::GamePassesShop_Initialize
                ((GamePassesShop *)pOVar1,(uint)(byte)((pPVar7->fields).gamePassTier + 1),
                 (MethodInfo *)0x0);
      pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                (this_01,object,
                 MethodInfo__TierLockedDetailsPopup____c__DisplayClass12_0___ShowLockedTier_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
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
                (pGVar8,(IList_1_UnityEngine_Transform_ *)
                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                         s_InternalTransformList,(MethodInfo *)0x0);
      pLVar10 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
               s_InternalTransformList;
      if (pLVar10 != (List_1_UnityEngine_Transform_ *)0x0) {
        lVar11 = (longlong)(pLVar10->fields)._size;
        uVar3 = 0;
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
            if ((uint)(pLVar10->fields)._size <= uVar3) {
              mscorlib.dll::System::ThrowHelper::
              ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            pTVar15 = (pLVar10->fields)._items;
            if (pTVar15 == (Transform__Array *)0x0) goto code_?;
            if ((uint)pTVar15->max_length <= uVar3) {
              FUN_?();
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            this_00 = *(Component **)((longlong)pTVar15->vector + lVar13 + -0x20);
            if (this_00 == (Component *)0x0) goto code_?;
            pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                (this_00,(MethodInfo *)0x0);
            bVar16 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                    ExecuteEvents_Execute_18
                              (pGVar8,(BaseEventData *)0x0,this_01,
                               (pMVar9->field7_0x38).rgctx_data[1].method);
            if (bVar16 != 0) {
              UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        (this_00,(MethodInfo *)0x0);
              return;
            }
            uVar3 = uVar3 + 1;
            lVar12 = lVar12 + 1;
            lVar13 = lVar13 + 8;
          } while (lVar12 < lVar11);
        }
        return;
      }
code_?:
      FUN_?();
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
  }
  FUN_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void ShowPurchasePopup() */

void Assembly-CSharp.dll::TierLockedDetailsPopup::TierLockedDetailsPopup_ShowPurchasePopup
               (TierLockedDetailsPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
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
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TierUnlockDetailsPopup_MethodInfo__UnityEngine__Object__Instantiate<TierUnlockDetailsPopup>_TierUnlockDetailsPopup_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__TierLockedDetailsPopup____c__DisplayClass21_0___ShowPurchasePopup_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TierLockedDetailsPopup____c__DisplayClass21_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__TierLockedDetailsPopup____c__DisplayClass21_0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar1 != (PlayerPlanetData *)0x0) {
    iVar2 = (pPVar1->fields).progressionGamePoints;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__GamePassesManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar1 != (PlayerPlanetData *)0x0) {
      this_00 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator;
      bVar3 = (pPVar1->fields).gamePassTier;
      if (this_00 != (PlayerTierStateCalculator *)0x0) {
        if ((this_00->fields).gamePointVelocityIsZero == 0) {
          this_01 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
                    PlayerTierStateCalculator_GetTierPricingStateBasedOnUserGamePointAmount
                              (this_00,iVar2,(uint)bVar3,(MethodInfo *)0x0);
        }
        else {
          this_01 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
                    PlayerTierStateCalculator_GetTierPricingStateBasedOnUserTier
                              (this_00,(uint)bVar3,(MethodInfo *)0x0);
        }
        if ((this_01 !=
             (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)
             0x0) && (pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                               ByteEnum,System::Object]::
                               Dictionary_2_System_ByteEnum_System_Object__get_Item
                                         ((Dictionary_2_System_ByteEnum_System_Object_ *)this_01,
                                          (uint)(this->fields).tierToPurchase,
                                          MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                                         ), pOVar4 != (Object *)0x0)) {
          iVar2 = *(int32_t *)&pOVar4[1].monitor;
          original = (this->fields).tierUnlockDetailsPrefab;
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          pOVar5 = (Object__Class *)
                   UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                             ((Object *)original,
                              TierUnlockDetailsPopup_MethodInfo__UnityEngine__Object__Instantiate<TierUnlockDetailsPopup>_TierUnlockDetailsPopup_
                             );
          if (object != (Object *)0x0) {
            bVar6 = iRam_? != 0;
            object[1].klass = pOVar5;
            if (bVar6) {
              uVar7 = (uint)((ulonglong)(object + 1) >> 0xc);
              puVar8 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
              do {
                uVar9 = *puVar8;
                LOCK();
                uVar10 = *puVar8;
                if (uVar9 == uVar10) {
                  *puVar8 = uVar9 | 1L << (uVar7 & 0x3f);
                }
                UNLOCK();
              } while (uVar9 != uVar10);
            }
            root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)this,(MethodInfo *)0x0);
            this_02 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                      FUN_?(
                                   TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                   );
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
            Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                      (this_02,object,
                       MethodInfo__TierLockedDetailsPopup____c__DisplayClass21_0___ShowPurchasePopup_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
              FUN_?();
            }
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy
                      (root,(BaseEventData *)0x0,this_02,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                      );
            if (object[1].klass != (Object__Class *)0x0) {
              TierUnlockDetailsPopup::TierUnlockDetailsPopup_Initialize
                        ((TierUnlockDetailsPopup *)object[1].klass,
                         (uint)(this->fields).tierToPurchase,iVar2,
                         (this->fields).onPurchaseSuccessful,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void ShowTier() */

void Assembly-CSharp.dll::TierLockedDetailsPopup::TierLockedDetailsPopup_ShowTier
               (TierLockedDetailsPopup *this,MethodInfo *method)

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
                  GamePassesShop_MethodInfo__UnityEngine__Object__Instantiate<GamePassesShop>_GamePassesShop_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__TierLockedDetailsPopup____c__DisplayClass11_0___ShowTier_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TierLockedDetailsPopup____c__DisplayClass11_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__TierLockedDetailsPopup____c__DisplayClass11_0);
  original = (this->fields).gamePassesShopPrefab;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar1 = (Object__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)original,
                      GamePassesShop_MethodInfo__UnityEngine__Object__Instantiate<GamePassesShop>_GamePassesShop_
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
      GamePassesShop::GamePassesShop_Initialize
                ((GamePassesShop *)object[1].klass,(uint)(this->fields).tierToPurchase,
                 (MethodInfo *)0x0);
      pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                (this_01,object,
                 MethodInfo__TierLockedDetailsPopup____c__DisplayClass11_0___ShowTier_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
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


/* Void UpdateLockedText() */

void Assembly-CSharp.dll::TierLockedDetailsPopup::TierLockedDetailsPopup_UpdateLockedText
               (TierLockedDetailsPopup *this,MethodInfo *method)

{
  pTVar1 = (this->fields).headerText;
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_Game_Tier__0___Locked);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar2 = TM::TM__(StringLiteral_Game_Tier__0___Locked,(MethodInfo *)0x0);
  auStackX_8[0] = (uint)(this->fields).tierToPurchase;
  pOVar3 = (Object *)FUN_?(uRam_?,auStackX_8);
  PStack_4._arg0 = (Object *)0x0;
  PStack_4._arg1 = (Object *)0x0;
  PStack_4._arg2 = (Object *)0x0;
  PStack_4._args = (Object__Array *)0x0;
  mscorlib.dll::System::ParamsArray::ParamsArray__ctor(&PStack_4,pOVar3,(MethodInfo *)0x0);
  PStack_5._arg0 = PStack_4._arg0;
  PStack_5._arg1 = PStack_4._arg1;
  PStack_5._arg2 = PStack_4._arg2;
  PStack_5._args = PStack_4._args;
  mscorlib.dll::System::String::String_FormatHelper
            ((IFormatProvider *)0x0,pSVar2,&PStack_5,(MethodInfo *)0x0);
  if (pTVar1 != (Text *)0x0) {
    (*(pTVar1->klass->vtable).set_text.methodPtr)(pTVar1);
    pTVar1 = (this->fields).lockedButtonText;
    if (cRam_? == '\0') {
      FUN_?(&StringLiteral_GO_TO_TIER__0_);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__GamePassesManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar6 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar6 != (PlayerPlanetData *)0x0) {
      uVar7 = (pPVar6->fields).gamePassTier;
      pSVar2 = TM::TM__(StringLiteral_GO_TO_TIER__0_,(MethodInfo *)0x0);
      auStackX_8[0] = (uint)(byte)(uVar7 + 1);
      pOVar3 = (Object *)FUN_?(uRam_?,auStackX_8);
      PStack_4._arg0 = (Object *)0x0;
      PStack_4._arg1 = (Object *)0x0;
      PStack_4._arg2 = (Object *)0x0;
      PStack_4._args = (Object__Array *)0x0;
      mscorlib.dll::System::ParamsArray::ParamsArray__ctor(&PStack_4,pOVar3,(MethodInfo *)0x0);
      PStack_5._arg0 = PStack_4._arg0;
      PStack_5._arg1 = PStack_4._arg1;
      PStack_5._arg2 = PStack_4._arg2;
      PStack_5._args = PStack_4._args;
      mscorlib.dll::System::String::String_FormatHelper
                ((IFormatProvider *)0x0,pSVar2,&PStack_5,(MethodInfo *)0x0);
      if (pTVar1 != (Text *)0x0) {
        (*(pTVar1->klass->vtable).set_text.methodPtr)(pTVar1);
        pTVar1 = (this->fields).lockedDescriptionText;
        if (cRam_? == '\0') {
          FUN_?(&StringLiteral_You_need_to_unlock_Tier__0__and_);
          LOCK();
          UNLOCK();
          FUN_?(&StringLiteral_You_need_to_unlock_Tier__0__befo);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__GamePassesManager);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pPVar6 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
        if (pPVar6 != (PlayerPlanetData *)0x0) {
          bVar8 = (pPVar6->fields).gamePassTier + 1;
          if ((int)((uint)(this->fields).tierToPurchase - (uint)bVar8) < 2) {
            pSVar2 = TM::TM__(StringLiteral_You_need_to_unlock_Tier__0__befo,(MethodInfo *)0x0);
            auStackX_8[0] = (uint)bVar8;
            pOVar3 = (Object *)FUN_?(uRam_?,auStackX_8);
            PStack_4._arg0 = (Object *)0x0;
            PStack_4._arg1 = (Object *)0x0;
            PStack_4._arg2 = (Object *)0x0;
            PStack_4._args = (Object__Array *)0x0;
            mscorlib.dll::System::ParamsArray::ParamsArray__ctor
                      (&PStack_4,pOVar3,(MethodInfo *)0x0);
            args = &PStack_5;
            PStack_5._arg0 = PStack_4._arg0;
            PStack_5._arg1 = PStack_4._arg1;
            PStack_5._arg2 = PStack_4._arg2;
            PStack_5._args = PStack_4._args;
          }
          else {
            pSVar2 = TM::TM__(StringLiteral_You_need_to_unlock_Tier__0__and_,(MethodInfo *)0x0);
            auStackX_8[0] = (uint)bVar8;
            pOVar3 = (Object *)FUN_?(uRam_?,auStackX_8);
            auStackX_8[0] = bVar8 + 1;
            arg1 = (Object *)FUN_?(uRam_?,auStackX_8);
            PStack_5._arg0 = (Object *)0x0;
            PStack_5._arg1 = (Object *)0x0;
            PStack_5._arg2 = (Object *)0x0;
            PStack_5._args = (Object__Array *)0x0;
            mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1
                      (&PStack_5,pOVar3,arg1,(MethodInfo *)0x0);
            args = &PStack_4;
          }
          PStack_4._arg0 = PStack_5._arg0;
          PStack_4._arg1 = PStack_5._arg1;
          PStack_4._arg2 = PStack_5._arg2;
          PStack_4._args = PStack_5._args;
          pSVar2 = mscorlib.dll::System::String::String_FormatHelper
                             ((IFormatProvider *)0x0,pSVar2,args,(MethodInfo *)0x0);
          if (pTVar1 != (Text *)0x0) {
            (*(pTVar1->klass->vtable).set_text.methodPtr)
                      (pTVar1,pSVar2,(pTVar1->klass->vtable).set_text.method);
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void UpdateTierProgressBar() */

void Assembly-CSharp.dll::TierLockedDetailsPopup::TierLockedDetailsPopup_UpdateTierProgressBar
               (TierLockedDetailsPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral____);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar1 != (PlayerPlanetData *)0x0) {
    playerGamePoints = (pPVar1->fields).progressionGamePoints;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__GamePassesManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar1 != (PlayerPlanetData *)0x0) {
      this_00 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator;
      bVar2 = (pPVar1->fields).gamePassTier;
      if (this_00 != (PlayerTierStateCalculator *)0x0) {
        if ((this_00->fields).gamePointVelocityIsZero == 0) {
          this_02 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
                    PlayerTierStateCalculator_GetTierPricingStateBasedOnUserGamePointAmount
                              (this_00,playerGamePoints,(uint)bVar2,(MethodInfo *)0x0);
        }
        else {
          this_02 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
                    PlayerTierStateCalculator_GetTierPricingStateBasedOnUserTier
                              (this_00,(uint)bVar2,(MethodInfo *)0x0);
        }
        bVar2 = (this->fields).tierToPurchase;
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        BVar3 = bVar2 - 1;
        if (0 < (int)BVar3) {
          if (this_02 ==
              (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)
              0x0) goto code_?;
          do {
            pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     ByteEnum,System::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                               ((Dictionary_2_System_ByteEnum_System_Object_ *)this_02,BVar3 & 0xff,
                                MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                               );
            if (pOVar4 == (Object *)0x0) goto code_?;
            playerGamePoints = playerGamePoints - *(int *)&pOVar4[2].klass;
            BVar3 = BVar3 - 1;
          } while (0 < (int)BVar3);
        }
        iVar5 = 0;
        if (0.0 <= (float)playerGamePoints) {
          iVar5 = playerGamePoints;
        }
        if (this_02 !=
            (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)
            0x0) {
          pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System
                   ::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                             ((Dictionary_2_System_ByteEnum_System_Object_ *)this_02,
                              (uint)(this->fields).tierToPurchase,
                              MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                             );
          if (pOVar4 != (Object *)0x0) {
            value = *(int *)&pOVar4[2].klass;
            pPVar6 = (this->fields).tierProgressBar;
            value_00 = value;
            if (iVar5 <= value) {
              value_00 = iVar5;
            }
            if (pPVar6 != (ProgressBar *)0x0) {
              value_01 = (float)value_00 / (float)value;
              if (value_01 < 0.0) {
                value_01 = 0.0;
              }
              else if (_UNK_? < value_01) {
                value_01 = _UNK_?;
              }
              this_01 = (pPVar6->fields).progressBar;
              (pPVar6->fields).progress = value_01;
              if (this_01 != (Scrollbar *)0x0) {
                UnityEngine.UI.dll::UnityEngine::UI::Scrollbar::Scrollbar_set_size
                          (this_01,value_01,(MethodInfo *)0x0);
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__System__Number);
                  LOCK();
                  UNLOCK();
                  FUN_?(&
                                MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass
                     ->field_0x135 & 1) == 0) {
                  FUN_?();
                }
                if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
                  FUN_?();
                }
                aRStack_7[0]._pointer._value = (void *)0x0;
                aRStack_7[0]._length = 0;
                aRStack_7[0]._12_4_ = 0;
                pSVar8 = mscorlib.dll::System::Number::Number_FormatInt32
                                   (value_00,aRStack_7,(IFormatProvider *)0x0,(MethodInfo *)0x0);
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__System__Number);
                  LOCK();
                  UNLOCK();
                  FUN_?(&
                                MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass
                     ->field_0x135 & 1) == 0) {
                  FUN_?();
                }
                if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
                  FUN_?();
                }
                aRStack_7[0]._pointer._value = (void *)0x0;
                aRStack_7[0]._length = 0;
                aRStack_7[0]._12_4_ = 0;
                str2 = mscorlib.dll::System::Number::Number_FormatInt32
                                 (value,aRStack_7,(IFormatProvider *)0x0,(MethodInfo *)0x0);
                pSVar8 = mscorlib.dll::System::String::String_Concat_5
                                   (pSVar8,::StringLiteral____,str2,(MethodInfo *)0x0);
                pTVar9 = (this->fields).progressText;
                if (pTVar9 != (Text *)0x0) {
                  UNRECOVERED_JUMPTABLE = (pTVar9->klass->vtable).set_text.methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*UNRECOVERED_JUMPTABLE)
                            (pTVar9,pSVar8,(pTVar9->klass->vtable).set_text.method,
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
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}

