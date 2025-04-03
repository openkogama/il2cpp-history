
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
  _Stack_84.rgctx_data = (Il2CppRGCTXData *)0x0;
  pUStack_13 = (UxmlObjectListAttributeDescription_1_System_Object_ *)0x0;
  auStack_10._0_4_ = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0;
  auStack_10._4_4_ = (Il2CppMethodPointer)0x0;
  auStack_10._8_4_ = (InvokerMethod)0x0;
  auStack_10._12_2_ = 0;
  auStack_10._14_2_ = 0;
  pUStack_14 = _UNK_?;
  pUStack_15 = _UNK_?;
  uVar16 = hoverRay.m_Direction._4_8_;
  if (((this->fields)._Is2DHoverable_k__BackingField == 0) ||
     ((this->fields)._Is2DVisible_k__BackingField == 0)) {
code_?:
    if (((this->fields)._Is3DHoverable_k__BackingField == 0) ||
       ((this->fields)._Is3DVisible_k__BackingField == 0)) goto code_?;
    pLVar17 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
             (this->fields)._3DShapes;
    _Stack_38.rgctx_data = (Il2CppRGCTXData *)0x0;
    pUStack_18 = pUStack_14;
    if (pLVar17 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
    goto code_?;
    pLVar19 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                        ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                          *)&pLStack_20,pLVar17,
                         MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape3D>__GetEnumerator__
                        );
    pMVar7 = (MethodInfo *)auStack_10;
    uStack_21 = 0;
    auStack_10._0_4_ = pLVar19->_list;
    auStack_10._4_4_ = pLVar19->_index;
    auStack_10._8_4_ = pLVar19->_version;
    auStack_10._12_4_ = pLVar19->_current;
    uStack_3 = 4;
    pMStack_22 = pMVar7;
    while (bVar23 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                   ::List_1_T_Enumerator_System_Object__MoveNext
                             ((List_1_T_Enumerator_System_Object_ *)auStack_10,
                              MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoHandleShape3D>__MoveNext__
                             ), bVar23 != 0) {
      _Var4.rgctx_data = (Il2CppRGCTXData *)auStack_10._12_4_;
      if ((RegexCharClass_SingleRange)auStack_10._12_4_ == (RegexCharClass_SingleRange)0x0)
      goto code_?;
      if ((*(char *)(auStack_10._12_4_ + 8) != '\0') && (*(char *)(auStack_10._12_4_ + 9) != '\0'))
      {
        if (*(int *)(auStack_10._12_4_ + 0xc) == 0) goto code_?;
        cVar24 = func_?(7,*(int *)(auStack_10._12_4_ + 0xc),hoverRay.m_Origin.x,
                                 hoverRay.m_Origin.y,hoverRay.m_Origin.z,hoverRay.m_Direction.x,
                                 hoverRay.m_Direction.y,hoverRay.m_Direction.z,&pUStack_13);
        if ((cVar24 != '\0') &&
           (((RegexCharClass_SingleRange)_Stack_38.rgctx_data == (RegexCharClass_SingleRange)0x0 ||
            ((float)pUStack_13 < (float)pUStack_14)))) {
          pUStack_14 = pUStack_13;
          _Stack_38.rgctx_data = _Var4.rgctx_data;
          pUStack_18 = pUStack_13;
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
    pGVar25 = (GizmoHandleHoverData *)func_?();
    if (cRam_? == '\0') {
      func_?(&TypeInfo__RTG__IGizmoHandle);
      cRam_? = '\x01';
    }
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)pGVar25,ExceptionArgument__Enum_obj,pMVar7);
    if (this == (GizmoHandle *)0x0) goto code_?;
    iVar26 = func_?(0,TypeInfo__RTG__IGizmoHandle,this);
    (pGVar25->fields)._handleId = iVar26;
    pGVar27 = (Gizmo *)func_?(1,TypeInfo__RTG__IGizmoHandle,this);
    ppGVar28 = &(pGVar25->fields)._gizmo;
    *ppGVar28 = pGVar27;
    func_?(ppGVar28,pGVar27);
    (pGVar25->fields)._handleDimension = 2;
    this_00 = &(pGVar25->fields)._hoverRay;
    (this_00->m_Origin).x = hoverRay.m_Origin.x;
    (pGVar25->fields)._hoverRay.m_Origin.y = hoverRay.m_Origin.y;
    (pGVar25->fields)._hoverRay.m_Origin.z = hoverRay.m_Origin.z;
    (pGVar25->fields)._hoverRay.m_Direction.x = hoverRay.m_Direction.x;
    (pGVar25->fields)._hoverRay.m_Direction.y = (float)(int)uVar16;
    (pGVar25->fields)._hoverRay.m_Direction.z = (float)(int)((ulonglong)uVar16 >> 0x20);
    (pGVar25->fields)._hoverEnter3D = (float)pUStack_14;
    pVVar29 = UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint
                        (&VStack_30,this_00,(float)pUStack_14,(MethodInfo *)0x0);
    uVar16._0_4_ = pVVar29->x;
    uVar16._4_4_ = pVVar29->y;
    fVar31 = pVVar29->z;
  }
  else {
    pGVar27 = (this->fields)._gizmo;
    if ((pGVar27 == (Gizmo *)0x0) ||
       (this_01 = Gizmo::Gizmo_GetWorkCamera(pGVar27,(MethodInfo *)0x0), this_01 == (Camera *)0x0))
    goto code_?;
    pVVar29 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_WorldToScreenPoint_1
                        ((Vector3 *)&LStack_32,this_01,hoverRay.m_Origin,(MethodInfo *)0x0);
    uVar33._0_4_ = pVVar29->x;
    uVar33._4_4_ = pVVar29->y;
    VStack_30.z = pVVar29->z;
    pUStack_18 = (UxmlObjectListAttributeDescription_1_System_Object_ *)uVar33._4_4_;
    pLVar17 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
             (this->fields)._2DShapes;
    fStack_34 = (float)uVar33;
    pUStack_35 = (UxmlObjectListAttributeDescription_1_System_Object_ *)uVar33._4_4_;
    _Stack_38.rgctx_data = (Il2CppRGCTXData *)0x0;
    VStack_30._0_8_ = uVar33;
    if (pLVar17 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
    goto code_?;
    pLVar19 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                        (&LStack_32,pLVar17,
                         MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape2D>__GetEnumerator__
                        );
    unaff_EDI = (MethodInfo *)(auStack_10 + 0x10);
    uStack_21 = 0;
    auStack_10._16_4_ = pLVar19->_list;
    pIStack_11 = (Il2CppType *)pLVar19->_index;
    ppIStack_12 = (Il2CppType **)pLVar19->_version;
    _Stack_84 = (_union_154)*(_union_154 *)&pLVar19->_current;
    uStack_3 = 1;
    pMStack_22 = unaff_EDI;
    while( true ) {
      pMVar2 = (MethodInfo *)(auStack_10 + 0x10);
      bVar23 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        ((List_1_T_Enumerator_System_Object_ *)pMVar2,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoHandleShape2D>__MoveNext__
                        );
      _Var4 = _Stack_84;
      if (bVar23 == 0) break;
      if ((RegexCharClass_SingleRange)_Stack_84.rgctx_data == (RegexCharClass_SingleRange)0x0)
      goto code_?;
      if ((*(char *)(_Stack_84.rgctx_data + 2) != '\0') &&
         (*(char *)((int)_Stack_84.rgctx_data + 9) != '\0')) {
        if (_Stack_84.rgctx_data[3].rgctxDataDummy == (void *)0x0) goto code_?;
        cVar24 = func_?(6,_Stack_84.rgctx_data[3].rgctxDataDummy);
        if (cVar24 != '\0') {
          if (_Var4.rgctx_data[3].rgctxDataDummy == (void *)0x0) goto code_?;
          pfVar36 = (float *)func_?(&pLStack_20,7,_Var4.rgctx_data[3].rgctxDataDummy);
          LStack_32._current =
               (RegexCharClass_SingleRange)((pfVar36[1] + pfVar36[3] * _UNK_?) - VStack_30.y)
          ;
          LStack_32._version = (int32_t)((*pfVar36 + pfVar36[2] * _UNK_?) - (float)uVar33);
          fVar37 = (float10)func_?(&LStack_32._version,0);
          pUStack_38 = (UxmlObjectListAttributeDescription_1_System_Object_ *)(float)fVar37;
          if (((RegexCharClass_SingleRange)_Stack_38.rgctx_data == (RegexCharClass_SingleRange)0x0)
             || ((float)pUStack_38 < (float)pUStack_15)) {
            pUStack_15 = pUStack_38;
            _Stack_38.rgctx_data = _Var4.rgctx_data;
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
    if ((RegexCharClass_SingleRange)_Stack_38.rgctx_data == (RegexCharClass_SingleRange)0x0)
    goto code_?;
    pGVar25 = (GizmoHandleHoverData *)func_?();
    if (cRam_? == '\0') {
      func_?(&TypeInfo__RTG__IGizmoHandle);
      cRam_? = '\x01';
    }
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)pGVar25,ExceptionArgument__Enum_obj,pMVar2);
    if (this == (GizmoHandle *)0x0) goto code_?;
    iVar26 = func_?(0,TypeInfo__RTG__IGizmoHandle,this);
    (pGVar25->fields)._handleId = iVar26;
    pGVar27 = (Gizmo *)func_?(1,TypeInfo__RTG__IGizmoHandle,this);
    ppGVar28 = &(pGVar25->fields)._gizmo;
    *ppGVar28 = pGVar27;
    func_?(ppGVar28,pGVar27);
    (pGVar25->fields)._handleDimension = 1;
    VStack_30.z = 0.0;
    (pGVar25->fields)._hoverRay.m_Origin.x = hoverRay.m_Origin.x;
    (pGVar25->fields)._hoverRay.m_Origin.y = hoverRay.m_Origin.y;
    (pGVar25->fields)._hoverRay.m_Origin.z = hoverRay.m_Origin.z;
    (pGVar25->fields)._hoverRay.m_Direction.x = hoverRay.m_Direction.x;
    (pGVar25->fields)._hoverRay.m_Direction.y = (float)(int)uVar16;
    (pGVar25->fields)._hoverRay.m_Direction.z = (float)(int)((ulonglong)uVar16 >> 0x20);
    fVar31 = 0.0;
    uVar16 = CONCAT44(pUStack_18,(float)uVar33);
  }
  (pGVar25->fields)._hoverPoint.x = (float)(int)uVar16;
  (pGVar25->fields)._hoverPoint.y = (float)(int)((ulonglong)uVar16 >> 0x20);
  (pGVar25->fields)._hoverPoint.z = fVar31;
  if ((this->fields).CanHover != (GizmoHandleCanHoverHandler *)0x0) {
    pUStack_18 = (UxmlObjectListAttributeDescription_1_System_Object_ *)
                 func_?(TypeInfo__RTG__YesNoAnswer);
    UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
    UxmlObjectListAttributeDescription`1[System::Object]::
    UxmlObjectListAttributeDescription_1_System_Object___ctor(pUStack_18,(MethodInfo *)0x0);
    pGVar39 = (this->fields).CanHover;
    if ((pGVar39 == (GizmoHandleCanHoverHandler *)0x0) ||
       ((*(pGVar39->fields)._._.invoke_impl)
                  ((pGVar39->fields)._._.method_code,(this->fields)._id,(this->fields)._gizmo,pGVar25
                   ,pUStack_18,(pGVar39->fields)._._.method),
       pUStack_18 == (UxmlObjectListAttributeDescription_1_System_Object_ *)0x0)) {
code_?:
      uVar40 = func_?();
      uVar40 = func_?(uVar40);
      func_?(uVar40);
      pcVar41 = (code *)swi(3);
      pGVar25 = (GizmoHandleHoverData *)(*pcVar41)();
      return pGVar25;
    }
    if (*(char *)((int)&(pUStack_18->fields)._._defaultValue_k__BackingField + 1) != '\0') {
code_?:
      *unaff_FS_OFFSET = uStack_5;
      return (GizmoHandleHoverData *)0x0;
    }
  }
  *unaff_FS_OFFSET = uStack_5;
  return pGVar25;
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
  if ((this->fields)._Is2DVisible_k__BackingField != 0) {
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this->fields)._2DShapes;
    if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
code_?:
      func_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pLVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_8,this_00,
                        MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape2D>__GetEnumerator__
                       );
    LStack_9._list = (List_1_System_Object_ *)pLVar7->_list;
    LStack_9._index = pLVar7->_index;
    LStack_9._version = pLVar7->_version;
    LStack_9._current = *(Object **)&pLVar7->_current;
    LStack_8._version = 0;
    uStack_1 = 1;
    LStack_8._current = (RegexCharClass_SingleRange)&LStack_9;
    while( true ) {
      bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_9,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoHandleShape2D>__MoveNext__
                        );
      if (bVar10 == 0) break;
      if ((RegexCharClass_SingleRange)LStack_9._current == (RegexCharClass_SingleRange)0x0)
      goto code_?;
      if (*(char *)((int)LStack_9._current + 8) != '\0') {
        if (*(int *)((int)LStack_9._current + 0xc) == 0) goto code_?;
        func_?(4,*(int *)((int)LStack_9._current + 0xc),camera);
      }
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)&LStack_9,
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
  if ((this->fields)._Is2DVisible_k__BackingField != 0) {
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this->fields)._2DShapes;
    if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
code_?:
      func_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pLVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_8,this_00,
                        MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape2D>__GetEnumerator__
                       );
    LStack_9._list = (List_1_System_Object_ *)pLVar7->_list;
    LStack_9._index = pLVar7->_index;
    LStack_9._version = pLVar7->_version;
    LStack_9._current = *(Object **)&pLVar7->_current;
    LStack_8._version = 0;
    uStack_1 = 1;
    LStack_8._current = (RegexCharClass_SingleRange)&LStack_9;
    while( true ) {
      bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_9,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoHandleShape2D>__MoveNext__
                        );
      if (bVar10 == 0) break;
      if ((RegexCharClass_SingleRange)LStack_9._current == (RegexCharClass_SingleRange)0x0)
      goto code_?;
      if (*(char *)((int)LStack_9._current + 8) != '\0') {
        if (*(int *)((int)LStack_9._current + 0xc) == 0) goto code_?;
        func_?(5,*(int *)((int)LStack_9._current + 0xc),camera);
      }
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)&LStack_9,
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
  if ((this->fields)._Is3DVisible_k__BackingField != 0) {
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this->fields)._3DShapes;
    if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
code_?:
      func_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pLVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_8,this_00,
                        MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape3D>__GetEnumerator__
                       );
    LStack_9._list = (List_1_System_Object_ *)pLVar7->_list;
    LStack_9._index = pLVar7->_index;
    LStack_9._version = pLVar7->_version;
    LStack_9._current = *(Object **)&pLVar7->_current;
    LStack_8._version = 0;
    uStack_1 = 1;
    LStack_8._current = (RegexCharClass_SingleRange)&LStack_9;
    while( true ) {
      bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_9,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoHandleShape3D>__MoveNext__
                        );
      if (bVar10 == 0) break;
      if ((RegexCharClass_SingleRange)LStack_9._current == (RegexCharClass_SingleRange)0x0)
      goto code_?;
      if (*(char *)((int)LStack_9._current + 8) != '\0') {
        if (*(int *)((int)LStack_9._current + 0xc) == 0) goto code_?;
        func_?(5,*(int *)((int)LStack_9._current + 0xc));
      }
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)&LStack_9,
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
  if ((this->fields)._Is3DVisible_k__BackingField != 0) {
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this->fields)._3DShapes;
    if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
code_?:
      func_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pLVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_8,this_00,
                        MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape3D>__GetEnumerator__
                       );
    LStack_9._list = (List_1_System_Object_ *)pLVar7->_list;
    LStack_9._index = pLVar7->_index;
    LStack_9._version = pLVar7->_version;
    LStack_9._current = *(Object **)&pLVar7->_current;
    LStack_8._version = 0;
    uStack_1 = 1;
    LStack_8._current = (RegexCharClass_SingleRange)&LStack_9;
    while( true ) {
      bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_9,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoHandleShape3D>__MoveNext__
                        );
      if (bVar10 == 0) break;
      if ((RegexCharClass_SingleRange)LStack_9._current == (RegexCharClass_SingleRange)0x0)
      goto code_?;
      if (*(char *)((int)LStack_9._current + 8) != '\0') {
        if (*(int *)((int)LStack_9._current + 0xc) == 0) goto code_?;
        func_?(6,*(int *)((int)LStack_9._current + 0xc));
      }
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)&LStack_9,
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
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields)._2DShapes;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    pLVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_7,this_00,
                        MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape2D>__GetEnumerator__
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
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoHandleShape2D>__MoveNext__
                        );
      if (bVar9 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&LStack_8,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoHandleShape2D>__Dispose__
                   ,unaff_EDI);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if ((RegexCharClass_SingleRange)LStack_8._current == (RegexCharClass_SingleRange)0x0) break;
      *(bool *)((int)LStack_8._current + 8) = visible;
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
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields)._3DShapes;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    pLVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_7,this_00,
                        MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape3D>__GetEnumerator__
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
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoHandleShape3D>__MoveNext__
                        );
      if (bVar9 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&LStack_8,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoHandleShape3D>__Dispose__
                   ,unaff_EDI);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if ((RegexCharClass_SingleRange)LStack_8._current == (RegexCharClass_SingleRange)0x0) break;
      *(bool *)((int)LStack_8._current + 8) = visible;
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
    ppGStack_2 = &(this->fields)._zoomFactorTransform;
    pGStack_1 = transform;
    *ppGStack_2 = transform;
    func_?();
    return;
  }
  pGVar3 = (this->fields)._gizmo;
  if (pGVar3 != (Gizmo *)0x0) {
    pGStack_1 = (pGVar3->fields)._transform;
    ppGStack_2 = &(this->fields)._zoomFactorTransform;
    *ppGStack_2 = pGStack_1;
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
  ppPVar2 = &(this->fields)._genericHoverPriority;
  *ppPVar2 = (Priority *)pUVar1;
  func_?(ppPVar2,pUVar1);
  pUVar1 = (UxmlObjectListAttributeDescription_1_System_Object_ *)
           func_?(TypeInfo__RTG__Priority);
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor(pUVar1,(MethodInfo *)0x0);
  ppPVar2 = &(this->fields)._hoverPriority2D;
  *ppPVar2 = (Priority *)pUVar1;
  func_?(ppPVar2,pUVar1);
  pUVar1 = (UxmlObjectListAttributeDescription_1_System_Object_ *)
           func_?(TypeInfo__RTG__Priority);
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor(pUVar1,(MethodInfo *)0x0);
  ppPVar2 = &(this->fields)._hoverPriority3D;
  *ppPVar2 = (Priority *)pUVar1;
  func_?(ppPVar2,pUVar1);
  this_00 = (Gizmo *)func_?(
                                    TypeInfo__System__Collections__Generic__List<RTG::GizmoHandleShape3D>
                                    );
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape3D>__List__);
  (this->fields)._3DShapes = (List_1_RTG_GizmoHandleShape3D_ *)this_00;
  func_?();
  this_01 = (List_1_RTG_GizmoHandleShape2D_ *)func_?();
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_01,
             MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape2D>__List__);
  method_00 = (MethodInfo *)&(this->fields)._2DShapes;
  *(List_1_RTG_GizmoHandleShape2D_ **)method_00 = this_01;
  func_?(method_00,this_01);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  ppGVar3 = &(this->fields)._gizmo;
  (this->fields)._id = id;
  *ppGVar3 = this_00;
  func_?(ppGVar3,this_00);
  if (*ppGVar3 != (Gizmo *)0x0) {
    pGStack4 = ((*ppGVar3)->fields)._transform;
    ppGStack5 = &(this->fields)._zoomFactorTransform;
    *ppGStack5 = pGStack4;
    func_?();
    (this->fields)._Is2DHoverable_k__BackingField = 1;
    (this->fields)._Is3DHoverable_k__BackingField = 1;
    (this->fields)._Is2DVisible_k__BackingField = 1;
    (this->fields)._Is3DVisible_k__BackingField = 1;
    return;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
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

