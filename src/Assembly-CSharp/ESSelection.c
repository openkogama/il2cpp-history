
/* Boolean CheckAndExecuteOnClickHandler(EditorStateMachine,
   ESSelection+PickResult`1[WorldObjectClientRef]) */

bool Assembly-CSharp.dll::ESSelection::ESSelection_CheckAndExecuteOnClickHandler
               (ESSelection *this,EditorStateMachine *e,
               ESSelection_PickResult_1_WorldObjectClientRef_ *pick,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__;
  if (((pick != (ESSelection_PickResult_1_WorldObjectClientRef_ *)0x0) &&
      (pWVar2 = (pick->fields).data, pWVar2 != (WorldObjectClientRef *)0x0)) &&
     (pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0),
     pMVar3 != (MVWorldObjectClientManager *)0x0)) {
    pOVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient_1
                       (pMVar3,(pWVar2->fields)._.woId,pMVar1->klass->rgctx_data[1].method);
    pMVar1 = MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__;
    if (pOVar4 == (Object *)0x0) {
      return 0;
    }
    pWVar2 = (pick->fields).data;
    if (((pWVar2 != (WorldObjectClientRef *)0x0) &&
        (pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0),
        pMVar3 != (MVWorldObjectClientManager *)0x0)) &&
       (pOVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient_1
                           (pMVar3,(pWVar2->fields)._.woId,pMVar1->klass->rgctx_data[1].method),
       pOVar4 != (Object *)0x0)) {
      pOVar5 = pOVar4->klass;
      uVar6._0_4_ = pOVar5[3]._1.instance_size;
      uVar6._4_4_ = pOVar5[3]._1.actualSize;
      bVar7 = (*(code *)pOVar5[3]._1.genericContainerHandle)
                        (pOVar4,e,(pick->fields).hit.collider,uVar6);
      return bVar7;
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  bVar7 = (*pcVar8)();
  return bVar7;
}


/* Void DeselectAll(EditorStateMachine) */

void Assembly-CSharp.dll::ESSelection::ESSelection_DeselectAll
               (ESSelection *this,EditorStateMachine *e,MethodInfo *method)

{
  if ((e != (EditorStateMachine *)0x0) &&
     (this_00 = (e->fields).selectionController, this_00 != (SelectionController *)0x0)) {
    SelectionController::SelectionController_DeSelectAll(this_00,(MethodInfo *)0x0);
    pGVar1 = (this->fields).gizmoController;
    if (pGVar1 != (GizmoController *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pGVar2 = (pGVar1->fields).gizmoMenuNgInstance;
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
      if (pGVar2 != (GizmoMenuNg *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((pGVar2->fields)._._._._.m_CachedPtr != (void *)0x0) {
          pGVar2 = (pGVar1->fields).gizmoMenuNgInstance;
          if (pGVar2 == (GizmoMenuNg *)0x0) goto code_?;
          UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoMenuNg::GizmoMenuNg_Pop
                    (pGVar2,(MethodInfo *)0x0);
        }
      }
      return;
    }
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Enter(EditorStateMachine) */

void Assembly-CSharp.dll::ESSelection::ESSelection_Enter
               (ESSelection *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__ESSelection__SelectionController_SelectedWorldObjectDeletedHandler_System__Object__WorldObjectDestroyedEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__EditorEvent);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__EventHandler<WorldObjectDestroyedEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ISelectionController);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__ESSelection__PickResult<WorldObjectClientRef>__PickResult_UnityEngine__Vector3__VoxelHit__WorldObjectClientRef_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__ESSelection__PickResult<LinkObjectBase>__PickResult_UnityEngine__Vector3__VoxelHit__LinkObjectBase_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ESSelection__PickResult<LinkObjectBase>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ESSelection__PickResult<WorldObjectClientRef>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SharedCubeFunctions);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_FromTranslateState);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (e != (EditorStateMachine *)0x0) {
    pMVar1 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
    if (pMVar1 == (MVWorldObjectClient *)0x0) {
      bVar2 = false;
    }
    else {
      pMVar1 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
      if (pMVar1 == (MVWorldObjectClient *)0x0) goto code_?;
      bVar2 = ((pMVar1->fields).interactionFlags & 8) != 0;
    }
    this_05 = (ESSelection_PickResult_1_LinkObjectBase_ *)0x0;
    this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
               *)(e->fields)._.data;
    if (this_00 !=
        (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)
        0x0) {
      iVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::StyleComplexSelector+PseudoStateData]::
              Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                        (this_00,(Object *)StringLiteral_FromTranslateState,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                         ->klass->rgctx_data[0x21].method);
      if (-1 < iVar3) {
        bVar4 = EditorStateMachine::EditorStateMachine_get_ParentGroupIsRoot(e,(MethodInfo *)0x0);
        if (bVar4 != 0) {
          ESSelection_DeselectAll(this,e,(MethodInfo *)0x0);
          iStackX_10 = CONCAT44(iStackX_10._4_4_,0x2f);
          pOVar5 = (Object *)FUN_?(TypeInfo__EditorEvent,&iStackX_10);
          FSMEntity::FSMEntity_set_Event((FSMEntity *)e,pOVar5,(MethodInfo *)0x0);
          return;
        }
        if (bVar2) {
          pMVar6 = EditorStateMachine::EditorStateMachine_get_ParentGroup(e,(MethodInfo *)0x0);
          if ((pMVar6 == (MVGroup *)0x0) ||
             (this_01 = (pMVar6->fields)._.gameObject, this_01 == (GameObject *)0x0))
          goto code_?;
          t = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (this_01,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
            FUN_?();
          }
          SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively(t,0,(MethodInfo *)0x0);
          EditorStateMachine::EditorStateMachine_ExitGroup(e,(MethodInfo *)0x0);
          bVar4 = EditorStateMachine::EditorStateMachine_get_ParentGroupIsRoot(e,(MethodInfo *)0x0);
          if (bVar4 != 0) {
            iStackX_10 = CONCAT44(iStackX_10._4_4_,0x2f);
            pOVar5 = (Object *)FUN_?(TypeInfo__EditorEvent,&iStackX_10);
            FSMEntity::FSMEntity_set_Event((FSMEntity *)e,pOVar5,(MethodInfo *)0x0);
          }
        }
      }
      bVar7 = iRam_? != 0;
      (this->fields).editorStateMachine = e;
      if (bVar7) {
        uVar8 = (uint)((ulonglong)&(this->fields).editorStateMachine >> 0xc);
        lVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
        do {
          uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
          puVar11 = (ulonglong *)(lVar9 + 0xADDR);
          LOCK();
          bVar7 = uVar10 == *puVar11;
          if (bVar7) {
            *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
          }
          UNLOCK();
        } while (!bVar7);
      }
      pEVar12 = (this->fields).editorStateMachine;
      if (pEVar12 != (EditorStateMachine *)0x0) {
        pSVar13 = (pEVar12->fields).selectionController;
        this_03 = (UnityAction_2_System_Object_System_Object_ *)
                  FUN_?(TypeInfo__System__EventHandler<WorldObjectDestroyedEventArgs>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  (this_03,(Object *)this,
                   MethodInfo__ESSelection__SelectionController_SelectedWorldObjectDeletedHandler_System__Object__WorldObjectDestroyedEventArgs_
                   ,(MethodInfo *)0x0);
        if (pSVar13 != (SelectionController *)0x0) {
          FUN_?(0);
          bVar4 = EditorStateMachine::EditorStateMachine_get_ParentGroupIsRoot(e,(MethodInfo *)0x0);
          if ((bVar4 == 0) && (!bVar2)) {
            this_02 = (e->fields).weCamera;
            if (this_02 == (MainCameraManager *)0x0) goto code_?;
            MainCameraManager::MainCameraManager_set_BlueModeEnabled(this_02,1,(MethodInfo *)0x0);
          }
          VStack_14.interactionFlags = 0;
          VStack_14.point.x = 0.0;
          VStack_14.point.y = 0.0;
          VStack_14.point.z = 0.0;
          VStack_14.normal.x = 0.0;
          VStack_14.normal.y = 0.0;
          VStack_14.normal.z = 0.0;
          VStack_14.cubePos.x = 0;
          VStack_14.cubePos.y = 0;
          VStack_14.cubePos.z = 0;
          VStack_14._30_2_ = 0;
          VStack_14.face = 0;
          VStack_14.isCubeHit = 0;
          VStack_14._37_3_ = 0;
          VStack_14.woId = 0;
          VStack_14._44_4_ = 0;
          VStack_14.cube = (Cube *)0x0;
          VStack_14.distance = 0.0;
          VStack_14._60_4_ = 0;
          VStack_14.collider = (Collider *)0x0;
          VStack_14.transform = (Transform *)0x0;
          bVar4 = EditModeObjectPicker::EditModeObjectPicker_Pick
                            (&VStack_14,(HashSet_1_System_Int32_ *)0x0,-0x40005,(MethodInfo *)0x0);
          if (bVar4 != 0) {
            if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
              FUN_?();
            }
            VStack_15.x = 0.0;
            VStack_15.y = 0.0;
            VStack_15.z = 0.0;
            pcVar16 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar16 = (code *)FUN_?(&UNK_?), pcVar16 == (code *)0x0)) {
              uVar17 = func_?(&UNK_?);
              FUN_?(uVar17,0);
              pcVar16 = (code *)swi(3);
              (*pcVar16)();
              return;
            }
            pcRam_? = pcVar16;
            (*pcRam_?)();
            pCStack_18 = (Collider *)VStack_14.point._0_8_;
            pTStack_19 = (Transform *)VStack_14._8_8_;
            pCStack_20 = (Cube *)VStack_14.normal._4_8_;
            _fStack_c0 = VStack_14.cubePos;
            uStack_21._2_2_ = VStack_14._30_2_;
            iStack_22 = VStack_14.face;
            bStack_23 = VStack_14.isCubeHit;
            uStack_24 = VStack_14._37_3_;
            iStack_25 = VStack_14.woId;
            uStack_26 = VStack_14._44_4_;
            pCStack_27 = VStack_14.cube;
            fStack_28 = VStack_14.distance;
            uStack_29 = VStack_14._60_4_;
            pCStack_30 = VStack_14.collider;
            pTStack_31 = VStack_14.transform;
            iStackX_10 = VStack_14.interactionFlags;
            pMVar32 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
            VStack_33.point.x = VStack_14.point.x;
            VStack_33.point.y = VStack_14.point.y;
            VStack_33.point.z = VStack_14.point.z;
            VStack_33.normal.x = VStack_14.normal.x;
            VStack_33.cube = VStack_14.cube;
            VStack_33.distance = VStack_14.distance;
            VStack_33._60_4_ = VStack_14._60_4_;
            VStack_33.normal.y = VStack_14.normal.y;
            VStack_33.normal.z = VStack_14.normal.z;
            VStack_33.cubePos = VStack_14.cubePos;
            VStack_33._30_2_ = VStack_14._30_2_;
            VStack_33.interactionFlags = VStack_14.interactionFlags;
            VStack_33.collider = VStack_14.collider;
            VStack_33.transform = VStack_14.transform;
            if (pMVar32 == (MVWorldObjectClientManager *)0x0) goto code_?;
            pWVar34 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRef
                                (pMVar32,VStack_14.woId,(MethodInfo *)0x0);
            this_04 = (ESSelection_PickResult_1_WorldObjectClientRef_ *)
                      FUN_?(TypeInfo__ESSelection__PickResult<WorldObjectClientRef>);
            VStack_33._8_8_ = pTStack_19;
            pTStack_19 = (Transform *)CONCAT44(pTStack_19._4_4_,VStack_15.z);
            VStack_33.point._0_8_ = pCStack_18;
            VStack_33.normal._4_8_ = pCStack_20;
            VStack_33.cubePos = _fStack_c0;
            VStack_33._30_2_ = uStack_21._2_2_;
            VStack_33.face = iStack_22;
            VStack_33.isCubeHit = bStack_23;
            VStack_33._37_3_ = uStack_24;
            VStack_33.woId = iStack_25;
            VStack_33._44_4_ = uStack_26;
            VStack_33.cube = pCStack_27;
            VStack_33.distance = fStack_28;
            VStack_33._60_4_ = uStack_29;
            VStack_33.collider = pCStack_30;
            VStack_33.transform = pTStack_31;
            pCStack_18 = (Collider *)VStack_15._0_8_;
            VStack_33.interactionFlags = iStackX_10;
            ESSelection+PickResult`1[System::Object]::ESSelection_PickResult_1_System_Object___ctor
                      ((ESSelection_PickResult_1_System_Object_ *)this_04,(Vector3 *)&pCStack_18,
                       &VStack_33,(Object *)pWVar34,
                       MethodInfo__ESSelection__PickResult<WorldObjectClientRef>__PickResult_UnityEngine__Vector3__VoxelHit__WorldObjectClientRef_
                      );
            bVar2 = iRam_? != 0;
            (this->fields).pickedTarget = this_04;
            if (bVar2) {
              uVar8 = (uint)((ulonglong)&(this->fields).pickedTarget >> 0xc);
              lVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
              do {
                uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
                puVar11 = (ulonglong *)(lVar9 + 0xADDR);
                LOCK();
                bVar2 = uVar10 == *puVar11;
                if (bVar2) {
                  *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
                }
                UNLOCK();
              } while (!bVar2);
            }
            pMVar1 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO
                               (e,(MethodInfo *)0x0);
            if (pMVar1 == (MVWorldObjectClient *)0x0) {
              pWVar34 = MVWorldObjectClientManager::
                        MVWorldObjectClientManager_GetWorldObjectClientRefNullRef((MethodInfo *)0x0)
              ;
              bVar2 = iRam_? != 0;
              (this->fields).selectedWorldObject = pWVar34;
              if (bVar2) {
                uVar8 = (uint)((ulonglong)&(this->fields).selectedWorldObject >> 0xc);
                lVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
                do {
                  uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
                  puVar11 = (ulonglong *)(lVar9 + 0xADDR);
                  LOCK();
                  bVar2 = uVar10 == *puVar11;
                  if (bVar2) {
                    *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar2);
              }
            }
            else {
              pMVar32 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
              pMVar1 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO
                                 (e,(MethodInfo *)0x0);
              if ((pMVar1 == (MVWorldObjectClient *)0x0) ||
                 (pMVar32 == (MVWorldObjectClientManager *)0x0)) goto code_?;
              pWVar34 = MVWorldObjectClientManager::
                        MVWorldObjectClientManager_GetWorldObjectClientRef
                                  (pMVar32,(pMVar1->fields)._.id,(MethodInfo *)0x0);
              bVar2 = iRam_? != 0;
              (this->fields).selectedWorldObject = pWVar34;
              if (bVar2) {
                uVar8 = (uint)((ulonglong)&(this->fields).selectedWorldObject >> 0xc);
                lVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
                do {
                  uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
                  puVar11 = (ulonglong *)(lVar9 + 0xADDR);
                  LOCK();
                  bVar2 = uVar10 == *puVar11;
                  if (bVar2) {
                    *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar2);
              }
            }
          }
          data = ESSelection_GetLinkHit(this,e,&VStack_14,(MethodInfo *)0x0);
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
          if (data != (LinkObjectBase *)0x0) {
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            if ((data->fields)._._._._.m_CachedPtr != (void *)0x0) {
              if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
                FUN_?();
              }
              VStack_15.x = 0.0;
              VStack_15.y = 0.0;
              VStack_15.z = 0.0;
              pcVar16 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar16 = (code *)FUN_?(&UNK_?), pcVar16 == (code *)0x0)) {
                uVar17 = func_?(&UNK_?);
                FUN_?(uVar17,0);
                pcVar16 = (code *)swi(3);
                (*pcVar16)();
                return;
              }
              pcRam_? = pcVar16;
              (*pcRam_?)(&VStack_15);
              pCStack_30 = (Collider *)VStack_14.point._0_8_;
              pTStack_31 = (Transform *)VStack_14._8_8_;
              pCStack_27 = (Cube *)VStack_14.normal._4_8_;
              _fStack_a0 = VStack_14.cubePos;
              uStack_29._2_2_ = VStack_14._30_2_;
              iStack_22 = VStack_14.face;
              bStack_23 = VStack_14.isCubeHit;
              uStack_24 = VStack_14._37_3_;
              iStack_25 = VStack_14.woId;
              uStack_26 = VStack_14._44_4_;
              pCStack_20 = VStack_14.cube;
              fStack_35 = VStack_14.distance;
              uStack_21 = VStack_14._60_4_;
              pCStack_18 = VStack_14.collider;
              pTStack_19 = VStack_14.transform;
              iStackX_10 = VStack_14.interactionFlags;
              this_05 = (ESSelection_PickResult_1_LinkObjectBase_ *)
                        FUN_?(TypeInfo__ESSelection__PickResult<LinkObjectBase>);
              VStack_33.transform = pTStack_19;
              VStack_33.point._0_8_ = pCStack_30;
              VStack_33._8_8_ = pTStack_31;
              VStack_33.normal._4_8_ = pCStack_27;
              VStack_33.cubePos = _fStack_a0;
              VStack_33._30_2_ = uStack_29._2_2_;
              VStack_33.face = iStack_22;
              VStack_33.isCubeHit = bStack_23;
              VStack_33._37_3_ = uStack_24;
              VStack_33.woId = iStack_25;
              VStack_33._44_4_ = uStack_26;
              pTStack_19 = (Transform *)CONCAT44(pTStack_19._4_4_,VStack_15.z);
              VStack_33.collider = pCStack_18;
              VStack_33.interactionFlags = iStackX_10;
              pCStack_18 = (Collider *)VStack_15._0_8_;
              VStack_33.cube = pCStack_20;
              VStack_33.distance = fStack_35;
              VStack_33._60_4_ = uStack_21;
              ESSelection+PickResult`1[System::Object]::
              ESSelection_PickResult_1_System_Object___ctor
                        ((ESSelection_PickResult_1_System_Object_ *)this_05,(Vector3 *)&pCStack_18,
                         &VStack_33,(Object *)data,
                         MethodInfo__ESSelection__PickResult<LinkObjectBase>__PickResult_UnityEngine__Vector3__VoxelHit__LinkObjectBase_
                        );
            }
          }
          bVar2 = iRam_? != 0;
          (this->fields).pickedLink = this_05;
          if (bVar2) {
            uVar8 = (uint)((ulonglong)&(this->fields).pickedLink >> 0xc);
            lVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
            do {
              uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
              puVar11 = (ulonglong *)(lVar9 + 0xADDR);
              LOCK();
              bVar2 = uVar10 == *puVar11;
              if (bVar2) {
                *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
              }
              UNLOCK();
            } while (!bVar2);
          }
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Boolean EnterObject(EditorStateMachine, MVWorldObjectClient) */

bool Assembly-CSharp.dll::ESSelection::ESSelection_EnterObject
               (ESSelection *this,EditorStateMachine *e,MVWorldObjectClient *selectedWo,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_EnterObject);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_EnterObject,(MethodInfo *)0x0);
  if (selectedWo != (MVWorldObjectClient *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    bVar1 = (*(selectedWo->klass->vtable).OnEnterObject.methodPtr)
                      (selectedWo,e,(selectedWo->klass->vtable).OnEnterObject.method);
    return bVar1;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* Void Execute(EditorStateMachine) */

void Assembly-CSharp.dll::ESSelection::ESSelection_Execute
               (ESSelection *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).contextMenuController;
  if (pCVar1 != (ContextMenuController *)0x0) {
    if ((pCVar1->fields).rightClickGizmoSelect == 0) {
      pGVar2 = (this->fields).gizmoController;
      if (pGVar2 == (GizmoController *)0x0) goto code_?;
      if ((pGVar2->fields).ignoreSelectionOnce == 0) {
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
        bVar3 = MVInputWrapper::MVInputWrapper_GetBooleanControl_1
                          (KogamaControls__Enum_DeleteObject,KeyState__Enum_Down,(MethodInfo *)0x0);
        if (bVar3 == 0) {
          if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
            FUN_?();
          }
          bVar3 = MVInputWrapper::MVInputWrapper_GetBooleanControlDown
                            (KogamaControls__Enum_LeaveObject,(MethodInfo *)0x0);
          if (bVar3 == 0) {
            VStack_4.interactionFlags = 0;
            VStack_4.point.x = 0.0;
            VStack_4.point.y = 0.0;
            VStack_4.point.z = 0.0;
            VStack_4.normal.x = 0.0;
            VStack_4.normal.y = 0.0;
            VStack_4.normal.z = 0.0;
            VStack_4.cubePos.x = 0;
            VStack_4.cubePos.y = 0;
            VStack_4.cubePos.z = 0;
            VStack_4._30_2_ = 0;
            VStack_4.face = 0;
            VStack_4.isCubeHit = 0;
            VStack_4._37_3_ = 0;
            VStack_4.woId = 0;
            VStack_4._44_4_ = 0;
            VStack_4.cube = (Cube *)0x0;
            VStack_4.distance = 0.0;
            VStack_4._60_4_ = 0;
            VStack_4.collider = (Collider *)0x0;
            VStack_4.transform = (Transform *)0x0;
            bVar3 = EditModeObjectPicker::EditModeObjectPicker_Pick
                              (&VStack_4,(HashSet_1_System_Int32_ *)0x0,-0x40005,(MethodInfo *)0x0)
            ;
            if (bVar3 != 0) {
              this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
              VStack_5.point.x = VStack_4.point.x;
              VStack_5.point.y = VStack_4.point.y;
              VStack_5.point.z = VStack_4.point.z;
              VStack_5.normal.x = VStack_4.normal.x;
              VStack_5.cube = VStack_4.cube;
              VStack_5.distance = VStack_4.distance;
              VStack_5._60_4_ = VStack_4._60_4_;
              VStack_5.normal.y = VStack_4.normal.y;
              VStack_5.normal.z = VStack_4.normal.z;
              VStack_5.cubePos = VStack_4.cubePos;
              VStack_5._30_2_ = VStack_4._30_2_;
              VStack_5.interactionFlags = VStack_4.interactionFlags;
              VStack_5.collider = VStack_4.collider;
              VStack_5.transform = VStack_4.transform;
              if (this_00 == (MVWorldObjectClientManager *)0x0) goto code_?;
              bVar6 = MVWorldObjectClientManager::MVWorldObjectClientManager_IsType
                                (this_00,VStack_4.woId,
                                 WorldObjectType__Enum_CubeModelPrototypeTerrain,(MethodInfo *)0x0);
              if ((bVar6 != 0) || (VStack_4.woId == -1)) {
                bVar3 = 0;
              }
            }
            cVar7 = FUN_?();
            if (cVar7 == '\0') {
              if (bVar3 == 0) {
                bVar6 = 0;
              }
              else {
                VStack_5.point.x = VStack_4.point.x;
                VStack_5.point.y = VStack_4.point.y;
                VStack_5.point.z = VStack_4.point.z;
                VStack_5.normal.x = VStack_4.normal.x;
                VStack_5.cube = VStack_4.cube;
                VStack_5.distance = VStack_4.distance;
                VStack_5._60_4_ = VStack_4._60_4_;
                VStack_5.normal.y = VStack_4.normal.y;
                VStack_5.normal.z = VStack_4.normal.z;
                VStack_5.cubePos = VStack_4.cubePos;
                VStack_5._30_2_ = VStack_4._30_2_;
                VStack_5.interactionFlags = VStack_4.interactionFlags;
                VStack_5.collider = VStack_4.collider;
                VStack_5.transform = VStack_4.transform;
                bVar6 = ESStateBase::ESStateBase_SelectionIsAllowedByLogicEnabled
                                  (VStack_4.woId,(MethodInfo *)0x0);
              }
              VStack_5.point.x = VStack_4.point.x;
              VStack_5.point.y = VStack_4.point.y;
              VStack_5.point.z = VStack_4.point.z;
              VStack_5.normal.x = VStack_4.normal.x;
              VStack_5.normal.y = VStack_4.normal.y;
              VStack_5.normal.z = VStack_4.normal.z;
              VStack_5.cubePos = VStack_4.cubePos;
              VStack_5._30_2_ = VStack_4._30_2_;
              VStack_5.face = VStack_4.face;
              VStack_5.isCubeHit = VStack_4.isCubeHit;
              VStack_5._37_3_ = VStack_4._37_3_;
              VStack_5.woId = VStack_4.woId;
              VStack_5._44_4_ = VStack_4._44_4_;
              VStack_5.cube = VStack_4.cube;
              VStack_5.distance = VStack_4.distance;
              VStack_5._60_4_ = VStack_4._60_4_;
              VStack_5.collider = VStack_4.collider;
              VStack_5.transform = VStack_4.transform;
              VStack_5.interactionFlags = VStack_4.interactionFlags;
              ESStateBase::ESStateBase_TintObjectsOnMouseOver_1
                        ((ESStateBase *)this,e,bVar6,&VStack_5,(MethodInfo *)0x0);
            }
            if ((this->fields).pickedTarget != (ESSelection_PickResult_1_WorldObjectClientRef_ *)0x0
               ) {
              if ((((this->fields).pickedTarget)->fields).data == (WorldObjectClientRef *)0x0)
              goto code_?;
              lVar8 = FUN_?();
              if (lVar8 == 0) {
                (this->fields).pickedTarget = (ESSelection_PickResult_1_WorldObjectClientRef_ *)0x0;
                func_?(&(this->fields).pickedTarget);
              }
            }
            if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
              FUN_?();
            }
            bVar6 = MVInputWrapper::MVInputWrapper_GetBooleanControlDown
                              (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
            if (bVar6 == 0) {
              if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
                FUN_?();
              }
              bVar6 = MVInputWrapper::MVInputWrapper_GetBooleanControl
                                (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
              if (bVar6 == 0) {
                if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
                  FUN_?();
                }
                bVar6 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                                  (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
                if (bVar6 == 0) {
                  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  bVar6 = MVInputWrapper::MVInputWrapper_GetBooleanControlDown
                                    (KogamaControls__Enum_PointerSelectAlt,(MethodInfo *)0x0);
                  if (bVar6 == 0) {
                    if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
                      FUN_?();
                    }
                    bVar3 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                                      (KogamaControls__Enum_PointerSelectAlt,(MethodInfo *)0x0);
                    if (bVar3 != 0) {
                      ESSelection_HandleRightClickUpSelection(this,e,(MethodInfo *)0x0);
                    }
                  }
                  else {
                    VStack_5.point.x = VStack_4.point.x;
                    VStack_5.point.y = VStack_4.point.y;
                    VStack_5.point.z = VStack_4.point.z;
                    VStack_5.normal.x = VStack_4.normal.x;
                    VStack_5.normal.y = VStack_4.normal.y;
                    VStack_5.normal.z = VStack_4.normal.z;
                    VStack_5.cubePos = VStack_4.cubePos;
                    VStack_5._30_2_ = VStack_4._30_2_;
                    VStack_5.face = VStack_4.face;
                    VStack_5.isCubeHit = VStack_4.isCubeHit;
                    VStack_5._37_3_ = VStack_4._37_3_;
                    VStack_5.woId = VStack_4.woId;
                    VStack_5._44_4_ = VStack_4._44_4_;
                    VStack_5.cube = VStack_4.cube;
                    VStack_5.distance = VStack_4.distance;
                    VStack_5._60_4_ = VStack_4._60_4_;
                    VStack_5.collider = VStack_4.collider;
                    VStack_5.transform = VStack_4.transform;
                    VStack_5.interactionFlags = VStack_4.interactionFlags;
                    ESSelection_HandleRightClickDownSelection
                              (this,e,&VStack_5,bVar3,(MethodInfo *)0x0);
                  }
                }
                else {
                  ESSelection_HandleLeftClickUpSelection(this,e,(MethodInfo *)0x0);
                }
              }
              else {
                ESSelection_HandleLeftClickDragSelection(this,e,bVar3,(MethodInfo *)0x0);
              }
            }
            else {
              VStack_5.point.x = VStack_4.point.x;
              VStack_5.point.y = VStack_4.point.y;
              VStack_5.point.z = VStack_4.point.z;
              VStack_5.normal.x = VStack_4.normal.x;
              VStack_5.normal.y = VStack_4.normal.y;
              VStack_5.normal.z = VStack_4.normal.z;
              VStack_5.cubePos = VStack_4.cubePos;
              VStack_5._30_2_ = VStack_4._30_2_;
              VStack_5.face = VStack_4.face;
              VStack_5.isCubeHit = VStack_4.isCubeHit;
              VStack_5._37_3_ = VStack_4._37_3_;
              VStack_5.woId = VStack_4.woId;
              VStack_5._44_4_ = VStack_4._44_4_;
              VStack_5.cube = VStack_4.cube;
              VStack_5.distance = VStack_4.distance;
              VStack_5._60_4_ = VStack_4._60_4_;
              VStack_5.collider = VStack_4.collider;
              VStack_5.transform = VStack_4.transform;
              VStack_5.interactionFlags = VStack_4.interactionFlags;
              ESSelection_HandleLeftClickDownSelection(this,e,&VStack_5,bVar3,(MethodInfo *)0x0);
            }
          }
          else {
            ESSelection_HandleEscapeSelection(this,e,(MethodInfo *)0x0);
          }
        }
        else {
          ESSelection_HandleDeleteSelection(this,e,(MethodInfo *)0x0);
        }
      }
      else {
        (pGVar2->fields).ignoreSelectionOnce = 0;
      }
    }
    return;
  }
code_?:
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void Exit(EditorStateMachine) */

void Assembly-CSharp.dll::ESSelection::ESSelection_Exit
               (ESSelection *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__ESSelection__SelectionController_SelectedWorldObjectDeletedHandler_System__Object__WorldObjectDestroyedEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__EventHandler<WorldObjectDestroyedEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ISelectionController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (e == (EditorStateMachine *)0x0) goto code_?;
  bVar1 = EditorStateMachine::EditorStateMachine_get_ParentGroupIsRoot(e,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    pMVar2 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
    if (pMVar2 != (MVWorldObjectClient *)0x0) {
      pMVar2 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
      if (pMVar2 == (MVWorldObjectClient *)0x0) goto code_?;
      if (((pMVar2->fields).interactionFlags & 8) != 0) goto code_?;
    }
  }
  else {
code_?:
    this_00 = (e->fields).weCamera;
    if (this_00 == (MainCameraManager *)0x0) goto code_?;
    MainCameraManager::MainCameraManager_set_BlueModeEnabled(this_00,0,(MethodInfo *)0x0);
  }
  pEVar3 = (this->fields).editorStateMachine;
  if (pEVar3 != (EditorStateMachine *)0x0) {
    pSVar4 = (pEVar3->fields).selectionController;
    this_01 = (UnityAction_2_System_Object_System_Object_ *)
              FUN_?(TypeInfo__System__EventHandler<WorldObjectDestroyedEventArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (this_01,(Object *)this,
               MethodInfo__ESSelection__SelectionController_SelectedWorldObjectDeletedHandler_System__Object__WorldObjectDestroyedEventArgs_
               ,(MethodInfo *)0x0);
    if (pSVar4 != (SelectionController *)0x0) {
      pSVar5 = pSVar4->klass;
      uVar6 = 0;
      uVar7._0_1_ = (pSVar5->_1).rank;
      uVar7._1_1_ = (pSVar5->_1).minimumAlignment;
      if (uVar7 != 0) {
        do {
          if (pSVar5->interfaceOffsets[uVar6].interfaceType ==
              (Il2CppClass *)TypeInfo__ISelectionController) {
            pVVar8 = &(pSVar5->vtable).Equals + (pSVar5->interfaceOffsets[uVar6].offset + 1);
            goto code_?;
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar7);
      }
      pVVar8 = (VirtualInvokeData *)
               FUN_?(pSVar4,TypeInfo__ISelectionController,1,this_01,unaff_RDI);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pVVar8->methodPtr)(pSVar4,this_01,pVVar8->method,pVVar8->methodPtr);
      return;
    }
  }
code_?:
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* LinkObjectBase GetLinkHit(EditorStateMachine, VoxelHit ByRef) */

LinkObjectBase *
Assembly-CSharp.dll::ESSelection::ESSelection_GetLinkHit
          (ESSelection *this,EditorStateMachine *e,VoxelHit *hit,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
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
    FUN_?(&TypeInfo__UnityEngine__Physics);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  RStack_1.m_Point.x = 0.0;
  RStack_1.m_Point.y = 0.0;
  RStack_1.m_Point.z = 0.0;
  RStack_1.m_Normal.x = 0.0;
  RStack_1.m_UV.x = 0.0;
  RStack_1.m_UV.y = 0.0;
  RStack_1.m_Normal.y = 0.0;
  RStack_1.m_Normal.z = 0.0;
  RStack_1.m_FaceID = 0;
  RStack_1.m_Distance = 0.0;
  RStack_1.m_Collider = 0;
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  fVar3 = _UNK_?;
  if (pMVar2 != (MainCameraManager *)0x0) {
    if ((pMVar2->fields).isLogicRendered == 0) {
      return (LinkObjectBase *)0x0;
    }
    bVar4 = EditModeObjectPicker::EditModeObjectPicker_Pick
                      (hit,(HashSet_1_System_Int32_ *)0x0,-0x40005,(MethodInfo *)0x0);
    if (bVar4 != 0) {
      fVar3 = hit->distance;
    }
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if (pMVar2 != (MainCameraManager *)0x0) {
      obj = (pMVar2->fields).mainCamera;
      if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
        FUN_?();
      }
      RStack_5.m_Origin.x = 0.0;
      RStack_5.m_Origin.y = 0.0;
      RStack_5._8_8_ = RStack_5._8_8_ & 0xffffffff00000000;
      pcVar6 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
        uVar7 = func_?(&UNK_?);
        FUN_?(uVar7,0);
        pcVar6 = (code *)swi(3);
        pLVar8 = (LinkObjectBase *)(*pcVar6)();
        return pLVar8;
      }
      pcRam_? = pcVar6;
      (*pcRam_?)(&RStack_5);
      if (obj != (Camera *)0x0) {
        auStack_9._0_4_ = RStack_5.m_Origin.x;
        auStack_9._4_4_ = RStack_5.m_Origin.y;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        auStack_10._0_4_ = 0.0;
        auStack_10._4_4_ = 0.0;
        uStack_11 = 0;
        uStack_12._0_4_ = 0.0;
        uStack_12._4_4_ = 0.0;
        pvVar13 = (obj->fields)._._._.m_CachedPtr;
        if (pvVar13 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
          pcVar6 = (code *)swi(3);
          pLVar8 = (LinkObjectBase *)(*pcVar6)();
          return pLVar8;
        }
        pcVar6 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
          uVar7 = func_?(&UNK_?);
          FUN_?(uVar7,0);
          pcVar6 = (code *)swi(3);
          pLVar8 = (LinkObjectBase *)(*pcVar6)();
          return pLVar8;
        }
        pcRam_? = pcVar6;
        (*pcRam_?)(pvVar13,auStack_9,2,auStack_10);
        iVar14 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                          (StringLiteral_Logic,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__Physics->_1).field_0x1c == 0) {
          FUN_?();
        }
        RStack_5.m_Origin.x = (float)auStack_10._0_4_;
        RStack_5.m_Origin.y = (float)auStack_10._4_4_;
        RStack_5.m_Origin.z = (float)(undefined4)uStack_11;
        RStack_5.m_Direction.x = (float)uStack_11._4_4_;
        RStack_5.m_Direction.y = (float)uStack_12;
        RStack_5.m_Direction.z = uStack_12._4_4_;
        UnityEngine.PhysicsModule.dll::UnityEngine::Physics::Physics_Raycast_13
                  (&RStack_5,&RStack_1,_UNK_?,1 << ((byte)iVar14 & 0x1f),(MethodInfo *)0x0)
        ;
        pCVar15 = UnityEngine.PhysicsModule.dll::UnityEngine::RaycastHit::RaycastHit_get_collider
                           (&RStack_1,(MethodInfo *)0x0);
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
        if (pCVar15 != (Collider *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (((pCVar15->fields)._._.m_CachedPtr != (void *)0x0) && (RStack_1.m_Distance < fVar3))
          {
            pCVar15 = UnityEngine.PhysicsModule.dll::UnityEngine::RaycastHit::RaycastHit_get_collider
                               (&RStack_1,(MethodInfo *)0x0);
            if ((pCVar15 != (Collider *)0x0) &&
               (pGVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_get_gameObject((Component *)pCVar15,(MethodInfo *)0x0),
               pGVar16 != (GameObject *)0x0)) {
              message = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetName
                                  ((Object_1 *)pGVar16,(MethodInfo *)0x0);
              if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                FUN_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                        ((Object *)message,(MethodInfo *)0x0);
              (hit->point).x = RStack_1.m_Point.x;
              (hit->point).y = RStack_1.m_Point.y;
              (hit->point).z = RStack_1.m_Point.z;
              pCVar15 = UnityEngine.PhysicsModule.dll::UnityEngine::RaycastHit::
                       RaycastHit_get_collider(&RStack_1,(MethodInfo *)0x0);
              if ((pCVar15 != (Collider *)0x0) &&
                 (pGVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_get_gameObject((Component *)pCVar15,(MethodInfo *)0x0),
                 pGVar16 != (GameObject *)0x0)) {
                pLVar8 = (LinkObjectBase *)FUN_?(pGVar16);
                return pLVar8;
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
  FUN_?();
  pcVar6 = (code *)swi(3);
  pLVar8 = (LinkObjectBase *)(*pcVar6)();
  return pLVar8;
}


/* Void HandleDeleteSelection(EditorStateMachine) */

void Assembly-CSharp.dll::ESSelection::ESSelection_HandleDeleteSelection
               (ESSelection *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__ESSelection____c___HandleDeleteSelection_b__15_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__ESSelection____c__DisplayClass15_0___HandleDeleteSelection_b__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ESSelection____c__DisplayClass15_0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ESSelection____c);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object_00 = (Object *)FUN_?(TypeInfo__ESSelection____c__DisplayClass15_0);
  if (e != (EditorStateMachine *)0x0) {
    pMVar1 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
    if (pMVar1 == (MVWorldObjectClient *)0x0) {
      return;
    }
    pMVar1 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
    ESSelection_DeselectAll(this,(this->fields).editorStateMachine,(MethodInfo *)0x0);
    if (object_00 != (Object *)0x0) {
      bVar2 = iRam_? != 0;
      object_00[1].klass = (Object__Class *)::StringLiteral__;
      if (bVar2) {
        uVar3 = (uint)((ulonglong)(object_00 + 1) >> 0xc);
        lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
        do {
          uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
          puVar6 = (ulonglong *)(lVar4 + 0xADDR);
          LOCK();
          bVar2 = uVar5 == *puVar6;
          if (bVar2) {
            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar2);
      }
      pMVar7 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar1 != (MVWorldObjectClient *)0x0) {
        cVar8 = (*(pMVar1->klass->vtable).Delete.methodPtr)(pMVar1,pMVar7,object_00 + 1);
        if (cVar8 == '\0') {
          pGVar9 = (e->fields).gameObject;
          this_00 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                    FUN_?(
                                 TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                                 );
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
          Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                    (this_00,object_00,
                     MethodInfo__ESSelection____c__DisplayClass15_0___HandleDeleteSelection_b__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy
                    (pGVar9,(BaseEventData *)0x0,this_00,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                    );
        }
        pGVar9 = (e->fields).gameObject;
        if (*(int *)&(TypeInfo__ESSelection____c->_1).field_0x1c == 0) {
          FUN_?();
        }
        this_01 = TypeInfo__ESSelection____c->static_fields->__9__15_1;
        if (this_01 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
          if (*(int *)&(TypeInfo__ESSelection____c->_1).field_0x1c == 0) {
            FUN_?();
          }
          object = TypeInfo__ESSelection____c->static_fields->__9;
          this_01 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                    FUN_?(
                                 TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                 );
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
          Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                    ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)object,
                     MethodInfo__ESSelection____c___HandleDeleteSelection_b__15_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          TypeInfo__ESSelection____c->static_fields->__9__15_1 = this_01;
          if (iRam_? != 0) {
            uVar3 = (uint)((ulonglong)&TypeInfo__ESSelection____c->static_fields->__9__15_1 >> 0xc);
            lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
            do {
              uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
              puVar6 = (ulonglong *)(lVar4 + 0xADDR);
              LOCK();
              bVar2 = uVar5 == *puVar6;
              if (bVar2) {
                *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
              }
              UNLOCK();
            } while (!bVar2);
          }
        }
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (pGVar9,(BaseEventData *)0x0,
                   (ExecuteEvents_EventFunction_1_System_Object_ *)this_01,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        return;
      }
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void HandleEscapeSelection(EditorStateMachine) */

void Assembly-CSharp.dll::ESSelection::ESSelection_HandleEscapeSelection
               (ESSelection *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__EditorEvent);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SharedCubeFunctions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (e == (EditorStateMachine *)0x0) goto code_?;
  bVar1 = EditorStateMachine::EditorStateMachine_get_ParentGroupIsRoot(e,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    pMVar2 = EditorStateMachine::EditorStateMachine_get_ParentGroup(e,(MethodInfo *)0x0);
    if (pMVar2 == (MVGroup *)0x0) goto code_?;
    t = (pMVar2->fields)._.transform;
    if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
      FUN_?();
    }
    SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively(t,0,(MethodInfo *)0x0);
    EditorStateMachine::EditorStateMachine_ExitGroup(e,(MethodInfo *)0x0);
    bVar1 = EditorStateMachine::EditorStateMachine_get_ParentGroupIsRoot(e,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      pMVar2 = EditorStateMachine::EditorStateMachine_get_ParentGroup(e,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Debug);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_EnterObject);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)StringLiteral_EnterObject,(MethodInfo *)0x0);
      if (pMVar2 != (MVGroup *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pMVar2->klass->vtable).OnEnterObject.methodPtr)
                  (pMVar2,e,(pMVar2->klass->vtable).OnEnterObject.method);
        return;
      }
      goto code_?;
    }
  }
  this_02 = (e->fields).weCamera;
  if (this_02 == (MainCameraManager *)0x0) {
code_?:
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  MainCameraManager::MainCameraManager_set_BlueModeEnabled(this_02,0,(MethodInfo *)0x0);
  ESSelection_DeselectAll(this,e,(MethodInfo *)0x0);
  auStackX_10[0] = 0x2f;
  evt = (Object *)FUN_?(TypeInfo__EditorEvent,auStackX_10);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Clear__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IState);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Stack<EditorEvent>__Clear__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_State_is_locked__could_not_set_s);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar4 = StringLiteral_State_is_locked__could_not_set_s;
  if ((e->fields)._.lockState != 0) {
    if (evt == (Object *)0x0) {
      str1 = (String *)0x0;
    }
    else {
      str1 = (String *)
             (*(evt->klass->vtable).ToString.methodPtr)(evt,(evt->klass->vtable).ToString.method);
    }
    pSVar4 = mscorlib.dll::System::String::String_Concat_4(pSVar4,str1,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug,0);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UnityEngine__ILogger);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    pIVar5 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
    if (pIVar5 == (ILogger_1 *)0x0) {
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar5,2,pSVar4);
    return;
  }
  bVar6 = iRam_? != 0;
  (e->fields)._.nextEvent = evt;
  if (bVar6) {
    uVar7 = (uint)((ulonglong)&(e->fields)._.nextEvent >> 0xc);
    lVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
    do {
      uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
      puVar10 = (ulonglong *)(lVar8 + 0xADDR);
      LOCK();
      bVar6 = uVar9 == *puVar10;
      if (bVar6) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  if (evt == (Object *)0x0) {
    if ((e->fields)._.currentState == (IState *)0x0) goto DAT_?;
    FUN_?(2);
    bVar6 = iRam_? != 0;
    (e->fields)._.currentState = (IState *)0x0;
    if (bVar6) {
      uVar7 = (uint)((ulonglong)&(e->fields)._.currentState >> 0xc);
      lVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
      do {
        uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
        puVar10 = (ulonglong *)(lVar8 + 0xADDR);
        LOCK();
        bVar6 = uVar9 == *puVar10;
        if (bVar6) {
          *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
  }
  else {
    this_00 = (e->fields)._.transitionTable;
    if (this_00 == (StateTransitionTable *)0x0) goto DAT_?;
    pIVar11 = StateTransitionTable::StateTransitionTable_GetState(this_00,evt,(MethodInfo *)0x0);
    if (pIVar11 != (IState *)0x0) {
      if ((e->fields)._.currentState != (IState *)0x0) {
        FUN_?(2);
      }
      pSVar4 = (String *)
                (*(evt->klass->vtable).ToString.methodPtr)(evt,(evt->klass->vtable).ToString.method)
      ;
      (e->fields)._.stateName = pSVar4;
      func_?(&(e->fields)._.stateName);
      (e->fields)._.currentState = pIVar11;
      func_?(&(e->fields)._.currentState);
      (e->fields)._.nextEvent = (Object *)0x0;
      func_?(&(e->fields)._.nextEvent);
      (e->fields)._.prevEvent = (e->fields)._.curEvent;
      func_?(&e->fields);
      (e->fields)._.curEvent = evt;
      func_?(&(e->fields)._.curEvent);
      if ((e->fields)._.currentState == (IState *)0x0) goto DAT_?;
      FUN_?(0);
      this_01 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                 *)(e->fields)._.data;
      if (this_01 ==
          (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)
          0x0) goto DAT_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
      TypeConverterRegistry+ConverterKey,System::Object]::
      Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__Clear
                (this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Clear__
                );
    }
    if ((e->fields)._.clearStack == 0) {
      (e->fields)._.clearStack = 1;
    }
    else {
      pSVar12 = (e->fields)._.stateStack;
      if (pSVar12 == (Stack_1_EditorEvent_ *)0x0) {
DAT_?:
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      piVar13 = &(pSVar12->fields)._version;
      *piVar13 = *piVar13 + 1;
      (pSVar12->fields)._size = 0;
    }
  }
  return;
}


/* Void HandleLeftClickDownSelection(EditorStateMachine, VoxelHit, Boolean) */

void Assembly-CSharp.dll::ESSelection::ESSelection_HandleLeftClickDownSelection
               (ESSelection *this,EditorStateMachine *e,VoxelHit *targetHit,bool woPickSuccess,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__ESSelection__PickResult<WorldObjectClientRef>__PickResult_UnityEngine__Vector3__VoxelHit__WorldObjectClientRef_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ESSelection__PickResult<WorldObjectClientRef>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (woPickSuccess == 0) {
    return;
  }
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)();
  pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  VStack_4.point.x = (targetHit->point).x;
  VStack_4.point.y = (targetHit->point).y;
  VStack_4._8_8_ = *(undefined8 *)&(targetHit->point).z;
  VStack_4.normal.y = (targetHit->normal).y;
  VStack_4.normal.z = (targetHit->normal).z;
  VStack_4.cubePos = targetHit->cubePos;
  VStack_4._30_2_ = *(undefined2 *)&targetHit->field_0x1e;
  VStack_4.cube = targetHit->cube;
  VStack_4.distance = targetHit->distance;
  VStack_4._60_4_ = *(undefined4 *)&targetHit->field_0x3c;
  VStack_4.collider = targetHit->collider;
  VStack_4.transform = targetHit->transform;
  VStack_4.interactionFlags = targetHit->interactionFlags;
  if (pMVar3 != (MVWorldObjectClientManager *)0x0) {
    pWVar5 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRef
                       (pMVar3,targetHit->woId,(MethodInfo *)0x0);
    pEVar6 = (ESSelection_PickResult_1_WorldObjectClientRef_ *)
              FUN_?(TypeInfo__ESSelection__PickResult<WorldObjectClientRef>);
    VStack_4.point.x = (targetHit->point).x;
    VStack_4.point.y = (targetHit->point).y;
    VStack_4._8_8_ = *(undefined8 *)&(targetHit->point).z;
    VStack_4.normal.y = (targetHit->normal).y;
    VStack_4.normal.z = (targetHit->normal).z;
    VStack_4.cubePos = targetHit->cubePos;
    VStack_4._30_2_ = *(undefined2 *)&targetHit->field_0x1e;
    VStack_7.z = 0.0;
    VStack_4.face = targetHit->face;
    VStack_4.isCubeHit = targetHit->isCubeHit;
    VStack_4._37_3_ = *(undefined3 *)&targetHit->field_0x25;
    VStack_4.woId = targetHit->woId;
    VStack_4._44_4_ = *(undefined4 *)&targetHit->field_0x2c;
    VStack_4.cube = targetHit->cube;
    VStack_4.distance = targetHit->distance;
    VStack_4._60_4_ = *(undefined4 *)&targetHit->field_0x3c;
    VStack_4.collider = targetHit->collider;
    VStack_4.transform = targetHit->transform;
    VStack_4.interactionFlags = targetHit->interactionFlags;
    VStack_7.x = 0.0;
    VStack_7.y = 0.0;
    ESSelection+PickResult`1[System::Object]::ESSelection_PickResult_1_System_Object___ctor
              ((ESSelection_PickResult_1_System_Object_ *)pEVar6,&VStack_7,&VStack_4,
               (Object *)pWVar5,
               MethodInfo__ESSelection__PickResult<WorldObjectClientRef>__PickResult_UnityEngine__Vector3__VoxelHit__WorldObjectClientRef_
              );
    bVar8 = iRam_? != 0;
    (this->fields).pickedTarget = pEVar6;
    if (bVar8) {
      uVar9 = (uint)((ulonglong)&(this->fields).pickedTarget >> 0xc);
      lVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6) * 8;
      do {
        uVar11 = *(ulonglong *)(lVar10 + 0xADDR);
        puVar12 = (ulonglong *)(lVar10 + 0xADDR);
        LOCK();
        bVar8 = uVar11 == *puVar12;
        if (bVar8) {
          *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
        }
        UNLOCK();
      } while (!bVar8);
    }
    if ((((e != (EditorStateMachine *)0x0) &&
         (pSVar13 = (e->fields).selectionController, pSVar13 != (SelectionController *)0x0)) &&
        (pEVar6 = (this->fields).pickedTarget,
        pEVar6 != (ESSelection_PickResult_1_WorldObjectClientRef_ *)0x0)) &&
       (this_00 = (HashSet_1_System_Int32Enum_ *)(pSVar13->fields).selectedIDs,
       this_00 != (HashSet_1_System_Int32Enum_ *)0x0)) {
      addToSelection =
           System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
           HashSet_1_System_Int32Enum__Contains
                     (this_00,(pEVar6->fields).hit.woId,
                      MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
      pMVar14 = MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__;
      pEVar6 = (this->fields).pickedTarget;
      if (((pEVar6 != (ESSelection_PickResult_1_WorldObjectClientRef_ *)0x0) &&
          (pWVar5 = (pEVar6->fields).data, pWVar5 != (WorldObjectClientRef *)0x0)) &&
         ((pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0),
          pMVar3 != (MVWorldObjectClientManager *)0x0 &&
          (pOVar15 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient_1
                               (pMVar3,(pWVar5->fields)._.woId,pMVar14->klass->rgctx_data[1].method),
          pMVar14 = MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__,
          pOVar15 != (Object *)0x0)))) {
        pMVar16 = pOVar15[0x11].monitor;
        pEVar6 = (this->fields).pickedTarget;
        if (((pEVar6 != (ESSelection_PickResult_1_WorldObjectClientRef_ *)0x0) &&
            (pWVar5 = (pEVar6->fields).data, pWVar5 != (WorldObjectClientRef *)0x0)) &&
           ((pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0),
            pMVar3 != (MVWorldObjectClientManager *)0x0 &&
            (pOVar15 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient_1
                                 (pMVar3,(pWVar5->fields)._.woId,pMVar14->klass->rgctx_data[1].method
                                 ), pOVar15 != (Object *)0x0)))) {
          if ((((ulonglong)pMVar16 & 0x20) == 0) || (((ulonglong)pOVar15[0x11].monitor & 0x10) != 0))
          {
            pEVar6 = (this->fields).pickedTarget;
            if ((pEVar6 == (ESSelection_PickResult_1_WorldObjectClientRef_ *)0x0) ||
               (pSVar13 = (e->fields).selectionController, pSVar13 == (SelectionController *)0x0))
            goto DAT_?;
            VStack_4.point.x = (pEVar6->fields).hit.point.x;
            VStack_4.point.y = (pEVar6->fields).hit.point.y;
            VStack_4._8_8_ = *(undefined8 *)&(pEVar6->fields).hit.point.z;
            VStack_4.normal.y = (pEVar6->fields).hit.normal.y;
            VStack_4.normal.z = (pEVar6->fields).hit.normal.z;
            VStack_4.cubePos = (pEVar6->fields).hit.cubePos;
            VStack_4._30_2_ = *(undefined2 *)&(pEVar6->fields).hit.field_0x1e;
            VStack_4.face = (pEVar6->fields).hit.face;
            VStack_4.isCubeHit = (pEVar6->fields).hit.isCubeHit;
            VStack_4._37_3_ = *(undefined3 *)&(pEVar6->fields).hit.field_0x25;
            VStack_4.woId = (pEVar6->fields).hit.woId;
            VStack_4._44_4_ = *(undefined4 *)&(pEVar6->fields).hit.field_0x2c;
            VStack_4.cube = (pEVar6->fields).hit.cube;
            VStack_4.distance = (pEVar6->fields).hit.distance;
            VStack_4._60_4_ = *(undefined4 *)&(pEVar6->fields).hit.field_0x3c;
            VStack_4.collider = (pEVar6->fields).hit.collider;
            VStack_4.transform = (pEVar6->fields).hit.transform;
            VStack_4.interactionFlags = (pEVar6->fields).hit.interactionFlags;
            pWVar5 = SelectionController::SelectionController_Select_1
                               (pSVar13,&VStack_4,addToSelection,1,(MethodInfo *)0x0);
            bVar8 = iRam_? != 0;
            (this->fields).selectedWorldObject = pWVar5;
            if (bVar8) {
              uVar9 = (uint)((ulonglong)&(this->fields).selectedWorldObject >> 0xc);
              lVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6) * 8;
              do {
                uVar11 = *(ulonglong *)(lVar10 + 0xADDR);
                puVar12 = (ulonglong *)(lVar10 + 0xADDR);
                LOCK();
                bVar8 = uVar11 == *puVar12;
                if (bVar8) {
                  *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
                }
                UNLOCK();
              } while (!bVar8);
            }
          }
          return;
        }
      }
    }
  }
DAT_?:
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void HandleLeftClickDragSelection(EditorStateMachine, Boolean) */

void Assembly-CSharp.dll::ESSelection::ESSelection_HandleLeftClickDragSelection
               (ESSelection *this,EditorStateMachine *e,bool woPickSuccess,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TranslateMode);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_moveWithAvatar);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_translateMode);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Mouse_ScrollWheel);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((woPickSuccess == 0) ||
     ((this->fields).pickedTarget == (ESSelection_PickResult_1_WorldObjectClientRef_ *)0x0)) {
    return;
  }
  pEVar1 = (this->fields).pickedTarget;
  uStack_2._0_4_ = (pEVar1->fields).mousePosition.x;
  uStack_2._4_4_ = (pEVar1->fields).mousePosition.y;
  fVar3 = (pEVar1->fields).mousePosition.z;
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  uStack_4 = (Object *)0x0;
  fStack_5 = 0.0;
  pcVar6 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
    uVar7 = func_?(&UNK_?);
    FUN_?(uVar7,0);
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pcRam_? = pcVar6;
  (*pcRam_?)(&uStack_4);
  fStack_8 = fVar3 - fStack_5;
  uStack_2 = CONCAT44(uStack_2._4_4_ - uStack_4._4_4_,(float)uStack_2 - (float)uStack_4);
  fVar3 = (float)FUN_?(&uStack_2);
  if (fVar3 <= _UNK_?) {
    if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    fVar3 = MVInputWrapper::MVInputWrapper_GetAxisRawWithoutSensitivity
                       (StringLiteral_Mouse_ScrollWheel,(MethodInfo *)0x0);
    if (fVar3 == 0.0) {
      return;
    }
  }
  pTVar9 = TypeInfo__TranslateMode;
  if (e != (EditorStateMachine *)0x0) {
    pDVar10 = (e->fields)._.data;
    uStack_4 = (Object *)((ulonglong)uStack_4 & 0xffffffff00000000);
    iVar11._0_2_ = (TypeInfo__TranslateMode->_0).byval_arg.attrs;
    iVar11._2_1_ = (TypeInfo__TranslateMode->_0).byval_arg.type;
    iVar11._3_1_ = (TypeInfo__TranslateMode->_0).byval_arg.field_0xb;
    pOVar12 = uStack_4;
    if ((iVar11 < 0) &&
       (((TypeInfo__TranslateMode->_0).generic_class == (Il2CppGenericClass *)0x0 ||
        (pOVar12 = (Object *)0x0, ((TypeInfo__TranslateMode->_1).field_0x6d & 8) == 0)))) {
      pOVar12 = (Object *)FUN_?(TypeInfo__TranslateMode);
      FUN_?(pOVar12 + 1,&uStack_4,(longlong)(int)(pTVar9->_1).instance_size + -0x10);
      if (iRam_? != 0) {
        method = (MethodInfo *)0xADDR;
        uVar13 = (uint)((ulonglong)(pOVar12 + 1) >> 0xc);
        uVar14 = (ulonglong)((uVar13 & 0x1fffff) >> 6);
        do {
          uVar15 = *(ulonglong *)(uVar14 * 8 + 0xADDR);
          puVar16 = (ulonglong *)(uVar14 * 8 + 0xADDR);
          LOCK();
          bVar17 = uVar15 == *puVar16;
          if (bVar17) {
            *puVar16 = uVar15 | 1L << (uVar13 & 0x3f);
          }
          UNLOCK();
        } while (!bVar17);
      }
    }
    if (pDVar10 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      uVar7 = CONCAT71((int7)((ulonglong)method >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                (pDVar10,(Object *)StringLiteral_translateMode,pOVar12,(InsertionBehavior__Enum)uVar7,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      pDVar10 = (e->fields)._.data;
      auStackX_18[0] = 1;
      pOVar12 = (Object *)FUN_?(uRam_?,auStackX_18);
      if (pDVar10 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  (pDVar10,(Object *)StringLiteral_moveWithAvatar,pOVar12,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar7 >> 8),2),
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        if ((e->fields)._.lockState != 0) {
          return;
        }
        FSMEntity::FSMEntity_PushState_1
                  ((FSMEntity *)e,EditorEvent__Enum_ESTranslate,EditorEvent__Enum_UndefinedState,
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void HandleLeftClickUpSelection(EditorStateMachine) */

void Assembly-CSharp.dll::ESSelection::ESSelection_HandleLeftClickUpSelection
               (ESSelection *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__EditorEvent);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__;
  pWVar2 = (this->fields).selectedWorldObject;
  if ((pWVar2 != (WorldObjectClientRef *)0x0) &&
     (pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0),
     pMVar3 != (MVWorldObjectClientManager *)0x0)) {
    pOVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient_1
                        (pMVar3,(pWVar2->fields)._.woId,pMVar1->klass->rgctx_data[1].method);
    if ((pOVar4 != (Object *)0x0) &&
       ((this->fields).pickedTarget != (ESSelection_PickResult_1_WorldObjectClientRef_ *)0x0)) {
      if ((((this->fields).pickedTarget)->fields).data == (WorldObjectClientRef *)0x0)
      goto code_?;
      lVar5 = FUN_?();
      if (lVar5 != 0) {
        pEVar6 = (this->fields).pickedTarget;
        if (pEVar6 == (ESSelection_PickResult_1_WorldObjectClientRef_ *)0x0)
        goto code_?;
        VStack_7.x = (pEVar6->fields).mousePosition.x;
        VStack_7.y = (pEVar6->fields).mousePosition.y;
        VStack_7.z = (pEVar6->fields).mousePosition.z;
        bVar8 = ESSelection_IsMouseUpValid(this,&VStack_7,(MethodInfo *)0x0);
        if (bVar8 != 0) {
          bVar8 = ESSelection_CheckAndExecuteOnClickHandler
                            (this,e,(this->fields).pickedTarget,(MethodInfo *)0x0);
          if ((((e == (EditorStateMachine *)0x0) ||
               (pSVar9 = (e->fields).selectionController, pSVar9 == (SelectionController *)0x0)) ||
              (this_00 = (HashSet_1_System_Int32Enum_ *)(pSVar9->fields).selectedIDs,
              (this->fields).selectedWorldObject == (WorldObjectClientRef *)0x0)) ||
             ((lVar5 = FUN_?(), lVar5 == 0 ||
              (this_00 == (HashSet_1_System_Int32Enum_ *)0x0)))) goto code_?;
          bVar10 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
                  HashSet_1_System_Int32Enum__Contains
                            (this_00,*(Int32Enum__Enum *)(lVar5 + 0x10),
                             MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
          if ((bVar8 == 0) && (bVar10 != 0)) {
            this_01 = (this->fields).gizmoController;
            if (((((this->fields).selectedWorldObject == (WorldObjectClientRef *)0x0) ||
                 (lVar5 = FUN_?(), lVar5 == 0)) ||
                (pEVar6 = (this->fields).pickedTarget,
                pEVar6 == (ESSelection_PickResult_1_WorldObjectClientRef_ *)0x0)) ||
               (this_01 == (GizmoController *)0x0)) goto code_?;
            VStack_7.x = (pEVar6->fields).hit.point.x;
            VStack_7.y = (pEVar6->fields).hit.point.y;
            VStack_7.z = (pEVar6->fields).hit.point.z;
            GizmoController::GizmoController_Show
                      (this_01,*(int32_t *)(lVar5 + 0x10),&VStack_7,e,(MethodInfo *)0x0);
          }
          goto code_?;
        }
      }
    }
    if (e != (EditorStateMachine *)0x0) {
      bVar8 = EditorStateMachine::EditorStateMachine_get_ParentGroupIsRoot(e,(MethodInfo *)0x0);
      if (bVar8 == 0) {
        EditorStateMachine::EditorStateMachine_ExitGroup(e,(MethodInfo *)0x0);
      }
      else {
        ESSelection_DeselectAll(this,e,(MethodInfo *)0x0);
      }
      pMVar11 = EditorStateMachine::EditorStateMachine_get_ParentGroup(e,(MethodInfo *)0x0);
      pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar3 != (MVWorldObjectClientManager *)0x0) {
        pMVar12 = MVWorldObjectClientManager::MVWorldObjectClientManager_get_RootGroup
                            (pMVar3,(MethodInfo *)0x0);
        if (pMVar11 == pMVar12) {
          auStackX_8[0] = 0x2f;
          pOVar4 = (Object *)FUN_?(TypeInfo__EditorEvent,auStackX_8);
          FSMEntity::FSMEntity_set_Event((FSMEntity *)e,pOVar4,(MethodInfo *)0x0);
        }
code_?:
        iVar13 = iRam_?;
        (this->fields).pickedTarget = (ESSelection_PickResult_1_WorldObjectClientRef_ *)0x0;
        if (iVar13 != 0) {
          uVar14 = (uint)((ulonglong)&(this->fields).pickedTarget >> 0xc);
          lVar5 = (ulonglong)((uVar14 & 0x1fffff) >> 6) * 8;
          do {
            uVar15 = *(ulonglong *)(lVar5 + 0xADDR);
            puVar16 = (ulonglong *)(lVar5 + 0xADDR);
            LOCK();
            bVar17 = uVar15 == *puVar16;
            if (bVar17) {
              *puVar16 = uVar15 | 1L << (uVar14 & 0x3f);
            }
            UNLOCK();
            iVar13 = iRam_?;
          } while (!bVar17);
        }
        (this->fields).pickedLink = (ESSelection_PickResult_1_LinkObjectBase_ *)0x0;
        if (iVar13 != 0) {
          uVar14 = (uint)((ulonglong)&(this->fields).pickedLink >> 0xc);
          lVar5 = (ulonglong)((uVar14 & 0x1fffff) >> 6) * 8;
          do {
            uVar15 = *(ulonglong *)(lVar5 + 0xADDR);
            puVar16 = (ulonglong *)(lVar5 + 0xADDR);
            LOCK();
            bVar17 = uVar15 == *puVar16;
            if (bVar17) {
              *puVar16 = uVar15 | 1L << (uVar14 & 0x3f);
            }
            UNLOCK();
          } while (!bVar17);
        }
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Void HandleRightClickDownSelection(EditorStateMachine, VoxelHit, Boolean) */

void Assembly-CSharp.dll::ESSelection::ESSelection_HandleRightClickDownSelection
               (ESSelection *this,EditorStateMachine *e,VoxelHit *targetHit,bool woPickSuccess,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<MVWorldObjectClient>__Contains_MVWorldObjectClient_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__ESSelection__PickResult<WorldObjectClientRef>__PickResult_UnityEngine__Vector3__VoxelHit__WorldObjectClientRef_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__ESSelection__PickResult<LinkObjectBase>__PickResult_UnityEngine__Vector3__VoxelHit__LinkObjectBase_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ESSelection__PickResult<LinkObjectBase>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ESSelection__PickResult<WorldObjectClientRef>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (e != (EditorStateMachine *)0x0) {
    bVar1 = EditorStateMachine::EditorStateMachine_get_ParentGroupIsRoot(e,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      EditorStateMachine::EditorStateMachine_ExitGroup(e,(MethodInfo *)0x0);
    }
    else {
      ESSelection_DeselectAll(this,e,(MethodInfo *)0x0);
    }
    VStack_2.interactionFlags = 0;
    VStack_2.point.x = 0.0;
    VStack_2.point.y = 0.0;
    VStack_2.point.z = 0.0;
    VStack_2.normal.x = 0.0;
    VStack_2.normal.y = 0.0;
    VStack_2.normal.z = 0.0;
    VStack_2.cubePos.x = 0;
    VStack_2.cubePos.y = 0;
    VStack_2.cubePos.z = 0;
    VStack_2._30_2_ = 0;
    VStack_2.face = 0;
    VStack_2.isCubeHit = 0;
    VStack_2._37_3_ = 0;
    VStack_2.woId = 0;
    VStack_2._44_4_ = 0;
    VStack_2.cube = (Cube *)0x0;
    VStack_2.distance = 0.0;
    VStack_2._60_4_ = 0;
    VStack_2.collider = (Collider *)0x0;
    VStack_2.transform = (Transform *)0x0;
    data = ESSelection_GetLinkHit(this,e,&VStack_2,(MethodInfo *)0x0);
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
      FUN_?();
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (data != (LinkObjectBase *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if ((data->fields)._._._._.m_CachedPtr != (void *)0x0) {
        if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
          FUN_?();
        }
        VStack_3.x = 0.0;
        VStack_3.y = 0.0;
        VStack_3.z = 0.0;
        pcVar4 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
          uVar5 = func_?(&UNK_?);
          FUN_?(uVar5,0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pcRam_? = pcVar4;
        (*pcRam_?)(&VStack_3);
        iVar6 = VStack_2.interactionFlags;
        VStack_7.x = VStack_2.point.x;
        VStack_7.y = VStack_2.point.y;
        VStack_7.z = VStack_2.point.z;
        fStack_8 = VStack_2.normal.x;
        fStack_9 = VStack_2.normal.y;
        fStack_10 = VStack_2.normal.z;
        IStack_11 = VStack_2.cubePos;
        uStack_12 = VStack_2._30_2_;
        iStack_13 = VStack_2.face;
        bStack_14 = VStack_2.isCubeHit;
        uStack_15 = VStack_2._37_3_;
        iStack_16 = VStack_2.woId;
        uStack_17 = VStack_2._44_4_;
        pCStack_18 = VStack_2.cube;
        fStack_19 = VStack_2.distance;
        uStack_20 = VStack_2._60_4_;
        pCStack_21 = VStack_2.collider;
        pTStack_22 = VStack_2.transform;
        this_00 = (ESSelection_PickResult_1_LinkObjectBase_ *)
                  FUN_?(TypeInfo__ESSelection__PickResult<LinkObjectBase>);
        uVar5 = stack0xfffffffffffffee0;
        stack0xfffffffffffffee0 = CONCAT44(fStack_8,VStack_3.z);
        uVar23 = stack0xfffffffffffffee0;
        VStack_24.point.x = VStack_7.x;
        VStack_24.point.y = VStack_7.y;
        VStack_7.z = (float)uVar5;
        fStack_8 = SUB84(uVar5,4);
        VStack_24.point.z = VStack_7.z;
        VStack_24.normal.x = fStack_8;
        VStack_24.normal.y = fStack_9;
        VStack_24.normal.z = fStack_10;
        VStack_24.cubePos = IStack_11;
        VStack_24._30_2_ = uStack_12;
        VStack_24.face = iStack_13;
        VStack_24.isCubeHit = bStack_14;
        VStack_24._37_3_ = uStack_15;
        VStack_24.woId = iStack_16;
        VStack_24._44_4_ = uStack_17;
        VStack_24.cube = pCStack_18;
        VStack_24.distance = fStack_19;
        VStack_24._60_4_ = uStack_20;
        VStack_24.collider = pCStack_21;
        VStack_24.transform = pTStack_22;
        VStack_24.interactionFlags = iVar6;
        VStack_7.x = VStack_3.x;
        VStack_7.y = VStack_3.y;
        unique0x10001398 = uVar23;
        ESSelection+PickResult`1[System::Object]::ESSelection_PickResult_1_System_Object___ctor
                  ((ESSelection_PickResult_1_System_Object_ *)this_00,&VStack_7,&VStack_24,
                   (Object *)data,
                   MethodInfo__ESSelection__PickResult<LinkObjectBase>__PickResult_UnityEngine__Vector3__VoxelHit__LinkObjectBase_
                  );
        bVar25 = iRam_? == 0;
        (this->fields).pickedLink = this_00;
        if (bVar25) {
          return;
        }
        uVar26 = (uint)((ulonglong)&(this->fields).pickedLink >> 0xc);
        lVar27 = (ulonglong)((uVar26 & 0x1fffff) >> 6) * 8;
        do {
          uVar28 = *(ulonglong *)(lVar27 + 0xADDR);
          puVar29 = (ulonglong *)(lVar27 + 0xADDR);
          LOCK();
          bVar25 = uVar28 == *puVar29;
          if (bVar25) {
            *puVar29 = uVar28 | 1L << (uVar26 & 0x3f);
          }
          UNLOCK();
        } while (!bVar25);
        return;
      }
    }
    if (woPickSuccess == 0) {
      return;
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    VStack_24.point.x = (targetHit->point).x;
    VStack_24.point.y = (targetHit->point).y;
    VStack_24._8_8_ = *(undefined8 *)&(targetHit->point).z;
    VStack_24.normal.y = (targetHit->normal).y;
    VStack_24.normal.z = (targetHit->normal).z;
    VStack_24.cubePos = targetHit->cubePos;
    VStack_24._30_2_ = *(undefined2 *)&targetHit->field_0x1e;
    VStack_24.cube = targetHit->cube;
    VStack_24.distance = targetHit->distance;
    VStack_24._60_4_ = *(undefined4 *)&targetHit->field_0x3c;
    VStack_24.collider = targetHit->collider;
    VStack_24.transform = targetHit->transform;
    VStack_24.interactionFlags = targetHit->interactionFlags;
    if (this_01 != (MVWorldObjectClientManager *)0x0) {
      pWVar30 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRef
                         (this_01,targetHit->woId,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
        FUN_?();
      }
      VStack_3.x = 0.0;
      VStack_3.y = 0.0;
      VStack_3.z = 0.0;
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar5 = func_?(&UNK_?);
        FUN_?(uVar5,0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcRam_? = pcVar4;
      (*pcRam_?)(&VStack_3);
      pEVar31 = (ESSelection_PickResult_1_WorldObjectClientRef_ *)
                FUN_?(TypeInfo__ESSelection__PickResult<WorldObjectClientRef>);
      VStack_24.point.x = (targetHit->point).x;
      VStack_24.point.y = (targetHit->point).y;
      VStack_24._8_8_ = *(undefined8 *)&(targetHit->point).z;
      VStack_24.normal.y = (targetHit->normal).y;
      VStack_24.normal.z = (targetHit->normal).z;
      VStack_24.cubePos = targetHit->cubePos;
      VStack_24._30_2_ = *(undefined2 *)&targetHit->field_0x1e;
      stack0xfffffffffffffee0 = CONCAT44(fStack_8,VStack_3.z);
      VStack_24.face = targetHit->face;
      VStack_24.isCubeHit = targetHit->isCubeHit;
      VStack_24._37_3_ = *(undefined3 *)&targetHit->field_0x25;
      VStack_24.woId = targetHit->woId;
      VStack_24._44_4_ = *(undefined4 *)&targetHit->field_0x2c;
      VStack_24.cube = targetHit->cube;
      VStack_24.distance = targetHit->distance;
      VStack_24._60_4_ = *(undefined4 *)&targetHit->field_0x3c;
      VStack_24.collider = targetHit->collider;
      VStack_24.transform = targetHit->transform;
      VStack_24.interactionFlags = targetHit->interactionFlags;
      VStack_7.x = VStack_3.x;
      VStack_7.y = VStack_3.y;
      ESSelection+PickResult`1[System::Object]::ESSelection_PickResult_1_System_Object___ctor
                ((ESSelection_PickResult_1_System_Object_ *)pEVar31,&VStack_7,&VStack_24,
                 (Object *)pWVar30,
                 MethodInfo__ESSelection__PickResult<WorldObjectClientRef>__PickResult_UnityEngine__Vector3__VoxelHit__WorldObjectClientRef_
                );
      bVar25 = iRam_? != 0;
      (this->fields).pickedTarget = pEVar31;
      if (bVar25) {
        uVar26 = (uint)((ulonglong)&(this->fields).pickedTarget >> 0xc);
        lVar27 = (ulonglong)((uVar26 & 0x1fffff) >> 6) * 8;
        do {
          uVar28 = *(ulonglong *)(lVar27 + 0xADDR);
          puVar29 = (ulonglong *)(lVar27 + 0xADDR);
          LOCK();
          bVar25 = uVar28 == *puVar29;
          if (bVar25) {
            *puVar29 = uVar28 | 1L << (uVar26 & 0x3f);
          }
          UNLOCK();
        } while (!bVar25);
      }
      pSVar32 = (e->fields).selectionController;
      if (pSVar32 != (SelectionController *)0x0) {
        this_02 = SelectionController::SelectionController_get_SelectedWOs(pSVar32,(MethodInfo *)0x0)
        ;
        pEVar31 = (this->fields).pickedTarget;
        if (((pEVar31 != (ESSelection_PickResult_1_WorldObjectClientRef_ *)0x0) &&
            ((pEVar31->fields).data != (WorldObjectClientRef *)0x0)) &&
           (item = (Object *)FUN_?(), this_02 != (HashSet_1_MVWorldObjectClient_ *)0x0)) {
          bVar1 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
                  HashSet_1_System_Object__Contains
                            ((HashSet_1_System_Object_ *)this_02,item,
                             MethodInfo__System__Collections__Generic__HashSet<MVWorldObjectClient>__Contains_MVWorldObjectClient_
                            );
          if (bVar1 == 0) {
            pEVar31 = (this->fields).pickedTarget;
            if ((pEVar31 == (ESSelection_PickResult_1_WorldObjectClientRef_ *)0x0) ||
               (pSVar32 = (e->fields).selectionController, pSVar32 == (SelectionController *)0x0))
            goto code_?;
            VStack_24.point.x = (pEVar31->fields).hit.point.x;
            VStack_24.point.y = (pEVar31->fields).hit.point.y;
            VStack_24._8_8_ = *(undefined8 *)&(pEVar31->fields).hit.point.z;
            VStack_24.normal.y = (pEVar31->fields).hit.normal.y;
            VStack_24.normal.z = (pEVar31->fields).hit.normal.z;
            VStack_24.cubePos = (pEVar31->fields).hit.cubePos;
            VStack_24._30_2_ = *(undefined2 *)&(pEVar31->fields).hit.field_0x1e;
            VStack_24.face = (pEVar31->fields).hit.face;
            VStack_24.isCubeHit = (pEVar31->fields).hit.isCubeHit;
            VStack_24._37_3_ = *(undefined3 *)&(pEVar31->fields).hit.field_0x25;
            VStack_24.woId = (pEVar31->fields).hit.woId;
            VStack_24._44_4_ = *(undefined4 *)&(pEVar31->fields).hit.field_0x2c;
            VStack_24.cube = (pEVar31->fields).hit.cube;
            VStack_24.distance = (pEVar31->fields).hit.distance;
            VStack_24._60_4_ = *(undefined4 *)&(pEVar31->fields).hit.field_0x3c;
            VStack_24.collider = (pEVar31->fields).hit.collider;
            VStack_24.transform = (pEVar31->fields).hit.transform;
            VStack_24.interactionFlags = (pEVar31->fields).hit.interactionFlags;
            pWVar30 = SelectionController::SelectionController_Select_1
                               (pSVar32,&VStack_24,0,1,(MethodInfo *)0x0);
            (this->fields).selectedWorldObject = pWVar30;
            func_?(&(this->fields).selectedWorldObject);
          }
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void HandleRightClickUpSelection(EditorStateMachine) */

void Assembly-CSharp.dll::ESSelection::ESSelection_HandleRightClickUpSelection
               (ESSelection *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_There_should_be_selected_objects);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).pickedLink != (ESSelection_PickResult_1_LinkObjectBase_ *)0x0) {
    pEVar1 = (this->fields).pickedLink;
    VStack_2.x = (pEVar1->fields).mousePosition.x;
    VStack_2.y = (pEVar1->fields).mousePosition.y;
    VStack_2.z = (pEVar1->fields).mousePosition.z;
    bVar3 = ESSelection_IsMouseUpValid(this,&VStack_2,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      pCVar4 = (this->fields).contextMenuController;
      if (pCVar4 == (ContextMenuController *)0x0) goto code_?;
      ContextMenuController::ContextMenuController_PopGizmos(pCVar4,(MethodInfo *)0x0);
      pEVar1 = (this->fields).pickedLink;
      if (pEVar1 == (ESSelection_PickResult_1_LinkObjectBase_ *)0x0) goto code_?;
      bVar5 = iRam_? != 0;
      (this->fields).selectedLinkObject = (pEVar1->fields).data;
      if (bVar5) {
        uVar6 = (uint)((ulonglong)&(this->fields).selectedLinkObject >> 0xc);
        lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
        do {
          uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
          puVar9 = (ulonglong *)(lVar7 + 0xADDR);
          LOCK();
          bVar5 = uVar8 == *puVar9;
          if (bVar5) {
            *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar5);
      }
      pLVar10 = (this->fields).selectedLinkObject;
      if (((pLVar10 == (LinkObjectBase *)0x0) ||
          (pEVar1 = (this->fields).pickedLink,
          pEVar1 == (ESSelection_PickResult_1_LinkObjectBase_ *)0x0)) ||
         (pCVar4 = (this->fields).contextMenuController, pCVar4 == (ContextMenuController *)0x0))
      goto code_?;
      VStack_2.x = (pEVar1->fields).hit.point.x;
      VStack_2.y = (pEVar1->fields).hit.point.y;
      VStack_2.z = (pEVar1->fields).hit.point.z;
      ContextMenuController::ContextMenuController_ShowContextMenuLink
                (pCVar4,(pLVar10->fields).linkID,(pLVar10->fields).isObjectLink,&VStack_2,
                 (MethodInfo *)0x0);
      goto code_?;
    }
  }
  if ((this->fields).pickedTarget != (ESSelection_PickResult_1_WorldObjectClientRef_ *)0x0) {
    pEVar11 = (this->fields).pickedTarget;
    VStack_2.x = (pEVar11->fields).mousePosition.x;
    VStack_2.y = (pEVar11->fields).mousePosition.y;
    VStack_2.z = (pEVar11->fields).mousePosition.z;
    bVar3 = ESSelection_IsMouseUpValid(this,&VStack_2,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      pCVar4 = (this->fields).contextMenuController;
      if (pCVar4 == (ContextMenuController *)0x0) {
code_?:
        FUN_?();
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      ContextMenuController::ContextMenuController_PopGizmos(pCVar4,(MethodInfo *)0x0);
      bVar3 = ESSelection_CheckAndExecuteOnClickHandler
                         (this,e,(this->fields).pickedTarget,(MethodInfo *)0x0);
      if (bVar3 == 0) {
        if (((e == (EditorStateMachine *)0x0) ||
            (pSVar13 = (e->fields).selectionController, pSVar13 == (SelectionController *)0x0)) ||
           (pHVar14 = (pSVar13->fields).selectedIDs, pHVar14 == (HashSet_1_System_Int32_ *)0x0))
        goto code_?;
        if ((pHVar14->fields)._count == 1) {
          if (cRam_? == '\0') {
            FUN_?();
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar15 = MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__;
          pWVar16 = (this->fields).selectedWorldObject;
          if ((pWVar16 == (WorldObjectClientRef *)0x0) ||
             (pMVar17 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0),
             pMVar17 == (MVWorldObjectClientManager *)0x0)) goto code_?;
          pOVar18 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient_1
                              (pMVar17,(pWVar16->fields)._.woId,pMVar15->klass->rgctx_data[1].method
                              );
          pMVar15 = MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__;
          if (pOVar18 != (Object *)0x0) {
            pWVar16 = (this->fields).selectedWorldObject;
            pCVar4 = (this->fields).contextMenuController;
            if ((((pWVar16 == (WorldObjectClientRef *)0x0) ||
                 (pMVar17 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0),
                 pMVar17 == (MVWorldObjectClientManager *)0x0)) ||
                (pOVar18 = MVWorldObjectClientManager::
                           MVWorldObjectClientManager_GetWorldObjectClient_1
                                     (pMVar17,(pWVar16->fields)._.woId,
                                      pMVar15->klass->rgctx_data[1].method),
                pOVar18 == (Object *)0x0)) ||
               ((pEVar11 = (this->fields).pickedTarget,
                pEVar11 == (ESSelection_PickResult_1_WorldObjectClientRef_ *)0x0 ||
                (pCVar4 == (ContextMenuController *)0x0)))) goto code_?;
            VStack_2.x = (pEVar11->fields).hit.point.x;
            VStack_2.y = (pEVar11->fields).hit.point.y;
            VStack_2.z = (pEVar11->fields).hit.point.z;
            ContextMenuController::ContextMenuController_ShowContextMenu
                      (pCVar4,*(int32_t *)&pOVar18[1].klass,&VStack_2,(MethodInfo *)0x0);
          }
        }
        else {
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                    ((Object *)StringLiteral_There_should_be_selected_objects,(MethodInfo *)0x0);
        }
      }
    }
  }
code_?:
  iVar19 = iRam_?;
  (this->fields).pickedTarget = (ESSelection_PickResult_1_WorldObjectClientRef_ *)0x0;
  if (iVar19 != 0) {
    uVar6 = (uint)((ulonglong)&(this->fields).pickedTarget >> 0xc);
    lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
    do {
      uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
      puVar9 = (ulonglong *)(lVar7 + 0xADDR);
      LOCK();
      bVar5 = uVar8 == *puVar9;
      if (bVar5) {
        *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
      iVar19 = iRam_?;
    } while (!bVar5);
  }
  (this->fields).pickedLink = (ESSelection_PickResult_1_LinkObjectBase_ *)0x0;
  if (iVar19 != 0) {
    uVar6 = (uint)((ulonglong)&(this->fields).pickedLink >> 0xc);
    lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
    do {
      uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
      puVar9 = (ulonglong *)(lVar7 + 0xADDR);
      LOCK();
      bVar5 = uVar8 == *puVar9;
      if (bVar5) {
        *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  return;
}


/* Boolean IsMouseUpValid(Vector3) */

bool Assembly-CSharp.dll::ESSelection::ESSelection_IsMouseUpValid
               (ESSelection *this,Vector3 *mousePosition,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  uStack_1 = 0;
  fStack_2 = 0.0;
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar3 = (code *)swi(3);
    bVar5 = (*pcVar3)();
    return bVar5;
  }
  pcRam_? = pcVar3;
  (*pcRam_?)(&uStack_1);
  uVar6 = mousePosition->x;
  uStack_1._4_4_ = mousePosition->y - uStack_1._4_4_;
  fStack_2 = mousePosition->z - fStack_2;
  return uStack_1._4_4_ * uStack_1._4_4_ +
         ((float)uVar6 - (float)uStack_1) * ((float)uVar6 - (float)uStack_1) +
         fStack_2 * fStack_2 < _UNK_?;
}


/* Void PopMenuGizmos() */

void Assembly-CSharp.dll::ESSelection::ESSelection_PopMenuGizmos
               (ESSelection *this,MethodInfo *method)

{
  this_00 = (this->fields).contextMenuController;
  if (this_00 == (ContextMenuController *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__ContextMenuController____c___PopGizmos_b__18_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ContextMenuController____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this_00,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__ContextMenuController____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__ContextMenuController____c);
  }
  this_02 = TypeInfo__ContextMenuController____c->static_fields->__9__18_0;
  if (this_02 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if (*(int *)&(TypeInfo__ContextMenuController____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ContextMenuController____c);
    }
    object = TypeInfo__ContextMenuController____c->static_fields->__9;
    this_02 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_02,(Object *)object,
               MethodInfo__ContextMenuController____c___PopGizmos_b__18_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__ContextMenuController____c->static_fields->__9__18_0 = this_02;
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&TypeInfo__ContextMenuController____c->static_fields->__9__18_0 >>
                     0xc);
      puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar5 = *puVar4;
        LOCK();
        uVar6 = *puVar4;
        if (uVar5 == uVar6) {
          *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (uVar5 != uVar6);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar7 = 
  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
  ;
  if ((
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    if ((pMVar7->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar7);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
            (pGVar2,(IList_1_UnityEngine_Transform_ *)
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                    s_InternalTransformList,(MethodInfo *)0x0);
  pLVar8 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
           s_InternalTransformList;
  if (pLVar8 != (List_1_UnityEngine_Transform_ *)0x0) {
    lVar9 = (longlong)(pLVar8->fields)._size;
    uVar3 = 0;
    if (0 < lVar9) {
      lVar10 = 0;
      lVar11 = 0x20;
      do {
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pLVar8 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar8 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
        if ((uint)(pLVar8->fields)._size <= uVar3) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pTVar12 = (pLVar8->fields)._items;
        if (pTVar12 == (Transform__Array *)0x0) goto code_?;
        if ((uint)pTVar12->max_length <= uVar3) {
          FUN_?();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        this_01 = *(Component **)((longlong)pTVar12->vector + lVar11 + -0x20);
        if (this_01 == (Component *)0x0) goto code_?;
        pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           (this_01,(MethodInfo *)0x0);
        bVar13 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_Execute_18
                          (pGVar2,(BaseEventData *)0x0,
                           (ExecuteEvents_EventFunction_1_System_Object_ *)this_02,
                           (pMVar7->field7_0x38).rgctx_data[1].method);
        if (bVar13 != 0) {
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    (this_01,(MethodInfo *)0x0);
          return;
        }
        uVar3 = uVar3 + 1;
        lVar10 = lVar10 + 1;
        lVar11 = lVar11 + 8;
      } while (lVar10 < lVar9);
    }
    return;
  }
code_?:
  FUN_?();
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
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__;
  pWVar2 = (this->fields).selectedWorldObject;
  if ((pWVar2 != (WorldObjectClientRef *)0x0) &&
     (pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0),
     pMVar3 != (MVWorldObjectClientManager *)0x0)) {
    pOVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient_1
                       (pMVar3,(pWVar2->fields)._.woId,pMVar1->klass->rgctx_data[1].method);
    pMVar1 = MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__;
    if (pOVar4 == (Object *)0x0) {
      return;
    }
    pWVar2 = (this->fields).selectedWorldObject;
    if ((((pWVar2 != (WorldObjectClientRef *)0x0) &&
         (pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0),
         pMVar3 != (MVWorldObjectClientManager *)0x0)) &&
        (pOVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient_1
                            (pMVar3,(pWVar2->fields)._.woId,pMVar1->klass->rgctx_data[1].method),
        pOVar4 != (Object *)0x0)) && (e != (WorldObjectDestroyedEventArgs *)0x0)) {
      if (*(int *)&pOVar4[1].klass == (e->fields).WordObjectID) {
        this_00 = (this->fields).editorStateMachine;
        if (this_00 == (EditorStateMachine *)0x0) goto code_?;
        FSMEntity::FSMEntity_PopState((FSMEntity *)this_00,(MethodInfo *)0x0);
      }
      return;
    }
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void ShowContextMenuGizmo() */

void Assembly-CSharp.dll::ESSelection::ESSelection_ShowContextMenuGizmo
               (ESSelection *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__;
  pWVar2 = (this->fields).selectedWorldObject;
  if ((pWVar2 != (WorldObjectClientRef *)0x0) &&
     (pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0),
     pMVar3 != (MVWorldObjectClientManager *)0x0)) {
    pOVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient_1
                       (pMVar3,(pWVar2->fields)._.woId,pMVar1->klass->rgctx_data[1].method);
    pMVar1 = MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__;
    if (pOVar4 == (Object *)0x0) {
      return;
    }
    pWVar2 = (this->fields).selectedWorldObject;
    this_00 = (this->fields).contextMenuController;
    if ((((pWVar2 != (WorldObjectClientRef *)0x0) &&
         (pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0),
         pMVar3 != (MVWorldObjectClientManager *)0x0)) &&
        (pOVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient_1
                            (pMVar3,(pWVar2->fields)._.woId,pMVar1->klass->rgctx_data[1].method),
        pOVar4 != (Object *)0x0)) &&
       ((pEVar5 = (this->fields).pickedTarget,
        pEVar5 != (ESSelection_PickResult_1_WorldObjectClientRef_ *)0x0 &&
        (this_00 != (ContextMenuController *)0x0)))) {
      VStack_6.x = (pEVar5->fields).hit.point.x;
      VStack_6.y = (pEVar5->fields).hit.point.y;
      VStack_6.z = (pEVar5->fields).hit.point.z;
      ContextMenuController::ContextMenuController_ShowContextMenu
                (this_00,*(int32_t *)&pOVar4[1].klass,&VStack_6,(MethodInfo *)0x0);
      return;
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
    aVStack_3[0].x = (pEVar2->fields).hit.point.x;
    aVStack_3[0].y = (pEVar2->fields).hit.point.y;
    aVStack_3[0].z = (pEVar2->fields).hit.point.z;
    ContextMenuController::ContextMenuController_ShowContextMenuLink
              (this_00,(pLVar1->fields).linkID,(pLVar1->fields).isObjectLink,aVStack_3,
               (MethodInfo *)0x0);
    return;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* ESSelection(ContextMenuController, GizmoController) */

void Assembly-CSharp.dll::ESSelection::ESSelection__ctor
               (ESSelection *this,ContextMenuController *contextMenuController,
               GizmoController *gizmoController,MethodInfo *method)

{
  pWVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRefNullRef
                     ((MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields).selectedWorldObject = pWVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).selectedWorldObject >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  ESStateBase::ESStateBase__ctor((ESStateBase *)this,(MethodInfo *)0x0);
  iVar7 = iRam_?;
  (this->fields).contextMenuController = contextMenuController;
  if (iVar7 != 0) {
    uVar3 = (uint)((ulonglong)&(this->fields).contextMenuController >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
      iVar7 = iRam_?;
    } while (!bVar2);
  }
  (this->fields).gizmoController = gizmoController;
  if (iVar7 != 0) {
    uVar3 = (uint)((ulonglong)&(this->fields).gizmoController >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  return;
}

