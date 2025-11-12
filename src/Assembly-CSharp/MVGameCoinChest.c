
/* Void Destroy() */

void Assembly-CSharp.dll::MVGameCoinChest::MVGameCoinChest_Destroy
               (MVGameCoinChest *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
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
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 == (MVGameControllerBase *)0x0) ||
      (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) ||
     (this_00 = (pMVar2->fields)._GameCoinManager_k__BackingField,
     this_00 == (MVGameCoinManager *)0x0)) goto code_?;
  MVGameCoinManager::MVGameCoinManager_Evaluate(this_00,(MethodInfo *)0x0);
  if ((this->fields).useInteractor != (UseInteractor *)0x0) {
    pMVar3 = (this->fields).chestObject;
    if (pMVar3 == (MVGameCoinChestObject *)0x0) {
code_?:
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pTVar5 = (pMVar3->fields).triggerBoxEvents;
    pUVar6 = (this->fields).useInteractor;
    pUVar7 = (UnityAction_2_System_Object_System_Object_ *)
              FUN_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (pUVar7,(Object *)pUVar6,
               MethodInfo__UseInteractor__TriggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
               ,(MethodInfo *)0x0);
    if (pTVar5 == (TriggerBoxEvents *)0x0) goto code_?;
    TriggerBoxEvents::TriggerBoxEvents_remove_TriggerEnter
              (pTVar5,(EventHandler_1_TriggerEventArgs_ *)pUVar7,(MethodInfo *)0x0);
    pMVar3 = (this->fields).chestObject;
    if (pMVar3 == (MVGameCoinChestObject *)0x0) goto code_?;
    pTVar5 = (pMVar3->fields).triggerBoxEvents;
    pUVar6 = (this->fields).useInteractor;
    pUVar7 = (UnityAction_2_System_Object_System_Object_ *)
              FUN_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (pUVar7,(Object *)pUVar6,
               MethodInfo__UseInteractor__TriggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
               ,(MethodInfo *)0x0);
    if (pTVar5 == (TriggerBoxEvents *)0x0) goto code_?;
    TriggerBoxEvents::TriggerBoxEvents_remove_TriggerExit
              (pTVar5,(EventHandler_1_TriggerEventArgs_ *)pUVar7,(MethodInfo *)0x0);
    pUVar6 = (this->fields).useInteractor;
    if ((pUVar6 == (UseInteractor *)0x0) ||
       (this_01 = (pUVar6->fields).useInteractorVisuals,
       this_01 == (UseInteractorVisualization *)0x0)) goto code_?;
    UseInteractorVisualization::UseInteractorVisualization_DestroyRequirementObjects
              (this_01,(this->fields)._._._.data,(MethodInfo *)0x0);
    bVar8 = iRam_? != 0;
    (this->fields).useInteractor = (UseInteractor *)0x0;
    if (bVar8) {
      uVar9 = (uint)((ulonglong)&(this->fields).useInteractor >> 0xc);
      puVar10 = (ulonglong *)((ulonglong)((uVar9 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar11 = *puVar10;
        LOCK();
        uVar12 = *puVar10;
        if (uVar11 == uVar12) {
          *puVar10 = uVar11 | 1L << (uVar9 & 0x3f);
        }
        UNLOCK();
      } while (uVar11 != uVar12);
    }
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UpdateController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
    FUN_?();
  }
  UpdateController::UpdateController_RemoveUpdateObject
            ((IUpdatecontrollerSubscriberUpdate *)this,(MethodInfo *)0x0);
  if ((this->fields)._.cullingSubscriberBase != (CullingSubscriberBase *)0x0) {
    CullingSubscriberBase::CullingSubscriberBase_Destroy
              ((this->fields)._.cullingSubscriberBase,(MethodInfo *)0x0);
    bVar8 = iRam_? != 0;
    (this->fields)._.cullingSubscriberBase = (CullingSubscriberBase *)0x0;
    if (bVar8) {
      uVar9 = (uint)((ulonglong)&(this->fields)._.cullingSubscriberBase >> 0xc);
      puVar10 = (ulonglong *)((ulonglong)((uVar9 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar11 = *puVar10;
        LOCK();
        uVar12 = *puVar10;
        if (uVar11 == uVar12) {
          *puVar10 = uVar11 | 1L << (uVar9 & 0x3f);
        }
        UNLOCK();
      } while (uVar11 != uVar12);
    }
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar13 = (this->fields)._._.gameObject;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pGVar13 != (GameObject *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pGVar13->fields)._.m_CachedPtr != (void *)0x0) {
      pGVar13 = (this->fields)._._.gameObject;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
                ((Object_1 *)pGVar13,0.0,(MethodInfo *)0x0);
    }
  }
  if ((this->fields)._._.initializedFromInventory != 0) {
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar1 != (MVGameControllerBase *)0x0) &&
     (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) {
    pRVar14 = (pMVar2->fields).runtimeVariableNetworkManager;
    item = (this->fields)._._._.id;
    if (pRVar14 != (RuntimeVariableNetworkManager *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this_02 = (HashSet_1_System_Int32Enum_ *)(pRVar14->fields).runtimeDataVariables;
      if (this_02 != (HashSet_1_System_Int32Enum_ *)0x0) {
        bVar15 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
                 HashSet_1_System_Int32Enum__Contains
                           (this_02,item,
                            MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
        if (bVar15 != 0) {
          pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar2 == (MVNetworkGame *)0x0) ||
             (pRVar14 = (pMVar2->fields).runtimeVariableNetworkManager,
             pRVar14 == (RuntimeVariableNetworkManager *)0x0)) goto DAT_?;
          RuntimeVariableNetworkManager::RuntimeVariableNetworkManager_RemoveRuntimeDataVariables
                    (pRVar14,(this->fields)._._._.id,(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
DAT_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void DoOpen() */

void Assembly-CSharp.dll::MVGameCoinChest::MVGameCoinChest_DoOpen
               (MVGameCoinChest *this,MethodInfo *method)

{
  if (((this->fields).state != 2) && ((this->fields).state != 1)) {
    return;
  }
  pMVar1 = (this->fields).chestObject;
  if (((pMVar1 != (MVGameCoinChestObject *)0x0) &&
      (pGVar2 = (pMVar1->fields).modelSelector, pGVar2 != (GameCoinChestModelSelector *)0x0)) &&
     (pRVar3 = (pGVar2->fields).openMesh, pRVar3 != (Renderer *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
              (pRVar3,0,(MethodInfo *)0x0);
    pRVar3 = (pGVar2->fields).closedMesh;
    if (pRVar3 != (Renderer *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                (pRVar3,1,(MethodInfo *)0x0);
      (this->fields).state = 0;
      return;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Vector3 GetClosestGridPoint(Single, Vector3) */

Vector3 * Assembly-CSharp.dll::MVGameCoinChest::MVGameCoinChest_GetClosestGridPoint
                    (Vector3 *__return_storage_ptr__,MVGameCoinChest *this,float gridSize,
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
  fVar3 = VStack_2.y * _UNK_?;
  fVar4 = VStack_2.x * _UNK_?;
  fVar5 = (pVVar1->oneVector).z * _UNK_?;
  this_00 = (this->fields)._._.gameObject;
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
    QStack_6.x = 0.0;
    QStack_6.y = 0.0;
    QStack_6.z = 0.0;
    QStack_6.w = 0.0;
    pvVar7 = (obj->fields)._._.m_CachedPtr;
    if (pvVar7 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar8 = (code *)swi(3);
      pVVar9 = (Vector3 *)(*pcVar8)();
      return pVVar9;
    }
    pcVar8 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
      uVar10 = func_?(&UNK_?);
      FUN_?(uVar10,0);
      pcVar8 = (code *)swi(3);
      pVVar9 = (Vector3 *)(*pcVar8)();
      return pVVar9;
    }
    pcRam_? = pcVar8;
    (*pcRam_?)(pvVar7,&QStack_6);
    if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
      FUN_?();
    }
    VStack_2.z = position->z;
    VStack_2.x = position->x;
    VStack_2.y = position->y;
    aQStack_11[0].x = QStack_6.x;
    aQStack_11[0].y = QStack_6.y;
    aQStack_11[0].z = QStack_6.z;
    aQStack_11[0].w = QStack_6.w;
    VStack_12.y = fVar3;
    VStack_12.x = fVar4;
    VStack_12.z = fVar5;
    pVVar9 = SharedCubeFunctions::SharedCubeFunctions_GetClosestGridPoint
                       ((Vector3 *)&QStack_6,&VStack_2,aQStack_11,gridSize,&VStack_12,
                        (MethodInfo *)0x0);
    fVar4 = pVVar9->y;
    fVar3 = pVVar9->z;
    __return_storage_ptr__->x = pVVar9->x;
    __return_storage_ptr__->y = fVar4;
    __return_storage_ptr__->z = fVar3;
    return __return_storage_ptr__;
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  pVVar9 = (Vector3 *)(*pcVar8)();
  return pVVar9;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVGameCoinChest::MVGameCoinChest_Initialize
               (MVGameCoinChest *this,MethodInfo *method)

{
  auStack_1._8_8_ = &UNK_?;
  MVGameCoinChest_SetupUseInteractor(this,(MethodInfo *)0x0);
  pUVar2 = (this->fields).useInteractor;
  if ((pUVar2 != (UseInteractor *)0x0) &&
     (this_00 = (pUVar2->fields).useInteractorVisuals, this_00 != (UseInteractorVisualization *)0x0)
     ) {
    auStack_1._8_8_ = &UNK_?;
    UseInteractorVisualization::UseInteractorVisualization_UpdateData
              (this_00,(this->fields)._._._.data,(pUVar2->fields).woOwnerID,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      auStack_1._8_8_ = &UNK_?;
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar3 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar3 != (MVGameControllerBase *)0x0) &&
        (pMVar4 = (pMVar3->fields).game, pMVar4 != (MVNetworkGame *)0x0)) &&
       (this_01 = (pMVar4->fields)._GameCoinManager_k__BackingField,
       this_01 != (MVGameCoinManager *)0x0)) {
      auStack_1._8_8_ = &UNK_?;
      MVGameCoinManager::MVGameCoinManager_Evaluate(this_01,(MethodInfo *)0x0);
      auStack_1._8_8_ = &UNK_?;
      MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
      radius = TypeRef__System__Activator__T._0_4_;
      pMVar5 = (this->fields).chestObject;
      if (pMVar5 != (MVGameCoinChestObject *)0x0) {
        pGVar6 = (pMVar5->fields).visualObject;
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
        cVar7 = (*(this->klass->vtable).get_HasVisualsInPlaymode.methodPtr)
                           (this,(this->klass->vtable).get_HasVisualsInPlaymode.method);
        if (cVar7 == '\0') {
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
        bVar8 = iRam_? != 0;
        (this->fields)._.lodGameObject = pGVar6;
        if (bVar8) {
          uVar9 = (uint)((ulonglong)&(this->fields)._.lodGameObject >> 0xc);
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
        pUVar13 = (this->fields)._._.PositionChanged;
        this_02 = (UnityAction_2_System_Object_System_Object_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                               );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  (this_02,(Object *)this,
                   MethodInfo__MVLogicObject__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                   ,(MethodInfo *)0x0);
        pDVar14 = mscorlib.dll::System::Delegate::Delegate_Combine
                            ((Delegate *)pUVar13,(Delegate *)this_02,(MethodInfo *)0x0);
        pUVar15 = 
        TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
        if (pDVar14 == (Delegate *)0x0) {
          (this->fields)._._.PositionChanged =
               (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
        }
        else {
          pUVar13 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)
                    FUN_?(pDVar14,
                                  TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                                 );
          if (pUVar13 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
            FUN_?(pDVar14,pUVar15);
            pcVar16 = (code *)swi(3);
            (*pcVar16)();
            return;
          }
          (this->fields)._._.PositionChanged = pUVar13;
          pUVar15 = 
          TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
          lVar17 = FUN_?(pDVar14,
                                 TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                                );
          if (lVar17 == 0) {
            FUN_?(pDVar14,pUVar15);
            pcVar16 = (code *)swi(3);
            (*pcVar16)();
            return;
          }
        }
        if (iRam_? != 0) {
          uVar9 = (uint)((ulonglong)&(this->fields)._._.PositionChanged >> 0xc);
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
        puVar18 = (undefined8 *)
                  (*(this->klass->vtable).get_WorldPosition_1.methodPtr)
                            (auStack_1,this,(this->klass->vtable).get_WorldPosition_1.method);
        uVar19 = *puVar18;
        uVar20 = *(undefined4 *)(puVar18 + 1);
        callback = (UnityAction_1_UnityEngine_CullingGroupEvent_ *)
                   FUN_?(
                                TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>
                                );
        FUN_?(callback,this);
        this_03 = (CullingSubscriberBase *)FUN_?(TypeInfo__CullingSubscriberBase);
        CullingSubscriberBase::CullingSubscriberBase__ctor_1(this_03,callback,(MethodInfo *)0x0);
        auStack_1._8_4_ = uVar20;
        auStack_1._0_8_ = uVar19;
        CullingSubscriberBase::CullingSubscriberBase_Setup
                  (this_03,radius,(Vector3 *)auStack_1,(MethodInfo *)0x0);
        bVar8 = iRam_? != 0;
        (this->fields)._.cullingSubscriberBase = this_03;
        if (bVar8) {
          uVar9 = (uint)((ulonglong)&(this->fields)._.cullingSubscriberBase >> 0xc);
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
        return;
      }
    }
  }
  auStack_1._8_8_ = &UNK_?;
  FUN_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void InitializeInventory() */

void Assembly-CSharp.dll::MVGameCoinChest::MVGameCoinChest_InitializeInventory
               (MVGameCoinChest *this,MethodInfo *method)

{
  MVLogicObject::MVLogicObject_InitializeInventory((MVLogicObject *)this,(MethodInfo *)0x0);
  pMVar1 = (this->fields).chestObject;
  if (((pMVar1 != (MVGameCoinChestObject *)0x0) &&
      (pGVar2 = (pMVar1->fields).modelSelector, pGVar2 != (GameCoinChestModelSelector *)0x0)) &&
     (pRVar3 = (pGVar2->fields).openMesh, pRVar3 != (Renderer *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
              (pRVar3,0,(MethodInfo *)0x0);
    pRVar3 = (pGVar2->fields).closedMesh;
    if (pRVar3 != (Renderer *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                      ,1,0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pRVar3 == (Renderer *)0x0) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pvVar5 = (pRVar3->fields)._._.m_CachedPtr;
      if (pvVar5 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar3,(MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar6 = func_?(&UNK_?);
        FUN_?(uVar6,0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcRam_? = pcVar4;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar5,1);
      return;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Boolean IsUsable(Int32, MVInteractableBase) */

bool Assembly-CSharp.dll::MVGameCoinChest::MVGameCoinChest_IsUsable
               (MVGameCoinChest *this,int32_t woId,MVInteractableBase *avatarInteractable,
               MethodInfo *method)

{
  return (this->fields).state == 0;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::MVGameCoinChest::MVGameCoinChest_OnDataUpdate
               (MVGameCoinChest *this,MethodInfo *method)

{
  pUVar1 = (this->fields).useInteractor;
  if ((pUVar1 == (UseInteractor *)0x0) ||
     (this_00 = (pUVar1->fields).useInteractorVisuals, this_00 == (UseInteractorVisualization *)0x0)
     ) {
    auStack_2._0_8_ = &UNK_?;
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar4 = (pUVar1->fields).woOwnerID;
  pOVar5 = (Object__Class *)(this->fields)._._._.data;
  if (cRam_? == '\0') {
    auStack_2._0_8_ = &UNK_?;
    FUN_?(&TypeInfo__System__Func<UseRequirement,_bool>);
    LOCK();
    UNLOCK();
    auStack_2._0_8_ = &UNK_?;
    FUN_?(&MethodInfo__UseInteractorVisualization____c___UpdateData_b__36_0_UseRequirement_)
    ;
    LOCK();
    UNLOCK();
    auStack_2._0_8_ = &UNK_?;
    FUN_?(&
                  MethodInfo__UseInteractorVisualization____c__DisplayClass36_0___UpdateData_b__1_UseRequirement_
                 );
    LOCK();
    UNLOCK();
    auStack_2._0_8_ = &UNK_?;
    FUN_?(&TypeInfo__UseInteractorVisualization____c__DisplayClass36_0);
    LOCK();
    UNLOCK();
    auStack_2._0_8_ = &UNK_?;
    FUN_?(&TypeInfo__UseInteractorVisualization____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  auStack_2._0_8_ = &UNK_?;
  pOVar6 = (Object *)FUN_?(TypeInfo__UseInteractorVisualization____c__DisplayClass36_0);
  if (pOVar6 == (Object *)0x0) {
code_?:
    auStack_2._0_8_ = &UNK_?;
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
    auStack_2._0_8_ = &UNK_?;
    FUN_?();
  }
  this_01 = TypeInfo__UseInteractorVisualization____c->static_fields->__9__36_0;
  if (this_01 == (Func_2_UseRequirement_Boolean_ *)0x0) {
    if (*(int *)&(TypeInfo__UseInteractorVisualization____c->_1).field_0x1c == 0) {
      auStack_2._0_8_ = &UNK_?;
      FUN_?();
    }
    object = TypeInfo__UseInteractorVisualization____c->static_fields->__9;
    auStack_2._0_8_ = &UNK_?;
    this_01 = (Func_2_UseRequirement_Boolean_ *)
              FUN_?(TypeInfo__System__Func<UseRequirement,_bool>);
    auStack_2._0_8_ = &UNK_?;
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
  auStack_2._0_8_ = &UNK_?;
  this_02 = (Predicate_1_Object_ *)FUN_?(TypeInfo__System__Func<UseRequirement,_bool>);
  auStack_2._0_8_ = &UNK_?;
  mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
            (this_02,pOVar6,
             MethodInfo__UseInteractorVisualization____c__DisplayClass36_0___UpdateData_b__1_UseRequirement_
             ,(MethodInfo *)0x0);
  if (this_00 == (UseInteractorVisualization *)0x0) goto code_?;
  auStack_2._0_8_ = &UNK_?;
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
  auStack_2._8_8_ = puStack_15;
  pOStack_17 = (Object *)0x0;
  uStack_18 = 0;
  puStack_19 = auStack_2;
  pLStack_13 = pLVar12;
  auStack_2._0_8_ = pLVar12;
  while (bVar20 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                  List_1_T_Enumerator_System_Object__MoveNext
                            ((List_1_T_Enumerator_System_Object_ *)auStack_2,
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
  auStack_2._8_8_ = puStack_15;
  pOStack_17 = (Object *)0x0;
  pLStack_13 = (List_1_UseRequirement_ *)0x0;
  puStack_15 = auStack_2;
  auStack_2._0_8_ = pLVar12;
  while (bVar20 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                  List_1_T_Enumerator_System_Object__MoveNext
                            ((List_1_T_Enumerator_System_Object_ *)auStack_2,
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


/* Void OnUpdate() */

void Assembly-CSharp.dll::MVGameCoinChest::MVGameCoinChest_OnUpdate
               (MVGameCoinChest *this,MethodInfo *method)

{
  if ((this->fields).state == 1) {
    MVGameCoinChest_OpenChest(this,(this->fields).instigator,(MethodInfo *)0x0);
    (this->fields).instigator = -1;
  }
  return;
}


/* Boolean OpenChest(Int32) */

bool Assembly-CSharp.dll::MVGameCoinChest::MVGameCoinChest_OpenChest
               (MVGameCoinChest *this,int32_t instigatorID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_gameCoinAmount);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).chestObject;
  (this->fields).instigator = instigatorID;
  if (((pMVar1 != (MVGameCoinChestObject *)0x0) &&
      (pGVar2 = (pMVar1->fields).modelSelector, pGVar2 != (GameCoinChestModelSelector *)0x0)) &&
     (pRVar3 = (pGVar2->fields).openMesh, pRVar3 != (Renderer *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
              (pRVar3,1,(MethodInfo *)0x0);
    pRVar3 = (pGVar2->fields).closedMesh;
    if (pRVar3 != (Renderer *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                (pRVar3,0,(MethodInfo *)0x0);
      pMVar1 = (this->fields).chestObject;
      if (pMVar1 != (MVGameCoinChestObject *)0x0) {
        pAVar4 = (pMVar1->fields).audioSource;
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (pAVar4 != (AudioSource *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if ((pAVar4->fields)._._._._.m_CachedPtr != (void *)0x0) {
            pMVar1 = (this->fields).chestObject;
            if ((pMVar1 == (MVGameCoinChestObject *)0x0) ||
               (pAVar4 = (pMVar1->fields).audioSource, pAVar4 == (AudioSource *)0x0))
            goto code_?;
            UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play_1
                      (pAVar4,(MethodInfo *)0x0);
          }
        }
        pMVar1 = (this->fields).chestObject;
        if ((pMVar1 != (MVGameCoinChestObject *)0x0) &&
           (this_00 = (pMVar1->fields).particles, this_00 != (ObjectParticleEmitterScript *)0x0)) {
          ObjectParticleEmitterScript::ObjectParticleEmitterScript_Play(this_00,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if ((pMVar5 != (MVGameControllerBase *)0x0) &&
             (pMVar6 = (pMVar5->fields).game, pMVar6 != (MVNetworkGame *)0x0)) {
            this_01 = (this->fields)._._._.data;
            this_02 = (pMVar6->fields)._GameCoinManager_k__BackingField;
            if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
              pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Object,System::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                 (this_01,(Object *)StringLiteral_gameCoinAmount,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                 );
              if ((this_02 != (MVGameCoinManager *)0x0) && (pOVar7 != (Object *)0x0)) {
                if ((pOVar7->klass->_0).element_class !=
                    *(Il2CppClass **)(lRam_? + 0x40)) {
                  FUN_?(pOVar7,lRam_?);
                  pcVar8 = (code *)swi(3);
                  bVar9 = (*pcVar8)();
                  return bVar9;
                }
                MVGameCoinManager::MVGameCoinManager_GameCoinChestCollect
                          (this_02,*(int32_t *)&pOVar7[1].klass,(MethodInfo *)0x0);
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__MVClientSettings);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                if ((TypeInfo__MVClientSettings->static_fields->flags & 0x100U) != 0) {
                  this_03 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                      ((MethodInfo *)0x0);
                  if (this_03 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
                  MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_TriggerBoxEnter
                            (this_03,(this->fields)._._._.id,instigatorID,(MethodInfo *)0x0);
                }
                (this->fields).state = 2;
                return 1;
              }
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  bVar9 = (*pcVar8)();
  return bVar9;
}


/* Void SetupUseInteractor() */

void Assembly-CSharp.dll::MVGameCoinChest::MVGameCoinChest_SetupUseInteractor
               (MVGameCoinChest *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Func<int,_bool>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Func<int,_MVInteractableBase,_bool>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__LevelBasedUseRequirement);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVGameCoinChest__IsUsable_int__MVInteractableBase_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVGameCoinChest__OpenChest_int_);
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
  pMVar1 = (this->fields).chestObject;
  if (pMVar1 != (MVGameCoinChestObject *)0x0) {
    pTVar2 = (pMVar1->fields).triggerBoxEvents;
    pGVar3 = (pMVar1->fields).useInteractionRotator;
    if (pTVar2 != (TriggerBoxEvents *)0x0) {
      triggerCollider = TriggerBoxEvents::TriggerBoxEvents_get_Collider(pTVar2,(MethodInfo *)0x0);
      useFunction = (Func_2_Int32_Boolean_ *)FUN_?(TypeInfo__System__Func<int,_bool>);
      FUN_?(useFunction,this,MethodInfo__MVGameCoinChest__OpenChest_int_);
      checkCanUseFunction =
           (Func_3_Int32_MVInteractableBase_Boolean_ *)
           FUN_?(TypeInfo__System__Func<int,_MVInteractableBase,_bool>);
      FUN_?(checkCanUseFunction,this,
                    MethodInfo__MVGameCoinChest__IsUsable_int__MVInteractableBase_);
      pUVar4 = (UseInteractor *)FUN_?(TypeInfo__UseInteractor);
      UseInteractor::UseInteractor__ctor
                (pUVar4,(MVWorldObjectClient *)this,pGVar3,0,triggerCollider,useFunction,
                 checkCanUseFunction,_UNK_?,0,1,(MethodInfo *)0x0);
      bVar5 = iRam_? != 0;
      (this->fields).useInteractor = pUVar4;
      if (bVar5) {
        uVar6 = (uint)((ulonglong)&(this->fields).useInteractor >> 0xc);
        uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
        do {
          uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
          puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
          LOCK();
          bVar5 = uVar8 == *puVar9;
          if (bVar5) {
            *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar5);
      }
      pMVar1 = (this->fields).chestObject;
      if (pMVar1 != (MVGameCoinChestObject *)0x0) {
        pGVar3 = (pMVar1->fields).useInteractionRotator;
        useRequirement = (UseRequirement *)FUN_?(TypeInfo__LevelBasedUseRequirement);
        bVar5 = iRam_? != 0;
        *(undefined8 *)&useRequirement[1].fields = 0;
        *(undefined4 *)&useRequirement[2].klass = 0;
        *(undefined1 *)((longlong)&useRequirement[1].klass + 4) = 0;
        useRequirement[2].monitor = (MonitorData *)pGVar3;
        if (bVar5) {
          uVar6 = (uint)((ulonglong)&useRequirement[2].monitor >> 0xc);
          uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
          do {
            uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
            puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
            LOCK();
            bVar5 = uVar8 == *puVar9;
            if (bVar5) {
              *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (!bVar5);
        }
        pUVar4 = (this->fields).useInteractor;
        if (pUVar4 != (UseInteractor *)0x0) {
          UseInteractor::UseInteractor_AddRequirement(pUVar4,useRequirement,(MethodInfo *)0x0);
          pMVar1 = (this->fields).chestObject;
          if (pMVar1 != (MVGameCoinChestObject *)0x0) {
            pTVar2 = (pMVar1->fields).triggerBoxEvents;
            pUVar4 = (this->fields).useInteractor;
            pUVar10 = (UnityAction_2_System_Object_System_Object_ *)
                      FUN_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      (pUVar10,(Object *)pUVar4,
                       MethodInfo__UseInteractor__TriggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                       ,(MethodInfo *)0x0);
            if (pTVar2 != (TriggerBoxEvents *)0x0) {
              TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
                        (pTVar2,(EventHandler_1_TriggerEventArgs_ *)pUVar10,(MethodInfo *)0x0);
              pMVar1 = (this->fields).chestObject;
              if (pMVar1 != (MVGameCoinChestObject *)0x0) {
                pTVar2 = (pMVar1->fields).triggerBoxEvents;
                pUVar4 = (this->fields).useInteractor;
                pUVar10 = (UnityAction_2_System_Object_System_Object_ *)
                          FUN_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System
                ::Object]::UnityAction_2_System_Object_System_Object___ctor
                          (pUVar10,(Object *)pUVar4,
                           MethodInfo__UseInteractor__TriggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                           ,(MethodInfo *)0x0);
                if (pTVar2 != (TriggerBoxEvents *)0x0) {
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  ppEVar11 = &(pTVar2->fields).TriggerExit;
                  a = (pTVar2->fields).TriggerExit;
                  do {
                    pDVar12 = mscorlib.dll::System::Delegate::Delegate_Combine
                                       ((Delegate *)a,(Delegate *)pUVar10,(MethodInfo *)0x0);
                    pEVar13 = TypeInfo__System__EventHandler<TriggerEventArgs>;
                    if (pDVar12 == (Delegate *)0x0) {
                      pEVar14 = (EventHandler_1_TriggerEventArgs_ *)0x0;
                    }
                    else {
                      pEVar14 = (EventHandler_1_TriggerEventArgs_ *)
                                FUN_?(pDVar12,
                                              TypeInfo__System__EventHandler<TriggerEventArgs>);
                      if (pEVar14 == (EventHandler_1_TriggerEventArgs_ *)0x0) {
                        FUN_?(pDVar12,pEVar13);
                        pcVar15 = (code *)swi(3);
                        (*pcVar15)();
                        return;
                      }
                    }
                    LOCK();
                    pEVar16 = *ppEVar11;
                    bVar5 = a == pEVar16;
                    if (bVar5) {
                      *ppEVar11 = pEVar14;
                      pEVar16 = a;
                    }
                    UNLOCK();
                    pEVar14 = a;
                    if (!bVar5) {
                      pEVar14 = pEVar16;
                    }
                    if (iRam_? != 0) {
                      uVar6 = (uint)((ulonglong)ppEVar11 >> 0xc);
                      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
                      do {
                        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
                        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
                        LOCK();
                        bVar5 = uVar8 == *puVar9;
                        if (bVar5) {
                          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
                        }
                        UNLOCK();
                      } while (!bVar5);
                    }
                    bVar5 = pEVar14 != a;
                    a = pEVar14;
                  } while (bVar5);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* MVGameCoinChest(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVGameCoinChest::MVGameCoinChest__ctor
               (MVGameCoinChest *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVGameCoinChestObject);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVGameCoinChest__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_A_TriggerBoxEvents_object_is_mis);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = cRam_? == '\0';
  (this->fields).instigator = -1;
  if (bVar1) {
    FUN_?(&TypeInfo__PrefabPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar2 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar2 == (PrefabPool *)0x0) goto code_?;
  MVLogicObject::MVLogicObject__ctor
            ((MVLogicObject *)this,data,(pPVar2->fields).mvGameCoinChestPrefab,worldObjects,
             (MethodInfo *)0x0);
  pMVar3 = (MVGameCoinChestObject *)(this->fields)._._.component;
  if (pMVar3 == (MVGameCoinChestObject *)0x0) {
    (this->fields).chestObject = (MVGameCoinChestObject *)0x0;
  }
  else {
    bVar4 = (TypeInfo__MVGameCoinChestObject->_1).naturalAligment;
    if (((((ObjectPrefab__Class *)pMVar3->klass)->_1).naturalAligment < bVar4) ||
       ((((ObjectPrefab__Class *)pMVar3->klass)->_1).typeHierarchy[(ulonglong)bVar4 - 1] !=
        (Il2CppClass *)TypeInfo__MVGameCoinChestObject)) {
      FUN_?(pMVar3);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    (this->fields).chestObject = pMVar3;
    bVar4 = (TypeInfo__MVGameCoinChestObject->_1).naturalAligment;
    if (((((ObjectPrefab__Class *)pMVar3->klass)->_1).naturalAligment < bVar4) ||
       ((((ObjectPrefab__Class *)pMVar3->klass)->_1).typeHierarchy[(ulonglong)bVar4 - 1] !=
        (Il2CppClass *)TypeInfo__MVGameCoinChestObject)) {
      FUN_?(pMVar3);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar6 = (uint)((ulonglong)&(this->fields).chestObject >> 0xc);
    puVar7 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar8 = *puVar7;
      LOCK();
      uVar9 = *puVar7;
      if (uVar8 == uVar9) {
        *puVar7 = uVar8 | 1L << (ulonglong)(uVar6 & 0x3f);
      }
      UNLOCK();
    } while (uVar8 != uVar9);
  }
  pMVar3 = (this->fields).chestObject;
  if (pMVar3 == (MVGameCoinChestObject *)0x0) goto code_?;
  pTVar10 = (pMVar3->fields).triggerBoxEvents;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pTVar10 == (TriggerBoxEvents *)0x0) {
code_?:
    plVar11 = (longlong *)FUN_?(&(this->klass->_0).byval_arg);
    if (plVar11 == (longlong *)0x0) goto code_?;
    pSVar12 = (String *)(**(code **)(*plVar11 + 0x1b8))(plVar11,*(undefined8 *)(*plVar11 + 0x1c0));
    pSVar12 = mscorlib.dll::System::String::String_Concat_4
                        (StringLiteral_A_TriggerBoxEvents_object_is_mis,pSVar12,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)pSVar12,(MethodInfo *)0x0);
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pTVar10->fields)._._._._.m_CachedPtr == (void *)0x0) goto code_?;
    pMVar3 = (this->fields).chestObject;
    if (pMVar3 == (MVGameCoinChestObject *)0x0) goto code_?;
    pTVar10 = (pMVar3->fields).triggerBoxEvents;
    this_02 = (UnityAction_2_System_Object_System_Object_ *)
              FUN_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (this_02,(Object *)this,
               MethodInfo__MVGameCoinChest__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
               ,(MethodInfo *)0x0);
    if (pTVar10 == (TriggerBoxEvents *)0x0) goto code_?;
    TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
              (pTVar10,(EventHandler_1_TriggerEventArgs_ *)this_02,(MethodInfo *)0x0);
  }
  piVar13 = &(this->fields)._._.interactionFlags;
  *piVar13 = *piVar13 | 0x208000;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar14 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar14 != (MVGameControllerBase *)0x0) &&
      (pMVar15 = (pMVar14->fields).game, pMVar15 != (MVNetworkGame *)0x0)) &&
     (pMVar16 = (pMVar15->fields)._GameCoinManager_k__BackingField,
     pMVar16 != (MVGameCoinManager *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                    ,0);
      LOCK();
      UNLOCK();
      FUN_?();
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar17 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if ((pMVar17 != (MVWorldObjectClientManager *)0x0) &&
       (pLVar18 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectsByType
                            (pMVar17,WorldObjectType__Enum_GameCoin,(MethodInfo *)0x0),
       pLVar18 != (List_1_MVWorldObjectClient_ *)0x0)) {
      iVar19 = (pLVar18->fields)._size;
      pMVar17 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if ((pMVar17 != (MVWorldObjectClientManager *)0x0) &&
         (pLVar18 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectsByType
                              (pMVar17,WorldObjectType__Enum_GameCoinChest,(MethodInfo *)0x0),
         pLVar18 != (List_1_MVWorldObjectClient_ *)0x0)) {
        iVar20 = (pLVar18->fields)._size;
        uVar21._0_4_ = (pMVar16->fields).totalPurchaseAmount.currentCryptoKey;
        uVar21._4_4_ = (pMVar16->fields).totalPurchaseAmount.hiddenValue;
        uVar22._0_4_ = (pMVar16->fields).totalPurchaseAmount.fakeValue;
        uVar22._4_1_ = (pMVar16->fields).totalPurchaseAmount.inited;
        uVar22._5_3_ = *(undefined3 *)&(pMVar16->fields).totalPurchaseAmount.field_0xd;
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c ==
            0) {
          FUN_?();
        }
        OStackY_28._0_8_ = uVar21;
        OStackY_28._8_8_ = uVar22;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c ==
            0) {
          FUN_?();
        }
        iVar23 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
                 ObscuredInt_InternalDecrypt(&OStackY_28,(MethodInfo *)0x0);
        if (((iVar23 < 1) && (iVar19 < 1)) && (iVar20 < 1)) {
          bVar24 = 0;
        }
        else {
          bVar24 = 1;
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool,bVar24,0);
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
        pMVar14 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if ((((pMVar14 != (MVGameControllerBase *)0x0) &&
             (pMVar15 = (pMVar14->fields).game, pMVar15 != (MVNetworkGame *)0x0)) &&
            (this_00 = (pMVar15->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) &&
           ((pMVar25 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                 (this_00,(MethodInfo *)0x0), pMVar25 != (MVLocalPlayer *)0x0 &&
            (this_01 = (pMVar25->fields).boostController, this_01 != (BoostController *)0x0)))) {
          BoostController::BoostController_AllowBoost
                    (this_01,BoostType__Enum_GameCoinsIntMultiplier,bVar24,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c
              == 0) {
            FUN_?();
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c
              == 0) {
            FUN_?();
          }
          bVar26 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool
                   ::ObscuredBool_InternalDecrypt
                             ((ObscuredBool *)&stack0xffffffffffffffe8,(MethodInfo *)0x0);
          if (bVar24 != bVar26) {
            if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).
                         field_0x1c == 0) {
              FUN_?();
            }
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            uVar27._0_1_ = 0;
            uVar27._1_3_ = 0;
            uVar28._0_1_ = 0;
            uVar28._1_3_ = 0;
            if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).
                         field_0x1c == 0) {
              uVar28 = uVar27;
              FUN_?();
            }
            iVar23 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                     ObscuredBool::ObscuredBool_Encrypt(bVar24,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).
                         field_0x1c == 0) {
              FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
            }
            uVar29._4_4_ = iVar23;
            uVar29._0_1_ = (uint8_t)uVar28;
            uVar29._1_3_ = SUB43(uVar28,1);
            uStack_30._0_1_ = 0;
            uStack_30._1_1_ = 0;
            uStack_30._2_1_ = 1;
            uStack_30._3_1_ = 0;
            uVar31._1_7_ = SUB87(uVar29,1);
            uVar31._0_1_ = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->
                           static_fields->cryptoKey;
            bVar26 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::
                     ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                               ((MethodInfo *)0x0);
            if (bVar26 != 0) {
              uStack_30._1_1_ = 1;
              uStack_30._0_1_ = bVar24;
              uStack_30._2_2_ = 1;
            }
            pMVar32 = (pMVar16->fields).OnActivationChange;
            (pMVar16->fields).isActive.currentCryptoKey = (uint8_t)uVar31;
            *(int3 *)&(pMVar16->fields).isActive.field_0x1 = SUB83(uVar31,1);
            (pMVar16->fields).isActive.hiddenValue = SUB84(uVar31,4);
            (pMVar16->fields).isActive.fakeValue = (bool)uStack_30;
            (pMVar16->fields).isActive.fakeValueChanged = uStack_30._1_1_;
            (pMVar16->fields).isActive.inited = uStack_30._2_1_;
            (pMVar16->fields).isActive.field_0xb = uStack_30._3_1_;
            if (pMVar32 != (MVGameCoinManager_OnActivationChangeDelegate *)0x0) {
              pMVar32 = (pMVar16->fields).OnActivationChange;
              if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).
                           field_0x1c == 0) {
                FUN_?();
              }
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).
                           field_0x1c == 0) {
                FUN_?();
              }
              bVar24 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                       ObscuredBool::ObscuredBool_InternalDecrypt
                                 ((ObscuredBool *)&stack0xffffffffffffffe8,(MethodInfo *)0x0);
              (*(pMVar32->fields)._._.invoke_impl)
                        ((pMVar32->fields)._._.method_code,bVar24,(pMVar32->fields)._._.method);
            }
          }
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
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Boolean get_Visible() */

bool Assembly-CSharp.dll::MVGameCoinChest::MVGameCoinChest_get_Visible
               (MVGameCoinChest *this,MethodInfo *method)

{
  pMVar1 = (this->fields).chestObject;
  if (((pMVar1 != (MVGameCoinChestObject *)0x0) &&
      (pGVar2 = (pMVar1->fields).modelSelector, pGVar2 != (GameCoinChestModelSelector *)0x0)) &&
     (pRVar3 = (pGVar2->fields).openMesh, pRVar3 != (Renderer *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar4 = (pRVar3->fields)._._.m_CachedPtr;
    if (pvVar4 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar3,(MethodInfo *)0x0);
      pcVar5 = (code *)swi(3);
      bVar6 = (*pcVar5)();
      return bVar6;
    }
    pcVar5 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
      uVar7 = func_?(&UNK_?);
      FUN_?(uVar7,0);
      pcVar5 = (code *)swi(3);
      bVar6 = (*pcVar5)();
      return bVar6;
    }
    pcRam_? = pcVar5;
    cVar8 = (*pcRam_?)(pvVar4);
    if (cVar8 != '\0') {
      return 1;
    }
    pRVar3 = (pGVar2->fields).closedMesh;
    if (pRVar3 != (Renderer *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pRVar3 == (Renderer *)0x0) {
        FUN_?();
        pcVar5 = (code *)swi(3);
        bVar6 = (*pcVar5)();
        return bVar6;
      }
      pvVar4 = (pRVar3->fields)._._.m_CachedPtr;
      if (pvVar4 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar3,(MethodInfo *)0x0);
        pcVar5 = (code *)swi(3);
        bVar6 = (*pcVar5)();
        return bVar6;
      }
      pcVar5 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
        uVar7 = func_?(&UNK_?);
        FUN_?(uVar7,0,in_R8,in_R9,unaff_RBX);
        pcVar5 = (code *)swi(3);
        bVar6 = (*pcVar5)();
        return bVar6;
      }
      pcRam_? = pcVar5;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      bVar6 = (*pcRam_?)(pvVar4);
      return bVar6;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Void set_Visible(Boolean) */

void Assembly-CSharp.dll::MVGameCoinChest::MVGameCoinChest_set_Visible
               (MVGameCoinChest *this,bool value,MethodInfo *method)

{
  pMVar1 = (this->fields).chestObject;
  if (pMVar1 != (MVGameCoinChestObject *)0x0) {
    pGVar2 = (pMVar1->fields).modelSelector;
    if ((this->fields).state == 0) {
      if ((pGVar2 != (GameCoinChestModelSelector *)0x0) &&
         (pRVar3 = (pGVar2->fields).openMesh, pRVar3 != (Renderer *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                  (pRVar3,0,(MethodInfo *)0x0);
        pRVar3 = (pGVar2->fields).closedMesh;
        if (pRVar3 != (Renderer *)0x0) {
          uVar4 = 1;
          goto code_?;
        }
      }
    }
    else if ((pGVar2 != (GameCoinChestModelSelector *)0x0) &&
            (pRVar3 = (pGVar2->fields).openMesh, pRVar3 != (Renderer *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                (pRVar3,1,(MethodInfo *)0x0);
      pRVar3 = (pGVar2->fields).closedMesh;
      if (pRVar3 != (Renderer *)0x0) {
        uVar4 = 0;
code_?:
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                        ,uVar4,0);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (pRVar3 == (Renderer *)0x0) {
          FUN_?();
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pvVar6 = (pRVar3->fields)._._.m_CachedPtr;
        if (pvVar6 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar3,(MethodInfo *)0x0);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pcVar5 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
          uVar4 = func_?(&UNK_?);
          FUN_?(uVar4,0);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pcRam_? = pcVar5;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam_?)(pvVar6,uVar4);
        return;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void triggerBoxEvents_TriggerEnter(Object, TriggerEventArgs) */

void Assembly-CSharp.dll::MVGameCoinChest::MVGameCoinChest_triggerBoxEvents_TriggerEnter
               (MVGameCoinChest *this,Object *sender,TriggerEventArgs *e,MethodInfo *method)

{
  if ((this->fields).state == 0) {
    pUVar1 = (this->fields).useInteractor;
    if ((pUVar1 == (UseInteractor *)0x0) ||
       (this_00 = (pUVar1->fields).useInteractorVisuals,
       this_00 == (UseInteractorVisualization *)0x0)) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    UVar3 = UseInteractorVisualization::UseInteractorVisualization_EvaluateUsability
                      (this_00,(MethodInfo *)0x0);
    if ((UVar3 & (UseGUIResult__Enum_CannotAfford|UseGUIResult__Enum_CanAfford)) == 0) {
      (this->fields).state = 1;
    }
  }
  return;
}

