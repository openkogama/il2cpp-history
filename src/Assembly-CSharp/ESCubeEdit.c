
/* Void Enter(EditorStateMachine) */

void Assembly-CSharp.dll::ESCubeEdit::ESCubeEdit_Enter
               (ESCubeEdit *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    pCVar1 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                       ((DayNightCycle *)this_00,(MethodInfo *)0x0);
    if (e != (EditorStateMachine *)0x0) {
      pCVar2 = (CubeModelingStateMachine *)
               PlayerListsLayout+<CreatePlayerLists>c__Iterator0::
               PlayerListsLayout_CreatePlayerLists_c_Iterator0_System_Collections_IEnumerator_get_Current
                         ((PlayerListsLayout_CreatePlayerLists_c_Iterator0 *)e,(MethodInfo *)0x0);
      if (pCVar2 != (CubeModelingStateMachine *)0x0) {
        materialId = CubeModelingStateMachine::CubeModelingStateMachine_get_CurrentMaterialId
                               (pCVar2,(MethodInfo *)0x0);
        if (pCVar1 != (CelestialParam *)0x0) {
          this_01 = MVMaterialRepository::MVMaterialRepository_GetMaterial
                              ((MVMaterialRepository *)pCVar1,materialId,(MethodInfo *)0x0);
          if (this_01 != (MVMaterial *)0x0) {
            bVar3 = MVMaterial::MVMaterial_get_IsAvailable(this_01,(MethodInfo *)0x0);
            if (bVar3 == 0) {
              if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0)
                 && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
                func_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                        ((Object *)StringLiteral_Handle_if_default_material_is_no,(MethodInfo *)0x0)
              ;
              pCVar2 = (CubeModelingStateMachine *)
                       PlayerListsLayout+<CreatePlayerLists>c__Iterator0::
                       PlayerListsLayout_CreatePlayerLists_c_Iterator0_System_Collections_IEnumerator_get_Current
                                 ((PlayerListsLayout_CreatePlayerLists_c_Iterator0 *)e,
                                  (MethodInfo *)0x0);
              if (pCVar2 == (CubeModelingStateMachine *)0x0) goto code_?;
              CubeModelingStateMachine::CubeModelingStateMachine_set_CurrentMaterialId
                        (pCVar2,0x15,(MethodInfo *)0x0);
            }
            UNK_? = 0;
            pMVar4 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO
                               (e,(MethodInfo *)0x0);
            if (pMVar4 == (MVWorldObjectClient *)0x0) {
              if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0)
                 && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
                func_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                        ((Object *)StringLiteral_ESCubeEdit_must_not_be_entered_w,(MethodInfo *)0x0)
              ;
              FSMEntity::FSMEntity_PopState((FSMEntity *)e,(MethodInfo *)0x0);
              return;
            }
            if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
              func_?();
            }
            pGVar5 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                ((MethodInfo *)0x0);
            if (pGVar5 != (GameEventManager *)0x0) {
              editorEvent = _UNK_?;
              pMVar4 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO
                                 (e,(MethodInfo *)0x0);
              if (pMVar4 != (MVWorldObjectClient *)0x0) {
                commandComponents =
                     (String__Array *)
                     mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                     Collection_1_VoxelHit__get_Items
                               ((Collection_1_VoxelHit_ *)pMVar4,(MethodInfo *)0x0);
                this_02 = (GameEventManager_AvatarCommandsBuildModeManager *)func_?();
                eventData = this_02;
                TextCommand+Command::TextCommand_Command__ctor
                          ((TextCommand_Command *)this_02,commandComponents,(MethodInfo *)0x0);
                if (this_02 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0) {
                  GameEventManager+AvatarCommandsBuildModeManager::
                  GameEventManager_AvatarCommandsBuildModeManager_EnterBuildStateEvent
                            (this_02,editorEvent,(Object *)eventData,(MethodInfo *)0x0);
                  DrawPlane::DrawPlane_HideDrawPlane((MethodInfo *)0x0);
                  pGVar6 = (GameObject *)
                            UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                            TweenRunner`1[T]+<Start>c__Iterator0[ColorTween]::
                            TweenRunner_1_T_Start_c_Iterator0_ColorTween__System_Collections_IEnumerator_get_Current
                                      ((TweenRunner_1_T_Start_c_Iterator0_ColorTween_ *)e,
                                       (MethodInfo *)0x0);
                  this_03 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                             *)func_?();
                  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                  SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                            (this_03,(Object *)&UNK_?,
                             MethodInfo__ESCubeEdit___Enter_m__0_IHandleCubeModelEdit__UnityEngine__EventSystems__BaseEventData_
                             ,
                             MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IHandleCubeModelEdit>__EventFunction_System__Object__void__
                            );
                  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.
                              methodPtr & 0x2000000) != 0) &&
                     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0))
                  {
                    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
                  }
                  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                  ExecuteEvents_ExecuteHierarchy_63
                            (pGVar6,(BaseEventData *)0x0,
                             (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_03,
                             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IHandleCubeModelEdit>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IHandleCubeModelEdit>_
                            );
                  _UNK_? =
                       MVWorldObjectClientManager::
                       MVWorldObjectClientManager_GetWorldObjectClientRefNullRef((MethodInfo *)0x0);
                  pMVar4 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO
                                     (e,(MethodInfo *)0x0);
                  if (pMVar4 == (MVWorldObjectClient *)0x0) {
                    _UNK_? = (IList_1_VoxelHit_ *)0xffffffff;
                  }
                  else {
                    bVar7 = (TypeInfo__MVCubeModelBase->_1).naturalAligment;
                    if (((pMVar4->klass->_1).naturalAligment < bVar7) ||
                       ((MVCubeModelBase__Class *)(pMVar4->klass->_1).typeHierarchy[bVar7 - 1] !=
                        TypeInfo__MVCubeModelBase)) {
                      bVar8 = false;
                    }
                    else {
                      bVar8 = true;
                    }
                    this_04 = (MVWorldObjectClient *)0x0;
                    if (bVar8) {
                      this_04 = pMVar4;
                    }
                    if (this_04 == (MVWorldObjectClient *)0x0) goto code_?;
                    _UNK_? =
                         mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                         Collection_1_VoxelHit__get_Items
                                   ((Collection_1_VoxelHit_ *)this_04,(MethodInfo *)0x0);
                  }
                  EditorStateMachine::EditorStateMachine_DeSelectAll(e,(MethodInfo *)0x0);
                  pMVar9 = ESCubeEdit_get_TargetCubeModel
                                      ((ESCubeEdit *)&UNK_?,(MethodInfo *)0x0);
                  if (pMVar9 != (MVCubeModelBase *)0x0) {
                    this_05 = MVCubeModelBase::MVCubeModelBase_get_ModelingConstraintBuilder
                                        (pMVar9,(MethodInfo *)0x0);
                    if (this_05 != (Func_1_IModelingConstraint_ *)0x0) {
                      _UNK_? =
                           System.Core.dll::System::Func`1[System::Collections::Generic::
                           List`1[MVOverlapResult]]::
                           Func_1_System_Collections_Generic_List_1_MVOverlapResult__Invoke
                                     ((Func_1_System_Collections_Generic_List_1_MVOverlapResult_ *)
                                      this_05,
                                      MethodInfo__System__Func<IModelingConstraint>__Invoke__);
                      pGVar6 = (GameObject *)func_?();
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
                                (pGVar6,StringLiteral_ConstrainVisualizer,(MethodInfo *)0x0);
                      if (pGVar6 != (GameObject *)0x0) {
                        this_06 = (ConstraintVisualizer *)
                                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                  GameObject_AddComponent_85
                                            (pGVar6,
                                             ConstraintVisualizer_MethodInfo__UnityEngine__GameObject__AddComponent<ConstraintVisualizer>__
                                            );
                        _UNK_? = this_06;
                        pMVar9 = ESCubeEdit_get_TargetCubeModel
                                            ((ESCubeEdit *)&UNK_?,(MethodInfo *)0x0);
                        if (this_06 != (ConstraintVisualizer *)0x0) {
                          ConstraintVisualizer::ConstraintVisualizer_Init
                                    (this_06,pMVar9,(IModelingConstraint *)_UNK_?,
                                     StringLiteral_UIItems,(MethodInfo *)0x0);
                          pMVar9 = ESCubeEdit_get_TargetCubeModel
                                              ((ESCubeEdit *)&UNK_?,(MethodInfo *)0x0);
                          if (pMVar9 != (MVCubeModelBase *)0x0) {
                            bVar3 = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
                                              ((MVWorldObjectClient *)pMVar9,
                                               InteractionFlags__Enum_IsPreview,(MethodInfo *)0x0);
                            if (bVar3 != 0) {
                              pMVar9 = ESCubeEdit_get_TargetCubeModel
                                                  ((ESCubeEdit *)&UNK_?,(MethodInfo *)0x0);
                              if (pMVar9 == (MVCubeModelBase *)0x0) goto code_?;
                              (*(code *)(pMVar9->klass->vtable).RemovePreviewBox.method)
                                        (pMVar9,(pMVar9->klass->vtable).HideConnectors.methodPtr);
                            }
                            bVar3 = EditorStateMachine::EditorStateMachine_get_ParentGroupIsRoot
                                              (e,(MethodInfo *)0x0);
                            if (bVar3 == 0) {
                              if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr
                                   & 0x2000000) != 0) &&
                                 ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                                func_?(TypeInfo__MVGameControllerBase);
                              }
                              this_07 = MVGameControllerBase::MVGameControllerBase_get_WOCM
                                                  ((MethodInfo *)0x0);
                              id = EditorStateMachine::EditorStateMachine_get_ParentGroupID
                                             (e,(MethodInfo *)0x0);
                              if (this_07 != (MVWorldObjectClientManager *)0x0) {
                                pPVar10 = (PrefabPool *)
                                          MVWorldObjectClientManager::
                                          MVWorldObjectClientManager_GetWorldObject
                                                    (this_07,id,(MethodInfo *)0x0);
                                if (pPVar10 != (PrefabPool *)0x0) {
                                  pMVar11 = PrefabPool::PrefabPool_get_MVPointLightPrefab
                                                      (pPVar10,(MethodInfo *)0x0);
                                  if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.
                                              methodPtr & 0x2000000) != 0) &&
                                     ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
                                    func_?(TypeInfo__SharedCubeFunctions);
                                  }
                                  SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively
                                            ((Transform *)pMVar11,0,(MethodInfo *)0x0);
                                  goto code_?;
                                }
                              }
                            }
                            else {
code_?:
                              pPVar10 = (PrefabPool *)
                                        ESCubeEdit_get_TargetCubeModel
                                                  ((ESCubeEdit *)&UNK_?,(MethodInfo *)0x0);
                              if (pPVar10 != (PrefabPool *)0x0) {
                                pMVar11 = PrefabPool::PrefabPool_get_MVPointLightPrefab
                                                    (pPVar10,(MethodInfo *)0x0);
                                if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr
                                     & 0x2000000) != 0) &&
                                   ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
                                  func_?();
                                }
                                SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively
                                          ((Transform *)pMVar11,1,(MethodInfo *)0x0);
                                pMVar9 = ESCubeEdit_get_TargetCubeModel
                                                    ((ESCubeEdit *)&UNK_?,(MethodInfo *)0x0);
                                if (pMVar9 != (MVCubeModelBase *)0x0) {
                                  pCVar1 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                                                     ((DayNightCycle *)pMVar9,(MethodInfo *)0x0);
                                  if (cRam_? == '\0') {
                                    func_?();
                                    cRam_? = '\x01';
                                  }
                                  pDVar12 = TypeInfo__DrawPlane->static_fields->drawPlaneController;
                                  if ((pDVar12 != (DrawPlaneControllerUUI *)0x0) &&
                                     (pWVar13 = (pDVar12->fields).worldEditorDrawPlane,
                                     pWVar13 != (WorldEditorDrawPlane *)0x0)) {
                                    WorldEditorDrawPlane::WorldEditorDrawPlane_CachePos
                                              (pWVar13,(MethodInfo *)0x0);
                                    pWVar13 = (pDVar12->fields).worldEditorDrawPlane;
                                    if (pWVar13 != (WorldEditorDrawPlane *)0x0) {
                                      WorldEditorDrawPlane::
                                      WorldEditorDrawPlane_set_TargetGameObject
                                                (pWVar13,(GameObject *)pCVar1,(MethodInfo *)0x0);
                                      pWVar13 = (pDVar12->fields).worldEditorDrawPlane;
                                      if (pWVar13 != (WorldEditorDrawPlane *)0x0) {
                                        WorldEditorDrawPlane::
                                        WorldEditorDrawPlane_SetToTargetGameObjectZero
                                                  (pWVar13,(MethodInfo *)0x0);
                                        pCVar2 = (CubeModelingStateMachine *)
                                                 PlayerListsLayout+<CreatePlayerLists>c__Iterator0::
                                                 PlayerListsLayout_CreatePlayerLists_c_Iterator0_System_Collections_IEnumerator_get_Current
                                                           ((
                                                  PlayerListsLayout_CreatePlayerLists_c_Iterator0 *)
                                                  e,(MethodInfo *)0x0);
                                        pMVar9 = ESCubeEdit_get_TargetCubeModel
                                                            ((ESCubeEdit *)&UNK_?,
                                                             (MethodInfo *)0x0);
                                        if (pCVar2 != (CubeModelingStateMachine *)0x0) {
                                          CubeModelingStateMachine::
                                          CubeModelingStateMachine_StartEdit
                                                    (pCVar2,pMVar9,
                                                     (IModelingConstraint *)_UNK_?,
                                                     (MethodInfo *)0x0);
                                          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).
                                                      Equals.methodPtr & 0x2000000) != 0) &&
                                             ((TypeInfo__MVGameControllerBase->_1).cctor_started ==
                                              0)) {
                                            func_?();
                                          }
                                          pMVar14 = MVGameControllerBase::
                                                    MVGameControllerBase_get_MainCameraManager
                                                              ((MethodInfo *)0x0);
                                          if (pMVar14 != (MainCameraManager *)0x0) {
                                            pMVar15 = MainCameraManager::
                                                      MainCameraManager_get_CurrentCamera
                                                                (pMVar14,(MethodInfo *)0x0);
                                            ESCubeEdit_get_TargetCubeModel
                                                      ((ESCubeEdit *)&UNK_?,(MethodInfo *)0x0
                                                      );
                                            if (pMVar15 != (MVCameraBase *)0x0) {
                                              (*(code *)(pMVar15->klass->vtable).FocusOnObject.
                                                        method)();
                                              pMVar14 = (MainCameraManager *)
                                                        GamePointGainEffect::
                                                        GamePointGainEffect_get_ID
                                                                  ((GamePointGainEffect *)e,
                                                                   (MethodInfo *)0x0);
                                              if (pMVar14 != (MainCameraManager *)0x0) {
                                                MainCameraManager::
                                                MainCameraManager_set_BlueModeEnabled
                                                          (pMVar14,1,(MethodInfo *)0x0);
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
  func_?();
code_?:
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void Execute(EditorStateMachine) */

void Assembly-CSharp.dll::ESCubeEdit::ESCubeEdit_Execute
               (ESCubeEdit *this,EditorStateMachine *e,MethodInfo *method)

{
  this_00 = e;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,(float)this_00,(MethodInfo *)0x0);
  if ((this->fields).exiting == 0) {
    pMVar1 = ESCubeEdit_get_TargetCubeModel(this,(MethodInfo *)0x0);
    bVar2 = 1 - (pMVar1 != (MVCubeModelBase *)0x0);
  }
  else {
    bVar2 = 1;
  }
  (this->fields).exiting = bVar2;
  if (this_00 != (EditorStateMachine *)0x0) {
    if (bVar2 == 0) {
      pOVar3 = PlayerListsLayout+<CreatePlayerLists>c__Iterator0::
               PlayerListsLayout_CreatePlayerLists_c_Iterator0_System_Collections_IEnumerator_get_Current
                         ((PlayerListsLayout_CreatePlayerLists_c_Iterator0 *)this_00,
                          (MethodInfo *)0x0);
      if (pOVar3 != (Object *)0x0) {
        e = (EditorStateMachine *)pOVar3->klass[1]._0.name;
        (*pOVar3->klass[1]._0.gc_desc)();
        pMVar1 = ESCubeEdit_get_TargetCubeModel(this,(MethodInfo *)0x0);
        if (pMVar1 != (MVCubeModelBase *)0x0) {
          bVar2 = MVCubeModelBase::MVCubeModelBase_get_ContainsCubes(pMVar1,(MethodInfo *)0x0);
          if (bVar2 == 0) {
            if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
              e = (EditorStateMachine *)TypeInfo__UnityEngine__Debug;
              func_?();
            }
            e = (EditorStateMachine *)0x0;
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                      ((Object *)StringLiteral_This_prototype_is_empty_and_shou,(MethodInfo *)0x0);
            e = (EditorStateMachine *)&e;
            pOVar3 = (Object *)func_?();
            FSMEntity::FSMEntity_set_Event((FSMEntity *)this_00,pOVar3,(MethodInfo *)0x0);
          }
          return;
        }
      }
    }
    else {
      bVar2 = EditorStateMachine::EditorStateMachine_get_ParentGroupIsRoot
                        (this_00,(MethodInfo *)0x0);
      if (bVar2 != 0) {
        e = (EditorStateMachine *)&e;
        pOVar3 = (Object *)func_?();
        FSMEntity::FSMEntity_set_Event((FSMEntity *)this_00,pOVar3,(MethodInfo *)0x0);
        return;
      }
      e = (EditorStateMachine *)0x0;
      pMVar4 = EditorStateMachine::EditorStateMachine_get_ParentGroup(this_00,(MethodInfo *)0x0);
      if (pMVar4 == (MVGroup *)0x0) {
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          method = (MethodInfo *)&UNK_?;
          func_?();
        }
        method = (MethodInfo *)StringLiteral_ParentGroup_was_null;
        e = (EditorStateMachine *)&UNK_?;
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                  ((Object *)StringLiteral_ParentGroup_was_null,(MethodInfo *)0x0);
        method = (MethodInfo *)this_00;
        e = (EditorStateMachine *)&UNK_?;
        EditorStateMachine::EditorStateMachine_ExitGroupToRoot(this_00,(MethodInfo *)0x0);
        return;
      }
      method = (MethodInfo *)this_00;
      e = (EditorStateMachine *)&UNK_?;
      for (this_01 = (PrefabPool *)
                     EditorStateMachine::EditorStateMachine_get_ParentGroup
                               (this_00,(MethodInfo *)0x0); this_01 != (PrefabPool *)0x0;
          this_01 = (PrefabPool *)
                    PrefabPool::PrefabPool_get_MVRandomBoxPrefab(this_01,(MethodInfo *)0x0)) {
        cVar5 = (*(code *)this_01->klass[2].vtable.Finalize.method)(this_01,this_00);
        if (cVar5 != '\0') {
          return;
        }
        pOVar6 = PrefabPool::PrefabPool_get_MVRandomBoxPrefab(this_01,(MethodInfo *)0x0);
        if (pOVar6 == (ObjectPrefab *)0x0) {
          return;
        }
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                  ((Object *)StringLiteral_Looping_up_tree,(MethodInfo *)0x0);
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Exit(EditorStateMachine) */

void Assembly-CSharp.dll::ESCubeEdit::ESCubeEdit_Exit
               (ESCubeEdit *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  DrawPlane::DrawPlane_HideDrawPlane((MethodInfo *)0x0);
  if (e == (EditorStateMachine *)0x0) goto code_?;
  pGVar1 = (GameObject *)
           UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
           TweenRunner`1[T]+<Start>c__Iterator0[ColorTween]::
           TweenRunner_1_T_Start_c_Iterator0_ColorTween__System_Collections_IEnumerator_get_Current
                     ((TweenRunner_1_T_Start_c_Iterator0_ColorTween_ *)e,(MethodInfo *)0x0);
  if (TypeInfo__ESCubeEdit->static_fields->__f__am_cache0 ==
      (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_02,(Object *)0x0,
               MethodInfo__ESCubeEdit___Exit_m__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    TypeInfo__ESCubeEdit->static_fields->__f__am_cache0 =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)this_02;
  }
  callbackFunction =
       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
       TypeInfo__ESCubeEdit->static_fields->__f__am_cache0;
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (pGVar1,(BaseEventData *)0x0,callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  pMVar2 = ESCubeEdit_get_TargetCubeModel(this,(MethodInfo *)0x0);
  if (pMVar2 == (MVCubeModelBase *)0x0) {
    this_04 = (MainCameraManager *)
              GamePointGainEffect::GamePointGainEffect_get_ID
                        ((GamePointGainEffect *)e,(MethodInfo *)0x0);
  }
  else {
    pMVar2 = ESCubeEdit_get_TargetCubeModel(this,(MethodInfo *)0x0);
    if (pMVar2 == (MVCubeModelBase *)0x0) goto code_?;
    bVar3 = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
                      ((MVWorldObjectClient *)pMVar2,InteractionFlags__Enum_IsPreview,
                       (MethodInfo *)0x0);
    if (bVar3 != 0) {
      pMVar2 = ESCubeEdit_get_TargetCubeModel(this,(MethodInfo *)0x0);
      if (pMVar2 == (MVCubeModelBase *)0x0) goto code_?;
      (*(code *)(pMVar2->klass->vtable).AddPreviewBox.method)();
    }
    bVar3 = EditorStateMachine::EditorStateMachine_get_ParentGroupIsRoot(e,(MethodInfo *)0x0);
    if (bVar3 == 0) {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      this_03 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      id = EditorStateMachine::EditorStateMachine_get_ParentGroupID(e,(MethodInfo *)0x0);
      if (this_03 == (MVWorldObjectClientManager *)0x0) goto code_?;
      pPVar4 = (PrefabPool *)
                MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          (this_03,id,(MethodInfo *)0x0);
      if (pPVar4 == (PrefabPool *)0x0) goto code_?;
      pMVar5 = PrefabPool::PrefabPool_get_MVPointLightPrefab(pPVar4,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
        func_?();
      }
      SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively
                ((Transform *)pMVar5,0,(MethodInfo *)0x0);
    }
    pPVar4 = (PrefabPool *)ESCubeEdit_get_TargetCubeModel(this,(MethodInfo *)0x0);
    if (pPVar4 == (PrefabPool *)0x0) goto code_?;
    pMVar5 = PrefabPool::PrefabPool_get_MVPointLightPrefab(pPVar4,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
      func_?();
    }
    SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively
              ((Transform *)pMVar5,0,(MethodInfo *)0x0);
    this_04 = (MainCameraManager *)
              GamePointGainEffect::GamePointGainEffect_get_ID
                        ((GamePointGainEffect *)e,(MethodInfo *)0x0);
  }
  if (this_04 != (MainCameraManager *)0x0) {
    MainCameraManager::MainCameraManager_set_BlueModeEnabled(this_04,0,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pDVar6 = TypeInfo__DrawPlane->static_fields->drawPlaneController;
    if ((pDVar6 != (DrawPlaneControllerUUI *)0x0) &&
       (this_00 = (pDVar6->fields).worldEditorDrawPlane, this_00 != (WorldEditorDrawPlane *)0x0)) {
      WorldEditorDrawPlane::WorldEditorDrawPlane_ReturnDrawPlaneToLandscape
                (this_00,(MethodInfo *)0x0);
      pCVar7 = (this->fields).constraintVisualizer;
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)pCVar7,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar3 != 0) {
        pCVar7 = (this->fields).constraintVisualizer;
        if (pCVar7 == (ConstraintVisualizer *)0x0) goto code_?;
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)pCVar7,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                  ((Object_1 *)pGVar1,(MethodInfo *)0x0);
      }
      pMVar8 = (ModelingDynamicBoxConstraint *)(this->fields).constraint;
      if (pMVar8 != (ModelingDynamicBoxConstraint *)0x0) {
        bVar9 = (TypeInfo__ModelingDynamicBoxConstraint->_1).naturalAligment;
        if (((pMVar8->klass->_1).naturalAligment < bVar9) ||
           ((pMVar8->klass->_1).typeHierarchy[bVar9 - 1] !=
            (Il2CppClass *)TypeInfo__ModelingDynamicBoxConstraint)) {
          bVar10 = false;
        }
        else {
          bVar10 = true;
        }
        this_05 = (ModelingDynamicBoxConstraint *)0x0;
        if (bVar10) {
          this_05 = pMVar8;
        }
        if (this_05 != (ModelingDynamicBoxConstraint *)0x0) {
          ModelingDynamicBoxConstraint::ModelingDynamicBoxConstraint_DetachFromCubeModel
                    (this_05,(MethodInfo *)0x0);
        }
      }
      (this->fields).constraint = (IModelingConstraint *)0x0;
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      pGVar11 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
      if (((pGVar11 != (GameEventManager *)0x0) &&
          (pGVar12 = (pGVar11->fields).AvatarCommandsBuildMode,
          pGVar12 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
         (this_01 = (pGVar12->fields).LaserCommands,
         this_01 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)) {
        GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
        GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_ChangeState
                  (this_01,LaserPointerState__Enum_Idle,(MethodInfo *)0x0);
        this_06 = (Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_
                   *)MVJetPack+LocalObjectsJetPack::MVJetPack_LocalObjectsJetPack_get_Id
                               ((MVJetPack_LocalObjectsJetPack *)e,(MethodInfo *)0x0);
        if (this_06 !=
            (Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_ *)
            0x0) {
          JVar13 = System.Core.dll::System::Linq::
                   Enumerable+<CreateWhereIterator>c__Iterator1D`1[Newtonsoft::Json::Schema::
                   JsonSchemaType]::
                   Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType__System_Collections_Generic_IEnumerator_TSource__get_Current
                             (this_06,
                              MethodInfo__System__Collections__Generic__HashSet<int>__get_Count__);
          if (JVar13 == JsonSchemaType__Enum_None) {
            ESStateBase::ESStateBase_DeTintCurrent((ESStateBase *)this,(MethodInfo *)0x0);
          }
          pCVar14 = (CubeModelingStateMachine *)
                    PlayerListsLayout+<CreatePlayerLists>c__Iterator0::
                    PlayerListsLayout_CreatePlayerLists_c_Iterator0_System_Collections_IEnumerator_get_Current
                              ((PlayerListsLayout_CreatePlayerLists_c_Iterator0 *)e,
                               (MethodInfo *)0x0);
          if (pCVar14 != (CubeModelingStateMachine *)0x0) {
            CubeModelingStateMachine::CubeModelingStateMachine_RemoveCursors
                      (pCVar14,(MethodInfo *)0x0);
            pCVar14 = (CubeModelingStateMachine *)
                      PlayerListsLayout+<CreatePlayerLists>c__Iterator0::
                      PlayerListsLayout_CreatePlayerLists_c_Iterator0_System_Collections_IEnumerator_get_Current
                                ((PlayerListsLayout_CreatePlayerLists_c_Iterator0 *)e,
                                 (MethodInfo *)0x0);
            if (pCVar14 != (CubeModelingStateMachine *)0x0) {
              CubeModelingStateMachine::CubeModelingStateMachine_EndEdit(pCVar14,(MethodInfo *)0x0);
              if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                func_?();
              }
              pGVar11 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                  ((MethodInfo *)0x0);
              if ((pGVar11 != (GameEventManager *)0x0) &&
                 (pGVar12 = (pGVar11->fields).AvatarCommandsBuildMode,
                 pGVar12 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) {
                GameEventManager+AvatarCommandsBuildModeManager::
                GameEventManager_AvatarCommandsBuildModeManager_ExitBuildStateEvent
                          (pGVar12,(this->fields)._.stateType,(Object *)0x0,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void HandleUnavailableMaterial(EditorStateMachine) */

void Assembly-CSharp.dll::ESCubeEdit::ESCubeEdit_HandleUnavailableMaterial
               (ESCubeEdit *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    this_01 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                        ((DayNightCycle *)this_00,(MethodInfo *)0x0);
    if (e != (EditorStateMachine *)0x0) {
      pCVar1 = (CubeModelingStateMachine *)
               PlayerListsLayout+<CreatePlayerLists>c__Iterator0::
               PlayerListsLayout_CreatePlayerLists_c_Iterator0_System_Collections_IEnumerator_get_Current
                         ((PlayerListsLayout_CreatePlayerLists_c_Iterator0 *)e,(MethodInfo *)0x0);
      if (pCVar1 != (CubeModelingStateMachine *)0x0) {
        materialId = CubeModelingStateMachine::CubeModelingStateMachine_get_CurrentMaterialId
                               (pCVar1,(MethodInfo *)0x0);
        if (this_01 != (CelestialParam *)0x0) {
          this_02 = MVMaterialRepository::MVMaterialRepository_GetMaterial
                              ((MVMaterialRepository *)this_01,materialId,(MethodInfo *)0x0);
          if (this_02 != (MVMaterial *)0x0) {
            bVar2 = MVMaterial::MVMaterial_get_IsAvailable(this_02,(MethodInfo *)0x0);
            if (bVar2 == 0) {
              if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0)
                 && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
                func_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                        ((Object *)StringLiteral_Handle_if_default_material_is_no,(MethodInfo *)0x0)
              ;
              pCVar1 = (CubeModelingStateMachine *)
                       PlayerListsLayout+<CreatePlayerLists>c__Iterator0::
                       PlayerListsLayout_CreatePlayerLists_c_Iterator0_System_Collections_IEnumerator_get_Current
                                 ((PlayerListsLayout_CreatePlayerLists_c_Iterator0 *)e,
                                  (MethodInfo *)0x0);
              if (pCVar1 == (CubeModelingStateMachine *)0x0) goto code_?;
              CubeModelingStateMachine::CubeModelingStateMachine_set_CurrentMaterialId
                        (pCVar1,0x15,(MethodInfo *)0x0);
            }
            return;
          }
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


/* Void <Enter>m__0(IHandleCubeModelEdit, BaseEventData) */

void Assembly-CSharp.dll::ESCubeEdit::ESCubeEdit__Enter_m__0
               (ESCubeEdit *this,IHandleCubeModelEdit *handler,BaseEventData *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,MethodInfo__ESCubeEdit__Exit__,(MethodInfo *)0x0);
  if (handler == (IHandleCubeModelEdit *)0x0) {
    func_?(0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pIVar2 = handler->klass;
  uVar3 = 0;
  uVar4._0_1_ = (pIVar2->_1).rank;
  uVar4._1_1_ = (pIVar2->_1).minimumAlignment;
  if (uVar4 != 0) {
    do {
      if (pIVar2->interfaceOffsets[uVar3].interfaceType ==
          (Il2CppClass *)TypeInfo__IHandleCubeModelEdit) {
        ppMVar5 = &(&(handler->klass->vtable).Open)[pIVar2->interfaceOffsets[uVar3].offset].method;
        goto code_?;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar4);
  }
  ppMVar5 = (MethodInfo **)func_?(handler,TypeInfo__IHandleCubeModelEdit,0);
code_?:
  (*(code *)*ppMVar5)(handler,ppMVar5[1]);
  return;
}


/* Void <Exit>m__1(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::ESCubeEdit::ESCubeEdit__Exit_m__1
               (IUIStack *handler,BaseEventData *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (handler != (IUIStack *)0x0) {
    func_?(4,TypeInfo__UnityEngine__EventSystems__IUIStack,handler,0x80);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* ESCubeEdit() */

void Assembly-CSharp.dll::ESCubeEdit::ESCubeEdit__ctor(ESCubeEdit *this,MethodInfo *method)

{
  (this->fields).targetCubeModelId = -1;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pWVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRefNullRef
                     ((MethodInfo *)0x0);
  (this->fields)._.tintedWo = pWVar1;
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
  if ((((uint)(TypeInfo__LoggerManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__LoggerManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__LoggerManager);
  }
  this_00 = LoggerManager::LoggerManager_get_Instance((MethodInfo *)0x0);
  type = mscorlib.dll::System::Object::Object_GetType((Object *)this,(MethodInfo *)0x0);
  if (this_00 != (LoggerManager *)0x0) {
    pIVar2 = LoggerManager::LoggerManager_GetLogger(this_00,type,(MethodInfo *)0x0);
    (this->fields)._.logger = pIVar2;
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* MVCubeModelBase get_TargetCubeModel() */

MVCubeModelBase *
Assembly-CSharp.dll::ESCubeEdit::ESCubeEdit_get_TargetCubeModel(ESCubeEdit *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).targetCubeModelId == -1) {
    return (MVCubeModelBase *)0x0;
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    pMVar1 = (MVCubeModelBase *)
             MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (this_00,(this->fields).targetCubeModelId,(MethodInfo *)0x0);
    if (pMVar1 == (MVCubeModelBase *)0x0) {
      return (MVCubeModelBase *)0x0;
    }
    bVar2 = (TypeInfo__MVCubeModelBase->_1).naturalAligment;
    if (((pMVar1->klass->_1).naturalAligment < bVar2) ||
       ((MVCubeModelBase__Class *)(pMVar1->klass->_1).typeHierarchy[bVar2 - 1] !=
        TypeInfo__MVCubeModelBase)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    pMVar4 = (MVCubeModelBase *)0x0;
    if (bVar3) {
      pMVar4 = pMVar1;
    }
    if (pMVar4 != (MVCubeModelBase *)0x0) {
      return pMVar4;
    }
    func_?();
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pMVar1 = (MVCubeModelBase *)(*pcVar5)();
  return pMVar1;
}


/* Void set_TargetCubeModel(MVCubeModelBase) */

void Assembly-CSharp.dll::ESCubeEdit::ESCubeEdit_set_TargetCubeModel
               (ESCubeEdit *this,MVCubeModelBase *value,MethodInfo *method)

{
  if (value == (MVCubeModelBase *)0x0) {
    (this->fields).targetCubeModelId = -1;
    return;
  }
  pIVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
           Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)value,(MethodInfo *)0x0);
  (this->fields).targetCubeModelId = (int32_t)pIVar1;
  return;
}

