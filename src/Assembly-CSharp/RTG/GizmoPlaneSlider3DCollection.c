
/* Void Add(GizmoPlaneSlider3D) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection_Add
               (GizmoPlaneSlider3DCollection *this,GizmoPlaneSlider3D *slider,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoPlaneSlider3D>__Add_int__RTG__GizmoPlaneSlider3D_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GizmoPlaneSlider3D>__Add_RTG__GizmoPlaneSlider3D_
                   );
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoPlaneSlider3D>__ContainsKey_int_
                   );
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields)._handleIdToSlider;
  if ((slider != (GizmoPlaneSlider3D *)0x0) &&
     (iVar2 = mscorlib.dll::System::Threading::SparselyPopulatedArrayFragment`1[System::Object]::
              SparselyPopulatedArrayFragment_1_System_Object__get_Length
                        ((SparselyPopulatedArrayFragment_1_System_Object_ *)slider,(MethodInfo *)0x0
                        ), pDVar1 != (Dictionary_2_System_Int32_RTG_GizmoPlaneSlider3D_ *)0x0)) {
    bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]::
            Dictionary_2_System_Int32_System_Single__ContainsKey
                      ((Dictionary_2_System_Int32_System_Single_ *)pDVar1,iVar2,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoPlaneSlider3D>__ContainsKey_int_
                      );
    if (bVar3 != 0) {
      return;
    }
    this_00 = (this->fields)._sliders;
    if (this_00 != (List_1_RTG_GizmoPlaneSlider3D_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                ((List_1_System_Object_ *)this_00,(Object *)slider,
                 MethodInfo__System__Collections__Generic__List<RTG::GizmoPlaneSlider3D>__Add_RTG__GizmoPlaneSlider3D_
                );
      pDVar1 = (this->fields)._handleIdToSlider;
      iVar2 = mscorlib.dll::System::Threading::SparselyPopulatedArrayFragment`1[System::Object]::
              SparselyPopulatedArrayFragment_1_System_Object__get_Length
                        ((SparselyPopulatedArrayFragment_1_System_Object_ *)slider,(MethodInfo *)0x0
                        );
      if (pDVar1 != (Dictionary_2_System_Int32_RTG_GizmoPlaneSlider3D_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__Add
                  ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,iVar2,(Object *)slider,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoPlaneSlider3D>__Add_int__RTG__GizmoPlaneSlider3D_
                  );
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void ApplyZoomFactor(Camera) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider3DCollection::
     GizmoPlaneSlider3DCollection_ApplyZoomFactor
               (GizmoPlaneSlider3DCollection *this,Camera *camera,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffbc;
  puVar5 = &stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoPlaneSlider3D>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoPlaneSlider3D>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoPlaneSlider3D>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GizmoPlaneSlider3D>__GetEnumerator__
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
            (this->fields)._sliders;
  if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
code_?:
    func_?();
code_?:
    func_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pLVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
           RegexCharClass+SingleRange]::
           List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                     (&LStack_9,this_00,
                      MethodInfo__System__Collections__Generic__List<RTG::GizmoPlaneSlider3D>__GetEnumerator__
                     );
  LStack_6._list = (List_1_System_Object_ *)pLVar8->_list;
  LStack_6._index = pLVar8->_index;
  LStack_6._version = pLVar8->_version;
  LStack_6._current = *(Object **)&pLVar8->_current;
  LStack_9._version = 0;
  uStack_1 = 1;
  LStack_9._current = (RegexCharClass_SingleRange)&LStack_6;
  do {
    do {
      bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_6,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoPlaneSlider3D>__MoveNext__
                        );
      pOVar11 = LStack_6._current;
      if (bVar10 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&LStack_6,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoPlaneSlider3D>__Dispose__
                   ,unaff_EBX);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if ((RegexCharClass_SingleRange)LStack_6._current == (RegexCharClass_SingleRange)0x0)
      goto code_?;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if (*(int *)((int)pOVar11 + 0x74) == 0) {
        iVar12 = *(int *)((int)pOVar11 + 0x70);
        if (iVar12 == 0) goto code_?;
      }
      else {
        iVar12 = *(int *)((int)pOVar11 + 0x74);
      }
    } while (*(char *)(iVar12 + 0x10) == '\0');
    if (*(int *)((int)pOVar11 + 0x74) == 0) {
      iVar12 = *(int *)((int)pOVar11 + 0x70);
      if (iVar12 == 0) goto code_?;
    }
    else {
      iVar12 = *(int *)((int)pOVar11 + 0x74);
    }
    fVar13 = _UNK_?;
    if (*(char *)(iVar12 + 0x10) != '\0') {
      if (*(GizmoHandle **)((int)pOVar11 + 8) == (GizmoHandle *)0x0) goto code_?;
      fVar13 = GizmoHandle::GizmoHandle_GetZoomFactor
                        (*(GizmoHandle **)((int)pOVar11 + 8),camera,(MethodInfo *)0x0);
    }
    iVar12 = *(int *)((int)pOVar11 + 100);
    if (*(int *)((int)pOVar11 + 0x74) == 0) {
      iVar14 = *(int *)((int)pOVar11 + 0x70);
      if (iVar14 == 0) goto code_?;
    }
    else {
      iVar14 = *(int *)((int)pOVar11 + 0x74);
    }
    if (iVar12 == 0) goto code_?;
    if (*(uint *)(iVar12 + 0xc) <= *(uint *)(iVar14 + 8)) goto code_?;
    iVar12 = *(int *)(iVar12 + 0x10 + *(uint *)(iVar14 + 8) * 4);
    if (iVar12 == 0) goto code_?;
    func_?(1,TypeInfo__RTG__IGizmoPlaneSlider3DController,iVar12,fVar13);
  } while( true );
}


/* Boolean Contains(GizmoPlaneSlider3D) */

bool Assembly-CSharp.dll::RTG::GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection_Contains
               (GizmoPlaneSlider3DCollection *this,GizmoPlaneSlider3D *slider,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoPlaneSlider3D>__ContainsKey_int_
                   );
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._handleIdToSlider;
  if (slider != (GizmoPlaneSlider3D *)0x0) {
    key = mscorlib.dll::System::Threading::SparselyPopulatedArrayFragment`1[System::Object]::
          SparselyPopulatedArrayFragment_1_System_Object__get_Length
                    ((SparselyPopulatedArrayFragment_1_System_Object_ *)slider,(MethodInfo *)0x0);
    if (this_00 != (Dictionary_2_System_Int32_RTG_GizmoPlaneSlider3D_ *)0x0) {
      bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]
              ::Dictionary_2_System_Int32_System_Single__ContainsKey
                        ((Dictionary_2_System_Int32_System_Single_ *)this_00,key,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoPlaneSlider3D>__ContainsKey_int_
                        );
      return bVar1;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* Boolean Contains(Int32) */

bool Assembly-CSharp.dll::RTG::GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection_Contains_1
               (GizmoPlaneSlider3DCollection *this,int32_t sliderHandleId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._handleIdToSlider;
  if (this_00 != (Dictionary_2_System_Int32_RTG_GizmoPlaneSlider3D_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]::
            Dictionary_2_System_Int32_System_Single__ContainsKey
                      ((Dictionary_2_System_Int32_System_Single_ *)this_00,sliderHandleId,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoPlaneSlider3D>__ContainsKey_int_
                      );
    return bVar1;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  bVar1 = (*pcVar3)();
  return bVar1;
}


/* List`1[RTG.GizmoPlaneSlider3D] GetRenderSortedSliders(Camera) */

List_1_RTG_GizmoPlaneSlider3D_ *
Assembly-CSharp.dll::RTG::GizmoPlaneSlider3DCollection::
GizmoPlaneSlider3DCollection_GetRenderSortedSliders
          (GizmoPlaneSlider3DCollection *this,Camera *renderCamera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Comparison<RTG::GizmoPlaneSlider3D>);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GizmoPlaneSlider3D>__Sort_System__Comparison<RTG::GizmoPlaneSlider3D>_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GizmoPlaneSlider3D>__List_System__Collections__Generic__IEnumerable<RTG::GizmoPlaneSlider3D>_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<RTG::GizmoPlaneSlider3D>);
    func_?(&
                    MethodInfo__RTG__GizmoPlaneSlider3DCollection____c__DisplayClass19_0___GetRenderSortedSliders_b__0_RTG__GizmoPlaneSlider3D__RTG__GizmoPlaneSlider3D_
                   );
    func_?(&TypeInfo__RTG__GizmoPlaneSlider3DCollection____c__DisplayClass19_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__RTG__GizmoPlaneSlider3DCollection____c__DisplayClass19_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  pLVar1 = (this->fields)._sliders;
  this_00 = (List_1_RTG_GizmoPlaneSlider3D_ *)
            func_?(TypeInfo__System__Collections__Generic__List<RTG::GizmoPlaneSlider3D>);
  mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object___ctor_1
            ((List_1_System_Object_ *)this_00,(IEnumerable_1_System_Object_ *)pLVar1,
             MethodInfo__System__Collections__Generic__List<RTG::GizmoPlaneSlider3D>__List_System__Collections__Generic__IEnumerable<RTG::GizmoPlaneSlider3D>_
            );
  if (renderCamera != (Camera *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)renderCamera,(MethodInfo *)0x0);
    if (this_01 != (Transform *)0x0) {
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)&stack0xfffffff0,this_01,(MethodInfo *)0x0);
      fVar3 = pVVar2->y;
      pOVar4 = (Object__Class *)pVVar2->z;
      if (value != (Object *)0x0) {
        value[1].klass = (Object__Class *)pVVar2->x;
        value[1].monitor = (MonitorData *)fVar3;
        value[2].klass = pOVar4;
        this_02 = (Comparison_1_Object_ *)func_?();
        mscorlib.dll::System::Comparison`1[Object]::Comparison_1_Object___ctor
                  (this_02,value,
                   MethodInfo__RTG__GizmoPlaneSlider3DCollection____c__DisplayClass19_0___GetRenderSortedSliders_b__0_RTG__GizmoPlaneSlider3D__RTG__GizmoPlaneSlider3D_
                   ,(MethodInfo *)0x0);
        if (this_00 != (List_1_RTG_GizmoPlaneSlider3D_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__Sort_1
                    ((List_1_System_Object_ *)this_00,this_02,
                     MethodInfo__System__Collections__Generic__List<RTG::GizmoPlaneSlider3D>__Sort_System__Comparison<RTG::GizmoPlaneSlider3D>_
                    );
          return this_00;
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pLVar1 = (List_1_RTG_GizmoPlaneSlider3D_ *)(*pcVar5)();
  return pLVar1;
}


/* Void Make3DHoverPriorityHigherThan(Priority) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider3DCollection::
     GizmoPlaneSlider3DCollection_Make3DHoverPriorityHigherThan
               (GizmoPlaneSlider3DCollection *this,Priority *priority,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffbc;
  puVar5 = &stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoPlaneSlider3D>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoPlaneSlider3D>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoPlaneSlider3D>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GizmoPlaneSlider3D>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  LStack_6._list = (List_1_System_Object_ *)0x0;
  LStack_6._index = 0;
  LStack_6._version = 0;
  LStack_6._current = (Object *)0x0;
  method_00 = (MethodInfo *)(this->fields)._sliders;
  if (method_00 != (MethodInfo *)0x0) {
    pLVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_8,
                        (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                        method_00,
                        MethodInfo__System__Collections__Generic__List<RTG::GizmoPlaneSlider3D>__GetEnumerator__
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
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoPlaneSlider3D>__MoveNext__
                        );
      if (bVar9 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&LStack_6,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoPlaneSlider3D>__Dispose__
                   ,method_00);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if ((RegexCharClass_SingleRange)LStack_6._current == (RegexCharClass_SingleRange)0x0) break;
      this_00 = GizmoSlider::GizmoSlider_get_HoverPriority3D
                          ((GizmoSlider *)LStack_6._current,(MethodInfo *)0x0);
      if (this_00 == (Priority *)0x0) break;
      method_00 = (MethodInfo *)priority;
      Priority::Priority_MakeHigherThan(this_00,priority,(MethodInfo *)0x0);
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void Make3DHoverPriorityLowerThan(Priority) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider3DCollection::
     GizmoPlaneSlider3DCollection_Make3DHoverPriorityLowerThan
               (GizmoPlaneSlider3DCollection *this,Priority *priority,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffbc;
  puVar5 = &stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoPlaneSlider3D>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoPlaneSlider3D>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoPlaneSlider3D>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GizmoPlaneSlider3D>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  LStack_6._list = (List_1_System_Object_ *)0x0;
  LStack_6._index = 0;
  LStack_6._version = 0;
  LStack_6._current = (Object *)0x0;
  method_00 = (MethodInfo *)(this->fields)._sliders;
  if (method_00 != (MethodInfo *)0x0) {
    pLVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_8,
                        (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                        method_00,
                        MethodInfo__System__Collections__Generic__List<RTG::GizmoPlaneSlider3D>__GetEnumerator__
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
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoPlaneSlider3D>__MoveNext__
                        );
      if (bVar9 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&LStack_6,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoPlaneSlider3D>__Dispose__
                   ,method_00);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if ((RegexCharClass_SingleRange)LStack_6._current == (RegexCharClass_SingleRange)0x0) break;
      this_00 = GizmoSlider::GizmoSlider_get_HoverPriority3D
                          ((GizmoSlider *)LStack_6._current,(MethodInfo *)0x0);
      if (this_00 == (Priority *)0x0) break;
      method_00 = (MethodInfo *)priority;
      Priority::Priority_MakeLowerThan(this_00,priority,(MethodInfo *)0x0);
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void Remove(GizmoPlaneSlider3D) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection_Remove
               (GizmoPlaneSlider3DCollection *this,GizmoPlaneSlider3D *slider,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoPlaneSlider3D>__Remove_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GizmoPlaneSlider3D>__Remove_RTG__GizmoPlaneSlider3D_
                   );
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoPlaneSlider3D>__ContainsKey_int_
                   );
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields)._handleIdToSlider;
  if ((slider != (GizmoPlaneSlider3D *)0x0) &&
     (iVar2 = mscorlib.dll::System::Threading::SparselyPopulatedArrayFragment`1[System::Object]::
              SparselyPopulatedArrayFragment_1_System_Object__get_Length
                        ((SparselyPopulatedArrayFragment_1_System_Object_ *)slider,(MethodInfo *)0x0
                        ), pDVar1 != (Dictionary_2_System_Int32_RTG_GizmoPlaneSlider3D_ *)0x0)) {
    bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]::
            Dictionary_2_System_Int32_System_Single__ContainsKey
                      ((Dictionary_2_System_Int32_System_Single_ *)pDVar1,iVar2,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoPlaneSlider3D>__ContainsKey_int_
                      );
    if (bVar3 == 0) {
      return;
    }
    this_00 = (this->fields)._sliders;
    if (this_00 != (List_1_RTG_GizmoPlaneSlider3D_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
      List_1_System_Object__Remove
                ((List_1_System_Object_ *)this_00,(Object *)slider,
                 MethodInfo__System__Collections__Generic__List<RTG::GizmoPlaneSlider3D>__Remove_RTG__GizmoPlaneSlider3D_
                );
      pDVar1 = (this->fields)._handleIdToSlider;
      iVar2 = mscorlib.dll::System::Threading::SparselyPopulatedArrayFragment`1[System::Object]::
              SparselyPopulatedArrayFragment_1_System_Object__get_Length
                        ((SparselyPopulatedArrayFragment_1_System_Object_ *)slider,(MethodInfo *)0x0
                        );
      if (pDVar1 != (Dictionary_2_System_Int32_RTG_GizmoPlaneSlider3D_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__Remove
                  ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,iVar2,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoPlaneSlider3D>__Remove_int_
                  );
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetBorderHoverable(Boolean) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider3DCollection::
     GizmoPlaneSlider3DCollection_SetBorderHoverable
               (GizmoPlaneSlider3DCollection *this,bool isHoverable,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffbc;
  puVar5 = &stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoPlaneSlider3D>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoPlaneSlider3D>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoPlaneSlider3D>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GizmoPlaneSlider3D>__GetEnumerator__
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
            (this->fields)._sliders;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    pLVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_8,this_00,
                        MethodInfo__System__Collections__Generic__List<RTG::GizmoPlaneSlider3D>__GetEnumerator__
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
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoPlaneSlider3D>__MoveNext__
                        );
      pOVar10 = LStack_6._current;
      if (bVar9 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&LStack_6,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoPlaneSlider3D>__Dispose__
                   ,in_stack_11);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if ((RegexCharClass_SingleRange)LStack_6._current == (RegexCharClass_SingleRange)0x0) break;
      *(bool *)((int)LStack_6._current + 0x38) = isHoverable;
      if (*(GizmoQuad3DBorder **)((int)LStack_6._current + 0x2c) == (GizmoQuad3DBorder *)0x0)
      break;
      GizmoQuad3DBorder::GizmoQuad3DBorder_SetHoverable
                (*(GizmoQuad3DBorder **)((int)LStack_6._current + 0x2c),isHoverable,
                 (MethodInfo *)0x0);
      in_stack_11 = *(MethodInfo **)((int)pOVar10 + 0x30);
      if (in_stack_11 == (MethodInfo *)0x0) break;
      GizmoRATriangle3DBorder::GizmoRATriangle3DBorder_SetHoverable
                ((GizmoRATriangle3DBorder *)in_stack_11,isHoverable,(MethodInfo *)0x0);
      this_01 = *(GizmoCircle3DBorder **)((int)pOVar10 + 0x34);
      if (this_01 == (GizmoCircle3DBorder *)0x0) break;
      GizmoCircle3DBorder::GizmoCircle3DBorder_SetHoverable(this_01,isHoverable,(MethodInfo *)0x0);
    }
  }
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void SetBorderVisible(Boolean) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider3DCollection::
     GizmoPlaneSlider3DCollection_SetBorderVisible
               (GizmoPlaneSlider3DCollection *this,bool isVisible,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffbc;
  puVar5 = &stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoPlaneSlider3D>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoPlaneSlider3D>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoPlaneSlider3D>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GizmoPlaneSlider3D>__GetEnumerator__
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
            (this->fields)._sliders;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    pLVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_8,this_00,
                        MethodInfo__System__Collections__Generic__List<RTG::GizmoPlaneSlider3D>__GetEnumerator__
                       );
    LStack_6._list = (List_1_System_Object_ *)pLVar7->_list;
    LStack_6._index = pLVar7->_index;
    LStack_6._version = pLVar7->_version;
    LStack_6._current = *(Object **)&pLVar7->_current;
    LStack_8._version = 0;
    uStack_1 = 1;
    LStack_8._current = (RegexCharClass_SingleRange)&LStack_6;
    while( true ) {
      do {
        bVar9 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          (&LStack_6,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoPlaneSlider3D>__MoveNext__
                          );
        pOVar10 = LStack_6._current;
        if (bVar9 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&LStack_6,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoPlaneSlider3D>__Dispose__
                     ,unaff_EBX);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        if ((RegexCharClass_SingleRange)LStack_6._current == (RegexCharClass_SingleRange)0x0)
        goto code_?;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
      } while (isVisible == *(bool *)((int)pOVar10 + 0x39));
      iVar11 = *(int *)((int)pOVar10 + 100);
      *(bool *)((int)pOVar10 + 0x39) = isVisible;
      if (*(int *)((int)pOVar10 + 0x74) == 0) {
        iVar12 = *(int *)((int)pOVar10 + 0x70);
        if (iVar12 == 0) goto code_?;
      }
      else {
        iVar12 = *(int *)((int)pOVar10 + 0x74);
      }
      if (iVar11 == 0) goto code_?;
      if (*(uint *)(iVar11 + 0xc) <= *(uint *)(iVar12 + 8)) break;
      iVar11 = *(int *)(iVar11 + 0x10 + *(uint *)(iVar12 + 8) * 4);
      if (iVar11 == 0) goto code_?;
      func_?(0,TypeInfo__RTG__IGizmoPlaneSlider3DController,iVar11);
    }
    func_?();
  }
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void SetHoverable(Boolean, Boolean) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider3DCollection::
     GizmoPlaneSlider3DCollection_SetHoverable
               (GizmoPlaneSlider3DCollection *this,bool isHoverable,bool includeBorder,
               MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb8;
  puVar5 = &stack0xffffffb8;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoPlaneSlider3D>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoPlaneSlider3D>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoPlaneSlider3D>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GizmoPlaneSlider3D>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  LStack_6._list = (List_1_System_Object_ *)0x0;
  LStack_6._index = 0;
  LStack_6._version = 0;
  LStack_6._current = (Object *)0x0;
  if (includeBorder == 0) {
    pLVar7 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
             (this->fields)._sliders;
    if (pLVar7 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      pLVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                         (&LStack_9,pLVar7,
                          MethodInfo__System__Collections__Generic__List<RTG::GizmoPlaneSlider3D>__GetEnumerator__
                         );
      LStack_9._current = (RegexCharClass_SingleRange)&LStack_6;
      LStack_6._list = (List_1_System_Object_ *)pLVar8->_list;
      LStack_6._index = pLVar8->_index;
      LStack_6._version = pLVar8->_version;
      LStack_6._current = *(Object **)&pLVar8->_current;
      LStack_9._version = 0;
      uStack_1 = 4;
      while( true ) {
        bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          (&LStack_6,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoPlaneSlider3D>__MoveNext__
                          );
        if (bVar10 == 0) break;
        if ((RegexCharClass_SingleRange)LStack_6._current == (RegexCharClass_SingleRange)0x0)
        goto code_?;
        GizmoSlider::GizmoSlider_SetHoverable
                  ((GizmoSlider *)LStack_6._current,isHoverable,(MethodInfo *)0x0);
      }
      goto code_?;
    }
  }
  else {
    pLVar7 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
             (this->fields)._sliders;
    if (pLVar7 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      pLVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                         (&LStack_9,pLVar7,
                          MethodInfo__System__Collections__Generic__List<RTG::GizmoPlaneSlider3D>__GetEnumerator__
                         );
      LStack_9._current = (RegexCharClass_SingleRange)&LStack_6;
      LStack_6._list = (List_1_System_Object_ *)pLVar8->_list;
      LStack_6._index = pLVar8->_index;
      LStack_6._version = pLVar8->_version;
      LStack_6._current = *(Object **)&pLVar8->_current;
      LStack_9._version = 0;
      uStack_1 = 1;
      while( true ) {
        bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          (&LStack_6,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoPlaneSlider3D>__MoveNext__
                          );
        pOVar11 = LStack_6._current;
        if (bVar10 == 0) break;
        if ((RegexCharClass_SingleRange)LStack_6._current == (RegexCharClass_SingleRange)0x0)
        goto code_?;
        GizmoSlider::GizmoSlider_SetHoverable
                  ((GizmoSlider *)LStack_6._current,isHoverable,(MethodInfo *)0x0);
        *(bool *)((int)pOVar11 + 0x38) = isHoverable;
        if (*(GizmoQuad3DBorder **)((int)pOVar11 + 0x2c) == (GizmoQuad3DBorder *)0x0)
        goto code_?;
        GizmoQuad3DBorder::GizmoQuad3DBorder_SetHoverable
                  (*(GizmoQuad3DBorder **)((int)pOVar11 + 0x2c),isHoverable,(MethodInfo *)0x0);
        if (*(GizmoRATriangle3DBorder **)((int)pOVar11 + 0x30) == (GizmoRATriangle3DBorder *)0x0)
        goto code_?;
        GizmoRATriangle3DBorder::GizmoRATriangle3DBorder_SetHoverable
                  (*(GizmoRATriangle3DBorder **)((int)pOVar11 + 0x30),isHoverable,(MethodInfo *)0x0);
        if (*(GizmoCircle3DBorder **)((int)pOVar11 + 0x34) == (GizmoCircle3DBorder *)0x0)
        goto code_?;
        GizmoCircle3DBorder::GizmoCircle3DBorder_SetHoverable
                  (*(GizmoCircle3DBorder **)((int)pOVar11 + 0x34),isHoverable,(MethodInfo *)0x0);
      }
code_?:
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)&LStack_6,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoPlaneSlider3D>__Dispose__
                 ,unaff_EDI);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
  }
code_?:
  uVar12 = func_?();
  func_?(uVar12);
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void SetSnapEnabled(Boolean) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider3DCollection::
     GizmoPlaneSlider3DCollection_SetSnapEnabled
               (GizmoPlaneSlider3DCollection *this,bool isEnabled,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffbc;
  puVar5 = &stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoPlaneSlider3D>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoPlaneSlider3D>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoPlaneSlider3D>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GizmoPlaneSlider3D>__GetEnumerator__
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
            (this->fields)._sliders;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    pLVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_8,this_00,
                        MethodInfo__System__Collections__Generic__List<RTG::GizmoPlaneSlider3D>__GetEnumerator__
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
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoPlaneSlider3D>__MoveNext__
                        );
      if (bVar9 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&LStack_6,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoPlaneSlider3D>__Dispose__
                   ,unaff_EDI);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if ((RegexCharClass_SingleRange)LStack_6._current == (RegexCharClass_SingleRange)0x0) break;
      (**(code **)(*(int *)LStack_6._current + 0x128))
                (LStack_6._current,_isEnabled,*(undefined4 *)(*(int *)LStack_6._current + 300));
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void SetVisible(Boolean, Boolean) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection_SetVisible
               (GizmoPlaneSlider3DCollection *this,bool isVisible,bool includeBorder,
               MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb8;
  puVar5 = &stack0xffffffb8;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoPlaneSlider3D>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoPlaneSlider3D>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoPlaneSlider3D>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GizmoPlaneSlider3D>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  LStack_6._list = (List_1_System_Object_ *)0x0;
  LStack_6._index = 0;
  LStack_6._version = 0;
  LStack_6._current = (Object *)0x0;
  if (includeBorder == 0) {
    pLVar7 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
             (this->fields)._sliders;
    if (pLVar7 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      pLVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                         (&LStack_9,pLVar7,
                          MethodInfo__System__Collections__Generic__List<RTG::GizmoPlaneSlider3D>__GetEnumerator__
                         );
      LStack_9._current = (RegexCharClass_SingleRange)&LStack_6;
      LStack_6._list = (List_1_System_Object_ *)pLVar8->_list;
      LStack_6._index = pLVar8->_index;
      LStack_6._version = pLVar8->_version;
      LStack_6._current = *(Object **)&pLVar8->_current;
      LStack_9._version = 0;
      uStack_1 = 4;
      while( true ) {
        bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          (&LStack_6,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoPlaneSlider3D>__MoveNext__
                          );
        if (bVar10 == 0) break;
        if ((RegexCharClass_SingleRange)LStack_6._current == (RegexCharClass_SingleRange)0x0)
        goto code_?;
        GizmoSlider::GizmoSlider_SetVisible
                  ((GizmoSlider *)LStack_6._current,isVisible,(MethodInfo *)0x0);
      }
      goto code_?;
    }
  }
  else {
    pLVar7 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
             (this->fields)._sliders;
    if (pLVar7 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      pLVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                         (&LStack_9,pLVar7,
                          MethodInfo__System__Collections__Generic__List<RTG::GizmoPlaneSlider3D>__GetEnumerator__
                         );
      LStack_9._current = (RegexCharClass_SingleRange)&LStack_6;
      LStack_6._list = (List_1_System_Object_ *)pLVar8->_list;
      LStack_6._index = pLVar8->_index;
      LStack_6._version = pLVar8->_version;
      LStack_6._current = *(Object **)&pLVar8->_current;
      LStack_9._version = 0;
      uStack_1 = 1;
      while( true ) {
        bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          (&LStack_6,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoPlaneSlider3D>__MoveNext__
                          );
        this_00 = (RegexCharClass_SingleRange)LStack_6._current;
        if (bVar10 == 0) break;
        if ((RegexCharClass_SingleRange)LStack_6._current == (RegexCharClass_SingleRange)0x0)
        goto code_?;
        GizmoSlider::GizmoSlider_SetVisible
                  ((GizmoSlider *)LStack_6._current,isVisible,(MethodInfo *)0x0);
        GizmoPlaneSlider3D::GizmoPlaneSlider3D_SetBorderVisible
                  ((GizmoPlaneSlider3D *)this_00,isVisible,(MethodInfo *)0x0);
        unaff_EDI = this_00;
      }
code_?:
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)&LStack_6,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoPlaneSlider3D>__Dispose__
                 ,(MethodInfo *)unaff_EDI);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
  }
code_?:
  uVar11 = func_?();
  func_?(uVar11);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void SetZoomFactorTransform(GizmoTransform) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider3DCollection::
     GizmoPlaneSlider3DCollection_SetZoomFactorTransform
               (GizmoPlaneSlider3DCollection *this,GizmoTransform *zoomFactorTransform,
               MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffbc;
  puVar5 = &stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoPlaneSlider3D>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoPlaneSlider3D>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoPlaneSlider3D>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GizmoPlaneSlider3D>__GetEnumerator__
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
            (this->fields)._sliders;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    pLVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_8,this_00,
                        MethodInfo__System__Collections__Generic__List<RTG::GizmoPlaneSlider3D>__GetEnumerator__
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
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoPlaneSlider3D>__MoveNext__
                        );
      if (bVar9 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&LStack_6,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoPlaneSlider3D>__Dispose__
                   ,unaff_EDI);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if (((RegexCharClass_SingleRange)LStack_6._current == (RegexCharClass_SingleRange)0x0) ||
         (*(GizmoHandle **)((int)LStack_6._current + 8) == (GizmoHandle *)0x0)) break;
      GizmoHandle::GizmoHandle_SetZoomFactorTransform
                (*(GizmoHandle **)((int)LStack_6._current + 8),zoomFactorTransform,
                 (MethodInfo *)0x0);
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* GizmoPlaneSlider3DCollection() */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection__ctor
               (GizmoPlaneSlider3DCollection *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoPlaneSlider3D>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoPlaneSlider3D>
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<RTG::GizmoPlaneSlider3D>__List__
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<RTG::GizmoPlaneSlider3D>);
    cRam_? = '\x01';
  }
  this_00 = (List_1_RTG_GizmoPlaneSlider3D_ *)
            func_?(TypeInfo__System__Collections__Generic__List<RTG::GizmoPlaneSlider3D>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<RTG::GizmoPlaneSlider3D>__List__);
  (this->fields)._sliders = this_00;
  func_?(&this->fields,this_00);
  this_01 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )func_?(
                            TypeInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoPlaneSlider3D>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoPlaneSlider3D>__Dictionary__
            );
  method_00 = (MethodInfo *)&(this->fields)._handleIdToSlider;
  (this->fields)._handleIdToSlider = (Dictionary_2_System_Int32_RTG_GizmoPlaneSlider3D_ *)this_01;
  func_?(method_00,this_01);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}


/* Int32 get_Count() */

int32_t Assembly-CSharp.dll::RTG::GizmoPlaneSlider3DCollection::
        GizmoPlaneSlider3DCollection_get_Count
                  (GizmoPlaneSlider3DCollection *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppMStack_1 = &
                 MethodInfo__System__Collections__Generic__List<RTG::GizmoPlaneSlider3D>__get_Count__
    ;
    func_?();
    cRam_? = '\x01';
  }
  pLVar2 = (this->fields)._sliders;
  if (pLVar2 != (List_1_RTG_GizmoPlaneSlider3D_ *)0x0) {
    return (pLVar2->fields)._size;
  }
  ppMStack_1 = (MethodInfo **)&stack0xfffffffc;
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  iVar6 = (*pcVar5)();
  return iVar6;
}


/* GizmoPlaneSlider3D get_Item(Int32) */

GizmoPlaneSlider3D *
Assembly-CSharp.dll::RTG::GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection_get_Item
          (GizmoPlaneSlider3DCollection *this,int32_t id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._handleIdToSlider;
  if (this_00 != (Dictionary_2_System_Int32_RTG_GizmoPlaneSlider3D_ *)0x0) {
    pGVar1 = (GizmoPlaneSlider3D *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
             ::Dictionary_2_System_Int32_System_Object__get_Item
                       ((Dictionary_2_System_Int32_System_Object_ *)this_00,id,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoPlaneSlider3D>__get_Item_int_
                       );
    return pGVar1;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  pGVar1 = (GizmoPlaneSlider3D *)(*pcVar3)();
  return pGVar1;
}

