
/* Void Destroy() */

void Assembly-CSharp.dll::MVAdvancedGhost::MVAdvancedGhost_Destroy
               (MVAdvancedGhost *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 == (MVGameControllerBase *)0x0) ||
      (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) ||
     (this_00 = (pMVar2->fields)._GameStateController_k__BackingField,
     this_00 == (MVGameModeChangeNotifier *)0x0)) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  MVGameModeChangeNotifier::MVGameModeChangeNotifier_RemoveObject
            (this_00,(IGameStateControllerSubscriber *)this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar4 = (this->fields)._._._.gameObject;
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
  if (pGVar4 != (GameObject *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pGVar4->fields)._.m_CachedPtr != (void *)0x0) {
      pGVar4 = (this->fields)._._._.gameObject;
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
                ((Object_1 *)pGVar4,0.0,(MethodInfo *)0x0);
    }
  }
  if ((this->fields)._._._.initializedFromInventory != 0) {
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
    pRVar5 = (pMVar2->fields).runtimeVariableNetworkManager;
    item = (this->fields)._._._._.id;
    if (pRVar5 != (RuntimeVariableNetworkManager *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this_01 = (HashSet_1_System_Int32Enum_ *)(pRVar5->fields).runtimeDataVariables;
      if (this_01 != (HashSet_1_System_Int32Enum_ *)0x0) {
        bVar6 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
                HashSet_1_System_Int32Enum__Contains
                          (this_01,item,
                           MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
        if (bVar6 != 0) {
          pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar2 == (MVNetworkGame *)0x0) ||
             (pRVar5 = (pMVar2->fields).runtimeVariableNetworkManager,
             pRVar5 == (RuntimeVariableNetworkManager *)0x0)) goto DAT_?;
          RuntimeVariableNetworkManager::RuntimeVariableNetworkManager_RemoveRuntimeDataVariables
                    (pRVar5,(this->fields)._._._._.id,(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
DAT_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void GameStateChanged(UpdateCondition) */

void Assembly-CSharp.dll::MVAdvancedGhost::MVAdvancedGhost_GameStateChanged
               (MVAdvancedGhost *this,UpdateCondition__Enum condition,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Todo__Fix_this_hack__This_is_sim);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).advancedGhostIcon;
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
  if (pAVar1 != (AdvancedGhostIcon *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pAVar1->fields)._._._._.m_CachedPtr != (void *)0x0) {
      pAVar1 = (this->fields).advancedGhostIcon;
      if (pAVar1 == (AdvancedGhostIcon *)0x0) goto code_?;
      (pAVar1->fields).wantsVisible = condition == UpdateCondition__Enum_EDITOR;
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pAVar1,(MethodInfo *)0x0);
      if ((pAVar1->fields).wantsVisible == 0) {
        bVar3 = 0;
      }
      else {
        bVar3 = (pAVar1->fields).visible;
      }
      if (pGVar2 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar2,bVar3 != 0,(MethodInfo *)0x0);
    }
  }
  this_00 = (this->fields).advancedGhostBehaviour;
  if (this_00 != (AdvancedGhostBehaviour *)0x0) {
    if (condition == UpdateCondition__Enum_EDITOR) {
      (this_00->fields).wantsVisible = 0;
      AdvancedGhostBehaviour::AdvancedGhostBehaviour_SetVisible(this_00,(MethodInfo *)0x0);
      return;
    }
    AdvancedGhostBehaviour::AdvancedGhostBehaviour_SetInitialState(this_00,(MethodInfo *)0x0);
    pAVar4 = (this_00->fields).perception;
    if ((pAVar4 != (AdvancedGhostBehaviour_AdvancedGhostPerception *)0x0) &&
       (this_01 = (pAVar4->fields).syncedInterval, this_01 != (DeterministicSyncedInterval *)0x0)) {
      DeterministicSyncedInterval::DeterministicSyncedInterval_Update(this_01,(MethodInfo *)0x0);
      (this_00->fields).wantsVisible = 1;
      AdvancedGhostBehaviour::AdvancedGhostBehaviour_SetVisible(this_00,(MethodInfo *)0x0);
      pAVar5 = (this->fields).editableCubeModelWrapper;
      if (pAVar5 != (AdvancedGhostCubeModelWrapper *)0x0) {
        if ((pAVar5->fields).cubeModelIsBeingEdited == 0) {
          return;
        }
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                  ((Object *)StringLiteral_Todo__Fix_this_hack__This_is_sim,(MethodInfo *)0x0);
        pAVar5 = (this->fields).editableCubeModelWrapper;
        if (pAVar5 != (AdvancedGhostCubeModelWrapper *)0x0) {
          AdvancedGhostCubeModelWrapper::AdvancedGhostCubeModelWrapper_ExitEdit
                    (pAVar5,(MethodInfo *)0x0);
          pAVar5 = (this->fields).editableCubeModelWrapper;
          if (((pAVar5 != (AdvancedGhostCubeModelWrapper *)0x0) &&
              (pMVar6 = (pAVar5->fields)._.cubeModelBase, pMVar6 != (MVCubeModelInstance *)0x0)) &&
             (pGVar2 = (pMVar6->fields)._._.gameObject, pGVar2 != (GameObject *)0x0)) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                            ,1,0,in_R9,unaff_RSI);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (pGVar2 == (GameObject *)0x0) {
              FUN_?();
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pvVar8 = (pGVar2->fields)._.m_CachedPtr;
            if (pvVar8 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar2,(MethodInfo *)0x0);
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pcVar7 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
              uVar9 = func_?(&UNK_?);
              FUN_?(uVar9,0);
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pcRam_? = pcVar7;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam_?)(pvVar8,1);
            return;
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Bounds GetLocalBounds(BoundsContext) */

Bounds * Assembly-CSharp.dll::MVAdvancedGhost::MVAdvancedGhost_GetLocalBounds
                   (Bounds *__return_storage_ptr__,MVAdvancedGhost *this,
                   BoundsContext__Enum boundsContext,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar2 = (pVVar1->upVector).x;
  fVar3 = (pVVar1->upVector).y;
  fVar4 = (pVVar1->upVector).z;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar5 = _UNK_?;
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar6 = (pVVar1->oneVector).x;
  fVar7 = (float)uVar6 * _UNK_?;
  fVar8 = (pVVar1->oneVector).y * _UNK_?;
  fVar9 = (pVVar1->oneVector).z * _UNK_?;
  (__return_storage_ptr__->m_Center).x = fVar2;
  (__return_storage_ptr__->m_Center).y = fVar3;
  (__return_storage_ptr__->m_Center).z = fVar4;
  (__return_storage_ptr__->m_Extents).x = fVar7 * fVar5;
  (__return_storage_ptr__->m_Extents).y = fVar8 * fVar5;
  (__return_storage_ptr__->m_Extents).z = fVar9 * fVar5;
  return __return_storage_ptr__;
}


/* Vector3 GetTargetPosition() */

Vector3 * Assembly-CSharp.dll::MVAdvancedGhost::MVAdvancedGhost_GetTargetPosition
                    (Vector3 *__return_storage_ptr__,MVAdvancedGhost *this,MethodInfo *method)

{
  this_00 = (this->fields).advancedGhostBehaviour;
  if ((this_00 == (AdvancedGhostBehaviour *)0x0) ||
     (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this_00,(MethodInfo *)0x0), obj == (Transform *)0x0)) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pVVar2 = (Vector3 *)(*pcVar1)();
    return pVVar2;
  }
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
  pvVar5 = (obj->fields)._._.m_CachedPtr;
  if (pvVar5 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    pVVar2 = (Vector3 *)(*pcVar1)();
    return pVVar2;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar6 = func_?(&UNK_?);
    FUN_?(uVar6,0);
    pcVar1 = (code *)swi(3);
    pVVar2 = (Vector3 *)(*pcVar1)();
    return pVVar2;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar5,&uStack_3);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar8 = (pVVar7->upVector).x;
  uVar9 = (pVVar7->upVector).y;
  fVar10 = (pVVar7->upVector).z;
  __return_storage_ptr__->x = (float)uStack_3 + (float)uVar8;
  __return_storage_ptr__->y = uStack_3._4_4_ + (float)uVar9;
  __return_storage_ptr__->z = fStack_4 + fVar10;
  return __return_storage_ptr__;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVAdvancedGhost::MVAdvancedGhost_Initialize
               (MVAdvancedGhost *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<float,_MVPlayer>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action<float,_MVPlayer,_MV::Common::PlayerKilledByType>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AdvancedGhostCubeModelWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__ClientSideNPCInteractable__IsDead__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Func<bool>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  AdvancedGhostMotor_MethodInfo__UnityEngine__GameObject__AddComponent<AdvancedGhostMotor>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  ClientSideNPCInteractable_MethodInfo__UnityEngine__GameObject__AddComponent<ClientSideNPCInteractable>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  AdvancedGhostBehaviour_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<AdvancedGhostBehaviour>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  ClientSideNPCInteractionHandler_MethodInfo__UnityEngine__GameObject__GetComponent<ClientSideNPCInteractionHandler>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVAdvancedGhost__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVAdvancedGhost__ReceiveDamage_float__MVPlayer__MV__Common__PlayerKilledByType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVAdvancedGhost__RecieveHealing_float__MVPlayer_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVCubeModelInstance);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_BodyCubeModel);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVBlueprintBase::MVBlueprintBase_Initialize((MVBlueprintBase *)this,(MethodInfo *)0x0);
  cubeModelBase =
       (MVCubeModelInstance *)
       MVBlueprintBase::MVBlueprintBase_GetChild
                 ((MVBlueprintBase *)this,StringLiteral_BodyCubeModel,(MethodInfo *)0x0);
  if (cubeModelBase != (MVCubeModelInstance *)0x0) {
    bVar1 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment;
    if (((cubeModelBase->klass->_1).naturalAligment < bVar1) ||
       ((MVCubeModelInstance__Class *)(cubeModelBase->klass->_1).typeHierarchy[(ulonglong)bVar1 - 1]
        != TypeInfo__MVCubeModelInstance)) {
      FUN_?(cubeModelBase);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pGVar3 = (this->fields)._._._.gameObject;
  if (pGVar3 == (GameObject *)0x0) goto code_?;
  pCVar4 = (ClientSideNPCInteractionHandler *)
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                      (pGVar3,
                       ClientSideNPCInteractionHandler_MethodInfo__UnityEngine__GameObject__GetComponent<ClientSideNPCInteractionHandler>__
                      );
  bVar5 = iRam_? != 0;
  (this->fields).interactionHandler = pCVar4;
  if (bVar5) {
    uVar6 = (uint)((ulonglong)&(this->fields).interactionHandler >> 0xc);
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
  pCVar4 = (this->fields).interactionHandler;
  if (pCVar4 == (ClientSideNPCInteractionHandler *)0x0) goto code_?;
  MVComponent::MVComponent_FindWorldObjectParent((MVComponent *)pCVar4,(MethodInfo *)0x0);
  pCVar4 = (this->fields).interactionHandler;
  if (pCVar4 == (ClientSideNPCInteractionHandler *)0x0) goto code_?;
  bVar5 = iRam_? != 0;
  (this->fields).attachmentObject = (pCVar4->fields).attachmentObjectForHealRay;
  if (bVar5) {
    uVar6 = (uint)((ulonglong)&(this->fields).attachmentObject >> 0xc);
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
  pGVar3 = (this->fields)._._._.gameObject;
  if (pGVar3 == (GameObject *)0x0) goto code_?;
  pCVar10 = (ClientSideNPCInteractable *)
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                      (pGVar3,
                       ClientSideNPCInteractable_MethodInfo__UnityEngine__GameObject__AddComponent<ClientSideNPCInteractable>__
                      );
  bVar5 = iRam_? != 0;
  (this->fields).interactable = pCVar10;
  if (bVar5) {
    uVar6 = (uint)((ulonglong)&(this->fields).interactable >> 0xc);
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
  pCVar10 = (this->fields).interactable;
  takeDamageCallback =
       (Action_3_Single_MVPlayer_MV_Common_PlayerKilledByType_ *)
       FUN_?(TypeInfo__System__Action<float,_MVPlayer,_MV::Common::PlayerKilledByType>);
  FUN_?(takeDamageCallback,this,
                MethodInfo__MVAdvancedGhost__ReceiveDamage_float__MVPlayer__MV__Common__PlayerKilledByType_
               );
  healCallback = (Action_2_Single_MVPlayer_ *)
                 FUN_?(TypeInfo__System__Action<float,_MVPlayer>);
  FUN_?(healCallback,this,MethodInfo__MVAdvancedGhost__RecieveHealing_float__MVPlayer_);
  if (pCVar10 == (ClientSideNPCInteractable *)0x0) goto code_?;
  ClientSideNPCInteractable::ClientSideNPCInteractable_Init
            (pCVar10,takeDamageCallback,healCallback,(MethodInfo *)0x0);
  pGVar3 = (this->fields)._._._.gameObject;
  if (pGVar3 == (GameObject *)0x0) goto code_?;
  advancedGhostMotor =
       (AdvancedGhostMotor *)
       UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                 (pGVar3,
                  AdvancedGhostMotor_MethodInfo__UnityEngine__GameObject__AddComponent<AdvancedGhostMotor>__
                 );
  pMVar11 = 
  AdvancedGhostBehaviour_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<AdvancedGhostBehaviour>__
  ;
  pGVar3 = (this->fields)._._._.gameObject;
  if (pGVar3 == (GameObject *)0x0) goto code_?;
  if ((
      AdvancedGhostBehaviour_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<AdvancedGhostBehaviour>__
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(
                 AdvancedGhostBehaviour_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<AdvancedGhostBehaviour>__
                 );
  }
  pAVar12 = (AdvancedGhostBehaviour *)
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentInChildren_3
                      (pGVar3,0,((pMVar11->field7_0x38).rgctx_data)->method);
  bVar5 = iRam_? != 0;
  (this->fields).advancedGhostBehaviour = pAVar12;
  if (bVar5) {
    uVar6 = (uint)((ulonglong)&(this->fields).advancedGhostBehaviour >> 0xc);
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
  pAVar12 = (this->fields).advancedGhostBehaviour;
  pCVar10 = (this->fields).interactable;
  deathCheckFunc = (Func_1_Boolean_ *)FUN_?(TypeInfo__System__Func<bool>);
  FUN_?(deathCheckFunc,pCVar10,MethodInfo__ClientSideNPCInteractable__IsDead__);
  if (pAVar12 == (AdvancedGhostBehaviour *)0x0) goto code_?;
  AdvancedGhostBehaviour::AdvancedGhostBehaviour_Init
            (pAVar12,(MVCubeModelBase *)cubeModelBase,advancedGhostMotor,deathCheckFunc,
             (this->fields)._._._._.id,(MethodInfo *)0x0);
  pAVar12 = (this->fields).advancedGhostBehaviour;
  if ((pAVar12 == (AdvancedGhostBehaviour *)0x0) ||
     (this_00 = (pAVar12->fields).GhostVisualization, this_00 == (AdvancedGhostVisualizaton *)0x0))
  goto code_?;
  transformParent =
       UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                 ((Component *)this_00,(MethodInfo *)0x0);
  this_02 = (AdvancedGhostCubeModelWrapper *)FUN_?(TypeInfo__AdvancedGhostCubeModelWrapper);
  AdvancedGhostCubeModelWrapper::AdvancedGhostCubeModelWrapper__ctor
            (this_02,cubeModelBase,transformParent,(MethodInfo *)0x0);
  bVar5 = iRam_? != 0;
  (this->fields).editableCubeModelWrapper = this_02;
  if (bVar5) {
    uVar6 = (uint)((ulonglong)&(this->fields).editableCubeModelWrapper >> 0xc);
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
  pAVar12 = (this->fields).advancedGhostBehaviour;
  if (pAVar12 == (AdvancedGhostBehaviour *)0x0) goto code_?;
  pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)pAVar12,(MethodInfo *)0x0);
  pAVar12 = (this->fields).advancedGhostBehaviour;
  if ((pAVar12 == (AdvancedGhostBehaviour *)0x0) ||
     (advancedGhostMotor == (AdvancedGhostMotor *)0x0)) goto code_?;
  AdvancedGhostMotor::AdvancedGhostMotor_Init
            (advancedGhostMotor,pGVar3,(MVInteractableBase *)(this->fields).interactable,
             (pAVar12->fields).cullingSubscriberBase,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar13 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar13 == (GameSessionData *)0x0) goto code_?;
  if ((pGVar13->fields).gameMode == 0) {
code_?:
    MVAdvancedGhost_SetupEditorIcon(this,(MVCubeModelBase *)cubeModelBase,1,(MethodInfo *)0x0);
    pUVar14 = (this->fields)._._._.PositionChanged;
    this_03 = (UnityAction_2_System_Object_System_Object_ *)
              FUN_?(
                           TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                           );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (this_03,(Object *)this,
               MethodInfo__MVAdvancedGhost__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
               ,(MethodInfo *)0x0);
    pDVar15 = mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pUVar14,(Delegate *)this_03,(MethodInfo *)0x0);
    pUVar16 = 
    TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
    if (pDVar15 == (Delegate *)0x0) {
      (this->fields)._._._.PositionChanged =
           (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
    }
    else {
      pUVar14 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)
                FUN_?(pDVar15,
                              TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                             );
      if (pUVar14 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
        FUN_?(pDVar15,pUVar16);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (this->fields)._._._.PositionChanged = pUVar14;
      pUVar16 = 
      TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
      lVar7 = FUN_?(pDVar15,
                             TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                            );
      if (lVar7 == 0) {
        FUN_?(pDVar15,pUVar16);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)&(this->fields)._._._.PositionChanged >> 0xc);
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
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pGVar13 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar13 == (GameSessionData *)0x0) goto code_?;
    if ((pGVar13->fields).gameMode == 4) goto code_?;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar17 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar17 != (MVGameControllerBase *)0x0) &&
      (pMVar18 = (pMVar17->fields).game, pMVar18 != (MVNetworkGame *)0x0)) &&
     (this_01 = (pMVar18->fields)._GameStateController_k__BackingField,
     this_01 != (MVGameModeChangeNotifier *)0x0)) {
    MVGameModeChangeNotifier::MVGameModeChangeNotifier_AddUpdateObject
              (this_01,(IGameStateControllerSubscriber *)this,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(this->klass->vtable).OnDataUpdate.methodPtr)(this,(this->klass->vtable).OnDataUpdate.method);
    return;
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void InitializeInventory() */

void Assembly-CSharp.dll::MVAdvancedGhost::MVAdvancedGhost_InitializeInventory
               (MVAdvancedGhost *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  AdvancedGhostBehaviour_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<AdvancedGhostBehaviour>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVCubeModelBase);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_BodyCubeModel);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Default);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVGroup::MVGroup_InitializeInventory((MVGroup *)this,(MethodInfo *)0x0);
  pMVar1 = 
  AdvancedGhostBehaviour_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<AdvancedGhostBehaviour>__
  ;
  pGVar2 = (this->fields)._._._.gameObject;
  if (pGVar2 != (GameObject *)0x0) {
    if ((
        AdvancedGhostBehaviour_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<AdvancedGhostBehaviour>__
        ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(
                   AdvancedGhostBehaviour_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<AdvancedGhostBehaviour>__
                   );
    }
    pAVar3 = (AdvancedGhostBehaviour *)
             UnityEngine.CoreModule.dll::UnityEngine::GameObject::
             GameObject_GetComponentInChildren_3
                       (pGVar2,0,((pMVar1->field7_0x38).rgctx_data)->method);
    bVar4 = iRam_? != 0;
    (this->fields).advancedGhostBehaviour = pAVar3;
    if (bVar4) {
      uVar5 = (uint)((ulonglong)&(this->fields).advancedGhostBehaviour >> 0xc);
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
    cubeModelBody =
         (MVCubeModelBase *)
         MVBlueprintBase::MVBlueprintBase_GetChild
                   ((MVBlueprintBase *)this,StringLiteral_BodyCubeModel,(MethodInfo *)0x0);
    if (cubeModelBody == (MVCubeModelBase *)0x0) {
      MVAdvancedGhost_SetupEditorIcon(this,(MVCubeModelBase *)0x0,0,(MethodInfo *)0x0);
    }
    else {
      bVar9 = (TypeInfo__MVCubeModelBase->_1).naturalAligment;
      if (((cubeModelBody->klass->_1).naturalAligment < bVar9) ||
         ((MVCubeModelBase__Class *)(cubeModelBody->klass->_1).typeHierarchy[(ulonglong)bVar9 - 1]
          != TypeInfo__MVCubeModelBase)) {
        FUN_?(cubeModelBody);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      MVAdvancedGhost_SetupEditorIcon(this,cubeModelBody,0,(MethodInfo *)0x0);
      pGVar2 = (cubeModelBody->fields)._.gameObject;
      if (pGVar2 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar2,0,(MethodInfo *)0x0);
        this_00 = (this->fields).advancedGhostIcon;
        if (this_00 != (AdvancedGhostIcon *)0x0) {
          pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)this_00,(MethodInfo *)0x0);
          layer = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                            (StringLiteral_Default,(MethodInfo *)0x0);
          LayerUtil::LayerUtil_SetLayerRecursively_4(pGVar2,layer,(MethodInfo *)0x0);
          pAVar3 = (this->fields).advancedGhostBehaviour;
          if ((pAVar3 != (AdvancedGhostBehaviour *)0x0) &&
             (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)pAVar3,(MethodInfo *)0x0),
             pGVar2 != (GameObject *)0x0)) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                            ,0,0);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (pGVar2 == (GameObject *)0x0) {
              FUN_?();
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            pvVar11 = (pGVar2->fields)._.m_CachedPtr;
            if (pvVar11 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar2,(MethodInfo *)0x0);
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            pcVar10 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
              uVar12 = func_?(&UNK_?);
              FUN_?(uVar12,0);
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            pcRam_? = pcVar10;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam_?)(pvVar11,0);
            return;
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


/* Boolean IsOnSameTeam(MVTeam) */

bool Assembly-CSharp.dll::MVAdvancedGhost::MVAdvancedGhost_IsOnSameTeam
               (MVAdvancedGhost *this,MVTeam__Enum team,MethodInfo *method)

{
  pAVar1 = (this->fields).advancedGhostBehaviour;
  if ((pAVar1 != (AdvancedGhostBehaviour *)0x0) &&
     (pAVar2 = (pAVar1->fields).perception,
     pAVar2 != (AdvancedGhostBehaviour_AdvancedGhostPerception *)0x0)) {
    return (pAVar2->fields).alliedTeam == team;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::MVAdvancedGhost::MVAdvancedGhost_OnDataUpdate
               (MVAdvancedGhost *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Radius);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Speed);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Lives);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_team);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields)._._._._.data;
  pAVar2 = (this->fields).advancedGhostBehaviour;
  if (((pDVar1 == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
      (pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           (pDVar1,(Object *)StringLiteral_Speed,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           ), pAVar2 == (AdvancedGhostBehaviour *)0x0)) ||
     (pOVar3 == (Object *)0x0)) goto code_?;
  if ((pOVar3->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
    FUN_?(pOVar3);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  fVar5 = *(float *)&pOVar3[1].klass;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  aOStack_6[0].fakeValue = 0.0;
  aOStack_6[0].inited = 0;
  aOStack_6[0]._21_3_ = 0;
  aOStack_6[0].currentCryptoKey = 0;
  aOStack_6[0].hiddenValue.b1 = 0;
  aOStack_6[0].hiddenValue.b2 = 0;
  aOStack_6[0].hiddenValue.b3 = 0;
  aOStack_6[0].hiddenValue.b4 = 0;
  aOStack_6[0].hiddenValueOld = (Byte__Array *)0x0;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  value = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
          ObscuredFloat_InternalEncrypt(fVar5,(MethodInfo *)0x0);
  Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
  ObscuredFloat__ctor(aOStack_6,value,(MethodInfo *)0x0);
  bVar7 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector
           ::ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
  if (bVar7 != 0) {
    aOStack_6[0].fakeValue = fVar5;
  }
  bVar8 = iRam_? != 0;
  (pAVar2->fields).speed.currentCryptoKey = aOStack_6[0].currentCryptoKey;
  (pAVar2->fields).speed.hiddenValue = aOStack_6[0].hiddenValue;
  (pAVar2->fields).speed.hiddenValueOld = aOStack_6[0].hiddenValueOld;
  (pAVar2->fields).speed.fakeValue = aOStack_6[0].fakeValue;
  (pAVar2->fields).speed.inited = aOStack_6[0].inited;
  *(undefined3 *)&(pAVar2->fields).speed.field_0x15 = aOStack_6[0]._21_3_;
  if (bVar8) {
    uVar9 = (uint)((ulonglong)&(pAVar2->fields).speed.hiddenValueOld >> 0xc);
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
  aOStack_6[0].currentCryptoKey = (pAVar2->fields).speed.currentCryptoKey;
  aOStack_6[0].hiddenValue = (pAVar2->fields).speed.hiddenValue;
  aOStack_6[0].hiddenValueOld = (pAVar2->fields).speed.hiddenValueOld;
  aOStack_6[0].fakeValue = (pAVar2->fields).speed.fakeValue;
  aOStack_6[0].inited = (pAVar2->fields).speed.inited;
  aOStack_6[0]._21_3_ = *(undefined3 *)&(pAVar2->fields).speed.field_0x15;
  fVar5 = (pAVar2->fields).minPerceptionRadius;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  fVar13 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
           ObscuredFloat_InternalDecrypt(aOStack_6,(MethodInfo *)0x0);
  (pAVar2->fields).perceptionRadius = fVar13 * (pAVar2->fields).speedPerceptionFactor + fVar5;
  pDVar1 = (this->fields)._._._._.data;
  pAVar2 = (this->fields).advancedGhostBehaviour;
  if (((pDVar1 == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
      (pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           (pDVar1,(Object *)StringLiteral_Radius,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           ), pAVar2 == (AdvancedGhostBehaviour *)0x0)) ||
     (pOVar3 == (Object *)0x0)) goto code_?;
  if ((pOVar3->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
    FUN_?(pOVar3);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  (pAVar2->fields).radius = *(float *)&pOVar3[1].klass;
  pAVar14 = (this->fields).advancedGhostIcon;
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
  if (pAVar14 != (AdvancedGhostIcon *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pAVar14->fields)._._._._.m_CachedPtr != (void *)0x0) {
      pDVar1 = (this->fields)._._._._.data;
      pAVar14 = (this->fields).advancedGhostIcon;
      if (((pDVar1 == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
          (pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                     ::Object]::Dictionary_2_System_Object_System_Object__get_Item
                               (pDVar1,(Object *)StringLiteral_Radius,
                                MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                               ), pAVar14 == (AdvancedGhostIcon *)0x0)) || (pOVar3 == (Object *)0x0)
         ) goto code_?;
      if ((pOVar3->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
        FUN_?(pOVar3,lRam_?);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      fVar5 = *(float *)&pOVar3[1].klass;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pGVar15 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
      if (pGVar15 == (GameSessionData *)0x0) goto code_?;
      if ((pGVar15->fields).gameMode != 0) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pGVar15 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
        if (pGVar15 == (GameSessionData *)0x0) goto code_?;
        if ((pGVar15->fields).gameMode != 4) goto code_?;
      }
      this_00 = (pAVar14->fields).lineRangeIndicator;
      if (this_00 == (LineRangeIndicator *)0x0) goto code_?;
      LineRangeIndicator::LineRangeIndicator_SetRange(this_00,fVar5,(MethodInfo *)0x0);
    }
  }
code_?:
  MVar16 = MVAdvancedGhost_get_Team(this,(MethodInfo *)0x0);
  if (MVar16 == MVTeam__Enum_None) {
    this_02 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
               *)FUN_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::UIR::UIRenderDevice+DisableForceGammaMaterial]::
    Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
              (this_02,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    lVar17 = lRam_?;
    pOVar3 = (Object *)0x0;
    uStackX_8 = 0;
    if (*(int *)(lRam_? + 0x28) < 0) {
      if ((*(longlong *)(lRam_? + 0x60) == 0) ||
         ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
        pOVar3 = (Object *)FUN_?(lRam_?);
        FUN_?(pOVar3 + 1,&uStackX_8,(longlong)*(int *)(lVar17 + 0xf8) + -0x10);
        if (iRam_? != 0) {
          uVar9 = (uint)((ulonglong)(pOVar3 + 1) >> 0xc);
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
    }
    else {
      pOVar3 = (Object *)((ulonglong)uStackX_c << 0x20);
    }
    if (this_02 ==
        (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
         *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this_02,(Object *)StringLiteral_team,
               pOVar3,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    this_03 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (this_03 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_RemoveWorldObjectDataPartial_1
              (this_03,(this->fields)._._._._.id,
               (Dictionary_2_System_Object_System_Object_ *)this_02,(MethodInfo *)0x0);
  }
  else {
    MVar16 = MVAdvancedGhost_get_Team(this,(MethodInfo *)0x0);
    pAVar18 = (this->fields).advGhostObject;
    if ((pAVar18 == (AdvancedGhostObject *)0x0) ||
       (pAVar19 = (pAVar18->fields).tintObject, pAVar19 == (AdvancedGhostTintObject *)0x0))
    goto code_?;
    (*(pAVar19->klass->vtable).TeamTint.methodPtr)
              (pAVar19,(ulonglong)MVar16,(pAVar19->klass->vtable).TeamTint.method);
    pAVar2 = (this->fields).advancedGhostBehaviour;
    if ((pAVar2 == (AdvancedGhostBehaviour *)0x0) ||
       (pAVar20 = (pAVar2->fields).perception,
       pAVar20 == (AdvancedGhostBehaviour_AdvancedGhostPerception *)0x0)) goto code_?;
    (pAVar20->fields).alliedTeam = MVar16;
    pAVar21 = (pAVar2->fields).weapon;
    if (pAVar21 == (AdvancedGhostBodyRotateWeapon *)0x0) goto code_?;
    (pAVar21->fields).alliedTeam = MVar16;
    cVar22 = cRam_?;
    pCVar23 = (this->fields).interactionHandler;
    if (pCVar23 == (ClientSideNPCInteractionHandler *)0x0) goto code_?;
    (pCVar23->fields).team = MVar16;
    if (cVar22 == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cVar22 = '\x01';
      cRam_? = '\x01';
    }
    pGVar15 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar15 == (GameSessionData *)0x0) goto code_?;
    if ((pGVar15->fields).gameMode != 0) {
      if (cVar22 == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pGVar15 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
      if (pGVar15 == (GameSessionData *)0x0) goto code_?;
      if ((pGVar15->fields).gameMode != 4) goto code_?;
    }
    pAVar14 = (this->fields).advancedGhostIcon;
    if (pAVar14 == (AdvancedGhostIcon *)0x0) goto code_?;
    AdvancedGhostIcon::AdvancedGhostIcon_set_Team(pAVar14,MVar16,(MethodInfo *)0x0);
  }
code_?:
  pAVar2 = (this->fields).advancedGhostBehaviour;
  if (pAVar2 != (AdvancedGhostBehaviour *)0x0) {
    (pAVar2->fields).lives = -1;
    (pAVar2->fields).maxLives = -1;
    this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
               *)(this->fields)._._._._.data;
    if (this_01 !=
        (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)
        0x0) {
      iVar24 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
               UIElements::StyleComplexSelector+PseudoStateData]::
               Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                         (this_01,(Object *)StringLiteral_Lives,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                          ->klass->rgctx_data[0x21].method);
      if (-1 < iVar24) {
        pDVar1 = (this->fields)._._._._.data;
        pAVar2 = (this->fields).advancedGhostBehaviour;
        if (((pDVar1 == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
            (pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Object,System::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                 (pDVar1,(Object *)StringLiteral_Lives,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                 ), pAVar2 == (AdvancedGhostBehaviour *)0x0)) ||
           (pOVar3 == (Object *)0x0)) goto code_?;
        if ((pOVar3->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
          FUN_?(pOVar3,lRam_?);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar24 = *(int32_t *)&pOVar3[1].klass;
        (pAVar2->fields).lives = iVar24;
        (pAVar2->fields).maxLives = iVar24;
      }
      return;
    }
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Boolean OnEnterObject(EditorStateMachine) */

bool Assembly-CSharp.dll::MVAdvancedGhost::MVAdvancedGhost_OnEnterObject
               (MVAdvancedGhost *this,EditorStateMachine *e,MethodInfo *method)

{
  this_00 = (this->fields).advancedGhostIcon;
  if ((this_00 != (AdvancedGhostIcon *)0x0) &&
     (this_04 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this_00,(MethodInfo *)0x0), this_04 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_04,0,(MethodInfo *)0x0);
    this_01 = (this->fields).editableCubeModelWrapper;
    transform = (this->fields)._._._.transform;
    if (this_01 != (AdvancedGhostCubeModelWrapper *)0x0) {
      (this_01->fields).cubeModelIsBeingEdited = 1;
      AdvancedGhostCubeModelWrapper::AdvancedGhostCubeModelWrapper_EnterEdit
                (this_01,transform,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Debug,e,0);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__EditorEvent);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)e,(MethodInfo *)0x0);
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if (((pMVar1 != (MainCameraManager *)0x0) &&
          (pMVar2 = (pMVar1->fields).cameraController, pMVar2 != (MVCameraController *)0x0)) &&
         (this_02 = (pMVar2->fields).cameraStack, this_02 != (MVCameraController_CameraStack *)0x0))
      {
        pMVar3 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                           (this_02,(MethodInfo *)0x0);
        uStack_4 = 0;
        if (pMVar3 != (MVCameraBase *)0x0) {
          uStack_5 = 0;
          uStack_6 = 0;
          uStack_7 = 0;
          uStack_4 = 0;
          (*(pMVar3->klass->vtable).FocusOnObject.methodPtr)
                    (pMVar3,(this_01->fields)._.cubeModelBase,TypeRef__System__Activator__T._0_4_,
                     &uStack_4,&uStack_7,(pMVar3->klass->vtable).FocusOnObject.method);
          pMVar8 = (this_01->fields)._.cubeModelBase;
          if (((pMVar8 != (MVCubeModelInstance *)0x0) && (e != (EditorStateMachine *)0x0)) &&
             (this_03 = (e->fields).selectionController, this_03 != (SelectionController *)0x0)) {
            SelectionController::SelectionController_SelectWO
                      (this_03,(pMVar8->fields)._._._.id,0,1,(MethodInfo *)0x0);
            value = (Object *)(unaff_RSI & 0xffffffff00000000);
            iVar9._0_2_ = (TypeInfo__EditorEvent->_0).byval_arg.attrs;
            iVar9._2_1_ = (TypeInfo__EditorEvent->_0).byval_arg.type;
            iVar9._3_1_ = (TypeInfo__EditorEvent->_0).byval_arg.field_0xb;
            if ((iVar9 < 0) &&
               (((TypeInfo__EditorEvent->_0).generic_class == (Il2CppGenericClass *)0x0 ||
                (value = (Object *)0x0, ((TypeInfo__EditorEvent->_1).field_0x6d & 8) == 0)))) {
              value = (Object *)FUN_?(TypeInfo__EditorEvent);
              FUN_?(value + 1,&stack0x00000010);
              if (iRam_? != 0) {
                uVar10 = (uint)((ulonglong)(value + 1) >> 0xc);
                uVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6);
                do {
                  uVar12 = *(ulonglong *)(uVar11 * 8 + 0xADDR);
                  puVar13 = (ulonglong *)(uVar11 * 8 + 0xADDR);
                  LOCK();
                  bVar14 = uVar12 == *puVar13;
                  if (bVar14) {
                    *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar14);
              }
            }
            FSMEntity::FSMEntity_set_Event((FSMEntity *)e,value,(MethodInfo *)0x0);
            return 1;
          }
        }
      }
      FUN_?();
      pcVar15 = (code *)swi(3);
      bVar16 = (*pcVar15)();
      return bVar16;
    }
  }
  FUN_?();
  pcVar15 = (code *)swi(3);
  bVar16 = (*pcVar15)();
  return bVar16;
}


/* Boolean OnExitObject(EditorStateMachine) */

bool Assembly-CSharp.dll::MVAdvancedGhost::MVAdvancedGhost_OnExitObject
               (MVAdvancedGhost *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_On_exit_object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_On_exit_object,(MethodInfo *)0x0);
  this_00 = (this->fields).advancedGhostIcon;
  if (this_00 != (AdvancedGhostIcon *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this_00,(MethodInfo *)0x0);
    if (this_01 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_01,1,(MethodInfo *)0x0);
      pAVar1 = (this->fields).editableCubeModelWrapper;
      if (pAVar1 != (AdvancedGhostCubeModelWrapper *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        bVar2 = (*(pAVar1->klass->vtable).OnExitObject.methodPtr)
                          (pAVar1,e,(pAVar1->klass->vtable).OnExitObject.method);
        return bVar2;
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* Void OnPositionChanged(MVWorldObjectClient, PositionChangedEventArgs) */

void Assembly-CSharp.dll::MVAdvancedGhost::MVAdvancedGhost_OnPositionChanged
               (MVAdvancedGhost *this,MVWorldObjectClient *arg0,
               PositionChangedEventArgs *positionChangedEventArgs,MethodInfo *method)

{
  this_00 = (this->fields).advancedGhostBehaviour;
  if (this_00 != (AdvancedGhostBehaviour *)0x0) {
    pCVar1 = (this_00->fields).cullingSubscriberBase;
    obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                    ((Component *)this_00,(MethodInfo *)0x0);
    if (obj != (Transform *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_2 = 0;
      fStack_3 = 0.0;
      pvVar4 = (obj->fields)._._.m_CachedPtr;
      if (pvVar4 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcVar5 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
        uVar6 = func_?(&UNK_?);
        FUN_?(uVar6,0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcRam_? = pcVar5;
      (*pcRam_?)(pvVar4,&uStack_2);
      if (pCVar1 != (CullingSubscriberBase *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__CullingApiWrapper);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__CullingApiWrapper);
        }
        pBVar7 = TypeInfo__CullingApiWrapper->static_fields->spheres;
        if (pBVar7 != (BoundingSphere__Array *)0x0) {
          uVar8 = (pCVar1->fields)._CullingIndex_k__BackingField;
          if ((uint)pBVar7->max_length <= uVar8) {
            FUN_?();
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pBVar9 = pBVar7->vector + (int)uVar8;
          (pBVar9->position).x = (float)(undefined4)uStack_2;
          (pBVar9->position).y = (float)uStack_2._4_4_;
          (pBVar9->position).z = fStack_3;
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void ReceiveDamage(Single, MVPlayer, PlayerKilledByType) */

void Assembly-CSharp.dll::MVAdvancedGhost::MVAdvancedGhost_ReceiveDamage
               (MVAdvancedGhost *this,float amount,MVPlayer *damageDealer,
               PlayerKilledByType__Enum damageType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__SharedWorldObjectGameplayFunctions__Explosion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (amount <= 0.0) {
    return;
  }
  pAVar1 = (this->fields).advancedGhostBehaviour;
  if (((pAVar1 == (AdvancedGhostBehaviour *)0x0) ||
      (pAVar2 = (pAVar1->fields).GhostVisualization, pAVar2 == (AdvancedGhostVisualizaton *)0x0)) ||
     (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)pAVar2,(MethodInfo *)0x0), obj == (GameObject *)0x0))
  goto DAT_?;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar3 = (obj->fields)._.m_CachedPtr;
  if (pvVar3 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pcVar4 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pcRam_? = pcVar4;
  cVar6 = (*pcRam_?)(pvVar3);
  if (cVar6 != '\0') {
    this_00 = (pAVar2->fields).receiveDamage;
    if (this_00 == (AudioSource *)0x0) goto DAT_?;
    UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play_1
              (this_00,(MethodInfo *)0x0);
    this_01 = (pAVar2->fields).blinker;
    if (this_01 == (AdvancedGhostBlinker *)0x0) goto DAT_?;
    BlinkerBase::BlinkerBase_StartBlinking
              ((BlinkerBase *)this_01,BlinkType__Enum_Damage,_UNK_?,(MethodInfo *)0x0);
  }
  this_02 = (this->fields).interactable;
  if (this_02 != (ClientSideNPCInteractable *)0x0) {
    bVar7 = ClientSideNPCInteractable::ClientSideNPCInteractable_IsDead(this_02,(MethodInfo *)0x0);
    if (bVar7 == 0) {
      return;
    }
    ignoreIDs = MVWorldObjectClient::MVWorldObjectClient_get_WorldIDsRecursive
                          ((MVWorldObjectClient *)this,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__PrefabPool);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar8 = TypeInfo__PrefabPool->static_fields->instance;
    if (pPVar8 != (PrefabPool *)0x0) {
      pAVar1 = (this->fields).advancedGhostBehaviour;
      particlePrefab = (pPVar8->fields).particleExplosion;
      if (((pAVar1 != (AdvancedGhostBehaviour *)0x0) &&
          (pAVar2 = (pAVar1->fields).GhostVisualization, pAVar2 != (AdvancedGhostVisualizaton *)0x0)
          ) && (obj_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                   ((Component *)pAVar2,(MethodInfo *)0x0),
               obj_00 != (Transform *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        VStack_9.x = 0.0;
        VStack_9.y = 0.0;
        VStack_9.z = 0.0;
        pvVar3 = (obj_00->fields)._._.m_CachedPtr;
        if (pvVar3 != (void *)0x0) {
          pcVar4 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
            uVar5 = func_?(&UNK_?);
            FUN_?(uVar5,0);
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pcRam_? = pcVar4;
          (*pcRam_?)(pvVar3,&VStack_9);
          if (*(int *)&(TypeInfo__SharedWorldObjectGameplayFunctions__Explosion->_1).field_0x1c == 0
             ) {
            FUN_?();
          }
          aVStack_10[0].z = VStack_9.z;
          aVStack_10[0].x = VStack_9.x;
          aVStack_10[0].y = VStack_9.y;
          SharedWorldObjectGameplayFunctions+Explosion::
          SharedWorldObjectGameplayFunctions_Explosion_Explode
                    (particlePrefab,aVStack_10,_UNK_?,_UNK_?,_UNK_?,1,
                     (ExplosionEvent *)0x0,ignoreIDs,(MethodInfo *)0x0);
          return;
        }
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj_00,(MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
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


/* Void RecieveHealing(Single, MVPlayer) */

void Assembly-CSharp.dll::MVAdvancedGhost::MVAdvancedGhost_RecieveHealing
               (MVAdvancedGhost *this,float amount,MVPlayer *damageDealer,MethodInfo *method)

{
  if (0.0 < amount) {
    pAVar1 = (this->fields).advancedGhostBehaviour;
    if (((pAVar1 == (AdvancedGhostBehaviour *)0x0) ||
        (this_00 = (pAVar1->fields).GhostVisualization, this_00 == (AdvancedGhostVisualizaton *)0x0)
        ) || (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)this_00,(MethodInfo *)0x0), obj == (GameObject *)0x0)) {
DAT_?:
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
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
    cVar5 = (*pcRam_?)(pvVar3);
    if (cVar5 != '\0') {
      this_01 = (this_00->fields).blinker;
      if (this_01 == (AdvancedGhostBlinker *)0x0) goto DAT_?;
      BlinkerBase::BlinkerBase_StartBlinking
                ((BlinkerBase *)this_01,BlinkType__Enum_Healing,_UNK_?,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::MVAdvancedGhost::MVAdvancedGhost_Reset
               (MVAdvancedGhost *this,MethodInfo *method)

{
  this_00 = (this->fields).interactable;
  if (this_00 != (ClientSideNPCInteractable *)0x0) {
    ClientSideNPCInteractable::ClientSideNPCInteractable_Reset(this_00,(MethodInfo *)0x0);
    this_01 = (this->fields).advancedGhostBehaviour;
    if (this_01 != (AdvancedGhostBehaviour *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeRef__AdvancedGhostBehaviour__Idle,0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      (this_01->fields).respawn = 1;
      pIVar1 = TypeRef__AdvancedGhostBehaviour__Idle;
      (this_01->fields).clearEffectsBecauseOfReset = 1;
      if (*(int *)(lRam_? + 0xe4) == 0) {
        FUN_?();
      }
      if (pIVar1 == (Il2CppType *)0x0) {
        type = (Type *)0x0;
      }
      else {
        if (*(int *)(lRam_? + 0xe4) == 0) {
          FUN_?();
        }
        lVar2 = FUN_?(pIVar1,1);
        type = (Type *)FUN_?(lVar2 + 0x20);
      }
      AdvancedGhostBehaviour::AdvancedGhostBehaviour_SetCurrentState(this_01,type,(MethodInfo *)0x0)
      ;
      AdvancedGhostBehaviour::AdvancedGhostBehaviour_SetVisible(this_01,(MethodInfo *)0x0);
      (this_01->fields).lives = (this_01->fields).maxLives;
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetGameMode(Boolean) */

void Assembly-CSharp.dll::MVAdvancedGhost::MVAdvancedGhost_SetGameMode
               (MVAdvancedGhost *this,bool isPlayMode,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Todo__Fix_this_hack__This_is_sim);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).advancedGhostIcon;
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
  if (pAVar1 != (AdvancedGhostIcon *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pAVar1->fields)._._._._.m_CachedPtr != (void *)0x0) {
      pAVar1 = (this->fields).advancedGhostIcon;
      if (pAVar1 == (AdvancedGhostIcon *)0x0) goto code_?;
      (pAVar1->fields).wantsVisible = isPlayMode ^ 1;
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pAVar1,(MethodInfo *)0x0);
      if ((pAVar1->fields).wantsVisible == 0) {
        bVar3 = 0;
      }
      else {
        bVar3 = (pAVar1->fields).visible;
      }
      if (pGVar2 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar2,bVar3 != 0,(MethodInfo *)0x0);
    }
  }
  this_00 = (this->fields).advancedGhostBehaviour;
  if (this_00 != (AdvancedGhostBehaviour *)0x0) {
    if (isPlayMode == 0) {
      (this_00->fields).wantsVisible = 0;
      AdvancedGhostBehaviour::AdvancedGhostBehaviour_SetVisible(this_00,(MethodInfo *)0x0);
      return;
    }
    AdvancedGhostBehaviour::AdvancedGhostBehaviour_SetInitialState(this_00,(MethodInfo *)0x0);
    pAVar4 = (this_00->fields).perception;
    if ((pAVar4 != (AdvancedGhostBehaviour_AdvancedGhostPerception *)0x0) &&
       (this_01 = (pAVar4->fields).syncedInterval, this_01 != (DeterministicSyncedInterval *)0x0)) {
      DeterministicSyncedInterval::DeterministicSyncedInterval_Update(this_01,(MethodInfo *)0x0);
      (this_00->fields).wantsVisible = 1;
      AdvancedGhostBehaviour::AdvancedGhostBehaviour_SetVisible(this_00,(MethodInfo *)0x0);
      pAVar5 = (this->fields).editableCubeModelWrapper;
      if (pAVar5 != (AdvancedGhostCubeModelWrapper *)0x0) {
        if ((pAVar5->fields).cubeModelIsBeingEdited == 0) {
          return;
        }
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                  ((Object *)StringLiteral_Todo__Fix_this_hack__This_is_sim,(MethodInfo *)0x0);
        pAVar5 = (this->fields).editableCubeModelWrapper;
        if (pAVar5 != (AdvancedGhostCubeModelWrapper *)0x0) {
          AdvancedGhostCubeModelWrapper::AdvancedGhostCubeModelWrapper_ExitEdit
                    (pAVar5,(MethodInfo *)0x0);
          pAVar5 = (this->fields).editableCubeModelWrapper;
          if (((pAVar5 != (AdvancedGhostCubeModelWrapper *)0x0) &&
              (pMVar6 = (pAVar5->fields)._.cubeModelBase, pMVar6 != (MVCubeModelInstance *)0x0)) &&
             (pGVar2 = (pMVar6->fields)._._.gameObject, pGVar2 != (GameObject *)0x0)) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                            ,1,0,in_R9,unaff_RSI);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (pGVar2 == (GameObject *)0x0) {
              FUN_?();
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pvVar8 = (pGVar2->fields)._.m_CachedPtr;
            if (pvVar8 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar2,(MethodInfo *)0x0);
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pcVar7 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
              uVar9 = func_?(&UNK_?);
              FUN_?(uVar9,0);
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pcRam_? = pcVar7;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam_?)(pvVar8,1);
            return;
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void SetTeam(MVTeam) */

void Assembly-CSharp.dll::MVAdvancedGhost::MVAdvancedGhost_SetTeam
               (MVAdvancedGhost *this,MVTeam__Enum team,MethodInfo *method)

{
  pAVar1 = (this->fields).advGhostObject;
  if ((pAVar1 != (AdvancedGhostObject *)0x0) &&
     (pAVar2 = (pAVar1->fields).tintObject, pAVar2 != (AdvancedGhostTintObject *)0x0)) {
    (*(pAVar2->klass->vtable).TeamTint.methodPtr)
              (pAVar2,CONCAT44(in_register_00000014,team),(pAVar2->klass->vtable).TeamTint.method);
    pAVar3 = (this->fields).advancedGhostBehaviour;
    if ((pAVar3 != (AdvancedGhostBehaviour *)0x0) &&
       (pAVar4 = (pAVar3->fields).perception,
       pAVar4 != (AdvancedGhostBehaviour_AdvancedGhostPerception *)0x0)) {
      (pAVar4->fields).alliedTeam = team;
      pAVar5 = (pAVar3->fields).weapon;
      if (pAVar5 != (AdvancedGhostBodyRotateWeapon *)0x0) {
        (pAVar5->fields).alliedTeam = team;
        cVar6 = cRam_?;
        pCVar7 = (this->fields).interactionHandler;
        if (pCVar7 != (ClientSideNPCInteractionHandler *)0x0) {
          (pCVar7->fields).team = team;
          if (cVar6 == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cVar6 = '\x01';
            cRam_? = '\x01';
          }
          pGVar8 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
          if (pGVar8 != (GameSessionData *)0x0) {
            if ((pGVar8->fields).gameMode != 0) {
              if (cVar6 == '\0') {
                FUN_?(&TypeInfo__MVGameControllerBase);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pGVar8 = TypeInfo__MVGameControllerBase->static_fields->
                       _GameSessionData_k__BackingField;
              if (pGVar8 == (GameSessionData *)0x0) goto code_?;
              if ((pGVar8->fields).gameMode != 4) {
                return;
              }
            }
            this_00 = (this->fields).advancedGhostIcon;
            if (this_00 != (AdvancedGhostIcon *)0x0) {
              AdvancedGhostIcon::AdvancedGhostIcon_set_Team(this_00,team,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void SetTeam_Edit(MVTeam) */

void Assembly-CSharp.dll::MVAdvancedGhost::MVAdvancedGhost_SetTeam_Edit
               (MVAdvancedGhost *this,MVTeam__Enum team,MethodInfo *method)

{
  pAVar1 = (this->fields).advancedGhostIcon;
  if (pAVar1 == (AdvancedGhostIcon *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<OculusTeamGameObject>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<OculusTeamGameObject>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar3 = (pAVar1->fields).teamIrisObjects;
  MVar4 = MVTeam__Enum_Server;
  if (team != MVTeam__Enum_None) {
    MVar4 = team;
  }
  uVar5 = 0;
  if (pLVar3 != (List_1_OculusTeamGameObject_ *)0x0) {
    lVar6 = 0x20;
    while( true ) {
      if ((pLVar3->fields)._size <= (int)uVar5) {
        return;
      }
      pLVar3 = (pAVar1->fields).teamIrisObjects;
      if (pLVar3 == (List_1_OculusTeamGameObject_ *)0x0) break;
      if ((uint)(pLVar3->fields)._size <= uVar5) {
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pOVar7 = (pLVar3->fields)._items;
      if (pOVar7 == (OculusTeamGameObject__Array *)0x0) break;
      if ((uint)pOVar7->max_length <= uVar5) {
code_?:
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar8 = *(longlong *)((longlong)pOVar7->vector + lVar6 + -0x20);
      if ((lVar8 == 0) || (obj = *(Object **)(lVar8 + 0x18), obj == (Object *)0x0)) break;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (obj[1].klass == (Object__Class *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException(obj,(MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar9 = func_?(&UNK_?);
        FUN_?(uVar9,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
      (*pcRam_?)();
      pLVar3 = (pAVar1->fields).teamIrisObjects;
      if (pLVar3 == (List_1_OculusTeamGameObject_ *)0x0) break;
      if ((uint)(pLVar3->fields)._size <= uVar5) goto code_?;
      pOVar7 = (pLVar3->fields)._items;
      if (pOVar7 == (OculusTeamGameObject__Array *)0x0) break;
      if ((uint)pOVar7->max_length <= uVar5) goto code_?;
      lVar8 = *(longlong *)((longlong)pOVar7->vector + lVar6 + -0x20);
      if (lVar8 == 0) break;
      if (*(MVTeam__Enum *)(lVar8 + 0x10) == MVar4) {
        lVar8 = FUN_?((pAVar1->fields).teamIrisObjects,uVar5);
        if ((lVar8 == 0) || (*(GameObject **)(lVar8 + 0x18) == (GameObject *)0x0)) break;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (*(GameObject **)(lVar8 + 0x18),1,(MethodInfo *)0x0);
      }
      pLVar3 = (pAVar1->fields).teamIrisObjects;
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 8;
      if (pLVar3 == (List_1_OculusTeamGameObject_ *)0x0) break;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetupEditorIcon(MVCubeModelBase, Boolean) */

void Assembly-CSharp.dll::MVAdvancedGhost::MVAdvancedGhost_SetupEditorIcon
               (MVAdvancedGhost *this,MVCubeModelBase *cubeModelBody,bool enableCulling,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  AdvancedGhostIcon_MethodInfo__UnityEngine__Object__Instantiate<AdvancedGhostIcon>_AdvancedGhostIcon_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
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
    pAVar2 = (pPVar1->fields).ghostEditorIconObject;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    pAVar2 = (AdvancedGhostIcon *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)pAVar2,
                        AdvancedGhostIcon_MethodInfo__UnityEngine__Object__Instantiate<AdvancedGhostIcon>_AdvancedGhostIcon_
                       );
    bVar3 = iRam_? != 0;
    (this->fields).advancedGhostIcon = pAVar2;
    if (bVar3) {
      uVar4 = (uint)((ulonglong)&(this->fields).advancedGhostIcon >> 0xc);
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
    pAVar2 = (this->fields).advancedGhostIcon;
    if ((pAVar2 != (AdvancedGhostIcon *)0x0) &&
       (pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)pAVar2,(MethodInfo *)0x0), pTVar8 != (Transform *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                (pTVar8,(this->fields)._._._.transform,(MethodInfo *)0x0);
      pAVar2 = (this->fields).advancedGhostIcon;
      if (pAVar2 != (AdvancedGhostIcon *)0x0) {
        pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)pAVar2,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (pTVar8 != (Transform *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar9 = (pTVar8->fields)._._.m_CachedPtr;
          if (pvVar9 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar8,(MethodInfo *)0x0);
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pcVar10 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
            uVar11 = func_?(&UNK_?);
            FUN_?(uVar11,0);
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pcRam_? = pcVar10;
          (*pcRam_?)(pvVar9);
          pAVar2 = (this->fields).advancedGhostIcon;
          if (pAVar2 != (AdvancedGhostIcon *)0x0) {
            pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                               ((Component *)pAVar2,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Quaternion);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (pTVar8 != (Transform *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pvVar9 = (pTVar8->fields)._._.m_CachedPtr;
              if (pvVar9 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar8,(MethodInfo *)0x0);
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              pcVar10 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
                uVar11 = func_?(&UNK_?);
                FUN_?(uVar11,0);
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              pcRam_? = pcVar10;
              (*pcRam_?)(pvVar9);
              pAVar2 = (this->fields).advancedGhostIcon;
              team = MVAdvancedGhost_get_Team(this,(MethodInfo *)0x0);
              if (pAVar2 != (AdvancedGhostIcon *)0x0) {
                AdvancedGhostIcon::AdvancedGhostIcon_Init
                          (pAVar2,this,cubeModelBody,enableCulling,team,(MethodInfo *)0x0);
                return;
              }
            }
            FUN_?();
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
        }
        FUN_?();
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* MVAdvancedGhost(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVAdvancedGhost::MVAdvancedGhost__ctor
               (MVAdvancedGhost *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AdvancedGhostObject);
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
  if (pPVar1 == (PrefabPool *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  MVBlueprintBase::MVBlueprintBase__ctor_1
            ((MVBlueprintBase *)this,data,(ObjectPrefab *)(pPVar1->fields).mvAdvancedGhostPrefab,
             worldObjects,(MethodInfo *)0x0);
  piVar3 = &(this->fields)._._._.interactionFlags;
  *piVar3 = *piVar3 | 0x200b101;
  pAVar4 = (AdvancedGhostObject *)(this->fields)._._._.component;
  if (pAVar4 == (AdvancedGhostObject *)0x0) {
    (this->fields).advGhostObject = (AdvancedGhostObject *)0x0;
  }
  else {
    bVar5 = (TypeInfo__AdvancedGhostObject->_1).naturalAligment;
    if (((((ObjectPrefab__Class *)pAVar4->klass)->_1).naturalAligment < bVar5) ||
       ((((ObjectPrefab__Class *)pAVar4->klass)->_1).typeHierarchy[(ulonglong)bVar5 - 1] !=
        (Il2CppClass *)TypeInfo__AdvancedGhostObject)) {
      FUN_?(pAVar4);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (this->fields).advGhostObject = pAVar4;
    bVar5 = (TypeInfo__AdvancedGhostObject->_1).naturalAligment;
    if (((((ObjectPrefab__Class *)pAVar4->klass)->_1).naturalAligment < bVar5) ||
       ((((ObjectPrefab__Class *)pAVar4->klass)->_1).typeHierarchy[(ulonglong)bVar5 - 1] !=
        (Il2CppClass *)TypeInfo__AdvancedGhostObject)) {
      FUN_?(pAVar4);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar6 = (uint)((ulonglong)&(this->fields).advGhostObject >> 0xc);
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


/* MVTeam get_Team() */

MVTeam__Enum
Assembly-CSharp.dll::MVAdvancedGhost::MVAdvancedGhost_get_Team
          (MVAdvancedGhost *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__MVTeam);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_team);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)(this->fields)._._._._.data;
  if (this_00 !=
      (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)0x0
     ) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                      (this_00,(Object *)StringLiteral_team,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                       ->klass->rgctx_data[0x21].method);
    if (iVar1 < 0) {
      return MVTeam__Enum_Server;
    }
    this_01 = (this->fields)._._._._.data;
    if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (this_01,(Object *)StringLiteral_team,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pOVar2 != (Object *)0x0) {
        if ((pOVar2->klass->_0).element_class ==
            (TypeInfo__MV__WorldObject__MVTeam->_0).element_class) {
          return *(MVTeam__Enum *)&pOVar2[1].klass;
        }
        FUN_?(pOVar2,TypeInfo__MV__WorldObject__MVTeam);
        pcVar3 = (code *)swi(3);
        MVar4 = (*pcVar3)();
        return MVar4;
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  MVar4 = (*pcVar3)();
  return MVar4;
}

