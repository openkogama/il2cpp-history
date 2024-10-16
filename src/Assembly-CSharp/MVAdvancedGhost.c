
/* Void Destroy() */

void Assembly-CSharp.dll::MVAdvancedGhost::MVAdvancedGhost_Destroy
               (MVAdvancedGhost *this,MethodInfo *method)

{
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (this_00 = (pMVar1->fields)._GameStateController_k__BackingField,
     this_00 != (MVGameModeChangeNotifier *)0x0)) {
    MVGameModeChangeNotifier::MVGameModeChangeNotifier_RemoveObject
              (this_00,(IGameStateControllerSubscriber *)this,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pOVar2 = *(Object_1 **)(in_stack_3 + 0x88);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      (pOVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar4 != 0) {
      pOVar2 = *(Object_1 **)(in_stack_3 + 0x88);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1(pOVar2,(MethodInfo *)0x0);
    }
    if (*(char *)(in_stack_3 + 0xd4) == '\0') {
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar1 == (MVNetworkGame *)0x0) ||
         (pRVar5 = (pMVar1->fields).runtimeVariableNetworkManager,
         pRVar5 == (RuntimeVariableNetworkManager *)0x0)) goto code_?;
      bVar4 = RuntimeVariableNetworkManager::RuntimeVariableNetworkManager_ContainsRuntimeVariables
                        (pRVar5,*(int32_t *)(in_stack_3 + 8),(MethodInfo *)0x0);
      if (bVar4 != 0) {
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar1 == (MVNetworkGame *)0x0) ||
           (pRVar5 = (pMVar1->fields).runtimeVariableNetworkManager,
           pRVar5 == (RuntimeVariableNetworkManager *)0x0)) goto code_?;
        RuntimeVariableNetworkManager::RuntimeVariableNetworkManager_RemoveRuntimeDataVariables
                  (pRVar5,*(int32_t *)(in_stack_3 + 8),(MethodInfo *)0x0);
      }
    }
    return;
  }
code_?:
  uVar6 = func_?(&stack0xfffffff4);
  func_?(uVar6);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void GameStateChanged(UpdateCondition) */

void Assembly-CSharp.dll::MVAdvancedGhost::MVAdvancedGhost_GameStateChanged
               (MVAdvancedGhost *this,UpdateCondition__Enum condition,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_Todo__Fix_this_hack__This_is_sim);
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).advancedGhostIcon;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pAVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pAVar1 = (this->fields).advancedGhostIcon;
    if (pAVar1 == (AdvancedGhostIcon *)0x0) goto code_?;
    (pAVar1->fields).wantsVisible = condition == UpdateCondition__Enum_EDITOR;
    this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)pAVar1,(MethodInfo *)0x0);
    if ((pAVar1->fields).wantsVisible == 0) {
      bVar2 = 0;
    }
    else {
      bVar2 = (pAVar1->fields).visible;
    }
    if (this_02 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_02,bVar2 != 0,(MethodInfo *)0x0);
  }
  this_00 = (this->fields).advancedGhostBehaviour;
  if (this_00 != (AdvancedGhostBehaviour *)0x0) {
    if (condition == UpdateCondition__Enum_EDITOR) {
      (this_00->fields).wantsVisible = 0;
      AdvancedGhostBehaviour::AdvancedGhostBehaviour_SetVisible(this_00,(MethodInfo *)0x0);
      return;
    }
    AdvancedGhostBehaviour::AdvancedGhostBehaviour_SetInitialState(this_00,(MethodInfo *)0x0);
    pAVar3 = (this_00->fields).perception;
    if ((pAVar3 != (AdvancedGhostBehaviour_AdvancedGhostPerception *)0x0) &&
       (this_01 = (pAVar3->fields).syncedInterval, this_01 != (DeterministicSyncedInterval *)0x0)) {
      DeterministicSyncedInterval::DeterministicSyncedInterval_Update(this_01,(MethodInfo *)0x0);
      (this_00->fields).wantsVisible = 1;
      AdvancedGhostBehaviour::AdvancedGhostBehaviour_SetVisible(this_00,(MethodInfo *)0x0);
      pAVar4 = (this->fields).editableCubeModelWrapper;
      if (pAVar4 != (AdvancedGhostCubeModelWrapper *)0x0) {
        if ((pAVar4->fields).cubeModelIsBeingEdited == 0) {
          return;
        }
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                  ((Object *)StringLiteral_Todo__Fix_this_hack__This_is_sim,(MethodInfo *)0x0);
        pAVar4 = (this->fields).editableCubeModelWrapper;
        if (pAVar4 != (AdvancedGhostCubeModelWrapper *)0x0) {
          AdvancedGhostCubeModelWrapper::AdvancedGhostCubeModelWrapper_ExitEdit
                    (pAVar4,(MethodInfo *)0x0);
          pAVar4 = (this->fields).editableCubeModelWrapper;
          if (((pAVar4 != (AdvancedGhostCubeModelWrapper *)0x0) &&
              (pMVar5 = (pAVar4->fields)._.cubeModelBase, pMVar5 != (MVCubeModelInstance *)0x0)) &&
             ((pMVar5->fields)._._.gameObject != (GameObject *)0x0)) {
            if (pcRam_? == (code *)0x0) {
              pcRam_? = (code *)func_?();
            }
            (*pcRam_?)();
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Bounds GetLocalBounds(BoundsContext) */

Bounds * Assembly-CSharp.dll::MVAdvancedGhost::MVAdvancedGhost_GetLocalBounds
                   (Bounds *__return_storage_ptr__,MVAdvancedGhost *this,
                   BoundsContext__Enum boundsContext,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar2 = (pVVar1->upVector).x;
  fVar3 = (pVVar1->upVector).y;
  fVar4 = (pVVar1->upVector).z;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar5 = (pVVar1->oneVector).x;
  uVar6 = (pVVar1->oneVector).y;
  fVar7 = (float)uVar5 * _UNK_?;
  fVar8 = (float)uVar6 * _UNK_?;
  fVar9 = (pVVar1->oneVector).z * _UNK_?;
  (__return_storage_ptr__->m_Center).x = fVar2;
  fVar2 = _UNK_?;
  (__return_storage_ptr__->m_Center).y = fVar3;
  fVar9 = fVar9 * _UNK_?;
  (__return_storage_ptr__->m_Center).z = fVar4;
  (__return_storage_ptr__->m_Extents).x = fVar7 * fVar2;
  (__return_storage_ptr__->m_Extents).y = fVar8 * fVar2;
  (__return_storage_ptr__->m_Extents).z = fVar9;
  return __return_storage_ptr__;
}


/* Vector3 GetTargetPosition() */

Vector3 * Assembly-CSharp.dll::MVAdvancedGhost::MVAdvancedGhost_GetTargetPosition
                    (Vector3 *__return_storage_ptr__,MVAdvancedGhost *this,MethodInfo *method)

{
  this_00 = (this->fields).advancedGhostBehaviour;
  if (this_00 != (AdvancedGhostBehaviour *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this_00,(MethodInfo *)0x0);
    if (this_01 != (Transform *)0x0) {
      pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         (&VStack_2,this_01,(MethodInfo *)0x0);
      uVar3._0_4_ = pVVar1->x;
      uVar3._4_4_ = pVVar1->y;
      fVar4 = pVVar1->z;
      if (cRam_? == '\0') {
        VStack_2.x = 3.3643188e-29;
        VStack_2.y = 2.8116574e-28;
        func_?();
        cRam_? = '\x01';
      }
      pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
      uVar6 = (pVVar5->upVector).x;
      uVar7 = (pVVar5->upVector).y;
      fVar8 = (pVVar5->upVector).z;
      __return_storage_ptr__->x = (float)uVar3 + (float)uVar6;
      __return_storage_ptr__->y = (float)((ulonglong)uVar3 >> 0x20) + (float)uVar7;
      __return_storage_ptr__->z = fVar8 + fVar4;
      return __return_storage_ptr__;
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  pVVar1 = (Vector3 *)(*pcVar9)();
  return pVVar1;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVAdvancedGhost::MVAdvancedGhost_Initialize
               (MVAdvancedGhost *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<float,_MVPlayer,_MV::Common::PlayerKilledByType>);
    func_?(&TypeInfo__AdvancedGhostCubeModelWrapper);
    func_?(&MethodInfo__ClientSideNPCInteractable__IsDead__);
    func_?(&TypeInfo__System__Func<bool>);
    func_?(&
                    AdvancedGhostMotor_MethodInfo__UnityEngine__GameObject__AddComponent<AdvancedGhostMotor>__
                   );
    func_?(&
                    ClientSideNPCInteractable_MethodInfo__UnityEngine__GameObject__AddComponent<ClientSideNPCInteractable>__
                   );
    func_?(&
                    AdvancedGhostBehaviour_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<AdvancedGhostBehaviour>__
                   );
    func_?(&
                    ClientSideNPCInteractionHandler_MethodInfo__UnityEngine__GameObject__GetComponent<ClientSideNPCInteractionHandler>__
                   );
    func_?(&
                    MethodInfo__MVAdvancedGhost__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                   );
    func_?(&
                    MethodInfo__MVAdvancedGhost__ReceiveDamage_float__MVPlayer__MV__Common__PlayerKilledByType_
                   );
    func_?(&TypeInfo__MVCubeModelInstance);
    func_?(&
                    TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                   );
    func_?(&StringLiteral_BodyCubeModel);
    cRam_? = '\x01';
  }
  MVBlueprintBase::MVBlueprintBase_Initialize((MVBlueprintBase *)this,(MethodInfo *)0x0);
  cubeModelBase =
       (MVCubeModelInstance *)
       MVBlueprintBase::MVBlueprintBase_GetChild
                 ((MVBlueprintBase *)this,StringLiteral_BodyCubeModel,(MethodInfo *)0x0);
  if ((cubeModelBase != (MVCubeModelInstance *)0x0) &&
     (((cubeModelBase->klass->_1).naturalAligment <
       (TypeInfo__MVCubeModelInstance->_1).naturalAligment ||
      ((MVCubeModelInstance__Class *)
       (cubeModelBase->klass->_1).typeHierarchy
       [(TypeInfo__MVCubeModelInstance->_1).naturalAligment - 1] != TypeInfo__MVCubeModelInstance)))
     ) {
    func_?(cubeModelBase,TypeInfo__MVCubeModelInstance);
    goto code_?;
  }
  pGVar1 = (this->fields)._._._.gameObject;
  if (pGVar1 == (GameObject *)0x0) goto code_?;
  pCVar2 = (ClientSideNPCInteractionHandler *)
           UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                     (pGVar1,
                      ClientSideNPCInteractionHandler_MethodInfo__UnityEngine__GameObject__GetComponent<ClientSideNPCInteractionHandler>__
                     );
  (this->fields).interactionHandler = pCVar2;
  func_?(&(this->fields).interactionHandler,pCVar2);
  pCVar2 = (this->fields).interactionHandler;
  if (pCVar2 == (ClientSideNPCInteractionHandler *)0x0) goto code_?;
  MVComponent::MVComponent_FindWorldObjectParent((MVComponent *)pCVar2,(MethodInfo *)0x0);
  pCVar2 = (this->fields).interactionHandler;
  if (pCVar2 == (ClientSideNPCInteractionHandler *)0x0) goto code_?;
  pGVar1 = (pCVar2->fields).attachmentObjectForHealRay;
  (this->fields).attachmentObject = pGVar1;
  func_?(&(this->fields).attachmentObject,pGVar1);
  pGVar1 = (this->fields)._._._.gameObject;
  if (pGVar1 == (GameObject *)0x0) goto code_?;
  pCVar3 = (ClientSideNPCInteractable *)
           UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                     (pGVar1,
                      ClientSideNPCInteractable_MethodInfo__UnityEngine__GameObject__AddComponent<ClientSideNPCInteractable>__
                     );
  (this->fields).interactable = pCVar3;
  func_?(&(this->fields).interactable,pCVar3);
  pCVar3 = (this->fields).interactable;
  this_02 = (Action_3_Single_Object_ByteEnum_ *)
            func_?(
                           TypeInfo__System__Action<float,_MVPlayer,_MV::Common::PlayerKilledByType>
                           );
  mscorlib.dll::System::Action`3[Single,Object,ByteEnum]::Action_3_Single_Object_ByteEnum___ctor
            (this_02,(Object *)this,
             MethodInfo__MVAdvancedGhost__ReceiveDamage_float__MVPlayer__MV__Common__PlayerKilledByType_
             ,(MethodInfo *)0x0);
  if (pCVar3 == (ClientSideNPCInteractable *)0x0) goto code_?;
  ClientSideNPCInteractable::ClientSideNPCInteractable_Init
            (pCVar3,(Action_3_Single_MVPlayer_MV_Common_PlayerKilledByType_ *)this_02,
             (MethodInfo *)0x0);
  pGVar1 = (this->fields)._._._.gameObject;
  if (pGVar1 == (GameObject *)0x0) goto code_?;
  advancedGhostMotor =
       (AdvancedGhostMotor *)
       UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                 (pGVar1,
                  AdvancedGhostMotor_MethodInfo__UnityEngine__GameObject__AddComponent<AdvancedGhostMotor>__
                 );
  pGVar1 = (this->fields)._._._.gameObject;
  if (pGVar1 == (GameObject *)0x0) goto code_?;
  pAVar4 = (AdvancedGhostBehaviour *)
           UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentInChildren_1
                     (pGVar1,
                      AdvancedGhostBehaviour_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<AdvancedGhostBehaviour>__
                     );
  (this->fields).advancedGhostBehaviour = pAVar4;
  func_?(&(this->fields).advancedGhostBehaviour,pAVar4);
  pAVar4 = (this->fields).advancedGhostBehaviour;
  pCVar3 = (this->fields).interactable;
  this_03 = (Func_1_System_Threading_Tasks_VoidTaskResult_ *)
            func_?(TypeInfo__System__Func<bool>);
  mscorlib.dll::System::Func`1[System::Threading::Tasks::VoidTaskResult]::
  Func_1_System_Threading_Tasks_VoidTaskResult___ctor
            (this_03,(Object *)pCVar3,MethodInfo__ClientSideNPCInteractable__IsDead__,
             (MethodInfo *)0x0);
  if (pAVar4 == (AdvancedGhostBehaviour *)0x0) goto code_?;
  AdvancedGhostBehaviour::AdvancedGhostBehaviour_Init
            (pAVar4,(MVCubeModelBase *)cubeModelBase,advancedGhostMotor,(Func_1_Boolean_ *)this_03,
             (this->fields)._._._._.id,(MethodInfo *)0x0);
  pAVar4 = (this->fields).advancedGhostBehaviour;
  if ((pAVar4 == (AdvancedGhostBehaviour *)0x0) ||
     (this_00 = (pAVar4->fields).GhostVisualization, this_00 == (AdvancedGhostVisualizaton *)0x0))
  goto code_?;
  transformParent =
       UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                 ((Component *)this_00,(MethodInfo *)0x0);
  this_04 = (AdvancedGhostCubeModelWrapper *)
            func_?(TypeInfo__AdvancedGhostCubeModelWrapper);
  AdvancedGhostCubeModelWrapper::AdvancedGhostCubeModelWrapper__ctor
            (this_04,cubeModelBase,transformParent,(MethodInfo *)0x0);
  (this->fields).editableCubeModelWrapper = this_04;
  func_?(&(this->fields).editableCubeModelWrapper,this_04);
  pAVar4 = (this->fields).advancedGhostBehaviour;
  if (pAVar4 == (AdvancedGhostBehaviour *)0x0) goto code_?;
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)pAVar4,(MethodInfo *)0x0);
  pAVar4 = (this->fields).advancedGhostBehaviour;
  if ((pAVar4 == (AdvancedGhostBehaviour *)0x0) || (advancedGhostMotor == (AdvancedGhostMotor *)0x0)
     ) goto code_?;
  AdvancedGhostMotor::AdvancedGhostMotor_Init
            (advancedGhostMotor,pGVar1,(MVInteractableBase *)(this->fields).interactable,
             (pAVar4->fields).cullingSubscriberBase,(MethodInfo *)0x0);
  MVar5 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
  if (MVar5 == MVGameMode__Enum_Edit) {
    MVAdvancedGhost_SetupEditorIcon(this,(MVCubeModelBase *)cubeModelBase,1,(MethodInfo *)0x0);
    pUVar6 = (this->fields)._._._.PositionChanged;
    this_05 = (UnityAction_2_System_Object_System_Object_ *)
              func_?(
                             TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (this_05,(Object *)this,
               MethodInfo__MVAdvancedGhost__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
               ,(MethodInfo *)0x0);
    pDVar7 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pUVar6,(Delegate *)this_05,(MethodInfo *)0x0);
    if (pDVar7 != (Delegate *)0x0) {
      pUVar6 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)func_?();
      if (pUVar6 != (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
        (this->fields)._._._.PositionChanged = pUVar6;
        iVar8 = func_?();
        if (iVar8 != 0) goto code_?;
      }
code_?:
      func_?();
      goto code_?;
    }
    (this->fields)._._._.PositionChanged =
         (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
code_?:
    func_?();
  }
  pMVar9 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar9 != (MVNetworkGame *)0x0) &&
     (this_01 = (pMVar9->fields)._GameStateController_k__BackingField,
     this_01 != (MVGameModeChangeNotifier *)0x0)) {
    MVGameModeChangeNotifier::MVGameModeChangeNotifier_AddUpdateObject
              (this_01,(IGameStateControllerSubscriber *)this,(MethodInfo *)0x0);
    (*(code *)(this->klass->vtable).OnDataUpdate.method)
              (this,(this->klass->vtable).OnRunTimeDataUpdate.methodPtr);
    return;
  }
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void InitializeInventory() */

void Assembly-CSharp.dll::MVAdvancedGhost::MVAdvancedGhost_InitializeInventory
               (MVAdvancedGhost *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    AdvancedGhostBehaviour_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<AdvancedGhostBehaviour>__
                   );
    func_?(&TypeInfo__MVCubeModelBase);
    func_?(&StringLiteral_BodyCubeModel);
    func_?(&StringLiteral_Default);
    cRam_? = '\x01';
  }
  MVGroup::MVGroup_InitializeInventory((MVGroup *)this,(MethodInfo *)0x0);
  pGVar1 = (this->fields)._._._.gameObject;
  if (pGVar1 != (GameObject *)0x0) {
    pAVar2 = (AdvancedGhostBehaviour *)
             UnityEngine.CoreModule.dll::UnityEngine::GameObject::
             GameObject_GetComponentInChildren_1
                       (pGVar1,
                        AdvancedGhostBehaviour_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<AdvancedGhostBehaviour>__
                       );
    (this->fields).advancedGhostBehaviour = pAVar2;
    func_?(&(this->fields).advancedGhostBehaviour,pAVar2);
    cubeModelBody =
         (MVCubeModelBase *)
         MVBlueprintBase::MVBlueprintBase_GetChild
                   ((MVBlueprintBase *)this,StringLiteral_BodyCubeModel,(MethodInfo *)0x0);
    if (cubeModelBody != (MVCubeModelBase *)0x0) {
      if (((TypeInfo__MVCubeModelBase->_1).naturalAligment <=
           (cubeModelBody->klass->_1).naturalAligment) &&
         ((MVCubeModelBase__Class *)
          (cubeModelBody->klass->_1).typeHierarchy
          [(TypeInfo__MVCubeModelBase->_1).naturalAligment - 1] == TypeInfo__MVCubeModelBase)) {
        MVAdvancedGhost_SetupEditorIcon(this,cubeModelBody,0,(MethodInfo *)0x0);
        pGVar1 = (cubeModelBody->fields)._.gameObject;
        if (pGVar1 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar1,0,(MethodInfo *)0x0);
          this_00 = (this->fields).advancedGhostIcon;
          if (this_00 != (AdvancedGhostIcon *)0x0) {
            pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)this_00,(MethodInfo *)0x0);
            layer = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                              (StringLiteral_Default,(MethodInfo *)0x0);
            LayerUtil::LayerUtil_SetLayerRecursively_4(pGVar1,layer,(MethodInfo *)0x0);
            pAVar2 = (this->fields).advancedGhostBehaviour;
            if (pAVar2 != (AdvancedGhostBehaviour *)0x0) {
              pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)pAVar2,(MethodInfo *)0x0);
              if (pGVar1 != (GameObject *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar1,0,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
        goto code_?;
      }
      func_?(cubeModelBody,TypeInfo__MVCubeModelBase);
    }
    MVAdvancedGhost_SetupEditorIcon(this,(MVCubeModelBase *)0x0,0,(MethodInfo *)0x0);
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Boolean IsOnSameTeam(MVTeam) */

bool Assembly-CSharp.dll::MVAdvancedGhost::MVAdvancedGhost_IsOnSameTeam
               (MVAdvancedGhost *this,MVTeam__Enum team,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pAVar2 = (this->fields).advancedGhostBehaviour;
  if ((pAVar2 != (AdvancedGhostBehaviour *)0x0) &&
     (pAVar3 = (pAVar2->fields).perception,
     pAVar3 != (AdvancedGhostBehaviour_AdvancedGhostPerception *)0x0)) {
    return (pAVar3->fields).alliedTeam == team;
  }
  uVar4 = func_?(auStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  bVar7 = (*pcVar6)();
  return bVar7;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::MVAdvancedGhost::MVAdvancedGhost_OnDataUpdate
               (MVAdvancedGhost *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__System__Single);
    func_?(&StringLiteral_Radius);
    func_?(&StringLiteral_Speed);
    func_?(&StringLiteral_Lives);
    func_?(&StringLiteral_team);
    cRam_? = '\x01';
  }
  this_01 = this;
  pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
           (this->fields)._._._._.data;
  pAVar2 = (this->fields).advancedGhostBehaviour;
  if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
    TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
             UIElements::TextureId]::
             Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                       (pDVar1,(Object *)StringLiteral_Speed,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    uVar4 = CONCAT44(TypeInfo__System__Single,TVar3.m_Index);
    if ((pAVar2 != (AdvancedGhostBehaviour *)0x0) && (TVar3.m_Index != 0)) {
      if (*(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) !=
          (TypeInfo__System__Single->_0).element_class) goto code_?;
      puVar5 = (undefined4 *)func_?();
      this = (MVAdvancedGhost *)*puVar5;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pOVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
                ObscuredFloat_op_Implicit
                          ((ObscuredFloat *)&stack0xffffffe4,(float)this,(MethodInfo *)0x0);
      AVar7 = pOVar6->hiddenValue;
      pBVar8 = pOVar6->hiddenValueOld;
      fVar9 = pOVar6->fakeValue;
      bVar10 = pOVar6->inited;
      uVar11 = *(undefined3 *)&pOVar6->field_0x11;
      (pAVar2->fields).speed.currentCryptoKey = pOVar6->currentCryptoKey;
      (pAVar2->fields).speed.hiddenValue = AVar7;
      (pAVar2->fields).speed.hiddenValueOld = pBVar8;
      (pAVar2->fields).speed.fakeValue = fVar9;
      (pAVar2->fields).speed.inited = bVar10;
      *(undefined3 *)&(pAVar2->fields).speed.field_0x11 = uVar11;
      func_?(&(pAVar2->fields).speed.hiddenValueOld);
      fVar9 = (pAVar2->fields).minPerceptionRadius;
      this = (MVAdvancedGhost *)
             Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
             ObscuredFloat_op_Implicit_1((pAVar2->fields).speed,(MethodInfo *)0x0);
      (pAVar2->fields).perceptionRadius =
           (float)this * (pAVar2->fields).speedPerceptionFactor + fVar9;
      pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
               (this_01->fields)._._._._.data;
      pAVar2 = (this_01->fields).advancedGhostBehaviour;
      if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
        TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                 ::UIElements::TextureId]::
                 Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                           (pDVar1,(Object *)StringLiteral_Radius,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        uVar4 = CONCAT44(TypeInfo__System__Single,TVar3.m_Index);
        if ((pAVar2 != (AdvancedGhostBehaviour *)0x0) && (TVar3.m_Index != 0)) {
          if (*(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) !=
              (TypeInfo__System__Single->_0).element_class) goto code_?;
          pfVar12 = (float *)func_?(TVar3.m_Index);
          (pAVar2->fields).radius = *pfVar12;
          pAVar13 = (this_01->fields).advancedGhostIcon;
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          bVar10 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                             ((Object_1 *)pAVar13,(Object_1 *)0x0,(MethodInfo *)0x0);
          if (bVar10 == 0) goto code_?;
          pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                   (this_01->fields)._._._._.data;
          pAVar13 = (this_01->fields).advancedGhostIcon;
          if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
            TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     Object,UnityEngine::UIElements::TextureId]::
                     Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                               (pDVar1,(Object *)StringLiteral_Radius,
                                MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                               );
            uVar4 = CONCAT44(TypeInfo__System__Single,TVar3.m_Index);
            if ((pAVar13 != (AdvancedGhostIcon *)0x0) && (TVar3.m_Index != 0)) {
              if (*(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) !=
                  (TypeInfo__System__Single->_0).element_class) goto code_?;
              puVar5 = (undefined4 *)func_?(TVar3.m_Index);
              this = (MVAdvancedGhost *)*puVar5;
              MVar14 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
              if (MVar14 == MVGameMode__Enum_Edit) {
                this_00 = (pAVar13->fields).lineRangeIndicator;
                if (this_00 == (LineRangeIndicator *)0x0) goto code_?;
                LineRangeIndicator::LineRangeIndicator_SetRange
                          (this_00,(float)this,(MethodInfo *)0x0);
              }
code_?:
              MVar15 = MVAdvancedGhost_get_Team(this_01,(MethodInfo *)0x0);
              if (MVar15 == MVTeam__Enum_None) {
                this_02 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                           *)func_?(
                                            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                            );
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::StyleComplexSelector+PseudoStateData]::
                Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                          (this_02,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                          );
                this = (MVAdvancedGhost *)0x0;
                value = (Object *)func_?(TypeInfo__System__Int32,&this);
                if (this_02 !=
                    (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                     *)0x0) {
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__Add
                            ((Dictionary_2_System_Object_System_Object_ *)this_02,
                             (Object *)StringLiteral_team,value,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                            );
                  this_03 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                      ((MethodInfo *)0x0);
                  if (this_03 != (MVNetworkGame_OperationRequests *)0x0) {
                    MVNetworkGame+OperationRequests::
                    MVNetworkGame_OperationRequests_RemoveWorldObjectDataPartial_1
                              (this_03,(this_01->fields)._._._._.id,
                               (Dictionary_2_System_Object_System_Object_ *)this_02,
                               (MethodInfo *)0x0);
                    goto code_?;
                  }
                }
              }
              else {
                MVar15 = MVAdvancedGhost_get_Team(this_01,(MethodInfo *)0x0);
                pAVar16 = (this_01->fields).advGhostObject;
                if ((pAVar16 != (AdvancedGhostObject *)0x0) &&
                   (pAVar17 = (pAVar16->fields).tintObject, pAVar17 != (AdvancedGhostTintObject *)0x0))
                {
                  (*(code *)(pAVar17->klass->vtable).TeamTint.method)
                            (pAVar17,MVar15,(pAVar17->klass->vtable).Tint_1.methodPtr);
                  pAVar2 = (this_01->fields).advancedGhostBehaviour;
                  if ((pAVar2 != (AdvancedGhostBehaviour *)0x0) &&
                     (pAVar18 = (pAVar2->fields).perception,
                     pAVar18 != (AdvancedGhostBehaviour_AdvancedGhostPerception *)0x0)) {
                    (pAVar18->fields).alliedTeam = MVar15;
                    pAVar19 = (pAVar2->fields).weapon;
                    if (pAVar19 != (AdvancedGhostBodyRotateWeapon *)0x0) {
                      (pAVar19->fields).alliedTeam = MVar15;
                      pCVar20 = (this_01->fields).interactionHandler;
                      if (pCVar20 != (ClientSideNPCInteractionHandler *)0x0) {
                        (pCVar20->fields).team = MVar15;
                        MVar14 = MVGameControllerBase::MVGameControllerBase_get_GameMode
                                           ((MethodInfo *)0x0);
                        if (MVar14 == MVGameMode__Enum_Edit) {
                          pAVar13 = (this_01->fields).advancedGhostIcon;
                          if (pAVar13 == (AdvancedGhostIcon *)0x0) goto code_?;
                          AdvancedGhostIcon::AdvancedGhostIcon_set_Team
                                    (pAVar13,MVar15,(MethodInfo *)0x0);
                        }
code_?:
                        pAVar2 = (this_01->fields).advancedGhostBehaviour;
                        if (pAVar2 != (AdvancedGhostBehaviour *)0x0) {
                          (pAVar2->fields).lives = -1;
                          (pAVar2->fields).maxLives = -1;
                          pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                   (this_01->fields)._._._._.data;
                          if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_
                                         *)0x0) {
                            bVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System
                                     ::Object,UnityEngine::UIElements::TextureId]::
                                     Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                                               (pDVar1,(Object *)StringLiteral_Lives,
                                                MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                                               );
                            if (bVar10 == 0) {
                              return;
                            }
                            pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *
                                     )(this_01->fields)._._._._.data;
                            pAVar2 = (this_01->fields).advancedGhostBehaviour;
                            if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_
                                           *)0x0) {
                              TVar3 = mscorlib.dll::System::Collections::Generic::
                                       Dictionary`2[System::Object,UnityEngine::UIElements::
                                       TextureId]::
                                       Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                                 (pDVar1,(Object *)StringLiteral_Lives,
                                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                                 );
                              uVar4 = CONCAT44(TypeInfo__System__Int32,TVar3.m_Index);
                              if ((pAVar2 != (AdvancedGhostBehaviour *)0x0) && (TVar3.m_Index != 0)
                                 ) {
                                if (*(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) ==
                                    (TypeInfo__System__Int32->_0).element_class) {
                                  piVar21 = (int32_t *)func_?();
                                  iVar22 = *piVar21;
                                  (pAVar2->fields).lives = iVar22;
                                  (pAVar2->fields).maxLives = iVar22;
                                  return;
                                }
                                goto code_?;
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
        }
      }
    }
  }
code_?:
  uVar4 = func_?();
code_?:
  func_?(uVar4);
  pcVar23 = (code *)swi(3);
  (*pcVar23)();
  return;
}


/* Boolean OnEnterObject(EditorStateMachine) */

bool Assembly-CSharp.dll::MVAdvancedGhost::MVAdvancedGhost_OnEnterObject
               (MVAdvancedGhost *this,EditorStateMachine *e,MethodInfo *method)

{
  this_00 = (this->fields).advancedGhostIcon;
  if (this_00 != (AdvancedGhostIcon *)0x0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this_00,(MethodInfo *)0x0);
    if (pGVar1 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,0,(MethodInfo *)0x0);
      this_01 = (this->fields).editableCubeModelWrapper;
      pTVar2 = (this->fields)._._._.transform;
      if (this_01 != (AdvancedGhostCubeModelWrapper *)0x0) {
        bVar3 = cRam_? == '\0';
        (this_01->fields).cubeModelIsBeingEdited = 1;
        if (bVar3) {
          func_?();
          cRam_? = '\x01';
        }
        pMVar4 = (this_01->fields)._.cubeModelBase;
        if ((pMVar4 != (MVCubeModelInstance *)0x0) &&
           (this_02 = (pMVar4->fields)._._.transform, this_02 != (Transform *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                    (this_02,pTVar2,(MethodInfo *)0x0);
          pMVar4 = (this_01->fields)._.cubeModelBase;
          if (pMVar4 != (MVCubeModelInstance *)0x0) {
            pTVar2 = (pMVar4->fields)._._.transform;
            if (cRam_? == '\0') {
              e = (EditorStateMachine *)&UNK_?;
              func_?();
              cRam_? = '\x01';
            }
            if (pTVar2 != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                        (pTVar2,TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,
                         (MethodInfo *)0x0);
              pMVar4 = (this_01->fields)._.cubeModelBase;
              if (pMVar4 != (MVCubeModelInstance *)0x0) {
                pTVar2 = (pMVar4->fields)._._.transform;
                if (cRam_? == '\0') {
                  func_?();
                  cRam_? = '\x01';
                }
                if (pTVar2 != (Transform *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                            (pTVar2,TypeInfo__UnityEngine__Quaternion->static_fields->
                                    identityQuaternion,(MethodInfo *)0x0);
                  pMVar4 = (this_01->fields)._.cubeModelBase;
                  if ((pMVar4 != (MVCubeModelInstance *)0x0) &&
                     (pGVar1 = (pMVar4->fields)._._.gameObject, pGVar1 != (GameObject *)0x0)) {
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              (pGVar1,1,(MethodInfo *)0x0);
                    pMVar4 = (this_01->fields)._.cubeModelBase;
                    if ((pMVar4 != (MVCubeModelInstance *)0x0) &&
                       (pTVar2 = (pMVar4->fields)._._.transform, pTVar2 != (Transform *)0x0)) {
                      pOVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                               Component_GetComponents_1
                                         ((Component *)pTVar2,
                                          UnityEngine__MonoBehaviour__MethodInfo__UnityEngine__Component__GetComponents<UnityEngine::MonoBehaviour>______
                                         );
                      uVar6 = 0;
                      if (pOVar5 != (Object__Array *)0x0) {
                        ppOVar7 = pOVar5->vector;
                        while( true ) {
                          if ((int)pOVar5->max_length <= (int)uVar6) {
                            bVar8 = EditableCubeModelWrapper::EditableCubeModelWrapper_OnEnterObject
                                              ((EditableCubeModelWrapper *)this_01,e,
                                               (MethodInfo *)0x0);
                            return bVar8;
                          }
                          if (pOVar5->max_length <= uVar6) break;
                          if ((Behaviour *)*ppOVar7 == (Behaviour *)0x0) goto code_?;
                          UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                                    ((Behaviour *)*ppOVar7,0,(MethodInfo *)0x0);
                          uVar6 = uVar6 + 1;
                          ppOVar7 = ppOVar7 + 1;
                        }
                        goto code_?;
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
  func_?();
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  bVar8 = (*pcVar9)();
  return bVar8;
}


/* Boolean OnExitObject(EditorStateMachine) */

bool Assembly-CSharp.dll::MVAdvancedGhost::MVAdvancedGhost_OnExitObject
               (MVAdvancedGhost *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_On_exit_object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
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
        pAVar2 = pAVar1->klass;
        pIStack3 = pAVar2[1]._0.image;
        pEStack4 = e;
        bVar5 = (*(code *)(pAVar2->vtable).OnExitObject.method)();
        return bVar5;
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  bVar5 = (*pcVar6)();
  return bVar5;
}


/* Void OnPositionChanged(MVWorldObjectClient, PositionChangedEventArgs) */

void Assembly-CSharp.dll::MVAdvancedGhost::MVAdvancedGhost_OnPositionChanged
               (MVAdvancedGhost *this,MVWorldObjectClient *arg0,
               PositionChangedEventArgs *positionChangedEventArgs,MethodInfo *method)

{
  this_00 = (this->fields).advancedGhostBehaviour;
  if (this_00 != (AdvancedGhostBehaviour *)0x0) {
    this_01 = (this_00->fields).cullingSubscriberBase;
    this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this_00,(MethodInfo *)0x0);
    if (this_02 != (Transform *)0x0) {
      pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)&stack0xfffffff0,this_02,(MethodInfo *)0x0);
      if (this_01 != (CullingSubscriberBase *)0x0) {
        CullingSubscriberBase::CullingSubscriberBase_set_Position(this_01,*pVVar1,(MethodInfo *)0x0)
        ;
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ReceiveDamage(Single, MVPlayer, PlayerKilledByType) */

void Assembly-CSharp.dll::MVAdvancedGhost::MVAdvancedGhost_ReceiveDamage
               (MVAdvancedGhost *this,float amount,MVPlayer *damageDealer,
               PlayerKilledByType__Enum damageType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__SharedWorldObjectGameplayFunctions__Explosion);
    cRam_? = '\x01';
  }
  if (0.0 < amount) {
    pAVar1 = (this->fields).advancedGhostBehaviour;
    if (((pAVar1 == (AdvancedGhostBehaviour *)0x0) ||
        (pAVar2 = (pAVar1->fields).GhostVisualization, pAVar2 == (AdvancedGhostVisualizaton *)0x0))
       || (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pAVar2,(MethodInfo *)0x0), pGVar3 == (GameObject *)0x0))
    goto code_?;
    bVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                      (pGVar3,(MethodInfo *)0x0);
    if (bVar4 != 0) {
      this_01 = (pAVar2->fields).receiveDamage;
      if (this_01 == (AudioSource *)0x0) goto code_?;
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play_1
                (this_01,(MethodInfo *)0x0);
      this_00 = (pAVar2->fields).blinker;
joined_?:
      if (this_00 == (AdvancedGhostBlinker *)0x0) goto code_?;
      BlinkerBase::BlinkerBase_StartBlinking
                ((BlinkerBase *)this_00,in_stack_5,in_stack_6,in_stack_7);
    }
  }
  else if (amount < 0.0) {
    pAVar1 = (this->fields).advancedGhostBehaviour;
    if (((pAVar1 == (AdvancedGhostBehaviour *)0x0) ||
        (pAVar2 = (pAVar1->fields).GhostVisualization, pAVar2 == (AdvancedGhostVisualizaton *)0x0))
       || (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pAVar2,(MethodInfo *)0x0), pGVar3 == (GameObject *)0x0))
    goto code_?;
    bVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                      (pGVar3,(MethodInfo *)0x0);
    if (bVar4 != 0) {
      this_00 = (pAVar2->fields).blinker;
      goto joined_?;
    }
  }
  this_02 = (this->fields).interactable;
  if (this_02 != (ClientSideNPCInteractable *)0x0) {
    bVar4 = ClientSideNPCInteractable::ClientSideNPCInteractable_IsDead(this_02,(MethodInfo *)0x0);
    if (bVar4 == 0) {
      return;
    }
    ignoreIDs = MVWorldObjectClient::MVWorldObjectClient_get_WorldIDsRecursive
                          ((MVWorldObjectClient *)this,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pPVar8 = TypeInfo__PrefabPool->static_fields->instance;
    if (pPVar8 != (PrefabPool *)0x0) {
      particlePrefab = (pPVar8->fields).particleExplosion;
      pAVar1 = (this->fields).advancedGhostBehaviour;
      if (((pAVar1 != (AdvancedGhostBehaviour *)0x0) &&
          (pAVar2 = (pAVar1->fields).GhostVisualization, pAVar2 != (AdvancedGhostVisualizaton *)0x0)
          ) && (this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform((Component *)pAVar2,(MethodInfo *)0x0),
               this_03 != (Transform *)0x0)) {
        pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           ((Vector3 *)&stack0xffffffe8,this_03,(MethodInfo *)0x0);
        position = *pVVar9;
        if ((TypeInfo__SharedWorldObjectGameplayFunctions__Explosion->_1).cctor_finished_or_no_cctor
            == 0) {
          func_?();
        }
        SharedWorldObjectGameplayFunctions+Explosion::
        SharedWorldObjectGameplayFunctions_Explosion_Explode
                  (particlePrefab,position,20.0,5.0,1000.0,1,(ExplosionEvent *)0x0,ignoreIDs,
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::MVAdvancedGhost::MVAdvancedGhost_Reset
               (MVAdvancedGhost *this,MethodInfo *method)

{
  this_00 = (this->fields).interactable;
  if (this_00 != (ClientSideNPCInteractable *)0x0) {
    ClientSideNPCInteractable::ClientSideNPCInteractable_Reset(this_00,(MethodInfo *)0x0);
    if ((this->fields).advancedGhostBehaviour != (AdvancedGhostBehaviour *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        func_?(&TypeInfo__System__Type);
        cRam_? = '\x01';
      }
      (in_stack_1->fields).respawn = 1;
      handle = TypeRef__AdvancedGhostBehaviour__Idle;
      (in_stack_1->fields).clearEffectsBecauseOfReset = 1;
      if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Type);
      }
      type = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
      AdvancedGhostBehaviour::AdvancedGhostBehaviour_SetCurrentState
                (in_stack_1,type,(MethodInfo *)0x0);
      AdvancedGhostBehaviour::AdvancedGhostBehaviour_SetVisible(in_stack_1,(MethodInfo *)0x0)
      ;
      (in_stack_1->fields).lives = (in_stack_1->fields).maxLives;
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetGameMode(Boolean) */

void Assembly-CSharp.dll::MVAdvancedGhost::MVAdvancedGhost_SetGameMode
               (MVAdvancedGhost *this,bool isPlayMode,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_Todo__Fix_this_hack__This_is_sim);
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).advancedGhostIcon;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pAVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pAVar1 = (this->fields).advancedGhostIcon;
    if (pAVar1 == (AdvancedGhostIcon *)0x0) goto code_?;
    (pAVar1->fields).wantsVisible = isPlayMode ^ 1;
    this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)pAVar1,(MethodInfo *)0x0);
    if ((pAVar1->fields).wantsVisible == 0) {
      bVar2 = 0;
    }
    else {
      bVar2 = (pAVar1->fields).visible;
    }
    if (this_02 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_02,bVar2 != 0,(MethodInfo *)0x0);
  }
  this_00 = (this->fields).advancedGhostBehaviour;
  if (this_00 != (AdvancedGhostBehaviour *)0x0) {
    if (isPlayMode == 0) {
      (this_00->fields).wantsVisible = 0;
      AdvancedGhostBehaviour::AdvancedGhostBehaviour_SetVisible(this_00,(MethodInfo *)0x0);
      return;
    }
    AdvancedGhostBehaviour::AdvancedGhostBehaviour_SetInitialState(this_00,(MethodInfo *)0x0);
    pAVar3 = (this_00->fields).perception;
    if ((pAVar3 != (AdvancedGhostBehaviour_AdvancedGhostPerception *)0x0) &&
       (this_01 = (pAVar3->fields).syncedInterval, this_01 != (DeterministicSyncedInterval *)0x0)) {
      DeterministicSyncedInterval::DeterministicSyncedInterval_Update(this_01,(MethodInfo *)0x0);
      (this_00->fields).wantsVisible = 1;
      AdvancedGhostBehaviour::AdvancedGhostBehaviour_SetVisible(this_00,(MethodInfo *)0x0);
      pAVar4 = (this->fields).editableCubeModelWrapper;
      if (pAVar4 != (AdvancedGhostCubeModelWrapper *)0x0) {
        if ((pAVar4->fields).cubeModelIsBeingEdited == 0) {
          return;
        }
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                  ((Object *)StringLiteral_Todo__Fix_this_hack__This_is_sim,(MethodInfo *)0x0);
        pAVar4 = (this->fields).editableCubeModelWrapper;
        if (pAVar4 != (AdvancedGhostCubeModelWrapper *)0x0) {
          AdvancedGhostCubeModelWrapper::AdvancedGhostCubeModelWrapper_ExitEdit
                    (pAVar4,(MethodInfo *)0x0);
          pAVar4 = (this->fields).editableCubeModelWrapper;
          if (((pAVar4 != (AdvancedGhostCubeModelWrapper *)0x0) &&
              (pMVar5 = (pAVar4->fields)._.cubeModelBase, pMVar5 != (MVCubeModelInstance *)0x0)) &&
             ((pMVar5->fields)._._.gameObject != (GameObject *)0x0)) {
            if (pcRam_? == (code *)0x0) {
              pcRam_? = (code *)func_?();
            }
            (*pcRam_?)();
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetTeam(MVTeam) */

void Assembly-CSharp.dll::MVAdvancedGhost::MVAdvancedGhost_SetTeam
               (MVAdvancedGhost *this,MVTeam__Enum team,MethodInfo *method)

{
  pAVar1 = (this->fields).advGhostObject;
  if ((pAVar1 != (AdvancedGhostObject *)0x0) &&
     (pAVar2 = (pAVar1->fields).tintObject, pAVar2 != (AdvancedGhostTintObject *)0x0)) {
    (*(code *)(pAVar2->klass->vtable).TeamTint.method)
              (pAVar2,team,(pAVar2->klass->vtable).Tint_1.methodPtr);
    pAVar3 = (this->fields).advancedGhostBehaviour;
    if ((pAVar3 != (AdvancedGhostBehaviour *)0x0) &&
       (pAVar4 = (pAVar3->fields).perception,
       pAVar4 != (AdvancedGhostBehaviour_AdvancedGhostPerception *)0x0)) {
      (pAVar4->fields).alliedTeam = team;
      pAVar5 = (pAVar3->fields).weapon;
      if (pAVar5 != (AdvancedGhostBodyRotateWeapon *)0x0) {
        (pAVar5->fields).alliedTeam = team;
        pCVar6 = (this->fields).interactionHandler;
        if (pCVar6 != (ClientSideNPCInteractionHandler *)0x0) {
          (pCVar6->fields).team = team;
          MVar7 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
          if (MVar7 == MVGameMode__Enum_Edit) {
            this_00 = (this->fields).advancedGhostIcon;
            if (this_00 == (AdvancedGhostIcon *)0x0) goto code_?;
            AdvancedGhostIcon::AdvancedGhostIcon_set_Team(this_00,team,(MethodInfo *)0x0);
          }
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void SetTeam_Edit(MVTeam) */

void Assembly-CSharp.dll::MVAdvancedGhost::MVAdvancedGhost_SetTeam_Edit
               (MVAdvancedGhost *this,MVTeam__Enum team,MethodInfo *method)

{
  pAVar1 = (this->fields).advancedGhostIcon;
  if (pAVar1 != (AdvancedGhostIcon *)0x0) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__List<OculusTeamGameObject>__get_Count__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__List<OculusTeamGameObject>__get_Item_int_
                     );
      cRam_? = '\x01';
    }
    MVar2 = MVTeam__Enum_Server;
    if (team != MVTeam__Enum_None) {
      MVar2 = team;
    }
    index = 0;
    pLVar3 = (pAVar1->fields).teamIrisObjects;
    if (pLVar3 != (List_1_OculusTeamGameObject_ *)0x0) {
      while( true ) {
        if ((pLVar3->fields)._size <= index) {
          return;
        }
        pLVar4 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                 (pAVar1->fields).teamIrisObjects;
        if (((pLVar4 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
            (RVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                     RegularExpressions::RegexCharClass+SingleRange]::
                     List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                               (pLVar4,index,
                                MethodInfo__System__Collections__Generic__List<OculusTeamGameObject>__get_Item_int_
                               ), RVar5 == (RegexCharClass_SingleRange)0x0)) ||
           (*(GameObject **)((int)RVar5 + 0xc) == (GameObject *)0x0)) break;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (*(GameObject **)((int)RVar5 + 0xc),0,(MethodInfo *)0x0);
        pLVar4 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                 (pAVar1->fields).teamIrisObjects;
        if ((pLVar4 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
           (RVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                              (pLVar4,index,
                               MethodInfo__System__Collections__Generic__List<OculusTeamGameObject>__get_Item_int_
                              ), RVar5 == (RegexCharClass_SingleRange)0x0)) break;
        if (*(MVTeam__Enum *)((int)RVar5 + 8) == MVar2) {
          pLVar4 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                   (pAVar1->fields).teamIrisObjects;
          if (((pLVar4 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
              || (RVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                          RegularExpressions::RegexCharClass+SingleRange]::
                          List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                    (pLVar4,index,
                                     MethodInfo__System__Collections__Generic__List<OculusTeamGameObject>__get_Item_int_
                                    ), RVar5 == (RegexCharClass_SingleRange)0x0)) ||
             (*(GameObject **)((int)RVar5 + 0xc) == (GameObject *)0x0)) break;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (*(GameObject **)((int)RVar5 + 0xc),1,(MethodInfo *)0x0);
        }
        pLVar3 = (pAVar1->fields).teamIrisObjects;
        index = index + 1;
        if (pLVar3 == (List_1_OculusTeamGameObject_ *)0x0) break;
      }
    }
  }
  uVar6 = func_?(&stack0xfffffff0);
  func_?(uVar6);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void SetupEditorIcon(MVCubeModelBase, Boolean) */

void Assembly-CSharp.dll::MVAdvancedGhost::MVAdvancedGhost_SetupEditorIcon
               (MVAdvancedGhost *this,MVCubeModelBase *cubeModelBody,bool enableCulling,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    AdvancedGhostIcon_MethodInfo__UnityEngine__Object__Instantiate<AdvancedGhostIcon>_AdvancedGhostIcon_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PrefabPool);
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar1 != (PrefabPool *)0x0) {
    pAVar2 = (pPVar1->fields).ghostEditorIconObject;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pAVar2 = (AdvancedGhostIcon *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)pAVar2,
                        AdvancedGhostIcon_MethodInfo__UnityEngine__Object__Instantiate<AdvancedGhostIcon>_AdvancedGhostIcon_
                       );
    (this->fields).advancedGhostIcon = pAVar2;
    func_?(&(this->fields).advancedGhostIcon,pAVar2);
    pAVar2 = (this->fields).advancedGhostIcon;
    if (pAVar2 != (AdvancedGhostIcon *)0x0) {
      pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)pAVar2,(MethodInfo *)0x0);
      if (pTVar3 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                  (pTVar3,(this->fields)._._._.transform,(MethodInfo *)0x0);
        pAVar2 = (this->fields).advancedGhostIcon;
        if (pAVar2 != (AdvancedGhostIcon *)0x0) {
          pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)pAVar2,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?(&TypeInfo__UnityEngine__Vector3);
            cRam_? = '\x01';
          }
          if (pTVar3 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                      (pTVar3,TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,
                       (MethodInfo *)0x0);
            pAVar2 = (this->fields).advancedGhostIcon;
            if (pAVar2 != (AdvancedGhostIcon *)0x0) {
              pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                 ((Component *)pAVar2,(MethodInfo *)0x0);
              if (cRam_? == '\0') {
                func_?();
                cRam_? = '\x01';
              }
              if (pTVar3 != (Transform *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                          (pTVar3,TypeInfo__UnityEngine__Quaternion->static_fields->
                                  identityQuaternion,(MethodInfo *)0x0);
                pAVar2 = (this->fields).advancedGhostIcon;
                body = (MVCubeModelBase *)MVAdvancedGhost_get_Team(this,(MethodInfo *)0x0);
                if (pAVar2 != (AdvancedGhostIcon *)0x0) {
                  cubeModelBody._0_1_ = (bool)body;
                  AdvancedGhostIcon::AdvancedGhostIcon_Init
                            (pAVar2,this,body,(bool)cubeModelBody,(MVTeam__Enum)body,
                             (MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* MVAdvancedGhost(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVAdvancedGhost::MVAdvancedGhost__ctor
               (MVAdvancedGhost *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AdvancedGhostObject);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PrefabPool);
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar1 == (PrefabPool *)0x0) {
    func_?();
    pAVar2 = extraout_EDX;
  }
  else {
    MVBlueprintBase::MVBlueprintBase__ctor_1
              ((MVBlueprintBase *)this,data,(ObjectPrefab *)(pPVar1->fields).mvAdvancedGhostPrefab,
               worldObjects,(MethodInfo *)0x0);
    piVar3 = &(this->fields)._._._.interactionFlags;
    *(uint *)piVar3 = (uint)*piVar3 | 0x200b101;
    pAVar2 = (AdvancedGhostObject *)(this->fields)._._._.component;
    *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4) =
         *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4);
    if (pAVar2 == (AdvancedGhostObject *)0x0) {
      (this->fields).advGhostObject = (AdvancedGhostObject *)0x0;
      func_?();
      return;
    }
    if (((TypeInfo__AdvancedGhostObject->_1).naturalAligment <=
         (((ObjectPrefab__Class *)pAVar2->klass)->_1).naturalAligment) &&
       ((((ObjectPrefab__Class *)pAVar2->klass)->_1).typeHierarchy
        [(TypeInfo__AdvancedGhostObject->_1).naturalAligment - 1] ==
        (Il2CppClass *)TypeInfo__AdvancedGhostObject)) {
      (this->fields).advGhostObject = pAVar2;
      if (((TypeInfo__AdvancedGhostObject->_1).naturalAligment <=
           (((ObjectPrefab__Class *)pAVar2->klass)->_1).naturalAligment) &&
         ((((ObjectPrefab__Class *)pAVar2->klass)->_1).typeHierarchy
          [(TypeInfo__AdvancedGhostObject->_1).naturalAligment - 1] ==
          (Il2CppClass *)TypeInfo__AdvancedGhostObject)) {
        func_?();
        return;
      }
    }
  }
  func_?(pAVar2);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* MVTeam get_Team() */

MVTeam__Enum
Assembly-CSharp.dll::MVAdvancedGhost::MVAdvancedGhost_get_Team
          (MVAdvancedGhost *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__MV__WorldObject__MVTeam);
    func_?(&StringLiteral_team);
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
           (this->fields)._._._._.data;
  if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      (pDVar1,(Object *)StringLiteral_team,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar2 == 0) {
      return MVTeam__Enum_Server;
    }
    pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
             (this->fields)._._._._.data;
    if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
      TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        (pDVar1,(Object *)StringLiteral_team,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      if (TVar3.m_Index != 0) {
        TStack4.m_Index = (int32_t)TypeInfo__MV__WorldObject__MVTeam;
        if (*(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) ==
            (TypeInfo__MV__WorldObject__MVTeam->_0).element_class) {
          TStack4 = TVar3;
          pMVar5 = (MVTeam__Enum *)func_?();
          return *pMVar5;
        }
        goto code_?;
      }
    }
  }
  TStack4.m_Index = (int32_t)&UNK_?;
  func_?();
  TStack4.m_Index = (int32_t)extraout_EDX;
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  MVar7 = (*pcVar6)();
  return MVar7;
}

