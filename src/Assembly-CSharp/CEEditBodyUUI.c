
/* Void Enter(EditorStateMachine) */

void Assembly-CSharp.dll::CEEditBodyUUI::CEEditBodyUUI_Enter
               (CEEditBodyUUI *this,EditorStateMachine *esm,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ESStateBase::ESStateBase_Enter((ESStateBase *)this,esm,(MethodInfo *)0x0);
  if (esm == (EditorStateMachine *)0x0) {
code_?:
    func_?(0);
    pMVar1 = extraout_EDX;
  }
  else {
    pGVar2 = (GameObject *)
             UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
             TweenRunner`1[T]+<Start>c__Iterator0[ColorTween]::
             TweenRunner_1_T_Start_c_Iterator0_ColorTween__System_Collections_IEnumerator_get_Current
                       ((TweenRunner_1_T_Start_c_Iterator0_ColorTween_ *)esm,(MethodInfo *)0x0);
    if (TypeInfo__CEEditBodyUUI->static_fields->__f__am_cache0 ==
        (ExecuteEvents_EventFunction_1_IAvatarEditUIState_ *)0x0) {
      in_stack_3 = (MVCubeModelInstance *)&UNK_?;
      this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(
                                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarEditUIState>
                                  );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_01,(Object *)0x0,
                 MethodInfo__CEEditBodyUUI___Enter_m__0_UnityEngine__EventSystems__IAvatarEditUIState__UnityEngine__EventSystems__BaseEventData_
                 ,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarEditUIState>__EventFunction_System__Object__void__
                );
      TypeInfo__CEEditBodyUUI->static_fields->__f__am_cache0 =
           (ExecuteEvents_EventFunction_1_IAvatarEditUIState_ *)this_01;
    }
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
         TypeInfo__CEEditBodyUUI->static_fields->__f__am_cache0;
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (pGVar2,(BaseEventData *)0x0,callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAvatarEditUIState>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarEditUIState>_
              );
    pWVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRefNullRef
                       ((MethodInfo *)0x0);
    (this->fields)._.tintedWo = pWVar4;
    pMVar1 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(esm,(MethodInfo *)0x0);
    if (pMVar1 == (MVWorldObjectClient *)0x0) {
      pIVar5 = (IList_1_VoxelHit_ *)0xffffffff;
code_?:
      (this->fields).targetCubeModelId = (int32_t)pIVar5;
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      unaff_ESI = (MVCubeModelInstance__Class *)
                  MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      pMVar6 = CEEditBodyUUI_get_TargetCubeModel(this,(MethodInfo *)0x0);
      if ((pMVar6 != (MVCubeModelInstance *)0x0) &&
         (id = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pMVar6,
                          (MethodInfo *)0x0), unaff_ESI != (MVCubeModelInstance__Class *)0x0)) {
        unaff_ESI = (MVCubeModelInstance__Class *)
                    MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              ((MVWorldObjectClientManager *)unaff_ESI,(int32_t)id,(MethodInfo *)0x0
                              );
        in_stack_3 = (MVCubeModelInstance *)TypeInfo__IWorldObjectWithModelingConstraint;
        if (unaff_ESI == (MVCubeModelInstance__Class *)0x0) {
          pIVar7 = (IWorldObjectWithModelingConstraint *)0x0;
        }
        else {
          pIVar7 = (IWorldObjectWithModelingConstraint *)
                    func_?(unaff_ESI,TypeInfo__IWorldObjectWithModelingConstraint);
          if (pIVar7 == (IWorldObjectWithModelingConstraint *)0x0) goto code_?;
        }
        (this->fields).modelBody = pIVar7;
        bVar8 = EditorStateMachine::EditorStateMachine_get_ParentGroupIsRoot(esm,(MethodInfo *)0x0);
        if (bVar8 == 0) {
          pPVar9 = (PrefabPool *)
                    EditorStateMachine::EditorStateMachine_get_ParentGroup(esm,(MethodInfo *)0x0);
          if (pPVar9 == (PrefabPool *)0x0) goto code_?;
          unaff_ESI = (MVCubeModelInstance__Class *)
                      PrefabPool::PrefabPool_get_MVPointLightPrefab(pPVar9,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
            func_?(TypeInfo__SharedCubeFunctions);
          }
          SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively
                    ((Transform *)unaff_ESI,0,(MethodInfo *)0x0);
        }
        pPVar9 = (PrefabPool *)CEEditBodyUUI_get_TargetCubeModel(this,(MethodInfo *)0x0);
        if (pPVar9 != (PrefabPool *)0x0) {
          unaff_ESI = (MVCubeModelInstance__Class *)
                      PrefabPool::PrefabPool_get_MVPointLightPrefab(pPVar9,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
            func_?(TypeInfo__SharedCubeFunctions);
          }
          SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively
                    ((Transform *)unaff_ESI,1,(MethodInfo *)0x0);
          pMVar6 = CEEditBodyUUI_get_TargetCubeModel(this,(MethodInfo *)0x0);
          if (pMVar6 != (MVCubeModelInstance *)0x0) {
            gameObject = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                                   ((DayNightCycle *)pMVar6,(MethodInfo *)0x0);
            DrawPlane::DrawPlane_DrawPlaneToModel((GameObject *)gameObject,(MethodInfo *)0x0);
            pIVar7 = (this->fields).modelBody;
            in_stack_3 = CEEditBodyUUI_get_TargetCubeModel(this,(MethodInfo *)0x0);
            unaff_ESI = (MVCubeModelInstance__Class *)0x0;
            if (pIVar7 != (IWorldObjectWithModelingConstraint *)0x0) {
              uVar10 = 0;
              pIVar11 = pIVar7->klass;
              uVar12._0_1_ = (pIVar11->_1).rank;
              uVar12._1_1_ = (pIVar11->_1).minimumAlignment;
              if (uVar12 != 0) {
                do {
                  if (pIVar11->interfaceOffsets[uVar10].interfaceType ==
                      (Il2CppClass *)TypeInfo__IWorldObjectWithModelingConstraint) {
                    ppMVar13 = &(&pIVar11->vtable)[pIVar11->interfaceOffsets[uVar10].offset].
                                GetModelConstaint.method;
                    goto code_?;
                  }
                  uVar10 = uVar10 + 1;
                } while (uVar10 < uVar12);
              }
              ppMVar13 = (MethodInfo **)
                         func_?(pIVar7,TypeInfo__IWorldObjectWithModelingConstraint,0,
                                         in_stack_3,0);
code_?:
              constraint = (IModelingConstraint *)
                           (*(code *)*ppMVar13)(pIVar7,in_stack_3,ppMVar13[1]);
              pGVar2 = (GameObject *)func_?(TypeInfo__UnityEngine__GameObject);
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
                        (pGVar2,StringLiteral_constrainVisualizer,(MethodInfo *)0x0);
              unaff_ESI = (MVCubeModelInstance__Class *)0x0;
              if (pGVar2 != (GameObject *)0x0) {
                this_03 = (ConstraintVisualizer *)
                          UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_AddComponent_85
                                    (pGVar2,
                                     ConstraintVisualizer_MethodInfo__UnityEngine__GameObject__AddComponent<ConstraintVisualizer>__
                                    );
                (this->fields).constraintVisualizer = this_03;
                pMVar6 = CEEditBodyUUI_get_TargetCubeModel(this,(MethodInfo *)0x0);
                unaff_ESI = (MVCubeModelInstance__Class *)0x0;
                if (this_03 != (ConstraintVisualizer *)0x0) {
                  ConstraintVisualizer::ConstraintVisualizer_Init
                            (this_03,(MVCubeModelBase *)pMVar6,constraint,StringLiteral_UIItems,
                             (MethodInfo *)0x0);
                  unaff_ESI = (MVCubeModelInstance__Class *)
                              PlayerListsLayout+<CreatePlayerLists>c__Iterator0::
                              PlayerListsLayout_CreatePlayerLists_c_Iterator0_System_Collections_IEnumerator_get_Current
                                        ((PlayerListsLayout_CreatePlayerLists_c_Iterator0 *)esm,
                                         (MethodInfo *)0x0);
                  pMVar6 = CEEditBodyUUI_get_TargetCubeModel(this,(MethodInfo *)0x0);
                  if (unaff_ESI != (MVCubeModelInstance__Class *)0x0) {
                    CubeModelingStateMachine::CubeModelingStateMachine_StartEdit
                              ((CubeModelingStateMachine *)unaff_ESI,(MVCubeModelBase *)pMVar6,
                               constraint,(MethodInfo *)0x0);
                    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr &
                         0x2000000) != 0) &&
                       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                      func_?(TypeInfo__MVGameControllerBase);
                    }
                    pGVar14 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                        ((MethodInfo *)0x0);
                    if (pGVar14 != (GameEventManager *)0x0) {
                      this_00 = (pGVar14->fields).AvatarCommandsBuildMode;
                      in_stack_3 = (MVCubeModelInstance *)(this->fields)._.stateType;
                      pMVar1 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO
                                         (esm,(MethodInfo *)0x0);
                      if (pMVar1 != (MVWorldObjectClient *)0x0) {
                        unaff_ESI = (MVCubeModelInstance__Class *)
                                    mscorlib.dll::System::Collections::ObjectModel::
                                    Collection`1[VoxelHit]::Collection_1_VoxelHit__get_Items
                                              ((Collection_1_VoxelHit_ *)pMVar1,(MethodInfo *)0x0);
                        this_04 = (TextCommand_Command *)
                                  func_?(
                                                 TypeInfo__MVBuildModeAvatarLocal_EditMode__CEEditBodyUUIData
                                                 );
                        TextCommand+Command::TextCommand_Command__ctor
                                  (this_04,(String__Array *)unaff_ESI,(MethodInfo *)0x0);
                        if (this_00 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0) {
                          GameEventManager+AvatarCommandsBuildModeManager::
                          GameEventManager_AvatarCommandsBuildModeManager_EnterBuildStateEvent
                                    (this_00,(EditorEvent__Enum)in_stack_3,(Object *)this_04,
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
        }
      }
      goto code_?;
    }
    bVar15 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment;
    if (((pMVar1->klass->_1).naturalAligment < bVar15) ||
       ((MVCubeModelInstance__Class *)(pMVar1->klass->_1).typeHierarchy[bVar15 - 1] !=
        TypeInfo__MVCubeModelInstance)) {
      bVar16 = false;
    }
    else {
      bVar16 = true;
    }
    this_02 = (MVWorldObjectClient *)0x0;
    if (bVar16) {
      this_02 = pMVar1;
    }
    unaff_ESI = TypeInfo__MVCubeModelInstance;
    if (this_02 != (MVWorldObjectClient *)0x0) {
      pIVar5 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                Collection_1_VoxelHit__get_Items
                          ((Collection_1_VoxelHit_ *)this_02,(MethodInfo *)0x0);
      goto code_?;
    }
  }
  func_?(pMVar1,unaff_ESI);
code_?:
  func_?(unaff_ESI,in_stack_3);
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void Execute(EditorStateMachine) */

void Assembly-CSharp.dll::CEEditBodyUUI::CEEditBodyUUI_Execute
               (CEEditBodyUUI *this,EditorStateMachine *esm,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,(float)esm,(MethodInfo *)0x0);
  pMVar1 = CEEditBodyUUI_get_TargetCubeModel(this,(MethodInfo *)0x0);
  if (pMVar1 == (MVCubeModelInstance *)0x0) {
    pOVar2 = (Object *)func_?();
    if (esm != (EditorStateMachine *)0x0) {
      FSMEntity::FSMEntity_set_Event((FSMEntity *)esm,pOVar2,(MethodInfo *)0x0);
      return;
    }
  }
  else if ((esm != (EditorStateMachine *)0x0) &&
          (pOVar2 = PlayerListsLayout+<CreatePlayerLists>c__Iterator0::
                    PlayerListsLayout_CreatePlayerLists_c_Iterator0_System_Collections_IEnumerator_get_Current
                              ((PlayerListsLayout_CreatePlayerLists_c_Iterator0 *)esm,
                               (MethodInfo *)0x0), pOVar2 != (Object *)0x0)) {
    (*pOVar2->klass[1]._0.gc_desc)();
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Exit(EditorStateMachine) */

void Assembly-CSharp.dll::CEEditBodyUUI::CEEditBodyUUI_Exit
               (CEEditBodyUUI *this,EditorStateMachine *esm,MethodInfo *method)

{
  this_02 = esm;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,(float)esm,(MethodInfo *)0x0);
  DrawPlane::DrawPlane_ReturnDrawPlaneToLandscape((MethodInfo *)0x0);
  bVar1 = DrawPlane::DrawPlane_get_IsDrawPlaneActive((MethodInfo *)0x0);
  if (bVar1 != 0) {
    DrawPlane::DrawPlane_ToggleDrawPlane((MethodInfo *)0x0);
  }
  this_00 = (this->fields).constraintVisualizer;
  if (this_00 != (ConstraintVisualizer *)0x0) {
    obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                    ((Component_1 *)this_00,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)obj,(MethodInfo *)0x0);
    if (esm != (EditorStateMachine *)0x0) {
      bVar1 = EditorStateMachine::EditorStateMachine_get_ParentGroupIsRoot(esm,(MethodInfo *)0x0);
      if (bVar1 == 0) {
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        this_03 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        id = EditorStateMachine::EditorStateMachine_get_ParentGroupID(esm,(MethodInfo *)0x0);
        if (this_03 == (MVWorldObjectClientManager *)0x0) goto code_?;
        pPVar2 = (PrefabPool *)
                 MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (this_03,id,(MethodInfo *)0x0);
        if (pPVar2 == (PrefabPool *)0x0) goto code_?;
        t = PrefabPool::PrefabPool_get_MVPointLightPrefab(pPVar2,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
          func_?();
        }
        esm._0_1_ = 1;
      }
      else {
        pPVar2 = (PrefabPool *)CEEditBodyUUI_get_TargetCubeModel(this,(MethodInfo *)0x0);
        if (pPVar2 == (PrefabPool *)0x0) goto code_?;
        t = PrefabPool::PrefabPool_get_MVPointLightPrefab(pPVar2,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
          func_?();
        }
        esm._0_1_ = 0;
      }
      SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively
                ((Transform *)t,(bool)esm,(MethodInfo *)0x0);
      EditorStateMachine::EditorStateMachine_DeSelectAll(this_02,(MethodInfo *)0x0);
      pCVar3 = (CubeModelingStateMachine *)
               PlayerListsLayout+<CreatePlayerLists>c__Iterator0::
               PlayerListsLayout_CreatePlayerLists_c_Iterator0_System_Collections_IEnumerator_get_Current
                         ((PlayerListsLayout_CreatePlayerLists_c_Iterator0 *)this_02,
                          (MethodInfo *)0x0);
      if (pCVar3 != (CubeModelingStateMachine *)0x0) {
        CubeModelingStateMachine::CubeModelingStateMachine_RemoveCursors(pCVar3,(MethodInfo *)0x0);
        pCVar3 = (CubeModelingStateMachine *)
                 PlayerListsLayout+<CreatePlayerLists>c__Iterator0::
                 PlayerListsLayout_CreatePlayerLists_c_Iterator0_System_Collections_IEnumerator_get_Current
                           ((PlayerListsLayout_CreatePlayerLists_c_Iterator0 *)this_02,
                            (MethodInfo *)0x0);
        if (pCVar3 != (CubeModelingStateMachine *)0x0) {
          CubeModelingStateMachine::CubeModelingStateMachine_EndEdit(pCVar3,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?();
          }
          pGVar4 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                             ((MethodInfo *)0x0);
          if ((pGVar4 != (GameEventManager *)0x0) &&
             (this_01 = (pGVar4->fields).AvatarCommandsBuildMode,
             this_01 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) {
            GameEventManager+AvatarCommandsBuildModeManager::
            GameEventManager_AvatarCommandsBuildModeManager_ExitBuildStateEvent
                      (this_01,(this->fields)._.stateType,(Object *)0x0,(MethodInfo *)0x0);
            return;
          }
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


/* Void <Enter>m__0(IAvatarEditUIState, BaseEventData) */

void Assembly-CSharp.dll::CEEditBodyUUI::CEEditBodyUUI__Enter_m__0
               (IAvatarEditUIState *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IAvatarEditUIState *)0x0) {
    func_?(0,TypeInfo__UnityEngine__EventSystems__IAvatarEditUIState,x,1);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* MVCubeModelInstance get_TargetCubeModel() */

MVCubeModelInstance *
Assembly-CSharp.dll::CEEditBodyUUI::CEEditBodyUUI_get_TargetCubeModel
          (CEEditBodyUUI *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).targetCubeModelId == -1) {
    return (MVCubeModelInstance *)0x0;
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    pMVar1 = (MVCubeModelInstance *)
             MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (this_00,(this->fields).targetCubeModelId,(MethodInfo *)0x0);
    if (pMVar1 == (MVCubeModelInstance *)0x0) {
      return (MVCubeModelInstance *)0x0;
    }
    bVar2 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment;
    if (((pMVar1->klass->_1).naturalAligment < bVar2) ||
       ((MVCubeModelInstance__Class *)(pMVar1->klass->_1).typeHierarchy[bVar2 - 1] !=
        TypeInfo__MVCubeModelInstance)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    pMVar4 = (MVCubeModelInstance *)0x0;
    if (bVar3) {
      pMVar4 = pMVar1;
    }
    if (pMVar4 != (MVCubeModelInstance *)0x0) {
      return pMVar4;
    }
    func_?();
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pMVar1 = (MVCubeModelInstance *)(*pcVar5)();
  return pMVar1;
}

