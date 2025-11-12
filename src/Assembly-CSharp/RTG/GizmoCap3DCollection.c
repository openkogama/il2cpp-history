
/* Void Add(GizmoCap3D) */

void Assembly-CSharp.dll::RTG::GizmoCap3DCollection::GizmoCap3DCollection_Add
               (GizmoCap3DCollection *this,GizmoCap3D *cap,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoCap3D>__Add_int__RTG__GizmoCap3D_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::GizmoCap3D>__Add_RTG__GizmoCap3D_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoCap3D>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (((cap != (GizmoCap3D *)0x0) &&
      (pGVar1 = (cap->fields)._._handle, pGVar1 != (GizmoHandle *)0x0)) &&
     (this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields)._handleIdToCap,
     this_00 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0)) {
    iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                      (this_00,(pGVar1->fields)._id,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoCap3D>__ContainsKey_int_
                       ->klass->rgctx_data[0x21].method);
    pMVar3 = MethodInfo__System__Collections__Generic__List<RTG::GizmoCap3D>__Add_RTG__GizmoCap3D_;
    if (-1 < iVar2) {
      return;
    }
    this_01 = (this->fields)._caps;
    if (this_01 != (List_1_RTG_GizmoCap3D_ *)0x0) {
      piVar4 = &(this_01->fields)._version;
      *piVar4 = *piVar4 + 1;
      pGVar5 = (this_01->fields)._items;
      if (pGVar5 != (GizmoCap3D__Array *)0x0) {
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
           this_02 != (Dictionary_2_System_Int32_RTG_GizmoCap3D_ *)0x0)) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
          Dictionary_2_System_Int32_System_Object__TryInsert
                    ((Dictionary_2_System_Int32_System_Object_ *)this_02,(pGVar1->fields)._id,
                     (Object *)cap,
                     (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pGVar5 >> 8),2),
                     MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoCap3D>__Add_int__RTG__GizmoCap3D_
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


/* Void ApplyZoomFactor(Camera) */

void Assembly-CSharp.dll::RTG::GizmoCap3DCollection::GizmoCap3DCollection_ApplyZoomFactor
               (GizmoCap3DCollection *this,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoCap3D>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoCap3D>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoCap3D>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  LStack_1._list = (List_1_System_Object_ *)(this->fields)._caps;
  if ((List_1_RTG_GizmoCap3D_ *)LStack_1._list == (List_1_RTG_GizmoCap3D_ *)0x0) {
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
               ((ulonglong)(uint)(((List_1_RTG_GizmoCap3D_ *)LStack_1._list)->fields)._version <<
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
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoCap3D>__MoveNext__
                      );
    if (bVar10 == 0) {
      return;
    }
    if ((GizmoCap3D *)LStack_1._current == (GizmoCap3D *)0x0) break;
    GizmoCap3D::GizmoCap3D_ApplyZoomFactor
              ((GizmoCap3D *)LStack_1._current,camera,(MethodInfo *)0x0);
  }
  FUN_?();
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Boolean Contains(GizmoCap3D) */

bool Assembly-CSharp.dll::RTG::GizmoCap3DCollection::GizmoCap3DCollection_Contains
               (GizmoCap3DCollection *this,GizmoCap3D *cap,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoCap3D>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (((cap != (GizmoCap3D *)0x0) &&
      (pGVar1 = (cap->fields)._._handle, pGVar1 != (GizmoHandle *)0x0)) &&
     (this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields)._handleIdToCap,
     this_00 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0)) {
    iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                      (this_00,(pGVar1->fields)._id,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoCap3D>__ContainsKey_int_
                       ->klass->rgctx_data[0x21].method);
    return (byte)((uint)iVar2 >> 0x1f) ^ 1;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Boolean Contains(Int32) */

bool Assembly-CSharp.dll::RTG::GizmoCap3DCollection::GizmoCap3DCollection_Contains_1
               (GizmoCap3DCollection *this,int32_t capHandleId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoCap3D>__ContainsKey_int_
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
                       MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoCap3D>__ContainsKey_int_
                       ->klass->rgctx_data[0x21].method);
    return (byte)((uint)iVar1 >> 0x1f) ^ 1;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* List`1[RTG.GizmoCap3D] GetRenderSortedCaps(Camera) */

List_1_RTG_GizmoCap3D_ *
Assembly-CSharp.dll::RTG::GizmoCap3DCollection::GizmoCap3DCollection_GetRenderSortedCaps
          (GizmoCap3DCollection *this,Camera *renderCamera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Comparison<RTG::GizmoCap3D>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::GizmoCap3D>__Sort_System__Comparison<RTG::GizmoCap3D>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::GizmoCap3D>__List_System__Collections__Generic__IEnumerable<RTG::GizmoCap3D>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<RTG::GizmoCap3D>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__RTG__GizmoCap3DCollection____c__DisplayClass15_0___GetRenderSortedCaps_b__0_RTG__GizmoCap3D__RTG__GizmoCap3D_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoCap3DCollection____c__DisplayClass15_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__RTG__GizmoCap3DCollection____c__DisplayClass15_0);
  pLVar1 = (this->fields)._caps;
  this_00 = (List_1_RTG_GizmoCap3D_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<RTG::GizmoCap3D>);
  mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object___ctor_1
            ((List_1_System_Object_ *)this_00,(IEnumerable_1_System_Object_ *)pLVar1,
             MethodInfo__System__Collections__Generic__List<RTG::GizmoCap3D>__List_System__Collections__Generic__IEnumerable<RTG::GizmoCap3D>_
            );
  if ((renderCamera != (Camera *)0x0) &&
     (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)renderCamera,(MethodInfo *)0x0), obj != (Transform *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pOStack_2 = (Object__Class *)0x0;
    uStack_3 = 0;
    pvVar4 = (obj->fields)._._.m_CachedPtr;
    if (pvVar4 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar5 = (code *)swi(3);
      pLVar1 = (List_1_RTG_GizmoCap3D_ *)(*pcVar5)();
      return pLVar1;
    }
    pcVar5 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
      uVar6 = func_?(&UNK_?);
      FUN_?(uVar6,0);
      pcVar5 = (code *)swi(3);
      pLVar1 = (List_1_RTG_GizmoCap3D_ *)(*pcVar5)();
      return pLVar1;
    }
    pcRam_? = pcVar5;
    (*pcRam_?)(pvVar4,&pOStack_2);
    if (object != (Object *)0x0) {
      object[1].klass = pOStack_2;
      *(undefined4 *)&object[1].monitor = uStack_3;
      this_01 = (Func_3_Object_Object_Int32_ *)
                FUN_?(TypeInfo__System__Comparison<RTG::GizmoCap3D>);
      mscorlib.dll::System::Func`3[Object,Object,Int32]::Func_3_Object_Object_Int32___ctor
                (this_01,object,
                 MethodInfo__RTG__GizmoCap3DCollection____c__DisplayClass15_0___GetRenderSortedCaps_b__0_RTG__GizmoCap3D__RTG__GizmoCap3D_
                 ,(MethodInfo *)0x0);
      if (this_00 != (List_1_RTG_GizmoCap3D_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Sort_1
                  ((List_1_System_Object_ *)this_00,(Comparison_1_Object_ *)this_01,
                   MethodInfo__System__Collections__Generic__List<RTG::GizmoCap3D>__Sort_System__Comparison<RTG::GizmoCap3D>_
                  );
        return this_00;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  pLVar1 = (List_1_RTG_GizmoCap3D_ *)(*pcVar5)();
  return pLVar1;
}


/* Void Make3DHoverPriorityHigherThan(Priority) */

void Assembly-CSharp.dll::RTG::GizmoCap3DCollection::
     GizmoCap3DCollection_Make3DHoverPriorityHigherThan
               (GizmoCap3DCollection *this,Priority *priority,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoCap3D>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoCap3D>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoCap3D>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  LStack_1._list = (List_1_System_Object_ *)(this->fields)._caps;
  if ((List_1_RTG_GizmoCap3D_ *)LStack_1._list == (List_1_RTG_GizmoCap3D_ *)0x0) {
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
               ((ulonglong)(uint)(((List_1_RTG_GizmoCap3D_ *)LStack_1._list)->fields)._version <<
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
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoCap3D>__MoveNext__
                      );
    if (bVar10 == 0) {
      return;
    }
    if (LStack_1._current == (Object *)0x0) goto code_?;
    if (LStack_1._current[1].monitor == (MonitorData *)0x0) break;
    lVar11 = *(longlong *)(LStack_1._current[1].monitor + 0x40);
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


/* Void Make3DHoverPriorityLowerThan(Priority) */

void Assembly-CSharp.dll::RTG::GizmoCap3DCollection::
     GizmoCap3DCollection_Make3DHoverPriorityLowerThan
               (GizmoCap3DCollection *this,Priority *priority,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoCap3D>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoCap3D>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoCap3D>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  LStack_1._list = (List_1_System_Object_ *)(this->fields)._caps;
  if ((List_1_RTG_GizmoCap3D_ *)LStack_1._list == (List_1_RTG_GizmoCap3D_ *)0x0) {
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
               ((ulonglong)(uint)(((List_1_RTG_GizmoCap3D_ *)LStack_1._list)->fields)._version <<
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
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoCap3D>__MoveNext__
                      );
    if (bVar10 == 0) {
      return;
    }
    if (LStack_1._current == (Object *)0x0) goto code_?;
    if (LStack_1._current[1].monitor == (MonitorData *)0x0) break;
    lVar11 = *(longlong *)(LStack_1._current[1].monitor + 0x40);
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


/* Void Remove(GizmoCap3D) */

void Assembly-CSharp.dll::RTG::GizmoCap3DCollection::GizmoCap3DCollection_Remove
               (GizmoCap3DCollection *this,GizmoCap3D *cap,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoCap3D>__Remove_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::GizmoCap3D>__Remove_RTG__GizmoCap3D_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoCap3D>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (((cap != (GizmoCap3D *)0x0) &&
      (pGVar1 = (cap->fields)._._handle, pGVar1 != (GizmoHandle *)0x0)) &&
     (this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields)._handleIdToCap,
     this_00 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0)) {
    iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                      (this_00,(pGVar1->fields)._id,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoCap3D>__ContainsKey_int_
                       ->klass->rgctx_data[0x21].method);
    if (iVar2 < 0) {
      return;
    }
    this_01 = (this->fields)._caps;
    if (this_01 != (List_1_RTG_GizmoCap3D_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
      List_1_System_Object__Remove
                ((List_1_System_Object_ *)this_01,(Object *)cap,
                 MethodInfo__System__Collections__Generic__List<RTG::GizmoCap3D>__Remove_RTG__GizmoCap3D_
                );
      pGVar1 = (cap->fields)._._handle;
      if ((pGVar1 != (GizmoHandle *)0x0) &&
         (this_02 = (this->fields)._handleIdToCap,
         this_02 != (Dictionary_2_System_Int32_RTG_GizmoCap3D_ *)0x0)) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__Remove
                  ((Dictionary_2_System_Int32_System_Object_ *)this_02,(pGVar1->fields)._id,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoCap3D>__Remove_int_
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


/* Void SetVisible(Boolean) */

void Assembly-CSharp.dll::RTG::GizmoCap3DCollection::GizmoCap3DCollection_SetVisible
               (GizmoCap3DCollection *this,bool visible,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoCap3D>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoCap3D>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoCap3D>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  LStack_1._list = (List_1_System_Object_ *)(this->fields)._caps;
  if ((List_1_RTG_GizmoCap3D_ *)LStack_1._list == (List_1_RTG_GizmoCap3D_ *)0x0) {
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
               ((ulonglong)(uint)(((List_1_RTG_GizmoCap3D_ *)LStack_1._list)->fields)._version <<
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
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoCap3D>__MoveNext__
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


/* Void SetZoomFactorTransform(GizmoTransform) */

void Assembly-CSharp.dll::RTG::GizmoCap3DCollection::GizmoCap3DCollection_SetZoomFactorTransform
               (GizmoCap3DCollection *this,GizmoTransform *zoomFactorTransform,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoCap3D>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoCap3D>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoCap3D>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  LStack_1._list = (List_1_System_Object_ *)(this->fields)._caps;
  if ((List_1_RTG_GizmoCap3D_ *)LStack_1._list == (List_1_RTG_GizmoCap3D_ *)0x0) {
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
               ((ulonglong)(uint)(((List_1_RTG_GizmoCap3D_ *)LStack_1._list)->fields)._version <<
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
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoCap3D>__MoveNext__
                      );
    if (bVar11 == 0) {
      return;
    }
    if (LStack_1._current == (Object *)0x0) goto code_?;
    pMVar12 = LStack_1._current[1].monitor;
    if (pMVar12 == (MonitorData *)0x0) break;
    if (zoomFactorTransform == (GizmoTransform *)0x0) {
      if (*(longlong *)(pMVar12 + 0x20) == 0) {
        FUN_?();
        break;
      }
      *(undefined8 *)(pMVar12 + 0x28) = *(undefined8 *)(*(longlong *)(pMVar12 + 0x20) + 0x170);
      if (iRam_? != 0) {
        uVar3 = (uint)((ulonglong)(pMVar12 + 0x28) >> 0xc);
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
    else {
      *(GizmoTransform **)(pMVar12 + 0x28) = zoomFactorTransform;
      if (iRam_? != 0) {
        uVar3 = (uint)((ulonglong)(pMVar12 + 0x28) >> 0xc);
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
  }
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* GizmoCap3DCollection() */

void Assembly-CSharp.dll::RTG::GizmoCap3DCollection::GizmoCap3DCollection__ctor
               (GizmoCap3DCollection *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoCap3D>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoCap3D>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<RTG::GizmoCap3D>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<RTG::GizmoCap3D>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (List_1_RTG_GizmoCap3D_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<RTG::GizmoCap3D>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<RTG::GizmoCap3D>__List__);
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
            )FUN_?(TypeInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoCap3D>)
  ;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoCap3D>__Dictionary__
            );
  bVar1 = iRam_? != 0;
  (this->fields)._handleIdToCap = (Dictionary_2_System_Int32_RTG_GizmoCap3D_ *)this_01;
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

int32_t Assembly-CSharp.dll::RTG::GizmoCap3DCollection::GizmoCap3DCollection_get_Count
                  (GizmoCap3DCollection *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<RTG::GizmoCap3D>__get_Count__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._caps;
  if (pLVar1 != (List_1_RTG_GizmoCap3D_ *)0x0) {
    return (pLVar1->fields)._size;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}


/* GizmoCap3D get_Item(Int32) */

GizmoCap3D *
Assembly-CSharp.dll::RTG::GizmoCap3DCollection::GizmoCap3DCollection_get_Item
          (GizmoCap3DCollection *this,int32_t id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoCap3D>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoCap3D>__get_Item_int_
  ;
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields)._handleIdToCap;
  if (this_00 == (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pGVar3 = (GizmoCap3D *)(*pcVar2)();
    return pGVar3;
  }
  uVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
          Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                    (this_00,id,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoCap3D>__get_Item_int_
                     ->klass->rgctx_data[0x21].method);
  if ((int)uVar4 < 0) {
    uVar5 = func_?(pMVar1->klass->rgctx_data,0xe);
    key = (Object *)func_?(uVar5);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowKeyNotFoundException
              (key,(MethodInfo *)0x0);
    pcVar2 = (code *)swi(3);
    pGVar3 = (GizmoCap3D *)(*pcVar2)();
    return pGVar3;
  }
  pDVar6 = (this_00->fields)._entries;
  if (pDVar6 != (Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_Vector3___Array *)0x0) {
    if (uVar4 < (uint)pDVar6->max_length) {
      return *(GizmoCap3D **)&pDVar6->vector[(int)uVar4].value.y;
    }
    FUN_?();
    pcVar2 = (code *)swi(3);
    pGVar3 = (GizmoCap3D *)(*pcVar2)();
    return pGVar3;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pGVar3 = (GizmoCap3D *)(*pcVar2)();
  return pGVar3;
}

