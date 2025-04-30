
/* Void ModifyMesh(VertexHelper) */

void Assembly-CSharp.dll::Gamestrap::GradientEffect::GradientEffect_ModifyMesh
               (GradientEffect *this,VertexHelper *vh,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::UIVertex>);
    cRam_? = '\x01';
  }
  cVar1 = (*(code *)(this->klass->vtable).IsActive.method)
                    (this,(this->klass->vtable).OnRectTransformDimensionsChange.methodPtr);
  if (cVar1 != '\0') {
    stream = (List_1_UnityEngine_UIVertex_ *)
             func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::UIVertex>);
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)stream,
               MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__List__);
    if (vh == (VertexHelper *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    UnityEngine.UI.dll::UnityEngine::UI::VertexHelper::VertexHelper_GetUIVertexStream
              (vh,stream,(MethodInfo *)0x0);
    GradientEffect_ModifyVertices(this,stream,(MethodInfo *)0x0);
    UnityEngine.UI.dll::UnityEngine::UI::VertexHelper::VertexHelper_Clear(vh,(MethodInfo *)0x0);
    UnityEngine.UI.dll::UnityEngine::UI::VertexHelper::VertexHelper_AddUIVertexTriangleStream
              (vh,stream,(MethodInfo *)0x0);
  }
  return;
}


/* Void ModifyVertices(List`1[UnityEngine.UIVertex]) */

void Assembly-CSharp.dll::Gamestrap::GradientEffect::GradientEffect_ModifyVertices
               (GradientEffect *this,List_1_UnityEngine_UIVertex_ *vertexList,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  cVar1 = (*(code *)(this->klass->vtable).IsActive.method)();
  if (cVar1 != '\0') {
    if (vertexList == (List_1_UnityEngine_UIVertex_ *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar3 = (vertexList->fields)._size;
    if (3 < iVar3) {
      if (iVar3 == 6) {
        GradientEffect_SetVertexColor(this,vertexList,0,(this->fields).bottom,(MethodInfo *)0x0);
        GradientEffect_SetVertexColor(this,vertexList,1,(this->fields).top,(MethodInfo *)0x0);
        GradientEffect_SetVertexColor(this,vertexList,2,(this->fields).top,(MethodInfo *)0x0);
        GradientEffect_SetVertexColor(this,vertexList,3,(this->fields).top,(MethodInfo *)0x0);
        GradientEffect_SetVertexColor(this,vertexList,4,(this->fields).bottom,(MethodInfo *)0x0);
        GradientEffect_SetVertexColor(this,vertexList,5,(this->fields).bottom,(MethodInfo *)0x0);
      }
      else {
        pUVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
                 List_1_UnityEngine_UIVertex__get_Item
                           (&UStack_5,vertexList,iVar3 + -1,
                            MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__get_Item_int_
                           );
        pfVar6 = (float *)&stack0xfffffe7c;
        for (iVar3 = 0x1b; iVar3 != 0; iVar3 = iVar3 + -1) {
          *pfVar6 = (pUVar4->position).x;
          pUVar4 = (UIVertex *)&(pUVar4->position).y;
          pfVar6 = pfVar6 + 1;
        }
        pUVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
                 List_1_UnityEngine_UIVertex__get_Item
                           (&UStack_5,vertexList,0,
                            MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__get_Item_int_
                           );
        pfVar6 = &UStack_5.uv3.w;
        for (iVar3 = 0x1b; iVar3 != 0; iVar3 = iVar3 + -1) {
          *pfVar6 = (pUVar4->position).x;
          pUVar4 = (UIVertex *)&(pUVar4->position).y;
          pfVar6 = pfVar6 + 1;
        }
        fStack_7 = fStack_8 - in_stack_9;
        iStack_10 = 0;
        while (iStack_10 < (vertexList->fields)._size) {
          pUVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
                   List_1_UnityEngine_UIVertex__get_Item
                             ((UIVertex *)&stack0xfffffe10,vertexList,iStack_10,
                              MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__get_Item_int_
                             );
          pUVar11 = pUVar4;
          pfVar6 = &UStack_5.uv3.w;
          for (iVar3 = 0x1b; iVar3 != 0; iVar3 = iVar3 + -1) {
            *pfVar6 = (pUVar11->position).x;
            pUVar11 = (UIVertex *)&(pUVar11->position).y;
            pfVar6 = pfVar6 + 1;
          }
          fStack_12 = (float)(uStack_13 & 0xff) / _UNK_?;
          fStack_14 = (float)(uStack_13 >> 8 & 0xff) / _UNK_?;
          fStack_15 = (float)(uStack_13 >> 0x10 & 0xff) / _UNK_?;
          fStack_16 = (float)(uStack_13 >> 0x18) / _UNK_?;
          pUVar11 = &UStack_5;
          for (iVar3 = 0x1b; iVar3 != 0; iVar3 = iVar3 + -1) {
            (pUVar11->position).x = (pUVar4->position).x;
            pUVar4 = (UIVertex *)&(pUVar4->position).y;
            pUVar11 = (UIVertex *)&(pUVar11->position).y;
          }
          fStack_17 = (this->fields).top.r;
          fStack_18 = (this->fields).top.g;
          fStack_19 = (this->fields).top.b;
          fStack_20 = (this->fields).top.a;
          fStack_21 = (this->fields).bottom.r;
          fStack_22 = (this->fields).bottom.g;
          fStack_23 = (this->fields).bottom.b;
          fStack_24 = (this->fields).bottom.a;
          fVar25 = (UStack_5.position.y - in_stack_9) / fStack_7;
          if (fVar25 < 0.0) {
            fVar25 = 0.0;
          }
          else if (_UNK_? < fVar25) {
            fVar25 = _UNK_?;
          }
          fStack_14 = ((fStack_22 - fStack_18) * fVar25 + fStack_18) * fStack_14;
          fStack_15 = ((fStack_23 - fStack_19) * fVar25 + fStack_19) * fStack_15;
          fStack_16 = ((fStack_24 - fStack_20) * fVar25 + fStack_20) * fStack_16;
          fVar26 = (float10)func_?();
          fStack_12 = (float)fVar26;
          fVar26 = (float10)func_?();
          fStack_14 = (float)fVar26;
          fVar26 = (float10)func_?();
          fStack_15 = (float)fVar26;
          fVar26 = (float10)func_?();
          fStack_16 = (float)fVar26;
          uStack_27 = CONCAT31(CONCAT21(CONCAT11((char)(int)fVar26,(char)(int)fStack_15),
                                        (char)(int)fStack_14),(char)(int)fStack_12);
          uStack_13 = uStack_27;
          pfVar6 = &UStack_5.uv3.w;
          pfVar28 = (float *)&stack0xfffffd38;
          pMVar29 = 
          MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__set_Item_int__UnityEngine__UIVertex_
          ;
          for (iVar3 = 0x1b; iVar30 = iStack_10, iVar3 != 0; iVar3 = iVar3 + -1) {
            *pfVar28 = *pfVar6;
            pfVar6 = pfVar6 + 1;
            pfVar28 = pfVar28 + 1;
          }
          value.uv3.w = (float)pMVar29;
          auVar31 = in_stack_32._0_12_;
          auVar33 = in_stack_32._12_12_;
          auVar34 = in_stack_32._24_16_;
          uVar35 = in_stack_32._40_8_;
          auVar36 = in_stack_32._48_16_;
          auVar37 = in_stack_32._64_16_;
          auVar38 = in_stack_32._80_16_;
          value.position.x = (float)auVar31._0_4_;
          value.position.y = (float)auVar31._4_4_;
          value.position.z = (float)auVar31._8_4_;
          value.normal.x = (float)auVar33._0_4_;
          value.normal.y = (float)auVar33._4_4_;
          value.normal.z = (float)auVar33._8_4_;
          value.tangent.x = (float)auVar34._0_4_;
          value.tangent.y = (float)auVar34._4_4_;
          value.tangent.z = (float)auVar34._8_4_;
          value.tangent.w = (float)auVar34._12_4_;
          value.color.rgba = (int)uVar35;
          value.color.r = (char)((ulonglong)uVar35 >> 0x20);
          value.color.g = (char)((ulonglong)uVar35 >> 0x28);
          value.color.b = (char)((ulonglong)uVar35 >> 0x30);
          value.color.a = (char)((ulonglong)uVar35 >> 0x38);
          value.uv0.x = (float)auVar36._0_4_;
          value.uv0.y = (float)auVar36._4_4_;
          value.uv0.z = (float)auVar36._8_4_;
          value.uv0.w = (float)auVar36._12_4_;
          value.uv1.x = (float)auVar37._0_4_;
          value.uv1.y = (float)auVar37._4_4_;
          value.uv1.z = (float)auVar37._8_4_;
          value.uv1.w = (float)auVar37._12_4_;
          value.uv2.x = (float)auVar38._0_4_;
          value.uv2.y = (float)auVar38._4_4_;
          value.uv2.z = (float)auVar38._8_4_;
          value.uv2.w = (float)auVar38._12_4_;
          value.uv3.x = (float)in_stack_32._96_4_;
          value.uv3.y = (float)in_stack_32._100_4_;
          value.uv3.z = (float)in_stack_32._104_4_;
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
          List_1_UnityEngine_UIVertex__set_Item(vertexList,iStack_10,value,in_stack_39);
          iStack_10 = iVar30 + 1;
        }
      }
    }
  }
  return;
}


/* Void SetVertexColor(List`1[UnityEngine.UIVertex], Int32, Color) */

void Assembly-CSharp.dll::Gamestrap::GradientEffect::GradientEffect_SetVertexColor
               (GradientEffect *this,List_1_UnityEngine_UIVertex_ *vertexList,int32_t index,
               Color color,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  if (vertexList != (List_1_UnityEngine_UIVertex_ *)0x0) {
    __return_storage_ptr__ = (UIVertex *)&stack0xffffff24;
    puVar1 = &UNK_?;
    pLVar2 = vertexList;
    pUVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
             List_1_UnityEngine_UIVertex__get_Item
                       (__return_storage_ptr__,vertexList,index,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__get_Item_int_
                       );
    pfVar4 = afStack_5;
    for (iVar6 = 0x1b; iVar6 != 0; iVar6 = iVar6 + -1) {
      *pfVar4 = (pUVar3->position).x;
      pUVar3 = (UIVertex *)&(pUVar3->position).y;
      pfVar4 = pfVar4 + 1;
    }
    fVar7 = 0.0;
    puVar8 = &UNK_?;
    CVar9 = UnityEngine.CoreModule.dll::UnityEngine::Color32::Color32_op_Implicit
                      (color,(MethodInfo *)0x0);
    iStack_10 = CVar9.rgba;
    pfVar4 = afStack_5;
    pfVar11 = (float *)&stack0xfffffed0;
    pMVar12 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__set_Item_int__UnityEngine__UIVertex_
    ;
    for (iVar6 = 0x1b; iVar6 != 0; iVar6 = iVar6 + -1) {
      *pfVar11 = *pfVar4;
      pfVar4 = pfVar4 + 1;
      pfVar11 = pfVar11 + 1;
    }
    value.uv0.z = (float)puVar1;
    auVar13 = in_stack_14._0_12_;
    auVar15 = in_stack_14._12_12_;
    auVar16 = in_stack_14._24_16_;
    uVar17 = in_stack_14._40_8_;
    value.position.x = (float)auVar13._0_4_;
    value.position.y = (float)auVar13._4_4_;
    value.position.z = (float)auVar13._8_4_;
    value.normal.x = (float)auVar15._0_4_;
    value.normal.y = (float)auVar15._4_4_;
    value.normal.z = (float)auVar15._8_4_;
    value.tangent.x = (float)auVar16._0_4_;
    value.tangent.y = (float)auVar16._4_4_;
    value.tangent.z = (float)auVar16._8_4_;
    value.tangent.w = (float)auVar16._12_4_;
    value.color.rgba = (int)uVar17;
    value.color.r = (char)((ulonglong)uVar17 >> 0x20);
    value.color.g = (char)((ulonglong)uVar17 >> 0x28);
    value.color.b = (char)((ulonglong)uVar17 >> 0x30);
    value.color.a = (char)((ulonglong)uVar17 >> 0x38);
    value.uv0.x = (float)in_stack_14._48_4_;
    value.uv0.y = (float)in_stack_14._52_4_;
    value.uv0.w = (float)__return_storage_ptr__;
    value.uv1.x = (float)pLVar2;
    value.uv1.y = (float)puVar8;
    value.uv1.z = color.r;
    value.uv1.w = color.g;
    value.uv2.x = color.b;
    value.uv2.y = color.a;
    value.uv2.z = fVar7;
    value.uv2.w = (float)in_stack_18._0_4_;
    value.uv3.x = (float)in_stack_18._4_4_;
    value.uv3.y = (float)in_stack_18._8_4_;
    value.uv3.z = (float)in_stack_18._12_4_;
    value.uv3.w = (float)pMVar12;
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
    List_1_UnityEngine_UIVertex__set_Item(vertexList,index,value,in_stack_19);
    return;
  }
  func_?();
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}


/* GradientEffect() */

void Assembly-CSharp.dll::Gamestrap::GradientEffect::GradientEffect__ctor
               (GradientEffect *this,MethodInfo *method)

{
  fVar1 = _UNK_?;
  fVar2 = _UNK_?;
  fVar3 = _UNK_?;
  (this->fields).top.r = _UNK_?;
  (this->fields).top.g = fVar3;
  (this->fields).top.b = fVar2;
  (this->fields).top.a = fVar1;
  fVar1 = _UNK_?;
  fVar2 = _UNK_?;
  fVar3 = _UNK_?;
  (this->fields).bottom.r = _UNK_?;
  (this->fields).bottom.g = fVar3;
  (this->fields).bottom.b = fVar2;
  (this->fields).bottom.a = fVar1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

