
/* Void Destroy() */

void Assembly-CSharp.dll::FirstTimeEventManager::FirstTimeEventManager_Destroy(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__FirstTimeEventManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__FirstTimeEventManager->static_fields->firstTimeState = (FirstTimeState *)0x0;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)&TypeInfo__FirstTimeEventManager->static_fields->firstTimeState >> 0xc
                  );
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
  return;
}


/* Boolean HasFirstTimeEventOccured(FirstTimeEvent) */

bool Assembly-CSharp.dll::FirstTimeEventManager::FirstTimeEventManager_HasFirstTimeEventOccured
               (FirstTimeEvent__Enum firstTimeEvent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__FirstTimeEventManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pFVar1 = TypeInfo__FirstTimeEventManager->static_fields->firstTimeState;
  if (pFVar1 != (FirstTimeState *)0x0) {
    if (firstTimeEvent == FirstTimeEvent__Enum_NoEvent) {
      return 1;
    }
    pBVar2 = (pFVar1->fields).bitArray;
    if (pBVar2 != (BitArray *)0x0) {
      if ((pBVar2->fields).m_length <= firstTimeEvent) {
        return 0;
      }
      if ((firstTimeEvent < FirstTimeEvent__Enum_SkipEvent) ||
         ((pBVar2->fields).m_length <= firstTimeEvent)) {
        aFStackX_10[0] = firstTimeEvent;
        actualValue = (Object *)func_?(uRam_?,aFStackX_10,0);
        uVar3 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
        this = (ArgumentOutOfRangeException *)func_?(uVar3);
        message = (String *)func_?(&StringLiteral_Index_was_out_of_range__Must_be_);
        paramName = (String *)func_?(&StringLiteral_index);
        mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_3
                  (this,paramName,actualValue,message,(MethodInfo *)0x0);
        uVar3 = func_?(&MethodInfo__System__Collections__BitArray__Get_int_);
        FUN_?(this,uVar3);
      }
      else {
        pIVar4 = (pBVar2->fields).m_array;
        if (pIVar4 == (Int32__Array *)0x0) {
          FUN_?();
          pcVar5 = (code *)swi(3);
          bVar6 = (*pcVar5)();
          return bVar6;
        }
        if ((uint)firstTimeEvent >> 5 < (uint)pIVar4->max_length) {
          return (pIVar4->vector[(uint)firstTimeEvent >> 5] & 1 << ((byte)firstTimeEvent & 0x1f)) !=
                 0;
        }
      }
      FUN_?();
      pcVar5 = (code *)swi(3);
      bVar6 = (*pcVar5)();
      return bVar6;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Void Initialize(FirstTimeState) */

void Assembly-CSharp.dll::FirstTimeEventManager::FirstTimeEventManager_Initialize
               (FirstTimeState *firstTimeState,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__FirstTimeEventManager__OnLevelingInitialized__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__FirstTimeEventManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__LevelingManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__FirstTimeEventManager->static_fields->firstTimeState = firstTimeState;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)&TypeInfo__FirstTimeEventManager->static_fields->firstTimeState >> 0xc
                  );
    lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
    do {
      uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
      puVar4 = (ulonglong *)(lVar2 + 0xADDR);
      LOCK();
      bVar5 = uVar3 == *puVar4;
      if (bVar5) {
        *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__FirstTimeEventManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__FirstTimeEventManager->static_fields->_FirstTimeSystemInitialized_k__BackingField = 1;
  if (*(int *)&(TypeInfo__LevelingManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__LevelingManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__LevelingManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (TypeInfo__LevelingManager->static_fields->_IsInitialized_k__BackingField == 0) {
    if (*(int *)&(TypeInfo__LevelingManager->_1).field_0x1c == 0) {
      FUN_?();
    }
    pUVar6 = TypeInfo__LevelingManager->static_fields->OnLevelingInitialized;
    this = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this,(Object *)0x0,MethodInfo__FirstTimeEventManager__OnLevelingInitialized__,
               (MethodInfo *)0x0);
    pUVar6 = (UnityAction *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pUVar6,(Delegate *)this,(MethodInfo *)0x0);
    if (pUVar6 == (UnityAction *)0x0) {
      TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = (UnityAction *)0x0;
    }
    else {
      pUVar7 = (UnityAction *)0x0;
      if (pUVar6->klass == TypeInfo__UnityEngine__Events__UnityAction) {
        pUVar7 = pUVar6;
      }
      if (pUVar7 == (UnityAction *)0x0) {
        FUN_?(pUVar6,TypeInfo__UnityEngine__Events__UnityAction);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = pUVar7;
      pUVar7 = (UnityAction *)0x0;
      if (pUVar6->klass == TypeInfo__UnityEngine__Events__UnityAction) {
        pUVar7 = pUVar6;
      }
      if (pUVar7 == (UnityAction *)0x0) {
        FUN_?(pUVar6,TypeInfo__UnityEngine__Events__UnityAction);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)TypeInfo__LevelingManager->static_fields >> 0xc);
      lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
      do {
        uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
        puVar4 = (ulonglong *)(lVar2 + 0xADDR);
        LOCK();
        bVar5 = uVar3 == *puVar4;
        if (bVar5) {
          *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
      return;
    }
  }
  else if (TypeInfo__FirstTimeEventManager->static_fields->firstTimeStatePublisher !=
           (Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_
            *)0x0) {
    pAVar9 = TypeInfo__FirstTimeEventManager->static_fields->firstTimeStatePublisher;
    (*(pAVar9->fields)._._.invoke_impl)
              ((pAVar9->fields)._._.method_code,firstTimeState,0xffffffff,
               (pAVar9->fields)._._.method);
  }
  return;
}


/* Void OnFirstTimeEventResponse(FirstTimeEvent, XPRewardType) */

void Assembly-CSharp.dll::FirstTimeEventManager::FirstTimeEventManager_OnFirstTimeEventResponse
               (FirstTimeEvent__Enum firstTimeEvent,XPRewardType__Enum xpRewardType,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__FirstTimeEventManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__LevelingManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__LevelingManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__LevelingManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__LevelingManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  if ((TypeInfo__LevelingManager->static_fields->_IsInitialized_k__BackingField != 0) &&
     ((char)xpRewardType != '\0')) {
    pAVar1 = TypeInfo__FirstTimeEventManager->static_fields->XPRewarded;
    if (pAVar1 != (Action *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pAVar1->fields)._._.invoke_impl)
                ((pAVar1->fields)._._.method_code,(pAVar1->fields)._._.method);
      return;
    }
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}


/* Void OnLevelingInitialized() */

void Assembly-CSharp.dll::FirstTimeEventManager::FirstTimeEventManager_OnLevelingInitialized
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__FirstTimeEventManager__OnLevelingInitialized__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__FirstTimeEventManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__LevelingManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pFVar1 = TypeInfo__FirstTimeEventManager->static_fields;
  if (pFVar1->firstTimeStatePublisher !=
      (Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_ *)0x0
     ) {
    (*(pFVar1->firstTimeStatePublisher->fields)._._.invoke_impl)
              ((pFVar1->firstTimeStatePublisher->fields)._._.method_code,pFVar1->firstTimeState,
               0xffffffff);
  }
  if (*(int *)&(TypeInfo__LevelingManager->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__LevelingManager);
  }
  pUVar2 = TypeInfo__LevelingManager->static_fields->OnLevelingInitialized;
  this = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this,(Object *)0x0,MethodInfo__FirstTimeEventManager__OnLevelingInitialized__,
             (MethodInfo *)0x0);
  pUVar2 = (UnityAction *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pUVar2,(Delegate *)this,(MethodInfo *)0x0);
  if (pUVar2 == (UnityAction *)0x0) {
    TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = (UnityAction *)0x0;
  }
  else {
    pUVar3 = (UnityAction *)0x0;
    if (pUVar2->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar3 = pUVar2;
    }
    if (pUVar3 == (UnityAction *)0x0) {
      FUN_?(pUVar2,TypeInfo__UnityEngine__Events__UnityAction);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = pUVar3;
    pUVar3 = (UnityAction *)0x0;
    if (pUVar2->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar3 = pUVar2;
    }
    if (pUVar3 == (UnityAction *)0x0) {
      FUN_?(pUVar2,TypeInfo__UnityEngine__Events__UnityAction);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar5 = (uint)((ulonglong)TypeInfo__LevelingManager->static_fields >> 0xc);
    puVar6 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar7 = *puVar6;
      LOCK();
      uVar8 = *puVar6;
      if (uVar7 == uVar8) {
        *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (uVar7 != uVar8);
  }
  return;
}


/* Void OverrideFirstTimeEvent(FirstTimeEvent, Boolean) */

void Assembly-CSharp.dll::FirstTimeEventManager::FirstTimeEventManager_OverrideFirstTimeEvent
               (FirstTimeEvent__Enum firstTimeEvent,bool overrideValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__FirstTimeEventManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pFVar1 = TypeInfo__FirstTimeEventManager->static_fields->firstTimeState;
  if ((pFVar1 != (FirstTimeState *)0x0) &&
     (pBVar2 = (pFVar1->fields).bitArray, pBVar2 != (BitArray *)0x0)) {
    if ((pBVar2->fields).m_length <= firstTimeEvent) {
      mscorlib.dll::System::Collections::BitArray::BitArray_set_Length
                (pBVar2,firstTimeEvent + 1,(MethodInfo *)0x0);
    }
    pBVar2 = (pFVar1->fields).bitArray;
    if (pBVar2 != (BitArray *)0x0) {
      uVar3 = 0;
      mscorlib.dll::System::Collections::BitArray::BitArray_Set
                (pBVar2,firstTimeEvent,overrideValue,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar4 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (((pMVar4 != (MVGameControllerBase *)0x0) &&
          (pMVar5 = (pMVar4->fields).game, pMVar5 != (MVNetworkGame *)0x0)) &&
         (pMVar6 = (pMVar5->fields).operationRequests,
         pMVar6 != (MVNetworkGame_OperationRequests *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                       );
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
        this = (Dictionary_2_System_Byte_System_Object_ *)
               FUN_?(
                            TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                            );
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
        Dictionary_2_System_Byte_System_Object___ctor
                  (this,
                   MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                  );
        aFStackX_10[0] = firstTimeEvent;
        pOVar7 = (Object *)FUN_?(uRam_?,aFStackX_10);
        if (this != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
          uVar8 = CONCAT71((int7)((ulonglong)uVar3 >> 8),2);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
          Dictionary_2_System_Byte_System_Object__TryInsert
                    (this,0xbf,pOVar7,(InsertionBehavior__Enum)uVar8,
                     MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                     ->klass->rgctx_data[0x22].method);
          aFStackX_10[0] = CONCAT31(aFStackX_10[0]._1_3_,overrideValue);
          pOVar7 = (Object *)FUN_?(uRam_?,aFStackX_10);
          method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                      ->klass->rgctx_data[0x22].method;
          uVar3 = CONCAT71((int7)((ulonglong)method_00 >> 8),0xd0);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
          Dictionary_2_System_Byte_System_Object__TryInsert
                    (this,0xd0,pOVar7,
                     (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar8 >> 8),2),method_00);
          pPVar9 = (pMVar6->fields).peer;
          if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
          }
          if (pPVar9 != (PhotonPeer *)0x0) {
            (*(pPVar9->klass->vtable).SendOperation.methodPtr)
                      (pPVar9,CONCAT71((int7)((ulonglong)uVar3 >> 8),0x55),this,
                       TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable
                       ,(pPVar9->klass->vtable).SendOperation.method);
            pFVar10 = TypeInfo__FirstTimeEventManager->static_fields;
            if (pFVar10->firstTimeStatePublisher !=
                (Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_
                 *)0x0) {
              pAVar11 = pFVar10->firstTimeStatePublisher;
              (*(pAVar11->fields)._._.invoke_impl)
                        ((pAVar11->fields)._._.method_code,pFVar10->firstTimeState,0xffffffff,
                         (pAVar11->fields)._._.method);
            }
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


/* Void ResetFirstTimeEvents(Boolean) */

void Assembly-CSharp.dll::FirstTimeEventManager::FirstTimeEventManager_ResetFirstTimeEvents
               (bool overrideValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__FirstTimeEventManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeRef__MV__WorldObject__MetaData__FirstTimeEvent);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__MetaData__FirstTimeEvent);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__IDisposable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerator);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = TypeRef__MV__WorldObject__MetaData__FirstTimeEvent;
  plVar2 = (longlong *)0x0;
  alStack_3[0] = 0;
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  if (pIVar1 != (Il2CppType *)0x0) {
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    lVar4 = FUN_?(pIVar1,1);
    plVar2 = (longlong *)FUN_?(lVar4 + 0x20);
  }
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  if (plVar2 == (longlong *)0x0) {
    uVar5 = func_?(&TypeInfo__System__ArgumentNullException);
    this_02 = (ArgumentNullException *)func_?(uVar5);
    paramName = (String *)func_?(&StringLiteral_enumType);
    pFVar6 = (FirstTimeEvent__Enum__Class *)0x0;
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this_02,paramName,(MethodInfo *)0x0);
    uVar5 = func_?(&MethodInfo__System__Enum__GetValues_System__Type_);
    FUN_?(this_02,uVar5);
code_?:
    plVar2 = (longlong *)FUN_?();
code_?:
    FUN_?(plVar2,pFVar6);
code_?:
    FUN_?();
code_?:
    FUN_?();
  }
  else {
    this_00 = (Array *)(**(code **)(*plVar2 + 0x888))(plVar2);
    if (this_00 == (Array *)0x0) {
code_?:
      FUN_?();
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pIStackX_20 = mscorlib.dll::System::Array::Array_GetEnumerator(this_00,(MethodInfo *)0x0);
    uStack_8 = 0;
    ppIStack_9 = &pIStackX_20;
    plStack_10 = alStack_3;
    while (pIStackX_20 != (IEnumerator *)0x0) {
      cVar11 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
      pIVar12 = pIStackX_20;
      if (cVar11 == '\0') {
        alStack_3[0] = FUN_?(pIStackX_20,TypeInfo__System__IDisposable);
        if (alStack_3[0] != 0) {
          FUN_?(0,TypeInfo__System__IDisposable,alStack_3[0]);
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar13 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if (((pMVar13 != (MVGameControllerBase *)0x0) &&
            (pMVar14 = (pMVar13->fields).game, pMVar14 != (MVNetworkGame *)0x0)) &&
           (pMVar15 = (pMVar14->fields).operationRequests,
           pMVar15 != (MVNetworkGame_OperationRequests *)0x0)) {
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                         );
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
          this_01 = (Dictionary_2_System_Byte_System_Object_ *)
                    FUN_?(
                                 TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                                 );
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
          Dictionary_2_System_Byte_System_Object___ctor
                    (this_01,
                     MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                    );
          abStackX_18[0] = overrideValue;
          value = (Object *)FUN_?(uRam_?,abStackX_18);
          if (this_01 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
            method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                        ->klass->rgctx_data[0x22].method;
            uVar5 = CONCAT71((int7)((ulonglong)method_00 >> 8),0xd0);
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
            Dictionary_2_System_Byte_System_Object__TryInsert
                      (this_01,0xd0,value,
                       (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2),method_00)
            ;
            pPVar16 = (pMVar15->fields).peer;
            if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
              FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
            }
            if (pPVar16 != (PhotonPeer *)0x0) {
              (*(pPVar16->klass->vtable).SendOperation.methodPtr)
                        (pPVar16,CONCAT71((int7)((ulonglong)uVar5 >> 8),0x53),this_01,
                         TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->
                         SendReliable,(pPVar16->klass->vtable).SendOperation.method);
              pFVar17 = TypeInfo__FirstTimeEventManager->static_fields;
              if (pFVar17->firstTimeStatePublisher !=
                  (Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_
                   *)0x0) {
                pAVar18 = pFVar17->firstTimeStatePublisher;
                (*(pAVar18->fields)._._.invoke_impl)
                          ((pAVar18->fields)._._.method_code,pFVar17->firstTimeState,0xffffffff,
                           (pAVar18->fields)._._.method);
              }
              return;
            }
          }
        }
        goto code_?;
      }
      if (pIStackX_20 == (IEnumerator *)0x0) goto code_?;
      pIVar19 = pIStackX_20->klass;
      uVar20 = 0;
      uVar21._0_1_ = (pIVar19->_1).rank;
      uVar21._1_1_ = (pIVar19->_1).minimumAlignment;
      in_R9 = TypeInfo__System__Collections__IEnumerator;
      if (uVar21 != 0) {
        do {
          if (pIVar19->interfaceOffsets[uVar20].interfaceType ==
              (Il2CppClass *)TypeInfo__System__Collections__IEnumerator) {
            pVVar22 = &(pIVar19->vtable).MoveNext + (pIVar19->interfaceOffsets[uVar20].offset + 1);
            goto code_?;
          }
          uVar20 = uVar20 + 1;
        } while (uVar20 < uVar21);
      }
      pVVar22 = (VirtualInvokeData *)
                FUN_?(pIStackX_20,TypeInfo__System__Collections__IEnumerator,1);
code_?:
      plVar2 = (longlong *)(*pVVar22->methodPtr)(pIVar12,pVVar22->method);
      if (plVar2 == (longlong *)0x0) goto code_?;
      pFVar6 = TypeInfo__MV__WorldObject__MetaData__FirstTimeEvent;
      if (*(Il2CppClass **)(*plVar2 + 0x40) !=
          (TypeInfo__MV__WorldObject__MetaData__FirstTimeEvent->_0).element_class)
      goto code_?;
      if (*(FirstTimeEvent__Enum *)(plVar2 + 2) != FirstTimeEvent__Enum_NoEvent) {
        this = TypeInfo__FirstTimeEventManager->static_fields->firstTimeState;
        if (this == (FirstTimeState *)0x0) goto code_?;
        in_R9 = (IEnumerator__Class *)0x0;
        MVWorldObject.dll::MV::WorldObject::MetaData::FirstTimeState::
        FirstTimeState_OverrideFirstTimeEvent
                  (this,*(FirstTimeEvent__Enum *)(plVar2 + 2),overrideValue,(MethodInfo *)0x0);
      }
    }
  }
  FUN_?();
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void SetFirstTimeEvent(FirstTimeEvent) */

void Assembly-CSharp.dll::FirstTimeEventManager::FirstTimeEventManager_SetFirstTimeEvent
               (FirstTimeEvent__Enum firstTimeEvent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__FirstTimeEventManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pFVar1 = TypeInfo__FirstTimeEventManager->static_fields->firstTimeState;
  if ((pFVar1 != (FirstTimeState *)0x0) &&
     (pBVar2 = (pFVar1->fields).bitArray, pBVar2 != (BitArray *)0x0)) {
    if ((pBVar2->fields).m_length <= firstTimeEvent) {
      mscorlib.dll::System::Collections::BitArray::BitArray_set_Length
                (pBVar2,firstTimeEvent + 1,(MethodInfo *)0x0);
    }
    pBVar2 = (pFVar1->fields).bitArray;
    if (pBVar2 != (BitArray *)0x0) {
      pvVar3 = (void *)0x0;
      mscorlib.dll::System::Collections::BitArray::BitArray_Set
                (pBVar2,firstTimeEvent,1,(MethodInfo *)0x0);
      pFVar4 = TypeInfo__FirstTimeEventManager->static_fields;
      if (pFVar4->firstTimeStatePublisher !=
          (Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_ *
          )0x0) {
        pAVar5 = pFVar4->firstTimeStatePublisher;
        pvVar3 = (pAVar5->fields)._._.method;
        (*(pAVar5->fields)._._.invoke_impl)
                  ((pAVar5->fields)._._.method_code,pFVar4->firstTimeState,firstTimeEvent,pvVar3);
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (((pMVar6 != (MVGameControllerBase *)0x0) &&
          (pMVar7 = (pMVar6->fields).game, pMVar7 != (MVNetworkGame *)0x0)) &&
         (pMVar8 = (pMVar7->fields).operationRequests,
         pMVar8 != (MVNetworkGame_OperationRequests *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                       );
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
        this = (Dictionary_2_System_Byte_System_Object_ *)
               FUN_?(
                            TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                            );
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
        Dictionary_2_System_Byte_System_Object___ctor
                  (this,
                   MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                  );
        aFStackX_8[0] = firstTimeEvent;
        value = (Object *)FUN_?(uRam_?,aFStackX_8);
        if (this != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
          method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                      ->klass->rgctx_data[0x22].method;
          uVar9 = CONCAT71((int7)((ulonglong)method_00 >> 8),0xbf);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
          Dictionary_2_System_Byte_System_Object__TryInsert
                    (this,0xbf,value,
                     (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pvVar3 >> 8),2),method_00)
          ;
          pPVar10 = (pMVar8->fields).peer;
          if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
          }
          if (pPVar10 != (PhotonPeer *)0x0) {
            (*(pPVar10->klass->vtable).SendOperation.methodPtr)
                      (pPVar10,CONCAT71((int7)((ulonglong)uVar9 >> 8),0x54),this,
                       TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable
                       ,(pPVar10->klass->vtable).SendOperation.method);
            return;
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


/* Void 
   SubscribeToFirstTimeState(Action`2[MV.WorldObject.MetaData.FirstTimeState,MV.WorldObject.MetaData.FirstTimeEvent])
    */

void Assembly-CSharp.dll::FirstTimeEventManager::FirstTimeEventManager_SubscribeToFirstTimeState
               (Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_
                *firstTimeStateReceiver,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__FirstTimeEventManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__FirstTimeEventManager->static_fields->firstTimeState != (FirstTimeState *)0x0) {
    if (firstTimeStateReceiver ==
        (Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_ *)
        0x0) {
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (*(firstTimeStateReceiver->fields)._._.invoke_impl)
              ((firstTimeStateReceiver->fields)._._.method_code,
               TypeInfo__FirstTimeEventManager->static_fields->firstTimeState,0xffffffff,
               (firstTimeStateReceiver->fields)._._.method);
  }
  pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)
                      TypeInfo__FirstTimeEventManager->static_fields->firstTimeStatePublisher,
                      (Delegate *)firstTimeStateReceiver,(MethodInfo *)0x0);
  pAVar3 = 
  TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
  ;
  if (pDVar2 == (Delegate *)0x0) {
    TypeInfo__FirstTimeEventManager->static_fields->firstTimeStatePublisher =
         (Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_ *)
         0x0;
  }
  else {
    pAVar4 = (Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_
              *)FUN_?(pDVar2,
                              TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
                             );
    if (pAVar4 == (Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_
                   *)0x0) {
      FUN_?(pDVar2,pAVar3);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    TypeInfo__FirstTimeEventManager->static_fields->firstTimeStatePublisher = pAVar4;
    pAVar3 = 
    TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
    ;
    lVar5 = FUN_?(pDVar2,
                          TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
                         );
    if (lVar5 == 0) {
      FUN_?(pDVar2,pAVar3);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar6 = (uint)((ulonglong)TypeInfo__FirstTimeEventManager->static_fields >> 0xc);
    puVar7 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar8 = *puVar7;
      LOCK();
      uVar9 = *puVar7;
      if (uVar8 == uVar9) {
        *puVar7 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (uVar8 != uVar9);
  }
  return;
}


/* Void 
   UnSubscribeToFirstTimeState(Action`2[MV.WorldObject.MetaData.FirstTimeState,MV.WorldObject.MetaData.FirstTimeEvent])
    */

void Assembly-CSharp.dll::FirstTimeEventManager::FirstTimeEventManager_UnSubscribeToFirstTimeState
               (Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_
                *firstTimeStateReceiver,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__FirstTimeEventManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)
                      TypeInfo__FirstTimeEventManager->static_fields->firstTimeStatePublisher,
                      (Delegate *)firstTimeStateReceiver,(MethodInfo *)0x0);
  pAVar2 = 
  TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
  ;
  if (pDVar1 == (Delegate *)0x0) {
    TypeInfo__FirstTimeEventManager->static_fields->firstTimeStatePublisher =
         (Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_ *)
         0x0;
  }
  else {
    pAVar3 = (Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_
              *)FUN_?(pDVar1,
                              TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
                             );
    if (pAVar3 == (Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_
                   *)0x0) {
      FUN_?(pDVar1,pAVar2);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    TypeInfo__FirstTimeEventManager->static_fields->firstTimeStatePublisher = pAVar3;
    pAVar2 = 
    TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
    ;
    lVar5 = FUN_?(pDVar1,
                          TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
                         );
    if (lVar5 == 0) {
      FUN_?(pDVar1,pAVar2);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar6 = (uint)((ulonglong)TypeInfo__FirstTimeEventManager->static_fields >> 0xc);
    puVar7 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar8 = *puVar7;
      LOCK();
      uVar9 = *puVar7;
      if (uVar8 == uVar9) {
        *puVar7 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (uVar8 != uVar9);
  }
  return;
}


/* Boolean get_FirstTimeSystemInitialized() */

bool Assembly-CSharp.dll::FirstTimeEventManager::
     FirstTimeEventManager_get_FirstTimeSystemInitialized(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__FirstTimeEventManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  return TypeInfo__FirstTimeEventManager->static_fields->_FirstTimeSystemInitialized_k__BackingField
  ;
}


/* Boolean get_GetProfileMetaDataOk() */

bool Assembly-CSharp.dll::FirstTimeEventManager::FirstTimeEventManager_get_GetProfileMetaDataOk
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__FirstTimeEventManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  return TypeInfo__FirstTimeEventManager->static_fields->_GetProfileMetaDataOk_k__BackingField;
}


/* Void set_FirstTimeSystemInitialized(Boolean) */

void Assembly-CSharp.dll::FirstTimeEventManager::
     FirstTimeEventManager_set_FirstTimeSystemInitialized(bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__FirstTimeEventManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__FirstTimeEventManager->static_fields->_FirstTimeSystemInitialized_k__BackingField =
       value;
  return;
}


/* Void set_GetProfileMetaDataOk(Boolean) */

void Assembly-CSharp.dll::FirstTimeEventManager::FirstTimeEventManager_set_GetProfileMetaDataOk
               (bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__FirstTimeEventManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__FirstTimeEventManager->static_fields->_GetProfileMetaDataOk_k__BackingField = value;
  return;
}

