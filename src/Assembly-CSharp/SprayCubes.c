
/* Void Enter(CubeModelingStateMachine) */

void Assembly-CSharp.dll::SprayCubes::SprayCubes_Enter
               (SprayCubes *this,CubeModelingStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SprayCursor);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (e != (CubeModelingStateMachine *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MV__WorldObject__CubeBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
      FUN_?();
    }
    cubeCorners = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_IdentityCorners
                            ((MethodInfo *)0x0);
    pSVar1 = (SprayCursor *)FUN_?(TypeInfo__SprayCursor);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CellCursor);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    bVar2 = cRam_? == '\0';
    (pSVar1->fields).addCubeLaserOnTime = 0.2;
    if (bVar2) {
      FUN_?(&TypeInfo__PrefabPool);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar3 = TypeInfo__PrefabPool->static_fields->instance;
    if (pPVar3 != (PrefabPool *)0x0) {
      material = (pPVar3->fields).cellCursorMaterial;
      this_00 = (CellCursor *)FUN_?(TypeInfo__CellCursor);
      CellCursor::CellCursor__ctor
                (this_00,1,_UNK_?,material,_UNK_?,cubeCorners,(MethodInfo *)0x0);
      iVar4 = iRam_?;
      (pSVar1->fields).sprayCursor = this_00;
      if (iVar4 != 0) {
        uVar5 = (uint)((ulonglong)&pSVar1->fields >> 0xc);
        uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
        do {
          uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
          puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
          LOCK();
          bVar2 = uVar7 == *puVar8;
          if (bVar2) {
            *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
          }
          UNLOCK();
          iVar4 = iRam_?;
        } while (!bVar2);
      }
      (this->fields).sprayCursor = pSVar1;
      if (iVar4 != 0) {
        uVar5 = (uint)((ulonglong)&(this->fields).sprayCursor >> 0xc);
        uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
        do {
          uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
          puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
          LOCK();
          bVar2 = uVar7 == *puVar8;
          if (bVar2) {
            *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
          }
          UNLOCK();
        } while (!bVar2);
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar9 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if ((((pMVar9 != (MVGameControllerBase *)0x0) &&
           (pMVar10 = (pMVar9->fields).game, pMVar10 != (MVNetworkGame *)0x0)) &&
          (pGVar11 = (pMVar10->fields).GameEventManager, pGVar11 != (GameEventManager *)0x0)) &&
         ((pGVar12 = (pGVar11->fields).AvatarCommandsBuildMode,
          pGVar12 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0 &&
          (pGVar13 = (pGVar12->fields).LaserCommands,
          pGVar13 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0))))
      {
        pAVar14 = (pGVar13->fields).OnChangeState;
        if (pAVar14 != (Action_1_LaserPointerState_ *)0x0) {
          (*(pAVar14->fields)._._.invoke_impl)((pAVar14->fields)._._.method_code,5);
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
        bVar15 = MVInputWrapper::MVInputWrapper_GetBooleanControl_1
                           (KogamaControls__Enum_PointerSelect,KeyState__Enum_Pressed,
                            (MethodInfo *)0x0);
        (this->fields)._.waitForMouseUp = bVar15;
        return;
      }
    }
  }
  FUN_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void Execute(CubeModelingStateMachine) */

void Assembly-CSharp.dll::SprayCubes::SprayCubes_Execute
               (SprayCubes *this,CubeModelingStateMachine *e,MethodInfo *method)

{
  uStackX_8 = (Byte__Array *)this;
  pCStackX_10 = e;
  pSStack_1 = this;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__CubeBase);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__CubeDataPacker);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Cube);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__IntVector);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  aIStack_2[0].x = 0;
  aIStack_2[0].y = 0;
  aIStack_2[0].z = 0;
  CubeModelTool::CubeModelTool_Execute((CubeModelTool *)this,e,(MethodInfo *)0x0);
  if ((this->fields)._.waitForMouseUp != 0) {
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
                       (KogamaControls__Enum_PointerSelect,KeyState__Enum_Pressed,(MethodInfo *)0x0)
    ;
    (this->fields)._.waitForMouseUp = bVar3;
    return;
  }
  addCube = false;
  uStackX_20 = 0;
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
                     (KogamaControls__Enum_PointerSelect,KeyState__Enum_Pressed,(MethodInfo *)0x0);
  if (bVar3 == 0) {
    (this->fields).cubeNotToBeSprayed = (CubePickingInfo *)0x0;
    if (iRam_? != 0) {
      uVar4 = (uint)((ulonglong)&(this->fields).cubeNotToBeSprayed >> 0xc);
      puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar6 = *puVar5;
        LOCK();
        uVar7 = *puVar5;
        if (uVar6 == uVar7) {
          *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (uVar6 != uVar7);
    }
code_?:
    this_01 = (this->fields).sprayCursor;
    if (e == (CubeModelingStateMachine *)0x0) goto code_?;
  }
  else {
    if (e == (CubeModelingStateMachine *)0x0) goto code_?;
    if ((e->fields)._SelectedCube_k__BackingField == (CubePickingInfo *)0x0) {
      pSStack_1 = (SprayCubes *)0x0;
      fStack_8 = 0.0;
      bVar3 = DrawPlane::DrawPlane_get_IsDrawPlaneActive((MethodInfo *)0x0);
      if ((bVar3 != 0) &&
         (bVar3 = DrawPlane::DrawPlane_Pick((Vector3 *)&pSStack_1,(MethodInfo *)0x0), bVar3 != 0)
         ) {
        pMVar9 = (e->fields)._TargetCubeModel_k__BackingField;
        if (pMVar9 == (MVCubeModelBase *)0x0) goto code_?;
        gameObject = (pMVar9->fields)._.gameObject;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__DrawPlane);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pDVar10 = TypeInfo__DrawPlane->static_fields->drawPlaneController;
        if ((pDVar10 == (DrawPlaneControllerUUI *)0x0) ||
           (this_00 = (pDVar10->fields).worldEditorDrawPlane, this_00 == (WorldEditorDrawPlane *)0x0)
           ) goto code_?;
        bVar3 = WorldEditorDrawPlane::WorldEditorDrawPlane_GetCubePosOnDrawplane
                           (this_00,gameObject,aIStack_2,(MethodInfo *)0x0);
        iVar11 = aIStack_2[0].z;
        uVar12 = aIStack_2[0]._0_4_;
        if (bVar3 != 0) {
          uStackX_8._0_6_ = (IntVector)CONCAT24(aIStack_2[0].z,aIStack_2[0]._0_4_);
          CVar13 = CubeModelingStateMachine::CubeModelingStateMachine_CanAddCubeAt_1
                             (e,(IntVector *)&uStackX_8,(MethodInfo *)0x0);
          if (CVar13 == CanPerformCubeActionResult__Enum_Yes) {
            uStackX_8._0_6_ = (IntVector)CONCAT24(iVar11,uVar12);
            CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                      (e,(IntVector *)&uStackX_8,AudioActions__Enum_CubeAdded,(MethodInfo *)0x0);
            pMVar9 = (e->fields)._TargetCubeModel_k__BackingField;
            if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
              FUN_?();
            }
            corners = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_IdentityCorners
                                ((MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__MV__WorldObject__CubeDataPacker->_1).field_0x1c == 0) {
              FUN_?();
            }
            uStackX_8 = MVWorldObject.dll::MV::WorldObject::CubeDataPacker::
                        CubeDataPacker_CornersToByteArray(corners,(MethodInfo *)0x0);
            material = CubeModelingStateMachine::CubeModelingStateMachine_get_CurrentMaterialId
                                 (e,(MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
              FUN_?();
            }
            faceMaterials = Cube::Cube_CreateMaterialArray(material,(MethodInfo *)0x0);
            pCStackX_10 = (CubeModelingStateMachine *)FUN_?(TypeInfo__Cube);
            Cube::Cube__ctor((Cube *)pCStackX_10,uStackX_8,faceMaterials,(MethodInfo *)0x0);
            if (pMVar9 == (MVCubeModelBase *)0x0) goto code_?;
            uStackX_8._0_6_ = (IntVector)CONCAT24(iVar11,uVar12);
            MVCubeModelBase::MVCubeModelBase_AddCube
                      (pMVar9,(IntVector *)&uStackX_8,(CubeBase *)pCStackX_10,(MethodInfo *)0x0);
            addCube = true;
          }
        }
      }
      (this->fields).cubeNotToBeSprayed = (CubePickingInfo *)0x0;
      func_?(&(this->fields).cubeNotToBeSprayed);
      this_01 = (this->fields).sprayCursor;
    }
    else {
      if ((this->fields).cubeNotToBeSprayed != (CubePickingInfo *)0x0) {
        pCVar14 = (e->fields)._SelectedCube_k__BackingField;
        if (pCVar14 == (CubePickingInfo *)0x0) goto code_?;
        uVar12._0_2_ = (pCVar14->fields).iLocalPos.x;
        uVar12._2_2_ = (pCVar14->fields).iLocalPos.y;
        iVar11 = (pCVar14->fields).iLocalPos.z;
        pCVar14 = (this->fields).cubeNotToBeSprayed;
        uVar15._0_2_ = (pCVar14->fields).iLocalPos.x;
        uVar15._2_2_ = (pCVar14->fields).iLocalPos.y;
        iVar16 = (pCVar14->fields).iLocalPos.z;
        if (*(int *)&(TypeInfo__MV__WorldObject__IntVector->_1).field_0x1c == 0) {
          FUN_?();
        }
        aIStack_2[0]._0_4_ = uVar15;
        aIStack_2[0].z = iVar16;
        aIStack_17[0]._0_4_ = uVar12;
        aIStack_17[0].z = iVar11;
        bVar3 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Inequality
                           (aIStack_17,aIStack_2,(MethodInfo *)0x0);
        if (bVar3 == 0) goto code_?;
      }
      pCVar14 = (e->fields)._SelectedCube_k__BackingField;
      if (pCVar14 == (CubePickingInfo *)0x0) goto code_?;
      aIStack_17[0].x = (pCVar14->fields).iLocalPos.x;
      aIStack_17[0].y = (pCVar14->fields).iLocalPos.y;
      aIStack_17[0].z = (pCVar14->fields).iLocalPos.z;
      CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                (e,aIStack_17,AudioActions__Enum_CubeAdded,(MethodInfo *)0x0);
      EVar18 = CubeModelingStateMachine::CubeModelingStateMachine_AddCube(e,(MethodInfo *)0x0);
      addCube = EVar18 != EditCubeChange__Enum_None;
      uStackX_20 = addCube;
      pCVar14 = CubeModelingStateMachine::CubeModelingStateMachine_DoPicking(e,(MethodInfo *)0x0);
      (this->fields).cubeNotToBeSprayed = pCVar14;
      func_?(&(this->fields).cubeNotToBeSprayed);
      this_01 = (this->fields).sprayCursor;
    }
  }
  if (this_01 != (SprayCursor *)0x0) {
    SprayCursor::SprayCursor_UpdateCursor
              (this_01,(e->fields)._SelectedCube_k__BackingField,
               (e->fields)._TargetCubeModel_k__BackingField,addCube,(MethodInfo *)0x0);
    return;
  }
code_?:
  FUN_?();
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}


/* Void Exit(CubeModelingStateMachine) */

void Assembly-CSharp.dll::SprayCubes::SprayCubes_Exit
               (SprayCubes *this,CubeModelingStateMachine *e,MethodInfo *method)

{
  (*(this->klass->vtable).HideCursor.methodPtr)(this,(this->klass->vtable).HideCursor.method);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar1 != (MVGameControllerBase *)0x0) &&
       (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
      (pGVar3 = (pMVar2->fields).GameEventManager, pGVar3 != (GameEventManager *)0x0)) &&
     ((pGVar4 = (pGVar3->fields).AvatarCommandsBuildMode,
      pGVar4 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0 &&
      (pGVar5 = (pGVar4->fields).LaserCommands,
      pGVar5 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)))) {
    pAVar6 = (pGVar5->fields).OnChangeState;
    if (pAVar6 != (Action_1_LaserPointerState_ *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pAVar6->fields)._._.invoke_impl)
                ((pAVar6->fields)._._.method_code,0,(pAVar6->fields)._._.method);
      return;
    }
    return;
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void HideCursor() */

void Assembly-CSharp.dll::SprayCubes::SprayCubes_HideCursor(SprayCubes *this,MethodInfo *method)

{
  pSVar1 = (this->fields).sprayCursor;
  if ((pSVar1 == (SprayCursor *)0x0) ||
     (pCVar2 = (pSVar1->fields).sprayCursor, pCVar2 == (CellCursor *)0x0)) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
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
    FUN_?(&MethodInfo__System__Collections__Generic__List<CellCursorCubeLineMesh>__Clear__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<CellCursorCubeLineMesh>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar4 = (pCVar2->fields).cursorCubes;
  if (pLVar4 != (List_1_CellCursorCubeLineMesh_ *)0x0) {
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)&uStack_6 >> 0xc);
      uVar7 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar10 = uVar8 == *puVar9;
        if (bVar10) {
          *puVar9 = uVar8 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar10);
    }
    pLStack_11 = (List_1_T_Enumerator_System_Object_ *)
                 ((ulonglong)(uint)(pLVar4->fields)._version << 0x20);
    puStack_12 = (undefined *)0x0;
    LStack_13._8_8_ = pLStack_11;
    LStack_13._current = (Object *)0x0;
    uStack_6 = 0;
    pLStack_11 = &LStack_13;
    LStack_13._list = (List_1_System_Object_ *)pLVar4;
    while (bVar14 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                   ::List_1_T_Enumerator_System_Object__MoveNext
                             (&LStack_13,
                              MethodInfo__System__Collections__Generic__List_1_T___Enumerator<CellCursorCubeLineMesh>__MoveNext__
                             ), pOVar15 = LStack_13._current, bVar14 != 0) {
      if (LStack_13._current == (Object *)0x0) goto code_?;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      obj = (Object_1 *)pOVar15[2].monitor;
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
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy(obj,0.0,(MethodInfo *)0x0);
    }
    pLVar4 = (pCVar2->fields).cursorCubes;
    if (pLVar4 != (List_1_CellCursorCubeLineMesh_ *)0x0) {
      piVar16 = &(pLVar4->fields)._version;
      *piVar16 = *piVar16 + 1;
      length = (pLVar4->fields)._size;
      (pLVar4->fields)._size = 0;
      if (0 < length) {
        mscorlib.dll::System::Array::Array_Clear
                  ((Array *)(pLVar4->fields)._items,0,length,(MethodInfo *)0x0);
      }
      return;
    }
  }
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

