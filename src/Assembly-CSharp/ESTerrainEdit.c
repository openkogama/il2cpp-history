
/* Void Enter(EditorStateMachine) */

void Assembly-CSharp.dll::ESTerrainEdit::ESTerrainEdit_Enter
               (ESTerrainEdit *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MVCubeModelPrototypeTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelPrototypeTerrain>__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVMaterialRepository);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVMaterialRepository->static_fields->instance;
  if ((pMVar1 != (MVMaterialRepository *)0x0) &&
     ((pMVar1->fields).allowDestructibleMaterialSelection = 1, e != (EditorStateMachine *)0x0)) {
    pMVar2 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
    if (pMVar2 != (MVWorldObjectClient *)0x0) {
      this_00 = (e->fields).selectionController;
      if (this_00 == (SelectionController *)0x0) goto code_?;
      SelectionController::SelectionController_DeSelectAll(this_00,(MethodInfo *)0x0);
    }
    this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_02 != (MVWorldObjectClientManager *)0x0) {
      pMVar3 = (MVCubeModelPrototypeTerrain *)
               MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject
                         (this_02,
                          MVCubeModelPrototypeTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelPrototypeTerrain>__
                         );
      bVar4 = iRam_? != 0;
      (this->fields).terrain = pMVar3;
      if (bVar4) {
        uVar5 = (uint)((ulonglong)&(this->fields).terrain >> 0xc);
        lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
        do {
          uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
          puVar8 = (ulonglong *)(lVar6 + 0xADDR);
          LOCK();
          bVar4 = uVar7 == *puVar8;
          if (bVar4) {
            *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
          }
          UNLOCK();
        } while (!bVar4);
      }
      this_01 = (e->fields).cubeModelingStateMachine;
      if (this_01 != (CubeModelingStateMachine *)0x0) {
        CubeModelingStateMachine::CubeModelingStateMachine_StartEdit
                  (this_01,(MVCubeModelBase *)(this->fields).terrain,(IModelingConstraint *)0x0,
                   (MethodInfo *)0x0);
        pWVar9 = MVWorldObjectClientManager::
                 MVWorldObjectClientManager_GetWorldObjectClientRefNullRef((MethodInfo *)0x0);
        bVar4 = iRam_? != 0;
        (this->fields)._.tintedWo = pWVar9;
        if (bVar4) {
          uVar5 = (uint)((ulonglong)&(this->fields)._.tintedWo >> 0xc);
          lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
          do {
            uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
            puVar8 = (ulonglong *)(lVar6 + 0xADDR);
            LOCK();
            bVar4 = uVar7 == *puVar8;
            if (bVar4) {
              *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
            }
            UNLOCK();
          } while (!bVar4);
        }
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void Execute(EditorStateMachine) */

void Assembly-CSharp.dll::ESTerrainEdit::ESTerrainEdit_Execute
               (ESTerrainEdit *this,EditorStateMachine *esm,MethodInfo *method)

{
  VStack_1.interactionFlags = 0;
  VStack_1.point.x = 0.0;
  VStack_1.point.y = 0.0;
  VStack_1.point.z = 0.0;
  VStack_1.normal.x = 0.0;
  VStack_1.normal.y = 0.0;
  VStack_1.normal.z = 0.0;
  VStack_1.cubePos.x = 0;
  VStack_1.cubePos.y = 0;
  VStack_1.cubePos.z = 0;
  VStack_1._30_2_ = 0;
  VStack_1.face = 0;
  VStack_1.isCubeHit = 0;
  VStack_1._37_3_ = 0;
  VStack_1.woId = 0;
  VStack_1._44_4_ = 0;
  VStack_1.cube = (Cube *)0x0;
  VStack_1.distance = 0.0;
  VStack_1._60_4_ = 0;
  VStack_1.collider = (Collider *)0x0;
  VStack_1.transform = (Transform *)0x0;
  woPickSuccess =
       EditModeObjectPicker::EditModeObjectPicker_Pick
                 (&VStack_1,(HashSet_1_System_Int32_ *)0x0,-0x40005,(MethodInfo *)0x0);
  if (woPickSuccess != 0) {
    pMVar2 = (this->fields).terrain;
    if (pMVar2 == (MVCubeModelPrototypeTerrain *)0x0) goto code_?;
    if ((VStack_1.woId == (pMVar2->fields)._._._.id) || (VStack_1.woId == -1)) {
      woPickSuccess = 0;
    }
  }
  VStack_3.point.x = VStack_1.point.x;
  VStack_3.point.y = VStack_1.point.y;
  VStack_3.point.z = VStack_1.point.z;
  VStack_3.normal.x = VStack_1.normal.x;
  VStack_3.cube = VStack_1.cube;
  VStack_3.distance = VStack_1.distance;
  VStack_3._60_4_ = VStack_1._60_4_;
  VStack_3.normal.y = VStack_1.normal.y;
  VStack_3.normal.z = VStack_1.normal.z;
  VStack_3.cubePos = VStack_1.cubePos;
  VStack_3._30_2_ = VStack_1._30_2_;
  VStack_3.interactionFlags = VStack_1.interactionFlags;
  VStack_3.collider = VStack_1.collider;
  VStack_3.transform = VStack_1.transform;
  selectionAllowedByLogicEnabled =
       ESStateBase::ESStateBase_SelectionIsAllowedByLogicEnabled(VStack_1.woId,(MethodInfo *)0x0);
  VStack_3.point.x = VStack_1.point.x;
  VStack_3.point.y = VStack_1.point.y;
  VStack_3.point.z = VStack_1.point.z;
  VStack_3.normal.x = VStack_1.normal.x;
  VStack_3.normal.y = VStack_1.normal.y;
  VStack_3.normal.z = VStack_1.normal.z;
  VStack_3.cubePos = VStack_1.cubePos;
  VStack_3._30_2_ = VStack_1._30_2_;
  VStack_3.face = VStack_1.face;
  VStack_3.isCubeHit = VStack_1.isCubeHit;
  VStack_3._37_3_ = VStack_1._37_3_;
  VStack_3.woId = VStack_1.woId;
  VStack_3._44_4_ = VStack_1._44_4_;
  VStack_3.cube = VStack_1.cube;
  VStack_3.distance = VStack_1.distance;
  VStack_3._60_4_ = VStack_1._60_4_;
  VStack_3.collider = VStack_1.collider;
  VStack_3.transform = VStack_1.transform;
  VStack_3.interactionFlags = VStack_1.interactionFlags;
  bVar4 = ESTerrainEdit_SelectedObject
                    (this,esm,&VStack_3,woPickSuccess,selectionAllowedByLogicEnabled,
                     (MethodInfo *)0x0);
  if (bVar4 == 0) {
    VStack_3.point.x = VStack_1.point.x;
    VStack_3.point.y = VStack_1.point.y;
    VStack_3.point.z = VStack_1.point.z;
    VStack_3.normal.x = VStack_1.normal.x;
    VStack_3.normal.y = VStack_1.normal.y;
    VStack_3.normal.z = VStack_1.normal.z;
    VStack_3.cubePos = VStack_1.cubePos;
    VStack_3._30_2_ = VStack_1._30_2_;
    VStack_3.face = VStack_1.face;
    VStack_3.isCubeHit = VStack_1.isCubeHit;
    VStack_3._37_3_ = VStack_1._37_3_;
    VStack_3.woId = VStack_1.woId;
    VStack_3._44_4_ = VStack_1._44_4_;
    VStack_3.cube = VStack_1.cube;
    VStack_3.distance = VStack_1.distance;
    VStack_3._60_4_ = VStack_1._60_4_;
    VStack_3.collider = VStack_1.collider;
    VStack_3.transform = VStack_1.transform;
    VStack_3.interactionFlags = VStack_1.interactionFlags;
    bVar4 = ESTerrainEdit_ResettingTerrain(this,&VStack_3,(MethodInfo *)0x0);
    if (bVar4 == 0) {
      if ((esm == (EditorStateMachine *)0x0) ||
         (pCVar5 = (esm->fields).cubeModelingStateMachine, pCVar5 == (CubeModelingStateMachine *)0x0
         )) {
code_?:
        FUN_?();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      (*(pCVar5->klass->vtable).Update.methodPtr)(pCVar5,(pCVar5->klass->vtable).Update.method);
      if (VStack_1.woId == 0) {
        bVar7 = false;
      }
      else {
        pMVar2 = (this->fields).terrain;
        if (pMVar2 == (MVCubeModelPrototypeTerrain *)0x0) goto code_?;
        bVar7 = VStack_1.woId != (pMVar2->fields)._._._.id;
      }
      if ((bVar7 & selectionAllowedByLogicEnabled) != 0) {
        pCVar5 = (esm->fields).cubeModelingStateMachine;
        if (pCVar5 == (CubeModelingStateMachine *)0x0) goto code_?;
        CubeModelingStateMachine::CubeModelingStateMachine_set_CursorVisible
                  (pCVar5,0,(MethodInfo *)0x0);
      }
      ESTerrainEdit_SelectedObjectLink
                (this,esm,woPickSuccess,VStack_1.distance,selectionAllowedByLogicEnabled,
                 (MethodInfo *)0x0);
    }
  }
  return;
}


/* Void Exit(EditorStateMachine) */

void Assembly-CSharp.dll::ESTerrainEdit::ESTerrainEdit_Exit
               (ESTerrainEdit *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__get_Count__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVMaterialRepository);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVMaterialRepository->static_fields->instance;
  if (pMVar1 != (MVMaterialRepository *)0x0) {
    bVar2 = cRam_? == '\0';
    (pMVar1->fields).allowDestructibleMaterialSelection = 0;
    if (bVar2) {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar3 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((((pMVar3 != (MVGameControllerBase *)0x0) &&
         (pMVar4 = (pMVar3->fields).game, pMVar4 != (MVNetworkGame *)0x0)) &&
        (pGVar5 = (pMVar4->fields).GameEventManager, pGVar5 != (GameEventManager *)0x0)) &&
       ((pGVar6 = (pGVar5->fields).AvatarCommandsBuildMode,
        pGVar6 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0 &&
        (pGVar7 = (pGVar6->fields).LaserCommands,
        pGVar7 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)))) {
      pAVar8 = (pGVar7->fields).OnChangeState;
      if (pAVar8 != (Action_1_LaserPointerState_ *)0x0) {
        (*(pAVar8->fields)._._.invoke_impl)
                  ((pAVar8->fields)._._.method_code,0,(pAVar8->fields)._._.method);
      }
      if (((e != (EditorStateMachine *)0x0) &&
          (pSVar9 = (e->fields).selectionController, pSVar9 != (SelectionController *)0x0)) &&
         (pHVar10 = (pSVar9->fields).selectedIDs, pHVar10 != (HashSet_1_System_Int32_ *)0x0)) {
        if ((pHVar10->fields)._count == 0) {
          ESStateBase::ESStateBase_DeTintCurrent((ESStateBase *)this,(MethodInfo *)0x0);
        }
        pCVar11 = (e->fields).cubeModelingStateMachine;
        if (pCVar11 != (CubeModelingStateMachine *)0x0) {
          CubeModelingStateMachine::CubeModelingStateMachine_RemoveCursors
                    (pCVar11,(MethodInfo *)0x0);
          pCVar11 = (e->fields).cubeModelingStateMachine;
          if (pCVar11 != (CubeModelingStateMachine *)0x0) {
            CubeModelingStateMachine::CubeModelingStateMachine_EndEdit(pCVar11,(MethodInfo *)0x0);
            bVar2 = iRam_? != 0;
            (this->fields).terrain = (MVCubeModelPrototypeTerrain *)0x0;
            if (bVar2) {
              uVar12 = (uint)((ulonglong)&(this->fields).terrain >> 0xc);
              puVar13 = (ulonglong *)((ulonglong)((uVar12 & 0x1fffff) >> 6) * 8 + 0xADDR);
              do {
                uVar14 = *puVar13;
                LOCK();
                uVar15 = *puVar13;
                if (uVar14 == uVar15) {
                  *puVar13 = uVar14 | 1L << (uVar12 & 0x3f);
                }
                UNLOCK();
              } while (uVar14 != uVar15);
            }
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Boolean ResettingTerrain(VoxelHit) */

bool Assembly-CSharp.dll::ESTerrainEdit::ESTerrainEdit_ResettingTerrain
               (ESTerrainEdit *this,VoxelHit *targetHit,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MVCubeModelFineGrainedTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelFineGrainedTerrain>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MVCubeModelPrototypeTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelPrototypeTerrain>__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  bVar1 = MVInputWrapper::MVInputWrapper_GetBooleanControl_1
                    (KogamaControls__Enum_PointerSelect,KeyState__Enum_Up,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVInputWrapper);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    bVar1 = MVInputWrapper::MVInputWrapper_GetBooleanControl_1
                      (KogamaControls__Enum_PointerSelect,KeyState__Enum_Down,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return 0;
    }
  }
  if (targetHit->woId == -1) {
    return 0;
  }
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar2 != (MVWorldObjectClientManager *)0x0) {
    pMVar3 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                       (pMVar2,targetHit->woId,(MethodInfo *)0x0);
    if (pMVar3 == (MVWorldObjectClient *)0x0) {
      return 0;
    }
    if (((pMVar3->fields)._.type != 0x20) && ((pMVar3->fields)._.type != 8)) {
      return 0;
    }
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar2 != (MVWorldObjectClientManager *)0x0) {
      pOVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject
                         (pMVar2,
                          MVCubeModelPrototypeTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelPrototypeTerrain>__
                         );
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if ((pMVar2 != (MVWorldObjectClientManager *)0x0) &&
         (pOVar5 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject
                              (pMVar2,
                               MVCubeModelFineGrainedTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelFineGrainedTerrain>__
                              ), pOVar4 != (Object *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_MV::WorldObject::CubeBase>__get_Count__
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pOVar6 = pOVar4[0x18].klass;
        if (pOVar6 != (Object__Class *)0x0) {
          if ((pOVar6->_0).byval_arg.data.__klassIndex - *(int *)&(pOVar6->_0).byval_arg.attrs < 1)
          {
            if ((pOVar5 == (Object *)0x0) || (pOVar5[0x14].klass == (Object__Class *)0x0))
            goto code_?;
            iVar7 = RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_get_CubeCount
                              ((RuntimePrototypeCubeModel *)pOVar5[0x14].klass,(MethodInfo *)0x0);
            if (iVar7 < 1) {
              return 0;
            }
          }
          pMVar8 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (((pMVar8 != (MVNetworkGame *)0x0) &&
              (pWVar9 = (pMVar8->fields).worldNetwork, pWVar9 != (WorldNetwork *)0x0)) &&
             (this_00 = (RuntimeEventManager *)(pWVar9->fields)._.runtimeEventManagerNetwork,
             this_00 != (RuntimeEventManager *)0x0)) {
            RuntimeEventManager::RuntimeEventManager_ResetTerrain(this_00,(MethodInfo *)0x0);
            pMVar10 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                ((MethodInfo *)0x0);
            if (pMVar10 != (MVNetworkGame_OperationRequests *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&
                              MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                             );
                LOCK();
                UNLOCK();
                FUN_?(&
                              TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                             );
                LOCK();
                UNLOCK();
                FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              this_01 = (Dictionary_2_System_Byte_System_Object_ *)
                        FUN_?(
                                     TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                                     );
              pMVar11 = 
              MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              ;
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]
              ::Dictionary_2_System_Byte_System_Object___ctor
                        (this_01,
                         MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                        );
              pPVar12 = (pMVar10->fields).peer;
              if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
                FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
              }
              if (pPVar12 != (PhotonPeer *)0x0) {
                (*(pPVar12->klass->vtable).SendOperation.methodPtr)
                          (pPVar12,CONCAT71((int7)((ulonglong)pMVar11 >> 8),0x36),this_01,
                           TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->
                           SendReliable,(pPVar12->klass->vtable).SendOperation.method);
                return 1;
              }
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar13 = (code *)swi(3);
  bVar1 = (*pcVar13)();
  return bVar1;
}


/* Boolean SelectedObject(EditorStateMachine, VoxelHit, Boolean, Boolean) */

bool Assembly-CSharp.dll::ESTerrainEdit::ESTerrainEdit_SelectedObject
               (ESTerrainEdit *this,EditorStateMachine *esm,VoxelHit *targetHit,bool woPickSuccess,
               bool selectionAllowedByLogicEnabled,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__EditorEvent);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
    VStack_1.point.x = (targetHit->point).x;
    VStack_1.point.y = (targetHit->point).y;
    VStack_1._8_8_ = *(undefined8 *)&(targetHit->point).z;
    VStack_1.normal.y = (targetHit->normal).y;
    VStack_1.normal.z = (targetHit->normal).z;
    VStack_1.cubePos = targetHit->cubePos;
    VStack_1._30_2_ = *(undefined2 *)&targetHit->field_0x1e;
    VStack_1.face = targetHit->face;
    VStack_1.isCubeHit = targetHit->isCubeHit;
    VStack_1._37_3_ = *(undefined3 *)&targetHit->field_0x25;
    VStack_1.woId = targetHit->woId;
    VStack_1._44_4_ = *(undefined4 *)&targetHit->field_0x2c;
    VStack_1.cube = targetHit->cube;
    VStack_1.distance = targetHit->distance;
    VStack_1._60_4_ = *(undefined4 *)&targetHit->field_0x3c;
    VStack_1.collider = targetHit->collider;
    VStack_1.transform = targetHit->transform;
    VStack_1.interactionFlags = targetHit->interactionFlags;
    ESStateBase::ESStateBase_TintObjectsOnMouseOver_1
              ((ESStateBase *)this,esm,woPickSuccess & selectionAllowedByLogicEnabled,&VStack_1,
               (MethodInfo *)0x0);
  }
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  bVar2 = MVInputWrapper::MVInputWrapper_GetBooleanControl_1
                    (KogamaControls__Enum_PointerSelect,KeyState__Enum_Down,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVInputWrapper);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    bVar2 = MVInputWrapper::MVInputWrapper_GetBooleanControl_1
                      (KogamaControls__Enum_PointerSelectAlt,KeyState__Enum_Down,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      return 0;
    }
  }
  if (selectionAllowedByLogicEnabled != 0) {
    if (esm == (EditorStateMachine *)0x0) {
      FUN_?();
      pcVar3 = (code *)swi(3);
      bVar2 = (*pcVar3)();
      return bVar2;
    }
    pWVar4 = EditorStateMachine::EditorStateMachine_Select(esm,0,-5,(MethodInfo *)0x0);
    if ((pWVar4 != (WorldObjectClientRef *)0x0) && (lVar5 = FUN_?(pWVar4), lVar5 != 0)) {
      auStack_6[0] = 0xc;
      value = (Object *)FUN_?(TypeInfo__EditorEvent,auStack_6);
      FSMEntity::FSMEntity_set_Event((FSMEntity *)esm,value,(MethodInfo *)0x0);
      return 1;
    }
  }
  return 0;
}


/* Boolean SelectedObjectLink(EditorStateMachine, Boolean, Single, Boolean) */

bool Assembly-CSharp.dll::ESTerrainEdit::ESTerrainEdit_SelectedObjectLink
               (ESTerrainEdit *this,EditorStateMachine *esm,bool didHitObject,float hitDistance,
               bool selectionAllowedByLogicEnabled,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__EditorEvent);
    LOCK();
    UNLOCK();
    FUN_?(&
                  LinkObjectBase_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<LinkObjectBase>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  aRStack_1[0].m_UV.x = 0.0;
  aRStack_1[0].m_UV.y = 0.0;
  aRStack_1[0].m_Point.x = 0.0;
  aRStack_1[0].m_Point.y = 0.0;
  aRStack_1[0].m_Point.z = 0.0;
  aRStack_1[0].m_Normal.x = 0.0;
  aRStack_1[0].m_Collider = 0;
  aRStack_1[0].m_Normal.y = 0.0;
  aRStack_1[0].m_Normal.z = 0.0;
  aRStack_1[0].m_FaceID = 0;
  aRStack_1[0].m_Distance = 0.0;
  if (selectionAllowedByLogicEnabled != 0) {
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if (pMVar2 == (MainCameraManager *)0x0) {
code_?:
      FUN_?();
      pcVar3 = (code *)swi(3);
      bVar4 = (*pcVar3)();
      return bVar4;
    }
    if ((pMVar2->fields).isLogicRendered != 0) {
      if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVInputWrapper);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
        FUN_?();
      }
      bVar4 = MVInputWrapper::MVInputWrapper_GetBooleanControl_1
                        (KogamaControls__Enum_PointerSelectAlt,KeyState__Enum_Down,(MethodInfo *)0x0
                        );
      if (bVar4 != 0) {
        if (didHitObject == 0) {
          hitDistance = _UNK_?;
        }
        pMVar2 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0)
        ;
        if (pMVar2 != (MainCameraManager *)0x0) {
          this_00 = (pMVar2->fields).mainCamera;
          if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
            FUN_?();
          }
          RStack_5.m_Origin.x = 0.0;
          RStack_5.m_Origin.y = 0.0;
          RStack_5.m_Origin.z = 0.0;
          pcVar3 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
            uVar6 = func_?(&UNK_?);
            FUN_?(uVar6,0);
            pcVar3 = (code *)swi(3);
            bVar4 = (*pcVar3)();
            return bVar4;
          }
          pcRam_? = pcVar3;
          (*pcRam_?)(&RStack_5);
          if (this_00 != (Camera *)0x0) {
            RStack_7.m_Origin.x = RStack_5.m_Origin.x;
            RStack_7.m_Origin.y = RStack_5.m_Origin.y;
            RStack_7.m_Origin.z = RStack_5.m_Origin.z;
            pRVar8 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenPointToRay_2
                               (&RStack_5,this_00,&RStack_7.m_Origin,(MethodInfo *)0x0);
            uVar9._0_4_ = (pRVar8->m_Origin).x;
            uVar9._4_4_ = (pRVar8->m_Origin).y;
            uVar10 = *(undefined8 *)&(pRVar8->m_Origin).z;
            uVar6._0_4_ = (pRVar8->m_Direction).y;
            uVar6._4_4_ = (pRVar8->m_Direction).z;
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Debug);
              LOCK();
              UNLOCK();
              FUN_?();
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            uVar11 = 0x800;
            bVar12 = 0;
            do {
              bVar12 = bVar12 + 1;
              uVar11 = (int)uVar11 >> 1;
            } while ((uVar11 & 1) == 0);
            if (*(int *)&(TypeInfo__UnityEngine__Physics->_1).field_0x1c == 0) {
              FUN_?();
            }
            RStack_7.m_Origin._0_8_ = uVar9;
            RStack_7._8_8_ = uVar10;
            RStack_7.m_Direction._4_8_ = uVar6;
            UnityEngine.PhysicsModule.dll::UnityEngine::Physics::Physics_Raycast_13
                      (&RStack_7,aRStack_1,_UNK_?,1 << (bVar12 & 0x1f),(MethodInfo *)0x0);
            pCVar13 = UnityEngine.PhysicsModule.dll::UnityEngine::RaycastHit::RaycastHit_get_collider
                               (aRStack_1,(MethodInfo *)0x0);
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
            if (pCVar13 == (Collider *)0x0) {
              return 0;
            }
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            if ((pCVar13->fields)._._.m_CachedPtr == (void *)0x0) {
              return 0;
            }
            if (hitDistance <= aRStack_1[0].m_Distance) {
              return 0;
            }
            pCVar13 = UnityEngine.PhysicsModule.dll::UnityEngine::RaycastHit::RaycastHit_get_collider
                               (aRStack_1,(MethodInfo *)0x0);
            if ((pCVar13 != (Collider *)0x0) &&
               (pGVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_get_gameObject((Component *)pCVar13,(MethodInfo *)0x0),
               pGVar14 != (GameObject *)0x0)) {
              lVar15 = FUN_?(pGVar14);
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
              if (lVar15 == 0) {
                return 0;
              }
              if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                FUN_?();
              }
              if (*(longlong *)(lVar15 + 0x10) == 0) {
                return 0;
              }
              _selectionAllowedByLogicEnabled = 0xc;
              value = (Object *)FUN_?(TypeInfo__EditorEvent,&selectionAllowedByLogicEnabled)
              ;
              if (esm != (EditorStateMachine *)0x0) {
                FSMEntity::FSMEntity_set_Event((FSMEntity *)esm,value,(MethodInfo *)0x0);
                return 1;
              }
            }
          }
        }
        goto code_?;
      }
    }
  }
  return 0;
}

