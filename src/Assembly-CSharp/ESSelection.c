
/* Boolean CheckAndExecuteOnClickHandler(EditorStateMachine,
   ESSelection+PickResult`1[WorldObjectClientRef]) */

bool Assembly-CSharp.dll::ESSelection::ESSelection_CheckAndExecuteOnClickHandler
               (ESSelection *this,EditorStateMachine *e,
               ESSelection_PickResult_1_WorldObjectClientRef_ *pick,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((pick != (ESSelection_PickResult_1_WorldObjectClientRef_ *)0x0) &&
     (pWVar1 = (pick->fields).data, pWVar1 != (WorldObjectClientRef *)0x0)) {
    pMVar2 = WorldObjectClientRef`1[MVRoundCube]::
             WorldObjectClientRef_1_MVRoundCube__get_WorldObjectClient
                       ((WorldObjectClientRef_1_MVRoundCube_ *)pWVar1,
                        MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                       );
    if (pMVar2 == (MVRoundCube *)0x0) {
      return 0;
    }
    pWVar1 = (pick->fields).data;
    if (pWVar1 != (WorldObjectClientRef *)0x0) {
      pMVar2 = WorldObjectClientRef`1[MVRoundCube]::
               WorldObjectClientRef_1_MVRoundCube__get_WorldObjectClient
                         ((WorldObjectClientRef_1_MVRoundCube_ *)pWVar1,
                          MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                         );
      uVar3._0_2_ = (pick->fields).hit.cubePos.x;
      uVar3._2_2_ = (pick->fields).hit.cubePos.y;
      pCVar4 = (pick->fields).hit.collider;
      if (pMVar2 != (MVRoundCube *)0x0) {
        bVar5 = (*(code *)(pMVar2->klass->vtable).OnClickHandler.method)
                          (pMVar2,e,pCVar4,(pMVar2->klass->vtable).HighlightConnector.methodPtr,
                           (pick->fields).hit.normal.x,(pick->fields).hit.normal.y,
                           (pick->fields).hit.normal.z,uVar3,
                           *(undefined4 *)&(pick->fields).hit.cubePos.z,(pick->fields).hit.face,
                           *(undefined4 *)&(pick->fields).hit.isCubeHit,(pick->fields).hit.woId,
                           (pick->fields).hit.cube,(pick->fields).hit.distance,pCVar4,
                           (pick->fields).hit.transform,
                           *(undefined4 *)&(pick->fields).hit.field_0x3c,
                           (pick->fields).hit.interactionFlags);
        return bVar5;
      }
    }
  }
  func_?(0);
  pcVar6 = (code *)swi(3);
  bVar5 = (*pcVar6)();
  return bVar5;
}


/* Void Enter(EditorStateMachine) */

void Assembly-CSharp.dll::ESSelection::ESSelection_Enter
               (ESSelection *this,EditorStateMachine *e,MethodInfo *method)

{
  puVar1 = SUB84(in_stack_2,4);
  puVar3 = SUB84(in_stack_4,4);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((e != (EditorStateMachine *)0x0) &&
     (pSVar5 = (e->fields).selectionController, pSVar5 != (SelectionController *)0x0)) {
    pMVar6 = SelectionController::SelectionController_get_SingleSelectedWO(pSVar5,(MethodInfo *)0x0)
    ;
    if (pMVar6 == (MVWorldObjectClient *)0x0) {
      bVar7 = false;
    }
    else {
      pSVar5 = (e->fields).selectionController;
      if ((pSVar5 == (SelectionController *)0x0) ||
         (pMVar6 = SelectionController::SelectionController_get_SingleSelectedWO
                             (pSVar5,(MethodInfo *)0x0), pMVar6 == (MVWorldObjectClient *)0x0))
      goto code_?;
      IVar8 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionFlags
                        (pMVar6,(MethodInfo *)0x0);
      bVar7 = false;
      if ((IVar8 & InteractionFlags__Enum_DirectlySelectable) != InteractionFlags__Enum_CanRespawn)
      {
        bVar7 = true;
      }
    }
    this_00 = (e->fields)._.data;
    if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      bVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::
              WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
              KogamaSettingWrapperBase]::
              Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                        ((Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                          *)this_00,StringLiteral_FromTranslateState,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                        );
      if (bVar9 != 0) {
        bVar9 = EditorStateMachine::EditorStateMachine_get_ParentGroupIsRoot(e,(MethodInfo *)0x0);
        if (bVar9 != 0) {
          pSVar5 = (e->fields).selectionController;
          if (pSVar5 != (SelectionController *)0x0) {
            SelectionController::SelectionController_DeSelectAll(pSVar5,in_stack_10);
            pOVar11 = (Object *)func_?();
            FSMEntity::FSMEntity_set_Event((FSMEntity *)e,pOVar11,(MethodInfo *)0x0);
            return;
          }
          goto code_?;
        }
        if (bVar7) {
          pSVar5 = (e->fields).selectionController;
          if (((pSVar5 == (SelectionController *)0x0) ||
              (this_02 = SelectionController::SelectionController_get_ParentGroup
                                   (pSVar5,(MethodInfo *)0x0), this_02 == (MVGroup *)0x0)) ||
             (this_03 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                                  ((DayNightCycle *)this_02,(MethodInfo *)0x0),
             this_03 == (CelestialParam *)0x0)) goto code_?;
          puVar3 = &UNK_?;
          t = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        ((GameObject *)this_03,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
            puVar1 = &UNK_?;
            in_stack_12 = TypeInfo__SharedCubeFunctions;
            func_?();
          }
          SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively(t,0,(MethodInfo *)0x0);
          pSVar5 = (e->fields).selectionController;
          if (pSVar5 == (SelectionController *)0x0) goto code_?;
          SelectionController::SelectionController_ExitGroup(pSVar5,(MethodInfo *)0x0);
          bVar9 = EditorStateMachine::EditorStateMachine_get_ParentGroupIsRoot(e,(MethodInfo *)0x0);
          if (bVar9 != 0) {
            uStack_13 = CONCAT44(0x2f,(undefined4)uStack_13);
            pOVar11 = (Object *)func_?(TypeInfo__EditorEvent);
            FSMEntity::FSMEntity_set_Event((FSMEntity *)e,pOVar11,(MethodInfo *)0x0);
          }
        }
      }
      (this->fields).editorStateMachine = e;
      pSVar5 = (e->fields).selectionController;
      method_00 = TypeInfo__System__EventHandler<WorldObjectDestroyedEventArgs>;
      this_04 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?();
      uStack_13 = CONCAT44(this_04,(undefined4)uStack_13);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_04,(Object *)this,
                 MethodInfo__ESSelection__SelectionController_SelectedWorldObjectDeletedHandler_System__Object__WorldObjectDestroyedEventArgs_
                 ,
                 MethodInfo__System__EventHandler<WorldObjectDestroyedEventArgs>__EventHandler_System__Object__void__
                );
      if (pSVar5 != (SelectionController *)0x0) {
        func_?(0,TypeInfo__ISelectionController,pSVar5,uStack_13._4_4_);
        bVar9 = EditorStateMachine::EditorStateMachine_get_ParentGroupIsRoot(e,(MethodInfo *)0x0);
        if ((bVar9 == 0) && (!bVar7)) {
          this_01 = (e->fields).weCamera;
          if (this_01 == (MainCameraManager *)0x0) goto code_?;
          MainCameraManager::MainCameraManager_set_BlueModeEnabled(this_01,1,(MethodInfo *)0x0);
        }
        func_?(&stack0xffffffa0,0,0x48);
        bVar9 = EditModeObjectPicker::EditModeObjectPicker_Pick
                          ((VoxelHit *)&stack0xffffffa0,(HashSet_1_System_Int32_ *)0x0,-0x40005,
                           (MethodInfo *)0x0);
        if (bVar9 == 0) {
code_?:
          x = ESSelection_GetLinkHit(this,e,(VoxelHit *)&stack0xffffffa0,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
            func_?();
          }
          uVar14._0_4_ = 0.0;
          uVar14._4_4_ = 0.0;
          puVar3 = &UNK_?;
          pLVar15 = x;
          bVar9 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                            ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
          if (bVar9 != 0) {
            if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
              func_?();
            }
            puVar1 = &UNK_?;
            pVVar16 = UnityStandardAssets::CrossPlatformInput::PlatformSpecific::StandaloneInput::
                     StandaloneInput_MousePosition
                               (&VStack_17,(StandaloneInput *)0x0,(MethodInfo *)in_stack_12);
            uStack_13._0_4_ = pVVar16->x;
            uStack_13._4_4_ = pVVar16->y;
            fVar18 = pVVar16->z;
            puVar19 = &UNK_?;
            pEVar20 = TypeInfo__ESSelection__PickResult<LinkObjectBase>;
            pEVar21 = (ESSelection_PickResult_1_LinkObjectBase_ *)func_?();
            func_?(pEVar21,uStack_13,fVar18,puVar3,pLVar15,(float)uVar14,SUB84(uVar14,4),
                            puVar1,puVar19,pEVar20,x,
                            MethodInfo__ESSelection__PickResult<LinkObjectBase>__PickResult_UnityEngine__Vector3__VoxelHit__LinkObjectBase_
                            ,uStack_22,iStack_23);
            (this->fields).pickedLink = pEVar21;
            return;
          }
          (this->fields).pickedLink = (ESSelection_PickResult_1_LinkObjectBase_ *)0x0;
          return;
        }
        if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVInputWrapper);
        }
        pVVar16 = UnityStandardAssets::CrossPlatformInput::PlatformSpecific::StandaloneInput::
                 StandaloneInput_MousePosition
                           (&VStack_17,(StandaloneInput *)0x0,(MethodInfo *)method_00);
        uStack_13._0_4_ = pVVar16->x;
        uStack_13._4_4_ = pVVar16->y;
        fVar18 = pVVar16->z;
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        pMVar24 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (pMVar24 != (MVWorldObjectClientManager *)0x0) {
          pWVar25 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRef
                              (pMVar24,iStack_23,(MethodInfo *)0x0);
          puVar19 = &UNK_?;
          pEVar26 = TypeInfo__ESSelection__PickResult<WorldObjectClientRef>;
          pEVar27 = (ESSelection_PickResult_1_WorldObjectClientRef_ *)func_?();
          func_?(pEVar27,uStack_13,fVar18,pMVar24,puVar19,pEVar26,puVar3,pWVar25,
                          MethodInfo__ESSelection__PickResult<WorldObjectClientRef>__PickResult_UnityEngine__Vector3__VoxelHit__WorldObjectClientRef_
                          ,puVar1,in_stack_12,iStack_28,uStack_22,iStack_23,pCStack_29,
                          fStack_30,pCStack_31);
          (this->fields).pickedTarget = pEVar27;
          pSVar5 = (e->fields).selectionController;
          if (pSVar5 != (SelectionController *)0x0) {
            pMVar6 = SelectionController::SelectionController_get_SingleSelectedWO
                               (pSVar5,(MethodInfo *)0x0);
            if (pMVar6 == (MVWorldObjectClient *)0x0) {
              pWVar25 = MVWorldObjectClientManager::
                        MVWorldObjectClientManager_GetWorldObjectClientRefNullRef((MethodInfo *)0x0)
              ;
            }
            else {
              if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                func_?(TypeInfo__MVGameControllerBase);
              }
              pMVar24 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
              pSVar5 = (e->fields).selectionController;
              if (((pSVar5 == (SelectionController *)0x0) ||
                  (pMVar6 = SelectionController::SelectionController_get_SingleSelectedWO
                                      (pSVar5,(MethodInfo *)0x0),
                  pMVar6 == (MVWorldObjectClient *)0x0)) ||
                 (id = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                       Collection_1_VoxelHit__get_Items
                                 ((Collection_1_VoxelHit_ *)pMVar6,(MethodInfo *)0x0),
                 pMVar24 == (MVWorldObjectClientManager *)0x0)) goto code_?;
              pWVar25 = MVWorldObjectClientManager::
                        MVWorldObjectClientManager_GetWorldObjectClientRef
                                  (pMVar24,(int32_t)id,(MethodInfo *)0x0);
            }
            (this->fields).selectedWorldObject = pWVar25;
            goto code_?;
          }
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar32 = (code *)swi(3);
  (*pcVar32)();
  return;
}


/* Boolean EnterObject(EditorStateMachine, MVWorldObjectClient) */

bool Assembly-CSharp.dll::ESSelection::ESSelection_EnterObject
               (ESSelection *this,EditorStateMachine *e,MVWorldObjectClient *selectedWo,
               MethodInfo *method)

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
            ((Object *)StringLiteral_EnterObject,(MethodInfo *)0x0);
  if (selectedWo != (MVWorldObjectClient *)0x0) {
    bVar1 = (*(code *)(selectedWo->klass->vtable).OnEnterObject.method)(selectedWo,e);
    return bVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* Void Execute(EditorStateMachine) */

void Assembly-CSharp.dll::ESSelection::ESSelection_Execute
               (ESSelection *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_01 = this;
  pCVar1 = (this->fields).contextMenuController;
  if (pCVar1 == (ContextMenuController *)0x0) goto code_?;
  pMVar2 = (MethodInfo *)&UNK_?;
  bVar3 = ThemeAttributes::ThemeAttribute`1[System::Boolean]::
           ThemeAttribute_1_System_Boolean__get_Value
                     ((ThemeAttribute_1_System_Boolean_ *)pCVar1,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    return;
  }
  if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVInputWrapper);
  }
  method_00 = (MethodInfo *)&UNK_?;
  bVar3 = MVInputWrapper::MVInputWrapper_GetBooleanControlDown
                     (KogamaControls__Enum_DeleteObject,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    this_04 = (ScaleAnimationBase *)func_?();
    ScaleAnimationBase::ScaleAnimationBase_Play(this_04,0.0,in_stack_4);
    pEVar5 = e;
    if ((e != (EditorStateMachine *)0x0) &&
       (pSVar6 = (e->fields).selectionController, pSVar6 != (SelectionController *)0x0)) {
      pMVar7 = SelectionController::SelectionController_get_SingleSelectedWO
                          (pSVar6,(MethodInfo *)0x0);
      if (pMVar7 == (MVWorldObjectClient *)0x0) {
        return;
      }
      pSVar6 = (pEVar5->fields).selectionController;
      if (pSVar6 != (SelectionController *)0x0) {
        e = (EditorStateMachine *)
            SelectionController::SelectionController_get_SingleSelectedWO(pSVar6,(MethodInfo *)0x0);
        pEVar8 = (this_01->fields).editorStateMachine;
        if ((pEVar8 != (EditorStateMachine *)0x0) &&
           (pSVar6 = (pEVar8->fields).selectionController, pSVar6 != (SelectionController *)0x0)) {
          SelectionController::SelectionController_DeSelectAll(pSVar6,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__String->_1).cctor_started == 0)) {
            func_?(TypeInfo__System__String);
          }
          if (this_04 != (ScaleAnimationBase *)0x0) {
            (this_04->fields)._._._._.m_CachedPtr = TypeInfo__System__String->static_fields->Empty;
            if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
              func_?(TypeInfo__MVGameControllerBase);
            }
            pMVar9 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
            if (e != (EditorStateMachine *)0x0) {
              cVar10 = (*(code *)e->klass[3]._1.initializationExceptionGCHandle)
                                 (e,pMVar9,&this_04->fields,e->klass[3]._1.cctor_started);
              if (cVar10 == '\0') {
                e = (EditorStateMachine *)(pEVar5->fields).gameObject;
                pUVar11 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                           *)func_?(
                                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                                            );
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                          (pUVar11,(Object *)this_04,
                           MethodInfo__ESSelection___Execute_c__AnonStorey0____m__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                           ,
                           MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>__EventFunction_System__Object__void__
                          );
                if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.
                            methodPtr & 0x2000000) != 0) &&
                   ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
                  func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
                }
                UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_ExecuteHierarchy_63
                          ((GameObject *)e,(BaseEventData *)0x0,
                           (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar11,
                           UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                          );
              }
              root = (pEVar5->fields).gameObject;
              if (TypeInfo__ESSelection->static_fields->__f__am_cache0 ==
                  (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
                pUVar11 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                           *)func_?(
                                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                            );
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                          (pUVar11,(Object *)0x0,
                           MethodInfo__ESSelection___Execute_m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                           ,
                           MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                          );
                TypeInfo__ESSelection->static_fields->__f__am_cache0 =
                     (ExecuteEvents_EventFunction_1_IUIStack_ *)pUVar11;
              }
              callbackFunction =
                   (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
                   TypeInfo__ESSelection->static_fields->__f__am_cache0;
              if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.
                          methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
                func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
              }
              UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
              ExecuteEvents_ExecuteHierarchy_63
                        (root,(BaseEventData *)0x0,callbackFunction,
                         UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                        );
              return;
            }
          }
        }
      }
    }
    goto code_?;
  }
  if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
    func_?();
  }
  bVar3 = MVInputWrapper::MVInputWrapper_GetBooleanControlDown
                     (KogamaControls__Enum_LeaveObject,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    ESSelection_HandleEscape(this_01,e,(MethodInfo *)0x0);
    return;
  }
  pIVar12 = (InvokerMethod)0x48;
  method_01 = (MethodInfo *)auStack_13;
  pIVar14 = (Il2CppMethodPointer)0x0;
  func_?();
  bVar3 = EditModeObjectPicker::EditModeObjectPicker_Pick
                     ((VoxelHit *)auStack_13,(HashSet_1_System_Int32_ *)0x0,-0x40005,
                      (MethodInfo *)0x0);
  woID = iStack_15;
  this = (ESSelection *)CONCAT13(bVar3,this._0_3_);
  if (bVar3 == 0) {
code_?:
    _auStack_c = (uint5)(uint)auStack_16;
  }
  else {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pMVar9 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar9 == (MVWorldObjectClientManager *)0x0) goto code_?;
    bVar3 = MVWorldObjectClientManager::MVWorldObjectClientManager_IsType
                       (pMVar9,woID,WorldObjectType__Enum_CubeModelPrototypeTerrain,
                        (MethodInfo *)0x0);
    if ((bVar3 != 0) || (woID == -1)) {
      this = (ESSelection *)((uint)this & 0xffffff);
      goto code_?;
    }
    bVar3 = ESStateBase::ESStateBase_SelectionIsAllowedByLogicEnabled(woID,(MethodInfo *)0x0);
    _auStack_c = CONCAT14(bVar3,auStack_16);
  }
  pEVar5 = e;
  hit.point.y = (float)auStack_13._8_4_;
  hit.point.x = (float)auStack_13._4_4_;
  hit.point.z = (float)auStack_13._12_4_;
  hit.normal.x = (float)auStack_13._16_4_;
  hit.normal.y = (float)auStack_13._20_4_;
  hit.normal.z = (float)auStack_13._24_4_;
  hit.cubePos._0_4_ = _Stack_44.rgctx_data;
  hit._28_4_ = _Stack_40.genericMethod;
  hit.face = uStack_17;
  hit._36_4_ = iStack_15;
  hit.woId = (int32_t)pCStack_18;
  hit.cube = (Cube *)fStack_19;
  hit.distance = (float)pCStack_20;
  hit.collider = (Collider *)pTStack_21;
  hit.transform = (Transform *)pMStack_22;
  hit._60_4_ = (int)iStack_23;
  hit.interactionFlags._0_4_ = (int)((ulonglong)iStack_23 >> 0x20);
  hit.interactionFlags._4_4_ = 0;
  ESStateBase::ESStateBase_TintObjectsOnMouseOver_1
            ((ESStateBase *)this_01,e,(bool)((ulonglong)_auStack_c >> 0x20),hit,in_stack_24);
  pEVar25 = (this_01->fields).pickedTarget;
  if (pEVar25 != (ESSelection_PickResult_1_WorldObjectClientRef_ *)0x0) {
    pWVar26 = (pEVar25->fields).data;
    if (pWVar26 == (WorldObjectClientRef *)0x0) goto code_?;
    pMVar27 = WorldObjectClientRef`1[MVRoundCube]::
              WorldObjectClientRef_1_MVRoundCube__get_WorldObjectClient
                        ((WorldObjectClientRef_1_MVRoundCube_ *)pWVar26,
                         MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                        );
    if (pMVar27 == (MVRoundCube *)0x0) {
      (this_01->fields).pickedTarget = (ESSelection_PickResult_1_WorldObjectClientRef_ *)0x0;
    }
  }
  if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVInputWrapper);
  }
  bVar3 = MVInputWrapper::MVInputWrapper_GetBooleanControlDown
                     (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
  if (bVar3 == 0) {
    if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVInputWrapper);
    }
    bVar3 = MVInputWrapper::MVInputWrapper_GetBooleanControl
                       (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
    if (bVar3 == 0) {
      if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVInputWrapper);
      }
      bVar3 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                         (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
      if (bVar3 == 0) {
        if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVInputWrapper);
        }
        bVar3 = MVInputWrapper::MVInputWrapper_GetBooleanControlDown
                           (KogamaControls__Enum_PointerSelectAlt,(MethodInfo *)0x0);
        if (bVar3 == 0) {
          if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
            func_?(TypeInfo__MVInputWrapper);
          }
          bVar3 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                             (KogamaControls__Enum_PointerSelectAlt,(MethodInfo *)0x0);
          if (bVar3 == 0) {
            return;
          }
          pCVar1 = (this_01->fields).contextMenuController;
          if (pCVar1 != (ContextMenuController *)0x0) {
            ContextMenuController::ContextMenuController_PopGizmos(pCVar1,(MethodInfo *)0x0);
            pEVar28 = (this_01->fields).pickedLink;
            if ((pEVar28 == (ESSelection_PickResult_1_LinkObjectBase_ *)0x0) ||
               (bVar3 = ESSelection_IsMouseUpValid
                                   (this_01,(pEVar28->fields).mousePosition,(MethodInfo *)0x0),
               bVar3 == 0)) {
              pEVar25 = (this_01->fields).pickedTarget;
              if (((pEVar25 == (ESSelection_PickResult_1_WorldObjectClientRef_ *)0x0) ||
                  (bVar3 = ESSelection_IsMouseUpValid
                                      (this_01,(pEVar25->fields).mousePosition,(MethodInfo *)0x0),
                  bVar3 == 0)) ||
                 (bVar3 = ESSelection_CheckAndExecuteOnClickHandler
                                     (this_01,pEVar5,(this_01->fields).pickedTarget,
                                      (MethodInfo *)0x0), bVar3 != 0)) goto code_?;
              if ((pEVar5 != (EditorStateMachine *)0x0) &&
                 (this_02 = (Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_
                             *)MVJetPack+LocalObjectsJetPack::MVJetPack_LocalObjectsJetPack_get_Id
                                         ((MVJetPack_LocalObjectsJetPack *)pEVar5,(MethodInfo *)0x0)
                 , this_02 !=
                   (Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_
                    *)0x0)) {
                JVar29 = System.Core.dll::System::Linq::
                         Enumerable+<CreateWhereIterator>c__Iterator1D`1[Newtonsoft::Json::Schema::
                         JsonSchemaType]::
                         Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType__System_Collections_Generic_IEnumerator_TSource__get_Current
                                   (this_02,
                                    MethodInfo__System__Collections__Generic__HashSet<int>__get_Count__
                                   );
                if (JVar29 != JsonSchemaType__Enum_String) {
                  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000)
                       != 0) && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
                    func_?();
                  }
                  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                            ((Object *)StringLiteral_There_should_be_selected_objects,
                             (MethodInfo *)0x0);
                  goto code_?;
                }
                if (cRam_? == '\0') {
                  func_?();
                  cRam_? = '\x01';
                }
                pWVar26 = (this_01->fields).selectedWorldObject;
                if (pWVar26 != (WorldObjectClientRef *)0x0) {
                  pMVar27 = WorldObjectClientRef`1[MVRoundCube]::
                            WorldObjectClientRef_1_MVRoundCube__get_WorldObjectClient
                                      ((WorldObjectClientRef_1_MVRoundCube_ *)pWVar26,
                                       MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                                      );
                  if (pMVar27 == (MVRoundCube *)0x0) goto code_?;
                  pWVar26 = (this_01->fields).selectedWorldObject;
                  pCVar1 = (this_01->fields).contextMenuController;
                  if ((pWVar26 != (WorldObjectClientRef *)0x0) &&
                     (pMVar27 = WorldObjectClientRef`1[MVRoundCube]::
                                WorldObjectClientRef_1_MVRoundCube__get_WorldObjectClient
                                          ((WorldObjectClientRef_1_MVRoundCube_ *)pWVar26,
                                           MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                                          ), pMVar27 != (MVRoundCube *)0x0)) {
                    pIVar30 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]
                              ::Collection_1_VoxelHit__get_Items
                                        ((Collection_1_VoxelHit_ *)pMVar27,(MethodInfo *)0x0);
                    pEVar25 = (this_01->fields).pickedTarget;
                    if (pEVar25 != (ESSelection_PickResult_1_WorldObjectClientRef_ *)0x0) {
                      pVVar31 = &(pEVar25->fields).hit;
                      auStack_13._0_4_ = (pVVar31->point).x;
                      auStack_13._4_4_ = (pEVar25->fields).hit.point.y;
                      auStack_13._8_4_ = (pEVar25->fields).hit.point.z;
                      auStack_13._12_4_ = (pEVar25->fields).hit.normal.x;
                      auStack_13._16_4_ = (pEVar25->fields).hit.normal.y;
                      auStack_13._20_4_ = (pEVar25->fields).hit.normal.z;
                      auStack_13._24_4_ = *(undefined4 *)&(pEVar25->fields).hit.cubePos;
                      _Stack_44 = *(_union_154 *)&(pEVar25->fields).hit.cubePos.z;
                      _Stack_40 = (_union_155)(pEVar25->fields).hit.face;
                      uStack_17 = *(uint32_t *)&(pEVar25->fields).hit.isCubeHit;
                      iStack_15 = (pEVar25->fields).hit.woId;
                      pCStack_18 = (pEVar25->fields).hit.cube;
                      fStack_19 = (pEVar25->fields).hit.distance;
                      pCStack_20 = (pEVar25->fields).hit.collider;
                      pTStack_21 = (pEVar25->fields).hit.transform;
                      pMStack_22 = *(MethodInfo **)&(pEVar25->fields).hit.field_0x3c;
                      iStack_23 = (pEVar25->fields).hit.interactionFlags;
                      if (pCVar1 != (ContextMenuController *)0x0) {
                        ContextMenuController::ContextMenuController_ShowContextMenu
                                  (pCVar1,(int32_t)pIVar30,pVVar31->point,(MethodInfo *)0x0);
                        goto code_?;
                      }
                    }
                  }
                }
              }
            }
            else {
              pEVar28 = (this_01->fields).pickedLink;
              if (pEVar28 != (ESSelection_PickResult_1_LinkObjectBase_ *)0x0) {
                pLVar32 = (pEVar28->fields).data;
                pCVar1 = (this_01->fields).contextMenuController;
                (this_01->fields).selectedLinkObject = pLVar32;
                if ((pLVar32 != (LinkObjectBase *)0x0) &&
                   (pEVar28 != (ESSelection_PickResult_1_LinkObjectBase_ *)0x0)) {
                  pVVar31 = &(pEVar28->fields).hit;
                  auStack_13._0_4_ = (pVVar31->point).x;
                  auStack_13._4_4_ = (pEVar28->fields).hit.point.y;
                  auStack_13._8_4_ = (pEVar28->fields).hit.point.z;
                  auStack_13._12_4_ = (pEVar28->fields).hit.normal.x;
                  auStack_13._16_4_ = (pEVar28->fields).hit.normal.y;
                  auStack_13._20_4_ = (pEVar28->fields).hit.normal.z;
                  auStack_13._24_4_ = *(undefined4 *)&(pEVar28->fields).hit.cubePos;
                  _Stack_44 = *(_union_154 *)&(pEVar28->fields).hit.cubePos.z;
                  _Stack_40 = (_union_155)(pEVar28->fields).hit.face;
                  uStack_17 = *(uint32_t *)&(pEVar28->fields).hit.isCubeHit;
                  iStack_15 = (pEVar28->fields).hit.woId;
                  pCStack_18 = (pEVar28->fields).hit.cube;
                  fStack_19 = (pEVar28->fields).hit.distance;
                  pCStack_20 = (pEVar28->fields).hit.collider;
                  pTStack_21 = (pEVar28->fields).hit.transform;
                  pMStack_22 = *(MethodInfo **)&(pEVar28->fields).hit.field_0x3c;
                  iStack_23 = (pEVar28->fields).hit.interactionFlags;
                  if (pCVar1 != (ContextMenuController *)0x0) {
                    ContextMenuController::ContextMenuController_ShowContextMenuLink
                              (pCVar1,(pLVar32->fields).linkID,(pLVar32->fields).isObjectLink,
                               pVVar31->point,(MethodInfo *)0x0);
                    goto code_?;
                  }
                }
              }
            }
          }
        }
        else {
          pMVar2 = (MethodInfo *)&stack0xffffff40;
          func_?(pMVar2,0,0x48);
          pLVar32 = ESSelection_GetLinkHit
                              (this_01,pEVar5,(VoxelHit *)&stack0xffffff40,(MethodInfo *)0x0);
          _auStack_c = CONCAT44(pLVar32,auStack_16);
          if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                             ((Object_1 *)pLVar32,(Object_1 *)0x0,(MethodInfo *)0x0);
          if (bVar3 != 0) {
            if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
              func_?(TypeInfo__MVInputWrapper);
            }
            pVVar33 = UnityStandardAssets::CrossPlatformInput::PlatformSpecific::StandaloneInput::
                      StandaloneInput_MousePosition
                                ((Vector3 *)&stack0xffffff88,(StandaloneInput *)0x0,pMVar2);
            VStack_34.y = pVVar33->x;
            VStack_34.z = pVVar33->y;
            fVar35 = pVVar33->z;
            pEVar28 = (ESSelection_PickResult_1_LinkObjectBase_ *)
                      func_?(TypeInfo__ESSelection__PickResult<LinkObjectBase>);
            func_?(pEVar28,VStack_34._4_8_,fVar35,method_01,pIVar14,pIVar12,
                            in_stack_36,in_stack_37,in_stack_38,in_stack_39,
                            in_stack_40.rgctx_data,_Stack_a0.genericMethod,in_stack_41,
                            in_stack_42,in_stack_43,in_stack_44,in_stack_45,
                            in_stack_46,in_stack_47,(int)in_stack_48,
                            (int)((ulonglong)in_stack_48 >> 0x20),pLStack_49,
                            MethodInfo__ESSelection__PickResult<LinkObjectBase>__PickResult_UnityEngine__Vector3__VoxelHit__LinkObjectBase_
                           );
            (this_01->fields).pickedLink = pEVar28;
            return;
          }
          if (this._3_1_ == '\0') {
            return;
          }
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?(TypeInfo__MVGameControllerBase);
          }
          pMVar9 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          if (pMVar9 != (MVWorldObjectClientManager *)0x0) {
            this = (ESSelection *)
                   MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRef
                             (pMVar9,woID,(MethodInfo *)0x0);
            if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
              func_?(TypeInfo__MVInputWrapper);
            }
            pVVar33 = UnityStandardAssets::CrossPlatformInput::PlatformSpecific::StandaloneInput::
                      StandaloneInput_MousePosition(&VStack_34,(StandaloneInput *)0x0,method_01);
            auStack_16 = (undefined1  [4])pVVar33->x;
            pLStack_49 = (LinkObjectBase *)pVVar33->y;
            fVar35 = pVVar33->z;
            pEVar25 = (ESSelection_PickResult_1_WorldObjectClientRef_ *)
                      func_?(TypeInfo__ESSelection__PickResult<WorldObjectClientRef>);
            pMVar2 = pMStack_22;
            func_?(pEVar25,(int)_auStack_c,(int)((ulonglong)_auStack_c >> 0x20),fVar35,
                            auStack_13._0_4_,auStack_13._4_4_,auStack_13._8_4_,auStack_13._12_4_,
                            auStack_13._16_4_,auStack_13._20_4_,auStack_13._24_4_,
                            _Stack_44.rgctx_data,_Stack_40.genericMethod,uStack_17,iStack_15,
                            pCStack_18,fStack_19,pCStack_20,pTStack_21,pMStack_22,(int)iStack_23,
                            (int)((ulonglong)iStack_23 >> 0x20));
            pEVar5 = e;
            (this_01->fields).pickedTarget = pEVar25;
            if (e != (EditorStateMachine *)0x0) {
              this_03 = EditorStateMachine::EditorStateMachine_get_SelectedWOs(e,(MethodInfo *)0x0);
              pEVar25 = (this_01->fields).pickedTarget;
              if (((pEVar25 != (ESSelection_PickResult_1_WorldObjectClientRef_ *)0x0) &&
                  (pWVar26 = (pEVar25->fields).data, pWVar26 != (WorldObjectClientRef *)0x0)) &&
                 (pMVar27 = WorldObjectClientRef`1[MVRoundCube]::
                            WorldObjectClientRef_1_MVRoundCube__get_WorldObjectClient
                                      ((WorldObjectClientRef_1_MVRoundCube_ *)pWVar26,
                                       MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                                      ), this_03 != (HashSet_1_MVWorldObjectClient_ *)0x0)) {
                bVar3 = System.Core.dll::System::Collections::Generic::HashSet`1[GoogleMobileAds::
                         Api::NativeAdType]::HashSet_1_GoogleMobileAds_Api_NativeAdType__Contains
                                   ((HashSet_1_GoogleMobileAds_Api_NativeAdType_ *)this_03,
                                    (NativeAdType__Enum)pMVar27,
                                    MethodInfo__System__Collections__Generic__HashSet<MVWorldObjectClient>__Contains_MVWorldObjectClient_
                                   );
                if (bVar3 != 0) {
                  return;
                }
                pEVar25 = (this_01->fields).pickedTarget;
                if (pEVar25 != (ESSelection_PickResult_1_WorldObjectClientRef_ *)0x0) {
                  hit_00.interactionFlags._0_4_ =
                       (int)((ulonglong)(pEVar25->fields).hit.interactionFlags >> 0x20);
                  hit_00._0_64_ = *(undefined1 (*) [64])&(pEVar25->fields).hit.point.y;
                  hit_00.interactionFlags._4_4_ = 0;
                  pWVar26 = EditorStateMachine::EditorStateMachine_Select_1(pEVar5,hit_00,0,pMVar2)
                  ;
                  (this_01->fields).selectedWorldObject = pWVar26;
                  return;
                }
              }
            }
          }
        }
      }
      else {
        pWVar26 = (this_01->fields).selectedWorldObject;
        if (pWVar26 == (WorldObjectClientRef *)0x0) goto code_?;
        pMVar27 = WorldObjectClientRef`1[MVRoundCube]::
                  WorldObjectClientRef_1_MVRoundCube__get_WorldObjectClient
                            ((WorldObjectClientRef_1_MVRoundCube_ *)pWVar26,
                             MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                            );
        if ((pMVar27 != (MVRoundCube *)0x0) &&
           (pEVar25 = (this_01->fields).pickedTarget,
           pEVar25 != (ESSelection_PickResult_1_WorldObjectClientRef_ *)0x0)) {
          pWVar26 = (pEVar25->fields).data;
          if (pWVar26 == (WorldObjectClientRef *)0x0) goto code_?;
          pMVar27 = WorldObjectClientRef`1[MVRoundCube]::
                    WorldObjectClientRef_1_MVRoundCube__get_WorldObjectClient
                              ((WorldObjectClientRef_1_MVRoundCube_ *)pWVar26,
                               MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                              );
          if (pMVar27 != (MVRoundCube *)0x0) {
            pEVar25 = (this_01->fields).pickedTarget;
            if (pEVar25 == (ESSelection_PickResult_1_WorldObjectClientRef_ *)0x0)
            goto code_?;
            bVar3 = ESSelection_IsMouseUpValid
                               (this_01,(pEVar25->fields).mousePosition,(MethodInfo *)0x0);
            if (bVar3 != 0) {
              bVar3 = ESSelection_CheckAndExecuteOnClickHandler
                                 (this_01,pEVar5,(this_01->fields).pickedTarget,(MethodInfo *)0x0);
              e = (EditorStateMachine *)CONCAT13(bVar3,e._0_3_);
              if (pEVar5 != (EditorStateMachine *)0x0) {
                pHVar50 = (HashSet_1_GoogleMobileAds_Api_NativeAdType_ *)
                          MVJetPack+LocalObjectsJetPack::MVJetPack_LocalObjectsJetPack_get_Id
                                    ((MVJetPack_LocalObjectsJetPack *)pEVar5,(MethodInfo *)0x0);
                pWVar26 = (this_01->fields).selectedWorldObject;
                if (((pWVar26 != (WorldObjectClientRef *)0x0) &&
                    (pMVar27 = WorldObjectClientRef`1[MVRoundCube]::
                               WorldObjectClientRef_1_MVRoundCube__get_WorldObjectClient
                                         ((WorldObjectClientRef_1_MVRoundCube_ *)pWVar26,
                                          MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                                         ), pMVar27 != (MVRoundCube *)0x0)) &&
                   (pIVar30 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]
                              ::Collection_1_VoxelHit__get_Items
                                        ((Collection_1_VoxelHit_ *)pMVar27,(MethodInfo *)0x0),
                   pHVar50 != (HashSet_1_GoogleMobileAds_Api_NativeAdType_ *)0x0)) {
                  bVar3 = System.Core.dll::System::Collections::Generic::HashSet`1[GoogleMobileAds
                           ::Api::NativeAdType]::
                           HashSet_1_GoogleMobileAds_Api_NativeAdType__Contains
                                     (pHVar50,(NativeAdType__Enum)pIVar30,
                                      MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_
                                     );
                  if ((e._3_1_ != '\0') || (bVar3 == 0)) goto code_?;
                  pWVar26 = (this_01->fields).selectedWorldObject;
                  this_00 = (this_01->fields).gizmoController;
                  if ((pWVar26 != (WorldObjectClientRef *)0x0) &&
                     (pMVar27 = WorldObjectClientRef`1[MVRoundCube]::
                                WorldObjectClientRef_1_MVRoundCube__get_WorldObjectClient
                                          ((WorldObjectClientRef_1_MVRoundCube_ *)pWVar26,
                                           MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                                          ), pMVar27 != (MVRoundCube *)0x0)) {
                    pIVar30 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]
                              ::Collection_1_VoxelHit__get_Items
                                        ((Collection_1_VoxelHit_ *)pMVar27,(MethodInfo *)0x0);
                    pEVar25 = (this_01->fields).pickedTarget;
                    if ((pEVar25 != (ESSelection_PickResult_1_WorldObjectClientRef_ *)0x0) &&
                       (this_00 != (GizmoController *)0x0)) {
                      GizmoController::GizmoController_Show
                                (this_00,(int32_t)pIVar30,(pEVar25->fields).hit.point,pEVar5,
                                 (MethodInfo *)0x0);
                      goto code_?;
                    }
                  }
                }
              }
              goto code_?;
            }
          }
        }
        if (pEVar5 != (EditorStateMachine *)0x0) {
          EditorStateMachine::EditorStateMachine_DeSelectAll(pEVar5,(MethodInfo *)0x0);
          pMVar51 = EditorStateMachine::EditorStateMachine_get_ParentGroup(pEVar5,(MethodInfo *)0x0)
          ;
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?();
          }
          pMVar9 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          if (pMVar9 != (MVWorldObjectClientManager *)0x0) {
            pMVar52 = MVWorldObjectClientManager::MVWorldObjectClientManager_get_RootGroup
                                (pMVar9,(MethodInfo *)0x0);
            if (pMVar51 == pMVar52) {
              e = (EditorStateMachine *)0x2f;
              value = (Object *)func_?(TypeInfo__EditorEvent,&e);
              FSMEntity::FSMEntity_set_Event((FSMEntity *)pEVar5,value,(MethodInfo *)0x0);
            }
code_?:
            (this_01->fields).pickedLink = (ESSelection_PickResult_1_LinkObjectBase_ *)0x0;
            (this_01->fields).pickedTarget = (ESSelection_PickResult_1_WorldObjectClientRef_ *)0x0;
            return;
          }
        }
      }
    }
    else {
      if (this._3_1_ == '\0') {
        return;
      }
      pEVar25 = (this_01->fields).pickedTarget;
      if (pEVar25 == (ESSelection_PickResult_1_WorldObjectClientRef_ *)0x0) {
        return;
      }
      auStack_16 = (undefined1  [4])(pEVar25->fields).mousePosition.x;
      pLStack_49 = (LinkObjectBase *)(pEVar25->fields).mousePosition.y;
      fVar35 = (pEVar25->fields).mousePosition.z;
      if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVInputWrapper);
      }
      pVVar33 = UnityStandardAssets::CrossPlatformInput::PlatformSpecific::StandaloneInput::
                StandaloneInput_MousePosition
                          ((Vector3 *)&stack0xffffff88,(StandaloneInput *)0x0,method_00);
      VStack_34.y = pVVar33->x;
      VStack_34.z = pVVar33->y;
      fVar53 = pVVar33->z;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Vector3);
      }
      a.z = fVar35;
      a.x = (float)auStack_16;
      a.y = (float)pLStack_49;
      b.z = fVar53;
      b.x = VStack_34.y;
      b.y = VStack_34.z;
      UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                ((Vector3 *)&stack0xffffff88,a,b,(MethodInfo *)0x0);
      fVar54 = (float10)func_?(&stack0xffffff94,0);
      e = (EditorStateMachine *)(float)fVar54;
      if ((float)e <= _UNK_?) {
        if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVInputWrapper);
        }
        e = (EditorStateMachine *)
            MVInputWrapper::MVInputWrapper_GetAxisRawWithoutSensitivity
                      (StringLiteral_Mouse_ScrollWheel,(MethodInfo *)0x0);
        if ((float)e == _UNK_?) {
          return;
        }
      }
      if (pEVar5 != (EditorStateMachine *)0x0) {
        pDVar55 = (pEVar5->fields)._.data;
        this = (ESSelection *)0x0;
        pCVar56 = (CrossPlatformInputManager_VirtualButton *)
                  func_?(TypeInfo__TranslateMode,&this);
        if (pDVar55 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
          String,UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
          Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                    ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                      *)pDVar55,StringLiteral_translateMode,pCVar56,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          pDVar55 = (pEVar5->fields)._.data;
          e = (EditorStateMachine *)CONCAT13(1,e._0_3_);
          pCVar56 = (CrossPlatformInputManager_VirtualButton *)
                    func_?(TypeInfo__System__Boolean,(int)&e + 3);
          if (pDVar55 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            String,UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]
            ::
            Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                      ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                        *)pDVar55,StringLiteral_moveWithAvatar,pCVar56,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                      );
            if ((pEVar5->fields)._.lockState != 0) {
              return;
            }
            FSMEntity::FSMEntity_PushState_1
                      ((FSMEntity *)pEVar5,EditorEvent__Enum_ESTranslate,
                       EditorEvent__Enum_UndefinedState,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  else {
    if (this._3_1_ == '\0') {
      return;
    }
    if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVInputWrapper);
    }
    pVVar33 = UnityStandardAssets::CrossPlatformInput::PlatformSpecific::StandaloneInput::
              StandaloneInput_MousePosition
                        ((Vector3 *)&stack0xffffff88,(StandaloneInput *)0x0,pMVar2);
    VStack_34.y = pVVar33->x;
    VStack_34.z = pVVar33->y;
    this = (ESSelection *)pVVar33->z;
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pMVar9 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar9 != (MVWorldObjectClientManager *)0x0) {
      MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRef
                (pMVar9,woID,(MethodInfo *)0x0);
      pEVar25 = (ESSelection_PickResult_1_WorldObjectClientRef_ *)
                func_?(TypeInfo__ESSelection__PickResult<WorldObjectClientRef>);
      pMVar2 = (MethodInfo *)((ulonglong)iStack_23 >> 0x20);
      func_?();
      pEVar5 = e;
      (this_01->fields).pickedTarget = pEVar25;
      if (e != (EditorStateMachine *)0x0) {
        pHVar50 = (HashSet_1_GoogleMobileAds_Api_NativeAdType_ *)
                  MVJetPack+LocalObjectsJetPack::MVJetPack_LocalObjectsJetPack_get_Id
                            ((MVJetPack_LocalObjectsJetPack *)e,(MethodInfo *)0x0);
        pEVar25 = (this_01->fields).pickedTarget;
        if ((pEVar25 != (ESSelection_PickResult_1_WorldObjectClientRef_ *)0x0) &&
           (pHVar50 != (HashSet_1_GoogleMobileAds_Api_NativeAdType_ *)0x0)) {
          bVar3 = System.Core.dll::System::Collections::Generic::HashSet`1[GoogleMobileAds::Api::
                   NativeAdType]::HashSet_1_GoogleMobileAds_Api_NativeAdType__Contains
                             (pHVar50,(pEVar25->fields).hit.woId,
                              MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_)
          ;
          e = (EditorStateMachine *)CONCAT31(e._1_3_,bVar3);
          pEVar25 = (this_01->fields).pickedTarget;
          if ((pEVar25 != (ESSelection_PickResult_1_WorldObjectClientRef_ *)0x0) &&
             ((pWVar26 = (pEVar25->fields).data, pWVar26 != (WorldObjectClientRef *)0x0 &&
              (pMVar27 = WorldObjectClientRef`1[MVRoundCube]::
                         WorldObjectClientRef_1_MVRoundCube__get_WorldObjectClient
                                   ((WorldObjectClientRef_1_MVRoundCube_ *)pWVar26,
                                    MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                                   ), pMVar27 != (MVRoundCube *)0x0)))) {
            IVar57 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionFlags
                               ((MVWorldObjectClient *)pMVar27,(MethodInfo *)0x0);
            if ((IVar57 & InteractionFlags__Enum_NotUserTransformable) !=
                InteractionFlags__Enum_CanRespawn) {
              return;
            }
            pEVar25 = (this_01->fields).pickedTarget;
            if (pEVar25 != (ESSelection_PickResult_1_WorldObjectClientRef_ *)0x0) {
              hit_01.interactionFlags._0_4_ =
                   (int)((ulonglong)(pEVar25->fields).hit.interactionFlags >> 0x20);
              hit_01._0_64_ = *(undefined1 (*) [64])&(pEVar25->fields).hit.point.y;
              hit_01.interactionFlags._4_4_ = e;
              pWVar26 = EditorStateMachine::EditorStateMachine_Select_1(pEVar5,hit_01,0,pMVar2);
              (this_01->fields).selectedWorldObject = pWVar26;
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar58 = (code *)swi(3);
  (*pcVar58)();
  return;
}


/* Void Exit(EditorStateMachine) */

void Assembly-CSharp.dll::ESSelection::ESSelection_Exit
               (ESSelection *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (e == (EditorStateMachine *)0x0) goto code_?;
  bVar1 = EditorStateMachine::EditorStateMachine_get_ParentGroupIsRoot(e,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    pSVar2 = (e->fields).selectionController;
    if (pSVar2 == (SelectionController *)0x0) goto code_?;
    pMVar3 = SelectionController::SelectionController_get_SingleSelectedWO(pSVar2,(MethodInfo *)0x0)
    ;
    if (pMVar3 != (MVWorldObjectClient *)0x0) {
      pSVar2 = (e->fields).selectionController;
      if (pSVar2 == (SelectionController *)0x0) goto code_?;
      pMVar3 = SelectionController::SelectionController_get_SingleSelectedWO
                         (pSVar2,(MethodInfo *)0x0);
      if (pMVar3 == (MVWorldObjectClient *)0x0) goto code_?;
      this = (ESSelection *)0x0;
      bVar1 = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
                        (pMVar3,InteractionFlags__Enum_DirectlySelectable,(MethodInfo *)0x0);
      if (bVar1 != 0) goto code_?;
    }
  }
  else {
code_?:
    this_00 = (e->fields).weCamera;
    if (this_00 == (MainCameraManager *)0x0) goto code_?;
    this = (ESSelection *)&UNK_?;
    MainCameraManager::MainCameraManager_set_BlueModeEnabled(this_00,0,(MethodInfo *)0x0);
  }
  pEVar4 = (this->fields).editorStateMachine;
  if (pEVar4 != (EditorStateMachine *)0x0) {
    pSVar2 = (pEVar4->fields).selectionController;
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)this,
               MethodInfo__ESSelection__SelectionController_SelectedWorldObjectDeletedHandler_System__Object__WorldObjectDestroyedEventArgs_
               ,
               MethodInfo__System__EventHandler<WorldObjectDestroyedEventArgs>__EventHandler_System__Object__void__
              );
    if (pSVar2 != (SelectionController *)0x0) {
      func_?();
      return;
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* LinkObjectBase GetLinkHit(EditorStateMachine, VoxelHit ByRef) */

LinkObjectBase *
Assembly-CSharp.dll::ESSelection::ESSelection_GetLinkHit
          (ESSelection *this,EditorStateMachine *e,VoxelHit *hit,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?(&stack0xffffffa4,0,0x2c);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = (MVBuildModeAvatarLocal_EditMode *)
            MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (this_00 != (MVBuildModeAvatarLocal_EditMode *)0x0) {
    bVar1 = MVBuildModeAvatarLocal+EditMode::MVBuildModeAvatarLocal_EditMode_get_MovementConstrained
                      (this_00,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return (LinkObjectBase *)0x0;
    }
    fStack_2 = _UNK_?;
    bVar1 = EditModeObjectPicker::EditModeObjectPicker_Pick
                      (hit,(HashSet_1_System_Int32_ *)0x0,-0x40005,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      fStack_2 = hit->distance;
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if (this_01 != (MainCameraManager *)0x0) {
      this_02 = (Camera *)
                mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                Serialization::JsonProperty]::
                Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                          ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_01,
                           (MethodInfo *)0x0);
      if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
        func_?();
      }
      pVVar3 = UnityStandardAssets::CrossPlatformInput::PlatformSpecific::StandaloneInput::
               StandaloneInput_MousePosition(&VStack_4,(StandaloneInput *)0x0,in_stack_5);
      if (this_02 != (Camera *)0x0) {
        pRVar6 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenPointToRay_2
                           ((Ray *)&stack0xffffffe0,this_02,*pVVar3,(MethodInfo *)0x0);
        fVar7 = (pRVar6->m_Origin).x;
        fVar8 = (pRVar6->m_Origin).y;
        fVar9 = (pRVar6->m_Origin).z;
        fVar10 = (pRVar6->m_Direction).x;
        VStack_4.y = (pRVar6->m_Direction).y;
        VStack_4.z = (pRVar6->m_Direction).z;
        iVar11 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                          (StringLiteral_Logic,(MethodInfo *)0x0);
        ray.m_Origin.y = fVar8;
        ray.m_Origin.x = fVar7;
        ray.m_Origin.z = fVar9;
        ray.m_Direction.x = fVar10;
        ray.m_Direction.y = VStack_4.y;
        ray.m_Direction.z = VStack_4.z;
        UnityEngine.PhysicsModule.dll::UnityEngine::Physics::Physics_Raycast_13
                  (ray,(RaycastHit *)&stack0xffffffa4,INFINITY,1 << ((byte)iVar11 & 0x1f),
                   (MethodInfo *)0x0);
        x = (Object_1 *)func_?();
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?();
        }
        bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                          (x,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar1 != 0) {
          fVar7 = System.Core.dll::System::Linq::
                   Enumerable+<CreateSelectIterator>c__Iterator10`2[System::Object,System::Single]::
                   Enumerable_CreateSelectIterator_c_Iterator10_2_System_Object_System_Single__System_Collections_Generic_IEnumerator_TResult__get_Current
                             ((Enumerable_CreateSelectIterator_c_Iterator10_2_System_Object_System_Single_
                               *)&stack0xffffffa4,(MethodInfo *)0x0);
          VStack_4.z = fVar7;
          if (fVar7 < fStack_2) {
            pCVar12 = (Component_1 *)func_?();
            if ((pCVar12 != (Component_1 *)0x0) &&
               (pGVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_1_get_gameObject(pCVar12,(MethodInfo *)0x0),
               pGVar13 != (GameObject *)0x0)) {
              message = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                                  ((Object_1 *)pGVar13,(MethodInfo *)0x0);
              if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0)
                 && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
                func_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                        ((Object *)message,(MethodInfo *)0x0);
              puVar14 = (undefined8 *)func_?();
              uVar15 = *puVar14;
              fVar7 = *(float *)(puVar14 + 1);
              (hit->point).x = (float)(int)uVar15;
              (hit->point).y = (float)(int)((ulonglong)uVar15 >> 0x20);
              (hit->point).z = fVar7;
              pCVar12 = (Component_1 *)func_?();
              if ((pCVar12 != (Component_1 *)0x0) &&
                 (pGVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_1_get_gameObject(pCVar12,(MethodInfo *)0x0),
                 pGVar13 != (GameObject *)0x0)) {
                pUVar16 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_GetComponentsInChildren_29
                                    (pGVar13,
                                     LinkObjectBase_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<LinkObjectBase>__
                                    );
                return (LinkObjectBase *)pUVar16;
              }
            }
            goto code_?;
          }
        }
        return (LinkObjectBase *)0x0;
      }
    }
  }
code_?:
  func_?();
  pcVar17 = (code *)swi(3);
  pLVar18 = (LinkObjectBase *)(*pcVar17)();
  return pLVar18;
}


/* Void HandleEscape(EditorStateMachine) */

void Assembly-CSharp.dll::ESSelection::ESSelection_HandleEscape
               (ESSelection *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = e;
  if (e != (EditorStateMachine *)0x0) {
    bVar1 = EditorStateMachine::EditorStateMachine_get_ParentGroupIsRoot(e,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      pSVar2 = (this_00->fields).selectionController;
      if (pSVar2 != (SelectionController *)0x0) {
        this_01 = (PrefabPool *)
                  SelectionController::SelectionController_get_ParentGroup(pSVar2,(MethodInfo *)0x0)
        ;
        if (this_01 != (PrefabPool *)0x0) {
          t = PrefabPool::PrefabPool_get_MVPointLightPrefab(this_01,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
            e = (EditorStateMachine *)TypeInfo__SharedCubeFunctions;
            func_?();
          }
          SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively
                    ((Transform *)t,0,(MethodInfo *)0x0);
          pSVar2 = (this_00->fields).selectionController;
          if (pSVar2 != (SelectionController *)0x0) {
            SelectionController::SelectionController_ExitGroup(pSVar2,(MethodInfo *)0x0);
            bVar1 = EditorStateMachine::EditorStateMachine_get_ParentGroupIsRoot
                              (this_00,(MethodInfo *)0x0);
            if (bVar1 == 0) {
              pSVar2 = (this_00->fields).selectionController;
              if (pSVar2 != (SelectionController *)0x0) {
                pMVar3 = SelectionController::SelectionController_get_ParentGroup
                                   (pSVar2,(MethodInfo *)0x0);
                if (cRam_? == '\0') {
                  func_?();
                  cRam_? = '\x01';
                }
                if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) !=
                     0) && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
                  func_?();
                }
                UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                          ((Object *)StringLiteral_EnterObject,(MethodInfo *)0x0);
                if (pMVar3 != (MVGroup *)0x0) {
                  method = (MethodInfo *)(pMVar3->klass->vtable).OnExitObject.methodPtr;
                  e = this_00;
                  (*(code *)(pMVar3->klass->vtable).OnEnterObject.method)();
                  return;
                }
              }
            }
            else {
              pMVar4 = (this_00->fields).weCamera;
              if (pMVar4 != (MainCameraManager *)0x0) {
                MainCameraManager::MainCameraManager_set_BlueModeEnabled(pMVar4,0,(MethodInfo *)0x0)
                ;
                pSVar2 = (this_00->fields).selectionController;
                if (pSVar2 != (SelectionController *)0x0) {
                  e = (EditorStateMachine *)0x0;
                  SelectionController::SelectionController_DeSelectAll(pSVar2,(MethodInfo *)0x0);
                  e = (EditorStateMachine *)&e;
                  pOVar5 = (Object *)func_?();
                  FSMEntity::FSMEntity_set_Event((FSMEntity *)this_00,pOVar5,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
    else {
      pMVar4 = (this_00->fields).weCamera;
      if (pMVar4 != (MainCameraManager *)0x0) {
        MainCameraManager::MainCameraManager_set_BlueModeEnabled(pMVar4,0,(MethodInfo *)0x0);
        pSVar2 = (this_00->fields).selectionController;
        if (pSVar2 != (SelectionController *)0x0) {
          e = (EditorStateMachine *)0x0;
          SelectionController::SelectionController_DeSelectAll(pSVar2,(MethodInfo *)0x0);
          e = (EditorStateMachine *)&e;
          pOVar5 = (Object *)func_?();
          FSMEntity::FSMEntity_set_Event((FSMEntity *)this_00,pOVar5,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  e = (EditorStateMachine *)0x0;
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Boolean IsMouseUpValid(Vector3) */

bool Assembly-CSharp.dll::ESSelection::ESSelection_IsMouseUpValid
               (ESSelection *this,Vector3 mousePosition,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  fStack_2 = 0.0;
  if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVInputWrapper);
  }
  pVVar3 = UnityStandardAssets::CrossPlatformInput::PlatformSpecific::StandaloneInput::
           StandaloneInput_MousePosition
                     ((Vector3 *)&stack0xffffffdc,(StandaloneInput *)0x0,unaff_ESI);
  uStack_4._0_4_ = pVVar3->x;
  uStack_4._4_4_ = pVVar3->y;
  fVar5 = pVVar3->z;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?();
  }
  a.z = mousePosition.z;
  a.x = mousePosition.x;
  a.y = mousePosition.y;
  b.z = fVar5;
  b.x = (float)(undefined4)uStack_4;
  b.y = (float)uStack_4._4_4_;
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                     (&mousePosition,a,b,(MethodInfo *)0x0);
  uStack_1._0_4_ = pVVar3->x;
  uStack_1._4_4_ = pVVar3->y;
  fStack_2 = pVVar3->z;
  fVar6 = (float10)func_?(&uStack_1);
  return (float)fVar6 < _UNK_?;
}


/* Void PopMenuGizmos() */

void Assembly-CSharp.dll::ESSelection::ESSelection_PopMenuGizmos
               (ESSelection *this,MethodInfo *method)

{
  this_00 = (this->fields).contextMenuController;
  if (this_00 != (ContextMenuController *)0x0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this_00,(MethodInfo *)0x0);
    if (TypeInfo__ContextMenuController->static_fields->__f__am_cache0 ==
        (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(
                                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                  );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_01,(Object *)0x0,
                 MethodInfo__ContextMenuController___PopGizmos_m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                );
      TypeInfo__ContextMenuController->static_fields->__f__am_cache0 =
           (ExecuteEvents_EventFunction_1_IUIStack_ *)this_01;
    }
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
         TypeInfo__ContextMenuController->static_fields->__f__am_cache0;
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (root,(BaseEventData *)0x0,callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void SelectionController_SelectedWorldObjectDeletedHandler(Object, WorldObjectDestroyedEventArgs)
    */

void Assembly-CSharp.dll::ESSelection::
     ESSelection_SelectionController_SelectedWorldObjectDeletedHandler
               (ESSelection *this,Object *sender,WorldObjectDestroyedEventArgs *e,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pWVar1 = (this->fields).selectedWorldObject;
  if (pWVar1 != (WorldObjectClientRef *)0x0) {
    pMVar2 = WorldObjectClientRef`1[MVRoundCube]::
             WorldObjectClientRef_1_MVRoundCube__get_WorldObjectClient
                       ((WorldObjectClientRef_1_MVRoundCube_ *)pWVar1,
                        MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                       );
    if (pMVar2 == (MVRoundCube *)0x0) {
      return;
    }
    pWVar1 = (this->fields).selectedWorldObject;
    if (((pWVar1 != (WorldObjectClientRef *)0x0) &&
        (pMVar2 = WorldObjectClientRef`1[MVRoundCube]::
                  WorldObjectClientRef_1_MVRoundCube__get_WorldObjectClient
                            ((WorldObjectClientRef_1_MVRoundCube_ *)pWVar1,
                             MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                            ), pMVar2 != (MVRoundCube *)0x0)) &&
       (pIVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                 Collection_1_VoxelHit__get_Items
                           ((Collection_1_VoxelHit_ *)pMVar2,(MethodInfo *)0x0),
       e != (WorldObjectDestroyedEventArgs *)0x0)) {
      if (pIVar3 == (IList_1_VoxelHit_ *)(e->fields).WordObjectID) {
        this_00 = (this->fields).editorStateMachine;
        if (this_00 == (EditorStateMachine *)0x0) goto code_?;
        FSMEntity::FSMEntity_PopState((FSMEntity *)this_00,(MethodInfo *)0x0);
      }
      return;
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void ShowContextMenuGizmo() */

void Assembly-CSharp.dll::ESSelection::ESSelection_ShowContextMenuGizmo
               (ESSelection *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pWVar1 = (this->fields).selectedWorldObject;
  if (pWVar1 != (WorldObjectClientRef *)0x0) {
    pMVar2 = WorldObjectClientRef`1[MVRoundCube]::
             WorldObjectClientRef_1_MVRoundCube__get_WorldObjectClient
                       ((WorldObjectClientRef_1_MVRoundCube_ *)pWVar1,
                        MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                       );
    if (pMVar2 == (MVRoundCube *)0x0) {
      return;
    }
    pWVar1 = (this->fields).selectedWorldObject;
    this_00 = (this->fields).contextMenuController;
    if ((pWVar1 != (WorldObjectClientRef *)0x0) &&
       (pMVar2 = WorldObjectClientRef`1[MVRoundCube]::
                 WorldObjectClientRef_1_MVRoundCube__get_WorldObjectClient
                           ((WorldObjectClientRef_1_MVRoundCube_ *)pWVar1,
                            MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                           ), pMVar2 != (MVRoundCube *)0x0)) {
      woID = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)pMVar2,(MethodInfo *)0x0);
      pEVar3 = (this->fields).pickedTarget;
      if ((pEVar3 != (ESSelection_PickResult_1_WorldObjectClientRef_ *)0x0) &&
         (this_00 != (ContextMenuController *)0x0)) {
        ContextMenuController::ContextMenuController_ShowContextMenu
                  (this_00,(int32_t)woID,(pEVar3->fields).hit.point,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void ShowLinkMenuGizmo() */

void Assembly-CSharp.dll::ESSelection::ESSelection_ShowLinkMenuGizmo
               (ESSelection *this,MethodInfo *method)

{
  pLVar1 = (this->fields).selectedLinkObject;
  this_00 = (this->fields).contextMenuController;
  if ((pLVar1 != (LinkObjectBase *)0x0) &&
     (pEVar2 = (this->fields).pickedLink, pEVar2 != (ESSelection_PickResult_1_LinkObjectBase_ *)0x0)
     ) {
    if (this_00 != (ContextMenuController *)0x0) {
      ContextMenuController::ContextMenuController_ShowContextMenuLink
                (this_00,(pLVar1->fields).linkID,(pLVar1->fields).isObjectLink,
                 (pEVar2->fields).hit.point,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void <Execute>m__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::ESSelection::ESSelection__Execute_m__0
               (IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    func_?(3,TypeInfo__UnityEngine__EventSystems__IUIStack,x,0x12);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* ESSelection(ContextMenuController, GizmoController) */

void Assembly-CSharp.dll::ESSelection::ESSelection__ctor
               (ESSelection *this,ContextMenuController *contextMenuController,
               GizmoController *gizmoController,MethodInfo *method)

{
  pWVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRefNullRef
                     ((MethodInfo *)0x0);
  (this->fields).selectedWorldObject = pWVar1;
  ESStateBase::ESStateBase__ctor((ESStateBase *)this,(MethodInfo *)0x0);
  (this->fields).contextMenuController = contextMenuController;
  (this->fields).gizmoController = gizmoController;
  return;
}

