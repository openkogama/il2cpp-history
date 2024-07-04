
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
       OStack_5.m_CachedPtr = unaff_ESI.m_CachedPtr, unaff_ESI.m_CachedPtr != (LetterSpacing *)0x0))
    {
      OStack_5.m_CachedPtr = unaff_ESI.m_CachedPtr;
      this_01 = (Text *)func_?();
      while (this_01 = (Text *)((int)&this_01[-1].fields.m_TempVerts + 3), 0 < (int)this_01) {
        pLStack_6 = ((LetterSpacing *)unaff_ESI.m_CachedPtr)->klass;
        uVar7 = 0;
        ppSStack_8 = (String **)0x0;
        uVar9._0_1_ = (pLStack_6->_1).rank;
        uVar9._1_1_ = (pLStack_6->_1).minimumAlignment;
        pLStack_10 = (LetterSpacing *)(uint)uVar9;
        if (uVar9 != 0) {
          do {
            unaff_ESI.m_CachedPtr = OStack_5.m_CachedPtr;
            if (pLStack_6->interfaceOffsets[uVar7].interfaceType ==
                (Il2CppClass *)
                TypeInfo__System__Collections__Generic__IList<UnityEngine::UILineInfo>) {
              ppMVar11 = &(&(((LetterSpacing *)OStack_5.m_CachedPtr)->klass->vtable).Equals)
                         [((LetterSpacing *)OStack_5.m_CachedPtr)->klass->interfaceOffsets[uVar7].
                          offset].method;
              goto code_?;
            }
            uVar7 = uVar7 + 1;
          } while (uVar7 < uVar9);
        }
        ppMVar11 = (MethodInfo **)func_?();
code_?:
        piVar12 = (int32_t *)(*(code *)*ppMVar11)();
        iStack_13 = *piVar12;
        iStack_14 = piVar12[1];
        iStack_15 = piVar12[2];
        iStack_16 = piVar12[3];
        if (pSStack_4 == (String *)0x0) goto code_?;
        pSStack_17 = mscorlib.dll::System::String::String_Insert
                               (pSStack_4,iStack_13,StringLiteral_u000A,(MethodInfo *)0x0);
        uVar9 = 0;
        pLStack_6 = ((LetterSpacing *)unaff_ESI.m_CachedPtr)->klass;
        ppSStack_8 = (String **)0x0;
        uVar7._0_1_ = (pLStack_6->_1).rank;
        uVar7._1_1_ = (pLStack_6->_1).minimumAlignment;
        pLStack_10 = (LetterSpacing *)(uint)uVar7;
        if (uVar7 != 0) {
          do {
            unaff_ESI.m_CachedPtr = OStack_5.m_CachedPtr;
            if (pLStack_6->interfaceOffsets[uVar9].interfaceType ==
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
        piVar19 = (int *)(*(code *)*puVar18)();
        iStack_13 = *piVar19;
        iStack_14 = piVar19[1];
        iStack_15 = piVar19[2];
        iStack_16 = piVar19[3];
        if (pSStack_17 == (String *)0x0) goto code_?;
        pSVar3 = mscorlib.dll::System::String::String_Remove
                           (pSStack_17,iStack_13 + -1,1,(MethodInfo *)0x0);
        pSStack_4 = pSVar3;
      }
      if (pSVar3 != (String *)0x0) {
        pSStack_20 = mscorlib.dll::System::String::String_Split
                               (pSVar3,10,StringSplitOptions__Enum_None,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        this_00 = pTStack_2;
        bVar21 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                          ((Object_1 *)pTStack_2,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar21 != 0) {
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                    ((Object *)StringLiteral_LetterSpacing__Missing_Text_comp,(MethodInfo *)0x0);
          return;
        }
        ppSStack_8 = (String **)(this->fields).m_spacing;
        iVar22 = UnityEngine.UI.dll::UnityEngine::UI::Text::Text_get_fontSize
                           (this_00,(MethodInfo *)0x0);
        this_01 = (Text *)0x0;
        fStack_23 = ((float)iVar22 * (float)ppSStack_8) / _UNK_?;
        fStack_24 = 0.0;
        if ((this->fields).useRichText == 0) {
          bStack_25 = 0;
        }
        else {
          bStack_25 = UnityEngine.UI.dll::UnityEngine::UI::Text::Text_get_supportRichText
                               (this_00,(MethodInfo *)0x0);
        }
        unaff_ESI.m_CachedPtr = (LetterSpacing *)0x0;
        pSStack_4 = (String *)0x0;
        pLStack_26 = (LetterSpacing *)0x0;
        TVar27 = UnityEngine.UI.dll::UnityEngine::UI::Text::Text_get_alignment
                           (pTStack_2,(MethodInfo *)0x0);
        switch(TVar27) {
        case TextAnchor__Enum_UpperLeft:
        case TextAnchor__Enum_MiddleLeft:
        case TextAnchor__Enum_LowerLeft:
          fStack_24 = 0.0;
          break;
        case TextAnchor__Enum_UpperCenter:
        case TextAnchor__Enum_MiddleCenter:
        case TextAnchor__Enum_LowerCenter:
          fStack_24 = _UNK_?;
          break;
        case TextAnchor__Enum_UpperRight:
        case TextAnchor__Enum_MiddleRight:
        case TextAnchor__Enum_LowerRight:
          fStack_24 = _UNK_?;
        }
        pLStack_6 = (LetterSpacing__Class *)0x0;
        if (pSStack_20 != (String__Array *)0x0) {
          ppSStack_8 = pSStack_20->vector;
          while( true ) {
            if ((int)pSStack_20->max_length <= (int)pLStack_6) {
              return;
            }
            cVar1 = '\0';
            if ((LetterSpacing__Class *)pSStack_20->max_length <= pLStack_6) break;
            pSStack_28 = *ppSStack_8;
            if (pSStack_28 == (String *)0x0) goto code_?;
            OStack_5.m_CachedPtr = (void *)(pSStack_28->fields)._stringLength;
            pSVar3 = pSStack_4;
            if (bStack_25 != 0) {
              pSVar3 = (String *)
                       LetterSpacing_GetRegexMatchedTagCollection
                                 (this,pSStack_28,(int32_t *)&OStack_5,(MethodInfo *)0x0);
              unaff_ESI.m_CachedPtr = (LetterSpacing *)0x0;
              pLStack_26 = (LetterSpacing *)0x0;
              pSStack_4 = pSVar3;
              if (pSVar3 == (String *)0x0) goto code_?;
              cVar1 = func_?();
              if (cVar1 != '\0') {
                iStack_29 = func_?();
                if (iStack_29 == 0) {
                  pLStack_26 = (LetterSpacing *)0x0;
                }
                else {
                  unaff_ESI.m_CachedPtr = (void *)func_?();
                  cVar1 = '\0';
                  pLStack_26 = unaff_ESI.m_CachedPtr;
                  if (unaff_ESI.m_CachedPtr == (LetterSpacing *)0x0) goto code_?;
                }
              }
            }
            pLVar30 = (LetterSpacing *)0x0;
            pTStack_2 = (Text *)0x0;
            fStack_31 = (float)(int)((int)&(((LetterSpacing *)((int)OStack_5.m_CachedPtr + -0x1c))->
                                           fields).m_spacing + 3) * fStack_23 * fStack_24;
            while (OStack_5.m_CachedPtr = pLVar30, (int)pLVar30 < (pSStack_28->fields)._stringLength
                  ) {
              if (((bStack_25 == 0) || (unaff_ESI.m_CachedPtr == (LetterSpacing *)0x0)) ||
                 ((((LetterSpacing *)unaff_ESI.m_CachedPtr)->fields)._._._._._._.m_CachedPtr !=
                  pLVar30)) {
                iStack_32 = (int)this_01 * 6 + 1;
                iStack_29 = (int)this_01 * 6;
                iStack_33 = (int)this_01 * 6 + 2;
                iStack_34 = (int)this_01 * 6 + 3;
                pSStack_17 = (String *)((int)this_01 * 6 + 4);
                unaff_ESI.m_CachedPtr = (void *)((int)this_01 * 6 + 5);
                pLStack_10 = unaff_ESI.m_CachedPtr;
                if (verts == (List_1_UnityEngine_UIVertex_ *)0x0) goto code_?;
                if ((verts->fields)._size + -1 < (int)unaff_ESI.m_CachedPtr) {
                  return;
                }
                puVar18 = (undefined4 *)func_?();
                puVar35 = &uStack_36;
                for (iVar37 = 0x1b; iVar37 != 0; iVar37 = iVar37 + -1) {
                  *(undefined4 *)puVar35 = *puVar18;
                  puVar18 = puVar18 + 1;
                  puVar35 = (undefined8 *)((int)puVar35 + 4);
                }
                puVar18 = (undefined4 *)func_?();
                puVar35 = &uStack_38;
                for (iVar37 = 0x1b; iVar37 != 0; iVar37 = iVar37 + -1) {
                  *(undefined4 *)puVar35 = *puVar18;
                  puVar18 = puVar18 + 1;
                  puVar35 = (undefined8 *)((int)puVar35 + 4);
                }
                puVar18 = (undefined4 *)func_?();
                puVar35 = &uStack_39;
                for (iVar37 = 0x1b; iVar37 != 0; iVar37 = iVar37 + -1) {
                  *(undefined4 *)puVar35 = *puVar18;
                  puVar18 = puVar18 + 1;
                  puVar35 = (undefined8 *)((int)puVar35 + 4);
                }
                puVar18 = (undefined4 *)func_?();
                puVar35 = &uStack_40;
                for (iVar37 = 0x1b; iVar37 != 0; iVar37 = iVar37 + -1) {
                  *(undefined4 *)puVar35 = *puVar18;
                  puVar18 = puVar18 + 1;
                  puVar35 = (undefined8 *)((int)puVar35 + 4);
                }
                puVar18 = (undefined4 *)func_?();
                puVar35 = &uStack_41;
                for (iVar37 = 0x1b; iVar37 != 0; iVar37 = iVar37 + -1) {
                  *(undefined4 *)puVar35 = *puVar18;
                  puVar18 = puVar18 + 1;
                  puVar35 = (undefined8 *)((int)puVar35 + 4);
                }
                puVar18 = (undefined4 *)func_?();
                puVar35 = &uStack_42;
                for (iVar37 = 0x1b; iVar37 != 0; iVar37 = iVar37 + -1) {
                  *(undefined4 *)puVar35 = *puVar18;
                  puVar18 = puVar18 + 1;
                  puVar35 = (undefined8 *)((int)puVar35 + 4);
                }
                puVar35 = (undefined8 *)func_?();
                uStack_43 = *puVar35;
                uVar44 = uStack_43;
                uStack_43._4_4_ = (float)((ulonglong)uStack_43 >> 0x20);
                fStack_45 = *(float *)(puVar35 + 1);
                fVar46 = (float)(int)pTStack_2 * fStack_23 - fStack_31;
                uStack_43._0_4_ = (float)uStack_43 * fVar46;
                uStack_43._4_4_ = uStack_43._4_4_ * fVar46;
                fVar46 = *(float *)(puVar35 + 1) * fVar46;
                fStack_47 = fStack_48 + fVar46;
                uStack_36 = CONCAT44(uStack_36._4_4_ + uStack_43._4_4_,
                                      (float)uStack_36 + (float)uStack_43);
                fStack_48 = fStack_48 + fVar46;
                fStack_49 = fStack_50 + fVar46;
                uStack_38 = CONCAT44(uStack_38._4_4_ + uStack_43._4_4_,
                                      (float)uStack_38 + (float)uStack_43);
                fStack_50 = fStack_50 + fVar46;
                fStack_51 = fVar46 + fStack_52;
                uStack_39 = CONCAT44(uStack_43._4_4_ + uStack_39._4_4_,
                                      (float)uStack_39 + (float)uStack_43);
                fStack_52 = fVar46 + fStack_52;
                fStack_53 = fVar46 + fStack_54;
                in_XMM1_Da = uStack_43._4_4_ + uStack_41._4_4_;
                uStack_40 = CONCAT44(uStack_43._4_4_ + uStack_40._4_4_,
                                      (float)uStack_43 + (float)uStack_40);
                fStack_54 = fVar46 + fStack_54;
                fStack_55 = fVar46 + fStack_56;
                uStack_41 = CONCAT44(in_XMM1_Da,(float)uStack_43 + (float)uStack_41);
                fStack_56 = fVar46 + fStack_56;
                fStack_57 = fVar46 + fStack_58;
                uStack_42 = CONCAT44(uStack_43._4_4_ + uStack_42._4_4_,
                                      (float)uStack_43 + (float)uStack_42);
                fStack_58 = fVar46 + fStack_58;
                puVar35 = &uStack_36;
                puVar18 = (undefined4 *)&stack0xfffff8f8;
                pMVar59 = 
                MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__set_Item_int__UnityEngine__UIVertex_
                ;
                uStack_43 = uVar44;
                for (iVar37 = 0x1b; iVar37 != 0; iVar37 = iVar37 + -1) {
                  *puVar18 = *(undefined4 *)puVar35;
                  puVar35 = (undefined8 *)((int)puVar35 + 4);
                  puVar18 = puVar18 + 1;
                }
                value.uv3.w = (float)pMVar59;
                auVar60 = in_stack_61._0_12_;
                auVar62 = in_stack_61._12_12_;
                auVar63 = in_stack_61._24_16_;
                uVar44 = in_stack_61._40_8_;
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
                value.color.rgba = (int)uVar44;
                value.color.r = (char)((ulonglong)uVar44 >> 0x20);
                value.color.g = (char)((ulonglong)uVar44 >> 0x28);
                value.color.b = (char)((ulonglong)uVar44 >> 0x30);
                value.color.a = (char)((ulonglong)uVar44 >> 0x38);
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
                List_1_UnityEngine_UIVertex__set_Item(verts,iStack_29,value,in_stack_67);
                puVar35 = &uStack_38;
                puVar18 = (undefined4 *)&stack0xfffff974;
                pMVar59 = 
                MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__set_Item_int__UnityEngine__UIVertex_
                ;
                for (iVar37 = 0x1b; iVar37 != 0; iVar37 = iVar37 + -1) {
                  *puVar18 = *(undefined4 *)puVar35;
                  puVar35 = (undefined8 *)((int)puVar35 + 4);
                  puVar18 = puVar18 + 1;
                }
                in_stack_67 = (MethodInfo *)&UNK_?;
                value_00.uv3.w = (float)pMVar59;
                auVar60 = in_stack_68._0_12_;
                auVar62 = in_stack_68._12_12_;
                auVar63 = in_stack_68._24_16_;
                uVar44 = in_stack_68._40_8_;
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
                value_00.color.rgba = (int)uVar44;
                value_00.color.r = (char)((ulonglong)uVar44 >> 0x20);
                value_00.color.g = (char)((ulonglong)uVar44 >> 0x28);
                value_00.color.b = (char)((ulonglong)uVar44 >> 0x30);
                value_00.color.a = (char)((ulonglong)uVar44 >> 0x38);
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
                List_1_UnityEngine_UIVertex__set_Item(verts,iStack_32,value_00,in_stack_69);
                puVar35 = &uStack_39;
                puVar18 = (undefined4 *)&stack0xfffff9f0;
                pMVar59 = 
                MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__set_Item_int__UnityEngine__UIVertex_
                ;
                for (iVar37 = 0x1b; iVar37 != 0; iVar37 = iVar37 + -1) {
                  *puVar18 = *(undefined4 *)puVar35;
                  puVar35 = (undefined8 *)((int)puVar35 + 4);
                  puVar18 = puVar18 + 1;
                }
                in_stack_69 = (MethodInfo *)&UNK_?;
                value_01.uv3.w = (float)pMVar59;
                auVar60 = in_stack_70._0_12_;
                auVar62 = in_stack_70._12_12_;
                auVar63 = in_stack_70._24_16_;
                uVar44 = in_stack_70._40_8_;
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
                value_01.color.rgba = (int)uVar44;
                value_01.color.r = (char)((ulonglong)uVar44 >> 0x20);
                value_01.color.g = (char)((ulonglong)uVar44 >> 0x28);
                value_01.color.b = (char)((ulonglong)uVar44 >> 0x30);
                value_01.color.a = (char)((ulonglong)uVar44 >> 0x38);
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
                List_1_UnityEngine_UIVertex__set_Item(verts,iStack_33,value_01,in_stack_71);
                puVar35 = &uStack_40;
                puVar18 = (undefined4 *)&stack0xfffffa6c;
                pMVar59 = 
                MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__set_Item_int__UnityEngine__UIVertex_
                ;
                for (iVar37 = 0x1b; iVar37 != 0; iVar37 = iVar37 + -1) {
                  *puVar18 = *(undefined4 *)puVar35;
                  puVar35 = (undefined8 *)((int)puVar35 + 4);
                  puVar18 = puVar18 + 1;
                }
                in_stack_71 = (MethodInfo *)&UNK_?;
                value_02.uv3.w = (float)pMVar59;
                auVar60 = in_stack_72._0_12_;
                auVar62 = in_stack_72._12_12_;
                auVar63 = in_stack_72._24_16_;
                uVar44 = in_stack_72._40_8_;
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
                value_02.color.rgba = (int)uVar44;
                value_02.color.r = (char)((ulonglong)uVar44 >> 0x20);
                value_02.color.g = (char)((ulonglong)uVar44 >> 0x28);
                value_02.color.b = (char)((ulonglong)uVar44 >> 0x30);
                value_02.color.a = (char)((ulonglong)uVar44 >> 0x38);
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
                List_1_UnityEngine_UIVertex__set_Item(verts,iStack_34,value_02,in_stack_73);
                puVar35 = &uStack_41;
                puVar18 = (undefined4 *)&stack0xfffffae8;
                pMVar59 = 
                MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__set_Item_int__UnityEngine__UIVertex_
                ;
                for (iVar37 = 0x1b; iVar37 != 0; iVar37 = iVar37 + -1) {
                  *puVar18 = *(undefined4 *)puVar35;
                  puVar35 = (undefined8 *)((int)puVar35 + 4);
                  puVar18 = puVar18 + 1;
                }
                in_stack_73 = (MethodInfo *)&UNK_?;
                value_03.uv3.w = (float)pMVar59;
                auVar60 = in_stack_74._0_12_;
                auVar62 = in_stack_74._12_12_;
                auVar63 = in_stack_74._24_16_;
                uVar44 = in_stack_74._40_8_;
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
                value_03.color.rgba = (int)uVar44;
                value_03.color.r = (char)((ulonglong)uVar44 >> 0x20);
                value_03.color.g = (char)((ulonglong)uVar44 >> 0x28);
                value_03.color.b = (char)((ulonglong)uVar44 >> 0x30);
                value_03.color.a = (char)((ulonglong)uVar44 >> 0x38);
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
                puVar35 = &uStack_42;
                puVar18 = (undefined4 *)&stack0xfffffb64;
                pMVar59 = 
                MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__set_Item_int__UnityEngine__UIVertex_
                ;
                for (iVar37 = 0x1b; iVar37 != 0; iVar37 = iVar37 + -1) {
                  *puVar18 = *(undefined4 *)puVar35;
                  puVar35 = (undefined8 *)((int)puVar35 + 4);
                  puVar18 = puVar18 + 1;
                }
                in_stack_75 = (MethodInfo *)&UNK_?;
                value_04.uv3.w = (float)pMVar59;
                auVar60 = in_stack_76._0_12_;
                auVar62 = in_stack_76._12_12_;
                auVar63 = in_stack_76._24_16_;
                uVar44 = in_stack_76._40_8_;
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
                value_04.color.rgba = (int)uVar44;
                value_04.color.r = (char)((ulonglong)uVar44 >> 0x20);
                value_04.color.g = (char)((ulonglong)uVar44 >> 0x28);
                value_04.color.b = (char)((ulonglong)uVar44 >> 0x30);
                value_04.color.a = (char)((ulonglong)uVar44 >> 0x38);
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
                          (verts,(int32_t)pLStack_10,value_04,in_stack_77);
                this_01 = (Text *)((int)&this_01->klass + 1);
                unaff_ESI.m_CachedPtr = pLStack_26;
                pSVar3 = pSStack_4;
code_?:
                pLVar30 = (LetterSpacing *)((int)OStack_5.m_CachedPtr + 1);
                pTStack_2 = (Text *)((int)&pTStack_2->klass + 1);
              }
              else {
                this_01 = (Text *)((int)&((((LetterSpacing *)unaff_ESI.m_CachedPtr)->fields)._._._.
                                         m_CancellationTokenSource)->klass + (int)&this_01->klass);
                OStack_5.m_CachedPtr =
                     (undefined1 *)((int)&pLVar30[-1].fields.m_spacing + 3) +
                     (int)(((LetterSpacing *)unaff_ESI.m_CachedPtr)->fields)._._._.
                          m_CancellationTokenSource;
                pTStack_2 = (Text *)((int)&pTStack_2[-1].fields.m_TempVerts + 3);
                unaff_ESI.m_CachedPtr = (LetterSpacing *)0x0;
                pLStack_26 = (LetterSpacing *)0x0;
                if (pSVar3 == (String *)0x0) goto code_?;
                cVar1 = func_?();
                if (cVar1 == '\0') goto code_?;
                iStack_29 = func_?();
                if (iStack_29 != 0) {
                  unaff_ESI.m_CachedPtr = (void *)func_?();
                  cVar1 = '\0';
                  pLStack_26 = unaff_ESI.m_CachedPtr;
                  if (unaff_ESI.m_CachedPtr != (LetterSpacing *)0x0) goto code_?;
                  goto code_?;
                }
                pLVar30 = (LetterSpacing *)((int)OStack_5.m_CachedPtr + 1);
                pLStack_26 = (LetterSpacing *)0x0;
                pTStack_2 = (Text *)((int)&pTStack_2->klass + 1);
              }
            }
            this_01 = (Text *)((int)&this_01->klass + 1);
            pLStack_6 = (LetterSpacing__Class *)((int)&(pLStack_6->_0).image + 1);
            ppSStack_8 = ppSStack_8 + 1;
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
  uVar44 = func_?();
  puVar78 = &(((LetterSpacing *)((int)unaff_ESI.m_CachedPtr + 0x38))->fields).field_0xe;
  bVar79 = (byte)extraout_ECX & 0x1f;
  iVar37 = *(int *)puVar78;
  *(int *)puVar78 = *(int *)puVar78 >> bVar79;
  bVar80 = ((uint)extraout_ECX & 0x1f) == 0;
  bVar81 = bVar80 * cVar1 | !bVar80 * ((iVar37 >> bVar79 - 1 & 1U) != 0);
  bVar82 = (byte)uVar44;
  bVar83 = (byte)this_01;
  bVar79 = bVar82 + bVar83;
  bVar80 = CARRY1(bVar82,bVar83) || CARRY1(bVar79,bVar81);
  uVar84 = (undefined3)((ulonglong)uVar44 >> 8);
  cVar1 = bVar79 + bVar81;
  pcVar85 = (char *)CONCAT31(uVar84,cVar1);
  if (cVar1 != '\0' && (SCARRY1(bVar82,bVar83) != SCARRY1(bVar79,bVar81)) == cVar1 < '\0') {
    bVar82 = (byte)((ulonglong)uVar44 >> 8);
    bVar83 = (byte)((ulonglong)uVar44 >> 0x20);
    bVar79 = bVar83 + bVar82;
    cVar86 = bVar79 + bVar80;
    piVar19 = (int *)CONCAT31((int3)((ulonglong)uVar44 >> 0x28),cVar86);
    this = unaff_ESI.m_CachedPtr;
    if (cVar86 != '\0' && (SCARRY1(bVar83,bVar82) != SCARRY1(bVar79,bVar80)) == cVar86 < '\0') {
      *pcVar85 = *pcVar85 + cVar1 + (CARRY1(bVar83,bVar82) || CARRY1(bVar79,bVar80));
      *piVar19 = (int)(pcVar85 + *piVar19);
      *extraout_ECX = *extraout_ECX + cVar1;
      *piVar19 = *piVar19 + CONCAT31(uVar84,cVar1 + *pcVar85);
      pcVar87 = (code *)swi(3);
      (*pcVar87)();
      return;
    }
  }
  if ((this->fields).m_spacing != in_XMM1_Da) {
    (this->fields).m_spacing = in_XMM1_Da;
    pGVar88 = UnityEngine.UI.dll::UnityEngine::UI::BaseMeshEffect::BaseMeshEffect_get_graphic
                        ((BaseMeshEffect *)this,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar21 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pGVar88,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar21 != 0) {
      pGVar88 = UnityEngine.UI.dll::UnityEngine::UI::BaseMeshEffect::BaseMeshEffect_get_graphic
                          ((BaseMeshEffect *)this,(MethodInfo *)0x0);
      if (pGVar88 == (Graphic *)0x0) {
        func_?();
        pcVar87 = (code *)swi(3);
        (*pcVar87)();
        return;
      }
      (*(code *)(pGVar88->klass->vtable).SetVerticesDirty.method)();
    }
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

