
/* Void Add(GizmoCap2D) */

void Assembly-CSharp.dll::RTG::GizmoCap2DCollection::GizmoCap2DCollection_Add
               (GizmoCap2DCollection *this,GizmoCap2D *cap,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoCap2D>__Add_int__RTG__GizmoCap2D_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::GizmoCap2D>__Add_RTG__GizmoCap2D_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoCap2D>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (((cap != (GizmoCap2D *)0x0) &&
      (pGVar1 = (cap->fields)._._handle, pGVar1 != (GizmoHandle *)0x0)) &&
     (this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields)._handleIdToCap,
     this_00 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0)) {
    iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                      (this_00,(pGVar1->fields)._id,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoCap2D>__ContainsKey_int_
                       ->klass->rgctx_data[0x21].method);
    pMVar3 = MethodInfo__System__Collections__Generic__List<RTG::GizmoCap2D>__Add_RTG__GizmoCap2D_;
    if (-1 < iVar2) {
      return;
    }
    this_01 = (this->fields)._caps;
    if (this_01 != (List_1_RTG_GizmoCap2D_ *)0x0) {
      piVar4 = &(this_01->fields)._version;
      *piVar4 = *piVar4 + 1;
      pGVar5 = (this_01->fields)._items;
      if (pGVar5 != (GizmoCap2D__Array *)0x0) {
        uVar6 = (this_01->fields)._size;
        if (uVar6 < (uint)pGVar5->max_length) {
          (this_01->fields)._size = uVar6 + 1;
          FUN_?(pGVar5,(longlong)(int)uVar6,cap);
        }
        else {
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__AddWithResize
                    ((List_1_System_Object_ *)this_01,(Object *)cap,
                     pMVar3->klass->rgctx_data[0xe].method);
        }
        pGVar1 = (cap->fields)._._handle;
        if ((pGVar1 != (GizmoHandle *)0x0) &&
           (this_02 = (this->fields)._handleIdToCap,
           this_02 != (Dictionary_2_System_Int32_RTG_GizmoCap2D_ *)0x0)) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
          Dictionary_2_System_Int32_System_Object__TryInsert
                    ((Dictionary_2_System_Int32_System_Object_ *)this_02,(pGVar1->fields)._id,
                     (Object *)cap,
                     (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pGVar5 >> 8),2),
                     MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoCap2D>__Add_int__RTG__GizmoCap2D_
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


/* Boolean Contains(GizmoCap2D) */

bool Assembly-CSharp.dll::RTG::GizmoCap2DCollection::GizmoCap2DCollection_Contains
               (GizmoCap2DCollection *this,GizmoCap2D *cap,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoCap2D>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (((cap != (GizmoCap2D *)0x0) &&
      (pGVar1 = (cap->fields)._._handle, pGVar1 != (GizmoHandle *)0x0)) &&
     (this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields)._handleIdToCap,
     this_00 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0)) {
    iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                      (this_00,(pGVar1->fields)._id,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoCap2D>__ContainsKey_int_
                       ->klass->rgctx_data[0x21].method);
    return (byte)((uint)iVar2 >> 0x1f) ^ 1;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Boolean Contains(Int32) */

bool Assembly-CSharp.dll::RTG::GizmoCap2DCollection::GizmoCap2DCollection_Contains_1
               (GizmoCap2DCollection *this,int32_t capHandleId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoCap2D>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields)._handleIdToCap;
  if (this_00 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                      (this_00,capHandleId,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoCap2D>__ContainsKey_int_
                       ->klass->rgctx_data[0x21].method);
    return (byte)((uint)iVar1 >> 0x1f) ^ 1;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Void Make2DHoverPriorityHigherThan(Priority) */

void Assembly-CSharp.dll::RTG::GizmoCap2DCollection::
     GizmoCap2DCollection_Make2DHoverPriorityHigherThan
               (GizmoCap2DCollection *this,Priority *priority,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoCap2D>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoCap2D>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoCap2D>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  LStack_1._list = (List_1_System_Object_ *)(this->fields)._caps;
  if ((List_1_RTG_GizmoCap2D_ *)LStack_1._list == (List_1_RTG_GizmoCap2D_ *)0x0) {
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
               ((ulonglong)(uint)(((List_1_RTG_GizmoCap2D_ *)LStack_1._list)->fields)._version <<
               0x20);
  uStack_9 = 0;
  LStack_1._8_8_ = pLStack_8;
  LStack_1._current = (Object *)0x0;
  uStack_4 = 0;
  pLStack_8 = &LStack_1;
  while( true ) {
    bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
            List_1_T_Enumerator_System_Object__MoveNext
                      (&LStack_1,
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoCap2D>__MoveNext__
                      );
    if (bVar10 == 0) {
      return;
    }
    if (LStack_1._current == (Object *)0x0) goto code_?;
    if (LStack_1._current[1].monitor == (MonitorData *)0x0) break;
    lVar11 = *(longlong *)(LStack_1._current[1].monitor + 0x38);
    if (lVar11 == 0) {
code_?:
      FUN_?();
      break;
    }
    if (priority == (Priority *)0x0) {
      FUN_?();
      goto code_?;
    }
    *(int32_t *)(lVar11 + 0x10) = (priority->fields)._priority + -1;
  }
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Make2DHoverPriorityLowerThan(Priority) */

void Assembly-CSharp.dll::RTG::GizmoCap2DCollection::
     GizmoCap2DCollection_Make2DHoverPriorityLowerThan
               (GizmoCap2DCollection *this,Priority *priority,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoCap2D>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoCap2D>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoCap2D>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  LStack_1._list = (List_1_System_Object_ *)(this->fields)._caps;
  if ((List_1_RTG_GizmoCap2D_ *)LStack_1._list == (List_1_RTG_GizmoCap2D_ *)0x0) {
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
               ((ulonglong)(uint)(((List_1_RTG_GizmoCap2D_ *)LStack_1._list)->fields)._version <<
               0x20);
  uStack_9 = 0;
  LStack_1._8_8_ = pLStack_8;
  LStack_1._current = (Object *)0x0;
  uStack_4 = 0;
  pLStack_8 = &LStack_1;
  while( true ) {
    bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
            List_1_T_Enumerator_System_Object__MoveNext
                      (&LStack_1,
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoCap2D>__MoveNext__
                      );
    if (bVar10 == 0) {
      return;
    }
    if (LStack_1._current == (Object *)0x0) goto code_?;
    if (LStack_1._current[1].monitor == (MonitorData *)0x0) break;
    lVar11 = *(longlong *)(LStack_1._current[1].monitor + 0x38);
    if (lVar11 == 0) {
code_?:
      FUN_?();
      break;
    }
    if (priority == (Priority *)0x0) {
      FUN_?();
      goto code_?;
    }
    *(int32_t *)(lVar11 + 0x10) = (priority->fields)._priority + 1;
  }
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Remove(GizmoCap2D) */

void Assembly-CSharp.dll::RTG::GizmoCap2DCollection::GizmoCap2DCollection_Remove
               (GizmoCap2DCollection *this,GizmoCap2D *cap,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoCap2D>__Remove_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::GizmoCap2D>__Remove_RTG__GizmoCap2D_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoCap2D>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (((cap != (GizmoCap2D *)0x0) &&
      (pGVar1 = (cap->fields)._._handle, pGVar1 != (GizmoHandle *)0x0)) &&
     (this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields)._handleIdToCap,
     this_00 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0)) {
    iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                      (this_00,(pGVar1->fields)._id,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoCap2D>__ContainsKey_int_
                       ->klass->rgctx_data[0x21].method);
    if (iVar2 < 0) {
      return;
    }
    this_01 = (this->fields)._caps;
    if (this_01 != (List_1_RTG_GizmoCap2D_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
      List_1_System_Object__Remove
                ((List_1_System_Object_ *)this_01,(Object *)cap,
                 MethodInfo__System__Collections__Generic__List<RTG::GizmoCap2D>__Remove_RTG__GizmoCap2D_
                );
      pGVar1 = (cap->fields)._._handle;
      if ((pGVar1 != (GizmoHandle *)0x0) &&
         (this_02 = (this->fields)._handleIdToCap,
         this_02 != (Dictionary_2_System_Int32_RTG_GizmoCap2D_ *)0x0)) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__Remove
                  ((Dictionary_2_System_Int32_System_Object_ *)this_02,(pGVar1->fields)._id,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoCap2D>__Remove_int_
                  );
        return;
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Render(Camera) */

void Assembly-CSharp.dll::RTG::GizmoCap2DCollection::GizmoCap2DCollection_Render
               (GizmoCap2DCollection *this,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoCap2D>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoCap2D>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoCap2D>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  LStack_1._list = (List_1_System_Object_ *)(this->fields)._caps;
  if ((List_1_RTG_GizmoCap2D_ *)LStack_1._list == (List_1_RTG_GizmoCap2D_ *)0x0) {
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
               ((ulonglong)(uint)(((List_1_RTG_GizmoCap2D_ *)LStack_1._list)->fields)._version <<
               0x20);
  uStack_9 = 0;
  LStack_1._8_8_ = pLStack_8;
  LStack_1._current = (Object *)0x0;
  uStack_4 = 0;
  pLStack_8 = &LStack_1;
  while( true ) {
    bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
            List_1_T_Enumerator_System_Object__MoveNext
                      (&LStack_1,
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoCap2D>__MoveNext__
                      );
    if (bVar10 == 0) {
      return;
    }
    if (LStack_1._current == (Object *)0x0) break;
    (*(code *)(LStack_1._current)->klass[1]._0.fields)
              (LStack_1._current,camera,(LStack_1._current)->klass[1]._0.events);
  }
  FUN_?();
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetDragSession(IGizmoDragSession) */

void Assembly-CSharp.dll::RTG::GizmoCap2DCollection::GizmoCap2DCollection_SetDragSession
               (GizmoCap2DCollection *this,IGizmoDragSession *dragSession,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoCap2D>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoCap2D>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoCap2D>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  LStack_1._list = (List_1_System_Object_ *)(this->fields)._caps;
  if ((List_1_RTG_GizmoCap2D_ *)LStack_1._list == (List_1_RTG_GizmoCap2D_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)&uStack_4 >> 0xc);
    lVar5 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
  pLStack_9 = (List_1_T_Enumerator_System_Object_ *)
               ((ulonglong)(uint)(((List_1_RTG_GizmoCap2D_ *)LStack_1._list)->fields)._version <<
               0x20);
  uStack_10 = 0;
  LStack_1._8_8_ = pLStack_9;
  LStack_1._current = (Object *)0x0;
  uStack_4 = 0;
  pLStack_9 = &LStack_1;
  while( true ) {
    bVar11 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
            List_1_T_Enumerator_System_Object__MoveNext
                      (&LStack_1,
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoCap2D>__MoveNext__
                      );
    if (bVar11 == 0) {
      return;
    }
    if (LStack_1._current == (Object *)0x0) break;
    pMVar12 = LStack_1._current[1].monitor;
    if (pMVar12 == (MonitorData *)0x0) {
      FUN_?();
      break;
    }
    *(IGizmoDragSession **)(pMVar12 + 0x58) = dragSession;
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)(pMVar12 + 0x58) >> 0xc);
      lVar5 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
        puVar7 = (ulonglong *)(lVar5 + 0xADDR);
        LOCK();
        bVar8 = uVar6 == *puVar7;
        if (bVar8) {
          *puVar7 = uVar6 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar8);
    }
  }
  FUN_?();
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetHoverable(Boolean) */

void Assembly-CSharp.dll::RTG::GizmoCap2DCollection::GizmoCap2DCollection_SetHoverable
               (GizmoCap2DCollection *this,bool hoverable,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoCap2D>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoCap2D>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoCap2D>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  LStack_1._list = (List_1_System_Object_ *)(this->fields)._caps;
  if ((List_1_RTG_GizmoCap2D_ *)LStack_1._list == (List_1_RTG_GizmoCap2D_ *)0x0) {
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
               ((ulonglong)(uint)(((List_1_RTG_GizmoCap2D_ *)LStack_1._list)->fields)._version <<
               0x20);
  uStack_9 = 0;
  LStack_1._8_8_ = pLStack_8;
  LStack_1._current = (Object *)0x0;
  uStack_4 = 0;
  pLStack_8 = &LStack_1;
  while( true ) {
    bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
            List_1_T_Enumerator_System_Object__MoveNext
                      (&LStack_1,
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoCap2D>__MoveNext__
                      );
    if (bVar10 == 0) {
      return;
    }
    if (LStack_1._current == (Object *)0x0) break;
    if (*(bool *)((longlong)&LStack_1._current[2].klass + 1) != hoverable) {
      *(bool *)((longlong)&LStack_1._current[2].klass + 1) = hoverable;
      (*(code *)(LStack_1._current)->klass[1]._0.nestedTypes)
                (LStack_1._current,(LStack_1._current)->klass[1]._0.implementedInterfaces);
    }
  }
  FUN_?();
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetVisible(Boolean) */

void Assembly-CSharp.dll::RTG::GizmoCap2DCollection::GizmoCap2DCollection_SetVisible
               (GizmoCap2DCollection *this,bool visible,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoCap2D>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoCap2D>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoCap2D>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  LStack_1._list = (List_1_System_Object_ *)(this->fields)._caps;
  if ((List_1_RTG_GizmoCap2D_ *)LStack_1._list == (List_1_RTG_GizmoCap2D_ *)0x0) {
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
               ((ulonglong)(uint)(((List_1_RTG_GizmoCap2D_ *)LStack_1._list)->fields)._version <<
               0x20);
  uStack_9 = 0;
  LStack_1._8_8_ = pLStack_8;
  LStack_1._current = (Object *)0x0;
  uStack_4 = 0;
  pLStack_8 = &LStack_1;
  while( true ) {
    bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
            List_1_T_Enumerator_System_Object__MoveNext
                      (&LStack_1,
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoCap2D>__MoveNext__
                      );
    if (bVar10 == 0) {
      return;
    }
    if (LStack_1._current == (Object *)0x0) break;
    if (*(bool *)&LStack_1._current[2].klass != visible) {
      *(bool *)&LStack_1._current[2].klass = visible;
      (*(code *)(LStack_1._current)->klass[1]._0.properties)
                (LStack_1._current,(LStack_1._current)->klass[1]._0.methods);
    }
  }
  FUN_?();
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* GizmoCap2DCollection() */

void Assembly-CSharp.dll::RTG::GizmoCap2DCollection::GizmoCap2DCollection__ctor
               (GizmoCap2DCollection *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoCap2D>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoCap2D>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<RTG::GizmoCap2D>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<RTG::GizmoCap2D>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (List_1_RTG_GizmoCap2D_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<RTG::GizmoCap2D>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<RTG::GizmoCap2D>__List__);
  bVar1 = iRam_? != 0;
  (this->fields)._caps = this_00;
  if (bVar1) {
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
  this_01 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )FUN_?(TypeInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoCap2D>)
  ;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoCap2D>__Dictionary__
            );
  bVar1 = iRam_? != 0;
  (this->fields)._handleIdToCap = (Dictionary_2_System_Int32_RTG_GizmoCap2D_ *)this_01;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._handleIdToCap >> 0xc);
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

int32_t Assembly-CSharp.dll::RTG::GizmoCap2DCollection::GizmoCap2DCollection_get_Count
                  (GizmoCap2DCollection *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<RTG::GizmoCap2D>__get_Count__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._caps;
  if (pLVar1 != (List_1_RTG_GizmoCap2D_ *)0x0) {
    return (pLVar1->fields)._size;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}


/* GizmoCap2D get_Item(Int32) */

GizmoCap2D *
Assembly-CSharp.dll::RTG::GizmoCap2DCollection::GizmoCap2DCollection_get_Item
          (GizmoCap2DCollection *this,int32_t id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoCap2D>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoCap2D>__get_Item_int_
  ;
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields)._handleIdToCap;
  if (this_00 == (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pGVar3 = (GizmoCap2D *)(*pcVar2)();
    return pGVar3;
  }
  uVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
          Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                    (this_00,id,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoCap2D>__get_Item_int_
                     ->klass->rgctx_data[0x21].method);
  if ((int)uVar4 < 0) {
    uVar5 = func_?(pMVar1->klass->rgctx_data,0xe);
    key = (Object *)func_?(uVar5);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowKeyNotFoundException
              (key,(MethodInfo *)0x0);
    pcVar2 = (code *)swi(3);
    pGVar3 = (GizmoCap2D *)(*pcVar2)();
    return pGVar3;
  }
  pDVar6 = (this_00->fields)._entries;
  if (pDVar6 != (Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_Vector3___Array *)0x0) {
    if (uVar4 < (uint)pDVar6->max_length) {
      return *(GizmoCap2D **)&pDVar6->vector[(int)uVar4].value.y;
    }
    FUN_?();
    pcVar2 = (code *)swi(3);
    pGVar3 = (GizmoCap2D *)(*pcVar2)();
    return pGVar3;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pGVar3 = (GizmoCap2D *)(*pcVar2)();
  return pGVar3;
}

