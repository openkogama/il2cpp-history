
/* Void ChangeMaterial(Material) */

void Assembly-CSharp.dll::CellCursor::CellCursor_ChangeMaterial
               (CellCursor *this,Material *material,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<CellCursorCubeLineMesh>__Dispose__
                 );
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
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  LStack_1._list = (List_1_System_Object_ *)(this->fields).cursorCubes;
  if ((List_1_CellCursorCubeLineMesh_ *)LStack_1._list == (List_1_CellCursorCubeLineMesh_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)&uStack_4 >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  pLStack_8 = (List_1_T_Enumerator_System_Object_ *)
               ((ulonglong)
                (uint)(((List_1_CellCursorCubeLineMesh_ *)LStack_1._list)->fields)._version << 0x20
               );
  uStack_9 = 0;
  LStack_1._8_8_ = pLStack_8;
  LStack_1._current = (Object *)0x0;
  uStack_4 = 0;
  pLStack_8 = &LStack_1;
  while( true ) {
    bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
            List_1_T_Enumerator_System_Object__MoveNext
                      (&LStack_1,
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<CellCursorCubeLineMesh>__MoveNext__
                      );
    if (bVar10 == 0) {
      return;
    }
    if (LStack_1._current == (Object *)0x0) break;
    if (LStack_1._current[3].klass == (Object__Class *)0x0) {
      FUN_?();
      break;
    }
    UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_SetMaterial
              ((Renderer *)LStack_1._current[3].klass,material,(MethodInfo *)0x0);
  }
  FUN_?();
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* CellCursorCubeLineMesh GetCellCursor(IntVector) */

CellCursorCubeLineMesh *
Assembly-CSharp.dll::CellCursor::CellCursor_GetCellCursor
          (CellCursor *this,IntVector *iLocalPos,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<CellCursorCubeLineMesh>__Dispose__
                 );
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
    FUN_?(&TypeInfo__MV__WorldObject__IntVector);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<CellCursorCubeLineMesh>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<CellCursorCubeLineMesh>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).cursorCubes;
  if (pLVar1 != (List_1_CellCursorCubeLineMesh_ *)0x0) {
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&uStack_3 >> 0xc);
      uVar4 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
      do {
        uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
        puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar5 == *puVar6;
        if (bVar7) {
          *puVar6 = uVar5 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    pLStack_8 = (List_1_T_Enumerator_System_Object_ *)
                 ((ulonglong)(uint)(pLVar1->fields)._version << 0x20);
    uStack_9 = 0;
    LStack_10._8_8_ = pLStack_8;
    LStack_10._current = (Object *)0x0;
    uStack_3 = 0;
    pLStack_8 = &LStack_10;
    LStack_10._list = (List_1_System_Object_ *)pLVar1;
    while (bVar11 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                    ::List_1_T_Enumerator_System_Object__MoveNext
                              (&LStack_10,
                               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<CellCursorCubeLineMesh>__MoveNext__
                              ), pOVar12 = LStack_10._current, bVar11 != 0) {
      if ((CellCursorCubeLineMesh *)LStack_10._current == (CellCursorCubeLineMesh *)0x0)
      goto code_?;
      uVar13 = *(int16_t *)&LStack_10._current[1].klass;
      uVar14 = *(int16_t *)((longlong)&LStack_10._current[1].klass + 2);
      sVar15 = (((CellCursorCubeLineMesh__Fields *)((longlong)LStack_10._current + 0x10))->pos).z;
      if (*(int *)&(TypeInfo__MV__WorldObject__IntVector->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MV__WorldObject__IntVector);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__MV__WorldObject__IntVector->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (uVar13 == iLocalPos->x) {
        uVar16 = iLocalPos->y;
        if ((uVar14 == uVar16) && (sVar15 == iLocalPos->z)) {
          return (CellCursorCubeLineMesh *)pOVar12;
        }
      }
    }
    pLVar1 = (this->fields).cursorCubes;
    if (pLVar1 != (List_1_CellCursorCubeLineMesh_ *)0x0) {
      if ((pLVar1->fields)._size == 0) {
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
code_?:
        FUN_?();
        FUN_?();
        pcVar17 = (code *)swi(3);
        pCVar18 = (CellCursorCubeLineMesh *)(*pcVar17)();
        return pCVar18;
      }
      pCVar19 = (pLVar1->fields)._items;
      if (pCVar19 != (CellCursorCubeLineMesh__Array *)0x0) {
        if ((int)pCVar19->max_length == 0) {
code_?:
          FUN_?();
          pcVar17 = (code *)swi(3);
          pCVar18 = (CellCursorCubeLineMesh *)(*pcVar17)();
          return pCVar18;
        }
        pCVar18 = pCVar19->vector[0];
        uVar2 = 1;
        lVar20 = 0x28;
        while( true ) {
          if ((pLVar1->fields)._size <= (int)uVar2) {
            return pCVar18;
          }
          pLVar1 = (this->fields).cursorCubes;
          if (pLVar1 == (List_1_CellCursorCubeLineMesh_ *)0x0) break;
          if ((uint)(pLVar1->fields)._size <= uVar2) goto code_?;
          pCVar19 = (pLVar1->fields)._items;
          if (pCVar19 == (CellCursorCubeLineMesh__Array *)0x0) break;
          if ((uint)pCVar19->max_length <= uVar2) goto code_?;
          lVar21 = *(longlong *)((longlong)pCVar19->vector + lVar20 + -0x20);
          if ((lVar21 == 0) || (pCVar18 == (CellCursorCubeLineMesh *)0x0)) break;
          fVar22 = (pCVar18->fields).prevCursorSetTime;
          pfVar23 = (float *)(lVar21 + 0x20);
          if (*pfVar23 <= fVar22 && fVar22 != *pfVar23) {
            pCVar18 = (CellCursorCubeLineMesh *)FUN_?((this->fields).cursorCubes,uVar2);
          }
          uVar2 = uVar2 + 1;
          lVar20 = lVar20 + 8;
          pLVar1 = (this->fields).cursorCubes;
          if (pLVar1 == (List_1_CellCursorCubeLineMesh_ *)0x0) break;
        }
      }
    }
  }
  FUN_?();
  pcVar17 = (code *)swi(3);
  pCVar18 = (CellCursorCubeLineMesh *)(*pcVar17)();
  return pCVar18;
}


/* IntVector GetCubeCursorPos(CubePickingInfo) */

IntVector *
Assembly-CSharp.dll::CellCursor::CellCursor_GetCubeCursorPos
          (IntVector *__return_storage_ptr__,CellCursor *this,CubePickingInfo *info,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Cube);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__IntVector);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (info == (CubePickingInfo *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pIVar2 = (IntVector *)(*pcVar1)();
    return pIVar2;
  }
  face = (info->fields).pickedFace;
  cube = (info->fields).cube;
  if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
    FUN_?();
  }
  bVar3 = Cube::Cube_IsFaceBoxSideAligened(cube,face,(MethodInfo *)0x0);
  if (bVar3 == 0) {
    iVar4 = (info->fields).iLocalPos.y;
    __return_storage_ptr__->x = (info->fields).iLocalPos.x;
    __return_storage_ptr__->y = iVar4;
    __return_storage_ptr__->z = (info->fields).iLocalPos.z;
    return __return_storage_ptr__;
  }
  if (*(int *)&(TypeInfo__MV__WorldObject__IntVector->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MV__WorldObject__IntVector);
  }
  sVar5 = 0;
  sVar6 = 0;
  sVar7 = 0;
  sVar8 = 0;
  sVar9 = 0;
  sVar10 = 0;
  switch((info->fields).pickedFace) {
  case 0:
    sVar8 = 1;
    sVar9 = sVar5;
    sVar10 = sVar7;
    break;
  case 1:
    sVar8 = -1;
    sVar9 = sVar5;
    sVar10 = sVar7;
    break;
  case 2:
    sVar8 = sVar6;
    sVar9 = sVar5;
    sVar10 = -1;
    break;
  case 3:
    sVar8 = sVar6;
    sVar9 = sVar5;
    sVar10 = 1;
    break;
  case 4:
    sVar8 = sVar6;
    sVar9 = -1;
    sVar10 = sVar7;
    break;
  case 5:
    sVar8 = sVar6;
    sVar9 = 1;
    sVar10 = 0;
  }
  uVar11 = (info->fields).iLocalPos.x;
  uVar12 = (info->fields).iLocalPos.y;
  sVar6 = (info->fields).iLocalPos.z;
  if (*(int *)&(TypeInfo__MV__WorldObject__IntVector->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MV__WorldObject__IntVector);
  }
  __return_storage_ptr__->x = sVar9 + uVar11;
  __return_storage_ptr__->y = sVar8 + uVar12;
  __return_storage_ptr__->z = sVar6 + sVar10;
  return __return_storage_ptr__;
}


/* Void Remove() */

void Assembly-CSharp.dll::CellCursor::CellCursor_Remove(CellCursor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<CellCursorCubeLineMesh>__Dispose__
                 );
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
  pLVar1 = (this->fields).cursorCubes;
  if (pLVar1 != (List_1_CellCursorCubeLineMesh_ *)0x0) {
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&uStack_3 >> 0xc);
      uVar4 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
      do {
        uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
        puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar5 == *puVar6;
        if (bVar7) {
          *puVar6 = uVar5 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    pLStack_8 = (List_1_T_Enumerator_System_Object_ *)
                 ((ulonglong)(uint)(pLVar1->fields)._version << 0x20);
    uStack_9 = 0;
    LStack_10._8_8_ = pLStack_8;
    LStack_10._current = (Object *)0x0;
    uStack_3 = 0;
    pLStack_8 = &LStack_10;
    LStack_10._list = (List_1_System_Object_ *)pLVar1;
    while (bVar11 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                   ::List_1_T_Enumerator_System_Object__MoveNext
                             (&LStack_10,
                              MethodInfo__System__Collections__Generic__List_1_T___Enumerator<CellCursorCubeLineMesh>__MoveNext__
                             ), pOVar12 = LStack_10._current, bVar11 != 0) {
      if (LStack_10._current == (Object *)0x0) goto code_?;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      obj = (Object_1 *)pOVar12[2].monitor;
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
    pLVar1 = (this->fields).cursorCubes;
    if (pLVar1 != (List_1_CellCursorCubeLineMesh_ *)0x0) {
      piVar13 = &(pLVar1->fields)._version;
      *piVar13 = *piVar13 + 1;
      length = (pLVar1->fields)._size;
      (pLVar1->fields)._size = 0;
      if (0 < length) {
        mscorlib.dll::System::Array::Array_Clear
                  ((Array *)(pLVar1->fields)._items,0,length,(MethodInfo *)0x0);
      }
      return;
    }
  }
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void SetCursor(CubePickingInfo, GameObject) */

void Assembly-CSharp.dll::CellCursor::CellCursor_SetCursor
               (CellCursor *this,CubePickingInfo *info,GameObject *cubeGameObject,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Cube);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__IntVector);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (info != (CubePickingInfo *)0x0) {
    cube = (info->fields).cube;
    face = (info->fields).pickedFace;
    if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
      FUN_?();
    }
    bVar1 = Cube::Cube_IsFaceBoxSideAligened(cube,face,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      IStackX_10.x = (info->fields).iLocalPos.x;
      IStackX_10.y = (info->fields).iLocalPos.y;
      iVar2 = (info->fields).iLocalPos.z;
    }
    else {
      if (*(int *)&(TypeInfo__MV__WorldObject__IntVector->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__MV__WorldObject__IntVector);
      }
      sVar3 = 0;
      sVar4 = 0;
      sVar5 = 0;
      sVar6 = 0;
      sVar7 = 0;
      sVar8 = 0;
      switch((info->fields).pickedFace) {
      case 0:
        sVar6 = 1;
        sVar7 = sVar3;
        sVar8 = sVar5;
        break;
      case 1:
        sVar6 = -1;
        sVar7 = sVar3;
        sVar8 = sVar5;
        break;
      case 2:
        sVar6 = sVar4;
        sVar7 = sVar3;
        sVar8 = -1;
        break;
      case 3:
        sVar6 = sVar4;
        sVar7 = sVar3;
        sVar8 = 1;
        break;
      case 4:
        sVar6 = sVar4;
        sVar7 = -1;
        sVar8 = sVar5;
        break;
      case 5:
        sVar6 = sVar4;
        sVar7 = 1;
        sVar8 = 0;
      }
      uVar9._0_2_ = (info->fields).iLocalPos.x;
      uVar9._2_2_ = (info->fields).iLocalPos.y;
      sVar5 = (info->fields).iLocalPos.z;
      aIStack_10[0]._0_4_ = uVar9;
      if (*(int *)&(TypeInfo__MV__WorldObject__IntVector->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__MV__WorldObject__IntVector);
      }
      iVar2 = sVar5 + sVar8;
      IStackX_10.y = aIStack_10[0].y + sVar6;
      IStackX_10.x = (int16_t)uVar9 + sVar7;
    }
    aIStack_10[0]._0_4_ = IStackX_10._0_4_;
    aIStack_10[0].z = iVar2;
    this_00 = CellCursor_GetCellCursor(this,aIStack_10,(MethodInfo *)0x0);
    if (this_00 != (CellCursorCubeLineMesh *)0x0) {
      aIStack_10[0]._0_4_ = IStackX_10._0_4_;
      aIStack_10[0].z = iVar2;
      CellCursorCubeLineMesh::CellCursorCubeLineMesh_SetCursorCube
                (this_00,aIStack_10,cubeGameObject,(MethodInfo *)0x0);
      return;
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void SetCursor(IntVector, GameObject) */

void Assembly-CSharp.dll::CellCursor::CellCursor_SetCursor_1
               (CellCursor *this,IntVector *position,GameObject *cubeGameObject,MethodInfo *method)

{
  aIStackX_18[0].x = position->x;
  aIStackX_18[0].y = position->y;
  aIStackX_18[0].z = position->z;
  this_00 = CellCursor_GetCellCursor(this,aIStackX_18,(MethodInfo *)0x0);
  if (this_00 != (CellCursorCubeLineMesh *)0x0) {
    aIStackX_18[0].x = position->x;
    aIStackX_18[0].y = position->y;
    aIStackX_18[0].z = position->z;
    CellCursorCubeLineMesh::CellCursorCubeLineMesh_SetCursorCube
              (this_00,aIStackX_18,cubeGameObject,(MethodInfo *)0x0);
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void UpdateCursor() */

void Assembly-CSharp.dll::CellCursor::CellCursor_UpdateCursor(CellCursor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<CellCursorCubeLineMesh>__Dispose__
                 );
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
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  LStack_1._list = (List_1_System_Object_ *)(this->fields).cursorCubes;
  if ((List_1_CellCursorCubeLineMesh_ *)LStack_1._list == (List_1_CellCursorCubeLineMesh_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)&uStack_4 >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  pLStack_8 = (List_1_T_Enumerator_System_Object_ *)
               ((ulonglong)
                (uint)(((List_1_CellCursorCubeLineMesh_ *)LStack_1._list)->fields)._version << 0x20
               );
  uStack_9 = 0;
  LStack_1._8_8_ = pLStack_8;
  LStack_1._current = (Object *)0x0;
  uStack_4 = 0;
  pLStack_8 = &LStack_1;
  while( true ) {
    bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
            List_1_T_Enumerator_System_Object__MoveNext
                      (&LStack_1,
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<CellCursorCubeLineMesh>__MoveNext__
                      );
    if (bVar10 == 0) {
      return;
    }
    if ((CellCursorCubeLineMesh *)LStack_1._current == (CellCursorCubeLineMesh *)0x0) break;
    CellCursorCubeLineMesh::CellCursorCubeLineMesh_Update
              ((CellCursorCubeLineMesh *)LStack_1._current,(MethodInfo *)0x0);
  }
  FUN_?();
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* CellCursor(Int32, Single, Material, Single, Vector3[]) */

void Assembly-CSharp.dll::CellCursor::CellCursor__ctor
               (CellCursor *this,int32_t cursorCubeCount,float diagonalWidth,Material *material,
               float fadeOutTime,Vector3__Array *cubeCorners,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CellCursorCubeLineMesh);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<CellCursorCubeLineMesh>__Add_CellCursorCubeLineMesh_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<CellCursorCubeLineMesh>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<CellCursorCubeLineMesh>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_CellCursorCubeLineMesh_ *)
           FUN_?(TypeInfo__System__Collections__Generic__List<CellCursorCubeLineMesh>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar1,
             MethodInfo__System__Collections__Generic__List<CellCursorCubeLineMesh>__List__);
  bVar2 = iRam_? != 0;
  (this->fields).cursorCubes = pLVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&this->fields >> 0xc);
    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  iVar7 = 0;
  if (0 < cursorCubeCount) {
    do {
      pLVar1 = (this->fields).cursorCubes;
      this_00 = (CellCursorCubeLineMesh *)FUN_?(TypeInfo__CellCursorCubeLineMesh);
      CellCursorCubeLineMesh::CellCursorCubeLineMesh__ctor
                (this_00,diagonalWidth,material,fadeOutTime,cubeCorners,(MethodInfo *)0x0);
      pMVar8 = 
      MethodInfo__System__Collections__Generic__List<CellCursorCubeLineMesh>__Add_CellCursorCubeLineMesh_
      ;
      if (pLVar1 == (List_1_CellCursorCubeLineMesh_ *)0x0) {
DAT_?:
        FUN_?();
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      piVar10 = &(pLVar1->fields)._version;
      *piVar10 = *piVar10 + 1;
      pCVar11 = (pLVar1->fields)._items;
      if (pCVar11 == (CellCursorCubeLineMesh__Array *)0x0) goto DAT_?;
      uVar3 = (pLVar1->fields)._size;
      if (uVar3 < (uint)pCVar11->max_length) {
        (pLVar1->fields)._size = uVar3 + 1;
        FUN_?(pCVar11,(longlong)(int)uVar3,this_00);
      }
      else {
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__AddWithResize
                  ((List_1_System_Object_ *)pLVar1,(Object *)this_00,
                   pMVar8->klass->rgctx_data[0xe].method);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < cursorCubeCount);
  }
  return;
}


/* Void set_Active(Boolean) */

void Assembly-CSharp.dll::CellCursor::CellCursor_set_Active
               (CellCursor *this,bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<CellCursorCubeLineMesh>__Dispose__
                  ,CONCAT71(in_register_00000011,value));
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
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  LStack_1._list = (List_1_System_Object_ *)(this->fields).cursorCubes;
  if ((List_1_CellCursorCubeLineMesh_ *)LStack_1._list == (List_1_CellCursorCubeLineMesh_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)&uStack_4 >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  pLStack_8 = (List_1_T_Enumerator_System_Object_ *)
               ((ulonglong)
                (uint)(((List_1_CellCursorCubeLineMesh_ *)LStack_1._list)->fields)._version << 0x20
               );
  uStack_9 = 0;
  LStack_1._8_8_ = pLStack_8;
  LStack_1._current = (Object *)0x0;
  uStack_4 = 0;
  pLStack_8 = &LStack_1;
  while( true ) {
    bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
            List_1_T_Enumerator_System_Object__MoveNext
                      (&LStack_1,
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<CellCursorCubeLineMesh>__MoveNext__
                      );
    if (bVar10 == 0) {
      return;
    }
    if (LStack_1._current == (Object *)0x0) goto code_?;
    obj = (Object *)LStack_1._current[2].monitor;
    if (obj == (Object *)0x0) break;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pOVar11 = obj[1].klass;
    if (pOVar11 == (Object__Class *)0x0) {
code_?:
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException(obj,(MethodInfo *)0x0);
      break;
    }
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar12 = func_?(&UNK_?);
      FUN_?(uVar12);
      goto code_?;
    }
    pcRam_? = pcVar2;
    (*pcRam_?)(pOVar11,value);
  }
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

