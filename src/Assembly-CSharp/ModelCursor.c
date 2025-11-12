
/* Void HandleLaser(CubePickingInfo, CubePickingInfo, GameObject, BuildState, Boolean) */

void Assembly-CSharp.dll::ModelCursor::ModelCursor_HandleLaser
               (ModelCursor *this,CubePickingInfo *movingEdgeCube,CubePickingInfo *selectedCube,
               GameObject *targetGameObject,BuildState__Enum buildState,bool addCube,
               MethodInfo *method)

{
  if (buildState == BuildState__Enum_PaintCubes) {
    VStack_1.x = 0.0;
    VStack_1.y = 0.0;
    VStack_1.z = 0.0;
    bVar2 = DrawPlane::DrawPlane_Pick(&VStack_1,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      pGVar3 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
      if (((pGVar3 != (GameEventManager *)0x0) &&
          (pGVar4 = (pGVar3->fields).AvatarCommandsBuildMode,
          pGVar4 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
         (pGVar5 = (pGVar4->fields).LaserCommands,
         pGVar5 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)) {
        pAVar6 = (pGVar5->fields).OnActivateLaserForDuration;
        if (pAVar6 != (Action_1_Single_ *)0x0) {
          (*(pAVar6->fields)._._.invoke_impl)
                    ((pAVar6->fields)._._.method_code,_UNK_?,(pAVar6->fields)._._.method);
        }
        pGVar3 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
        if (((pGVar3 != (GameEventManager *)0x0) &&
            (pGVar4 = (pGVar3->fields).AvatarCommandsBuildMode,
            pGVar4 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
           (pGVar5 = (pGVar4->fields).LaserCommands,
           pGVar5 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)) {
          pAVar7 = (pGVar5->fields).OnUpdatePosition;
          if (pAVar7 == (Action_1_UnityEngine_Vector3_ *)0x0) {
            return;
          }
          VStack_8.z = VStack_1.z;
          VStack_8.x = VStack_1.x;
          VStack_8.y = VStack_1.y;
          (*(pAVar7->fields)._._.invoke_impl)
                    ((pAVar7->fields)._._.method_code,&VStack_8,(pAVar7->fields)._._.method);
          return;
        }
      }
      goto code_?;
    }
  }
  else {
    if (movingEdgeCube == (CubePickingInfo *)0x0) {
      if (addCube == 0) {
        if (selectedCube == (CubePickingInfo *)0x0) {
          return;
        }
        pGVar3 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
        if (((pGVar3 != (GameEventManager *)0x0) &&
            (pGVar4 = (pGVar3->fields).AvatarCommandsBuildMode,
            pGVar4 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
           (pGVar5 = (pGVar4->fields).LaserCommands,
           pGVar5 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)) {
          pAVar7 = (pGVar5->fields).OnUpdatePosition;
          if (pAVar7 == (Action_1_UnityEngine_Vector3_ *)0x0) {
            return;
          }
          VStack_1.z = (selectedCube->fields).point.z;
          VStack_1.x = (selectedCube->fields).point.x;
          VStack_1.y = (selectedCube->fields).point.y;
          (*(pAVar7->fields)._._.invoke_impl)
                    ((pAVar7->fields)._._.method_code,&VStack_1,(pAVar7->fields)._._.method);
          return;
        }
        goto code_?;
      }
      pGVar3 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
      if ((pGVar3 == (GameEventManager *)0x0) ||
         (pGVar4 = (pGVar3->fields).AvatarCommandsBuildMode,
         pGVar4 == (GameEventManager_AvatarCommandsBuildModeManager *)0x0))
      goto code_?;
      pGVar5 = (pGVar4->fields).LaserCommands;
    }
    else {
      ModelCursor_HandleLaserMovingEdge(this,movingEdgeCube,targetGameObject,(MethodInfo *)0x0);
      pGVar3 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
      if ((pGVar3 == (GameEventManager *)0x0) ||
         (pGVar4 = (pGVar3->fields).AvatarCommandsBuildMode,
         pGVar4 == (GameEventManager_AvatarCommandsBuildModeManager *)0x0))
      goto code_?;
      pGVar5 = (pGVar4->fields).LaserCommands;
    }
    if (pGVar5 == (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0) {
code_?:
      FUN_?();
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pAVar6 = (pGVar5->fields).OnActivateLaserForDuration;
    if (pAVar6 != (Action_1_Single_ *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pAVar6->fields)._._.invoke_impl)
                ((pAVar6->fields)._._.method_code,_UNK_?,(pAVar6->fields)._._.method);
      return;
    }
  }
  return;
}


/* Void HandleLaserMovingEdge(CubePickingInfo, GameObject) */

void Assembly-CSharp.dll::ModelCursor::ModelCursor_HandleLaserMovingEdge
               (ModelCursor *this,CubePickingInfo *movingEdgeCube,GameObject *targetGameObject,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Cube);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (movingEdgeCube != (CubePickingInfo *)0x0) {
    pCVar1 = (movingEdgeCube->fields).cube;
    FVar2 = (movingEdgeCube->fields).pickedFace;
    uVar3._0_2_ = (movingEdgeCube->fields).iLocalPos.x;
    uVar3._2_2_ = (movingEdgeCube->fields).iLocalPos.y;
    iVar4 = (movingEdgeCube->fields).iLocalPos.z;
    if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
      FUN_?();
    }
    IStackX_18._0_4_ = uVar3;
    IStackX_18.z = iVar4;
    pVVar5 = Cube::Cube_GetFaceVerticesWorld
                        (targetGameObject,pCVar1,FVar2,&IStackX_18,(MethodInfo *)0x0);
    if (pVVar5 != (Vector3__Array *)0x0) {
      if (((int)pVVar5->max_length != 0) && (1 < (uint)pVVar5->max_length)) {
        uVar6 = pVVar5->vector[1].x;
        uVar7 = pVVar5->vector[1].y;
        uStack_8._0_4_ = pVVar5->vector[0].x;
        uStack_8._4_4_ = pVVar5->vector[0].y;
        fVar9 = (float)uVar6 + (float)(undefined4)uStack_8;
        fVar10 = (float)uVar7 + (float)uStack_8._4_4_;
        if (2 < (uint)pVVar5->max_length) {
          uStack_8._0_4_ = pVVar5->vector[2].x;
          uStack_8._4_4_ = pVVar5->vector[2].y;
          fVar9 = fVar9 + (float)(undefined4)uStack_8;
          fVar10 = fVar10 + (float)uStack_8._4_4_;
          if (3 < (uint)pVVar5->max_length) {
            uStack_8._0_4_ = pVVar5->vector[3].x;
            uStack_8._4_4_ = pVVar5->vector[3].y;
            fVar11 = (fVar9 + (float)(undefined4)uStack_8) * _UNK_?;
            fVar9 = (pVVar5->vector[1].z + pVVar5->vector[0].z + pVVar5->vector[2].z +
                     pVVar5->vector[3].z) * _UNK_?;
            fVar10 = (fVar10 + (float)uStack_8._4_4_) * _UNK_?;
            if ((movingEdgeCube->fields).pickedEdge == 0) {
              uStack_12 = CONCAT44(fVar10,fVar11);
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__UnityEngine__Vector3);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pVVar13 = TypeInfo__UnityEngine__Vector3->static_fields;
              uStack_8._0_4_ = (pVVar13->upVector).x;
              uStack_8._4_4_ = (pVVar13->upVector).y;
              fVar14 = fVar9 + (pVVar13->upVector).z;
              fVar15 = fVar11 + (float)(undefined4)uStack_8;
              fVar16 = fVar10 + (float)uStack_8._4_4_;
              if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                FUN_?();
              }
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__UnityEngine__Debug);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              uVar17 = _UNK_?;
              uVar18 = _UNK_?;
              if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                FUN_?();
              }
              uStack_19 = CONCAT44(fVar10,fVar11);
              uStack_20 = uVar18;
              uStack_21 = uVar17;
              uStack_8 = CONCAT44(fVar16,fVar15);
              fStack_22 = fVar9;
              fStack_23 = fVar14;
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__UnityEngine__Debug);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                FUN_?();
              }
              pcVar24 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar24 = (code *)FUN_?(&UNK_?), pcVar24 == (code *)0x0)) {
                uVar18 = func_?(&UNK_?);
                FUN_?(uVar18,0);
                pcVar24 = (code *)swi(3);
                (*pcVar24)();
                return;
              }
              pcRam_? = pcVar24;
              (*pcRam_?)(&uStack_19,&uStack_8,&uStack_20,0,1);
            }
            else {
              pCVar1 = (movingEdgeCube->fields).cube;
              FVar2 = (movingEdgeCube->fields).pickedFace;
              edge = (movingEdgeCube->fields).pickedEdge;
              uVar25._0_2_ = (movingEdgeCube->fields).iLocalPos.x;
              uVar25._2_2_ = (movingEdgeCube->fields).iLocalPos.y;
              iVar4 = (movingEdgeCube->fields).iLocalPos.z;
              if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
                FUN_?();
              }
              IStackX_18._0_4_ = uVar25;
              IStackX_18.z = iVar4;
              pVVar5 = Cube::Cube_GetEdgeVerticesWorld
                                  (targetGameObject,pCVar1,FVar2,edge,&IStackX_18,(MethodInfo *)0x0)
              ;
              if ((movingEdgeCube->fields).pickedEdgeIndex0 == 0) {
                if (pVVar5 == (Vector3__Array *)0x0) goto code_?;
                if ((movingEdgeCube->fields).pickedEdgeIndex1 == 0) {
                  if (((int)pVVar5->max_length == 0) || ((uint)pVVar5->max_length < 2))
                  goto code_?;
                  uVar26 = pVVar5->vector[1].x;
                  uVar27 = pVVar5->vector[1].y;
                  uStack_8._0_4_ = pVVar5->vector[0].x;
                  uStack_8._4_4_ = pVVar5->vector[0].y;
                  fStack_28 = (pVVar5->vector[1].z + pVVar5->vector[0].z) * _UNK_?;
                  uStack_12 = CONCAT44(((float)uVar27 + (float)uStack_8._4_4_) * _UNK_?,
                                       ((float)uVar26 + (float)(undefined4)uStack_8) *
                                       _UNK_?);
                }
                else {
                  if ((uint)pVVar5->max_length < 2) goto code_?;
                  uStack_12._0_4_ = pVVar5->vector[1].x;
                  uStack_12._4_4_ = pVVar5->vector[1].y;
                  fStack_28 = pVVar5->vector[1].z;
                }
              }
              else {
                if (pVVar5 == (Vector3__Array *)0x0) goto code_?;
                if ((int)pVVar5->max_length == 0) goto code_?;
                uStack_12._0_4_ = pVVar5->vector[0].x;
                uStack_12._4_4_ = pVVar5->vector[0].y;
                fStack_28 = pVVar5->vector[0].z;
                uStack_19 = uStack_12;
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__UnityEngine__Vector3);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pVVar13 = TypeInfo__UnityEngine__Vector3->static_fields;
                uStack_8._0_4_ = (pVVar13->upVector).x;
                uStack_8._4_4_ = (pVVar13->upVector).y;
                fVar14 = fStack_28 + (pVVar13->upVector).z;
                fVar15 = (float)uStack_19 + (float)(undefined4)uStack_8;
                fVar16 = uStack_19._4_4_ + (float)uStack_8._4_4_;
                if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                  FUN_?();
                }
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__UnityEngine__Debug);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                uVar17 = _UNK_?;
                uVar18 = _UNK_?;
                if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                  FUN_?();
                }
                uStack_19 = CONCAT44(fVar16,fVar15);
                uStack_20 = uVar18;
                uStack_21 = uVar17;
                fStack_22 = fVar14;
                uStack_8 = uStack_12;
                fStack_23 = fStack_28;
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__UnityEngine__Debug);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                  FUN_?();
                }
                pcVar24 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar24 = (code *)FUN_?(&UNK_?), pcVar24 == (code *)0x0)) {
                  uVar18 = func_?(&UNK_?);
                  FUN_?(uVar18,0);
                  pcVar24 = (code *)swi(3);
                  (*pcVar24)();
                  return;
                }
                pcRam_? = pcVar24;
                (*pcRam_?)(&uStack_8,&uStack_19,&uStack_20,0,1);
              }
              fVar9 = (fVar9 - fStack_28) * _UNK_? + fStack_28;
              uStack_12 = CONCAT44((fVar10 - uStack_12._4_4_) * _UNK_? + uStack_12._4_4_,
                                   (fVar11 - (float)uStack_12) * _UNK_? + (float)uStack_12);
            }
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__MVGameControllerBase);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pMVar29 = TypeInfo__MVGameControllerBase->static_fields->instance;
            if ((((pMVar29 != (MVGameControllerBase *)0x0) &&
                 (pMVar30 = (pMVar29->fields).game, pMVar30 != (MVNetworkGame *)0x0)) &&
                (pGVar31 = (pMVar30->fields).GameEventManager, pGVar31 != (GameEventManager *)0x0))
               && ((pGVar32 = (pGVar31->fields).AvatarCommandsBuildMode,
                   pGVar32 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0 &&
                   (pGVar33 = (pGVar32->fields).LaserCommands,
                   pGVar33 !=
                   (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)))) {
              pAVar34 = (pGVar33->fields).OnUpdatePosition;
              if (pAVar34 != (Action_1_UnityEngine_Vector3_ *)0x0) {
                uStack_8 = uStack_12;
                fStack_23 = fVar9;
                (*(pAVar34->fields)._._.invoke_impl)
                          ((pAVar34->fields)._._.method_code,&uStack_8,(pAVar34->fields)._._.method
                          );
              }
              return;
            }
            goto code_?;
          }
        }
      }
code_?:
      FUN_?();
      pcVar24 = (code *)swi(3);
      (*pcVar24)();
      return;
    }
  }
code_?:
  FUN_?();
  pcVar24 = (code *)swi(3);
  (*pcVar24)();
  return;
}


/* Void Remove() */

void Assembly-CSharp.dll::ModelCursor::ModelCursor_Remove(ModelCursor *this,MethodInfo *method)

{
  pFVar1 = (this->fields).faceCursor;
  if (pFVar1 != (FaceCursor *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    obj_00 = (pFVar1->fields).gameObject;
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
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
              ((Object_1 *)obj_00,0.0,(MethodInfo *)0x0);
    pCVar2 = (this->fields).errorCursor;
    if (pCVar2 != (CellCursor *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<CellCursorCubeLineMesh>__Dispose__
                      ,0);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<CellCursorCubeLineMesh>__MoveNext__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<CellCursorCubeLineMesh>__get_Current__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<CellCursorCubeLineMesh>__Clear__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<CellCursorCubeLineMesh>__GetEnumerator__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pLVar3 = (pCVar2->fields).cursorCubes;
      if (pLVar3 != (List_1_CellCursorCubeLineMesh_ *)0x0) {
        if (iRam_? != 0) {
          uVar4 = (uint)((ulonglong)&uStack_5 >> 0xc);
          uVar6 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
          do {
            uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
            puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
            LOCK();
            bVar9 = uVar7 == *puVar8;
            if (bVar9) {
              *puVar8 = uVar7 | 1L << (uVar4 & 0x3f);
            }
            UNLOCK();
          } while (!bVar9);
        }
        puStack_10 = (undefined1 *)((ulonglong)(uint)(pLVar3->fields)._version << 0x20);
        puStack_11 = (undefined *)0x0;
        LStack_12._8_8_ = puStack_10;
        LStack_12._current = (Object *)0x0;
        uStack_5 = 0;
        puStack_10 = (undefined1 *)&LStack_12;
        LStack_12._list = (List_1_System_Object_ *)pLVar3;
        while (bVar13 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                       Object]::List_1_T_Enumerator_System_Object__MoveNext
                                 (&LStack_12,
                                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<CellCursorCubeLineMesh>__MoveNext__
                                 ), pOVar14 = LStack_12._current, bVar13 != 0) {
          if (LStack_12._current == (Object *)0x0) goto code_?;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Object);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          obj = (Object_1 *)pOVar14[2].monitor;
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
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
                    (obj,0.0,(MethodInfo *)0x0);
        }
        pLVar3 = (pCVar2->fields).cursorCubes;
        if (pLVar3 != (List_1_CellCursorCubeLineMesh_ *)0x0) {
          piVar15 = &(pLVar3->fields)._version;
          *piVar15 = *piVar15 + 1;
          length = (pLVar3->fields)._size;
          (pLVar3->fields)._size = 0;
          if (0 < length) {
            mscorlib.dll::System::Array::Array_Clear
                      ((Array *)(pLVar3->fields)._items,0,length,(MethodInfo *)0x0);
          }
          return;
        }
      }
      FUN_?();
code_?:
      FUN_?();
      FUN_?();
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
  }
  FUN_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void SetErrorCursor(IntVector, GameObject, Boolean) */

void Assembly-CSharp.dll::ModelCursor::ModelCursor_SetErrorCursor
               (ModelCursor *this,IntVector *iPos,GameObject *targetGameObject,
               bool showUnlockNotification,MethodInfo *method)

{
  this_00 = (this->fields).errorCursor;
  if (this_00 != (CellCursor *)0x0) {
    IStackX_8.x = iPos->x;
    IStackX_8.y = iPos->y;
    IStackX_8.z = iPos->z;
    this_01 = CellCursor::CellCursor_GetCellCursor(this_00,&IStackX_8,(MethodInfo *)0x0);
    if (this_01 != (CellCursorCubeLineMesh *)0x0) {
      IStackX_8.x = iPos->x;
      IStackX_8.y = iPos->y;
      IStackX_8.z = iPos->z;
      CellCursorCubeLineMesh::CellCursorCubeLineMesh_SetCursorCube
                (this_01,&IStackX_8,targetGameObject,(MethodInfo *)0x0);
      if (showUnlockNotification != 0) {
        ModelCursor_ShowUnlockMaterialNotification
                  (0,NotificationLifetime__Enum_Low,(MethodInfo *)0x0);
      }
      return;
    }
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void ShowUnlockMaterialNotification(Boolean, NotificationLifetime) */

void Assembly-CSharp.dll::ModelCursor::ModelCursor_ShowUnlockMaterialNotification
               (bool useIt,NotificationLifetime__Enum lifetime,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__NotificationController);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Unlock_this_material_in_order_to);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Unlock_this_material_in_order_to);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_Unlock_this_material_in_order_to;
  if (useIt == 0) {
    pSVar1 = StringLiteral_Unlock_this_material_in_order_to;
  }
  pSVar1 = TM::TM__(pSVar1,(MethodInfo *)0x0);
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
             *)FUN_?(
                            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  auStackX_8[0] = 1;
  pOVar2 = (Object *)FUN_?(uRam_?,auStackX_8);
  if (this_00 ==
      (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
       *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this_00,pOVar2,(Object *)pSVar1,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  if (*(int *)&(TypeInfo__NotificationController->_1).field_0x1c == 0) {
    FUN_?();
  }
  uVar4 = 0;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  ,this_00,lifetime,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__NotificationController);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__NotificationLifetime);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar2 = (Object *)FUN_?(uRam_?,&stack0x00000018);
  value = (Object *)FUN_?(TypeInfo__NotificationLifetime,&stack0x00000018);
  if (this_00 !=
      (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
       *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this_00,pOVar2,value,
               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar4 >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__NotificationsManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (TypeInfo__NotificationsManager->static_fields->_Initialized_k__BackingField != 0) {
      if (*(int *)&(TypeInfo__NotificationController->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__NotificationsManager);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this = TypeInfo__NotificationsManager->static_fields->_activeInstance;
      if (this == (NotificationsManager *)0x0) goto code_?;
      NotificationsManager::NotificationsManager_InstantiateNotification
                (this,NotificationType__Enum_ModalNotification,
                 (Dictionary_2_System_Object_System_Object_ *)this_00,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* ModelCursor(Vector3[]) */

void Assembly-CSharp.dll::ModelCursor::ModelCursor__ctor
               (ModelCursor *this,Vector3__Array *cubeCorners,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CellCursor);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PrefabPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar1 == (PrefabPool *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  material = (pPVar1->fields).cellCursorErrorMaterial;
  this_00 = (CellCursor *)FUN_?(TypeInfo__CellCursor);
  CellCursor::CellCursor__ctor
            (this_00,1,_UNK_?,material,_UNK_?,cubeCorners,(MethodInfo *)0x0);
  bVar3 = iRam_? != 0;
  (this->fields).errorCursor = this_00;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(this->fields).errorCursor >> 0xc);
    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
    do {
      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar3 = uVar6 == *puVar7;
      if (bVar3) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar3);
  }
  return;
}


/* Void set_CursorVisible(Boolean) */

void Assembly-CSharp.dll::ModelCursor::ModelCursor_set_CursorVisible
               (ModelCursor *this,bool value,MethodInfo *method)

{
  pFVar1 = (this->fields).faceCursor;
  if ((pFVar1 != (FaceCursor *)0x0) &&
     (this_00 = (pFVar1->fields).gameObject, this_00 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_00,value,(MethodInfo *)0x0);
    pCVar2 = (this->fields).errorCursor;
    if (pCVar2 != (CellCursor *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<CellCursorCubeLineMesh>__Dispose__
                      ,value,0);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<CellCursorCubeLineMesh>__MoveNext__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<CellCursorCubeLineMesh>__get_Current__
                     );
        LOCK();
        UNLOCK();
        FUN_?();
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      LStack_3._list = (List_1_System_Object_ *)(pCVar2->fields).cursorCubes;
      if ((List_1_CellCursorCubeLineMesh_ *)LStack_3._list == (List_1_CellCursorCubeLineMesh_ *)0x0
         ) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (iRam_? != 0) {
        uVar5 = (uint)((ulonglong)&uStack_6 >> 0xc);
        puVar7 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar8 = *puVar7;
          LOCK();
          uVar9 = *puVar7;
          if (uVar8 == uVar9) {
            *puVar7 = uVar8 | 1L << (uVar5 & 0x3f);
          }
          UNLOCK();
        } while (uVar8 != uVar9);
      }
      pLStack_10 = (List_1_T_Enumerator_System_Object_ *)
                   ((ulonglong)
                    (uint)(((List_1_CellCursorCubeLineMesh_ *)LStack_3._list)->fields)._version <<
                   0x20);
      puStack_11 = (undefined *)0x0;
      LStack_3._8_8_ = pLStack_10;
      LStack_3._current = (Object *)0x0;
      uStack_6 = 0;
      pLStack_10 = &LStack_3;
      while( true ) {
        bVar12 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          (&LStack_3,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<CellCursorCubeLineMesh>__MoveNext__
                          );
        if (bVar12 == 0) {
          return;
        }
        if (LStack_3._current == (Object *)0x0) goto code_?;
        obj = (Object *)LStack_3._current[2].monitor;
        if (obj == (Object *)0x0) break;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pOVar13 = obj[1].klass;
        if (pOVar13 == (Object__Class *)0x0) {
code_?:
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException(obj,(MethodInfo *)0x0);
          break;
        }
        pcVar4 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
          uVar14 = func_?(&UNK_?);
          FUN_?(uVar14);
          goto code_?;
        }
        pcRam_? = pcVar4;
        (*pcRam_?)(pOVar13,value);
      }
      FUN_?();
code_?:
      FUN_?();
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

