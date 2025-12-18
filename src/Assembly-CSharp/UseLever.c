
/* Void Destroy() */

void Assembly-CSharp.dll::UseLever::UseLever_Destroy(UseLever *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<EditModeChangeArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IEditModeUI);
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
    FUN_?(&MethodInfo__UseLever__OnEditModeChange_EditModeChangeArgs_);
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
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField ==
        (IEditModeUI *)0x0) goto code_?;
    pDVar1 = (Delegate *)FUN_?();
    value = (Delegate *)FUN_?(TypeInfo__System__Action<EditModeChangeArgs>);
    FUN_?(value,this);
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove(pDVar1,value,(MethodInfo *)0x0);
    pAVar2 = TypeInfo__System__Action<EditModeChangeArgs>;
    if ((pDVar1 != (Delegate *)0x0) &&
       (lVar3 = FUN_?(pDVar1,TypeInfo__System__Action<EditModeChangeArgs>), lVar3 == 0))
    {
      FUN_?(pDVar1,pAVar2);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FUN_?();
  }
  pUVar5 = (this->fields).useLeverObject;
  if (pUVar5 != (UseLeverObject *)0x0) {
    pTVar6 = (pUVar5->fields).triggerBoxEvents;
    pUVar7 = (pUVar5->fields).useInteractor;
    pUVar8 = (UnityAction_2_System_Object_System_Object_ *)
              FUN_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (pUVar8,(Object *)pUVar7,
               MethodInfo__UseInteractor__TriggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
               ,(MethodInfo *)0x0);
    if (pTVar6 != (TriggerBoxEvents *)0x0) {
      TriggerBoxEvents::TriggerBoxEvents_remove_TriggerEnter
                (pTVar6,(EventHandler_1_TriggerEventArgs_ *)pUVar8,(MethodInfo *)0x0);
      pUVar5 = (this->fields).useLeverObject;
      if (pUVar5 != (UseLeverObject *)0x0) {
        pTVar6 = (pUVar5->fields).triggerBoxEvents;
        pUVar7 = (pUVar5->fields).useInteractor;
        pUVar8 = (UnityAction_2_System_Object_System_Object_ *)
                  FUN_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  (pUVar8,(Object *)pUVar7,
                   MethodInfo__UseInteractor__TriggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                   ,(MethodInfo *)0x0);
        if (pTVar6 != (TriggerBoxEvents *)0x0) {
          TriggerBoxEvents::TriggerBoxEvents_remove_TriggerExit
                    (pTVar6,(EventHandler_1_TriggerEventArgs_ *)pUVar8,(MethodInfo *)0x0);
          pUVar5 = (this->fields).useLeverObject;
          if (((pUVar5 != (UseLeverObject *)0x0) &&
              (pUVar7 = (pUVar5->fields).useInteractor, pUVar7 != (UseInteractor *)0x0)) &&
             (this_00 = (pUVar7->fields).useInteractorVisuals,
             this_00 != (UseInteractorVisualization *)0x0)) {
            UseInteractorVisualization::UseInteractorVisualization_DestroyRequirementObjects
                      (this_00,(this->fields)._._._.data,(MethodInfo *)0x0);
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
              bVar9 = iRam_? != 0;
              (this->fields)._.cullingSubscriberBase = (CullingSubscriberBase *)0x0;
              if (bVar9) {
                uVar10 = (uint)((ulonglong)&(this->fields)._.cullingSubscriberBase >> 0xc);
                puVar11 = (ulonglong *)((ulonglong)((uVar10 & 0x1fffff) >> 6) * 8 + 0xADDR);
                do {
                  uVar12 = *puVar11;
                  LOCK();
                  uVar13 = *puVar11;
                  if (uVar12 == uVar13) {
                    *puVar11 = uVar12 | 1L << (uVar10 & 0x3f);
                  }
                  UNLOCK();
                } while (uVar12 != uVar13);
              }
            }
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Object,0);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pGVar14 = (this->fields)._._.gameObject;
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
            if (pGVar14 != (GameObject *)0x0) {
              if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                FUN_?();
              }
              if ((pGVar14->fields)._.m_CachedPtr != (void *)0x0) {
                pGVar14 = (this->fields)._._.gameObject;
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
                          ((Object_1 *)pGVar14,0.0,(MethodInfo *)0x0);
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
            pMVar15 = TypeInfo__MVGameControllerBase->static_fields->instance;
            if ((pMVar15 != (MVGameControllerBase *)0x0) &&
               (pMVar16 = (pMVar15->fields).game, pMVar16 != (MVNetworkGame *)0x0)) {
              pRVar17 = (pMVar16->fields).runtimeVariableNetworkManager;
              item = (this->fields)._._._.id;
              if (pRVar17 != (RuntimeVariableNetworkManager *)0x0) {
                if (cRam_? == '\0') {
                  FUN_?(&
                                MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                this_01 = (HashSet_1_System_Int32Enum_ *)(pRVar17->fields).runtimeDataVariables;
                if (this_01 != (HashSet_1_System_Int32Enum_ *)0x0) {
                  bVar18 = System.Core.dll::System::Collections::Generic::HashSet`1[System::
                           Int32Enum]::HashSet_1_System_Int32Enum__Contains
                                     (this_01,item,
                                      MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_
                                     );
                  if (bVar18 != 0) {
                    pMVar16 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0)
                    ;
                    if ((pMVar16 == (MVNetworkGame *)0x0) ||
                       (pRVar17 = (pMVar16->fields).runtimeVariableNetworkManager,
                       pRVar17 == (RuntimeVariableNetworkManager *)0x0)) goto DAT_?;
                    RuntimeVariableNetworkManager::
                    RuntimeVariableNetworkManager_RemoveRuntimeDataVariables
                              (pRVar17,(this->fields)._._._.id,(MethodInfo *)0x0);
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


/* Vector3 GetClosestGridPoint(Single, Vector3) */

Vector3 * Assembly-CSharp.dll::UseLever::UseLever_GetClosestGridPoint
                    (Vector3 *__return_storage_ptr__,UseLever *this,float gridSize,Vector3 *position
                    ,MethodInfo *method)

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
  fVar3 = (pVVar1->oneVector).z;
  fVar4 = VStack_2.x * TypeRef__System__Activator__T._0_4_;
  fVar5 = VStack_2.y + VStack_2.y;
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
    VStack_12.y = fVar5;
    VStack_12.x = fVar4;
    VStack_12.z = fVar3 + fVar3;
    pVVar9 = SharedCubeFunctions::SharedCubeFunctions_GetClosestGridPoint
                       ((Vector3 *)&QStack_6,&VStack_2,aQStack_11,gridSize,&VStack_12,
                        (MethodInfo *)0x0);
    fVar5 = pVVar9->y;
    fVar3 = pVVar9->z;
    __return_storage_ptr__->x = pVVar9->x;
    __return_storage_ptr__->y = fVar5;
    __return_storage_ptr__->z = fVar3;
    return __return_storage_ptr__;
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  pVVar9 = (Vector3 *)(*pcVar8)();
  return pVVar9;
}


/* Bounds GetLocalBounds(BoundsContext) */

Bounds * Assembly-CSharp.dll::UseLever::UseLever_GetLocalBounds
                   (Bounds *__return_storage_ptr__,UseLever *this,BoundsContext__Enum boundsContext,
                   MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = _UNK_?;
  fVar2 = _UNK_?;
  pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar4 = (pVVar3->zeroVector).y;
  fVar5 = (pVVar3->zeroVector).z;
  (__return_storage_ptr__->m_Center).x = (pVVar3->zeroVector).x;
  (__return_storage_ptr__->m_Center).y = fVar4;
  (__return_storage_ptr__->m_Center).z = fVar5;
  (__return_storage_ptr__->m_Extents).x = (float)uVar1;
  (__return_storage_ptr__->m_Extents).y = (float)uVar1;
  (__return_storage_ptr__->m_Extents).z = fVar2;
  return __return_storage_ptr__;
}


/* Void Initialize() */

void Assembly-CSharp.dll::UseLever::UseLever_Initialize(UseLever *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<EditModeChangeArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action<bool,_bool,_LogicObjectManager>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IEditModeUI);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__OutputSignalTransmitter);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__UseLever__OnEditModeChange_EditModeChangeArgs_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__UseLever__SignalCallback_bool__bool__LogicObjectManager_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField !=
      (IEditModeUI *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField ==
        (IEditModeUI *)0x0) goto code_?;
    pDVar1 = (Delegate *)FUN_?();
    b = (Delegate *)FUN_?(TypeInfo__System__Action<EditModeChangeArgs>);
    FUN_?(b,this);
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine(pDVar1,b,(MethodInfo *)0x0);
    pAVar2 = TypeInfo__System__Action<EditModeChangeArgs>;
    if ((pDVar1 != (Delegate *)0x0) &&
       (lVar3 = FUN_?(pDVar1,TypeInfo__System__Action<EditModeChangeArgs>), lVar3 == 0))
    {
      FUN_?(pDVar1,pAVar2);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar5 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar5 == (GameSessionData *)0x0) goto code_?;
  if ((pGVar5->fields).gameMode == 0) {
code_?:
    pUVar6 = (this->fields).useLeverObject;
    if ((pUVar6 == (UseLeverObject *)0x0) ||
       (pCVar7 = (pUVar6->fields).editCollider, pCVar7 == (Collider *)0x0))
    goto code_?;
    UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
              (pCVar7,1,(MethodInfo *)0x0);
    pUVar6 = (this->fields).useLeverObject;
    if ((pUVar6 == (UseLeverObject *)0x0) ||
       (pCVar7 = (pUVar6->fields).leverCollider, pCVar7 == (Collider *)0x0))
    goto code_?;
    UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
              (pCVar7,0,(MethodInfo *)0x0);
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pGVar5 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar5 == (GameSessionData *)0x0) goto code_?;
    if ((pGVar5->fields).gameMode == 4) goto code_?;
  }
  pUVar6 = (this->fields).useLeverObject;
  if (((pUVar6 != (UseLeverObject *)0x0) &&
      (pUVar8 = (pUVar6->fields).useInteractor, pUVar8 != (UseInteractor *)0x0)) &&
     (this_00 = (pUVar8->fields).useInteractorVisuals, this_00 != (UseInteractorVisualization *)0x0)
     ) {
    UseInteractorVisualization::UseInteractorVisualization_UpdateData
              (this_00,(this->fields)._._._.data,(pUVar8->fields).woOwnerID,(MethodInfo *)0x0);
    pUVar6 = (this->fields).useLeverObject;
    if (pUVar6 != (UseLeverObject *)0x0) {
      MVLogicObject::MVLogicObject_SetupCulling
                ((MVLogicObject *)this,(pUVar6->fields).visualRoot,
                 TypeRef__System__Activator__T._0_4_,(MethodInfo *)0x0);
      signalCallback =
           (Action_3_Boolean_Boolean_LogicObjectManager_ *)
           FUN_?(TypeInfo__System__Action<bool,_bool,_LogicObjectManager>);
      FUN_?(signalCallback,this,
                    MethodInfo__UseLever__SignalCallback_bool__bool__LogicObjectManager_);
      pIVar9 = LogicClientsideFactory::LogicClientsideFactory_CreateInputSignalReceiver
                          ((MVWorldObject *)this,1,signalCallback,(MethodInfo *)0x0);
      bVar10 = iRam_? != 0;
      (this->fields)._InputSignalReceiver_k__BackingField = pIVar9;
      if (bVar10) {
        uVar11 = (uint)((ulonglong)&(this->fields)._InputSignalReceiver_k__BackingField >> 0xc);
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
      iVar15 = (this->fields)._._._.id;
      pOVar16 = (OutputSignalTransmitter *)FUN_?(TypeInfo__OutputSignalTransmitter);
      bVar10 = iRam_? != 0;
      (pOVar16->fields).woId = iVar15;
      (this->fields).outputSignalTransmitter = pOVar16;
      if (bVar10) {
        uVar11 = (uint)((ulonglong)&(this->fields).outputSignalTransmitter >> 0xc);
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
      bVar17 = UseLever_get_IsActivated(this,(MethodInfo *)0x0);
      (this->fields).localIsDown = bVar17;
      return;
    }
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void InitializeInventory() */

void Assembly-CSharp.dll::UseLever::UseLever_InitializeInventory(UseLever *this,MethodInfo *method)

{
  MVLogicObject::MVLogicObject_InitializeInventory((MVLogicObject *)this,(MethodInfo *)0x0);
  pUVar1 = (this->fields).useLeverObject;
  if (((pUVar1 == (UseLeverObject *)0x0) ||
      (this_00 = (pUVar1->fields).editCollider, this_00 == (Collider *)0x0)) ||
     (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this_00,(MethodInfo *)0x0), obj == (GameObject *)0x0)) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                  ,0,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (GameObject *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pvVar3 = (obj->fields)._.m_CachedPtr;
  if (pvVar3 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar3,0);
  return;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::UseLever::UseLever_OnDataUpdate(UseLever *this,MethodInfo *method)

{
  pUVar1 = (this->fields).useLeverObject;
  if (((pUVar1 == (UseLeverObject *)0x0) ||
      (pUVar2 = (pUVar1->fields).useInteractor, pUVar2 == (UseInteractor *)0x0)) ||
     (this_00 = (pUVar2->fields).useInteractorVisuals, this_00 == (UseInteractorVisualization *)0x0)
     ) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  UseInteractorVisualization::UseInteractorVisualization_UpdateData
            (this_00,(this->fields)._._._.data,(pUVar2->fields).woOwnerID,(MethodInfo *)0x0);
  woID = (this->fields)._._._.id;
  worldObjectManager = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__,
                  worldObjectManager,0);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  resetNodes = (HashSet_1_System_Int32_ *)
               FUN_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  FUN_?(resetNodes,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
  MVWorldObject.dll::LogicObjectManager::LogicObjectManager_ResetNode
            (woID,resetNodes,(IWorldObjectManager *)worldObjectManager,(MethodInfo *)0x0);
  if (resetNodes != (HashSet_1_System_Int32_ *)0x0) {
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnEditModeChange(EditModeChangeArgs) */

void Assembly-CSharp.dll::UseLever::UseLever_OnEditModeChange
               (UseLever *this,EditModeChangeArgs arg,MethodInfo *method)

{
  pUVar1 = (this->fields).useLeverObject;
  if ((pUVar1 != (UseLeverObject *)0x0) &&
     (pCVar2 = (pUVar1->fields).editCollider, pCVar2 != (Collider *)0x0)) {
    UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
              (pCVar2,1,(MethodInfo *)0x0);
    pUVar1 = (this->fields).useLeverObject;
    if ((pUVar1 != (UseLeverObject *)0x0) &&
       (pCVar2 = (pUVar1->fields).leverCollider, pCVar2 != (Collider *)0x0)) {
      UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
                (pCVar2,0,(MethodInfo *)0x0);
      if (arg.playInEditor == 0) {
        return;
      }
      pUVar1 = (this->fields).useLeverObject;
      if ((pUVar1 != (UseLeverObject *)0x0) &&
         (pCVar2 = (pUVar1->fields).editCollider, pCVar2 != (Collider *)0x0)) {
        UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
                  (pCVar2,0,(MethodInfo *)0x0);
        pUVar1 = (this->fields).useLeverObject;
        if ((pUVar1 != (UseLeverObject *)0x0) &&
           (pCVar2 = (pUVar1->fields).leverCollider, pCVar2 != (Collider *)0x0)) {
          UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
                    (pCVar2,1,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnIsFiringChanged(Boolean) */

void Assembly-CSharp.dll::UseLever::UseLever_OnIsFiringChanged
               (UseLever *this,bool isFiring,MethodInfo *method)

{
  UseLever_set_IsActivated(this,isFiring,(MethodInfo *)0x0);
  (this->fields).requestSend = 0;
  (this->fields).localIsDown = isFiring;
  return;
}


/* Void OnUpdate() */

void Assembly-CSharp.dll::UseLever::UseLever_OnUpdate(UseLever *this,MethodInfo *method)

{
  pUVar1 = (this->fields).useLeverObject;
  if ((this->fields).localIsDown == 0) {
    if ((pUVar1 != (UseLeverObject *)0x0) &&
       (pTVar2 = (pUVar1->fields).plateButtonTransform, pTVar2 != (Transform *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_3 = 0;
      fStack_4 = 0.0;
      pvVar5 = (pTVar2->fields)._._.m_CachedPtr;
      if (pvVar5 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pcVar6 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
        uVar7 = func_?(&UNK_?);
        FUN_?(uVar7,0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pcRam_? = pcVar6;
      (*pcRam_?)(pvVar5);
      if (0.0 <= fStack_4) {
        return;
      }
      pUVar1 = (this->fields).useLeverObject;
      if ((pUVar1 != (UseLeverObject *)0x0) &&
         (pTVar2 = (pUVar1->fields).plateButtonTransform, pTVar2 != (Transform *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if ((pTVar2->fields)._._.m_CachedPtr == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pcVar6 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
          uVar7 = func_?(&UNK_?);
          FUN_?(uVar7,0);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pcRam_? = pcVar6;
        (*pcRam_?)();
        fVar8 = (this->fields).speed;
        fStack_4 = 0.0;
        fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_smoothDeltaTime
                          ((MethodInfo *)0x0);
        pUVar1 = (this->fields).useLeverObject;
        fVar9 = fVar9 * fVar8;
        if (_UNK_? <= fVar9) {
          fVar9 = _UNK_?;
        }
        if ((pUVar1 == (UseLeverObject *)0x0) ||
           (pTVar2 = (pUVar1->fields).plateButtonTransform, pTVar2 == (Transform *)0x0)) {
          FUN_?();
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uStack_3 = 0;
        fStack_4 = fVar9 + 0.0;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar5 = (pTVar2->fields)._._.m_CachedPtr;
        if (pvVar5 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pcVar6 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
          uVar7 = func_?(&UNK_?);
          FUN_?(uVar7,0);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
code_?:
        pcRam_? = pcVar6;
        (*pcRam_?)(pvVar5,&uStack_3);
        return;
      }
    }
  }
  else if ((pUVar1 != (UseLeverObject *)0x0) &&
          (pTVar2 = (pUVar1->fields).plateButtonTransform, pTVar2 != (Transform *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_3 = 0;
    fStack_4 = 0.0;
    pvVar5 = (pTVar2->fields)._._.m_CachedPtr;
    if (pvVar5 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pcVar6 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
      uVar7 = func_?(&UNK_?);
      FUN_?(uVar7,0);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pcRam_? = pcVar6;
    (*pcRam_?)(pvVar5);
    pfVar10 = &(this->fields).minY;
    if (fStack_4 < *pfVar10 || fStack_4 == *pfVar10) {
      return;
    }
    pUVar1 = (this->fields).useLeverObject;
    if ((pUVar1 != (UseLeverObject *)0x0) &&
       (pTVar2 = (pUVar1->fields).plateButtonTransform, pTVar2 != (Transform *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar5 = (pTVar2->fields)._._.m_CachedPtr;
      if (pvVar5 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pcVar6 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
        uVar7 = func_?(&UNK_?);
        FUN_?(uVar7,0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pcRam_? = pcVar6;
      (*pcRam_?)(pvVar5);
      fVar8 = (this->fields).speed;
      fStack_4 = 0.0;
      pcVar6 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
        uVar7 = func_?(&UNK_?);
        FUN_?(uVar7,0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pcRam_? = pcVar6;
      fVar9 = (float)(*pcRam_?)();
      pUVar1 = (this->fields).useLeverObject;
      fVar9 = fVar9 * fVar8;
      fVar8 = 0.0 - (this->fields).minY;
      if (fVar8 <= fVar9) {
        fVar9 = fVar8;
      }
      if ((pUVar1 == (UseLeverObject *)0x0) ||
         (pTVar2 = (pUVar1->fields).plateButtonTransform, pTVar2 == (Transform *)0x0)) {
        FUN_?();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uStack_3 = 0;
      fStack_4 = 0.0 - fVar9;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar5 = (pTVar2->fields)._._.m_CachedPtr;
      if (pvVar5 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pcVar6 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
        uVar7 = func_?(&UNK_?);
        FUN_?(uVar7,0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      goto code_?;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::UseLever::UseLever_Reset(UseLever *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_beginActivated);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._._._.data;
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (this_00,(Object *)StringLiteral_beginActivated,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pOVar1 != (Object *)0x0) {
      if ((pOVar1->klass->_0).element_class == *(Il2CppClass **)(lRam_? + 0x40)) {
        UseLever_set_IsActivated(this,*(bool *)&pOVar1[1].klass,(MethodInfo *)0x0);
        (this->fields).requestSend = 0;
        bVar2 = UseLever_get_IsActivated(this,(MethodInfo *)0x0);
        (this->fields).localIsDown = bVar2;
        return;
      }
      FUN_?(pOVar1,lRam_?);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetupTierInventory() */

void Assembly-CSharp.dll::UseLever::UseLever_SetupTierInventory(UseLever *this,MethodInfo *method)

{
  pUVar1 = (this->fields).useLeverObject;
  if (((pUVar1 != (UseLeverObject *)0x0) &&
      (this_00 = (pUVar1->fields).editCollider, this_00 != (Collider *)0x0)) &&
     (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this_00,(MethodInfo *)0x0), pGVar2 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar2,0,(MethodInfo *)0x0);
    (*(this->klass->vtable).HideConnectors.methodPtr)
              (this,(this->klass->vtable).HideConnectors.method);
    pGVar2 = (this->fields)._.lodGameObject;
    if (pGVar2 != (GameObject *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                      ,1,0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pGVar2 == (GameObject *)0x0) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pvVar4 = (pGVar2->fields)._.m_CachedPtr;
      if (pvVar4 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar2,(MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcVar3 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
        uVar5 = func_?(&UNK_?);
        FUN_?(uVar5,0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcRam_? = pcVar3;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar4,1);
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SignalCallback(Boolean, Boolean, LogicObjectManager) */

void Assembly-CSharp.dll::UseLever::UseLever_SignalCallback
               (UseLever *this,bool b,bool wasHot,LogicObjectManager *logicObjectManager,
               MethodInfo *method)

{
  pOVar1 = (this->fields).outputSignalTransmitter;
  auStack_2._8_8_ = &UNK_?;
  bVar3 = UseLever_get_IsActivated(this,(MethodInfo *)0x0);
  if (pOVar1 == (OutputSignalTransmitter *)0x0) {
    auStack_2._8_8_ = &UNK_?;
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IInputSignalReceiver);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ILogicWorldObject);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar5 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (((pMVar5 == (MVWorldObjectClientManager *)0x0) ||
      (pMVar6 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                           (pMVar5,(pOVar1->fields).woId,(MethodInfo *)0x0),
      pMVar6 == (MVWorldObjectClient *)0x0)) ||
     (auStack_2._0_8_ = (pMVar6->fields)._.outputLinkRefs,
     (List_1_MV_WorldObject_Link_ *)auStack_2._0_8_ == (List_1_MV_WorldObject_Link_ *)0x0)) {
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (iRam_? != 0) {
    uVar7 = (uint)((ulonglong)&uStack_8 >> 0xc);
    puVar9 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar10 = *puVar9;
      LOCK();
      uVar11 = *puVar9;
      if (uVar10 == uVar11) {
        *puVar9 = uVar10 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (uVar10 != uVar11);
  }
  puStack_12 = (undefined1 *)
               ((ulonglong)
                (uint)(((List_1_MV_WorldObject_Link_ *)auStack_2._0_8_)->fields)._version << 0x20);
  uStack_13 = 0;
  auStack_2._8_8_ = puStack_12;
  pOStack_14 = (Object *)0x0;
  uStack_8 = 0;
  puStack_12 = auStack_2;
  while( true ) {
    bVar15 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
             List_1_T_Enumerator_System_Object__MoveNext
                       ((List_1_T_Enumerator_System_Object_ *)auStack_2,
                        MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__MoveNext__
                       );
    pOVar16 = pOStack_14;
    if (bVar15 == 0) {
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar17 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (pMVar17 == (MVGameControllerBase *)0x0) goto code_?;
    pMVar18 = (pMVar17->fields).game;
    if (pMVar18 == (MVNetworkGame *)0x0) break;
    pMVar5 = (MVWorldObjectClientManager *)0x0;
    if ((pMVar18->fields).worldNetwork != (WorldNetwork *)0x0) {
      pMVar5 = (MVWorldObjectClientManager *)
                (((pMVar18->fields).worldNetwork)->fields)._.worldObjectClientManager;
    }
    if (pOVar16 == (Object *)0x0) {
code_?:
      FUN_?();
      break;
    }
    if (pMVar5 == (MVWorldObjectClientManager *)0x0) {
code_?:
      FUN_?();
      goto code_?;
    }
    pMVar6 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                        (pMVar5,*(int32_t *)&pOVar16[1].monitor,(MethodInfo *)0x0);
    pIVar19 = TypeInfo__ILogicWorldObject;
    if (pMVar6 == (MVWorldObjectClient *)0x0) {
      FUN_?();
code_?:
      FUN_?();
code_?:
      uVar20 = FUN_?(pMVar6,unaff_RSI);
code_?:
      FUN_?(uVar20,pIVar19);
      goto code_?;
    }
    lVar21 = FUN_?(pMVar6,TypeInfo__ILogicWorldObject);
    unaff_RSI = TypeInfo__ILogicWorldObject;
    uVar20 = extraout_XMM0_Da;
    if (lVar21 == 0) goto code_?;
    pIVar19 = (ILogicWorldObject__Class *)FUN_?(pMVar6,TypeInfo__ILogicWorldObject);
    if (pIVar19 == (ILogicWorldObject__Class *)0x0) goto code_?;
    pIVar22 = (pIVar19->_0).image;
    uVar23 = 0;
    uVar24 = *(ushort *)((longlong)&pIVar22[4].nameNoExt + 6);
    if (uVar24 != 0) {
      uVar25 = uVar23;
      do {
        if (*(ILogicWorldObject__Class **)
             (*(longlong *)&pIVar22[2].customAttributeCount + (ulonglong)uVar25 * 0x10) ==
            TypeInfo__ILogicWorldObject) {
          puVar26 = &pIVar22[4].typeCount +
                    (longlong)
                    *(int *)(*(longlong *)&pIVar22[2].customAttributeCount + 8 +
                            (ulonglong)uVar25 * 0x10) * 4;
          goto code_?;
        }
        uVar25 = uVar25 + 1;
      } while (uVar25 < uVar24);
    }
    puVar26 = (uint32_t *)FUN_?(pIVar19,TypeInfo__ILogicWorldObject,0);
code_?:
    plVar27 = (longlong *)(**(code **)puVar26)(pIVar19,*(undefined8 *)(puVar26 + 2));
    pMVar6 = (MVWorldObjectClient *)0x0;
    if (plVar27 == (longlong *)0x0) goto code_?;
    lVar21 = *plVar27;
    if (*(ushort *)(lVar21 + 0x12e) != 0) {
      do {
        if (*(IInputSignalReceiver__Class **)
             (*(longlong *)(lVar21 + 0xb0) + (ulonglong)uVar23 * 0x10) ==
            TypeInfo__IInputSignalReceiver) {
          puVar28 = (undefined8 *)
                    ((longlong)*(int *)(*(longlong *)(lVar21 + 0xb0) + 8 + (ulonglong)uVar23 * 0x10)
                     * 0x10 + 0x138 + lVar21);
          goto code_?;
        }
        uVar23 = uVar23 + 1;
      } while (uVar23 < *(ushort *)(lVar21 + 0x12e));
    }
    puVar28 = (undefined8 *)FUN_?(plVar27,TypeInfo__IInputSignalReceiver,0);
code_?:
    (*(code *)*puVar28)(plVar27,bVar3);
    *(bool *)((longlong)&pOVar16[1].monitor + 4) = bVar3;
  }
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UnSetupTierInventory() */

void Assembly-CSharp.dll::UseLever::UseLever_UnSetupTierInventory(UseLever *this,MethodInfo *method)

{
  pUVar1 = (this->fields).useLeverObject;
  if ((pUVar1 != (UseLeverObject *)0x0) &&
     (this_00 = (pUVar1->fields).editCollider, this_00 != (Collider *)0x0)) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this_00,(MethodInfo *)0x0);
    if (this_01 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_01,1,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(this->klass->vtable).ShowConnectors.methodPtr)
                (this,(this->klass->vtable).ShowConnectors.method);
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Boolean Use(Int32) */

bool Assembly-CSharp.dll::UseLever::UseLever_Use(UseLever *this,int32_t userWoID,MethodInfo *method)

{
  if ((this->fields).requestSend != 0) {
    return 1;
  }
  (this->fields).requestSend = 1;
  this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  woID = (this->fields)._._._.id;
  bVar1 = UseLever_get_IsActivated(this,(MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame_OperationRequests *)0x0) {
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_LogicActivateRequest
              (this_00,woID,bVar1 ^ 1,(MethodInfo *)0x0);
    bVar1 = UseLever_get_IsActivated(this,(MethodInfo *)0x0);
    (this->fields).localIsDown = bVar1 ^ 1;
    return 1;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* UseLever(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::UseLever::UseLever__ctor
               (UseLever *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

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
    FUN_?(&TypeInfo__GameRankRequirement);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__LevelBasedUseRequirement);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__WorldObjectInteractionSystem__UseSystem__RewardedAdRequirement);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__StarRequirement);
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
    FUN_?(&TypeInfo__UseLeverObject);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__UseLever__Use_int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = cRam_? == '\0';
  (this->fields).minY = -0.25;
  (this->fields).speed = 1.8;
  if (bVar1) {
    FUN_?(&TypeInfo__PrefabPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar2 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar2 == (PrefabPool *)0x0) {
code_?:
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  MVLogicObject::MVLogicObject__ctor
            ((MVLogicObject *)this,data,(ObjectPrefab *)(pPVar2->fields).useLeverPrefab,worldObjects
             ,(MethodInfo *)0x0);
  pUVar4 = (UseLeverObject *)(this->fields)._._.component;
  piVar5 = &(this->fields)._._.interactionFlags;
  *piVar5 = *piVar5 | 0x210718000;
  if (pUVar4 == (UseLeverObject *)0x0) {
    (this->fields).useLeverObject = (UseLeverObject *)0x0;
  }
  else {
    bVar6 = (TypeInfo__UseLeverObject->_1).naturalAligment;
    if (((((ObjectPrefab__Class *)pUVar4->klass)->_1).naturalAligment < bVar6) ||
       ((((ObjectPrefab__Class *)pUVar4->klass)->_1).typeHierarchy[(ulonglong)bVar6 - 1] !=
        (Il2CppClass *)TypeInfo__UseLeverObject)) {
      FUN_?(pUVar4);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (this->fields).useLeverObject = pUVar4;
    bVar6 = (TypeInfo__UseLeverObject->_1).naturalAligment;
    if (((((ObjectPrefab__Class *)pUVar4->klass)->_1).naturalAligment < bVar6) ||
       ((((ObjectPrefab__Class *)pUVar4->klass)->_1).typeHierarchy[(ulonglong)bVar6 - 1] !=
        (Il2CppClass *)TypeInfo__UseLeverObject)) {
      FUN_?(pUVar4);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar7 = (uint)((ulonglong)&(this->fields).useLeverObject >> 0xc);
    uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
    do {
      uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
      puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar9 == *puVar10;
      if (bVar1) {
        *puVar10 = uVar9 | 1L << (ulonglong)(uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pUVar4 = (this->fields).useLeverObject;
  if (pUVar4 == (UseLeverObject *)0x0) goto code_?;
  pGVar11 = (pUVar4->fields).useInteractionRotator;
  triggerCollider = (pUVar4->fields).leverCollider;
  useFunction = (Func_2_Int32_Boolean_ *)FUN_?(TypeInfo__System__Func<int,_bool>);
  FUN_?(useFunction,this,MethodInfo__UseLever__Use_int_);
  pUVar12 = (UseInteractor *)FUN_?(TypeInfo__UseInteractor);
  UseInteractor::UseInteractor__ctor
            (pUVar12,(MVWorldObjectClient *)this,pGVar11,0,triggerCollider,useFunction,
             (Func_3_Int32_MVInteractableBase_Boolean_ *)0x0,_UNK_?,1,0,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (pUVar4->fields).useInteractor = pUVar12;
  if (bVar1) {
    uVar7 = (uint)((ulonglong)&(pUVar4->fields).useInteractor >> 0xc);
    uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
    do {
      uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
      puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar9 == *puVar10;
      if (bVar1) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pUVar4 = (this->fields).useLeverObject;
  if (pUVar4 == (UseLeverObject *)0x0) goto code_?;
  pTVar13 = (pUVar4->fields).triggerBoxEvents;
  pUVar12 = (pUVar4->fields).useInteractor;
  pUVar14 = (UnityAction_2_System_Object_System_Object_ *)
            FUN_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            (pUVar14,(Object *)pUVar12,
             MethodInfo__UseInteractor__TriggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
             ,(MethodInfo *)0x0);
  if (pTVar13 == (TriggerBoxEvents *)0x0) goto code_?;
  TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
            (pTVar13,(EventHandler_1_TriggerEventArgs_ *)pUVar14,(MethodInfo *)0x0);
  pUVar4 = (this->fields).useLeverObject;
  if (pUVar4 == (UseLeverObject *)0x0) goto code_?;
  pTVar13 = (pUVar4->fields).triggerBoxEvents;
  pUVar12 = (pUVar4->fields).useInteractor;
  pUVar14 = (UnityAction_2_System_Object_System_Object_ *)
            FUN_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            (pUVar14,(Object *)pUVar12,
             MethodInfo__UseInteractor__TriggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
             ,(MethodInfo *)0x0);
  if (pTVar13 == (TriggerBoxEvents *)0x0) goto code_?;
  TriggerBoxEvents::TriggerBoxEvents_add_TriggerExit
            (pTVar13,(EventHandler_1_TriggerEventArgs_ *)pUVar14,(MethodInfo *)0x0);
  pUVar4 = (this->fields).useLeverObject;
  if (pUVar4 == (UseLeverObject *)0x0) goto code_?;
  pGVar11 = (pUVar4->fields).useInteractionRotator;
  pUVar15 = (UseRequirement *)FUN_?(TypeInfo__GameCoinLogic);
  uVar16 = _UNK_?;
  *(undefined4 *)((longlong)&pUVar15[1].klass + 4) = 1;
  *(undefined1 *)&pUVar15[3].klass = 1;
  bVar1 = iRam_? != 0;
  pUVar15[1].monitor = (MonitorData *)CONCAT44(uVar16,_UNK_?);
  *(undefined4 *)&pUVar15[1].fields = 0;
  *(GameObject **)&pUVar15[2].fields = pGVar11;
  if (bVar1) {
    uVar7 = (uint)((ulonglong)&pUVar15[2].fields >> 0xc);
    uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
    do {
      uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
      puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar9 == *puVar10;
      if (bVar1) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pUVar4 = (this->fields).useLeverObject;
  if ((pUVar4 == (UseLeverObject *)0x0) ||
     (pUVar12 = (pUVar4->fields).useInteractor, pUVar12 == (UseInteractor *)0x0))
  goto code_?;
  UseInteractor::UseInteractor_AddRequirement(pUVar12,pUVar15,(MethodInfo *)0x0);
  pUVar4 = (this->fields).useLeverObject;
  if (pUVar4 == (UseLeverObject *)0x0) goto code_?;
  pGVar11 = (pUVar4->fields).useInteractionRotator;
  pUVar15 = (UseRequirement *)FUN_?(TypeInfo__LevelBasedUseRequirement);
  bVar1 = iRam_? != 0;
  *(undefined8 *)&pUVar15[1].fields = 0;
  *(undefined4 *)&pUVar15[2].klass = 0;
  *(undefined1 *)((longlong)&pUVar15[1].klass + 4) = 1;
  pUVar15[2].monitor = (MonitorData *)pGVar11;
  if (bVar1) {
    uVar7 = (uint)((ulonglong)&pUVar15[2].monitor >> 0xc);
    uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
    do {
      uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
      puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar9 == *puVar10;
      if (bVar1) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pUVar4 = (this->fields).useLeverObject;
  if ((pUVar4 == (UseLeverObject *)0x0) ||
     (pUVar12 = (pUVar4->fields).useInteractor, pUVar12 == (UseInteractor *)0x0))
  goto code_?;
  UseInteractor::UseInteractor_AddRequirement(pUVar12,pUVar15,(MethodInfo *)0x0);
  pUVar4 = (this->fields).useLeverObject;
  if (pUVar4 == (UseLeverObject *)0x0) goto code_?;
  pGVar11 = (pUVar4->fields).useInteractionRotator;
  pUVar15 = (UseRequirement *)FUN_?(TypeInfo__StarRequirement);
  bVar1 = iRam_? != 0;
  *(undefined8 *)((longlong)&pUVar15[1].klass + 4) = 0;
  *(undefined4 *)((longlong)&pUVar15[1].monitor + 4) = 0;
  pUVar15[2].fields._IsInputBlocking_k__BackingField = 1;
  pUVar15[2].monitor = (MonitorData *)pGVar11;
  if (bVar1) {
    uVar7 = (uint)((ulonglong)&pUVar15[2].monitor >> 0xc);
    uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
    do {
      uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
      puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar9 == *puVar10;
      if (bVar1) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pUVar4 = (this->fields).useLeverObject;
  if ((pUVar4 == (UseLeverObject *)0x0) ||
     (pUVar12 = (pUVar4->fields).useInteractor, pUVar12 == (UseInteractor *)0x0))
  goto code_?;
  UseInteractor::UseInteractor_AddRequirement(pUVar12,pUVar15,(MethodInfo *)0x0);
  pUVar4 = (this->fields).useLeverObject;
  if (pUVar4 == (UseLeverObject *)0x0) goto code_?;
  pGVar11 = (pUVar4->fields).useInteractionRotator;
  this_01 = (GameRankRequirement *)FUN_?(TypeInfo__GameRankRequirement);
  GameRankRequirement::GameRankRequirement__ctor
            (this_01,pGVar11,(MVWorldObjectClient *)this,1,(MethodInfo *)0x0);
  pUVar4 = (this->fields).useLeverObject;
  if ((pUVar4 == (UseLeverObject *)0x0) ||
     (pUVar12 = (pUVar4->fields).useInteractor, pUVar12 == (UseInteractor *)0x0))
  goto code_?;
  UseInteractor::UseInteractor_AddRequirement(pUVar12,(UseRequirement *)this_01,(MethodInfo *)0x0);
  pUVar4 = (this->fields).useLeverObject;
  if (pUVar4 == (UseLeverObject *)0x0) goto code_?;
  pGVar11 = (pUVar4->fields).useInteractionRotator;
  this_02 = (RewardedAdRequirement *)
            FUN_?(TypeInfo__WorldObjectInteractionSystem__UseSystem__RewardedAdRequirement);
  WorldObjectInteractionSystem::UseSystem::RewardedAdRequirement::RewardedAdRequirement__ctor
            (this_02,pGVar11,(MethodInfo *)0x0);
  pUVar4 = (this->fields).useLeverObject;
  if ((pUVar4 == (UseLeverObject *)0x0) ||
     (pUVar12 = (pUVar4->fields).useInteractor, pUVar12 == (UseInteractor *)0x0))
  goto code_?;
  this_00 = (pUVar12->fields).useInteractorVisuals;
  if (this_00 == (UseInteractorVisualization *)0x0) {
code_?:
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UseRequirement>__Add_UseRequirement_
                  ,this_02,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar17 = MethodInfo__System__Collections__Generic__List<UseRequirement>__Add_UseRequirement_;
  pLVar18 = (this_00->fields).useRequirements;
  if (pLVar18 == (List_1_UseRequirement_ *)0x0) goto code_?;
  piVar19 = &(pLVar18->fields)._version;
  *piVar19 = *piVar19 + 1;
  pUVar20 = (pLVar18->fields)._items;
  if (pUVar20 == (UseRequirement__Array *)0x0) goto code_?;
  uVar7 = (pLVar18->fields)._size;
  if (uVar7 < (uint)pUVar20->max_length) {
    (pLVar18->fields)._size = uVar7 + 1;
    FUN_?(pUVar20,(longlong)(int)uVar7,this_02);
  }
  else {
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
    List_1_System_Object__AddWithResize
              ((List_1_System_Object_ *)pLVar18,(Object *)this_02,
               pMVar17->klass->rgctx_data[0xe].method);
  }
  if ((this_00->fields).hasInputBlockingRequirement == 0) {
    if (this_02 == (RewardedAdRequirement *)0x0) goto code_?;
    cVar21 = (*(this_02->klass->vtable).get_IsInputBlocking.methodPtr)
                       (this_02,(this_02->klass->vtable).get_IsInputBlocking.method);
  }
  else {
    cVar21 = '\x01';
  }
  (this_00->fields).hasInputBlockingRequirement = cVar21 != '\0';
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
  pLVar18 = (this_00->fields).useRequirements;
  if (pLVar18 == (List_1_UseRequirement_ *)0x0) {
code_?:
    FUN_?();
  }
  else {
    if (iRam_? != 0) {
      uVar7 = (uint)((ulonglong)&stack0xffffffffffffffb8 >> 0xc);
      uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
      do {
        uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
        puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
        LOCK();
        bVar1 = uVar9 == *puVar10;
        if (bVar1) {
          *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
    pLStack_22 = pLVar18;
    bVar23 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
             List_1_T_Enumerator_System_Object__MoveNext
                       ((List_1_T_Enumerator_System_Object_ *)&pLStack_22,
                        MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__MoveNext__
                       );
    if (bVar23 == 0) {
      if ((this_00->fields).active == 1) {
        (this_00->fields).dist = 0.01;
      }
      bVar1 = (this_00->fields).active == 0;
      if (!bVar1) {
        (this_00->fields).spacing = (float)(int)(0x168 / (longlong)(this_00->fields).active);
        bVar1 = (this_00->fields).active == 0;
      }
      (this_00->fields)._HasUseRequirements_k__BackingField = !bVar1;
      pLVar18 = (this_00->fields).useRequirements;
      if (pLVar18 != (List_1_UseRequirement_ *)0x0) {
        if (iRam_? != 0) {
          uVar7 = (uint)((ulonglong)&stack0xffffffffffffffb8 >> 0xc);
          uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
          do {
            uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
            puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
            LOCK();
            bVar1 = uVar9 == *puVar10;
            if (bVar1) {
              *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
            }
            UNLOCK();
          } while (!bVar1);
        }
        pLStack_22 = pLVar18;
        bVar23 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                 List_1_T_Enumerator_System_Object__MoveNext
                           ((List_1_T_Enumerator_System_Object_ *)&pLStack_22,
                            MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__MoveNext__
                           );
        if (bVar23 == 0) {
          if ((this_00->fields)._HasUseRequirements_k__BackingField != 0) {
            if ((this_00->fields).cullingSubscriberBase == (CullingSubscriberBase *)0x0) {
              UseInteractorVisualization::UseInteractorVisualization_SetupCulling
                        (this_00,(MethodInfo *)0x0);
              goto code_?;
            }
            if ((this_00->fields)._HasUseRequirements_k__BackingField != 0)
            goto code_?;
          }
          if ((this_00->fields).cullingSubscriberBase != (CullingSubscriberBase *)0x0) {
            UseInteractorVisualization::UseInteractorVisualization_RemoveCulling
                      (this_00,(MethodInfo *)0x0);
          }
code_?:
          bVar23 = (this_00->fields)._HasUseRequirements_k__BackingField;
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
          (*pcRam_?)(pvVar24,bVar23);
          return;
        }
        goto code_?;
      }
      goto code_?;
    }
  }
  FUN_?();
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Boolean get_BeginActivated() */

bool Assembly-CSharp.dll::UseLever::UseLever_get_BeginActivated(UseLever *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_beginActivated);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._._._.data;
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (this_00,(Object *)StringLiteral_beginActivated,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pOVar1 != (Object *)0x0) {
      if ((pOVar1->klass->_0).element_class == *(Il2CppClass **)(lRam_? + 0x40)) {
        return *(bool *)&pOVar1[1].klass;
      }
      FUN_?(pOVar1,lRam_?);
      pcVar2 = (code *)swi(3);
      bVar3 = (*pcVar2)();
      return bVar3;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* MVWorldObjectDocumentationType get_DocumentationType() */

MVWorldObjectDocumentationType__Enum
Assembly-CSharp.dll::UseLever::UseLever_get_DocumentationType(UseLever *this,MethodInfo *method)

{
  return MVWorldObjectDocumentationType__Enum_Lever;
}


/* Boolean get_IsActivated() */

bool Assembly-CSharp.dll::UseLever::UseLever_get_IsActivated(UseLever *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_a);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  hashtable = (Dictionary_2_System_Object_System_Object_ *)
              (*(this->klass->vtable).get_RunTimeData.methodPtr)
                        (this,(this->klass->vtable).get_RunTimeData.method);
  if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar1 = Extensions::Extensions_GetObscuredType(hashtable,StringLiteral_a,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (pOVar1 != (Object *)0x0) {
    if ((pOVar1->klass->_0).element_class ==
        (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_0).element_class) {
      apOStack_2[0] = pOVar1[1].klass;
      apOStack_2[1]._0_4_ = *(undefined4 *)&pOVar1[1].monitor;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0
         ) {
        FUN_?();
      }
      bVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
              ObscuredBool_InternalDecrypt((ObscuredBool *)apOStack_2,(MethodInfo *)0x0);
      return bVar3;
    }
    FUN_?(pOVar1,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    pcVar4 = (code *)swi(3);
    bVar3 = (*pcVar4)();
    return bVar3;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  bVar3 = (*pcVar4)();
  return bVar3;
}


/* Vector3 get_OutputConnectorOffset() */

Vector3 * Assembly-CSharp.dll::UseLever::UseLever_get_OutputConnectorOffset
                    (Vector3 *__return_storage_ptr__,UseLever *this,MethodInfo *method)

{
  __return_storage_ptr__->x = 1.2;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  return __return_storage_ptr__;
}


/* Void set_IsActivated(Boolean) */

void Assembly-CSharp.dll::UseLever::UseLever_set_IsActivated
               (UseLever *this,bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  void_MethodInfo__Extensions__SetObscuredType<CodeStage::AntiCheat::ObscuredTypes::ObscuredBool>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_a);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = (*(this->klass->vtable).get_RunTimeData.methodPtr)(this);
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0) {
    FUN_?();
  }
  uVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
          ObscuredBool_Encrypt(value,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
  }
  lStack_3 = (ulonglong)uVar2 << 0x20;
  uStack_4 = 0x10000;
  lStack_3 = CONCAT71(lStack_3._1_7_,
                       TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->static_fields->
                       cryptoKey);
  bVar5 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector::
          ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
  if (bVar5 != 0) {
    uStack_4 = CONCAT22(1,CONCAT11(1,value));
  }
  if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
    FUN_?();
  }
  uStack_6 = lStack_3;
  uStack_7 = uStack_4;
  FUN_?(uVar1,StringLiteral_a,&uStack_6);
  return;
}

