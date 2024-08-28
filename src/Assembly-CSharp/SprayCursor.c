
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
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (pCVar1->fields).cursorCubes;
    if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      pLVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                         ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                           *)&stack0xffffffd8,this_00,
                          MethodInfo__System__Collections__Generic__List<CellCursorCubeLineMesh>__GetEnumerator__
                         );
      array = (CellCursorCubeLineMesh__Array *)&LStack_3;
      LStack_3._list = (List_1_System_Object_ *)pLVar2->_list;
      LStack_3._index = pLVar2->_index;
      LStack_3._version = pLVar2->_version;
      LStack_3._current = *(Object **)&pLVar2->_current;
      while (bVar4 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                     Object]::List_1_T_Enumerator_System_Object__MoveNext
                               (&LStack_3,
                                MethodInfo__System__Collections__Generic__List_1_T___Enumerator<CellCursorCubeLineMesh>__MoveNext__
                               ), pOVar5 = LStack_3._current, bVar4 != 0) {
        if ((RegexCharClass_SingleRange)LStack_3._current == (RegexCharClass_SingleRange)0x0)
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
    if (((pGVar3 == (GameEventManager *)0x0) ||
        (pGVar4 = (pGVar3->fields).AvatarCommandsBuildMode,
        pGVar4 == (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) ||
       (pGVar5 = (pGVar4->fields).LaserCommands,
       pGVar5 == (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0))
    goto code_?;
    GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
    GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_ActivateLaserForDuration
              (pGVar5,(this->fields).addCubeLaserOnTime,(MethodInfo *)0x0);
    fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    (this->fields).addCubeTime = fVar6;
  }
  pCVar7 = (this->fields).sprayCursor;
  if (selectedCube == (CubePickingInfo *)0x0) {
    if (pCVar7 != (CellCursor *)0x0) {
      CellCursor::CellCursor_set_Active(pCVar7,0,(MethodInfo *)0x0);
      return;
    }
    goto code_?;
  }
  if (pCVar7 == (CellCursor *)0x0) goto code_?;
  CellCursor::CellCursor_set_Active(pCVar7,1,(MethodInfo *)0x0);
  iVar8 = (selectedCube->fields).iLocalPos.z;
  uVar9 = (selectedCube->fields).iLocalPos.x;
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
    unaff_ESI = (byte *)0xffffffff;
    uStack_10._4_4_ = (undefined *)((uint)uStack_10._6_2_ << 0x10);
    goto code_?;
  case 3:
    x = 0;
    y = 0;
    uStack_10._4_4_ = (undefined *)((uint)uStack_10._6_2_ << 0x10);
    unaff_ESI = (byte *)0x1;
    goto code_?;
  case 4:
    uStack_10._4_4_ = (undefined *)((uint)uStack_10._6_2_ << 0x10);
    x = -1;
    y = 0;
    goto code_?;
  case 5:
    y = 0;
    uStack_10._4_4_ = (undefined *)((uint)uStack_10._6_2_ << 0x10);
    x = 1;
    goto code_?;
  default:
    y = 0;
  }
  x = 0;
  uStack_10._4_4_ = (undefined *)((uint)uStack_10._6_2_ << 0x10);
code_?:
  unaff_ESI = (byte *)0x0;
code_?:
  uStack_10._0_2_ = 0;
  uStack_10._2_2_ = 0;
  MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
            ((IntVector *)&uStack_10,x,y,(int32_t)unaff_ESI,(MethodInfo *)0x0);
  if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
    pIStack_11 = TypeInfo__MV__WorldObject__IntVector;
    uStack_10._4_4_ = &UNK_?;
    func_?();
  }
  IVar12.z = uVar9;
  IVar12._0_4_ = auStack_13;
  i2.y = in_stack_14;
  i2.x = iVar8;
  i2.z = (int16_t)(undefined4)uStack_10;
  IVar12 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Addition
                     (IVar12,i2,(MethodInfo *)CONCAT22(uVar1,uStack_10._4_2_));
  pIVar15 = IVar12._0_4_;
  uStack_10._0_2_ = pIVar15->x;
  uStack_10._2_2_ = pIVar15->y;
  iVar8 = pIVar15->z;
  if (targetCubeModel != (MVCubeModelBase *)0x0) {
    pCVar7 = (this->fields).sprayCursor;
    pIStack_11 = (IntVector__Class *)(targetCubeModel->fields)._.gameObject;
    if ((pCVar7 != (CellCursor *)0x0) &&
       (this_00 = CellCursor::CellCursor_GetCellCursor(pCVar7,*pIVar15,(MethodInfo *)0x0),
       this_00 != (CellCursorCubeLineMesh *)0x0)) {
      position.z = iVar8;
      position.x = (int16_t)uStack_10;
      position.y = uStack_10._2_2_;
      CellCursorCubeLineMesh::CellCursorCubeLineMesh_SetCursorCube
                (this_00,position,(GameObject *)pIStack_11,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      pGVar3 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
      if ((pGVar3 != (GameEventManager *)0x0) &&
         ((pGVar4 = (pGVar3->fields).AvatarCommandsBuildMode,
          pGVar4 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0 &&
          (pGVar5 = (pGVar4->fields).LaserCommands,
          pGVar5 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0))))
      {
        GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
        GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_UpdatePosition
                  (pGVar5,(selectedCube->fields).point,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  bVar16 = 0;
  func_?();
  bVar17 = extraout_AH - extraout_ECX[0x45];
  bVar18 = extraout_AH < extraout_ECX[0x45] || bVar17 < bVar16;
  bVar17 = bVar17 - bVar16;
  bVar16 = *extraout_ECX + bVar17;
  bVar19 = CARRY1(*extraout_ECX,bVar17) || CARRY1(bVar16,bVar18);
  *extraout_ECX = bVar16 + bVar18;
  bVar17 = (byte)((uint)pIStack_11 >> 8);
  bVar16 = *unaff_ESI + bVar17;
  bVar18 = CARRY1(*unaff_ESI,bVar17) || CARRY1(bVar16,bVar19);
  *unaff_ESI = bVar16 + bVar19;
  bVar19 = CARRY1(*unaff_retaddr,in_stack_20) ||
           CARRY1(*unaff_retaddr + in_stack_20,bVar18);
  *unaff_retaddr = *unaff_retaddr + in_stack_20 + bVar18;
  pbVar21 = (byte *)(in_stack_22 + 0x61);
  bVar16 = *pbVar21;
  bVar17 = *pbVar21;
  *pbVar21 = bVar17 + in_stack_23 + bVar19;
  *(char *)(in_stack_22 + 0x61) =
       *(char *)(in_stack_22 + 0x61) + in_stack_24 +
       (CARRY1(bVar16,in_stack_23) || CARRY1(bVar17 + in_stack_23,bVar19));
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
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

