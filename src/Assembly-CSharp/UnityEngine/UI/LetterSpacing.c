
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
  pTVar2 = (Text *)UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                             ((Component *)this,
                              UnityEngine__UI__Text_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::Text>__
                             );
  pTStack_3 = pTVar2;
  if (pTVar2 != (Text *)0x0) {
    pSVar4 = (String *)(*(code *)(pTVar2->klass->vtable).get_text.method)();
    pSStack_5 = pSVar4;
    this_00 = UnityEngine.UI.dll::UnityEngine::UI::Text::Text_get_cachedTextGenerator
                        (pTVar2,(MethodInfo *)0x0);
    if ((this_00 != (TextGenerator *)0x0) &&
       (pIVar6 = UnityEngine.TextRenderingModule.dll::UnityEngine::TextGenerator::
                 TextGenerator_get_lines(this_00,(MethodInfo *)0x0), pIStack_7 = pIVar6,
       pIVar6 != (IList_1_UnityEngine_UILineInfo_ *)0x0)) {
      iVar8 = func_?();
      pIVar9 = pIStack_7;
      while (iVar8 = iVar8 + -1, pIStack_7 = pIVar9, 0 < iVar8) {
        pIStack_10 = pIVar6->klass;
        uVar11 = 0;
        ppSStack_12 = (String **)0x0;
        uVar13._0_1_ = (pIStack_10->_1).rank;
        uVar13._1_1_ = (pIStack_10->_1).minimumAlignment;
        uStack_14 = (uint)uVar13;
        if (uVar13 != 0) {
          do {
            if (pIStack_10->interfaceOffsets[uVar11].interfaceType ==
                (Il2CppClass *)
                TypeInfo__System__Collections__Generic__IList<UnityEngine::UILineInfo>) {
              ppMVar15 = &(&(pIVar9->klass->vtable).get_Item)
                         [pIVar9->klass->interfaceOffsets[uVar11].offset].method;
              goto code_?;
            }
            uVar11 = uVar11 + 1;
            pIVar6 = pIVar9;
          } while (uVar11 < uVar13);
        }
        ppMVar15 = (MethodInfo **)func_?();
        pIVar9 = pIVar6;
code_?:
        piVar16 = (int32_t *)(*(code *)*ppMVar15)();
        iStack_17 = *piVar16;
        iStack_18 = piVar16[1];
        iStack_19 = piVar16[2];
        iStack_20 = piVar16[3];
        if (pSStack_5 == (String *)0x0) goto code_?;
        pSStack_21 = mscorlib.dll::System::String::String_Insert
                               (pSStack_5,iStack_17,StringLiteral_u000A,(MethodInfo *)0x0);
        uVar13 = 0;
        pIStack_10 = pIVar9->klass;
        ppSStack_12 = (String **)0x0;
        uVar11._0_1_ = (pIStack_10->_1).rank;
        uVar11._1_1_ = (pIStack_10->_1).minimumAlignment;
        uStack_14 = (uint)uVar11;
        if (uVar11 != 0) {
          do {
            if (pIStack_10->interfaceOffsets[uVar13].interfaceType ==
                (Il2CppClass *)
                TypeInfo__System__Collections__Generic__IList<UnityEngine::UILineInfo>) {
              ppMVar15 = &(&(pIStack_7->klass->vtable).get_Item)
                         [pIStack_7->klass->interfaceOffsets[uVar13].offset].method;
              pIVar6 = pIStack_7;
              goto code_?;
            }
            uVar13 = uVar13 + 1;
            pIVar9 = pIStack_7;
          } while (uVar13 < uVar11);
        }
        ppMVar15 = (MethodInfo **)func_?();
        pIVar6 = pIVar9;
code_?:
        piVar22 = (int *)(*(code *)*ppMVar15)();
        iStack_17 = *piVar22;
        iStack_18 = piVar22[1];
        iStack_19 = piVar22[2];
        iStack_20 = piVar22[3];
        if (pSStack_21 == (String *)0x0) goto code_?;
        pSVar4 = mscorlib.dll::System::String::String_Remove
                           (pSStack_21,iStack_17 + -1,1,(MethodInfo *)0x0);
        pSStack_5 = pSVar4;
        pIVar9 = pIStack_7;
      }
      if (pSVar4 != (String *)0x0) {
        pSStack_23 = mscorlib.dll::System::String::String_Split
                               (pSVar4,10,StringSplitOptions__Enum_None,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pTVar2 = pTStack_3;
        bVar24 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                          ((Object_1 *)pTStack_3,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar24 != 0) {
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                    ((Object *)StringLiteral_LetterSpacing__Missing_Text_comp,(MethodInfo *)0x0);
          return;
        }
        ppSStack_12 = (String **)(this->fields).m_spacing;
        iVar25 = UnityEngine.UI.dll::UnityEngine::UI::Text::Text_get_fontSize
                           (pTVar2,(MethodInfo *)0x0);
        iVar8 = 0;
        fStack_26 = ((float)iVar25 * (float)ppSStack_12) / _UNK_?;
        fStack_27 = 0.0;
        if ((this->fields).useRichText == 0) {
          bStack_28 = 0;
        }
        else {
          bStack_28 = UnityEngine.UI.dll::UnityEngine::UI::Text::Text_get_supportRichText
                               (pTVar2,(MethodInfo *)0x0);
        }
        iVar29 = 0;
        pSStack_5 = (String *)0x0;
        iStack_30 = 0;
        TVar31 = UnityEngine.UI.dll::UnityEngine::UI::Text::Text_get_alignment
                           (pTStack_3,(MethodInfo *)0x0);
        switch(TVar31) {
        case TextAnchor__Enum_UpperLeft:
        case TextAnchor__Enum_MiddleLeft:
        case TextAnchor__Enum_LowerLeft:
          fStack_27 = 0.0;
          break;
        case TextAnchor__Enum_UpperCenter:
        case TextAnchor__Enum_MiddleCenter:
        case TextAnchor__Enum_LowerCenter:
          fStack_27 = _UNK_?;
          break;
        case TextAnchor__Enum_UpperRight:
        case TextAnchor__Enum_MiddleRight:
        case TextAnchor__Enum_LowerRight:
          fStack_27 = _UNK_?;
        }
        pIStack_10 = (IList_1_UnityEngine_UILineInfo___Class *)0x0;
        if (pSStack_23 != (String__Array *)0x0) {
          ppSStack_12 = pSStack_23->vector;
          while( true ) {
            if ((int)pSStack_23->max_length <= (int)pIStack_10) {
              return;
            }
            cVar1 = '\0';
            if ((IList_1_UnityEngine_UILineInfo___Class *)pSStack_23->max_length <= pIStack_10)
            break;
            pSStack_32 = *ppSStack_12;
            if (pSStack_32 == (String *)0x0) goto code_?;
            pIStack_7 = (IList_1_UnityEngine_UILineInfo_ *)(pSStack_32->fields)._stringLength;
            pSVar4 = pSStack_5;
            if (bStack_28 != 0) {
              pSVar4 = (String *)
                       LetterSpacing_GetRegexMatchedTagCollection
                                 (this,pSStack_32,(int32_t *)&pIStack_7,(MethodInfo *)0x0);
              iVar29 = 0;
              iStack_30 = 0;
              pSStack_5 = pSVar4;
              if (pSVar4 == (String *)0x0) goto code_?;
              cVar1 = func_?();
              if (cVar1 != '\0') {
                iStack_33 = func_?();
                if (iStack_33 == 0) {
                  iStack_30 = 0;
                }
                else {
                  iVar29 = func_?();
                  cVar1 = '\0';
                  iStack_30 = iVar29;
                  if (iVar29 == 0) goto code_?;
                }
              }
            }
            pIVar6 = (IList_1_UnityEngine_UILineInfo_ *)0x0;
            pTStack_3 = (Text *)0x0;
            fStack_34 = (float)(int)((int)&pIStack_7[-1].monitor + 3) * fStack_26 * fStack_27;
            while (pIStack_7 = pIVar6, (int)pIVar6 < (pSStack_32->fields)._stringLength) {
              if (((bStack_28 == 0) || (iVar29 == 0)) ||
                 (*(IList_1_UnityEngine_UILineInfo_ **)(iVar29 + 8) != pIVar6)) {
                iStack_35 = iVar8 * 6 + 1;
                iStack_33 = iVar8 * 6;
                iStack_36 = iVar8 * 6 + 2;
                iStack_37 = iVar8 * 6 + 3;
                pSStack_21 = (String *)(iVar8 * 6 + 4);
                uStack_14 = iVar8 * 6 + 5;
                if (verts == (List_1_UnityEngine_UIVertex_ *)0x0) goto code_?;
                if ((verts->fields)._size + -1 < (int)uStack_14) {
                  return;
                }
                puVar38 = (undefined4 *)func_?();
                puVar39 = &uStack_40;
                for (iVar29 = 0x1b; iVar29 != 0; iVar29 = iVar29 + -1) {
                  *(undefined4 *)puVar39 = *puVar38;
                  puVar38 = puVar38 + 1;
                  puVar39 = (undefined8 *)((int)puVar39 + 4);
                }
                puVar38 = (undefined4 *)func_?();
                puVar39 = &uStack_41;
                for (iVar29 = 0x1b; iVar29 != 0; iVar29 = iVar29 + -1) {
                  *(undefined4 *)puVar39 = *puVar38;
                  puVar38 = puVar38 + 1;
                  puVar39 = (undefined8 *)((int)puVar39 + 4);
                }
                puVar38 = (undefined4 *)func_?();
                puVar39 = &uStack_42;
                for (iVar29 = 0x1b; iVar29 != 0; iVar29 = iVar29 + -1) {
                  *(undefined4 *)puVar39 = *puVar38;
                  puVar38 = puVar38 + 1;
                  puVar39 = (undefined8 *)((int)puVar39 + 4);
                }
                puVar38 = (undefined4 *)func_?();
                puVar39 = &uStack_43;
                for (iVar29 = 0x1b; iVar29 != 0; iVar29 = iVar29 + -1) {
                  *(undefined4 *)puVar39 = *puVar38;
                  puVar38 = puVar38 + 1;
                  puVar39 = (undefined8 *)((int)puVar39 + 4);
                }
                puVar38 = (undefined4 *)func_?();
                puVar39 = &uStack_44;
                for (iVar29 = 0x1b; iVar29 != 0; iVar29 = iVar29 + -1) {
                  *(undefined4 *)puVar39 = *puVar38;
                  puVar38 = puVar38 + 1;
                  puVar39 = (undefined8 *)((int)puVar39 + 4);
                }
                puVar38 = (undefined4 *)func_?();
                puVar39 = &uStack_45;
                for (iVar29 = 0x1b; iVar29 != 0; iVar29 = iVar29 + -1) {
                  *(undefined4 *)puVar39 = *puVar38;
                  puVar38 = puVar38 + 1;
                  puVar39 = (undefined8 *)((int)puVar39 + 4);
                }
                puVar39 = (undefined8 *)func_?();
                uStack_46 = *puVar39;
                uVar47 = uStack_46;
                uStack_46._4_4_ = (float)((ulonglong)uStack_46 >> 0x20);
                fStack_48 = *(float *)(puVar39 + 1);
                fVar49 = (float)(int)pTStack_3 * fStack_26 - fStack_34;
                uStack_46._0_4_ = (float)uStack_46 * fVar49;
                uStack_46._4_4_ = uStack_46._4_4_ * fVar49;
                fVar49 = *(float *)(puVar39 + 1) * fVar49;
                fStack_50 = fVar49 + fStack_51;
                uStack_40 = CONCAT44(uStack_46._4_4_ + uStack_40._4_4_,
                                      (float)uStack_40 + (float)uStack_46);
                fStack_51 = fVar49 + fStack_51;
                fStack_52 = fVar49 + fStack_53;
                uStack_41 = CONCAT44(uStack_46._4_4_ + uStack_41._4_4_,
                                      (float)uStack_46 + (float)uStack_41);
                fStack_53 = fVar49 + fStack_53;
                fStack_54 = fVar49 + fStack_55;
                uStack_42 = CONCAT44(uStack_46._4_4_ + uStack_42._4_4_,
                                      (float)uStack_46 + (float)uStack_42);
                fStack_55 = fVar49 + fStack_55;
                fStack_56 = fVar49 + fStack_57;
                uStack_43 = CONCAT44(uStack_46._4_4_ + uStack_43._4_4_,
                                      (float)uStack_46 + (float)uStack_43);
                fStack_57 = fVar49 + fStack_57;
                fStack_58 = fVar49 + fStack_59;
                uStack_44 = CONCAT44(uStack_46._4_4_ + uStack_44._4_4_,
                                      (float)uStack_46 + (float)uStack_44);
                fStack_59 = fVar49 + fStack_59;
                fStack_60 = fVar49 + fStack_61;
                uStack_45 = CONCAT44(uStack_46._4_4_ + uStack_45._4_4_,
                                      (float)uStack_46 + (float)uStack_45);
                fStack_61 = fVar49 + fStack_61;
                puVar39 = &uStack_40;
                puVar38 = (undefined4 *)&stack0xfffff8f8;
                pMVar62 = 
                MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__set_Item_int__UnityEngine__UIVertex_
                ;
                uStack_46 = uVar47;
                for (iVar29 = 0x1b; iVar29 != 0; iVar29 = iVar29 + -1) {
                  *puVar38 = *(undefined4 *)puVar39;
                  puVar39 = (undefined8 *)((int)puVar39 + 4);
                  puVar38 = puVar38 + 1;
                }
                value.uv3.w = (float)pMVar62;
                auVar63 = in_stack_64._0_12_;
                auVar65 = in_stack_64._12_12_;
                auVar66 = in_stack_64._24_16_;
                uVar47 = in_stack_64._40_8_;
                auVar67 = in_stack_64._48_16_;
                auVar68 = in_stack_64._64_16_;
                auVar69 = in_stack_64._80_16_;
                value.position.x = (float)auVar63._0_4_;
                value.position.y = (float)auVar63._4_4_;
                value.position.z = (float)auVar63._8_4_;
                value.normal.x = (float)auVar65._0_4_;
                value.normal.y = (float)auVar65._4_4_;
                value.normal.z = (float)auVar65._8_4_;
                value.tangent.x = (float)auVar66._0_4_;
                value.tangent.y = (float)auVar66._4_4_;
                value.tangent.z = (float)auVar66._8_4_;
                value.tangent.w = (float)auVar66._12_4_;
                value.color.rgba = (int)uVar47;
                value.color.r = (char)((ulonglong)uVar47 >> 0x20);
                value.color.g = (char)((ulonglong)uVar47 >> 0x28);
                value.color.b = (char)((ulonglong)uVar47 >> 0x30);
                value.color.a = (char)((ulonglong)uVar47 >> 0x38);
                value.uv0.x = (float)auVar67._0_4_;
                value.uv0.y = (float)auVar67._4_4_;
                value.uv0.z = (float)auVar67._8_4_;
                value.uv0.w = (float)auVar67._12_4_;
                value.uv1.x = (float)auVar68._0_4_;
                value.uv1.y = (float)auVar68._4_4_;
                value.uv1.z = (float)auVar68._8_4_;
                value.uv1.w = (float)auVar68._12_4_;
                value.uv2.x = (float)auVar69._0_4_;
                value.uv2.y = (float)auVar69._4_4_;
                value.uv2.z = (float)auVar69._8_4_;
                value.uv2.w = (float)auVar69._12_4_;
                value.uv3.x = (float)in_stack_64._96_4_;
                value.uv3.y = (float)in_stack_64._100_4_;
                value.uv3.z = (float)in_stack_64._104_4_;
                mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
                List_1_UnityEngine_UIVertex__set_Item(verts,iStack_33,value,in_stack_70);
                puVar39 = &uStack_41;
                puVar38 = (undefined4 *)&stack0xfffff974;
                pMVar62 = 
                MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__set_Item_int__UnityEngine__UIVertex_
                ;
                for (iVar29 = 0x1b; iVar29 != 0; iVar29 = iVar29 + -1) {
                  *puVar38 = *(undefined4 *)puVar39;
                  puVar39 = (undefined8 *)((int)puVar39 + 4);
                  puVar38 = puVar38 + 1;
                }
                in_stack_70 = (MethodInfo *)&UNK_?;
                value_00.uv3.w = (float)pMVar62;
                auVar63 = in_stack_71._0_12_;
                auVar65 = in_stack_71._12_12_;
                auVar66 = in_stack_71._24_16_;
                uVar47 = in_stack_71._40_8_;
                auVar67 = in_stack_71._48_16_;
                auVar68 = in_stack_71._64_16_;
                auVar69 = in_stack_71._80_16_;
                value_00.position.x = (float)auVar63._0_4_;
                value_00.position.y = (float)auVar63._4_4_;
                value_00.position.z = (float)auVar63._8_4_;
                value_00.normal.x = (float)auVar65._0_4_;
                value_00.normal.y = (float)auVar65._4_4_;
                value_00.normal.z = (float)auVar65._8_4_;
                value_00.tangent.x = (float)auVar66._0_4_;
                value_00.tangent.y = (float)auVar66._4_4_;
                value_00.tangent.z = (float)auVar66._8_4_;
                value_00.tangent.w = (float)auVar66._12_4_;
                value_00.color.rgba = (int)uVar47;
                value_00.color.r = (char)((ulonglong)uVar47 >> 0x20);
                value_00.color.g = (char)((ulonglong)uVar47 >> 0x28);
                value_00.color.b = (char)((ulonglong)uVar47 >> 0x30);
                value_00.color.a = (char)((ulonglong)uVar47 >> 0x38);
                value_00.uv0.x = (float)auVar67._0_4_;
                value_00.uv0.y = (float)auVar67._4_4_;
                value_00.uv0.z = (float)auVar67._8_4_;
                value_00.uv0.w = (float)auVar67._12_4_;
                value_00.uv1.x = (float)auVar68._0_4_;
                value_00.uv1.y = (float)auVar68._4_4_;
                value_00.uv1.z = (float)auVar68._8_4_;
                value_00.uv1.w = (float)auVar68._12_4_;
                value_00.uv2.x = (float)auVar69._0_4_;
                value_00.uv2.y = (float)auVar69._4_4_;
                value_00.uv2.z = (float)auVar69._8_4_;
                value_00.uv2.w = (float)auVar69._12_4_;
                value_00.uv3.x = (float)in_stack_71._96_4_;
                value_00.uv3.y = (float)in_stack_71._100_4_;
                value_00.uv3.z = (float)in_stack_71._104_4_;
                mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
                List_1_UnityEngine_UIVertex__set_Item(verts,iStack_35,value_00,in_stack_72);
                puVar39 = &uStack_42;
                puVar38 = (undefined4 *)&stack0xfffff9f0;
                pMVar62 = 
                MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__set_Item_int__UnityEngine__UIVertex_
                ;
                for (iVar29 = 0x1b; iVar29 != 0; iVar29 = iVar29 + -1) {
                  *puVar38 = *(undefined4 *)puVar39;
                  puVar39 = (undefined8 *)((int)puVar39 + 4);
                  puVar38 = puVar38 + 1;
                }
                in_stack_72 = (MethodInfo *)&UNK_?;
                value_01.uv3.w = (float)pMVar62;
                auVar63 = in_stack_73._0_12_;
                auVar65 = in_stack_73._12_12_;
                auVar66 = in_stack_73._24_16_;
                uVar47 = in_stack_73._40_8_;
                auVar67 = in_stack_73._48_16_;
                auVar68 = in_stack_73._64_16_;
                auVar69 = in_stack_73._80_16_;
                value_01.position.x = (float)auVar63._0_4_;
                value_01.position.y = (float)auVar63._4_4_;
                value_01.position.z = (float)auVar63._8_4_;
                value_01.normal.x = (float)auVar65._0_4_;
                value_01.normal.y = (float)auVar65._4_4_;
                value_01.normal.z = (float)auVar65._8_4_;
                value_01.tangent.x = (float)auVar66._0_4_;
                value_01.tangent.y = (float)auVar66._4_4_;
                value_01.tangent.z = (float)auVar66._8_4_;
                value_01.tangent.w = (float)auVar66._12_4_;
                value_01.color.rgba = (int)uVar47;
                value_01.color.r = (char)((ulonglong)uVar47 >> 0x20);
                value_01.color.g = (char)((ulonglong)uVar47 >> 0x28);
                value_01.color.b = (char)((ulonglong)uVar47 >> 0x30);
                value_01.color.a = (char)((ulonglong)uVar47 >> 0x38);
                value_01.uv0.x = (float)auVar67._0_4_;
                value_01.uv0.y = (float)auVar67._4_4_;
                value_01.uv0.z = (float)auVar67._8_4_;
                value_01.uv0.w = (float)auVar67._12_4_;
                value_01.uv1.x = (float)auVar68._0_4_;
                value_01.uv1.y = (float)auVar68._4_4_;
                value_01.uv1.z = (float)auVar68._8_4_;
                value_01.uv1.w = (float)auVar68._12_4_;
                value_01.uv2.x = (float)auVar69._0_4_;
                value_01.uv2.y = (float)auVar69._4_4_;
                value_01.uv2.z = (float)auVar69._8_4_;
                value_01.uv2.w = (float)auVar69._12_4_;
                value_01.uv3.x = (float)in_stack_73._96_4_;
                value_01.uv3.y = (float)in_stack_73._100_4_;
                value_01.uv3.z = (float)in_stack_73._104_4_;
                mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
                List_1_UnityEngine_UIVertex__set_Item(verts,iStack_36,value_01,in_stack_74);
                puVar39 = &uStack_43;
                puVar38 = (undefined4 *)&stack0xfffffa6c;
                pMVar62 = 
                MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__set_Item_int__UnityEngine__UIVertex_
                ;
                for (iVar29 = 0x1b; iVar29 != 0; iVar29 = iVar29 + -1) {
                  *puVar38 = *(undefined4 *)puVar39;
                  puVar39 = (undefined8 *)((int)puVar39 + 4);
                  puVar38 = puVar38 + 1;
                }
                in_stack_74 = (MethodInfo *)&UNK_?;
                value_02.uv3.w = (float)pMVar62;
                auVar63 = in_stack_75._0_12_;
                auVar65 = in_stack_75._12_12_;
                auVar66 = in_stack_75._24_16_;
                uVar47 = in_stack_75._40_8_;
                auVar67 = in_stack_75._48_16_;
                auVar68 = in_stack_75._64_16_;
                auVar69 = in_stack_75._80_16_;
                value_02.position.x = (float)auVar63._0_4_;
                value_02.position.y = (float)auVar63._4_4_;
                value_02.position.z = (float)auVar63._8_4_;
                value_02.normal.x = (float)auVar65._0_4_;
                value_02.normal.y = (float)auVar65._4_4_;
                value_02.normal.z = (float)auVar65._8_4_;
                value_02.tangent.x = (float)auVar66._0_4_;
                value_02.tangent.y = (float)auVar66._4_4_;
                value_02.tangent.z = (float)auVar66._8_4_;
                value_02.tangent.w = (float)auVar66._12_4_;
                value_02.color.rgba = (int)uVar47;
                value_02.color.r = (char)((ulonglong)uVar47 >> 0x20);
                value_02.color.g = (char)((ulonglong)uVar47 >> 0x28);
                value_02.color.b = (char)((ulonglong)uVar47 >> 0x30);
                value_02.color.a = (char)((ulonglong)uVar47 >> 0x38);
                value_02.uv0.x = (float)auVar67._0_4_;
                value_02.uv0.y = (float)auVar67._4_4_;
                value_02.uv0.z = (float)auVar67._8_4_;
                value_02.uv0.w = (float)auVar67._12_4_;
                value_02.uv1.x = (float)auVar68._0_4_;
                value_02.uv1.y = (float)auVar68._4_4_;
                value_02.uv1.z = (float)auVar68._8_4_;
                value_02.uv1.w = (float)auVar68._12_4_;
                value_02.uv2.x = (float)auVar69._0_4_;
                value_02.uv2.y = (float)auVar69._4_4_;
                value_02.uv2.z = (float)auVar69._8_4_;
                value_02.uv2.w = (float)auVar69._12_4_;
                value_02.uv3.x = (float)in_stack_75._96_4_;
                value_02.uv3.y = (float)in_stack_75._100_4_;
                value_02.uv3.z = (float)in_stack_75._104_4_;
                mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
                List_1_UnityEngine_UIVertex__set_Item(verts,iStack_37,value_02,in_stack_76);
                puVar39 = &uStack_44;
                puVar38 = (undefined4 *)&stack0xfffffae8;
                pMVar62 = 
                MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__set_Item_int__UnityEngine__UIVertex_
                ;
                for (iVar29 = 0x1b; iVar29 != 0; iVar29 = iVar29 + -1) {
                  *puVar38 = *(undefined4 *)puVar39;
                  puVar39 = (undefined8 *)((int)puVar39 + 4);
                  puVar38 = puVar38 + 1;
                }
                in_stack_76 = (MethodInfo *)&UNK_?;
                value_03.uv3.w = (float)pMVar62;
                auVar63 = in_stack_77._0_12_;
                auVar65 = in_stack_77._12_12_;
                auVar66 = in_stack_77._24_16_;
                uVar47 = in_stack_77._40_8_;
                auVar67 = in_stack_77._48_16_;
                auVar68 = in_stack_77._64_16_;
                auVar69 = in_stack_77._80_16_;
                value_03.position.x = (float)auVar63._0_4_;
                value_03.position.y = (float)auVar63._4_4_;
                value_03.position.z = (float)auVar63._8_4_;
                value_03.normal.x = (float)auVar65._0_4_;
                value_03.normal.y = (float)auVar65._4_4_;
                value_03.normal.z = (float)auVar65._8_4_;
                value_03.tangent.x = (float)auVar66._0_4_;
                value_03.tangent.y = (float)auVar66._4_4_;
                value_03.tangent.z = (float)auVar66._8_4_;
                value_03.tangent.w = (float)auVar66._12_4_;
                value_03.color.rgba = (int)uVar47;
                value_03.color.r = (char)((ulonglong)uVar47 >> 0x20);
                value_03.color.g = (char)((ulonglong)uVar47 >> 0x28);
                value_03.color.b = (char)((ulonglong)uVar47 >> 0x30);
                value_03.color.a = (char)((ulonglong)uVar47 >> 0x38);
                value_03.uv0.x = (float)auVar67._0_4_;
                value_03.uv0.y = (float)auVar67._4_4_;
                value_03.uv0.z = (float)auVar67._8_4_;
                value_03.uv0.w = (float)auVar67._12_4_;
                value_03.uv1.x = (float)auVar68._0_4_;
                value_03.uv1.y = (float)auVar68._4_4_;
                value_03.uv1.z = (float)auVar68._8_4_;
                value_03.uv1.w = (float)auVar68._12_4_;
                value_03.uv2.x = (float)auVar69._0_4_;
                value_03.uv2.y = (float)auVar69._4_4_;
                value_03.uv2.z = (float)auVar69._8_4_;
                value_03.uv2.w = (float)auVar69._12_4_;
                value_03.uv3.x = (float)in_stack_77._96_4_;
                value_03.uv3.y = (float)in_stack_77._100_4_;
                value_03.uv3.z = (float)in_stack_77._104_4_;
                mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
                List_1_UnityEngine_UIVertex__set_Item
                          (verts,(int32_t)pSStack_21,value_03,in_stack_78);
                puVar39 = &uStack_45;
                puVar38 = (undefined4 *)&stack0xfffffb64;
                pMVar62 = 
                MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__set_Item_int__UnityEngine__UIVertex_
                ;
                for (iVar29 = 0x1b; iVar29 != 0; iVar29 = iVar29 + -1) {
                  *puVar38 = *(undefined4 *)puVar39;
                  puVar39 = (undefined8 *)((int)puVar39 + 4);
                  puVar38 = puVar38 + 1;
                }
                in_stack_78 = (MethodInfo *)&UNK_?;
                value_04.uv3.w = (float)pMVar62;
                auVar63 = in_stack_79._0_12_;
                auVar65 = in_stack_79._12_12_;
                auVar66 = in_stack_79._24_16_;
                uVar47 = in_stack_79._40_8_;
                auVar67 = in_stack_79._48_16_;
                auVar68 = in_stack_79._64_16_;
                auVar69 = in_stack_79._80_16_;
                value_04.position.x = (float)auVar63._0_4_;
                value_04.position.y = (float)auVar63._4_4_;
                value_04.position.z = (float)auVar63._8_4_;
                value_04.normal.x = (float)auVar65._0_4_;
                value_04.normal.y = (float)auVar65._4_4_;
                value_04.normal.z = (float)auVar65._8_4_;
                value_04.tangent.x = (float)auVar66._0_4_;
                value_04.tangent.y = (float)auVar66._4_4_;
                value_04.tangent.z = (float)auVar66._8_4_;
                value_04.tangent.w = (float)auVar66._12_4_;
                value_04.color.rgba = (int)uVar47;
                value_04.color.r = (char)((ulonglong)uVar47 >> 0x20);
                value_04.color.g = (char)((ulonglong)uVar47 >> 0x28);
                value_04.color.b = (char)((ulonglong)uVar47 >> 0x30);
                value_04.color.a = (char)((ulonglong)uVar47 >> 0x38);
                value_04.uv0.x = (float)auVar67._0_4_;
                value_04.uv0.y = (float)auVar67._4_4_;
                value_04.uv0.z = (float)auVar67._8_4_;
                value_04.uv0.w = (float)auVar67._12_4_;
                value_04.uv1.x = (float)auVar68._0_4_;
                value_04.uv1.y = (float)auVar68._4_4_;
                value_04.uv1.z = (float)auVar68._8_4_;
                value_04.uv1.w = (float)auVar68._12_4_;
                value_04.uv2.x = (float)auVar69._0_4_;
                value_04.uv2.y = (float)auVar69._4_4_;
                value_04.uv2.z = (float)auVar69._8_4_;
                value_04.uv2.w = (float)auVar69._12_4_;
                value_04.uv3.x = (float)in_stack_79._96_4_;
                value_04.uv3.y = (float)in_stack_79._100_4_;
                value_04.uv3.z = (float)in_stack_79._104_4_;
                mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
                List_1_UnityEngine_UIVertex__set_Item(verts,uStack_14,value_04,in_stack_80);
                iVar8 = iVar8 + 1;
                iVar29 = iStack_30;
                pSVar4 = pSStack_5;
code_?:
                pIVar6 = (IList_1_UnityEngine_UILineInfo_ *)((int)&pIStack_7->klass + 1);
                pTStack_3 = (Text *)((int)&pTStack_3->klass + 1);
              }
              else {
                iVar8 = iVar8 + *(int *)(iVar29 + 0xc);
                pIStack_7 = (IList_1_UnityEngine_UILineInfo_ *)
                            ((int)pIVar6 + *(int *)(iVar29 + 0xc) + -1);
                pTStack_3 = (Text *)((int)&pTStack_3[-1].fields.m_TempVerts + 3);
                iVar29 = 0;
                iStack_30 = 0;
                if (pSVar4 == (String *)0x0) goto code_?;
                cVar1 = func_?();
                if (cVar1 == '\0') goto code_?;
                iStack_33 = func_?();
                if (iStack_33 != 0) {
                  iVar29 = func_?();
                  cVar1 = '\0';
                  iStack_30 = iVar29;
                  if (iVar29 != 0) goto code_?;
                  goto code_?;
                }
                pIVar6 = (IList_1_UnityEngine_UILineInfo_ *)((int)&pIStack_7->klass + 1);
                iStack_30 = 0;
                pTStack_3 = (Text *)((int)&pTStack_3->klass + 1);
              }
            }
            iVar8 = iVar8 + 1;
            pIStack_10 = (IList_1_UnityEngine_UILineInfo___Class *)
                         ((int)&(pIStack_10->_0).image + 1);
            ppSStack_12 = ppSStack_12 + 1;
          }
          goto code_?;
        }
      }
    }
  }
code_?:
  cVar1 = '\0';
  func_?();
code_?:
  func_?();
code_?:
  uVar47 = func_?();
  piVar22 = (int *)((ulonglong)uVar47 >> 0x20);
  pcVar81 = (char *)uVar47;
  pcRam_? = pcVar81;
  *(char *)((int)piVar22 + 0x104df2) =
       *(char *)((int)piVar22 + 0x104df2) + (char)((ulonglong)uVar47 >> 0x28) + cVar1;
  *piVar22 = (int)(pcVar81 + *piVar22);
  *extraout_ECX = *extraout_ECX + (char)uVar47;
  *piVar22 = *piVar22 + CONCAT31((int3)((ulonglong)uVar47 >> 8),(char)uVar47 + *pcVar81);
  pcVar82 = (code *)swi(3);
  (*pcVar82)();
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

