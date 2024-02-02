
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
       (pIVar5 = UnityEngine.TextRenderingModule.dll::UnityEngine::TextGenerator::
                 TextGenerator_get_lines(this_02,(MethodInfo *)0x0), pIStack_6 = pIVar5,
       pIVar5 != (IList_1_UnityEngine_UILineInfo_ *)0x0)) {
      this_01 = (Text *)func_?();
      pIVar7 = pIStack_6;
      while (this_01 = (Text *)((int)&this_01[-1].fields.m_TempVerts + 3), pIStack_6 = pIVar7,
            0 < (int)this_01) {
        pIStack_8 = pIVar5->klass;
        uVar9 = 0;
        ppSStack_10 = (String **)0x0;
        uVar11._0_1_ = (pIStack_8->_1).rank;
        uVar11._1_1_ = (pIStack_8->_1).minimumAlignment;
        uStack_12 = (uint)uVar11;
        if (uVar11 != 0) {
          do {
            if (pIStack_8->interfaceOffsets[uVar9].interfaceType ==
                (Il2CppClass *)
                TypeInfo__System__Collections__Generic__IList<UnityEngine::UILineInfo>) {
              ppMVar13 = &(&(pIVar7->klass->vtable).get_Item)
                         [pIVar7->klass->interfaceOffsets[uVar9].offset].method;
              goto code_?;
            }
            uVar9 = uVar9 + 1;
            pIVar5 = pIVar7;
          } while (uVar9 < uVar11);
        }
        ppMVar13 = (MethodInfo **)func_?();
        pIVar7 = pIVar5;
code_?:
        piVar14 = (int32_t *)(*(code *)*ppMVar13)();
        iStack_15 = *piVar14;
        iStack_16 = piVar14[1];
        iStack_17 = piVar14[2];
        iStack_18 = piVar14[3];
        if (pSStack_4 == (String *)0x0) goto code_?;
        pSStack_19 = mscorlib.dll::System::String::String_Insert
                               (pSStack_4,iStack_15,StringLiteral_u000A,(MethodInfo *)0x0);
        uVar11 = 0;
        pIStack_8 = pIVar7->klass;
        ppSStack_10 = (String **)0x0;
        uVar9._0_1_ = (pIStack_8->_1).rank;
        uVar9._1_1_ = (pIStack_8->_1).minimumAlignment;
        uStack_12 = (uint)uVar9;
        if (uVar9 != 0) {
          do {
            if (pIStack_8->interfaceOffsets[uVar11].interfaceType ==
                (Il2CppClass *)
                TypeInfo__System__Collections__Generic__IList<UnityEngine::UILineInfo>) {
              ppMVar13 = &(&(pIStack_6->klass->vtable).get_Item)
                         [pIStack_6->klass->interfaceOffsets[uVar11].offset].method;
              pIVar5 = pIStack_6;
              goto code_?;
            }
            uVar11 = uVar11 + 1;
            pIVar7 = pIStack_6;
          } while (uVar11 < uVar9);
        }
        ppMVar13 = (MethodInfo **)func_?();
        pIVar5 = pIVar7;
code_?:
        piVar20 = (int *)(*(code *)*ppMVar13)();
        iStack_15 = *piVar20;
        iStack_16 = piVar20[1];
        iStack_17 = piVar20[2];
        iStack_18 = piVar20[3];
        if (pSStack_19 == (String *)0x0) goto code_?;
        pSVar3 = mscorlib.dll::System::String::String_Remove
                           (pSStack_19,iStack_15 + -1,1,(MethodInfo *)0x0);
        pSStack_4 = pSVar3;
        pIVar7 = pIStack_6;
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
        ppSStack_10 = (String **)(this->fields).m_spacing;
        iVar23 = UnityEngine.UI.dll::UnityEngine::UI::Text::Text_get_fontSize
                           (this_00,(MethodInfo *)0x0);
        this_01 = (Text *)0x0;
        fStack_24 = ((float)iVar23 * (float)ppSStack_10) / _UNK_?;
        fStack_25 = 0.0;
        if ((this->fields).useRichText == 0) {
          bStack_26 = 0;
        }
        else {
          bStack_26 = UnityEngine.UI.dll::UnityEngine::UI::Text::Text_get_supportRichText
                               (this_00,(MethodInfo *)0x0);
        }
        iVar27 = 0;
        pSStack_4 = (String *)0x0;
        iStack_28 = 0;
        TVar29 = UnityEngine.UI.dll::UnityEngine::UI::Text::Text_get_alignment
                           (pTStack_2,(MethodInfo *)0x0);
        switch(TVar29) {
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
        pIStack_8 = (IList_1_UnityEngine_UILineInfo___Class *)0x0;
        if (pSStack_21 != (String__Array *)0x0) {
          ppSStack_10 = pSStack_21->vector;
          while( true ) {
            if ((int)pSStack_21->max_length <= (int)pIStack_8) {
              return;
            }
            bVar30 = 0;
            if ((IList_1_UnityEngine_UILineInfo___Class *)pSStack_21->max_length <= pIStack_8)
            break;
            pSStack_31 = *ppSStack_10;
            if (pSStack_31 == (String *)0x0) goto code_?;
            pIStack_6 = (IList_1_UnityEngine_UILineInfo_ *)(pSStack_31->fields)._stringLength;
            pSVar3 = pSStack_4;
            if (bStack_26 != 0) {
              pSVar3 = (String *)
                       LetterSpacing_GetRegexMatchedTagCollection
                                 (this,pSStack_31,(int32_t *)&pIStack_6,(MethodInfo *)0x0);
              iVar27 = 0;
              iStack_28 = 0;
              pSStack_4 = pSVar3;
              if (pSVar3 == (String *)0x0) goto code_?;
              cVar1 = func_?();
              if (cVar1 != '\0') {
                iStack_32 = func_?();
                if (iStack_32 == 0) {
                  iStack_28 = 0;
                }
                else {
                  iVar27 = func_?();
                  bVar30 = 0;
                  iStack_28 = iVar27;
                  if (iVar27 == 0) goto code_?;
                }
              }
            }
            pIVar5 = (IList_1_UnityEngine_UILineInfo_ *)0x0;
            pTStack_2 = (Text *)0x0;
            fStack_33 = (float)(int)((int)&pIStack_6[-1].monitor + 3) * fStack_24 * fStack_25;
            while (pIStack_6 = pIVar5, (int)pIVar5 < (pSStack_31->fields)._stringLength) {
              if (((bStack_26 == 0) || (iVar27 == 0)) ||
                 (*(IList_1_UnityEngine_UILineInfo_ **)(iVar27 + 8) != pIVar5)) {
                iStack_34 = (int)this_01 * 6 + 1;
                iStack_32 = (int)this_01 * 6;
                iStack_35 = (int)this_01 * 6 + 2;
                iStack_36 = (int)this_01 * 6 + 3;
                pSStack_19 = (String *)((int)this_01 * 6 + 4);
                uStack_12 = (int)this_01 * 6 + 5;
                if (verts == (List_1_UnityEngine_UIVertex_ *)0x0) goto code_?;
                if ((verts->fields)._size + -1 < (int)uStack_12) {
                  return;
                }
                puVar37 = (undefined4 *)func_?();
                puVar38 = &uStack_39;
                for (iVar27 = 0x1b; iVar27 != 0; iVar27 = iVar27 + -1) {
                  *(undefined4 *)puVar38 = *puVar37;
                  puVar37 = puVar37 + 1;
                  puVar38 = (undefined8 *)((int)puVar38 + 4);
                }
                puVar37 = (undefined4 *)func_?();
                puVar38 = &uStack_40;
                for (iVar27 = 0x1b; iVar27 != 0; iVar27 = iVar27 + -1) {
                  *(undefined4 *)puVar38 = *puVar37;
                  puVar37 = puVar37 + 1;
                  puVar38 = (undefined8 *)((int)puVar38 + 4);
                }
                puVar37 = (undefined4 *)func_?();
                puVar38 = &uStack_41;
                for (iVar27 = 0x1b; iVar27 != 0; iVar27 = iVar27 + -1) {
                  *(undefined4 *)puVar38 = *puVar37;
                  puVar37 = puVar37 + 1;
                  puVar38 = (undefined8 *)((int)puVar38 + 4);
                }
                puVar37 = (undefined4 *)func_?();
                puVar38 = &uStack_42;
                for (iVar27 = 0x1b; iVar27 != 0; iVar27 = iVar27 + -1) {
                  *(undefined4 *)puVar38 = *puVar37;
                  puVar37 = puVar37 + 1;
                  puVar38 = (undefined8 *)((int)puVar38 + 4);
                }
                puVar37 = (undefined4 *)func_?();
                puVar38 = &uStack_43;
                for (iVar27 = 0x1b; iVar27 != 0; iVar27 = iVar27 + -1) {
                  *(undefined4 *)puVar38 = *puVar37;
                  puVar37 = puVar37 + 1;
                  puVar38 = (undefined8 *)((int)puVar38 + 4);
                }
                puVar37 = (undefined4 *)func_?();
                puVar38 = &uStack_44;
                for (iVar27 = 0x1b; iVar27 != 0; iVar27 = iVar27 + -1) {
                  *(undefined4 *)puVar38 = *puVar37;
                  puVar37 = puVar37 + 1;
                  puVar38 = (undefined8 *)((int)puVar38 + 4);
                }
                puVar38 = (undefined8 *)func_?();
                uStack_45 = *puVar38;
                uVar46 = uStack_45;
                uStack_45._4_4_ = (float)((ulonglong)uStack_45 >> 0x20);
                fStack_47 = *(float *)(puVar38 + 1);
                fVar48 = (float)(int)pTStack_2 * fStack_24 - fStack_33;
                uStack_45._0_4_ = (float)uStack_45 * fVar48;
                uStack_45._4_4_ = uStack_45._4_4_ * fVar48;
                fVar48 = *(float *)(puVar38 + 1) * fVar48;
                fStack_49 = fStack_50 + fVar48;
                uStack_39 = CONCAT44(uStack_39._4_4_ + uStack_45._4_4_,
                                      (float)uStack_39 + (float)uStack_45);
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
                uStack_42 = CONCAT44(uStack_45._4_4_ + uStack_42._4_4_,
                                      (float)uStack_45 + (float)uStack_42);
                fStack_56 = fVar48 + fStack_56;
                fStack_57 = fVar48 + fStack_58;
                uStack_43 = CONCAT44(uStack_45._4_4_ + uStack_43._4_4_,
                                      (float)uStack_45 + (float)uStack_43);
                fStack_58 = fVar48 + fStack_58;
                fStack_59 = fVar48 + fStack_60;
                uStack_44 = CONCAT44(uStack_45._4_4_ + uStack_44._4_4_,
                                      (float)uStack_45 + (float)uStack_44);
                fStack_60 = fVar48 + fStack_60;
                puVar38 = &uStack_39;
                puVar37 = (undefined4 *)&stack0xfffff8f8;
                pMVar61 = 
                MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__set_Item_int__UnityEngine__UIVertex_
                ;
                uStack_45 = uVar46;
                for (iVar27 = 0x1b; iVar27 != 0; iVar27 = iVar27 + -1) {
                  *puVar37 = *(undefined4 *)puVar38;
                  puVar38 = (undefined8 *)((int)puVar38 + 4);
                  puVar37 = puVar37 + 1;
                }
                value.uv3.w = (float)pMVar61;
                auVar62 = in_stack_63._0_12_;
                auVar64 = in_stack_63._12_12_;
                auVar65 = in_stack_63._24_16_;
                uVar46 = in_stack_63._40_8_;
                auVar66 = in_stack_63._48_16_;
                auVar67 = in_stack_63._64_16_;
                auVar68 = in_stack_63._80_16_;
                value.position.x = (float)auVar62._0_4_;
                value.position.y = (float)auVar62._4_4_;
                value.position.z = (float)auVar62._8_4_;
                value.normal.x = (float)auVar64._0_4_;
                value.normal.y = (float)auVar64._4_4_;
                value.normal.z = (float)auVar64._8_4_;
                value.tangent.x = (float)auVar65._0_4_;
                value.tangent.y = (float)auVar65._4_4_;
                value.tangent.z = (float)auVar65._8_4_;
                value.tangent.w = (float)auVar65._12_4_;
                value.color.rgba = (int)uVar46;
                value.color.r = (char)((ulonglong)uVar46 >> 0x20);
                value.color.g = (char)((ulonglong)uVar46 >> 0x28);
                value.color.b = (char)((ulonglong)uVar46 >> 0x30);
                value.color.a = (char)((ulonglong)uVar46 >> 0x38);
                value.uv0.x = (float)auVar66._0_4_;
                value.uv0.y = (float)auVar66._4_4_;
                value.uv0.z = (float)auVar66._8_4_;
                value.uv0.w = (float)auVar66._12_4_;
                value.uv1.x = (float)auVar67._0_4_;
                value.uv1.y = (float)auVar67._4_4_;
                value.uv1.z = (float)auVar67._8_4_;
                value.uv1.w = (float)auVar67._12_4_;
                value.uv2.x = (float)auVar68._0_4_;
                value.uv2.y = (float)auVar68._4_4_;
                value.uv2.z = (float)auVar68._8_4_;
                value.uv2.w = (float)auVar68._12_4_;
                value.uv3.x = (float)in_stack_63._96_4_;
                value.uv3.y = (float)in_stack_63._100_4_;
                value.uv3.z = (float)in_stack_63._104_4_;
                mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
                List_1_UnityEngine_UIVertex__set_Item(verts,iStack_32,value,in_stack_69);
                puVar38 = &uStack_40;
                puVar37 = (undefined4 *)&stack0xfffff974;
                pMVar61 = 
                MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__set_Item_int__UnityEngine__UIVertex_
                ;
                for (iVar27 = 0x1b; iVar27 != 0; iVar27 = iVar27 + -1) {
                  *puVar37 = *(undefined4 *)puVar38;
                  puVar38 = (undefined8 *)((int)puVar38 + 4);
                  puVar37 = puVar37 + 1;
                }
                in_stack_69 = (MethodInfo *)&UNK_?;
                value_00.uv3.w = (float)pMVar61;
                auVar62 = in_stack_70._0_12_;
                auVar64 = in_stack_70._12_12_;
                auVar65 = in_stack_70._24_16_;
                uVar46 = in_stack_70._40_8_;
                auVar66 = in_stack_70._48_16_;
                auVar67 = in_stack_70._64_16_;
                auVar68 = in_stack_70._80_16_;
                value_00.position.x = (float)auVar62._0_4_;
                value_00.position.y = (float)auVar62._4_4_;
                value_00.position.z = (float)auVar62._8_4_;
                value_00.normal.x = (float)auVar64._0_4_;
                value_00.normal.y = (float)auVar64._4_4_;
                value_00.normal.z = (float)auVar64._8_4_;
                value_00.tangent.x = (float)auVar65._0_4_;
                value_00.tangent.y = (float)auVar65._4_4_;
                value_00.tangent.z = (float)auVar65._8_4_;
                value_00.tangent.w = (float)auVar65._12_4_;
                value_00.color.rgba = (int)uVar46;
                value_00.color.r = (char)((ulonglong)uVar46 >> 0x20);
                value_00.color.g = (char)((ulonglong)uVar46 >> 0x28);
                value_00.color.b = (char)((ulonglong)uVar46 >> 0x30);
                value_00.color.a = (char)((ulonglong)uVar46 >> 0x38);
                value_00.uv0.x = (float)auVar66._0_4_;
                value_00.uv0.y = (float)auVar66._4_4_;
                value_00.uv0.z = (float)auVar66._8_4_;
                value_00.uv0.w = (float)auVar66._12_4_;
                value_00.uv1.x = (float)auVar67._0_4_;
                value_00.uv1.y = (float)auVar67._4_4_;
                value_00.uv1.z = (float)auVar67._8_4_;
                value_00.uv1.w = (float)auVar67._12_4_;
                value_00.uv2.x = (float)auVar68._0_4_;
                value_00.uv2.y = (float)auVar68._4_4_;
                value_00.uv2.z = (float)auVar68._8_4_;
                value_00.uv2.w = (float)auVar68._12_4_;
                value_00.uv3.x = (float)in_stack_70._96_4_;
                value_00.uv3.y = (float)in_stack_70._100_4_;
                value_00.uv3.z = (float)in_stack_70._104_4_;
                mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
                List_1_UnityEngine_UIVertex__set_Item(verts,iStack_34,value_00,in_stack_71);
                puVar38 = &uStack_41;
                puVar37 = (undefined4 *)&stack0xfffff9f0;
                pMVar61 = 
                MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__set_Item_int__UnityEngine__UIVertex_
                ;
                for (iVar27 = 0x1b; iVar27 != 0; iVar27 = iVar27 + -1) {
                  *puVar37 = *(undefined4 *)puVar38;
                  puVar38 = (undefined8 *)((int)puVar38 + 4);
                  puVar37 = puVar37 + 1;
                }
                in_stack_71 = (MethodInfo *)&UNK_?;
                value_01.uv3.w = (float)pMVar61;
                auVar62 = in_stack_72._0_12_;
                auVar64 = in_stack_72._12_12_;
                auVar65 = in_stack_72._24_16_;
                uVar46 = in_stack_72._40_8_;
                auVar66 = in_stack_72._48_16_;
                auVar67 = in_stack_72._64_16_;
                auVar68 = in_stack_72._80_16_;
                value_01.position.x = (float)auVar62._0_4_;
                value_01.position.y = (float)auVar62._4_4_;
                value_01.position.z = (float)auVar62._8_4_;
                value_01.normal.x = (float)auVar64._0_4_;
                value_01.normal.y = (float)auVar64._4_4_;
                value_01.normal.z = (float)auVar64._8_4_;
                value_01.tangent.x = (float)auVar65._0_4_;
                value_01.tangent.y = (float)auVar65._4_4_;
                value_01.tangent.z = (float)auVar65._8_4_;
                value_01.tangent.w = (float)auVar65._12_4_;
                value_01.color.rgba = (int)uVar46;
                value_01.color.r = (char)((ulonglong)uVar46 >> 0x20);
                value_01.color.g = (char)((ulonglong)uVar46 >> 0x28);
                value_01.color.b = (char)((ulonglong)uVar46 >> 0x30);
                value_01.color.a = (char)((ulonglong)uVar46 >> 0x38);
                value_01.uv0.x = (float)auVar66._0_4_;
                value_01.uv0.y = (float)auVar66._4_4_;
                value_01.uv0.z = (float)auVar66._8_4_;
                value_01.uv0.w = (float)auVar66._12_4_;
                value_01.uv1.x = (float)auVar67._0_4_;
                value_01.uv1.y = (float)auVar67._4_4_;
                value_01.uv1.z = (float)auVar67._8_4_;
                value_01.uv1.w = (float)auVar67._12_4_;
                value_01.uv2.x = (float)auVar68._0_4_;
                value_01.uv2.y = (float)auVar68._4_4_;
                value_01.uv2.z = (float)auVar68._8_4_;
                value_01.uv2.w = (float)auVar68._12_4_;
                value_01.uv3.x = (float)in_stack_72._96_4_;
                value_01.uv3.y = (float)in_stack_72._100_4_;
                value_01.uv3.z = (float)in_stack_72._104_4_;
                mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
                List_1_UnityEngine_UIVertex__set_Item(verts,iStack_35,value_01,in_stack_73);
                puVar38 = &uStack_42;
                puVar37 = (undefined4 *)&stack0xfffffa6c;
                pMVar61 = 
                MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__set_Item_int__UnityEngine__UIVertex_
                ;
                for (iVar27 = 0x1b; iVar27 != 0; iVar27 = iVar27 + -1) {
                  *puVar37 = *(undefined4 *)puVar38;
                  puVar38 = (undefined8 *)((int)puVar38 + 4);
                  puVar37 = puVar37 + 1;
                }
                in_stack_73 = (MethodInfo *)&UNK_?;
                value_02.uv3.w = (float)pMVar61;
                auVar62 = in_stack_74._0_12_;
                auVar64 = in_stack_74._12_12_;
                auVar65 = in_stack_74._24_16_;
                uVar46 = in_stack_74._40_8_;
                auVar66 = in_stack_74._48_16_;
                auVar67 = in_stack_74._64_16_;
                auVar68 = in_stack_74._80_16_;
                value_02.position.x = (float)auVar62._0_4_;
                value_02.position.y = (float)auVar62._4_4_;
                value_02.position.z = (float)auVar62._8_4_;
                value_02.normal.x = (float)auVar64._0_4_;
                value_02.normal.y = (float)auVar64._4_4_;
                value_02.normal.z = (float)auVar64._8_4_;
                value_02.tangent.x = (float)auVar65._0_4_;
                value_02.tangent.y = (float)auVar65._4_4_;
                value_02.tangent.z = (float)auVar65._8_4_;
                value_02.tangent.w = (float)auVar65._12_4_;
                value_02.color.rgba = (int)uVar46;
                value_02.color.r = (char)((ulonglong)uVar46 >> 0x20);
                value_02.color.g = (char)((ulonglong)uVar46 >> 0x28);
                value_02.color.b = (char)((ulonglong)uVar46 >> 0x30);
                value_02.color.a = (char)((ulonglong)uVar46 >> 0x38);
                value_02.uv0.x = (float)auVar66._0_4_;
                value_02.uv0.y = (float)auVar66._4_4_;
                value_02.uv0.z = (float)auVar66._8_4_;
                value_02.uv0.w = (float)auVar66._12_4_;
                value_02.uv1.x = (float)auVar67._0_4_;
                value_02.uv1.y = (float)auVar67._4_4_;
                value_02.uv1.z = (float)auVar67._8_4_;
                value_02.uv1.w = (float)auVar67._12_4_;
                value_02.uv2.x = (float)auVar68._0_4_;
                value_02.uv2.y = (float)auVar68._4_4_;
                value_02.uv2.z = (float)auVar68._8_4_;
                value_02.uv2.w = (float)auVar68._12_4_;
                value_02.uv3.x = (float)in_stack_74._96_4_;
                value_02.uv3.y = (float)in_stack_74._100_4_;
                value_02.uv3.z = (float)in_stack_74._104_4_;
                mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
                List_1_UnityEngine_UIVertex__set_Item(verts,iStack_36,value_02,in_stack_75);
                puVar38 = &uStack_43;
                puVar37 = (undefined4 *)&stack0xfffffae8;
                pMVar61 = 
                MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__set_Item_int__UnityEngine__UIVertex_
                ;
                for (iVar27 = 0x1b; iVar27 != 0; iVar27 = iVar27 + -1) {
                  *puVar37 = *(undefined4 *)puVar38;
                  puVar38 = (undefined8 *)((int)puVar38 + 4);
                  puVar37 = puVar37 + 1;
                }
                in_stack_75 = (MethodInfo *)&UNK_?;
                value_03.uv3.w = (float)pMVar61;
                auVar62 = in_stack_76._0_12_;
                auVar64 = in_stack_76._12_12_;
                auVar65 = in_stack_76._24_16_;
                uVar46 = in_stack_76._40_8_;
                auVar66 = in_stack_76._48_16_;
                auVar67 = in_stack_76._64_16_;
                auVar68 = in_stack_76._80_16_;
                value_03.position.x = (float)auVar62._0_4_;
                value_03.position.y = (float)auVar62._4_4_;
                value_03.position.z = (float)auVar62._8_4_;
                value_03.normal.x = (float)auVar64._0_4_;
                value_03.normal.y = (float)auVar64._4_4_;
                value_03.normal.z = (float)auVar64._8_4_;
                value_03.tangent.x = (float)auVar65._0_4_;
                value_03.tangent.y = (float)auVar65._4_4_;
                value_03.tangent.z = (float)auVar65._8_4_;
                value_03.tangent.w = (float)auVar65._12_4_;
                value_03.color.rgba = (int)uVar46;
                value_03.color.r = (char)((ulonglong)uVar46 >> 0x20);
                value_03.color.g = (char)((ulonglong)uVar46 >> 0x28);
                value_03.color.b = (char)((ulonglong)uVar46 >> 0x30);
                value_03.color.a = (char)((ulonglong)uVar46 >> 0x38);
                value_03.uv0.x = (float)auVar66._0_4_;
                value_03.uv0.y = (float)auVar66._4_4_;
                value_03.uv0.z = (float)auVar66._8_4_;
                value_03.uv0.w = (float)auVar66._12_4_;
                value_03.uv1.x = (float)auVar67._0_4_;
                value_03.uv1.y = (float)auVar67._4_4_;
                value_03.uv1.z = (float)auVar67._8_4_;
                value_03.uv1.w = (float)auVar67._12_4_;
                value_03.uv2.x = (float)auVar68._0_4_;
                value_03.uv2.y = (float)auVar68._4_4_;
                value_03.uv2.z = (float)auVar68._8_4_;
                value_03.uv2.w = (float)auVar68._12_4_;
                value_03.uv3.x = (float)in_stack_76._96_4_;
                value_03.uv3.y = (float)in_stack_76._100_4_;
                value_03.uv3.z = (float)in_stack_76._104_4_;
                mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
                List_1_UnityEngine_UIVertex__set_Item
                          (verts,(int32_t)pSStack_19,value_03,in_stack_77);
                puVar38 = &uStack_44;
                puVar37 = (undefined4 *)&stack0xfffffb64;
                pMVar61 = 
                MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__set_Item_int__UnityEngine__UIVertex_
                ;
                for (iVar27 = 0x1b; iVar27 != 0; iVar27 = iVar27 + -1) {
                  *puVar37 = *(undefined4 *)puVar38;
                  puVar38 = (undefined8 *)((int)puVar38 + 4);
                  puVar37 = puVar37 + 1;
                }
                in_stack_77 = (MethodInfo *)&UNK_?;
                value_04.uv3.w = (float)pMVar61;
                auVar62 = in_stack_78._0_12_;
                auVar64 = in_stack_78._12_12_;
                auVar65 = in_stack_78._24_16_;
                uVar46 = in_stack_78._40_8_;
                auVar66 = in_stack_78._48_16_;
                auVar67 = in_stack_78._64_16_;
                auVar68 = in_stack_78._80_16_;
                value_04.position.x = (float)auVar62._0_4_;
                value_04.position.y = (float)auVar62._4_4_;
                value_04.position.z = (float)auVar62._8_4_;
                value_04.normal.x = (float)auVar64._0_4_;
                value_04.normal.y = (float)auVar64._4_4_;
                value_04.normal.z = (float)auVar64._8_4_;
                value_04.tangent.x = (float)auVar65._0_4_;
                value_04.tangent.y = (float)auVar65._4_4_;
                value_04.tangent.z = (float)auVar65._8_4_;
                value_04.tangent.w = (float)auVar65._12_4_;
                value_04.color.rgba = (int)uVar46;
                value_04.color.r = (char)((ulonglong)uVar46 >> 0x20);
                value_04.color.g = (char)((ulonglong)uVar46 >> 0x28);
                value_04.color.b = (char)((ulonglong)uVar46 >> 0x30);
                value_04.color.a = (char)((ulonglong)uVar46 >> 0x38);
                value_04.uv0.x = (float)auVar66._0_4_;
                value_04.uv0.y = (float)auVar66._4_4_;
                value_04.uv0.z = (float)auVar66._8_4_;
                value_04.uv0.w = (float)auVar66._12_4_;
                value_04.uv1.x = (float)auVar67._0_4_;
                value_04.uv1.y = (float)auVar67._4_4_;
                value_04.uv1.z = (float)auVar67._8_4_;
                value_04.uv1.w = (float)auVar67._12_4_;
                value_04.uv2.x = (float)auVar68._0_4_;
                value_04.uv2.y = (float)auVar68._4_4_;
                value_04.uv2.z = (float)auVar68._8_4_;
                value_04.uv2.w = (float)auVar68._12_4_;
                value_04.uv3.x = (float)in_stack_78._96_4_;
                value_04.uv3.y = (float)in_stack_78._100_4_;
                value_04.uv3.z = (float)in_stack_78._104_4_;
                mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
                List_1_UnityEngine_UIVertex__set_Item(verts,uStack_12,value_04,in_stack_79);
                this_01 = (Text *)((int)&this_01->klass + 1);
                iVar27 = iStack_28;
                pSVar3 = pSStack_4;
code_?:
                pIVar5 = (IList_1_UnityEngine_UILineInfo_ *)((int)&pIStack_6->klass + 1);
                pTStack_2 = (Text *)((int)&pTStack_2->klass + 1);
              }
              else {
                this_01 = (Text *)((int)&this_01->klass + *(int *)(iVar27 + 0xc));
                pIStack_6 = (IList_1_UnityEngine_UILineInfo_ *)
                            ((int)pIVar5 + *(int *)(iVar27 + 0xc) + -1);
                pTStack_2 = (Text *)((int)&pTStack_2[-1].fields.m_TempVerts + 3);
                iVar27 = 0;
                iStack_28 = 0;
                if (pSVar3 == (String *)0x0) goto code_?;
                cVar1 = func_?();
                if (cVar1 == '\0') goto code_?;
                iStack_32 = func_?();
                if (iStack_32 != 0) {
                  iVar27 = func_?();
                  bVar30 = 0;
                  iStack_28 = iVar27;
                  if (iVar27 != 0) goto code_?;
                  goto code_?;
                }
                pIVar5 = (IList_1_UnityEngine_UILineInfo_ *)((int)&pIStack_6->klass + 1);
                iStack_28 = 0;
                pTStack_2 = (Text *)((int)&pTStack_2->klass + 1);
              }
            }
            this_01 = (Text *)((int)&this_01->klass + 1);
            pIStack_8 = (IList_1_UnityEngine_UILineInfo___Class *)
                         ((int)&(pIStack_8->_0).image + 1);
            ppSStack_10 = ppSStack_10 + 1;
          }
          goto code_?;
        }
      }
    }
  }
code_?:
  bVar30 = 0;
  func_?();
code_?:
  func_?();
code_?:
  uVar46 = func_?();
  piVar20 = (int *)((ulonglong)uVar46 >> 0x20);
  pcVar80 = (char *)uVar46;
  pbVar81 = (byte *)(pcVar80 + 0x54);
  bVar82 = *pbVar81 + (byte)this_01;
  bVar83 = CARRY1(*pbVar81,(byte)this_01) || CARRY1(bVar82,bVar30);
  *pbVar81 = bVar82 + bVar30;
  pbVar81 = (byte *)(piVar20 + 0x15);
  bVar30 = *pbVar81;
  bVar84 = (byte)((ulonglong)uVar46 >> 8);
  bVar82 = *pbVar81 + bVar84;
  *pbVar81 = bVar82 + bVar83;
  cVar1 = (char)uVar46;
  *pcVar80 = *pcVar80 + cVar1 + (CARRY1(bVar30,bVar84) || CARRY1(bVar82,bVar83));
  *piVar20 = (int)(pcVar80 + *piVar20);
  *extraout_ECX = *extraout_ECX + cVar1;
  *piVar20 = *piVar20 + CONCAT31((int3)((ulonglong)uVar46 >> 8),cVar1 + *pcVar80);
  pcVar85 = (code *)swi(3);
  (*pcVar85)();
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

