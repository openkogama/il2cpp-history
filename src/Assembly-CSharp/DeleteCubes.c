
/* Void Enter(CubeModelingStateMachine) */

void Assembly-CSharp.dll::DeleteCubes::DeleteCubes_Enter
               (DeleteCubes *this,CubeModelingStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DeleteCursor);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVInputWrapper);
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
    pDVar1 = (DeleteCursor *)FUN_?(TypeInfo__DeleteCursor);
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
    pPVar2 = TypeInfo__PrefabPool->static_fields->instance;
    if (pPVar2 != (PrefabPool *)0x0) {
      material = (pPVar2->fields).cellCursorErrorMaterial;
      this_00 = (CellCursor *)FUN_?(TypeInfo__CellCursor);
      CellCursor::CellCursor__ctor
                (this_00,1,_UNK_?,material,_UNK_?,cubeCorners,(MethodInfo *)0x0);
      iVar3 = iRam_?;
      (pDVar1->fields).deleteCursor = this_00;
      if (iVar3 != 0) {
        uVar4 = (uint)((ulonglong)&pDVar1->fields >> 0xc);
        uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
        do {
          uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
          puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
          LOCK();
          bVar8 = uVar6 == *puVar7;
          if (bVar8) {
            *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
          iVar3 = iRam_?;
        } while (!bVar8);
      }
      (this->fields).deleteCursor = pDVar1;
      if (iVar3 != 0) {
        uVar4 = (uint)((ulonglong)&(this->fields).deleteCursor >> 0xc);
        uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
        do {
          uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
          puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
          LOCK();
          bVar8 = uVar6 == *puVar7;
          if (bVar8) {
            *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
        } while (!bVar8);
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
          (*(pAVar14->fields)._._.invoke_impl)((pAVar14->fields)._._.method_code,4);
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

void Assembly-CSharp.dll::DeleteCubes::DeleteCubes_Execute
               (DeleteCubes *this,CubeModelingStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__IntVector);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
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
    bVar1 = MVInputWrapper::MVInputWrapper_GetBooleanControl_1
                       (KogamaControls__Enum_PointerSelect,KeyState__Enum_Pressed,(MethodInfo *)0x0)
    ;
    (this->fields)._.waitForMouseUp = bVar1;
    return;
  }
  bVar1 = 0;
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
                     (KogamaControls__Enum_PointerSelect,KeyState__Enum_Up,(MethodInfo *)0x0);
  if ((bVar2 != 0) &&
     (bVar3 = iRam_? != 0, (this->fields).cubeNotToBeDeleted = (CubePickingInfo *)0x0
     , bVar3)) {
    uVar4 = (uint)((ulonglong)&(this->fields).cubeNotToBeDeleted >> 0xc);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar3 = uVar6 == *puVar7;
      if (bVar3) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar3);
  }
  if (e == (CubeModelingStateMachine *)0x0) goto DAT_?;
  if ((e->fields)._SelectedCube_k__BackingField == (CubePickingInfo *)0x0) {
    bVar3 = iRam_? != 0;
    (this->fields).cubeNotToBeDeleted = (CubePickingInfo *)0x0;
    if (bVar3) {
      uVar4 = (uint)((ulonglong)&(this->fields).cubeNotToBeDeleted >> 0xc);
      lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
      do {
        uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
        puVar7 = (ulonglong *)(lVar5 + 0xADDR);
        LOCK();
        bVar3 = uVar6 == *puVar7;
        if (bVar3) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar3);
    }
  }
  else {
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
                       (KogamaControls__Enum_PointerSelect,KeyState__Enum_Pressed,(MethodInfo *)0x0)
    ;
    if (bVar2 != 0) {
      CVar8 = CubeModelingStateMachine::CubeModelingStateMachine_CanRemoveCubeAt
                         (e,(e->fields)._SelectedCube_k__BackingField,(MethodInfo *)0x0);
      if (CVar8 == CanPerformCubeActionResult__Enum_Yes) {
        if ((this->fields).cubeNotToBeDeleted != (CubePickingInfo *)0x0) {
          pCVar9 = (e->fields)._SelectedCube_k__BackingField;
          if (pCVar9 == (CubePickingInfo *)0x0) goto DAT_?;
          iVar10 = (pCVar9->fields).iLocalPos.z;
          uVar11._0_2_ = (pCVar9->fields).iLocalPos.x;
          uVar11._2_2_ = (pCVar9->fields).iLocalPos.y;
          pCVar9 = (this->fields).cubeNotToBeDeleted;
          uVar12._0_2_ = (pCVar9->fields).iLocalPos.x;
          uVar12._2_2_ = (pCVar9->fields).iLocalPos.y;
          iVar13 = (pCVar9->fields).iLocalPos.z;
          if (*(int *)&(TypeInfo__MV__WorldObject__IntVector->_1).field_0x1c == 0) {
            FUN_?();
          }
          IStackX_8._0_4_ = uVar12;
          IStackX_8.z = iVar13;
          aIStack_14[0]._0_4_ = uVar11;
          aIStack_14[0].z = iVar10;
          bVar2 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Inequality
                             (aIStack_14,&IStackX_8,(MethodInfo *)0x0);
          if (bVar2 == 0) goto code_?;
        }
        pCVar9 = (e->fields)._SelectedCube_k__BackingField;
        if (pCVar9 == (CubePickingInfo *)0x0) goto DAT_?;
        IStackX_8.x = (pCVar9->fields).iLocalPos.x;
        IStackX_8.y = (pCVar9->fields).iLocalPos.y;
        IStackX_8.z = (pCVar9->fields).iLocalPos.z;
        CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                  (e,&IStackX_8,AudioActions__Enum_CubeRemoved,(MethodInfo *)0x0);
        pCVar9 = (e->fields)._SelectedCube_k__BackingField;
        if ((pCVar9 == (CubePickingInfo *)0x0) ||
           (pMVar15 = (e->fields)._TargetCubeModel_k__BackingField, pMVar15 == (MVCubeModelBase *)0x0)
           ) goto DAT_?;
        IStackX_8.x = (pCVar9->fields).iLocalPos.x;
        IStackX_8.y = (pCVar9->fields).iLocalPos.y;
        IStackX_8.z = (pCVar9->fields).iLocalPos.z;
        MVCubeModelBase::MVCubeModelBase_RemoveCube(pMVar15,&IStackX_8,(MethodInfo *)0x0);
        bVar1 = 1;
        pCVar9 = CubeModelingStateMachine::CubeModelingStateMachine_DoPicking(e,(MethodInfo *)0x0);
        (this->fields).cubeNotToBeDeleted = pCVar9;
        func_?(&(this->fields).cubeNotToBeDeleted);
        pMVar15 = (e->fields)._TargetCubeModel_k__BackingField;
        if ((pMVar15 == (MVCubeModelBase *)0x0) ||
           (this_00 = (pMVar15->fields).prototypeCubeModel,
           this_00 == (RuntimePrototypeCubeModel *)0x0)) goto DAT_?;
        cubeCount = RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_get_CubeCount
                              (this_00,(MethodInfo *)0x0);
        CubeModelTool::CubeModelTool_SendCubeEvent
                  (cubeCount,EditCubeChange__Enum_CubeDeleted,(MethodInfo *)0x0);
      }
      else if (CVar8 == CanPerformCubeActionResult__Enum_UnlockMaterial) {
        if ((this->fields).deleteCursor == (DeleteCursor *)0x0) goto DAT_?;
        ModelCursor::ModelCursor_ShowUnlockMaterialNotification
                  (0,NotificationLifetime__Enum_Low,(MethodInfo *)0x0);
      }
    }
  }
code_?:
  this_01 = (this->fields).deleteCursor;
  if (this_01 != (DeleteCursor *)0x0) {
    DeleteCursor::DeleteCursor_UpdateCursor
              (this_01,(e->fields)._SelectedCube_k__BackingField,
               (e->fields)._TargetCubeModel_k__BackingField,bVar1,(MethodInfo *)0x0);
    return;
  }
DAT_?:
  FUN_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void HideCursor() */

void Assembly-CSharp.dll::DeleteCubes::DeleteCubes_HideCursor(DeleteCubes *this,MethodInfo *method)

{
  pDVar1 = (this->fields).deleteCursor;
  if ((pDVar1 == (DeleteCursor *)0x0) ||
     (pCVar2 = (pDVar1->fields).deleteCursor, pCVar2 == (CellCursor *)0x0)) {
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

