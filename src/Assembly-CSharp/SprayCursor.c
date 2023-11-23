
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
  ModelCursor::ModelCursor_ShowUnlockMaterialNotification((MethodInfo *)0x0);
  return;
}


/* Void UpdateCursor(CubePickingInfo, MVCubeModelBase, Boolean) */

void Assembly-CSharp.dll::SprayCursor::SprayCursor_UpdateCursor
               (SprayCursor *this,CubePickingInfo *selectedCube,MVCubeModelBase *targetCubeModel,
               bool addCube,MethodInfo *method)

{
  uVar1 = (undefined2)((uint)in_stack_2 >> 0x10);
  method_00 = (MethodInfo *)
              CONCAT31((int3)((uint)in_stack_3 >> 8),(char)((uint)unaff_EBX >> 0x18));
  argName = CONCAT31((int3)unaff_EBX,(char)((uint)unaff_ESI >> 0x18));
  value = (Object *)CONCAT31((int3)unaff_ESI,(char)((uint)unaff_EDI >> 0x18));
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (addCube != 0) {
    pGVar4 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
    if (((pGVar4 == (GameEventManager *)0x0) ||
        (pGVar5 = (pGVar4->fields).AvatarCommandsBuildMode,
        pGVar5 == (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) ||
       (pGVar6 = (pGVar5->fields).LaserCommands,
       pGVar6 == (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0))
    goto code_?;
    uVar7 = (uint3)((uint)value >> 8);
    GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
    GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_ActivateLaserForDuration
              (pGVar6,(this->fields).addCubeLaserOnTime,(MethodInfo *)0x0);
    value = (Object *)((uint)uVar7 << 8);
    fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    (this->fields).addCubeTime = fVar8;
  }
  pCVar9 = (this->fields).sprayCursor;
  unaff_ESI = selectedCube;
  if (selectedCube == (CubePickingInfo *)0x0) {
    if (pCVar9 != (CellCursor *)0x0) {
      CellCursor::CellCursor_set_Active(pCVar9,0,(MethodInfo *)0x0);
      return;
    }
    goto code_?;
  }
  if (pCVar9 == (CellCursor *)0x0) goto code_?;
  CellCursor::CellCursor_set_Active(pCVar9,1,(MethodInfo *)0x0);
  in_stack_10 = (selectedCube->fields).iLocalPos.z;
  uVar11 = (selectedCube->fields).iLocalPos.x;
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
    z = 0xffffffff;
    uStack_12._4_4_ = (undefined *)((uint)uStack_12._6_2_ << 0x10);
    goto code_?;
  case 3:
    x = 0;
    y = 0;
    uStack_12._4_4_ = (undefined *)((uint)uStack_12._6_2_ << 0x10);
    z = 1;
    goto code_?;
  case 4:
    uStack_12._4_4_ = (undefined *)((uint)uStack_12._6_2_ << 0x10);
    x = -1;
    y = 0;
    goto code_?;
  case 5:
    y = 0;
    uStack_12._4_4_ = (undefined *)((uint)uStack_12._6_2_ << 0x10);
    x = 1;
    goto code_?;
  default:
    y = 0;
  }
  x = 0;
  uStack_12._4_4_ = (undefined *)((uint)uStack_12._6_2_ << 0x10);
code_?:
  z = 0;
code_?:
  uStack_12._0_2_ = 0;
  uStack_12._2_2_ = 0;
  method_00 = (MethodInfo *)((uint)method_00 & 0xffffff00);
  argName = z >> 0x18;
  value = (Object *)CONCAT31((int3)z,(char)((uint)y >> 0x18));
  MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
            ((IntVector *)&uStack_12,x,y,z,(MethodInfo *)0x0);
  if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
    pIStack_13 = TypeInfo__MV__WorldObject__IntVector;
    uStack_12._4_4_ = &UNK_?;
    func_?();
  }
  IVar14.z = uVar11;
  IVar14._0_4_ = &stack0xffffffe8;
  i2.y = in_stack_15;
  i2.x = in_stack_10;
  i2.z = (int16_t)(undefined4)uStack_12;
  IVar14 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Addition
                     (IVar14,i2,(MethodInfo *)CONCAT22(uVar1,uStack_12._4_2_));
  unaff_EBX = IVar14._0_4_;
  uStack_12._0_2_ = unaff_EBX->x;
  uStack_12._2_2_ = unaff_EBX->y;
  in_stack_10 = unaff_EBX->z;
  if (targetCubeModel != (MVCubeModelBase *)0x0) {
    pCVar9 = (this->fields).sprayCursor;
    pIStack_13 = (IntVector__Class *)(targetCubeModel->fields)._.gameObject;
    if ((pCVar9 != (CellCursor *)0x0) &&
       (this_00 = CellCursor::CellCursor_GetCellCursor(pCVar9,*unaff_EBX,(MethodInfo *)0x0),
       this_00 != (CellCursorCubeLineMesh *)0x0)) {
      position.z = in_stack_10;
      position.x = (int16_t)uStack_12;
      position.y = uStack_12._2_2_;
      CellCursorCubeLineMesh::CellCursorCubeLineMesh_SetCursorCube
                (this_00,position,(GameObject *)pIStack_13,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      pGVar4 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
      if ((pGVar4 != (GameEventManager *)0x0) &&
         ((pGVar5 = (pGVar4->fields).AvatarCommandsBuildMode,
          pGVar5 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0 &&
          (pGVar6 = (pGVar5->fields).LaserCommands,
          pGVar6 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0))))
      {
        fVar8 = (selectedCube->fields).point.z;
        to.z._1_2_ = (short)((uint)fVar8 >> 8);
        to._0_9_ = *(unkbyte9 *)&(selectedCube->fields).point;
        to.z._3_1_ = (char)((uint)fVar8 >> 0x18);
        GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
        GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_UpdatePosition
                  (pGVar6,to,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  bVar16 = 0;
  uVar1 = func_?();
  if (SBORROW4(extraout_EDX,1)) {
    pbVar17 = (byte *)(extraout_ECX + 0x71);
    bVar18 = (byte)(extraout_EDX + -1);
    bVar19 = CARRY1(*pbVar17,bVar18) || CARRY1(*pbVar17 + bVar18,bVar16);
    *pbVar17 = *pbVar17 + bVar18 + bVar16;
    pbVar17 = (byte *)((int)&unaff_ESI[2].klass + 1);
    bVar20 = CARRY1(*pbVar17,bVar18) || CARRY1(*pbVar17 + bVar18,bVar19);
    *pbVar17 = *pbVar17 + bVar18 + bVar19;
    pbVar17 = (byte *)((int)&unaff_ESI[2].klass + 1);
    bVar18 = (byte)((ushort)uVar1 >> 8);
    bVar16 = *pbVar17 + bVar18;
    bVar19 = CARRY1(*pbVar17,bVar18) || CARRY1(bVar16,bVar20);
    *pbVar17 = bVar16 + bVar20;
    pbVar17 = (byte *)((int)&unaff_ESI[2].klass + 1);
    bVar16 = *pbVar17;
    bVar21 = (byte)((uint)(extraout_EDX + -1) >> 8);
    bVar18 = *pbVar17 + bVar21;
    *pbVar17 = bVar18 + bVar19;
    pcVar22 = (char *)((int)&unaff_ESI[-0xed6c7a].fields.normal.z + 1);
    *pcVar22 = *pcVar22 + (char)uVar1 + (CARRY1(bVar16,bVar21) || CARRY1(bVar18,bVar19));
    pcVar23 = (code *)swi(3);
    (*pcVar23)();
    return;
  }
  pcVar23 = (code *)swi(0xcc);
  (*pcVar23)();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,argName,method_00);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pPVar24 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar24 == (PrefabPool *)0x0) {
    func_?();
    pcVar23 = (code *)swi(3);
    (*pcVar23)();
    return;
  }
  material = (pPVar24->fields).cellCursorMaterial;
  pCVar9 = (CellCursor *)func_?();
  CellCursor::CellCursor__ctor
            (pCVar9,1,0.03,material,1.0,(Vector3__Array *)selectedCube,(MethodInfo *)0x0);
  *(CellCursor **)&unaff_EBX[1].y = pCVar9;
  func_?(&unaff_EBX[1].y);
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

