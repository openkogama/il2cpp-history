
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
                         [pIVar9->interfaceOffsets[uVar10].offset].method;
              goto code_?;
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 < uVar11);
        }
        ppMVar12 = (MethodInfo **)func_?();
code_?:
        piVar13 = (int *)(*(code *)*ppMVar12)();
        if (piVar13 == (int *)0x0) break;
        bVar14 = (TypeInfo__System__Text__RegularExpressions__Match->_1).naturalAligment;
        if ((*(byte *)(*piVar13 + 0xb8) < bVar14) ||
           (*(Match__Class **)(*(int *)(*piVar13 + 100) + -4 + (uint)bVar14 * 4) !=
            TypeInfo__System__Text__RegularExpressions__Match)) goto code_?;
        iStack_4 = iStack_4 + piVar13[3];
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  pIVar7 = (IEnumerator *)(*pcVar15)();
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
  pMVar2 = (Match__Class *)
            UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                      ((Component *)this,
                       UnityEngine__UI__Text_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::Text>__
                      );
  pMStack_3 = pMVar2;
  if (pMVar2 != (Match__Class *)0x0) {
    unaff_EDI = (Text__Class *)(*(code *)(pMVar2->_0).image[0x11].token)();
    pTStack_4 = unaff_EDI;
    this_00 = UnityEngine.UI.dll::UnityEngine::UI::Text::Text_get_cachedTextGenerator
                        ((Text *)pMVar2,(MethodInfo *)0x0);
    if ((this_00 != (TextGenerator *)0x0) &&
       (pIVar5 = UnityEngine.TextRenderingModule.dll::UnityEngine::TextGenerator::
                  TextGenerator_get_lines(this_00,(MethodInfo *)0x0), pIStack_6 = pIVar5,
       pIVar5 != (IList_1_UnityEngine_UILineInfo_ *)0x0)) {
      pTStack_7 = (Text__Class *)pIVar5->klass;
      uVar8 = 0;
      pSStack_9 = (String *)0x0;
      uVar10._0_1_ = (pTStack_7->_1).rank;
      uVar10._1_1_ = (pTStack_7->_1).minimumAlignment;
      if (uVar10 != 0) {
        do {
          pMVar2 = pMStack_3;
          if (pTStack_7->interfaceOffsets[uVar8].interfaceType ==
              (Il2CppClass *)
              TypeInfo__System__Collections__Generic__ICollection<UnityEngine::UILineInfo>) {
            ppMVar11 = &(&(pIVar5->klass->vtable).get_Item)
                        [pIVar5->klass->interfaceOffsets[uVar8].offset].method;
            pTVar12 = pTStack_4;
            goto code_?;
          }
          uVar8 = uVar8 + 1;
          unaff_EDI = pTStack_4;
        } while (uVar8 < uVar10);
      }
      ppMVar11 = (MethodInfo **)func_?();
      pTVar12 = unaff_EDI;
code_?:
      iVar13 = (*(code *)*ppMVar11)();
      pMStack_14 = (Match__Class *)(iVar13 + -1);
      pTVar15 = (Text__Class *)TypeInfo__System__Collections__Generic__IList<UnityEngine::UILineInfo>
      ;
      while (TypeInfo__System__Collections__Generic__IList<UnityEngine::UILineInfo> =
                  (IList_1_UnityEngine_UILineInfo___Class *)pTVar15, 0 < (int)pMStack_14) {
        pIVar16 = pIVar5->klass;
        pMVar2 = (Match__Class *)0x0;
        uVar10 = 0;
        uVar8._0_1_ = (pIVar16->_1).rank;
        uVar8._1_1_ = (pIVar16->_1).minimumAlignment;
        if (uVar8 != 0) {
          pMVar2 = (Match__Class *)pIVar16->interfaceOffsets;
          do {
            if ((Text__Class *)(&(pMVar2->_0).image)[(uint)uVar10 * 2] == pTVar15) {
              ppMVar11 = &(&(pIVar5->klass->vtable).get_Item)
                          [(int)(&(pMVar2->_0).gc_desc)[(uint)uVar10 * 2]].method;
              goto code_?;
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 < uVar8);
        }
        ppMVar11 = (MethodInfo **)func_?();
code_?:
        piVar17 = (int32_t *)(*(code *)*ppMVar11)();
        iStack_18 = *piVar17;
        VStack_19.x = (float)piVar17[1];
        VStack_19.y = (float)piVar17[2];
        VStack_19.z = (float)piVar17[3];
        unaff_EDI = pTVar15;
        if (pTStack_4 == (Text__Class *)0x0) goto code_?;
        pSStack_9 = mscorlib.dll::System::String::String_Insert
                               ((String *)pTStack_4,iStack_18,StringLiteral_u000A,(MethodInfo *)0x0
                               );
        unaff_EDI = (Text__Class *)
                    TypeInfo__System__Collections__Generic__IList<UnityEngine::UILineInfo>;
        pIVar16 = pIVar5->klass;
        uVar10 = 0;
        uVar20._0_1_ = (pIVar16->_1).rank;
        uVar20._1_1_ = (pIVar16->_1).minimumAlignment;
        if (uVar20 != 0) {
          do {
            if (pIVar16->interfaceOffsets[uVar10].interfaceType ==
                (Il2CppClass *)
                TypeInfo__System__Collections__Generic__IList<UnityEngine::UILineInfo>) {
              ppMVar11 = &(&(pIVar5->klass->vtable).get_Item)
                          [pIVar16->interfaceOffsets[uVar10].offset].method;
              goto code_?;
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 < uVar20);
        }
        ppMVar11 = (MethodInfo **)func_?();
code_?:
        pMVar2 = pMStack_14;
        piVar21 = (int *)(*(code *)*ppMVar11)();
        iStack_18 = *piVar21;
        VStack_19.x = (float)piVar21[1];
        VStack_19.y = (float)piVar21[2];
        VStack_19.z = (float)piVar21[3];
        if (pSStack_9 == (String *)0x0) goto code_?;
        pTVar12 = (Text__Class *)
                  mscorlib.dll::System::String::String_Remove
                            (pSStack_9,iStack_18 + -1,1,(MethodInfo *)0x0);
        pMStack_14 = (Match__Class *)((int)&pMVar2[-1].vtable.Tidy.method + 3);
        pMVar2 = pMStack_3;
        pTVar15 = (Text__Class *)
                 TypeInfo__System__Collections__Generic__IList<UnityEngine::UILineInfo>;
        pTStack_4 = pTVar12;
      }
      unaff_EDI = (Text__Class *)0x0;
      if (pTVar12 != (Text__Class *)0x0) {
        pSStack_22 = mscorlib.dll::System::String::String_Split
                               ((String *)pTVar12,10,StringSplitOptions__Enum_None,(MethodInfo *)0x0
                               );
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        bVar23 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                          ((Object_1 *)pMVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar23 == 0) {
          pSStack_9 = (String *)(this->fields).m_spacing;
          iVar24 = UnityEngine.UI.dll::UnityEngine::UI::Text::Text_get_fontSize
                             ((Text *)pMVar2,(MethodInfo *)0x0);
          pTVar12 = (Text__Class *)0x0;
          pTStack_4 = (Text__Class *)0x0;
          fStack_25 = ((float)iVar24 * (float)pSStack_9) / _UNK_?;
          fStack_26 = 0.0;
          if ((this->fields).useRichText == 0) {
            bStack_27 = 0;
          }
          else {
            bStack_27 = UnityEngine.UI.dll::UnityEngine::UI::Text::Text_get_supportRichText
                                 ((Text *)pMVar2,(MethodInfo *)0x0);
          }
          pMVar2 = (Match__Class *)0x0;
          unaff_EDI = (Text__Class *)0x0;
          pTStack_7 = (Text__Class *)0x0;
          TVar28 = UnityEngine.UI.dll::UnityEngine::UI::Text::Text_get_alignment
                             ((Text *)pMStack_3,(MethodInfo *)0x0);
          switch(TVar28) {
          case TextAnchor__Enum_UpperLeft:
          case TextAnchor__Enum_MiddleLeft:
          case TextAnchor__Enum_LowerLeft:
            fStack_26 = 0.0;
            break;
          case TextAnchor__Enum_UpperCenter:
          case TextAnchor__Enum_MiddleCenter:
          case TextAnchor__Enum_LowerCenter:
            fStack_26 = _UNK_?;
            break;
          case TextAnchor__Enum_UpperRight:
          case TextAnchor__Enum_MiddleRight:
          case TextAnchor__Enum_LowerRight:
            fStack_26 = _UNK_?;
          }
          pSStack_9 = (String *)0x0;
          if (pSStack_22 == (String__Array *)0x0) goto code_?;
          ppSStack_29 = pSStack_22->vector;
          for (; (int)pSStack_9 < (int)pSStack_22->max_length;
              pSStack_9 = (String *)((int)&pSStack_9->klass + 1)) {
            pMVar30 = pMVar2;
            if ((String *)pSStack_22->max_length <= pSStack_9) goto code_?;
            pSStack_31 = *ppSStack_29;
            if (pSStack_31 == (String *)0x0) goto code_?;
            pMStack_3 = (Match__Class *)(pSStack_31->fields)._stringLength;
            if (bStack_27 != 0) {
              unaff_EDI = (Text__Class *)
                          LetterSpacing_GetRegexMatchedTagCollection
                                    (this,pSStack_31,(int32_t *)&pMStack_3,(MethodInfo *)0x0);
              pMVar2 = (Match__Class *)0x0;
              pTStack_7 = unaff_EDI;
              if (unaff_EDI == (Text__Class *)0x0) goto code_?;
              cVar1 = func_?();
              if (cVar1 != '\0') {
                pMVar2 = (Match__Class *)func_?();
                if (pMVar2 == (Match__Class *)0x0) {
                  pMVar2 = (Match__Class *)0x0;
                }
                else {
                  pTVar15 = (Text__Class *)(pMVar2->_0).image;
                  bVar32 = (TypeInfo__System__Text__RegularExpressions__Match->_1).naturalAligment;
                  pMVar30 = TypeInfo__System__Text__RegularExpressions__Match;
                  if (((pTVar15->_1).naturalAligment < bVar32) ||
                     ((pTVar15->_1).typeHierarchy[bVar32 - 1] !=
                      (Il2CppClass *)TypeInfo__System__Text__RegularExpressions__Match))
                  goto code_?;
                }
              }
            }
            pMVar30 = (Match__Class *)0x0;
            pMStack_14 = (Match__Class *)0x0;
            fStack_33 = (float)(int)((int)&pMStack_3[-1].vtable.Tidy.method + 3) * fStack_25 *
                        fStack_26;
            while (pMStack_3 = pMVar30, (int)pMVar30 < (pSStack_31->fields)._stringLength) {
              if (((bStack_27 == 0) || (pMVar2 == (Match__Class *)0x0)) ||
                 (*(Match__Class **)&(((Text__Fields *)&(pMVar2->_0).name)->_)._._._._ != pMVar30))
              {
                iStack_34 = (int)pTVar12 * 6;
                iStack_35 = iStack_34 + 1;
                iStack_36 = iStack_34 + 2;
                iStack_37 = iStack_34 + 3;
                iStack_38 = iStack_34 + 4;
                pIStack_6 = (IList_1_UnityEngine_UILineInfo_ *)(iStack_34 + 5);
                if (verts == (List_1_UnityEngine_UIVertex_ *)0x0) goto code_?;
                if ((verts->fields)._size + -1 < (int)pIStack_6) {
                  return;
                }
                puVar39 = (undefined4 *)func_?();
                puVar40 = &uStack_41;
                for (iVar13 = 0x1b; iVar13 != 0; iVar13 = iVar13 + -1) {
                  *(undefined4 *)puVar40 = *puVar39;
                  puVar39 = puVar39 + 1;
                  puVar40 = (undefined8 *)((int)puVar40 + 4);
                }
                puVar39 = (undefined4 *)func_?();
                puVar40 = &uStack_42;
                for (iVar13 = 0x1b; iVar13 != 0; iVar13 = iVar13 + -1) {
                  *(undefined4 *)puVar40 = *puVar39;
                  puVar39 = puVar39 + 1;
                  puVar40 = (undefined8 *)((int)puVar40 + 4);
                }
                puVar39 = (undefined4 *)func_?();
                puVar40 = &uStack_43;
                for (iVar13 = 0x1b; iVar13 != 0; iVar13 = iVar13 + -1) {
                  *(undefined4 *)puVar40 = *puVar39;
                  puVar39 = puVar39 + 1;
                  puVar40 = (undefined8 *)((int)puVar40 + 4);
                }
                puVar39 = (undefined4 *)func_?();
                puVar40 = &uStack_44;
                for (iVar13 = 0x1b; iVar13 != 0; iVar13 = iVar13 + -1) {
                  *(undefined4 *)puVar40 = *puVar39;
                  puVar39 = puVar39 + 1;
                  puVar40 = (undefined8 *)((int)puVar40 + 4);
                }
                puVar39 = (undefined4 *)func_?();
                puVar40 = &uStack_45;
                for (iVar13 = 0x1b; iVar13 != 0; iVar13 = iVar13 + -1) {
                  *(undefined4 *)puVar40 = *puVar39;
                  puVar39 = puVar39 + 1;
                  puVar40 = (undefined8 *)((int)puVar40 + 4);
                }
                puVar39 = (undefined4 *)func_?();
                __return_storage_ptr__ = &VStack_19;
                uVar46 = 0;
                puVar40 = &uStack_47;
                for (iVar13 = 0x1b; iVar13 != 0; iVar13 = iVar13 + -1) {
                  *(undefined4 *)puVar40 = *puVar39;
                  puVar39 = puVar39 + 1;
                  puVar40 = (undefined8 *)((int)puVar40 + 4);
                }
                puVar48 = &UNK_?;
                pVVar49 = RTG::TriangPrismShape3D::TriangPrismShape3D_get_ModelRight
                                    (__return_storage_ptr__,(MethodInfo *)0x0);
                uStack_50._0_4_ = pVVar49->x;
                uStack_50._4_4_ = pVVar49->y;
                fStack_51 = pVVar49->z;
                fVar52 = (float)(int)pMStack_14 * fStack_25 - fStack_33;
                fVar53 = (float)(undefined4)uStack_50 * fVar52;
                in_XMM1_Da = (float)uStack_50._4_4_ * fVar52;
                fVar52 = pVVar49->z * fVar52;
                fStack_54 = fStack_55 + fVar52;
                uStack_41 = CONCAT44(uStack_41._4_4_ + in_XMM1_Da,(float)uStack_41 + fVar53);
                fStack_55 = fStack_55 + fVar52;
                fStack_56 = fStack_57 + fVar52;
                uStack_42 = CONCAT44(uStack_42._4_4_ + in_XMM1_Da,(float)uStack_42 + fVar53);
                fStack_57 = fStack_57 + fVar52;
                fStack_58 = fStack_59 + fVar52;
                uStack_43 = CONCAT44(uStack_43._4_4_ + in_XMM1_Da,(float)uStack_43 + fVar53);
                fStack_59 = fStack_59 + fVar52;
                fStack_60 = fStack_61 + fVar52;
                uStack_44 = CONCAT44(uStack_44._4_4_ + in_XMM1_Da,(float)uStack_44 + fVar53);
                fStack_61 = fStack_61 + fVar52;
                fStack_62 = fStack_63 + fVar52;
                uStack_45 = CONCAT44(uStack_45._4_4_ + in_XMM1_Da,(float)uStack_45 + fVar53);
                in_XMM1_Da = uStack_47._4_4_ + in_XMM1_Da;
                fStack_63 = fStack_63 + fVar52;
                fStack_64 = fStack_65 + fVar52;
                uStack_47 = CONCAT44(in_XMM1_Da,(float)uStack_47 + fVar53);
                fStack_65 = fStack_65 + fVar52;
                puVar40 = &uStack_41;
                puVar39 = (undefined4 *)&stack0xfffff8f8;
                pMVar66 = 
                MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__set_Item_int__UnityEngine__UIVertex_
                ;
                for (iVar13 = 0x1b; iVar13 != 0; iVar13 = iVar13 + -1) {
                  *puVar39 = *(undefined4 *)puVar40;
                  puVar40 = (undefined8 *)((int)puVar40 + 4);
                  puVar39 = puVar39 + 1;
                }
                value.uv0.w = (float)puVar48;
                auVar67 = in_stack_68._0_12_;
                auVar69 = in_stack_68._12_12_;
                auVar70 = in_stack_68._24_16_;
                uVar71 = in_stack_68._40_8_;
                value.position.x = (float)auVar67._0_4_;
                value.position.y = (float)auVar67._4_4_;
                value.position.z = (float)auVar67._8_4_;
                value.normal.x = (float)auVar69._0_4_;
                value.normal.y = (float)auVar69._4_4_;
                value.normal.z = (float)auVar69._8_4_;
                value.tangent.x = (float)auVar70._0_4_;
                value.tangent.y = (float)auVar70._4_4_;
                value.tangent.z = (float)auVar70._8_4_;
                value.tangent.w = (float)auVar70._12_4_;
                value.color.rgba = (int)uVar71;
                value.color.r = (char)((ulonglong)uVar71 >> 0x20);
                value.color.g = (char)((ulonglong)uVar71 >> 0x28);
                value.color.b = (char)((ulonglong)uVar71 >> 0x30);
                value.color.a = (char)((ulonglong)uVar71 >> 0x38);
                value.uv0.x = (float)in_stack_68._48_4_;
                value.uv0.y = (float)in_stack_68._52_4_;
                value.uv0.z = (float)in_stack_68._56_4_;
                value.uv1.x = (float)__return_storage_ptr__;
                value.uv1.y = (float)uVar46;
                auVar70 = in_stack_72._8_16_;
                value.uv1.z = (float)in_stack_72._0_4_;
                value.uv1.w = (float)in_stack_72._4_4_;
                value.uv2.x = (float)auVar70._0_4_;
                value.uv2.y = (float)auVar70._4_4_;
                value.uv2.z = (float)auVar70._8_4_;
                value.uv2.w = (float)auVar70._12_4_;
                value.uv3.x = (float)in_stack_72._24_4_;
                value.uv3.y = (float)in_stack_72._28_4_;
                value.uv3.z = (float)in_stack_72._32_4_;
                value.uv3.w = (float)pMVar66;
                mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
                List_1_UnityEngine_UIVertex__set_Item(verts,iStack_34,value,in_stack_73);
                puVar40 = &uStack_42;
                puVar39 = (undefined4 *)&stack0xfffff974;
                pMVar66 = 
                MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__set_Item_int__UnityEngine__UIVertex_
                ;
                for (iVar13 = 0x1b; iVar13 != 0; iVar13 = iVar13 + -1) {
                  *puVar39 = *(undefined4 *)puVar40;
                  puVar40 = (undefined8 *)((int)puVar40 + 4);
                  puVar39 = puVar39 + 1;
                }
                in_stack_73 = (MethodInfo *)&UNK_?;
                value_00.uv3.w = (float)pMVar66;
                auVar67 = in_stack_74._0_12_;
                auVar69 = in_stack_74._12_12_;
                auVar70 = in_stack_74._24_16_;
                uVar71 = in_stack_74._40_8_;
                auVar75 = in_stack_74._48_16_;
                auVar76 = in_stack_74._64_16_;
                auVar77 = in_stack_74._80_16_;
                value_00.position.x = (float)auVar67._0_4_;
                value_00.position.y = (float)auVar67._4_4_;
                value_00.position.z = (float)auVar67._8_4_;
                value_00.normal.x = (float)auVar69._0_4_;
                value_00.normal.y = (float)auVar69._4_4_;
                value_00.normal.z = (float)auVar69._8_4_;
                value_00.tangent.x = (float)auVar70._0_4_;
                value_00.tangent.y = (float)auVar70._4_4_;
                value_00.tangent.z = (float)auVar70._8_4_;
                value_00.tangent.w = (float)auVar70._12_4_;
                value_00.color.rgba = (int)uVar71;
                value_00.color.r = (char)((ulonglong)uVar71 >> 0x20);
                value_00.color.g = (char)((ulonglong)uVar71 >> 0x28);
                value_00.color.b = (char)((ulonglong)uVar71 >> 0x30);
                value_00.color.a = (char)((ulonglong)uVar71 >> 0x38);
                value_00.uv0.x = (float)auVar75._0_4_;
                value_00.uv0.y = (float)auVar75._4_4_;
                value_00.uv0.z = (float)auVar75._8_4_;
                value_00.uv0.w = (float)auVar75._12_4_;
                value_00.uv1.x = (float)auVar76._0_4_;
                value_00.uv1.y = (float)auVar76._4_4_;
                value_00.uv1.z = (float)auVar76._8_4_;
                value_00.uv1.w = (float)auVar76._12_4_;
                value_00.uv2.x = (float)auVar77._0_4_;
                value_00.uv2.y = (float)auVar77._4_4_;
                value_00.uv2.z = (float)auVar77._8_4_;
                value_00.uv2.w = (float)auVar77._12_4_;
                value_00.uv3.x = (float)in_stack_74._96_4_;
                value_00.uv3.y = (float)in_stack_74._100_4_;
                value_00.uv3.z = (float)in_stack_74._104_4_;
                mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
                List_1_UnityEngine_UIVertex__set_Item(verts,iStack_35,value_00,in_stack_78);
                puVar40 = &uStack_43;
                puVar39 = (undefined4 *)&stack0xfffff9f0;
                pMVar66 = 
                MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__set_Item_int__UnityEngine__UIVertex_
                ;
                for (iVar13 = 0x1b; iVar13 != 0; iVar13 = iVar13 + -1) {
                  *puVar39 = *(undefined4 *)puVar40;
                  puVar40 = (undefined8 *)((int)puVar40 + 4);
                  puVar39 = puVar39 + 1;
                }
                in_stack_78 = (MethodInfo *)&UNK_?;
                value_01.uv3.w = (float)pMVar66;
                auVar67 = in_stack_79._0_12_;
                auVar69 = in_stack_79._12_12_;
                auVar70 = in_stack_79._24_16_;
                uVar71 = in_stack_79._40_8_;
                auVar75 = in_stack_79._48_16_;
                auVar76 = in_stack_79._64_16_;
                auVar77 = in_stack_79._80_16_;
                value_01.position.x = (float)auVar67._0_4_;
                value_01.position.y = (float)auVar67._4_4_;
                value_01.position.z = (float)auVar67._8_4_;
                value_01.normal.x = (float)auVar69._0_4_;
                value_01.normal.y = (float)auVar69._4_4_;
                value_01.normal.z = (float)auVar69._8_4_;
                value_01.tangent.x = (float)auVar70._0_4_;
                value_01.tangent.y = (float)auVar70._4_4_;
                value_01.tangent.z = (float)auVar70._8_4_;
                value_01.tangent.w = (float)auVar70._12_4_;
                value_01.color.rgba = (int)uVar71;
                value_01.color.r = (char)((ulonglong)uVar71 >> 0x20);
                value_01.color.g = (char)((ulonglong)uVar71 >> 0x28);
                value_01.color.b = (char)((ulonglong)uVar71 >> 0x30);
                value_01.color.a = (char)((ulonglong)uVar71 >> 0x38);
                value_01.uv0.x = (float)auVar75._0_4_;
                value_01.uv0.y = (float)auVar75._4_4_;
                value_01.uv0.z = (float)auVar75._8_4_;
                value_01.uv0.w = (float)auVar75._12_4_;
                value_01.uv1.x = (float)auVar76._0_4_;
                value_01.uv1.y = (float)auVar76._4_4_;
                value_01.uv1.z = (float)auVar76._8_4_;
                value_01.uv1.w = (float)auVar76._12_4_;
                value_01.uv2.x = (float)auVar77._0_4_;
                value_01.uv2.y = (float)auVar77._4_4_;
                value_01.uv2.z = (float)auVar77._8_4_;
                value_01.uv2.w = (float)auVar77._12_4_;
                value_01.uv3.x = (float)in_stack_79._96_4_;
                value_01.uv3.y = (float)in_stack_79._100_4_;
                value_01.uv3.z = (float)in_stack_79._104_4_;
                mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
                List_1_UnityEngine_UIVertex__set_Item(verts,iStack_36,value_01,in_stack_80);
                puVar40 = &uStack_44;
                puVar39 = (undefined4 *)&stack0xfffffa6c;
                pMVar66 = 
                MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__set_Item_int__UnityEngine__UIVertex_
                ;
                for (iVar13 = 0x1b; iVar13 != 0; iVar13 = iVar13 + -1) {
                  *puVar39 = *(undefined4 *)puVar40;
                  puVar40 = (undefined8 *)((int)puVar40 + 4);
                  puVar39 = puVar39 + 1;
                }
                in_stack_80 = (MethodInfo *)&UNK_?;
                value_02.uv3.w = (float)pMVar66;
                auVar67 = in_stack_81._0_12_;
                auVar69 = in_stack_81._12_12_;
                auVar70 = in_stack_81._24_16_;
                uVar71 = in_stack_81._40_8_;
                auVar75 = in_stack_81._48_16_;
                auVar76 = in_stack_81._64_16_;
                auVar77 = in_stack_81._80_16_;
                value_02.position.x = (float)auVar67._0_4_;
                value_02.position.y = (float)auVar67._4_4_;
                value_02.position.z = (float)auVar67._8_4_;
                value_02.normal.x = (float)auVar69._0_4_;
                value_02.normal.y = (float)auVar69._4_4_;
                value_02.normal.z = (float)auVar69._8_4_;
                value_02.tangent.x = (float)auVar70._0_4_;
                value_02.tangent.y = (float)auVar70._4_4_;
                value_02.tangent.z = (float)auVar70._8_4_;
                value_02.tangent.w = (float)auVar70._12_4_;
                value_02.color.rgba = (int)uVar71;
                value_02.color.r = (char)((ulonglong)uVar71 >> 0x20);
                value_02.color.g = (char)((ulonglong)uVar71 >> 0x28);
                value_02.color.b = (char)((ulonglong)uVar71 >> 0x30);
                value_02.color.a = (char)((ulonglong)uVar71 >> 0x38);
                value_02.uv0.x = (float)auVar75._0_4_;
                value_02.uv0.y = (float)auVar75._4_4_;
                value_02.uv0.z = (float)auVar75._8_4_;
                value_02.uv0.w = (float)auVar75._12_4_;
                value_02.uv1.x = (float)auVar76._0_4_;
                value_02.uv1.y = (float)auVar76._4_4_;
                value_02.uv1.z = (float)auVar76._8_4_;
                value_02.uv1.w = (float)auVar76._12_4_;
                value_02.uv2.x = (float)auVar77._0_4_;
                value_02.uv2.y = (float)auVar77._4_4_;
                value_02.uv2.z = (float)auVar77._8_4_;
                value_02.uv2.w = (float)auVar77._12_4_;
                value_02.uv3.x = (float)in_stack_81._96_4_;
                value_02.uv3.y = (float)in_stack_81._100_4_;
                value_02.uv3.z = (float)in_stack_81._104_4_;
                mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
                List_1_UnityEngine_UIVertex__set_Item(verts,iStack_37,value_02,in_stack_82);
                puVar40 = &uStack_45;
                puVar39 = (undefined4 *)&stack0xfffffae8;
                pMVar66 = 
                MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__set_Item_int__UnityEngine__UIVertex_
                ;
                for (iVar13 = 0x1b; iVar13 != 0; iVar13 = iVar13 + -1) {
                  *puVar39 = *(undefined4 *)puVar40;
                  puVar40 = (undefined8 *)((int)puVar40 + 4);
                  puVar39 = puVar39 + 1;
                }
                in_stack_82 = (MethodInfo *)&UNK_?;
                value_03.uv3.w = (float)pMVar66;
                auVar67 = in_stack_83._0_12_;
                auVar69 = in_stack_83._12_12_;
                auVar70 = in_stack_83._24_16_;
                uVar71 = in_stack_83._40_8_;
                auVar75 = in_stack_83._48_16_;
                auVar76 = in_stack_83._64_16_;
                auVar77 = in_stack_83._80_16_;
                value_03.position.x = (float)auVar67._0_4_;
                value_03.position.y = (float)auVar67._4_4_;
                value_03.position.z = (float)auVar67._8_4_;
                value_03.normal.x = (float)auVar69._0_4_;
                value_03.normal.y = (float)auVar69._4_4_;
                value_03.normal.z = (float)auVar69._8_4_;
                value_03.tangent.x = (float)auVar70._0_4_;
                value_03.tangent.y = (float)auVar70._4_4_;
                value_03.tangent.z = (float)auVar70._8_4_;
                value_03.tangent.w = (float)auVar70._12_4_;
                value_03.color.rgba = (int)uVar71;
                value_03.color.r = (char)((ulonglong)uVar71 >> 0x20);
                value_03.color.g = (char)((ulonglong)uVar71 >> 0x28);
                value_03.color.b = (char)((ulonglong)uVar71 >> 0x30);
                value_03.color.a = (char)((ulonglong)uVar71 >> 0x38);
                value_03.uv0.x = (float)auVar75._0_4_;
                value_03.uv0.y = (float)auVar75._4_4_;
                value_03.uv0.z = (float)auVar75._8_4_;
                value_03.uv0.w = (float)auVar75._12_4_;
                value_03.uv1.x = (float)auVar76._0_4_;
                value_03.uv1.y = (float)auVar76._4_4_;
                value_03.uv1.z = (float)auVar76._8_4_;
                value_03.uv1.w = (float)auVar76._12_4_;
                value_03.uv2.x = (float)auVar77._0_4_;
                value_03.uv2.y = (float)auVar77._4_4_;
                value_03.uv2.z = (float)auVar77._8_4_;
                value_03.uv2.w = (float)auVar77._12_4_;
                value_03.uv3.x = (float)in_stack_83._96_4_;
                value_03.uv3.y = (float)in_stack_83._100_4_;
                value_03.uv3.z = (float)in_stack_83._104_4_;
                mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
                List_1_UnityEngine_UIVertex__set_Item(verts,iStack_38,value_03,in_stack_84);
                puVar40 = &uStack_47;
                puVar39 = (undefined4 *)&stack0xfffffb64;
                pMVar66 = 
                MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__set_Item_int__UnityEngine__UIVertex_
                ;
                for (iVar13 = 0x1b; iVar13 != 0; iVar13 = iVar13 + -1) {
                  *puVar39 = *(undefined4 *)puVar40;
                  puVar40 = (undefined8 *)((int)puVar40 + 4);
                  puVar39 = puVar39 + 1;
                }
                in_stack_84 = (MethodInfo *)&UNK_?;
                value_04.uv3.w = (float)pMVar66;
                auVar67 = in_stack_85._0_12_;
                auVar69 = in_stack_85._12_12_;
                auVar70 = in_stack_85._24_16_;
                uVar71 = in_stack_85._40_8_;
                auVar75 = in_stack_85._48_16_;
                auVar76 = in_stack_85._64_16_;
                auVar77 = in_stack_85._80_16_;
                value_04.position.x = (float)auVar67._0_4_;
                value_04.position.y = (float)auVar67._4_4_;
                value_04.position.z = (float)auVar67._8_4_;
                value_04.normal.x = (float)auVar69._0_4_;
                value_04.normal.y = (float)auVar69._4_4_;
                value_04.normal.z = (float)auVar69._8_4_;
                value_04.tangent.x = (float)auVar70._0_4_;
                value_04.tangent.y = (float)auVar70._4_4_;
                value_04.tangent.z = (float)auVar70._8_4_;
                value_04.tangent.w = (float)auVar70._12_4_;
                value_04.color.rgba = (int)uVar71;
                value_04.color.r = (char)((ulonglong)uVar71 >> 0x20);
                value_04.color.g = (char)((ulonglong)uVar71 >> 0x28);
                value_04.color.b = (char)((ulonglong)uVar71 >> 0x30);
                value_04.color.a = (char)((ulonglong)uVar71 >> 0x38);
                value_04.uv0.x = (float)auVar75._0_4_;
                value_04.uv0.y = (float)auVar75._4_4_;
                value_04.uv0.z = (float)auVar75._8_4_;
                value_04.uv0.w = (float)auVar75._12_4_;
                value_04.uv1.x = (float)auVar76._0_4_;
                value_04.uv1.y = (float)auVar76._4_4_;
                value_04.uv1.z = (float)auVar76._8_4_;
                value_04.uv1.w = (float)auVar76._12_4_;
                value_04.uv2.x = (float)auVar77._0_4_;
                value_04.uv2.y = (float)auVar77._4_4_;
                value_04.uv2.z = (float)auVar77._8_4_;
                value_04.uv2.w = (float)auVar77._12_4_;
                value_04.uv3.x = (float)in_stack_85._96_4_;
                value_04.uv3.y = (float)in_stack_85._100_4_;
                value_04.uv3.z = (float)in_stack_85._104_4_;
                mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
                List_1_UnityEngine_UIVertex__set_Item
                          (verts,(int32_t)pIStack_6,value_04,in_stack_86);
                pTVar12 = (Text__Class *)((int)&(pTStack_4->_0).image + 1);
                unaff_EDI = pTStack_7;
                pTStack_4 = pTVar12;
code_?:
                pMVar30 = (Match__Class *)((int)&(pMStack_3->_0).image + 1);
                pMStack_14 = (Match__Class *)((int)&(pMStack_14->_0).image + 1);
              }
              else {
                pTVar12 = (Text__Class *)
                          ((int)&(pTVar12->_0).image +
                          (int)&((CancellationTokenSource *)(pMVar2->_0).namespaze)->klass);
                pMStack_3 = (Match__Class *)
                            ((undefined1 *)((int)&pMVar30[-1].vtable.Tidy.method + 3) +
                            (int)(pMVar2->_0).namespaze);
                pMStack_14 = (Match__Class *)((int)&pMStack_14[-1].vtable.Tidy.method + 3);
                pMVar2 = (Match__Class *)0x0;
                pTStack_4 = pTVar12;
                if (unaff_EDI == (Text__Class *)0x0) goto code_?;
                cVar1 = func_?();
                if (cVar1 == '\0') goto code_?;
                pMVar2 = (Match__Class *)func_?();
                if (pMVar2 == (Match__Class *)0x0) {
                  pMVar2 = (Match__Class *)0x0;
                  pMVar30 = (Match__Class *)((int)&(pMStack_3->_0).image + 1);
                  pMStack_14 = (Match__Class *)((int)&(pMStack_14->_0).image + 1);
                }
                else {
                  pTVar15 = (Text__Class *)(pMVar2->_0).image;
                  bVar32 = (TypeInfo__System__Text__RegularExpressions__Match->_1).naturalAligment;
                  pMVar30 = TypeInfo__System__Text__RegularExpressions__Match;
                  if (((pTVar15->_1).naturalAligment < bVar32) ||
                     ((pTVar15->_1).typeHierarchy[bVar32 - 1] !=
                      (Il2CppClass *)TypeInfo__System__Text__RegularExpressions__Match))
                  goto code_?;
                  pMVar30 = (Match__Class *)((int)&(pMStack_3->_0).image + 1);
                  pMStack_14 = (Match__Class *)((int)&(pMStack_14->_0).image + 1);
                }
              }
            }
            pTVar12 = (Text__Class *)((int)&(pTVar12->_0).image + 1);
            ppSStack_29 = ppSStack_29 + 1;
            pTStack_4 = pTVar12;
          }
        }
        else {
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                    ((Object *)StringLiteral_LetterSpacing__Missing_Text_comp,(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
code_?:
  func_?();
  pMVar30 = pMVar2;
code_?:
  func_?();
code_?:
  uVar71 = func_?();
  piVar21 = (int *)((ulonglong)uVar71 >> 0x20);
  pcVar87 = (char *)uVar71;
  bVar88 = (byte)((ulonglong)uVar71 >> 0x28) < *(byte *)((int)&(unaff_EDI->_0).methods + 3);
  bVar32 = (byte)((uint)pMVar30 >> 8);
  bVar89 = CARRY1(*(byte *)&(unaff_EDI->_0).image,bVar32);
  bVar32 = *(char *)&(unaff_EDI->_0).image + bVar32;
  bVar90 = CARRY1(bVar32,bVar88);
  bVar91 = bVar89 || bVar90;
  *(byte *)&(unaff_EDI->_0).image = bVar32 + bVar88;
  if ((bVar89 || bVar90) || *(char *)&(unaff_EDI->_0).image == '\0') {
    pbVar92 = (byte *)(extraout_ECX + 0x77);
    bVar32 = *pbVar92;
    bVar93 = *pbVar92 + (byte)extraout_ECX;
    *pbVar92 = bVar93 + bVar91;
    cVar1 = (char)uVar71;
    *pcVar87 = *pcVar87 + cVar1 + (CARRY1(bVar32,(byte)extraout_ECX) || CARRY1(bVar93,bVar91));
    *piVar21 = (int)(pcVar87 + *piVar21);
    *extraout_ECX = *extraout_ECX + cVar1;
    *piVar21 = *piVar21 + CONCAT31((int3)((ulonglong)uVar71 >> 8),cVar1 + *pcVar87);
    pcVar94 = (code *)swi(3);
    (*pcVar94)();
    return;
  }
  if ((this->fields).m_spacing != in_XMM1_Da) {
    (this->fields).m_spacing = in_XMM1_Da;
    pGVar95 = UnityEngine.UI.dll::UnityEngine::UI::BaseMeshEffect::BaseMeshEffect_get_graphic
                        ((BaseMeshEffect *)this,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar23 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pGVar95,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar23 != 0) {
      pGVar95 = UnityEngine.UI.dll::UnityEngine::UI::BaseMeshEffect::BaseMeshEffect_get_graphic
                          ((BaseMeshEffect *)this,(MethodInfo *)0x0);
      if (pGVar95 == (Graphic *)0x0) {
        func_?();
        pcVar94 = (code *)swi(3);
        (*pcVar94)();
        return;
      }
      (*(code *)(pGVar95->klass->vtable).SetVerticesDirty.method)();
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

