
/* IEnumerator GetRegexMatchedTagCollection(String, Int32 ByRef) */

IEnumerator *
Assembly-CSharp.dll::UnityEngine::UI::LetterSpacing::LetterSpacing_GetRegexMatchedTagCollection
          (LetterSpacing *this,String *line,int32_t *lineLengthWithoutTags,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&TypeInfo__System__Text__RegularExpressions__Match);
    func_?(&TypeInfo__System__Text__RegularExpressions__Regex);
    func_?(&StringLiteral__b____b___i____i___size__Ptr_____s);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Text__RegularExpressions__Regex->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Text__RegularExpressions__Regex);
  }
  this_00 = System.dll::System::Text::RegularExpressions::Regex::Regex_Matches
                      (line,StringLiteral__b____b___i____i___size__Ptr_____s,(MethodInfo *)0x0);
  iStack_4 = 0;
  *lineLengthWithoutTags = 0;
  if (this_00 != (MatchCollection *)0x0) {
    iVar5 = System.dll::System::Text::RegularExpressions::MatchCollection::MatchCollection_get_Count
                      (this_00,(MethodInfo *)0x0);
    iVar6 = 0;
    if (iVar5 < 1) {
code_?:
      if (line != (String *)0x0) {
        *lineLengthWithoutTags = (line->fields)._stringLength - iVar6;
        pIVar7 = System.dll::System::Text::RegularExpressions::MatchCollection::
                 MatchCollection_GetEnumerator(this_00,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return pIVar7;
      }
    }
    else {
      pIVar7 = System.dll::System::Text::RegularExpressions::MatchCollection::
               MatchCollection_GetEnumerator(this_00,(MethodInfo *)0x0);
      uStack_1 = 1;
      while (pIVar7 != (IEnumerator *)0x0) {
        cVar8 = func_?();
        if (cVar8 == '\0') {
          uStack_1 = 0xffffffff;
          iVar6 = func_?();
          if (iVar6 != 0) {
            func_?();
          }
          uStack_1 = 0xffffffff;
          iVar6 = iStack_4;
          goto code_?;
        }
        if (pIVar7 == (IEnumerator *)0x0) break;
        pIVar9 = pIVar7->klass;
        uVar10 = 0;
        uVar11._0_1_ = (pIVar9->_1).rank;
        uVar11._1_1_ = (pIVar9->_1).minimumAlignment;
        if (uVar11 != 0) {
          do {
            if (pIVar9->interfaceOffsets[uVar10].interfaceType ==
                (Il2CppClass *)TypeInfo__System__Collections__IEnumerator) {
              ppMVar12 = &(&(pIVar7->klass->vtable).get_Current)
                         [pIVar7->klass->interfaceOffsets[uVar10].offset].method;
              goto code_?;
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 < uVar11);
        }
        ppMVar12 = (MethodInfo **)func_?();
code_?:
        piVar13 = (int *)(*(code *)*ppMVar12)();
        if (piVar13 == (int *)0x0) break;
        if ((*(byte *)(*piVar13 + 0xb8) <
             (TypeInfo__System__Text__RegularExpressions__Match->_1).naturalAligment) ||
           (*(Match__Class **)
             (*(int *)(*piVar13 + 100) + -4 +
             (uint)(TypeInfo__System__Text__RegularExpressions__Match->_1).naturalAligment * 4) !=
            TypeInfo__System__Text__RegularExpressions__Match)) goto code_?;
        iStack_4 = iStack_4 + piVar13[3];
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  pIVar7 = (IEnumerator *)(*pcVar14)();
  return pIVar7;
}


/* Void ModifyMesh(VertexHelper) */

void Assembly-CSharp.dll::UnityEngine::UI::LetterSpacing::LetterSpacing_ModifyMesh
               (LetterSpacing *this,VertexHelper *vh,MethodInfo *method)

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
    LetterSpacing_ModifyVertices(this,stream,(MethodInfo *)0x0);
    UnityEngine.UI.dll::UnityEngine::UI::VertexHelper::VertexHelper_Clear(vh,(MethodInfo *)0x0);
    UnityEngine.UI.dll::UnityEngine::UI::VertexHelper::VertexHelper_AddUIVertexTriangleStream
              (vh,stream,(MethodInfo *)0x0);
  }
  return;
}


/* Void ModifyVertices(List`1[UnityEngine.UIVertex]) */

void Assembly-CSharp.dll::UnityEngine::UI::LetterSpacing::LetterSpacing_ModifyVertices
               (LetterSpacing *this,List_1_UnityEngine_UIVertex_ *verts,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  cVar1 = (*(code *)(this->klass->vtable).IsActive.method)();
  if (cVar1 == '\0') {
    return;
  }
  this_01 = (Text *)UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                              ((Component *)this,
                               UnityEngine__UI__Text_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::Text>__
                              );
  pTStack_2 = this_01;
  if (this_01 != (Text *)0x0) {
    pSVar3 = (String *)(*(code *)(this_01->klass->vtable).get_text.method)();
    pSStack_4 = pSVar3;
    this_02 = UnityEngine.UI.dll::UnityEngine::UI::Text::Text_get_cachedTextGenerator
                        (this_01,(MethodInfo *)0x0);
    if ((this_02 != (TextGenerator *)0x0) &&
       (unaff_ESI.m_CachedPtr =
             UnityEngine.TextRenderingModule.dll::UnityEngine::TextGenerator::
             TextGenerator_get_lines(this_02,(MethodInfo *)0x0),
       OStack_5.m_CachedPtr = unaff_ESI.m_CachedPtr, unaff_ESI.m_CachedPtr != (MethodInfo *)0x0)) {
      OStack_5.m_CachedPtr = unaff_ESI.m_CachedPtr;
      this_01 = (Text *)func_?();
      while (this_01 = (Text *)((int)&this_01[-1].fields.m_TempVerts + 3), 0 < (int)this_01) {
        pBStack_6 = (BaseMeshEffect__Class *)((MethodInfo *)unaff_ESI.m_CachedPtr)->methodPointer;
        uVar7 = 0;
        ppSStack_8 = (String **)0x0;
        uVar9._0_1_ = (pBStack_6->_1).rank;
        uVar9._1_1_ = (pBStack_6->_1).minimumAlignment;
        pMStack_10 = (MethodInfo *)(uint)uVar9;
        if (uVar9 != 0) {
          do {
            unaff_ESI.m_CachedPtr = OStack_5.m_CachedPtr;
            if (pBStack_6->interfaceOffsets[uVar7].interfaceType ==
                (Il2CppClass *)
                TypeInfo__System__Collections__Generic__IList<UnityEngine::UILineInfo>) {
              ppMVar11 = &(&(((BaseMeshEffect__Class *)
                            ((MethodInfo *)OStack_5.m_CachedPtr)->methodPointer)->vtable).Equals)
                         [((BaseMeshEffect__Class *)
                          ((MethodInfo *)OStack_5.m_CachedPtr)->methodPointer)->interfaceOffsets
                          [uVar7].offset].method;
              goto code_?;
            }
            uVar7 = uVar7 + 1;
          } while (uVar7 < uVar9);
        }
        ppMVar11 = (MethodInfo **)func_?();
code_?:
        piVar12 = (int32_t *)(*(code *)*ppMVar11)();
        BStack_13.fields.m_Graphic = (Graphic *)*piVar12;
        iStack_14 = piVar12[1];
        iStack_15 = piVar12[2];
        iStack_16 = piVar12[3];
        if (pSStack_4 == (String *)0x0) goto code_?;
        pSStack_17 = mscorlib.dll::System::String::String_Insert
                               (pSStack_4,(int32_t)BStack_13.fields.m_Graphic,StringLiteral_u000A,
                                (MethodInfo *)0x0);
        uVar9 = 0;
        pBStack_6 = (BaseMeshEffect__Class *)((MethodInfo *)unaff_ESI.m_CachedPtr)->methodPointer;
        ppSStack_8 = (String **)0x0;
        uVar7._0_1_ = (pBStack_6->_1).rank;
        uVar7._1_1_ = (pBStack_6->_1).minimumAlignment;
        pMStack_10 = (MethodInfo *)(uint)uVar7;
        if (uVar7 != 0) {
          do {
            unaff_ESI.m_CachedPtr = OStack_5.m_CachedPtr;
            if (pBStack_6->interfaceOffsets[uVar9].interfaceType ==
                (Il2CppClass *)
                TypeInfo__System__Collections__Generic__IList<UnityEngine::UILineInfo>) {
              puVar18 = (undefined4 *)
                        (*(int *)OStack_5.m_CachedPtr + 0xc0 +
                        *(int *)(*(int *)(*(int *)OStack_5.m_CachedPtr + 0x58) + (uint)uVar9 * 8 +
                                4) * 8);
              goto code_?;
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 < uVar7);
        }
        puVar18 = (undefined4 *)func_?();
code_?:
        unaff_EBX = &BStack_13;
        in_stack_19 = unaff_ESI.m_CachedPtr;
        piVar20 = (int *)(*(code *)*puVar18)();
        BStack_13.fields.m_Graphic = (Graphic *)*piVar20;
        iStack_14 = piVar20[1];
        iStack_15 = piVar20[2];
        iStack_16 = piVar20[3];
        if (pSStack_17 == (String *)0x0) goto code_?;
        pSVar3 = mscorlib.dll::System::String::String_Remove
                           (pSStack_17,(int32_t)&BStack_13.fields.m_Graphic[-1].fields.field_0x5b,1,
                            (MethodInfo *)0x0);
        pSStack_4 = pSVar3;
      }
      if (pSVar3 != (String *)0x0) {
        pSStack_21 = mscorlib.dll::System::String::String_Split
                               (pSVar3,10,StringSplitOptions__Enum_None,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        this_00 = pTStack_2;
        bVar22 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                          ((Object_1 *)pTStack_2,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar22 != 0) {
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                    ((Object *)StringLiteral_LetterSpacing__Missing_Text_comp,(MethodInfo *)0x0);
          return;
        }
        ppSStack_8 = (String **)(this->fields).m_spacing;
        iVar23 = UnityEngine.UI.dll::UnityEngine::UI::Text::Text_get_fontSize
                           (this_00,(MethodInfo *)0x0);
        this_01 = (Text *)0x0;
        fStack_24 = ((float)iVar23 * (float)ppSStack_8) / _UNK_?;
        fStack_25 = 0.0;
        if ((this->fields).useRichText == 0) {
          bStack_26 = 0;
        }
        else {
          bStack_26 = UnityEngine.UI.dll::UnityEngine::UI::Text::Text_get_supportRichText
                               (this_00,(MethodInfo *)0x0);
        }
        unaff_ESI.m_CachedPtr = (MethodInfo *)0x0;
        pSStack_4 = (String *)0x0;
        pMStack_27 = (MethodInfo *)0x0;
        TVar28 = UnityEngine.UI.dll::UnityEngine::UI::Text::Text_get_alignment
                           (pTStack_2,(MethodInfo *)0x0);
        switch(TVar28) {
        case TextAnchor__Enum_UpperLeft:
        case TextAnchor__Enum_MiddleLeft:
        case TextAnchor__Enum_LowerLeft:
          fStack_25 = 0.0;
          break;
        case TextAnchor__Enum_UpperCenter:
        case TextAnchor__Enum_MiddleCenter:
        case TextAnchor__Enum_LowerCenter:
          fStack_25 = _UNK_?;
          break;
        case TextAnchor__Enum_UpperRight:
        case TextAnchor__Enum_MiddleRight:
        case TextAnchor__Enum_LowerRight:
          fStack_25 = _UNK_?;
        }
        pBStack_6 = (BaseMeshEffect__Class *)0x0;
        if (pSStack_21 != (String__Array *)0x0) {
          ppSStack_8 = pSStack_21->vector;
          while( true ) {
            if ((int)pSStack_21->max_length <= (int)pBStack_6) {
              return;
            }
            uVar29 = 0;
            if ((BaseMeshEffect__Class *)pSStack_21->max_length <= pBStack_6) break;
            pSStack_30 = *ppSStack_8;
            if (pSStack_30 == (String *)0x0) goto code_?;
            OStack_5.m_CachedPtr = (void *)(pSStack_30->fields)._stringLength;
            pSVar3 = pSStack_4;
            if (bStack_26 != 0) {
              pSVar3 = (String *)
                       LetterSpacing_GetRegexMatchedTagCollection
                                 (this,pSStack_30,(int32_t *)&OStack_5,(MethodInfo *)0x0);
              unaff_ESI.m_CachedPtr = (MethodInfo *)0x0;
              pMStack_27 = (MethodInfo *)0x0;
              pSStack_4 = pSVar3;
              if (pSVar3 == (String *)0x0) goto code_?;
              in_stack_19 = (MethodInfo *)0x0;
              unaff_EBX = (BaseMeshEffect *)&UNK_?;
              cVar1 = func_?();
              if (cVar1 != '\0') {
                iStack_31 = func_?();
                if (iStack_31 == 0) {
                  pMStack_27 = (MethodInfo *)0x0;
                }
                else {
                  unaff_ESI.m_CachedPtr = (void *)func_?();
                  uVar29 = 0;
                  pMStack_27 = unaff_ESI.m_CachedPtr;
                  if (unaff_ESI.m_CachedPtr == (MethodInfo *)0x0) goto code_?;
                }
              }
            }
            pMVar32 = (MethodInfo *)0x0;
            pTStack_2 = (Text *)0x0;
            fStack_33 = (float)(int)&((MethodInfo *)((int)OStack_5.m_CachedPtr + -0x30))->field_0x2f
                        * fStack_24 * fStack_25;
            while (OStack_5.m_CachedPtr = pMVar32, (int)pMVar32 < (pSStack_30->fields)._stringLength
                  ) {
              if (((bStack_26 == 0) || (unaff_ESI.m_CachedPtr == (MethodInfo *)0x0)) ||
                 ((((BaseMeshEffect__Fields *)&((MethodInfo *)unaff_ESI.m_CachedPtr)->invoker_method
                   )->_)._._._._.m_CachedPtr != pMVar32)) {
                iStack_34 = (int)this_01 * 6 + 1;
                iStack_31 = (int)this_01 * 6;
                iStack_35 = (int)this_01 * 6 + 2;
                iStack_36 = (int)this_01 * 6 + 3;
                pSStack_17 = (String *)((int)this_01 * 6 + 4);
                unaff_ESI.m_CachedPtr = (void *)((int)this_01 * 6 + 5);
                pMStack_10 = unaff_ESI.m_CachedPtr;
                if (verts == (List_1_UnityEngine_UIVertex_ *)0x0) goto code_?;
                if ((verts->fields)._size + -1 < (int)unaff_ESI.m_CachedPtr) {
                  return;
                }
                puVar18 = (undefined4 *)func_?();
                puVar37 = &uStack_38;
                for (iVar39 = 0x1b; iVar39 != 0; iVar39 = iVar39 + -1) {
                  *(undefined4 *)puVar37 = *puVar18;
                  puVar18 = puVar18 + 1;
                  puVar37 = (undefined8 *)((int)puVar37 + 4);
                }
                puVar18 = (undefined4 *)func_?();
                puVar37 = &uStack_40;
                for (iVar39 = 0x1b; iVar39 != 0; iVar39 = iVar39 + -1) {
                  *(undefined4 *)puVar37 = *puVar18;
                  puVar18 = puVar18 + 1;
                  puVar37 = (undefined8 *)((int)puVar37 + 4);
                }
                puVar18 = (undefined4 *)func_?();
                puVar37 = &uStack_41;
                for (iVar39 = 0x1b; iVar39 != 0; iVar39 = iVar39 + -1) {
                  *(undefined4 *)puVar37 = *puVar18;
                  puVar18 = puVar18 + 1;
                  puVar37 = (undefined8 *)((int)puVar37 + 4);
                }
                puVar18 = (undefined4 *)func_?();
                puVar37 = &uStack_42;
                for (iVar39 = 0x1b; iVar39 != 0; iVar39 = iVar39 + -1) {
                  *(undefined4 *)puVar37 = *puVar18;
                  puVar18 = puVar18 + 1;
                  puVar37 = (undefined8 *)((int)puVar37 + 4);
                }
                puVar18 = (undefined4 *)func_?();
                puVar37 = &uStack_43;
                for (iVar39 = 0x1b; iVar39 != 0; iVar39 = iVar39 + -1) {
                  *(undefined4 *)puVar37 = *puVar18;
                  puVar18 = puVar18 + 1;
                  puVar37 = (undefined8 *)((int)puVar37 + 4);
                }
                puVar18 = (undefined4 *)func_?();
                puVar37 = &uStack_44;
                for (iVar39 = 0x1b; iVar39 != 0; iVar39 = iVar39 + -1) {
                  *(undefined4 *)puVar37 = *puVar18;
                  puVar18 = puVar18 + 1;
                  puVar37 = (undefined8 *)((int)puVar37 + 4);
                }
                puVar37 = (undefined8 *)func_?();
                uStack_45 = *puVar37;
                uVar46 = uStack_45;
                uStack_45._4_4_ = (float)((ulonglong)uStack_45 >> 0x20);
                fStack_47 = *(float *)(puVar37 + 1);
                fVar48 = (float)(int)pTStack_2 * fStack_24 - fStack_33;
                uStack_45._0_4_ = (float)uStack_45 * fVar48;
                uStack_45._4_4_ = uStack_45._4_4_ * fVar48;
                fVar48 = *(float *)(puVar37 + 1) * fVar48;
                fStack_49 = fStack_50 + fVar48;
                uStack_38 = CONCAT44(uStack_38._4_4_ + uStack_45._4_4_,
                                      (float)uStack_38 + (float)uStack_45);
                fStack_50 = fStack_50 + fVar48;
                fStack_51 = fStack_52 + fVar48;
                uStack_40 = CONCAT44(uStack_40._4_4_ + uStack_45._4_4_,
                                      (float)uStack_40 + (float)uStack_45);
                fStack_52 = fStack_52 + fVar48;
                fStack_53 = fVar48 + fStack_54;
                uStack_41 = CONCAT44(uStack_45._4_4_ + uStack_41._4_4_,
                                      (float)uStack_41 + (float)uStack_45);
                fStack_54 = fVar48 + fStack_54;
                fStack_55 = fVar48 + fStack_56;
                in_XMM1_Db.rgctx_data = (Il2CppRGCTXData *)0x0;
                in_XMM1_Dc.genericMethod = (Il2CppGenericMethod *)0x0;
                in_XMM1_Dd = 0;
                in_XMM1_Da = (Il2CppType **)(uStack_45._4_4_ + uStack_43._4_4_);
                uStack_42 = CONCAT44(uStack_45._4_4_ + uStack_42._4_4_,
                                      (float)uStack_45 + (float)uStack_42);
                fStack_56 = fVar48 + fStack_56;
                BStack_13.fields._._.m_CancellationTokenSource =
                     (CancellationTokenSource *)(fVar48 + (float)pCStack_57);
                uStack_43 = CONCAT44(in_XMM1_Da,(float)uStack_45 + (float)uStack_43);
                pCStack_57 = (CancellationTokenSource *)(fVar48 + (float)pCStack_57);
                fStack_58 = fVar48 + fStack_59;
                uStack_44 = CONCAT44(uStack_45._4_4_ + uStack_44._4_4_,
                                      (float)uStack_45 + (float)uStack_44);
                fStack_59 = fVar48 + fStack_59;
                puVar37 = &uStack_38;
                puVar18 = (undefined4 *)&stack0xfffff8f8;
                pMVar32 = 
                MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__set_Item_int__UnityEngine__UIVertex_
                ;
                uStack_45 = uVar46;
                for (iVar39 = 0x1b; iVar39 != 0; iVar39 = iVar39 + -1) {
                  *puVar18 = *(undefined4 *)puVar37;
                  puVar37 = (undefined8 *)((int)puVar37 + 4);
                  puVar18 = puVar18 + 1;
                }
                value.uv3.w = (float)pMVar32;
                auVar60 = in_stack_61._0_12_;
                auVar62 = in_stack_61._12_12_;
                auVar63 = in_stack_61._24_16_;
                uVar46 = in_stack_61._40_8_;
                auVar64 = in_stack_61._48_16_;
                auVar65 = in_stack_61._64_16_;
                auVar66 = in_stack_61._80_16_;
                value.position.x = (float)auVar60._0_4_;
                value.position.y = (float)auVar60._4_4_;
                value.position.z = (float)auVar60._8_4_;
                value.normal.x = (float)auVar62._0_4_;
                value.normal.y = (float)auVar62._4_4_;
                value.normal.z = (float)auVar62._8_4_;
                value.tangent.x = (float)auVar63._0_4_;
                value.tangent.y = (float)auVar63._4_4_;
                value.tangent.z = (float)auVar63._8_4_;
                value.tangent.w = (float)auVar63._12_4_;
                value.color.rgba = (int)uVar46;
                value.color.r = (char)((ulonglong)uVar46 >> 0x20);
                value.color.g = (char)((ulonglong)uVar46 >> 0x28);
                value.color.b = (char)((ulonglong)uVar46 >> 0x30);
                value.color.a = (char)((ulonglong)uVar46 >> 0x38);
                value.uv0.x = (float)auVar64._0_4_;
                value.uv0.y = (float)auVar64._4_4_;
                value.uv0.z = (float)auVar64._8_4_;
                value.uv0.w = (float)auVar64._12_4_;
                value.uv1.x = (float)auVar65._0_4_;
                value.uv1.y = (float)auVar65._4_4_;
                value.uv1.z = (float)auVar65._8_4_;
                value.uv1.w = (float)auVar65._12_4_;
                value.uv2.x = (float)auVar66._0_4_;
                value.uv2.y = (float)auVar66._4_4_;
                value.uv2.z = (float)auVar66._8_4_;
                value.uv2.w = (float)auVar66._12_4_;
                value.uv3.x = (float)in_stack_61._96_4_;
                value.uv3.y = (float)in_stack_61._100_4_;
                value.uv3.z = (float)in_stack_61._104_4_;
                mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
                List_1_UnityEngine_UIVertex__set_Item(verts,iStack_31,value,in_stack_67);
                puVar37 = &uStack_40;
                puVar18 = (undefined4 *)&stack0xfffff974;
                pMVar32 = 
                MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__set_Item_int__UnityEngine__UIVertex_
                ;
                for (iVar39 = 0x1b; iVar39 != 0; iVar39 = iVar39 + -1) {
                  *puVar18 = *(undefined4 *)puVar37;
                  puVar37 = (undefined8 *)((int)puVar37 + 4);
                  puVar18 = puVar18 + 1;
                }
                in_stack_67 = (MethodInfo *)&UNK_?;
                value_00.uv3.w = (float)pMVar32;
                auVar60 = in_stack_68._0_12_;
                auVar62 = in_stack_68._12_12_;
                auVar63 = in_stack_68._24_16_;
                uVar46 = in_stack_68._40_8_;
                auVar64 = in_stack_68._48_16_;
                auVar65 = in_stack_68._64_16_;
                auVar66 = in_stack_68._80_16_;
                value_00.position.x = (float)auVar60._0_4_;
                value_00.position.y = (float)auVar60._4_4_;
                value_00.position.z = (float)auVar60._8_4_;
                value_00.normal.x = (float)auVar62._0_4_;
                value_00.normal.y = (float)auVar62._4_4_;
                value_00.normal.z = (float)auVar62._8_4_;
                value_00.tangent.x = (float)auVar63._0_4_;
                value_00.tangent.y = (float)auVar63._4_4_;
                value_00.tangent.z = (float)auVar63._8_4_;
                value_00.tangent.w = (float)auVar63._12_4_;
                value_00.color.rgba = (int)uVar46;
                value_00.color.r = (char)((ulonglong)uVar46 >> 0x20);
                value_00.color.g = (char)((ulonglong)uVar46 >> 0x28);
                value_00.color.b = (char)((ulonglong)uVar46 >> 0x30);
                value_00.color.a = (char)((ulonglong)uVar46 >> 0x38);
                value_00.uv0.x = (float)auVar64._0_4_;
                value_00.uv0.y = (float)auVar64._4_4_;
                value_00.uv0.z = (float)auVar64._8_4_;
                value_00.uv0.w = (float)auVar64._12_4_;
                value_00.uv1.x = (float)auVar65._0_4_;
                value_00.uv1.y = (float)auVar65._4_4_;
                value_00.uv1.z = (float)auVar65._8_4_;
                value_00.uv1.w = (float)auVar65._12_4_;
                value_00.uv2.x = (float)auVar66._0_4_;
                value_00.uv2.y = (float)auVar66._4_4_;
                value_00.uv2.z = (float)auVar66._8_4_;
                value_00.uv2.w = (float)auVar66._12_4_;
                value_00.uv3.x = (float)in_stack_68._96_4_;
                value_00.uv3.y = (float)in_stack_68._100_4_;
                value_00.uv3.z = (float)in_stack_68._104_4_;
                mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
                List_1_UnityEngine_UIVertex__set_Item(verts,iStack_34,value_00,in_stack_69);
                puVar37 = &uStack_41;
                puVar18 = (undefined4 *)&stack0xfffff9f0;
                pMVar32 = 
                MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__set_Item_int__UnityEngine__UIVertex_
                ;
                for (iVar39 = 0x1b; iVar39 != 0; iVar39 = iVar39 + -1) {
                  *puVar18 = *(undefined4 *)puVar37;
                  puVar37 = (undefined8 *)((int)puVar37 + 4);
                  puVar18 = puVar18 + 1;
                }
                in_stack_69 = (MethodInfo *)&UNK_?;
                value_01.uv3.w = (float)pMVar32;
                auVar60 = in_stack_70._0_12_;
                auVar62 = in_stack_70._12_12_;
                auVar63 = in_stack_70._24_16_;
                uVar46 = in_stack_70._40_8_;
                auVar64 = in_stack_70._48_16_;
                auVar65 = in_stack_70._64_16_;
                auVar66 = in_stack_70._80_16_;
                value_01.position.x = (float)auVar60._0_4_;
                value_01.position.y = (float)auVar60._4_4_;
                value_01.position.z = (float)auVar60._8_4_;
                value_01.normal.x = (float)auVar62._0_4_;
                value_01.normal.y = (float)auVar62._4_4_;
                value_01.normal.z = (float)auVar62._8_4_;
                value_01.tangent.x = (float)auVar63._0_4_;
                value_01.tangent.y = (float)auVar63._4_4_;
                value_01.tangent.z = (float)auVar63._8_4_;
                value_01.tangent.w = (float)auVar63._12_4_;
                value_01.color.rgba = (int)uVar46;
                value_01.color.r = (char)((ulonglong)uVar46 >> 0x20);
                value_01.color.g = (char)((ulonglong)uVar46 >> 0x28);
                value_01.color.b = (char)((ulonglong)uVar46 >> 0x30);
                value_01.color.a = (char)((ulonglong)uVar46 >> 0x38);
                value_01.uv0.x = (float)auVar64._0_4_;
                value_01.uv0.y = (float)auVar64._4_4_;
                value_01.uv0.z = (float)auVar64._8_4_;
                value_01.uv0.w = (float)auVar64._12_4_;
                value_01.uv1.x = (float)auVar65._0_4_;
                value_01.uv1.y = (float)auVar65._4_4_;
                value_01.uv1.z = (float)auVar65._8_4_;
                value_01.uv1.w = (float)auVar65._12_4_;
                value_01.uv2.x = (float)auVar66._0_4_;
                value_01.uv2.y = (float)auVar66._4_4_;
                value_01.uv2.z = (float)auVar66._8_4_;
                value_01.uv2.w = (float)auVar66._12_4_;
                value_01.uv3.x = (float)in_stack_70._96_4_;
                value_01.uv3.y = (float)in_stack_70._100_4_;
                value_01.uv3.z = (float)in_stack_70._104_4_;
                mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
                List_1_UnityEngine_UIVertex__set_Item(verts,iStack_35,value_01,in_stack_71);
                puVar37 = &uStack_42;
                puVar18 = (undefined4 *)&stack0xfffffa6c;
                pMVar32 = 
                MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__set_Item_int__UnityEngine__UIVertex_
                ;
                for (iVar39 = 0x1b; iVar39 != 0; iVar39 = iVar39 + -1) {
                  *puVar18 = *(undefined4 *)puVar37;
                  puVar37 = (undefined8 *)((int)puVar37 + 4);
                  puVar18 = puVar18 + 1;
                }
                in_stack_71 = (MethodInfo *)&UNK_?;
                value_02.uv3.w = (float)pMVar32;
                auVar60 = in_stack_72._0_12_;
                auVar62 = in_stack_72._12_12_;
                auVar63 = in_stack_72._24_16_;
                uVar46 = in_stack_72._40_8_;
                auVar64 = in_stack_72._48_16_;
                auVar65 = in_stack_72._64_16_;
                auVar66 = in_stack_72._80_16_;
                value_02.position.x = (float)auVar60._0_4_;
                value_02.position.y = (float)auVar60._4_4_;
                value_02.position.z = (float)auVar60._8_4_;
                value_02.normal.x = (float)auVar62._0_4_;
                value_02.normal.y = (float)auVar62._4_4_;
                value_02.normal.z = (float)auVar62._8_4_;
                value_02.tangent.x = (float)auVar63._0_4_;
                value_02.tangent.y = (float)auVar63._4_4_;
                value_02.tangent.z = (float)auVar63._8_4_;
                value_02.tangent.w = (float)auVar63._12_4_;
                value_02.color.rgba = (int)uVar46;
                value_02.color.r = (char)((ulonglong)uVar46 >> 0x20);
                value_02.color.g = (char)((ulonglong)uVar46 >> 0x28);
                value_02.color.b = (char)((ulonglong)uVar46 >> 0x30);
                value_02.color.a = (char)((ulonglong)uVar46 >> 0x38);
                value_02.uv0.x = (float)auVar64._0_4_;
                value_02.uv0.y = (float)auVar64._4_4_;
                value_02.uv0.z = (float)auVar64._8_4_;
                value_02.uv0.w = (float)auVar64._12_4_;
                value_02.uv1.x = (float)auVar65._0_4_;
                value_02.uv1.y = (float)auVar65._4_4_;
                value_02.uv1.z = (float)auVar65._8_4_;
                value_02.uv1.w = (float)auVar65._12_4_;
                value_02.uv2.x = (float)auVar66._0_4_;
                value_02.uv2.y = (float)auVar66._4_4_;
                value_02.uv2.z = (float)auVar66._8_4_;
                value_02.uv2.w = (float)auVar66._12_4_;
                value_02.uv3.x = (float)in_stack_72._96_4_;
                value_02.uv3.y = (float)in_stack_72._100_4_;
                value_02.uv3.z = (float)in_stack_72._104_4_;
                mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
                List_1_UnityEngine_UIVertex__set_Item(verts,iStack_36,value_02,in_stack_73);
                puVar37 = &uStack_43;
                puVar18 = (undefined4 *)&stack0xfffffae8;
                pMVar32 = 
                MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__set_Item_int__UnityEngine__UIVertex_
                ;
                for (iVar39 = 0x1b; iVar39 != 0; iVar39 = iVar39 + -1) {
                  *puVar18 = *(undefined4 *)puVar37;
                  puVar37 = (undefined8 *)((int)puVar37 + 4);
                  puVar18 = puVar18 + 1;
                }
                in_stack_73 = (MethodInfo *)&UNK_?;
                value_03.uv3.w = (float)pMVar32;
                auVar60 = in_stack_74._0_12_;
                auVar62 = in_stack_74._12_12_;
                auVar63 = in_stack_74._24_16_;
                uVar46 = in_stack_74._40_8_;
                auVar64 = in_stack_74._48_16_;
                auVar65 = in_stack_74._64_16_;
                auVar66 = in_stack_74._80_16_;
                value_03.position.x = (float)auVar60._0_4_;
                value_03.position.y = (float)auVar60._4_4_;
                value_03.position.z = (float)auVar60._8_4_;
                value_03.normal.x = (float)auVar62._0_4_;
                value_03.normal.y = (float)auVar62._4_4_;
                value_03.normal.z = (float)auVar62._8_4_;
                value_03.tangent.x = (float)auVar63._0_4_;
                value_03.tangent.y = (float)auVar63._4_4_;
                value_03.tangent.z = (float)auVar63._8_4_;
                value_03.tangent.w = (float)auVar63._12_4_;
                value_03.color.rgba = (int)uVar46;
                value_03.color.r = (char)((ulonglong)uVar46 >> 0x20);
                value_03.color.g = (char)((ulonglong)uVar46 >> 0x28);
                value_03.color.b = (char)((ulonglong)uVar46 >> 0x30);
                value_03.color.a = (char)((ulonglong)uVar46 >> 0x38);
                value_03.uv0.x = (float)auVar64._0_4_;
                value_03.uv0.y = (float)auVar64._4_4_;
                value_03.uv0.z = (float)auVar64._8_4_;
                value_03.uv0.w = (float)auVar64._12_4_;
                value_03.uv1.x = (float)auVar65._0_4_;
                value_03.uv1.y = (float)auVar65._4_4_;
                value_03.uv1.z = (float)auVar65._8_4_;
                value_03.uv1.w = (float)auVar65._12_4_;
                value_03.uv2.x = (float)auVar66._0_4_;
                value_03.uv2.y = (float)auVar66._4_4_;
                value_03.uv2.z = (float)auVar66._8_4_;
                value_03.uv2.w = (float)auVar66._12_4_;
                value_03.uv3.x = (float)in_stack_74._96_4_;
                value_03.uv3.y = (float)in_stack_74._100_4_;
                value_03.uv3.z = (float)in_stack_74._104_4_;
                mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
                List_1_UnityEngine_UIVertex__set_Item
                          (verts,(int32_t)pSStack_17,value_03,in_stack_75);
                puVar37 = &uStack_44;
                puVar18 = (undefined4 *)&stack0xfffffb64;
                pMVar32 = 
                MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__set_Item_int__UnityEngine__UIVertex_
                ;
                for (iVar39 = 0x1b; iVar39 != 0; iVar39 = iVar39 + -1) {
                  *puVar18 = *(undefined4 *)puVar37;
                  puVar37 = (undefined8 *)((int)puVar37 + 4);
                  puVar18 = puVar18 + 1;
                }
                in_stack_75 = (MethodInfo *)&UNK_?;
                value_04.uv3.w = (float)pMVar32;
                auVar60 = in_stack_76._0_12_;
                auVar62 = in_stack_76._12_12_;
                auVar63 = in_stack_76._24_16_;
                uVar46 = in_stack_76._40_8_;
                auVar64 = in_stack_76._48_16_;
                auVar65 = in_stack_76._64_16_;
                auVar66 = in_stack_76._80_16_;
                value_04.position.x = (float)auVar60._0_4_;
                value_04.position.y = (float)auVar60._4_4_;
                value_04.position.z = (float)auVar60._8_4_;
                value_04.normal.x = (float)auVar62._0_4_;
                value_04.normal.y = (float)auVar62._4_4_;
                value_04.normal.z = (float)auVar62._8_4_;
                value_04.tangent.x = (float)auVar63._0_4_;
                value_04.tangent.y = (float)auVar63._4_4_;
                value_04.tangent.z = (float)auVar63._8_4_;
                value_04.tangent.w = (float)auVar63._12_4_;
                value_04.color.rgba = (int)uVar46;
                value_04.color.r = (char)((ulonglong)uVar46 >> 0x20);
                value_04.color.g = (char)((ulonglong)uVar46 >> 0x28);
                value_04.color.b = (char)((ulonglong)uVar46 >> 0x30);
                value_04.color.a = (char)((ulonglong)uVar46 >> 0x38);
                value_04.uv0.x = (float)auVar64._0_4_;
                value_04.uv0.y = (float)auVar64._4_4_;
                value_04.uv0.z = (float)auVar64._8_4_;
                value_04.uv0.w = (float)auVar64._12_4_;
                value_04.uv1.x = (float)auVar65._0_4_;
                value_04.uv1.y = (float)auVar65._4_4_;
                value_04.uv1.z = (float)auVar65._8_4_;
                value_04.uv1.w = (float)auVar65._12_4_;
                value_04.uv2.x = (float)auVar66._0_4_;
                value_04.uv2.y = (float)auVar66._4_4_;
                value_04.uv2.z = (float)auVar66._8_4_;
                value_04.uv2.w = (float)auVar66._12_4_;
                value_04.uv3.x = (float)in_stack_76._96_4_;
                value_04.uv3.y = (float)in_stack_76._100_4_;
                value_04.uv3.z = (float)in_stack_76._104_4_;
                mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
                List_1_UnityEngine_UIVertex__set_Item
                          (verts,(int32_t)pMStack_10,value_04,in_stack_77);
                this_01 = (Text *)((int)&this_01->klass + 1);
                unaff_ESI.m_CachedPtr = pMStack_27;
                pSVar3 = pSStack_4;
code_?:
                pMVar32 = (MethodInfo *)((int)OStack_5.m_CachedPtr + 1);
                pTStack_2 = (Text *)((int)&pTStack_2->klass + 1);
              }
              else {
                this_01 = (Text *)((int)&((CancellationTokenSource *)
                                         ((MethodInfo *)unaff_ESI.m_CachedPtr)->name)->klass +
                                  (int)&this_01->klass);
                OStack_5.m_CachedPtr =
                     &pMVar32[-1].field_0x2f + (int)((MethodInfo *)unaff_ESI.m_CachedPtr)->name;
                pTStack_2 = (Text *)((int)&pTStack_2[-1].fields.m_TempVerts + 3);
                unaff_ESI.m_CachedPtr = (MethodInfo *)0x0;
                pMStack_27 = (MethodInfo *)0x0;
                if (pSVar3 == (String *)0x0) goto code_?;
                cVar1 = func_?();
                if (cVar1 == '\0') goto code_?;
                iStack_31 = func_?();
                if (iStack_31 != 0) {
                  unaff_ESI.m_CachedPtr = (void *)func_?();
                  uVar29 = 0;
                  pMStack_27 = unaff_ESI.m_CachedPtr;
                  if (unaff_ESI.m_CachedPtr != (MethodInfo *)0x0) goto code_?;
                  goto code_?;
                }
                pMVar32 = (MethodInfo *)((int)OStack_5.m_CachedPtr + 1);
                pMStack_27 = (MethodInfo *)0x0;
                pTStack_2 = (Text *)((int)&pTStack_2->klass + 1);
              }
            }
            this_01 = (Text *)((int)&this_01->klass + 1);
            pBStack_6 = (BaseMeshEffect__Class *)((int)&(pBStack_6->_0).image + 1);
            ppSStack_8 = ppSStack_8 + 1;
          }
          goto code_?;
        }
      }
    }
  }
code_?:
  uVar29 = 0;
  func_?();
code_?:
  func_?();
code_?:
  uVar46 = func_?();
  piVar20 = (int *)((ulonglong)uVar46 >> 0x20);
  pcVar78 = (char *)uVar46;
  if ((bool)uVar29) {
    pbVar79 = (byte *)(pcVar78 + 0x67);
    bVar80 = *pbVar79;
    bVar81 = (byte)((uint)this_01 >> 8);
    bVar82 = *pbVar79 + bVar81;
    *pbVar79 = bVar82 + 1;
    cVar1 = (char)uVar46;
    *(char *)((int)piVar20 + 0x104e67) =
         *(char *)((int)piVar20 + 0x104e67) + cVar1 + (CARRY1(bVar80,bVar81) || 0xfe < bVar82);
    *piVar20 = (int)(pcVar78 + *piVar20);
    *extraout_ECX = *extraout_ECX + cVar1;
    *piVar20 = *piVar20 + CONCAT31((int3)((ulonglong)uVar46 >> 8),cVar1 + *pcVar78);
    pcVar83 = (code *)swi(3);
    (*pcVar83)();
    return;
  }
  pcVar78 = (char *)((int)&((MethodInfo *)((int)unaff_ESI.m_CachedPtr + -0x30))->field8_0x20 + 3);
  *pcVar78 = *pcVar78 + (char)((ulonglong)uVar46 >> 0x20);
  ((MethodInfo *)unaff_ESI.m_CachedPtr)->parameters = in_XMM1_Da;
  ((MethodInfo *)unaff_ESI.m_CachedPtr)->field7_0x1c = in_XMM1_Db;
  ((MethodInfo *)unaff_ESI.m_CachedPtr)->field8_0x20 = in_XMM1_Dc;
  ((MethodInfo *)unaff_ESI.m_CachedPtr)->token = in_XMM1_Dd;
  pGVar84 = UnityEngine.UI.dll::UnityEngine::UI::BaseMeshEffect::BaseMeshEffect_get_graphic
                      (unaff_EBX,in_stack_19);
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar22 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pGVar84,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar22 != 0) {
    pGVar84 = UnityEngine.UI.dll::UnityEngine::UI::BaseMeshEffect::BaseMeshEffect_get_graphic
                        (unaff_ESI.m_CachedPtr,(MethodInfo *)0x0);
    if (pGVar84 == (Graphic *)0x0) {
      func_?();
      pcVar83 = (code *)swi(3);
      (*pcVar83)();
      return;
    }
    (*(code *)(pGVar84->klass->vtable).SetVerticesDirty.method)();
  }
  return;
}


/* Void set_spacing(Single) */

void Assembly-CSharp.dll::UnityEngine::UI::LetterSpacing::LetterSpacing_set_spacing
               (LetterSpacing *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((this->fields).m_spacing != value) {
    (this->fields).m_spacing = value;
    pGVar1 = UnityEngine.UI.dll::UnityEngine::UI::BaseMeshEffect::BaseMeshEffect_get_graphic
                       ((BaseMeshEffect *)this,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pGVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      pGVar1 = UnityEngine.UI.dll::UnityEngine::UI::BaseMeshEffect::BaseMeshEffect_get_graphic
                         ((BaseMeshEffect *)this,(MethodInfo *)0x0);
      if (pGVar1 == (Graphic *)0x0) {
        func_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pIStack4 = (pGVar1->klass->vtable).SetMaterialDirty.methodPtr;
      (*(code *)(pGVar1->klass->vtable).SetVerticesDirty.method)();
    }
  }
  return;
}

