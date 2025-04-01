
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
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
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
      ppDVar2 = &(this->fields).deleteCursor;
      *ppDVar2 = value;
      func_?(ppDVar2,value);
      pGVar3 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
      if (((pGVar3 != (GameEventManager *)0x0) &&
          (pGVar4 = (pGVar3->fields).AvatarCommandsBuildMode,
          pGVar4 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
         (this_00 = (pGVar4->fields).LaserCommands,
         this_00 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)) {
        UnityEngine.AudioModule.dll::UnityEngine::AudioClip::
        AudioClip_InvokePCMSetPositionCallback_Internal((AudioClip *)this_00,4,(MethodInfo *)0x0);
        if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        bVar5 = MVInputWrapper::MVInputWrapper_GetBooleanControl
                          (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
        (this->fields)._.waitForMouseUp = bVar5;
        return;
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Execute(CubeModelingStateMachine) */

void Assembly-CSharp.dll::DeleteCubes::DeleteCubes_Execute
               (DeleteCubes *this,CubeModelingStateMachine *e,MethodInfo *method)

{
  this_00 = e;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__IntVector);
    func_?(0xfb30);
    cRam_? = '\x01';
  }
  CubeModelTool::CubeModelTool_Execute((CubeModelTool *)this,e,(MethodInfo *)0x0);
  if ((this->fields)._.waitForMouseUp != 0) {
    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?((short)TypeInfo__MVInputWrapper);
    }
    bVar1 = MVInputWrapper::MVInputWrapper_GetBooleanControl
                       (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
    (this->fields)._.waitForMouseUp = bVar1;
    return;
  }
  e = (CubeModelingStateMachine *)0x0;
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?((short)TypeInfo__MVInputWrapper);
  }
  bVar1 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                     (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    ppCVar2 = &(this->fields).cubeNotToBeDeleted;
    *ppCVar2 = (CubePickingInfo *)0x0;
    func_?(ppCVar2,0);
  }
  if (this_00 == (CubeModelingStateMachine *)0x0) goto code_?;
  if ((this_00->fields)._SelectedCube_k__BackingField == (CubePickingInfo *)0x0) {
    ppCVar2 = &(this->fields).cubeNotToBeDeleted;
    *ppCVar2 = (CubePickingInfo *)0x0;
    func_?(ppCVar2,0);
  }
  else {
    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MVInputWrapper);
    }
    bVar1 = MVInputWrapper::MVInputWrapper_GetBooleanControl
                       (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      CVar3 = CubeModelingStateMachine::CubeModelingStateMachine_CanRemoveCubeAt
                         (this_00,(this_00->fields)._SelectedCube_k__BackingField,(MethodInfo *)0x0)
      ;
      if (CVar3 == CanPerformCubeActionResult__Enum_Yes) {
        pCVar4 = (this->fields).cubeNotToBeDeleted;
        pDVar5 = &this->fields;
        if (pCVar4 != (CubePickingInfo *)0x0) {
          pCVar6 = (this_00->fields)._SelectedCube_k__BackingField;
          if (pCVar6 == (CubePickingInfo *)0x0) goto code_?;
          uVar7._0_2_ = (pCVar4->fields).iLocalPos.x;
          uVar7._2_2_ = (pCVar4->fields).iLocalPos.y;
          iVar8 = (pCVar4->fields).iLocalPos.z;
          uVar9._0_2_ = (pCVar6->fields).iLocalPos.x;
          uVar9._2_2_ = (pCVar6->fields).iLocalPos.y;
          iVar10 = (pCVar6->fields).iLocalPos.z;
          if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
            e = (CubeModelingStateMachine *)TypeInfo__MV__WorldObject__IntVector;
            this = (DeleteCubes *)&UNK_?;
            func_?();
          }
          a.z = iVar10;
          a.x = (short)uVar9;
          a.y = (short)((uint)uVar9 >> 0x10);
          b.z = iVar8;
          b.x = (short)uVar7;
          b.y = (short)((uint)uVar7 >> 0x10);
          bVar1 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Inequality
                             (a,b,(MethodInfo *)0x0);
          if (bVar1 == 0) goto code_?;
        }
        pCVar4 = (this_00->fields)._SelectedCube_k__BackingField;
        if (pCVar4 == (CubePickingInfo *)0x0) goto code_?;
        CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                  (this_00,(pCVar4->fields).iLocalPos,AudioActions__Enum_CubeRemoved,
                   (MethodInfo *)0x0);
        pCVar4 = (this_00->fields)._SelectedCube_k__BackingField;
        if ((pCVar4 == (CubePickingInfo *)0x0) ||
           ((this_00->fields)._TargetCubeModel_k__BackingField == (MVCubeModelBase *)0x0))
        goto code_?;
        MVCubeModelBase::MVCubeModelBase_RemoveCube
                  ((this_00->fields)._TargetCubeModel_k__BackingField,(pCVar4->fields).iLocalPos,
                   (MethodInfo *)0x0);
        e = (CubeModelingStateMachine *)
            CubeModelingStateMachine::CubeModelingStateMachine_DoPicking
                      (this_00,(MethodInfo *)0x1000000);
        pDVar5->cubeNotToBeDeleted = (CubePickingInfo *)e;
        func_?();
        pMVar11 = (this_00->fields)._TargetCubeModel_k__BackingField;
        if (pMVar11 == (MVCubeModelBase *)0x0) goto code_?;
        cubeCount = MVCubeModelBase::MVCubeModelBase_get_CubeCount(pMVar11,(MethodInfo *)0x0);
        CubeModelTool::CubeModelTool_SendCubeEvent
                  (cubeCount,EditCubeChange__Enum_CubeDeleted,(MethodInfo *)0x0);
      }
      else if (CVar3 == CanPerformCubeActionResult__Enum_UnlockMaterial) {
        if ((this->fields).deleteCursor == (DeleteCursor *)0x0) goto code_?;
        e = (CubeModelingStateMachine *)0x0;
        ModelCursor::ModelCursor_ShowUnlockMaterialNotification
                  (0,NotificationLifetime__Enum_Low,(MethodInfo *)0x0);
      }
    }
  }
code_?:
  pDVar12 = (this->fields).deleteCursor;
  pCVar4 = (this_00->fields)._SelectedCube_k__BackingField;
  pMVar11 = (this_00->fields)._TargetCubeModel_k__BackingField;
  if (pDVar12 != (DeleteCursor *)0x0) {
    if (e._3_1_ != '\0') {
      pGVar13 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
      if (((pGVar13 == (GameEventManager *)0x0) ||
          (pGVar14 = (pGVar13->fields).AvatarCommandsBuildMode,
          pGVar14 == (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) ||
         (pGVar15 = (pGVar14->fields).LaserCommands,
         pGVar15 == (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0))
      goto code_?;
      GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
      GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_ActivateLaserForDuration
                (pGVar15,0.2,(MethodInfo *)0x0);
    }
    if (pCVar4 == (CubePickingInfo *)0x0) {
      pCVar16 = (pDVar12->fields).deleteCursor;
      if (pCVar16 != (CellCursor *)0x0) {
        CellCursor::CellCursor_set_Active(pCVar16,0,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      pGVar13 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
      if (((pGVar13 != (GameEventManager *)0x0) &&
          (pGVar14 = (pGVar13->fields).AvatarCommandsBuildMode,
          pGVar14 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
         (pGVar15 = (pGVar14->fields).LaserCommands,
         pGVar15 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)) {
        GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
        GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_UpdatePosition
                  (pGVar15,(pCVar4->fields).point,(MethodInfo *)0x0);
        pCVar16 = (pDVar12->fields).deleteCursor;
        if (pCVar16 != (CellCursor *)0x0) {
          CellCursor::CellCursor_set_Active(pCVar16,1,(MethodInfo *)0x0);
          iVar8 = (pCVar4->fields).iLocalPos.z;
          if (pMVar11 != (MVCubeModelBase *)0x0) {
            pCVar16 = (pDVar12->fields).deleteCursor;
            cubeGameObject = (pMVar11->fields)._.gameObject;
            if (pCVar16 != (CellCursor *)0x0) {
              this_01 = CellCursor::CellCursor_GetCellCursor
                                  (pCVar16,(pCVar4->fields).iLocalPos,(MethodInfo *)0x0);
              if (this_01 != (CellCursorCubeLineMesh *)0x0) {
                uStack17 = 0x1044;
                position.z = iVar8;
                position._0_4_ = &UNK_?;
                CellCursorCubeLineMesh::CellCursorCubeLineMesh_SetCursorCube
                          (this_01,position,cubeGameObject,(MethodInfo *)0x0);
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
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
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
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (pCVar2->fields).cursorCubes;
    if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      pLVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                         ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                           *)&stack0xffffffd8,this_00,
                          MethodInfo__System__Collections__Generic__List<CellCursorCubeLineMesh>__GetEnumerator__
                         );
      array = (CellCursorCubeLineMesh__Array *)&LStack_4;
      LStack_4._list = (List_1_System_Object_ *)pLVar3->_list;
      LStack_4._index = pLVar3->_index;
      LStack_4._version = pLVar3->_version;
      LStack_4._current = *(Object **)&pLVar3->_current;
      while (bVar5 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                     Object]::List_1_T_Enumerator_System_Object__MoveNext
                               (&LStack_4,
                                MethodInfo__System__Collections__Generic__List_1_T___Enumerator<CellCursorCubeLineMesh>__MoveNext__
                               ), pOVar6 = LStack_4._current, bVar5 != 0) {
        if ((RegexCharClass_SingleRange)LStack_4._current == (RegexCharClass_SingleRange)0x0)
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
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
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

