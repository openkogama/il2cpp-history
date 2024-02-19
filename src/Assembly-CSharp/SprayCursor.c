
/* IntVector FaceToOffset(Face) */

IntVector Assembly-CSharp.dll::SprayCursor::SprayCursor_FaceToOffset
                    (SprayCursor *this,Face__Enum face,MethodInfo *method)

{
  switch(method) {
  case (MethodInfo *)0x0:
    z = 0;
    y = 1;
    goto code_?;
  case (MethodInfo *)0x1:
    z = 0;
    y = -1;
    goto code_?;
  case (MethodInfo *)0x2:
    z = -1;
    break;
  case (MethodInfo *)0x3:
    z = 1;
    break;
  case (MethodInfo *)0x4:
    z = 0;
    y = 0;
    x = -1;
    goto code_?;
  case (MethodInfo *)0x5:
    z = 0;
    y = 0;
    x = 1;
    goto code_?;
  default:
    z = 0;
  }
  y = 0;
code_?:
  x = 0;
code_?:
  this->klass = (SprayCursor__Class *)0x0;
  *(undefined2 *)&this->monitor = 0;
  MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
            ((IntVector *)this,x,y,z,(MethodInfo *)0x0);
  IVar1.z = extraout_DX;
  IVar1._0_4_ = this;
  return IVar1;
}


/* Void Remove() */

void Assembly-CSharp.dll::SprayCursor::SprayCursor_Remove(SprayCursor *this,MethodInfo *method)

{
  pCVar1 = (this->fields).sprayCursor;
  if (pCVar1 != (CellCursor *)0x0) {
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
    LStack_2._list = (List_1_System_Object_ *)0x0;
    LStack_2._index = 0;
    LStack_2._version = 0;
    LStack_2._current = (Object *)0x0;
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (pCVar1->fields).cursorCubes;
    if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      pLVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                         ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                           *)&stack0xffffffd8,this_00,
                          MethodInfo__System__Collections__Generic__List<CellCursorCubeLineMesh>__GetEnumerator__
                         );
      array = (CellCursorCubeLineMesh__Array *)&LStack_2;
      LStack_2._list = (List_1_System_Object_ *)pLVar3->_list;
      LStack_2._index = pLVar3->_index;
      LStack_2._version = pLVar3->_version;
      LStack_2._current = *(Object **)&pLVar3->_current;
      while (bVar4 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                     Object]::List_1_T_Enumerator_System_Object__MoveNext
                               (&LStack_2,
                                MethodInfo__System__Collections__Generic__List_1_T___Enumerator<CellCursorCubeLineMesh>__MoveNext__
                               ), pOVar5 = LStack_2._current, bVar4 != 0) {
        if ((RegexCharClass_SingleRange)LStack_2._current == (RegexCharClass_SingleRange)0x0)
        goto code_?;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        obj = *(Object_1 **)((int)pOVar5 + 0x1c);
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
      pLVar6 = (pCVar1->fields).cursorCubes;
      if (pLVar6 != (List_1_CellCursorCubeLineMesh_ *)0x0) {
        length = (pLVar6->fields)._size;
        piVar7 = &(pLVar6->fields)._version;
        *piVar7 = *piVar7 + 1;
        (pLVar6->fields)._size = 0;
        if (0 < length) {
          array = (pLVar6->fields)._items;
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
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void UnlockMaterialToRemove() */

void Assembly-CSharp.dll::SprayCursor::SprayCursor_UnlockMaterialToRemove
               (SprayCursor *this,MethodInfo *method)

{
  ModelCursor::ModelCursor_ShowUnlockMaterialNotification
            (0,NotificationLifetime__Enum_Low,(MethodInfo *)0x0);
  return;
}


/* Void UpdateCursor(CubePickingInfo, MVCubeModelBase, Boolean) */

void Assembly-CSharp.dll::SprayCursor::SprayCursor_UpdateCursor
               (SprayCursor *this,CubePickingInfo *selectedCube,MVCubeModelBase *targetCubeModel,
               bool addCube,MethodInfo *method)

{
  uVar1 = (undefined2)((uint)in_stack_2 >> 0x10);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__IntVector);
    cRam_? = '\x01';
  }
  if (addCube != 0) {
    pGVar3 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
    bVar4 = (POPCOUNT((uint)pGVar3 & 0xff) & 1U) == 0;
    if (pGVar3 == (GameEventManager *)0x0) goto code_?;
    pGVar5 = (pGVar3->fields).AvatarCommandsBuildMode;
    bVar4 = (POPCOUNT((uint)pGVar5 & 0xff) & 1U) == 0;
    if (pGVar5 == (GameEventManager_AvatarCommandsBuildModeManager *)0x0) goto code_?;
    pGVar6 = (pGVar5->fields).LaserCommands;
    bVar4 = (POPCOUNT((uint)pGVar6 & 0xff) & 1U) == 0;
    if (pGVar6 == (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)
    goto code_?;
    GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
    GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_ActivateLaserForDuration
              (pGVar6,(this->fields).addCubeLaserOnTime,(MethodInfo *)0x0);
    fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    (this->fields).addCubeTime = fVar7;
  }
  pCVar8 = (this->fields).sprayCursor;
  unaff_ESI = selectedCube;
  if (selectedCube == (CubePickingInfo *)0x0) {
    bVar4 = (POPCOUNT((uint)pCVar8 & 0xff) & 1U) == 0;
    if (pCVar8 != (CellCursor *)0x0) {
      CellCursor::CellCursor_set_Active(pCVar8,0,(MethodInfo *)0x0);
      return;
    }
    goto code_?;
  }
  bVar4 = (POPCOUNT((uint)pCVar8 & 0xff) & 1U) == 0;
  if (pCVar8 == (CellCursor *)0x0) goto code_?;
  CellCursor::CellCursor_set_Active(pCVar8,1,(MethodInfo *)0x0);
  in_stack_9 = (selectedCube->fields).iLocalPos.z;
  uVar10 = (selectedCube->fields).iLocalPos.x;
  switch((selectedCube->fields).pickedFace) {
  case 0:
    y = 1;
    break;
  case 1:
    y = -1;
    break;
  case 2:
    x = 0;
    y = 0;
    z = -1;
    goto code_?;
  case 3:
    x = 0;
    y = 0;
    z = 1;
    goto code_?;
  case 4:
    x = -1;
    y = 0;
    goto code_?;
  case 5:
    y = 0;
    x = 1;
    goto code_?;
  default:
    y = 0;
  }
  x = 0;
code_?:
  z = 0;
code_?:
  iVar11 = 0;
  iVar12 = 0;
  MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
            ((IntVector *)&stack0xfffffff0,x,y,z,(MethodInfo *)0x0);
  if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
    iVar11 = -0x4609;
    func_?();
  }
  IVar13.z = uVar10;
  IVar13._0_4_ = &stack0xffffffe8;
  i2.y = in_stack_14;
  i2.x = in_stack_9;
  i2.z = iVar12;
  IVar13 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Addition
                     (IVar13,i2,(MethodInfo *)CONCAT22(uVar1,iVar11));
  pIVar15 = IVar13._0_4_;
  uVar16._0_2_ = pIVar15->x;
  uVar16._2_2_ = pIVar15->y;
  in_stack_9 = pIVar15->z;
  bVar4 = (POPCOUNT((uint)targetCubeModel & 0xff) & 1U) == 0;
  if (targetCubeModel != (MVCubeModelBase *)0x0) {
    pCVar8 = (this->fields).sprayCursor;
    cubeGameObject = (targetCubeModel->fields)._.gameObject;
    bVar4 = (POPCOUNT((uint)pCVar8 & 0xff) & 1U) == 0;
    if (pCVar8 != (CellCursor *)0x0) {
      this_00 = CellCursor::CellCursor_GetCellCursor(pCVar8,*pIVar15,(MethodInfo *)0x0);
      bVar4 = (POPCOUNT((uint)this_00 & 0xff) & 1U) == 0;
      if (this_00 != (CellCursorCubeLineMesh *)0x0) {
        position.z = in_stack_9;
        position.x = (int16_t)uVar16;
        position.y = SUB42(uVar16,2);
        CellCursorCubeLineMesh::CellCursorCubeLineMesh_SetCursorCube
                  (this_00,position,cubeGameObject,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
        method_00 = (MethodInfo *)0x0;
        goto code_?;
      }
    }
  }
code_?:
  do {
    do {
      do {
        bVar17 = 0;
        method_00 = (MethodInfo *)&UNK_?;
        uVar1 = func_?();
        if (!bVar4) {
          pbVar18 = (byte *)(extraout_ECX + -0x79efba47);
          bVar19 = *pbVar18;
          bVar20 = *pbVar18 + (byte)uVar1;
          *pbVar18 = bVar20 + bVar17;
          pcVar21 = (char *)((int)&unaff_ESI[-0x151fec2].fields.point.y + 1);
          *pcVar21 = *pcVar21 + (char)((ushort)uVar1 >> 8) +
                    (CARRY1(bVar19,(byte)uVar1) || CARRY1(bVar20,bVar17));
          pcVar22 = (code *)swi(3);
          (*pcVar22)();
          return;
        }
code_?:
        pGVar3 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager(method_00);
        bVar4 = (POPCOUNT((uint)pGVar3 & 0xff) & 1U) == 0;
      } while (pGVar3 == (GameEventManager *)0x0);
      pGVar5 = (pGVar3->fields).AvatarCommandsBuildMode;
      bVar4 = (POPCOUNT((uint)pGVar5 & 0xff) & 1U) == 0;
    } while (pGVar5 == (GameEventManager_AvatarCommandsBuildModeManager *)0x0);
    pGVar6 = (pGVar5->fields).LaserCommands;
    bVar4 = (POPCOUNT((uint)pGVar6 & 0xff) & 1U) == 0;
  } while (pGVar6 == (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0);
  GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
  GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_UpdatePosition
            (pGVar6,(unaff_ESI->fields).point,(MethodInfo *)0x0);
  return;
}


/* SprayCursor(Vector3[]) */

void Assembly-CSharp.dll::SprayCursor::SprayCursor__ctor
               (SprayCursor *this,Vector3__Array *cubeCorners,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CellCursor);
    cRam_? = '\x01';
  }
  (this->fields).addCubeLaserOnTime = 0.2;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PrefabPool);
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar1 != (PrefabPool *)0x0) {
    material = (pPVar1->fields).cellCursorMaterial;
    this_00 = (CellCursor *)func_?(TypeInfo__CellCursor);
    CellCursor::CellCursor__ctor(this_00,1,0.03,material,1.0,cubeCorners,(MethodInfo *)0x0);
    (this->fields).sprayCursor = this_00;
    func_?(&this->fields,this_00);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

