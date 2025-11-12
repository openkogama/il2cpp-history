
/* Void Add(GizmoLineSlider2D) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider2DCollection::GizmoLineSlider2DCollection_Add
               (GizmoLineSlider2DCollection *this,GizmoLineSlider2D *slider,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoLineSlider2D>__Add_int__RTG__GizmoLineSlider2D_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::GizmoLineSlider2D>__Add_RTG__GizmoLineSlider2D_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoLineSlider2D>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (((slider != (GizmoLineSlider2D *)0x0) &&
      (pGVar1 = (slider->fields)._._handle, pGVar1 != (GizmoHandle *)0x0)) &&
     (this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields)._handleIdToSlider,
     this_00 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0)) {
    iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                      (this_00,(pGVar1->fields)._id,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoLineSlider2D>__ContainsKey_int_
                       ->klass->rgctx_data[0x21].method);
    pMVar3 = 
    MethodInfo__System__Collections__Generic__List<RTG::GizmoLineSlider2D>__Add_RTG__GizmoLineSlider2D_
    ;
    if (-1 < iVar2) {
      return;
    }
    this_01 = (this->fields)._sliders;
    if (this_01 != (List_1_RTG_GizmoLineSlider2D_ *)0x0) {
      piVar4 = &(this_01->fields)._version;
      *piVar4 = *piVar4 + 1;
      pGVar5 = (this_01->fields)._items;
      if (pGVar5 != (GizmoLineSlider2D__Array *)0x0) {
        uVar6 = (this_01->fields)._size;
        if (uVar6 < (uint)pGVar5->max_length) {
          (this_01->fields)._size = uVar6 + 1;
          FUN_?(pGVar5,(longlong)(int)uVar6,slider);
        }
        else {
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__AddWithResize
                    ((List_1_System_Object_ *)this_01,(Object *)slider,
                     pMVar3->klass->rgctx_data[0xe].method);
        }
        pGVar1 = (slider->fields)._._handle;
        if ((pGVar1 != (GizmoHandle *)0x0) &&
           (this_02 = (this->fields)._handleIdToSlider,
           this_02 != (Dictionary_2_System_Int32_RTG_GizmoLineSlider2D_ *)0x0)) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
          Dictionary_2_System_Int32_System_Object__TryInsert
                    ((Dictionary_2_System_Int32_System_Object_ *)this_02,(pGVar1->fields)._id,
                     (Object *)slider,
                     (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pGVar5 >> 8),2),
                     MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoLineSlider2D>__Add_int__RTG__GizmoLineSlider2D_
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


/* Boolean Contains(GizmoLineSlider2D) */

bool Assembly-CSharp.dll::RTG::GizmoLineSlider2DCollection::GizmoLineSlider2DCollection_Contains
               (GizmoLineSlider2DCollection *this,GizmoLineSlider2D *slider,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoLineSlider2D>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (((slider != (GizmoLineSlider2D *)0x0) &&
      (pGVar1 = (slider->fields)._._handle, pGVar1 != (GizmoHandle *)0x0)) &&
     (this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields)._handleIdToSlider,
     this_00 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0)) {
    iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                      (this_00,(pGVar1->fields)._id,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoLineSlider2D>__ContainsKey_int_
                       ->klass->rgctx_data[0x21].method);
    return (byte)((uint)iVar2 >> 0x1f) ^ 1;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Boolean ContainsCapId(Int32) */

bool Assembly-CSharp.dll::RTG::GizmoLineSlider2DCollection::
     GizmoLineSlider2DCollection_ContainsCapId
               (GizmoLineSlider2DCollection *this,int32_t capHandleId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::GizmoLineSlider2D>__FindAll_System__Predicate<RTG::GizmoLineSlider2D>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::GizmoLineSlider2D>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Predicate<RTG::GizmoLineSlider2D>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__RTG__GizmoLineSlider2DCollection____c__DisplayClass8_0___ContainsCapId_b__0_RTG__GizmoLineSlider2D_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoLineSlider2DCollection____c__DisplayClass8_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__RTG__GizmoLineSlider2DCollection____c__DisplayClass8_0)
  ;
  if (object != (Object *)0x0) {
    *(int32_t *)&object[1].klass = capHandleId;
    this_00 = (this->fields)._sliders;
    this_01 = (Predicate_1_Object_ *)
              FUN_?(TypeInfo__System__Predicate<RTG::GizmoLineSlider2D>);
    mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
              (this_01,object,
               MethodInfo__RTG__GizmoLineSlider2DCollection____c__DisplayClass8_0___ContainsCapId_b__0_RTG__GizmoLineSlider2D_
               ,(MethodInfo *)0x0);
    if (this_00 != (List_1_RTG_GizmoLineSlider2D_ *)0x0) {
      pLVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
               List_1_System_Object__FindAll
                         ((List_1_System_Object_ *)this_00,this_01,
                          MethodInfo__System__Collections__Generic__List<RTG::GizmoLineSlider2D>__FindAll_System__Predicate<RTG::GizmoLineSlider2D>_
                         );
      if (pLVar1 != (List_1_System_Object_ *)0x0) {
        return (pLVar1->fields)._size != 0;
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Boolean Contains(Int32) */

bool Assembly-CSharp.dll::RTG::GizmoLineSlider2DCollection::GizmoLineSlider2DCollection_Contains_1
               (GizmoLineSlider2DCollection *this,int32_t sliderHandleId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoLineSlider2D>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields)._handleIdToSlider;
  if (this_00 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                      (this_00,sliderHandleId,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoLineSlider2D>__ContainsKey_int_
                       ->klass->rgctx_data[0x21].method);
    return (byte)((uint)iVar1 >> 0x1f) ^ 1;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Void Make2DHoverPriorityHigherThan(Priority) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider2DCollection::
     GizmoLineSlider2DCollection_Make2DHoverPriorityHigherThan
               (GizmoLineSlider2DCollection *this,Priority *priority,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider2D>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider2D>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider2D>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  LStack_1._list = (List_1_System_Object_ *)(this->fields)._sliders;
  if ((List_1_RTG_GizmoLineSlider2D_ *)LStack_1._list == (List_1_RTG_GizmoLineSlider2D_ *)0x0) {
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
                (uint)(((List_1_RTG_GizmoLineSlider2D_ *)LStack_1._list)->fields)._version << 0x20)
  ;
  uStack_9 = 0;
  LStack_1._8_8_ = pLStack_8;
  LStack_1._current = (Object *)0x0;
  uStack_4 = 0;
  pLStack_8 = &LStack_1;
  while( true ) {
    bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
            List_1_T_Enumerator_System_Object__MoveNext
                      (&LStack_1,
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider2D>__MoveNext__
                      );
    if (bVar10 == 0) {
      return;
    }
    if (LStack_1._current == (Object *)0x0) goto code_?;
    if (LStack_1._current[1].klass == (Object__Class *)0x0) break;
    lVar11 = *(longlong *)&((LStack_1._current[1].klass)->_0).this_arg.attrs;
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

void Assembly-CSharp.dll::RTG::GizmoLineSlider2DCollection::
     GizmoLineSlider2DCollection_Make2DHoverPriorityLowerThan
               (GizmoLineSlider2DCollection *this,Priority *priority,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider2D>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider2D>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider2D>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  LStack_1._list = (List_1_System_Object_ *)(this->fields)._sliders;
  if ((List_1_RTG_GizmoLineSlider2D_ *)LStack_1._list == (List_1_RTG_GizmoLineSlider2D_ *)0x0) {
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
                (uint)(((List_1_RTG_GizmoLineSlider2D_ *)LStack_1._list)->fields)._version << 0x20)
  ;
  uStack_9 = 0;
  LStack_1._8_8_ = pLStack_8;
  LStack_1._current = (Object *)0x0;
  uStack_4 = 0;
  pLStack_8 = &LStack_1;
  while( true ) {
    bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
            List_1_T_Enumerator_System_Object__MoveNext
                      (&LStack_1,
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider2D>__MoveNext__
                      );
    if (bVar10 == 0) {
      return;
    }
    if (LStack_1._current == (Object *)0x0) goto code_?;
    if (LStack_1._current[1].klass == (Object__Class *)0x0) break;
    lVar11 = *(longlong *)&((LStack_1._current[1].klass)->_0).this_arg.attrs;
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


/* Void Remove(GizmoLineSlider2D) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider2DCollection::GizmoLineSlider2DCollection_Remove
               (GizmoLineSlider2DCollection *this,GizmoLineSlider2D *slider,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoLineSlider2D>__Remove_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::GizmoLineSlider2D>__Remove_RTG__GizmoLineSlider2D_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoLineSlider2D>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (((slider != (GizmoLineSlider2D *)0x0) &&
      (pGVar1 = (slider->fields)._._handle, pGVar1 != (GizmoHandle *)0x0)) &&
     (this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields)._handleIdToSlider,
     this_00 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0)) {
    iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                      (this_00,(pGVar1->fields)._id,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoLineSlider2D>__ContainsKey_int_
                       ->klass->rgctx_data[0x21].method);
    if (iVar2 < 0) {
      return;
    }
    this_01 = (this->fields)._sliders;
    if (this_01 != (List_1_RTG_GizmoLineSlider2D_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
      List_1_System_Object__Remove
                ((List_1_System_Object_ *)this_01,(Object *)slider,
                 MethodInfo__System__Collections__Generic__List<RTG::GizmoLineSlider2D>__Remove_RTG__GizmoLineSlider2D_
                );
      pGVar1 = (slider->fields)._._handle;
      if ((pGVar1 != (GizmoHandle *)0x0) &&
         (this_02 = (this->fields)._handleIdToSlider,
         this_02 != (Dictionary_2_System_Int32_RTG_GizmoLineSlider2D_ *)0x0)) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__Remove
                  ((Dictionary_2_System_Int32_System_Object_ *)this_02,(pGVar1->fields)._id,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoLineSlider2D>__Remove_int_
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

void Assembly-CSharp.dll::RTG::GizmoLineSlider2DCollection::GizmoLineSlider2DCollection_Render
               (GizmoLineSlider2DCollection *this,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider2D>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider2D>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider2D>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  LStack_1._list = (List_1_System_Object_ *)(this->fields)._sliders;
  if ((List_1_RTG_GizmoLineSlider2D_ *)LStack_1._list == (List_1_RTG_GizmoLineSlider2D_ *)0x0) {
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
                (uint)(((List_1_RTG_GizmoLineSlider2D_ *)LStack_1._list)->fields)._version << 0x20)
  ;
  uStack_9 = 0;
  LStack_1._8_8_ = pLStack_8;
  LStack_1._current = (Object *)0x0;
  uStack_4 = 0;
  pLStack_8 = &LStack_1;
  while( true ) {
    bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
            List_1_T_Enumerator_System_Object__MoveNext
                      (&LStack_1,
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider2D>__MoveNext__
                      );
    if (bVar10 == 0) {
      return;
    }
    if (LStack_1._current == (Object *)0x0) break;
    (*(code *)(LStack_1._current)->klass[1]._0.nestedTypes)
              (LStack_1._current,camera,(LStack_1._current)->klass[1]._0.implementedInterfaces);
  }
  FUN_?();
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Set2DCapsVisible(Boolean) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider2DCollection::
     GizmoLineSlider2DCollection_Set2DCapsVisible
               (GizmoLineSlider2DCollection *this,bool visible,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider2D>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider2D>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider2D>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  LStack_1._list = (List_1_System_Object_ *)(this->fields)._sliders;
  if ((List_1_RTG_GizmoLineSlider2D_ *)LStack_1._list == (List_1_RTG_GizmoLineSlider2D_ *)0x0) {
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
                (uint)(((List_1_RTG_GizmoLineSlider2D_ *)LStack_1._list)->fields)._version << 0x20)
  ;
  uStack_9 = 0;
  LStack_1._8_8_ = pLStack_8;
  LStack_1._current = (Object *)0x0;
  uStack_4 = 0;
  pLStack_8 = &LStack_1;
  while( true ) {
    bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
            List_1_T_Enumerator_System_Object__MoveNext
                      (&LStack_1,
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider2D>__MoveNext__
                      );
    if (bVar10 == 0) {
      return;
    }
    if (LStack_1._current == (Object *)0x0) break;
    pOVar11 = LStack_1._current[10].klass;
    if (pOVar11 == (Object__Class *)0x0) {
      FUN_?();
      break;
    }
    if (*(bool *)&(pOVar11->_0).byval_arg.data != visible) {
      *(bool *)&(pOVar11->_0).byval_arg.data = visible;
      pIVar12 = (pOVar11->_0).image;
      uVar13._0_4_ = pIVar12[7].typeCount;
      uVar13._4_4_ = pIVar12[7].exportedTypeCount;
      (*(code *)pIVar12[7].assembly)(pOVar11,uVar13);
    }
  }
  FUN_?();
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetOffsetDragOrigin(Vector3) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider2DCollection::
     GizmoLineSlider2DCollection_SetOffsetDragOrigin
               (GizmoLineSlider2DCollection *this,Vector3 *dragOrigin,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider2D>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider2D>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider2D>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  LStack_1._list = (List_1_System_Object_ *)(this->fields)._sliders;
  if ((List_1_RTG_GizmoLineSlider2D_ *)LStack_1._list == (List_1_RTG_GizmoLineSlider2D_ *)0x0) {
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
                (uint)(((List_1_RTG_GizmoLineSlider2D_ *)LStack_1._list)->fields)._version << 0x20)
  ;
  uStack_9 = 0;
  LStack_1._8_8_ = pLStack_8;
  LStack_1._current = (Object *)0x0;
  uStack_4 = 0;
  pLStack_8 = &LStack_1;
  while( true ) {
    bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
            List_1_T_Enumerator_System_Object__MoveNext
                      (&LStack_1,
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider2D>__MoveNext__
                      );
    if (bVar10 == 0) {
      return;
    }
    if (LStack_1._current == (Object *)0x0) break;
    LStack_1._current[5].klass = *(Object__Class **)dragOrigin;
    *(float *)&LStack_1._current[5].monitor = dragOrigin->z;
  }
  FUN_?();
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetSnapEnabled(Boolean) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider2DCollection::
     GizmoLineSlider2DCollection_SetSnapEnabled
               (GizmoLineSlider2DCollection *this,bool isEnabled,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider2D>__Dispose__
                  ,CONCAT71(in_register_00000011,isEnabled));
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider2D>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider2D>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  LStack_1._list = (List_1_System_Object_ *)(this->fields)._sliders;
  if ((List_1_RTG_GizmoLineSlider2D_ *)LStack_1._list == (List_1_RTG_GizmoLineSlider2D_ *)0x0) {
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
                (uint)(((List_1_RTG_GizmoLineSlider2D_ *)LStack_1._list)->fields)._version << 0x20)
  ;
  uStack_9 = 0;
  LStack_1._8_8_ = pLStack_8;
  LStack_1._current = (Object *)0x0;
  uStack_4 = 0;
  pLStack_8 = &LStack_1;
  while( true ) {
    bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
            List_1_T_Enumerator_System_Object__MoveNext
                      (&LStack_1,
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider2D>__MoveNext__
                      );
    if (bVar10 == 0) {
      return;
    }
    if (LStack_1._current == (Object *)0x0) break;
    (*(code *)(LStack_1._current)->klass[1]._0.properties)
              (LStack_1._current,isEnabled,(LStack_1._current)->klass[1]._0.methods);
  }
  FUN_?();
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetVisible(Boolean) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider2DCollection::GizmoLineSlider2DCollection_SetVisible
               (GizmoLineSlider2DCollection *this,bool visible,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider2D>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider2D>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider2D>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  LStack_1._list = (List_1_System_Object_ *)(this->fields)._sliders;
  if ((List_1_RTG_GizmoLineSlider2D_ *)LStack_1._list == (List_1_RTG_GizmoLineSlider2D_ *)0x0) {
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
                (uint)(((List_1_RTG_GizmoLineSlider2D_ *)LStack_1._list)->fields)._version << 0x20)
  ;
  uStack_9 = 0;
  LStack_1._8_8_ = pLStack_8;
  LStack_1._current = (Object *)0x0;
  uStack_4 = 0;
  pLStack_8 = &LStack_1;
  while( true ) {
    bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
            List_1_T_Enumerator_System_Object__MoveNext
                      (&LStack_1,
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider2D>__MoveNext__
                      );
    if (bVar10 == 0) {
      return;
    }
    if (LStack_1._current == (Object *)0x0) break;
    *(bool *)&LStack_1._current[2].klass = visible;
    (*(code *)(LStack_1._current)->klass[1].interfaceOffsets)
              (LStack_1._current,(LStack_1._current)->klass[1].static_fields);
  }
  FUN_?();
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* GizmoLineSlider2DCollection() */

void Assembly-CSharp.dll::RTG::GizmoLineSlider2DCollection::GizmoLineSlider2DCollection__ctor
               (GizmoLineSlider2DCollection *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoLineSlider2D>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoLineSlider2D>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<RTG::GizmoLineSlider2D>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<RTG::GizmoLineSlider2D>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (List_1_RTG_GizmoLineSlider2D_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<RTG::GizmoLineSlider2D>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<RTG::GizmoLineSlider2D>__List__);
  bVar1 = iRam_? != 0;
  (this->fields)._sliders = this_00;
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
            )FUN_?(
                          TypeInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoLineSlider2D>
                          );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoLineSlider2D>__Dictionary__
            );
  bVar1 = iRam_? != 0;
  (this->fields)._handleIdToSlider = (Dictionary_2_System_Int32_RTG_GizmoLineSlider2D_ *)this_01;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._handleIdToSlider >> 0xc);
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

int32_t Assembly-CSharp.dll::RTG::GizmoLineSlider2DCollection::GizmoLineSlider2DCollection_get_Count
                  (GizmoLineSlider2DCollection *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::GizmoLineSlider2D>__get_Count__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._sliders;
  if (pLVar1 != (List_1_RTG_GizmoLineSlider2D_ *)0x0) {
    return (pLVar1->fields)._size;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}


/* GizmoLineSlider2D get_Item(Int32) */

GizmoLineSlider2D *
Assembly-CSharp.dll::RTG::GizmoLineSlider2DCollection::GizmoLineSlider2DCollection_get_Item
          (GizmoLineSlider2DCollection *this,int32_t id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoLineSlider2D>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = 
  MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoLineSlider2D>__get_Item_int_;
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields)._handleIdToSlider;
  if (this_00 == (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pGVar3 = (GizmoLineSlider2D *)(*pcVar2)();
    return pGVar3;
  }
  uVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
          Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                    (this_00,id,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoLineSlider2D>__get_Item_int_
                     ->klass->rgctx_data[0x21].method);
  if ((int)uVar4 < 0) {
    uVar5 = func_?(pMVar1->klass->rgctx_data,0xe);
    key = (Object *)func_?(uVar5);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowKeyNotFoundException
              (key,(MethodInfo *)0x0);
    pcVar2 = (code *)swi(3);
    pGVar3 = (GizmoLineSlider2D *)(*pcVar2)();
    return pGVar3;
  }
  pDVar6 = (this_00->fields)._entries;
  if (pDVar6 != (Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_Vector3___Array *)0x0) {
    if (uVar4 < (uint)pDVar6->max_length) {
      return *(GizmoLineSlider2D **)&pDVar6->vector[(int)uVar4].value.y;
    }
    FUN_?();
    pcVar2 = (code *)swi(3);
    pGVar3 = (GizmoLineSlider2D *)(*pcVar2)();
    return pGVar3;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pGVar3 = (GizmoLineSlider2D *)(*pcVar2)();
  return pGVar3;
}

