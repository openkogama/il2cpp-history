
/* Void Destroy() */

void Assembly-CSharp.dll::MVAdvancedGhost::MVAdvancedGhost_Destroy
               (MVAdvancedGhost *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = (PrefabPool *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((this_00 == (PrefabPool *)0x0) ||
     (this_01 = PrefabPool::PrefabPool_get_MVRoundCubePrefab(this_00,(MethodInfo *)0x0),
     this_01 == (ObjectPrefab *)0x0)) {
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  MVGameModeChangeNotifier::MVGameModeChangeNotifier_RemoveObject
            ((MVGameModeChangeNotifier *)this_01,(IGameStateControllerSubscriber *)0x0,
             (MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pOVar2 = *(Object_1 **)(in_stack_3 + 0x88);
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
  bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    (pOVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar4 != 0) {
    pOVar2 = *(Object_1 **)(in_stack_3 + 0x88);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1(pOVar2,(MethodInfo *)0x0);
  }
  if (*(char *)(in_stack_3 + 0xcc) == '\0') {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar5 != (MVNetworkGame *)0x0) &&
       (pRVar6 = (RuntimeVariableNetworkManager *)
                 ShootableButton::ShootableButton_get_InputSignalReceiver
                           ((ShootableButton *)pMVar5,(MethodInfo *)0x0),
       pRVar6 != (RuntimeVariableNetworkManager *)0x0)) {
      bVar4 = RuntimeVariableNetworkManager::RuntimeVariableNetworkManager_ContainsRuntimeVariables
                        (pRVar6,*(int32_t *)(in_stack_3 + 8),(MethodInfo *)0x0);
      if (bVar4 == 0) {
        return;
      }
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar5 != (MVNetworkGame *)0x0) &&
         (pRVar6 = (RuntimeVariableNetworkManager *)
                   ShootableButton::ShootableButton_get_InputSignalReceiver
                             ((ShootableButton *)pMVar5,(MethodInfo *)0x0),
         pRVar6 != (RuntimeVariableNetworkManager *)0x0)) {
        RuntimeVariableNetworkManager::RuntimeVariableNetworkManager_RemoveRuntimeDataVariables
                  (pRVar6,*(int32_t *)(in_stack_3 + 8),(MethodInfo *)0x0);
        return;
      }
    }
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}


/* Void GameStateChanged(UpdateCondition) */

void Assembly-CSharp.dll::MVAdvancedGhost::MVAdvancedGhost_GameStateChanged
               (MVAdvancedGhost *this,UpdateCondition__Enum condition,MethodInfo *method)

{
  isPlayMode = condition != UpdateCondition__Enum_EDITOR;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).advancedGhostIcon;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pAVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pAVar1 = (this->fields).advancedGhostIcon;
    if (pAVar1 == (AdvancedGhostIcon *)0x0) goto code_?;
    AdvancedGhostIcon::AdvancedGhostIcon_SetGameMode(pAVar1,isPlayMode,(MethodInfo *)0x0);
  }
  this_00 = (this->fields).advancedGhostBehaviour;
  if (this_00 != (AdvancedGhostBehaviour *)0x0) {
    AdvancedGhostBehaviour::AdvancedGhostBehaviour_SetGameMode(this_00,isPlayMode,(MethodInfo *)0x0)
    ;
    if (!isPlayMode) {
      return;
    }
    pAVar3 = (this->fields).editableCubeModelWrapper;
    if (pAVar3 != (AdvancedGhostCubeModelWrapper *)0x0) {
      bVar2 = UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualAxis::
              CrossPlatformInputManager_VirtualAxis_get_matchWithInputManager
                        ((CrossPlatformInputManager_VirtualAxis *)pAVar3,(MethodInfo *)0x0);
      if (bVar2 == 0) {
        return;
      }
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                ((Object *)StringLiteral_Todo__Fix_this_hack__This_is_sim,(MethodInfo *)0x0);
      pAVar3 = (this->fields).editableCubeModelWrapper;
      if (pAVar3 != (AdvancedGhostCubeModelWrapper *)0x0) {
        AdvancedGhostCubeModelWrapper::AdvancedGhostCubeModelWrapper_ExitEdit
                  (pAVar3,(MethodInfo *)0x0);
        pAVar3 = (this->fields).editableCubeModelWrapper;
        if (((pAVar3 != (AdvancedGhostCubeModelWrapper *)0x0) &&
            (this_01 = (DayNightCycle *)
                       mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                       Collection_1_VoxelHit__get_Items
                                 ((Collection_1_VoxelHit_ *)pAVar3,(MethodInfo *)0x0),
            this_01 != (DayNightCycle *)0x0)) &&
           (pCVar4 = DayNightCycle::DayNightCycle_get_CurrentMoonParam(this_01,(MethodInfo *)0x0),
           pCVar4 != (CelestialParam *)0x0)) {
          pcVar5 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar5 = (code *)func_?(), pcVar5 == (code *)0x0)) {
            func_?();
            func_?();
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pcRam_? = pcVar5;
          (*pcRam_?)();
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Bounds GetLocalBounds(BoundsContext) */

Bounds * Assembly-CSharp.dll::MVAdvancedGhost::MVAdvancedGhost_GetLocalBounds
                   (Bounds *__return_storage_ptr__,MVAdvancedGhost *this,
                   BoundsContext__Enum boundsContext,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
            ((Vector3 *)&stack0xffffffe8,(MethodInfo *)0x0);
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_one
                     ((Vector3 *)&stack0xffffffe8,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply_1
            ((Vector3 *)&stack0xffffffe8,3.0,*pVVar1,(MethodInfo *)0x0);
  (__return_storage_ptr__->m_Center).x = 0.0;
  (__return_storage_ptr__->m_Center).y = 0.0;
  (__return_storage_ptr__->m_Center).z = 0.0;
  (__return_storage_ptr__->m_Extents).x = 0.0;
  (__return_storage_ptr__->m_Extents).y = 0.0;
  (__return_storage_ptr__->m_Extents).z = 0.0;
  func_?();
  return __return_storage_ptr__;
}


/* Vector3 GetTargetPosition() */

Vector3 * Assembly-CSharp.dll::MVAdvancedGhost::MVAdvancedGhost_GetTargetPosition
                    (Vector3 *__return_storage_ptr__,MVAdvancedGhost *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).advancedGhostBehaviour;
  if (this_00 != (AdvancedGhostBehaviour *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                        ((Component_1 *)this_00,(MethodInfo *)0x0);
    if (this_01 != (Transform *)0x0) {
      pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)&stack0xffffffe8,this_01,(MethodInfo *)0x0);
      uVar2 = pVVar1->y;
      fVar3 = pVVar1->z;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?();
      }
      pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                         ((Vector3 *)&stack0xffffffe8,(MethodInfo *)0x0);
      uVar4 = pVVar1->y;
      a.y = (float)uVar2;
      a.x = (float)uVar4;
      a.z = fVar3;
      pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                         ((Vector3 *)&stack0xffffffe8,a,*pVVar1,(MethodInfo *)0x0);
      fVar5 = pVVar1->y;
      fVar3 = pVVar1->z;
      __return_storage_ptr__->x = pVVar1->x;
      __return_storage_ptr__->y = fVar5;
      __return_storage_ptr__->z = fVar3;
      return __return_storage_ptr__;
    }
  }
  func_?(0);
  pcVar6 = (code *)swi(3);
  pVVar1 = (Vector3 *)(*pcVar6)();
  return pVVar1;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVAdvancedGhost::MVAdvancedGhost_Initialize
               (MVAdvancedGhost *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVBlueprintBase::MVBlueprintBase_Initialize((MVBlueprintBase *)this,(MethodInfo *)0x0);
  pMVar1 = (MVCubeModelBase *)
           MVBlueprintBase::MVBlueprintBase_GetChild
                     ((MVBlueprintBase *)this,StringLiteral_BodyCubeModel,(MethodInfo *)0x0);
  if (pMVar1 == (MVCubeModelBase *)0x0) {
    body = (MVCubeModelBase *)0x0;
code_?:
    pCVar2 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                       ((DayNightCycle *)this,(MethodInfo *)0x0);
    if (pCVar2 == (CelestialParam *)0x0) goto code_?;
    pCVar3 = (ClientSideNPCInteractionHandler *)
             UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                       ((GameObject *)pCVar2,
                        ClientSideNPCInteractionHandler_MethodInfo__UnityEngine__GameObject__GetComponent<ClientSideNPCInteractionHandler>__
                       );
    (this->fields).interactionHandler = pCVar3;
    if (pCVar3 == (ClientSideNPCInteractionHandler *)0x0) goto code_?;
    MVComponent::MVComponent_FindWorldObjectParent((MVComponent *)pCVar3,(MethodInfo *)0x0);
    pCVar3 = (this->fields).interactionHandler;
    if (pCVar3 == (ClientSideNPCInteractionHandler *)0x0) goto code_?;
    pGVar4 = (GameObject *)
             System.Core.dll::System::Linq::Enumerable+<CreateCastIterator>c__Iterator0`1[System::
             Int32]::
             Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                       ((Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)pCVar3,
                        (MethodInfo *)0x0);
    (this->fields).attachmentObject = pGVar4;
    pCVar2 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                       ((DayNightCycle *)this,(MethodInfo *)0x0);
    if (pCVar2 == (CelestialParam *)0x0) goto code_?;
    pCVar5 = (ClientSideNPCInteractable *)
             UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_85
                       ((GameObject *)pCVar2,
                        ClientSideNPCInteractable_MethodInfo__UnityEngine__GameObject__AddComponent<ClientSideNPCInteractable>__
                       );
    (this->fields).interactable = pCVar5;
    pUVar6 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar6,(Object *)this,
               MethodInfo__MVAdvancedGhost__ReceiveDamage_float__MVPlayer__MV__Common__PlayerKilledByType_
               ,
               MethodInfo__System__Action<float,_MVPlayer,_MV::Common::PlayerKilledByType>__Action_System__Object__void__
              );
    if (pCVar5 == (ClientSideNPCInteractable *)0x0) goto code_?;
    ClientSideNPCInteractable::ClientSideNPCInteractable_Init
              (pCVar5,(Action_3_Single_MVPlayer_MV_Common_PlayerKilledByType_ *)0x0,
               (MethodInfo *)0x0);
    pCVar2 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                       ((DayNightCycle *)this,(MethodInfo *)0x0);
    if (pCVar2 == (CelestialParam *)0x0) goto code_?;
    advancedGhostMotor =
         (AdvancedGhostMotor *)
         UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_85
                   ((GameObject *)pCVar2,
                    AdvancedGhostMotor_MethodInfo__UnityEngine__GameObject__AddComponent<AdvancedGhostMotor>__
                   );
    pCVar2 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                       ((DayNightCycle *)this,(MethodInfo *)0x0);
    if (pCVar2 == (CelestialParam *)0x0) goto code_?;
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
              GameObject_GetComponentsInChildren_29
                        ((GameObject *)pCVar2,
                         AdvancedGhostBehaviour_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<AdvancedGhostBehaviour>__
                        );
    pCVar5 = (this->fields).interactable;
    (this->fields).advancedGhostBehaviour = (AdvancedGhostBehaviour *)this_01;
    cubeModelBase = (MVCubeModelInstance *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              ((UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )cubeModelBase,(Object *)pCVar5,MethodInfo__ClientSideNPCInteractable__IsDead__,
               MethodInfo__System__Func<bool>__Func_System__Object__void__);
    if (this_01 == (UseInteratorVisualization__Array *)0x0) goto code_?;
    AdvancedGhostBehaviour::AdvancedGhostBehaviour_Init
              ((AdvancedGhostBehaviour *)this_01,body,advancedGhostMotor,
               (Func_1_Boolean_ *)cubeModelBase,(this->fields)._._._._.id,(MethodInfo *)0x0);
    pAVar7 = (this->fields).advancedGhostBehaviour;
    if ((pAVar7 == (AdvancedGhostBehaviour *)0x0) ||
       (this_00 = (pAVar7->fields).GhostVisualization, this_00 == (AdvancedGhostVisualizaton *)0x0))
    goto code_?;
    transformParent =
         UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                   ((Component_1 *)this_00,(MethodInfo *)0x0);
    this_02 = (AdvancedGhostCubeModelWrapper *)func_?();
    AdvancedGhostCubeModelWrapper::AdvancedGhostCubeModelWrapper__ctor
              (this_02,cubeModelBase,transformParent,(MethodInfo *)0x0);
    pAVar7 = (this->fields).advancedGhostBehaviour;
    (this->fields).editableCubeModelWrapper = this_02;
    if (pAVar7 == (AdvancedGhostBehaviour *)0x0) goto code_?;
    pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)pAVar7,(MethodInfo *)0x0);
    pAVar7 = (this->fields).advancedGhostBehaviour;
    if (pAVar7 == (AdvancedGhostBehaviour *)0x0) goto code_?;
    interactable = (MVInteractableBase *)0x0;
    cullingSubscriberBase =
         (CullingSubscriberBase *)
         mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
         Serialization::JsonProperty]::
         Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                   ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pAVar7,
                    (MethodInfo *)0x0);
    if (advancedGhostMotor == (AdvancedGhostMotor *)0x0) goto code_?;
    AdvancedGhostMotor::AdvancedGhostMotor_Init
              (advancedGhostMotor,pGVar4,interactable,cullingSubscriberBase,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    MVar8 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
    if (MVar8 == MVGameMode__Enum_Edit) {
      MVAdvancedGhost_SetupEditorIcon(this,(MVCubeModelBase *)cubeModelBase,1,(MethodInfo *)0x0);
      pUVar9 = (this->fields)._._._.PositionChanged;
      pUVar6 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar6,(Object *)this,
                 MethodInfo__MVAdvancedGhost__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                 ,
                 MethodInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>__UnityAction_System__Object__void__
                );
      pUVar10 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)
                mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pUVar9,(Delegate *)pUVar6,(MethodInfo *)0x0);
      pUVar9 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
      if (pUVar10 != (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
        if (pUVar10->klass ==
            TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
           ) {
          pUVar9 = pUVar10;
        }
        if (pUVar9 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0)
        goto code_?;
      }
      (this->fields)._._._.PositionChanged = pUVar9;
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    this_03 = (PrefabPool *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this_03 != (PrefabPool *)0x0) {
      this_04 = PrefabPool::PrefabPool_get_MVRoundCubePrefab(this_03,(MethodInfo *)0x0);
      if (this_04 != (ObjectPrefab *)0x0) {
        MVGameModeChangeNotifier::MVGameModeChangeNotifier_AddUpdateObject
                  ((MVGameModeChangeNotifier *)this_04,(IGameStateControllerSubscriber *)this,
                   (MethodInfo *)0x0);
        (*(code *)(this->klass->vtable).OnDataUpdate.method)();
        return;
      }
    }
  }
  else {
    bVar11 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment;
    if (((pMVar1->klass->_1).naturalAligment < bVar11) ||
       ((MVCubeModelInstance__Class *)(pMVar1->klass->_1).typeHierarchy[bVar11 - 1] !=
        TypeInfo__MVCubeModelInstance)) {
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
    body = (MVCubeModelBase *)0x0;
    if (bVar12) {
      body = pMVar1;
    }
    if (body != (MVCubeModelBase *)0x0) goto code_?;
    func_?(pMVar1,TypeInfo__MVCubeModelInstance);
code_?:
    func_?();
  }
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void InitializeInventory() */

void Assembly-CSharp.dll::MVAdvancedGhost::MVAdvancedGhost_InitializeInventory
               (MVAdvancedGhost *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVGroup::MVGroup_InitializeInventory((MVGroup *)this,(MethodInfo *)0x0);
  pCVar1 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                     ((DayNightCycle *)this,(MethodInfo *)0x0);
  if (pCVar1 != (CelestialParam *)0x0) {
    pUVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
             GameObject_GetComponentsInChildren_29
                       ((GameObject *)pCVar1,
                        AdvancedGhostBehaviour_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<AdvancedGhostBehaviour>__
                       );
    (this->fields).advancedGhostBehaviour = (AdvancedGhostBehaviour *)pUVar2;
    pMVar3 = (MVCubeModelBase *)
             MVBlueprintBase::MVBlueprintBase_GetChild
                       ((MVBlueprintBase *)this,StringLiteral_BodyCubeModel,(MethodInfo *)0x0);
    if (pMVar3 == (MVCubeModelBase *)0x0) {
      cubeModelBody = (MVCubeModelBase *)0x0;
    }
    else {
      bVar4 = (TypeInfo__MVCubeModelBase->_1).naturalAligment;
      if (((pMVar3->klass->_1).naturalAligment < bVar4) ||
         ((MVCubeModelBase__Class *)(pMVar3->klass->_1).typeHierarchy[bVar4 - 1] !=
          TypeInfo__MVCubeModelBase)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      cubeModelBody = (MVCubeModelBase *)0x0;
      if (bVar5) {
        cubeModelBody = pMVar3;
      }
      if (cubeModelBody == (MVCubeModelBase *)0x0) goto code_?;
    }
    MVAdvancedGhost_SetupEditorIcon(this,cubeModelBody,0,(MethodInfo *)0x0);
    if (cubeModelBody != (MVCubeModelBase *)0x0) {
      pCVar1 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                         ((DayNightCycle *)cubeModelBody,(MethodInfo *)0x0);
      if (pCVar1 != (CelestialParam *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  ((GameObject *)pCVar1,0,(MethodInfo *)0x0);
        this_00 = (this->fields).advancedGhostIcon;
        if (this_00 != (AdvancedGhostIcon *)0x0) {
          pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             ((Component_1 *)this_00,(MethodInfo *)0x0);
          layer = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                            (StringLiteral_Default,(MethodInfo *)0x0);
          LayerUtil::LayerUtil_SetLayerRecursively_4(pGVar6,layer,(MethodInfo *)0x0);
          this_01 = (this->fields).advancedGhostBehaviour;
          if (this_01 != (AdvancedGhostBehaviour *)0x0) {
            pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                               ((Component_1 *)this_01,(MethodInfo *)0x0);
            if (pGVar6 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar6,0,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Boolean IsOnSameTeam(MVTeam) */

bool Assembly-CSharp.dll::MVAdvancedGhost::MVAdvancedGhost_IsOnSameTeam
               (MVAdvancedGhost *this,MVTeam__Enum team,MethodInfo *method)

{
  this_00 = (this->fields).advancedGhostBehaviour;
  if (this_00 != (AdvancedGhostBehaviour *)0x0) {
    MVar1 = AdvancedGhostBehaviour::AdvancedGhostBehaviour_get_Team(this_00,(MethodInfo *)0x0);
    return MVar1 == team;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::MVAdvancedGhost::MVAdvancedGhost_OnDataUpdate
               (MVAdvancedGhost *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_02 = this;
  pAVar1 = (this->fields).advancedGhostBehaviour;
  pDVar2 = (Dictionary_2_System_Type_Pool_ *)
           PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
  if (pDVar2 != (Dictionary_2_System_Type_Pool_ *)0x0) {
    pMVar3 = (MVAdvancedGhost *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       (pDVar2,(Type *)StringLiteral_Speed,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    uVar4 = CONCAT44(TypeInfo__System__Single,pMVar3);
    if ((pAVar1 != (AdvancedGhostBehaviour *)0x0) && (pMVar3 != (MVAdvancedGhost *)0x0)) {
      if ((pMVar3->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
      goto code_?;
      this = pMVar3;
      pfVar5 = (float *)func_?();
      AdvancedGhostBehaviour::AdvancedGhostBehaviour_set_Speed(pAVar1,*pfVar5,(MethodInfo *)0x0);
      pAVar1 = (this_02->fields).advancedGhostBehaviour;
      pDVar2 = (Dictionary_2_System_Type_Pool_ *)
               PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this_02,(MethodInfo *)0x0);
      if (pDVar2 != (Dictionary_2_System_Type_Pool_ *)0x0) {
        pPVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                 Dictionary_2_System_Type_Pool__get_Item
                           (pDVar2,(Type *)StringLiteral_Radius,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        uVar4 = CONCAT44(TypeInfo__System__Single,pPVar6);
        if ((pAVar1 != (AdvancedGhostBehaviour *)0x0) && (pPVar6 != (Pool *)0x0)) {
          if ((pPVar6->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
          goto code_?;
          pfVar5 = (float *)func_?(pPVar6);
          AdvancedGhostBehaviour::AdvancedGhostBehaviour_set_Radius
                    (pAVar1,*pfVar5,(MethodInfo *)0x0);
          pAVar7 = (this_02->fields).advancedGhostIcon;
          if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          bVar8 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                            ((Object_1 *)pAVar7,(Object_1 *)0x0,(MethodInfo *)0x0);
          if (bVar8 == 0) {
code_?:
            MVar9 = MVAdvancedGhost_get_Team(this_02,(MethodInfo *)0x0);
            if (MVar9 == MVTeam__Enum_None) {
              woDataToRemove =
                   (Dictionary_2_System_Object_System_Object_ *)
                   func_?(
                                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                  );
              System.Core.dll::System::Collections::Generic::
              HashSet`1[AvatarModifierPackage+AvatarModifier]::
              HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                        ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)woDataToRemove,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                        );
              this = (MVAdvancedGhost *)0x0;
              value_00 = (CrossPlatformInputManager_VirtualButton *)
                         func_?(TypeInfo__System__Int32,&this);
              if (woDataToRemove != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                String,UnityStandardAssets::CrossPlatformInput::
                CrossPlatformInputManager+VirtualButton]::
                Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                          ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                            *)woDataToRemove,StringLiteral_team,value_00,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                          );
                if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000)
                     != 0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                  func_?(TypeInfo__MVGameControllerBase);
                }
                this_03 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                    ((MethodInfo *)0x0);
                if (this_03 != (MVNetworkGame_OperationRequests *)0x0) {
                  MVNetworkGame+OperationRequests::
                  MVNetworkGame_OperationRequests_RemoveWorldObjectDataPartial_1
                            (this_03,(this_02->fields)._._._._.id,woDataToRemove,(MethodInfo *)0x0);
                  goto code_?;
                }
              }
            }
            else {
              value = (EditorStateMachine *)MVAdvancedGhost_get_Team(this_02,(MethodInfo *)0x0);
              if (cRam_? == '\0') {
                func_?(_UNK_?);
                cRam_? = '\x01';
              }
              this_00 = (KogamaSettingNumericBase_1_System_Single_ *)
                        (this_02->fields).advGhostObject;
              if ((this_00 != (KogamaSettingNumericBase_1_System_Single_ *)0x0) &&
                 (pIVar10 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                            KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                            KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                                      (this_00,(MethodInfo *)0x0), pIVar10 != (IKogamaSetting *)0x0)
                 ) {
                (**(code **)&pIVar10->klass[1]._0.byval_arg.attrs)(pIVar10,value);
                pAVar1 = (this_02->fields).advancedGhostBehaviour;
                if (pAVar1 != (AdvancedGhostBehaviour *)0x0) {
                  AdvancedGhostBehaviour::AdvancedGhostBehaviour_set_Team
                            (pAVar1,(MVTeam__Enum)value,(MethodInfo *)0x0);
                  this_01 = (DesktopEditModeController *)(this_02->fields).interactionHandler;
                  if (this_01 != (DesktopEditModeController *)0x0) {
                    DesktopEditModeController::DesktopEditModeController_set_EditModeStateMachine
                              (this_01,value,(MethodInfo *)0x0);
                    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr &
                         0x2000000) != 0) &&
                       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                      func_?(TypeInfo__MVGameControllerBase);
                    }
                    MVar11 = MVGameControllerBase::MVGameControllerBase_get_GameMode
                                       ((MethodInfo *)0x0);
                    if (MVar11 == MVGameMode__Enum_Edit) {
                      pAVar7 = (this_02->fields).advancedGhostIcon;
                      if (pAVar7 == (AdvancedGhostIcon *)0x0) goto code_?;
                      AdvancedGhostIcon::AdvancedGhostIcon_set_Team
                                (pAVar7,(MVTeam__Enum)value,(MethodInfo *)0x0);
                    }
code_?:
                    pAVar1 = (this_02->fields).advancedGhostBehaviour;
                    if (pAVar1 != (AdvancedGhostBehaviour *)0x0) {
                      AdvancedGhostBehaviour::AdvancedGhostBehaviour_set_Lives
                                (pAVar1,-1,(MethodInfo *)0x0);
                      pMVar3 = (MVAdvancedGhost *)
                               PrefabPool::PrefabPool_get_MVBatteryPrefab
                                         ((PrefabPool *)this_02,(MethodInfo *)0x0);
                      if (pMVar3 != (MVAdvancedGhost *)0x0) {
                        method = (MethodInfo *)StringLiteral_Lives;
                        this = pMVar3;
                        bVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                String,MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                                KogamaSettingTypes::KogamaSettingWrapperBase]::
                                Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                                          ((Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                                            *)pMVar3,StringLiteral_Lives,
                                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                                          );
                        if (bVar8 == 0) {
                          return;
                        }
                        pAVar1 = (this_02->fields).advancedGhostBehaviour;
                        pDVar2 = (Dictionary_2_System_Type_Pool_ *)
                                 PrefabPool::PrefabPool_get_MVBatteryPrefab
                                           ((PrefabPool *)this_02,(MethodInfo *)0x0);
                        if (pDVar2 != (Dictionary_2_System_Type_Pool_ *)0x0) {
                          pPStack12 =
                               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                               Type,Pool]::Dictionary_2_System_Type_Pool__get_Item
                                         (pDVar2,(Type *)StringLiteral_Lives,
                                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                         );
                          uVar4 = CONCAT44(TypeInfo__System__Int32,pPStack12);
                          if ((pAVar1 != (AdvancedGhostBehaviour *)0x0) &&
                             (pPStack12 != (Pool *)0x0)) {
                            if ((pPStack12->klass->_0).element_class ==
                                (TypeInfo__System__Int32->_0).element_class) {
                              piVar13 = (int32_t *)func_?();
                              AdvancedGhostBehaviour::AdvancedGhostBehaviour_set_Lives
                                        (pAVar1,*piVar13,(MethodInfo *)0x0);
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
          else {
            pAVar7 = (this_02->fields).advancedGhostIcon;
            pDVar2 = (Dictionary_2_System_Type_Pool_ *)
                     PrefabPool::PrefabPool_get_MVBatteryPrefab
                               ((PrefabPool *)this_02,(MethodInfo *)0x0);
            if (pDVar2 != (Dictionary_2_System_Type_Pool_ *)0x0) {
              pPVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                       Dictionary_2_System_Type_Pool__get_Item
                                 (pDVar2,(Type *)StringLiteral_Radius,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                 );
              uVar4 = CONCAT44(TypeInfo__System__Single,pPVar6);
              if ((pAVar7 != (AdvancedGhostIcon *)0x0) && (pPVar6 != (Pool *)0x0)) {
                if ((pPVar6->klass->_0).element_class !=
                    (TypeInfo__System__Single->_0).element_class) goto code_?;
                pfVar5 = (float *)func_?(pPVar6);
                AdvancedGhostIcon::AdvancedGhostIcon_set_Radius(pAVar7,*pfVar5,(MethodInfo *)0x0);
                goto code_?;
              }
            }
          }
        }
      }
    }
  }
code_?:
  uVar4 = func_?(0);
code_?:
  func_?(uVar4);
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Boolean OnEnterObject(EditorStateMachine) */

bool Assembly-CSharp.dll::MVAdvancedGhost::MVAdvancedGhost_OnEnterObject
               (MVAdvancedGhost *this,EditorStateMachine *e,MethodInfo *method)

{
  this_00 = (this->fields).advancedGhostIcon;
  if (this_00 != (AdvancedGhostIcon *)0x0) {
    this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                        ((Component_1 *)this_00,(MethodInfo *)0x0);
    if (this_02 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_02,0,(MethodInfo *)0x0);
      this_01 = (this->fields).editableCubeModelWrapper;
      if (this_01 != (AdvancedGhostCubeModelWrapper *)0x0) {
        bVar1 = AdvancedGhostCubeModelWrapper::AdvancedGhostCubeModelWrapper_OnEnterObject
                          (this_01,(EditorStateMachine *)0x0,(this->fields)._._._.transform,
                           (MethodInfo *)0x0);
        return bVar1;
      }
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* Boolean OnExitObject(EditorStateMachine) */

bool Assembly-CSharp.dll::MVAdvancedGhost::MVAdvancedGhost_OnExitObject
               (MVAdvancedGhost *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
            ((Object *)StringLiteral_On_exit_object,(MethodInfo *)0x0);
  this_00 = (this->fields).advancedGhostIcon;
  if (this_00 != (AdvancedGhostIcon *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                        ((Component_1 *)this_00,(MethodInfo *)0x0);
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
  pIStack3 = (Il2CppImage *)0x0;
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
    AdvancedGhostBehaviour::AdvancedGhostBehaviour_EditModeUpdateCulling(this_00,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void ReceiveDamage(Single, MVPlayer, PlayerKilledByType) */

void Assembly-CSharp.dll::MVAdvancedGhost::MVAdvancedGhost_ReceiveDamage
               (MVAdvancedGhost *this,float amount,MVPlayer *damageDealer,
               PlayerKilledByType__Enum damageType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (0.0 < amount) {
    pAVar1 = (this->fields).advancedGhostBehaviour;
    if (pAVar1 == (AdvancedGhostBehaviour *)0x0) goto code_?;
    AdvancedGhostBehaviour::AdvancedGhostBehaviour_ReceivedDamage(pAVar1,(MethodInfo *)0x0);
  }
  else if (amount < 0.0) {
    pAVar1 = (this->fields).advancedGhostBehaviour;
    if (pAVar1 == (AdvancedGhostBehaviour *)0x0) goto code_?;
    AdvancedGhostBehaviour::AdvancedGhostBehaviour_ReceivedHealing(pAVar1,(MethodInfo *)0x0);
  }
  this_00 = (this->fields).interactable;
  if (this_00 != (ClientSideNPCInteractable *)0x0) {
    bVar2 = ClientSideNPCInteractable::ClientSideNPCInteractable_IsDead(this_00,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      return;
    }
    ignoreIDs = MVWorldObjectClient::MVWorldObjectClient_get_WorldIDsRecursive
                          ((MVWorldObjectClient *)this,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
      VStack_3.x = (float)TypeInfo__PrefabPool;
      func_?();
    }
    this_02 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
    if (this_02 != (PrefabPool *)0x0) {
      particlePrefab = PrefabPool::PrefabPool_get_ParticleExplosion(this_02,(MethodInfo *)0x0);
      pAVar1 = (this->fields).advancedGhostBehaviour;
      if (((pAVar1 != (AdvancedGhostBehaviour *)0x0) &&
          (this_01 = (pAVar1->fields).GhostVisualization,
          this_01 != (AdvancedGhostVisualizaton *)0x0)) &&
         (this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                              ((Component_1 *)this_01,(MethodInfo *)0x0),
         this_03 != (Transform *)0x0)) {
        pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           (&VStack_3,this_03,(MethodInfo *)0x0);
        uStack_5._0_4_ = pVVar4->x;
        uStack_5._4_4_ = pVVar4->y;
        fVar6 = pVVar4->z;
        if ((((uint)(TypeInfo__SharedWorldObjectGameplayFunctions__Explosion->vtable).Equals.
                    methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__SharedWorldObjectGameplayFunctions__Explosion->_1).cctor_started == 0)) {
          func_?(TypeInfo__SharedWorldObjectGameplayFunctions__Explosion);
        }
        position.z = fVar6;
        position.x = (float)(undefined4)uStack_5;
        position.y = (float)uStack_5._4_4_;
        SharedWorldObjectGameplayFunctions+Explosion::
        SharedWorldObjectGameplayFunctions_Explosion_Explode
                  (particlePrefab,position,20.0,5.0,1000.0,1,(ExplosionEvent *)0x0,ignoreIDs,
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?(0);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
        cRam_? = '\x01';
      }
      (in_stack_1->fields).respawn = 1;
      handle = TypeRef__AdvancedGhostBehaviour__Idle;
      (in_stack_1->fields).clearEffectsBecauseOfReset = 1;
      if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Type->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).advancedGhostIcon;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pAVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pAVar1 = (this->fields).advancedGhostIcon;
    if (pAVar1 == (AdvancedGhostIcon *)0x0) goto code_?;
    AdvancedGhostIcon::AdvancedGhostIcon_SetGameMode(pAVar1,isPlayMode,(MethodInfo *)0x0);
  }
  this_00 = (this->fields).advancedGhostBehaviour;
  if (this_00 != (AdvancedGhostBehaviour *)0x0) {
    AdvancedGhostBehaviour::AdvancedGhostBehaviour_SetGameMode(this_00,isPlayMode,(MethodInfo *)0x0)
    ;
    if (isPlayMode == 0) {
      return;
    }
    pAVar3 = (this->fields).editableCubeModelWrapper;
    if (pAVar3 != (AdvancedGhostCubeModelWrapper *)0x0) {
      bVar2 = UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualAxis::
              CrossPlatformInputManager_VirtualAxis_get_matchWithInputManager
                        ((CrossPlatformInputManager_VirtualAxis *)pAVar3,(MethodInfo *)0x0);
      if (bVar2 == 0) {
        return;
      }
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                ((Object *)StringLiteral_Todo__Fix_this_hack__This_is_sim,(MethodInfo *)0x0);
      pAVar3 = (this->fields).editableCubeModelWrapper;
      if (pAVar3 != (AdvancedGhostCubeModelWrapper *)0x0) {
        AdvancedGhostCubeModelWrapper::AdvancedGhostCubeModelWrapper_ExitEdit
                  (pAVar3,(MethodInfo *)0x0);
        pAVar3 = (this->fields).editableCubeModelWrapper;
        if (((pAVar3 != (AdvancedGhostCubeModelWrapper *)0x0) &&
            (this_01 = (DayNightCycle *)
                       mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                       Collection_1_VoxelHit__get_Items
                                 ((Collection_1_VoxelHit_ *)pAVar3,(MethodInfo *)0x0),
            this_01 != (DayNightCycle *)0x0)) &&
           (pCVar4 = DayNightCycle::DayNightCycle_get_CurrentMoonParam(this_01,(MethodInfo *)0x0),
           pCVar4 != (CelestialParam *)0x0)) {
          pcVar5 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar5 = (code *)func_?(), pcVar5 == (code *)0x0)) {
            func_?();
            func_?();
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pcRam_? = pcVar5;
          (*pcRam_?)();
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetTeam(MVTeam) */

void Assembly-CSharp.dll::MVAdvancedGhost::MVAdvancedGhost_SetTeam
               (MVAdvancedGhost *this,MVTeam__Enum team,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (KogamaSettingNumericBase_1_System_Single_ *)(this->fields).advGhostObject;
  if (this_00 != (KogamaSettingNumericBase_1_System_Single_ *)0x0) {
    pIVar1 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
             KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
             KogamaSettingNumericBase_1_System_Single__get_KogamaSetting(this_00,(MethodInfo *)0x0);
    if (pIVar1 != (IKogamaSetting *)0x0) {
      (**(code **)&pIVar1->klass[1]._0.byval_arg.attrs)
                (pIVar1,team,pIVar1->klass[1]._0.this_arg.data.dummy);
      this_01 = (this->fields).advancedGhostBehaviour;
      if (this_01 != (AdvancedGhostBehaviour *)0x0) {
        AdvancedGhostBehaviour::AdvancedGhostBehaviour_set_Team(this_01,team,(MethodInfo *)0x0);
        this_02 = (DesktopEditModeController *)(this->fields).interactionHandler;
        if (this_02 != (DesktopEditModeController *)0x0) {
          DesktopEditModeController::DesktopEditModeController_set_EditModeStateMachine
                    (this_02,(EditorStateMachine *)team,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?(TypeInfo__MVGameControllerBase);
          }
          MVar2 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
          if (MVar2 == MVGameMode__Enum_Edit) {
            this_03 = (this->fields).advancedGhostIcon;
            if (this_03 == (AdvancedGhostIcon *)0x0) goto code_?;
            AdvancedGhostIcon::AdvancedGhostIcon_set_Team(this_03,team,(MethodInfo *)0x0);
          }
          return;
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetTeam_Edit(MVTeam) */

void Assembly-CSharp.dll::MVAdvancedGhost::MVAdvancedGhost_SetTeam_Edit
               (MVAdvancedGhost *this,MVTeam__Enum team,MethodInfo *method)

{
  pAVar1 = (this->fields).advancedGhostIcon;
  if (pAVar1 == (AdvancedGhostIcon *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  index = (IEventSystemHandler__Class *)0x0;
  pLVar3 = (pAVar1->fields).teamIrisObjects;
  if (pLVar3 != (List_1_OculusTeamGameObject_ *)0x0) {
    while( true ) {
      pOVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar3,
                          MethodInfo__System__Collections__Generic__List<OculusTeamGameObject>__get_Count__
                         );
      if ((int)pOVar4 <= (int)index) {
        return;
      }
      pLVar3 = (pAVar1->fields).teamIrisObjects;
      if (((pLVar3 == (List_1_OculusTeamGameObject_ *)0x0) ||
          (pIVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                    IEventSystemHandler]::
                    List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                              ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar3,
                               (int32_t)index,
                               MethodInfo__System__Collections__Generic__List<OculusTeamGameObject>__get_Item_int_
                              ), pIVar5 == (IEventSystemHandler *)0x0)) ||
         ((GameObject *)pIVar5[1].monitor == (GameObject *)0x0)) break;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                ((GameObject *)pIVar5[1].monitor,0,(MethodInfo *)0x0);
      pLVar3 = (pAVar1->fields).teamIrisObjects;
      if ((pLVar3 == (List_1_OculusTeamGameObject_ *)0x0) ||
         (pIVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                   IEventSystemHandler]::
                   List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                             ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar3,
                              (int32_t)index,
                              MethodInfo__System__Collections__Generic__List<OculusTeamGameObject>__get_Item_int_
                             ), pIVar5 == (IEventSystemHandler *)0x0)) break;
      if (pIVar5[1].klass == index) {
        pLVar3 = (pAVar1->fields).teamIrisObjects;
        if (((pLVar3 == (List_1_OculusTeamGameObject_ *)0x0) ||
            (pIVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                      IEventSystemHandler]::
                      List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar3,
                                 (int32_t)index,
                                 MethodInfo__System__Collections__Generic__List<OculusTeamGameObject>__get_Item_int_
                                ), pIVar5 == (IEventSystemHandler *)0x0)) ||
           ((GameObject *)pIVar5[1].monitor == (GameObject *)0x0)) break;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  ((GameObject *)pIVar5[1].monitor,1,(MethodInfo *)0x0);
      }
      pLVar3 = (pAVar1->fields).teamIrisObjects;
      index = (IEventSystemHandler__Class *)((int)&(index->_0).image + 1);
      if (pLVar3 == (List_1_OculusTeamGameObject_ *)0x0) break;
    }
  }
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
    func_?(TypeInfo__PrefabPool);
  }
  this_00 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
  if (this_00 != (PrefabPool *)0x0) {
    pXVar1 = (XpBoostParticlePreviewer *)
             PrefabPool::PrefabPool_get_GhostEditorIconObject(this_00,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    pXVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                       (pXVar1,
                        AdvancedGhostIcon_MethodInfo__UnityEngine__Object__Instantiate<AdvancedGhostIcon>_AdvancedGhostIcon_
                       );
    (this->fields).advancedGhostIcon = (AdvancedGhostIcon *)pXVar1;
    if (pXVar1 != (XpBoostParticlePreviewer *)0x0) {
      pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                         ((Component_1 *)pXVar1,(MethodInfo *)0x0);
      if (pTVar2 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                  (pTVar2,(this->fields)._._._.transform,(MethodInfo *)0x0);
        pAVar3 = (this->fields).advancedGhostIcon;
        if (pAVar3 != (AdvancedGhostIcon *)0x0) {
          body = (MVCubeModelBase *)
                 UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                           ((Component_1 *)pAVar3,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
            func_?();
          }
          pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                             ((Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0);
          if (body != (MVCubeModelBase *)0x0) {
            uVar5 = pVVar4->x;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                      ((Transform *)body,*pVVar4,(MethodInfo *)0x0);
            pAVar3 = (this->fields).advancedGhostIcon;
            if (pAVar3 != (AdvancedGhostIcon *)0x0) {
              pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                                 ((Component_1 *)pAVar3,(MethodInfo *)0x0);
              if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000)
                   != 0) && ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
                func_?();
              }
              pQVar6 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                                 ((Quaternion *)&stack0xffffffec,(MethodInfo *)0x0);
              if (pTVar2 != (Transform *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                          (pTVar2,*pQVar6,(MethodInfo *)0x0);
                pAVar3 = (this->fields).advancedGhostIcon;
                team = MVAdvancedGhost_get_Team(this,(MethodInfo *)0x0);
                if (pAVar3 != (AdvancedGhostIcon *)0x0) {
                  AdvancedGhostIcon::AdvancedGhostIcon_Init
                            (pAVar3,this,body,(bool)uVar5,team,(MethodInfo *)0x0);
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
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* MVAdvancedGhost(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVAdvancedGhost::MVAdvancedGhost__ctor
               (MVAdvancedGhost *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
    func_?(TypeInfo__PrefabPool);
  }
  this_00 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
  if (this_00 == (PrefabPool *)0x0) {
    func_?(0);
  }
  else {
    prefabObject = (ObjectPrefab *)
                   System.Core.dll::System::Linq::
                   Enumerable+<CreateUnionIterator>c__Iterator1C`1[System::Object]::
                   Enumerable_CreateUnionIterator_c_Iterator1C_1_System_Object__System_Collections_IEnumerator_get_Current
                             ((Enumerable_CreateUnionIterator_c_Iterator1C_1_System_Object_ *)
                              this_00,(MethodInfo *)0x0);
    MVBlueprintBase::MVBlueprintBase__ctor_1
              ((MVBlueprintBase *)this,data,prefabObject,worldObjects,(MethodInfo *)0x0);
    piVar1 = &(this->fields)._._._.interactionFlags;
    *(uint *)piVar1 = (uint)*piVar1 | 0x200b101;
    pAVar2 = (AdvancedGhostObject *)(this->fields)._._._.component;
    *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4) =
         *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4);
    if (pAVar2 == (AdvancedGhostObject *)0x0) {
      (this->fields).advGhostObject = (AdvancedGhostObject *)0x0;
      return;
    }
    bVar3 = (TypeInfo__AdvancedGhostObject->_1).naturalAligment;
    if (((((ObjectPrefab__Class *)pAVar2->klass)->_1).naturalAligment < bVar3) ||
       ((((ObjectPrefab__Class *)pAVar2->klass)->_1).typeHierarchy[bVar3 - 1] !=
        (Il2CppClass *)TypeInfo__AdvancedGhostObject)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    pAVar5 = (AdvancedGhostObject *)0x0;
    if (bVar4) {
      pAVar5 = pAVar2;
    }
    if (pAVar5 != (AdvancedGhostObject *)0x0) {
      (this->fields).advGhostObject = pAVar5;
      return;
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* MVWorldObjectDocumentationType get_DocumentationType() */

MVWorldObjectDocumentationType__Enum
Assembly-CSharp.dll::MVAdvancedGhost::MVAdvancedGhost_get_DocumentationType
          (MVAdvancedGhost *this,MethodInfo *method)

{
  return MVWorldObjectDocumentationType__Enum_Oculus;
}


/* MVTeam get_Team() */

MVTeam__Enum
Assembly-CSharp.dll::MVAdvancedGhost::MVAdvancedGhost_get_Team
          (MVAdvancedGhost *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
             *)PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
  if (this_00 !=
      (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
       *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject
            ::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
            Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                      (this_00,StringLiteral_team,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar1 == 0) {
      return MVTeam__Enum_Server;
    }
    this_01 = (Dictionary_2_System_Type_Pool_ *)
              PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
    if (this_01 != (Dictionary_2_System_Type_Pool_ *)0x0) {
      pPStack2 =
           mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
           Dictionary_2_System_Type_Pool__get_Item
                     (this_01,(Type *)StringLiteral_team,
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
      uVar3 = CONCAT44(TypeInfo__MV__WorldObject__MVTeam,pPStack2);
      if (pPStack2 != (Pool *)0x0) {
        if ((pPStack2->klass->_0).element_class ==
            (TypeInfo__MV__WorldObject__MVTeam->_0).element_class) {
          pMVar4 = (MVTeam__Enum *)func_?();
          return *pMVar4;
        }
        goto code_?;
      }
    }
  }
  pPStack2 = (Pool *)0x0;
  uVar3 = func_?();
code_?:
  _puStack0000001c = uVar3;
  func_?();
  pcVar5 = (code *)swi(3);
  MVar6 = (*pcVar5)();
  return MVar6;
}

