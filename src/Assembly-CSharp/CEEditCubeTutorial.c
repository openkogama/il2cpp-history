
/* Void CreateConstraint() */

void Assembly-CSharp.dll::CEEditCubeTutorial::CEEditCubeTutorial_CreateConstraint
               (CEEditCubeTutorial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_01 = (GameObject *)func_?(TypeInfo__UnityEngine__GameObject);
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
            (this_01,StringLiteral_ConstrainVisualizer,(MethodInfo *)0x0);
  if (this_01 != (GameObject *)0x0) {
    pCVar1 = (ConstraintVisualizer *)
             UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_85
                       (this_01,
                        ConstraintVisualizer_MethodInfo__UnityEngine__GameObject__AddComponent<ConstraintVisualizer>__
                       );
    (this->fields).constraintVisualizer = pCVar1;
    pMVar2 = CEEditCubeTutorial_get_TargetCubeModel(this,(MethodInfo *)0x0);
    if (pMVar2 != (MVCubeModelBase *)0x0) {
      this_02 = MVCubeModelBase::MVCubeModelBase_get_ModelingConstraintBuilder
                          (pMVar2,(MethodInfo *)0x0);
      if (this_02 != (Func_1_IModelingConstraint_ *)0x0) {
        pLVar3 = System.Core.dll::System::Func`1[System::Collections::Generic::
                 List`1[MVOverlapResult]]::
                 Func_1_System_Collections_Generic_List_1_MVOverlapResult__Invoke
                           ((Func_1_System_Collections_Generic_List_1_MVOverlapResult_ *)this_02,
                            MethodInfo__System__Func<IModelingConstraint>__Invoke__);
        pCVar1 = (this->fields).constraintVisualizer;
        (this->fields).constraint = (IModelingConstraint *)pLVar3;
        pMVar2 = CEEditCubeTutorial_get_TargetCubeModel(this,(MethodInfo *)0x0);
        if (pCVar1 != (ConstraintVisualizer *)0x0) {
          ConstraintVisualizer::ConstraintVisualizer_Init
                    (pCVar1,pMVar2,(this->fields).constraint,StringLiteral_UIItems,(MethodInfo *)0x0
                    );
          this_00 = (this->fields).CMSM;
          if (this_00 != (CubeModelingStateMachine *)0x0) {
            MVPlayer::MVPlayer_set_SubscriptionRules
                      ((MVPlayer *)this_00,(SubscriptionRulesWrapper *)(this->fields).constraint,
                       (MethodInfo *)0x0);
            return;
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


/* Boolean DoReset() */

bool Assembly-CSharp.dll::CEEditCubeTutorial::CEEditCubeTutorial_DoReset
               (CEEditCubeTutorial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).resettingBookkeeping;
  if (pCVar1 != (CEEditCubeTutorial_ResettingBookkeeping *)0x0) {
    iVar2 = WaitForTicksLocal::WaitForTicksLocal_Diff
                      ((pCVar1->fields).resettingBeginTime,(MethodInfo *)0x0);
    if (iVar2 <= (pCVar1->fields).resettingDelay) {
      return 0;
    }
    pCVar1 = (this->fields).resettingBookkeeping;
    if (pCVar1 != (CEEditCubeTutorial_ResettingBookkeeping *)0x0) {
      (pCVar1->fields).resettingDelay = 0;
      this_00 = (this->fields).CMSM;
      if (this_00 != (CubeModelingStateMachine *)0x0) {
        CubeModelingStateMachine::CubeModelingStateMachine_set_CursorVisible
                  (this_00,1,(MethodInfo *)0x0);
        pCVar3 = (Collection_1_VoxelHit_ *)(this->fields).cubeModelWrapper;
        if (pCVar3 != (Collection_1_VoxelHit_ *)0x0) {
          pMVar4 = (MVCubeModelBase *)
                   mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                   Collection_1_VoxelHit__get_Items(pCVar3,(MethodInfo *)0x0);
          if (pMVar4 != (MVCubeModelBase *)0x0) {
            pos_01.z._1_1_ = (char)((ushort)(this->fields).zeroPos.z >> 8);
            pos_01._0_5_ = *(undefined5 *)&(this->fields).zeroPos;
            this_01 = (CEEditCubeTutorial *)
                      MVCubeModelBase::MVCubeModelBase_GetCube(pMVar4,pos_01,(MethodInfo *)0x0);
            if (this_01 != (CEEditCubeTutorial *)0x0) {
              pOVar5 = System.dll::System::Collections::Generic::
                       SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                       ::Single,System::Object]::
                       SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                                 ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                                   *)this_01,(MethodInfo *)0x0);
              if (pOVar5 != (Object *)0x0) {
                if (pOVar5[1].monitor == (MonitorData *)0x0) {
                  func_?();
                  func_?();
                }
                else {
                  material = *(uint8_t *)&pOVar5[2].klass;
                  pCVar3 = (Collection_1_VoxelHit_ *)(this->fields).cubeModelWrapper;
                  if (pCVar3 != (Collection_1_VoxelHit_ *)0x0) {
                    pMVar4 = (MVCubeModelBase *)
                             mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]
                             ::Collection_1_VoxelHit__get_Items(pCVar3,(MethodInfo *)0x0);
                    if (pMVar4 != (MVCubeModelBase *)0x0) {
                      MVCubeModelBase::MVCubeModelBase_RemoveCube
                                (pMVar4,(this->fields).zeroPos,(MethodInfo *)0x0);
                      iVar6 = -1;
                      do {
                        iVar7 = -1;
                        do {
                          iVar8 = -1;
                          do {
                            pCVar3 = (Collection_1_VoxelHit_ *)(this->fields).cubeModelWrapper;
                            if (pCVar3 == (Collection_1_VoxelHit_ *)0x0) goto code_?;
                            pMVar4 = (MVCubeModelBase *)
                                     mscorlib.dll::System::Collections::ObjectModel::
                                     Collection`1[VoxelHit]::Collection_1_VoxelHit__get_Items
                                               (pCVar3,(MethodInfo *)0x0);
                            uVar9 = 0;
                            iVar10 = 0;
                            func_?(&stack0xffffffec,iVar6,(short)iVar7,iVar8,0);
                            if (pMVar4 == (MVCubeModelBase *)0x0) goto code_?;
                            pos.z = iVar10;
                            pos.x = (short)uVar9;
                            pos.y = (short)((uint)uVar9 >> 0x10);
                            MVCubeModelBase::MVCubeModelBase_RemoveCube
                                      (pMVar4,pos,(MethodInfo *)0x0);
                            iVar8 = iVar8 + 1;
                            this = this_01;
                          } while (iVar8 < 2);
                          iVar7 = iVar7 + 1;
                        } while (iVar7 < 2);
                        iVar6 = iVar6 + 1;
                      } while (iVar6 < 2);
                      pCVar3 = (Collection_1_VoxelHit_ *)(this_01->fields).cubeModelWrapper;
                      if (pCVar3 != (Collection_1_VoxelHit_ *)0x0) {
                        pMVar4 = (MVCubeModelBase *)
                                 mscorlib.dll::System::Collections::ObjectModel::
                                 Collection`1[VoxelHit]::Collection_1_VoxelHit__get_Items
                                           (pCVar3,(MethodInfo *)0x0);
                        iVar10 = (this_01->fields).zeroPos.z;
                        if ((((uint)(TypeInfo__MV__WorldObject__CubeBase->vtable).Equals.methodPtr &
                             0x2000000) != 0) &&
                           ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_started == 0)) {
                          func_?(TypeInfo__MV__WorldObject__CubeBase);
                        }
                        corners = MVWorldObject.dll::MV::WorldObject::CubeBase::
                                  CubeBase_get_IdentityCorners((MethodInfo *)0x0);
                        if ((((uint)(TypeInfo__MV__WorldObject__CubeDataPacker->vtable).Equals.
                                    methodPtr & 0x2000000) != 0) &&
                           ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_started == 0)) {
                          func_?(TypeInfo__MV__WorldObject__CubeDataPacker);
                        }
                        byteCorners = MVWorldObject.dll::MV::WorldObject::CubeDataPacker::
                                      CubeDataPacker_CornersToByteArray(corners,(MethodInfo *)0x0);
                        if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                           ((TypeInfo__Cube->_1).cctor_started == 0)) {
                          func_?();
                        }
                        faceMaterials = Cube::Cube_CreateMaterialArray(material,(MethodInfo *)0x0);
                        puVar11 = &UNK_?;
                        this_02 = (Cube *)func_?();
                        Cube::Cube__ctor(this_02,byteCorners,faceMaterials,(MethodInfo *)0x0);
                        if (pMVar4 != (MVCubeModelBase *)0x0) {
                          pos_00.z = iVar10;
                          pos_00._0_4_ = puVar11;
                          MVCubeModelBase::MVCubeModelBase_AddCube
                                    (pMVar4,pos_00,(CubeBase *)this_02,(MethodInfo *)0x0);
                          return 1;
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
  func_?(0);
  pcVar12 = (code *)swi(3);
  bVar13 = (*pcVar12)();
  return bVar13;
}


/* Void Enter(EditorStateMachine) */

void Assembly-CSharp.dll::CEEditCubeTutorial::CEEditCubeTutorial_Enter
               (CEEditCubeTutorial *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).exiting = 0;
  (this->fields).hasExited = 0;
  if (e == (EditorStateMachine *)0x0) {
code_?:
    func_?(0);
  }
  else {
    pMVar1 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
    if (pMVar1 == (MVWorldObjectClient *)0x0) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_ESEditCubeTutorial_must_not_be_e,(MethodInfo *)0x0);
      FSMEntity::FSMEntity_PopState((FSMEntity *)e,(MethodInfo *)0x0);
      return;
    }
    pDVar2 = CEEditCubeTutorial_GetFirstTimeEventCheck(this,(MethodInfo *)0x0);
    (this->fields).firstTimeEventChangeCheck = pDVar2;
    pMVar3 = (MVCubeModelInstance *)
             EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
    pMVar4 = pMVar3;
    if (pMVar3 != (MVCubeModelInstance *)0x0) {
      bVar5 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment;
      if (((pMVar3->klass->_1).naturalAligment < bVar5) ||
         ((MVCubeModelInstance__Class *)(pMVar3->klass->_1).typeHierarchy[bVar5 - 1] !=
          TypeInfo__MVCubeModelInstance)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      pMVar4 = (MVCubeModelInstance *)0x0;
      if (bVar6) {
        pMVar4 = pMVar3;
      }
    }
    (this->fields).selectedInstance = pMVar4;
    pMVar1 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
    if (pMVar1 == (MVWorldObjectClient *)0x0) {
      pIVar7 = (IList_1_VoxelHit_ *)0xffffffff;
code_?:
      (this->fields).targetCubeModelId = (int32_t)pIVar7;
      pCVar8 = (CubeModelingStateMachine *)
                PlayerListsLayout+<CreatePlayerLists>c__Iterator0::
                PlayerListsLayout_CreatePlayerLists_c_Iterator0_System_Collections_IEnumerator_get_Current
                          ((PlayerListsLayout_CreatePlayerLists_c_Iterator0 *)e,(MethodInfo *)0x0);
      (this->fields).CMSM = pCVar8;
      if ((((uint)(TypeInfo__CubeModelTool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__CubeModelTool->_1).cctor_started == 0)) {
        func_?();
      }
      pAVar9 = TypeInfo__CubeModelTool->static_fields->OnEditCubeChange;
      pUVar10 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar10,(Object *)this,
                 MethodInfo__CEEditCubeTutorial__OnEditCubeChange_int__EditCubeChange_,
                 MethodInfo__System__Action<int,_EditCubeChange>__Action_System__Object__void__);
      pAVar11 = (Action_2_Int32_EditCubeChange_ *)
                mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pAVar9,(Delegate *)pUVar10,(MethodInfo *)0x0);
      pAVar9 = (Action_2_Int32_EditCubeChange_ *)0x0;
      if (pAVar11 != (Action_2_Int32_EditCubeChange_ *)0x0) {
        if (pAVar11->klass == TypeInfo__System__Action<int,_EditCubeChange>) {
          pAVar9 = pAVar11;
        }
        if (pAVar9 == (Action_2_Int32_EditCubeChange_ *)0x0) goto code_?;
      }
      TypeInfo__CubeModelTool->static_fields->OnEditCubeChange = pAVar9;
      pUVar10 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar10,(Object *)this,
                 MethodInfo__CEEditCubeTutorial__SetFirstTimeEventsHappened_MV__WorldObject__MetaData__FirstTimeState__MV__WorldObject__MetaData__FirstTimeEvent_
                 ,
                 MethodInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>__Action_System__Object__void__
                );
      if ((((uint)(TypeInfo__FirstTimeEventManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__FirstTimeEventManager->_1).cctor_started == 0)) {
        func_?(TypeInfo__FirstTimeEventManager);
      }
      FirstTimeEventManager::FirstTimeEventManager_SubscribeToFirstTimeState
                ((Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_
                  *)pUVar10,(MethodInfo *)0x0);
      if ((this->fields).bordersExpanded == 0) {
        pMVar4 = (this->fields).selectedInstance;
        puStack_12 = (undefined *)0x0;
        iVar13 = 0;
        func_?(&puStack_12,0xffffffff,0xffffffff,0xffffffff,0);
        uVar14 = 0;
        iVar15 = 0;
        func_?(&stack0xfffffff4,1,1,1,0);
        this_02 = (EditableCubeModelWrapper *)
                  func_?((short)TypeInfo__EditableCubeModelWrapper);
        min.z = iVar13;
        min._0_4_ = puStack_12;
        max.z = iVar15;
        max.x = (short)uVar14;
        max.y = (short)((uint)uVar14 >> 0x10);
        EditableCubeModelWrapper::EditableCubeModelWrapper__ctor_1
                  (this_02,pMVar4,min,max,0x1b,(MethodInfo *)0x0);
        (this->fields).cubeModelWrapper = this_02;
      }
      DrawPlane::DrawPlane_HideDrawPlane((MethodInfo *)0x0);
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      pGVar16 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
      if (pGVar16 != (GameEventManager *)0x0) {
        this_00 = (pGVar16->fields).AvatarCommandsBuildMode;
        editorEvent = (this->fields)._.stateType;
        pMVar1 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO
                           ((EditorStateMachine *)0x0,(MethodInfo *)0x0);
        if (pMVar1 != (MVWorldObjectClient *)0x0) {
          commandComponents =
               (String__Array *)
               mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)pMVar1,(MethodInfo *)0x0);
          this_03 = (TextCommand_Command *)
                    func_?(
                                   TypeInfo__MVBuildModeAvatarLocal_EditMode__ESEditCubeTutorialData
                                   );
          TextCommand+Command::TextCommand_Command__ctor
                    (this_03,commandComponents,(MethodInfo *)0x0);
          if (this_00 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0) {
            GameEventManager+AvatarCommandsBuildModeManager::
            GameEventManager_AvatarCommandsBuildModeManager_EnterBuildStateEvent
                      (this_00,editorEvent,(Object *)this_03,(MethodInfo *)0x0);
            root = (GameObject *)
                   UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                   TweenRunner`1[T]+<Start>c__Iterator0[ColorTween]::
                   TweenRunner_1_T_Start_c_Iterator0_ColorTween__System_Collections_IEnumerator_get_Current
                             ((TweenRunner_1_T_Start_c_Iterator0_ColorTween_ *)0x0,(MethodInfo *)0x0
                             );
            pUVar10 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                       *)func_?(
                                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleCubeEditTutorial>
                                        );
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar10,(Object *)this,
                       MethodInfo__CEEditCubeTutorial___Enter_m__0_UnityEngine__EventSystems__IHandleCubeEditTutorial__UnityEngine__EventSystems__BaseEventData_
                       ,
                       MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleCubeEditTutorial>__EventFunction_System__Object__void__
                      );
            if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.
                        methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
              func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
            }
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy_63
                      (root,(BaseEventData *)0x0,
                       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar10,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IHandleCubeEditTutorial>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleCubeEditTutorial>_
                      );
            x = (this->fields).constraintVisualizer;
            (this->fields)._.tintedWo = (WorldObjectClientRef *)0x0;
            if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
              func_?(TypeInfo__UnityEngine__Object);
            }
            bVar17 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                              ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
            if (bVar17 != 0) {
              CEEditCubeTutorial_CreateConstraint(this,(MethodInfo *)0x0);
            }
            pMVar18 = CEEditCubeTutorial_get_TargetCubeModel(this,(MethodInfo *)0x0);
            if (pMVar18 != (MVCubeModelBase *)0x0) {
              (*(code *)(pMVar18->klass->vtable).RemoveSelectionBox.method)
                        (pMVar18,(pMVar18->klass->vtable).RemovePreviewBox.methodPtr);
              bVar17 = EditorStateMachine::EditorStateMachine_get_ParentGroupIsRoot
                                ((EditorStateMachine *)0x0,(MethodInfo *)0x0);
              if (bVar17 == 0) {
                if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000)
                     != 0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                  func_?(TypeInfo__MVGameControllerBase);
                }
                this_04 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
                iVar19 = EditorStateMachine::EditorStateMachine_get_ParentGroupID
                                   ((EditorStateMachine *)0x0,(MethodInfo *)0x0);
                if (this_04 != (MVWorldObjectClientManager *)0x0) {
                  pPVar20 = (PrefabPool *)
                            MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                      (this_04,iVar19,(MethodInfo *)0x0);
                  if (pPVar20 != (PrefabPool *)0x0) {
                    pMVar21 = PrefabPool::PrefabPool_get_MVPointLightPrefab
                                        (pPVar20,(MethodInfo *)0x0);
                    if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000
                         ) != 0) && ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
                      func_?(TypeInfo__SharedCubeFunctions);
                    }
                    SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively
                              ((Transform *)pMVar21,0,(MethodInfo *)0x0);
                    goto code_?;
                  }
                }
              }
              else {
code_?:
                pPVar20 = (PrefabPool *)
                          CEEditCubeTutorial_get_TargetCubeModel(this,(MethodInfo *)0x0);
                if (pPVar20 != (PrefabPool *)0x0) {
                  pMVar21 = PrefabPool::PrefabPool_get_MVPointLightPrefab(pPVar20,(MethodInfo *)0x0)
                  ;
                  if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000)
                       != 0) && ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
                    func_?(TypeInfo__SharedCubeFunctions);
                  }
                  SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively
                            ((Transform *)pMVar21,1,(MethodInfo *)0x0);
                  pCVar8 = (this->fields).CMSM;
                  pMVar18 = CEEditCubeTutorial_get_TargetCubeModel(this,(MethodInfo *)0x0);
                  if (pCVar8 != (CubeModelingStateMachine *)0x0) {
                    CubeModelingStateMachine::CubeModelingStateMachine_StartEdit
                              (pCVar8,pMVar18,(this->fields).constraint,(MethodInfo *)0x0);
                    pCVar22 = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                              GamePointGainEffect::GamePointGainEffect_get_ID
                                        ((GamePointGainEffect *)0x0,(MethodInfo *)0x0);
                    if (pCVar22 != (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0)
                    {
                      pCVar23 = (Camera *)
                                mscorlib.dll::System::Collections::ObjectModel::
                                Collection`1[Newtonsoft::Json::Serialization::JsonProperty]::
                                Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                          (pCVar22,(MethodInfo *)0x0);
                      if (pCVar23 != (Camera *)0x0) {
                        iVar19 = UnityEngine.CoreModule.dll::UnityEngine::Camera::
                                 Camera_get_cullingMask(pCVar23,(MethodInfo *)0x0);
                        (this->fields).mainCameraDefaultMask = iVar19;
                        pCVar22 = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                  GamePointGainEffect::GamePointGainEffect_get_ID
                                            ((GamePointGainEffect *)0x0,(MethodInfo *)0x0);
                        if (pCVar22 !=
                            (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0) {
                          pCVar23 = (Camera *)
                                    mscorlib.dll::System::Collections::ObjectModel::
                                    Collection`1[Newtonsoft::Json::Serialization::JsonProperty]::
                                    Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                              (pCVar22,(MethodInfo *)0x0);
                          if (pCVar23 != (Camera *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
                                      (pCVar23,0,(MethodInfo *)0x0);
                            pMVar24 = (MainCameraManager *)
                                      GamePointGainEffect::GamePointGainEffect_get_ID
                                                ((GamePointGainEffect *)0x0,(MethodInfo *)0x0);
                            if (pMVar24 != (MainCameraManager *)0x0) {
                              MainCameraManager::MainCameraManager_set_BlueModeEnabled
                                        (pMVar24,1,(MethodInfo *)0x0);
                              if (cRam_? == '\0') {
                                func_?(_UNK_?);
                                cRam_? = '\x01';
                              }
                              pMVar18 = CEEditCubeTutorial_get_TargetCubeModel
                                                  (this,(MethodInfo *)0x0);
                              if (pMVar18 != (MVCubeModelBase *)0x0) {
                                this_05 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                                                    ((DayNightCycle *)pMVar18,(MethodInfo *)0x0);
                                if (this_05 != (CelestialParam *)0x0) {
                                  pFVar25 = (FirstTimeCubeModelBlinker *)
                                            UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                            GameObject_AddComponent_85
                                                      ((GameObject *)this_05,
                                                                                                              
                                                  FirstTimeCubeModelBlinker_MethodInfo__UnityEngine__GameObject__AddComponent<FirstTimeCubeModelBlinker>__
                                                  );
                                  (this->fields).blinker = pFVar25;
                                  if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr &
                                       0x2000000) != 0) &&
                                     ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
                                    func_?(TypeInfo__PrefabPool);
                                  }
                                  pPVar20 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
                                  if (pPVar20 != (PrefabPool *)0x0) {
                                    source = MVMovingPlatform::MVMovingPlatform_get_Start
                                                       ((MVMovingPlatform *)pPVar20,
                                                        (MethodInfo *)0x0);
                                    this_06 = (Material *)
                                              func_?(TypeInfo__UnityEngine__Material);
                                    UnityEngine.CoreModule.dll::UnityEngine::Material::
                                    Material__ctor_1(this_06,(Material *)source,(MethodInfo *)0x0);
                                    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.
                                                methodPtr & 0x2000000) != 0) &&
                                       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                                      func_?(TypeInfo__MVGameControllerBase);
                                    }
                                    pMVar24 = MVGameControllerBase::
                                              MVGameControllerBase_get_MainCameraManager
                                                        ((MethodInfo *)0x0);
                                    if (pMVar24 != (MainCameraManager *)0x0) {
                                      pCVar23 = MainCameraManager::
                                                MainCameraManager_get_SecondaryCamera
                                                          (pMVar24,(MethodInfo *)0x0);
                                      pMVar18 = CEEditCubeTutorial_get_TargetCubeModel
                                                          (this,(MethodInfo *)0x0);
                                      if (pFVar25 != (FirstTimeCubeModelBlinker *)0x0) {
                                        FirstTimeCubeModelBlinker::
                                        FirstTimeCubeModelBlinker_Initialize
                                                  (pFVar25,this_06,pCVar23,pMVar18,(MethodInfo *)0x0
                                                  );
                                        pFVar25 = (this->fields).blinker;
                                        if (pFVar25 != (FirstTimeCubeModelBlinker *)0x0) {
                                          GamePassesTextBubble::
                                          GamePassesTextBubble_set_DeactivateAfterFade
                                                    ((GamePassesTextBubble *)pFVar25,1,
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
    bVar5 = (TypeInfo__MVCubeModelBase->_1).naturalAligment;
    if (((pMVar1->klass->_1).naturalAligment < bVar5) ||
       ((MVCubeModelBase__Class *)(pMVar1->klass->_1).typeHierarchy[bVar5 - 1] !=
        TypeInfo__MVCubeModelBase)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    this_01 = (MVWorldObjectClient *)0x0;
    if (bVar6) {
      this_01 = pMVar1;
    }
    if (this_01 != (MVWorldObjectClient *)0x0) {
      pIVar7 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this_01,(MethodInfo *)0x0)
      ;
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar26 = (code *)swi(3);
  (*pcVar26)();
  return;
}


/* Void Execute(EditorStateMachine) */

void Assembly-CSharp.dll::CEEditCubeTutorial::CEEditCubeTutorial_Execute
               (CEEditCubeTutorial *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_01 = e;
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,(float)e,(MethodInfo *)0x0)
  ;
  if ((this->fields).exiting == 0) {
    pMVar1 = CEEditCubeTutorial_get_TargetCubeModel(this,(MethodInfo *)0x0);
    bVar2 = 1 - (pMVar1 != (MVCubeModelBase *)0x0);
  }
  else {
    bVar2 = 1;
  }
  (this->fields).exiting = bVar2;
  if (bVar2 == 0) {
    if ((this->fields).hasExited != 0) {
      return;
    }
    pCVar3 = (this->fields).resettingBookkeeping;
    if (pCVar3 != (CEEditCubeTutorial_ResettingBookkeeping *)0x0) {
      if ((((pCVar3->fields).doReset != 0) || ((this->fields).disableCubeModeling != 0)) &&
         (bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_get_visible
                            ((MethodInfo *)0x0), bVar2 != 0)) {
        pCVar3 = (this->fields).resettingBookkeeping;
        if (pCVar3 == (CEEditCubeTutorial_ResettingBookkeeping *)0x0) goto code_?;
        if ((pCVar3->fields).doReset != 0) {
          if (pCVar3 == (CEEditCubeTutorial_ResettingBookkeeping *)0x0) goto code_?;
          (pCVar3->fields).doReset = 0;
          (pCVar3->fields).isResetting = 1;
          iVar4 = WaitForTicksLocal::WaitForTicksLocal_GetEnvironmentTick(0,(MethodInfo *)0x0);
          (pCVar3->fields).resettingBeginTime = iVar4;
        }
        this_00 = (this->fields).CMSM;
        if (this_00 == (CubeModelingStateMachine *)0x0) goto code_?;
        CubeModelingStateMachine::CubeModelingStateMachine_set_CursorVisible
                  (this_00,0,(MethodInfo *)0x0);
        (this->fields).disableCubeModeling = 0;
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          e = (EditorStateMachine *)TypeInfo__UnityEngine__Debug;
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                  ((Object *)StringLiteral_Hiding_cursor,(MethodInfo *)0x0);
      }
      pCVar3 = (this->fields).resettingBookkeeping;
      if (pCVar3 != (CEEditCubeTutorial_ResettingBookkeeping *)0x0) {
        if ((pCVar3->fields).isResetting == 0) {
          if ((this->fields).enableCubemodeling == 0) {
            UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_set_visible(1,(MethodInfo *)0x0)
            ;
            return;
          }
          if ((this_01 != (EditorStateMachine *)0x0) &&
             (pOVar5 = PlayerListsLayout+<CreatePlayerLists>c__Iterator0::
                       PlayerListsLayout_CreatePlayerLists_c_Iterator0_System_Collections_IEnumerator_get_Current
                                 ((PlayerListsLayout_CreatePlayerLists_c_Iterator0 *)this_01,
                                  (MethodInfo *)0x0), pOVar5 != (Object *)0x0)) {
            (*pOVar5->klass[1]._0.gc_desc)(pOVar5);
            return;
          }
        }
        else {
          bVar2 = CEEditCubeTutorial_DoReset(this,(MethodInfo *)0x0);
          if (bVar2 == 0) {
            return;
          }
          pCVar3 = (this->fields).resettingBookkeeping;
          if (pCVar3 != (CEEditCubeTutorial_ResettingBookkeeping *)0x0) {
            (pCVar3->fields).isResetting = 0;
            return;
          }
        }
      }
    }
  }
  else {
    e = (EditorStateMachine *)0x39;
    pOVar5 = (Object *)func_?(TypeInfo__EditorEvent,&e);
    if (this_01 != (EditorStateMachine *)0x0) {
      FSMEntity::FSMEntity_set_Event((FSMEntity *)this_01,pOVar5,(MethodInfo *)0x0);
      (this->fields).hasExited = 1;
      return;
    }
  }
code_?:
  func_?(0);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Exit(EditorStateMachine) */

void Assembly-CSharp.dll::CEEditCubeTutorial::CEEditCubeTutorial_Exit
               (CEEditCubeTutorial *this,EditorStateMachine *esm,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__CEEditCubeTutorial___Exit_c__AnonStorey0;
  this_02 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_02,0.0,(MethodInfo *)method_00);
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,(float)esm,(MethodInfo *)0x0);
  if (esm != (EditorStateMachine *)0x0) {
    this_03 = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
              GamePointGainEffect::GamePointGainEffect_get_ID
                        ((GamePointGainEffect *)esm,(MethodInfo *)0x0);
    if (this_03 != (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0) {
      this_04 = (Camera *)
                mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                Serialization::JsonProperty]::
                Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                          (this_03,(MethodInfo *)0x0);
      if (this_04 != (Camera *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
                  (this_04,(this->fields).mainCameraDefaultMask,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?();
        }
        if (this_02 != (ScaleAnimationBase *)0x0) {
          (this_02->fields)._._._._.m_CachedPtr = TypeInfo__System__String->static_fields->Empty;
          pMVar1 = CEEditCubeTutorial_get_TargetCubeModel(this,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?();
          }
          MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          if (pMVar1 != (MVCubeModelBase *)0x0) {
            cVar2 = (*(code *)(pMVar1->klass->vtable).Delete.method)();
            if (cVar2 == '\0') {
              pGVar3 = (GameObject *)
                       UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                       TweenRunner`1[T]+<Start>c__Iterator0[ColorTween]::
                       TweenRunner_1_T_Start_c_Iterator0_ColorTween__System_Collections_IEnumerator_get_Current
                                 ((TweenRunner_1_T_Start_c_Iterator0_ColorTween_ *)esm,
                                  (MethodInfo *)0x0);
              pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                        *)func_?();
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
              SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
              UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                        (pUVar4,(Object *)this_02,
                         MethodInfo__CEEditCubeTutorial___Exit_c__AnonStorey0____m__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                         ,
                         MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>__EventFunction_System__Object__void__
                        );
              if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.
                          methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
                func_?();
              }
              UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
              ExecuteEvents_ExecuteHierarchy_63
                        (pGVar3,(BaseEventData *)0x0,
                         (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar4,
                         UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                        );
            }
            this_00 = (this->fields).constraintVisualizer;
            if (this_00 != (ConstraintVisualizer *)0x0) {
              pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                       Component_1_get_gameObject((Component_1 *)this_00,(MethodInfo *)0x0);
              if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0
                  ) && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
                func_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                        ((Object_1 *)pGVar3,(MethodInfo *)0x0);
              if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                func_?(TypeInfo__MVGameControllerBase);
              }
              pGVar5 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                 ((MethodInfo *)0x0);
              if ((pGVar5 != (GameEventManager *)0x0) &&
                 (this_01 = (pGVar5->fields).AvatarCommandsBuildMode,
                 this_01 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) {
                GameEventManager+AvatarCommandsBuildModeManager::
                GameEventManager_AvatarCommandsBuildModeManager_ExitBuildStateEvent
                          (this_01,(this->fields)._.stateType,(Object *)0x0,(MethodInfo *)0x0);
                pCVar6 = (CubeModelingStateMachine *)
                         PlayerListsLayout+<CreatePlayerLists>c__Iterator0::
                         PlayerListsLayout_CreatePlayerLists_c_Iterator0_System_Collections_IEnumerator_get_Current
                                   ((PlayerListsLayout_CreatePlayerLists_c_Iterator0 *)esm,
                                    (MethodInfo *)0x0);
                if (pCVar6 != (CubeModelingStateMachine *)0x0) {
                  CubeModelingStateMachine::CubeModelingStateMachine_RemoveCursors
                            (pCVar6,(MethodInfo *)0x0);
                  pCVar6 = (CubeModelingStateMachine *)
                           PlayerListsLayout+<CreatePlayerLists>c__Iterator0::
                           PlayerListsLayout_CreatePlayerLists_c_Iterator0_System_Collections_IEnumerator_get_Current
                                     ((PlayerListsLayout_CreatePlayerLists_c_Iterator0 *)esm,
                                      (MethodInfo *)0x0);
                  if (pCVar6 != (CubeModelingStateMachine *)0x0) {
                    CubeModelingStateMachine::CubeModelingStateMachine_EndEdit
                              (pCVar6,(MethodInfo *)0x0);
                    (this->fields).targetCubeModelId = -1;
                    (this->fields).selectedInstance = (MVCubeModelInstance *)0x0;
                    EditorStateMachine::EditorStateMachine_DeSelectAll(esm,(MethodInfo *)0x0);
                    pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                              *)func_?();
                    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                    SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                              (pUVar4,(Object *)this,
                               MethodInfo__CEEditCubeTutorial__SetFirstTimeEventsHappened_MV__WorldObject__MetaData__FirstTimeState__MV__WorldObject__MetaData__FirstTimeEvent_
                               ,
                               MethodInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>__Action_System__Object__void__
                              );
                    if ((((uint)(TypeInfo__FirstTimeEventManager->vtable).Equals.methodPtr &
                         0x2000000) != 0) &&
                       ((TypeInfo__FirstTimeEventManager->_1).cctor_started == 0)) {
                      func_?();
                    }
                    FirstTimeEventManager::FirstTimeEventManager_UnSubscribeToFirstTimeState
                              ((Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_
                                *)pUVar4,(MethodInfo *)0x0);
                    if ((((uint)(TypeInfo__CubeModelTool->vtable).Equals.methodPtr & 0x2000000) != 0
                        ) && ((TypeInfo__CubeModelTool->_1).cctor_started == 0)) {
                      func_?();
                    }
                    pAVar7 = TypeInfo__CubeModelTool->static_fields->OnEditCubeChange;
                    pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                              *)func_?();
                    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                    SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                              (pUVar4,(Object *)this,
                               MethodInfo__CEEditCubeTutorial__OnEditCubeChange_int__EditCubeChange_
                               ,
                               MethodInfo__System__Action<int,_EditCubeChange>__Action_System__Object__void__
                              );
                    pAVar8 = (Action_2_Int32_EditCubeChange_ *)
                             mscorlib.dll::System::Delegate::Delegate_Remove
                                       ((Delegate *)pAVar7,(Delegate *)pUVar4,(MethodInfo *)0x0);
                    _uStack00000054 = CONCAT44(TypeInfo__System__Action<int,_EditCubeChange>,pAVar8)
                    ;
                    pAVar7 = (Action_2_Int32_EditCubeChange_ *)0x0;
                    if (pAVar8 == (Action_2_Int32_EditCubeChange_ *)0x0) {
code_?:
                      TypeInfo__CubeModelTool->static_fields->OnEditCubeChange = pAVar7;
                      (this->fields).blinker = (FirstTimeCubeModelBlinker *)0x0;
                      return;
                    }
                    if (pAVar8->klass == TypeInfo__System__Action<int,_EditCubeChange>) {
                      pAVar7 = pAVar8;
                    }
                    if (pAVar7 != (Action_2_Int32_EditCubeChange_ *)0x0) goto code_?;
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
  _uStack00000054 = func_?();
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Dictionary`2[EditCubeChange,System.Boolean] GetFirstTimeEventCheck() */

Dictionary_2_EditCubeChange_System_Boolean_ *
Assembly-CSharp.dll::CEEditCubeTutorial::CEEditCubeTutorial_GetFirstTimeEventCheck
          (CEEditCubeTutorial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__FirstTimeEventManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__FirstTimeEventManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__FirstTimeEventManager);
  }
  bVar1 = FirstTimeEventManager::FirstTimeEventManager_HasFirstTimeEventOccured
                    (FirstTimeEvent__Enum_BM_TryExtrudingCube,(MethodInfo *)0x0);
  bVar2 = FirstTimeEventManager::FirstTimeEventManager_HasFirstTimeEventOccured
                    (FirstTimeEvent__Enum_BM_TryTiltingCube,(MethodInfo *)0x0);
  bVar3 = FirstTimeEventManager::FirstTimeEventManager_HasFirstTimeEventOccured
                    (FirstTimeEvent__Enum_BM_TryTiltingCorner,(MethodInfo *)0x0);
  bVar4 = FirstTimeEventManager::FirstTimeEventManager_HasFirstTimeEventOccured
                    (FirstTimeEvent__Enum_BM_TryAddingCube,(MethodInfo *)0x0);
  pDVar5 = (Dictionary_2_EditCubeChange_System_Boolean_ *)
           func_?(TypeInfo__System__Collections__Generic__Dictionary<EditCubeChange,_bool>)
  ;
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDVar5,
             MethodInfo__System__Collections__Generic__Dictionary<EditCubeChange,_bool>__Dictionary__
            );
  if (pDVar5 != (Dictionary_2_EditCubeChange_System_Boolean_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[EditCubeChange,System::Boolean]::
    Dictionary_2_EditCubeChange_System_Boolean__Add
              (pDVar5,EditCubeChange__Enum_FaceMoved,bVar1 == 0,
               MethodInfo__System__Collections__Generic__Dictionary<EditCubeChange,_bool>__Add_EditCubeChange__bool_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[EditCubeChange,System::Boolean]::
    Dictionary_2_EditCubeChange_System_Boolean__Add
              (pDVar5,EditCubeChange__Enum_EdgeMoved,bVar2 == 0,
               MethodInfo__System__Collections__Generic__Dictionary<EditCubeChange,_bool>__Add_EditCubeChange__bool_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[EditCubeChange,System::Boolean]::
    Dictionary_2_EditCubeChange_System_Boolean__Add
              (pDVar5,EditCubeChange__Enum_VertexMoved,bVar3 == 0,
               MethodInfo__System__Collections__Generic__Dictionary<EditCubeChange,_bool>__Add_EditCubeChange__bool_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[EditCubeChange,System::Boolean]::
    Dictionary_2_EditCubeChange_System_Boolean__Add
              (pDVar5,EditCubeChange__Enum_CubeAdded,bVar4 == 0,
               MethodInfo__System__Collections__Generic__Dictionary<EditCubeChange,_bool>__Add_EditCubeChange__bool_
              );
    return pDVar5;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  pDVar5 = (Dictionary_2_EditCubeChange_System_Boolean_ *)(*pcVar6)();
  return pDVar5;
}


/* Void HandleCubeModelingEnabling(FirstTimeEvent) */

void Assembly-CSharp.dll::CEEditCubeTutorial::CEEditCubeTutorial_HandleCubeModelingEnabling
               (CEEditCubeTutorial *this,FirstTimeEvent__Enum firstTimeEvent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CEEditCubeTutorial->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CEEditCubeTutorial->_1).cctor_started == 0)) {
    func_?(TypeInfo__CEEditCubeTutorial);
  }
  pHVar1 = (HashSet_1_GoogleMobileAds_Api_NativeAdType_ *)
           TypeInfo__CEEditCubeTutorial->static_fields->enableCubeModelingEvents;
  if (pHVar1 != (HashSet_1_GoogleMobileAds_Api_NativeAdType_ *)0x0) {
    bVar2 = System.Core.dll::System::Collections::Generic::HashSet`1[GoogleMobileAds::Api::
            NativeAdType]::HashSet_1_GoogleMobileAds_Api_NativeAdType__Contains
                      (pHVar1,firstTimeEvent,
                       MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MetaData::FirstTimeEvent>__Contains_MV__WorldObject__MetaData__FirstTimeEvent_
                      );
    if (bVar2 != 0) {
      this_00 = (this->fields).CMSM;
      (this->fields).disableCubeModeling = 0;
      (this->fields).enableCubemodeling = 1;
      if (this_00 == (CubeModelingStateMachine *)0x0) goto code_?;
      CubeModelingStateMachine::CubeModelingStateMachine_set_CursorVisible
                (this_00,1,(MethodInfo *)0x0);
    }
    if ((((uint)(TypeInfo__CEEditCubeTutorial->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CEEditCubeTutorial->_1).cctor_started == 0)) {
      func_?(TypeInfo__CEEditCubeTutorial);
    }
    pHVar1 = (HashSet_1_GoogleMobileAds_Api_NativeAdType_ *)
             TypeInfo__CEEditCubeTutorial->static_fields->disableCubeModelingEvents;
    if (pHVar1 != (HashSet_1_GoogleMobileAds_Api_NativeAdType_ *)0x0) {
      bVar2 = System.Core.dll::System::Collections::Generic::HashSet`1[GoogleMobileAds::Api::
              NativeAdType]::HashSet_1_GoogleMobileAds_Api_NativeAdType__Contains
                        (pHVar1,firstTimeEvent,
                         MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MetaData::FirstTimeEvent>__Contains_MV__WorldObject__MetaData__FirstTimeEvent_
                        );
      if (bVar2 != 0) {
        (this->fields).disableCubeModeling = 1;
        (this->fields).enableCubemodeling = 0;
      }
      return;
    }
  }
code_?:
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnEditCubeChange(Int32, EditCubeChange) */

void Assembly-CSharp.dll::CEEditCubeTutorial::CEEditCubeTutorial_OnEditCubeChange
               (CEEditCubeTutorial *this,int32_t cubeCount,EditCubeChange__Enum editCubeChange,
               MethodInfo *method)

{
  if ((this->fields).bordersExpanded == 0) {
    this_00 = (this->fields).resettingBookkeeping;
    if (this_00 == (CEEditCubeTutorial_ResettingBookkeeping *)0x0) {
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    CEEditCubeTutorial+ResettingBookkeeping::
    CEEditCubeTutorial_ResettingBookkeeping_InitializeResetting(this_00,400,(MethodInfo *)0x0);
  }
  return;
}


/* Void SetFirstTimeEventsHappened(FirstTimeState, FirstTimeEvent) */

void Assembly-CSharp.dll::CEEditCubeTutorial::CEEditCubeTutorial_SetFirstTimeEventsHappened
               (CEEditCubeTutorial *this,FirstTimeState *firstTimeState,
               FirstTimeEvent__Enum firstTimeEvent,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff98;
  puVar5 = &stack0xffffff98;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  auStack_6._16_4_ = (Object *)0x0;
  KStack_7.key = 0;
  KStack_7.value = 0;
  auStack_6._0_4_ = (LevelRewardsManager__Class *)0x0;
  auStack_6._4_4_ = (MonitorData *)0x0;
  auStack_6._8_4_ = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  auStack_6._12_4_ = 0;
  func_?();
  puStack_8 = (undefined4 *)&stack0xffffff98;
  puStack_4 = &stack0xffffff98;
  if (cRam_? == '\0') {
    puStack_8 = (undefined4 *)&stack0xffffff98;
    puStack_4 = &stack0xffffff98;
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CEEditCubeTutorial->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CEEditCubeTutorial->_1).cctor_started == 0)) {
    func_?(TypeInfo__CEEditCubeTutorial);
  }
  pHVar9 = (HashSet_1_GoogleMobileAds_Api_NativeAdType_ *)
           TypeInfo__CEEditCubeTutorial->static_fields->enableCubeModelingEvents;
  if (pHVar9 != (HashSet_1_GoogleMobileAds_Api_NativeAdType_ *)0x0) {
    pMVar10 = 
    MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MetaData::FirstTimeEvent>__Contains_MV__WorldObject__MetaData__FirstTimeEvent_
    ;
    bVar11 = System.Core.dll::System::Collections::Generic::HashSet`1[GoogleMobileAds::Api::
            NativeAdType]::HashSet_1_GoogleMobileAds_Api_NativeAdType__Contains
                      (pHVar9,firstTimeEvent,
                       MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MetaData::FirstTimeEvent>__Contains_MV__WorldObject__MetaData__FirstTimeEvent_
                      );
    if (bVar11 != 0) {
      this_00 = (this->fields).CMSM;
      (this->fields).disableCubeModeling = 0;
      (this->fields).enableCubemodeling = 1;
      unaff_EBX = (CEEditCubeTutorial__Class *)0x0;
      if (this_00 == (CubeModelingStateMachine *)0x0) goto code_?;
      CubeModelingStateMachine::CubeModelingStateMachine_set_CursorVisible
                (this_00,1,(MethodInfo *)0x0);
    }
    if ((((uint)(TypeInfo__CEEditCubeTutorial->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CEEditCubeTutorial->_1).cctor_started == 0)) {
      func_?(TypeInfo__CEEditCubeTutorial);
    }
    pHVar9 = (HashSet_1_GoogleMobileAds_Api_NativeAdType_ *)
             TypeInfo__CEEditCubeTutorial->static_fields->disableCubeModelingEvents;
    if (pHVar9 != (HashSet_1_GoogleMobileAds_Api_NativeAdType_ *)0x0) {
      bVar11 = System.Core.dll::System::Collections::Generic::HashSet`1[GoogleMobileAds::Api::
              NativeAdType]::HashSet_1_GoogleMobileAds_Api_NativeAdType__Contains
                        (pHVar9,firstTimeEvent,
                         MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MetaData::FirstTimeEvent>__Contains_MV__WorldObject__MetaData__FirstTimeEvent_
                        );
      if (bVar11 != 0) {
        (this->fields).disableCubeModeling = 1;
        (this->fields).enableCubemodeling = 0;
      }
      if ((((uint)(TypeInfo__CEEditCubeTutorial->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__CEEditCubeTutorial->_1).cctor_started == 0)) {
        unaff_EBX = TypeInfo__CEEditCubeTutorial;
        func_?();
      }
      pHVar9 = (HashSet_1_GoogleMobileAds_Api_NativeAdType_ *)
               TypeInfo__CEEditCubeTutorial->static_fields->successEvents;
      if (pHVar9 != (HashSet_1_GoogleMobileAds_Api_NativeAdType_ *)0x0) {
        bVar11 = System.Core.dll::System::Collections::Generic::HashSet`1[GoogleMobileAds::Api::
                NativeAdType]::HashSet_1_GoogleMobileAds_Api_NativeAdType__Contains
                          (pHVar9,firstTimeEvent,
                           MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MetaData::FirstTimeEvent>__Contains_MV__WorldObject__MetaData__FirstTimeEvent_
                          );
        if (bVar11 != 0) {
          this_01 = (this->fields).blinker;
          pMVar10 = (MethodInfo *)0x0;
          if (this_01 == (FirstTimeCubeModelBlinker *)0x0) goto code_?;
          BlinkerBase::BlinkerBase_StartBlinking
                    ((BlinkerBase *)this_01,BlinkType__Enum_OnBoardingCubeModelSuccess,2.0,
                     (MethodInfo *)unaff_EBX);
        }
        pDVar12 = (this->fields).firstTimeEventChangeCheck;
        pDVar13 = CEEditCubeTutorial_GetFirstTimeEventCheck(this,(MethodInfo *)0x0);
        (this->fields).firstTimeEventChangeCheck = pDVar13;
        bVar14 = true;
        if (pDVar12 != (Dictionary_2_EditCubeChange_System_Boolean_ *)0x0) {
          pDVar15 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[WinningConditionType,System::Object]::
                    Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                              ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_
                                *)&stack0xffffffa4,
                               (Dictionary_2_WinningConditionType_System_Object_ *)pDVar12,
                               MethodInfo__System__Collections__Generic__Dictionary<EditCubeChange,_bool>__GetEnumerator__
                              );
          auStack_6._0_4_ = pDVar15->dictionary;
          auStack_6._4_4_ = pDVar15->next;
          auStack_6._8_4_ = pDVar15->stamp;
          auStack_6._12_4_ = (pDVar15->current).key;
          auStack_6._16_4_ = (pDVar15->current).value;
          uStack_1 = 0;
          while (cVar16 = func_?(), cVar16 != '\0') {
            KStack_7 = LevelRewardsManager::LevelRewardsManager_get_NextReward
                                  ((LevelRewardsManager *)auStack_6,
                                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<EditCubeChange,_bool>__get_Current__
                                  );
            pDVar12 = (this->fields).firstTimeEventChangeCheck;
            EVar17 = func_?();
            if (pDVar12 == (Dictionary_2_EditCubeChange_System_Boolean_ *)0x0) goto code_?;
            bStack_18 = mscorlib.dll::System::Collections::Generic::
                        Dictionary`2[EditCubeChange,System::Boolean]::
                        Dictionary_2_EditCubeChange_System_Boolean__get_Item
                                  (pDVar12,EVar17,
                                   MethodInfo__System__Collections__Generic__Dictionary<EditCubeChange,_bool>__get_Item_EditCubeChange_
                                  );
            bVar11 = func_?();
            if (bStack_18 != bVar11) {
              this_02 = (this->fields).resettingBookkeeping;
              pMVar10 = (MethodInfo *)0x0;
              if (this_02 == (CEEditCubeTutorial_ResettingBookkeeping *)0x0) goto code_?;
              CEEditCubeTutorial+ResettingBookkeeping::
              CEEditCubeTutorial_ResettingBookkeeping_InitializeResetting
                        (this_02,2000,(MethodInfo *)0x0);
            }
            pDVar12 = (this->fields).firstTimeEventChangeCheck;
            EVar17 = func_?();
            if (pDVar12 == (Dictionary_2_EditCubeChange_System_Boolean_ *)0x0) goto code_?;
            bVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[EditCubeChange,System::
                    Boolean]::Dictionary_2_EditCubeChange_System_Boolean__get_Item
                              (pDVar12,EVar17,
                               MethodInfo__System__Collections__Generic__Dictionary<EditCubeChange,_bool>__get_Item_EditCubeChange_
                              );
            if (bVar11 != 0) {
              bVar14 = false;
            }
          }
          *puStack_8 = 0xb7;
          uStack_1 = 0xffffffff;
          func_?();
          if (!bVar14) {
            if ((this->fields).bordersExpanded == 0) {
              CEEditCubeTutorial_SetFocus(this,(this->fields).oneCubeDistance,(MethodInfo *)0x0);
            }
code_?:
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
          if ((this->fields).bordersExpanded != 0) goto code_?;
          cubeModelBase = (this->fields).selectedInstance;
          uStack_19 = 0;
          iStack_20 = 0;
          (this->fields).bordersExpanded = 1;
          func_?(&uStack_19,0xfffffff1);
          puStack_8 = (undefined4 *)0x0;
          iStack_21 = 0;
          func_?(&puStack_8,0xf,0xf,0xf,0);
          this_03 = (EditableCubeModelWrapper *)func_?(TypeInfo__EditableCubeModelWrapper);
          min.z = iStack_20;
          min.x = (undefined2)uStack_19;
          min.y = uStack_19._2_2_;
          max.z = iStack_21;
          max._0_4_ = puStack_8;
          EditableCubeModelWrapper::EditableCubeModelWrapper__ctor_1
                    (this_03,cubeModelBase,min,max,1,(MethodInfo *)0x0);
          (this->fields).cubeModelWrapper = this_03;
          CEEditCubeTutorial_SetFocus(this,(this->fields).multiCubeDistance,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?(TypeInfo__MVGameControllerBase);
          }
          this_04 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                              ((MethodInfo *)0x0);
          pMVar10 = (MethodInfo *)0x0;
          if (this_04 != (MainCameraManager *)0x0) {
            MainCameraManager::MainCameraManager_StartTransitionCam(this_04,1.0,0,(MethodInfo *)0x0)
            ;
            pCVar22 = (this->fields).constraintVisualizer;
            if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
              func_?();
            }
            bVar11 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                              ((Object_1 *)pCVar22,(Object_1 *)0x0,(MethodInfo *)0x0);
            if (bVar11 != 0) {
              pCVar22 = (this->fields).constraintVisualizer;
              pMVar10 = (MethodInfo *)0x0;
              if (pCVar22 == (ConstraintVisualizer *)0x0) goto code_?;
              obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                              ((Component_1 *)pCVar22,(MethodInfo *)0x0);
              if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0
                  ) && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
                func_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                        ((Object_1 *)obj,(MethodInfo *)0x0);
            }
            CEEditCubeTutorial_CreateConstraint(this,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
          goto code_?;
        }
      }
    }
  }
code_?:
  pMVar10 = (MethodInfo *)0x0;
code_?:
  func_?(pMVar10);
  func_?();
  pcVar23 = (code *)swi(3);
  (*pcVar23)();
  return;
}


/* Void SetFocus(Single) */

void Assembly-CSharp.dll::CEEditCubeTutorial::CEEditCubeTutorial_SetFocus
               (CEEditCubeTutorial *this,float distance,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pPVar1 = (PrefabPool *)CEEditCubeTutorial_get_TargetCubeModel(this,(MethodInfo *)0x0);
  if (pPVar1 != (PrefabPool *)0x0) {
    pMVar2 = PrefabPool::PrefabPool_get_MVPointLightPrefab(pPVar1,(MethodInfo *)0x0);
    if (pMVar2 != (MVPointLightObject *)0x0) {
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          ((Vector3 *)&stack0xfffffff0,(Transform *)pMVar2,(MethodInfo *)0x0);
      fVar4 = pVVar3->z;
      pPVar1 = (PrefabPool *)CEEditCubeTutorial_get_TargetCubeModel(this,(MethodInfo *)0x0);
      if (pPVar1 != (PrefabPool *)0x0) {
        pMVar2 = PrefabPool::PrefabPool_get_MVPointLightPrefab(pPVar1,(MethodInfo *)0x0);
        if (pMVar2 != (MVPointLightObject *)0x0) {
          pQVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                              ((Quaternion *)&stack0xffffffd8,(Transform *)pMVar2,(MethodInfo *)0x0)
          ;
          uVar6._0_4_ = (this->fields).focusOffset.x;
          uVar6._4_4_ = (this->fields).focusOffset.y;
          fVar7 = (this->fields).focusOffset.z;
          fVar8 = pQVar5->x;
          puStack_9 = (undefined *)pQVar5->y;
          fVar10 = pQVar5->z;
          fVar11 = pQVar5->w;
          puVar12 = puStack_9;
          if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0
              ) && ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
            func_?();
            puVar12 = puStack_9;
          }
          rotation.y = (float)puVar12;
          rotation.x = fVar8;
          rotation.z = fVar10;
          rotation.w = fVar11;
          point.z = fVar7;
          point.x = (float)(int)uVar6;
          point.y = (float)(int)((ulonglong)uVar6 >> 0x20);
          pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                              ((Vector3 *)&puStack_9,rotation,point,(MethodInfo *)0x0);
          fVar7 = pVVar3->x;
          fVar8 = pVVar3->y;
          uVar6._0_4_ = pVVar3->z;
          if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
            func_?();
          }
          a.y = fVar8;
          a.x = fVar7;
          a.z = (float)uVar6;
          pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                              ((Vector3 *)&puStack_9,a,distance,(MethodInfo *)0x0);
          a_00.y = fVar10;
          a_00.x = (float)puVar12;
          a_00.z = fVar4;
          pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                              ((Vector3 *)&puStack_9,a_00,*pVVar3,(MethodInfo *)0x0);
          uVar13 = pVVar3->x;
          uVar14 = pVVar3->y;
          fVar4 = pVVar3->z;
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?();
          }
          this_00 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                              ((MethodInfo *)0x0);
          if (this_00 != (MainCameraManager *)0x0) {
            pJVar15 = (JetPackCamera *)
                      MainCameraManager::MainCameraManager_get_CurrentCamera
                                (this_00,(MethodInfo *)0x0);
            if (pJVar15 == (JetPackCamera *)0x0) {
              this_01 = (JetPackCamera *)0x0;
            }
            else {
              bVar16 = (TypeInfo__JetPackCamera->_1).naturalAligment;
              if (((pJVar15->klass->_1).naturalAligment < bVar16) ||
                 ((pJVar15->klass->_1).typeHierarchy[bVar16 - 1] !=
                  (Il2CppClass *)TypeInfo__JetPackCamera)) {
                bVar17 = false;
              }
              else {
                bVar17 = true;
              }
              this_01 = (JetPackCamera *)0x0;
              if (bVar17) {
                this_01 = pJVar15;
              }
              if (this_01 == (JetPackCamera *)0x0) goto code_?;
            }
            pMVar18 = CEEditCubeTutorial_get_TargetCubeModel(this,(MethodInfo *)0x0);
            if (pMVar18 != (MVCubeModelBase *)0x0) {
              pVVar3 = (Vector3 *)(*(code *)(pMVar18->klass->vtable).get_WorldPivot.method)();
              if (this_01 != (JetPackCamera *)0x0) {
                avatarPosition.y = (float)uVar14;
                avatarPosition.x = (float)uVar13;
                avatarPosition.z = fVar4;
                JetPackCamera::JetPackCamera_FocusOnPointFromAvatarPosition
                          (this_01,*pVVar3,avatarPosition,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}


/* Void SetupBlinker() */

void Assembly-CSharp.dll::CEEditCubeTutorial::CEEditCubeTutorial_SetupBlinker
               (CEEditCubeTutorial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = CEEditCubeTutorial_get_TargetCubeModel(this,(MethodInfo *)0x0);
  if (pMVar1 != (MVCubeModelBase *)0x0) {
    this_00 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                        ((DayNightCycle *)pMVar1,(MethodInfo *)0x0);
    if (this_00 != (CelestialParam *)0x0) {
      pFVar2 = (FirstTimeCubeModelBlinker *)
               UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_85
                         ((GameObject *)this_00,
                          FirstTimeCubeModelBlinker_MethodInfo__UnityEngine__GameObject__AddComponent<FirstTimeCubeModelBlinker>__
                         );
      (this->fields).blinker = pFVar2;
      if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
        func_?();
      }
      this_01 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
      if (this_01 != (PrefabPool *)0x0) {
        source = MVMovingPlatform::MVMovingPlatform_get_Start
                           ((MVMovingPlatform *)this_01,(MethodInfo *)0x0);
        this_02 = (Material *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material__ctor_1
                  (this_02,(Material *)source,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        this_03 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                            ((MethodInfo *)0x0);
        if (this_03 != (MainCameraManager *)0x0) {
          targetCamera = MainCameraManager::MainCameraManager_get_SecondaryCamera
                                   (this_03,(MethodInfo *)0x0);
          pMVar1 = CEEditCubeTutorial_get_TargetCubeModel(this,(MethodInfo *)0x0);
          if (pFVar2 != (FirstTimeCubeModelBlinker *)0x0) {
            FirstTimeCubeModelBlinker::FirstTimeCubeModelBlinker_Initialize
                      (pFVar2,this_02,targetCamera,pMVar1,(MethodInfo *)0x0);
            pFVar2 = (this->fields).blinker;
            if (pFVar2 != (FirstTimeCubeModelBlinker *)0x0) {
              GamePassesTextBubble::GamePassesTextBubble_set_DeactivateAfterFade
                        ((GamePassesTextBubble *)pFVar2,1,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void <Enter>m__0(IHandleCubeEditTutorial, BaseEventData) */

void Assembly-CSharp.dll::CEEditCubeTutorial::CEEditCubeTutorial__Enter_m__0
               (CEEditCubeTutorial *this,IHandleCubeEditTutorial *handler,BaseEventData *data,
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
            (this_00,(Object *)this,MethodInfo__CEEditCubeTutorial__OnClosed__,(MethodInfo *)0x0);
  if (handler == (IHandleCubeEditTutorial *)0x0) {
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
          (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IHandleCubeEditTutorial) {
        ppMVar5 = &(&handler->klass->vtable)[pIVar2->interfaceOffsets[uVar3].offset].
                   PushCubeEditCubeTutorialTools.method;
        goto code_?;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar4);
  }
  ppMVar5 = (MethodInfo **)
            func_?(handler,TypeInfo__UnityEngine__EventSystems__IHandleCubeEditTutorial,0);
code_?:
  (*(code *)*ppMVar5)(handler,ppMVar5[1]);
  return;
}


/* CEEditCubeTutorial() */

void Assembly-CSharp.dll::CEEditCubeTutorial::CEEditCubeTutorial__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pHVar1 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__HashSet<MV::WorldObject::MetaData::FirstTimeEvent>
                          );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            (pHVar1,
             MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MetaData::FirstTimeEvent>__HashSet__
            );
  if (pHVar1 != (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)0x0) {
    System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Networking::
    UnityWebRequest]::HashSet_1_UnityEngine_Networking_UnityWebRequest__Add
              ((HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)pHVar1,(UnityWebRequest *)0x7a,
               MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MetaData::FirstTimeEvent>__Add_MV__WorldObject__MetaData__FirstTimeEvent_
              );
    System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Networking::
    UnityWebRequest]::HashSet_1_UnityEngine_Networking_UnityWebRequest__Add
              ((HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)pHVar1,(UnityWebRequest *)0x79,
               MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MetaData::FirstTimeEvent>__Add_MV__WorldObject__MetaData__FirstTimeEvent_
              );
    System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Networking::
    UnityWebRequest]::HashSet_1_UnityEngine_Networking_UnityWebRequest__Add
              ((HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)pHVar1,(UnityWebRequest *)0x7d,
               MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MetaData::FirstTimeEvent>__Add_MV__WorldObject__MetaData__FirstTimeEvent_
              );
    System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Networking::
    UnityWebRequest]::HashSet_1_UnityEngine_Networking_UnityWebRequest__Add
              ((HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)pHVar1,(UnityWebRequest *)0x78,
               MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MetaData::FirstTimeEvent>__Add_MV__WorldObject__MetaData__FirstTimeEvent_
              );
    System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Networking::
    UnityWebRequest]::HashSet_1_UnityEngine_Networking_UnityWebRequest__Add
              ((HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)pHVar1,(UnityWebRequest *)0x8d,
               MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MetaData::FirstTimeEvent>__Add_MV__WorldObject__MetaData__FirstTimeEvent_
              );
    System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Networking::
    UnityWebRequest]::HashSet_1_UnityEngine_Networking_UnityWebRequest__Add
              ((HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)pHVar1,(UnityWebRequest *)0x8e,
               MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MetaData::FirstTimeEvent>__Add_MV__WorldObject__MetaData__FirstTimeEvent_
              );
    System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Networking::
    UnityWebRequest]::HashSet_1_UnityEngine_Networking_UnityWebRequest__Add
              ((HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)pHVar1,(UnityWebRequest *)0x8f,
               MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MetaData::FirstTimeEvent>__Add_MV__WorldObject__MetaData__FirstTimeEvent_
              );
    TypeInfo__CEEditCubeTutorial->static_fields->successEvents =
         (HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)pHVar1;
    pHVar1 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)func_?();
    System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
    HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
              (pHVar1,
               MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MetaData::FirstTimeEvent>__HashSet__
              );
    if (pHVar1 != (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)0x0) {
      System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Networking::
      UnityWebRequest]::HashSet_1_UnityEngine_Networking_UnityWebRequest__Add
                ((HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)pHVar1,(UnityWebRequest *)0x8d
                 ,
                 MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MetaData::FirstTimeEvent>__Add_MV__WorldObject__MetaData__FirstTimeEvent_
                );
      System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Networking::
      UnityWebRequest]::HashSet_1_UnityEngine_Networking_UnityWebRequest__Add
                ((HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)pHVar1,(UnityWebRequest *)0x8e
                 ,
                 MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MetaData::FirstTimeEvent>__Add_MV__WorldObject__MetaData__FirstTimeEvent_
                );
      TypeInfo__CEEditCubeTutorial->static_fields->disableCubeModelingEvents =
           (HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)pHVar1;
      pHVar1 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)func_?();
      System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]
      ::HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                (pHVar1,
                 MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MetaData::FirstTimeEvent>__HashSet__
                );
      if (pHVar1 != (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)0x0) {
        System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Networking::
        UnityWebRequest]::HashSet_1_UnityEngine_Networking_UnityWebRequest__Add
                  ((HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)pHVar1,
                   (UnityWebRequest *)0x7c,
                   MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MetaData::FirstTimeEvent>__Add_MV__WorldObject__MetaData__FirstTimeEvent_
                  );
        System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Networking::
        UnityWebRequest]::HashSet_1_UnityEngine_Networking_UnityWebRequest__Add
                  ((HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)pHVar1,
                   (UnityWebRequest *)0x77,
                   MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MetaData::FirstTimeEvent>__Add_MV__WorldObject__MetaData__FirstTimeEvent_
                  );
        TypeInfo__CEEditCubeTutorial->static_fields->enableCubeModelingEvents =
             (HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)pHVar1;
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* CEEditCubeTutorial() */

void Assembly-CSharp.dll::CEEditCubeTutorial::CEEditCubeTutorial__ctor
               (CEEditCubeTutorial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).targetCubeModelId = -1;
  (this->fields).oneCubeDistance = 4.0;
  (this->fields).multiCubeDistance = 16.0;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_right
                     ((Vector3 *)&stack0xffffffd4,(MethodInfo *)0x0);
  uVar2 = pVVar1->x;
  uVar3 = pVVar1->y;
  fVar4 = pVVar1->z;
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                     ((Vector3 *)&stack0xffffffd4,(MethodInfo *)0x0);
  a.y = (float)uVar3;
  a.x = (float)uVar2;
  a.z = fVar4;
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                     ((Vector3 *)&stack0xffffffd4,a,*pVVar1,(MethodInfo *)0x0);
  uVar5 = pVVar1->x;
  uVar6 = pVVar1->y;
  fVar4 = pVVar1->z;
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_back
                     ((Vector3 *)&stack0xffffffd4,(MethodInfo *)0x0);
  a_00.y = (float)uVar6;
  a_00.x = (float)uVar5;
  a_00.z = fVar4;
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
            ((Vector3 *)&stack0xffffffd4,a_00,*pVVar1,(MethodInfo *)0x0);
  puVar7 = (undefined8 *)func_?();
  uVar8 = *puVar7;
  fVar4 = *(float *)(puVar7 + 1);
  (this->fields).focusOffset.x = (float)(int)uVar8;
  (this->fields).focusOffset.y = (float)(int)((ulonglong)uVar8 >> 0x20);
  (this->fields).focusOffset.z = fVar4;
  uVar2 = 0;
  iVar9 = 0;
  func_?();
  (this->fields).zeroPos.x = (short)uVar2;
  (this->fields).zeroPos.y = (short)((uint)uVar2 >> 0x10);
  (this->fields).zeroPos.z = iVar9;
  pDStack10 = TypeInfo__System__Collections__Generic__Dictionary<EditCubeChange,_bool>;
  this_00 = (Dictionary_2_EditCubeChange_System_Boolean_ *)func_?();
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<EditCubeChange,_bool>__Dictionary__
            );
  (this->fields).firstTimeEventChangeCheck = this_00;
  method_00 = TypeInfo__CEEditCubeTutorial__ResettingBookkeeping;
  this_01 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,(MethodInfo *)method_00);
  (this->fields).resettingBookkeeping = (CEEditCubeTutorial_ResettingBookkeeping *)this_01;
  (this->fields).enableCubemodeling = 1;
  ESStateBase::ESStateBase__ctor((ESStateBase *)this,(MethodInfo *)0x0);
  return;
}


/* MVCubeModelBase get_TargetCubeModel() */

MVCubeModelBase *
Assembly-CSharp.dll::CEEditCubeTutorial::CEEditCubeTutorial_get_TargetCubeModel
          (CEEditCubeTutorial *this,MethodInfo *method)

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

void Assembly-CSharp.dll::CEEditCubeTutorial::CEEditCubeTutorial_set_TargetCubeModel
               (CEEditCubeTutorial *this,MVCubeModelBase *value,MethodInfo *method)

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

