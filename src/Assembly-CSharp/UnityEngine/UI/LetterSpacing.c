
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
  this_00 = (Text *)UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                              ((Component *)this,
                               UnityEngine__UI__Text_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::Text>__
                              );
  pTStack_2 = this_00;
  if (this_00 != (Text *)0x0) {
    unaff_EDI = (Il2CppClass *)(*(code *)(this_00->klass->vtable).get_text.method)();
    pIStack_3 = unaff_EDI;
    this_01 = UnityEngine.UI.dll::UnityEngine::UI::Text::Text_get_cachedTextGenerator
                        (this_00,(MethodInfo *)0x0);
    if ((this_01 != (TextGenerator *)0x0) &&
       (pIVar4 = UnityEngine.TextRenderingModule.dll::UnityEngine::TextGenerator::
                 TextGenerator_get_lines(this_01,(MethodInfo *)0x0), pIStack_5 = pIVar4,
       pIVar4 != (IList_1_UnityEngine_UILineInfo_ *)0x0)) {
      pIStack_6 = pIVar4->klass;
      uVar7 = 0;
      ppSStack_8 = (String **)0x0;
      uVar9._0_1_ = (pIStack_6->_1).rank;
      uVar9._1_1_ = (pIStack_6->_1).minimumAlignment;
      if (uVar9 != 0) {
        do {
          if (pIStack_6->interfaceOffsets[uVar7].interfaceType ==
              (Il2CppClass *)
              TypeInfo__System__Collections__Generic__ICollection<UnityEngine::UILineInfo>) {
            ppMVar10 = &(&(pIVar4->klass->vtable).get_Item)
                        [pIVar4->klass->interfaceOffsets[uVar7].offset].method;
            this_02 = pIStack_3;
            goto code_?;
          }
          uVar7 = uVar7 + 1;
          unaff_EDI = pIStack_3;
        } while (uVar7 < uVar9);
      }
      ppMVar10 = (MethodInfo **)func_?();
      this_02 = unaff_EDI;
code_?:
      this_00 = (Text *)(*(code *)*ppMVar10)();
      pIVar11 = (Il2CppClass *)TypeInfo__System__Collections__Generic__IList<UnityEngine::UILineInfo>
      ;
      pIVar12 = pIStack_5;
      while (this_00 = (Text *)((int)&this_00[-1].fields.m_TempVerts + 3),
            TypeInfo__System__Collections__Generic__IList<UnityEngine::UILineInfo> =
                 (IList_1_UnityEngine_UILineInfo___Class *)pIVar11, pIStack_5 = pIVar12,
            0 < (int)this_00) {
        pIStack_6 = pIVar4->klass;
        uVar9 = 0;
        ppSStack_8 = (String **)0x0;
        uVar7._0_1_ = (pIStack_6->_1).rank;
        uVar7._1_1_ = (pIStack_6->_1).minimumAlignment;
        pIStack_13 = (Il2CppClass *)(uint)uVar7;
        if (uVar7 != 0) {
          do {
            if (pIStack_6->interfaceOffsets[uVar9].interfaceType == pIVar11) {
              ppMVar10 = &(&(pIVar12->klass->vtable).get_Item)
                          [pIVar12->klass->interfaceOffsets[uVar9].offset].method;
              goto code_?;
            }
            uVar9 = uVar9 + 1;
            pIVar4 = pIVar12;
          } while (uVar9 < uVar7);
        }
        ppMVar10 = (MethodInfo **)func_?();
        pIVar12 = pIVar4;
code_?:
        piVar14 = (int32_t *)(*(code *)*ppMVar10)();
        iStack_15 = *piVar14;
        VStack_16.x = (float)piVar14[1];
        VStack_16.y = (float)piVar14[2];
        VStack_16.z = (float)piVar14[3];
        unaff_EDI = pIVar11;
        if (pIStack_3 == (Il2CppClass *)0x0) goto code_?;
        pSStack_17 = mscorlib.dll::System::String::String_Insert
                               ((String *)pIStack_3,iStack_15,StringLiteral_u000A,(MethodInfo *)0x0
                               );
        uVar9 = 0;
        pIStack_6 = pIVar12->klass;
        ppSStack_8 = (String **)0x0;
        uVar18._0_1_ = (pIStack_6->_1).rank;
        uVar18._1_1_ = (pIStack_6->_1).minimumAlignment;
        unaff_EDI = (Il2CppClass *)(uint)uVar18;
        pIStack_13 = unaff_EDI;
        if (uVar18 != 0) {
          do {
            if (pIStack_6->interfaceOffsets[uVar9].interfaceType ==
                (Il2CppClass *)
                TypeInfo__System__Collections__Generic__IList<UnityEngine::UILineInfo>) {
              ppMVar10 = &(&(pIStack_5->klass->vtable).get_Item)
                          [pIStack_5->klass->interfaceOffsets[uVar9].offset].method;
              pIVar4 = pIStack_5;
              goto code_?;
            }
            uVar9 = uVar9 + 1;
            pIVar12 = pIStack_5;
          } while (uVar9 < uVar18);
        }
        ppMVar10 = (MethodInfo **)func_?();
        pIVar4 = pIVar12;
code_?:
        piVar19 = (int *)(*(code *)*ppMVar10)();
        iStack_15 = *piVar19;
        VStack_16.x = (float)piVar19[1];
        VStack_16.y = (float)piVar19[2];
        VStack_16.z = (float)piVar19[3];
        if (pSStack_17 == (String *)0x0) goto code_?;
        this_02 = (Il2CppClass *)
                  mscorlib.dll::System::String::String_Remove
                            (pSStack_17,iStack_15 + -1,1,(MethodInfo *)0x0);
        pIVar11 = (Il2CppClass *)
                 TypeInfo__System__Collections__Generic__IList<UnityEngine::UILineInfo>;
        pIVar12 = pIStack_5;
        pIStack_3 = this_02;
      }
      unaff_EDI = (Il2CppClass *)0x0;
      if (this_02 != (Il2CppClass *)0x0) {
        pSStack_20 = mscorlib.dll::System::String::String_Split
                               ((String *)this_02,10,StringSplitOptions__Enum_None,(MethodInfo *)0x0
                               );
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pTVar21 = pTStack_2;
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
                           (pTVar21,(MethodInfo *)0x0);
        this_00 = (Text *)0x0;
        fStack_24 = ((float)iVar23 * (float)ppSStack_8) / _UNK_?;
        pIStack_3 = (Il2CppClass *)0x0;
        if ((this->fields).useRichText == 0) {
          bStack_25 = 0;
        }
        else {
          bStack_25 = UnityEngine.UI.dll::UnityEngine::UI::Text::Text_get_supportRichText
                               (pTVar21,(MethodInfo *)0x0);
        }
        iVar26 = 0;
        unaff_EDI = (Il2CppClass *)0x0;
        pIStack_27 = (Il2CppClass *)0x0;
        iStack_28 = 0;
        TVar29 = UnityEngine.UI.dll::UnityEngine::UI::Text::Text_get_alignment
                           (pTStack_2,(MethodInfo *)0x0);
        switch(TVar29) {
        case TextAnchor__Enum_UpperLeft:
        case TextAnchor__Enum_MiddleLeft:
        case TextAnchor__Enum_LowerLeft:
          pIStack_3 = (Il2CppClass *)0x0;
          break;
        case TextAnchor__Enum_UpperCenter:
        case TextAnchor__Enum_MiddleCenter:
        case TextAnchor__Enum_LowerCenter:
          pIStack_3 = _UNK_?;
          break;
        case TextAnchor__Enum_UpperRight:
        case TextAnchor__Enum_MiddleRight:
        case TextAnchor__Enum_LowerRight:
          pIStack_3 = _UNK_?;
        }
        pIStack_6 = (IList_1_UnityEngine_UILineInfo___Class *)0x0;
        if (pSStack_20 != (String__Array *)0x0) {
          ppSStack_8 = pSStack_20->vector;
          while( true ) {
            if ((int)pSStack_20->max_length <= (int)pIStack_6) {
              return;
            }
            bVar30 = 0;
            unaff_EDI = pIStack_27;
            if ((IList_1_UnityEngine_UILineInfo___Class *)pSStack_20->max_length <= pIStack_6)
            break;
            pSStack_31 = *ppSStack_8;
            if (pSStack_31 == (String *)0x0) goto code_?;
            pTStack_2 = (Text *)(pSStack_31->fields)._stringLength;
            if (bStack_25 != 0) {
              unaff_EDI = (Il2CppClass *)
                          LetterSpacing_GetRegexMatchedTagCollection
                                    (this,pSStack_31,(int32_t *)&pTStack_2,(MethodInfo *)0x0);
              iVar26 = 0;
              iStack_28 = 0;
              pIStack_27 = unaff_EDI;
              if (unaff_EDI == (Il2CppClass *)0x0) goto code_?;
              cVar1 = func_?();
              if (cVar1 != '\0') {
                iStack_32 = func_?();
                if (iStack_32 == 0) {
                  iStack_28 = 0;
                }
                else {
                  iVar26 = func_?();
                  bVar30 = 0;
                  iStack_28 = iVar26;
                  if (iVar26 == 0) goto code_?;
                }
              }
            }
            pTVar21 = (Text *)0x0;
            pIStack_5 = (IList_1_UnityEngine_UILineInfo_ *)0x0;
            fStack_33 = (float)(int)((int)&pTStack_2[-1].fields.m_TempVerts + 3) * fStack_24 *
                        (float)pIStack_3;
            while (pTStack_2 = pTVar21, (int)pTVar21 < (pSStack_31->fields)._stringLength) {
              if (((bStack_25 == 0) || (iVar26 == 0)) || (*(Text **)(iVar26 + 8) != pTVar21)) {
                iStack_34 = (int)this_00 * 6 + 1;
                iStack_32 = (int)this_00 * 6;
                iStack_35 = (int)this_00 * 6 + 2;
                iStack_36 = (int)this_00 * 6 + 3;
                pSStack_17 = (String *)((int)this_00 * 6 + 4);
                pIStack_13 = (Il2CppClass *)((int)this_00 * 6 + 5);
                if (verts == (List_1_UnityEngine_UIVertex_ *)0x0) goto code_?;
                if ((verts->fields)._size + -1 < (int)pIStack_13) {
                  return;
                }
                puVar37 = (undefined4 *)func_?();
                puVar38 = &uStack_39;
                for (iVar26 = 0x1b; iVar26 != 0; iVar26 = iVar26 + -1) {
                  *(undefined4 *)puVar38 = *puVar37;
                  puVar37 = puVar37 + 1;
                  puVar38 = (undefined8 *)((int)puVar38 + 4);
                }
                puVar37 = (undefined4 *)func_?();
                puVar38 = &uStack_40;
                for (iVar26 = 0x1b; iVar26 != 0; iVar26 = iVar26 + -1) {
                  *(undefined4 *)puVar38 = *puVar37;
                  puVar37 = puVar37 + 1;
                  puVar38 = (undefined8 *)((int)puVar38 + 4);
                }
                puVar37 = (undefined4 *)func_?();
                puVar38 = &uStack_41;
                for (iVar26 = 0x1b; iVar26 != 0; iVar26 = iVar26 + -1) {
                  *(undefined4 *)puVar38 = *puVar37;
                  puVar37 = puVar37 + 1;
                  puVar38 = (undefined8 *)((int)puVar38 + 4);
                }
                puVar37 = (undefined4 *)func_?();
                puVar38 = &uStack_42;
                for (iVar26 = 0x1b; iVar26 != 0; iVar26 = iVar26 + -1) {
                  *(undefined4 *)puVar38 = *puVar37;
                  puVar37 = puVar37 + 1;
                  puVar38 = (undefined8 *)((int)puVar38 + 4);
                }
                puVar37 = (undefined4 *)func_?();
                puVar38 = &uStack_43;
                for (iVar26 = 0x1b; iVar26 != 0; iVar26 = iVar26 + -1) {
                  *(undefined4 *)puVar38 = *puVar37;
                  puVar37 = puVar37 + 1;
                  puVar38 = (undefined8 *)((int)puVar38 + 4);
                }
                puVar37 = (undefined4 *)func_?();
                __return_storage_ptr__ = &VStack_16;
                uVar44 = 0;
                puVar38 = &uStack_45;
                for (iVar26 = 0x1b; iVar26 != 0; iVar26 = iVar26 + -1) {
                  *(undefined4 *)puVar38 = *puVar37;
                  puVar37 = puVar37 + 1;
                  puVar38 = (undefined8 *)((int)puVar38 + 4);
                }
                puVar46 = &UNK_?;
                pVVar47 = RTG::TriangPrismShape3D::TriangPrismShape3D_get_ModelRight
                                    (__return_storage_ptr__,(MethodInfo *)0x0);
                uStack_48._0_4_ = pVVar47->x;
                uStack_48._4_4_ = pVVar47->y;
                fStack_49 = pVVar47->z;
                fVar50 = (float)(int)pIStack_5 * fStack_24 - fStack_33;
                fVar51 = (float)(undefined4)uStack_48 * fVar50;
                fVar52 = (float)uStack_48._4_4_ * fVar50;
                fVar50 = pVVar47->z * fVar50;
                fStack_53 = fStack_54 + fVar50;
                uStack_39 = CONCAT44(uStack_39._4_4_ + fVar52,(float)uStack_39 + fVar51);
                fStack_54 = fStack_54 + fVar50;
                fStack_55 = fStack_56 + fVar50;
                uStack_40 = CONCAT44(uStack_40._4_4_ + fVar52,(float)uStack_40 + fVar51);
                fStack_56 = fStack_56 + fVar50;
                fStack_57 = fStack_58 + fVar50;
                uStack_41 = CONCAT44(uStack_41._4_4_ + fVar52,(float)uStack_41 + fVar51);
                fStack_58 = fStack_58 + fVar50;
                fStack_59 = fStack_60 + fVar50;
                uStack_42 = CONCAT44(uStack_42._4_4_ + fVar52,(float)uStack_42 + fVar51);
                fStack_60 = fStack_60 + fVar50;
                fStack_61 = fStack_62 + fVar50;
                uStack_43 = CONCAT44(uStack_43._4_4_ + fVar52,(float)uStack_43 + fVar51);
                fStack_62 = fStack_62 + fVar50;
                fStack_63 = fStack_64 + fVar50;
                uStack_45 = CONCAT44(uStack_45._4_4_ + fVar52,(float)uStack_45 + fVar51);
                fStack_64 = fStack_64 + fVar50;
                puVar38 = &uStack_39;
                puVar37 = (undefined4 *)&stack0xfffff8f8;
                pMVar65 = 
                MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__set_Item_int__UnityEngine__UIVertex_
                ;
                for (iVar26 = 0x1b; iVar26 != 0; iVar26 = iVar26 + -1) {
                  *puVar37 = *(undefined4 *)puVar38;
                  puVar38 = (undefined8 *)((int)puVar38 + 4);
                  puVar37 = puVar37 + 1;
                }
                value.uv0.w = (float)puVar46;
                auVar66 = in_stack_67._0_12_;
                auVar68 = in_stack_67._12_12_;
                auVar69 = in_stack_67._24_16_;
                uVar70 = in_stack_67._40_8_;
                value.position.x = (float)auVar66._0_4_;
                value.position.y = (float)auVar66._4_4_;
                value.position.z = (float)auVar66._8_4_;
                value.normal.x = (float)auVar68._0_4_;
                value.normal.y = (float)auVar68._4_4_;
                value.normal.z = (float)auVar68._8_4_;
                value.tangent.x = (float)auVar69._0_4_;
                value.tangent.y = (float)auVar69._4_4_;
                value.tangent.z = (float)auVar69._8_4_;
                value.tangent.w = (float)auVar69._12_4_;
                value.color.rgba = (int)uVar70;
                value.color.r = (char)((ulonglong)uVar70 >> 0x20);
                value.color.g = (char)((ulonglong)uVar70 >> 0x28);
                value.color.b = (char)((ulonglong)uVar70 >> 0x30);
                value.color.a = (char)((ulonglong)uVar70 >> 0x38);
                value.uv0.x = (float)in_stack_67._48_4_;
                value.uv0.y = (float)in_stack_67._52_4_;
                value.uv0.z = (float)in_stack_67._56_4_;
                value.uv1.x = (float)__return_storage_ptr__;
                value.uv1.y = (float)uVar44;
                auVar69 = in_stack_71._8_16_;
                value.uv1.z = (float)in_stack_71._0_4_;
                value.uv1.w = (float)in_stack_71._4_4_;
                value.uv2.x = (float)auVar69._0_4_;
                value.uv2.y = (float)auVar69._4_4_;
                value.uv2.z = (float)auVar69._8_4_;
                value.uv2.w = (float)auVar69._12_4_;
                value.uv3.x = (float)in_stack_71._24_4_;
                value.uv3.y = (float)in_stack_71._28_4_;
                value.uv3.z = (float)in_stack_71._32_4_;
                value.uv3.w = (float)pMVar65;
                mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
                List_1_UnityEngine_UIVertex__set_Item(verts,iStack_32,value,in_stack_72);
                puVar38 = &uStack_40;
                puVar37 = (undefined4 *)&stack0xfffff974;
                pMVar65 = 
                MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__set_Item_int__UnityEngine__UIVertex_
                ;
                for (iVar26 = 0x1b; iVar26 != 0; iVar26 = iVar26 + -1) {
                  *puVar37 = *(undefined4 *)puVar38;
                  puVar38 = (undefined8 *)((int)puVar38 + 4);
                  puVar37 = puVar37 + 1;
                }
                in_stack_72 = (MethodInfo *)&UNK_?;
                value_00.uv3.w = (float)pMVar65;
                auVar66 = in_stack_73._0_12_;
                auVar68 = in_stack_73._12_12_;
                auVar69 = in_stack_73._24_16_;
                uVar70 = in_stack_73._40_8_;
                auVar74 = in_stack_73._48_16_;
                auVar75 = in_stack_73._64_16_;
                auVar76 = in_stack_73._80_16_;
                value_00.position.x = (float)auVar66._0_4_;
                value_00.position.y = (float)auVar66._4_4_;
                value_00.position.z = (float)auVar66._8_4_;
                value_00.normal.x = (float)auVar68._0_4_;
                value_00.normal.y = (float)auVar68._4_4_;
                value_00.normal.z = (float)auVar68._8_4_;
                value_00.tangent.x = (float)auVar69._0_4_;
                value_00.tangent.y = (float)auVar69._4_4_;
                value_00.tangent.z = (float)auVar69._8_4_;
                value_00.tangent.w = (float)auVar69._12_4_;
                value_00.color.rgba = (int)uVar70;
                value_00.color.r = (char)((ulonglong)uVar70 >> 0x20);
                value_00.color.g = (char)((ulonglong)uVar70 >> 0x28);
                value_00.color.b = (char)((ulonglong)uVar70 >> 0x30);
                value_00.color.a = (char)((ulonglong)uVar70 >> 0x38);
                value_00.uv0.x = (float)auVar74._0_4_;
                value_00.uv0.y = (float)auVar74._4_4_;
                value_00.uv0.z = (float)auVar74._8_4_;
                value_00.uv0.w = (float)auVar74._12_4_;
                value_00.uv1.x = (float)auVar75._0_4_;
                value_00.uv1.y = (float)auVar75._4_4_;
                value_00.uv1.z = (float)auVar75._8_4_;
                value_00.uv1.w = (float)auVar75._12_4_;
                value_00.uv2.x = (float)auVar76._0_4_;
                value_00.uv2.y = (float)auVar76._4_4_;
                value_00.uv2.z = (float)auVar76._8_4_;
                value_00.uv2.w = (float)auVar76._12_4_;
                value_00.uv3.x = (float)in_stack_73._96_4_;
                value_00.uv3.y = (float)in_stack_73._100_4_;
                value_00.uv3.z = (float)in_stack_73._104_4_;
                mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
                List_1_UnityEngine_UIVertex__set_Item(verts,iStack_34,value_00,in_stack_77);
                puVar38 = &uStack_41;
                puVar37 = (undefined4 *)&stack0xfffff9f0;
                pMVar65 = 
                MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__set_Item_int__UnityEngine__UIVertex_
                ;
                for (iVar26 = 0x1b; iVar26 != 0; iVar26 = iVar26 + -1) {
                  *puVar37 = *(undefined4 *)puVar38;
                  puVar38 = (undefined8 *)((int)puVar38 + 4);
                  puVar37 = puVar37 + 1;
                }
                in_stack_77 = (MethodInfo *)&UNK_?;
                value_01.uv3.w = (float)pMVar65;
                auVar66 = in_stack_78._0_12_;
                auVar68 = in_stack_78._12_12_;
                auVar69 = in_stack_78._24_16_;
                uVar70 = in_stack_78._40_8_;
                auVar74 = in_stack_78._48_16_;
                auVar75 = in_stack_78._64_16_;
                auVar76 = in_stack_78._80_16_;
                value_01.position.x = (float)auVar66._0_4_;
                value_01.position.y = (float)auVar66._4_4_;
                value_01.position.z = (float)auVar66._8_4_;
                value_01.normal.x = (float)auVar68._0_4_;
                value_01.normal.y = (float)auVar68._4_4_;
                value_01.normal.z = (float)auVar68._8_4_;
                value_01.tangent.x = (float)auVar69._0_4_;
                value_01.tangent.y = (float)auVar69._4_4_;
                value_01.tangent.z = (float)auVar69._8_4_;
                value_01.tangent.w = (float)auVar69._12_4_;
                value_01.color.rgba = (int)uVar70;
                value_01.color.r = (char)((ulonglong)uVar70 >> 0x20);
                value_01.color.g = (char)((ulonglong)uVar70 >> 0x28);
                value_01.color.b = (char)((ulonglong)uVar70 >> 0x30);
                value_01.color.a = (char)((ulonglong)uVar70 >> 0x38);
                value_01.uv0.x = (float)auVar74._0_4_;
                value_01.uv0.y = (float)auVar74._4_4_;
                value_01.uv0.z = (float)auVar74._8_4_;
                value_01.uv0.w = (float)auVar74._12_4_;
                value_01.uv1.x = (float)auVar75._0_4_;
                value_01.uv1.y = (float)auVar75._4_4_;
                value_01.uv1.z = (float)auVar75._8_4_;
                value_01.uv1.w = (float)auVar75._12_4_;
                value_01.uv2.x = (float)auVar76._0_4_;
                value_01.uv2.y = (float)auVar76._4_4_;
                value_01.uv2.z = (float)auVar76._8_4_;
                value_01.uv2.w = (float)auVar76._12_4_;
                value_01.uv3.x = (float)in_stack_78._96_4_;
                value_01.uv3.y = (float)in_stack_78._100_4_;
                value_01.uv3.z = (float)in_stack_78._104_4_;
                mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
                List_1_UnityEngine_UIVertex__set_Item(verts,iStack_35,value_01,in_stack_79);
                puVar38 = &uStack_42;
                puVar37 = (undefined4 *)&stack0xfffffa6c;
                pMVar65 = 
                MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__set_Item_int__UnityEngine__UIVertex_
                ;
                for (iVar26 = 0x1b; iVar26 != 0; iVar26 = iVar26 + -1) {
                  *puVar37 = *(undefined4 *)puVar38;
                  puVar38 = (undefined8 *)((int)puVar38 + 4);
                  puVar37 = puVar37 + 1;
                }
                in_stack_79 = (MethodInfo *)&UNK_?;
                value_02.uv3.w = (float)pMVar65;
                auVar66 = in_stack_80._0_12_;
                auVar68 = in_stack_80._12_12_;
                auVar69 = in_stack_80._24_16_;
                uVar70 = in_stack_80._40_8_;
                auVar74 = in_stack_80._48_16_;
                auVar75 = in_stack_80._64_16_;
                auVar76 = in_stack_80._80_16_;
                value_02.position.x = (float)auVar66._0_4_;
                value_02.position.y = (float)auVar66._4_4_;
                value_02.position.z = (float)auVar66._8_4_;
                value_02.normal.x = (float)auVar68._0_4_;
                value_02.normal.y = (float)auVar68._4_4_;
                value_02.normal.z = (float)auVar68._8_4_;
                value_02.tangent.x = (float)auVar69._0_4_;
                value_02.tangent.y = (float)auVar69._4_4_;
                value_02.tangent.z = (float)auVar69._8_4_;
                value_02.tangent.w = (float)auVar69._12_4_;
                value_02.color.rgba = (int)uVar70;
                value_02.color.r = (char)((ulonglong)uVar70 >> 0x20);
                value_02.color.g = (char)((ulonglong)uVar70 >> 0x28);
                value_02.color.b = (char)((ulonglong)uVar70 >> 0x30);
                value_02.color.a = (char)((ulonglong)uVar70 >> 0x38);
                value_02.uv0.x = (float)auVar74._0_4_;
                value_02.uv0.y = (float)auVar74._4_4_;
                value_02.uv0.z = (float)auVar74._8_4_;
                value_02.uv0.w = (float)auVar74._12_4_;
                value_02.uv1.x = (float)auVar75._0_4_;
                value_02.uv1.y = (float)auVar75._4_4_;
                value_02.uv1.z = (float)auVar75._8_4_;
                value_02.uv1.w = (float)auVar75._12_4_;
                value_02.uv2.x = (float)auVar76._0_4_;
                value_02.uv2.y = (float)auVar76._4_4_;
                value_02.uv2.z = (float)auVar76._8_4_;
                value_02.uv2.w = (float)auVar76._12_4_;
                value_02.uv3.x = (float)in_stack_80._96_4_;
                value_02.uv3.y = (float)in_stack_80._100_4_;
                value_02.uv3.z = (float)in_stack_80._104_4_;
                mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
                List_1_UnityEngine_UIVertex__set_Item(verts,iStack_36,value_02,in_stack_81);
                puVar38 = &uStack_43;
                puVar37 = (undefined4 *)&stack0xfffffae8;
                pMVar65 = 
                MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__set_Item_int__UnityEngine__UIVertex_
                ;
                for (iVar26 = 0x1b; iVar26 != 0; iVar26 = iVar26 + -1) {
                  *puVar37 = *(undefined4 *)puVar38;
                  puVar38 = (undefined8 *)((int)puVar38 + 4);
                  puVar37 = puVar37 + 1;
                }
                in_stack_81 = (MethodInfo *)&UNK_?;
                value_03.uv3.w = (float)pMVar65;
                auVar66 = in_stack_82._0_12_;
                auVar68 = in_stack_82._12_12_;
                auVar69 = in_stack_82._24_16_;
                uVar70 = in_stack_82._40_8_;
                auVar74 = in_stack_82._48_16_;
                auVar75 = in_stack_82._64_16_;
                auVar76 = in_stack_82._80_16_;
                value_03.position.x = (float)auVar66._0_4_;
                value_03.position.y = (float)auVar66._4_4_;
                value_03.position.z = (float)auVar66._8_4_;
                value_03.normal.x = (float)auVar68._0_4_;
                value_03.normal.y = (float)auVar68._4_4_;
                value_03.normal.z = (float)auVar68._8_4_;
                value_03.tangent.x = (float)auVar69._0_4_;
                value_03.tangent.y = (float)auVar69._4_4_;
                value_03.tangent.z = (float)auVar69._8_4_;
                value_03.tangent.w = (float)auVar69._12_4_;
                value_03.color.rgba = (int)uVar70;
                value_03.color.r = (char)((ulonglong)uVar70 >> 0x20);
                value_03.color.g = (char)((ulonglong)uVar70 >> 0x28);
                value_03.color.b = (char)((ulonglong)uVar70 >> 0x30);
                value_03.color.a = (char)((ulonglong)uVar70 >> 0x38);
                value_03.uv0.x = (float)auVar74._0_4_;
                value_03.uv0.y = (float)auVar74._4_4_;
                value_03.uv0.z = (float)auVar74._8_4_;
                value_03.uv0.w = (float)auVar74._12_4_;
                value_03.uv1.x = (float)auVar75._0_4_;
                value_03.uv1.y = (float)auVar75._4_4_;
                value_03.uv1.z = (float)auVar75._8_4_;
                value_03.uv1.w = (float)auVar75._12_4_;
                value_03.uv2.x = (float)auVar76._0_4_;
                value_03.uv2.y = (float)auVar76._4_4_;
                value_03.uv2.z = (float)auVar76._8_4_;
                value_03.uv2.w = (float)auVar76._12_4_;
                value_03.uv3.x = (float)in_stack_82._96_4_;
                value_03.uv3.y = (float)in_stack_82._100_4_;
                value_03.uv3.z = (float)in_stack_82._104_4_;
                mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
                List_1_UnityEngine_UIVertex__set_Item
                          (verts,(int32_t)pSStack_17,value_03,in_stack_83);
                puVar38 = &uStack_45;
                puVar37 = (undefined4 *)&stack0xfffffb64;
                pMVar65 = 
                MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__set_Item_int__UnityEngine__UIVertex_
                ;
                for (iVar26 = 0x1b; iVar26 != 0; iVar26 = iVar26 + -1) {
                  *puVar37 = *(undefined4 *)puVar38;
                  puVar38 = (undefined8 *)((int)puVar38 + 4);
                  puVar37 = puVar37 + 1;
                }
                in_stack_83 = (MethodInfo *)&UNK_?;
                value_04.uv3.w = (float)pMVar65;
                auVar66 = in_stack_84._0_12_;
                auVar68 = in_stack_84._12_12_;
                auVar69 = in_stack_84._24_16_;
                uVar70 = in_stack_84._40_8_;
                auVar74 = in_stack_84._48_16_;
                auVar75 = in_stack_84._64_16_;
                auVar76 = in_stack_84._80_16_;
                value_04.position.x = (float)auVar66._0_4_;
                value_04.position.y = (float)auVar66._4_4_;
                value_04.position.z = (float)auVar66._8_4_;
                value_04.normal.x = (float)auVar68._0_4_;
                value_04.normal.y = (float)auVar68._4_4_;
                value_04.normal.z = (float)auVar68._8_4_;
                value_04.tangent.x = (float)auVar69._0_4_;
                value_04.tangent.y = (float)auVar69._4_4_;
                value_04.tangent.z = (float)auVar69._8_4_;
                value_04.tangent.w = (float)auVar69._12_4_;
                value_04.color.rgba = (int)uVar70;
                value_04.color.r = (char)((ulonglong)uVar70 >> 0x20);
                value_04.color.g = (char)((ulonglong)uVar70 >> 0x28);
                value_04.color.b = (char)((ulonglong)uVar70 >> 0x30);
                value_04.color.a = (char)((ulonglong)uVar70 >> 0x38);
                value_04.uv0.x = (float)auVar74._0_4_;
                value_04.uv0.y = (float)auVar74._4_4_;
                value_04.uv0.z = (float)auVar74._8_4_;
                value_04.uv0.w = (float)auVar74._12_4_;
                value_04.uv1.x = (float)auVar75._0_4_;
                value_04.uv1.y = (float)auVar75._4_4_;
                value_04.uv1.z = (float)auVar75._8_4_;
                value_04.uv1.w = (float)auVar75._12_4_;
                value_04.uv2.x = (float)auVar76._0_4_;
                value_04.uv2.y = (float)auVar76._4_4_;
                value_04.uv2.z = (float)auVar76._8_4_;
                value_04.uv2.w = (float)auVar76._12_4_;
                value_04.uv3.x = (float)in_stack_84._96_4_;
                value_04.uv3.y = (float)in_stack_84._100_4_;
                value_04.uv3.z = (float)in_stack_84._104_4_;
                mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
                List_1_UnityEngine_UIVertex__set_Item
                          (verts,(int32_t)pIStack_13,value_04,in_stack_85);
                this_00 = (Text *)((int)&this_00->klass + 1);
                iVar26 = iStack_28;
                unaff_EDI = pIStack_27;
code_?:
                pTVar21 = (Text *)((int)&pTStack_2->klass + 1);
                pIStack_5 = (IList_1_UnityEngine_UILineInfo_ *)((int)&pIStack_5->klass + 1);
              }
              else {
                this_00 = (Text *)((int)&this_00->klass + *(int *)(iVar26 + 0xc));
                pTStack_2 = (Text *)((int)pTVar21 + *(int *)(iVar26 + 0xc) + -1);
                pIStack_5 = (IList_1_UnityEngine_UILineInfo_ *)((int)&pIStack_5[-1].monitor + 3);
                iVar26 = 0;
                iStack_28 = 0;
                if (unaff_EDI == (Il2CppClass *)0x0) goto code_?;
                cVar1 = func_?();
                if (cVar1 == '\0') goto code_?;
                iStack_32 = func_?();
                if (iStack_32 != 0) {
                  iVar26 = func_?();
                  bVar30 = 0;
                  iStack_28 = iVar26;
                  if (iVar26 != 0) goto code_?;
                  goto code_?;
                }
                pTVar21 = (Text *)((int)&pTStack_2->klass + 1);
                iStack_28 = 0;
                pIStack_5 = (IList_1_UnityEngine_UILineInfo_ *)((int)&pIStack_5->klass + 1);
              }
            }
            this_00 = (Text *)((int)&this_00->klass + 1);
            pIStack_6 = (IList_1_UnityEngine_UILineInfo___Class *)
                         ((int)&(pIStack_6->_0).image + 1);
            ppSStack_8 = ppSStack_8 + 1;
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
  uVar70 = func_?();
  piVar19 = (int *)((int)((ulonglong)uVar70 >> 0x20) + -1);
  bVar86 = (byte)uVar70;
  uVar87 = (undefined3)((ulonglong)uVar70 >> 8);
  bVar30 = 0x99 < bVar86 | bVar30;
  cVar1 = bVar86 + (9 < (bVar86 & 0xf) | in_AF) * -6 + bVar30 * -0x60;
  pcVar88 = (char *)CONCAT31(uVar87,cVar1);
  puVar89 = (undefined1 *)((int)&unaff_EDI->parent + 3);
  bVar86 = *puVar89 + (byte)extraout_ECX;
  bVar90 = CARRY1(*puVar89,(byte)extraout_ECX) || CARRY1(bVar86,bVar30);
  *puVar89 = bVar86 + bVar30;
  pbVar91 = (byte *)(extraout_ECX + 0x2f);
  bVar30 = *pbVar91;
  bVar86 = *pbVar91 + (byte)this_00;
  *pbVar91 = bVar86 + bVar90;
  *pcVar88 = *pcVar88 + cVar1 + (CARRY1(bVar30,(byte)this_00) || CARRY1(bVar86,bVar90));
  *piVar19 = (int)(pcVar88 + *piVar19);
  *extraout_ECX = *extraout_ECX + cVar1;
  *piVar19 = *piVar19 + CONCAT31(uVar87,cVar1 + *pcVar88);
  pcVar92 = (code *)swi(3);
  (*pcVar92)();
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

