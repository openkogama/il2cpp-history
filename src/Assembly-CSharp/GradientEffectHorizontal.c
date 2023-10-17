
/* Void ModifyMesh(VertexHelper) */

void Assembly-CSharp.dll::GradientEffectHorizontal::GradientEffectHorizontal_ModifyMesh
               (GradientEffectHorizontal *this,VertexHelper *vh,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::UIVertex>);
    cRam_? = '\x01';
  }
  cVar1 = (*(this->klass->vtable).IsActive.methodPtr)(this,(this->klass->vtable).IsActive.method);
  if (cVar1 == '\0') {
    return;
  }
  stream = (List_1_UnityEngine_UIVertex_ *)
           func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::UIVertex>);
  if ((stream != (List_1_UnityEngine_UIVertex_ *)0x0) &&
     (mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
      LowLevelList_1_System_Object___ctor
                ((LowLevelList_1_System_Object_ *)stream,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__List__),
     vh != (VertexHelper *)0x0)) {
    UnityEngine.UI.dll::UnityEngine::UI::VertexHelper::VertexHelper_GetUIVertexStream
              (vh,stream,(MethodInfo *)0x0);
    GradientEffectHorizontal_ModifyVertices(this,stream,(MethodInfo *)0x0);
    UnityEngine.UI.dll::UnityEngine::UI::VertexHelper::VertexHelper_Clear(vh,(MethodInfo *)0x0);
    UnityEngine.UI.dll::UnityEngine::UI::VertexHelper::VertexHelper_AddUIVertexTriangleStream
              (vh,stream,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ModifyVertices(List`1[UnityEngine.UIVertex]) */

void Assembly-CSharp.dll::GradientEffectHorizontal::GradientEffectHorizontal_ModifyVertices
               (GradientEffectHorizontal *this,List_1_UnityEngine_UIVertex_ *vertexList,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  cVar1 = (*(this->klass->vtable).IsActive.methodPtr)();
  if (cVar1 != '\0') {
    if (vertexList == (List_1_UnityEngine_UIVertex_ *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (3 < (vertexList->fields)._size) {
      if ((vertexList->fields)._size == 6) {
        GradientEffectHorizontal_SetVertexColor
                  (this,vertexList,0,(this->fields).left,(MethodInfo *)0x0);
        GradientEffectHorizontal_SetVertexColor
                  (this,vertexList,1,(this->fields).left,(MethodInfo *)0x0);
        GradientEffectHorizontal_SetVertexColor
                  (this,vertexList,2,(this->fields).right,(MethodInfo *)0x0);
        GradientEffectHorizontal_SetVertexColor
                  (this,vertexList,3,(this->fields).right,(MethodInfo *)0x0);
        GradientEffectHorizontal_SetVertexColor
                  (this,vertexList,4,(this->fields).right,(MethodInfo *)0x0);
        GradientEffectHorizontal_SetVertexColor
                  (this,vertexList,5,(this->fields).left,(MethodInfo *)0x0);
      }
      else {
        pUVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
                 List_1_UnityEngine_UIVertex__get_Item
                           (&UStack_4,vertexList,(vertexList->fields)._size + -1,
                            MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__get_Item_int_
                           );
        pfVar5 = (float *)&stack0xfffffe7c;
        for (iVar6 = 0x1b; iVar6 != 0; iVar6 = iVar6 + -1) {
          *pfVar5 = (pUVar3->position).x;
          pUVar3 = (UIVertex *)&(pUVar3->position).y;
          pfVar5 = pfVar5 + 1;
        }
        pUVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
                 List_1_UnityEngine_UIVertex__get_Item
                           (&UStack_4,vertexList,0,
                            MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__get_Item_int_
                           );
        pfVar5 = &UStack_4.uv3.w;
        for (iVar6 = 0x1b; iVar6 != 0; iVar6 = iVar6 + -1) {
          *pfVar5 = (pUVar3->position).x;
          pUVar3 = (UIVertex *)&(pUVar3->position).y;
          pfVar5 = pfVar5 + 1;
        }
        fStack_7 = fStack_8 - in_stack_9;
        iStack_10 = 0;
        while (iStack_10 < (vertexList->fields)._size) {
          pUVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
                   List_1_UnityEngine_UIVertex__get_Item
                             ((UIVertex *)&stack0xfffffe10,vertexList,iStack_10,
                              MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__get_Item_int_
                             );
          pUVar11 = pUVar3;
          pfVar5 = &UStack_4.uv3.w;
          for (iVar6 = 0x1b; iVar6 != 0; iVar6 = iVar6 + -1) {
            *pfVar5 = (pUVar11->position).x;
            pUVar11 = (UIVertex *)&(pUVar11->position).y;
            pfVar5 = pfVar5 + 1;
          }
          fStack_12 = (float)(uStack_13 & 0xff) / _UNK_?;
          fStack_14 = (float)(uStack_13 >> 8 & 0xff) / _UNK_?;
          fStack_15 = (float)(uStack_13 >> 0x10 & 0xff) / _UNK_?;
          fStack_16 = (float)(uStack_13 >> 0x18) / _UNK_?;
          pUVar11 = &UStack_4;
          for (iVar6 = 0x1b; iVar6 != 0; iVar6 = iVar6 + -1) {
            (pUVar11->position).x = (pUVar3->position).x;
            pUVar3 = (UIVertex *)&(pUVar3->position).y;
            pUVar11 = (UIVertex *)&(pUVar11->position).y;
          }
          fStack_17 = (this->fields).left.r;
          fStack_18 = (this->fields).left.g;
          fStack_19 = (this->fields).left.b;
          fStack_20 = (this->fields).left.a;
          fStack_21 = (this->fields).right.r;
          fStack_22 = (this->fields).right.g;
          fStack_23 = (this->fields).right.b;
          fStack_24 = (this->fields).right.a;
          fVar25 = (UStack_4.position.y - in_stack_9) / fStack_7;
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
          pfVar5 = &UStack_4.uv3.w;
          pfVar28 = (float *)&stack0xfffffd38;
          pMVar29 = 
          MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__set_Item_int__UnityEngine__UIVertex_
          ;
          for (iVar6 = 0x1b; iVar30 = iStack_10, iVar6 != 0; iVar6 = iVar6 + -1) {
            *pfVar28 = *pfVar5;
            pfVar5 = pfVar5 + 1;
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

void Assembly-CSharp.dll::GradientEffectHorizontal::GradientEffectHorizontal_SetVertexColor
               (GradientEffectHorizontal *this,List_1_UnityEngine_UIVertex_ *vertexList,
               int32_t index,Color color,MethodInfo *method)

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

