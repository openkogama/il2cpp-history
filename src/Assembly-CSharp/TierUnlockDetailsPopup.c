
/* Void HandleSuccessfulPurchase() */

void Assembly-CSharp.dll::TierUnlockDetailsPopup::TierUnlockDetailsPopup_HandleSuccessfulPurchase
               (TierUnlockDetailsPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__Common__GamePassTier);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__StatHatWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Purchase_Tier_GoldSpent);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Purchase_Tier);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Purchase_Tier_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__StatHatWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  StatHatWrapper::StatHatWrapper_Count(StringLiteral_Purchase_Tier,1,(MethodInfo *)0x0);
  EStack_1.klass = (Enum__Class *)TypeInfo__MV__Common__GamePassTier;
  uStack_2 = (this->fields).tierToPurchase;
  EStack_1.monitor = (MonitorData *)0xffffffffffffffff;
  pSVar3 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_1,(MethodInfo *)0x0);
  pSVar3 = mscorlib.dll::System::String::String_Concat_4
                     (StringLiteral_Purchase_Tier_,pSVar3,(MethodInfo *)0x0);
  StatHatWrapper::StatHatWrapper_Count(pSVar3,1,(MethodInfo *)0x0);
  StatHatWrapper::StatHatWrapper_Count
            (StringLiteral_Purchase_Tier_GoldSpent,(this->fields).price,(MethodInfo *)0x0);
  TierUnlockDetailsPopup_ShowTierUnlock(this,1,0,(MethodInfo *)0x0);
  pUVar4 = (this->fields).OnPurchaseSuccessful;
  if (pUVar4 != (UnityAction *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pUVar4->fields)._._.invoke_impl)
              ((pUVar4->fields)._._.method_code,(pUVar4->fields)._._.method);
    return;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Initialize(GamePassTier, Int32, UnityAction) */

void Assembly-CSharp.dll::TierUnlockDetailsPopup::TierUnlockDetailsPopup_Initialize
               (TierUnlockDetailsPopup *this,GamePassTier__Enum tierToPurchase,int32_t price,
               UnityAction *OnPurchaseSuccessful,MethodInfo *method)

{
  bVar1 = iRam_? != 0;
  (this->fields).tierToPurchase = (uint8_t)tierToPurchase;
  (this->fields).price = price;
  (this->fields).OnPurchaseSuccessful = OnPurchaseSuccessful;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).OnPurchaseSuccessful >> 0xc);
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
  aIStackX_18[0].m_value = price;
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
  if (pTVar6 != (Text *)0x0) {
    (*(pTVar6->klass->vtable).set_text.methodPtr)
              (pTVar6,pSVar8,(pTVar6->klass->vtable).set_text.method);
    pTVar6 = (this->fields).priceText;
    pSVar8 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_18,(MethodInfo *)0x0);
    if (pTVar6 != (Text *)0x0) {
      (*(pTVar6->klass->vtable).set_text.methodPtr)(pTVar6,pSVar8);
      bVar9 = MVClientSettings::MVClientSettings_get_IsSubscriber((MethodInfo *)0x0);
      this_00 = (this->fields).freeTryButton;
      (this->fields).isSubscribed = bVar9;
      if (bVar9 == 0) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVClientSettings);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if ((TypeInfo__MVClientSettings->static_fields->flags & 0x4000000U) == 0) {
          bVar9 = 0;
        }
        else {
          bVar9 = MVClientSettings::MVClientSettings_get_IsSubscriber((MethodInfo *)0x0);
          bVar9 = bVar9 ^ 1;
        }
      }
      else {
        bVar9 = 1;
      }
      if (this_00 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_00,bVar9,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__GamePassesManager);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField != 0) {
          TierUnlockDetailsPopup_UpdateTierProgressBar(this,(MethodInfo *)0x0);
        }
        obj = (this->fields).buttonIcon;
        if ((this->fields).isSubscribed == 0) {
          pTVar10 = GamePassesManager::GamePassesManager_get_TogglePreviewState((MethodInfo *)0x0);
          if (pTVar10 == (TogglePreviewState *)0x0) goto code_?;
          bVar1 = (pTVar10->fields).freeTry == 0;
        }
        else {
          bVar1 = true;
        }
        if (obj != (Image *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                          ,bVar1,0);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (obj == (Image *)0x0) {
            FUN_?();
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          CVar12._.m_CachedPtr = (obj->fields)._._._._._._._;
          if (CVar12._.m_CachedPtr == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          pcVar11 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
            uVar13 = func_?(&UNK_?);
            FUN_?(uVar13,0);
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          pcRam_? = pcVar11;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam_?)(CVar12._.m_CachedPtr,bVar1);
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void OnClickFreeTryAd() */

void Assembly-CSharp.dll::TierUnlockDetailsPopup::TierUnlockDetailsPopup_OnClickFreeTryAd
               (TierUnlockDetailsPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<Assets::Scripts::AdIntegration::RewardedAdResult>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__TierUnlockDetailsPopup__RewardedAdCallback_Assets__Scripts__AdIntegration__RewardedAdResult_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__TierUnlockDetailsPopup____c___ShowAd_b__27_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = GamePassesManager::GamePassesManager_get_TogglePreviewState((MethodInfo *)0x0);
  if (pTVar1 != (TogglePreviewState *)0x0) {
    if (((pTVar1->fields).previewTier == 0) && ((pTVar1->fields).currentTier == 3)) {
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__TierUnlockDetailsPopup____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__TierUnlockDetailsPopup____c);
      }
      this_01 = TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9__27_0;
      if (this_01 == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
        if (*(int *)&(TypeInfo__TierUnlockDetailsPopup____c->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__TierUnlockDetailsPopup____c);
        }
        object = TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9;
        this_01 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                               );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]
        ::ExecuteEvents_EventFunction_1_System_Object___ctor
                  ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)object,
                   MethodInfo__TierUnlockDetailsPopup____c___ShowAd_b__27_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9__27_0 = this_01;
        if (iRam_? != 0) {
          uVar3 = (uint)((ulonglong)
                          &TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9__27_0 >> 0xc);
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
      }
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      pMVar7 = 
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
      ;
      if ((
          UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
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
        if ((pMVar7->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
          FUN_?(pMVar7);
        }
      }
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
                (pGVar2,(IList_1_UnityEngine_Transform_ *)
                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                         s_InternalTransformList,(MethodInfo *)0x0);
      pLVar8 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
               s_InternalTransformList;
      if (pLVar8 != (List_1_UnityEngine_Transform_ *)0x0) {
        lVar9 = (longlong)(pLVar8->fields)._size;
        uVar3 = 0;
        if (0 < lVar9) {
          lVar10 = 0;
          lVar11 = 0x20;
          do {
            if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
              FUN_?();
            }
            pLVar8 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                     s_InternalTransformList;
            if (pLVar8 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
            if ((uint)(pLVar8->fields)._size <= uVar3) {
              mscorlib.dll::System::ThrowHelper::
              ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pTVar13 = (pLVar8->fields)._items;
            if (pTVar13 == (Transform__Array *)0x0) goto code_?;
            if ((uint)pTVar13->max_length <= uVar3) {
              FUN_?();
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            this_00 = *(Component **)((longlong)pTVar13->vector + lVar11 + -0x20);
            if (this_00 == (Component *)0x0) goto code_?;
            pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                (this_00,(MethodInfo *)0x0);
            bVar14 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                    ExecuteEvents_Execute_18
                              (pGVar2,(BaseEventData *)0x0,
                               (ExecuteEvents_EventFunction_1_System_Object_ *)this_01,
                               (pMVar7->field7_0x38).rgctx_data[1].method);
            if (bVar14 != 0) {
              UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        (this_00,(MethodInfo *)0x0);
              return;
            }
            uVar3 = uVar3 + 1;
            lVar10 = lVar10 + 1;
            lVar11 = lVar11 + 8;
          } while (lVar10 < lVar9);
        }
        return;
      }
code_?:
      FUN_?();
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    pTVar1 = GamePassesManager::GamePassesManager_get_TogglePreviewState((MethodInfo *)0x0);
    if (pTVar1 != (TogglePreviewState *)0x0) {
      if ((pTVar1->fields).freeTry == 0) {
        pIVar15 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
        this_02 = (UnityAction_1_System_Int32Enum_ *)
                  FUN_?(
                               TypeInfo__System__Action<Assets::Scripts::AdIntegration::RewardedAdResult>
                               );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
        UnityAction_1_System_Int32Enum___ctor
                  (this_02,(Object *)this,
                   MethodInfo__TierUnlockDetailsPopup__RewardedAdCallback_Assets__Scripts__AdIntegration__RewardedAdResult_
                   ,(MethodInfo *)0x0);
        if (pIVar15 != (IAdManager *)0x0) {
          FUN_?();
          return;
        }
      }
      else {
        TierUnlockDetailsPopup_PreviewTier(this,(MethodInfo *)0x0);
        pTVar1 = GamePassesManager::GamePassesManager_get_TogglePreviewState((MethodInfo *)0x0);
        if (pTVar1 != (TogglePreviewState *)0x0) {
          (pTVar1->fields).freeTry = 0;
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void OnClickFreeTrySubscriber() */

void Assembly-CSharp.dll::TierUnlockDetailsPopup::TierUnlockDetailsPopup_OnClickFreeTrySubscriber
               (TierUnlockDetailsPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__TierUnlockDetailsPopup__OnPlayerPlanetDataUpdated__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__TierUnlockDetailsPopup____c___PreviewTier_b__29_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__TierUnlockDetailsPopup____c___PreviewTier_b__29_1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = GamePassesManager::GamePassesManager_get_TogglePreviewState((MethodInfo *)0x0);
  if (pTVar1 == (TogglePreviewState *)0x0) {
DAT_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((pTVar1->fields).previewTier == 0) && ((pTVar1->fields).currentTier == 3)) {
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__TierUnlockDetailsPopup____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__TierUnlockDetailsPopup____c);
    }
    pEVar4 = TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9__29_1;
    if (pEVar4 == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
      if (*(int *)&(TypeInfo__TierUnlockDetailsPopup____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__TierUnlockDetailsPopup____c);
      }
      pTVar5 = TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9;
      pEVar4 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
               FUN_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                            );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                ((ExecuteEvents_EventFunction_1_System_Object_ *)pEVar4,(Object *)pTVar5,
                 MethodInfo__TierUnlockDetailsPopup____c___PreviewTier_b__29_1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9__29_1 = pEVar4;
      if (iRam_? != 0) {
        uVar6 = (uint)((ulonglong)&TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9__29_1
                       >> 0xc);
        lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
        do {
          uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
          puVar9 = (ulonglong *)(lVar7 + 0xADDR);
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
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar3,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)pEVar4,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
              );
  }
  else {
    this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (this_00 == (MVNetworkGame_OperationRequests *)0x0) goto DAT_?;
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_TogglePreviewTier
              (this_00,(MethodInfo *)0x0);
    pAVar11 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
    this_01 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_01,(Object *)this,
               MethodInfo__TierUnlockDetailsPopup__OnPlayerPlanetDataUpdated__,(MethodInfo *)0x0);
    pAVar11 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar11,(Delegate *)this_01,(MethodInfo *)0x0);
    if (pAVar11 == (Action *)0x0) {
      TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = (Action *)0x0;
    }
    else {
      pAVar12 = (Action *)0x0;
      if (pAVar11->klass == TypeInfo__System__Action) {
        pAVar12 = pAVar11;
      }
      if (pAVar12 == (Action *)0x0) {
        FUN_?(pAVar11,TypeInfo__System__Action);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar12;
      pAVar12 = (Action *)0x0;
      if (pAVar11->klass == TypeInfo__System__Action) {
        pAVar12 = pAVar11;
      }
      if (pAVar12 == (Action *)0x0) {
        FUN_?(pAVar11,TypeInfo__System__Action);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)
                      &TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated >> 0xc)
      ;
      lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
      do {
        uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar9 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar10 = uVar8 == *puVar9;
        if (bVar10) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar10);
    }
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__TierUnlockDetailsPopup____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__TierUnlockDetailsPopup____c);
    }
    pEVar4 = TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9__29_0;
    if (pEVar4 == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
      if (*(int *)&(TypeInfo__TierUnlockDetailsPopup____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__TierUnlockDetailsPopup____c);
      }
      pTVar5 = TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9;
      pEVar4 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
               FUN_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                            );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                ((ExecuteEvents_EventFunction_1_System_Object_ *)pEVar4,(Object *)pTVar5,
                 MethodInfo__TierUnlockDetailsPopup____c___PreviewTier_b__29_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9__29_0 = pEVar4;
      if (iRam_? != 0) {
        uVar6 = (uint)((ulonglong)&TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9__29_0
                       >> 0xc);
        lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
        do {
          uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
          puVar9 = (ulonglong *)(lVar7 + 0xADDR);
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
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar3,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)pEVar4,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
              );
    (this->fields).isWaitingForFreeTryTier = 1;
  }
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::TierUnlockDetailsPopup::TierUnlockDetailsPopup_OnDestroy
               (TierUnlockDetailsPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__TierUnlockDetailsPopup__OnPlayerPlanetDataUpdated__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
  this_00 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)this,MethodInfo__TierUnlockDetailsPopup__OnPlayerPlanetDataUpdated__,
             (MethodInfo *)0x0);
  pAVar1 = (Action *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pAVar1,(Delegate *)this_00,(MethodInfo *)0x0);
  if (pAVar1 == (Action *)0x0) {
    TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = (Action *)0x0;
  }
  else {
    pAVar2 = (Action *)0x0;
    if (pAVar1->klass == TypeInfo__System__Action) {
      pAVar2 = pAVar1;
    }
    if (pAVar2 == (Action *)0x0) {
      FUN_?(pAVar1,TypeInfo__System__Action);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar2;
    pAVar2 = (Action *)0x0;
    if (pAVar1->klass == TypeInfo__System__Action) {
      pAVar2 = pAVar1;
    }
    if (pAVar2 == (Action *)0x0) {
      FUN_?(pAVar1,TypeInfo__System__Action);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)&TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated
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
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::TierUnlockDetailsPopup::TierUnlockDetailsPopup_OnEnable
               (TierUnlockDetailsPopup *this,MethodInfo *method)

{
  MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,(MVPlayer *)method,in_R8);
  if (extraout_RAX != 0) {
    if (*(longlong *)(extraout_RAX + 0x98) != 0) {
      MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,(MVPlayer *)method,in_R8);
      if ((extraout_RAX_00 == 0) || (*(longlong *)(extraout_RAX_00 + 0x98) == 0))
      goto code_?;
      if (((this->fields).tierToPurchase <= *(byte *)(*(longlong *)(extraout_RAX_00 + 0x98) + 0x28))
         && ((this->fields).OnPurchaseSuccessful != (UnityAction *)0x0)) {
        pUVar1 = (this->fields).OnPurchaseSuccessful;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pUVar1->fields)._._.invoke_impl)
                  ((pUVar1->fields)._._.method_code,(pUVar1->fields)._._.method);
        return;
      }
    }
    return;
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnPlayerPlanetDataUpdated() */

void Assembly-CSharp.dll::TierUnlockDetailsPopup::TierUnlockDetailsPopup_OnPlayerPlanetDataUpdated
               (TierUnlockDetailsPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
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
    FUN_?(&MethodInfo__TierUnlockDetailsPopup__OnPlayerPlanetDataUpdated__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__TierUnlockDetailsPopup____c___OnPlayerPlanetDataUpdated_b__30_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__TierUnlockDetailsPopup____c___OnPlayerPlanetDataUpdated_b__30_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TierUnlockDetailsPopup____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).isWaitingForFreeTryTier != 0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__TierUnlockDetailsPopup____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__TierUnlockDetailsPopup____c);
    }
    pEVar2 = TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9__30_0;
    if (pEVar2 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      if (*(int *)&(TypeInfo__TierUnlockDetailsPopup____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__TierUnlockDetailsPopup____c);
      }
      pTVar3 = TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9;
      pEVar2 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
               FUN_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                            );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                ((ExecuteEvents_EventFunction_1_System_Object_ *)pEVar2,(Object *)pTVar3,
                 MethodInfo__TierUnlockDetailsPopup____c___OnPlayerPlanetDataUpdated_b__30_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9__30_0 = pEVar2;
      if (iRam_? != 0) {
        uVar4 = (uint)((ulonglong)&TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9__30_0
                       >> 0xc);
        lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
        do {
          uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
          puVar7 = (ulonglong *)(lVar5 + 0xADDR);
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
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar1,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)pEVar2,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    (this->fields).isWaitingForFreeTryTier = 0;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar9 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar9 == (PlayerPlanetData *)0x0) {
    FUN_?();
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  if ((this->fields).tierToPurchase <= (pPVar9->fields).previewGamePassTier) {
    pAVar11 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
    this_00 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_00,(Object *)this,
               MethodInfo__TierUnlockDetailsPopup__OnPlayerPlanetDataUpdated__,(MethodInfo *)0x0);
    pAVar11 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pAVar11,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pAVar11 == (Action *)0x0) {
      TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = (Action *)0x0;
    }
    else {
      pAVar12 = (Action *)0x0;
      if (pAVar11->klass == TypeInfo__System__Action) {
        pAVar12 = pAVar11;
      }
      if (pAVar12 == (Action *)0x0) {
        FUN_?(pAVar11,TypeInfo__System__Action);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar12;
      pAVar12 = (Action *)0x0;
      if (pAVar11->klass == TypeInfo__System__Action) {
        pAVar12 = pAVar11;
      }
      if (pAVar12 == (Action *)0x0) {
        FUN_?(pAVar11,TypeInfo__System__Action);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar4 = (uint)((ulonglong)
                      &TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated >> 0xc)
      ;
      lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
      do {
        uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
        puVar7 = (ulonglong *)(lVar5 + 0xADDR);
        LOCK();
        bVar8 = uVar6 == *puVar7;
        if (bVar8) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar8);
    }
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__TierUnlockDetailsPopup____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__TierUnlockDetailsPopup____c);
    }
    pEVar2 = TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9__30_1;
    if (pEVar2 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      if (*(int *)&(TypeInfo__TierUnlockDetailsPopup____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__TierUnlockDetailsPopup____c);
      }
      pTVar3 = TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9;
      pEVar2 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
               FUN_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                            );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                ((ExecuteEvents_EventFunction_1_System_Object_ *)pEVar2,(Object *)pTVar3,
                 MethodInfo__TierUnlockDetailsPopup____c___OnPlayerPlanetDataUpdated_b__30_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9__30_1 = pEVar2;
      if (iRam_? != 0) {
        uVar4 = (uint)((ulonglong)&TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9__30_1
                       >> 0xc);
        lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
        do {
          uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
          puVar7 = (ulonglong *)(lVar5 + 0xADDR);
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
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar1,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)pEVar2,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    TierUnlockDetailsPopup_ShowTierUnlock(this,0,1,(MethodInfo *)0x0);
  }
  return;
}


/* Void PreviewTier() */

void Assembly-CSharp.dll::TierUnlockDetailsPopup::TierUnlockDetailsPopup_PreviewTier
               (TierUnlockDetailsPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__TierUnlockDetailsPopup__OnPlayerPlanetDataUpdated__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__TierUnlockDetailsPopup____c___PreviewTier_b__29_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__TierUnlockDetailsPopup____c___PreviewTier_b__29_1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = GamePassesManager::GamePassesManager_get_TogglePreviewState((MethodInfo *)0x0);
  if (pTVar1 == (TogglePreviewState *)0x0) {
DAT_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((pTVar1->fields).previewTier == 0) && ((pTVar1->fields).currentTier == 3)) {
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__TierUnlockDetailsPopup____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__TierUnlockDetailsPopup____c);
    }
    pEVar4 = TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9__29_1;
    if (pEVar4 == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
      if (*(int *)&(TypeInfo__TierUnlockDetailsPopup____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__TierUnlockDetailsPopup____c);
      }
      pTVar5 = TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9;
      pEVar4 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
               FUN_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                            );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                ((ExecuteEvents_EventFunction_1_System_Object_ *)pEVar4,(Object *)pTVar5,
                 MethodInfo__TierUnlockDetailsPopup____c___PreviewTier_b__29_1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9__29_1 = pEVar4;
      if (iRam_? != 0) {
        uVar6 = (uint)((ulonglong)&TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9__29_1
                       >> 0xc);
        lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
        do {
          uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
          puVar9 = (ulonglong *)(lVar7 + 0xADDR);
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
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar3,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)pEVar4,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
              );
  }
  else {
    this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (this_00 == (MVNetworkGame_OperationRequests *)0x0) goto DAT_?;
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_TogglePreviewTier
              (this_00,(MethodInfo *)0x0);
    pAVar11 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
    this_01 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_01,(Object *)this,
               MethodInfo__TierUnlockDetailsPopup__OnPlayerPlanetDataUpdated__,(MethodInfo *)0x0);
    pAVar11 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar11,(Delegate *)this_01,(MethodInfo *)0x0);
    if (pAVar11 == (Action *)0x0) {
      TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = (Action *)0x0;
    }
    else {
      pAVar12 = (Action *)0x0;
      if (pAVar11->klass == TypeInfo__System__Action) {
        pAVar12 = pAVar11;
      }
      if (pAVar12 == (Action *)0x0) {
        FUN_?(pAVar11,TypeInfo__System__Action);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar12;
      pAVar12 = (Action *)0x0;
      if (pAVar11->klass == TypeInfo__System__Action) {
        pAVar12 = pAVar11;
      }
      if (pAVar12 == (Action *)0x0) {
        FUN_?(pAVar11,TypeInfo__System__Action);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)
                      &TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated >> 0xc)
      ;
      lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
      do {
        uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar9 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar10 = uVar8 == *puVar9;
        if (bVar10) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar10);
    }
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__TierUnlockDetailsPopup____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__TierUnlockDetailsPopup____c);
    }
    pEVar4 = TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9__29_0;
    if (pEVar4 == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
      if (*(int *)&(TypeInfo__TierUnlockDetailsPopup____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__TierUnlockDetailsPopup____c);
      }
      pTVar5 = TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9;
      pEVar4 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
               FUN_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                            );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                ((ExecuteEvents_EventFunction_1_System_Object_ *)pEVar4,(Object *)pTVar5,
                 MethodInfo__TierUnlockDetailsPopup____c___PreviewTier_b__29_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9__29_0 = pEVar4;
      if (iRam_? != 0) {
        uVar6 = (uint)((ulonglong)&TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9__29_0
                       >> 0xc);
        lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
        do {
          uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
          puVar9 = (ulonglong *)(lVar7 + 0xADDR);
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
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar3,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)pEVar4,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
              );
    (this->fields).isWaitingForFreeTryTier = 1;
  }
  return;
}


/* Void ProductPurchaseResponseHandler(Int32, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::TierUnlockDetailsPopup::
     TierUnlockDetailsPopup_ProductPurchaseResponseHandler
               (TierUnlockDetailsPopup *this,int32_t returnCode,
               Dictionary_2_System_Object_System_Object_ *purchaseResponseData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
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
                  MethodInfo__TierUnlockDetailsPopup__ProductPurchaseResponseHandler_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__TierUnlockDetailsPopup____c___ProductPurchaseResponseHandler_b__22_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__TierUnlockDetailsPopup____c___ProductPurchaseResponseHandler_b__22_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__TierUnlockDetailsPopup____c__DisplayClass22_0___ProductPurchaseResponseHandler_b__2_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TierUnlockDetailsPopup____c__DisplayClass22_0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TierUnlockDetailsPopup____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__TierUnlockDetailsPopup____c__DisplayClass22_0);
  if (object != (Object *)0x0) {
    bVar1 = iRam_? != 0;
    *(int32_t *)&object[1].klass = returnCode;
    object[1].monitor = (MonitorData *)this;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)&object[1].monitor >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((pMVar6 != (MVGameControllerBase *)0x0) &&
       (pMVar7 = (pMVar6->fields).game, pMVar7 != (MVNetworkGame *)0x0)) {
      pAVar8 = (pMVar7->fields).PurchaseProductResponseHandler;
      this_00 = (Action_2_Int32Enum_Object_ *)
                FUN_?(
                             TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                             );
      mscorlib.dll::System::Action`2[Int32Enum,Object]::Action_2_Int32Enum_Object___ctor
                (this_00,(Object *)this,
                 MethodInfo__TierUnlockDetailsPopup__ProductPurchaseResponseHandler_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                 ,(MethodInfo *)0x0);
      pDVar9 = mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pAVar8,(Delegate *)this_00,(MethodInfo *)0x0);
      pAVar10 = 
      TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
      ;
      if (pDVar9 == (Delegate *)0x0) {
        (pMVar7->fields).PurchaseProductResponseHandler =
             (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)
             0x0;
      }
      else {
        pAVar8 = (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                   *)FUN_?(pDVar9,
                                   TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                                  );
        if (pAVar8 ==
            (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)
            0x0) {
          FUN_?(pDVar9,pAVar10);
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        (pMVar7->fields).PurchaseProductResponseHandler = pAVar8;
        pAVar10 = 
        TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
        ;
        lVar3 = FUN_?();
        if (lVar3 == 0) {
          FUN_?(pDVar9,pAVar10);
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar2 = (uint)((ulonglong)&(pMVar7->fields).PurchaseProductResponseHandler >> 0xc);
        lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
        do {
          uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
          puVar5 = (ulonglong *)(lVar3 + 0xADDR);
          LOCK();
          bVar1 = uVar4 == *puVar5;
          if (bVar1) {
            *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (!bVar1);
      }
      pGVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__TierUnlockDetailsPopup____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__TierUnlockDetailsPopup____c);
      }
      pEVar13 = TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9__22_0;
      if (pEVar13 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        if (*(int *)&(TypeInfo__TierUnlockDetailsPopup____c->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__TierUnlockDetailsPopup____c);
        }
        pTVar14 = TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9;
        pEVar13 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                               );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]
        ::ExecuteEvents_EventFunction_1_System_Object___ctor
                  ((ExecuteEvents_EventFunction_1_System_Object_ *)pEVar13,(Object *)pTVar14,
                   MethodInfo__TierUnlockDetailsPopup____c___ProductPurchaseResponseHandler_b__22_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9__22_0 = pEVar13;
        if (iRam_? != 0) {
          uVar2 = (uint)((ulonglong)
                          &TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9__22_0 >> 0xc);
          lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
          do {
            uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
            puVar5 = (ulonglong *)(lVar3 + 0xADDR);
            LOCK();
            bVar1 = uVar4 == *puVar5;
            if (bVar1) {
              *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
            }
            UNLOCK();
          } while (!bVar1);
        }
      }
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar12,(BaseEventData *)0x0,
                 (ExecuteEvents_EventFunction_1_System_Object_ *)pEVar13,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      pGVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__TierUnlockDetailsPopup____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__TierUnlockDetailsPopup____c);
      }
      pEVar13 = TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9__22_1;
      if (pEVar13 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        if (*(int *)&(TypeInfo__TierUnlockDetailsPopup____c->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__TierUnlockDetailsPopup____c);
        }
        pTVar14 = TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9;
        pEVar13 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                               );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]
        ::ExecuteEvents_EventFunction_1_System_Object___ctor
                  ((ExecuteEvents_EventFunction_1_System_Object_ *)pEVar13,(Object *)pTVar14,
                   MethodInfo__TierUnlockDetailsPopup____c___ProductPurchaseResponseHandler_b__22_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9__22_1 = pEVar13;
        if (iRam_? != 0) {
          uVar2 = (uint)((ulonglong)
                          &TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9__22_1 >> 0xc);
          lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
          do {
            uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
            puVar5 = (ulonglong *)(lVar3 + 0xADDR);
            LOCK();
            bVar1 = uVar4 == *puVar5;
            if (bVar1) {
              *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
            }
            UNLOCK();
          } while (!bVar1);
        }
      }
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar12,(BaseEventData *)0x0,
                 (ExecuteEvents_EventFunction_1_System_Object_ *)pEVar13,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      if (*(int *)&object[1].klass == 0) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MV__Common__GamePassTier);
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__StatHatWrapper);
          LOCK();
          UNLOCK();
          FUN_?(&StringLiteral_Purchase_Tier_GoldSpent);
          LOCK();
          UNLOCK();
          FUN_?(&StringLiteral_Purchase_Tier);
          LOCK();
          UNLOCK();
          FUN_?(&StringLiteral_Purchase_Tier_);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__StatHatWrapper->_1).field_0x1c == 0) {
          FUN_?();
        }
        StatHatWrapper::StatHatWrapper_Count(StringLiteral_Purchase_Tier,1,(MethodInfo *)0x0);
        EStack_15.klass = (Enum__Class *)TypeInfo__MV__Common__GamePassTier;
        uStack_16 = (this->fields).tierToPurchase;
        EStack_15.monitor = (MonitorData *)0xffffffffffffffff;
        pSVar17 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_15,(MethodInfo *)0x0);
        pSVar17 = mscorlib.dll::System::String::String_Concat_4
                            (StringLiteral_Purchase_Tier_,pSVar17,(MethodInfo *)0x0);
        StatHatWrapper::StatHatWrapper_Count(pSVar17,1,(MethodInfo *)0x0);
        StatHatWrapper::StatHatWrapper_Count
                  (StringLiteral_Purchase_Tier_GoldSpent,(this->fields).price,(MethodInfo *)0x0);
        TierUnlockDetailsPopup_ShowTierUnlock(this,1,0,(MethodInfo *)0x0);
        pUVar18 = (this->fields).OnPurchaseSuccessful;
        if (pUVar18 == (UnityAction *)0x0) goto code_?;
        (*(pUVar18->fields)._._.invoke_impl)
                  ((pUVar18->fields)._._.method_code,(pUVar18->fields)._._.method);
      }
      else {
        pGVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                               );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]
        ::ExecuteEvents_EventFunction_1_System_Object___ctor
                  (this_01,object,
                   MethodInfo__TierUnlockDetailsPopup____c__DisplayClass22_0___ProductPurchaseResponseHandler_b__2_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (pGVar12,(BaseEventData *)0x0,this_01,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                  );
      }
      return;
    }
  }
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void Purchase() */

void Assembly-CSharp.dll::TierUnlockDetailsPopup::TierUnlockDetailsPopup_Purchase
               (TierUnlockDetailsPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
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
                  TierPurchaseNotEnoughGoldErrorPopup_MethodInfo__UnityEngine__Object__Instantiate<TierPurchaseNotEnoughGoldErrorPopup>_TierPurchaseNotEnoughGoldErrorPopup_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__TierUnlockDetailsPopup__ProductPurchaseResponseHandler_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__TierUnlockDetailsPopup____c___Purchase_b__17_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__TierUnlockDetailsPopup____c___Purchase_b__17_2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__TierUnlockDetailsPopup____c__DisplayClass17_0___Purchase_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TierUnlockDetailsPopup____c__DisplayClass17_0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TierUnlockDetailsPopup____c);
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
    if ((pGVar1->fields).gameMode == 0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__GamePassesManager);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pPVar2 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
      if (pPVar2 != (PlayerPlanetData *)0x0) {
        if ((pPVar2->fields).gamePassTier != (this->fields).tierToPurchase) {
          pMVar3 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                              ((MethodInfo *)0x0);
          if (pMVar3 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
          MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SetTier
                    (pMVar3,(uint)(this->fields).tierToPurchase,(MethodInfo *)0x0);
          pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)this,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__TierUnlockDetailsPopup____c->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__TierUnlockDetailsPopup____c);
          }
          this_01 = TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9__17_2;
          if (this_01 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
            if (*(int *)&(TypeInfo__TierUnlockDetailsPopup____c->_1).field_0x1c == 0) {
              FUN_?(TypeInfo__TierUnlockDetailsPopup____c);
            }
            pTVar5 = TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9;
            this_01 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                      FUN_?(
                                   TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                   );
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
            Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                      ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)pTVar5,
                       MethodInfo__TierUnlockDetailsPopup____c___Purchase_b__17_2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9__17_2 = this_01;
            func_?(&TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9__17_2);
          }
          if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy
                    (pGVar4,(BaseEventData *)0x0,
                     (ExecuteEvents_EventFunction_1_System_Object_ *)this_01,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                    );
        }
        return;
      }
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if ((((pMVar6 != (MVGameControllerBase *)0x0) &&
           (pMVar7 = (pMVar6->fields).game, pMVar7 != (MVNetworkGame *)0x0)) &&
          (this_00 = (pMVar7->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) &&
         ((pMVar8 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0)
          , pMVar8 != (MVLocalPlayer *)0x0 &&
          (pUVar9 = (pMVar8->fields)._._UserProfileData_k__BackingField,
          pUVar9 != (UserProfileData *)0x0)))) {
        if ((pUVar9->fields).Gold < (this->fields).price) {
          object = (Object *)FUN_?(TypeInfo__TierUnlockDetailsPopup____c__DisplayClass17_0);
          original = (this->fields).tierPurchaseGoldErrorPopupPrefab;
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          pOVar10 = (Object__Class *)
                    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                              ((Object *)original,
                               TierPurchaseNotEnoughGoldErrorPopup_MethodInfo__UnityEngine__Object__Instantiate<TierPurchaseNotEnoughGoldErrorPopup>_TierPurchaseNotEnoughGoldErrorPopup_
                              );
          if (object != (Object *)0x0) {
            bVar11 = iRam_? != 0;
            object[1].klass = pOVar10;
            if (bVar11) {
              uVar12 = (uint)((ulonglong)(object + 1) >> 0xc);
              lVar13 = (ulonglong)((uVar12 & 0x1fffff) >> 6) * 8;
              do {
                uVar14 = *(ulonglong *)(lVar13 + 0xADDR);
                puVar15 = (ulonglong *)(lVar13 + 0xADDR);
                LOCK();
                bVar11 = uVar14 == *puVar15;
                if (bVar11) {
                  *puVar15 = uVar14 | 1L << (uVar12 & 0x3f);
                }
                UNLOCK();
              } while (!bVar11);
            }
            pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)this,(MethodInfo *)0x0);
            this_02 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                      FUN_?(
                                   TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                   );
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
            Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                      (this_02,object,
                       MethodInfo__TierUnlockDetailsPopup____c__DisplayClass17_0___Purchase_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
              FUN_?();
            }
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy
                      (pGVar4,(BaseEventData *)0x0,this_02,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                      );
            if (object[1].klass != (Object__Class *)0x0) {
              TierPurchaseNotEnoughGoldErrorPopup::TierPurchaseNotEnoughGoldErrorPopup_Initialize
                        ((TierPurchaseNotEnoughGoldErrorPopup *)object[1].klass,
                         (uint)(this->fields).tierToPurchase,(MethodInfo *)0x0);
              return;
            }
          }
        }
        else {
          pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)this,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__TierUnlockDetailsPopup____c->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__TierUnlockDetailsPopup____c);
          }
          this_03 = TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9__17_0;
          if (this_03 == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
            if (*(int *)&(TypeInfo__TierUnlockDetailsPopup____c->_1).field_0x1c == 0) {
              FUN_?(TypeInfo__TierUnlockDetailsPopup____c);
            }
            pTVar5 = TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9;
            this_03 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
                      FUN_?(
                                   TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                                   );
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
            Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                      ((ExecuteEvents_EventFunction_1_System_Object_ *)this_03,(Object *)pTVar5,
                       MethodInfo__TierUnlockDetailsPopup____c___Purchase_b__17_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9__17_0 = this_03;
            func_?(&TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9__17_0);
          }
          if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy
                    (pGVar4,(BaseEventData *)0x0,
                     (ExecuteEvents_EventFunction_1_System_Object_ *)this_03,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                    );
          pMVar7 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (pMVar7 != (MVNetworkGame *)0x0) {
            pAVar16 = (pMVar7->fields).PurchaseProductResponseHandler;
            this_04 = (Action_2_Int32Enum_Object_ *)
                      FUN_?(
                                   TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                                   );
            mscorlib.dll::System::Action`2[Int32Enum,Object]::Action_2_Int32Enum_Object___ctor
                      (this_04,(Object *)this,
                       MethodInfo__TierUnlockDetailsPopup__ProductPurchaseResponseHandler_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                       ,(MethodInfo *)0x0);
            pDVar17 = mscorlib.dll::System::Delegate::Delegate_Combine
                                ((Delegate *)pAVar16,(Delegate *)this_04,(MethodInfo *)0x0);
            pAVar18 = 
            TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
            ;
            if (pDVar17 == (Delegate *)0x0) {
              (pMVar7->fields).PurchaseProductResponseHandler =
                   (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                    *)0x0;
            }
            else {
              pAVar16 = (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                         *)FUN_?(pDVar17,
                                         TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                                        );
              if (pAVar16 ==
                  (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                   *)0x0) {
                FUN_?(pDVar17,pAVar18);
                pcVar19 = (code *)swi(3);
                (*pcVar19)();
                return;
              }
              (pMVar7->fields).PurchaseProductResponseHandler = pAVar16;
              pAVar18 = 
              TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
              ;
              lVar13 = FUN_?(pDVar17,
                                     TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                                    );
              if (lVar13 == 0) {
                FUN_?(pDVar17,pAVar18);
                pcVar19 = (code *)swi(3);
                (*pcVar19)();
                return;
              }
            }
            if (iRam_? != 0) {
              uVar12 = (uint)((ulonglong)&(pMVar7->fields).PurchaseProductResponseHandler >> 0xc);
              lVar13 = (ulonglong)((uVar12 & 0x1fffff) >> 6) * 8;
              do {
                uVar14 = *(ulonglong *)(lVar13 + 0xADDR);
                puVar15 = (ulonglong *)(lVar13 + 0xADDR);
                LOCK();
                bVar11 = uVar14 == *puVar15;
                if (bVar11) {
                  *puVar15 = uVar14 | 1L << (uVar12 & 0x3f);
                }
                UNLOCK();
              } while (!bVar11);
            }
            pMVar3 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                ((MethodInfo *)0x0);
            if (pMVar3 != (MVNetworkGame_OperationRequests *)0x0) {
              MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_PurchaseTier
                        (pMVar3,(uint)(this->fields).tierToPurchase,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}


/* Int32 ReduceGamePointsWithPreviousTierRequirements(GamePassTier, Int32,
   Dictionary`2[MV.Common.GamePassTier,MV.WorldObject.GamePassSystem.PlayerTierState]) */

int32_t Assembly-CSharp.dll::TierUnlockDetailsPopup::
        TierUnlockDetailsPopup_ReduceGamePointsWithPreviousTierRequirements
                  (TierUnlockDetailsPopup *this,GamePassTier__Enum gamePassTierToDisplay,
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


/* Void RewardedAdCallback(RewardedAdResult) */

void Assembly-CSharp.dll::TierUnlockDetailsPopup::TierUnlockDetailsPopup_RewardedAdCallback
               (TierUnlockDetailsPopup *this,RewardedAdResult__Enum result,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__TierUnlockDetailsPopup____c___RewardedAdCallback_b__28_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__TierUnlockDetailsPopup____c___RewardedAdCallback_b__28_1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TierUnlockDetailsPopup____c);
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
  if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField !=
      (IEditModeUI *)0x0) {
code_?:
    TierUnlockDetailsPopup_PreviewTier(this,(MethodInfo *)0x0);
    return;
  }
  if ((result == RewardedAdResult__Enum_ErrorClient) ||
     (result == RewardedAdResult__Enum_ErrorInternal)) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__TierUnlockDetailsPopup____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__TierUnlockDetailsPopup____c);
    }
    this_01 = TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9__28_1;
    if (this_01 != (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0)
    goto code_?;
    if (*(int *)&(TypeInfo__TierUnlockDetailsPopup____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__TierUnlockDetailsPopup____c);
    }
    pTVar2 = TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9;
    this_01 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)pTVar2,
               MethodInfo__TierUnlockDetailsPopup____c___RewardedAdCallback_b__28_1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9__28_1 = this_01;
    ppEVar3 = &TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9__28_1;
  }
  else {
    if (result == RewardedAdResult__Enum_ErrorTimeout) {
      return;
    }
    if (result == RewardedAdResult__Enum_RewardUnlocked) goto code_?;
    if (result != RewardedAdResult__Enum_RewardNotUnlocked) {
      return;
    }
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__TierUnlockDetailsPopup____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__TierUnlockDetailsPopup____c);
    }
    this_01 = TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9__28_0;
    if (this_01 != (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0)
    goto code_?;
    if (*(int *)&(TypeInfo__TierUnlockDetailsPopup____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__TierUnlockDetailsPopup____c);
    }
    pTVar2 = TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9;
    this_01 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)pTVar2,
               MethodInfo__TierUnlockDetailsPopup____c___RewardedAdCallback_b__28_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9__28_0 = this_01;
    ppEVar3 = &TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9__28_0;
  }
  func_?(ppEVar3);
code_?:
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar4 = 
  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
  ;
  if ((
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
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
    if ((pMVar4->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar4);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
            (pGVar1,(IList_1_UnityEngine_Transform_ *)
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                    s_InternalTransformList,(MethodInfo *)0x0);
  pLVar5 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
           s_InternalTransformList;
  if (pLVar5 != (List_1_UnityEngine_Transform_ *)0x0) {
    lVar6 = (longlong)(pLVar5->fields)._size;
    uVar7 = 0;
    if (0 < lVar6) {
      lVar8 = 0;
      lVar9 = 0x20;
      do {
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pLVar5 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar5 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
        if ((uint)(pLVar5->fields)._size <= uVar7) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pTVar11 = (pLVar5->fields)._items;
        if (pTVar11 == (Transform__Array *)0x0) goto code_?;
        if ((uint)pTVar11->max_length <= uVar7) {
          FUN_?();
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        this_00 = *(Component **)((longlong)pTVar11->vector + lVar9 + -0x20);
        if (this_00 == (Component *)0x0) goto code_?;
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           (this_00,(MethodInfo *)0x0);
        bVar12 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_Execute_18
                          (pGVar1,(BaseEventData *)0x0,
                           (ExecuteEvents_EventFunction_1_System_Object_ *)this_01,
                           (pMVar4->field7_0x38).rgctx_data[1].method);
        if (bVar12 != 0) {
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    (this_00,(MethodInfo *)0x0);
          return;
        }
        uVar7 = uVar7 + 1;
        lVar8 = lVar8 + 1;
        lVar9 = lVar9 + 8;
      } while (lVar8 < lVar6);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void ShowAd() */

void Assembly-CSharp.dll::TierUnlockDetailsPopup::TierUnlockDetailsPopup_ShowAd
               (TierUnlockDetailsPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<Assets::Scripts::AdIntegration::RewardedAdResult>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__TierUnlockDetailsPopup__RewardedAdCallback_Assets__Scripts__AdIntegration__RewardedAdResult_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__TierUnlockDetailsPopup____c___ShowAd_b__27_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = GamePassesManager::GamePassesManager_get_TogglePreviewState((MethodInfo *)0x0);
  if (pTVar1 != (TogglePreviewState *)0x0) {
    if (((pTVar1->fields).previewTier == 0) && ((pTVar1->fields).currentTier == 3)) {
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__TierUnlockDetailsPopup____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__TierUnlockDetailsPopup____c);
      }
      this_01 = TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9__27_0;
      if (this_01 == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
        if (*(int *)&(TypeInfo__TierUnlockDetailsPopup____c->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__TierUnlockDetailsPopup____c);
        }
        object = TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9;
        this_01 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                               );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]
        ::ExecuteEvents_EventFunction_1_System_Object___ctor
                  ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)object,
                   MethodInfo__TierUnlockDetailsPopup____c___ShowAd_b__27_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9__27_0 = this_01;
        if (iRam_? != 0) {
          uVar3 = (uint)((ulonglong)
                          &TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9__27_0 >> 0xc);
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
      }
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      pMVar7 = 
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
      ;
      if ((
          UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
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
        if ((pMVar7->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
          FUN_?(pMVar7);
        }
      }
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
                (pGVar2,(IList_1_UnityEngine_Transform_ *)
                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                         s_InternalTransformList,(MethodInfo *)0x0);
      pLVar8 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
               s_InternalTransformList;
      if (pLVar8 != (List_1_UnityEngine_Transform_ *)0x0) {
        lVar9 = (longlong)(pLVar8->fields)._size;
        uVar3 = 0;
        if (0 < lVar9) {
          lVar10 = 0;
          lVar11 = 0x20;
          do {
            if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
              FUN_?();
            }
            pLVar8 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                     s_InternalTransformList;
            if (pLVar8 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
            if ((uint)(pLVar8->fields)._size <= uVar3) {
              mscorlib.dll::System::ThrowHelper::
              ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pTVar13 = (pLVar8->fields)._items;
            if (pTVar13 == (Transform__Array *)0x0) goto code_?;
            if ((uint)pTVar13->max_length <= uVar3) {
              FUN_?();
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            this_00 = *(Component **)((longlong)pTVar13->vector + lVar11 + -0x20);
            if (this_00 == (Component *)0x0) goto code_?;
            pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                (this_00,(MethodInfo *)0x0);
            bVar14 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                    ExecuteEvents_Execute_18
                              (pGVar2,(BaseEventData *)0x0,
                               (ExecuteEvents_EventFunction_1_System_Object_ *)this_01,
                               (pMVar7->field7_0x38).rgctx_data[1].method);
            if (bVar14 != 0) {
              UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        (this_00,(MethodInfo *)0x0);
              return;
            }
            uVar3 = uVar3 + 1;
            lVar10 = lVar10 + 1;
            lVar11 = lVar11 + 8;
          } while (lVar10 < lVar9);
        }
        return;
      }
code_?:
      FUN_?();
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    pTVar1 = GamePassesManager::GamePassesManager_get_TogglePreviewState((MethodInfo *)0x0);
    if (pTVar1 != (TogglePreviewState *)0x0) {
      if ((pTVar1->fields).freeTry == 0) {
        pIVar15 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
        this_02 = (UnityAction_1_System_Int32Enum_ *)
                  FUN_?(
                               TypeInfo__System__Action<Assets::Scripts::AdIntegration::RewardedAdResult>
                               );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
        UnityAction_1_System_Int32Enum___ctor
                  (this_02,(Object *)this,
                   MethodInfo__TierUnlockDetailsPopup__RewardedAdCallback_Assets__Scripts__AdIntegration__RewardedAdResult_
                   ,(MethodInfo *)0x0);
        if (pIVar15 != (IAdManager *)0x0) {
          FUN_?();
          return;
        }
      }
      else {
        TierUnlockDetailsPopup_PreviewTier(this,(MethodInfo *)0x0);
        pTVar1 = GamePassesManager::GamePassesManager_get_TogglePreviewState((MethodInfo *)0x0);
        if (pTVar1 != (TogglePreviewState *)0x0) {
          (pTVar1->fields).freeTry = 0;
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void ShowTier() */

void Assembly-CSharp.dll::TierUnlockDetailsPopup::TierUnlockDetailsPopup_ShowTier
               (TierUnlockDetailsPopup *this,MethodInfo *method)

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
                  MethodInfo__TierUnlockDetailsPopup____c__DisplayClass16_0___ShowTier_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TierUnlockDetailsPopup____c__DisplayClass16_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__TierUnlockDetailsPopup____c__DisplayClass16_0);
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
                 MethodInfo__TierUnlockDetailsPopup____c__DisplayClass16_0___ShowTier_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
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


/* Void ShowTierUnlock(Boolean, Boolean) */

void Assembly-CSharp.dll::TierUnlockDetailsPopup::TierUnlockDetailsPopup_ShowTierUnlock
               (TierUnlockDetailsPopup *this,bool wasPurchased,bool wasTempUnlocked,
               MethodInfo *method)

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
                  TierUnlockedPopupController_MethodInfo__UnityEngine__Object__Instantiate<TierUnlockedPopupController>_TierUnlockedPopupController_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__TierUnlockDetailsPopup____c__DisplayClass23_0___ShowTierUnlock_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TierUnlockDetailsPopup____c__DisplayClass23_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__TierUnlockDetailsPopup____c__DisplayClass23_0);
  original = (this->fields).TierUnlockedPopupControllerPrefab;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar1 = (Object__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)original,
                      TierUnlockedPopupController_MethodInfo__UnityEngine__Object__Instantiate<TierUnlockedPopupController>_TierUnlockedPopupController_
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
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    this_00 = (ExecuteEvents_EventFunction_1_System_Object_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              (this_00,object,
               MethodInfo__TierUnlockDetailsPopup____c__DisplayClass23_0___ShowTierUnlock_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,this_00,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    if (object[1].klass != (Object__Class *)0x0) {
      TierUnlockedPopupController::TierUnlockedPopupController_Initialize
                ((TierUnlockedPopupController *)object[1].klass,(uint)(this->fields).tierToPurchase,
                 wasPurchased,wasTempUnlocked,(MethodInfo *)0x0);
      return;
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void UpdateTierProgressBar() */

void Assembly-CSharp.dll::TierUnlockDetailsPopup::TierUnlockDetailsPopup_UpdateTierProgressBar
               (TierUnlockDetailsPopup *this,MethodInfo *method)

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
                               ((Dictionary_2_System_ByteEnum_System_Object_ *)this_02,BVar3 & 0xff
                                ,
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
        if ((this_02 !=
             (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)
             0x0) && (pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                               ByteEnum,System::Object]::
                               Dictionary_2_System_ByteEnum_System_Object__get_Item
                                         ((Dictionary_2_System_ByteEnum_System_Object_ *)this_02,
                                          (uint)(this->fields).tierToPurchase,
                                          MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                                         ), pOVar4 != (Object *)0x0)) {
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
              if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->
                   field_0x135 & 1) == 0) {
                FUN_?();
              }
              if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
                FUN_?();
              }
              aRStack_7[0]._pointer._value = (void *)0x0;
              aRStack_7[0]._length = 0;
              aRStack_7[0]._12_4_ = 0;
              str0 = mscorlib.dll::System::Number::Number_FormatInt32
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
              if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->
                   field_0x135 & 1) == 0) {
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
              mscorlib.dll::System::String::String_Concat_5
                        (str0,::StringLiteral____,str2,(MethodInfo *)0x0);
              pTVar8 = (this->fields).progressText;
              if (pTVar8 != (Text *)0x0) {
                (*(pTVar8->klass->vtable).set_text.methodPtr)();
                pGVar9 = (this->fields).progressBarDivider;
                if (pGVar9 != (GameObject *)0x0) {
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pvVar10 = (pGVar9->fields)._.m_CachedPtr;
                  if (pvVar10 == (void *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                    ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar9,(MethodInfo *)0x0);
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                  pcVar11 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
                    uVar12 = func_?(&UNK_?);
                    FUN_?(uVar12,0);
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                  pcRam_? = pcVar11;
                  cVar13 = (*pcRam_?)(pvVar10);
                  if (cVar13 != '\0') {
                    pPVar6 = (this->fields).tierProgressBar;
                    if (pPVar6 == (ProgressBar *)0x0) goto code_?;
                    if ((pPVar6->fields).progress <= 0.0) {
                      pGVar9 = (this->fields).progressBarDivider;
                      if (pGVar9 == (GameObject *)0x0) goto code_?;
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                (pGVar9,0,(MethodInfo *)0x0);
                    }
                  }
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
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}

