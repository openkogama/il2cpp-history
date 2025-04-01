
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
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).cursorCubes;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    pLVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_7,this_00,
                        MethodInfo__System__Collections__Generic__List<CellCursorCubeLineMesh>__GetEnumerator__
                       );
    LStack_8._list = (List_1_System_Object_ *)pLVar6->_list;
    LStack_8._index = pLVar6->_index;
    LStack_8._version = pLVar6->_version;
    LStack_8._current = *(Object **)&pLVar6->_current;
    LStack_7._version = 0;
    uStack_1 = 1;
    LStack_7._current = (RegexCharClass_SingleRange)&LStack_8;
    while( true ) {
      bVar9 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_8,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<CellCursorCubeLineMesh>__MoveNext__
                        );
      if (bVar9 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&LStack_8,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<CellCursorCubeLineMesh>__Dispose__
                   ,unaff_EDI);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if (((RegexCharClass_SingleRange)LStack_8._current == (RegexCharClass_SingleRange)0x0) ||
         (*(Renderer **)((int)LStack_8._current + 0x28) == (Renderer *)0x0)) break;
      UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
                (*(Renderer **)((int)LStack_8._current + 0x28),material,(MethodInfo *)0x0);
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
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb4;
  puVar5 = &stack0xffffffb4;
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
    in_stack_6 =
         &MethodInfo__System__Collections__Generic__List<CellCursorCubeLineMesh>__GetEnumerator__;
    func_?();
    func_?(&
                    MethodInfo__System__Collections__Generic__List<CellCursorCubeLineMesh>__get_Count__
                   );
    in_stack_7 =
         &MethodInfo__System__Collections__Generic__List<CellCursorCubeLineMesh>__get_Item_int_;
    func_?();
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pLVar8 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
           (this->fields).cursorCubes;
  if (pLVar8 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    pLVar9 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_10,pLVar8,
                        MethodInfo__System__Collections__Generic__List<CellCursorCubeLineMesh>__GetEnumerator__
                       );
    LStack_11._list = (List_1_System_Object_ *)pLVar9->_list;
    LStack_11._index = pLVar9->_index;
    LStack_11._version = pLVar9->_version;
    LStack_11._current = *(Object **)&pLVar9->_current;
    LStack_10._version = 0;
    uStack_1 = 1;
    LStack_10._current = (RegexCharClass_SingleRange)&LStack_11;
    do {
      bVar12 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_11,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<CellCursorCubeLineMesh>__MoveNext__
                        );
      RVar13 = (RegexCharClass_SingleRange)LStack_11._current;
      if (bVar12 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&LStack_11,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<CellCursorCubeLineMesh>__Dispose__
                   ,(MethodInfo *)in_stack_6);
        uStack_1 = 0xffffffff;
        pLVar8 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                 (this->fields).cursorCubes;
        if (pLVar8 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
        goto code_?;
        RVar13 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (pLVar8,0,
                           MethodInfo__System__Collections__Generic__List<CellCursorCubeLineMesh>__get_Item_int_
                          );
        index = 1;
        pLVar8 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                 (this->fields).cursorCubes;
        goto joined_?;
      }
      if ((RegexCharClass_SingleRange)LStack_11._current == (RegexCharClass_SingleRange)0x0)
      goto code_?;
      uStack_14 = *(undefined4 *)((int)LStack_11._current + 8);
      iStack_15 = *(int16_t *)((int)LStack_11._current + 0xc);
      if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
        in_stack_7 = (MethodInfo **)&UNK_?;
        func_?(TypeInfo__MV__WorldObject__IntVector);
      }
      a.z = iStack_15;
      a.x = (undefined2)uStack_14;
      a.y = uStack_14._2_2_;
      bVar12 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Equality
                        (a,iLocalPos,(MethodInfo *)0x0);
    } while (bVar12 == 0);
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)&LStack_11,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<CellCursorCubeLineMesh>__Dispose__
               ,(MethodInfo *)in_stack_7);
code_?:
    *unaff_FS_OFFSET = uStack_3;
    return (CellCursorCubeLineMesh *)RVar13;
  }
code_?:
  func_?();
  pcVar16 = (code *)swi(3);
  pCVar17 = (CellCursorCubeLineMesh *)(*pcVar16)();
  return pCVar17;
joined_?:
  if (pLVar8 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
  goto code_?;
  if ((pLVar8->fields)._size <= index) goto code_?;
  if (((pLVar8 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
      (RVar18 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                         (pLVar8,index,
                          MethodInfo__System__Collections__Generic__List<CellCursorCubeLineMesh>__get_Item_int_
                         ), RVar18 == (RegexCharClass_SingleRange)0x0)) ||
     (RVar13 == (RegexCharClass_SingleRange)0x0)) goto code_?;
  if (*(float *)((int)RVar18 + 0x18) <= *(float *)((int)RVar13 + 0x18) &&
      *(float *)((int)RVar13 + 0x18) != *(float *)((int)RVar18 + 0x18)) {
    pLVar8 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
             (this->fields).cursorCubes;
    if (pLVar8 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
    goto code_?;
    RVar13 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                      (pLVar8,index,
                       MethodInfo__System__Collections__Generic__List<CellCursorCubeLineMesh>__get_Item_int_
                      );
  }
  index = index + 1;
  pLVar8 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
           (this->fields).cursorCubes;
  goto joined_?;
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
    iVar6 = (int)uVar5;
    *(undefined1 *)(iVar6 + -0x43 + (int)((ulonglong)uVar5 >> 0x20)) = 0xc6;
    bVar7 = (byte)((ulonglong)uVar5 >> 0x28);
    cVar8 = bVar7 + (byte)uVar5;
    uVar9 = (undefined2)((ulonglong)uVar5 >> 0x30);
    cVar10 = (char)((ulonglong)uVar5 >> 0x20);
    *(undefined1 *)(iVar6 + -0x2f + CONCAT22(uVar9,CONCAT11(cVar8,cVar10))) = 0xc6;
    *(undefined1 *)
     (iVar6 + -0x34 + CONCAT22(uVar9,CONCAT11(cVar8 + cVar10 + CARRY1(bVar7,(byte)uVar5),cVar10))) =
         0xcc;
    pcVar11 = (code *)swi(3);
    IVar12 = (IntVector)(*pcVar11)();
    return IVar12;
  }
  cube = (Cube *)method->invoker_method;
  face = method->name;
  if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Cube);
  }
  bVar13 = Cube::Cube_IsFaceBoxSideAligened(cube,(Face__Enum)face,(MethodInfo *)0x0);
  if (bVar13 != 0) {
    if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MV__WorldObject__IntVector);
    }
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              ((IntVector *)&stack0xfffffff4,0,0,0,(MethodInfo *)0x0);
    uVar9 = (undefined2)((uint)puVar4 >> 0x10);
    switch(method->name) {
    case (char *)0x0:
      break;
    case (char *)0x1:
      break;
    case (char *)0x2:
      puVar4 = (undefined *)CONCAT22(uVar9,0xffff);
      break;
    case (char *)0x3:
      puVar4 = (undefined *)CONCAT22(uVar9,1);
      break;
    case (char *)0x4:
      iVar3 = -1;
      break;
    case (char *)0x5:
      iVar3 = 1;
    }
    iVar14 = (int16_t)puVar4;
    pIVar15 = method[1].methodPointer;
    uVar9 = *(undefined2 *)&method[1].virtualMethodPointer;
    if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
      puVar4 = &UNK_?;
      func_?();
    }
    i1.z = (int16_t)pIVar15;
    i1._0_4_ = &stack0xffffffec;
    i2.y = in_stack_16;
    i2.x = uVar9;
    i2.z = iVar3;
    IVar12 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Addition
                       (i1,i2,(MethodInfo *)CONCAT22((short)((uint)puVar4 >> 0x10),iVar14));
    this->klass = (CellCursor__Class *)*IVar12._0_4_;
    *(undefined2 *)&this->monitor = *(undefined2 *)(IVar12._0_4_ + 1);
    IVar17.z = (int16_t)this;
    IVar17._0_4_ = this;
    return IVar17;
  }
  this->klass = (CellCursor__Class *)method[1].methodPointer;
  *(undefined2 *)&this->monitor = *(undefined2 *)&method[1].virtualMethodPointer;
  IVar12.z = extraout_DX;
  IVar12._0_4_ = this;
  return IVar12;
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
  method_00 = (MethodInfo *)(this->fields).cursorCubes;
  if (method_00 != (MethodInfo *)0x0) {
    pLVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_7,
                        (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                        method_00,
                        MethodInfo__System__Collections__Generic__List<CellCursorCubeLineMesh>__GetEnumerator__
                       );
    LStack_8._list = (List_1_System_Object_ *)pLVar6->_list;
    LStack_8._index = pLVar6->_index;
    LStack_8._version = pLVar6->_version;
    LStack_8._current = *(Object **)&pLVar6->_current;
    LStack_7._version = 0;
    uStack_1 = 1;
    LStack_7._current = (RegexCharClass_SingleRange)&LStack_8;
    while( true ) {
      bVar9 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_8,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<CellCursorCubeLineMesh>__MoveNext__
                        );
      pOVar10 = LStack_8._current;
      if (bVar9 == 0) break;
      if ((RegexCharClass_SingleRange)LStack_8._current == (RegexCharClass_SingleRange)0x0)
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
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)&LStack_8,
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
    func_?(0xb0b4);
    cRam_? = '\x01';
  }
  IStack_1.x = 0;
  IStack_1.y = 0;
  IStack_1.z = 0;
  if (info != (CubePickingInfo *)0x0) {
    cube = (info->fields).cube;
    face = (info->fields).pickedFace;
    if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Cube);
    }
    uVar2 = 0;
    uVar3 = (undefined2)((uint)cube >> 0x10);
    bVar4 = Cube::Cube_IsFaceBoxSideAligened(cube,face,(MethodInfo *)0x0);
    if (bVar4 == 0) {
      uVar5._0_2_ = (info->fields).iLocalPos.x;
      uVar5._2_2_ = (info->fields).iLocalPos.y;
      iVar6 = (info->fields).iLocalPos.z;
    }
    else {
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
        IStack_1.y = -1;
        break;
      case 2:
        IStack_1.z = -1;
        break;
      case 3:
        IStack_1.z = 1;
        break;
      case 4:
        IStack_1.x = -1;
        break;
      case 5:
        IStack_1.x = 1;
      }
      iVar7 = IStack_1.z;
      iVar8 = IStack_1.x;
      uVar9 = (info->fields).iLocalPos.x;
      iVar6 = (info->fields).iLocalPos.z;
      if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
        uVar2 = 0x1044;
        func_?(TypeInfo__MV__WorldObject__IntVector);
      }
      IVar10.z = uVar9;
      IVar10._0_4_ = auStack_11;
      i2.y = uVar3;
      i2.x = iVar6;
      i2.z = iVar8;
      IVar10 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Addition
                         (IVar10,i2,(MethodInfo *)CONCAT22(uVar2,iVar7));
      uVar5 = *IVar10._0_4_;
      iVar6 = *(int16_t *)(IVar10._0_4_ + 1);
    }
    iLocalPos.z = iVar6;
    iLocalPos.x = (short)uVar5;
    iLocalPos.y = (short)((uint)uVar5 >> 0x10);
    this_00 = CellCursor_GetCellCursor(this,iLocalPos,(MethodInfo *)0x0);
    if (this_00 != (CellCursorCubeLineMesh *)0x0) {
      position.z = iVar6;
      position.x = (short)uVar5;
      position.y = (short)((uint)uVar5 >> 0x10);
      CellCursorCubeLineMesh::CellCursorCubeLineMesh_SetCursorCube
                (this_00,position,cubeGameObject,(MethodInfo *)0x0);
      return;
    }
  }
  bVar12 = 0;
  func_?();
  bVar13 = extraout_EDX < extraout_ECX || extraout_EDX - extraout_ECX < (uint)bVar12;
  pbVar14 = (byte *)(((extraout_EDX - extraout_ECX) - (uint)bVar12) + extraout_ECX * 8);
  bVar12 = *pbVar14;
  bVar15 = *pbVar14;
  *pbVar14 = bVar15 + extraout_AH + bVar13;
  cRam_? = cRam_? + (char)(extraout_ECX >> 8) +
                 (CARRY1(bVar12,extraout_AH) || CARRY1(bVar15 + extraout_AH,bVar13));
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
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).cursorCubes;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    pLVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_7,this_00,
                        MethodInfo__System__Collections__Generic__List<CellCursorCubeLineMesh>__GetEnumerator__
                       );
    uStack_8 = 0;
    LStack_9._list = (List_1_System_Object_ *)pLVar6->_list;
    LStack_9._index = pLVar6->_index;
    LStack_9._version = pLVar6->_version;
    LStack_9._current = *(Object **)&pLVar6->_current;
    uStack_1 = 1;
    pLStack_10 = &LStack_9;
    while( true ) {
      bVar11 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_9,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<CellCursorCubeLineMesh>__MoveNext__
                        );
      pOVar12 = LStack_9._current;
      if (bVar11 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&LStack_9,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<CellCursorCubeLineMesh>__Dispose__
                   ,unaff_EBX);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      RStack_13 = (RegexCharClass_SingleRange)LStack_9._current;
      if ((RegexCharClass_SingleRange)LStack_9._current == (RegexCharClass_SingleRange)0x0) break;
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
        while( true ) {
          if (pMStack_16 == (Material__Array *)0x0) goto code_?;
          if ((int)pMStack_16->max_length <= (int)uVar17) break;
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
          LStack_7._index = (int32_t)pCVar18->g;
          LStack_7._version = (int32_t)pCVar18->b;
          uVar19 = pCVar18->r;
          uVar20 = pCVar18->g;
          uVar21 = pCVar18->b;
          value.b = (float)uVar21;
          value.g = (float)uVar20;
          value.r = (float)uVar19;
          LStack_7._current =
               (RegexCharClass_SingleRange)
               ((fVar14 / *(float *)((int)RStack_13 + 0x10)) * *(float *)((int)RStack_13 + 0x14));
          value.a = (float)LStack_7._current;
          LStack_7._list =
               (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)unaff_EBX;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor_1
                    (pMStack_15,TypeInfo__CellCursorCubeLineMesh->static_fields->ColorID,value,
                     (MethodInfo *)0x0);
          uVar17 = uVar17 + 1;
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
  pCVar2 = &this->fields;
  pCVar2->cursorCubes = pLVar1;
  method_00 = (MethodInfo *)pCVar2;
  func_?(pCVar2,pLVar1);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  this = (CellCursor *)0x0;
  if (0 < cursorCubeCount) {
    do {
      pLVar1 = pCVar2->cursorCubes;
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
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                (value,ExceptionArgument__Enum_obj,in_stack_3);
      value[2].klass = (Object__Class *)fadeOutTime;
      this_00 = (GameObject *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
                (this_00,StringLiteral_CellCursorCubeLineMesh,(MethodInfo *)0x0);
      value_00 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                           (StringLiteral_UIItems,(MethodInfo *)0x0);
      if (this_00 == (GameObject *)0x0) {
code_?:
        func_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
                (this_00,value_00,(MethodInfo *)0x0);
      ppMVar5 = &value[3].monitor;
      *ppMVar5 = (MonitorData *)this_00;
      func_?(ppMVar5,this_00);
      if ((GameObject *)*ppMVar5 == (GameObject *)0x0) goto code_?;
      pOVar6 = (Object__Class *)
               UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                         ((GameObject *)*ppMVar5,
                          UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshRenderer>__
                         );
      pOVar7 = value + 5;
      pOVar7->klass = pOVar6;
      func_?(pOVar7,pOVar6);
      if (pOVar7->klass == (Object__Class *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_shadowCastingMode
                ((Renderer *)pOVar7->klass,ShadowCastingMode__Enum_Off,(MethodInfo *)0x0);
      if (pOVar7->klass == (Object__Class *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_receiveShadows
                ((Renderer *)pOVar7->klass,0,(MethodInfo *)0x0);
      if ((GameObject *)*ppMVar5 == (GameObject *)0x0) goto code_?;
      this_01 = (MeshFilter *)
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                          ((GameObject *)*ppMVar5,
                           UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshFilter>__
                          );
      if (pOVar7->klass == (Object__Class *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
                ((Renderer *)pOVar7->klass,material,(MethodInfo *)0x0);
      if (pOVar7->klass == (Object__Class *)0x0) goto code_?;
      this_02 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                          ((Renderer *)pOVar7->klass,(MethodInfo *)0x0);
      if ((TypeInfo__CellCursorCubeLineMesh->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__CellCursorCubeLineMesh);
      }
      if (this_02 == (Material *)0x0) goto code_?;
      pCVar8 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetColor_1
                         ((Color *)&stack0xffffffe4,this_02,
                          TypeInfo__CellCursorCubeLineMesh->static_fields->ColorID,(MethodInfo *)0x0
                         );
      value[2].monitor = (MonitorData *)pCVar8->a;
      if (this_01 == (MeshFilter *)0x0) goto code_?;
      in_stack_3 = (MethodInfo *)0x0;
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
      this = (CellCursor *)((int)&this->klass + 1);
    } while ((int)this < cursorCubeCount);
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
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).cursorCubes;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    pLVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_7,this_00,
                        MethodInfo__System__Collections__Generic__List<CellCursorCubeLineMesh>__GetEnumerator__
                       );
    LStack_8._list = (List_1_System_Object_ *)pLVar6->_list;
    LStack_8._index = pLVar6->_index;
    LStack_8._version = pLVar6->_version;
    LStack_8._current = *(Object **)&pLVar6->_current;
    LStack_7._version = 0;
    uStack_1 = 1;
    LStack_7._current = (RegexCharClass_SingleRange)&LStack_8;
    while( true ) {
      bVar9 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_8,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<CellCursorCubeLineMesh>__MoveNext__
                        );
      if (bVar9 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&LStack_8,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<CellCursorCubeLineMesh>__Dispose__
                   ,unaff_EDI);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if (((RegexCharClass_SingleRange)LStack_8._current == (RegexCharClass_SingleRange)0x0) ||
         (*(GameObject **)((int)LStack_8._current + 0x1c) == (GameObject *)0x0)) break;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (*(GameObject **)((int)LStack_8._current + 0x1c),value,(MethodInfo *)0x0);
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}

