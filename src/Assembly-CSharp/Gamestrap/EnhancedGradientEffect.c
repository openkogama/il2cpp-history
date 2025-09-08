
/* Void ModifyMesh(VertexHelper) */

void Assembly-CSharp.dll::Gamestrap::EnhancedGradientEffect::EnhancedGradientEffect_ModifyMesh
               (EnhancedGradientEffect *this,VertexHelper *vh,MethodInfo *method)

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
    EnhancedGradientEffect_ModifyVertices(this,stream,(MethodInfo *)0x0);
    UnityEngine.UI.dll::UnityEngine::UI::VertexHelper::VertexHelper_Clear(vh,(MethodInfo *)0x0);
    UnityEngine.UI.dll::UnityEngine::UI::VertexHelper::VertexHelper_AddUIVertexTriangleStream
              (vh,stream,(MethodInfo *)0x0);
  }
  return;
}


/* Void ModifyVertices(List`1[UnityEngine.UIVertex]) */

void Assembly-CSharp.dll::Gamestrap::EnhancedGradientEffect::EnhancedGradientEffect_ModifyVertices
               (EnhancedGradientEffect *this,List_1_UnityEngine_UIVertex_ *vertexList,
               MethodInfo *method)

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
    if ((vertexList->fields)._size != 0) {
      fStack_3 = _UNK_?;
      fStack_4 = _UNK_?;
      fVar5 = _UNK_?;
      for (fStack_6 = 0.0; (int)fStack_6 < (vertexList->fields)._size;
          fStack_6 = (float)((int)fStack_6 + 1)) {
        pUVar7 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
                 List_1_UnityEngine_UIVertex__get_Item
                           ((UIVertex *)(auStack_8 + 0x6c),vertexList,(int32_t)fStack_6,
                            MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__get_Item_int_
                           );
        fVar5 = fStack_3;
        pfVar9 = afStack_10;
        for (iVar11 = 0x1b; iVar11 != 0; iVar11 = iVar11 + -1) {
          *pfVar9 = (pUVar7->position).x;
          pUVar7 = (UIVertex *)&(pUVar7->position).y;
          pfVar9 = pfVar9 + 1;
        }
        if (afStack_10[1] < fVar5) {
          fStack_3 = afStack_10[1];
          fVar5 = afStack_10[1];
        }
        if (fStack_4 < afStack_10[1]) {
          fStack_4 = afStack_10[1];
        }
      }
      fStack_4 = fStack_4 - fVar5;
      iVar11 = 0;
      if (fStack_4 == 0.0) {
        for (; iVar11 < (vertexList->fields)._size; iVar11 = iVar11 + 1) {
          iStack_12 = iVar11;
          pUVar7 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
                   List_1_UnityEngine_UIVertex__get_Item
                             ((UIVertex *)auStack_8,vertexList,iVar11,
                              MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__get_Item_int_
                             );
          pfVar9 = afStack_10;
          for (iVar11 = 0x1b; iVar11 != 0; iVar11 = iVar11 + -1) {
            *pfVar9 = (pUVar7->position).x;
            pUVar7 = (UIVertex *)&(pUVar7->position).y;
            pfVar9 = pfVar9 + 1;
          }
          auStack_8._0_4_ = ((float)(uStack_13 & 0xff) / _UNK_?) * (this->fields).top.r;
          fStack_14 = ((float)(uStack_13 >> 8 & 0xff) / _UNK_?) * (this->fields).top.g;
          fStack_15 = ((float)(uStack_13 >> 0x10 & 0xff) / _UNK_?) * (this->fields).top.b;
          fStack_16 = ((float)(uStack_13 >> 0x18) / _UNK_?) * (this->fields).top.a;
          if ((float)auStack_8._0_4_ < 0.0) {
            auStack_8._0_4_ = 0.0;
          }
          else if (_UNK_? < (float)auStack_8._0_4_) {
            auStack_8._0_4_ = _UNK_?;
          }
          auStack_8._0_4_ = (float)auStack_8._0_4_ * _UNK_?;
          fVar17 = (float10)func_?();
          fStack_18 = (float)fVar17;
          if (fStack_14 < 0.0) {
            auStack_8._0_4_ = 0.0;
          }
          else {
            auStack_8._0_4_ = fStack_14;
            if (_UNK_? < fStack_14) {
              auStack_8._0_4_ = _UNK_?;
            }
          }
          auStack_8._0_4_ = (float)auStack_8._0_4_ * _UNK_?;
          fVar17 = (float10)func_?();
          fStack_6 = (float)fVar17;
          if (fStack_15 < 0.0) {
            auStack_8._0_4_ = 0.0;
          }
          else {
            auStack_8._0_4_ = fStack_15;
            if (_UNK_? < fStack_15) {
              auStack_8._0_4_ = _UNK_?;
            }
          }
          auStack_8._0_4_ = (float)auStack_8._0_4_ * _UNK_?;
          fVar17 = (float10)func_?();
          fStack_15 = (float)fVar17;
          if (fStack_16 < 0.0) {
            auStack_8._0_4_ = 0.0;
          }
          else {
            auStack_8._0_4_ = fStack_16;
            if (_UNK_? < fStack_16) {
              auStack_8._0_4_ = _UNK_?;
            }
          }
          auStack_8._0_4_ = (float)auStack_8._0_4_ * _UNK_?;
          fVar17 = (float10)func_?();
          fStack_14 = (float)fVar17;
          if (0.0 <= (float)fVar17) {
            iStack_19 = CONCAT31(iStack_19._1_3_,(char)(int)fVar17);
          }
          else {
            iStack_19 = (int)fVar17;
          }
          uStack_20 = CONCAT13((char)iStack_19,
                              (int3)CONCAT31(CONCAT21((short)(int)fStack_15,(char)(int)fStack_6),
                                             (char)(int)fStack_18));
          uStack_13 = uStack_20;
          pfVar9 = afStack_10;
          pfVar21 = (float *)&stack0xfffffd78;
          pMVar22 = 
          MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__set_Item_int__UnityEngine__UIVertex_
          ;
          for (iVar23 = 0x1b; iVar11 = iStack_12, iVar23 != 0; iVar23 = iVar23 + -1) {
            *pfVar21 = *pfVar9;
            pfVar9 = pfVar9 + 1;
            pfVar21 = pfVar21 + 1;
          }
          value_00.uv3.w = (float)pMVar22;
          auVar24 = in_stack_25._0_12_;
          auVar26 = in_stack_25._12_12_;
          auVar27 = in_stack_25._24_16_;
          uVar28 = in_stack_25._40_8_;
          auVar29 = in_stack_25._48_16_;
          auVar30 = in_stack_25._64_16_;
          auVar31 = in_stack_25._80_16_;
          value_00.position.x = (float)auVar24._0_4_;
          value_00.position.y = (float)auVar24._4_4_;
          value_00.position.z = (float)auVar24._8_4_;
          value_00.normal.x = (float)auVar26._0_4_;
          value_00.normal.y = (float)auVar26._4_4_;
          value_00.normal.z = (float)auVar26._8_4_;
          value_00.tangent.x = (float)auVar27._0_4_;
          value_00.tangent.y = (float)auVar27._4_4_;
          value_00.tangent.z = (float)auVar27._8_4_;
          value_00.tangent.w = (float)auVar27._12_4_;
          value_00.color.rgba = (int)uVar28;
          value_00.color.r = (char)((ulonglong)uVar28 >> 0x20);
          value_00.color.g = (char)((ulonglong)uVar28 >> 0x28);
          value_00.color.b = (char)((ulonglong)uVar28 >> 0x30);
          value_00.color.a = (char)((ulonglong)uVar28 >> 0x38);
          value_00.uv0.x = (float)auVar29._0_4_;
          value_00.uv0.y = (float)auVar29._4_4_;
          value_00.uv0.z = (float)auVar29._8_4_;
          value_00.uv0.w = (float)auVar29._12_4_;
          value_00.uv1.x = (float)auVar30._0_4_;
          value_00.uv1.y = (float)auVar30._4_4_;
          value_00.uv1.z = (float)auVar30._8_4_;
          value_00.uv1.w = (float)auVar30._12_4_;
          value_00.uv2.x = (float)auVar31._0_4_;
          value_00.uv2.y = (float)auVar31._4_4_;
          value_00.uv2.z = (float)auVar31._8_4_;
          value_00.uv2.w = (float)auVar31._12_4_;
          value_00.uv3.x = (float)in_stack_25._96_4_;
          value_00.uv3.y = (float)in_stack_25._100_4_;
          value_00.uv3.z = (float)in_stack_25._104_4_;
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
          List_1_UnityEngine_UIVertex__set_Item(vertexList,iStack_12,value_00,in_stack_32);
        }
      }
      else {
        for (; iVar11 < (vertexList->fields)._size; iVar11 = iVar11 + 1) {
          iStack_19 = iVar11;
          pUVar7 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
                   List_1_UnityEngine_UIVertex__get_Item
                             ((UIVertex *)auStack_8,vertexList,iVar11,
                              MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__get_Item_int_
                             );
          pUVar33 = pUVar7;
          pfVar9 = afStack_10;
          for (iVar11 = 0x1b; iVar11 != 0; iVar11 = iVar11 + -1) {
            *pfVar9 = (pUVar33->position).x;
            pUVar33 = (UIVertex *)&(pUVar33->position).y;
            pfVar9 = pfVar9 + 1;
          }
          pfVar9 = (float *)(auStack_8 + 0x6c);
          for (iVar11 = 0x1b; iVar11 != 0; iVar11 = iVar11 + -1) {
            *pfVar9 = (pUVar7->position).x;
            pUVar7 = (UIVertex *)&(pUVar7->position).y;
            pfVar9 = pfVar9 + 1;
          }
          fStack_34 = (this->fields).top.r;
          fStack_35 = (this->fields).top.g;
          fStack_36 = (this->fields).top.b;
          fStack_37 = (this->fields).top.a;
          fStack_38 = (this->fields).bottom.r;
          fStack_39 = (this->fields).bottom.g;
          fStack_40 = (this->fields).bottom.b;
          fStack_41 = (this->fields).bottom.a;
          fVar5 = _UNK_? - (fStack_42 - fStack_3) / fStack_4;
          if (fVar5 < 0.0) {
            fVar5 = 0.0;
          }
          else if (_UNK_? < fVar5) {
            fVar5 = _UNK_?;
          }
          fStack_16 = ((float)(uStack_13 >> 8 & 0xff) / _UNK_?) *
                      ((fStack_39 - fStack_35) * fVar5 + fStack_35);
          fStack_18 = ((float)(uStack_13 & 0xff) / _UNK_?) *
                      ((fStack_38 - fStack_34) * fVar5 + fStack_34);
          fStack_15 = ((float)(uStack_13 >> 0x10 & 0xff) / _UNK_?) *
                      ((fStack_40 - fStack_36) * fVar5 + fStack_36);
          fStack_6 = ((float)(uStack_13 >> 0x18) / _UNK_?) *
                     ((fStack_41 - fStack_37) * fVar5 + fStack_37);
          if (fStack_18 < 0.0) {
            auStack_8._0_4_ = 0.0;
          }
          else {
            auStack_8._0_4_ = fStack_18;
            if (_UNK_? < fStack_18) {
              auStack_8._0_4_ = _UNK_?;
            }
          }
          auStack_8._0_4_ = (float)auStack_8._0_4_ * _UNK_?;
          fVar17 = (float10)func_?();
          fStack_14 = (float)fVar17;
          if (fStack_16 < 0.0) {
            auStack_8._0_4_ = 0.0;
          }
          else {
            auStack_8._0_4_ = fStack_16;
            if (_UNK_? < fStack_16) {
              auStack_8._0_4_ = _UNK_?;
            }
          }
          auStack_8._0_4_ = (float)auStack_8._0_4_ * _UNK_?;
          fVar17 = (float10)func_?();
          fStack_18 = (float)fVar17;
          if (fStack_15 < 0.0) {
            auStack_8._0_4_ = 0.0;
          }
          else {
            auStack_8._0_4_ = fStack_15;
            if (_UNK_? < fStack_15) {
              auStack_8._0_4_ = _UNK_?;
            }
          }
          auStack_8._0_4_ = (float)auStack_8._0_4_ * _UNK_?;
          fVar17 = (float10)func_?();
          fStack_16 = (float)fVar17;
          if (fStack_6 < 0.0) {
            auStack_8._0_4_ = 0.0;
          }
          else {
            auStack_8._0_4_ = fStack_6;
            if (_UNK_? < fStack_6) {
              auStack_8._0_4_ = _UNK_?;
            }
          }
          auStack_8._0_4_ = (float)auStack_8._0_4_ * _UNK_?;
          fVar17 = (float10)func_?();
          fStack_15 = (float)fVar17;
          if (0.0 <= (float)fVar17) {
            iStack_12 = CONCAT31(iStack_12._1_3_,(char)(int)fVar17);
          }
          else {
            iStack_12 = (int)fVar17;
          }
          uStack_20 = CONCAT13((char)iStack_12,
                              (int3)CONCAT31(CONCAT21((short)(int)fStack_16,(char)(int)fStack_18),
                                             (char)(int)fStack_14));
          uStack_13 = uStack_20;
          pfVar9 = afStack_10;
          pfVar21 = (float *)&stack0xfffffd78;
          pMVar22 = 
          MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__set_Item_int__UnityEngine__UIVertex_
          ;
          for (iVar23 = 0x1b; iVar11 = iStack_19, iVar23 != 0; iVar23 = iVar23 + -1) {
            *pfVar21 = *pfVar9;
            pfVar9 = pfVar9 + 1;
            pfVar21 = pfVar21 + 1;
          }
          value.uv3.w = (float)pMVar22;
          auVar24 = in_stack_25._0_12_;
          auVar26 = in_stack_25._12_12_;
          auVar27 = in_stack_25._24_16_;
          uVar28 = in_stack_25._40_8_;
          auVar29 = in_stack_25._48_16_;
          auVar30 = in_stack_25._64_16_;
          auVar31 = in_stack_25._80_16_;
          value.position.x = (float)auVar24._0_4_;
          value.position.y = (float)auVar24._4_4_;
          value.position.z = (float)auVar24._8_4_;
          value.normal.x = (float)auVar26._0_4_;
          value.normal.y = (float)auVar26._4_4_;
          value.normal.z = (float)auVar26._8_4_;
          value.tangent.x = (float)auVar27._0_4_;
          value.tangent.y = (float)auVar27._4_4_;
          value.tangent.z = (float)auVar27._8_4_;
          value.tangent.w = (float)auVar27._12_4_;
          value.color.rgba = (int)uVar28;
          value.color.r = (char)((ulonglong)uVar28 >> 0x20);
          value.color.g = (char)((ulonglong)uVar28 >> 0x28);
          value.color.b = (char)((ulonglong)uVar28 >> 0x30);
          value.color.a = (char)((ulonglong)uVar28 >> 0x38);
          value.uv0.x = (float)auVar29._0_4_;
          value.uv0.y = (float)auVar29._4_4_;
          value.uv0.z = (float)auVar29._8_4_;
          value.uv0.w = (float)auVar29._12_4_;
          value.uv1.x = (float)auVar30._0_4_;
          value.uv1.y = (float)auVar30._4_4_;
          value.uv1.z = (float)auVar30._8_4_;
          value.uv1.w = (float)auVar30._12_4_;
          value.uv2.x = (float)auVar31._0_4_;
          value.uv2.y = (float)auVar31._4_4_;
          value.uv2.z = (float)auVar31._8_4_;
          value.uv2.w = (float)auVar31._12_4_;
          value.uv3.x = (float)in_stack_25._96_4_;
          value.uv3.y = (float)in_stack_25._100_4_;
          value.uv3.z = (float)in_stack_25._104_4_;
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
          List_1_UnityEngine_UIVertex__set_Item(vertexList,iStack_19,value,in_stack_32);
        }
      }
    }
  }
  return;
}


/* EnhancedGradientEffect() */

void Assembly-CSharp.dll::Gamestrap::EnhancedGradientEffect::EnhancedGradientEffect__ctor
               (EnhancedGradientEffect *this,MethodInfo *method)

{
  fVar1 = _UNK_?;
  fVar2 = _UNK_?;
  fVar3 = _UNK_?;
  fVar4 = _UNK_?;
  (this->fields).top.r = _UNK_?;
  (this->fields).top.g = fVar3;
  (this->fields).top.b = fVar2;
  (this->fields).top.a = fVar1;
  (this->fields).bottom.r = fVar4;
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

