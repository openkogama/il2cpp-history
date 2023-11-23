
/* Void ChangeMaterial(Material) */

void Assembly-CSharp.dll::CellCursor::CellCursor_ChangeMaterial
               (CellCursor *this,Material *material,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffbc;
  puVar5 = &stack0xffffffbc;
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
                    MethodInfo__System__Collections__Generic__List<CellCursorCubeLineMesh>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  LStack_6._list = (List_1_System_Object_ *)0x0;
  LStack_6._index = 0;
  LStack_6._version = 0;
  LStack_6._current = (Object *)0x0;
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).cursorCubes;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    pLVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_8,this_00,
                        MethodInfo__System__Collections__Generic__List<CellCursorCubeLineMesh>__GetEnumerator__
                       );
    LStack_6._list = (List_1_System_Object_ *)pLVar7->_list;
    LStack_6._index = pLVar7->_index;
    LStack_6._version = pLVar7->_version;
    LStack_6._current = *(Object **)&pLVar7->_current;
    LStack_8._version = 0;
    uStack_1 = 1;
    LStack_8._current = (RegexCharClass_SingleRange)&LStack_6;
    while( true ) {
      bVar9 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_6,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<CellCursorCubeLineMesh>__MoveNext__
                        );
      if (bVar9 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  ((Object *)&LStack_6,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<CellCursorCubeLineMesh>__Dispose__
                   ,unaff_EDI);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if (((RegexCharClass_SingleRange)LStack_6._current == (RegexCharClass_SingleRange)0x0) ||
         (*(Renderer **)((int)LStack_6._current + 0x28) == (Renderer *)0x0)) break;
      UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
                (*(Renderer **)((int)LStack_6._current + 0x28),material,(MethodInfo *)0x0);
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* CellCursorCubeLineMesh GetCellCursor(IntVector) */

CellCursorCubeLineMesh *
Assembly-CSharp.dll::CellCursor::CellCursor_GetCellCursor
          (CellCursor *this,IntVector iLocalPos,MethodInfo *method)

{
  pCVar1 = this;
  uStack_2 = 0xffffffff;
  puStack_3 = &DAT_?;
  uStack_4 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_4;
  puStack_5 = &stack0xffffffb0;
  puVar6 = &stack0xffffffb0;
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
    func_?(&TypeInfo__MV__WorldObject__IntVector);
    in_stack_7 =
         &MethodInfo__System__Collections__Generic__List<CellCursorCubeLineMesh>__GetEnumerator__;
    func_?();
    func_?(&
                    MethodInfo__System__Collections__Generic__List<CellCursorCubeLineMesh>__get_Count__
                   );
    in_stack_8 =
         &MethodInfo__System__Collections__Generic__List<CellCursorCubeLineMesh>__get_Item_int_;
    func_?();
    cRam_? = '\x01';
    puVar6 = puStack_5;
  }
  puStack_5 = puVar6;
  LStack_9._list = (List_1_System_Object_ *)0x0;
  LStack_9._index = 0;
  LStack_9._version = 0;
  LStack_9._current = (Object *)0x0;
  pLVar10 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
           (this->fields).cursorCubes;
  if (pLVar10 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    pLVar11 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_12,pLVar10,
                        MethodInfo__System__Collections__Generic__List<CellCursorCubeLineMesh>__GetEnumerator__
                       );
    LStack_9._list = (List_1_System_Object_ *)pLVar11->_list;
    LStack_9._index = pLVar11->_index;
    LStack_9._version = pLVar11->_version;
    LStack_9._current = *(Object **)&pLVar11->_current;
    LStack_12._version = 0;
    uStack_2 = 1;
    LStack_12._current = (RegexCharClass_SingleRange)&LStack_9;
    do {
      bVar13 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_9,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<CellCursorCubeLineMesh>__MoveNext__
                        );
      if (bVar13 == 0) {
        uStack_2 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  ((Object *)&LStack_9,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<CellCursorCubeLineMesh>__Dispose__
                   ,(MethodInfo *)in_stack_7);
        uStack_2 = 0xffffffff;
        pLVar10 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                 (this->fields).cursorCubes;
        if (pLVar10 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
        goto code_?;
        RVar14 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (pLVar10,0,
                           MethodInfo__System__Collections__Generic__List<CellCursorCubeLineMesh>__get_Item_int_
                          );
        pLVar15 = (this->fields).cursorCubes;
        index = 1;
        this = (CellCursor *)RVar14;
        if (pLVar15 != (List_1_CellCursorCubeLineMesh_ *)0x0) goto code_?;
        goto code_?;
      }
      RStack_16 = (RegexCharClass_SingleRange)LStack_9._current;
      if ((RegexCharClass_SingleRange)LStack_9._current == (RegexCharClass_SingleRange)0x0)
      goto code_?;
      uStack_17 = *(undefined4 *)((int)LStack_9._current + 8);
      iStack_18 = *(int16_t *)((int)LStack_9._current + 0xc);
      if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
        in_stack_8 = (MethodInfo **)&UNK_?;
        func_?(TypeInfo__MV__WorldObject__IntVector);
      }
      a.z = iStack_18;
      a.x = (undefined2)uStack_17;
      a.y = uStack_17._2_2_;
      bVar13 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Equality
                        (a,iLocalPos,(MethodInfo *)0x0);
    } while (bVar13 == 0);
    uStack_2 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              ((Object *)&LStack_9,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<CellCursorCubeLineMesh>__Dispose__
               ,(MethodInfo *)in_stack_8);
    this = (CellCursor *)RStack_16;
code_?:
    *unaff_FS_OFFSET = uStack_4;
    return (CellCursorCubeLineMesh *)this;
  }
code_?:
  uVar19 = func_?();
  func_?(uVar19);
  pcVar20 = (code *)swi(3);
  pCVar21 = (CellCursorCubeLineMesh *)(*pcVar20)();
  return pCVar21;
code_?:
  if ((pLVar15->fields)._size <= index) goto code_?;
  pLVar10 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
           (pCVar1->fields).cursorCubes;
  if (pLVar10 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
  goto code_?;
  RVar14 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
          RegexCharClass+SingleRange]::
          List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                    (pLVar10,index,
                     MethodInfo__System__Collections__Generic__List<CellCursorCubeLineMesh>__get_Item_int_
                    );
  if ((RVar14 == (RegexCharClass_SingleRange)0x0) || (this == (CellCursor *)0x0))
  goto code_?;
  if (*(float *)((int)RVar14 + 0x18) <= (float)this[2].klass &&
      (float)this[2].klass != *(float *)((int)RVar14 + 0x18)) {
    pLVar10 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
             (pCVar1->fields).cursorCubes;
    if (pLVar10 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
    goto code_?;
    this = (CellCursor *)
           mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
           RegexCharClass+SingleRange]::
           List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                     (pLVar10,index,
                      MethodInfo__System__Collections__Generic__List<CellCursorCubeLineMesh>__get_Item_int_
                     );
  }
  pLVar15 = (pCVar1->fields).cursorCubes;
  index = index + 1;
  if (pLVar15 == (List_1_CellCursorCubeLineMesh_ *)0x0) goto code_?;
  goto code_?;
}


/* IntVector GetCubeCursorPos(CubePickingInfo) */

IntVector Assembly-CSharp.dll::CellCursor::CellCursor_GetCubeCursorPos
                    (CellCursor *this,CubePickingInfo *info,MethodInfo *method)

{
  uVar1 = (ushort)((uint)in_stack_2 >> 0x10);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Cube);
    func_?(&TypeInfo__MV__WorldObject__IntVector);
    cRam_? = '\x01';
  }
  iVar3 = 0;
  puVar4 = (undefined *)((uint)uVar1 << 0x10);
  if (method == (MethodInfo *)0x0) {
    uVar5 = func_?();
    uVar6 = (undefined2)((uint6)uVar5 >> 0x20);
    uVar7 = (undefined4)uVar5;
    out(uVar6,uVar7);
    out(uVar6,uVar7);
    bVar8 = (byte)((uint6)uVar5 >> 0x20);
    bVar9 = (byte)((uint6)uVar5 >> 0x28);
    bVar10 = bVar9 + bVar8;
    cVar11 = bVar10 + 1;
    uVar6 = CONCAT11(cVar11,bVar8);
    out(uVar6,uVar7);
    bVar12 = (byte)((uint6)uVar5 >> 8);
    out(uVar6,uVar7);
    out(CONCAT11(cVar11 + bVar12 +
                 (0x10 < bVar12 || CARRY1(bVar12 - 0x11,CARRY1(bVar9,bVar8) || 0xfe < bVar10)),bVar8),
        uVar7);
    pcVar13 = (code *)swi(3);
    IVar14 = (IntVector)(*pcVar13)();
    return IVar14;
  }
  cube = (Cube *)method->invoker_method;
  face = method->name;
  if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Cube);
  }
  bVar15 = Cube::Cube_IsFaceBoxSideAligened(cube,(Face__Enum)face,(MethodInfo *)0x0);
  if (bVar15 != 0) {
    if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MV__WorldObject__IntVector);
    }
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              ((IntVector *)&stack0xfffffff4,0,0,0,(MethodInfo *)0x0);
    uVar6 = (undefined2)((uint)puVar4 >> 0x10);
    switch(method->name) {
    case (char *)0x0:
      break;
    case (char *)0x1:
      break;
    case (char *)0x2:
      puVar4 = (undefined *)CONCAT22(uVar6,0xffff);
      break;
    case (char *)0x3:
      puVar4 = (undefined *)CONCAT22(uVar6,1);
      break;
    case (char *)0x4:
      iVar3 = -1;
      break;
    case (char *)0x5:
      iVar3 = 1;
    }
    iVar16 = (int16_t)puVar4;
    pIVar17 = method[1].methodPointer;
    uVar6 = *(undefined2 *)&method[1].virtualMethodPointer;
    if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
      puVar4 = &UNK_?;
      func_?();
    }
    i1.z = (int16_t)pIVar17;
    i1._0_4_ = &stack0xffffffec;
    i2.y = in_stack_18;
    i2.x = uVar6;
    i2.z = iVar3;
    IVar14 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Addition
                       (i1,i2,(MethodInfo *)CONCAT22((short)((uint)puVar4 >> 0x10),iVar16));
    this->klass = (CellCursor__Class *)*IVar14._0_4_;
    *(undefined2 *)&this->monitor = *(undefined2 *)(IVar14._0_4_ + 1);
    IVar19.z = (int16_t)this;
    IVar19._0_4_ = this;
    return IVar19;
  }
  this->klass = (CellCursor__Class *)method[1].methodPointer;
  *(undefined2 *)&this->monitor = *(undefined2 *)&method[1].virtualMethodPointer;
  IVar14.z = extraout_DX;
  IVar14._0_4_ = this;
  return IVar14;
}


/* Void Remove() */

void Assembly-CSharp.dll::CellCursor::CellCursor_Remove(CellCursor *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffbc;
  puVar5 = &stack0xffffffbc;
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
    func_?(&MethodInfo__System__Collections__Generic__List<CellCursorCubeLineMesh>__Clear__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<CellCursorCubeLineMesh>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  LStack_6._list = (List_1_System_Object_ *)0x0;
  LStack_6._index = 0;
  LStack_6._version = 0;
  LStack_6._current = (Object *)0x0;
  method_00 = (MethodInfo *)(this->fields).cursorCubes;
  if (method_00 != (MethodInfo *)0x0) {
    pLVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_8,
                        (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                        method_00,
                        MethodInfo__System__Collections__Generic__List<CellCursorCubeLineMesh>__GetEnumerator__
                       );
    LStack_6._list = (List_1_System_Object_ *)pLVar7->_list;
    LStack_6._index = pLVar7->_index;
    LStack_6._version = pLVar7->_version;
    LStack_6._current = *(Object **)&pLVar7->_current;
    LStack_8._version = 0;
    uStack_1 = 1;
    LStack_8._current = (RegexCharClass_SingleRange)&LStack_6;
    while( true ) {
      bVar9 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_6,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<CellCursorCubeLineMesh>__MoveNext__
                        );
      pOVar10 = LStack_6._current;
      if (bVar9 == 0) break;
      if ((RegexCharClass_SingleRange)LStack_6._current == (RegexCharClass_SingleRange)0x0)
      goto code_?;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Object);
        cRam_? = '\x01';
      }
      obj = *(Object_1 **)((int)pOVar10 + 0x1c);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1(obj,(MethodInfo *)0x0);
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              ((Object *)&LStack_6,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<CellCursorCubeLineMesh>__Dispose__
               ,method_00);
    uStack_1 = 0xffffffff;
    pLVar11 = (this->fields).cursorCubes;
    if (pLVar11 != (List_1_CellCursorCubeLineMesh_ *)0x0) {
      length = (pLVar11->fields)._size;
      piVar12 = &(pLVar11->fields)._version;
      *piVar12 = *piVar12 + 1;
      (pLVar11->fields)._size = 0;
      if (0 < length) {
        mscorlib.dll::System::Array::Array_Clear
                  ((Array *)(pLVar11->fields)._items,0,length,(MethodInfo *)0x0);
      }
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
  }
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void SetCursor(CubePickingInfo, GameObject) */

void Assembly-CSharp.dll::CellCursor::CellCursor_SetCursor
               (CellCursor *this,CubePickingInfo *info,GameObject *cubeGameObject,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Cube);
    func_?(0x7458);
    cRam_? = '\x01';
  }
  IStack_1.x = 0;
  IStack_1.y = 0;
  IStack_1.z = 0;
  FVar2 = Face__Enum_Top;
  if (info == (CubePickingInfo *)0x0) goto code_?;
  cube = (info->fields).cube;
  unaff_EBX = (info->fields).pickedFace;
  if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Cube);
  }
  uVar3 = 0;
  uVar4 = (undefined2)((uint)cube >> 0x10);
  bVar5 = Cube::Cube_IsFaceBoxSideAligened(cube,unaff_EBX,(MethodInfo *)0x0);
  if (bVar5 == 0) {
    uVar6._0_2_ = (info->fields).iLocalPos.x;
    uVar6._2_2_ = (info->fields).iLocalPos.y;
    iVar7 = (info->fields).iLocalPos.z;
    goto code_?;
  }
  if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MV__WorldObject__IntVector);
  }
  MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
            (&IStack_1,0,0,0,(MethodInfo *)0x0);
  switch((info->fields).pickedFace) {
  case 0:
    IStack_1.y = 1;
    break;
  case 1:
    IStack_1.y = 0xffff;
    break;
  case 2:
    IStack_1.z = -1;
    break;
  case 3:
    IStack_1.z = 1;
    break;
  case 4:
    uVar8 = 0xffff;
    goto code_?;
  case 5:
    uVar8 = 1;
code_?:
    IStack_1.x = uVar8;
  }
  iVar9 = IStack_1.z;
  unaff_EBX = IStack_1._0_4_;
  uVar10 = (info->fields).iLocalPos.x;
  iVar7 = (info->fields).iLocalPos.z;
  if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
    uVar3 = 0x1043;
    func_?(TypeInfo__MV__WorldObject__IntVector);
  }
  IVar11.z = uVar10;
  IVar11._0_4_ = auStack_12;
  i2.y = uVar4;
  i2.x = iVar7;
  i2.z = (int16_t)unaff_EBX;
  IVar11 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Addition
                     (IVar11,i2,(MethodInfo *)CONCAT22(uVar3,iVar9));
  uVar6 = *IVar11._0_4_;
  iVar7 = *(int16_t *)(IVar11._0_4_ + 1);
code_?:
  FVar2 = CONCAT22((short)((uint)info >> 0x10),iVar7);
  iLocalPos.z = iVar7;
  iLocalPos.x = (short)uVar6;
  iLocalPos.y = (short)((uint)uVar6 >> 0x10);
  this_00 = CellCursor_GetCellCursor(this,iLocalPos,(MethodInfo *)0x0);
  if (this_00 != (CellCursorCubeLineMesh *)0x0) {
    position.z = iVar7;
    position.x = (short)uVar6;
    position.y = (short)((uint)uVar6 >> 0x10);
    CellCursorCubeLineMesh::CellCursorCubeLineMesh_SetCursorCube
              (this_00,position,cubeGameObject,(MethodInfo *)0x0);
    return;
  }
code_?:
  uVar4 = func_?();
  pbVar13 = (byte *)(unaff_EBX + 0x44 + FVar2 * 8);
  bVar14 = *pbVar13 + (byte)uVar4;
  bVar15 = CARRY1(*pbVar13,(byte)uVar4) || CARRY1(bVar14,unaff_EBX < FVar2);
  *pbVar13 = bVar14 + (unaff_EBX < FVar2);
  bVar14 = bStack_16 + (byte)extraout_ECX;
  bVar17 = CARRY1(bStack_16,(byte)extraout_ECX) || CARRY1(bVar14,bVar15);
  bStack_16 = bVar14 + bVar15;
  pbVar13 = (byte *)(FVar2 - 0xd);
  bVar15 = CARRY1(*pbVar13,extraout_DL) || CARRY1(*pbVar13 + extraout_DL,bVar17);
  *pbVar13 = *pbVar13 + extraout_DL + bVar17;
  pbVar13 = (byte *)(extraout_ECX + -0xd);
  bVar14 = *pbVar13;
  bVar18 = (byte)((ushort)uVar4 >> 8);
  bVar19 = *pbVar13;
  *pbVar13 = bVar19 + bVar18 + bVar15;
  *(char *)(FVar2 - 0xd) =
       *(char *)(FVar2 - 0xd) + bVar18 + (CARRY1(bVar14,bVar18) || CARRY1(bVar19 + bVar18,bVar15));
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}


/* Void SetCursor(IntVector, GameObject) */

void Assembly-CSharp.dll::CellCursor::CellCursor_SetCursor_1
               (CellCursor *this,IntVector position,GameObject *cubeGameObject,MethodInfo *method)

{
  this_00 = CellCursor_GetCellCursor(this,position,(MethodInfo *)0x0);
  if (this_00 != (CellCursorCubeLineMesh *)0x0) {
    CellCursorCubeLineMesh::CellCursorCubeLineMesh_SetCursorCube
              (this_00,position,cubeGameObject,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void UpdateCursor() */

void Assembly-CSharp.dll::CellCursor::CellCursor_UpdateCursor(CellCursor *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff98;
  puVar5 = &stack0xffffff98;
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
                    MethodInfo__System__Collections__Generic__List<CellCursorCubeLineMesh>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  LStack_6._list = (List_1_System_Object_ *)0x0;
  LStack_6._index = 0;
  LStack_6._version = 0;
  LStack_6._current = (Object *)0x0;
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).cursorCubes;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    pLVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_8,this_00,
                        MethodInfo__System__Collections__Generic__List<CellCursorCubeLineMesh>__GetEnumerator__
                       );
    uStack_9 = 0;
    LStack_6._list = (List_1_System_Object_ *)pLVar7->_list;
    LStack_6._index = pLVar7->_index;
    LStack_6._version = pLVar7->_version;
    LStack_6._current = *(Object **)&pLVar7->_current;
    uStack_1 = 1;
    pLStack_10 = &LStack_6;
    while( true ) {
      bVar11 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_6,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<CellCursorCubeLineMesh>__MoveNext__
                        );
      pOVar12 = LStack_6._current;
      if (bVar11 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  ((Object *)&LStack_6,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<CellCursorCubeLineMesh>__Dispose__
                   ,unaff_EBX);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      RStack_13 = (RegexCharClass_SingleRange)LStack_6._current;
      if ((RegexCharClass_SingleRange)LStack_6._current == (RegexCharClass_SingleRange)0x0) break;
      if (cRam_? == '\0') {
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      fVar14 = *(float *)((int)pOVar12 + 0x10);
      pMStack_15 = (Material *)
                   UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0)
      ;
      this_01 = *(GameObject **)((int)pOVar12 + 0x1c);
      fVar14 = fVar14 - ((float)pMStack_15 - *(float *)((int)pOVar12 + 0x18));
      if (0.0 < fVar14) {
        if (this_01 == (GameObject *)0x0) break;
        this_02 = (Renderer *)
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                            (this_01,
                             UnityEngine__Renderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Renderer>__
                            );
        if (this_02 == (Renderer *)0x0) break;
        pMStack_16 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_materials
                               (this_02,(MethodInfo *)0x0);
        uVar17 = 0;
        if (pMStack_16 == (Material__Array *)0x0) break;
        for (; (int)uVar17 < (int)pMStack_16->max_length; uVar17 = uVar17 + 1) {
          if (pMStack_16->max_length <= uVar17) goto code_?;
          pMStack_15 = pMStack_16->vector[uVar17];
          if (pMStack_15 == (Material *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_hideFlags
                    ((Object_1 *)pMStack_15,HideFlags__Enum_DontSave,(MethodInfo *)0x0);
          if ((TypeInfo__CellCursorCubeLineMesh->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pCVar18 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetColor_1
                             ((Color *)&stack0xffffffa4,pMStack_15,
                              TypeInfo__CellCursorCubeLineMesh->static_fields->ColorID,
                              (MethodInfo *)0x0);
          unaff_EBX = (MethodInfo *)pCVar18->r;
          LStack_8._index = (int32_t)pCVar18->g;
          LStack_8._version = (int32_t)pCVar18->b;
          uVar19 = pCVar18->r;
          uVar20 = pCVar18->g;
          uVar21 = pCVar18->b;
          value.z = (float)uVar21;
          value.y = (float)uVar20;
          value.x = (float)uVar19;
          LStack_8._current =
               (RegexCharClass_SingleRange)
               ((fVar14 / *(float *)((int)RStack_13 + 0x10)) * *(float *)((int)RStack_13 + 0x14));
          value.w = (float)LStack_8._current;
          LStack_8._list =
               (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)unaff_EBX;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector_1
                    (pMStack_15,TypeInfo__CellCursorCubeLineMesh->static_fields->ColorID,value,
                     (MethodInfo *)0x0);
        }
      }
      else {
        if (this_01 == (GameObject *)0x0) break;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_01,0,(MethodInfo *)0x0);
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
  return;
}


/* CellCursor(Int32, Single, Material, Single, Vector3[]) */

void Assembly-CSharp.dll::CellCursor::CellCursor__ctor
               (CellCursor *this,int32_t cursorCubeCount,float diagonalWidth,Material *material,
               float fadeOutTime,Vector3__Array *cubeCorners,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CellCursorCubeLineMesh);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<CellCursorCubeLineMesh>__Add_CellCursorCubeLineMesh_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<CellCursorCubeLineMesh>__List__)
    ;
    func_?(&TypeInfo__System__Collections__Generic__List<CellCursorCubeLineMesh>);
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_CellCursorCubeLineMesh_ *)
           func_?(TypeInfo__System__Collections__Generic__List<CellCursorCubeLineMesh>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar1,
             MethodInfo__System__Collections__Generic__List<CellCursorCubeLineMesh>__List__);
  method_00 = (MethodInfo *)&this->fields;
  (this->fields).cursorCubes = pLVar1;
  func_?(method_00,pLVar1);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  iStack_2 = 0;
  if (0 < cursorCubeCount) {
    do {
      pLVar1 = (this->fields).cursorCubes;
      value = (Object *)func_?();
      if (cRam_? == '\0') {
        func_?();
        func_?(&
                        UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshFilter>__
                       );
        func_?(&
                        UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshRenderer>__
                       );
        func_?(&TypeInfo__UnityEngine__GameObject);
        func_?(&TypeInfo__SharedCubeFunctions);
        func_?(&StringLiteral_UIItems);
        func_?(&StringLiteral_CellCursorCubeLineMesh);
        cRam_? = '\x01';
      }
      value[2].klass = (Object__Class *)0x3f000000;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                (value,ExceptionArgument__Enum_obj,unaff_EDI);
      value[2].klass = (Object__Class *)fadeOutTime;
      this_00 = (GameObject *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
                (this_00,StringLiteral_CellCursorCubeLineMesh,(MethodInfo *)0x0);
      value_00 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                           (StringLiteral_UIItems,(MethodInfo *)0x0);
      if (this_00 == (GameObject *)0x0) {
code_?:
        func_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
                (this_00,value_00,(MethodInfo *)0x0);
      value[3].monitor = (MonitorData *)this_00;
      func_?(&value[3].monitor,this_00);
      if ((GameObject *)value[3].monitor == (GameObject *)0x0) goto code_?;
      pOVar4 = (Object__Class *)
               UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                         ((GameObject *)value[3].monitor,
                          UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshRenderer>__
                         );
      value[5].klass = pOVar4;
      func_?(value + 5,pOVar4);
      if (value[5].klass == (Object__Class *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_shadowCastingMode
                ((Renderer *)value[5].klass,ShadowCastingMode__Enum_Off,(MethodInfo *)0x0);
      if (value[5].klass == (Object__Class *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_receiveShadows
                ((Renderer *)value[5].klass,0,(MethodInfo *)0x0);
      if ((GameObject *)value[3].monitor == (GameObject *)0x0) goto code_?;
      this_01 = (MeshFilter *)
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                          ((GameObject *)value[3].monitor,
                           UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshFilter>__
                          );
      if (value[5].klass == (Object__Class *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
                ((Renderer *)value[5].klass,material,(MethodInfo *)0x0);
      if (value[5].klass == (Object__Class *)0x0) goto code_?;
      this_02 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                          ((Renderer *)value[5].klass,(MethodInfo *)0x0);
      if ((TypeInfo__CellCursorCubeLineMesh->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__CellCursorCubeLineMesh);
      }
      if (this_02 == (Material *)0x0) goto code_?;
      pCVar5 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetColor_1
                         ((Color *)&stack0xffffffe4,this_02,
                          TypeInfo__CellCursorCubeLineMesh->static_fields->ColorID,(MethodInfo *)0x0
                         );
      value[2].monitor = (MonitorData *)pCVar5->a;
      if (this_01 == (MeshFilter *)0x0) goto code_?;
      unaff_EDI = (MethodInfo *)0x0;
      mesh = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_mesh
                       (this_01,(MethodInfo *)0x0);
      if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      SharedCubeFunctions::SharedCubeFunctions_AddCubeMeshCubeLines
                (mesh,cubeCorners,diagonalWidth,(MethodInfo *)0x0);
      if (pLVar1 == (List_1_CellCursorCubeLineMesh_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                ((List_1_System_Object_ *)pLVar1,value,
                 MethodInfo__System__Collections__Generic__List<CellCursorCubeLineMesh>__Add_CellCursorCubeLineMesh_
                );
      iStack_2 = iStack_2 + 1;
    } while (iStack_2 < cursorCubeCount);
  }
  return;
}


/* Void set_Active(Boolean) */

void Assembly-CSharp.dll::CellCursor::CellCursor_set_Active
               (CellCursor *this,bool value,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffbc;
  puVar5 = &stack0xffffffbc;
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
                    MethodInfo__System__Collections__Generic__List<CellCursorCubeLineMesh>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  LStack_6._list = (List_1_System_Object_ *)0x0;
  LStack_6._index = 0;
  LStack_6._version = 0;
  LStack_6._current = (Object *)0x0;
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).cursorCubes;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    pLVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_8,this_00,
                        MethodInfo__System__Collections__Generic__List<CellCursorCubeLineMesh>__GetEnumerator__
                       );
    LStack_6._list = (List_1_System_Object_ *)pLVar7->_list;
    LStack_6._index = pLVar7->_index;
    LStack_6._version = pLVar7->_version;
    LStack_6._current = *(Object **)&pLVar7->_current;
    LStack_8._version = 0;
    uStack_1 = 1;
    LStack_8._current = (RegexCharClass_SingleRange)&LStack_6;
    while( true ) {
      bVar9 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_6,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<CellCursorCubeLineMesh>__MoveNext__
                        );
      if (bVar9 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  ((Object *)&LStack_6,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<CellCursorCubeLineMesh>__Dispose__
                   ,unaff_EDI);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if (((RegexCharClass_SingleRange)LStack_6._current == (RegexCharClass_SingleRange)0x0) ||
         (*(GameObject **)((int)LStack_6._current + 0x1c) == (GameObject *)0x0)) break;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (*(GameObject **)((int)LStack_6._current + 0x1c),value,(MethodInfo *)0x0);
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}

