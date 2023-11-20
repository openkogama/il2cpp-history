
/* Boolean CheckAndExecuteOnClickHandler(EditorStateMachine,
   ESSelection+PickResult`1[WorldObjectClientRef]) */

bool Assembly-CSharp.dll::ESSelection::ESSelection_CheckAndExecuteOnClickHandler
               (ESSelection *this,EditorStateMachine *e,
               ESSelection_PickResult_1_WorldObjectClientRef_ *pick,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__)
    ;
    cRam_? = '\x01';
  }
  if ((pick != (ESSelection_PickResult_1_WorldObjectClientRef_ *)0x0) &&
     (pWVar1 = (pick->fields).data, pWVar1 != (WorldObjectClientRef *)0x0)) {
    pOVar2 = WorldObjectClientRef`1[System::Object]::
             WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                       ((WorldObjectClientRef_1_System_Object_ *)pWVar1,
                        MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                       );
    if (pOVar2 == (Object *)0x0) {
      return 0;
    }
    pWVar1 = (pick->fields).data;
    if (pWVar1 != (WorldObjectClientRef *)0x0) {
      pOVar2 = WorldObjectClientRef`1[System::Object]::
               WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                         ((WorldObjectClientRef_1_System_Object_ *)pWVar1,
                          MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                         );
      if (pOVar2 != (Object *)0x0) {
        bVar3 = (*(code *)pOVar2->klass[3]._0.typeMetadataHandle)(pOVar2,e);
        return bVar3;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  bVar3 = (*pcVar4)();
  return bVar3;
}


/* Void DeselectAll(EditorStateMachine) */

void Assembly-CSharp.dll::ESSelection::ESSelection_DeselectAll
               (ESSelection *this,EditorStateMachine *e,MethodInfo *method)

{
  if ((e != (EditorStateMachine *)0x0) &&
     (this_00 = (e->fields).selectionController, this_00 != (SelectionController *)0x0)) {
    SelectionController::SelectionController_DeSelectAll(this_00,(MethodInfo *)0x0);
    this_01 = (this->fields).gizmoController;
    if (this_01 != (GizmoController *)0x0) {
      GizmoController::GizmoController_Hide(this_01,(MethodInfo *)0x0);
      return;
    }
  }
  uVar1 = func_?(&stack0xfffffff8);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Enter(EditorStateMachine) */

void Assembly-CSharp.dll::ESSelection::ESSelection_Enter
               (ESSelection *this,EditorStateMachine *e,MethodInfo *method)

{
  pEVar1 = (EditorStateMachine *)((ulonglong)in_stack_2 >> 0x20);
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__ESSelection__SelectionController_SelectedWorldObjectDeletedHandler_System__Object__WorldObjectDestroyedEventArgs_
                   );
    func_?(&TypeInfo__EditorEvent);
    func_?(&TypeInfo__System__EventHandler<WorldObjectDestroyedEventArgs>);
    func_?(&TypeInfo__ISelectionController);
    func_?(&TypeInfo__MVInputWrapper);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__ESSelection__PickResult<WorldObjectClientRef>__PickResult_UnityEngine__Vector3__VoxelHit__WorldObjectClientRef_
                   );
    func_?(&
                    MethodInfo__ESSelection__PickResult<LinkObjectBase>__PickResult_UnityEngine__Vector3__VoxelHit__LinkObjectBase_
                   );
    func_?(&TypeInfo__ESSelection__PickResult<LinkObjectBase>);
    func_?(&TypeInfo__ESSelection__PickResult<WorldObjectClientRef>);
    func_?(&TypeInfo__SharedCubeFunctions);
    func_?(&StringLiteral_FromTranslateState);
    cRam_? = '\x01';
  }
  if (e != (EditorStateMachine *)0x0) {
    pMVar3 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
    if (pMVar3 == (MVWorldObjectClient *)0x0) {
      bVar4 = false;
    }
    else {
      pMVar3 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
      if (pMVar3 == (MVWorldObjectClient *)0x0) goto code_?;
      bVar4 = false;
      if (((pMVar3->fields).interactionFlags & 8) != 0) {
        bVar4 = true;
      }
    }
    this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)(e->fields)._.data;
    if (this_00 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
      bVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                        (this_00,(Object *)StringLiteral_FromTranslateState,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                        );
      if (bVar5 != 0) {
        bVar5 = EditorStateMachine::EditorStateMachine_get_ParentGroupIsRoot(e,(MethodInfo *)0x0);
        if (bVar5 != 0) {
          pSVar6 = (e->fields).selectionController;
          if (pSVar6 != (SelectionController *)0x0) {
            SelectionController::SelectionController_DeSelectAll(pSVar6,(MethodInfo *)0x0);
            this_02 = (this->fields).gizmoController;
            if (this_02 != (GizmoController *)0x0) {
              GizmoController::GizmoController_Hide(this_02,(MethodInfo *)0x0);
              pOVar7 = (Object *)func_?();
              FSMEntity::FSMEntity_set_Event((FSMEntity *)e,pOVar7,(MethodInfo *)0x0);
              return;
            }
          }
          goto code_?;
        }
        if (bVar4) {
          pEVar1 = e;
          pMVar8 = EditorStateMachine::EditorStateMachine_get_ParentGroup(e,(MethodInfo *)0x0);
          if ((pMVar8 == (MVGroup *)0x0) ||
             (in_stack_9 = (pMVar8->fields)._.gameObject,
             in_stack_9 == (GameObject *)0x0)) goto code_?;
          in_stack_10 = (char *)0x0;
          in_stack_11 = (MethodInfo *)&UNK_?;
          t = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (in_stack_9,(MethodInfo *)0x0);
          if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
            pSStack_12 = TypeInfo__SharedCubeFunctions;
            func_?();
          }
          SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively(t,0,(MethodInfo *)0x0);
          EditorStateMachine::EditorStateMachine_ExitGroup(e,(MethodInfo *)0x0);
          bVar5 = EditorStateMachine::EditorStateMachine_get_ParentGroupIsRoot(e,(MethodInfo *)0x0);
          if (bVar5 != 0) {
            VStack_13.z = 6.5861e-44;
            pOVar7 = (Object *)func_?(TypeInfo__EditorEvent,&VStack_13.z);
            FSMEntity::FSMEntity_set_Event((FSMEntity *)e,pOVar7,(MethodInfo *)0x0);
          }
        }
      }
      (this->fields).editorStateMachine = e;
      func_?(&(this->fields).editorStateMachine,e);
      pEVar14 = (this->fields).editorStateMachine;
      if (pEVar14 != (EditorStateMachine *)0x0) {
        pSVar6 = (pEVar14->fields).selectionController;
        this_03 = (UnityAction_2_System_Object_System_Object_ *)
                  func_?(TypeInfo__System__EventHandler<WorldObjectDestroyedEventArgs>);
        VStack_13.z = (float)this_03;
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  (this_03,(Object *)this,
                   MethodInfo__ESSelection__SelectionController_SelectedWorldObjectDeletedHandler_System__Object__WorldObjectDestroyedEventArgs_
                   ,(MethodInfo *)0x0);
        if (pSVar6 != (SelectionController *)0x0) {
          func_?(0,TypeInfo__ISelectionController,pSVar6,VStack_13.z);
          bVar5 = EditorStateMachine::EditorStateMachine_get_ParentGroupIsRoot(e,(MethodInfo *)0x0);
          if ((bVar5 == 0) && (!bVar4)) {
            this_01 = (e->fields).weCamera;
            if (this_01 == (MainCameraManager *)0x0) goto code_?;
            MainCameraManager::MainCameraManager_set_BlueModeEnabled(this_01,1,(MethodInfo *)0x0);
          }
          method_00 = (MethodInfo *)&stack0xffffff5c;
          func_?(method_00,0,0x48);
          bVar5 = EditModeObjectPicker::EditModeObjectPicker_Pick
                            ((VoxelHit *)&stack0xffffff5c,(HashSet_1_System_Int32_ *)0x0,-0x40005,
                             (MethodInfo *)0x0);
          if (bVar5 != 0) {
            pMVar15 = in_stack_11;
            pGVar16 = in_stack_9;
            pcVar17 = in_stack_10;
            if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__MVInputWrapper);
              pMVar15 = in_stack_11;
              pGVar16 = in_stack_9;
              pcVar17 = in_stack_10;
            }
            pVVar18 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
                      DefaultEventSystem+Input::DefaultEventSystem_Input_get_mousePosition
                                (&VStack_13,(DefaultEventSystem_Input *)0x0,method_00);
            VStack_19.y = pVVar18->x;
            VStack_19.z = pVVar18->y;
            fVar20 = pVVar18->z;
            VStack_13._4_8_ = iStack_21;
            in_stack_11 = pMVar15;
            in_stack_9 = pGVar16;
            in_stack_10 = pcVar17;
            pMVar22 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
            if (pMVar22 == (MVWorldObjectClientManager *)0x0) goto code_?;
            pWVar23 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRef
                                (pMVar22,iStack_24,(MethodInfo *)0x0);
            pEVar25 = (ESSelection_PickResult_1_WorldObjectClientRef_ *)
                      func_?(TypeInfo__ESSelection__PickResult<WorldObjectClientRef>);
            func_?(pEVar25,VStack_19._4_8_,fVar20,pEVar1,pMVar15,pGVar16,pcVar17,pIStack_26
                            ,pSStack_12,ppIStack_27,_Stack_88.rgctx_data,_Stack_84.genericMethod,
                            uStack_28,iStack_24,pCStack_29,fStack_30,pCStack_31,pTStack_32,uStack_33
                            ,VStack_13._4_8_,pWVar23,
                            MethodInfo__ESSelection__PickResult<WorldObjectClientRef>__PickResult_UnityEngine__Vector3__VoxelHit__WorldObjectClientRef_
                           );
            (this->fields).pickedTarget = pEVar25;
            func_?(&(this->fields).pickedTarget,pEVar25);
            pMVar3 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO
                               (e,(MethodInfo *)0x0);
            if (pMVar3 == (MVWorldObjectClient *)0x0) {
              pWVar23 = MVWorldObjectClientManager::
                        MVWorldObjectClientManager_GetWorldObjectClientRefNullRef((MethodInfo *)0x0)
              ;
              (this->fields).selectedWorldObject = pWVar23;
              func_?(&(this->fields).selectedWorldObject,pWVar23);
            }
            else {
              pMVar22 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
              pMVar3 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO
                                 (e,(MethodInfo *)0x0);
              if ((pMVar3 == (MVWorldObjectClient *)0x0) ||
                 (pMVar22 == (MVWorldObjectClientManager *)0x0)) goto code_?;
              pWVar23 = MVWorldObjectClientManager::
                        MVWorldObjectClientManager_GetWorldObjectClientRef
                                  (pMVar22,(pMVar3->fields)._.id,(MethodInfo *)0x0);
              (this->fields).selectedWorldObject = pWVar23;
              func_?(&(this->fields).selectedWorldObject,pWVar23);
            }
          }
          x = ESSelection_GetLinkHit(this,e,(VoxelHit *)&stack0xffffff5c,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                            ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
          if (bVar5 == 0) {
            pEVar34 = (ESSelection_PickResult_1_LinkObjectBase_ *)0x0;
          }
          else {
            if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            pVVar18 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
                      DefaultEventSystem+Input::DefaultEventSystem_Input_get_mousePosition
                                (&VStack_19,(DefaultEventSystem_Input *)0x0,in_stack_11);
            pEVar35 = TypeInfo__ESSelection__PickResult<LinkObjectBase>;
            VStack_13.y = pVVar18->x;
            VStack_13.z = pVVar18->y;
            fVar20 = pVVar18->z;
            VStack_19._4_8_ = iStack_21;
            pEVar34 = (ESSelection_PickResult_1_LinkObjectBase_ *)func_?();
            func_?(pEVar34,VStack_13._4_8_,fVar20,pEVar35,in_stack_11,in_stack_9
                            ,in_stack_10,pIStack_26,pSStack_12,ppIStack_27,
                            _Stack_88.rgctx_data,_Stack_84.genericMethod,uStack_28,iStack_24,
                            pCStack_29,fStack_30,pCStack_31,pTStack_32,uStack_33,VStack_19._4_8_);
          }
          (this->fields).pickedLink = pEVar34;
          func_?(&(this->fields).pickedLink);
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar36 = (code *)swi(3);
  (*pcVar36)();
  return;
}


/* Boolean EnterObject(EditorStateMachine, MVWorldObjectClient) */

bool Assembly-CSharp.dll::ESSelection::ESSelection_EnterObject
               (ESSelection *this,EditorStateMachine *e,MVWorldObjectClient *selectedWo,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?(&StringLiteral_EnterObject);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_EnterObject,(MethodInfo *)0x0);
  if (selectedWo != (MVWorldObjectClient *)0x0) {
    bVar1 = (*(code *)(selectedWo->klass->vtable).OnEnterObject.method)();
    return bVar1;
  }
  uVar2 = func_?(&stack0xfffffff8);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  bVar1 = (*pcVar3)();
  return bVar1;
}


/* Void Execute(EditorStateMachine) */

void Assembly-CSharp.dll::ESSelection::ESSelection_Execute
               (ESSelection *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&TypeInfo__EditorEvent);
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<MVWorldObjectClient>__Contains_MVWorldObjectClient_
                   );
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__get_Count__);
    func_?(&TypeInfo__MVInputWrapper);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__ESSelection__PickResult<WorldObjectClientRef>__PickResult_UnityEngine__Vector3__VoxelHit__WorldObjectClientRef_
                   );
    func_?(&
                    MethodInfo__ESSelection__PickResult<LinkObjectBase>__PickResult_UnityEngine__Vector3__VoxelHit__LinkObjectBase_
                   );
    func_?(&TypeInfo__ESSelection__PickResult<LinkObjectBase>);
    func_?(&TypeInfo__ESSelection__PickResult<WorldObjectClientRef>);
    func_?(&TypeInfo__TranslateMode);
    func_?(&
                    MethodInfo__ESSelection____c___Execute_b__14_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__ESSelection____c__DisplayClass14_0___Execute_b__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__ESSelection____c__DisplayClass14_0);
    func_?(&TypeInfo__ESSelection____c);
    func_?(&MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__)
    ;
    func_?(&StringLiteral_moveWithAvatar);
    func_?(&StringLiteral_There_should_be_selected_objects);
    in_stack_1 = &StringLiteral_translateMode;
    func_?();
    func_?(&::StringLiteral__);
    func_?(&StringLiteral_Mouse_ScrollWheel);
    cRam_? = '\x01';
  }
  this_00 = this;
  pCVar2 = (this->fields).contextMenuController;
  if (pCVar2 != (ContextMenuController *)0x0) {
    if ((pCVar2->fields).rightClickGizmoSelect != 0) {
      return;
    }
    pGVar3 = (this->fields).gizmoController;
    if (pGVar3 != (GizmoController *)0x0) {
      pMVar4 = (MethodInfo *)&UNK_?;
      bVar5 = GizmoController::GizmoController_get_IgnoreSelectionOnce(pGVar3,(MethodInfo *)0x0);
      if (bVar5 != 0) {
        return;
      }
      if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__MVInputWrapper);
      }
      pMVar6 = (MethodInfo *)0x8;
      pMVar7 = (MethodInfo *)&UNK_?;
      bVar5 = MVInputWrapper::MVInputWrapper_GetBooleanControlDown
                         (KogamaControls__Enum_DeleteObject,(MethodInfo *)0x0);
      if (bVar5 == 0) {
        if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        bVar5 = MVInputWrapper::MVInputWrapper_GetBooleanControlDown
                           (KogamaControls__Enum_LeaveObject,(MethodInfo *)0x0);
        if (bVar5 != 0) {
          ESSelection_HandleEscape(this_00,e,(MethodInfo *)0x0);
          return;
        }
        fVar8 = 1.00893e-43;
        func_?();
        bVar5 = EditModeObjectPicker::EditModeObjectPicker_Pick
                           ((VoxelHit *)auStack_9,(HashSet_1_System_Int32_ *)0x0,-0x40005,
                            (MethodInfo *)0x0);
        this = (ESSelection *)CONCAT13(bVar5,this._0_3_);
        if (bVar5 != 0) {
          pMVar10 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          if (pMVar10 == (MVWorldObjectClientManager *)0x0) goto code_?;
          pMVar7 = (MethodInfo *)0x0;
          pMVar4 = pMStack_11;
          bVar5 = MVWorldObjectClientManager::MVWorldObjectClientManager_IsType
                             (pMVar10,(int32_t)pMStack_11,
                              WorldObjectType__Enum_CubeModelPrototypeTerrain,(MethodInfo *)0x0);
          if ((bVar5 != 0) || (pMStack_11 == (MethodInfo *)0xffffffff)) {
            this = (ESSelection *)((uint)this & 0xffffff);
          }
        }
        cVar12 = func_?();
        pEVar13 = e;
        if (cVar12 == '\0') {
          if (this._3_1_ == '\0') {
            VStack_14.z._0_1_ = 0;
          }
          else {
            bVar5 = ESStateBase::ESStateBase_SelectionIsAllowedByLogicEnabled
                               ((int32_t)pMStack_11,(MethodInfo *)0x0);
            VStack_14.z._0_1_ = bVar5;
          }
          pEVar13 = e;
          pMVar7 = (MethodInfo *)0x0;
          pMVar4 = (MethodInfo *)iStack_15;
          hit_01.point.y = (float)auStack_9._8_4_;
          hit_01.point.x = (float)auStack_9._4_4_;
          hit_01.point.z = (float)auStack_9._12_4_;
          hit_01.normal.x = (float)auStack_9._16_4_;
          hit_01.normal.y = (float)auStack_9._20_4_;
          hit_01.normal.z = (float)auStack_9._24_4_;
          hit_01.cubePos._0_4_ = pMStack_16;
          hit_01._28_4_ = iStack_17;
          hit_01.face = uStack_18;
          hit_01._36_4_ = pMStack_11;
          hit_01.woId = (int32_t)pCStack_19;
          hit_01.cube = (Cube *)fStack_20;
          hit_01.distance = (float)pCStack_21;
          hit_01.collider = (Collider *)pTStack_22;
          hit_01.transform = (Transform *)pMStack_23;
          hit_01._60_4_ = pMVar4;
          hit_01.interactionFlags._0_4_ = (int)((ulonglong)iStack_15 >> 0x20);
          hit_01.interactionFlags._4_4_ = 0;
          ESStateBase::ESStateBase_TintObjectsOnMouseOver_1
                    ((ESStateBase *)this_00,e,VStack_14.z._0_1_,hit_01,pMVar6);
        }
        if ((this_00->fields).pickedTarget != (ESSelection_PickResult_1_WorldObjectClientRef_ *)0x0)
        {
          pWVar24 = (((this_00->fields).pickedTarget)->fields).data;
          if (pWVar24 == (WorldObjectClientRef *)0x0) goto code_?;
          pMVar4 = (MethodInfo *)&UNK_?;
          pMVar7 = MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__;
          pOVar25 = WorldObjectClientRef`1[System::Object]::
                    WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                              ((WorldObjectClientRef_1_System_Object_ *)pWVar24,
                               MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                              );
          if (pOVar25 == (Object *)0x0) {
            (this_00->fields).pickedTarget = (ESSelection_PickResult_1_WorldObjectClientRef_ *)0x0;
            pMVar7 = (MethodInfo *)&UNK_?;
            func_?(&(this_00->fields).pickedTarget,0);
          }
        }
        if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__MVInputWrapper);
        }
        bVar5 = MVInputWrapper::MVInputWrapper_GetBooleanControlDown
                           (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
        if (bVar5 == 0) {
          if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__MVInputWrapper);
          }
          bVar5 = MVInputWrapper::MVInputWrapper_GetBooleanControl
                             (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
          if (bVar5 == 0) {
            if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__MVInputWrapper);
            }
            bVar5 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                               (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
            if (bVar5 == 0) {
              if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
                pMVar7 = (MethodInfo *)&UNK_?;
                func_?(TypeInfo__MVInputWrapper);
              }
              bVar5 = MVInputWrapper::MVInputWrapper_GetBooleanControlDown
                                 (KogamaControls__Enum_PointerSelectAlt,(MethodInfo *)0x0);
              if (bVar5 == 0) {
                if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                bVar5 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                                   (KogamaControls__Enum_PointerSelectAlt,(MethodInfo *)0x0);
                if (bVar5 != 0) {
                  pCVar2 = (this_00->fields).contextMenuController;
                  if (pCVar2 != (ContextMenuController *)0x0) {
                    ContextMenuController::ContextMenuController_PopGizmos
                              (pCVar2,(MethodInfo *)0x0);
                    if (((this_00->fields).pickedLink ==
                         (ESSelection_PickResult_1_LinkObjectBase_ *)0x0) ||
                       (bVar5 = ESSelection_IsMouseUpValid
                                           (this_00,(((this_00->fields).pickedLink)->fields).
                                                    mousePosition,(MethodInfo *)0x0), bVar5 == 0))
                    {
                      if (((this_00->fields).pickedTarget ==
                           (ESSelection_PickResult_1_WorldObjectClientRef_ *)0x0) ||
                         (bVar5 = ESSelection_IsMouseUpValid
                                             (this_00,(((this_00->fields).pickedTarget)->fields).
                                                      mousePosition,(MethodInfo *)0x0), bVar5 == 0)
                         ) goto code_?;
                      pEVar26 = (this_00->fields).pickedTarget;
                      if (cRam_? == '\0') {
                        func_?();
                        cRam_? = '\x01';
                      }
                      if ((pEVar26 == (ESSelection_PickResult_1_WorldObjectClientRef_ *)0x0) ||
                         (pWVar24 = (pEVar26->fields).data, pWVar24 == (WorldObjectClientRef *)0x0))
                      goto code_?;
                      pOVar25 = WorldObjectClientRef`1[System::Object]::
                                WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                                          ((WorldObjectClientRef_1_System_Object_ *)pWVar24,
                                           MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                                          );
                      if (pOVar25 != (Object *)0x0) {
                        pWVar24 = (pEVar26->fields).data;
                        if ((pWVar24 == (WorldObjectClientRef *)0x0) ||
                           (pOVar25 = WorldObjectClientRef`1[System::Object]::
                                      WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                                                ((WorldObjectClientRef_1_System_Object_ *)pWVar24,
                                                 MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                                                ), pOVar25 == (Object *)0x0)) goto code_?;
                        cVar12 = (*(code *)pOVar25->klass[3]._0.typeMetadataHandle)
                                           (pOVar25,pEVar13,(pEVar26->fields).hit.collider);
                        if (cVar12 != '\0') goto code_?;
                      }
                      if (((pEVar13 == (EditorStateMachine *)0x0) ||
                          (pSVar27 = (pEVar13->fields).selectionController,
                          pSVar27 == (SelectionController *)0x0)) ||
                         (pHVar28 = (pSVar27->fields).selectedIDs,
                         pHVar28 == (HashSet_1_System_Int32_ *)0x0)) goto code_?;
                      if ((pHVar28->fields)._count == 1) {
                        if (cRam_? == '\0') {
                          func_?(&
                                          MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                                         );
                          cRam_? = '\x01';
                        }
                        pWVar24 = (this_00->fields).selectedWorldObject;
                        if (pWVar24 == (WorldObjectClientRef *)0x0) goto code_?;
                        pOVar25 = WorldObjectClientRef`1[System::Object]::
                                  WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                                            ((WorldObjectClientRef_1_System_Object_ *)pWVar24,
                                             MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                                            );
                        if (pOVar25 != (Object *)0x0) {
                          pWVar24 = (this_00->fields).selectedWorldObject;
                          pCVar2 = (this_00->fields).contextMenuController;
                          if (((pWVar24 == (WorldObjectClientRef *)0x0) ||
                              (pOVar25 = WorldObjectClientRef`1[System::Object]::
                                         WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                                                   ((WorldObjectClientRef_1_System_Object_ *)pWVar24
                                                    ,
                                                  MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                                                  ), pOVar25 == (Object *)0x0)) ||
                             ((pEVar26 = (this_00->fields).pickedTarget,
                              pEVar26 == (ESSelection_PickResult_1_WorldObjectClientRef_ *)0x0 ||
                              (pCVar2 == (ContextMenuController *)0x0)))) goto code_?;
                          ContextMenuController::ContextMenuController_ShowContextMenu
                                    (pCVar2,(int32_t)pOVar25[1].klass,(pEVar26->fields).hit.point,
                                     (MethodInfo *)0x0);
                        }
                      }
                      else {
                        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                          func_?(TypeInfo__UnityEngine__Debug);
                        }
                        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                                  ((Object *)StringLiteral_There_should_be_selected_objects,
                                   (MethodInfo *)0x0);
                      }
                      goto code_?;
                    }
                    pEVar29 = (this_00->fields).pickedLink;
                    if (pEVar29 != (ESSelection_PickResult_1_LinkObjectBase_ *)0x0) {
                      (this_00->fields).selectedLinkObject = (pEVar29->fields).data;
                      func_?();
                      pLVar30 = (this_00->fields).selectedLinkObject;
                      pCVar2 = (this_00->fields).contextMenuController;
                      if (((pLVar30 != (LinkObjectBase *)0x0) &&
                          (pEVar29 = (this_00->fields).pickedLink,
                          pEVar29 != (ESSelection_PickResult_1_LinkObjectBase_ *)0x0)) &&
                         (pCVar2 != (ContextMenuController *)0x0)) {
                        ContextMenuController::ContextMenuController_ShowContextMenuLink
                                  (pCVar2,(pLVar30->fields).linkID,(pLVar30->fields).isObjectLink,
                                   (pEVar29->fields).hit.point,(MethodInfo *)0x0);
                        goto code_?;
                      }
                    }
                  }
                  goto code_?;
                }
              }
              else {
                fVar31 = 1.00893e-43;
                pMVar4 = (MethodInfo *)0x0;
                func_?(&stack0xffffff04);
                pLVar30 = ESSelection_GetLinkHit
                                    (this_00,pEVar13,(VoxelHit *)&stack0xffffff04,(MethodInfo *)0x0)
                ;
                VStack_14.z = (float)pLVar30;
                if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__UnityEngine__Object);
                }
                bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                                   ((Object_1 *)pLVar30,(Object_1 *)0x0,(MethodInfo *)0x0);
                if (bVar5 != 0) {
                  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
                    func_?(TypeInfo__MVInputWrapper);
                  }
                  pVVar32 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
                            DefaultEventSystem+Input::DefaultEventSystem_Input_get_mousePosition
                                      (&VStack_33,(DefaultEventSystem_Input *)0x0,pMVar7);
                  uVar34 = pVVar32->x;
                  uVar35 = pVVar32->y;
                  fVar36 = pVVar32->z;
                  pMStack_37 = (MethodInfo *)IStack_38._0_4_;
                  pCStack_39 = (Cube *)stack0xffffff20;
                  fStack_40 = (float)iStack_41;
                  pCStack_42 = (Collider *)uStack_43;
                  pTStack_44 = (Transform *)iStack_45;
                  pMStack_46 = (MethodInfo *)pCStack_47;
                  VStack_33.y = (float)iStack_48;
                  VStack_33.z = (float)((ulonglong)iStack_48 >> 0x20);
                  pMStack_49 = pMVar4;
                  pCStack_50 = (Collider *)fVar31;
                  pTStack_51 = (Transform *)fVar8;
                  pMStack_52 = (MethodInfo *)in_stack_53;
                  fStack_54 = in_stack_55;
                  fStack_56 = in_stack_57;
                  VStack_58.y = (float)uVar34;
                  VStack_58.z = (float)uVar35;
                  pEVar29 = (ESSelection_PickResult_1_LinkObjectBase_ *)
                            func_?(TypeInfo__ESSelection__PickResult<LinkObjectBase>);
                  func_?(pEVar29,CONCAT44(VStack_58.z,VStack_58.y),fVar36,pMStack_49,
                                  pCStack_50,pTStack_51,pMStack_52,fStack_54,fStack_56,pMStack_37,
                                  pCStack_39,fStack_40,pCStack_42,pTStack_44,pMStack_46,fStack_59,
                                  pCStack_60,pTStack_61,uStack_62,VStack_33.y,VStack_33.z,
                                  VStack_14.z,
                                  MethodInfo__ESSelection__PickResult<LinkObjectBase>__PickResult_UnityEngine__Vector3__VoxelHit__LinkObjectBase_
                                 );
                  (this_00->fields).pickedLink = pEVar29;
                  func_?(&(this_00->fields).pickedLink,pEVar29);
                  return;
                }
                if (this._3_1_ != '\0') {
                  pMVar10 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
                  if (pMVar10 != (MVWorldObjectClientManager *)0x0) {
                    this = (ESSelection *)
                           MVWorldObjectClientManager::
                           MVWorldObjectClientManager_GetWorldObjectClientRef
                                     (pMVar10,(int32_t)pMStack_11,(MethodInfo *)0x0);
                    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
                      func_?(TypeInfo__MVInputWrapper);
                    }
                    pVVar32 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
                              DefaultEventSystem+Input::DefaultEventSystem_Input_get_mousePosition
                                        (&VStack_58,(DefaultEventSystem_Input *)0x0,pMVar4);
                    uVar63 = pVVar32->x;
                    uVar64 = pVVar32->y;
                    fVar8 = pVVar32->z;
                    fStack_65 = (float)auStack_9._0_4_;
                    VStack_58.x = (float)auStack_9._4_4_;
                    VStack_58.y = (float)auStack_9._8_4_;
                    VStack_58.z = (float)auStack_9._12_4_;
                    fStack_40 = (float)auStack_9._16_4_;
                    pCStack_42 = (Collider *)auStack_9._20_4_;
                    pTStack_44 = (Transform *)auStack_9._24_4_;
                    pMStack_46 = pMStack_16;
                    fStack_54 = (float)iStack_17;
                    fStack_56 = (float)uStack_18;
                    pMStack_37 = pMStack_11;
                    pCStack_39 = pCStack_19;
                    pMStack_49 = (MethodInfo *)fStack_20;
                    pCStack_50 = pCStack_21;
                    pTStack_51 = pTStack_22;
                    pMStack_52 = pMStack_23;
                    VStack_14.y = (float)(undefined4)iStack_15;
                    VStack_14.z = (float)iStack_15._4_4_;
                    VStack_33.y = (float)uVar63;
                    VStack_33.z = (float)uVar64;
                    pEVar26 = (ESSelection_PickResult_1_WorldObjectClientRef_ *)
                              func_?(
                                             TypeInfo__ESSelection__PickResult<WorldObjectClientRef>
                                             );
                    pMVar4 = pMStack_52;
                    func_?(pEVar26,VStack_33.y,VStack_33.z,fVar8,fStack_65,VStack_58.x,
                                    VStack_58.y,VStack_58.z,fStack_40,pCStack_42,pTStack_44,
                                    pMStack_46,fStack_54,fStack_56,pMStack_37,pCStack_39,pMStack_49,
                                    pCStack_50,pTStack_51,pMStack_52,VStack_14.y,VStack_14.z);
                    (this_00->fields).pickedTarget = pEVar26;
                    func_?();
                    pEVar13 = e;
                    if (e != (EditorStateMachine *)0x0) {
                      this_01 = EditorStateMachine::EditorStateMachine_get_SelectedWOs
                                          (e,(MethodInfo *)0x0);
                      pEVar26 = (this_00->fields).pickedTarget;
                      if (((pEVar26 != (ESSelection_PickResult_1_WorldObjectClientRef_ *)0x0) &&
                          (pWVar24 = (pEVar26->fields).data, pWVar24 != (WorldObjectClientRef *)0x0)
                          ) && (pOVar25 = WorldObjectClientRef`1[System::Object]::
                                          WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                                                    ((WorldObjectClientRef_1_System_Object_ *)
                                                     pWVar24,
                                                  MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                                                  ),
                               this_01 != (HashSet_1_MVWorldObjectClient_ *)0x0)) {
                        bVar5 = System.Core.dll::System::Collections::Generic::HashSet`1[System::
                                 Object]::HashSet_1_System_Object__Contains
                                           ((HashSet_1_System_Object_ *)this_01,pOVar25,
                                            MethodInfo__System__Collections__Generic__HashSet<MVWorldObjectClient>__Contains_MVWorldObjectClient_
                                           );
                        if (bVar5 != 0) {
                          return;
                        }
                        pEVar26 = (this_00->fields).pickedTarget;
                        if (pEVar26 != (ESSelection_PickResult_1_WorldObjectClientRef_ *)0x0) {
                          hit.interactionFlags._0_4_ =
                               (int)((ulonglong)(pEVar26->fields).hit.interactionFlags >> 0x20);
                          hit._0_64_ = *(undefined1 (*) [64])&(pEVar26->fields).hit.point.y;
                          hit.interactionFlags._4_4_ = 0;
                          pWVar24 = EditorStateMachine::EditorStateMachine_Select_1
                                              (pEVar13,hit,0,pMVar4);
                          (this_00->fields).selectedWorldObject = pWVar24;
                          func_?(&(this_00->fields).selectedWorldObject,pWVar24);
                          return;
                        }
                      }
                    }
                  }
                  goto code_?;
                }
              }
              return;
            }
            pWVar24 = (this_00->fields).selectedWorldObject;
            if (pWVar24 == (WorldObjectClientRef *)0x0) goto code_?;
            pOVar25 = WorldObjectClientRef`1[System::Object]::
                      WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                                ((WorldObjectClientRef_1_System_Object_ *)pWVar24,
                                 MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                                );
            if ((pOVar25 != (Object *)0x0) &&
               ((this_00->fields).pickedTarget !=
                (ESSelection_PickResult_1_WorldObjectClientRef_ *)0x0)) {
              pWVar24 = (((this_00->fields).pickedTarget)->fields).data;
              if (pWVar24 == (WorldObjectClientRef *)0x0) goto code_?;
              pOVar25 = WorldObjectClientRef`1[System::Object]::
                        WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                                  ((WorldObjectClientRef_1_System_Object_ *)pWVar24,
                                   MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                                  );
              if (pOVar25 != (Object *)0x0) {
                pEVar26 = (this_00->fields).pickedTarget;
                if (pEVar26 == (ESSelection_PickResult_1_WorldObjectClientRef_ *)0x0)
                goto code_?;
                bVar5 = ESSelection_IsMouseUpValid
                                   (this_00,(pEVar26->fields).mousePosition,(MethodInfo *)0x0);
                if (bVar5 != 0) {
                  pEVar26 = (this_00->fields).pickedTarget;
                  if (cRam_? == '\0') {
                    func_?();
                    cRam_? = '\x01';
                  }
                  if ((pEVar26 != (ESSelection_PickResult_1_WorldObjectClientRef_ *)0x0) &&
                     (pWVar24 = (pEVar26->fields).data, pWVar24 != (WorldObjectClientRef *)0x0)) {
                    pOVar25 = WorldObjectClientRef`1[System::Object]::
                              WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                                        ((WorldObjectClientRef_1_System_Object_ *)pWVar24,
                                         MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                                        );
                    if (pOVar25 == (Object *)0x0) {
                      e = (EditorStateMachine *)((uint)e & 0xffffff);
                    }
                    else {
                      pWVar24 = (pEVar26->fields).data;
                      if ((pWVar24 == (WorldObjectClientRef *)0x0) ||
                         (pOVar25 = WorldObjectClientRef`1[System::Object]::
                                    WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                                              ((WorldObjectClientRef_1_System_Object_ *)pWVar24,
                                               MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                                              ), pOVar25 == (Object *)0x0)) goto code_?;
                      uVar66 = (*(code *)pOVar25->klass[3]._0.typeMetadataHandle)
                                         (pOVar25,pEVar13,(pEVar26->fields).hit.collider);
                      e = (EditorStateMachine *)CONCAT13(uVar66,e._0_3_);
                    }
                    if ((pEVar13 != (EditorStateMachine *)0x0) &&
                       (pSVar27 = (pEVar13->fields).selectionController,
                       pSVar27 != (SelectionController *)0x0)) {
                      pHVar67 = (HashSet_1_System_Int32Enum_ *)(pSVar27->fields).selectedIDs;
                      pWVar24 = (this_00->fields).selectedWorldObject;
                      if ((pWVar24 != (WorldObjectClientRef *)0x0) &&
                         ((pOVar25 = WorldObjectClientRef`1[System::Object]::
                                     WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                                               ((WorldObjectClientRef_1_System_Object_ *)pWVar24,
                                                MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                                               ), pOVar25 != (Object *)0x0 &&
                          (pHVar67 != (HashSet_1_System_Int32Enum_ *)0x0)))) {
                        bVar5 = System.Core.dll::System::Collections::Generic::HashSet`1[System::
                                 Int32Enum]::HashSet_1_System_Int32Enum__Contains
                                           (pHVar67,(Int32Enum__Enum)pOVar25[1].klass,
                                            MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_
                                           );
                        if ((e._3_1_ == '\0') && (bVar5 != 0)) {
                          pWVar24 = (this_00->fields).selectedWorldObject;
                          pGVar3 = (this_00->fields).gizmoController;
                          if ((((pWVar24 == (WorldObjectClientRef *)0x0) ||
                               (pOVar25 = WorldObjectClientRef`1[System::Object]::
                                          WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                                                    ((WorldObjectClientRef_1_System_Object_ *)
                                                     pWVar24,
                                                  MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                                                  ), pOVar25 == (Object *)0x0)) ||
                              (pEVar26 = (this_00->fields).pickedTarget,
                              pEVar26 == (ESSelection_PickResult_1_WorldObjectClientRef_ *)0x0)) ||
                             (pGVar3 == (GizmoController *)0x0)) goto code_?;
                          GizmoController::GizmoController_Show
                                    (pGVar3,(int32_t)pOVar25[1].klass,(pEVar26->fields).hit.point,
                                     pEVar13,(MethodInfo *)0x0);
                        }
                        goto code_?;
                      }
                    }
                  }
                  goto code_?;
                }
              }
            }
            if ((pEVar13 != (EditorStateMachine *)0x0) &&
               (pSVar27 = (pEVar13->fields).selectionController,
               pSVar27 != (SelectionController *)0x0)) {
              SelectionController::SelectionController_DeSelectAll(pSVar27,(MethodInfo *)0x0);
              pGVar3 = (this_00->fields).gizmoController;
              if (pGVar3 != (GizmoController *)0x0) {
                GizmoController::GizmoController_Hide(pGVar3,(MethodInfo *)0x0);
                pMVar68 = EditorStateMachine::EditorStateMachine_get_ParentGroup
                                    (pEVar13,(MethodInfo *)0x0);
                pMVar10 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
                if (pMVar10 != (MVWorldObjectClientManager *)0x0) {
                  pMVar69 = MVWorldObjectClientManager::MVWorldObjectClientManager_get_RootGroup
                                      (pMVar10,(MethodInfo *)0x0);
                  if (pMVar68 == pMVar69) {
                    e = (EditorStateMachine *)0x2f;
                    pOVar25 = (Object *)func_?();
                    FSMEntity::FSMEntity_set_Event((FSMEntity *)pEVar13,pOVar25,(MethodInfo *)0x0);
                  }
code_?:
                  (this_00->fields).pickedLink = (ESSelection_PickResult_1_LinkObjectBase_ *)0x0;
                  func_?();
                  (this_00->fields).pickedTarget =
                       (ESSelection_PickResult_1_WorldObjectClientRef_ *)0x0;
                  func_?();
                  return;
                }
              }
            }
          }
          else {
            if (this._3_1_ == '\0') {
              return;
            }
            if ((this_00->fields).pickedTarget ==
                (ESSelection_PickResult_1_WorldObjectClientRef_ *)0x0) {
              return;
            }
            pEVar26 = (this_00->fields).pickedTarget;
            uVar70 = (pEVar26->fields).mousePosition.x;
            uVar71 = (pEVar26->fields).mousePosition.y;
            VStack_58.z = (pEVar26->fields).mousePosition.z;
            VStack_58.x = (float)uVar70;
            VStack_58.y = (float)uVar71;
            if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__MVInputWrapper);
            }
            pVVar32 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
                      DefaultEventSystem+Input::DefaultEventSystem_Input_get_mousePosition
                                (&VStack_14,(DefaultEventSystem_Input *)0x0,pMVar7);
            uVar72 = pVVar32->x;
            uVar73 = pVVar32->y;
            VStack_58.x = VStack_58.x - (float)uVar72;
            VStack_58.y = VStack_58.y - (float)uVar73;
            VStack_58.z = VStack_58.z - pVVar32->z;
            VStack_33.x = (float)uVar72;
            VStack_33.y = (float)uVar73;
            VStack_33.z = VStack_58.z;
            fVar74 = (float10)func_?(&VStack_58,0);
            e = (EditorStateMachine *)(float)fVar74;
            if ((float)e <= _UNK_?) {
              if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__MVInputWrapper);
              }
              e = (EditorStateMachine *)
                  MVInputWrapper::MVInputWrapper_GetAxisRawWithoutSensitivity
                            (StringLiteral_Mouse_ScrollWheel,(MethodInfo *)0x0);
              if ((float)e == _UNK_?) {
                return;
              }
            }
            if (pEVar13 != (EditorStateMachine *)0x0) {
              pDVar75 = (pEVar13->fields)._.data;
              this = (ESSelection *)0x0;
              pOVar25 = (Object *)func_?(TypeInfo__TranslateMode,&this);
              if (pDVar75 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__Add
                          (pDVar75,(Object *)StringLiteral_translateMode,pOVar25,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                          );
                pDVar75 = (pEVar13->fields)._.data;
                e = (EditorStateMachine *)CONCAT13(1,e._0_3_);
                pOVar25 = (Object *)func_?(TypeInfo__System__Boolean,(int)&e + 3);
                if (pDVar75 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__Add
                            (pDVar75,(Object *)StringLiteral_moveWithAvatar,pOVar25,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                            );
                  FSMEntity::FSMEntity_PushState
                            ((FSMEntity *)pEVar13,EditorEvent__Enum_ESTranslate,(MethodInfo *)0x0);
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
          if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__MVInputWrapper);
          }
          pVVar32 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
                    DefaultEventSystem+Input::DefaultEventSystem_Input_get_mousePosition
                              (&VStack_58,(DefaultEventSystem_Input *)0x0,pMVar4);
          uVar76 = pVVar32->x;
          uVar77 = pVVar32->y;
          this = (ESSelection *)pVVar32->z;
          pMStack_49 = (MethodInfo *)auStack_9._16_4_;
          pCStack_50 = (Collider *)auStack_9._20_4_;
          pTStack_51 = (Transform *)auStack_9._24_4_;
          pMStack_52 = pMStack_16;
          fStack_54 = (float)iStack_17;
          fStack_56 = (float)uStack_18;
          pMStack_37 = pMStack_11;
          pCStack_39 = pCStack_19;
          fStack_40 = fStack_20;
          pCStack_42 = pCStack_21;
          pTStack_44 = pTStack_22;
          pMStack_46 = pMStack_23;
          VStack_58.y = (float)iStack_15;
          VStack_58.z = (float)((ulonglong)iStack_15 >> 0x20);
          VStack_33.y = (float)uVar76;
          VStack_33.z = (float)uVar77;
          pMVar10 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          if (pMVar10 != (MVWorldObjectClientManager *)0x0) {
            pWVar24 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRef
                                (pMVar10,(int32_t)pMStack_11,(MethodInfo *)0x0);
            pEVar78 = (ESSelection_PickResult_1_WorldObjectClientRef_ *)
                      func_?(TypeInfo__ESSelection__PickResult<WorldObjectClientRef>);
            fVar8 = VStack_33.y;
            pMVar4 = (MethodInfo *)VStack_33.z;
            pEVar79 = this;
            pMVar7 = pMStack_49;
            pCVar80 = pCStack_50;
            pTVar81 = pTStack_51;
            pMVar6 = pMStack_52;
            fVar31 = fStack_54;
            fVar36 = fStack_56;
            pMVar82 = pMStack_37;
            pCVar83 = pCStack_39;
            fVar84 = fStack_40;
            pCVar85 = pCStack_42;
            pTVar86 = pTStack_44;
            pMVar87 = pMStack_46;
            fVar88 = VStack_58.y;
            method_00 = (MethodInfo *)VStack_58.z;
            pMVar89 = 
            MethodInfo__ESSelection__PickResult<WorldObjectClientRef>__PickResult_UnityEngine__Vector3__VoxelHit__WorldObjectClientRef_
            ;
            pEVar26 = pEVar78;
            func_?();
            (this_00->fields).pickedTarget = pEVar78;
            func_?(&(this_00->fields).pickedTarget,pEVar78,pEVar26,fVar8,pMVar4,pEVar79,
                            auStack_9._0_4_,auStack_9._4_4_,auStack_9._8_4_,auStack_9._12_4_,
                            pMVar7,pCVar80,pTVar81,pMVar6,fVar31,fVar36,pMVar82,pCVar83,fVar84,
                            pCVar85,pTVar86,pMVar87,fVar88,method_00,pWVar24,pMVar89);
            pEVar13 = e;
            if ((((e != (EditorStateMachine *)0x0) &&
                 (pSVar27 = (e->fields).selectionController, pSVar27 != (SelectionController *)0x0))
                && (pEVar26 = (this_00->fields).pickedTarget,
                   pEVar26 != (ESSelection_PickResult_1_WorldObjectClientRef_ *)0x0)) &&
               (pHVar67 = (HashSet_1_System_Int32Enum_ *)(pSVar27->fields).selectedIDs,
               pHVar67 != (HashSet_1_System_Int32Enum_ *)0x0)) {
              bVar5 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
                       HashSet_1_System_Int32Enum__Contains
                                 (pHVar67,(pEVar26->fields).hit.woId,
                                  MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_
                                 );
              e = (EditorStateMachine *)CONCAT31(e._1_3_,bVar5);
              pEVar26 = (this_00->fields).pickedTarget;
              if (((pEVar26 != (ESSelection_PickResult_1_WorldObjectClientRef_ *)0x0) &&
                  (pWVar24 = (pEVar26->fields).data, pWVar24 != (WorldObjectClientRef *)0x0)) &&
                 (pOVar25 = WorldObjectClientRef`1[System::Object]::
                            WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                                      ((WorldObjectClientRef_1_System_Object_ *)pWVar24,
                                       MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                                      ), pOVar25 != (Object *)0x0)) {
                if (((uint)pOVar25[0x17].klass & 0x20) != 0) {
                  return;
                }
                pEVar26 = (this_00->fields).pickedTarget;
                if (pEVar26 != (ESSelection_PickResult_1_WorldObjectClientRef_ *)0x0) {
                  hit_00.interactionFlags._0_4_ =
                       (int)((ulonglong)(pEVar26->fields).hit.interactionFlags >> 0x20);
                  hit_00._0_64_ = *(undefined1 (*) [64])&(pEVar26->fields).hit.point.y;
                  hit_00.interactionFlags._4_4_ = e;
                  pWVar24 = EditorStateMachine::EditorStateMachine_Select_1
                                      (pEVar13,hit_00,0,method_00);
                  (this_00->fields).selectedWorldObject = pWVar24;
                  func_?(&(this_00->fields).selectedWorldObject,pWVar24);
                  return;
                }
              }
            }
          }
        }
      }
      else {
        pOVar25 = (Object *)func_?();
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  (pOVar25,ExceptionArgument__Enum_obj,(MethodInfo *)in_stack_1);
        pEVar13 = e;
        if (e != (EditorStateMachine *)0x0) {
          pMVar90 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0)
          ;
          if (pMVar90 == (MVWorldObjectClient *)0x0) {
            return;
          }
          e = (EditorStateMachine *)
              EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(pEVar13,(MethodInfo *)0x0)
          ;
          pEVar91 = (this_00->fields).editorStateMachine;
          if ((pEVar91 != (EditorStateMachine *)0x0) &&
             (pSVar27 = (pEVar91->fields).selectionController, pSVar27 != (SelectionController *)0x0
             )) {
            SelectionController::SelectionController_DeSelectAll(pSVar27,(MethodInfo *)0x0);
            pGVar3 = (this_00->fields).gizmoController;
            if ((pGVar3 != (GizmoController *)0x0) &&
               (GizmoController::GizmoController_Hide(pGVar3,(MethodInfo *)0x0),
               pOVar25 != (Object *)0x0)) {
              pOVar25[1].klass = (Object__Class *)::StringLiteral__;
              func_?(pOVar25 + 1,::StringLiteral__);
              this = (ESSelection *)
                     MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
              if (e != (EditorStateMachine *)0x0) {
                cVar12 = (*(code *)e->klass[3]._1.genericContainerHandle)
                                   (e,this,pOVar25 + 1,e->klass[3]._1.instance_size);
                if (cVar12 == '\0') {
                  e = (EditorStateMachine *)(pEVar13->fields).gameObject;
                  callbackFunction =
                       (ExecuteEvents_EventFunction_1_System_Object_ *)
                       func_?(
                                      TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                                      );
                  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::
                  Object,System::Object]::UnityAction_2_System_Object_System_Object___ctor
                            ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,pOVar25,
                             MethodInfo__ESSelection____c__DisplayClass14_0___Execute_b__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                             ,(MethodInfo *)0x0);
                  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).
                      cctor_finished_or_no_cctor == 0) {
                    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
                  }
                  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                  ExecuteEvents_ExecuteHierarchy
                            ((GameObject *)e,(BaseEventData *)0x0,callbackFunction,
                             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                            );
                }
                root = (pEVar13->fields).gameObject;
                if ((TypeInfo__ESSelection____c->_1).cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__ESSelection____c);
                }
                callbackFunction_00 = TypeInfo__ESSelection____c->static_fields->__9__14_1;
                if (callbackFunction_00 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
                  if ((TypeInfo__ESSelection____c->_1).cctor_finished_or_no_cctor == 0) {
                    func_?(TypeInfo__ESSelection____c);
                  }
                  object = TypeInfo__ESSelection____c->static_fields->__9;
                  callbackFunction_00 =
                       (ExecuteEvents_EventFunction_1_IUIStack_ *)
                       func_?(
                                      TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                      );
                  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::
                  Object,System::Object]::UnityAction_2_System_Object_System_Object___ctor
                            ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_00,
                             (Object *)object,
                             MethodInfo__ESSelection____c___Execute_b__14_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                             ,(MethodInfo *)0x0);
                  TypeInfo__ESSelection____c->static_fields->__9__14_1 = callbackFunction_00;
                  func_?(&TypeInfo__ESSelection____c->static_fields->__9__14_1,
                                  callbackFunction_00);
                }
                if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).
                    cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
                }
                UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_ExecuteHierarchy
                          (root,(BaseEventData *)0x0,
                           (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction_00,
                           UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                          );
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
  pcVar92 = (code *)swi(3);
  (*pcVar92)();
  return;
}


/* Void Exit(EditorStateMachine) */

void Assembly-CSharp.dll::ESSelection::ESSelection_Exit
               (ESSelection *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__ESSelection__SelectionController_SelectedWorldObjectDeletedHandler_System__Object__WorldObjectDestroyedEventArgs_
                   );
    func_?(&TypeInfo__System__EventHandler<WorldObjectDestroyedEventArgs>);
    func_?(&TypeInfo__ISelectionController);
    cRam_? = '\x01';
  }
  if (e == (EditorStateMachine *)0x0) goto code_?;
  bVar1 = EditorStateMachine::EditorStateMachine_get_ParentGroupIsRoot(e,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    pMVar2 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
    if (pMVar2 != (MVWorldObjectClient *)0x0) {
      pMVar2 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
      if (pMVar2 == (MVWorldObjectClient *)0x0) goto code_?;
      this = (ESSelection *)0x0;
      bVar1 = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
                        (pMVar2,InteractionFlags__Enum_DirectlySelectable,(MethodInfo *)0x0);
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
  pEVar3 = (this->fields).editorStateMachine;
  if (pEVar3 != (EditorStateMachine *)0x0) {
    pSVar4 = (pEVar3->fields).selectionController;
    this_01 = (UnityAction_2_System_Object_System_Object_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (this_01,(Object *)this,
               MethodInfo__ESSelection__SelectionController_SelectedWorldObjectDeletedHandler_System__Object__WorldObjectDestroyedEventArgs_
               ,(MethodInfo *)0x0);
    if (pSVar4 != (SelectionController *)0x0) {
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
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    LinkObjectBase_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<LinkObjectBase>__
                   );
    func_?(&TypeInfo__MVInputWrapper);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__UnityEngine__Physics);
    func_?(&StringLiteral_Logic);
    cRam_? = '\x01';
  }
  func_?(&stack0xffffffa4,0,0x2c);
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (pMVar1 != (MainCameraManager *)0x0) {
    if ((pMVar1->fields).isLogicRendered == 0) {
      return (LinkObjectBase *)0x0;
    }
    fStack_2 = _UNK_?;
    bVar3 = EditModeObjectPicker::EditModeObjectPicker_Pick
                      (hit,(HashSet_1_System_Int32_ *)0x0,-0x40005,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      fStack_2 = hit->distance;
    }
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if (pMVar1 != (MainCameraManager *)0x0) {
      this_00 = (pMVar1->fields).mainCamera;
      if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pVVar4 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::DefaultEventSystem+Input::
               DefaultEventSystem_Input_get_mousePosition
                         (&RStack_5.m_Direction,(DefaultEventSystem_Input *)0x0,in_stack_6);
      if (this_00 != (Camera *)0x0) {
        pRVar7 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenPointToRay_2
                           (&RStack_5,this_00,*pVVar4,(MethodInfo *)0x0);
        fVar8 = (pRVar7->m_Origin).x;
        puStack_9 = (undefined *)(pRVar7->m_Origin).y;
        pPStack_10 = (Physics__Class *)(pRVar7->m_Origin).z;
        fVar11 = (pRVar7->m_Direction).x;
        RStack_5.m_Direction.y = (pRVar7->m_Direction).y;
        RStack_5.m_Direction.z = (pRVar7->m_Direction).z;
        iVar12 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                          (StringLiteral_Logic,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Physics->_1).cctor_finished_or_no_cctor == 0) {
          pPStack_10 = TypeInfo__UnityEngine__Physics;
          func_?();
        }
        ray.m_Origin.y = (float)puStack_9;
        ray.m_Origin.x = fVar8;
        ray.m_Origin.z = (float)pPStack_10;
        ray.m_Direction.x = fVar11;
        ray.m_Direction.y = RStack_5.m_Direction.y;
        ray.m_Direction.z = RStack_5.m_Direction.z;
        UnityEngine.PhysicsModule.dll::UnityEngine::Physics::Physics_Raycast_13
                  (ray,(RaycastHit *)&stack0xffffffa4,INFINITY,1 << ((byte)iVar12 & 0x1f),
                   (MethodInfo *)0x0);
        pCVar13 = UnityEngine.PhysicsModule.dll::UnityEngine::RaycastHit::RaycastHit_get_collider
                           ((RaycastHit *)&stack0xffffffa4,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                          ((Object_1 *)pCVar13,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar3 != 0) {
          fVar8 = UnityEngine.InputLegacyModule.dll::UnityEngine::Touch::Touch_get_deltaTime
                             ((Touch *)&stack0xffffffa4,(MethodInfo *)0x0);
          RStack_5.m_Direction.z = fVar8;
          if (fVar8 < fStack_2) {
            pCVar13 = UnityEngine.PhysicsModule.dll::UnityEngine::RaycastHit::RaycastHit_get_collider
                               ((RaycastHit *)&stack0xffffffa4,(MethodInfo *)0x0);
            if ((pCVar13 != (Collider *)0x0) &&
               (pGVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_gameObject((Component *)pCVar13,(MethodInfo *)0x0),
               pGVar14 != (GameObject *)0x0)) {
              pSVar15 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                                  ((Object_1 *)pGVar14,(MethodInfo *)0x0);
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__UnityEngine__Debug);
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                        ((Object *)pSVar15,(MethodInfo *)0x0);
              pRVar16 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::
                        RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                        KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                                  ((Regex_CachedCodeEntryKey *)&RStack_5.m_Direction,
                                   (KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                                    *)&stack0xffffffa4,(MethodInfo *)0x0);
              pSVar17 = pRVar16->_cultureKey;
              pSVar15 = pRVar16->_pattern;
              (hit->point).x = (float)pRVar16->_options;
              (hit->point).y = (float)pSVar17;
              (hit->point).z = (float)pSVar15;
              pCVar13 = UnityEngine.PhysicsModule.dll::UnityEngine::RaycastHit::
                       RaycastHit_get_collider((RaycastHit *)&stack0xffffffa4,(MethodInfo *)0x0);
              if ((pCVar13 != (Collider *)0x0) &&
                 (pGVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_gameObject((Component *)pCVar13,(MethodInfo *)0x0),
                 pGVar14 != (GameObject *)0x0)) {
                pLVar18 = (LinkObjectBase *)
                          UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_GetComponentInChildren_1
                                    (pGVar14,
                                     LinkObjectBase_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<LinkObjectBase>__
                                    );
                return pLVar18;
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
  pcVar19 = (code *)swi(3);
  pLVar18 = (LinkObjectBase *)(*pcVar19)();
  return pLVar18;
}


/* Void HandleEscape(EditorStateMachine) */

void Assembly-CSharp.dll::ESSelection::ESSelection_HandleEscape
               (ESSelection *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__EditorEvent);
    func_?(&TypeInfo__SharedCubeFunctions);
    cRam_? = '\x01';
  }
  if (e != (EditorStateMachine *)0x0) {
    bVar1 = EditorStateMachine::EditorStateMachine_get_ParentGroupIsRoot(e,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      pMVar2 = EditorStateMachine::EditorStateMachine_get_ParentGroup(e,(MethodInfo *)0x0);
      if (pMVar2 != (MVGroup *)0x0) {
        t = (pMVar2->fields)._.transform;
        if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively(t,0,(MethodInfo *)0x0);
        EditorStateMachine::EditorStateMachine_ExitGroup(e,(MethodInfo *)0x0);
        bVar1 = EditorStateMachine::EditorStateMachine_get_ParentGroupIsRoot(e,(MethodInfo *)0x0);
        if (bVar1 == 0) {
          pMVar2 = EditorStateMachine::EditorStateMachine_get_ParentGroup(e,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?();
            func_?();
            cRam_? = '\x01';
          }
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                    ((Object *)StringLiteral_EnterObject,(MethodInfo *)0x0);
          if (pMVar2 != (MVGroup *)0x0) {
            (*(code *)(pMVar2->klass->vtable).OnEnterObject.method)();
            return;
          }
        }
        else {
          pMVar3 = (e->fields).weCamera;
          if (pMVar3 != (MainCameraManager *)0x0) {
            MainCameraManager::MainCameraManager_set_BlueModeEnabled(pMVar3,0,(MethodInfo *)0x0);
            pSVar4 = (e->fields).selectionController;
            if (pSVar4 != (SelectionController *)0x0) {
              SelectionController::SelectionController_DeSelectAll(pSVar4,(MethodInfo *)0x0);
              if ((GizmoController *)pSVar4[2].monitor != (GizmoController *)0x0) {
                GizmoController::GizmoController_Hide
                          ((GizmoController *)pSVar4[2].monitor,(MethodInfo *)0x0);
                pOVar5 = (Object *)func_?();
                FSMEntity::FSMEntity_set_Event((FSMEntity *)e,pOVar5,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
    else {
      pMVar3 = (e->fields).weCamera;
      if (pMVar3 != (MainCameraManager *)0x0) {
        MainCameraManager::MainCameraManager_set_BlueModeEnabled(pMVar3,0,(MethodInfo *)0x0);
        pSVar4 = (e->fields).selectionController;
        if (pSVar4 != (SelectionController *)0x0) {
          SelectionController::SelectionController_DeSelectAll(pSVar4,(MethodInfo *)0x0);
          if ((GizmoController *)pSVar4[2].monitor != (GizmoController *)0x0) {
            GizmoController::GizmoController_Hide
                      ((GizmoController *)pSVar4[2].monitor,(MethodInfo *)0x0);
            pOVar5 = (Object *)func_?();
            FSMEntity::FSMEntity_set_Event((FSMEntity *)e,pOVar5,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
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
    func_?(&TypeInfo__MVInputWrapper);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVInputWrapper);
  }
  pVVar1 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::DefaultEventSystem+Input::
           DefaultEventSystem_Input_get_mousePosition
                     ((Vector3 *)&stack0xffffffe4,(DefaultEventSystem_Input *)0x0,in_stack_2)
  ;
  uVar3 = pVVar1->x;
  uVar4 = pVVar1->y;
  fVar5 = mousePosition.z - pVVar1->z;
  return (mousePosition.y - (float)uVar4) * (mousePosition.y - (float)uVar4) +
         (mousePosition.x - (float)uVar3) * (mousePosition.x - (float)uVar3) + fVar5 * fVar5 <
         _UNK_?;
}


/* Void PopMenuGizmos() */

void Assembly-CSharp.dll::ESSelection::ESSelection_PopMenuGizmos
               (ESSelection *this,MethodInfo *method)

{
  this_00 = (this->fields).contextMenuController;
  if (this_00 != (ContextMenuController *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      func_?();
      func_?();
      func_?(&
                      MethodInfo__ContextMenuController____c___PopGizmos_b__16_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     );
      func_?(&TypeInfo__ContextMenuController____c);
      cRam_? = '\x01';
    }
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this_00,(MethodInfo *)0x0);
    if ((TypeInfo__ContextMenuController____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    callbackFunction = TypeInfo__ContextMenuController____c->static_fields->__9__16_0;
    if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      if ((TypeInfo__ContextMenuController____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      object = TypeInfo__ContextMenuController____c->static_fields->__9;
      callbackFunction = (ExecuteEvents_EventFunction_1_IUIStack_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                 MethodInfo__ContextMenuController____c___PopGizmos_b__16_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__ContextMenuController____c->static_fields->__9__16_0 = callbackFunction;
      func_?(&TypeInfo__ContextMenuController____c->static_fields->__9__16_0);
    }
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,
               (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
    func_?(&MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__)
    ;
    cRam_? = '\x01';
  }
  pWVar1 = (this->fields).selectedWorldObject;
  if (pWVar1 != (WorldObjectClientRef *)0x0) {
    pOVar2 = WorldObjectClientRef`1[System::Object]::
             WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                       ((WorldObjectClientRef_1_System_Object_ *)pWVar1,
                        MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                       );
    if (pOVar2 == (Object *)0x0) {
      return;
    }
    pWVar1 = (this->fields).selectedWorldObject;
    if (((pWVar1 != (WorldObjectClientRef *)0x0) &&
        (pOVar2 = WorldObjectClientRef`1[System::Object]::
                  WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                            ((WorldObjectClientRef_1_System_Object_ *)pWVar1,
                             MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                            ), pOVar2 != (Object *)0x0)) &&
       (e != (WorldObjectDestroyedEventArgs *)0x0)) {
      if (pOVar2[1].klass == (Object__Class *)(e->fields).WordObjectID) {
        this_00 = (this->fields).editorStateMachine;
        if (this_00 == (EditorStateMachine *)0x0) goto code_?;
        FSMEntity::FSMEntity_PopState((FSMEntity *)this_00,(MethodInfo *)0x0);
      }
      return;
    }
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void ShowContextMenuGizmo() */

void Assembly-CSharp.dll::ESSelection::ESSelection_ShowContextMenuGizmo
               (ESSelection *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__)
    ;
    cRam_? = '\x01';
  }
  pWVar1 = (this->fields).selectedWorldObject;
  if (pWVar1 != (WorldObjectClientRef *)0x0) {
    pOVar2 = WorldObjectClientRef`1[System::Object]::
             WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                       ((WorldObjectClientRef_1_System_Object_ *)pWVar1,
                        MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                       );
    if (pOVar2 == (Object *)0x0) {
      return;
    }
    pWVar1 = (this->fields).selectedWorldObject;
    this_00 = (this->fields).contextMenuController;
    if ((((pWVar1 != (WorldObjectClientRef *)0x0) &&
         (pOVar2 = WorldObjectClientRef`1[System::Object]::
                   WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                             ((WorldObjectClientRef_1_System_Object_ *)pWVar1,
                              MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                             ), pOVar2 != (Object *)0x0)) &&
        (pEVar3 = (this->fields).pickedTarget,
        pEVar3 != (ESSelection_PickResult_1_WorldObjectClientRef_ *)0x0)) &&
       (this_00 != (ContextMenuController *)0x0)) {
      ContextMenuController::ContextMenuController_ShowContextMenu
                (this_00,(int32_t)pOVar2[1].klass,(pEVar3->fields).hit.point,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void ShowLinkMenuGizmo() */

void Assembly-CSharp.dll::ESSelection::ESSelection_ShowLinkMenuGizmo
               (ESSelection *this,MethodInfo *method)

{
  pLVar1 = (this->fields).selectedLinkObject;
  if (((pLVar1 != (LinkObjectBase *)0x0) &&
      (pEVar2 = (this->fields).pickedLink, pEVar2 != (ESSelection_PickResult_1_LinkObjectBase_ *)0x0
      )) && (this_00 = (this->fields).contextMenuController, this_00 != (ContextMenuController *)0x0
            )) {
    ContextMenuController::ContextMenuController_ShowContextMenuLink
              (this_00,(pLVar1->fields).linkID,(pLVar1->fields).isObjectLink,
               (pEVar2->fields).hit.point,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
  func_?(&(this->fields).selectedWorldObject,pWVar1);
  ESStateBase::ESStateBase__ctor((ESStateBase *)this,(MethodInfo *)0x0);
  (this->fields).contextMenuController = contextMenuController;
  func_?(&(this->fields).contextMenuController,contextMenuController);
  (this->fields).gizmoController = gizmoController;
  func_?(&(this->fields).gizmoController,gizmoController);
  return;
}

