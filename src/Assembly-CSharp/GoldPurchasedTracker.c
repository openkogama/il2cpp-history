
/* Void GoldPendingUpdate() */

void Assembly-CSharp.dll::GoldPurchasedTracker::GoldPurchasedTracker_GoldPendingUpdate
               (GoldPurchasedTracker *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Invoke__Requesting_gold_update_r);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_Invoke__Requesting_gold_update_r,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (pMVar3 = (pMVar2->fields).operationRequests, pMVar3 != (MVNetworkGame_OperationRequests *)0x0)
     ) {
    if (cRam_? == '\0') {
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
    pPVar4 = (pMVar3->fields).peer;
    this_00 = (Dictionary_2_System_Byte_System_Object_ *)
              FUN_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
    pMVar5 = 
    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
    ;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object___ctor
              (this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    if (pPVar4 != (PhotonPeer *)0x0) {
      (*(pPVar4->klass->vtable).SendOperation.methodPtr)
                (pPVar4,CONCAT71((int7)((ulonglong)pMVar5 >> 8),0x6e),this_00,
                 TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                 (pPVar4->klass->vtable).SendOperation.method);
      return;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void GoldUpdatedCallback() */

void Assembly-CSharp.dll::GoldPurchasedTracker::GoldPurchasedTracker_GoldUpdatedCallback
               (GoldPurchasedTracker *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&System__Object__MethodInfo__System__Array__Empty<System::Object>______);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__GoldPurchasedTracker__GoldUpdatedCallback__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__NotificationController);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__String);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BrowserComm__ToJavaScript);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Thank_you_for_waiting__Your_purc);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_GoldPendingUpdate);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_refreshCredentials);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral___Expecting_a_total_of__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_currentGold__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Finished_calling_Gold_Update__Di);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__and_delta_is_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).goldGainedTotal;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar2 != (MVGameControllerBase *)0x0) &&
       (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
      (pMVar4 = (pMVar3->fields).playerContainer, pMVar4 != (MVPlayerContainer *)0x0)) &&
     ((pMVar5 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar4,(MethodInfo *)0x0),
      pMVar5 != (MVLocalPlayer *)0x0 &&
      (pUVar6 = (pMVar5->fields)._._UserProfileData_k__BackingField,
      pUVar6 != (UserProfileData *)0x0)))) {
    iVar7 = (pUVar6->fields).Gold - (this->fields).currentGold;
    iVar8 = 0;
    if (-1 < iVar7) {
      iVar8 = iVar7;
    }
    bVar9 = cRam_? == '\0';
    (this->fields).goldGainedTotal = iVar8 + iVar1;
    if (bVar9) {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar2 != (MVGameControllerBase *)0x0) &&
        (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
       ((pMVar4 = (pMVar3->fields).playerContainer, pMVar4 != (MVPlayerContainer *)0x0 &&
        ((pMVar5 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar4,(MethodInfo *)0x0),
         pMVar5 != (MVLocalPlayer *)0x0 &&
         (pUVar6 = (pMVar5->fields)._._UserProfileData_k__BackingField,
         pUVar6 != (UserProfileData *)0x0)))))) {
      (this->fields).currentGold = (pUVar6->fields).Gold;
      values = (String__Array *)FUN_?(TypeInfo__System__String);
      if (values != (String__Array *)0x0) {
        FUN_?(values,0,StringLiteral_currentGold__);
        pSVar10 = mscorlib.dll::System::Int32::Int32_ToString
                            ((Int32 *)&(this->fields).currentGold,(MethodInfo *)0x0);
        FUN_?(values,1,pSVar10);
        FUN_?(values,2,StringLiteral__and_delta_is_);
        pSVar10 = mscorlib.dll::System::Int32::Int32_ToString
                            ((Int32 *)&(this->fields).goldGainedTotal,(MethodInfo *)0x0);
        FUN_?(values,3,pSVar10);
        FUN_?(values,4,StringLiteral___Expecting_a_total_of__);
        mscorlib.dll::System::Int32::Int32_ToString
                  ((Int32 *)&(this->fields).goldDeltaExpected,(MethodInfo *)0x0);
        FUN_?(values);
        pSVar10 = mscorlib.dll::System::String::String_Concat_7(values,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                  ((Object *)pSVar10,(MethodInfo *)0x0);
        if ((this->fields).goldGainedTotal < (this->fields).goldDeltaExpected) {
          return;
        }
        (this->fields).goldGainedTotal = 0;
        (this->fields).goldDeltaExpected = 0;
        args = (Object__Array *)
               System.Core.dll::System::Linq::Enumerable::Enumerable_Empty_2
                         (System__Object__MethodInfo__System__Array__Empty<System::Object>______);
        if (*(int *)&(TypeInfo__BrowserComm__ToJavaScript->_1).field_0x1c == 0) {
          FUN_?();
        }
        BrowserComm+ToJavaScript::BrowserComm_ToJavaScript_ExternalCall
                  (StringLiteral_refreshCredentials,args,(MethodInfo *)0x0);
        pSVar10 = TM::TM__(StringLiteral_Thank_you_for_waiting__Your_purc,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__NotificationController->_1).field_0x1c == 0) {
          FUN_?();
        }
        NotificationController::NotificationController_PushNotification
                  (pSVar10,(Sprite *)0x0,5,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if ((((pMVar2 != (MVGameControllerBase *)0x0) &&
             (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
            (pMVar4 = (pMVar3->fields).playerContainer, pMVar4 != (MVPlayerContainer *)0x0)) &&
           (pMVar5 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar4,(MethodInfo *)0x0)
           , pMVar5 != (MVLocalPlayer *)0x0)) {
          pAVar11 = (pMVar5->fields)._.OnGoldAmountChange;
          this_00 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
          UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
          NavMesh_OnNavMeshPreUpdate__ctor
                    (this_00,(Object *)this,MethodInfo__GoldPurchasedTracker__GoldUpdatedCallback__,
                     (MethodInfo *)0x0);
          pAVar11 = (Action *)
                    mscorlib.dll::System::Delegate::Delegate_Remove
                              ((Delegate *)pAVar11,(Delegate *)this_00,(MethodInfo *)0x0);
          if (pAVar11 == (Action *)0x0) {
            (pMVar5->fields)._.OnGoldAmountChange = (Action *)0x0;
          }
          else {
            pAVar12 = (Action *)0x0;
            if (pAVar11->klass == TypeInfo__System__Action) {
              pAVar12 = pAVar11;
            }
            if (pAVar12 == (Action *)0x0) {
              FUN_?(pAVar11);
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            (pMVar5->fields)._.OnGoldAmountChange = pAVar12;
            pAVar12 = (Action *)0x0;
            if (pAVar11->klass == TypeInfo__System__Action) {
              pAVar12 = pAVar11;
            }
            if (pAVar12 == (Action *)0x0) {
              FUN_?(pAVar11);
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
          }
          if (iRam_? != 0) {
            uVar14 = (uint)((ulonglong)&(pMVar5->fields)._.OnGoldAmountChange >> 0xc);
            puVar15 = (ulonglong *)((ulonglong)((uVar14 & 0x1fffff) >> 6) * 8 + 0xADDR);
            do {
              uVar16 = *puVar15;
              LOCK();
              uVar17 = *puVar15;
              if (uVar16 == uVar17) {
                *puVar15 = uVar16 | 1L << (uVar14 & 0x3f);
              }
              UNLOCK();
            } while (uVar16 != uVar17);
          }
          UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_CancelInvoke_2
                    ((MonoBehaviour *)this,StringLiteral_GoldPendingUpdate,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if (((pMVar2 != (MVGameControllerBase *)0x0) &&
              (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
             ((pMVar4 = (pMVar3->fields).playerContainer, pMVar4 != (MVPlayerContainer *)0x0 &&
              ((pMVar5 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                    (pMVar4,(MethodInfo *)0x0), pMVar5 != (MVLocalPlayer *)0x0 &&
               (pUVar6 = (pMVar5->fields)._._UserProfileData_k__BackingField,
               pUVar6 != (UserProfileData *)0x0)))))) {
            pSVar10 = mscorlib.dll::System::Int32::Int32_ToString
                                ((Int32 *)&(pUVar6->fields).Gold,(MethodInfo *)0x0);
            pSVar10 = mscorlib.dll::System::String::String_Concat_4
                                (StringLiteral_Finished_calling_Gold_Update__Di,pSVar10,
                                 (MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
              FUN_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                      ((Object *)pSVar10,(MethodInfo *)0x0);
            return;
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


/* Void Initialize() */

void Assembly-CSharp.dll::GoldPurchasedTracker::GoldPurchasedTracker_Initialize
               (GoldPurchasedTracker *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<int,_int>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__GoldPurchasedTracker__StartGoldPurchasePendingUpdate_int__int_);
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
  if ((pMVar1 == (MVGameControllerBase *)0x0) ||
     (pBVar2 = (pMVar1->fields).browserComm, pBVar2 == (BrowserComm *)0x0)) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pAVar4 = (pBVar2->fields).OnGoldPurchasedFromWeb;
  pDVar5 = (Delegate *)FUN_?(TypeInfo__System__Action<int,_int>);
  FUN_?(pDVar5,this);
  pDVar5 = mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pAVar4,pDVar5,(MethodInfo *)0x0);
  pAVar6 = TypeInfo__System__Action<int,_int>;
  if (pDVar5 == (Delegate *)0x0) {
    (pBVar2->fields).OnGoldPurchasedFromWeb = (Action_2_Int32_Int32_ *)0x0;
  }
  else {
    pAVar4 = (Action_2_Int32_Int32_ *)FUN_?(pDVar5,TypeInfo__System__Action<int,_int>);
    if (pAVar4 == (Action_2_Int32_Int32_ *)0x0) {
      FUN_?(pDVar5,pAVar6);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (pBVar2->fields).OnGoldPurchasedFromWeb = pAVar4;
    pAVar6 = TypeInfo__System__Action<int,_int>;
    lVar7 = FUN_?(pDVar5,TypeInfo__System__Action<int,_int>);
    if (lVar7 == 0) {
      FUN_?(pDVar5,pAVar6);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar8 = (uint)((ulonglong)&(pBVar2->fields).OnGoldPurchasedFromWeb >> 0xc);
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
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::GoldPurchasedTracker::GoldPurchasedTracker_OnDestroy
               (GoldPurchasedTracker *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<int,_int>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__GoldPurchasedTracker__GoldUpdatedCallback__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__GoldPurchasedTracker__StartGoldPurchasePendingUpdate_int__int_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_GoldPendingUpdate);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_IsInvoking_2
                    ((MonoBehaviour *)this,StringLiteral_GoldPendingUpdate,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_CancelInvoke_2
              ((MonoBehaviour *)this,StringLiteral_GoldPendingUpdate,(MethodInfo *)0x0);
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar2 != (MVGameControllerBase *)0x0) &&
     (pBVar3 = (pMVar2->fields).browserComm, pBVar3 != (BrowserComm *)0x0)) {
    pAVar4 = (pBVar3->fields).OnGoldPurchasedFromWeb;
    pDVar5 = (Delegate *)FUN_?(TypeInfo__System__Action<int,_int>);
    FUN_?(pDVar5,this);
    pDVar5 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pAVar4,pDVar5,(MethodInfo *)0x0);
    pAVar6 = TypeInfo__System__Action<int,_int>;
    if (pDVar5 == (Delegate *)0x0) {
      (pBVar3->fields).OnGoldPurchasedFromWeb = (Action_2_Int32_Int32_ *)0x0;
    }
    else {
      pAVar4 = (Action_2_Int32_Int32_ *)FUN_?(pDVar5,TypeInfo__System__Action<int,_int>);
      if (pAVar4 == (Action_2_Int32_Int32_ *)0x0) {
        FUN_?(pDVar5,pAVar6);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      (pBVar3->fields).OnGoldPurchasedFromWeb = pAVar4;
      pAVar6 = TypeInfo__System__Action<int,_int>;
      lVar8 = FUN_?();
      if (lVar8 == 0) {
        FUN_?(pDVar5,pAVar6);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar9 = (uint)((ulonglong)&(pBVar3->fields).OnGoldPurchasedFromWeb >> 0xc);
      lVar8 = (ulonglong)((uVar9 & 0x1fffff) >> 6) * 8;
      do {
        uVar10 = *(ulonglong *)(lVar8 + 0xADDR);
        puVar11 = (ulonglong *)(lVar8 + 0xADDR);
        LOCK();
        bVar12 = uVar10 == *puVar11;
        if (bVar12) {
          *puVar11 = uVar10 | 1L << (uVar9 & 0x3f);
        }
        UNLOCK();
      } while (!bVar12);
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((((pMVar2 != (MVGameControllerBase *)0x0) &&
         (pMVar13 = (pMVar2->fields).game, pMVar13 != (MVNetworkGame *)0x0)) &&
        (this_00 = (pMVar13->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) &&
       (pMVar14 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0),
       pMVar14 != (MVLocalPlayer *)0x0)) {
      pAVar15 = (pMVar14->fields)._.OnGoldAmountChange;
      this_01 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_01,(Object *)this,MethodInfo__GoldPurchasedTracker__GoldUpdatedCallback__,
                 (MethodInfo *)0x0);
      pAVar15 = (Action *)
                mscorlib.dll::System::Delegate::Delegate_Remove
                          ((Delegate *)pAVar15,(Delegate *)this_01,(MethodInfo *)0x0);
      if (pAVar15 == (Action *)0x0) {
        (pMVar14->fields)._.OnGoldAmountChange = (Action *)0x0;
      }
      else {
        pAVar16 = (Action *)0x0;
        if (pAVar15->klass == TypeInfo__System__Action) {
          pAVar16 = pAVar15;
        }
        if (pAVar16 == (Action *)0x0) {
          FUN_?(pAVar15);
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        (pMVar14->fields)._.OnGoldAmountChange = pAVar16;
        pAVar16 = (Action *)0x0;
        if (pAVar15->klass == TypeInfo__System__Action) {
          pAVar16 = pAVar15;
        }
        if (pAVar16 == (Action *)0x0) {
          FUN_?(pAVar15);
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      if (iRam_? == 0) {
        return;
      }
      uVar9 = (uint)((ulonglong)&(pMVar14->fields)._.OnGoldAmountChange >> 0xc);
      lVar8 = (ulonglong)((uVar9 & 0x1fffff) >> 6) * 8;
      do {
        uVar10 = *(ulonglong *)(lVar8 + 0xADDR);
        puVar11 = (ulonglong *)(lVar8 + 0xADDR);
        LOCK();
        bVar12 = uVar10 == *puVar11;
        if (bVar12) {
          *puVar11 = uVar10 | 1L << (uVar9 & 0x3f);
        }
        UNLOCK();
      } while (!bVar12);
      return;
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void StartGoldPurchasePendingUpdate(Int32, Int32) */

void Assembly-CSharp.dll::GoldPurchasedTracker::GoldPurchasedTracker_StartGoldPurchasePendingUpdate
               (GoldPurchasedTracker *this,int32_t currentGold,int32_t goldDelta,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
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
    FUN_?(&MethodInfo__GoldPurchasedTracker__GoldUpdatedCallback__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__GoldPurchasedTracker____c___StartGoldPurchasePendingUpdate_b__6_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GoldPurchasedTracker____c);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_GoldPendingUpdate);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Requesting_gold_purchase_update);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  piVar1 = &(this->fields).goldDeltaExpected;
  *piVar1 = *piVar1 + goldDelta;
  (this->fields).currentGold = currentGold;
  (this->fields).goldGainedTotal = 0;
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_Requesting_gold_purchase_update,(MethodInfo *)0x0);
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__GoldPurchasedTracker____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__GoldPurchasedTracker____c);
  }
  this_01 = TypeInfo__GoldPurchasedTracker____c->static_fields->__9__6_0;
  if (this_01 == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
    if (*(int *)&(TypeInfo__GoldPurchasedTracker____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__GoldPurchasedTracker____c);
    }
    object = TypeInfo__GoldPurchasedTracker____c->static_fields->__9;
    this_01 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)object,
               MethodInfo__GoldPurchasedTracker____c___StartGoldPurchasePendingUpdate_b__6_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__GoldPurchasedTracker____c->static_fields->__9__6_0 = this_01;
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&TypeInfo__GoldPurchasedTracker____c->static_fields->__9__6_0 >>
                     0xc);
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
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_01,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
            );
  bVar7 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_IsInvoking_2
                    ((MonoBehaviour *)this,StringLiteral_GoldPendingUpdate,(MethodInfo *)0x0);
  if (bVar7 == 0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar8 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((((pMVar8 == (MVGameControllerBase *)0x0) ||
         (pMVar9 = (pMVar8->fields).game, pMVar9 == (MVNetworkGame *)0x0)) ||
        (this_00 = (pMVar9->fields).playerContainer, this_00 == (MVPlayerContainer *)0x0)) ||
       (pMVar10 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0),
       pMVar10 == (MVLocalPlayer *)0x0)) {
      FUN_?();
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    pAVar12 = (pMVar10->fields)._.OnGoldAmountChange;
    this_02 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_02,(Object *)this,MethodInfo__GoldPurchasedTracker__GoldUpdatedCallback__,
               (MethodInfo *)0x0);
    pAVar12 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar12,(Delegate *)this_02,(MethodInfo *)0x0);
    if (pAVar12 == (Action *)0x0) {
      (pMVar10->fields)._.OnGoldAmountChange = (Action *)0x0;
    }
    else {
      pAVar13 = (Action *)0x0;
      if (pAVar12->klass == TypeInfo__System__Action) {
        pAVar13 = pAVar12;
      }
      if (pAVar13 == (Action *)0x0) {
        FUN_?();
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      (pMVar10->fields)._.OnGoldAmountChange = pAVar13;
      pAVar13 = (Action *)0x0;
      if (pAVar12->klass == TypeInfo__System__Action) {
        pAVar13 = pAVar12;
      }
      if (pAVar13 == (Action *)0x0) {
        FUN_?();
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&(pMVar10->fields)._.OnGoldAmountChange >> 0xc);
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
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_InvokeDelayed
              ((MonoBehaviour *)this,StringLiteral_GoldPendingUpdate,_UNK_?,_UNK_?,
               (MethodInfo *)0x0);
  }
  return;
}

