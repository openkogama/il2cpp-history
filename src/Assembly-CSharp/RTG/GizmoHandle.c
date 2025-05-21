
/* Int32 Add2DShape(Shape2D) */

int32_t Assembly-CSharp.dll::RTG::GizmoHandle::GizmoHandle_Add2DShape
                  (GizmoHandle *this,Shape2D *shape,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GizmoHandleShape2D);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape2D>__Add_RTG__GizmoHandleShape2D_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape2D>__get_Count__
                   );
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape2D>__FindAll_System__Predicate<RTG::GizmoHandleShape2D>_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape2D>__get_Count__
                   );
    func_?(&TypeInfo__System__Predicate<RTG::GizmoHandleShape2D>);
    func_?(&
                    MethodInfo__RTG__GizmoHandle____c__DisplayClass63_0___Contains2DShape_b__0_RTG__GizmoHandleShape2D_
                   );
    func_?(&TypeInfo__RTG__GizmoHandle____c__DisplayClass63_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__RTG__GizmoHandle____c__DisplayClass63_0;
  pOVar1 = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (pOVar1,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (pOVar1 != (Object *)0x0) {
    pOVar1[1].klass = (Object__Class *)shape;
    func_?(pOVar1 + 1,shape);
    pLVar2 = (this->fields)._2DShapes;
    this_00 = (Predicate_1_Object_ *)
              func_?(TypeInfo__System__Predicate<RTG::GizmoHandleShape2D>);
    mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
              (this_00,pOVar1,
               MethodInfo__RTG__GizmoHandle____c__DisplayClass63_0___Contains2DShape_b__0_RTG__GizmoHandleShape2D_
               ,(MethodInfo *)0x0);
    if (pLVar2 != (List_1_RTG_GizmoHandleShape2D_ *)0x0) {
      pLVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
               List_1_System_Object__FindAll
                         ((List_1_System_Object_ *)pLVar2,this_00,
                          MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape2D>__FindAll_System__Predicate<RTG::GizmoHandleShape2D>_
                         );
      if (pLVar3 != (List_1_System_Object_ *)0x0) {
        if ((pLVar3->fields)._size != 0) {
          return -1;
        }
        method_01 = TypeInfo__RTG__GizmoHandleShape2D;
        pOVar1 = (Object *)func_?();
        *(undefined2 *)&pOVar1[1].klass = 0x101;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  (pOVar1,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
        pOVar1[1].monitor = (MonitorData *)shape;
        func_?(&pOVar1[1].monitor,shape);
        pLVar2 = (this->fields)._2DShapes;
        if (pLVar2 != (List_1_RTG_GizmoHandleShape2D_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__Add
                    ((List_1_System_Object_ *)pLVar2,pOVar1,
                     MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape2D>__Add_RTG__GizmoHandleShape2D_
                    );
          pLVar2 = (this->fields)._2DShapes;
          if (pLVar2 != (List_1_RTG_GizmoHandleShape2D_ *)0x0) {
            return (pLVar2->fields)._size + -1;
          }
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  iVar5 = (*pcVar4)();
  return iVar5;
}


/* Int32 Add3DShape(Shape3D) */

int32_t Assembly-CSharp.dll::RTG::GizmoHandle::GizmoHandle_Add3DShape
                  (GizmoHandle *this,Shape3D *shape,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GizmoHandleShape3D);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape3D>__Add_RTG__GizmoHandleShape3D_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape3D>__get_Count__
                   );
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape3D>__FindAll_System__Predicate<RTG::GizmoHandleShape3D>_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape3D>__get_Count__
                   );
    func_?(&TypeInfo__System__Predicate<RTG::GizmoHandleShape3D>);
    func_?(&
                    MethodInfo__RTG__GizmoHandle____c__DisplayClass62_0___Contains3DShape_b__0_RTG__GizmoHandleShape3D_
                   );
    func_?(&TypeInfo__RTG__GizmoHandle____c__DisplayClass62_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__RTG__GizmoHandle____c__DisplayClass62_0;
  pOVar1 = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (pOVar1,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (pOVar1 != (Object *)0x0) {
    pOVar1[1].klass = (Object__Class *)shape;
    func_?(pOVar1 + 1,shape);
    pLVar2 = (this->fields)._3DShapes;
    this_00 = (Predicate_1_Object_ *)
              func_?(TypeInfo__System__Predicate<RTG::GizmoHandleShape3D>);
    mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
              (this_00,pOVar1,
               MethodInfo__RTG__GizmoHandle____c__DisplayClass62_0___Contains3DShape_b__0_RTG__GizmoHandleShape3D_
               ,(MethodInfo *)0x0);
    if (pLVar2 != (List_1_RTG_GizmoHandleShape3D_ *)0x0) {
      pLVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
               List_1_System_Object__FindAll
                         ((List_1_System_Object_ *)pLVar2,this_00,
                          MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape3D>__FindAll_System__Predicate<RTG::GizmoHandleShape3D>_
                         );
      if (pLVar3 != (List_1_System_Object_ *)0x0) {
        if ((pLVar3->fields)._size != 0) {
          return -1;
        }
        method_01 = TypeInfo__RTG__GizmoHandleShape3D;
        pOVar1 = (Object *)func_?();
        *(undefined2 *)&pOVar1[1].klass = 0x101;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  (pOVar1,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
        pOVar1[1].monitor = (MonitorData *)shape;
        func_?(&pOVar1[1].monitor,shape);
        pLVar2 = (this->fields)._3DShapes;
        if (pLVar2 != (List_1_RTG_GizmoHandleShape3D_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__Add
                    ((List_1_System_Object_ *)pLVar2,pOVar1,
                     MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape3D>__Add_RTG__GizmoHandleShape3D_
                    );
          pLVar2 = (this->fields)._3DShapes;
          if (pLVar2 != (List_1_RTG_GizmoHandleShape3D_ *)0x0) {
            return (pLVar2->fields)._size + -1;
          }
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  iVar5 = (*pcVar4)();
  return iVar5;
}


/* Boolean Contains2DShape(Shape2D) */

bool Assembly-CSharp.dll::RTG::GizmoHandle::GizmoHandle_Contains2DShape
               (GizmoHandle *this,Shape2D *shape,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape2D>__FindAll_System__Predicate<RTG::GizmoHandleShape2D>_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape2D>__get_Count__
                   );
    func_?(&TypeInfo__System__Predicate<RTG::GizmoHandleShape2D>);
    func_?(&
                    MethodInfo__RTG__GizmoHandle____c__DisplayClass63_0___Contains2DShape_b__0_RTG__GizmoHandleShape2D_
                   );
    func_?(&TypeInfo__RTG__GizmoHandle____c__DisplayClass63_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__RTG__GizmoHandle____c__DisplayClass63_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
    value[1].klass = (Object__Class *)shape;
    func_?(value + 1,shape);
    this_00 = (this->fields)._2DShapes;
    this_01 = (Predicate_1_Object_ *)
              func_?(TypeInfo__System__Predicate<RTG::GizmoHandleShape2D>);
    mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
              (this_01,value,
               MethodInfo__RTG__GizmoHandle____c__DisplayClass63_0___Contains2DShape_b__0_RTG__GizmoHandleShape2D_
               ,(MethodInfo *)0x0);
    if (this_00 != (List_1_RTG_GizmoHandleShape2D_ *)0x0) {
      pLVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
               List_1_System_Object__FindAll
                         ((List_1_System_Object_ *)this_00,this_01,
                          MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape2D>__FindAll_System__Predicate<RTG::GizmoHandleShape2D>_
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


/* Boolean Contains3DShape(Shape3D) */

bool Assembly-CSharp.dll::RTG::GizmoHandle::GizmoHandle_Contains3DShape
               (GizmoHandle *this,Shape3D *shape,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape3D>__FindAll_System__Predicate<RTG::GizmoHandleShape3D>_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape3D>__get_Count__
                   );
    func_?(&TypeInfo__System__Predicate<RTG::GizmoHandleShape3D>);
    func_?(&
                    MethodInfo__RTG__GizmoHandle____c__DisplayClass62_0___Contains3DShape_b__0_RTG__GizmoHandleShape3D_
                   );
    func_?(&TypeInfo__RTG__GizmoHandle____c__DisplayClass62_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__RTG__GizmoHandle____c__DisplayClass62_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
    value[1].klass = (Object__Class *)shape;
    func_?(value + 1,shape);
    this_00 = (this->fields)._3DShapes;
    this_01 = (Predicate_1_Object_ *)
              func_?(TypeInfo__System__Predicate<RTG::GizmoHandleShape3D>);
    mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
              (this_01,value,
               MethodInfo__RTG__GizmoHandle____c__DisplayClass62_0___Contains3DShape_b__0_RTG__GizmoHandleShape3D_
               ,(MethodInfo *)0x0);
    if (this_00 != (List_1_RTG_GizmoHandleShape3D_ *)0x0) {
      pLVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
               List_1_System_Object__FindAll
                         ((List_1_System_Object_ *)this_00,this_01,
                          MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape3D>__FindAll_System__Predicate<RTG::GizmoHandleShape3D>_
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


/* Shape2D Get2DShape(Int32) */

Shape2D * Assembly-CSharp.dll::RTG::GizmoHandle::GizmoHandle_Get2DShape
                    (GizmoHandle *this,int32_t shapeIndex,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields)._2DShapes;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    RVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                      (this_00,shapeIndex,
                       MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape2D>__get_Item_int_
                      );
    if (RVar1 != (RegexCharClass_SingleRange)0x0) {
      return *(Shape2D **)((int)RVar1 + 0xc);
    }
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  pSVar4 = (Shape2D *)(*pcVar3)();
  return pSVar4;
}


/* Shape3D Get3DShape(Int32) */

Shape3D * Assembly-CSharp.dll::RTG::GizmoHandle::GizmoHandle_Get3DShape
                    (GizmoHandle *this,int32_t shapeIndex,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields)._3DShapes;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    RVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                      (this_00,shapeIndex,
                       MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape3D>__get_Item_int_
                      );
    if (RVar1 != (RegexCharClass_SingleRange)0x0) {
      return *(Shape3D **)((int)RVar1 + 0xc);
    }
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  pSVar4 = (Shape3D *)(*pcVar3)();
  return pSVar4;
}


/* GizmoHandleHoverData GetHoverData(Ray) */

GizmoHandleHoverData *
Assembly-CSharp.dll::RTG::GizmoHandle::GizmoHandle_GetHoverData
          (GizmoHandle *this,Ray hoverRay,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pMVar2 = (MethodInfo *)&stack0xfffffffc;
  uStack_3 = 0xffffffff;
  puStack_4 = &DAT_?;
  uStack_5 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_5;
  puStack_6 = &stack0xffffff20;
  pMVar7 = (MethodInfo *)&stack0xfffffffc;
  puVar8 = &stack0xfffffffc;
  puVar9 = &stack0xffffff20;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoHandleShape2D>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoHandleShape3D>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoHandleShape3D>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoHandleShape2D>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoHandleShape2D>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoHandleShape3D>__get_Current__
                   );
    func_?(&TypeInfo__RTG__GizmoHandleHoverData);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape3D>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape2D>__GetEnumerator__
                   );
    func_?(&TypeInfo__RTG__YesNoAnswer);
    cRam_? = '\x01';
    pMVar7 = pMVar2;
    puVar8 = puStack_1;
    puVar9 = puStack_6;
  }
  puStack_6 = puVar9;
  puStack_1 = puVar8;
  auStack_10._16_4_ = (Il2CppClass *)0x0;
  pIStack_11 = (Il2CppType *)0x0;
  ppIStack_12 = (Il2CppType **)0x0;
  _Stack_94.rgctx_data = (Il2CppRGCTXData *)0x0;
  pUStack_13 = (UxmlObjectListAttributeDescription_1_System_Object_ *)0x0;
  auStack_10._0_4_ = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0;
  auStack_10._4_4_ = (Il2CppMethodPointer)0x0;
  auStack_10._8_4_ = (InvokerMethod)0x0;
  auStack_10._12_2_ = 0;
  auStack_10._14_2_ = 0;
  pUStack_14 = _UNK_?;
  pUStack_15 = _UNK_?;
  uVar16 = hoverRay.m_Direction._4_8_;
  if (((this->fields)._Is2DHoverable_k__BackingField != 0) &&
     ((this->fields)._Is2DVisible_k__BackingField != 0)) {
    pGVar17 = (this->fields)._gizmo;
    if ((pGVar17 == (Gizmo *)0x0) ||
       (this_00 = Gizmo::Gizmo_GetWorkCamera(pGVar17,(MethodInfo *)0x0), this_00 == (Camera *)0x0))
    goto code_?;
    pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_WorldToScreenPoint_1
                        ((Vector3 *)&LStack_19,this_00,hoverRay.m_Origin,(MethodInfo *)0x0);
    VStack_20.x = pVVar18->x;
    VStack_20.y = pVVar18->y;
    VStack_20.z = pVVar18->z;
    pLVar21 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
             (this->fields)._2DShapes;
    fStack_22 = VStack_20.x;
    fStack_23 = 0.0;
    fStack_24 = 0.0;
    fStack_25 = 0.0;
    fStack_26 = VStack_20.x;
    pUStack_27 = (UxmlObjectListAttributeDescription_1_System_Object_ *)VStack_20.y;
    pUStack_28 = (UxmlObjectListAttributeDescription_1_System_Object_ *)VStack_20.y;
    _Stack_38.rgctx_data = (Il2CppRGCTXData *)0x0;
    if (pLVar21 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
    goto code_?;
    pLVar29 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                        (&LStack_19,pLVar21,
                         MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape2D>__GetEnumerator__
                        );
    unaff_EDI = (MethodInfo *)(auStack_10 + 0x10);
    uStack_30 = 0;
    auStack_10._16_4_ = pLVar29->_list;
    pIStack_11 = (Il2CppType *)pLVar29->_index;
    ppIStack_12 = (Il2CppType **)pLVar29->_version;
    _Stack_94 = (_union_154)*(_union_154 *)&pLVar29->_current;
    uStack_3 = 1;
    pMStack_31 = unaff_EDI;
    while( true ) {
      pMVar2 = (MethodInfo *)(auStack_10 + 0x10);
      bVar32 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
               List_1_T_Enumerator_System_Object__MoveNext
                         ((List_1_T_Enumerator_System_Object_ *)pMVar2,
                          MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoHandleShape2D>__MoveNext__
                         );
      _Var2 = _Stack_94;
      if (bVar32 == 0) break;
      if ((RegexCharClass_SingleRange)_Stack_94.rgctx_data == (RegexCharClass_SingleRange)0x0)
      goto code_?;
      if ((*(char *)(_Stack_94.rgctx_data + 2) != '\0') &&
         (*(char *)((int)_Stack_94.rgctx_data + 9) != '\0')) {
        if (_Stack_94.rgctx_data[3].rgctxDataDummy == (void *)0x0) goto code_?;
        cVar33 = func_?(6,_Stack_94.rgctx_data[3].rgctxDataDummy);
        if (cVar33 != '\0') {
          if (((RegexCharClass_SingleRange)_Var2.rgctx_data == (RegexCharClass_SingleRange)0x0) ||
             (pvVar34 = _Var2.rgctx_data[3].rgctxDataDummy, pvVar34 == (void *)0x0))
          goto code_?;
          pfVar35 = (float *)func_?(&stack0xffffff38,7,pvVar34);
          LStack_19._current =
               (RegexCharClass_SingleRange)((pfVar35[1] + pfVar35[3] * _UNK_?) - VStack_20.y)
          ;
          LStack_19._version = (int32_t)((*pfVar35 + pfVar35[2] * _UNK_?) - fStack_22);
          fVar36 = (float10)func_?(&LStack_19._version,0);
          pUStack_37 = (UxmlObjectListAttributeDescription_1_System_Object_ *)(float)fVar36;
          if (((RegexCharClass_SingleRange)_Stack_38.rgctx_data == (RegexCharClass_SingleRange)0x0)
             || ((float)pUStack_37 < (float)pUStack_15)) {
            pUStack_15 = pUStack_37;
            _Stack_38.rgctx_data = _Var2.rgctx_data;
          }
        }
      }
    }
    uStack_3 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)unaff_EDI,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoHandleShape2D>__Dispose__
               ,pMVar7);
    uStack_3 = 0xffffffff;
    if ((RegexCharClass_SingleRange)_Stack_38.rgctx_data != (RegexCharClass_SingleRange)0x0) {
      pGVar38 = (GizmoHandleHoverData *)func_?();
      if (cRam_? == '\0') {
        func_?(&TypeInfo__RTG__IGizmoHandle);
        cRam_? = '\x01';
      }
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)pGVar38,ExceptionArgument__Enum_obj,pMVar2);
      if (this == (GizmoHandle *)0x0) goto code_?;
      iVar39 = func_?(0,TypeInfo__RTG__IGizmoHandle,this);
      (pGVar38->fields)._handleId = iVar39;
      pGVar17 = (Gizmo *)func_?(1,TypeInfo__RTG__IGizmoHandle,this);
      (pGVar38->fields)._gizmo = pGVar17;
      func_?(&(pGVar38->fields)._gizmo,pGVar17);
      (pGVar38->fields)._handleDimension = 1;
      VStack_20.z = 0.0;
      (pGVar38->fields)._hoverRay.m_Origin.x = hoverRay.m_Origin.x;
      (pGVar38->fields)._hoverRay.m_Origin.y = hoverRay.m_Origin.y;
      (pGVar38->fields)._hoverRay.m_Origin.z = hoverRay.m_Origin.z;
      (pGVar38->fields)._hoverRay.m_Direction.x = hoverRay.m_Direction.x;
      (pGVar38->fields)._hoverRay.m_Direction.y = (float)(int)uVar16;
      (pGVar38->fields)._hoverRay.m_Direction.z = (float)(int)((ulonglong)uVar16 >> 0x20);
      (pGVar38->fields)._hoverPoint.x = fStack_22;
      (pGVar38->fields)._hoverPoint.y = (float)pUStack_27;
      (pGVar38->fields)._hoverPoint.z = 0.0;
      if ((this->fields).CanHover != (GizmoHandleCanHoverHandler *)0x0) {
        pUStack_27 = (UxmlObjectListAttributeDescription_1_System_Object_ *)
                     func_?(TypeInfo__RTG__YesNoAnswer);
        UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
        UxmlObjectListAttributeDescription`1[System::Object]::
        UxmlObjectListAttributeDescription_1_System_Object___ctor(pUStack_27,(MethodInfo *)0x0);
        pGVar40 = (this->fields).CanHover;
        if ((pGVar40 != (GizmoHandleCanHoverHandler *)0x0) &&
           ((*(pGVar40->fields)._._.invoke_impl)
                      ((pGVar40->fields)._._.method_code,(this->fields)._id,(this->fields)._gizmo,
                       pGVar38,pUStack_27,(pGVar40->fields)._._.method),
           pUStack_27 != (UxmlObjectListAttributeDescription_1_System_Object_ *)0x0)) {
          pGVar41 = (GizmoHandleHoverData *)0x0;
          if (*(char *)((int)&(pUStack_27->fields)._._defaultValue_k__BackingField + 1) == '\0') {
            pGVar41 = pGVar38;
          }
          *unaff_FS_OFFSET = uStack_5;
          return pGVar41;
        }
        goto code_?;
      }
      goto code_?;
    }
  }
  if (((this->fields)._Is3DHoverable_k__BackingField != 0) &&
     ((this->fields)._Is3DVisible_k__BackingField != 0)) {
    pLVar21 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
             (this->fields)._3DShapes;
    _Stack_38.rgctx_data = (Il2CppRGCTXData *)0x0;
    pUStack_27 = pUStack_14;
    if (pLVar21 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      pLVar29 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                          ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                            *)&stack0xffffff38,pLVar21,
                           MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape3D>__GetEnumerator__
                          );
      pMVar7 = (MethodInfo *)auStack_10;
      uStack_30 = 0;
      auStack_10._0_4_ = pLVar29->_list;
      auStack_10._4_4_ = pLVar29->_index;
      auStack_10._8_4_ = pLVar29->_version;
      auStack_10._12_4_ = pLVar29->_current;
      uStack_3 = 4;
      fStack_22 = hoverRay.m_Origin.x;
      fStack_23 = hoverRay.m_Origin.y;
      fStack_24 = hoverRay.m_Origin.z;
      fStack_25 = hoverRay.m_Direction.x;
      pMStack_31 = pMVar7;
      while (bVar32 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                      Object]::List_1_T_Enumerator_System_Object__MoveNext
                                ((List_1_T_Enumerator_System_Object_ *)auStack_10,
                                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoHandleShape3D>__MoveNext__
                                ), bVar32 != 0) {
        _Var2.rgctx_data = (Il2CppRGCTXData *)auStack_10._12_4_;
        if ((RegexCharClass_SingleRange)auStack_10._12_4_ == (RegexCharClass_SingleRange)0x0)
        goto code_?;
        if ((*(char *)(auStack_10._12_4_ + 8) != '\0') && (*(char *)(auStack_10._12_4_ + 9) != '\0')
           ) {
          if (*(int *)(auStack_10._12_4_ + 0xc) == 0) goto code_?;
          cVar33 = func_?(7,*(int *)(auStack_10._12_4_ + 0xc),hoverRay.m_Origin.x,
                                   hoverRay.m_Origin.y,hoverRay.m_Origin.z,hoverRay.m_Direction.x,
                                   hoverRay.m_Direction.y,hoverRay.m_Direction.z,&pUStack_13);
          if ((cVar33 != '\0') &&
             (((RegexCharClass_SingleRange)_Stack_38.rgctx_data == (RegexCharClass_SingleRange)0x0
              || ((float)pUStack_13 < (float)pUStack_14)))) {
            pUStack_14 = pUStack_13;
            _Stack_38.rgctx_data = _Var2.rgctx_data;
            pUStack_27 = pUStack_13;
          }
        }
      }
      uStack_3 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)pMVar7,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoHandleShape3D>__Dispose__
                 ,unaff_EDI);
      uStack_3 = 0xffffffff;
      if ((RegexCharClass_SingleRange)_Stack_38.rgctx_data == (RegexCharClass_SingleRange)0x0)
      goto code_?;
      pGVar38 = (GizmoHandleHoverData *)func_?();
      if (cRam_? == '\0') {
        func_?(&TypeInfo__RTG__IGizmoHandle);
        cRam_? = '\x01';
      }
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)pGVar38,ExceptionArgument__Enum_obj,pMVar7);
      if (this != (GizmoHandle *)0x0) {
        iVar39 = func_?(0,TypeInfo__RTG__IGizmoHandle,this);
        (pGVar38->fields)._handleId = iVar39;
        pGVar17 = (Gizmo *)func_?(1,TypeInfo__RTG__IGizmoHandle,this);
        (pGVar38->fields)._gizmo = pGVar17;
        func_?(&(pGVar38->fields)._gizmo,pGVar17);
        (pGVar38->fields)._handleDimension = 2;
        (pGVar38->fields)._hoverRay.m_Origin.x = fStack_22;
        (pGVar38->fields)._hoverRay.m_Origin.y = fStack_23;
        (pGVar38->fields)._hoverRay.m_Origin.z = fStack_24;
        (pGVar38->fields)._hoverRay.m_Direction.x = fStack_25;
        (pGVar38->fields)._hoverRay.m_Direction.y = (float)(int)uVar16;
        (pGVar38->fields)._hoverRay.m_Direction.z = (float)(int)((ulonglong)uVar16 >> 0x20);
        (pGVar38->fields)._hoverEnter3D = (float)pUStack_14;
        pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint
                            (&VStack_20,&(pGVar38->fields)._hoverRay,(float)pUStack_14,
                             (MethodInfo *)0x0);
        fVar42 = pVVar18->y;
        fVar43 = pVVar18->z;
        (pGVar38->fields)._hoverPoint.x = pVVar18->x;
        (pGVar38->fields)._hoverPoint.y = fVar42;
        (pGVar38->fields)._hoverPoint.z = fVar43;
        if ((this->fields).CanHover != (GizmoHandleCanHoverHandler *)0x0) {
          pUStack_27 = (UxmlObjectListAttributeDescription_1_System_Object_ *)func_?();
          UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
          UxmlObjectListAttributeDescription`1[System::Object]::
          UxmlObjectListAttributeDescription_1_System_Object___ctor(pUStack_27,(MethodInfo *)0x0);
          pGVar40 = (this->fields).CanHover;
          if ((pGVar40 == (GizmoHandleCanHoverHandler *)0x0) ||
             ((*(pGVar40->fields)._._.invoke_impl)
                        ((pGVar40->fields)._._.method_code,(this->fields)._id,(this->fields)._gizmo,
                         pGVar38,pUStack_27,(pGVar40->fields)._._.method),
             pUStack_27 == (UxmlObjectListAttributeDescription_1_System_Object_ *)0x0))
          goto code_?;
          if (*(char *)((int)&(pUStack_27->fields)._._defaultValue_k__BackingField + 1) != '\0')
          goto code_?;
        }
code_?:
        *unaff_FS_OFFSET = uStack_5;
        return pGVar38;
      }
    }
code_?:
    uVar44 = func_?();
    uVar44 = func_?(uVar44);
    func_?(uVar44);
    pcVar45 = (code *)swi(3);
    pGVar38 = (GizmoHandleHoverData *)(*pcVar45)();
    return pGVar38;
  }
code_?:
  *unaff_FS_OFFSET = uStack_5;
  return (GizmoHandleHoverData *)0x0;
}


/* Single GetZoomFactor(Camera) */

float Assembly-CSharp.dll::RTG::GizmoHandle::GizmoHandle_GetZoomFactor
                (GizmoHandle *this,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__CameraEx);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._zoomFactorTransform;
  if (pGVar1 != (GizmoTransform *)0x0) {
    worldPos = (pGVar1->fields)._position3D;
    if ((TypeInfo__RTG__CameraEx->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__RTG__CameraEx);
    }
    fVar2 = CameraEx::CameraEx_EstimateZoomFactor(camera,worldPos,(MethodInfo *)0x0);
    return fVar2;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  fVar4 = (float10)(*pcVar3)();
  return (float)fVar4;
}


/* Boolean Is2DShapeVisible(Int32) */

bool Assembly-CSharp.dll::RTG::GizmoHandle::GizmoHandle_Is2DShapeVisible
               (GizmoHandle *this,int32_t shapeIndex,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields)._2DShapes;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    RVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                      (this_00,shapeIndex,
                       MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape2D>__get_Item_int_
                      );
    if (RVar1 != (RegexCharClass_SingleRange)0x0) {
      return *(bool *)((int)RVar1 + 8);
    }
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Boolean Is3DShapeVisible(Int32) */

bool Assembly-CSharp.dll::RTG::GizmoHandle::GizmoHandle_Is3DShapeVisible
               (GizmoHandle *this,int32_t shapeIndex,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields)._3DShapes;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    RVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                      (this_00,shapeIndex,
                       MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape3D>__get_Item_int_
                      );
    if (RVar1 != (RegexCharClass_SingleRange)0x0) {
      return *(bool *)((int)RVar1 + 8);
    }
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Void Remove2DShape(Shape2D) */

void Assembly-CSharp.dll::RTG::GizmoHandle::GizmoHandle_Remove2DShape
               (GizmoHandle *this,Shape2D *shape,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape2D>__RemoveAll_System__Predicate<RTG::GizmoHandleShape2D>_
                   );
    func_?(&TypeInfo__System__Predicate<RTG::GizmoHandleShape2D>);
    func_?(&
                    MethodInfo__RTG__GizmoHandle____c__DisplayClass67_0___Remove2DShape_b__0_RTG__GizmoHandleShape2D_
                   );
    func_?(&TypeInfo__RTG__GizmoHandle____c__DisplayClass67_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__RTG__GizmoHandle____c__DisplayClass67_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
    value[1].klass = (Object__Class *)shape;
    func_?(value + 1,shape);
    this_00 = (this->fields)._2DShapes;
    this_01 = (Predicate_1_Object_ *)
              func_?(TypeInfo__System__Predicate<RTG::GizmoHandleShape2D>);
    mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
              (this_01,value,
               MethodInfo__RTG__GizmoHandle____c__DisplayClass67_0___Remove2DShape_b__0_RTG__GizmoHandleShape2D_
               ,(MethodInfo *)0x0);
    if (this_00 != (List_1_RTG_GizmoHandleShape2D_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
      List_1_System_Object__RemoveAll
                ((List_1_System_Object_ *)this_00,this_01,
                 MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape2D>__RemoveAll_System__Predicate<RTG::GizmoHandleShape2D>_
                );
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Remove3DShape(Shape3D) */

void Assembly-CSharp.dll::RTG::GizmoHandle::GizmoHandle_Remove3DShape
               (GizmoHandle *this,Shape3D *shape,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape3D>__RemoveAll_System__Predicate<RTG::GizmoHandleShape3D>_
                   );
    func_?(&TypeInfo__System__Predicate<RTG::GizmoHandleShape3D>);
    func_?(&
                    MethodInfo__RTG__GizmoHandle____c__DisplayClass66_0___Remove3DShape_b__0_RTG__GizmoHandleShape3D_
                   );
    func_?(&TypeInfo__RTG__GizmoHandle____c__DisplayClass66_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__RTG__GizmoHandle____c__DisplayClass66_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
    value[1].klass = (Object__Class *)shape;
    func_?(value + 1,shape);
    this_00 = (this->fields)._3DShapes;
    this_01 = (Predicate_1_Object_ *)
              func_?(TypeInfo__System__Predicate<RTG::GizmoHandleShape3D>);
    mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
              (this_01,value,
               MethodInfo__RTG__GizmoHandle____c__DisplayClass66_0___Remove3DShape_b__0_RTG__GizmoHandleShape3D_
               ,(MethodInfo *)0x0);
    if (this_00 != (List_1_RTG_GizmoHandleShape3D_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
      List_1_System_Object__RemoveAll
                ((List_1_System_Object_ *)this_00,this_01,
                 MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape3D>__RemoveAll_System__Predicate<RTG::GizmoHandleShape3D>_
                );
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Render2DSolid(Camera) */

void Assembly-CSharp.dll::RTG::GizmoHandle::GizmoHandle_Render2DSolid
               (GizmoHandle *this,Camera *camera,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffbc;
  puVar5 = &stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoHandleShape2D>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoHandleShape2D>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoHandleShape2D>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape2D>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  LStack_6._list = (List_1_System_Object_ *)0x0;
  LStack_6._index = 0;
  LStack_6._version = 0;
  LStack_6._current = (Object *)0x0;
  if ((this->fields)._Is2DVisible_k__BackingField != 0) {
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this->fields)._2DShapes;
    if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
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
                        MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape2D>__GetEnumerator__
                       );
    LStack_6._list = (List_1_System_Object_ *)pLVar8->_list;
    LStack_6._index = pLVar8->_index;
    LStack_6._version = pLVar8->_version;
    LStack_6._current = *(Object **)&pLVar8->_current;
    LStack_9._version = 0;
    uStack_1 = 1;
    LStack_9._current = (RegexCharClass_SingleRange)&LStack_6;
    while( true ) {
      bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_6,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoHandleShape2D>__MoveNext__
                        );
      if (bVar10 == 0) break;
      if ((RegexCharClass_SingleRange)LStack_6._current == (RegexCharClass_SingleRange)0x0)
      goto code_?;
      if (*(char *)((int)LStack_6._current + 8) != '\0') {
        if (*(int *)((int)LStack_6._current + 0xc) == 0) goto code_?;
        func_?(4,*(int *)((int)LStack_6._current + 0xc),camera);
      }
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)&LStack_6,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoHandleShape2D>__Dispose__
               ,unaff_EDI);
  }
  *unaff_FS_OFFSET = uStack_3;
  return;
}


/* Void Render2DSolid(Camera, Int32) */

void Assembly-CSharp.dll::RTG::GizmoHandle::GizmoHandle_Render2DSolid_1
               (GizmoHandle *this,Camera *camera,int32_t shapeIndex,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape2D>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields)._2DShapes;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    RVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                      (this_00,shapeIndex,
                       MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape2D>__get_Item_int_
                      );
    if ((this->fields)._Is2DVisible_k__BackingField != 0) {
      if (RVar1 == (RegexCharClass_SingleRange)0x0) goto code_?;
      if (*(char *)((int)RVar1 + 8) != '\0') {
        piVar2 = *(int **)((int)RVar1 + 0xc);
        if (piVar2 == (int *)0x0) goto code_?;
        (**(code **)(*piVar2 + 0xe0))(piVar2);
      }
    }
    return;
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Render2DWire(Camera) */

void Assembly-CSharp.dll::RTG::GizmoHandle::GizmoHandle_Render2DWire
               (GizmoHandle *this,Camera *camera,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffbc;
  puVar5 = &stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoHandleShape2D>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoHandleShape2D>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoHandleShape2D>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape2D>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  LStack_6._list = (List_1_System_Object_ *)0x0;
  LStack_6._index = 0;
  LStack_6._version = 0;
  LStack_6._current = (Object *)0x0;
  if ((this->fields)._Is2DVisible_k__BackingField != 0) {
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this->fields)._2DShapes;
    if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
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
                        MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape2D>__GetEnumerator__
                       );
    LStack_6._list = (List_1_System_Object_ *)pLVar8->_list;
    LStack_6._index = pLVar8->_index;
    LStack_6._version = pLVar8->_version;
    LStack_6._current = *(Object **)&pLVar8->_current;
    LStack_9._version = 0;
    uStack_1 = 1;
    LStack_9._current = (RegexCharClass_SingleRange)&LStack_6;
    while( true ) {
      bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_6,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoHandleShape2D>__MoveNext__
                        );
      if (bVar10 == 0) break;
      if ((RegexCharClass_SingleRange)LStack_6._current == (RegexCharClass_SingleRange)0x0)
      goto code_?;
      if (*(char *)((int)LStack_6._current + 8) != '\0') {
        if (*(int *)((int)LStack_6._current + 0xc) == 0) goto code_?;
        func_?(5,*(int *)((int)LStack_6._current + 0xc),camera);
      }
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)&LStack_6,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoHandleShape2D>__Dispose__
               ,unaff_EDI);
  }
  *unaff_FS_OFFSET = uStack_3;
  return;
}


/* Void Render2DWire(Camera, Int32) */

void Assembly-CSharp.dll::RTG::GizmoHandle::GizmoHandle_Render2DWire_1
               (GizmoHandle *this,Camera *camera,int32_t shapeIndex,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape2D>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields)._2DShapes;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    RVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                      (this_00,shapeIndex,
                       MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape2D>__get_Item_int_
                      );
    if ((this->fields)._Is2DVisible_k__BackingField != 0) {
      if (RVar1 == (RegexCharClass_SingleRange)0x0) goto code_?;
      if (*(char *)((int)RVar1 + 8) != '\0') {
        piVar2 = *(int **)((int)RVar1 + 0xc);
        if (piVar2 == (int *)0x0) goto code_?;
        (**(code **)(*piVar2 + 0xe8))(piVar2);
      }
    }
    return;
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Render3DSolid() */

void Assembly-CSharp.dll::RTG::GizmoHandle::GizmoHandle_Render3DSolid
               (GizmoHandle *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffbc;
  puVar5 = &stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoHandleShape3D>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoHandleShape3D>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoHandleShape3D>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape3D>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  LStack_6._list = (List_1_System_Object_ *)0x0;
  LStack_6._index = 0;
  LStack_6._version = 0;
  LStack_6._current = (Object *)0x0;
  if ((this->fields)._Is3DVisible_k__BackingField != 0) {
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this->fields)._3DShapes;
    if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
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
                        MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape3D>__GetEnumerator__
                       );
    LStack_6._list = (List_1_System_Object_ *)pLVar8->_list;
    LStack_6._index = pLVar8->_index;
    LStack_6._version = pLVar8->_version;
    LStack_6._current = *(Object **)&pLVar8->_current;
    LStack_9._version = 0;
    uStack_1 = 1;
    LStack_9._current = (RegexCharClass_SingleRange)&LStack_6;
    while( true ) {
      bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_6,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoHandleShape3D>__MoveNext__
                        );
      if (bVar10 == 0) break;
      if ((RegexCharClass_SingleRange)LStack_6._current == (RegexCharClass_SingleRange)0x0)
      goto code_?;
      if (*(char *)((int)LStack_6._current + 8) != '\0') {
        if (*(int *)((int)LStack_6._current + 0xc) == 0) goto code_?;
        func_?(5,*(int *)((int)LStack_6._current + 0xc));
      }
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)&LStack_6,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoHandleShape3D>__Dispose__
               ,unaff_EDI);
  }
  *unaff_FS_OFFSET = uStack_3;
  return;
}


/* Void Render3DSolid(Int32) */

void Assembly-CSharp.dll::RTG::GizmoHandle::GizmoHandle_Render3DSolid_1
               (GizmoHandle *this,int32_t shapeIndex,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape3D>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields)._3DShapes;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    RVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                      (this_00,shapeIndex,
                       MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape3D>__get_Item_int_
                      );
    if ((this->fields)._Is3DVisible_k__BackingField != 0) {
      if (RVar1 == (RegexCharClass_SingleRange)0x0) goto code_?;
      if (*(char *)((int)RVar1 + 8) != '\0') {
        if (*(int **)((int)RVar1 + 0xc) == (int *)0x0) goto code_?;
        (**(code **)(**(int **)((int)RVar1 + 0xc) + 0xe8))();
      }
    }
    return;
  }
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Render3DWire() */

void Assembly-CSharp.dll::RTG::GizmoHandle::GizmoHandle_Render3DWire
               (GizmoHandle *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffbc;
  puVar5 = &stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoHandleShape3D>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoHandleShape3D>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoHandleShape3D>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape3D>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  LStack_6._list = (List_1_System_Object_ *)0x0;
  LStack_6._index = 0;
  LStack_6._version = 0;
  LStack_6._current = (Object *)0x0;
  if ((this->fields)._Is3DVisible_k__BackingField != 0) {
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this->fields)._3DShapes;
    if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
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
                        MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape3D>__GetEnumerator__
                       );
    LStack_6._list = (List_1_System_Object_ *)pLVar8->_list;
    LStack_6._index = pLVar8->_index;
    LStack_6._version = pLVar8->_version;
    LStack_6._current = *(Object **)&pLVar8->_current;
    LStack_9._version = 0;
    uStack_1 = 1;
    LStack_9._current = (RegexCharClass_SingleRange)&LStack_6;
    while( true ) {
      bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_6,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoHandleShape3D>__MoveNext__
                        );
      if (bVar10 == 0) break;
      if ((RegexCharClass_SingleRange)LStack_6._current == (RegexCharClass_SingleRange)0x0)
      goto code_?;
      if (*(char *)((int)LStack_6._current + 8) != '\0') {
        if (*(int *)((int)LStack_6._current + 0xc) == 0) goto code_?;
        func_?(6,*(int *)((int)LStack_6._current + 0xc));
      }
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)&LStack_6,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoHandleShape3D>__Dispose__
               ,unaff_EDI);
  }
  *unaff_FS_OFFSET = uStack_3;
  return;
}


/* Void Render3DWire(Int32) */

void Assembly-CSharp.dll::RTG::GizmoHandle::GizmoHandle_Render3DWire_1
               (GizmoHandle *this,int32_t shapeIndex,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape3D>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields)._3DShapes;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    RVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                      (this_00,shapeIndex,
                       MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape3D>__get_Item_int_
                      );
    if ((this->fields)._Is3DVisible_k__BackingField != 0) {
      if (RVar1 == (RegexCharClass_SingleRange)0x0) goto code_?;
      if (*(char *)((int)RVar1 + 8) != '\0') {
        if (*(int **)((int)RVar1 + 0xc) == (int *)0x0) goto code_?;
        (**(code **)(**(int **)((int)RVar1 + 0xc) + 0xf0))();
      }
    }
    return;
  }
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Set2DShapeHoverable(Int32, Boolean) */

void Assembly-CSharp.dll::RTG::GizmoHandle::GizmoHandle_Set2DShapeHoverable
               (GizmoHandle *this,int32_t shapeIndex,bool isHoverable,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields)._2DShapes;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    RVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                      (this_00,shapeIndex,
                       MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape2D>__get_Item_int_
                      );
    if (RVar1 != (RegexCharClass_SingleRange)0x0) {
      *(bool *)((int)RVar1 + 9) = isHoverable;
      return;
    }
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Set2DShapeVisible(Int32, Boolean) */

void Assembly-CSharp.dll::RTG::GizmoHandle::GizmoHandle_Set2DShapeVisible
               (GizmoHandle *this,int32_t shapeIndex,bool isVisible,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields)._2DShapes;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    RVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                      (this_00,shapeIndex,
                       MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape2D>__get_Item_int_
                      );
    if (RVar1 != (RegexCharClass_SingleRange)0x0) {
      *(bool *)((int)RVar1 + 8) = isVisible;
      return;
    }
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Set3DShapeHoverable(Int32, Boolean) */

void Assembly-CSharp.dll::RTG::GizmoHandle::GizmoHandle_Set3DShapeHoverable
               (GizmoHandle *this,int32_t shapeIndex,bool isHoverable,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields)._3DShapes;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    RVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                      (this_00,shapeIndex,
                       MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape3D>__get_Item_int_
                      );
    if (RVar1 != (RegexCharClass_SingleRange)0x0) {
      *(bool *)((int)RVar1 + 9) = isHoverable;
      return;
    }
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Set3DShapeVisible(Int32, Boolean) */

void Assembly-CSharp.dll::RTG::GizmoHandle::GizmoHandle_Set3DShapeVisible
               (GizmoHandle *this,int32_t shapeIndex,bool isVisible,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields)._3DShapes;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    RVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                      (this_00,shapeIndex,
                       MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape3D>__get_Item_int_
                      );
    if (RVar1 != (RegexCharClass_SingleRange)0x0) {
      *(bool *)((int)RVar1 + 8) = isVisible;
      return;
    }
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetAll2DShapesVisible(Boolean) */

void Assembly-CSharp.dll::RTG::GizmoHandle::GizmoHandle_SetAll2DShapesVisible
               (GizmoHandle *this,bool visible,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffbc;
  puVar5 = &stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoHandleShape2D>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoHandleShape2D>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoHandleShape2D>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape2D>__GetEnumerator__
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
            (this->fields)._2DShapes;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    pLVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_8,this_00,
                        MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape2D>__GetEnumerator__
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
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoHandleShape2D>__MoveNext__
                        );
      if (bVar9 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&LStack_6,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoHandleShape2D>__Dispose__
                   ,unaff_EDI);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if ((RegexCharClass_SingleRange)LStack_6._current == (RegexCharClass_SingleRange)0x0) break;
      *(bool *)((int)LStack_6._current + 8) = visible;
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void SetAll3DShapesVisible(Boolean) */

void Assembly-CSharp.dll::RTG::GizmoHandle::GizmoHandle_SetAll3DShapesVisible
               (GizmoHandle *this,bool visible,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffbc;
  puVar5 = &stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoHandleShape3D>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoHandleShape3D>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoHandleShape3D>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape3D>__GetEnumerator__
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
            (this->fields)._3DShapes;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    pLVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_8,this_00,
                        MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape3D>__GetEnumerator__
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
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoHandleShape3D>__MoveNext__
                        );
      if (bVar9 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&LStack_6,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoHandleShape3D>__Dispose__
                   ,unaff_EDI);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if ((RegexCharClass_SingleRange)LStack_6._current == (RegexCharClass_SingleRange)0x0) break;
      *(bool *)((int)LStack_6._current + 8) = visible;
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void SetHoverable(Boolean) */

void Assembly-CSharp.dll::RTG::GizmoHandle::GizmoHandle_SetHoverable
               (GizmoHandle *this,bool isHoverable,MethodInfo *method)

{
  (this->fields)._Is3DHoverable_k__BackingField = isHoverable;
  (this->fields)._Is2DHoverable_k__BackingField = isHoverable;
  return;
}


/* Void SetVisible(Boolean) */

void Assembly-CSharp.dll::RTG::GizmoHandle::GizmoHandle_SetVisible
               (GizmoHandle *this,bool isVisible,MethodInfo *method)

{
  (this->fields)._Is3DVisible_k__BackingField = isVisible;
  (this->fields)._Is2DVisible_k__BackingField = isVisible;
  return;
}


/* Void SetZoomFactorTransform(GizmoTransform) */

void Assembly-CSharp.dll::RTG::GizmoHandle::GizmoHandle_SetZoomFactorTransform
               (GizmoHandle *this,GizmoTransform *transform,MethodInfo *method)

{
  pGStack_1 = (GizmoTransform *)&stack0xfffffffc;
  if (transform != (GizmoTransform *)0x0) {
    pGStack_1 = transform;
    (this->fields)._zoomFactorTransform = transform;
    ppGStack_2 = &(this->fields)._zoomFactorTransform;
    func_?();
    return;
  }
  pGVar3 = (this->fields)._gizmo;
  if (pGVar3 != (Gizmo *)0x0) {
    pGStack_1 = (pGVar3->fields)._transform;
    (this->fields)._zoomFactorTransform = pGStack_1;
    ppGStack_2 = &(this->fields)._zoomFactorTransform;
    func_?();
    return;
  }
  uVar4 = func_?(&puStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* GizmoHandle(Gizmo, Int32) */

void Assembly-CSharp.dll::RTG::GizmoHandle::GizmoHandle__ctor
               (GizmoHandle *this,Gizmo *gizmo,int32_t id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape2D>__List__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape3D>__List__
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<RTG::GizmoHandleShape3D>);
    func_?(&TypeInfo__System__Collections__Generic__List<RTG::GizmoHandleShape2D>);
    func_?(&TypeInfo__RTG__Priority);
    cRam_? = '\x01';
  }
  pUVar1 = (UxmlObjectListAttributeDescription_1_System_Object_ *)
           func_?(TypeInfo__RTG__Priority);
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor(pUVar1,(MethodInfo *)0x0);
  (this->fields)._genericHoverPriority = (Priority *)pUVar1;
  func_?(&(this->fields)._genericHoverPriority,pUVar1);
  pUVar1 = (UxmlObjectListAttributeDescription_1_System_Object_ *)
           func_?(TypeInfo__RTG__Priority);
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor(pUVar1,(MethodInfo *)0x0);
  (this->fields)._hoverPriority2D = (Priority *)pUVar1;
  func_?(&(this->fields)._hoverPriority2D,pUVar1);
  pUVar1 = (UxmlObjectListAttributeDescription_1_System_Object_ *)
           func_?(TypeInfo__RTG__Priority);
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor(pUVar1,(MethodInfo *)0x0);
  (this->fields)._hoverPriority3D = (Priority *)pUVar1;
  func_?(&(this->fields)._hoverPriority3D,pUVar1);
  pGVar2 = (Gizmo *)func_?(
                                   TypeInfo__System__Collections__Generic__List<RTG::GizmoHandleShape3D>
                                   );
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pGVar2,
             MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape3D>__List__);
  (this->fields)._3DShapes = (List_1_RTG_GizmoHandleShape3D_ *)pGVar2;
  func_?();
  this_00 = (List_1_RTG_GizmoHandleShape2D_ *)func_?();
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape2D>__List__);
  method_00 = (MethodInfo *)&(this->fields)._2DShapes;
  (this->fields)._2DShapes = this_00;
  func_?(method_00,this_00);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  (this->fields)._id = id;
  (this->fields)._gizmo = pGVar2;
  func_?(&(this->fields)._gizmo,pGVar2);
  pGVar2 = (this->fields)._gizmo;
  if (pGVar2 != (Gizmo *)0x0) {
    pGStack3 = (pGVar2->fields)._transform;
    (this->fields)._zoomFactorTransform = pGStack3;
    ppGStack4 = &(this->fields)._zoomFactorTransform;
    func_?();
    (this->fields)._Is2DHoverable_k__BackingField = 1;
    (this->fields)._Is3DHoverable_k__BackingField = 1;
    (this->fields)._Is2DVisible_k__BackingField = 1;
    (this->fields)._Is3DVisible_k__BackingField = 1;
    return;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Boolean get_Has2DShapes() */

bool Assembly-CSharp.dll::RTG::GizmoHandle::GizmoHandle_get_Has2DShapes
               (GizmoHandle *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppMStack_1 = &
                 MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape2D>__get_Count__
    ;
    func_?();
    cRam_? = '\x01';
  }
  pLVar2 = (this->fields)._2DShapes;
  if (pLVar2 != (List_1_RTG_GizmoHandleShape2D_ *)0x0) {
    return (pLVar2->fields)._size != 0;
  }
  ppMStack_1 = (MethodInfo **)&stack0xfffffffc;
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Boolean get_Has3DShapes() */

bool Assembly-CSharp.dll::RTG::GizmoHandle::GizmoHandle_get_Has3DShapes
               (GizmoHandle *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppMStack_1 = &
                 MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape3D>__get_Count__
    ;
    func_?();
    cRam_? = '\x01';
  }
  pLVar2 = (this->fields)._3DShapes;
  if (pLVar2 != (List_1_RTG_GizmoHandleShape3D_ *)0x0) {
    return (pLVar2->fields)._size != 0;
  }
  ppMStack_1 = (MethodInfo **)&stack0xfffffffc;
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Boolean get_Is3DVisible() */

bool Assembly-CSharp.dll::RTG::GizmoHandle::GizmoHandle_get_Is3DVisible
               (GizmoHandle *this,MethodInfo *method)

{
  return (this->fields)._Is3DVisible_k__BackingField;
}


/* Int32 get_Num2DShapes() */

int32_t Assembly-CSharp.dll::RTG::GizmoHandle::GizmoHandle_get_Num2DShapes
                  (GizmoHandle *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppMStack_1 = &
                 MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape2D>__get_Count__
    ;
    func_?();
    cRam_? = '\x01';
  }
  pLVar2 = (this->fields)._2DShapes;
  if (pLVar2 != (List_1_RTG_GizmoHandleShape2D_ *)0x0) {
    return (pLVar2->fields)._size;
  }
  ppMStack_1 = (MethodInfo **)&stack0xfffffffc;
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  iVar6 = (*pcVar5)();
  return iVar6;
}


/* Int32 get_Num3DShapes() */

int32_t Assembly-CSharp.dll::RTG::GizmoHandle::GizmoHandle_get_Num3DShapes
                  (GizmoHandle *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppMStack_1 = &
                 MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape3D>__get_Count__
    ;
    func_?();
    cRam_? = '\x01';
  }
  pLVar2 = (this->fields)._3DShapes;
  if (pLVar2 != (List_1_RTG_GizmoHandleShape3D_ *)0x0) {
    return (pLVar2->fields)._size;
  }
  ppMStack_1 = (MethodInfo **)&stack0xfffffffc;
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  iVar6 = (*pcVar5)();
  return iVar6;
}


/* Void set_Is2DVisible(Boolean) */

void Assembly-CSharp.dll::RTG::GizmoHandle::GizmoHandle_set_Is2DVisible
               (GizmoHandle *this,bool value,MethodInfo *method)

{
  (this->fields)._Is2DVisible_k__BackingField = value;
  return;
}


/* Void set_Is3DVisible(Boolean) */

void Assembly-CSharp.dll::RTG::GizmoHandle::GizmoHandle_set_Is3DVisible
               (GizmoHandle *this,bool value,MethodInfo *method)

{
  (this->fields)._Is3DVisible_k__BackingField = value;
  return;
}

