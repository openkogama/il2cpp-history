
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
    this_02 = (Il2CppClass *)(*(code *)(this_01->klass->vtable).get_text.method)();
    pIStack_3 = this_02;
    this_03 = UnityEngine.UI.dll::UnityEngine::UI::Text::Text_get_cachedTextGenerator
                        (this_01,(MethodInfo *)0x0);
    unaff_EDI = this_02;
    if ((this_03 != (TextGenerator *)0x0) &&
       (unaff_ESI.m_CachedPtr =
             UnityEngine.TextRenderingModule.dll::UnityEngine::TextGenerator::
             TextGenerator_get_lines(this_03,(MethodInfo *)0x0),
       OStack_4.m_CachedPtr = unaff_ESI.m_CachedPtr, unaff_ESI.m_CachedPtr != (Il2CppClass *)0x0)) {
      OStack_4.m_CachedPtr = unaff_ESI.m_CachedPtr;
      this_01 = (Text *)func_?();
      pIVar5 = (Il2CppClass *)TypeInfo__System__Collections__Generic__IList<UnityEngine::UILineInfo>
      ;
      while (this_01 = (Text *)((int)&this_01[-1].fields.m_TempVerts + 3),
            TypeInfo__System__Collections__Generic__IList<UnityEngine::UILineInfo> =
                 (IList_1_UnityEngine_UILineInfo___Class *)pIVar5, 0 < (int)this_01) {
        pSStack_6 = (String__Class *)((Il2CppClass *)unaff_ESI.m_CachedPtr)->image;
        uVar7 = 0;
        ppSStack_8 = (String **)0x0;
        uVar9._0_1_ = (pSStack_6->_1).rank;
        uVar9._1_1_ = (pSStack_6->_1).minimumAlignment;
        pIStack_10 = (Il2CppClass *)(uint)uVar9;
        if (uVar9 != 0) {
          do {
            unaff_ESI.m_CachedPtr = OStack_4.m_CachedPtr;
            if (pSStack_6->interfaceOffsets[uVar7].interfaceType == pIVar5) {
              ppMVar11 = &(&(((String__Class *)((Il2CppClass *)OStack_4.m_CachedPtr)->image)->vtable)
                           .Equals)
                         [((String__Class *)((Il2CppClass *)OStack_4.m_CachedPtr)->image)->
                          interfaceOffsets[uVar7].offset].method;
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
        unaff_EDI = pIVar5;
        if (pIStack_3 == (Il2CppClass *)0x0) goto code_?;
        pSStack_17 = mscorlib.dll::System::String::String_Insert
                               ((String *)pIStack_3,iStack_13,StringLiteral_u000A,(MethodInfo *)0x0
                               );
        uVar9 = 0;
        pSStack_6 = (String__Class *)((Il2CppClass *)unaff_ESI.m_CachedPtr)->image;
        ppSStack_8 = (String **)0x0;
        uVar7._0_1_ = (pSStack_6->_1).rank;
        uVar7._1_1_ = (pSStack_6->_1).minimumAlignment;
        unaff_EDI = (Il2CppClass *)(uint)uVar7;
        pIStack_10 = unaff_EDI;
        if (uVar7 != 0) {
          do {
            unaff_ESI = OStack_4;
            if (pSStack_6->interfaceOffsets[uVar9].interfaceType ==
                (Il2CppClass *)
                TypeInfo__System__Collections__Generic__IList<UnityEngine::UILineInfo>) {
              ppMVar11 = &(&((*(String__Class **)OStack_4.m_CachedPtr)->vtable).Equals)
                         [(*(String__Class **)OStack_4.m_CachedPtr)->interfaceOffsets[uVar9].offset
                         ].method;
              goto code_?;
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 < uVar7);
        }
        ppMVar11 = (MethodInfo **)func_?();
code_?:
        piVar18 = (int *)(*(code *)*ppMVar11)();
        iStack_13 = *piVar18;
        iStack_14 = piVar18[1];
        iStack_15 = piVar18[2];
        iStack_16 = piVar18[3];
        if (pSStack_17 == (String *)0x0) goto code_?;
        this_02 = (Il2CppClass *)
                  mscorlib.dll::System::String::String_Remove
                            (pSStack_17,iStack_13 + -1,1,(MethodInfo *)0x0);
        pIVar5 = (Il2CppClass *)
                 TypeInfo__System__Collections__Generic__IList<UnityEngine::UILineInfo>;
        pIStack_3 = this_02;
      }
      unaff_EDI = (Il2CppClass *)0x0;
      if (this_02 != (Il2CppClass *)0x0) {
        pSStack_19 = mscorlib.dll::System::String::String_Split
                               ((String *)this_02,10,StringSplitOptions__Enum_None,(MethodInfo *)0x0
                               );
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        this_00 = pTStack_2;
        bVar20 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                          ((Object_1 *)pTStack_2,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar20 != 0) {
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                    ((Object *)StringLiteral_LetterSpacing__Missing_Text_comp,(MethodInfo *)0x0);
          return;
        }
        ppSStack_8 = (String **)(this->fields).m_spacing;
        iVar21 = UnityEngine.UI.dll::UnityEngine::UI::Text::Text_get_fontSize
                           (this_00,(MethodInfo *)0x0);
        this_01 = (Text *)0x0;
        fStack_22 = ((float)iVar21 * (float)ppSStack_8) / _UNK_?;
        fStack_23 = 0.0;
        if ((this->fields).useRichText == 0) {
          bStack_24 = 0;
        }
        else {
          bStack_24 = UnityEngine.UI.dll::UnityEngine::UI::Text::Text_get_supportRichText
                               (this_00,(MethodInfo *)0x0);
        }
        unaff_ESI.m_CachedPtr = (Il2CppClass *)0x0;
        unaff_EDI = (Il2CppClass *)0x0;
        pIStack_3 = (Il2CppClass *)0x0;
        pIStack_25 = (Il2CppClass *)0x0;
        TVar26 = UnityEngine.UI.dll::UnityEngine::UI::Text::Text_get_alignment
                           (pTStack_2,(MethodInfo *)0x0);
        switch(TVar26) {
        case TextAnchor__Enum_UpperLeft:
        case TextAnchor__Enum_MiddleLeft:
        case TextAnchor__Enum_LowerLeft:
          fStack_23 = 0.0;
          break;
        case TextAnchor__Enum_UpperCenter:
        case TextAnchor__Enum_MiddleCenter:
        case TextAnchor__Enum_LowerCenter:
          fStack_23 = _UNK_?;
          break;
        case TextAnchor__Enum_UpperRight:
        case TextAnchor__Enum_MiddleRight:
        case TextAnchor__Enum_LowerRight:
          fStack_23 = _UNK_?;
        }
        pSStack_6 = (String__Class *)0x0;
        if (pSStack_19 != (String__Array *)0x0) {
          ppSStack_8 = pSStack_19->vector;
          while( true ) {
            if ((int)pSStack_19->max_length <= (int)pSStack_6) {
              return;
            }
            uVar27 = 0;
            unaff_EDI = pIStack_3;
            if ((String__Class *)pSStack_19->max_length <= pSStack_6) break;
            pSStack_28 = *ppSStack_8;
            if (pSStack_28 == (String *)0x0) goto code_?;
            OStack_4.m_CachedPtr = (void *)(pSStack_28->fields)._stringLength;
            if (bStack_24 != 0) {
              unaff_EDI = (Il2CppClass *)
                          LetterSpacing_GetRegexMatchedTagCollection
                                    (this,pSStack_28,(int32_t *)&OStack_4,(MethodInfo *)0x0);
              unaff_ESI.m_CachedPtr = (Il2CppClass *)0x0;
              pIStack_25 = (Il2CppClass *)0x0;
              pIStack_3 = unaff_EDI;
              if (unaff_EDI == (Il2CppClass *)0x0) goto code_?;
              cVar1 = func_?();
              if (cVar1 != '\0') {
                iStack_29 = func_?();
                if (iStack_29 == 0) {
                  pIStack_25 = (Il2CppClass *)0x0;
                }
                else {
                  unaff_ESI.m_CachedPtr = (void *)func_?();
                  uVar27 = 0;
                  pIStack_25 = unaff_ESI.m_CachedPtr;
                  if (unaff_ESI.m_CachedPtr == (Il2CppClass *)0x0) goto code_?;
                }
              }
            }
            CVar30._.m_CachedPtr = (Object_1__Fields)(void *)0x0;
            pTStack_2 = (Text *)0x0;
            fStack_31 = (float)(int)((int)&((Il2CppClass *)((int)OStack_4.m_CachedPtr + -0x1bc))->
                                           vtable[0x1f].method + 3) * fStack_22 * fStack_23;
            while (OStack_4 = CVar30._.m_CachedPtr,
                  (int)CVar30._.m_CachedPtr < (pSStack_28->fields)._stringLength) {
              if (((bStack_24 == 0) || (unaff_ESI.m_CachedPtr == (Il2CppClass *)0x0)) ||
                 ((Object_1__Fields)
                  (((BaseMeshEffect__Fields *)&((Il2CppClass *)unaff_ESI.m_CachedPtr)->name)->_)._._
                  ._ != CVar30._.m_CachedPtr)) {
                iStack_32 = (int)this_01 * 6 + 1;
                iStack_29 = (int)this_01 * 6;
                iStack_33 = (int)this_01 * 6 + 2;
                iStack_34 = (int)this_01 * 6 + 3;
                pSStack_17 = (String *)((int)this_01 * 6 + 4);
                unaff_ESI.m_CachedPtr = (void *)((int)this_01 * 6 + 5);
                pIStack_10 = unaff_ESI.m_CachedPtr;
                if (verts == (List_1_UnityEngine_UIVertex_ *)0x0) goto code_?;
                if ((verts->fields)._size + -1 < (int)unaff_ESI.m_CachedPtr) {
                  return;
                }
                puVar35 = (undefined4 *)func_?();
                puVar36 = &uStack_37;
                for (iVar38 = 0x1b; iVar38 != 0; iVar38 = iVar38 + -1) {
                  *(undefined4 *)puVar36 = *puVar35;
                  puVar35 = puVar35 + 1;
                  puVar36 = (undefined8 *)((int)puVar36 + 4);
                }
                puVar35 = (undefined4 *)func_?();
                puVar36 = &uStack_39;
                for (iVar38 = 0x1b; iVar38 != 0; iVar38 = iVar38 + -1) {
                  *(undefined4 *)puVar36 = *puVar35;
                  puVar35 = puVar35 + 1;
                  puVar36 = (undefined8 *)((int)puVar36 + 4);
                }
                puVar35 = (undefined4 *)func_?();
                puVar36 = &uStack_40;
                for (iVar38 = 0x1b; iVar38 != 0; iVar38 = iVar38 + -1) {
                  *(undefined4 *)puVar36 = *puVar35;
                  puVar35 = puVar35 + 1;
                  puVar36 = (undefined8 *)((int)puVar36 + 4);
                }
                puVar35 = (undefined4 *)func_?();
                puVar36 = &uStack_41;
                for (iVar38 = 0x1b; iVar38 != 0; iVar38 = iVar38 + -1) {
                  *(undefined4 *)puVar36 = *puVar35;
                  puVar35 = puVar35 + 1;
                  puVar36 = (undefined8 *)((int)puVar36 + 4);
                }
                puVar35 = (undefined4 *)func_?();
                puVar36 = &uStack_42;
                for (iVar38 = 0x1b; iVar38 != 0; iVar38 = iVar38 + -1) {
                  *(undefined4 *)puVar36 = *puVar35;
                  puVar35 = puVar35 + 1;
                  puVar36 = (undefined8 *)((int)puVar36 + 4);
                }
                puVar35 = (undefined4 *)func_?();
                puVar36 = &uStack_43;
                for (iVar38 = 0x1b; iVar38 != 0; iVar38 = iVar38 + -1) {
                  *(undefined4 *)puVar36 = *puVar35;
                  puVar35 = puVar35 + 1;
                  puVar36 = (undefined8 *)((int)puVar36 + 4);
                }
                puVar36 = (undefined8 *)func_?();
                uStack_44 = *puVar36;
                uVar45 = uStack_44;
                uStack_44._4_4_ = (float)((ulonglong)uStack_44 >> 0x20);
                fStack_46 = *(float *)(puVar36 + 1);
                fVar47 = (float)(int)pTStack_2 * fStack_22 - fStack_31;
                uStack_44._0_4_ = (float)uStack_44 * fVar47;
                uStack_44._4_4_ = uStack_44._4_4_ * fVar47;
                fVar47 = *(float *)(puVar36 + 1) * fVar47;
                fStack_48 = fStack_49 + fVar47;
                uStack_37 = CONCAT44(uStack_37._4_4_ + uStack_44._4_4_,
                                      (float)uStack_37 + (float)uStack_44);
                fStack_49 = fStack_49 + fVar47;
                fStack_50 = fStack_51 + fVar47;
                uStack_39 = CONCAT44(uStack_39._4_4_ + uStack_44._4_4_,
                                      (float)uStack_39 + (float)uStack_44);
                fStack_51 = fStack_51 + fVar47;
                fStack_52 = fVar47 + fStack_53;
                uStack_40 = CONCAT44(uStack_44._4_4_ + uStack_40._4_4_,
                                      (float)uStack_40 + (float)uStack_44);
                fStack_53 = fVar47 + fStack_53;
                fStack_54 = fVar47 + fStack_55;
                uStack_41 = CONCAT44(uStack_44._4_4_ + uStack_41._4_4_,
                                      (float)uStack_44 + (float)uStack_41);
                fStack_55 = fVar47 + fStack_55;
                fStack_56 = fVar47 + fStack_57;
                uStack_42 = CONCAT44(uStack_44._4_4_ + uStack_42._4_4_,
                                      (float)uStack_44 + (float)uStack_42);
                fStack_57 = fVar47 + fStack_57;
                fStack_58 = fVar47 + fStack_59;
                uStack_43 = CONCAT44(uStack_44._4_4_ + uStack_43._4_4_,
                                      (float)uStack_44 + (float)uStack_43);
                fStack_59 = fVar47 + fStack_59;
                puVar36 = &uStack_37;
                puVar35 = (undefined4 *)&stack0xfffff8f8;
                pMVar60 = 
                MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__set_Item_int__UnityEngine__UIVertex_
                ;
                uStack_44 = uVar45;
                for (iVar38 = 0x1b; iVar38 != 0; iVar38 = iVar38 + -1) {
                  *puVar35 = *(undefined4 *)puVar36;
                  puVar36 = (undefined8 *)((int)puVar36 + 4);
                  puVar35 = puVar35 + 1;
                }
                value.uv3.w = (float)pMVar60;
                auVar61 = in_stack_62._0_12_;
                auVar63 = in_stack_62._12_12_;
                auVar64 = in_stack_62._24_16_;
                uVar45 = in_stack_62._40_8_;
                auVar65 = in_stack_62._48_16_;
                auVar66 = in_stack_62._64_16_;
                auVar67 = in_stack_62._80_16_;
                value.position.x = (float)auVar61._0_4_;
                value.position.y = (float)auVar61._4_4_;
                value.position.z = (float)auVar61._8_4_;
                value.normal.x = (float)auVar63._0_4_;
                value.normal.y = (float)auVar63._4_4_;
                value.normal.z = (float)auVar63._8_4_;
                value.tangent.x = (float)auVar64._0_4_;
                value.tangent.y = (float)auVar64._4_4_;
                value.tangent.z = (float)auVar64._8_4_;
                value.tangent.w = (float)auVar64._12_4_;
                value.color.rgba = (int)uVar45;
                value.color.r = (char)((ulonglong)uVar45 >> 0x20);
                value.color.g = (char)((ulonglong)uVar45 >> 0x28);
                value.color.b = (char)((ulonglong)uVar45 >> 0x30);
                value.color.a = (char)((ulonglong)uVar45 >> 0x38);
                value.uv0.x = (float)auVar65._0_4_;
                value.uv0.y = (float)auVar65._4_4_;
                value.uv0.z = (float)auVar65._8_4_;
                value.uv0.w = (float)auVar65._12_4_;
                value.uv1.x = (float)auVar66._0_4_;
                value.uv1.y = (float)auVar66._4_4_;
                value.uv1.z = (float)auVar66._8_4_;
                value.uv1.w = (float)auVar66._12_4_;
                value.uv2.x = (float)auVar67._0_4_;
                value.uv2.y = (float)auVar67._4_4_;
                value.uv2.z = (float)auVar67._8_4_;
                value.uv2.w = (float)auVar67._12_4_;
                value.uv3.x = (float)in_stack_62._96_4_;
                value.uv3.y = (float)in_stack_62._100_4_;
                value.uv3.z = (float)in_stack_62._104_4_;
                mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
                List_1_UnityEngine_UIVertex__set_Item(verts,iStack_29,value,in_stack_68);
                puVar36 = &uStack_39;
                puVar35 = (undefined4 *)&stack0xfffff974;
                pMVar60 = 
                MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__set_Item_int__UnityEngine__UIVertex_
                ;
                for (iVar38 = 0x1b; iVar38 != 0; iVar38 = iVar38 + -1) {
                  *puVar35 = *(undefined4 *)puVar36;
                  puVar36 = (undefined8 *)((int)puVar36 + 4);
                  puVar35 = puVar35 + 1;
                }
                in_stack_68 = (MethodInfo *)&UNK_?;
                value_00.uv3.w = (float)pMVar60;
                auVar61 = in_stack_69._0_12_;
                auVar63 = in_stack_69._12_12_;
                auVar64 = in_stack_69._24_16_;
                uVar45 = in_stack_69._40_8_;
                auVar65 = in_stack_69._48_16_;
                auVar66 = in_stack_69._64_16_;
                auVar67 = in_stack_69._80_16_;
                value_00.position.x = (float)auVar61._0_4_;
                value_00.position.y = (float)auVar61._4_4_;
                value_00.position.z = (float)auVar61._8_4_;
                value_00.normal.x = (float)auVar63._0_4_;
                value_00.normal.y = (float)auVar63._4_4_;
                value_00.normal.z = (float)auVar63._8_4_;
                value_00.tangent.x = (float)auVar64._0_4_;
                value_00.tangent.y = (float)auVar64._4_4_;
                value_00.tangent.z = (float)auVar64._8_4_;
                value_00.tangent.w = (float)auVar64._12_4_;
                value_00.color.rgba = (int)uVar45;
                value_00.color.r = (char)((ulonglong)uVar45 >> 0x20);
                value_00.color.g = (char)((ulonglong)uVar45 >> 0x28);
                value_00.color.b = (char)((ulonglong)uVar45 >> 0x30);
                value_00.color.a = (char)((ulonglong)uVar45 >> 0x38);
                value_00.uv0.x = (float)auVar65._0_4_;
                value_00.uv0.y = (float)auVar65._4_4_;
                value_00.uv0.z = (float)auVar65._8_4_;
                value_00.uv0.w = (float)auVar65._12_4_;
                value_00.uv1.x = (float)auVar66._0_4_;
                value_00.uv1.y = (float)auVar66._4_4_;
                value_00.uv1.z = (float)auVar66._8_4_;
                value_00.uv1.w = (float)auVar66._12_4_;
                value_00.uv2.x = (float)auVar67._0_4_;
                value_00.uv2.y = (float)auVar67._4_4_;
                value_00.uv2.z = (float)auVar67._8_4_;
                value_00.uv2.w = (float)auVar67._12_4_;
                value_00.uv3.x = (float)in_stack_69._96_4_;
                value_00.uv3.y = (float)in_stack_69._100_4_;
                value_00.uv3.z = (float)in_stack_69._104_4_;
                mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
                List_1_UnityEngine_UIVertex__set_Item(verts,iStack_32,value_00,in_stack_70);
                puVar36 = &uStack_40;
                puVar35 = (undefined4 *)&stack0xfffff9f0;
                pMVar60 = 
                MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__set_Item_int__UnityEngine__UIVertex_
                ;
                for (iVar38 = 0x1b; iVar38 != 0; iVar38 = iVar38 + -1) {
                  *puVar35 = *(undefined4 *)puVar36;
                  puVar36 = (undefined8 *)((int)puVar36 + 4);
                  puVar35 = puVar35 + 1;
                }
                in_stack_70 = (MethodInfo *)&UNK_?;
                value_01.uv3.w = (float)pMVar60;
                auVar61 = in_stack_71._0_12_;
                auVar63 = in_stack_71._12_12_;
                auVar64 = in_stack_71._24_16_;
                uVar45 = in_stack_71._40_8_;
                auVar65 = in_stack_71._48_16_;
                auVar66 = in_stack_71._64_16_;
                auVar67 = in_stack_71._80_16_;
                value_01.position.x = (float)auVar61._0_4_;
                value_01.position.y = (float)auVar61._4_4_;
                value_01.position.z = (float)auVar61._8_4_;
                value_01.normal.x = (float)auVar63._0_4_;
                value_01.normal.y = (float)auVar63._4_4_;
                value_01.normal.z = (float)auVar63._8_4_;
                value_01.tangent.x = (float)auVar64._0_4_;
                value_01.tangent.y = (float)auVar64._4_4_;
                value_01.tangent.z = (float)auVar64._8_4_;
                value_01.tangent.w = (float)auVar64._12_4_;
                value_01.color.rgba = (int)uVar45;
                value_01.color.r = (char)((ulonglong)uVar45 >> 0x20);
                value_01.color.g = (char)((ulonglong)uVar45 >> 0x28);
                value_01.color.b = (char)((ulonglong)uVar45 >> 0x30);
                value_01.color.a = (char)((ulonglong)uVar45 >> 0x38);
                value_01.uv0.x = (float)auVar65._0_4_;
                value_01.uv0.y = (float)auVar65._4_4_;
                value_01.uv0.z = (float)auVar65._8_4_;
                value_01.uv0.w = (float)auVar65._12_4_;
                value_01.uv1.x = (float)auVar66._0_4_;
                value_01.uv1.y = (float)auVar66._4_4_;
                value_01.uv1.z = (float)auVar66._8_4_;
                value_01.uv1.w = (float)auVar66._12_4_;
                value_01.uv2.x = (float)auVar67._0_4_;
                value_01.uv2.y = (float)auVar67._4_4_;
                value_01.uv2.z = (float)auVar67._8_4_;
                value_01.uv2.w = (float)auVar67._12_4_;
                value_01.uv3.x = (float)in_stack_71._96_4_;
                value_01.uv3.y = (float)in_stack_71._100_4_;
                value_01.uv3.z = (float)in_stack_71._104_4_;
                mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
                List_1_UnityEngine_UIVertex__set_Item(verts,iStack_33,value_01,in_stack_72);
                puVar36 = &uStack_41;
                puVar35 = (undefined4 *)&stack0xfffffa6c;
                pMVar60 = 
                MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__set_Item_int__UnityEngine__UIVertex_
                ;
                for (iVar38 = 0x1b; iVar38 != 0; iVar38 = iVar38 + -1) {
                  *puVar35 = *(undefined4 *)puVar36;
                  puVar36 = (undefined8 *)((int)puVar36 + 4);
                  puVar35 = puVar35 + 1;
                }
                in_stack_72 = (MethodInfo *)&UNK_?;
                value_02.uv3.w = (float)pMVar60;
                auVar61 = in_stack_73._0_12_;
                auVar63 = in_stack_73._12_12_;
                auVar64 = in_stack_73._24_16_;
                uVar45 = in_stack_73._40_8_;
                auVar65 = in_stack_73._48_16_;
                auVar66 = in_stack_73._64_16_;
                auVar67 = in_stack_73._80_16_;
                value_02.position.x = (float)auVar61._0_4_;
                value_02.position.y = (float)auVar61._4_4_;
                value_02.position.z = (float)auVar61._8_4_;
                value_02.normal.x = (float)auVar63._0_4_;
                value_02.normal.y = (float)auVar63._4_4_;
                value_02.normal.z = (float)auVar63._8_4_;
                value_02.tangent.x = (float)auVar64._0_4_;
                value_02.tangent.y = (float)auVar64._4_4_;
                value_02.tangent.z = (float)auVar64._8_4_;
                value_02.tangent.w = (float)auVar64._12_4_;
                value_02.color.rgba = (int)uVar45;
                value_02.color.r = (char)((ulonglong)uVar45 >> 0x20);
                value_02.color.g = (char)((ulonglong)uVar45 >> 0x28);
                value_02.color.b = (char)((ulonglong)uVar45 >> 0x30);
                value_02.color.a = (char)((ulonglong)uVar45 >> 0x38);
                value_02.uv0.x = (float)auVar65._0_4_;
                value_02.uv0.y = (float)auVar65._4_4_;
                value_02.uv0.z = (float)auVar65._8_4_;
                value_02.uv0.w = (float)auVar65._12_4_;
                value_02.uv1.x = (float)auVar66._0_4_;
                value_02.uv1.y = (float)auVar66._4_4_;
                value_02.uv1.z = (float)auVar66._8_4_;
                value_02.uv1.w = (float)auVar66._12_4_;
                value_02.uv2.x = (float)auVar67._0_4_;
                value_02.uv2.y = (float)auVar67._4_4_;
                value_02.uv2.z = (float)auVar67._8_4_;
                value_02.uv2.w = (float)auVar67._12_4_;
                value_02.uv3.x = (float)in_stack_73._96_4_;
                value_02.uv3.y = (float)in_stack_73._100_4_;
                value_02.uv3.z = (float)in_stack_73._104_4_;
                mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
                List_1_UnityEngine_UIVertex__set_Item(verts,iStack_34,value_02,in_stack_74);
                puVar36 = &uStack_42;
                puVar35 = (undefined4 *)&stack0xfffffae8;
                pMVar60 = 
                MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__set_Item_int__UnityEngine__UIVertex_
                ;
                for (iVar38 = 0x1b; iVar38 != 0; iVar38 = iVar38 + -1) {
                  *puVar35 = *(undefined4 *)puVar36;
                  puVar36 = (undefined8 *)((int)puVar36 + 4);
                  puVar35 = puVar35 + 1;
                }
                in_stack_74 = (MethodInfo *)&UNK_?;
                value_03.uv3.w = (float)pMVar60;
                auVar61 = in_stack_75._0_12_;
                auVar63 = in_stack_75._12_12_;
                auVar64 = in_stack_75._24_16_;
                uVar45 = in_stack_75._40_8_;
                auVar65 = in_stack_75._48_16_;
                auVar66 = in_stack_75._64_16_;
                auVar67 = in_stack_75._80_16_;
                value_03.position.x = (float)auVar61._0_4_;
                value_03.position.y = (float)auVar61._4_4_;
                value_03.position.z = (float)auVar61._8_4_;
                value_03.normal.x = (float)auVar63._0_4_;
                value_03.normal.y = (float)auVar63._4_4_;
                value_03.normal.z = (float)auVar63._8_4_;
                value_03.tangent.x = (float)auVar64._0_4_;
                value_03.tangent.y = (float)auVar64._4_4_;
                value_03.tangent.z = (float)auVar64._8_4_;
                value_03.tangent.w = (float)auVar64._12_4_;
                value_03.color.rgba = (int)uVar45;
                value_03.color.r = (char)((ulonglong)uVar45 >> 0x20);
                value_03.color.g = (char)((ulonglong)uVar45 >> 0x28);
                value_03.color.b = (char)((ulonglong)uVar45 >> 0x30);
                value_03.color.a = (char)((ulonglong)uVar45 >> 0x38);
                value_03.uv0.x = (float)auVar65._0_4_;
                value_03.uv0.y = (float)auVar65._4_4_;
                value_03.uv0.z = (float)auVar65._8_4_;
                value_03.uv0.w = (float)auVar65._12_4_;
                value_03.uv1.x = (float)auVar66._0_4_;
                value_03.uv1.y = (float)auVar66._4_4_;
                value_03.uv1.z = (float)auVar66._8_4_;
                value_03.uv1.w = (float)auVar66._12_4_;
                value_03.uv2.x = (float)auVar67._0_4_;
                value_03.uv2.y = (float)auVar67._4_4_;
                value_03.uv2.z = (float)auVar67._8_4_;
                value_03.uv2.w = (float)auVar67._12_4_;
                value_03.uv3.x = (float)in_stack_75._96_4_;
                value_03.uv3.y = (float)in_stack_75._100_4_;
                value_03.uv3.z = (float)in_stack_75._104_4_;
                mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
                List_1_UnityEngine_UIVertex__set_Item
                          (verts,(int32_t)pSStack_17,value_03,in_stack_76);
                puVar36 = &uStack_43;
                puVar35 = (undefined4 *)&stack0xfffffb64;
                pMVar60 = 
                MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__set_Item_int__UnityEngine__UIVertex_
                ;
                for (iVar38 = 0x1b; iVar38 != 0; iVar38 = iVar38 + -1) {
                  *puVar35 = *(undefined4 *)puVar36;
                  puVar36 = (undefined8 *)((int)puVar36 + 4);
                  puVar35 = puVar35 + 1;
                }
                in_stack_76 = (MethodInfo *)&UNK_?;
                value_04.uv3.w = (float)pMVar60;
                auVar61 = in_stack_77._0_12_;
                auVar63 = in_stack_77._12_12_;
                auVar64 = in_stack_77._24_16_;
                uVar45 = in_stack_77._40_8_;
                auVar65 = in_stack_77._48_16_;
                auVar66 = in_stack_77._64_16_;
                auVar67 = in_stack_77._80_16_;
                value_04.position.x = (float)auVar61._0_4_;
                value_04.position.y = (float)auVar61._4_4_;
                value_04.position.z = (float)auVar61._8_4_;
                value_04.normal.x = (float)auVar63._0_4_;
                value_04.normal.y = (float)auVar63._4_4_;
                value_04.normal.z = (float)auVar63._8_4_;
                value_04.tangent.x = (float)auVar64._0_4_;
                value_04.tangent.y = (float)auVar64._4_4_;
                value_04.tangent.z = (float)auVar64._8_4_;
                value_04.tangent.w = (float)auVar64._12_4_;
                value_04.color.rgba = (int)uVar45;
                value_04.color.r = (char)((ulonglong)uVar45 >> 0x20);
                value_04.color.g = (char)((ulonglong)uVar45 >> 0x28);
                value_04.color.b = (char)((ulonglong)uVar45 >> 0x30);
                value_04.color.a = (char)((ulonglong)uVar45 >> 0x38);
                value_04.uv0.x = (float)auVar65._0_4_;
                value_04.uv0.y = (float)auVar65._4_4_;
                value_04.uv0.z = (float)auVar65._8_4_;
                value_04.uv0.w = (float)auVar65._12_4_;
                value_04.uv1.x = (float)auVar66._0_4_;
                value_04.uv1.y = (float)auVar66._4_4_;
                value_04.uv1.z = (float)auVar66._8_4_;
                value_04.uv1.w = (float)auVar66._12_4_;
                value_04.uv2.x = (float)auVar67._0_4_;
                value_04.uv2.y = (float)auVar67._4_4_;
                value_04.uv2.z = (float)auVar67._8_4_;
                value_04.uv2.w = (float)auVar67._12_4_;
                value_04.uv3.x = (float)in_stack_77._96_4_;
                value_04.uv3.y = (float)in_stack_77._100_4_;
                value_04.uv3.z = (float)in_stack_77._104_4_;
                mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
                List_1_UnityEngine_UIVertex__set_Item
                          (verts,(int32_t)pIStack_10,value_04,in_stack_78);
                this_01 = (Text *)((int)&this_01->klass + 1);
                unaff_ESI.m_CachedPtr = pIStack_25;
                unaff_EDI = pIStack_3;
code_?:
                CVar30._.m_CachedPtr = (Object_1__Fields)((int)OStack_4.m_CachedPtr + 1);
                pTStack_2 = (Text *)((int)&pTStack_2->klass + 1);
              }
              else {
                this_01 = (Text *)((int)&((CancellationTokenSource *)
                                         ((Il2CppClass *)unaff_ESI.m_CachedPtr)->namespaze)->klass +
                                  (int)&this_01->klass);
                OStack_4.m_CachedPtr =
                     (undefined1 *)
                     ((int)&((CancellationTokenSource *)
                            ((Il2CppClass *)unaff_ESI.m_CachedPtr)->namespaze)[-1].fields._timer + 3
                     ) + CVar30._.m_CachedPtr;
                pTStack_2 = (Text *)((int)&pTStack_2[-1].fields.m_TempVerts + 3);
                unaff_ESI.m_CachedPtr = (Il2CppClass *)0x0;
                pIStack_25 = (Il2CppClass *)0x0;
                if (unaff_EDI == (Il2CppClass *)0x0) goto code_?;
                cVar1 = func_?();
                if (cVar1 == '\0') goto code_?;
                iStack_29 = func_?();
                if (iStack_29 != 0) {
                  unaff_ESI.m_CachedPtr = (void *)func_?();
                  uVar27 = 0;
                  pIStack_25 = unaff_ESI.m_CachedPtr;
                  if (unaff_ESI.m_CachedPtr != (Il2CppClass *)0x0) goto code_?;
                  goto code_?;
                }
                CVar30._.m_CachedPtr = (Object_1__Fields)((int)OStack_4.m_CachedPtr + 1);
                pIStack_25 = (Il2CppClass *)0x0;
                pTStack_2 = (Text *)((int)&pTStack_2->klass + 1);
              }
            }
            this_01 = (Text *)((int)&this_01->klass + 1);
            pSStack_6 = (String__Class *)((int)&(pSStack_6->_0).image + 1);
            ppSStack_8 = ppSStack_8 + 1;
          }
          goto code_?;
        }
      }
    }
  }
code_?:
  uVar27 = 0;
  func_?();
code_?:
  func_?();
code_?:
  uVar45 = func_?();
  piVar18 = (int *)((ulonglong)uVar45 >> 0x20);
  pcVar79 = (char *)uVar45;
  if ((bool)uVar27) {
    pbVar80 = (byte *)(pcVar79 + 0x77);
    bVar81 = *pbVar80;
    bVar82 = (byte)((uint)this_01 >> 8);
    bVar83 = *pbVar80 + bVar82;
    *pbVar80 = bVar83 + 1;
    cVar1 = (char)uVar45;
    *(char *)((int)piVar18 + 0x104e77) =
         *(char *)((int)piVar18 + 0x104e77) + cVar1 + (CARRY1(bVar81,bVar82) || 0xfe < bVar83);
    *piVar18 = (int)(pcVar79 + *piVar18);
    *extraout_ECX = *extraout_ECX + cVar1;
    *piVar18 = *piVar18 + CONCAT31((int3)((ulonglong)uVar45 >> 8),cVar1 + *pcVar79);
    pcVar84 = (code *)swi(3);
    (*pcVar84)();
    return;
  }
  ppTVar85 = &this_01[-0xc3caa].fields._._.m_ColorTweenRunner;
  *ppTVar85 = (TweenRunner_1_ColorTween_ *)(pcVar79 + (int)&(*ppTVar85)->klass);
  if (*(int *)(extraout_ECX + 0x74) == 0) {
    func_?();
  }
  bVar20 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)unaff_EDI,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar20 != 0) {
    pGVar86 = UnityEngine.UI.dll::UnityEngine::UI::BaseMeshEffect::BaseMeshEffect_get_graphic
                        (unaff_ESI.m_CachedPtr,(MethodInfo *)0x0);
    if (pGVar86 == (Graphic *)0x0) {
      func_?();
      pcVar84 = (code *)swi(3);
      (*pcVar84)();
      return;
    }
    (*(code *)(pGVar86->klass->vtable).SetVerticesDirty.method)();
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

