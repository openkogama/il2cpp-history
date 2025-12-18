
/* Void Destroy() */

void Assembly-CSharp.dll::TimeAttackFlag::TimeAttackFlag_Destroy
               (TimeAttackFlag *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__TimeAttackFlag__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UseInteractor__TriggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UseInteractor__TriggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TimeAttackFlagReachedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<TimeAttackFlagReachedClient>__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).triggerBoxEvents;
  pUVar2 = (UnityAction_2_System_Object_System_Object_ *)
            FUN_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            (pUVar2,(Object *)this,
             MethodInfo__TimeAttackFlag__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
             ,(MethodInfo *)0x0);
  if (pTVar1 == (TriggerBoxEvents *)0x0) goto code_?;
  TriggerBoxEvents::TriggerBoxEvents_remove_TriggerEnter
            (pTVar1,(EventHandler_1_TriggerEventArgs_ *)pUVar2,(MethodInfo *)0x0);
  if ((this->fields).useInteractor != (UseInteractor *)0x0) {
    pTVar1 = (this->fields).triggerBoxEvents;
    pUVar3 = (this->fields).useInteractor;
    pUVar2 = (UnityAction_2_System_Object_System_Object_ *)
              FUN_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (pUVar2,(Object *)pUVar3,
               MethodInfo__UseInteractor__TriggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
               ,(MethodInfo *)0x0);
    if (pTVar1 == (TriggerBoxEvents *)0x0) goto code_?;
    TriggerBoxEvents::TriggerBoxEvents_remove_TriggerEnter
              (pTVar1,(EventHandler_1_TriggerEventArgs_ *)pUVar2,(MethodInfo *)0x0);
    pTVar1 = (this->fields).triggerBoxEvents;
    pUVar3 = (this->fields).useInteractor;
    pUVar2 = (UnityAction_2_System_Object_System_Object_ *)
              FUN_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (pUVar2,(Object *)pUVar3,
               MethodInfo__UseInteractor__TriggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
               ,(MethodInfo *)0x0);
    if (pTVar1 == (TriggerBoxEvents *)0x0) goto code_?;
    TriggerBoxEvents::TriggerBoxEvents_remove_TriggerExit
              (pTVar1,(EventHandler_1_TriggerEventArgs_ *)pUVar2,(MethodInfo *)0x0);
    pUVar3 = (this->fields).useInteractor;
    if ((pUVar3 == (UseInteractor *)0x0) ||
       (this_00 = (pUVar3->fields).useInteractorVisuals,
       this_00 == (UseInteractorVisualization *)0x0)) goto code_?;
    UseInteractorVisualization::UseInteractorVisualization_DestroyRequirementObjects
              (this_00,(this->fields)._._._._.data,(MethodInfo *)0x0);
    bVar4 = iRam_? != 0;
    (this->fields).useInteractor = (UseInteractor *)0x0;
    if (bVar4) {
      uVar5 = (uint)((ulonglong)&(this->fields).useInteractor >> 0xc);
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
  }
  MVGamePointRewardLogicObject::MVGamePointRewardLogicObject_Destroy
            ((MVGamePointRewardLogicObject *)this,(MethodInfo *)0x0);
  if ((this->fields).initializedInWorld == 0) {
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar9 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar9 != (MVGameControllerBase *)0x0) &&
       (pMVar10 = (pMVar9->fields).game, pMVar10 != (MVNetworkGame *)0x0)) &&
      (pWVar11 = (pMVar10->fields).worldNetwork, pWVar11 != (WorldNetwork *)0x0)) &&
     ((this_01 = (MVWorldObjectClientManager *)(pWVar11->fields)._.worldObjectClientManager,
      this_01 != (MVWorldObjectClientManager *)0x0 &&
      (pLVar12 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectsByType
                           (this_01,(this->fields)._._._._.type,(MethodInfo *)0x0),
      pLVar12 != (List_1_MVWorldObjectClient_ *)0x0)))) {
    if ((pLVar12->fields)._size != 0) {
      return;
    }
    pMVar10 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar10 != (MVNetworkGame *)0x0) &&
       (pWVar13 = (pMVar10->fields)._WinningConditionManager_k__BackingField,
       pWVar13 != (WinningConditionManager *)0x0)) {
      pOVar14 = MVWorldObject.dll::WinningConditionManager::
                WinningConditionManager_GetSingletonWinnerConditionByType
                          (pWVar13,
                           TimeAttackFlagReachedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<TimeAttackFlagReachedClient>__
                          );
      if (pOVar14 == (Object *)0x0) {
        uVar15 = func_?(&TypeInfo__System__Exception);
        this_02 = (Exception *)func_?(uVar15);
        message = (String *)func_?(&StringLiteral_Could_not_find_FlagReached_singl);
        mscorlib.dll::System::Exception::Exception__ctor_1(this_02,message,(MethodInfo *)0x0);
        uVar15 = func_?(&MethodInfo__TimeAttackFlag__Destroy__);
        FUN_?(this_02,uVar15);
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      pMVar10 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar10 != (MVNetworkGame *)0x0) &&
         (pWVar13 = (pMVar10->fields)._WinningConditionManager_k__BackingField,
         pWVar13 != (WinningConditionManager *)0x0)) {
        MVWorldObject.dll::WinningConditionManager::WinningConditionManager_RemoveWinnerCondition
                  (pWVar13,*(int32_t *)((longlong)&pOVar14[1].klass + 4),(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Boolean DoReachTimeAttackFlag(Int32) */

bool Assembly-CSharp.dll::TimeAttackFlag::TimeAttackFlag_DoReachTimeAttackFlag
               (TimeAttackFlag *this,int32_t instigator,MethodInfo *method)

{
  if ((this->fields).isTimeAttackDebriefingOn == 0) {
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?,CONCAT44(in_register_00000014,instigator)),
       pcVar1 == (code *)0x0)) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar1 = (code *)swi(3);
      bVar3 = (*pcVar1)();
      return bVar3;
    }
    pcRam_? = pcVar1;
    fVar4 = (float)(*pcRam_?)();
    if ((this->fields).lastCaptureTime + _UNK_? <= fVar4) {
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(), pcVar1 == (code *)0x0)) {
        uVar2 = func_?(&UNK_?);
        FUN_?(uVar2,0);
        pcVar1 = (code *)swi(3);
        bVar3 = (*pcVar1)();
        return bVar3;
      }
      pcRam_? = pcVar1;
      fVar4 = (float)(*pcRam_?)();
      pcVar1 = pcRam_?;
      (this->fields).lastCaptureTime = fVar4;
      pcVar5 = pcRam_?;
      if ((pcVar1 == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(), pcVar5 = pcVar1, pcVar1 == (code *)0x0)) {
        uVar2 = func_?(&UNK_?);
        FUN_?(uVar2,0);
        pcVar1 = (code *)swi(3);
        bVar3 = (*pcVar1)();
        return bVar3;
      }
      pcRam_? = pcVar5;
      fVar4 = (float)(*pcVar1)();
      pFVar6 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl
                         ((MethodInfo *)0x0);
      if (pFVar6 != (FlagDebriefingControl *)0x0) {
        iVar7 = FUN_?((fVar4 - (pFVar6->fields).RunStartTime) * _UNK_?);
        pMVar8 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0)
        ;
        iVar9 = (this->fields)._._._._.id;
        if (pMVar8 != (MVNetworkGame_OperationRequests *)0x0) {
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
          this_00 = (Dictionary_2_System_Byte_System_Object_ *)
                    FUN_?(
                                 TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                                 );
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
          Dictionary_2_System_Byte_System_Object___ctor
                    (this_00,
                     MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                    );
          aiStackX_8[0] = iVar7;
          pOVar10 = (Object *)FUN_?(uRam_?,aiStackX_8);
          if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
            uVar11 = CONCAT71((int7)((ulonglong)in_R9 >> 8),2);
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
            Dictionary_2_System_Byte_System_Object__TryInsert
                      (this_00,0x24,pOVar10,(InsertionBehavior__Enum)uVar11,
                       MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                       ->klass->rgctx_data[0x22].method);
            aiStackX_8[0] = iVar9;
            pOVar10 = (Object *)FUN_?(uRam_?,aiStackX_8);
            method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                        ->klass->rgctx_data[0x22].method;
            uVar2 = CONCAT71((int7)((ulonglong)method_00 >> 8),0xc1);
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
            Dictionary_2_System_Byte_System_Object__TryInsert
                      (this_00,0xc1,pOVar10,
                       (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar11 >> 8),2),method_00
                      );
            pPVar12 = (pMVar8->fields).peer;
            if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
              FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
            }
            if (pPVar12 != (PhotonPeer *)0x0) {
              (*(pPVar12->klass->vtable).SendOperation.methodPtr)
                        (pPVar12,CONCAT71((int7)((ulonglong)uVar2 >> 8),0x5e),this_00,
                         TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->
                         SendReliable,(pPVar12->klass->vtable).SendOperation.method);
              pFVar6 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl
                                 ((MethodInfo *)0x0);
              if (pFVar6 != (FlagDebriefingControl *)0x0) {
                (pFVar6->fields).IsInFlagDebriefing = 1;
                if ((pFVar6->fields).OnFlagDebriefing != (Action_1_Int32_ *)0x0) {
                  pAVar13 = (pFVar6->fields).OnFlagDebriefing;
                  (*(pAVar13->fields)._._.invoke_impl)
                            ((pAVar13->fields)._._.method_code,iVar7,(pAVar13->fields)._._.method);
                }
                return 1;
              }
            }
          }
        }
      }
      FUN_?();
      pcVar1 = (code *)swi(3);
      bVar3 = (*pcVar1)();
      return bVar3;
    }
  }
  return 0;
}


/* Vector3 GetClosestGridPoint(Single, Vector3) */

Vector3 * Assembly-CSharp.dll::TimeAttackFlag::TimeAttackFlag_GetClosestGridPoint
                    (Vector3 *__return_storage_ptr__,TimeAttackFlag *this,float gridSize,
                    Vector3 *position,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__SharedCubeFunctions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  VStack_2.x = (pVVar1->oneVector).x;
  VStack_2.y = (pVVar1->oneVector).y;
  VStack_2.z = (pVVar1->oneVector).z;
  fVar3 = VStack_2.y + VStack_2.y;
  this_00 = (this->fields)._._._.gameObject;
  if ((this_00 != (GameObject *)0x0) &&
     (obj = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                      (this_00,(MethodInfo *)0x0), obj != (Transform *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    QStack_4.x = 0.0;
    QStack_4.y = 0.0;
    QStack_4.z = 0.0;
    QStack_4.w = 0.0;
    pvVar5 = (obj->fields)._._.m_CachedPtr;
    if (pvVar5 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar6 = (code *)swi(3);
      pVVar7 = (Vector3 *)(*pcVar6)();
      return pVVar7;
    }
    pcVar6 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
      uVar8 = func_?(&UNK_?);
      FUN_?(uVar8,0);
      pcVar6 = (code *)swi(3);
      pVVar7 = (Vector3 *)(*pcVar6)();
      return pVVar7;
    }
    pcRam_? = pcVar6;
    (*pcRam_?)(pvVar5,&QStack_4);
    VStack_9.z = _UNK_?;
    if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
      FUN_?();
    }
    VStack_2.z = position->z;
    VStack_2.x = position->x;
    VStack_2.y = position->y;
    VStack_9.y = fVar3;
    VStack_9.x = VStack_9.z;
    aQStack_10[0].x = QStack_4.x;
    aQStack_10[0].y = QStack_4.y;
    aQStack_10[0].z = QStack_4.z;
    aQStack_10[0].w = QStack_4.w;
    pVVar7 = SharedCubeFunctions::SharedCubeFunctions_GetClosestGridPoint
                       ((Vector3 *)&QStack_4,&VStack_2,aQStack_10,gridSize,&VStack_9,
                        (MethodInfo *)0x0);
    fVar11 = pVVar7->y;
    fVar3 = pVVar7->z;
    __return_storage_ptr__->x = pVVar7->x;
    __return_storage_ptr__->y = fVar11;
    __return_storage_ptr__->z = fVar3;
    return __return_storage_ptr__;
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  pVVar7 = (Vector3 *)(*pcVar6)();
  return pVVar7;
}


/* Void Initialize() */

void Assembly-CSharp.dll::TimeAttackFlag::TimeAttackFlag_Initialize
               (TimeAttackFlag *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&System__Object__MethodInfo__System__Array__Empty<System::Object>______);
    LOCK();
    UNLOCK();
    FUN_?(&
                  WorldObjectEnableController_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<WorldObjectEnableController>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__TimeAttackFlag__LateInitialize__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TimeAttackFlagReachedClient_MethodInfo__WinningConditionManager__CreateWinnerCondition<TimeAttackFlagReachedClient>_System__Object____
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TimeAttackFlagReachedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<TimeAttackFlagReachedClient>__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TimeAttackFlag_SetupUseInteractor(this,(MethodInfo *)0x0);
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 == (MVGameControllerBase *)0x0) ||
      (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) ||
     (pWVar3 = (pMVar2->fields)._WinningConditionManager_k__BackingField,
     pWVar3 == (WinningConditionManager *)0x0)) goto code_?;
  pOVar4 = MVWorldObject.dll::WinningConditionManager::
            WinningConditionManager_GetSingletonWinnerConditionByType
                      (pWVar3,
                       TimeAttackFlagReachedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<TimeAttackFlagReachedClient>__
                      );
  if (pOVar4 == (Object *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((pMVar1 == (MVGameControllerBase *)0x0) ||
       (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) goto code_?;
    pWVar3 = (pMVar2->fields)._WinningConditionManager_k__BackingField;
    args = (Object__Array *)
           System.Core.dll::System::Linq::Enumerable::Enumerable_Empty_2
                     (System__Object__MethodInfo__System__Array__Empty<System::Object>______);
    if (pWVar3 == (WinningConditionManager *)0x0) goto code_?;
    MVWorldObject.dll::WinningConditionManager::WinningConditionManager_CreateWinnerCondition
              (pWVar3,args,
               TimeAttackFlagReachedClient_MethodInfo__WinningConditionManager__CreateWinnerCondition<TimeAttackFlagReachedClient>_System__Object____
              );
  }
  pUVar5 = (this->fields).useInteractor;
  (this->fields).initializedInWorld = 1;
  if ((pUVar5 != (UseInteractor *)0x0) &&
     (this_00 = (pUVar5->fields).useInteractorVisuals, this_00 != (UseInteractorVisualization *)0x0)
     ) {
    UseInteractorVisualization::UseInteractorVisualization_UpdateData
              (this_00,(this->fields)._._._._.data,(pUVar5->fields).woOwnerID,(MethodInfo *)0x0);
    pMVar6 = 
    WorldObjectEnableController_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<WorldObjectEnableController>__
    ;
    this_01 = (this->fields)._._._.gameObject;
    if (this_01 != (GameObject *)0x0) {
      if ((
          WorldObjectEnableController_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<WorldObjectEnableController>__
          ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?(
                     WorldObjectEnableController_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<WorldObjectEnableController>__
                     );
      }
      pMVar6 = ((pMVar6->field7_0x38).rgctx_data)->method;
      pWVar7 = (WorldObjectEnableController *)
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                GameObject_GetComponentInChildren_3(this_01,0,pMVar6);
      bVar8 = iRam_? != 0;
      (this->fields).worldObjectEnableController = pWVar7;
      if (bVar8) {
        uVar9 = (uint)((ulonglong)&(this->fields).worldObjectEnableController >> 0xc);
        uVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
        pMVar6 = (MethodInfo *)(ulonglong)(uVar9 & 0x3f);
        do {
          uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
          puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
          LOCK();
          bVar8 = uVar11 == *puVar12;
          if (bVar8) {
            *puVar12 = uVar11 | 1L << (longlong)pMVar6;
          }
          UNLOCK();
        } while (!bVar8);
      }
      pTVar13 = (this->fields).timeAttackFlagObject;
      if (pTVar13 != (TimeAttackFlagObject *)0x0) {
        player = (MVPlayer *)(pTVar13->fields).visualObject;
        MVLogicObject::MVLogicObject_SetupCulling
                  ((MVLogicObject *)this,(GameObject *)player,TypeRef__System__Activator__T._0_4_,
                   (MethodInfo *)0x0);
        MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,player,pMVar6);
        if (extraout_RAX != 0) {
          if (*(char *)(extraout_RAX + 0x80) == '\x01') {
            TimeAttackFlag_InitializeCallbacks(this,(MethodInfo *)0x0);
          }
          else {
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__MVGameControllerBase);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
            if (((pMVar1 == (MVGameControllerBase *)0x0) ||
                (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) ||
               (pMVar14 = (pMVar2->fields).playerContainer, pMVar14 == (MVPlayerContainer *)0x0))
            goto code_?;
            pAVar15 = (pMVar14->fields).OnLocalPlayerReady;
            this_02 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
            UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
            NavMesh_OnNavMeshPreUpdate__ctor
                      (this_02,(Object *)this,MethodInfo__TimeAttackFlag__LateInitialize__,
                       (MethodInfo *)0x0);
            pAVar15 = (Action *)
                      mscorlib.dll::System::Delegate::Delegate_Combine
                                ((Delegate *)pAVar15,(Delegate *)this_02,(MethodInfo *)0x0);
            if (pAVar15 == (Action *)0x0) {
              (pMVar14->fields).OnLocalPlayerReady = (Action *)0x0;
            }
            else {
              pAVar16 = (Action *)0x0;
              if (pAVar15->klass == TypeInfo__System__Action) {
                pAVar16 = pAVar15;
              }
              if (pAVar16 == (Action *)0x0) {
                FUN_?(pAVar15,TypeInfo__System__Action);
                pcVar17 = (code *)swi(3);
                (*pcVar17)();
                return;
              }
              (pMVar14->fields).OnLocalPlayerReady = pAVar16;
              pAVar16 = (Action *)0x0;
              if (pAVar15->klass == TypeInfo__System__Action) {
                pAVar16 = pAVar15;
              }
              if (pAVar16 == (Action *)0x0) {
                FUN_?();
                pcVar17 = (code *)swi(3);
                (*pcVar17)();
                return;
              }
            }
            if (iRam_? != 0) {
              uVar9 = (uint)((ulonglong)&(pMVar14->fields).OnLocalPlayerReady >> 0xc);
              uVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
              do {
                uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
                puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
                LOCK();
                bVar8 = uVar11 == *puVar12;
                if (bVar8) {
                  *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
                }
                UNLOCK();
              } while (!bVar8);
            }
          }
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void InitializeCallbacks() */

void Assembly-CSharp.dll::TimeAttackFlag::TimeAttackFlag_InitializeCallbacks
               (TimeAttackFlag *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<int>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__TimeAttackFlag__OnEndFlagDebriefing__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__TimeAttackFlag__OnStartFlagDebriefing_int_);
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
  if ((pMVar1 != (MVGameControllerBase *)0x0) &&
     (pFVar2 = (pMVar1->fields).flagDebriefingControl, pFVar2 != (FlagDebriefingControl *)0x0)) {
    pAVar3 = (pFVar2->fields).OnFlagDebriefing;
    pDVar4 = (Delegate *)FUN_?(TypeInfo__System__Action<int>);
    FUN_?(pDVar4,this);
    pDVar4 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar3,pDVar4,(MethodInfo *)0x0);
    pAVar5 = TypeInfo__System__Action<int>;
    if (pDVar4 == (Delegate *)0x0) {
      (pFVar2->fields).OnFlagDebriefing = (Action_1_Int32_ *)0x0;
    }
    else {
      pAVar3 = (Action_1_Int32_ *)FUN_?(pDVar4,TypeInfo__System__Action<int>);
      if (pAVar3 == (Action_1_Int32_ *)0x0) {
        FUN_?(pDVar4,pAVar5);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      (pFVar2->fields).OnFlagDebriefing = pAVar3;
      pAVar5 = TypeInfo__System__Action<int>;
      lVar7 = FUN_?(pDVar4,TypeInfo__System__Action<int>);
      if (lVar7 == 0) {
        FUN_?(pDVar4,pAVar5);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)&(pFVar2->fields).OnFlagDebriefing >> 0xc);
      lVar7 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
      do {
        uVar9 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar10 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar11 = uVar9 == *puVar10;
        if (bVar11) {
          *puVar10 = uVar9 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar11);
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((pMVar1 != (MVGameControllerBase *)0x0) &&
       (pFVar2 = (pMVar1->fields).flagDebriefingControl, pFVar2 != (FlagDebriefingControl *)0x0)) {
      pAVar12 = (pFVar2->fields).OnFlagDebriefingEnd;
      this_00 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_00,(Object *)this,MethodInfo__TimeAttackFlag__OnEndFlagDebriefing__,
                 (MethodInfo *)0x0);
      pAVar12 = (Action *)
                mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pAVar12,(Delegate *)this_00,(MethodInfo *)0x0);
      if (pAVar12 == (Action *)0x0) {
        (pFVar2->fields).OnFlagDebriefingEnd = (Action *)0x0;
      }
      else {
        pAVar13 = (Action *)0x0;
        if (pAVar12->klass == TypeInfo__System__Action) {
          pAVar13 = pAVar12;
        }
        if (pAVar13 == (Action *)0x0) {
          FUN_?(pAVar12);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        (pFVar2->fields).OnFlagDebriefingEnd = pAVar13;
        pAVar13 = (Action *)0x0;
        if (pAVar12->klass == TypeInfo__System__Action) {
          pAVar13 = pAVar12;
        }
        if (pAVar13 == (Action *)0x0) {
          FUN_?(pAVar12);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar8 = (uint)((ulonglong)&(pFVar2->fields).OnFlagDebriefingEnd >> 0xc);
        lVar7 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
        do {
          uVar9 = *(ulonglong *)(lVar7 + 0xADDR);
          puVar10 = (ulonglong *)(lVar7 + 0xADDR);
          LOCK();
          bVar11 = uVar9 == *puVar10;
          if (bVar11) {
            *puVar10 = uVar9 | 1L << (uVar8 & 0x3f);
          }
          UNLOCK();
        } while (!bVar11);
      }
      return;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void LateInitialize() */

void Assembly-CSharp.dll::TimeAttackFlag::TimeAttackFlag_LateInitialize
               (TimeAttackFlag *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TimeAttackFlag_InitializeCallbacks(this,(MethodInfo *)0x0);
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
    pAVar4 = (pMVar3->fields).OnLocalPlayerReady;
    this_00 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
    if (this != (TimeAttackFlag *)0x0) {
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_00,(Object *)this,(this->klass->vtable).Initialize.method,(MethodInfo *)0x0);
      pAVar4 = (Action *)
               mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pAVar4,(Delegate *)this_00,(MethodInfo *)0x0);
      if (pAVar4 == (Action *)0x0) {
        (pMVar3->fields).OnLocalPlayerReady = (Action *)0x0;
      }
      else {
        pAVar5 = (Action *)0x0;
        if (pAVar4->klass == TypeInfo__System__Action) {
          pAVar5 = pAVar4;
        }
        if (pAVar5 == (Action *)0x0) {
          FUN_?(pAVar4,TypeInfo__System__Action);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        (pMVar3->fields).OnLocalPlayerReady = pAVar5;
        pAVar5 = (Action *)0x0;
        if (pAVar4->klass == TypeInfo__System__Action) {
          pAVar5 = pAVar4;
        }
        if (pAVar5 == (Action *)0x0) {
          FUN_?();
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar7 = (uint)((ulonglong)&(pMVar3->fields).OnLocalPlayerReady >> 0xc);
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
      return;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::TimeAttackFlag::TimeAttackFlag_OnDataUpdate
               (TimeAttackFlag *this,MethodInfo *method)

{
  auStack_1._0_8_ = &UNK_?;
  MVGamePointRewardLogicObject::MVGamePointRewardLogicObject_OnDataUpdate
            ((MVGamePointRewardLogicObject *)this,(MethodInfo *)0x0);
  pUVar2 = (this->fields).useInteractor;
  if ((pUVar2 == (UseInteractor *)0x0) ||
     (this_00 = (pUVar2->fields).useInteractorVisuals, this_00 == (UseInteractorVisualization *)0x0)
     ) {
    auStack_1._0_8_ = &UNK_?;
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar4 = (pUVar2->fields).woOwnerID;
  pOVar5 = (Object__Class *)(this->fields)._._._._.data;
  if (cRam_? == '\0') {
    auStack_1._0_8_ = &UNK_?;
    FUN_?(&TypeInfo__System__Func<UseRequirement,_bool>);
    LOCK();
    UNLOCK();
    auStack_1._0_8_ = &UNK_?;
    FUN_?(&MethodInfo__UseInteractorVisualization____c___UpdateData_b__36_0_UseRequirement_)
    ;
    LOCK();
    UNLOCK();
    auStack_1._0_8_ = &UNK_?;
    FUN_?(&
                  MethodInfo__UseInteractorVisualization____c__DisplayClass36_0___UpdateData_b__1_UseRequirement_
                 );
    LOCK();
    UNLOCK();
    auStack_1._0_8_ = &UNK_?;
    FUN_?(&TypeInfo__UseInteractorVisualization____c__DisplayClass36_0);
    LOCK();
    UNLOCK();
    auStack_1._0_8_ = &UNK_?;
    FUN_?(&TypeInfo__UseInteractorVisualization____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  auStack_1._0_8_ = &UNK_?;
  pOVar6 = (Object *)FUN_?(TypeInfo__UseInteractorVisualization____c__DisplayClass36_0);
  if (pOVar6 == (Object *)0x0) {
code_?:
    auStack_1._0_8_ = &UNK_?;
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  bVar7 = iRam_? != 0;
  pOVar6[1].klass = pOVar5;
  if (bVar7) {
    uVar8 = (uint)((ulonglong)(pOVar6 + 1) >> 0xc);
    lVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
    do {
      uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
      puVar11 = (ulonglong *)(lVar9 + 0xADDR);
      LOCK();
      bVar7 = uVar10 == *puVar11;
      if (bVar7) {
        *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
      }
      UNLOCK();
    } while (!bVar7);
  }
  *(int32_t *)&pOVar6[1].monitor = iVar4;
  if (*(int *)&(TypeInfo__UseInteractorVisualization____c->_1).field_0x1c == 0) {
    auStack_1._0_8_ = &UNK_?;
    FUN_?();
  }
  this_01 = TypeInfo__UseInteractorVisualization____c->static_fields->__9__36_0;
  if (this_01 == (Func_2_UseRequirement_Boolean_ *)0x0) {
    if (*(int *)&(TypeInfo__UseInteractorVisualization____c->_1).field_0x1c == 0) {
      auStack_1._0_8_ = &UNK_?;
      FUN_?();
    }
    object = TypeInfo__UseInteractorVisualization____c->static_fields->__9;
    auStack_1._0_8_ = &UNK_?;
    this_01 = (Func_2_UseRequirement_Boolean_ *)
              FUN_?(TypeInfo__System__Func<UseRequirement,_bool>);
    auStack_1._0_8_ = &UNK_?;
    mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
              ((Predicate_1_Object_ *)this_01,(Object *)object,
               MethodInfo__UseInteractorVisualization____c___UpdateData_b__36_0_UseRequirement_,
               (MethodInfo *)0x0);
    TypeInfo__UseInteractorVisualization____c->static_fields->__9__36_0 = this_01;
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)
                      &TypeInfo__UseInteractorVisualization____c->static_fields->__9__36_0 >> 0xc);
      lVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
      do {
        uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
        puVar11 = (ulonglong *)(lVar9 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
  }
  auStack_1._0_8_ = &UNK_?;
  this_02 = (Predicate_1_Object_ *)FUN_?(TypeInfo__System__Func<UseRequirement,_bool>);
  auStack_1._0_8_ = &UNK_?;
  mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
            (this_02,pOVar6,
             MethodInfo__UseInteractorVisualization____c__DisplayClass36_0___UpdateData_b__1_UseRequirement_
             ,(MethodInfo *)0x0);
  if (this_00 == (UseInteractorVisualization *)0x0) goto code_?;
  auStack_1._0_8_ = &UNK_?;
  UseInteractorVisualization::UseInteractorVisualization_ChangeUseRequirements
            (this_00,this_01,(Func_2_UseRequirement_Boolean_ *)this_02,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__Dispose__
                  ,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UseRequirement>__GetEnumerator__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this_00->fields).active = 0;
  (this_00->fields).dist = 1.3;
  pLVar12 = (this_00->fields).useRequirements;
  if (pLVar12 == (List_1_UseRequirement_ *)0x0) {
code_?:
    FUN_?();
code_?:
    FUN_?();
    FUN_?();
code_?:
    FUN_?();
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (iRam_? != 0) {
    uVar8 = (uint)((ulonglong)&pLStack_13 >> 0xc);
    uVar10 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
    do {
      uVar14 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
      puVar11 = (ulonglong *)(uVar10 * 8 + 0xADDR);
      LOCK();
      bVar7 = uVar14 == *puVar11;
      if (bVar7) {
        *puVar11 = uVar14 | 1L << (uVar8 & 0x3f);
      }
      UNLOCK();
    } while (!bVar7);
  }
  puStack_15 = (undefined1 *)((ulonglong)(uint)(pLVar12->fields)._version << 0x20);
  uStack_16 = 0;
  auStack_1._8_8_ = puStack_15;
  pOStack_17 = (Object *)0x0;
  uStack_18 = 0;
  puStack_19 = auStack_1;
  pLStack_13 = pLVar12;
  auStack_1._0_8_ = pLVar12;
  while (bVar20 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                  List_1_T_Enumerator_System_Object__MoveNext
                            ((List_1_T_Enumerator_System_Object_ *)auStack_1,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__MoveNext__
                            ), bVar20 != 0) {
    if (pOStack_17 == (Object *)0x0) goto code_?;
    cVar21 = (*(code *)pOStack_17->klass[1]._0.interopData)
                       (pOStack_17,pOStack_17->klass[1]._0.klass);
    if (cVar21 != '\0') {
      piVar22 = &(this_00->fields).active;
      *piVar22 = *piVar22 + 1;
    }
  }
  if ((this_00->fields).active == 1) {
    (this_00->fields).dist = 0.01;
  }
  bVar7 = (this_00->fields).active == 0;
  if (!bVar7) {
    (this_00->fields).spacing = (float)(int)(0x168 / (longlong)(this_00->fields).active);
    bVar7 = (this_00->fields).active == 0;
  }
  (this_00->fields)._HasUseRequirements_k__BackingField = !bVar7;
  fVar23 = 0.0;
  pLVar12 = (this_00->fields).useRequirements;
  if (pLVar12 == (List_1_UseRequirement_ *)0x0) goto code_?;
  if (iRam_? != 0) {
    uVar8 = (uint)((ulonglong)&pLStack_13 >> 0xc);
    uVar10 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
    do {
      uVar14 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
      puVar11 = (ulonglong *)(uVar10 * 8 + 0xADDR);
      LOCK();
      bVar7 = uVar14 == *puVar11;
      if (bVar7) {
        *puVar11 = uVar14 | 1L << (uVar8 & 0x3f);
      }
      UNLOCK();
    } while (!bVar7);
  }
  puStack_15 = (undefined1 *)((ulonglong)(uint)(pLVar12->fields)._version << 0x20);
  uStack_16 = 0;
  auStack_1._8_8_ = puStack_15;
  pOStack_17 = (Object *)0x0;
  pLStack_13 = (List_1_UseRequirement_ *)0x0;
  puStack_15 = auStack_1;
  auStack_1._0_8_ = pLVar12;
  while (bVar20 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                  List_1_T_Enumerator_System_Object__MoveNext
                            ((List_1_T_Enumerator_System_Object_ *)auStack_1,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__MoveNext__
                            ), pOVar6 = pOStack_17, bVar20 != 0) {
    if (pOStack_17 == (Object *)0x0) goto code_?;
    cVar21 = (*(code *)pOStack_17->klass[1]._0.interopData)
                       (pOStack_17,pOStack_17->klass[1]._0.klass);
    if (cVar21 != '\0') {
      pOVar5 = pOVar6->klass;
      uStack_18._0_4_ = (this_00->fields).pivot.x;
      uStack_18._4_4_ = (this_00->fields).pivot.y;
      puStack_19 = (undefined1 *)CONCAT44(puStack_19._4_4_,(this_00->fields).pivot.z);
      (*(code *)pOVar5[1]._0.fields)
                (pOVar6,&uStack_18,fVar23,(this_00->fields).dist,pOVar5[1]._0.events);
      fVar23 = fVar23 + (this_00->fields).spacing;
    }
  }
  if ((this_00->fields)._HasUseRequirements_k__BackingField != 0) {
    if ((this_00->fields).cullingSubscriberBase == (CullingSubscriberBase *)0x0) {
      UseInteractorVisualization::UseInteractorVisualization_SetupCulling(this_00,(MethodInfo *)0x0)
      ;
      goto code_?;
    }
    if ((this_00->fields)._HasUseRequirements_k__BackingField != 0) goto code_?;
  }
  if ((this_00->fields).cullingSubscriberBase != (CullingSubscriberBase *)0x0) {
    UseInteractorVisualization::UseInteractorVisualization_RemoveCulling(this_00,(MethodInfo *)0x0);
  }
code_?:
  bVar20 = (this_00->fields)._HasUseRequirements_k__BackingField;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar24 = (this_00->fields)._._._._.m_CachedPtr;
  if (pvVar24 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)this_00,(MethodInfo *)0x0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar25 = func_?(&UNK_?);
    FUN_?(uVar25,0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcRam_? = pcVar3;
  (*pcRam_?)(pvVar24,bVar20);
  return;
}


/* Void OnEndFlagDebriefing() */

void Assembly-CSharp.dll::TimeAttackFlag::TimeAttackFlag_OnEndFlagDebriefing
               (TimeAttackFlag *this,MethodInfo *method)

{
  (this->fields).isTimeAttackDebriefingOn = 0;
  return;
}


/* Void OnStartFlagDebriefing(Int32) */

void Assembly-CSharp.dll::TimeAttackFlag::TimeAttackFlag_OnStartFlagDebriefing
               (TimeAttackFlag *this,int32_t captureTime,MethodInfo *method)

{
  (this->fields).isTimeAttackDebriefingOn = 1;
  return;
}


/* Void SetupUseInteractor() */

void Assembly-CSharp.dll::TimeAttackFlag::TimeAttackFlag_SetupUseInteractor
               (TimeAttackFlag *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Func<int,_bool>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GameCoinLogic);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TeamRequirement);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__TimeAttackFlag__DoReachTimeAttackFlag_int_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UseInteractor__TriggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UseInteractor__TriggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UseInteractor);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).timeAttackFlagObject;
  if (pTVar1 == (TimeAttackFlagObject *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pTVar3 = (this->fields).triggerBoxEvents;
  pGVar4 = (pTVar1->fields).useInteractionRotator;
  if (pTVar3 == (TriggerBoxEvents *)0x0) goto code_?;
  triggerCollider = TriggerBoxEvents::TriggerBoxEvents_get_Collider(pTVar3,(MethodInfo *)0x0);
  useFunction = (Func_2_Int32_Boolean_ *)FUN_?(TypeInfo__System__Func<int,_bool>);
  FUN_?(useFunction,this,MethodInfo__TimeAttackFlag__DoReachTimeAttackFlag_int_);
  pUVar5 = (UseInteractor *)FUN_?(TypeInfo__UseInteractor);
  UseInteractor::UseInteractor__ctor
            (pUVar5,(MVWorldObjectClient *)this,pGVar4,0,triggerCollider,useFunction,
             (Func_3_Int32_MVInteractableBase_Boolean_ *)0x0,_UNK_?,0,1,(MethodInfo *)0x0);
  bVar6 = iRam_? != 0;
  (this->fields).useInteractor = pUVar5;
  if (bVar6) {
    uVar7 = (uint)((ulonglong)&(this->fields).useInteractor >> 0xc);
    uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
    do {
      uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
      puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar9 == *puVar10;
      if (bVar6) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  pTVar3 = (this->fields).triggerBoxEvents;
  pUVar5 = (this->fields).useInteractor;
  pUVar11 = (UnityAction_2_System_Object_System_Object_ *)
            FUN_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            (pUVar11,(Object *)pUVar5,
             MethodInfo__UseInteractor__TriggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
             ,(MethodInfo *)0x0);
  if (pTVar3 == (TriggerBoxEvents *)0x0) goto code_?;
  TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
            (pTVar3,(EventHandler_1_TriggerEventArgs_ *)pUVar11,(MethodInfo *)0x0);
  pTVar3 = (this->fields).triggerBoxEvents;
  pUVar5 = (this->fields).useInteractor;
  pUVar11 = (UnityAction_2_System_Object_System_Object_ *)
            FUN_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            (pUVar11,(Object *)pUVar5,
             MethodInfo__UseInteractor__TriggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
             ,(MethodInfo *)0x0);
  if (pTVar3 == (TriggerBoxEvents *)0x0) goto code_?;
  TriggerBoxEvents::TriggerBoxEvents_add_TriggerExit
            (pTVar3,(EventHandler_1_TriggerEventArgs_ *)pUVar11,(MethodInfo *)0x0);
  pTVar1 = (this->fields).timeAttackFlagObject;
  if (pTVar1 == (TimeAttackFlagObject *)0x0) goto code_?;
  pGVar4 = (pTVar1->fields).useInteractionRotator;
  useRequirement = (UseRequirement *)FUN_?(TypeInfo__GameCoinLogic);
  bVar6 = iRam_? != 0;
  useRequirement[1].monitor = (MonitorData *)0x0;
  *(undefined4 *)&useRequirement[1].fields = 0;
  *(undefined4 *)((longlong)&useRequirement[1].klass + 4) = 1;
  *(undefined1 *)&useRequirement[3].klass = 0;
  *(GameObject **)&useRequirement[2].fields = pGVar4;
  if (bVar6) {
    uVar7 = (uint)((ulonglong)&useRequirement[2].fields >> 0xc);
    uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
    do {
      uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
      puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar9 == *puVar10;
      if (bVar6) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  pUVar5 = (this->fields).useInteractor;
  if (pUVar5 == (UseInteractor *)0x0) goto code_?;
  UseInteractor::UseInteractor_AddRequirement(pUVar5,useRequirement,(MethodInfo *)0x0);
  pTVar1 = (this->fields).timeAttackFlagObject;
  if (pTVar1 == (TimeAttackFlagObject *)0x0) goto code_?;
  pTVar12 = (pTVar1->fields).tintObject;
  pOVar13 = (Object *)FUN_?(TypeInfo__TeamRequirement);
  bVar6 = iRam_? != 0;
  *(undefined4 *)&pOVar13[2].klass = 5;
  pOVar13[1].monitor = (MonitorData *)pTVar12;
  if (bVar6) {
    uVar7 = (uint)((ulonglong)&pOVar13[1].monitor >> 0xc);
    uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
    do {
      uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
      puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar9 == *puVar10;
      if (bVar6) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  *(undefined1 *)((longlong)&pOVar13[2].klass + 4) = 0;
  pUVar5 = (this->fields).useInteractor;
  if (pUVar5 == (UseInteractor *)0x0) goto code_?;
  this_00 = (pUVar5->fields).useInteractorVisuals;
  if (this_00 == (UseInteractorVisualization *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UseRequirement>__Add_UseRequirement_
                  ,pOVar13,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar14 = MethodInfo__System__Collections__Generic__List<UseRequirement>__Add_UseRequirement_;
  this_01 = (this_00->fields).useRequirements;
  if (this_01 == (List_1_UseRequirement_ *)0x0) goto code_?;
  piVar15 = &(this_01->fields)._version;
  *piVar15 = *piVar15 + 1;
  pUVar16 = (this_01->fields)._items;
  if (pUVar16 == (UseRequirement__Array *)0x0) goto code_?;
  uVar7 = (this_01->fields)._size;
  if (uVar7 < (uint)pUVar16->max_length) {
    (this_01->fields)._size = uVar7 + 1;
    FUN_?(pUVar16,(longlong)(int)uVar7,pOVar13);
  }
  else {
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
    List_1_System_Object__AddWithResize
              ((List_1_System_Object_ *)this_01,pOVar13,pMVar14->klass->rgctx_data[0xe].method);
  }
  if ((this_00->fields).hasInputBlockingRequirement == 0) {
    if (pOVar13 == (Object *)0x0) goto code_?;
    cVar17 = (*(code *)pOVar13->klass[1].interfaceOffsets)(pOVar13,pOVar13->klass[1].static_fields);
  }
  else {
    cVar17 = '\x01';
  }
  (this_00->fields).hasInputBlockingRequirement = cVar17 != '\0';
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__Dispose__
                  ,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UseRequirement>__GetEnumerator__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this_00->fields).active = 0;
  (this_00->fields).dist = 1.3;
  if ((this_00->fields).useRequirements == (List_1_UseRequirement_ *)0x0) {
code_?:
    FUN_?();
code_?:
    FUN_?();
    FUN_?();
code_?:
    FUN_?();
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (iRam_? != 0) {
    uVar7 = (uint)((ulonglong)&stack0xffffffffffffffb8 >> 0xc);
    uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
    do {
      uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
      puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar9 == *puVar10;
      if (bVar6) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  pOVar13 = (Object *)0x0;
  uStack_18 = 0;
  puStack_19 = &stack0xffffffffffffffd0;
  while (bVar20 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                  List_1_T_Enumerator_System_Object__MoveNext
                            ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffffffffffd0,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__MoveNext__
                            ), bVar20 != 0) {
    if (pOVar13 == (Object *)0x0) goto code_?;
    cVar17 = (*(code *)pOVar13->klass[1]._0.interopData)(pOVar13,pOVar13->klass[1]._0.klass);
    if (cVar17 != '\0') {
      piVar15 = &(this_00->fields).active;
      *piVar15 = *piVar15 + 1;
    }
  }
  if ((this_00->fields).active == 1) {
    (this_00->fields).dist = 0.01;
  }
  bVar6 = (this_00->fields).active == 0;
  if (!bVar6) {
    (this_00->fields).spacing = (float)(int)(0x168 / (longlong)(this_00->fields).active);
    bVar6 = (this_00->fields).active == 0;
  }
  (this_00->fields)._HasUseRequirements_k__BackingField = !bVar6;
  fVar21 = 0.0;
  if ((this_00->fields).useRequirements == (List_1_UseRequirement_ *)0x0) goto code_?;
  if (iRam_? != 0) {
    uVar7 = (uint)((ulonglong)&stack0xffffffffffffffb8 >> 0xc);
    uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
    do {
      uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
      puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar9 == *puVar10;
      if (bVar6) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  pOVar13 = (Object *)0x0;
  while (pOVar22 = pOVar13,
        bVar20 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                 List_1_T_Enumerator_System_Object__MoveNext
                           ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffffffffffd0,
                            MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__MoveNext__
                           ), bVar20 != 0) {
    if (pOVar22 == (Object *)0x0) goto code_?;
    pOVar13 = pOVar22;
    cVar17 = (*(code *)pOVar22->klass[1]._0.interopData)(pOVar22,pOVar22->klass[1]._0.klass);
    if (cVar17 != '\0') {
      uStack_18._0_4_ = (this_00->fields).pivot.x;
      uStack_18._4_4_ = (this_00->fields).pivot.y;
      puStack_19 = (undefined1 *)CONCAT44(puStack_19._4_4_,(this_00->fields).pivot.z);
      (*(code *)pOVar22->klass[1]._0.fields)
                (pOVar22,&uStack_18,fVar21,(this_00->fields).dist,pOVar22->klass[1]._0.events);
      fVar21 = fVar21 + (this_00->fields).spacing;
    }
  }
  if ((this_00->fields)._HasUseRequirements_k__BackingField != 0) {
    if ((this_00->fields).cullingSubscriberBase == (CullingSubscriberBase *)0x0) {
      UseInteractorVisualization::UseInteractorVisualization_SetupCulling(this_00,(MethodInfo *)0x0)
      ;
      goto code_?;
    }
    if ((this_00->fields)._HasUseRequirements_k__BackingField != 0) goto code_?;
  }
  if ((this_00->fields).cullingSubscriberBase != (CullingSubscriberBase *)0x0) {
    UseInteractorVisualization::UseInteractorVisualization_RemoveCulling(this_00,(MethodInfo *)0x0);
  }
code_?:
  bVar20 = (this_00->fields)._HasUseRequirements_k__BackingField;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar23 = (this_00->fields)._._._._.m_CachedPtr;
  if (pvVar23 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)this_00,(MethodInfo *)0x0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar24 = func_?(&UNK_?);
    FUN_?(uVar24,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(pvVar23,bVar20);
  return;
}


/* TimeAttackFlag(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::TimeAttackFlag::TimeAttackFlag__ctor
               (TimeAttackFlag *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TimeAttackFlagObject);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__TimeAttackFlag__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PrefabPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar1 != (PrefabPool *)0x0) {
    MVGamePointRewardLogicObject::MVGamePointRewardLogicObject__ctor
              ((MVGamePointRewardLogicObject *)this,data,(pPVar1->fields).timeAttackFlagPrefab,
               worldObjects,(MethodInfo *)0x0);
    pTVar2 = (TimeAttackFlagObject *)(this->fields)._._._.component;
    if (pTVar2 == (TimeAttackFlagObject *)0x0) {
      (this->fields).timeAttackFlagObject = (TimeAttackFlagObject *)0x0;
    }
    else {
      bVar3 = (TypeInfo__TimeAttackFlagObject->_1).naturalAligment;
      if (((((ObjectPrefab__Class *)pTVar2->klass)->_1).naturalAligment < bVar3) ||
         ((((ObjectPrefab__Class *)pTVar2->klass)->_1).typeHierarchy[(ulonglong)bVar3 - 1] !=
          (Il2CppClass *)TypeInfo__TimeAttackFlagObject)) {
        FUN_?(pTVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      (this->fields).timeAttackFlagObject = pTVar2;
      bVar3 = (TypeInfo__TimeAttackFlagObject->_1).naturalAligment;
      if (((((ObjectPrefab__Class *)pTVar2->klass)->_1).naturalAligment < bVar3) ||
         ((((ObjectPrefab__Class *)pTVar2->klass)->_1).typeHierarchy[(ulonglong)bVar3 - 1] !=
          (Il2CppClass *)TypeInfo__TimeAttackFlagObject)) {
        FUN_?(pTVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)&(this->fields).timeAttackFlagObject >> 0xc);
      lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
      do {
        uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
        puVar8 = (ulonglong *)(lVar6 + 0xADDR);
        LOCK();
        bVar9 = uVar7 == *puVar8;
        if (bVar9) {
          *puVar8 = uVar7 | 1L << (ulonglong)(uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar9);
    }
    iVar10 = iRam_?;
    pTVar2 = (this->fields).timeAttackFlagObject;
    if (pTVar2 != (TimeAttackFlagObject *)0x0) {
      (this->fields).triggerBoxEvents = (pTVar2->fields).triggerBoxEvents;
      if (iVar10 != 0) {
        uVar5 = (uint)((ulonglong)&(this->fields).triggerBoxEvents >> 0xc);
        lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
        do {
          uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
          puVar8 = (ulonglong *)(lVar6 + 0xADDR);
          LOCK();
          bVar9 = uVar7 == *puVar8;
          if (bVar9) {
            *puVar8 = uVar7 | 1L << (ulonglong)(uVar5 & 0x3f);
          }
          UNLOCK();
        } while (!bVar9);
      }
      this_00 = (this->fields).triggerBoxEvents;
      this_01 = (UnityAction_2_System_Object_System_Object_ *)
                FUN_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (this_01,(Object *)this,
                 MethodInfo__TimeAttackFlag__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                 ,(MethodInfo *)0x0);
      if (this_00 != (TriggerBoxEvents *)0x0) {
        TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
                  (this_00,(EventHandler_1_TriggerEventArgs_ *)this_01,(MethodInfo *)0x0);
        piVar11 = &(this->fields)._._._.interactionFlags;
        *piVar11 = *piVar11 | 0x22000000;
        return;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void triggerBoxEvents_TriggerEnter(Object, TriggerEventArgs) */

void Assembly-CSharp.dll::TimeAttackFlag::TimeAttackFlag_triggerBoxEvents_TriggerEnter
               (TimeAttackFlag *this,Object *sender,TriggerEventArgs *e,MethodInfo *method)

{
  pWVar1 = (this->fields).worldObjectEnableController;
  if (pWVar1 != (WorldObjectEnableController *)0x0) {
    if ((pWVar1->fields).enableState == 2) {
      pUVar2 = (this->fields).useInteractor;
      if ((pUVar2 == (UseInteractor *)0x0) ||
         (this_00 = (pUVar2->fields).useInteractorVisuals,
         this_00 == (UseInteractorVisualization *)0x0)) goto code_?;
      UVar3 = UseInteractorVisualization::UseInteractorVisualization_EvaluateUsability
                        (this_00,(MethodInfo *)0x0);
      if ((UVar3 & (UseGUIResult__Enum_CannotAfford|UseGUIResult__Enum_CanAfford)) == 0) {
        if (e == (TriggerEventArgs *)0x0) goto code_?;
        TimeAttackFlag_DoReachTimeAttackFlag(this,(e->fields).instigatorWOID,(MethodInfo *)0x0);
      }
    }
    return;
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

