
/* Void Add(GizmoLineSlider3D) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider3DCollection::GizmoLineSlider3DCollection_Add
               (GizmoLineSlider3DCollection *this,GizmoLineSlider3D *slider,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoLineSlider3D>__Add_int__RTG__GizmoLineSlider3D_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GizmoLineSlider3D>__Add_RTG__GizmoLineSlider3D_
                   );
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoLineSlider3D>__ContainsKey_int_
                   );
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields)._handleIdToSlider;
  if ((slider != (GizmoLineSlider3D *)0x0) &&
     (iVar2 = mscorlib.dll::System::Threading::SparselyPopulatedArrayFragment`1[System::Object]::
              SparselyPopulatedArrayFragment_1_System_Object__get_Length
                        ((SparselyPopulatedArrayFragment_1_System_Object_ *)slider,(MethodInfo *)0x0
                        ), pDVar1 != (Dictionary_2_System_Int32_RTG_GizmoLineSlider3D_ *)0x0)) {
    bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]::
            Dictionary_2_System_Int32_System_Single__ContainsKey
                      ((Dictionary_2_System_Int32_System_Single_ *)pDVar1,iVar2,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoLineSlider3D>__ContainsKey_int_
                      );
    if (bVar3 != 0) {
      return;
    }
    this_00 = (this->fields)._sliders;
    if (this_00 != (List_1_RTG_GizmoLineSlider3D_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                ((List_1_System_Object_ *)this_00,(Object *)slider,
                 MethodInfo__System__Collections__Generic__List<RTG::GizmoLineSlider3D>__Add_RTG__GizmoLineSlider3D_
                );
      pDVar1 = (this->fields)._handleIdToSlider;
      iVar2 = mscorlib.dll::System::Threading::SparselyPopulatedArrayFragment`1[System::Object]::
              SparselyPopulatedArrayFragment_1_System_Object__get_Length
                        ((SparselyPopulatedArrayFragment_1_System_Object_ *)slider,(MethodInfo *)0x0
                        );
      if (pDVar1 != (Dictionary_2_System_Int32_RTG_GizmoLineSlider3D_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__Add
                  ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,iVar2,(Object *)slider,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoLineSlider3D>__Add_int__RTG__GizmoLineSlider3D_
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

void Assembly-CSharp.dll::RTG::GizmoLineSlider3DCollection::
     GizmoLineSlider3DCollection_ApplyZoomFactor
               (GizmoLineSlider3DCollection *this,Camera *camera,MethodInfo *method)

{
  pGStack_1 = (GizmoCap3D *)0xffffffff;
  pIStack_2 = (IGizmoDragSession *)&DAT_?;
  pLStack_3 = (List_1_RTG_GizmoScalerHandle_ *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &pLStack_3;
  puStack_4 = &stack0xffffff98;
  puVar5 = &stack0xffffff98;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GizmoLineSlider3D>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields)._sliders;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    pLVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                         *)&stack0xffffffb4,this_00,
                        MethodInfo__System__Collections__Generic__List<RTG::GizmoLineSlider3D>__GetEnumerator__
                       );
    iStack_7 = 0;
    pGStack_8 = (GizmoLineSlider3D__Class *)pLVar6->_list;
    pMStack_9 = (MonitorData *)pLVar6->_index;
    pGStack_1 = (GizmoCap3D *)0x1;
    pGStack_10 = (GizmoSglAxisOffsetDrag3D *)&pGStack_8;
    while( true ) {
      do {
        this_03 = (Gizmo *)&pGStack_8;
        bVar11 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          ((List_1_T_Enumerator_System_Object_ *)this_03,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__MoveNext__
                          );
        if (bVar11 == 0) {
          pGStack_1 = (GizmoCap3D *)0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&pGStack_8,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__Dispose__
                     ,(MethodInfo *)in_stack_12);
          *unaff_FS_OFFSET = pLStack_3;
          return;
        }
        if (this_03 == (Gizmo *)0x0) goto code_?;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pGVar13 = (GizmoLineSlider3DLookAndFeel *)(this_03->fields)._hoverInfo._hoverPoint.z;
        pGVar14 = pGVar13;
        if ((pGVar13 == (GizmoLineSlider3DLookAndFeel *)0x0) &&
           (pGVar14 = (GizmoLineSlider3DLookAndFeel *)(this_03->fields)._hoverInfo._hoverPoint.y,
           pGVar14 == (GizmoLineSlider3DLookAndFeel *)0x0)) goto code_?;
      } while ((pGVar14->fields)._useZoomFactor == 0);
      if ((pGVar13 == (GizmoLineSlider3DLookAndFeel *)0x0) &&
         (pGVar13 = (GizmoLineSlider3DLookAndFeel *)(this_03->fields)._hoverInfo._hoverPoint.y,
         pGVar13 == (GizmoLineSlider3DLookAndFeel *)0x0)) break;
      zoomFactor = _UNK_?;
      if ((pGVar13->fields)._useZoomFactor != 0) {
        this_01 = ((GizmoSlider__Fields *)&(this_03->fields).PostEnabled)->_handle;
        if (this_01 == (GizmoHandle *)0x0) break;
        zoomFactor = GizmoHandle::GizmoHandle_GetZoomFactor(this_01,camera,(MethodInfo *)0x0);
      }
      pGVar13 = (GizmoLineSlider3DLookAndFeel *)(this_03->fields)._hoverInfo._hoverPoint.z;
      pIVar15 = (IGizmoLineSlider3DController__Array *)(this_03->fields).PostDragBegin;
      if (((pGVar13 == (GizmoLineSlider3DLookAndFeel *)0x0) &&
          (pGVar13 = (GizmoLineSlider3DLookAndFeel *)(this_03->fields)._hoverInfo._hoverPoint.y,
          pGVar13 == (GizmoLineSlider3DLookAndFeel *)0x0)) ||
         (uVar16 = (pGVar13->fields)._lineType, pIVar15 == (IGizmoLineSlider3DController__Array *)0x0))
      break;
      if (pIVar15->max_length <= uVar16) goto code_?;
      if (pIVar15->vector[uVar16] == (IGizmoLineSlider3DController *)0x0) break;
      func_?(1,TypeInfo__RTG__IGizmoLineSlider3DController,pIVar15->vector[uVar16],zoomFactor
                     );
      this_02 = *(GizmoCap3D **)&(this_03->fields)._isEnabled;
      if (this_02 == (GizmoCap3D *)0x0) break;
      GizmoCap3D::GizmoCap3D_ApplyZoomFactor(this_02,camera,(MethodInfo *)0x0);
      pGStack_17 = *(GizmoSglAxisScaleDrag3D **)&(this_03->fields)._isEnabled;
      pVVar18 = GizmoLineSlider3D::GizmoLineSlider3D_GetRealDirection
                         (&VStack_19,(GizmoLineSlider3D *)this_03,(MethodInfo *)0x0);
      pIStack_20 = (IGizmoLineSlider3DController__Array *)pVVar18->x;
      pGStack_21 = (GizmoLineSlider3DControllerData *)pVVar18->y;
      pGStack_22 = (GizmoRotationArc3D *)pVVar18->z;
      pVVar18 = GizmoLineSlider3D::GizmoLineSlider3D_GetRealEndPosition
                         ((Vector3 *)&stack0xffffffb8,(GizmoLineSlider3D *)this_03,zoomFactor,
                          (MethodInfo *)0x0);
      if (pGStack_17 == (GizmoSglAxisScaleDrag3D *)0x0) break;
      sliderDirection.z = (float)pGStack_22;
      sliderDirection.x = (float)pIStack_20;
      sliderDirection.y = (float)pGStack_21;
      GizmoCap3D::GizmoCap3D_CapSlider3D
                ((GizmoCap3D *)pGStack_17,sliderDirection,*pVVar18,(MethodInfo *)0x0);
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar23 = (code *)swi(3);
  (*pcVar23)();
  return;
}


/* Boolean Contains(GizmoLineSlider3D) */

bool Assembly-CSharp.dll::RTG::GizmoLineSlider3DCollection::GizmoLineSlider3DCollection_Contains
               (GizmoLineSlider3DCollection *this,GizmoLineSlider3D *slider,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoLineSlider3D>__ContainsKey_int_
                   );
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._handleIdToSlider;
  if (slider != (GizmoLineSlider3D *)0x0) {
    key = mscorlib.dll::System::Threading::SparselyPopulatedArrayFragment`1[System::Object]::
          SparselyPopulatedArrayFragment_1_System_Object__get_Length
                    ((SparselyPopulatedArrayFragment_1_System_Object_ *)slider,(MethodInfo *)0x0);
    if (this_00 != (Dictionary_2_System_Int32_RTG_GizmoLineSlider3D_ *)0x0) {
      bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]
              ::Dictionary_2_System_Int32_System_Single__ContainsKey
                        ((Dictionary_2_System_Int32_System_Single_ *)this_00,key,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoLineSlider3D>__ContainsKey_int_
                        );
      return bVar1;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* Boolean ContainsCapId(Int32) */

bool Assembly-CSharp.dll::RTG::GizmoLineSlider3DCollection::
     GizmoLineSlider3DCollection_ContainsCapId
               (GizmoLineSlider3DCollection *this,int32_t capHandleId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GizmoLineSlider3D>__FindAll_System__Predicate<RTG::GizmoLineSlider3D>_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GizmoLineSlider3D>__get_Count__
                   );
    func_?(&TypeInfo__System__Predicate<RTG::GizmoLineSlider3D>);
    func_?(&
                    MethodInfo__RTG__GizmoLineSlider3DCollection____c__DisplayClass8_0___ContainsCapId_b__0_RTG__GizmoLineSlider3D_
                   );
    func_?(&TypeInfo__RTG__GizmoLineSlider3DCollection____c__DisplayClass8_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__RTG__GizmoLineSlider3DCollection____c__DisplayClass8_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
    value[1].klass = (Object__Class *)capHandleId;
    this_00 = (this->fields)._sliders;
    this_01 = (Predicate_1_Object_ *)
              func_?(TypeInfo__System__Predicate<RTG::GizmoLineSlider3D>);
    mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
              (this_01,value,
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
  func_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Boolean Contains(Int32) */

bool Assembly-CSharp.dll::RTG::GizmoLineSlider3DCollection::GizmoLineSlider3DCollection_Contains_1
               (GizmoLineSlider3DCollection *this,int32_t sliderHandleId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._handleIdToSlider;
  if (this_00 != (Dictionary_2_System_Int32_RTG_GizmoLineSlider3D_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]::
            Dictionary_2_System_Int32_System_Single__ContainsKey
                      ((Dictionary_2_System_Int32_System_Single_ *)this_00,sliderHandleId,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoLineSlider3D>__ContainsKey_int_
                      );
    return bVar1;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  bVar1 = (*pcVar3)();
  return bVar1;
}


/* List`1[RTG.GizmoLineSlider3D] GetRenderSortedSliders(Camera) */

List_1_RTG_GizmoLineSlider3D_ *
Assembly-CSharp.dll::RTG::GizmoLineSlider3DCollection::
GizmoLineSlider3DCollection_GetRenderSortedSliders
          (GizmoLineSlider3DCollection *this,Camera *renderCamera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Comparison<RTG::GizmoLineSlider3D>);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GizmoLineSlider3D>__Sort_System__Comparison<RTG::GizmoLineSlider3D>_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GizmoLineSlider3D>__List_System__Collections__Generic__IEnumerable<RTG::GizmoLineSlider3D>_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<RTG::GizmoLineSlider3D>);
    func_?(&
                    MethodInfo__RTG__GizmoLineSlider3DCollection____c__DisplayClass20_0___GetRenderSortedSliders_b__0_RTG__GizmoLineSlider3D__RTG__GizmoLineSlider3D_
                   );
    func_?(&TypeInfo__RTG__GizmoLineSlider3DCollection____c__DisplayClass20_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__RTG__GizmoLineSlider3DCollection____c__DisplayClass20_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
    pOVar1 = value + 1;
    pOVar1->klass = (Object__Class *)renderCamera;
    func_?(pOVar1,renderCamera);
    pLVar2 = (this->fields)._sliders;
    this_00 = (List_1_RTG_GizmoLineSlider3D_ *)
              func_?(TypeInfo__System__Collections__Generic__List<RTG::GizmoLineSlider3D>);
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
    List_1_System_Object___ctor_1
              ((List_1_System_Object_ *)this_00,(IEnumerable_1_System_Object_ *)pLVar2,
               MethodInfo__System__Collections__Generic__List<RTG::GizmoLineSlider3D>__List_System__Collections__Generic__IEnumerable<RTG::GizmoLineSlider3D>_
              );
    if (pOVar1->klass != (Object__Class *)0x0) {
      this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)pOVar1->klass,(MethodInfo *)0x0);
      if (this_01 != (Transform *)0x0) {
        pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           (&VStack_4,this_01,(MethodInfo *)0x0);
        pMVar5 = (MonitorData *)pVVar3->z;
        *(undefined8 *)&value[1].monitor = *(undefined8 *)pVVar3;
        value[2].monitor = pMVar5;
        this_02 = (Comparison_1_Object_ *)
                  func_?(TypeInfo__System__Comparison<RTG::GizmoLineSlider3D>);
        mscorlib.dll::System::Comparison`1[Object]::Comparison_1_Object___ctor
                  (this_02,value,
                   MethodInfo__RTG__GizmoLineSlider3DCollection____c__DisplayClass20_0___GetRenderSortedSliders_b__0_RTG__GizmoLineSlider3D__RTG__GizmoLineSlider3D_
                   ,(MethodInfo *)0x0);
        if (this_00 != (List_1_RTG_GizmoLineSlider3D_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__Sort_1
                    ((List_1_System_Object_ *)this_00,this_02,
                     MethodInfo__System__Collections__Generic__List<RTG::GizmoLineSlider3D>__Sort_System__Comparison<RTG::GizmoLineSlider3D>_
                    );
          return this_00;
        }
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  pLVar2 = (List_1_RTG_GizmoLineSlider3D_ *)(*pcVar6)();
  return pLVar2;
}


/* Void Make3DHoverPriorityHigherThan(Priority) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider3DCollection::
     GizmoLineSlider3DCollection_Make3DHoverPriorityHigherThan
               (GizmoLineSlider3DCollection *this,Priority *priority,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffbc;
  puVar5 = &stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GizmoLineSlider3D>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  method_00 = (MethodInfo *)(this->fields)._sliders;
  if (method_00 != (MethodInfo *)0x0) {
    pLVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_7,
                        (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                        method_00,
                        MethodInfo__System__Collections__Generic__List<RTG::GizmoLineSlider3D>__GetEnumerator__
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
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__MoveNext__
                        );
      if (bVar9 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&LStack_8,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__Dispose__
                   ,method_00);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if ((RegexCharClass_SingleRange)LStack_8._current == (RegexCharClass_SingleRange)0x0) break;
      this_00 = GizmoSlider::GizmoSlider_get_HoverPriority3D
                          ((GizmoSlider *)LStack_8._current,(MethodInfo *)0x0);
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

void Assembly-CSharp.dll::RTG::GizmoLineSlider3DCollection::
     GizmoLineSlider3DCollection_Make3DHoverPriorityLowerThan
               (GizmoLineSlider3DCollection *this,Priority *priority,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffbc;
  puVar5 = &stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GizmoLineSlider3D>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  method_00 = (MethodInfo *)(this->fields)._sliders;
  if (method_00 != (MethodInfo *)0x0) {
    pLVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_7,
                        (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                        method_00,
                        MethodInfo__System__Collections__Generic__List<RTG::GizmoLineSlider3D>__GetEnumerator__
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
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__MoveNext__
                        );
      if (bVar9 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&LStack_8,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__Dispose__
                   ,method_00);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if ((RegexCharClass_SingleRange)LStack_8._current == (RegexCharClass_SingleRange)0x0) break;
      this_00 = GizmoSlider::GizmoSlider_get_HoverPriority3D
                          ((GizmoSlider *)LStack_8._current,(MethodInfo *)0x0);
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


/* Void RegisterScalerHandle(Int32, IEnumerable`1[System.Int32]) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider3DCollection::
     GizmoLineSlider3DCollection_RegisterScalerHandle
               (GizmoLineSlider3DCollection *this,int32_t handleId,
               IEnumerable_1_System_Int32_ *scaleDragAxisIndices,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb4;
  puVar5 = &stack0xffffffb4;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GizmoLineSlider3D>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields)._sliders;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    pLVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_7,this_00,
                        MethodInfo__System__Collections__Generic__List<RTG::GizmoLineSlider3D>__GetEnumerator__
                       );
    method_01 = (MethodInfo *)pLVar6->_version;
    RVar8 = pLVar6->_current;
    LStack_7._version = 0;
    uStack_1 = 1;
    LStack_7._current = (RegexCharClass_SingleRange)&stack0xffffffc0;
    while( true ) {
      bVar9 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffc0,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__MoveNext__
                        );
      if (bVar9 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&stack0xffffffc0,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__Dispose__
                   ,method_01);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if (RVar8 == (RegexCharClass_SingleRange)0x0) break;
      if (cRam_? == '\0') {
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      if (cRam_? == '\0') {
        func_?(&
                        MethodInfo__System__Collections__Generic__List<RTG::GizmoScalerHandle>__FindAll_System__Predicate<RTG::GizmoScalerHandle>_
                       );
        func_?(&
                        MethodInfo__System__Collections__Generic__List<RTG::GizmoScalerHandle>__get_Count__
                       );
        func_?(&TypeInfo__System__Predicate<RTG::GizmoScalerHandle>);
        func_?(&
                        MethodInfo__RTG__GizmoLineSlider3D____c__DisplayClass78_0___IsScalerHandleRegistered_b__0_RTG__GizmoScalerHandle_
                       );
        func_?(&TypeInfo__RTG__GizmoLineSlider3D____c__DisplayClass78_0);
        cRam_? = '\x01';
      }
      method_00 = (MethodInfo *)&UNK_?;
      value = (Object *)func_?(TypeInfo__RTG__GizmoLineSlider3D____c__DisplayClass78_0);
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                (value,ExceptionArgument__Enum_obj,method_00);
      if (value == (Object *)0x0) break;
      value[1].klass = (Object__Class *)handleId;
      pLStack_10 = *(List_1_System_Object_ **)((int)RVar8 + 0x4c);
      pPStack_11 = (Predicate_1_Object_ *)
                   func_?(TypeInfo__System__Predicate<RTG::GizmoScalerHandle>);
      mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
                (pPStack_11,value,
                 MethodInfo__RTG__GizmoLineSlider3D____c__DisplayClass78_0___IsScalerHandleRegistered_b__0_RTG__GizmoScalerHandle_
                 ,(MethodInfo *)0x0);
      if (pLStack_10 == (List_1_System_Object_ *)0x0) break;
      pLVar12 = mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
               List_1_System_Object__FindAll
                         (pLStack_10,pPStack_11,
                          MethodInfo__System__Collections__Generic__List<RTG::GizmoScalerHandle>__FindAll_System__Predicate<RTG::GizmoScalerHandle>_
                         );
      if (pLVar12 == (List_1_System_Object_ *)0x0) break;
      if ((pLVar12->fields)._size == 0) {
        pLVar12 = *(List_1_System_Object_ **)((int)RVar8 + 0x4c);
        this_01 = (GizmoScalerHandle *)func_?(TypeInfo__RTG__GizmoScalerHandle);
        GizmoScalerHandle::GizmoScalerHandle__ctor
                  (this_01,handleId,scaleDragAxisIndices,(MethodInfo *)0x0);
        if (pLVar12 == (List_1_System_Object_ *)0x0) break;
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Add
                  (pLVar12,(Object *)this_01,
                   MethodInfo__System__Collections__Generic__List<RTG::GizmoScalerHandle>__Add_RTG__GizmoScalerHandle_
                  );
      }
    }
  }
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void Remove(GizmoLineSlider3D) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider3DCollection::GizmoLineSlider3DCollection_Remove
               (GizmoLineSlider3DCollection *this,GizmoLineSlider3D *slider,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoLineSlider3D>__Remove_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GizmoLineSlider3D>__Remove_RTG__GizmoLineSlider3D_
                   );
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoLineSlider3D>__ContainsKey_int_
                   );
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields)._handleIdToSlider;
  if ((slider != (GizmoLineSlider3D *)0x0) &&
     (iVar2 = mscorlib.dll::System::Threading::SparselyPopulatedArrayFragment`1[System::Object]::
              SparselyPopulatedArrayFragment_1_System_Object__get_Length
                        ((SparselyPopulatedArrayFragment_1_System_Object_ *)slider,(MethodInfo *)0x0
                        ), pDVar1 != (Dictionary_2_System_Int32_RTG_GizmoLineSlider3D_ *)0x0)) {
    bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]::
            Dictionary_2_System_Int32_System_Single__ContainsKey
                      ((Dictionary_2_System_Int32_System_Single_ *)pDVar1,iVar2,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoLineSlider3D>__ContainsKey_int_
                      );
    if (bVar3 == 0) {
      return;
    }
    this_00 = (this->fields)._sliders;
    if (this_00 != (List_1_RTG_GizmoLineSlider3D_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
      List_1_System_Object__Remove
                ((List_1_System_Object_ *)this_00,(Object *)slider,
                 MethodInfo__System__Collections__Generic__List<RTG::GizmoLineSlider3D>__Remove_RTG__GizmoLineSlider3D_
                );
      pDVar1 = (this->fields)._handleIdToSlider;
      iVar2 = mscorlib.dll::System::Threading::SparselyPopulatedArrayFragment`1[System::Object]::
              SparselyPopulatedArrayFragment_1_System_Object__get_Length
                        ((SparselyPopulatedArrayFragment_1_System_Object_ *)slider,(MethodInfo *)0x0
                        );
      if (pDVar1 != (Dictionary_2_System_Int32_RTG_GizmoLineSlider3D_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__Remove
                  ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,iVar2,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoLineSlider3D>__Remove_int_
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


/* Void Set3DCapsVisible(Boolean) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider3DCollection::
     GizmoLineSlider3DCollection_Set3DCapsVisible
               (GizmoLineSlider3DCollection *this,bool visible,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffbc;
  puVar5 = &stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GizmoLineSlider3D>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields)._sliders;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    pLVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_7,this_00,
                        MethodInfo__System__Collections__Generic__List<RTG::GizmoLineSlider3D>__GetEnumerator__
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
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__MoveNext__
                        );
      if (bVar9 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&LStack_8,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__Dispose__
                   ,unaff_EDI);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if (((RegexCharClass_SingleRange)LStack_8._current == (RegexCharClass_SingleRange)0x0) ||
         (*(GizmoCap **)((int)LStack_8._current + 0x54) == (GizmoCap *)0x0)) break;
      GizmoCap::GizmoCap_SetVisible
                (*(GizmoCap **)((int)LStack_8._current + 0x54),visible,(MethodInfo *)0x0);
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void SetDragChannel(GizmoDragChannel) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider3DCollection::
     GizmoLineSlider3DCollection_SetDragChannel
               (GizmoLineSlider3DCollection *this,GizmoDragChannel__Enum dragChannel,
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
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GizmoLineSlider3D>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields)._sliders;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    pLVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_7,this_00,
                        MethodInfo__System__Collections__Generic__List<RTG::GizmoLineSlider3D>__GetEnumerator__
                       );
    method_00 = (MethodInfo *)pLVar6->_version;
    RVar8 = pLVar6->_current;
    LStack_7._version = 0;
    uStack_1 = 1;
    LStack_7._current = (RegexCharClass_SingleRange)&stack0xffffffc8;
    while( true ) {
      bVar9 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffc8,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__MoveNext__
                        );
      if (bVar9 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&stack0xffffffc8,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__Dispose__
                   ,method_00);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if (RVar8 == (RegexCharClass_SingleRange)0x0) break;
      *(GizmoDragChannel__Enum *)((int)RVar8 + 0x34) = dragChannel;
      if (dragChannel == GizmoDragChannel__Enum_Offset) {
        uVar10 = *(undefined4 *)((int)RVar8 + 0x38);
code_?:
        *(undefined4 *)((int)RVar8 + 0x50) = uVar10;
        func_?();
      }
      else {
        if (dragChannel == GizmoDragChannel__Enum_Rotation) {
          uVar10 = *(undefined4 *)((int)RVar8 + 0x3c);
          goto code_?;
        }
        if (dragChannel == GizmoDragChannel__Enum_Scale) {
          uVar10 = *(undefined4 *)((int)RVar8 + 0x44);
          goto code_?;
        }
      }
      uVar10 = *(undefined4 *)((int)RVar8 + 0x50);
      if (*(int *)((int)RVar8 + 8) == 0) break;
      puVar11 = (undefined4 *)(*(int *)((int)RVar8 + 8) + 0x2c);
      *puVar11 = uVar10;
      func_?(puVar11,uVar10);
      if (*(GizmoCap3D **)((int)RVar8 + 0x54) == (GizmoCap3D *)0x0) break;
      GizmoCap3D::GizmoCap3D_set_DragSession
                (*(GizmoCap3D **)((int)RVar8 + 0x54),*(IGizmoDragSession **)((int)RVar8 + 0x50),
                 (MethodInfo *)0x0);
    }
  }
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void SetSnapEnabled(Boolean) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider3DCollection::
     GizmoLineSlider3DCollection_SetSnapEnabled
               (GizmoLineSlider3DCollection *this,bool isEnabled,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffbc;
  puVar5 = &stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GizmoLineSlider3D>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields)._sliders;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    pLVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_7,this_00,
                        MethodInfo__System__Collections__Generic__List<RTG::GizmoLineSlider3D>__GetEnumerator__
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
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__MoveNext__
                        );
      if (bVar9 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&LStack_8,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__Dispose__
                   ,unaff_EDI);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if ((RegexCharClass_SingleRange)LStack_8._current == (RegexCharClass_SingleRange)0x0) break;
      (**(code **)(*(int *)LStack_8._current + 0x128))
                (LStack_8._current,_isEnabled,*(undefined4 *)(*(int *)LStack_8._current + 300));
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void SetVisible(Boolean) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider3DCollection::GizmoLineSlider3DCollection_SetVisible
               (GizmoLineSlider3DCollection *this,bool visible,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffbc;
  puVar5 = &stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GizmoLineSlider3D>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields)._sliders;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    pLVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_7,this_00,
                        MethodInfo__System__Collections__Generic__List<RTG::GizmoLineSlider3D>__GetEnumerator__
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
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__MoveNext__
                        );
      if (bVar9 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&LStack_8,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__Dispose__
                   ,unaff_EDI);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if ((RegexCharClass_SingleRange)LStack_8._current == (RegexCharClass_SingleRange)0x0) break;
      GizmoSlider::GizmoSlider_SetVisible
                ((GizmoSlider *)LStack_8._current,visible,(MethodInfo *)0x0);
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void SetZoomFactorTransform(GizmoTransform) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider3DCollection::
     GizmoLineSlider3DCollection_SetZoomFactorTransform
               (GizmoLineSlider3DCollection *this,GizmoTransform *zoomFactorTransform,
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
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GizmoLineSlider3D>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields)._sliders;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    pLVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_7,this_00,
                        MethodInfo__System__Collections__Generic__List<RTG::GizmoLineSlider3D>__GetEnumerator__
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
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__MoveNext__
                        );
      if (bVar9 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&LStack_8,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__Dispose__
                   ,unaff_EDI);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if (((RegexCharClass_SingleRange)LStack_8._current == (RegexCharClass_SingleRange)0x0) ||
         (*(GizmoHandle **)((int)LStack_8._current + 8) == (GizmoHandle *)0x0)) break;
      GizmoHandle::GizmoHandle_SetZoomFactorTransform
                (*(GizmoHandle **)((int)LStack_8._current + 8),zoomFactorTransform,
                 (MethodInfo *)0x0);
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* GizmoLineSlider3DCollection() */

void Assembly-CSharp.dll::RTG::GizmoLineSlider3DCollection::GizmoLineSlider3DCollection__ctor
               (GizmoLineSlider3DCollection *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoLineSlider3D>__Dictionary__
                   );
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoLineSlider3D>
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<RTG::GizmoLineSlider3D>__List__)
    ;
    func_?(&TypeInfo__System__Collections__Generic__List<RTG::GizmoLineSlider3D>);
    cRam_? = '\x01';
  }
  this_00 = (List_1_RTG_GizmoLineSlider3D_ *)
            func_?(TypeInfo__System__Collections__Generic__List<RTG::GizmoLineSlider3D>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<RTG::GizmoLineSlider3D>__List__);
  (this->fields)._sliders = this_00;
  func_?(&this->fields,this_00);
  this_01 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )func_?(
                            TypeInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoLineSlider3D>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoLineSlider3D>__Dictionary__
            );
  method_00 = (MethodInfo *)&(this->fields)._handleIdToSlider;
  *(Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ **)
   method_00 = this_01;
  func_?(method_00,this_01);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}


/* Int32 get_Count() */

int32_t Assembly-CSharp.dll::RTG::GizmoLineSlider3DCollection::GizmoLineSlider3DCollection_get_Count
                  (GizmoLineSlider3DCollection *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppMStack_1 = &
                 MethodInfo__System__Collections__Generic__List<RTG::GizmoLineSlider3D>__get_Count__
    ;
    func_?();
    cRam_? = '\x01';
  }
  pLVar2 = (this->fields)._sliders;
  if (pLVar2 != (List_1_RTG_GizmoLineSlider3D_ *)0x0) {
    return (pLVar2->fields)._size;
  }
  ppMStack_1 = (MethodInfo **)&stack0xfffffffc;
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  iVar6 = (*pcVar5)();
  return iVar6;
}


/* GizmoLineSlider3D get_Item(Int32) */

GizmoLineSlider3D *
Assembly-CSharp.dll::RTG::GizmoLineSlider3DCollection::GizmoLineSlider3DCollection_get_Item
          (GizmoLineSlider3DCollection *this,int32_t id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._handleIdToSlider;
  if (this_00 != (Dictionary_2_System_Int32_RTG_GizmoLineSlider3D_ *)0x0) {
    pGVar1 = (GizmoLineSlider3D *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
             ::Dictionary_2_System_Int32_System_Object__get_Item
                       ((Dictionary_2_System_Int32_System_Object_ *)this_00,id,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoLineSlider3D>__get_Item_int_
                       );
    return pGVar1;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  pGVar1 = (GizmoLineSlider3D *)(*pcVar3)();
  return pGVar1;
}

