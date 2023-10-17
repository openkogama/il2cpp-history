
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
        bVar3 = (*(code *)pOVar2->klass[3]._0.interopData)(pOVar2,e);
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
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__ESSelection__SelectionController_SelectedWorldObjectDeletedHandler_System__Object__WorldObjectDestroyedEventArgs_
                   );
    func_?();
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
  this_04 = e;
  if (e != (EditorStateMachine *)0x0) {
    pMVar1 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
    if (pMVar1 == (MVWorldObjectClient *)0x0) {
      bVar2 = false;
    }
    else {
      pMVar1 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO
                         (this_04,(MethodInfo *)0x0);
      if (pMVar1 == (MVWorldObjectClient *)0x0) goto code_?;
      if (((pMVar1->fields).interactionFlags & 8) == 0) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
    }
    this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this_04->fields)._.data;
    if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
      bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              Object,GUILoginHandler+PlanetData]::
              Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                        (this_00,(Object *)StringLiteral_FromTranslateState,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                        );
      if (bVar3 != 0) {
        bVar3 = EditorStateMachine::EditorStateMachine_get_ParentGroupIsRoot
                          (this_04,(MethodInfo *)0x0);
        if (bVar3 != 0) {
          this_02 = (this_04->fields).selectionController;
          if (this_02 != (SelectionController *)0x0) {
            SelectionController::SelectionController_DeSelectAll(this_02,(MethodInfo *)0x0);
            this_03 = (this->fields).gizmoController;
            if (this_03 != (GizmoController *)0x0) {
              GizmoController::GizmoController_Hide(this_03,(MethodInfo *)0x0);
              e = (EditorStateMachine *)0x2f;
              pOVar4 = (Object *)func_?();
              FSMEntity::FSMEntity_set_Event((FSMEntity *)this_04,pOVar4,(MethodInfo *)0x0);
              return;
            }
          }
          goto code_?;
        }
        if (bVar2) {
          in_stack_5 = this_04;
          pMVar6 = EditorStateMachine::EditorStateMachine_get_ParentGroup(this_04,(MethodInfo *)0x0)
          ;
          if ((pMVar6 == (MVGroup *)0x0) ||
             (in_stack_7 = (pMVar6->fields)._.gameObject,
             in_stack_7 == (GameObject *)0x0)) goto code_?;
          in_stack_8 = (char *)0x0;
          in_stack_9 = (MethodInfo *)&UNK_?;
          t = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (in_stack_7,(MethodInfo *)0x0);
          if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
            pSStack_10 = TypeInfo__SharedCubeFunctions;
            func_?();
          }
          SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively(t,0,(MethodInfo *)0x0);
          EditorStateMachine::EditorStateMachine_ExitGroup(this_04,(MethodInfo *)0x0);
          bVar3 = EditorStateMachine::EditorStateMachine_get_ParentGroupIsRoot
                            (this_04,(MethodInfo *)0x0);
          if (bVar3 != 0) {
            e = (EditorStateMachine *)0x2f;
            pOVar4 = (Object *)func_?(TypeInfo__EditorEvent,&e);
            FSMEntity::FSMEntity_set_Event((FSMEntity *)this_04,pOVar4,(MethodInfo *)0x0);
          }
        }
      }
      (this->fields).editorStateMachine = this_04;
      func_?(&(this->fields).editorStateMachine,this_04);
      pEVar11 = (this->fields).editorStateMachine;
      if (pEVar11 != (EditorStateMachine *)0x0) {
        e = (EditorStateMachine *)(pEVar11->fields).selectionController;
        pUStack_12 = (UnityAction_2_System_Object_System_Object_ *)
                    func_?(TypeInfo__System__EventHandler<WorldObjectDestroyedEventArgs>);
        if (pUStack_12 != (UnityAction_2_System_Object_System_Object_ *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    (pUStack_12,(Object *)this,
                     MethodInfo__ESSelection__SelectionController_SelectedWorldObjectDeletedHandler_System__Object__WorldObjectDestroyedEventArgs_
                     ,(MethodInfo *)0x0);
          if (e != (EditorStateMachine *)0x0) {
            func_?(0,TypeInfo__ISelectionController,e,pUStack_12);
            bVar3 = EditorStateMachine::EditorStateMachine_get_ParentGroupIsRoot
                              (this_04,(MethodInfo *)0x0);
            if ((bVar3 == 0) && (!bVar2)) {
              this_01 = (this_04->fields).weCamera;
              if (this_01 == (MainCameraManager *)0x0) goto code_?;
              MainCameraManager::MainCameraManager_set_BlueModeEnabled(this_01,1,(MethodInfo *)0x0);
            }
            uVar13 = 0x48;
            method_00 = (MethodInfo *)&stack0xffffff58;
            uVar14 = 0;
            func_?();
            bVar3 = EditModeObjectPicker::EditModeObjectPicker_Pick
                              ((VoxelHit *)&stack0xffffff58,(HashSet_1_System_Int32_ *)0x0,-0x40005,
                               (MethodInfo *)0x0);
            if (bVar3 != 0) {
              pMVar15 = in_stack_9;
              pGVar16 = in_stack_7;
              pcVar17 = in_stack_8;
              if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__MVInputWrapper,method_00,uVar14,uVar13);
                pMVar15 = in_stack_9;
                pGVar16 = in_stack_7;
                pcVar17 = in_stack_8;
              }
              pVVar18 = UnityStandardAssets::CrossPlatformInput::PlatformSpecific::StandaloneInput::
                       StandaloneInput_MousePosition(&VStack_19,(StandaloneInput *)0x0,method_00);
              VStack_20.y = pVVar18->x;
              VStack_20.z = pVVar18->y;
              pUStack_12 = (UnityAction_2_System_Object_System_Object_ *)pVVar18->z;
              VStack_19._4_8_ = iStack_21;
              in_stack_9 = pMVar15;
              in_stack_7 = pGVar16;
              in_stack_8 = pcVar17;
              pMVar22 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
              if (pMVar22 == (MVWorldObjectClientManager *)0x0) goto code_?;
              e = (EditorStateMachine *)
                  MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRef
                            (pMVar22,iStack_23,(MethodInfo *)0x0);
              pEVar24 = (ESSelection_PickResult_1_WorldObjectClientRef_ *)
                        func_?(TypeInfo__ESSelection__PickResult<WorldObjectClientRef>);
              if (pEVar24 == (ESSelection_PickResult_1_WorldObjectClientRef_ *)0x0)
              goto code_?;
              func_?(pEVar24,VStack_20._4_8_,pUStack_12,in_stack_5,pMVar15,pGVar16,
                              pcVar17,pIStack_25,pSStack_10,ppIStack_26,_Stack_8c.rgctx_data,
                              _Stack_88.genericMethod,uStack_27,iStack_23,pCStack_28,fStack_29,
                              pCStack_30,pTStack_31,uStack_32,VStack_19._4_8_,e,
                              MethodInfo__ESSelection__PickResult<WorldObjectClientRef>__PickResult_UnityEngine__Vector3__VoxelHit__WorldObjectClientRef_
                             );
              (this->fields).pickedTarget = pEVar24;
              func_?(&(this->fields).pickedTarget,pEVar24);
              pMVar1 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO
                                 (this_04,(MethodInfo *)0x0);
              if (pMVar1 == (MVWorldObjectClient *)0x0) {
                pWVar33 = MVWorldObjectClientManager::
                          MVWorldObjectClientManager_GetWorldObjectClientRefNullRef
                                    ((MethodInfo *)0x0);
                (this->fields).selectedWorldObject = pWVar33;
                func_?(&(this->fields).selectedWorldObject,pWVar33);
              }
              else {
                pMVar22 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
                pMVar1 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO
                                   (this_04,(MethodInfo *)0x0);
                if ((pMVar1 == (MVWorldObjectClient *)0x0) ||
                   (pMVar22 == (MVWorldObjectClientManager *)0x0)) goto code_?;
                pWVar33 = MVWorldObjectClientManager::
                          MVWorldObjectClientManager_GetWorldObjectClientRef
                                    (pMVar22,(pMVar1->fields)._.id,(MethodInfo *)0x0);
                (this->fields).selectedWorldObject = pWVar33;
                func_?(&(this->fields).selectedWorldObject,pWVar33);
              }
            }
            x = ESSelection_GetLinkHit(this,this_04,(VoxelHit *)&stack0xffffff58,(MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__UnityEngine__Object);
            }
            bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                              ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
            if (bVar3 == 0) {
              pEVar34 = (ESSelection_PickResult_1_LinkObjectBase_ *)0x0;
            }
            else {
              if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              pVVar18 = UnityStandardAssets::CrossPlatformInput::PlatformSpecific::StandaloneInput::
                       StandaloneInput_MousePosition
                                 (&VStack_20,(StandaloneInput *)0x0,in_stack_9);
              pEVar35 = TypeInfo__ESSelection__PickResult<LinkObjectBase>;
              VStack_19.y = pVVar18->x;
              VStack_19.z = pVVar18->y;
              e = (EditorStateMachine *)pVVar18->z;
              VStack_20._4_8_ = iStack_21;
              pEVar34 = (ESSelection_PickResult_1_LinkObjectBase_ *)func_?();
              if (pEVar34 == (ESSelection_PickResult_1_LinkObjectBase_ *)0x0) goto code_?;
              func_?(pEVar34,VStack_19._4_8_,e,pEVar35,in_stack_9,in_stack_7,
                              in_stack_8,pIStack_25,pSStack_10,ppIStack_26,
                              _Stack_8c.rgctx_data,_Stack_88.genericMethod,uStack_27,iStack_23,
                              pCStack_28,fStack_29,pCStack_30,pTStack_31,uStack_32,VStack_20._4_8_,x
                              ,
                              MethodInfo__ESSelection__PickResult<LinkObjectBase>__PickResult_UnityEngine__Vector3__VoxelHit__LinkObjectBase_
                             );
            }
            (this->fields).pickedLink = pEVar34;
            func_?(&(this->fields).pickedLink);
            return;
          }
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
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
            ((Object *)StringLiteral_EnterObject,(MethodInfo *)0x0);
  if (selectedWo != (MVWorldObjectClient *)0x0) {
    bVar1 = (*(selectedWo->klass->vtable).OnEnterObject.methodPtr)();
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
    in_stack_1 =
         &MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__;
    func_?();
    func_?(&StringLiteral_moveWithAvatar);
    func_?(&StringLiteral_There_should_be_selected_objects);
    func_?(&StringLiteral_translateMode);
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
      method_00 = (MethodInfo *)&UNK_?;
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
        pTVar7 = (Transform *)0x48;
        func_?();
        bVar5 = EditModeObjectPicker::EditModeObjectPicker_Pick
                           ((VoxelHit *)auStack_8,(HashSet_1_System_Int32_ *)0x0,-0x40005,
                            (MethodInfo *)0x0);
        if (bVar5 != 0) {
          pMVar9 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          if (pMVar9 == (MVWorldObjectClientManager *)0x0) goto code_?;
          method_00 = (MethodInfo *)0x0;
          pMVar4 = pMStack_10;
          bVar11 = MVWorldObjectClientManager::MVWorldObjectClientManager_IsType
                             (pMVar9,(int32_t)pMStack_10,
                              WorldObjectType__Enum_CubeModelPrototypeTerrain,(MethodInfo *)0x0);
          if ((bVar11 != 0) || (pMStack_10 == (MethodInfo *)0xffffffff)) {
            bVar5 = 0;
          }
        }
        cVar12 = func_?();
        pEVar13 = e;
        if (cVar12 == '\0') {
          if (bVar5 == 0) {
            e = (EditorStateMachine *)((uint)e & 0xffffff00);
          }
          else {
            bVar11 = ESStateBase::ESStateBase_SelectionIsAllowedByLogicEnabled
                               ((int32_t)pMStack_10,(MethodInfo *)0x0);
            e = (EditorStateMachine *)CONCAT31(e._1_3_,bVar11);
          }
          hit.point.y = (float)auStack_8._8_4_;
          hit.point.x = (float)auStack_8._4_4_;
          hit.point.z = (float)auStack_8._12_4_;
          hit.normal.x = (float)auStack_8._16_4_;
          hit.normal.y = (float)auStack_8._20_4_;
          hit.normal.z = (float)auStack_8._24_4_;
          hit.cubePos._0_4_ = pCStack_14;
          hit._28_4_ = fStack_15;
          hit.face = (int32_t)fStack_16;
          hit._36_4_ = pMStack_10;
          hit.woId = (int32_t)pCStack_17;
          hit.cube = (Cube *)pMStack_18;
          hit.distance = (float)pCStack_19;
          hit.collider = (Collider *)pTStack_20;
          hit.transform = (Transform *)fStack_21;
          hit._60_4_ = (int)iStack_22;
          hit.interactionFlags._0_4_ = (int)((ulonglong)iStack_22 >> 0x20);
          hit.interactionFlags._4_4_ = 0;
          ESStateBase::ESStateBase_TintObjectsOnMouseOver_1
                    ((ESStateBase *)this_00,pEVar13,(bool)e,hit,in_stack_23);
        }
        if ((this_00->fields).pickedTarget != (ESSelection_PickResult_1_WorldObjectClientRef_ *)0x0)
        {
          pWVar24 = (((this_00->fields).pickedTarget)->fields).data;
          if (pWVar24 == (WorldObjectClientRef *)0x0) goto code_?;
          pMVar4 = (MethodInfo *)&UNK_?;
          method_00 = MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
          ;
          pOVar25 = WorldObjectClientRef`1[System::Object]::
                    WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                              ((WorldObjectClientRef_1_System_Object_ *)pWVar24,
                               MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                              );
          if (pOVar25 == (Object *)0x0) {
            (this_00->fields).pickedTarget = (ESSelection_PickResult_1_WorldObjectClientRef_ *)0x0;
            pMVar6 = (MethodInfo *)&(this_00->fields).pickedTarget;
            method_00 = (MethodInfo *)&UNK_?;
            func_?(pMVar6,0);
          }
        }
        if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__MVInputWrapper);
        }
        bVar11 = MVInputWrapper::MVInputWrapper_GetBooleanControlDown
                           (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
        if (bVar11 == 0) {
          if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__MVInputWrapper);
          }
          bVar11 = MVInputWrapper::MVInputWrapper_GetBooleanControl
                             (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
          if (bVar11 == 0) {
            if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__MVInputWrapper);
            }
            bVar11 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                               (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
            if (bVar11 == 0) {
              if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
                method_00 = (MethodInfo *)&UNK_?;
                func_?(TypeInfo__MVInputWrapper);
              }
              bVar11 = MVInputWrapper::MVInputWrapper_GetBooleanControlDown
                                 (KogamaControls__Enum_PointerSelectAlt,(MethodInfo *)0x0);
              if (bVar11 == 0) {
                if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                bVar5 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                                   (KogamaControls__Enum_PointerSelectAlt,(MethodInfo *)0x0);
                if (bVar5 == 0) {
                  return;
                }
                pCVar2 = (this_00->fields).contextMenuController;
                if (pCVar2 != (ContextMenuController *)0x0) {
                  ContextMenuController::ContextMenuController_PopGizmos(pCVar2,(MethodInfo *)0x0);
                  if (((this_00->fields).pickedLink ==
                       (ESSelection_PickResult_1_LinkObjectBase_ *)0x0) ||
                     (bVar5 = ESSelection_IsMouseUpValid
                                         (this_00,(((this_00->fields).pickedLink)->fields).
                                                  mousePosition,(MethodInfo *)0x0), bVar5 == 0)) {
                    if (((this_00->fields).pickedTarget ==
                         (ESSelection_PickResult_1_WorldObjectClientRef_ *)0x0) ||
                       (bVar5 = ESSelection_IsMouseUpValid
                                           (this_00,(((this_00->fields).pickedTarget)->fields).
                                                    mousePosition,(MethodInfo *)0x0), bVar5 == 0))
                    goto code_?;
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
                      cVar12 = (*(code *)pOVar25->klass[3]._0.interopData)
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
                                                 ((WorldObjectClientRef_1_System_Object_ *)pWVar24,
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
                      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
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
              }
              else {
                pCVar31 = (Collider *)0x48;
                pMVar4 = (MethodInfo *)0x0;
                func_?(&stack0xffffff14);
                e = (EditorStateMachine *)
                    ESSelection_GetLinkHit
                              (this_00,pEVar13,(VoxelHit *)&stack0xffffff14,(MethodInfo *)0x0);
                if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__UnityEngine__Object);
                }
                bVar11 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                                   ((Object_1 *)e,(Object_1 *)0x0,(MethodInfo *)0x0);
                if (bVar11 == 0) {
                  if (bVar5 == 0) {
                    return;
                  }
                  pMVar9 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
                  if (pMVar9 != (MVWorldObjectClientManager *)0x0) {
                    e = (EditorStateMachine *)
                        MVWorldObjectClientManager::
                        MVWorldObjectClientManager_GetWorldObjectClientRef
                                  (pMVar9,(int32_t)pMStack_10,(MethodInfo *)0x0);
                    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
                      func_?(TypeInfo__MVInputWrapper);
                    }
                    pMVar6 = (MethodInfo *)&UNK_?;
                    pVVar32 = UnityStandardAssets::CrossPlatformInput::PlatformSpecific::
                              StandaloneInput::StandaloneInput_MousePosition
                                        (&VStack_33,(StandaloneInput *)0x0,pMVar4);
                    uVar34 = pVVar32->x;
                    uVar35 = pVVar32->y;
                    this = (ESSelection *)pVVar32->z;
                    pMStack_36 = (MethodInfo *)auStack_8._0_4_;
                    VStack_37.x = (float)auStack_8._4_4_;
                    VStack_37.y = (float)auStack_8._8_4_;
                    VStack_37.z = (float)auStack_8._12_4_;
                    fStack_38 = (float)auStack_8._16_4_;
                    fStack_39 = (float)auStack_8._20_4_;
                    pMStack_40 = (MethodInfo *)auStack_8._24_4_;
                    pCStack_41 = pCStack_14;
                    fStack_42 = fStack_15;
                    fStack_43 = fStack_16;
                    pMStack_44 = pMStack_10;
                    pCStack_45 = pCStack_17;
                    pMStack_46 = pMStack_18;
                    pCStack_47 = pCStack_19;
                    pTStack_48 = pTStack_20;
                    fStack_49 = fStack_21;
                    VStack_33.y = (float)iStack_22;
                    VStack_33.z = (float)((ulonglong)iStack_22 >> 0x20);
                    VStack_50.y = (float)uVar34;
                    VStack_50.z = (float)uVar35;
                    pEVar26 = (ESSelection_PickResult_1_WorldObjectClientRef_ *)
                              func_?(
                                             TypeInfo__ESSelection__PickResult<WorldObjectClientRef>
                                             );
                    if (pEVar26 != (ESSelection_PickResult_1_WorldObjectClientRef_ *)0x0) {
                      func_?(pEVar26,CONCAT44(VStack_50.z,VStack_50.y),this,pMStack_36,
                                      VStack_37.x,VStack_37.y,VStack_37.z,fStack_38,fStack_39,
                                      pMStack_40,pCStack_41,fStack_42,fStack_43,pMStack_44,
                                      pCStack_45,pMStack_46,pCStack_47,pTStack_48,fStack_49,
                                      VStack_33.y,VStack_33.z,e,
                                      MethodInfo__ESSelection__PickResult<WorldObjectClientRef>__PickResult_UnityEngine__Vector3__VoxelHit__WorldObjectClientRef_
                                     );
                      (this_00->fields).pickedTarget = pEVar26;
                      func_?(&(this_00->fields).pickedTarget,pEVar26);
                      if (pEVar13 != (EditorStateMachine *)0x0) {
                        this_01 = EditorStateMachine::EditorStateMachine_get_SelectedWOs
                                            (pEVar13,(MethodInfo *)0x0);
                        pEVar26 = (this_00->fields).pickedTarget;
                        if (((pEVar26 != (ESSelection_PickResult_1_WorldObjectClientRef_ *)0x0) &&
                            (pWVar24 = (pEVar26->fields).data,
                            pWVar24 != (WorldObjectClientRef *)0x0)) &&
                           (pOVar25 = WorldObjectClientRef`1[System::Object]::
                                      WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                                                ((WorldObjectClientRef_1_System_Object_ *)pWVar24,
                                                 MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                                                ), this_01 != (HashSet_1_MVWorldObjectClient_ *)0x0)
                           ) {
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
                            hit_00.interactionFlags._0_4_ =
                                 (int)((ulonglong)(pEVar26->fields).hit.interactionFlags >> 0x20);
                            hit_00._0_64_ = *(undefined1 (*) [64])&(pEVar26->fields).hit.point.y;
                            hit_00.interactionFlags._4_4_ = 0;
                            pWVar24 = EditorStateMachine::EditorStateMachine_Select_1
                                                (pEVar13,hit_00,0,pMVar6);
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
                  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
                    func_?(TypeInfo__MVInputWrapper);
                  }
                  pVVar32 = UnityStandardAssets::CrossPlatformInput::PlatformSpecific::
                            StandaloneInput::StandaloneInput_MousePosition
                                      (&VStack_50,(StandaloneInput *)0x0,method_00);
                  uVar51 = pVVar32->x;
                  uVar52 = pVVar32->y;
                  fVar53 = pVVar32->z;
                  pMStack_44 = pMStack_54;
                  pCStack_45 = pCStack_55;
                  fStack_38 = fStack_56;
                  fStack_39 = fStack_57;
                  pMStack_40 = pMStack_58;
                  pCStack_41 = pCStack_59;
                  pMStack_36 = pMStack_60;
                  VStack_37.x = (float)pCStack_61;
                  VStack_37.y = (float)pTStack_62;
                  VStack_37.z = fStack_63;
                  VStack_50.y = (float)iStack_64;
                  VStack_50.z = (float)((ulonglong)iStack_64 >> 0x20);
                  pMStack_46 = pMVar4;
                  pCStack_47 = pCVar31;
                  pTStack_48 = pTVar7;
                  fStack_49 = in_stack_65;
                  fStack_42 = in_stack_66;
                  fStack_43 = in_stack_67;
                  VStack_33.y = (float)uVar51;
                  VStack_33.z = (float)uVar52;
                  pEVar29 = (ESSelection_PickResult_1_LinkObjectBase_ *)
                            func_?(TypeInfo__ESSelection__PickResult<LinkObjectBase>);
                  if (pEVar29 != (ESSelection_PickResult_1_LinkObjectBase_ *)0x0) {
                    func_?(pEVar29,CONCAT44(VStack_33.z,VStack_33.y),fVar53,pMStack_46,
                                    pCStack_47,pTStack_48,fStack_49,fStack_42,fStack_43,pMStack_44,
                                    pCStack_45,fStack_38,fStack_39,pMStack_40,pCStack_41,pMStack_36,
                                    VStack_37.x,VStack_37.y,VStack_37.z,VStack_50.y,VStack_50.z,e,
                                    MethodInfo__ESSelection__PickResult<LinkObjectBase>__PickResult_UnityEngine__Vector3__VoxelHit__LinkObjectBase_
                                   );
                    (this_00->fields).pickedLink = pEVar29;
                    func_?(&(this_00->fields).pickedLink,pEVar29);
                    return;
                  }
                }
              }
            }
            else {
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
                        uVar68 = (*(code *)pOVar25->klass[3]._0.interopData)
                                           (pOVar25,pEVar13,(pEVar26->fields).hit.collider);
                        e = (EditorStateMachine *)CONCAT13(uVar68,e._0_3_);
                      }
                      if ((pEVar13 != (EditorStateMachine *)0x0) &&
                         (pSVar27 = (pEVar13->fields).selectionController,
                         pSVar27 != (SelectionController *)0x0)) {
                        pHVar28 = (pSVar27->fields).selectedIDs;
                        pWVar24 = (this_00->fields).selectedWorldObject;
                        if ((pWVar24 != (WorldObjectClientRef *)0x0) &&
                           ((pOVar25 = WorldObjectClientRef`1[System::Object]::
                                       WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                                                 ((WorldObjectClientRef_1_System_Object_ *)pWVar24,
                                                  MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                                                 ), pOVar25 != (Object *)0x0 &&
                            (pHVar28 != (HashSet_1_System_Int32_ *)0x0)))) {
                          bVar5 = System.Core.dll::System::Collections::Generic::HashSet`1[System::
                                   Int32]::HashSet_1_System_Int32__Contains
                                             (pHVar28,(int32_t)pOVar25[1].klass,
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
                                pEVar26 == (ESSelection_PickResult_1_WorldObjectClientRef_ *)0x0))
                               || (pGVar3 == (GizmoController *)0x0)) goto code_?;
                            GizmoController::GizmoController_Show
                                      (pGVar3,(int32_t)pOVar25[1].klass,(pEVar26->fields).hit.point
                                       ,pEVar13,(MethodInfo *)0x0);
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
                  pMVar69 = EditorStateMachine::EditorStateMachine_get_ParentGroup
                                      (pEVar13,(MethodInfo *)0x0);
                  pMVar9 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
                  if (pMVar9 != (MVWorldObjectClientManager *)0x0) {
                    pMVar70 = MVWorldObjectClientManager::MVWorldObjectClientManager_get_RootGroup
                                        (pMVar9,(MethodInfo *)0x0);
                    if (pMVar69 == pMVar70) {
                      e = (EditorStateMachine *)0x2f;
                      pOVar25 = (Object *)func_?();
                      FSMEntity::FSMEntity_set_Event((FSMEntity *)pEVar13,pOVar25,(MethodInfo *)0x0)
                      ;
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
          }
          else {
            if (bVar5 == 0) {
              return;
            }
            if ((this_00->fields).pickedTarget ==
                (ESSelection_PickResult_1_WorldObjectClientRef_ *)0x0) {
              return;
            }
            pEVar26 = (this_00->fields).pickedTarget;
            uVar71 = (pEVar26->fields).mousePosition.x;
            uVar72 = (pEVar26->fields).mousePosition.y;
            VStack_50.z = (pEVar26->fields).mousePosition.z;
            VStack_50.x = (float)uVar71;
            VStack_50.y = (float)uVar72;
            if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__MVInputWrapper);
            }
            pVVar32 = UnityStandardAssets::CrossPlatformInput::PlatformSpecific::StandaloneInput::
                      StandaloneInput_MousePosition(&VStack_37,(StandaloneInput *)0x0,method_00);
            uVar73 = pVVar32->x;
            uVar74 = pVVar32->y;
            VStack_50.x = VStack_50.x - (float)uVar73;
            VStack_50.y = VStack_50.y - (float)uVar74;
            VStack_33.z = VStack_50.z - pVVar32->z;
            VStack_33.x = (float)uVar73;
            VStack_33.y = (float)uVar74;
            VStack_50.z = VStack_33.z;
            fVar75 = (float10)func_?(&VStack_50,0);
            e = (EditorStateMachine *)(float)fVar75;
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
              pDVar76 = (pEVar13->fields)._.data;
              this = (ESSelection *)0x0;
              pOVar25 = (Object *)func_?(TypeInfo__TranslateMode,&this);
              if (pDVar76 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__Add
                          (pDVar76,(Object *)StringLiteral_translateMode,pOVar25,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                          );
                pDVar76 = (pEVar13->fields)._.data;
                e = (EditorStateMachine *)CONCAT13(1,e._0_3_);
                pOVar25 = (Object *)func_?(TypeInfo__System__Boolean,(int)&e + 3);
                if (pDVar76 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__Add
                            (pDVar76,(Object *)StringLiteral_moveWithAvatar,pOVar25,
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
          if (bVar5 == 0) {
            return;
          }
          if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__MVInputWrapper);
          }
          pVVar32 = UnityStandardAssets::CrossPlatformInput::PlatformSpecific::StandaloneInput::
                    StandaloneInput_MousePosition(&VStack_37,(StandaloneInput *)0x0,pMVar4);
          uVar77 = pVVar32->x;
          uVar78 = pVVar32->y;
          this = (ESSelection *)pVVar32->z;
          pMStack_46 = (MethodInfo *)auStack_8._0_4_;
          pCStack_47 = (Collider *)auStack_8._4_4_;
          pTStack_48 = (Transform *)auStack_8._8_4_;
          fStack_49 = (float)auStack_8._12_4_;
          fStack_42 = (float)auStack_8._16_4_;
          fStack_43 = (float)auStack_8._20_4_;
          pMStack_44 = (MethodInfo *)auStack_8._24_4_;
          pCStack_45 = pCStack_14;
          fStack_38 = fStack_15;
          fStack_39 = fStack_16;
          pMStack_40 = pMStack_10;
          pCStack_41 = pCStack_17;
          pMStack_36 = pMStack_18;
          VStack_37.x = (float)pCStack_19;
          VStack_37.y = (float)pTStack_20;
          VStack_37.z = fStack_21;
          VStack_50.y = (float)iStack_22;
          VStack_50.z = (float)((ulonglong)iStack_22 >> 0x20);
          VStack_33.y = (float)uVar77;
          VStack_33.z = (float)uVar78;
          pMVar9 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          if (pMVar9 != (MVWorldObjectClientManager *)0x0) {
            e = (EditorStateMachine *)
                MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRef
                          (pMVar9,(int32_t)pMStack_10,(MethodInfo *)0x0);
            pEVar26 = (ESSelection_PickResult_1_WorldObjectClientRef_ *)
                      func_?(TypeInfo__ESSelection__PickResult<WorldObjectClientRef>);
            if (pEVar26 != (ESSelection_PickResult_1_WorldObjectClientRef_ *)0x0) {
              func_?(pEVar26,CONCAT44(VStack_33.z,VStack_33.y),this,pMStack_46,pCStack_47,
                              pTStack_48,fStack_49,fStack_42,fStack_43,pMStack_44,pCStack_45,
                              fStack_38,fStack_39,pMStack_40,pCStack_41,pMStack_36,VStack_37.x,
                              VStack_37.y,VStack_37.z,VStack_50.y,VStack_50.z,e,
                              MethodInfo__ESSelection__PickResult<WorldObjectClientRef>__PickResult_UnityEngine__Vector3__VoxelHit__WorldObjectClientRef_
                             );
              (this_00->fields).pickedTarget = pEVar26;
              func_?(&(this_00->fields).pickedTarget,pEVar26);
              if ((((pEVar13 != (EditorStateMachine *)0x0) &&
                   (pSVar27 = (pEVar13->fields).selectionController,
                   pSVar27 != (SelectionController *)0x0)) &&
                  (pEVar26 = (this_00->fields).pickedTarget,
                  pEVar26 != (ESSelection_PickResult_1_WorldObjectClientRef_ *)0x0)) &&
                 (pHVar28 = (pSVar27->fields).selectedIDs, pHVar28 != (HashSet_1_System_Int32_ *)0x0
                 )) {
                bVar5 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
                         HashSet_1_System_Int32__Contains
                                   (pHVar28,(pEVar26->fields).hit.woId,
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
                    hit_01.interactionFlags._0_4_ =
                         (int)((ulonglong)(pEVar26->fields).hit.interactionFlags >> 0x20);
                    hit_01._0_64_ = *(undefined1 (*) [64])&(pEVar26->fields).hit.point.y;
                    hit_01.interactionFlags._4_4_ = e;
                    pWVar24 = EditorStateMachine::EditorStateMachine_Select_1
                                        (pEVar13,hit_01,0,pMVar6);
                    (this_00->fields).selectedWorldObject = pWVar24;
                    func_?(&(this_00->fields).selectedWorldObject,pWVar24);
                    return;
                  }
                }
              }
            }
          }
        }
      }
      else {
        pOVar25 = (Object *)func_?();
        if ((pOVar25 != (Object *)0x0) &&
           (mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                      (pOVar25,ExceptionArgument__Enum_obj,(MethodInfo *)in_stack_1),
           pEVar13 = e, e != (EditorStateMachine *)0x0)) {
          pMVar79 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0)
          ;
          if (pMVar79 == (MVWorldObjectClient *)0x0) {
            return;
          }
          e = (EditorStateMachine *)
              EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(pEVar13,(MethodInfo *)0x0)
          ;
          pEVar80 = (this_00->fields).editorStateMachine;
          if ((pEVar80 != (EditorStateMachine *)0x0) &&
             (pSVar27 = (pEVar80->fields).selectionController, pSVar27 != (SelectionController *)0x0
             )) {
            SelectionController::SelectionController_DeSelectAll(pSVar27,(MethodInfo *)0x0);
            pGVar3 = (this_00->fields).gizmoController;
            if (pGVar3 != (GizmoController *)0x0) {
              GizmoController::GizmoController_Hide(pGVar3,(MethodInfo *)0x0);
              pOVar25[1].klass = (Object__Class *)::StringLiteral__;
              func_?(pOVar25 + 1,::StringLiteral__);
              this = (ESSelection *)
                     MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
              if (e != (EditorStateMachine *)0x0) {
                cVar12 = (*(code *)e->klass[3]._1.instance_size)
                                   (e,this,pOVar25 + 1,e->klass[3]._1.actualSize);
                if (cVar12 == '\0') {
                  e = (EditorStateMachine *)(pEVar13->fields).gameObject;
                  callbackFunction =
                       (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
                  if (callbackFunction == (ExecuteEvents_EventFunction_1_System_Object_ *)0x0)
                  goto code_?;
                  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::
                  Object,System::Object]::UnityAction_2_System_Object_System_Object___ctor
                            ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,pOVar25,
                             MethodInfo__ESSelection____c__DisplayClass14_0___Execute_b__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                             ,(MethodInfo *)0x0);
                  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).
                      cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                  ExecuteEvents_ExecuteHierarchy
                            ((GameObject *)e,(BaseEventData *)0x0,callbackFunction,
                             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                            );
                }
                root = (pEVar13->fields).gameObject;
                if ((TypeInfo__ESSelection____c->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                callbackFunction_00 = TypeInfo__ESSelection____c->static_fields->__9__14_1;
                if (callbackFunction_00 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
                  if ((TypeInfo__ESSelection____c->_1).cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  object = TypeInfo__ESSelection____c->static_fields->__9;
                  callbackFunction_00 = (ExecuteEvents_EventFunction_1_IUIStack_ *)func_?()
                  ;
                  if (callbackFunction_00 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0)
                  goto code_?;
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
                  func_?();
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
  pcVar81 = (code *)swi(3);
  (*pcVar81)();
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
    if (this_01 != (UnityAction_2_System_Object_System_Object_ *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (this_01,(Object *)this,
                 MethodInfo__ESSelection__SelectionController_SelectedWorldObjectDeletedHandler_System__Object__WorldObjectDestroyedEventArgs_
                 ,(MethodInfo *)0x0);
      if (pSVar4 != (SelectionController *)0x0) {
        func_?();
        return;
      }
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
      pVVar4 = UnityStandardAssets::CrossPlatformInput::PlatformSpecific::StandaloneInput::
               StandaloneInput_MousePosition
                         (&RStack_5.m_Direction,(StandaloneInput *)0x0,in_stack_6);
      if (this_00 != (Camera *)0x0) {
        pRVar7 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenPointToRay_2
                           (&RStack_5,this_00,*pVVar4,(MethodInfo *)0x0);
        fVar8 = (pRVar7->m_Origin).x;
        fVar9 = (pRVar7->m_Origin).y;
        fVar10 = (pRVar7->m_Origin).z;
        fVar11 = (pRVar7->m_Direction).x;
        RStack_5.m_Direction.y = (pRVar7->m_Direction).y;
        RStack_5.m_Direction.z = (pRVar7->m_Direction).z;
        iVar12 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                          (StringLiteral_Logic,(MethodInfo *)0x0);
        ray.m_Origin.y = fVar9;
        ray.m_Origin.x = fVar8;
        ray.m_Origin.z = fVar10;
        ray.m_Direction.x = fVar11;
        ray.m_Direction.y = RStack_5.m_Direction.y;
        ray.m_Direction.z = RStack_5.m_Direction.z;
        UnityEngine.PhysicsModule.dll::UnityEngine::Physics::Physics_Raycast_13
                  (ray,(RaycastHit *)&stack0xffffffa4,INFINITY,1 << ((byte)iVar12 & 0x1f),
                   (MethodInfo *)0x0);
        pCVar13 = UnityEngine.PhysicsModule.dll::UnityEngine::RaycastHit::RaycastHit_get_collider
                           ((RaycastHit *)&stack0xffffffa4,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                          ((Object_1 *)pCVar13,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar3 != 0) {
          fVar8 = UnityEngine.PhysicsModule.dll::UnityEngine::RaycastHit::RaycastHit_get_distance
                             ((RaycastHit *)&stack0xffffffa4,(MethodInfo *)0x0);
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
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
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
                          Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2
                                    ((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)pGVar14,
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
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                    ((Object *)StringLiteral_EnterObject,(MethodInfo *)0x0);
          if (pMVar2 != (MVGroup *)0x0) {
            (*(pMVar2->klass->vtable).OnEnterObject.methodPtr)();
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
  pVVar1 = UnityStandardAssets::CrossPlatformInput::PlatformSpecific::StandaloneInput::
           StandaloneInput_MousePosition
                     ((Vector3 *)&stack0xffffffe4,(StandaloneInput *)0x0,in_stack_2);
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
      if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                 MethodInfo__ContextMenuController____c___PopGizmos_b__16_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__ContextMenuController____c->static_fields->__9__16_0 = callbackFunction;
      func_?();
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
code_?:
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

