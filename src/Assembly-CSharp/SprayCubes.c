
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
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
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
      ppSVar2 = &(this->fields).sprayCursor;
      *ppSVar2 = value;
      func_?(ppSVar2,value);
      pGVar3 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
      if (((pGVar3 != (GameEventManager *)0x0) &&
          (pGVar4 = (pGVar3->fields).AvatarCommandsBuildMode,
          pGVar4 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
         (this_00 = (pGVar4->fields).LaserCommands,
         this_00 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)) {
        UnityEngine.AudioModule.dll::UnityEngine::AudioClip::
        AudioClip_InvokePCMSetPositionCallback_Internal((AudioClip *)this_00,5,(MethodInfo *)0x0);
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

void Assembly-CSharp.dll::SprayCubes::SprayCubes_Execute
               (SprayCubes *this,CubeModelingStateMachine *e,MethodInfo *method)

{
  pCVar1 = (CubePickingInfo *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &stack0xfffffff0;
  pSVar2 = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__CubeBase);
    func_?(&TypeInfo__MV__WorldObject__CubeDataPacker);
    func_?(&TypeInfo__Cube);
    func_?(&TypeInfo__MV__WorldObject__IntVector);
    func_?(&TypeInfo__MVInputWrapper);
    cRam_? = '\x01';
  }
  CubeModelTool::CubeModelTool_Execute((CubeModelTool *)this,e,(MethodInfo *)0x0);
  if ((this->fields)._.waitForMouseUp != 0) {
    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar3 = MVInputWrapper::MVInputWrapper_GetBooleanControl
                      (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
    (this->fields)._.waitForMouseUp = bVar3;
    *unaff_FS_OFFSET = pCVar1;
    return;
  }
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar3 = MVInputWrapper::MVInputWrapper_GetBooleanControl
                    (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
  if (bVar3 == 0) {
    (this->fields).cubeNotToBeSprayed = (CubePickingInfo *)0x0;
    func_?();
code_?:
    this_01 = (this->fields).sprayCursor;
    bVar3 = 0;
    if (e == (CubeModelingStateMachine *)0x0) goto code_?;
  }
  else {
    if (e == (CubeModelingStateMachine *)0x0) goto code_?;
    pCVar4 = (e->fields)._SelectedCube_k__BackingField;
    if (pCVar4 == (CubePickingInfo *)0x0) {
      bVar3 = DrawPlane::DrawPlane_get_IsDrawPlaneActive((MethodInfo *)0x0);
      if ((bVar3 != 0) &&
         (bVar3 = DrawPlane::DrawPlane_Pick((Vector3 *)&stack0xffffffbc,(MethodInfo *)0x0),
         bVar3 != 0)) {
        pMVar5 = (e->fields)._TargetCubeModel_k__BackingField;
        if (pMVar5 == (MVCubeModelBase *)0x0) goto code_?;
        intVectorHitPosition = (IntVector *)&stack0xffffffc8;
        bVar3 = DrawPlane::DrawPlane_GetCubePosOnDrawplane
                          ((pMVar5->fields)._.gameObject,intVectorHitPosition,(MethodInfo *)0x0);
        if (bVar3 != 0) {
          puVar6 = &UNK_?;
          requestedCubePos.z = (int16_t)e;
          requestedCubePos._0_4_ = intVectorHitPosition;
          pCVar7 = e;
          CVar8 = CubeModelingStateMachine::CubeModelingStateMachine_CanAddCubeAt_1
                            (e,requestedCubePos,(MethodInfo *)0x0);
          if (CVar8 == CanPerformCubeActionResult__Enum_Yes) {
            pos_00.z._0_1_ = (char)pCVar7;
            pos_00._0_4_ = puVar6;
            pos_00.z._1_1_ = (char)((uint)pCVar7 >> 8);
            CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                      (e,pos_00,AudioActions__Enum_CubeAdded,(MethodInfo *)0x0);
            pMVar5 = (e->fields)._TargetCubeModel_k__BackingField;
            if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            corners = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_IdentityCorners
                                ((MethodInfo *)0x0);
            if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            byteCorners = MVWorldObject.dll::MV::WorldObject::CubeDataPacker::
                          CubeDataPacker_CornersToByteArray(corners,(MethodInfo *)0x0);
            material = CubeModelingStateMachine::CubeModelingStateMachine_get_CurrentMaterialId
                                 (e,(MethodInfo *)0x0);
            if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            faceMaterials = Cube::Cube_CreateMaterialArray(material,(MethodInfo *)0x0);
            this_00 = (Cube *)func_?();
            Cube::Cube__ctor(this_00,byteCorners,faceMaterials,(MethodInfo *)0x0);
            if (pMVar5 == (MVCubeModelBase *)0x0) goto code_?;
            pos.z = (int16_t)pCVar7;
            pos._0_4_ = puVar6;
            MVCubeModelBase::MVCubeModelBase_AddCube
                      (pMVar5,pos,(CubeBase *)this_00,(MethodInfo *)0x0);
          }
        }
      }
      (this->fields).cubeNotToBeSprayed = (CubePickingInfo *)0x0;
      bVar3 = 0xd0;
      func_?();
    }
    else {
      pCVar9 = (this->fields).cubeNotToBeSprayed;
      if (pCVar9 != (CubePickingInfo *)0x0) {
        uVar10 = (pCVar4->fields).iLocalPos.x;
        uVar11 = (pCVar4->fields).iLocalPos.y;
        a.y = uVar11;
        a.x = uVar10;
        iVar12 = (pCVar4->fields).iLocalPos.z;
        uVar13._0_2_ = (pCVar9->fields).iLocalPos.x;
        uVar13._2_2_ = (pCVar9->fields).iLocalPos.y;
        iVar14 = (pCVar9->fields).iLocalPos.z;
        if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        a.z = iVar12;
        b.z = iVar14;
        b.x = (short)uVar13;
        b.y = (short)((uint)uVar13 >> 0x10);
        bVar3 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Inequality
                          (a,b,(MethodInfo *)0x0);
        if (bVar3 == 0) goto code_?;
      }
      pCVar1 = (e->fields)._SelectedCube_k__BackingField;
      if (pCVar1 == (CubePickingInfo *)0x0) goto code_?;
      CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                (e,(pCVar1->fields).iLocalPos,AudioActions__Enum_CubeAdded,(MethodInfo *)0x0);
      EVar15 = CubeModelingStateMachine::CubeModelingStateMachine_AddCube(e,(MethodInfo *)0x0);
      bVar3 = EVar15 != EditCubeChange__Enum_None;
      pCVar1 = CubeModelingStateMachine::CubeModelingStateMachine_DoPicking(e,(MethodInfo *)0x0);
      (this->fields).cubeNotToBeSprayed = pCVar1;
      this = pSVar2;
      func_?();
    }
    this_01 = (this->fields).sprayCursor;
  }
  if (this_01 != (SprayCursor *)0x0) {
    SprayCursor::SprayCursor_UpdateCursor
              (this_01,(e->fields)._SelectedCube_k__BackingField,
               (e->fields)._TargetCubeModel_k__BackingField,bVar3,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = pCVar1;
    return;
  }
code_?:
  func_?();
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
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

