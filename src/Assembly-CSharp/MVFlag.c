
/* Void Destroy() */

void Assembly-CSharp.dll::MVFlag::MVFlag_Destroy(MVFlag *this,MethodInfo *method)

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
                  MethodInfo__MVFlag__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
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
                  FlagReachedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<FlagReachedClient>__
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
             MethodInfo__MVFlag__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_,
             (MethodInfo *)0x0);
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
                           FlagReachedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<FlagReachedClient>__
                          );
      if (pOVar14 == (Object *)0x0) {
        uVar15 = func_?(&TypeInfo__System__Exception);
        this_02 = (Exception *)func_?(uVar15);
        message = (String *)func_?(&StringLiteral_Could_not_find_FlagReached_singl);
        mscorlib.dll::System::Exception::Exception__ctor_1(this_02,message,(MethodInfo *)0x0);
        uVar15 = func_?(&MethodInfo__MVFlag__Destroy__);
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


/* Boolean DoCaptureFlag(Int32) */

bool Assembly-CSharp.dll::MVFlag::MVFlag_DoCaptureFlag
               (MVFlag *this,int32_t instigator,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase,CONCAT44(in_register_00000014,instigator));
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar1 != (MVGameControllerBase *)0x0) &&
     (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) {
    pMVar3 = (pMVar2->fields).operationRequests;
    iVar4 = (this->fields)._._._._.id;
    if (pMVar3 != (MVNetworkGame_OperationRequests *)0x0) {
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
      aiStackX_20[0] = iVar4;
      value = (Object *)FUN_?(uRam_?,aiStackX_20);
      if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
        method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                    ->klass->rgctx_data[0x22].method;
        uVar5 = CONCAT71((int7)((ulonglong)method_00 >> 8),0xc1);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
        Dictionary_2_System_Byte_System_Object__TryInsert
                  (this_00,0xc1,value,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2),method_00);
        pPVar6 = (pMVar3->fields).peer;
        if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
        }
        if (pPVar6 != (PhotonPeer *)0x0) {
          (*(pPVar6->klass->vtable).SendOperation.methodPtr)
                    (pPVar6,CONCAT71((int7)((ulonglong)uVar5 >> 8),0x18),this_00,
                     TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                     (pPVar6->klass->vtable).SendOperation.method);
          return 1;
        }
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  bVar8 = (*pcVar7)();
  return bVar8;
}


/* Vector3 GetClosestGridPoint(Single, Vector3) */

Vector3 * Assembly-CSharp.dll::MVFlag::MVFlag_GetClosestGridPoint
                    (Vector3 *__return_storage_ptr__,MVFlag *this,float gridSize,Vector3 *position,
                    MethodInfo *method)

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

void Assembly-CSharp.dll::MVFlag::MVFlag_Initialize(MVFlag *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    auStack_1._8_8_ = &UNK_?;
    FUN_?(&System__Object__MethodInfo__System__Array__Empty<System::Object>______);
    LOCK();
    UNLOCK();
    auStack_1._8_8_ = &UNK_?;
    FUN_?(&
                  WorldObjectEnableController_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<WorldObjectEnableController>__
                 );
    LOCK();
    UNLOCK();
    auStack_1._8_8_ = &UNK_?;
    FUN_?(&
                  FlagReachedClient_MethodInfo__WinningConditionManager__CreateWinnerCondition<FlagReachedClient>_System__Object____
                 );
    LOCK();
    UNLOCK();
    auStack_1._8_8_ = &UNK_?;
    FUN_?(&
                  FlagReachedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<FlagReachedClient>__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  auStack_1._8_8_ = &UNK_?;
  MVFlag_SetupUseInteractor(this,(MethodInfo *)0x0);
  auStack_1._8_8_ = &UNK_?;
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    auStack_1._8_8_ = &UNK_?;
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar2 == (MVGameControllerBase *)0x0) ||
      (pMVar3 = (pMVar2->fields).game, pMVar3 == (MVNetworkGame *)0x0)) ||
     (pWVar4 = (pMVar3->fields)._WinningConditionManager_k__BackingField,
     pWVar4 == (WinningConditionManager *)0x0)) goto code_?;
  auStack_1._8_8_ = &UNK_?;
  pOVar5 = MVWorldObject.dll::WinningConditionManager::
            WinningConditionManager_GetSingletonWinnerConditionByType
                      (pWVar4,
                       FlagReachedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<FlagReachedClient>__
                      );
  if (pOVar5 == (Object *)0x0) {
    if (cRam_? == '\0') {
      auStack_1._8_8_ = &UNK_?;
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((pMVar2 == (MVGameControllerBase *)0x0) ||
       (pMVar3 = (pMVar2->fields).game, pMVar3 == (MVNetworkGame *)0x0)) goto code_?;
    pWVar4 = (pMVar3->fields)._WinningConditionManager_k__BackingField;
    auStack_1._8_8_ = &UNK_?;
    args = (Object__Array *)
           System.Core.dll::System::Linq::Enumerable::Enumerable_Empty_2
                     (System__Object__MethodInfo__System__Array__Empty<System::Object>______);
    if (pWVar4 == (WinningConditionManager *)0x0) goto code_?;
    auStack_1._8_8_ = &UNK_?;
    MVWorldObject.dll::WinningConditionManager::WinningConditionManager_CreateWinnerCondition
              (pWVar4,args,
               FlagReachedClient_MethodInfo__WinningConditionManager__CreateWinnerCondition<FlagReachedClient>_System__Object____
              );
  }
  pUVar6 = (this->fields).useInteractor;
  (this->fields).initializedInWorld = 1;
  if ((pUVar6 != (UseInteractor *)0x0) &&
     (this_00 = (pUVar6->fields).useInteractorVisuals, this_00 != (UseInteractorVisualization *)0x0)
     ) {
    auStack_1._8_8_ = &UNK_?;
    UseInteractorVisualization::UseInteractorVisualization_UpdateData
              (this_00,(this->fields)._._._._.data,(pUVar6->fields).woOwnerID,(MethodInfo *)0x0);
    pMVar7 = 
    WorldObjectEnableController_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<WorldObjectEnableController>__
    ;
    pGVar8 = (this->fields)._._._.gameObject;
    if (pGVar8 != (GameObject *)0x0) {
      if ((
          WorldObjectEnableController_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<WorldObjectEnableController>__
          ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        auStack_1._8_8_ = &UNK_?;
        FUN_?(
                     WorldObjectEnableController_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<WorldObjectEnableController>__
                     );
      }
      auStack_1._8_8_ = &UNK_?;
      pWVar9 = (WorldObjectEnableController *)
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                GameObject_GetComponentInChildren_3
                          (pGVar8,0,((pMVar7->field7_0x38).rgctx_data)->method);
      bVar10 = iRam_? != 0;
      (this->fields).worldObjectEnableController = pWVar9;
      if (bVar10) {
        uVar11 = (uint)((ulonglong)&(this->fields).worldObjectEnableController >> 0xc);
        uVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
        do {
          uVar13 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
          puVar14 = (ulonglong *)(uVar12 * 8 + 0xADDR);
          LOCK();
          bVar10 = uVar13 == *puVar14;
          if (bVar10) {
            *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
          }
          UNLOCK();
        } while (!bVar10);
      }
      radius = TypeRef__System__Activator__T._0_4_;
      pFVar15 = (this->fields).flagObject;
      if (pFVar15 != (FlagObject *)0x0) {
        pGVar8 = (pFVar15->fields).visualObject;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__CullingSubscriberBase);
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__MVLogicObject__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>)
          ;
          LOCK();
          UNLOCK();
          FUN_?(&
                        TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        cVar16 = (*(this->klass->vtable).get_HasVisualsInPlaymode.methodPtr)
                           (this,(this->klass->vtable).get_HasVisualsInPlaymode.method);
        if (cVar16 == '\0') {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField ==
              (IEditModeUI *)0x0) {
            return;
          }
        }
        bVar10 = iRam_? != 0;
        (this->fields)._._.lodGameObject = pGVar8;
        if (bVar10) {
          uVar11 = (uint)((ulonglong)&(this->fields)._._.lodGameObject >> 0xc);
          uVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
          do {
            uVar13 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
            puVar14 = (ulonglong *)(uVar12 * 8 + 0xADDR);
            LOCK();
            bVar10 = uVar13 == *puVar14;
            if (bVar10) {
              *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
            }
            UNLOCK();
          } while (!bVar10);
        }
        pUVar17 = (this->fields)._._._.PositionChanged;
        this_01 = (UnityAction_2_System_Object_System_Object_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                               );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  (this_01,(Object *)this,
                   MethodInfo__MVLogicObject__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                   ,(MethodInfo *)0x0);
        pDVar18 = mscorlib.dll::System::Delegate::Delegate_Combine
                            ((Delegate *)pUVar17,(Delegate *)this_01,(MethodInfo *)0x0);
        pUVar19 = 
        TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
        if (pDVar18 == (Delegate *)0x0) {
          (this->fields)._._._.PositionChanged =
               (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
        }
        else {
          pUVar17 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)
                    FUN_?(pDVar18,
                                  TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                                 );
          if (pUVar17 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
            FUN_?(pDVar18,pUVar19);
            pcVar20 = (code *)swi(3);
            (*pcVar20)();
            return;
          }
          (this->fields)._._._.PositionChanged = pUVar17;
          pUVar19 = 
          TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
          lVar21 = FUN_?(pDVar18,
                                 TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                                );
          if (lVar21 == 0) {
            FUN_?(pDVar18,pUVar19);
            pcVar20 = (code *)swi(3);
            (*pcVar20)();
            return;
          }
        }
        if (iRam_? != 0) {
          uVar11 = (uint)((ulonglong)&(this->fields)._._._.PositionChanged >> 0xc);
          uVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
          do {
            uVar13 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
            puVar14 = (ulonglong *)(uVar12 * 8 + 0xADDR);
            LOCK();
            bVar10 = uVar13 == *puVar14;
            if (bVar10) {
              *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
            }
            UNLOCK();
          } while (!bVar10);
        }
        puVar22 = (undefined8 *)
                  (*(this->klass->vtable).get_WorldPosition_1.methodPtr)
                            (auStack_1,this,(this->klass->vtable).get_WorldPosition_1.method);
        uVar23 = *puVar22;
        uVar24 = *(undefined4 *)(puVar22 + 1);
        callback = (UnityAction_1_UnityEngine_CullingGroupEvent_ *)
                   FUN_?(
                                TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>
                                );
        FUN_?(callback,this);
        this_02 = (CullingSubscriberBase *)FUN_?(TypeInfo__CullingSubscriberBase);
        CullingSubscriberBase::CullingSubscriberBase__ctor_1(this_02,callback,(MethodInfo *)0x0);
        auStack_1._8_4_ = uVar24;
        auStack_1._0_8_ = uVar23;
        CullingSubscriberBase::CullingSubscriberBase_Setup
                  (this_02,radius,(Vector3 *)auStack_1,(MethodInfo *)0x0);
        bVar10 = iRam_? != 0;
        (this->fields)._._.cullingSubscriberBase = this_02;
        if (bVar10) {
          uVar11 = (uint)((ulonglong)&(this->fields)._._.cullingSubscriberBase >> 0xc);
          uVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
          do {
            uVar13 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
            puVar14 = (ulonglong *)(uVar12 * 8 + 0xADDR);
            LOCK();
            bVar10 = uVar13 == *puVar14;
            if (bVar10) {
              *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
            }
            UNLOCK();
          } while (!bVar10);
        }
        return;
      }
    }
  }
code_?:
  auStack_1._8_8_ = &UNK_?;
  FUN_?();
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}


/* Void SetupUseInteractor() */

void Assembly-CSharp.dll::MVFlag::MVFlag_SetupUseInteractor(MVFlag *this,MethodInfo *method)

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
    FUN_?(&MethodInfo__MVFlag__DoCaptureFlag_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TeamRequirement);
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
  pFVar1 = (this->fields).flagObject;
  if (pFVar1 == (FlagObject *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pTVar3 = (this->fields).triggerBoxEvents;
  pGVar4 = (pFVar1->fields).useInteractionRotator;
  if (pTVar3 == (TriggerBoxEvents *)0x0) goto code_?;
  triggerCollider = TriggerBoxEvents::TriggerBoxEvents_get_Collider(pTVar3,(MethodInfo *)0x0);
  useFunction = (Func_2_Int32_Boolean_ *)FUN_?(TypeInfo__System__Func<int,_bool>);
  FUN_?(useFunction,this,MethodInfo__MVFlag__DoCaptureFlag_int_);
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
  pFVar1 = (this->fields).flagObject;
  if (pFVar1 == (FlagObject *)0x0) goto code_?;
  pGVar4 = (pFVar1->fields).useInteractionRotator;
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
  pFVar1 = (this->fields).flagObject;
  if (pFVar1 == (FlagObject *)0x0) goto code_?;
  pTVar12 = (pFVar1->fields).tintObject;
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


/* MVFlag(Dictionary`2[System.Object,System.Object], Dictionary`2[System.Int32,MVWorldObjectClient])
    */

void Assembly-CSharp.dll::MVFlag::MVFlag__ctor
               (MVFlag *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__FlagObject);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVFlag__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
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
              ((MVGamePointRewardLogicObject *)this,data,(pPVar1->fields).mvFlagPrefab,worldObjects,
               (MethodInfo *)0x0);
    pFVar2 = (FlagObject *)(this->fields)._._._.component;
    if (pFVar2 == (FlagObject *)0x0) {
      (this->fields).flagObject = (FlagObject *)0x0;
    }
    else {
      bVar3 = (TypeInfo__FlagObject->_1).naturalAligment;
      if (((((ObjectPrefab__Class *)pFVar2->klass)->_1).naturalAligment < bVar3) ||
         ((((ObjectPrefab__Class *)pFVar2->klass)->_1).typeHierarchy[(ulonglong)bVar3 - 1] !=
          (Il2CppClass *)TypeInfo__FlagObject)) {
        FUN_?(pFVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      (this->fields).flagObject = pFVar2;
      bVar3 = (TypeInfo__FlagObject->_1).naturalAligment;
      if (((((ObjectPrefab__Class *)pFVar2->klass)->_1).naturalAligment < bVar3) ||
         ((((ObjectPrefab__Class *)pFVar2->klass)->_1).typeHierarchy[(ulonglong)bVar3 - 1] !=
          (Il2CppClass *)TypeInfo__FlagObject)) {
        FUN_?(pFVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)&(this->fields).flagObject >> 0xc);
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
    pFVar2 = (this->fields).flagObject;
    if (pFVar2 != (FlagObject *)0x0) {
      (this->fields).triggerBoxEvents = (pFVar2->fields).triggerBoxEvents;
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
                 MethodInfo__MVFlag__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                 ,(MethodInfo *)0x0);
      if (this_00 != (TriggerBoxEvents *)0x0) {
        TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
                  (this_00,(EventHandler_1_TriggerEventArgs_ *)this_01,(MethodInfo *)0x0);
        piVar11 = &(this->fields)._._._.interactionFlags;
        *piVar11 = *piVar11 | 0x22100000;
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

void Assembly-CSharp.dll::MVFlag::MVFlag_triggerBoxEvents_TriggerEnter
               (MVFlag *this,Object *sender,TriggerEventArgs *e,MethodInfo *method)

{
  pWVar1 = (this->fields).worldObjectEnableController;
  if (pWVar1 != (WorldObjectEnableController *)0x0) {
    if ((pWVar1->fields).enableState != 2) {
      return;
    }
    pUVar2 = (this->fields).useInteractor;
    if ((pUVar2 != (UseInteractor *)0x0) &&
       (this_00 = (pUVar2->fields).useInteractorVisuals,
       this_00 != (UseInteractorVisualization *)0x0)) {
      UVar3 = UseInteractorVisualization::UseInteractorVisualization_EvaluateUsability
                        (this_00,(MethodInfo *)0x0);
      if ((UVar3 & (UseGUIResult__Enum_CannotAfford|UseGUIResult__Enum_CanAfford)) != 0) {
        return;
      }
      if (e != (TriggerEventArgs *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar4 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if ((pMVar4 != (MVGameControllerBase *)0x0) &&
           (pMVar5 = (pMVar4->fields).game, pMVar5 != (MVNetworkGame *)0x0)) {
          pMVar6 = (pMVar5->fields).operationRequests;
          iVar7 = (this->fields)._._._._.id;
          if (pMVar6 != (MVNetworkGame_OperationRequests *)0x0) {
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
            aiStackX_8[0] = iVar7;
            value = (Object *)FUN_?(uRam_?,aiStackX_8);
            if (this_01 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
              method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                          ->klass->rgctx_data[0x22].method;
              uVar8 = CONCAT71((int7)((ulonglong)method_00 >> 8),0xc1);
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]
              ::Dictionary_2_System_Byte_System_Object__TryInsert
                        (this_01,0xc1,value,
                         (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)method >> 8),2),
                         method_00);
              pPVar9 = (pMVar6->fields).peer;
              if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
                FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
              }
              if (pPVar9 != (PhotonPeer *)0x0) {
                (*(pPVar9->klass->vtable).SendOperation.methodPtr)
                          (pPVar9,CONCAT71((int7)((ulonglong)uVar8 >> 8),0x18),this_01,
                           TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->
                           SendReliable,(pPVar9->klass->vtable).SendOperation.method);
                return;
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}

