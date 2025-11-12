
/* Void Add(IGizmoHandle) */

void Assembly-CSharp.dll::RTG::GizmoHandleCollection::GizmoHandleCollection_Add
               (GizmoHandleCollection *this,IGizmoHandle *handle,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::IGizmoHandle>__Add_int__RTG__IGizmoHandle_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__IGizmoHandle);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::IGizmoHandle>__Add_RTG__IGizmoHandle_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::IGizmoHandle>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__IGizmoHandle);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields)._idToHandle;
  if ((handle != (IGizmoHandle *)0x0) &&
     (iVar1 = FUN_?(0,TypeInfo__RTG__IGizmoHandle,handle),
     this_00 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0)) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                      (this_00,iVar1,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::IGizmoHandle>__ContainsKey_int_
                       ->klass->rgctx_data[0x21].method);
    if ((-1 < iVar1) ||
       (pGVar2 = (Gizmo *)FUN_?(1,TypeInfo__RTG__IGizmoHandle,handle),
       pMVar3 = 
       MethodInfo__System__Collections__Generic__List<RTG::IGizmoHandle>__Add_RTG__IGizmoHandle_,
       pGVar2 != (this->fields)._gizmo)) {
      return;
    }
    this_01 = (List_1_System_Object_ *)(this->fields)._handles;
    if (this_01 != (List_1_System_Object_ *)0x0) {
      piVar4 = &(this_01->fields)._version;
      *piVar4 = *piVar4 + 1;
      pOVar5 = (this_01->fields)._items;
      if (pOVar5 != (Object__Array *)0x0) {
        uVar6 = (this_01->fields)._size;
        if (uVar6 < (uint)pOVar5->max_length) {
          (this_01->fields)._size = uVar6 + 1;
          FUN_?(pOVar5,(longlong)(int)uVar6,handle);
        }
        else {
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__AddWithResize
                    (this_01,(Object *)handle,pMVar3->klass->rgctx_data[0xe].method);
        }
        this_02 = (this->fields)._idToHandle;
        iVar1 = FUN_?(0,TypeInfo__RTG__IGizmoHandle,handle);
        if (this_02 != (Dictionary_2_System_Int32_RTG_IGizmoHandle_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
          Dictionary_2_System_Int32_System_Object__TryInsert
                    ((Dictionary_2_System_Int32_System_Object_ *)this_02,iVar1,(Object *)handle,
                     (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pOVar5 >> 8),2),
                     MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::IGizmoHandle>__Add_int__RTG__IGizmoHandle_
                     ->klass->rgctx_data[0x22].method);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Clear() */

void Assembly-CSharp.dll::RTG::GizmoHandleCollection::GizmoHandleCollection_Clear
               (GizmoHandleCollection *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::IGizmoHandle>__Clear__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<RTG::IGizmoHandle>__Clear__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._handles;
  if (pLVar1 != (List_1_RTG_IGizmoHandle_ *)0x0) {
    iVar2 = (pLVar1->fields)._size;
    piVar3 = &(pLVar1->fields)._version;
    *piVar3 = *piVar3 + 1;
    (pLVar1->fields)._size = 0;
    if (0 < iVar2) {
      mscorlib.dll::System::Array::Array_Clear
                ((Array *)(pLVar1->fields)._items,0,iVar2,(MethodInfo *)0x0);
    }
    pDVar4 = (this->fields)._idToHandle;
    if (pDVar4 != (Dictionary_2_System_Int32_RTG_IGizmoHandle_ *)0x0) {
      iVar2 = (pDVar4->fields)._count;
      if (0 < iVar2) {
        pIVar5 = (pDVar4->fields)._buckets;
        if (pIVar5 == (Int32__Array *)0x0) {
          FUN_?();
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        mscorlib.dll::System::Array::Array_Clear
                  ((Array *)(pDVar4->fields)._buckets,0,(int32_t)pIVar5->max_length,
                   (MethodInfo *)0x0);
        (pDVar4->fields)._count = 0;
        (pDVar4->fields)._freeCount = 0;
        (pDVar4->fields)._freeList = -1;
        mscorlib.dll::System::Array::Array_Clear
                  ((Array *)(pDVar4->fields)._entries,0,iVar2,(MethodInfo *)0x0);
      }
      piVar3 = &(pDVar4->fields)._version;
      *piVar3 = *piVar3 + 1;
      return;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Boolean Contains(IGizmoHandle) */

bool Assembly-CSharp.dll::RTG::GizmoHandleCollection::GizmoHandleCollection_Contains
               (GizmoHandleCollection *this,IGizmoHandle *handle,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::IGizmoHandle>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__IGizmoHandle);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields)._idToHandle;
  if (handle != (IGizmoHandle *)0x0) {
    iVar1 = FUN_?(0,TypeInfo__RTG__IGizmoHandle,handle);
    if (this_00 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
      iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
              Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                        (this_00,iVar1,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::IGizmoHandle>__ContainsKey_int_
                         ->klass->rgctx_data[0x21].method);
      return (byte)((uint)iVar1 >> 0x1f) ^ 1;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Boolean Contains(Int32) */

bool Assembly-CSharp.dll::RTG::GizmoHandleCollection::GizmoHandleCollection_Contains_1
               (GizmoHandleCollection *this,int32_t handleId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::IGizmoHandle>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields)._idToHandle;
  if (this_00 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                      (this_00,handleId,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::IGizmoHandle>__ContainsKey_int_
                       ->klass->rgctx_data[0x21].method);
    return (byte)((uint)iVar1 >> 0x1f) ^ 1;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* List`1[RTG.IGizmoHandle] GetAll() */

List_1_RTG_IGizmoHandle_ *
Assembly-CSharp.dll::RTG::GizmoHandleCollection::GizmoHandleCollection_GetAll
          (GizmoHandleCollection *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::IGizmoHandle>__List_System__Collections__Generic__IEnumerable<RTG::IGizmoHandle>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<RTG::IGizmoHandle>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  collection = (this->fields)._handles;
  this_00 = (List_1_System_Object_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<RTG::IGizmoHandle>);
  mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object___ctor_1
            (this_00,(IEnumerable_1_System_Object_ *)collection,
             MethodInfo__System__Collections__Generic__List<RTG::IGizmoHandle>__List_System__Collections__Generic__IEnumerable<RTG::IGizmoHandle>_
            );
  return (List_1_RTG_IGizmoHandle_ *)this_00;
}


/* List`1[RTG.GizmoHandleHoverData] GetAllHandlesHoverData(Ray) */

List_1_RTG_GizmoHandleHoverData_ *
Assembly-CSharp.dll::RTG::GizmoHandleCollection::GizmoHandleCollection_GetAllHandlesHoverData
          (GizmoHandleCollection *this,Ray *hoverRay,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::IGizmoHandle>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::IGizmoHandle>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::IGizmoHandle>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__IGizmoHandle);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleHoverData>__Add_RTG__GizmoHandleHoverData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::IGizmoHandle>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleHoverData>__List_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<RTG::GizmoHandleHoverData>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_RTG_GizmoHandleHoverData_ *)
           FUN_?(TypeInfo__System__Collections__Generic__List<RTG::GizmoHandleHoverData>);
  pvVar2 = MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleHoverData>__List_int_->
            klass->rgctx_data[3].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar2 + 0x135) & 1) == 0) {
    pvVar2 = (void *)FUN_?(pvVar2);
  }
  pGVar3 = (GizmoHandleHoverData__Array *)FUN_?(pvVar2,10);
  (pLVar1->fields)._items = pGVar3;
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)&pLVar1->fields >> 0xc);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
  pLVar9 = (List_1_System_Object_ *)(this->fields)._handles;
  if (pLVar9 == (List_1_System_Object_ *)0x0) {
    FUN_?();
code_?:
    FUN_?();
  }
  else {
    if (iRam_? != 0) {
      uVar4 = (uint)((ulonglong)&uStack_10 >> 0xc);
      lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
      do {
        uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
        puVar7 = (ulonglong *)(lVar5 + 0xADDR);
        LOCK();
        bVar8 = uVar6 == *puVar7;
        if (bVar8) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar8);
    }
    pLStack_11 = (List_1_T_Enumerator_System_Object_ *)
                 ((ulonglong)(uint)((List_1_RTG_IGizmoHandle___Fields *)&pLVar9->fields)->_version
                 << 0x20);
    uStack_12 = 0;
    LStack_13._8_8_ = pLStack_11;
    LStack_13._current = (Object *)0x0;
    uStack_10 = 0;
    pLStack_11 = &LStack_13;
    LStack_13._list = pLVar9;
    while( true ) {
      bVar14 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_13,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::IGizmoHandle>__MoveNext__
                        );
      pOVar15 = LStack_13._current;
      if (bVar14 == 0) {
        return pLVar1;
      }
      if (LStack_13._current == (Object *)0x0) break;
      pOVar16 = (LStack_13._current)->klass;
      uVar17 = 0;
      uVar18._0_1_ = (pOVar16->_1).rank;
      uVar18._1_1_ = (pOVar16->_1).minimumAlignment;
      if (uVar18 != 0) {
        do {
          if ((IGizmoHandle__Class *)pOVar16->interfaceOffsets[uVar17].interfaceType ==
              TypeInfo__RTG__IGizmoHandle) {
            pVVar19 = &(pOVar16->vtable).Equals + (pOVar16->interfaceOffsets[uVar17].offset + 0x2f);
            goto code_?;
          }
          uVar17 = uVar17 + 1;
        } while (uVar17 < uVar18);
      }
      pVVar19 = (VirtualInvokeData *)
                FUN_?(LStack_13._current,TypeInfo__RTG__IGizmoHandle,0x2f);
code_?:
      fStack_20 = (hoverRay->m_Origin).x;
      fStack_21 = (hoverRay->m_Origin).y;
      fStack_22 = (hoverRay->m_Origin).z;
      fStack_23 = (hoverRay->m_Direction).x;
      uStack_24._0_4_ = (hoverRay->m_Direction).y;
      uStack_24._4_4_ = (hoverRay->m_Direction).z;
      lVar5 = (*pVVar19->methodPtr)(pOVar15,&fStack_20,pVVar19->method);
      if (lVar5 != 0) {
        if (pLVar1 == (List_1_RTG_GizmoHandleHoverData_ *)0x0) goto code_?;
        FUN_?(pLVar1,lVar5);
      }
    }
  }
  FUN_?();
  FUN_?();
  pcVar25 = (code *)swi(3);
  pLVar1 = (List_1_RTG_GizmoHandleHoverData_ *)(*pcVar25)();
  return pLVar1;
}


/* IGizmoHandle GetHandleById(Int32) */

IGizmoHandle *
Assembly-CSharp.dll::RTG::GizmoHandleCollection::GizmoHandleCollection_GetHandleById
          (GizmoHandleCollection *this,int32_t handleId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::IGizmoHandle>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = 
  MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::IGizmoHandle>__get_Item_int_;
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields)._idToHandle;
  if (this_00 == (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pIVar3 = (IGizmoHandle *)(*pcVar2)();
    return pIVar3;
  }
  uVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
          Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                    (this_00,handleId,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::IGizmoHandle>__get_Item_int_
                     ->klass->rgctx_data[0x21].method);
  if ((int)uVar4 < 0) {
    uVar5 = func_?(pMVar1->klass->rgctx_data,0xe);
    key = (Object *)func_?(uVar5);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowKeyNotFoundException
              (key,(MethodInfo *)0x0);
    pcVar2 = (code *)swi(3);
    pIVar3 = (IGizmoHandle *)(*pcVar2)();
    return pIVar3;
  }
  pDVar6 = (this_00->fields)._entries;
  if (pDVar6 != (Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_Vector3___Array *)0x0) {
    if (uVar4 < (uint)pDVar6->max_length) {
      return *(IGizmoHandle **)&pDVar6->vector[(int)uVar4].value.y;
    }
    FUN_?();
    pcVar2 = (code *)swi(3);
    pIVar3 = (IGizmoHandle *)(*pcVar2)();
    return pIVar3;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pIVar3 = (IGizmoHandle *)(*pcVar2)();
  return pIVar3;
}


/* Void Remove(IGizmoHandle) */

void Assembly-CSharp.dll::RTG::GizmoHandleCollection::GizmoHandleCollection_Remove
               (GizmoHandleCollection *this,IGizmoHandle *handle,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::IGizmoHandle>__Remove_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__IGizmoHandle);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::IGizmoHandle>__Remove_RTG__IGizmoHandle_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (List_1_System_Object_ *)(this->fields)._handles;
  if (this_00 != (List_1_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Remove
              (this_00,(Object *)handle,
               MethodInfo__System__Collections__Generic__List<RTG::IGizmoHandle>__Remove_RTG__IGizmoHandle_
              );
    pDVar1 = (this->fields)._idToHandle;
    if ((handle != (IGizmoHandle *)0x0) &&
       (uVar2 = FUN_?(0,TypeInfo__RTG__IGizmoHandle,handle),
       pMVar3 = 
       MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::IGizmoHandle>__Remove_int_,
       pDVar1 != (Dictionary_2_System_Int32_RTG_IGizmoHandle_ *)0x0)) {
      uVar4 = (ulonglong)uVar2;
      if ((pDVar1->fields)._buckets != (Int32__Array *)0x0) {
        pIVar5 = (pDVar1->fields)._comparer;
        if (pIVar5 != (IEqualityComparer_1_System_Int32_ *)0x0) {
          pvVar6 = MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::IGizmoHandle>__Remove_int_
                    ->klass->rgctx_data[1].rgctxDataDummy;
          if ((*(byte *)((longlong)pvVar6 + 0x135) & 1) == 0) {
            pvVar6 = (void *)FUN_?(pvVar6);
          }
          uVar2 = FUN_?(1,pvVar6,pIVar5,uVar4);
        }
        pIVar7 = (pDVar1->fields)._buckets;
        if (pIVar7 == (Int32__Array *)0x0) {
code_?:
          FUN_?();
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        uVar9 = (int)(uVar2 & 0x7fffffff) % (int)pIVar7->max_length;
        if ((uint)pIVar7->max_length <= uVar9) {
code_?:
          FUN_?();
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        uVar10 = pIVar7->vector[(int)uVar9] - 1;
        uVar11 = 0xffffffff;
        while (uVar12 = uVar10, -1 < (int)uVar12) {
          pDVar13 = (pDVar1->fields)._entries;
          if (pDVar13 == (Dictionary_2_TKey_TValue_Entry_System_Int32_RTG_IGizmoHandle___Array *)0x0)
          goto code_?;
          if ((uint)pDVar13->max_length <= uVar12) goto code_?;
          if (pDVar13->vector[(int)uVar12].hashCode == (uVar2 & 0x7fffffff)) {
            pIVar14 = pMVar3->klass->rgctx_data;
            if ((pDVar1->fields)._comparer == (IEqualityComparer_1_System_Int32_ *)0x0) {
              pEVar15 = mscorlib.dll::System::Collections::Generic::EqualityComparer`1[System::
                        Int32]::EqualityComparer_1_System_Int32__get_Default(pIVar14[3].method);
              if (pEVar15 == (EqualityComparer_1_System_Int32_ *)0x0) goto code_?;
              cVar16 = (*(pEVar15->klass->vtable).__unknown.methodPtr)
                                 (pEVar15,(ulonglong)(uint)pDVar13->vector[(int)uVar12].key,uVar4,
                                  (pEVar15->klass->vtable).__unknown.method);
            }
            else {
              pvVar6 = pIVar14[1].rgctxDataDummy;
              if ((*(byte *)((longlong)pvVar6 + 0x135) & 1) == 0) {
                FUN_?(pvVar6);
              }
              cVar16 = FUN_?();
            }
            if (cVar16 != '\0') {
              if ((int)uVar11 < 0) {
                pIVar7 = (pDVar1->fields)._buckets;
                if (pIVar7 == (Int32__Array *)0x0) goto code_?;
                if ((uint)pIVar7->max_length <= uVar9) goto code_?;
                pIVar7->vector[(int)uVar9] = pDVar13->vector[(int)uVar12].next + 1;
              }
              else {
                pDVar17 = (pDVar1->fields)._entries;
                if (pDVar17 == (Dictionary_2_TKey_TValue_Entry_System_Int32_RTG_IGizmoHandle___Array
                               *)0x0) goto code_?;
                if ((uint)pDVar17->max_length <= uVar11) goto code_?;
                pDVar17->vector[(int)uVar11].next = pDVar13->vector[(int)uVar12].next;
              }
              pDVar13->vector[(int)uVar12].hashCode = -1;
              pDVar13->vector[(int)uVar12].next = (pDVar1->fields)._freeList;
              pDVar13->vector[(int)uVar12].value = (IGizmoHandle *)0x0;
              piVar18 = &(pDVar1->fields)._freeCount;
              *piVar18 = *piVar18 + 1;
              piVar18 = &(pDVar1->fields)._version;
              *piVar18 = *piVar18 + 1;
              (pDVar1->fields)._freeList = uVar12;
              return;
            }
          }
          uVar11 = uVar12;
          uVar10 = pDVar13->vector[(int)uVar12].next;
        }
      }
      return;
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* GizmoHandleCollection(Gizmo) */

void Assembly-CSharp.dll::RTG::GizmoHandleCollection::GizmoHandleCollection__ctor
               (GizmoHandleCollection *this,Gizmo *gizmo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::IGizmoHandle>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_RTG::IGizmoHandle>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<RTG::IGizmoHandle>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<RTG::IGizmoHandle>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (List_1_RTG_IGizmoHandle_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<RTG::IGizmoHandle>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<RTG::IGizmoHandle>__List__);
  bVar1 = iRam_? != 0;
  (this->fields)._handles = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._handles >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  this_01 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )FUN_?(
                          TypeInfo__System__Collections__Generic__Dictionary<int,_RTG::IGizmoHandle>
                          );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::IGizmoHandle>__Dictionary__
            );
  iVar6 = iRam_?;
  (this->fields)._idToHandle = (Dictionary_2_System_Int32_RTG_IGizmoHandle_ *)this_01;
  if (iVar6 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields)._idToHandle >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar6 = iRam_?;
    } while (!bVar1);
  }
  (this->fields)._gizmo = gizmo;
  if (iVar6 != 0) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  return;
}


/* Int32 get_Count() */

int32_t Assembly-CSharp.dll::RTG::GizmoHandleCollection::GizmoHandleCollection_get_Count
                  (GizmoHandleCollection *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<RTG::IGizmoHandle>__get_Count__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._handles;
  if (pLVar1 != (List_1_RTG_IGizmoHandle_ *)0x0) {
    return (pLVar1->fields)._size;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}


/* IGizmoHandle get_Item(Int32) */

IGizmoHandle *
Assembly-CSharp.dll::RTG::GizmoHandleCollection::GizmoHandleCollection_get_Item
          (GizmoHandleCollection *this,int32_t index,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<RTG::IGizmoHandle>__get_Item_int_)
    ;
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._handles;
  if (pLVar1 != (List_1_RTG_IGizmoHandle_ *)0x0) {
    if ((uint)(pLVar1->fields)._size <= (uint)index) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      pIVar3 = (IGizmoHandle *)(*pcVar2)();
      return pIVar3;
    }
    pIVar4 = (pLVar1->fields)._items;
    if (pIVar4 != (IGizmoHandle__Array *)0x0) {
      if ((uint)index < (uint)pIVar4->max_length) {
        return pIVar4->vector[index];
      }
      FUN_?();
      pcVar2 = (code *)swi(3);
      pIVar3 = (IGizmoHandle *)(*pcVar2)();
      return pIVar3;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pIVar3 = (IGizmoHandle *)(*pcVar2)();
  return pIVar3;
}

