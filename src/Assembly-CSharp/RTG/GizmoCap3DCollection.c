
/* Void Add(GizmoCap3D) */

void Assembly-CSharp.dll::RTG::GizmoCap3DCollection::GizmoCap3DCollection_Add
               (GizmoCap3DCollection *this,GizmoCap3D *cap,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoCap3D>__Add_int__RTG__GizmoCap3D_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GizmoCap3D>__Add_RTG__GizmoCap3D_
                   );
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoCap3D>__ContainsKey_int_
                   );
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields)._handleIdToCap;
  if ((cap != (GizmoCap3D *)0x0) &&
     (pvVar2 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::
               AndroidJavaObject__GetRawClass((AndroidJavaObject *)cap,(MethodInfo *)0x0),
     pDVar1 != (Dictionary_2_System_Int32_RTG_GizmoCap3D_ *)0x0)) {
    bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]::
            Dictionary_2_System_Int32_System_Single__ContainsKey
                      ((Dictionary_2_System_Int32_System_Single_ *)pDVar1,(int32_t)pvVar2,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoCap3D>__ContainsKey_int_
                      );
    if (bVar3 != 0) {
      return;
    }
    this_00 = (this->fields)._caps;
    if (this_00 != (List_1_RTG_GizmoCap3D_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                ((List_1_System_Object_ *)this_00,(Object *)cap,
                 MethodInfo__System__Collections__Generic__List<RTG::GizmoCap3D>__Add_RTG__GizmoCap3D_
                );
      pDVar1 = (this->fields)._handleIdToCap;
      pvVar2 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::
               AndroidJavaObject__GetRawClass((AndroidJavaObject *)cap,(MethodInfo *)0x0);
      if (pDVar1 != (Dictionary_2_System_Int32_RTG_GizmoCap3D_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__Add
                  ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,(int32_t)pvVar2,(Object *)cap,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoCap3D>__Add_int__RTG__GizmoCap3D_
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

void Assembly-CSharp.dll::RTG::GizmoCap3DCollection::GizmoCap3DCollection_ApplyZoomFactor
               (GizmoCap3DCollection *this,Camera *camera,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb8;
  puVar5 = &stack0xffffffb8;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoCap3D>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoCap3D>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoCap3D>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GizmoCap3D>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields)._caps;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    pLVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_7,this_00,
                        MethodInfo__System__Collections__Generic__List<RTG::GizmoCap3D>__GetEnumerator__
                       );
    LStack_8._list = (List_1_System_Object_ *)pLVar6->_list;
    LStack_8._index = pLVar6->_index;
    LStack_8._version = pLVar6->_version;
    LStack_8._current = *(Object **)&pLVar6->_current;
    LStack_7._version = 0;
    uStack_1 = 1;
    LStack_7._current = (RegexCharClass_SingleRange)&LStack_8;
    while( true ) {
      do {
        bVar9 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          (&LStack_8,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoCap3D>__MoveNext__
                          );
        pOVar10 = LStack_8._current;
        if (bVar9 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&LStack_8,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoCap3D>__Dispose__
                     ,unaff_EBX);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        if ((RegexCharClass_SingleRange)LStack_8._current == (RegexCharClass_SingleRange)0x0)
        goto code_?;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        iVar11 = *(int *)((int)pOVar10 + 0x50);
        iVar12 = iVar11;
        if ((iVar11 == 0) &&
           (iVar12 = *(int *)((int)pOVar10 + 0x4c), *(int *)((int)pOVar10 + 0x4c) == 0))
        goto code_?;
      } while (*(char *)(iVar12 + 0x18) == '\0');
      iVar12 = *(int *)((int)pOVar10 + 0x40);
      iVar13 = iVar11;
      if (((iVar11 == 0) && (iVar13 = *(int *)((int)pOVar10 + 0x4c), *(int *)((int)pOVar10 + 0x4c) == 0)
          ) || (iVar12 == 0)) goto code_?;
      if (*(uint *)(iVar12 + 0xc) <= *(uint *)(iVar13 + 8)) break;
      iStack_14 = *(int *)(iVar12 + 0x10 + *(uint *)(iVar13 + 8) * 4);
      if ((iVar11 == 0) && (iVar11 = *(int *)((int)pOVar10 + 0x4c), iVar11 == 0)) goto code_?;
      fVar15 = _UNK_?;
      if (*(char *)(iVar11 + 0x18) != '\0') {
        if (*(GizmoHandle **)((int)pOVar10 + 0xc) == (GizmoHandle *)0x0) goto code_?;
        fVar15 = GizmoHandle::GizmoHandle_GetZoomFactor
                          (*(GizmoHandle **)((int)pOVar10 + 0xc),camera,(MethodInfo *)0x0);
      }
      if (iStack_14 == 0) goto code_?;
      func_?(1,TypeInfo__RTG__IGizmoCap3DController,iStack_14,fVar15);
    }
    func_?();
  }
code_?:
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Boolean Contains(GizmoCap3D) */

bool Assembly-CSharp.dll::RTG::GizmoCap3DCollection::GizmoCap3DCollection_Contains
               (GizmoCap3DCollection *this,GizmoCap3D *cap,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoCap3D>__ContainsKey_int_
                   );
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._handleIdToCap;
  if (cap != (GizmoCap3D *)0x0) {
    key = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::
          AndroidJavaObject__GetRawClass((AndroidJavaObject *)cap,(MethodInfo *)0x0);
    if (this_00 != (Dictionary_2_System_Int32_RTG_GizmoCap3D_ *)0x0) {
      bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]
              ::Dictionary_2_System_Int32_System_Single__ContainsKey
                        ((Dictionary_2_System_Int32_System_Single_ *)this_00,(int32_t)key,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoCap3D>__ContainsKey_int_
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

bool Assembly-CSharp.dll::RTG::GizmoCap3DCollection::GizmoCap3DCollection_Contains_1
               (GizmoCap3DCollection *this,int32_t capHandleId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._handleIdToCap;
  if (this_00 != (Dictionary_2_System_Int32_RTG_GizmoCap3D_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]::
            Dictionary_2_System_Int32_System_Single__ContainsKey
                      ((Dictionary_2_System_Int32_System_Single_ *)this_00,capHandleId,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoCap3D>__ContainsKey_int_
                      );
    return bVar1;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  bVar1 = (*pcVar3)();
  return bVar1;
}


/* List`1[RTG.GizmoCap3D] GetRenderSortedCaps(Camera) */

List_1_RTG_GizmoCap3D_ *
Assembly-CSharp.dll::RTG::GizmoCap3DCollection::GizmoCap3DCollection_GetRenderSortedCaps
          (GizmoCap3DCollection *this,Camera *renderCamera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Comparison<RTG::GizmoCap3D>);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GizmoCap3D>__Sort_System__Comparison<RTG::GizmoCap3D>_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GizmoCap3D>__List_System__Collections__Generic__IEnumerable<RTG::GizmoCap3D>_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<RTG::GizmoCap3D>);
    func_?(&
                    MethodInfo__RTG__GizmoCap3DCollection____c__DisplayClass15_0___GetRenderSortedCaps_b__0_RTG__GizmoCap3D__RTG__GizmoCap3D_
                   );
    func_?(&TypeInfo__RTG__GizmoCap3DCollection____c__DisplayClass15_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__RTG__GizmoCap3DCollection____c__DisplayClass15_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  pLVar1 = (this->fields)._caps;
  this_00 = (List_1_RTG_GizmoCap3D_ *)
            func_?(TypeInfo__System__Collections__Generic__List<RTG::GizmoCap3D>);
  mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object___ctor_1
            ((List_1_System_Object_ *)this_00,(IEnumerable_1_System_Object_ *)pLVar1,
             MethodInfo__System__Collections__Generic__List<RTG::GizmoCap3D>__List_System__Collections__Generic__IEnumerable<RTG::GizmoCap3D>_
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
                   MethodInfo__RTG__GizmoCap3DCollection____c__DisplayClass15_0___GetRenderSortedCaps_b__0_RTG__GizmoCap3D__RTG__GizmoCap3D_
                   ,(MethodInfo *)0x0);
        if (this_00 != (List_1_RTG_GizmoCap3D_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__Sort_1
                    ((List_1_System_Object_ *)this_00,this_02,
                     MethodInfo__System__Collections__Generic__List<RTG::GizmoCap3D>__Sort_System__Comparison<RTG::GizmoCap3D>_
                    );
          return this_00;
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pLVar1 = (List_1_RTG_GizmoCap3D_ *)(*pcVar5)();
  return pLVar1;
}


/* Void Make3DHoverPriorityHigherThan(Priority) */

void Assembly-CSharp.dll::RTG::GizmoCap3DCollection::
     GizmoCap3DCollection_Make3DHoverPriorityHigherThan
               (GizmoCap3DCollection *this,Priority *priority,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffbc;
  puVar5 = &stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoCap3D>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoCap3D>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoCap3D>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GizmoCap3D>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  method_00 = (MethodInfo *)(this->fields)._caps;
  if (method_00 != (MethodInfo *)0x0) {
    pLVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_7,
                        (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                        method_00,
                        MethodInfo__System__Collections__Generic__List<RTG::GizmoCap3D>__GetEnumerator__
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
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoCap3D>__MoveNext__
                        );
      if (bVar9 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&LStack_8,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoCap3D>__Dispose__
                   ,method_00);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if ((RegexCharClass_SingleRange)LStack_8._current == (RegexCharClass_SingleRange)0x0) break;
      this_00 = Newtonsoft.Json.dll::Newtonsoft::Json::Converters::XDocumentTypeWrapper::
                XDocumentTypeWrapper_get_InternalSubset
                          ((XDocumentTypeWrapper *)LStack_8._current,(MethodInfo *)0x0);
      if (this_00 == (String *)0x0) break;
      method_00 = (MethodInfo *)priority;
      Priority::Priority_MakeHigherThan((Priority *)this_00,priority,(MethodInfo *)0x0);
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void Make3DHoverPriorityLowerThan(Priority) */

void Assembly-CSharp.dll::RTG::GizmoCap3DCollection::
     GizmoCap3DCollection_Make3DHoverPriorityLowerThan
               (GizmoCap3DCollection *this,Priority *priority,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffbc;
  puVar5 = &stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoCap3D>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoCap3D>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoCap3D>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GizmoCap3D>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  method_00 = (MethodInfo *)(this->fields)._caps;
  if (method_00 != (MethodInfo *)0x0) {
    pLVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_7,
                        (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                        method_00,
                        MethodInfo__System__Collections__Generic__List<RTG::GizmoCap3D>__GetEnumerator__
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
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoCap3D>__MoveNext__
                        );
      if (bVar9 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&LStack_8,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoCap3D>__Dispose__
                   ,method_00);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if ((RegexCharClass_SingleRange)LStack_8._current == (RegexCharClass_SingleRange)0x0) break;
      this_00 = Newtonsoft.Json.dll::Newtonsoft::Json::Converters::XDocumentTypeWrapper::
                XDocumentTypeWrapper_get_InternalSubset
                          ((XDocumentTypeWrapper *)LStack_8._current,(MethodInfo *)0x0);
      if (this_00 == (String *)0x0) break;
      method_00 = (MethodInfo *)priority;
      Priority::Priority_MakeLowerThan((Priority *)this_00,priority,(MethodInfo *)0x0);
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void Remove(GizmoCap3D) */

void Assembly-CSharp.dll::RTG::GizmoCap3DCollection::GizmoCap3DCollection_Remove
               (GizmoCap3DCollection *this,GizmoCap3D *cap,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoCap3D>__Remove_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GizmoCap3D>__Remove_RTG__GizmoCap3D_
                   );
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoCap3D>__ContainsKey_int_
                   );
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields)._handleIdToCap;
  if ((cap != (GizmoCap3D *)0x0) &&
     (pvVar2 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::
               AndroidJavaObject__GetRawClass((AndroidJavaObject *)cap,(MethodInfo *)0x0),
     pDVar1 != (Dictionary_2_System_Int32_RTG_GizmoCap3D_ *)0x0)) {
    bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]::
            Dictionary_2_System_Int32_System_Single__ContainsKey
                      ((Dictionary_2_System_Int32_System_Single_ *)pDVar1,(int32_t)pvVar2,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoCap3D>__ContainsKey_int_
                      );
    if (bVar3 == 0) {
      return;
    }
    this_00 = (this->fields)._caps;
    if (this_00 != (List_1_RTG_GizmoCap3D_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
      List_1_System_Object__Remove
                ((List_1_System_Object_ *)this_00,(Object *)cap,
                 MethodInfo__System__Collections__Generic__List<RTG::GizmoCap3D>__Remove_RTG__GizmoCap3D_
                );
      pDVar1 = (this->fields)._handleIdToCap;
      pvVar2 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::
               AndroidJavaObject__GetRawClass((AndroidJavaObject *)cap,(MethodInfo *)0x0);
      if (pDVar1 != (Dictionary_2_System_Int32_RTG_GizmoCap3D_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__Remove
                  ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,(int32_t)pvVar2,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoCap3D>__Remove_int_
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


/* Void SetVisible(Boolean) */

void Assembly-CSharp.dll::RTG::GizmoCap3DCollection::GizmoCap3DCollection_SetVisible
               (GizmoCap3DCollection *this,bool visible,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffbc;
  puVar5 = &stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoCap3D>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoCap3D>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoCap3D>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GizmoCap3D>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields)._caps;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    pLVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_7,this_00,
                        MethodInfo__System__Collections__Generic__List<RTG::GizmoCap3D>__GetEnumerator__
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
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoCap3D>__MoveNext__
                        );
      if (bVar9 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&LStack_8,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoCap3D>__Dispose__
                   ,unaff_EDI);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if ((RegexCharClass_SingleRange)LStack_8._current == (RegexCharClass_SingleRange)0x0) break;
      GizmoCap::GizmoCap_SetVisible((GizmoCap *)LStack_8._current,visible,(MethodInfo *)0x0);
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void SetZoomFactorTransform(GizmoTransform) */

void Assembly-CSharp.dll::RTG::GizmoCap3DCollection::GizmoCap3DCollection_SetZoomFactorTransform
               (GizmoCap3DCollection *this,GizmoTransform *zoomFactorTransform,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffbc;
  puVar5 = &stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoCap3D>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoCap3D>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoCap3D>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GizmoCap3D>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields)._caps;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    pLVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_7,this_00,
                        MethodInfo__System__Collections__Generic__List<RTG::GizmoCap3D>__GetEnumerator__
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
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoCap3D>__MoveNext__
                        );
      if (bVar9 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&LStack_8,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoCap3D>__Dispose__
                   ,unaff_EDI);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if (((RegexCharClass_SingleRange)LStack_8._current == (RegexCharClass_SingleRange)0x0) ||
         (*(GizmoHandle **)((int)LStack_8._current + 0xc) == (GizmoHandle *)0x0)) break;
      GizmoHandle::GizmoHandle_SetZoomFactorTransform
                (*(GizmoHandle **)((int)LStack_8._current + 0xc),zoomFactorTransform,
                 (MethodInfo *)0x0);
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* GizmoCap3DCollection() */

void Assembly-CSharp.dll::RTG::GizmoCap3DCollection::GizmoCap3DCollection__ctor
               (GizmoCap3DCollection *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoCap3D>__Dictionary__
                   );
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoCap3D>);
    func_?(&MethodInfo__System__Collections__Generic__List<RTG::GizmoCap3D>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<RTG::GizmoCap3D>);
    cRam_? = '\x01';
  }
  this_00 = (List_1_RTG_GizmoCap3D_ *)
            func_?(TypeInfo__System__Collections__Generic__List<RTG::GizmoCap3D>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<RTG::GizmoCap3D>__List__);
  (this->fields)._caps = this_00;
  func_?(&this->fields,this_00);
  this_01 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )func_?(
                            TypeInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoCap3D>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoCap3D>__Dictionary__
            );
  method_00 = (MethodInfo *)&(this->fields)._handleIdToCap;
  *(Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ **)
   method_00 = this_01;
  func_?(method_00,this_01);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}


/* Int32 get_Count() */

int32_t Assembly-CSharp.dll::RTG::GizmoCap3DCollection::GizmoCap3DCollection_get_Count
                  (GizmoCap3DCollection *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppMStack_1 = &MethodInfo__System__Collections__Generic__List<RTG::GizmoCap3D>__get_Count__;
    func_?();
    cRam_? = '\x01';
  }
  pLVar2 = (this->fields)._caps;
  if (pLVar2 != (List_1_RTG_GizmoCap3D_ *)0x0) {
    return (pLVar2->fields)._size;
  }
  ppMStack_1 = (MethodInfo **)&stack0xfffffffc;
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  iVar6 = (*pcVar5)();
  return iVar6;
}


/* GizmoCap3D get_Item(Int32) */

GizmoCap3D *
Assembly-CSharp.dll::RTG::GizmoCap3DCollection::GizmoCap3DCollection_get_Item
          (GizmoCap3DCollection *this,int32_t id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._handleIdToCap;
  if (this_00 != (Dictionary_2_System_Int32_RTG_GizmoCap3D_ *)0x0) {
    pGVar1 = (GizmoCap3D *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
             ::Dictionary_2_System_Int32_System_Object__get_Item
                       ((Dictionary_2_System_Int32_System_Object_ *)this_00,id,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::GizmoCap3D>__get_Item_int_
                       );
    return pGVar1;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  pGVar1 = (GizmoCap3D *)(*pcVar3)();
  return pGVar1;
}

