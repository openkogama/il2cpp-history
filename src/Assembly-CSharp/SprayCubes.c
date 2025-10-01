
/* Void Enter(CubeModelingStateMachine) */

void Assembly-CSharp.dll::SprayCubes::SprayCubes_Enter
               (SprayCubes *this,CubeModelingStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVInputWrapper);
    func_?(&TypeInfo__SprayCursor);
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
    value = (SprayCursor *)func_?(TypeInfo__SprayCursor);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__CellCursor);
      cRam_? = '\x01';
    }
    (value->fields).addCubeLaserOnTime = 0.2;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)value,ExceptionArgument__Enum_obj,unaff_ESI);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__PrefabPool);
      cRam_? = '\x01';
    }
    pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
    if (pPVar1 != (PrefabPool *)0x0) {
      material = (pPVar1->fields).cellCursorMaterial;
      this_01 = (CellCursor *)func_?(TypeInfo__CellCursor);
      CellCursor::CellCursor__ctor(this_01,1,0.03,material,1.0,cubeCorners,(MethodInfo *)0x0);
      (value->fields).sprayCursor = this_01;
      func_?(&value->fields,this_01);
      (this->fields).sprayCursor = value;
      func_?(&(this->fields).sprayCursor,value);
      pGVar2 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
      if (((pGVar2 != (GameEventManager *)0x0) &&
          (pGVar3 = (pGVar2->fields).AvatarCommandsBuildMode,
          pGVar3 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
         (this_00 = (pGVar3->fields).LaserCommands,
         this_00 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)) {
        GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
        GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_ChangeState
                  (this_00,LaserPointerState__Enum_SprayCubes,(MethodInfo *)0x0);
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

void Assembly-CSharp.dll::SprayCubes::SprayCubes_Execute
               (SprayCubes *this,CubeModelingStateMachine *e,MethodInfo *method)

{
  uVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__CubeBase);
    func_?(0x8af0);
    func_?(&TypeInfo__Cube);
    func_?(&TypeInfo__MV__WorldObject__IntVector);
    func_?(&TypeInfo__MVInputWrapper);
    cRam_? = '\x01';
  }
  iVar2 = 0;
  iVar3 = 0;
  iVar4 = 0;
  if (cRam_? == '\0') {
    iVar4 = 0;
    func_?(&TypeInfo__CubeModelTool);
    cRam_? = '\x01';
  }
  pCVar5 = TypeInfo__CubeModelTool->static_fields;
  if ((pCVar5->cubeChange != 0) &&
     (pCVar5->OnEditCubeChange != (Action_2_Int32_EditCubeChange_ *)0x0)) {
    pAVar6 = pCVar5->OnEditCubeChange;
    (*(pAVar6->fields)._._.invoke_impl)
              ((pAVar6->fields)._._.method_code,pCVar5->cubeCount,(short)pCVar5->cubeChange,
               (pAVar6->fields)._._.method);
  }
  TypeInfo__CubeModelTool->static_fields->cubeChange = 0;
  if ((this->fields)._.waitForMouseUp != 0) {
    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MVInputWrapper);
    }
    bVar7 = MVInputWrapper::MVInputWrapper_GetBooleanControl
                      (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
    (this->fields)._.waitForMouseUp = bVar7;
    *unaff_FS_OFFSET = uVar1;
    return;
  }
  bVar7 = 0;
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
    bVar7 = 0;
    func_?(TypeInfo__MVInputWrapper);
  }
  bVar8 = MVInputWrapper::MVInputWrapper_GetBooleanControl
                    (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
  if (bVar8 == 0) {
    (this->fields).cubeNotToBeSprayed = (CubePickingInfo *)0x0;
    func_?();
code_?:
    this_01 = (this->fields).sprayCursor;
    if (e == (CubeModelingStateMachine *)0x0) goto code_?;
  }
  else {
    if (e == (CubeModelingStateMachine *)0x0) goto code_?;
    if ((e->fields)._SelectedCube_k__BackingField == (CubePickingInfo *)0x0) {
      bVar8 = DrawPlane::DrawPlane_get_IsDrawPlaneActive((MethodInfo *)0x0);
      if ((bVar8 != 0) &&
         (bVar8 = DrawPlane::DrawPlane_Pick((Vector3 *)&stack0xffffffb8,(MethodInfo *)0x0),
         bVar8 != 0)) {
        pMVar9 = (e->fields)._TargetCubeModel_k__BackingField;
        if (pMVar9 == (MVCubeModelBase *)0x0) goto code_?;
        bVar8 = DrawPlane::DrawPlane_GetCubePosOnDrawplane
                          ((pMVar9->fields)._.gameObject,(IntVector *)&stack0xffffffc4,
                           (MethodInfo *)0x0);
        if ((bVar8 != 0) &&
           (IVar10.y = iVar3, IVar10.x = iVar2, IVar10.z = iVar4,
           CVar11 = CubeModelingStateMachine::CubeModelingStateMachine_CanAddCubeAt_1
                             (e,IVar10,(MethodInfo *)0x0),
           CVar11 == CanPerformCubeActionResult__Enum_Yes)) {
          pos.y = iVar3;
          pos.x = iVar4;
          iVar4 = -0x2c77;
          iVar2 = 0x1046;
          pos.z = (int16_t)e;
          pCVar12 = e;
          CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                    (e,pos,AudioActions__Enum_CubeAdded,(MethodInfo *)0x0);
          pMVar9 = (e->fields)._TargetCubeModel_k__BackingField;
          uVar13 = CONCAT22(iVar2,iVar4);
          if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          corners = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_IdentityCorners
                              ((MethodInfo *)0x0);
          if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          MVWorldObject.dll::MV::WorldObject::CubeDataPacker::CubeDataPacker_CornersToByteArray
                    (corners,(MethodInfo *)0x0);
          uVar1 = 0;
          material = CubeModelingStateMachine::CubeModelingStateMachine_get_CurrentMaterialId
                               (e,(MethodInfo *)0x0);
          if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          faceMaterials = Cube::Cube_CreateMaterialArray(material,(MethodInfo *)0x0);
          this_00 = (Cube *)func_?();
          Cube::Cube__ctor(this_00,(Byte__Array *)&UNK_?,faceMaterials,(MethodInfo *)0x0);
          if (pMVar9 == (MVCubeModelBase *)0x0) goto code_?;
          pos_00.z = (int16_t)pCVar12;
          pos_00.x = (short)uVar13;
          pos_00.y = (short)((uint)uVar13 >> 0x10);
          MVCubeModelBase::MVCubeModelBase_AddCube
                    (pMVar9,pos_00,(CubeBase *)this_00,(MethodInfo *)0x0);
          bVar7 = 1;
        }
      }
      (this->fields).cubeNotToBeSprayed = (CubePickingInfo *)0x0;
      func_?();
    }
    else {
      if ((this->fields).cubeNotToBeSprayed != (CubePickingInfo *)0x0) {
        pCVar14 = (e->fields)._SelectedCube_k__BackingField;
        if (pCVar14 == (CubePickingInfo *)0x0) goto code_?;
        IVar10 = (pCVar14->fields).iLocalPos;
        pCVar14 = (this->fields).cubeNotToBeSprayed;
        uVar13._0_2_ = (pCVar14->fields).iLocalPos.x;
        uVar13._2_2_ = (pCVar14->fields).iLocalPos.y;
        iVar4 = (pCVar14->fields).iLocalPos.z;
        if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        b.z = iVar4;
        b.x = (short)uVar13;
        b.y = (short)((uint)uVar13 >> 0x10);
        bVar8 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Inequality
                          (IVar10,b,(MethodInfo *)0x0);
        if (bVar8 == 0) goto code_?;
      }
      pCVar14 = (e->fields)._SelectedCube_k__BackingField;
      if (pCVar14 == (CubePickingInfo *)0x0) goto code_?;
      CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                (e,(pCVar14->fields).iLocalPos,AudioActions__Enum_CubeAdded,(MethodInfo *)0x0);
      CubeModelingStateMachine::CubeModelingStateMachine_AddCube(e,(MethodInfo *)0x0);
      pCVar14 = CubeModelingStateMachine::CubeModelingStateMachine_DoPicking(e,(MethodInfo *)0x0);
      (this->fields).cubeNotToBeSprayed = pCVar14;
      func_?();
      bVar7 = (bool)pCVar14;
    }
    this_01 = (this->fields).sprayCursor;
  }
  if (this_01 != (SprayCursor *)0x0) {
    SprayCursor::SprayCursor_UpdateCursor
              (this_01,(e->fields)._SelectedCube_k__BackingField,
               (e->fields)._TargetCubeModel_k__BackingField,bVar7,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = uVar1;
    return;
  }
code_?:
  func_?();
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void Exit(CubeModelingStateMachine) */

void Assembly-CSharp.dll::SprayCubes::SprayCubes_Exit
               (SprayCubes *this,CubeModelingStateMachine *e,MethodInfo *method)

{
  pIStack_1 = this->klass[1]._0.image;
  pSStack_2 = this;
  (*(code *)(this->klass->vtable).HideCursor.method)();
  pGVar3 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
  if (((pGVar3 != (GameEventManager *)0x0) &&
      (pGVar4 = (pGVar3->fields).AvatarCommandsBuildMode,
      pGVar4 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
     ((pGVar4->fields).LaserCommands !=
      (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)) {
    if (iRam_? != 0) {
      pIStack_1 = (Il2CppImage *)0x0;
      pSStack_2 = *(SprayCubes **)(iRam_? + 0x20);
      (**(code **)(iRam_? + 0xc))();
    }
    return;
  }
  uVar5 = func_?(&pSStack_2);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void HideCursor() */

void Assembly-CSharp.dll::SprayCubes::SprayCubes_HideCursor(SprayCubes *this,MethodInfo *method)

{
  pSVar1 = (this->fields).sprayCursor;
  if ((pSVar1 != (SprayCursor *)0x0) &&
     (pCVar2 = (pSVar1->fields).sprayCursor, pCVar2 != (CellCursor *)0x0)) {
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

