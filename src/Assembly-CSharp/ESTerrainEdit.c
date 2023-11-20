
/* Void Enter(EditorStateMachine) */

void Assembly-CSharp.dll::ESTerrainEdit::ESTerrainEdit_Enter
               (ESTerrainEdit *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MVCubeModelPrototypeTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelPrototypeTerrain>__
                   );
    cRam_? = '\x01';
  }
  MVMaterialRepository::MVMaterialRepository_set_AllowDestructibleMaterialSelection
            (1,(MethodInfo *)0x0);
  if (e != (EditorStateMachine *)0x0) {
    pMVar1 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
    if (pMVar1 != (MVWorldObjectClient *)0x0) {
      this_00 = (e->fields).selectionController;
      if (this_00 == (SelectionController *)0x0) goto code_?;
      SelectionController::SelectionController_DeSelectAll(this_00,(MethodInfo *)0x0);
    }
    this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_02 != (MVWorldObjectClientManager *)0x0) {
      pMVar2 = (MVCubeModelPrototypeTerrain *)
               MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject
                         (this_02,
                          MVCubeModelPrototypeTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelPrototypeTerrain>__
                         );
      (this->fields).terrain = pMVar2;
      func_?(&(this->fields).terrain,pMVar2);
      this_01 = (e->fields).cubeModelingStateMachine;
      if (this_01 != (CubeModelingStateMachine *)0x0) {
        CubeModelingStateMachine::CubeModelingStateMachine_StartEdit
                  (this_01,(MVCubeModelBase *)(this->fields).terrain,(IModelingConstraint *)0x0,
                   (MethodInfo *)0x0);
        pWVar3 = MVWorldObjectClientManager::
                 MVWorldObjectClientManager_GetWorldObjectClientRefNullRef((MethodInfo *)0x0);
        (this->fields)._.tintedWo = pWVar3;
        func_?(&(this->fields)._.tintedWo,pWVar3);
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Execute(EditorStateMachine) */

void Assembly-CSharp.dll::ESTerrainEdit::ESTerrainEdit_Execute
               (ESTerrainEdit *this,EditorStateMachine *e,MethodInfo *method)

{
  this_02 = e;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__EditorEvent);
    func_?(&
                    LinkObjectBase_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<LinkObjectBase>__
                   );
    func_?(&TypeInfo__MVInputWrapper);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__UnityEngine__Physics);
    func_?(&MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__)
    ;
    cRam_? = '\x01';
  }
  func_?(auStack_1,0,0x2c);
  func_?(auStack_1 + 0x3c,0,0x48);
  bVar2 = EditModeObjectPicker::EditModeObjectPicker_Pick
                    ((VoxelHit *)(auStack_1 + 0x3c),(HashSet_1_System_Int32_ *)0x0,-0x40005,
                     (MethodInfo *)0x0);
  if (bVar2 == 0) {
code_?:
    bVar3 = ESStateBase::ESStateBase_SelectionIsAllowedByLogicEnabled(iStack_4,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
      hit.point.y = (float)uStack_5;
      hit.point.x = fStack_6;
      hit.point.z = (float)uStack_7;
      hit.normal.x = (float)uStack_8;
      hit.normal.y = (float)uStack_9;
      hit.normal.z = (float)uStack_10;
      hit.cubePos.x = (undefined2)uStack_11;
      hit.cubePos.y = uStack_11._2_2_;
      hit._28_4_ = uStack_12;
      hit.face = uStack_13;
      hit._36_4_ = iStack_4;
      hit.woId = uStack_14;
      hit.cube = (Cube *)uStack_15;
      hit.distance = (float)uStack_16;
      hit.collider = (Collider *)uStack_17;
      hit.transform = (Transform *)uStack_18;
      hit._60_4_ = (float)uStack_19;
      hit.interactionFlags._0_4_ = (float)((ulonglong)uStack_19 >> 0x20);
      hit.interactionFlags._4_4_ = 0;
      ESStateBase::ESStateBase_TintObjectsOnMouseOver_1
                ((ESStateBase *)this,e,bVar3 & bVar2,hit,in_stack_20);
    }
    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar2 = MVInputWrapper::MVInputWrapper_GetBooleanControlDown
                      (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar2 = MVInputWrapper::MVInputWrapper_GetBooleanControlDown
                        (KogamaControls__Enum_PointerSelectAlt,(MethodInfo *)0x0);
      if (bVar2 != 0) goto code_?;
    }
    else {
code_?:
      if ((e == (EditorStateMachine *)0x0) ||
         (this_00 = (e->fields).selectionController, this_00 == (SelectionController *)0x0))
      goto code_?;
      func_?();
      bVar2 = EditModeObjectPicker::EditModeObjectPicker_Pick
                        (&VStack_21,(HashSet_1_System_Int32_ *)0x0,-5,(MethodInfo *)0x0);
      if (bVar2 == 0) {
        this_03 = (WorldObjectClientRef *)0x0;
      }
      else {
        uVar22 = (undefined4)((ulonglong)VStack_21.interactionFlags >> 0x20);
        hit_00.point.y = VStack_21.point.z;
        hit_00.point.x = VStack_21.point.y;
        hit_00.point.z = VStack_21.normal.x;
        hit_00.normal.x = VStack_21.normal.y;
        hit_00.normal.y = VStack_21.normal.z;
        hit_00.normal.z = (float)VStack_21.cubePos._0_4_;
        hit_00.cubePos.x = VStack_21.cubePos.z;
        hit_00.cubePos.y = VStack_21._30_2_;
        hit_00._28_4_ = VStack_21.face;
        hit_00.face = VStack_21._36_4_;
        hit_00._36_4_ = VStack_21.woId;
        hit_00.woId = (int32_t)VStack_21.cube;
        hit_00.cube = (Cube *)VStack_21.distance;
        hit_00.distance = (float)VStack_21.collider;
        hit_00.collider = (Collider *)VStack_21.transform;
        hit_00.transform = (Transform *)VStack_21._60_4_;
        hit_00._60_4_ = (float)VStack_21.interactionFlags;
        hit_00.interactionFlags._0_2_ = (int16_t)uVar22;
        hit_00.interactionFlags._2_2_ = SUB42(uVar22,2);
        hit_00.interactionFlags._4_4_ = 0;
        this_03 = SelectionController::SelectionController_Select_1
                            (this_00,hit_00,1,0,in_stack_23);
      }
      if (((bVar3 != 0) && (this_03 != (WorldObjectClientRef *)0x0)) &&
         (pOVar24 = WorldObjectClientRef`1[System::Object]::
                   WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                             ((WorldObjectClientRef_1_System_Object_ *)this_03,
                              MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                             ), pOVar24 != (Object *)0x0)) goto code_?;
    }
    targetHit.point.y = (float)uStack_5;
    targetHit.point.x = fStack_6;
    targetHit.point.z = (float)uStack_7;
    targetHit.normal.x = (float)uStack_8;
    targetHit.normal.y = (float)uStack_9;
    targetHit.normal.z = (float)uStack_10;
    targetHit.cubePos.x = (undefined2)uStack_11;
    targetHit.cubePos.y = uStack_11._2_2_;
    targetHit._28_4_ = uStack_12;
    targetHit.face = uStack_13;
    targetHit._36_4_ = iStack_4;
    targetHit.woId = uStack_14;
    targetHit.cube = (Cube *)uStack_15;
    targetHit.distance = (float)uStack_16;
    targetHit.collider = (Collider *)uStack_17;
    targetHit.transform = (Transform *)uStack_18;
    targetHit._60_1_ = (bool)(int)uStack_19;
    targetHit._61_3_ = SUB43((int)uStack_19,1);
    targetHit.interactionFlags._0_4_ = (int32_t)((ulonglong)uStack_19 >> 0x20);
    targetHit.interactionFlags._4_4_ = 0;
    bVar2 = ESTerrainEdit_ResettingTerrain(this,targetHit,(MethodInfo *)in_stack_25);
    if (bVar2 != 0) {
      return;
    }
    if ((e != (EditorStateMachine *)0x0) &&
       (pCVar26 = (e->fields).cubeModelingStateMachine, pCVar26 != (CubeModelingStateMachine *)0x0)) {
      VStack_21.transform = (Transform *)pCVar26->klass[1]._0.image;
      VStack_21.distance = (float)&UNK_?;
      VStack_21.collider = (Collider *)pCVar26;
      (*(code *)(pCVar26->klass->vtable).Update.method)();
      if (iStack_4 == 0) {
        bVar27 = false;
      }
      else {
        pMVar28 = (this->fields).terrain;
        if (pMVar28 == (MVCubeModelPrototypeTerrain *)0x0) goto code_?;
        bVar27 = iStack_4 != (pMVar28->fields)._._._.id;
      }
      if ((bVar27 & bVar3) == 0) {
code_?:
        pMVar29 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0)
        ;
        if (pMVar29 != (MainCameraManager *)0x0) {
          if ((pMVar29->fields).isLogicRendered == 0) {
            return;
          }
          if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          bVar2 = MVInputWrapper::MVInputWrapper_GetBooleanControlDown
                            (KogamaControls__Enum_PointerSelectAlt,(MethodInfo *)0x0);
          if (bVar2 == 0) {
            return;
          }
          func_?();
          e = _UNK_?;
          bVar2 = EditModeObjectPicker::EditModeObjectPicker_Pick
                            ((VoxelHit *)&stack0xfffffed0,(HashSet_1_System_Int32_ *)0x0,-0x40005,
                             (MethodInfo *)0x0);
          if (bVar2 != 0) {
            e = in_stack_25;
          }
          pMVar29 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                             ((MethodInfo *)0x0);
          if (pMVar29 != (MainCameraManager *)0x0) {
            this_01 = (pMVar29->fields).mainCamera;
            if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            pVVar30 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
                      DefaultEventSystem+Input::DefaultEventSystem_Input_get_mousePosition
                                (&RStack_31.m_Direction,(DefaultEventSystem_Input *)0x0,
                                 in_stack_32);
            if (this_01 != (Camera *)0x0) {
              pRVar33 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenPointToRay_2
                                  (&RStack_31,this_01,*pVVar30,(MethodInfo *)0x0);
              auStack_1._44_4_ = (pRVar33->m_Origin).x;
              auStack_1._48_4_ = (pRVar33->m_Origin).y;
              auStack_1._52_4_ = (pRVar33->m_Origin).z;
              auStack_1._56_4_ = (pRVar33->m_Direction).x;
              RStack_31.m_Direction.y = (pRVar33->m_Direction).y;
              RStack_31.m_Direction.z = (pRVar33->m_Direction).z;
              iVar34 = LayerUtil::LayerUtil_GetLayerNumber(LayerFlags__Enum_Logic,(MethodInfo *)0x0)
              ;
              if ((TypeInfo__UnityEngine__Physics->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__UnityEngine__Physics);
              }
              ray.m_Origin.y = (float)auStack_1._48_4_;
              ray.m_Origin.x = (float)auStack_1._44_4_;
              ray.m_Origin.z = (float)auStack_1._52_4_;
              ray.m_Direction.x = (float)auStack_1._56_4_;
              ray.m_Direction.y = RStack_31.m_Direction.y;
              ray.m_Direction.z = RStack_31.m_Direction.z;
              UnityEngine.PhysicsModule.dll::UnityEngine::Physics::Physics_Raycast_13
                        (ray,(RaycastHit *)auStack_1,INFINITY,1 << ((byte)iVar34 & 0x1f),
                         (MethodInfo *)0x0);
              pCVar35 = UnityEngine.PhysicsModule.dll::UnityEngine::RaycastHit::
                        RaycastHit_get_collider((RaycastHit *)auStack_1,(MethodInfo *)0x0);
              if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__UnityEngine__Object);
              }
              bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                                ((Object_1 *)pCVar35,(Object_1 *)0x0,(MethodInfo *)0x0);
              if (bVar2 == 0) {
                return;
              }
              pCVar35 = UnityEngine.PhysicsModule.dll::UnityEngine::RaycastHit::
                        RaycastHit_get_collider((RaycastHit *)auStack_1,(MethodInfo *)0x0);
              if ((pCVar35 != (Collider *)0x0) &&
                 (this_04 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_gameObject((Component *)pCVar35,(MethodInfo *)0x0),
                 this_04 != (GameObject *)0x0)) {
                x = (Object_1 *)
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                    GameObject_GetComponentInChildren_1
                              (this_04,
                               LinkObjectBase_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<LinkObjectBase>__
                              );
                if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                                  (x,(Object_1 *)0x0,(MethodInfo *)0x0);
                if (bVar2 == 0) {
                  return;
                }
                fVar36 = UnityEngine.InputLegacyModule.dll::UnityEngine::Touch::Touch_get_deltaTime
                                   ((Touch *)auStack_1,(MethodInfo *)0x0);
                RStack_31.m_Direction.z = fVar36;
                if ((float)e <= fVar36) {
                  return;
                }
code_?:
                pOVar24 = (Object *)func_?();
                FSMEntity::FSMEntity_set_Event((FSMEntity *)this_02,pOVar24,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
      else {
        pCVar26 = (e->fields).cubeModelingStateMachine;
        if (pCVar26 != (CubeModelingStateMachine *)0x0) {
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pIVar37 = (pCVar26->fields)._.currentState;
          if (pIVar37 != (IState *)0x0) {
            pIVar38 = pIVar37->klass;
            if (((pIVar38->_1).naturalAligment < (TypeInfo__CubeModelTool->_1).naturalAligment) ||
               ((pIVar38->_1).typeHierarchy[(TypeInfo__CubeModelTool->_1).naturalAligment - 1] !=
                (Il2CppClass *)TypeInfo__CubeModelTool)) goto code_?;
            (*(code *)pIVar38[1]._0.parent)();
            goto code_?;
          }
        }
      }
    }
  }
  else {
    pMVar28 = (this->fields).terrain;
    if (pMVar28 != (MVCubeModelPrototypeTerrain *)0x0) {
      if ((iStack_4 == (pMVar28->fields)._._._.id) || (iStack_4 == -1)) {
        bVar2 = 0;
      }
      goto code_?;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar39 = (code *)swi(3);
  (*pcVar39)();
  return;
}


/* Void Exit(EditorStateMachine) */

void Assembly-CSharp.dll::ESTerrainEdit::ESTerrainEdit_Exit
               (ESTerrainEdit *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__get_Count__);
    cRam_? = '\x01';
  }
  MVMaterialRepository::MVMaterialRepository_set_AllowDestructibleMaterialSelection
            (0,(MethodInfo *)0x0);
  pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
  if (((pGVar1 != (GameEventManager *)0x0) &&
      (pGVar2 = (pGVar1->fields).AvatarCommandsBuildMode,
      pGVar2 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
     (this_00 = (pGVar2->fields).LaserCommands,
     this_00 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)) {
    GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
    GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_ChangeState
              (this_00,LaserPointerState__Enum_Idle,(MethodInfo *)0x0);
    if (((e != (EditorStateMachine *)0x0) &&
        (pSVar3 = (e->fields).selectionController, pSVar3 != (SelectionController *)0x0)) &&
       (pHVar4 = (pSVar3->fields).selectedIDs, pHVar4 != (HashSet_1_System_Int32_ *)0x0)) {
      if ((pHVar4->fields)._count == 0) {
        ESStateBase::ESStateBase_DeTintCurrent(unaff_ESI,(MethodInfo *)0x0);
      }
      pCVar5 = (e->fields).cubeModelingStateMachine;
      if (pCVar5 != (CubeModelingStateMachine *)0x0) {
        CubeModelingStateMachine::CubeModelingStateMachine_RemoveCursors(pCVar5,(MethodInfo *)0x0);
        pCVar5 = (e->fields).cubeModelingStateMachine;
        if ((pCVar5 != (CubeModelingStateMachine *)0x0) &&
           (this_01 = (pCVar5->fields)._TargetCubeModel_k__BackingField,
           this_01 != (MVCubeModelBase *)0x0)) {
          MVCubeModelBase::MVCubeModelBase_set_BeingEdited(this_01,0,(MethodInfo *)0x0);
          (pCVar5->fields)._TargetCubeModel_k__BackingField = (MVCubeModelBase *)0x0;
          func_?();
          unaff_ESI[1].klass = (ESStateBase__Class *)0x0;
          func_?();
          return;
        }
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Boolean ResettingTerrain(VoxelHit) */

bool Assembly-CSharp.dll::ESTerrainEdit::ESTerrainEdit_ResettingTerrain
               (ESTerrainEdit *this,VoxelHit targetHit,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVInputWrapper);
    func_?(&
                    MVCubeModelFineGrainedTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelFineGrainedTerrain>__
                   );
    func_?(&
                    MVCubeModelPrototypeTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelPrototypeTerrain>__
                   );
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVInputWrapper);
  }
  bVar1 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                    (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MVInputWrapper);
    }
    bVar1 = MVInputWrapper::MVInputWrapper_GetBooleanControlDown
                      (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return 0;
    }
  }
  if (targetHit._36_4_ == -1) {
    return 0;
  }
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar2 != (MVWorldObjectClientManager *)0x0) {
    pMVar3 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (pMVar2,targetHit._36_4_,(MethodInfo *)0x0);
    if (pMVar3 == (MVWorldObject *)0x0) {
      return 0;
    }
    if (((pMVar3->fields).type != 0x20) && ((pMVar3->fields).type != 8)) {
      return 0;
    }
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar2 != (MVWorldObjectClientManager *)0x0) {
      this_01 = (MVCubeModelPrototypeTerrain *)
                MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject
                          (pMVar2,
                           MVCubeModelPrototypeTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelPrototypeTerrain>__
                          );
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if ((pMVar2 != (MVWorldObjectClientManager *)0x0) &&
         (this_02 = (MVCubeModelFineGrainedTerrain *)
                    MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject
                              (pMVar2,
                               MVCubeModelFineGrainedTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelFineGrainedTerrain>__
                              ), this_01 != (MVCubeModelPrototypeTerrain *)0x0)) {
        bVar1 = MVCubeModelPrototypeTerrain::MVCubeModelPrototypeTerrain_get_RequiresResetToEdit
                          (this_01,(MethodInfo *)0x0);
        if (bVar1 == 0) {
          if (this_02 == (MVCubeModelFineGrainedTerrain *)0x0) goto code_?;
          bVar1 = MVCubeModelFineGrainedTerrain::
                  MVCubeModelFineGrainedTerrain_get_RequiresResetToEdit(this_02,(MethodInfo *)0x0);
          if (bVar1 == 0) {
            return 0;
          }
        }
        pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (((pMVar4 != (MVNetworkGame *)0x0) &&
            (pWVar5 = (pMVar4->fields).worldNetwork, pWVar5 != (WorldNetwork *)0x0)) &&
           (this_00 = (RuntimeEventManager *)(pWVar5->fields)._.runtimeEventManagerNetwork,
           this_00 != (RuntimeEventManager *)0x0)) {
          RuntimeEventManager::RuntimeEventManager_ResetTerrain(this_00,(MethodInfo *)0x0);
          this_03 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                              ((MethodInfo *)0x0);
          if (this_03 != (MVNetworkGame_OperationRequests *)0x0) {
            MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_RequestResetTerrain
                      (this_03,(MethodInfo *)0x0);
            return 1;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  bVar1 = (*pcVar6)();
  return bVar1;
}

