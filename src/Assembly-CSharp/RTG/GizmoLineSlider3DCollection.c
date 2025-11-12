
/* Void Add(GizmoLineSlider3D) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider3DCollection::GizmoLineSlider3DCollection_Add
               (GizmoLineSlider3DCollection *this,GizmoLineSlider3D *slider,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoLineSlider3D>__Add_int__RTG__GizmoLineSlider3D_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::GizmoLineSlider3D>__Add_RTG__GizmoLineSlider3D_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoLineSlider3D>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (((slider != (GizmoLineSlider3D *)0x0) &&
      (pGVar1 = (slider->fields)._._handle, pGVar1 != (GizmoHandle *)0x0)) &&
     (this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields)._handleIdToSlider,
     this_00 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0)) {
    iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                      (this_00,(pGVar1->fields)._id,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoLineSlider3D>__ContainsKey_int_
                       ->klass->rgctx_data[0x21].method);
    pMVar3 = 
    MethodInfo__System__Collections__Generic__List<RTG::GizmoLineSlider3D>__Add_RTG__GizmoLineSlider3D_
    ;
    if (-1 < iVar2) {
      return;
    }
    this_01 = (this->fields)._sliders;
    if (this_01 != (List_1_RTG_GizmoLineSlider3D_ *)0x0) {
      piVar4 = &(this_01->fields)._version;
      *piVar4 = *piVar4 + 1;
      pGVar5 = (this_01->fields)._items;
      if (pGVar5 != (GizmoLineSlider3D__Array *)0x0) {
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
           this_02 != (Dictionary_2_System_Int32_RTG_GizmoLineSlider3D_ *)0x0)) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
          Dictionary_2_System_Int32_System_Object__TryInsert
                    ((Dictionary_2_System_Int32_System_Object_ *)this_02,(pGVar1->fields)._id,
                     (Object *)slider,
                     (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pGVar5 >> 8),2),
                     MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoLineSlider3D>__Add_int__RTG__GizmoLineSlider3D_
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

void Assembly-CSharp.dll::RTG::GizmoLineSlider3DCollection::
     GizmoLineSlider3DCollection_ApplyZoomFactor
               (GizmoLineSlider3DCollection *this,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  LStack_1._list = (List_1_System_Object_ *)(this->fields)._sliders;
  if ((List_1_RTG_GizmoLineSlider3D_ *)LStack_1._list == (List_1_RTG_GizmoLineSlider3D_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)&uStack_4 >> 0xc);
    uVar5 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (ulonglong)(uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
  fVar9 = _UNK_?;
  pLStack_10 = (List_1_T_Enumerator_System_Object_ *)
               ((ulonglong)
                (uint)(((List_1_RTG_GizmoLineSlider3D_ *)LStack_1._list)->fields)._version << 0x20)
  ;
  uStack_11 = 0;
  LStack_1._8_8_ = pLStack_10;
  LStack_1._current = (Object *)0x0;
  uStack_4 = 0;
  pLStack_10 = &LStack_1;
code_?:
  bVar12 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
          List_1_T_Enumerator_System_Object__MoveNext
                    (&LStack_1,
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__MoveNext__
                    );
  this_01 = LStack_1._current;
  if (bVar12 == 0) {
    return;
  }
  if ((GizmoLineSlider3D *)LStack_1._current == (GizmoLineSlider3D *)0x0)
  goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__IGizmoLineSlider3DController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar13 = 0xd8;
  if (((GizmoLineSlider3D__Fields *)((longlong)this_01 + 0x10))->_sharedLookAndFeel !=
      (GizmoLineSlider3DLookAndFeel *)0x0) {
    lVar13 = 0xe0;
  }
  lVar13 = *(longlong *)((longlong)&this_01->klass + lVar13);
  if (lVar13 != 0) goto code_?;
  goto code_?;
code_?:
  if (*(char *)(lVar13 + 0x24) == '\0') goto code_?;
  lVar13 = 0xd8;
  if (((GizmoLineSlider3D__Fields *)((longlong)this_01 + 0x10))->_sharedLookAndFeel !=
      (GizmoLineSlider3DLookAndFeel *)0x0) {
    lVar13 = 0xe0;
  }
  lVar13 = *(longlong *)((longlong)&this_01->klass + lVar13);
  if (lVar13 == 0) goto code_?;
  zoomFactor = fVar9;
  if (*(char *)(lVar13 + 0x24) == '\0') {
code_?:
    pIVar14 = ((GizmoLineSlider3D__Fields *)((longlong)this_01 + 0x10))->_controllers;
    lVar13 = 0xd8;
    if (((GizmoLineSlider3D__Fields *)((longlong)this_01 + 0x10))->_sharedLookAndFeel !=
        (GizmoLineSlider3DLookAndFeel *)0x0) {
      lVar13 = 0xe0;
    }
    lVar13 = *(longlong *)((longlong)&this_01->klass + lVar13);
    if (lVar13 != 0) {
      uVar3 = *(uint *)(lVar13 + 0x14);
      if (pIVar14 != (IGizmoLineSlider3DController__Array *)0x0) {
        if ((uint)pIVar14->max_length <= uVar3) goto code_?;
        if (pIVar14->vector[(int)uVar3] != (IGizmoLineSlider3DController *)0x0) {
          FUN_?(1,TypeInfo__RTG__IGizmoLineSlider3DController,pIVar14->vector[(int)uVar3],
                        zoomFactor);
          pGVar15 = ((GizmoLineSlider3D__Fields *)((longlong)this_01 + 0x10))->_cap3D;
          if (pGVar15 != (GizmoCap3D *)0x0) {
            GizmoCap3D::GizmoCap3D_ApplyZoomFactor(pGVar15,camera,(MethodInfo *)0x0);
            pGVar15 = ((GizmoLineSlider3D__Fields *)((longlong)this_01 + 0x10))->_cap3D;
            pVVar16 = GizmoLineSlider3D::GizmoLineSlider3D_GetRealDirection
                                (&VStack_17,(GizmoLineSlider3D *)this_01,(MethodInfo *)0x0);
            uVar18._0_4_ = pVVar16->x;
            uVar18._4_4_ = pVVar16->y;
            fVar19 = pVVar16->z;
            pVVar16 = GizmoLineSlider3D::GizmoLineSlider3D_GetRealEndPosition
                                (aVStack_20,(GizmoLineSlider3D *)this_01,zoomFactor,
                                 (MethodInfo *)0x0);
            if (pGVar15 != (GizmoCap3D *)0x0) {
              VStack_21.x = pVVar16->x;
              VStack_21.y = pVVar16->y;
              VStack_21.z = pVVar16->z;
              VStack_22._0_8_ = uVar18;
              VStack_22.z = fVar19;
              GizmoCap3D::GizmoCap3D_CapSlider3D(pGVar15,&VStack_22,&VStack_21,(MethodInfo *)0x0);
              goto code_?;
            }
            goto code_?;
          }
          goto code_?;
        }
        goto code_?;
      }
      goto code_?;
    }
  }
  else {
    this_00 = (((GizmoLineSlider3D__Fields *)((longlong)this_01 + 0x10))->_)._handle;
    if (this_00 != (GizmoHandle *)0x0) {
      zoomFactor = GizmoHandle::GizmoHandle_GetZoomFactor(this_00,camera,(MethodInfo *)0x0);
      goto code_?;
    }
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
  }
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Boolean Contains(GizmoLineSlider3D) */

bool Assembly-CSharp.dll::RTG::GizmoLineSlider3DCollection::GizmoLineSlider3DCollection_Contains
               (GizmoLineSlider3DCollection *this,GizmoLineSlider3D *slider,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoLineSlider3D>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (((slider != (GizmoLineSlider3D *)0x0) &&
      (pGVar1 = (slider->fields)._._handle, pGVar1 != (GizmoHandle *)0x0)) &&
     (this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields)._handleIdToSlider,
     this_00 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0)) {
    iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                      (this_00,(pGVar1->fields)._id,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoLineSlider3D>__ContainsKey_int_
                       ->klass->rgctx_data[0x21].method);
    return (byte)((uint)iVar2 >> 0x1f) ^ 1;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Boolean ContainsCapId(Int32) */

bool Assembly-CSharp.dll::RTG::GizmoLineSlider3DCollection::
     GizmoLineSlider3DCollection_ContainsCapId
               (GizmoLineSlider3DCollection *this,int32_t capHandleId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::GizmoLineSlider3D>__FindAll_System__Predicate<RTG::GizmoLineSlider3D>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::GizmoLineSlider3D>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Predicate<RTG::GizmoLineSlider3D>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__RTG__GizmoLineSlider3DCollection____c__DisplayClass8_0___ContainsCapId_b__0_RTG__GizmoLineSlider3D_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoLineSlider3DCollection____c__DisplayClass8_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__RTG__GizmoLineSlider3DCollection____c__DisplayClass8_0)
  ;
  if (object != (Object *)0x0) {
    *(int32_t *)&object[1].klass = capHandleId;
    this_00 = (this->fields)._sliders;
    this_01 = (Predicate_1_Object_ *)
              FUN_?(TypeInfo__System__Predicate<RTG::GizmoLineSlider3D>);
    mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
              (this_01,object,
               MethodInfo__RTG__GizmoLineSlider3DCollection____c__DisplayClass8_0___ContainsCapId_b__0_RTG__GizmoLineSlider3D_
               ,(MethodInfo *)0x0);
    if (this_00 != (List_1_RTG_GizmoLineSlider3D_ *)0x0) {
      pLVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
               List_1_System_Object__FindAll
                         ((List_1_System_Object_ *)this_00,this_01,
                          MethodInfo__System__Collections__Generic__List<RTG::GizmoLineSlider3D>__FindAll_System__Predicate<RTG::GizmoLineSlider3D>_
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

bool Assembly-CSharp.dll::RTG::GizmoLineSlider3DCollection::GizmoLineSlider3DCollection_Contains_1
               (GizmoLineSlider3DCollection *this,int32_t sliderHandleId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoLineSlider3D>__ContainsKey_int_
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
                       MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoLineSlider3D>__ContainsKey_int_
                       ->klass->rgctx_data[0x21].method);
    return (byte)((uint)iVar1 >> 0x1f) ^ 1;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* List`1[RTG.GizmoLineSlider3D] GetRenderSortedSliders(Camera) */

List_1_RTG_GizmoLineSlider3D_ *
Assembly-CSharp.dll::RTG::GizmoLineSlider3DCollection::
GizmoLineSlider3DCollection_GetRenderSortedSliders
          (GizmoLineSlider3DCollection *this,Camera *renderCamera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Comparison<RTG::GizmoLineSlider3D>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::GizmoLineSlider3D>__Sort_System__Comparison<RTG::GizmoLineSlider3D>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::GizmoLineSlider3D>__List_System__Collections__Generic__IEnumerable<RTG::GizmoLineSlider3D>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<RTG::GizmoLineSlider3D>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__RTG__GizmoLineSlider3DCollection____c__DisplayClass20_0___GetRenderSortedSliders_b__0_RTG__GizmoLineSlider3D__RTG__GizmoLineSlider3D_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoLineSlider3DCollection____c__DisplayClass20_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)
           FUN_?(TypeInfo__RTG__GizmoLineSlider3DCollection____c__DisplayClass20_0);
  if (object != (Object *)0x0) {
    bVar1 = iRam_? != 0;
    object[1].klass = (Object__Class *)renderCamera;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)(object + 1) >> 0xc);
      puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar4 = *puVar3;
        LOCK();
        uVar5 = *puVar3;
        if (uVar4 == uVar5) {
          *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (uVar4 != uVar5);
    }
    pLVar6 = (this->fields)._sliders;
    this_00 = (List_1_RTG_GizmoLineSlider3D_ *)
              FUN_?(TypeInfo__System__Collections__Generic__List<RTG::GizmoLineSlider3D>);
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
    List_1_System_Object___ctor_1
              ((List_1_System_Object_ *)this_00,(IEnumerable_1_System_Object_ *)pLVar6,
               MethodInfo__System__Collections__Generic__List<RTG::GizmoLineSlider3D>__List_System__Collections__Generic__IEnumerable<RTG::GizmoLineSlider3D>_
              );
    if ((object[1].klass != (Object__Class *)0x0) &&
       (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)object[1].klass,(MethodInfo *)0x0), obj != (Transform *)0x0))
    {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMStack_7 = (MonitorData *)0x0;
      uStack_8 = 0;
      pvVar9 = (obj->fields)._._.m_CachedPtr;
      if (pvVar9 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar10 = (code *)swi(3);
        pLVar6 = (List_1_RTG_GizmoLineSlider3D_ *)(*pcVar10)();
        return pLVar6;
      }
      pcVar10 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
        uVar11 = func_?(&UNK_?);
        FUN_?(uVar11,0);
        pcVar10 = (code *)swi(3);
        pLVar6 = (List_1_RTG_GizmoLineSlider3D_ *)(*pcVar10)();
        return pLVar6;
      }
      pcRam_? = pcVar10;
      (*pcRam_?)(pvVar9,&pMStack_7);
      object[1].monitor = pMStack_7;
      *(undefined4 *)&object[2].klass = uStack_8;
      this_01 = (Func_3_Object_Object_Int32_ *)
                FUN_?(TypeInfo__System__Comparison<RTG::GizmoLineSlider3D>);
      mscorlib.dll::System::Func`3[Object,Object,Int32]::Func_3_Object_Object_Int32___ctor
                (this_01,object,
                 MethodInfo__RTG__GizmoLineSlider3DCollection____c__DisplayClass20_0___GetRenderSortedSliders_b__0_RTG__GizmoLineSlider3D__RTG__GizmoLineSlider3D_
                 ,(MethodInfo *)0x0);
      if (this_00 != (List_1_RTG_GizmoLineSlider3D_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Sort_1
                  ((List_1_System_Object_ *)this_00,(Comparison_1_Object_ *)this_01,
                   MethodInfo__System__Collections__Generic__List<RTG::GizmoLineSlider3D>__Sort_System__Comparison<RTG::GizmoLineSlider3D>_
                  );
        return this_00;
      }
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  pLVar6 = (List_1_RTG_GizmoLineSlider3D_ *)(*pcVar10)();
  return pLVar6;
}


/* Void Make3DHoverPriorityHigherThan(Priority) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider3DCollection::
     GizmoLineSlider3DCollection_Make3DHoverPriorityHigherThan
               (GizmoLineSlider3DCollection *this,Priority *priority,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  LStack_1._list = (List_1_System_Object_ *)(this->fields)._sliders;
  if ((List_1_RTG_GizmoLineSlider3D_ *)LStack_1._list == (List_1_RTG_GizmoLineSlider3D_ *)0x0) {
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
                (uint)(((List_1_RTG_GizmoLineSlider3D_ *)LStack_1._list)->fields)._version << 0x20)
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
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__MoveNext__
                      );
    if (bVar10 == 0) {
      return;
    }
    if (LStack_1._current == (Object *)0x0) goto code_?;
    if (LStack_1._current[1].klass == (Object__Class *)0x0) break;
    pIVar11 = ((LStack_1._current[1].klass)->_0).element_class;
    if (pIVar11 == (Il2CppClass *)0x0) {
code_?:
      FUN_?();
      break;
    }
    if (priority == (Priority *)0x0) {
      FUN_?();
      goto code_?;
    }
    *(int32_t *)&pIVar11->name = (priority->fields)._priority + -1;
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

void Assembly-CSharp.dll::RTG::GizmoLineSlider3DCollection::
     GizmoLineSlider3DCollection_Make3DHoverPriorityLowerThan
               (GizmoLineSlider3DCollection *this,Priority *priority,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  LStack_1._list = (List_1_System_Object_ *)(this->fields)._sliders;
  if ((List_1_RTG_GizmoLineSlider3D_ *)LStack_1._list == (List_1_RTG_GizmoLineSlider3D_ *)0x0) {
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
                (uint)(((List_1_RTG_GizmoLineSlider3D_ *)LStack_1._list)->fields)._version << 0x20)
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
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__MoveNext__
                      );
    if (bVar10 == 0) {
      return;
    }
    if (LStack_1._current == (Object *)0x0) goto code_?;
    if (LStack_1._current[1].klass == (Object__Class *)0x0) break;
    pIVar11 = ((LStack_1._current[1].klass)->_0).element_class;
    if (pIVar11 == (Il2CppClass *)0x0) {
code_?:
      FUN_?();
      break;
    }
    if (priority == (Priority *)0x0) {
      FUN_?();
      goto code_?;
    }
    *(int32_t *)&pIVar11->name = (priority->fields)._priority + 1;
  }
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void RegisterScalerHandle(Int32, IEnumerable`1[System.Int32]) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider3DCollection::
     GizmoLineSlider3DCollection_RegisterScalerHandle
               (GizmoLineSlider3DCollection *this,int32_t handleId,
               IEnumerable_1_System_Int32_ *scaleDragAxisIndices,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  LStack_1._list = (List_1_System_Object_ *)(this->fields)._sliders;
  if ((List_1_RTG_GizmoLineSlider3D_ *)LStack_1._list == (List_1_RTG_GizmoLineSlider3D_ *)0x0) {
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
                (uint)(((List_1_RTG_GizmoLineSlider3D_ *)LStack_1._list)->fields)._version << 0x20)
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
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__MoveNext__
                      );
    if (bVar10 == 0) {
      return;
    }
    if ((GizmoLineSlider3D *)LStack_1._current == (GizmoLineSlider3D *)0x0) break;
    GizmoLineSlider3D::GizmoLineSlider3D_RegisterScalerHandle
              ((GizmoLineSlider3D *)LStack_1._current,handleId,scaleDragAxisIndices,
               (MethodInfo *)0x0);
  }
  FUN_?();
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Remove(GizmoLineSlider3D) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider3DCollection::GizmoLineSlider3DCollection_Remove
               (GizmoLineSlider3DCollection *this,GizmoLineSlider3D *slider,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoLineSlider3D>__Remove_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::GizmoLineSlider3D>__Remove_RTG__GizmoLineSlider3D_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoLineSlider3D>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (((slider != (GizmoLineSlider3D *)0x0) &&
      (pGVar1 = (slider->fields)._._handle, pGVar1 != (GizmoHandle *)0x0)) &&
     (this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields)._handleIdToSlider,
     this_00 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0)) {
    iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                      (this_00,(pGVar1->fields)._id,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoLineSlider3D>__ContainsKey_int_
                       ->klass->rgctx_data[0x21].method);
    if (iVar2 < 0) {
      return;
    }
    this_01 = (this->fields)._sliders;
    if (this_01 != (List_1_RTG_GizmoLineSlider3D_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
      List_1_System_Object__Remove
                ((List_1_System_Object_ *)this_01,(Object *)slider,
                 MethodInfo__System__Collections__Generic__List<RTG::GizmoLineSlider3D>__Remove_RTG__GizmoLineSlider3D_
                );
      pGVar1 = (slider->fields)._._handle;
      if ((pGVar1 != (GizmoHandle *)0x0) &&
         (this_02 = (this->fields)._handleIdToSlider,
         this_02 != (Dictionary_2_System_Int32_RTG_GizmoLineSlider3D_ *)0x0)) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__Remove
                  ((Dictionary_2_System_Int32_System_Object_ *)this_02,(pGVar1->fields)._id,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoLineSlider3D>__Remove_int_
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


/* Void Set3DCapsVisible(Boolean) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider3DCollection::
     GizmoLineSlider3DCollection_Set3DCapsVisible
               (GizmoLineSlider3DCollection *this,bool visible,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  LStack_1._list = (List_1_System_Object_ *)(this->fields)._sliders;
  if ((List_1_RTG_GizmoLineSlider3D_ *)LStack_1._list == (List_1_RTG_GizmoLineSlider3D_ *)0x0) {
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
                (uint)(((List_1_RTG_GizmoLineSlider3D_ *)LStack_1._list)->fields)._version << 0x20)
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
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__MoveNext__
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


/* Void SetDragChannel(GizmoDragChannel) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider3DCollection::
     GizmoLineSlider3DCollection_SetDragChannel
               (GizmoLineSlider3DCollection *this,GizmoDragChannel__Enum dragChannel,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  LStack_1._list = (List_1_System_Object_ *)(this->fields)._sliders;
  if ((List_1_RTG_GizmoLineSlider3D_ *)LStack_1._list == (List_1_RTG_GizmoLineSlider3D_ *)0x0) {
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
                (uint)(((List_1_RTG_GizmoLineSlider3D_ *)LStack_1._list)->fields)._version << 0x20)
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
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__MoveNext__
                      );
    if (bVar10 == 0) {
      return;
    }
    if ((GizmoLineSlider3D *)LStack_1._current == (GizmoLineSlider3D *)0x0) break;
    GizmoLineSlider3D::GizmoLineSlider3D_SetDragChannel
              ((GizmoLineSlider3D *)LStack_1._current,dragChannel,(MethodInfo *)0x0);
  }
  FUN_?();
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetSnapEnabled(Boolean) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider3DCollection::
     GizmoLineSlider3DCollection_SetSnapEnabled
               (GizmoLineSlider3DCollection *this,bool isEnabled,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__Dispose__
                  ,CONCAT71(in_register_00000011,isEnabled));
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  LStack_1._list = (List_1_System_Object_ *)(this->fields)._sliders;
  if ((List_1_RTG_GizmoLineSlider3D_ *)LStack_1._list == (List_1_RTG_GizmoLineSlider3D_ *)0x0) {
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
                (uint)(((List_1_RTG_GizmoLineSlider3D_ *)LStack_1._list)->fields)._version << 0x20)
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
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__MoveNext__
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

void Assembly-CSharp.dll::RTG::GizmoLineSlider3DCollection::GizmoLineSlider3DCollection_SetVisible
               (GizmoLineSlider3DCollection *this,bool visible,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  LStack_1._list = (List_1_System_Object_ *)(this->fields)._sliders;
  if ((List_1_RTG_GizmoLineSlider3D_ *)LStack_1._list == (List_1_RTG_GizmoLineSlider3D_ *)0x0) {
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
                (uint)(((List_1_RTG_GizmoLineSlider3D_ *)LStack_1._list)->fields)._version << 0x20)
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
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__MoveNext__
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


/* Void SetZoomFactorTransform(GizmoTransform) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider3DCollection::
     GizmoLineSlider3DCollection_SetZoomFactorTransform
               (GizmoLineSlider3DCollection *this,GizmoTransform *zoomFactorTransform,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  LStack_1._list = (List_1_System_Object_ *)(this->fields)._sliders;
  if ((List_1_RTG_GizmoLineSlider3D_ *)LStack_1._list == (List_1_RTG_GizmoLineSlider3D_ *)0x0) {
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
               ((ulonglong)
                (uint)(((List_1_RTG_GizmoLineSlider3D_ *)LStack_1._list)->fields)._version << 0x20)
  ;
  uStack_10 = 0;
  LStack_1._8_8_ = pLStack_9;
  LStack_1._current = (Object *)0x0;
  uStack_4 = 0;
  pLStack_9 = &LStack_1;
  while( true ) {
    bVar11 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
            List_1_T_Enumerator_System_Object__MoveNext
                      (&LStack_1,
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__MoveNext__
                      );
    if (bVar11 == 0) {
      return;
    }
    if (LStack_1._current == (Object *)0x0) goto code_?;
    pOVar12 = LStack_1._current[1].klass;
    if (pOVar12 == (Object__Class *)0x0) break;
    if (zoomFactorTransform == (GizmoTransform *)0x0) {
      pvVar13 = (pOVar12->_0).byval_arg.data.dummy;
      if (pvVar13 == (void *)0x0) {
        FUN_?();
        break;
      }
      uVar14 = *(undefined8 *)((longlong)pvVar13 + 0x170);
      (pOVar12->_0).byval_arg.attrs = (short)uVar14;
      (pOVar12->_0).byval_arg.type = (char)((ulonglong)uVar14 >> 0x10);
      *(int5 *)&(pOVar12->_0).byval_arg.field_0xb = (int5)((ulonglong)uVar14 >> 0x18);
      if (iRam_? != 0) {
        uVar3 = (uint)((ulonglong)&(pOVar12->_0).byval_arg.attrs >> 0xc);
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
      *(GizmoTransform **)&(pOVar12->_0).byval_arg.attrs = zoomFactorTransform;
      if (iRam_? != 0) {
        uVar3 = (uint)((ulonglong)&(pOVar12->_0).byval_arg.attrs >> 0xc);
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


/* GizmoLineSlider3DCollection() */

void Assembly-CSharp.dll::RTG::GizmoLineSlider3DCollection::GizmoLineSlider3DCollection__ctor
               (GizmoLineSlider3DCollection *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoLineSlider3D>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoLineSlider3D>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<RTG::GizmoLineSlider3D>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<RTG::GizmoLineSlider3D>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (List_1_RTG_GizmoLineSlider3D_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<RTG::GizmoLineSlider3D>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<RTG::GizmoLineSlider3D>__List__);
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
                          TypeInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoLineSlider3D>
                          );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoLineSlider3D>__Dictionary__
            );
  bVar1 = iRam_? != 0;
  (this->fields)._handleIdToSlider = (Dictionary_2_System_Int32_RTG_GizmoLineSlider3D_ *)this_01;
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

int32_t Assembly-CSharp.dll::RTG::GizmoLineSlider3DCollection::GizmoLineSlider3DCollection_get_Count
                  (GizmoLineSlider3DCollection *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::GizmoLineSlider3D>__get_Count__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._sliders;
  if (pLVar1 != (List_1_RTG_GizmoLineSlider3D_ *)0x0) {
    return (pLVar1->fields)._size;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}


/* GizmoLineSlider3D get_Item(Int32) */

GizmoLineSlider3D *
Assembly-CSharp.dll::RTG::GizmoLineSlider3DCollection::GizmoLineSlider3DCollection_get_Item
          (GizmoLineSlider3DCollection *this,int32_t id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoLineSlider3D>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = 
  MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoLineSlider3D>__get_Item_int_;
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields)._handleIdToSlider;
  if (this_00 == (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pGVar3 = (GizmoLineSlider3D *)(*pcVar2)();
    return pGVar3;
  }
  uVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
          Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                    (this_00,id,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoLineSlider3D>__get_Item_int_
                     ->klass->rgctx_data[0x21].method);
  if ((int)uVar4 < 0) {
    uVar5 = func_?(pMVar1->klass->rgctx_data,0xe);
    key = (Object *)func_?(uVar5);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowKeyNotFoundException
              (key,(MethodInfo *)0x0);
    pcVar2 = (code *)swi(3);
    pGVar3 = (GizmoLineSlider3D *)(*pcVar2)();
    return pGVar3;
  }
  pDVar6 = (this_00->fields)._entries;
  if (pDVar6 != (Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_Vector3___Array *)0x0) {
    if (uVar4 < (uint)pDVar6->max_length) {
      return *(GizmoLineSlider3D **)&pDVar6->vector[(int)uVar4].value.y;
    }
    FUN_?();
    pcVar2 = (code *)swi(3);
    pGVar3 = (GizmoLineSlider3D *)(*pcVar2)();
    return pGVar3;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pGVar3 = (GizmoLineSlider3D *)(*pcVar2)();
  return pGVar3;
}

