
/* Void Enter(CubeModelingStateMachine) */

void Assembly-CSharp.dll::DeleteCubes::DeleteCubes_Enter
               (DeleteCubes *this,CubeModelingStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__DeleteCursor);
    func_?(&TypeInfo__MVInputWrapper);
    cRam_? = '\x01';
  }
  if (e != (CubeModelingStateMachine *)0x0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MV__WorldObject__CubeBase);
      cRam_? = '\x01';
    }
    if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MV__WorldObject__CubeBase);
    }
    cubeCorners = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_IdentityCorners
                            ((MethodInfo *)0x0);
    value = (DeleteCursor *)func_?(TypeInfo__DeleteCursor);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__CellCursor);
      cRam_? = '\x01';
    }
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              ((Object *)value,ExceptionArgument__Enum_obj,unaff_ESI);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__PrefabPool);
      cRam_? = '\x01';
    }
    pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
    if (pPVar1 != (PrefabPool *)0x0) {
      material = (pPVar1->fields).cellCursorErrorMaterial;
      this_01 = (CellCursor *)func_?(TypeInfo__CellCursor);
      CellCursor::CellCursor__ctor(this_01,1,0.03,material,1.0,cubeCorners,(MethodInfo *)0x0);
      (value->fields).deleteCursor = this_01;
      func_?(&value->fields,this_01);
      (this->fields).deleteCursor = value;
      func_?(&(this->fields).deleteCursor,value);
      pGVar2 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
      if (((pGVar2 != (GameEventManager *)0x0) &&
          (pGVar3 = (pGVar2->fields).AvatarCommandsBuildMode,
          pGVar3 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
         (this_00 = (pGVar3->fields).LaserCommands,
         this_00 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)) {
        GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
        GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_ChangeState
                  (this_00,LaserPointerState__Enum_DeletingCubes,(MethodInfo *)0x0);
        if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        bVar4 = MVInputWrapper::MVInputWrapper_GetBooleanControl
                          (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
        (this->fields)._.waitForMouseUp = bVar4;
        return;
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Execute(CubeModelingStateMachine) */

void Assembly-CSharp.dll::DeleteCubes::DeleteCubes_Execute
               (DeleteCubes *this,CubeModelingStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(0xdbf0);
    func_?(&TypeInfo__MVInputWrapper);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(0xea68);
    cRam_? = '\x01';
  }
  pCVar1 = TypeInfo__CubeModelTool->static_fields;
  if ((pCVar1->cubeChange != 0) &&
     (pCVar1->OnEditCubeChange != (Action_2_Int32_EditCubeChange_ *)0x0)) {
    pAVar2 = pCVar1->OnEditCubeChange;
    (*(pAVar2->fields)._._.invoke_impl)
              ((pAVar2->fields)._._.method_code,pCVar1->cubeCount,pCVar1->cubeChange,
               (short)(pAVar2->fields)._._.method);
  }
  TypeInfo__CubeModelTool->static_fields->cubeChange = 0;
  if ((this->fields)._.waitForMouseUp != 0) {
    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?((short)TypeInfo__MVInputWrapper);
    }
    bVar3 = MVInputWrapper::MVInputWrapper_GetBooleanControl
                       (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
    (this->fields)._.waitForMouseUp = bVar3;
    return;
  }
  cVar4 = '\0';
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?((short)TypeInfo__MVInputWrapper);
  }
  bVar3 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                     (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    (this->fields).cubeNotToBeDeleted = (CubePickingInfo *)0x0;
    func_?(&(this->fields).cubeNotToBeDeleted,0);
  }
  if (e == (CubeModelingStateMachine *)0x0) goto code_?;
  if ((e->fields)._SelectedCube_k__BackingField == (CubePickingInfo *)0x0) {
    (this->fields).cubeNotToBeDeleted = (CubePickingInfo *)0x0;
    func_?(&(this->fields).cubeNotToBeDeleted,0);
  }
  else {
    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MVInputWrapper);
    }
    bVar3 = MVInputWrapper::MVInputWrapper_GetBooleanControl
                       (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      CVar5 = CubeModelingStateMachine::CubeModelingStateMachine_CanRemoveCubeAt
                         (e,(e->fields)._SelectedCube_k__BackingField,(MethodInfo *)0x0);
      if (CVar5 == CanPerformCubeActionResult__Enum_Yes) {
        if ((this->fields).cubeNotToBeDeleted != (CubePickingInfo *)0x0) {
          pCVar6 = (e->fields)._SelectedCube_k__BackingField;
          if (pCVar6 == (CubePickingInfo *)0x0) goto code_?;
          uVar7 = (pCVar6->fields).iLocalPos.x;
          uVar8 = (pCVar6->fields).iLocalPos.y;
          a.y = uVar8;
          a.x = uVar7;
          iVar9 = (pCVar6->fields).iLocalPos.z;
          pCVar6 = (this->fields).cubeNotToBeDeleted;
          uVar10._0_2_ = (pCVar6->fields).iLocalPos.x;
          uVar10._2_2_ = (pCVar6->fields).iLocalPos.y;
          iVar11 = (pCVar6->fields).iLocalPos.z;
          if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          a.z = iVar9;
          b.z = iVar11;
          b.x = (short)uVar10;
          b.y = (short)((uint)uVar10 >> 0x10);
          bVar3 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Inequality
                             (a,b,(MethodInfo *)0x0);
          if (bVar3 == 0) goto code_?;
        }
        pCVar6 = (e->fields)._SelectedCube_k__BackingField;
        if (pCVar6 == (CubePickingInfo *)0x0) goto code_?;
        CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                  (e,(pCVar6->fields).iLocalPos,AudioActions__Enum_CubeRemoved,(MethodInfo *)0x0);
        pCVar6 = (e->fields)._SelectedCube_k__BackingField;
        if ((pCVar6 == (CubePickingInfo *)0x0) ||
           (pMVar12 = (e->fields)._TargetCubeModel_k__BackingField, pMVar12 == (MVCubeModelBase *)0x0)
           ) goto code_?;
        MVCubeModelBase::MVCubeModelBase_RemoveCube
                  (pMVar12,(pCVar6->fields).iLocalPos,(MethodInfo *)0x0);
        pCVar6 = CubeModelingStateMachine::CubeModelingStateMachine_DoPicking(e,(MethodInfo *)0x0);
        (this->fields).cubeNotToBeDeleted = pCVar6;
        cVar4 = '\x10';
        func_?((short)&(this->fields).cubeNotToBeDeleted);
        pMVar12 = (e->fields)._TargetCubeModel_k__BackingField;
        if (pMVar12 == (MVCubeModelBase *)0x0) goto code_?;
        cubeCount = MVCubeModelBase::MVCubeModelBase_get_CubeCount(pMVar12,(MethodInfo *)0x0);
        CubeModelTool::CubeModelTool_SendCubeEvent
                  (cubeCount,EditCubeChange__Enum_CubeDeleted,(MethodInfo *)0x0);
      }
      else if (CVar5 == CanPerformCubeActionResult__Enum_UnlockMaterial) {
        if ((this->fields).deleteCursor == (DeleteCursor *)0x0) goto code_?;
        ModelCursor::ModelCursor_ShowUnlockMaterialNotification((MethodInfo *)0x0);
      }
    }
  }
code_?:
  pDVar13 = (this->fields).deleteCursor;
  pCVar6 = (e->fields)._SelectedCube_k__BackingField;
  pMVar12 = (e->fields)._TargetCubeModel_k__BackingField;
  if (pDVar13 != (DeleteCursor *)0x0) {
    if (cVar4 != '\0') {
      pGVar14 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
      if (((pGVar14 == (GameEventManager *)0x0) ||
          (pGVar15 = (pGVar14->fields).AvatarCommandsBuildMode,
          pGVar15 == (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) ||
         (pGVar16 = (pGVar15->fields).LaserCommands,
         pGVar16 == (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0))
      goto code_?;
      GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
      GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_ActivateLaserForDuration
                (pGVar16,0.2,(MethodInfo *)0x0);
    }
    if (pCVar6 == (CubePickingInfo *)0x0) {
      pCVar17 = (pDVar13->fields).deleteCursor;
      if (pCVar17 != (CellCursor *)0x0) {
        CellCursor::CellCursor_set_Active(pCVar17,0,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      pGVar14 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
      if (((pGVar14 != (GameEventManager *)0x0) &&
          (pGVar15 = (pGVar14->fields).AvatarCommandsBuildMode,
          pGVar15 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
         (pGVar16 = (pGVar15->fields).LaserCommands,
         pGVar16 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)) {
        GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
        GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_UpdatePosition
                  (pGVar16,(pCVar6->fields).point,(MethodInfo *)0x0);
        pCVar17 = (pDVar13->fields).deleteCursor;
        if (pCVar17 != (CellCursor *)0x0) {
          CellCursor::CellCursor_set_Active(pCVar17,1,(MethodInfo *)0x0);
          uVar18._0_2_ = (pCVar6->fields).iLocalPos.x;
          uVar18._2_2_ = (pCVar6->fields).iLocalPos.y;
          if (pMVar12 != (MVCubeModelBase *)0x0) {
            pCVar17 = (pDVar13->fields).deleteCursor;
            cubeGameObject = (pMVar12->fields)._.gameObject;
            if (pCVar17 != (CellCursor *)0x0) {
              pIVar19 = &(pCVar6->fields).iLocalPos;
              uVar20 = pIVar19->y;
              this_00 = CellCursor::CellCursor_GetCellCursor(pCVar17,*pIVar19,(MethodInfo *)0x0);
              if (this_00 != (CellCursorCubeLineMesh *)0x0) {
                position.z = uVar20;
                position.x = (short)uVar18;
                position.y = (short)((uint)uVar18 >> 0x10);
                CellCursorCubeLineMesh::CellCursorCubeLineMesh_SetCursorCube
                          (this_00,position,cubeGameObject,(MethodInfo *)0x0);
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
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
  return;
}


/* Void HideCursor() */

void Assembly-CSharp.dll::DeleteCubes::DeleteCubes_HideCursor(DeleteCubes *this,MethodInfo *method)

{
  pDVar1 = (this->fields).deleteCursor;
  if ((pDVar1 != (DeleteCursor *)0x0) &&
     (pCVar2 = (pDVar1->fields).deleteCursor, pCVar2 != (CellCursor *)0x0)) {
    *unaff_FS_OFFSET = &stack0xfffffff0;
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<CellCursorCubeLineMesh>__Dispose__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<CellCursorCubeLineMesh>__MoveNext__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<CellCursorCubeLineMesh>__get_Current__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__List<CellCursorCubeLineMesh>__Clear__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__List<CellCursorCubeLineMesh>__GetEnumerator__
                     );
      cRam_? = '\x01';
    }
    LStack_3._list = (List_1_System_Object_ *)0x0;
    LStack_3._index = 0;
    LStack_3._version = 0;
    LStack_3._current = (Object *)0x0;
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (pCVar2->fields).cursorCubes;
    if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      pLVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                         ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                           *)&stack0xffffffd8,this_00,
                          MethodInfo__System__Collections__Generic__List<CellCursorCubeLineMesh>__GetEnumerator__
                         );
      array = (CellCursorCubeLineMesh__Array *)&LStack_3;
      LStack_3._list = (List_1_System_Object_ *)pLVar4->_list;
      LStack_3._index = pLVar4->_index;
      LStack_3._version = pLVar4->_version;
      LStack_3._current = *(Object **)&pLVar4->_current;
      while (bVar5 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                     Object]::List_1_T_Enumerator_System_Object__MoveNext
                               (&LStack_3,
                                MethodInfo__System__Collections__Generic__List_1_T___Enumerator<CellCursorCubeLineMesh>__MoveNext__
                               ), pOVar6 = LStack_3._current, bVar5 != 0) {
        if ((RegexCharClass_SingleRange)LStack_3._current == (RegexCharClass_SingleRange)0x0)
        goto code_?;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        obj = *(Object_1 **)((int)pOVar6 + 0x1c);
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1(obj,(MethodInfo *)0x0);
      }
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                ((Object *)array,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<CellCursorCubeLineMesh>__Dispose__
                 ,(MethodInfo *)0xffffffff);
      pLVar7 = (pCVar2->fields).cursorCubes;
      if (pLVar7 != (List_1_CellCursorCubeLineMesh_ *)0x0) {
        length = (pLVar7->fields)._size;
        piVar8 = &(pLVar7->fields)._version;
        *piVar8 = *piVar8 + 1;
        (pLVar7->fields)._size = 0;
        if (0 < length) {
          array = (pLVar7->fields)._items;
          mscorlib.dll::System::Array::Array_Clear((Array *)array,0,length,(MethodInfo *)0x0);
        }
        *unaff_FS_OFFSET = array;
        return;
      }
    }
  }
code_?:
  func_?();
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

