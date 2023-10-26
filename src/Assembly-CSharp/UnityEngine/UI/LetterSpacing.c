
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
        uVar9 = 0;
        uVar10 = (pIVar7->klass->_1).interface_offsets_count;
        if (uVar10 != 0) {
          do {
            if (pIVar7->klass->interfaceOffsets[uVar9].interfaceType ==
                (Il2CppClass *)TypeInfo__System__Collections__IEnumerator) {
              pVVar11 = &(pIVar7->klass->vtable).get_Current +
                       pIVar7->klass->interfaceOffsets[uVar9].offset;
              goto code_?;
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 < uVar10);
        }
        pVVar11 = (VirtualInvokeData *)func_?();
code_?:
        piVar12 = (int *)(*pVVar11->methodPtr)();
        if (piVar12 == (int *)0x0) break;
        if ((*(byte *)(*piVar12 + 0xb4) <
             (TypeInfo__System__Text__RegularExpressions__Match->_1).typeHierarchyDepth) ||
           (*(Match__Class **)
             (*(int *)(*piVar12 + 100) + -4 +
             (uint)(TypeInfo__System__Text__RegularExpressions__Match->_1).typeHierarchyDepth * 4)
            != TypeInfo__System__Text__RegularExpressions__Match)) goto code_?;
        iStack_4 = iStack_4 + piVar12[3];
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  pIVar7 = (IEnumerator *)(*pcVar13)();
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
    LetterSpacing_ModifyVertices(this,stream,(MethodInfo *)0x0);
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


/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
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
  cVar1 = (*(this->klass->vtable).IsActive.methodPtr)();
  if (cVar1 == '\0') {
    return;
  }
  this_00 = (Text *)UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                              ((Component *)this,
                               UnityEngine__UI__Text_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::Text>__
                              );
  cVar1 = (int)this_00 < 0;
  uVar2 = this_00 == (Text *)0x0;
  pTStack_3 = this_00;
  if (!(bool)uVar2) {
    pSVar4 = (String *)(*(this_00->klass->vtable).get_text.methodPtr)();
    pSStack_5 = pSVar4;
    this_01 = UnityEngine.UI.dll::UnityEngine::UI::Text::Text_get_cachedTextGenerator
                        (this_00,(MethodInfo *)0x0);
    cVar1 = (int)this_01 < 0;
    uVar2 = this_01 == (TextGenerator *)0x0;
    if (!(bool)uVar2) {
      pIVar6 = UnityEngine.TextRenderingModule.dll::UnityEngine::TextGenerator::
                TextGenerator_get_lines(this_01,(MethodInfo *)0x0);
      cVar1 = (int)pIVar6 < 0;
      uVar2 = pIVar6 == (IList_1_UnityEngine_UILineInfo_ *)0x0;
      pIStack_7 = pIVar6;
      if (!(bool)uVar2) {
        pIStack_8 = pIVar6->klass;
        uVar9 = 0;
        ppSStack_10 = (String **)0x0;
        uVar11 = (pIStack_8->_1).interface_offsets_count;
        if (uVar11 != 0) {
          do {
            pSVar4 = pSStack_5;
            if (pIStack_8->interfaceOffsets[uVar9].interfaceType ==
                (Il2CppClass *)
                TypeInfo__System__Collections__Generic__ICollection<UnityEngine::UILineInfo>) {
              pVVar12 = &(pIVar6->klass->vtable).get_Item +
                        pIVar6->klass->interfaceOffsets[uVar9].offset;
              goto code_?;
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 < uVar11);
        }
        pVVar12 = (VirtualInvokeData *)func_?();
code_?:
        this_00 = (Text *)(*pVVar12->methodPtr)();
        pIVar13 = pIStack_7;
        while (this_00 = (Text *)((int)&this_00[-1].fields.m_TempVerts + 3), pIStack_7 = pIVar13,
              0 < (int)this_00) {
          pIStack_8 = pIVar6->klass;
          uVar9 = 0;
          ppSStack_10 = (String **)0x0;
          uVar11 = (pIStack_8->_1).interface_offsets_count;
          uStack_14 = (uint)uVar11;
          if (uVar11 != 0) {
            do {
              if (pIStack_8->interfaceOffsets[uVar9].interfaceType ==
                  (Il2CppClass *)
                  TypeInfo__System__Collections__Generic__IList<UnityEngine::UILineInfo>) {
                pVVar12 = &(pIVar13->klass->vtable).get_Item +
                          pIVar13->klass->interfaceOffsets[uVar9].offset;
                goto code_?;
              }
              uVar9 = uVar9 + 1;
              pIVar6 = pIVar13;
            } while (uVar9 < uVar11);
          }
          pVVar12 = (VirtualInvokeData *)func_?();
          pIVar13 = pIVar6;
code_?:
          piVar15 = (int32_t *)(*pVVar12->methodPtr)();
          iStack_16 = *piVar15;
          iStack_17 = piVar15[1];
          iStack_18 = piVar15[2];
          iStack_19 = piVar15[3];
          cVar1 = (int)pSStack_5 < 0;
          uVar2 = true;
          if (pSStack_5 == (String *)0x0) goto code_?;
          pSStack_20 = mscorlib.dll::System::String::String_Insert
                                 (pSStack_5,iStack_16,StringLiteral_u000A,(MethodInfo *)0x0);
          uVar9 = 0;
          pIStack_8 = pIVar13->klass;
          ppSStack_10 = (String **)0x0;
          uVar11 = (pIStack_8->_1).interface_offsets_count;
          uStack_14 = (uint)uVar11;
          if (uVar11 != 0) {
            do {
              if (pIStack_8->interfaceOffsets[uVar9].interfaceType ==
                  (Il2CppClass *)
                  TypeInfo__System__Collections__Generic__IList<UnityEngine::UILineInfo>) {
                pVVar12 = &(pIStack_7->klass->vtable).get_Item +
                          pIStack_7->klass->interfaceOffsets[uVar9].offset;
                pIVar6 = pIStack_7;
                goto code_?;
              }
              uVar9 = uVar9 + 1;
              pIVar13 = pIStack_7;
            } while (uVar9 < uVar11);
          }
          pVVar12 = (VirtualInvokeData *)func_?();
          pIVar6 = pIVar13;
code_?:
          piVar21 = (int *)(*pVVar12->methodPtr)();
          iStack_16 = *piVar21;
          iStack_17 = piVar21[1];
          iStack_18 = piVar21[2];
          iStack_19 = piVar21[3];
          cVar1 = (int)pSStack_20 < 0;
          uVar2 = true;
          if (pSStack_20 == (String *)0x0) goto code_?;
          pSVar4 = mscorlib.dll::System::String::String_Remove
                              (pSStack_20,iStack_16 + -1,1,(MethodInfo *)0x0);
          pIVar13 = pIStack_7;
          pSStack_5 = pSVar4;
        }
        cVar1 = (int)pSVar4 < 0;
        uVar2 = pSVar4 == (String *)0x0;
        if (!(bool)uVar2) {
          pSStack_22 = mscorlib.dll::System::String::String_Split
                                 (pSVar4,10,StringSplitOptions__Enum_None,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pTVar23 = pTStack_3;
          bVar24 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                            ((Object_1 *)pTStack_3,(Object_1 *)0x0,(MethodInfo *)0x0);
          if (bVar24 != 0) {
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                      ((Object *)StringLiteral_LetterSpacing__Missing_Text_comp,(MethodInfo *)0x0);
            return;
          }
          ppSStack_10 = (String **)(this->fields).m_spacing;
          iVar25 = UnityEngine.UI.dll::UnityEngine::UI::Text::Text_get_fontSize
                             (pTVar23,(MethodInfo *)0x0);
          this_00 = (Text *)0x0;
          fStack_26 = ((float)iVar25 * (float)ppSStack_10) / _UNK_?;
          pSStack_5 = (String *)0x0;
          if ((this->fields).useRichText == 0) {
            bStack_27 = 0;
          }
          else {
            bStack_27 = UnityEngine.UI.dll::UnityEngine::UI::Text::Text_get_supportRichText
                                 (pTVar23,(MethodInfo *)0x0);
          }
          iVar28 = 0;
          pIStack_29 = (IEnumerator *)0x0;
          iStack_30 = 0;
          TVar31 = UnityEngine.UI.dll::UnityEngine::UI::Text::Text_get_alignment
                             (pTStack_3,(MethodInfo *)0x0);
          switch(TVar31) {
          case TextAnchor__Enum_UpperLeft:
          case TextAnchor__Enum_MiddleLeft:
          case TextAnchor__Enum_LowerLeft:
            pSStack_5 = (String *)0x0;
            break;
          case TextAnchor__Enum_UpperCenter:
          case TextAnchor__Enum_MiddleCenter:
          case TextAnchor__Enum_LowerCenter:
            pSStack_5 = _UNK_?;
            break;
          case TextAnchor__Enum_UpperRight:
          case TextAnchor__Enum_MiddleRight:
          case TextAnchor__Enum_LowerRight:
            pSStack_5 = _UNK_?;
          }
          pIStack_8 = (IList_1_UnityEngine_UILineInfo___Class *)0x0;
          cVar1 = (int)pSStack_22 < 0;
          uVar2 = true;
          if (pSStack_22 != (String__Array *)0x0) {
            ppSStack_10 = pSStack_22->vector;
            while( true ) {
              if ((int)pSStack_22->max_length <= (int)pIStack_8) {
                return;
              }
              pIVar32 = (IList_1_UnityEngine_UILineInfo___Class *)pSStack_22->max_length;
              cVar33 = SBORROW4((int)pIStack_8,(int)pIVar32);
              cVar1 = (int)pIStack_8 - (int)pIVar32 < 0;
              uVar2 = pIStack_8 == pIVar32;
              bVar34 = 0;
              if (pIVar32 <= pIStack_8) break;
              pSStack_35 = *ppSStack_10;
              cVar1 = (int)pSStack_35 < 0;
              uVar2 = true;
              if (pSStack_35 == (String *)0x0) goto code_?;
              pTStack_3 = (Text *)(pSStack_35->fields)._stringLength;
              pIVar36 = pIStack_29;
              if (bStack_27 != 0) {
                pIVar36 = LetterSpacing_GetRegexMatchedTagCollection
                                    (this,pSStack_35,(int32_t *)&pTStack_3,(MethodInfo *)0x0);
                iVar28 = 0;
                iStack_30 = 0;
                cVar1 = (int)pIVar36 < 0;
                uVar2 = true;
                pIStack_29 = pIVar36;
                if (pIVar36 == (IEnumerator *)0x0) goto code_?;
                cVar1 = func_?();
                if (cVar1 != '\0') {
                  iStack_37 = func_?();
                  if (iStack_37 == 0) {
                    iStack_30 = 0;
                  }
                  else {
                    iVar28 = func_?();
                    bVar34 = 0;
                    cVar33 = '\0';
                    cVar1 = iVar28 < 0;
                    uVar2 = 1;
                    iStack_30 = iVar28;
                    if (iVar28 == 0) goto code_?;
                  }
                }
              }
              pTVar23 = (Text *)0x0;
              pIStack_7 = (IList_1_UnityEngine_UILineInfo_ *)0x0;
              fStack_38 = (float)(int)((int)&pTStack_3[-1].fields.m_TempVerts + 3) * fStack_26 *
                          (float)pSStack_5;
              while (pTStack_3 = pTVar23, (int)pTVar23 < (pSStack_35->fields)._stringLength) {
                if (((bStack_27 == 0) || (iVar28 == 0)) || (*(Text **)(iVar28 + 8) != pTVar23)) {
                  iStack_39 = (int)this_00 * 6 + 1;
                  iStack_37 = (int)this_00 * 6;
                  iStack_40 = (int)this_00 * 6 + 2;
                  iStack_41 = (int)this_00 * 6 + 3;
                  pSStack_20 = (String *)((int)this_00 * 6 + 4);
                  uStack_14 = (int)this_00 * 6 + 5;
                  cVar1 = (int)verts < 0;
                  uVar2 = true;
                  if (verts == (List_1_UnityEngine_UIVertex_ *)0x0) goto code_?;
                  if ((verts->fields)._size + -1 < (int)uStack_14) {
                    return;
                  }
                  puVar42 = (undefined4 *)func_?();
                  puVar43 = &uStack_44;
                  for (iVar28 = 0x1b; iVar28 != 0; iVar28 = iVar28 + -1) {
                    *(undefined4 *)puVar43 = *puVar42;
                    puVar42 = puVar42 + 1;
                    puVar43 = (undefined8 *)((int)puVar43 + 4);
                  }
                  puVar42 = (undefined4 *)func_?();
                  puVar43 = &uStack_45;
                  for (iVar28 = 0x1b; iVar28 != 0; iVar28 = iVar28 + -1) {
                    *(undefined4 *)puVar43 = *puVar42;
                    puVar42 = puVar42 + 1;
                    puVar43 = (undefined8 *)((int)puVar43 + 4);
                  }
                  puVar42 = (undefined4 *)func_?();
                  puVar43 = &uStack_46;
                  for (iVar28 = 0x1b; iVar28 != 0; iVar28 = iVar28 + -1) {
                    *(undefined4 *)puVar43 = *puVar42;
                    puVar42 = puVar42 + 1;
                    puVar43 = (undefined8 *)((int)puVar43 + 4);
                  }
                  puVar42 = (undefined4 *)func_?();
                  puVar43 = &uStack_47;
                  for (iVar28 = 0x1b; iVar28 != 0; iVar28 = iVar28 + -1) {
                    *(undefined4 *)puVar43 = *puVar42;
                    puVar42 = puVar42 + 1;
                    puVar43 = (undefined8 *)((int)puVar43 + 4);
                  }
                  puVar42 = (undefined4 *)func_?();
                  puVar43 = &uStack_48;
                  for (iVar28 = 0x1b; iVar28 != 0; iVar28 = iVar28 + -1) {
                    *(undefined4 *)puVar43 = *puVar42;
                    puVar42 = puVar42 + 1;
                    puVar43 = (undefined8 *)((int)puVar43 + 4);
                  }
                  puVar42 = (undefined4 *)func_?();
                  puVar43 = &uStack_49;
                  for (iVar28 = 0x1b; iVar28 != 0; iVar28 = iVar28 + -1) {
                    *(undefined4 *)puVar43 = *puVar42;
                    puVar42 = puVar42 + 1;
                    puVar43 = (undefined8 *)((int)puVar43 + 4);
                  }
                  puVar43 = (undefined8 *)func_?();
                  uStack_50 = *puVar43;
                  uVar51 = uStack_50;
                  uStack_50._4_4_ = (float)((ulonglong)uStack_50 >> 0x20);
                  fStack_52 = *(float *)(puVar43 + 1);
                  fVar53 = (float)(int)pIStack_7 * fStack_26 - fStack_38;
                  uStack_50._0_4_ = (float)uStack_50 * fVar53;
                  uStack_50._4_4_ = uStack_50._4_4_ * fVar53;
                  fVar53 = *(float *)(puVar43 + 1) * fVar53;
                  fStack_54 = fStack_55 + fVar53;
                  uStack_44 = CONCAT44(uStack_44._4_4_ + uStack_50._4_4_,
                                        (float)uStack_44 + (float)uStack_50);
                  fStack_55 = fStack_55 + fVar53;
                  fStack_56 = fStack_57 + fVar53;
                  uStack_45 = CONCAT44(uStack_45._4_4_ + uStack_50._4_4_,
                                        (float)uStack_45 + (float)uStack_50);
                  fStack_57 = fStack_57 + fVar53;
                  fStack_58 = fStack_59 + fVar53;
                  uStack_46 = CONCAT44(uStack_46._4_4_ + uStack_50._4_4_,
                                        (float)uStack_46 + (float)uStack_50);
                  fStack_59 = fStack_59 + fVar53;
                  fStack_60 = fStack_61 + fVar53;
                  uStack_47 = CONCAT44(uStack_47._4_4_ + uStack_50._4_4_,
                                        (float)uStack_47 + (float)uStack_50);
                  fStack_61 = fStack_61 + fVar53;
                  fStack_62 = fStack_63 + fVar53;
                  uStack_48 = CONCAT44(uStack_48._4_4_ + uStack_50._4_4_,
                                        (float)uStack_48 + (float)uStack_50);
                  in_XMM1_Da = (List_1_UnityEngine_UIVertex_ *)(uStack_49._4_4_ + uStack_50._4_4_);
                  fStack_63 = fStack_63 + fVar53;
                  fStack_64 = fStack_65 + fVar53;
                  uStack_49 = CONCAT44(in_XMM1_Da,(float)uStack_49 + (float)uStack_50);
                  fStack_65 = fStack_65 + fVar53;
                  puVar43 = &uStack_44;
                  puVar42 = (undefined4 *)&stack0xfffff8f8;
                  pMVar66 = 
                  MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__set_Item_int__UnityEngine__UIVertex_
                  ;
                  uStack_50 = uVar51;
                  for (iVar28 = 0x1b; iVar28 != 0; iVar28 = iVar28 + -1) {
                    *puVar42 = *(undefined4 *)puVar43;
                    puVar43 = (undefined8 *)((int)puVar43 + 4);
                    puVar42 = puVar42 + 1;
                  }
                  value.uv3.w = (float)pMVar66;
                  auVar67 = in_stack_68._0_12_;
                  auVar69 = in_stack_68._12_12_;
                  auVar70 = in_stack_68._24_16_;
                  uVar51 = in_stack_68._40_8_;
                  auVar71 = in_stack_68._48_16_;
                  auVar72 = in_stack_68._64_16_;
                  auVar73 = in_stack_68._80_16_;
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
                  value.color.rgba = (int)uVar51;
                  value.color.r = (char)((ulonglong)uVar51 >> 0x20);
                  value.color.g = (char)((ulonglong)uVar51 >> 0x28);
                  value.color.b = (char)((ulonglong)uVar51 >> 0x30);
                  value.color.a = (char)((ulonglong)uVar51 >> 0x38);
                  value.uv0.x = (float)auVar71._0_4_;
                  value.uv0.y = (float)auVar71._4_4_;
                  value.uv0.z = (float)auVar71._8_4_;
                  value.uv0.w = (float)auVar71._12_4_;
                  value.uv1.x = (float)auVar72._0_4_;
                  value.uv1.y = (float)auVar72._4_4_;
                  value.uv1.z = (float)auVar72._8_4_;
                  value.uv1.w = (float)auVar72._12_4_;
                  value.uv2.x = (float)auVar73._0_4_;
                  value.uv2.y = (float)auVar73._4_4_;
                  value.uv2.z = (float)auVar73._8_4_;
                  value.uv2.w = (float)auVar73._12_4_;
                  value.uv3.x = (float)in_stack_68._96_4_;
                  value.uv3.y = (float)in_stack_68._100_4_;
                  value.uv3.z = (float)in_stack_68._104_4_;
                  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
                  List_1_UnityEngine_UIVertex__set_Item(verts,iStack_37,value,in_stack_74);
                  puVar43 = &uStack_45;
                  puVar42 = (undefined4 *)&stack0xfffff974;
                  pMVar66 = 
                  MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__set_Item_int__UnityEngine__UIVertex_
                  ;
                  for (iVar28 = 0x1b; iVar28 != 0; iVar28 = iVar28 + -1) {
                    *puVar42 = *(undefined4 *)puVar43;
                    puVar43 = (undefined8 *)((int)puVar43 + 4);
                    puVar42 = puVar42 + 1;
                  }
                  in_stack_74 = (MethodInfo *)&UNK_?;
                  value_00.uv3.w = (float)pMVar66;
                  auVar67 = in_stack_75._0_12_;
                  auVar69 = in_stack_75._12_12_;
                  auVar70 = in_stack_75._24_16_;
                  uVar51 = in_stack_75._40_8_;
                  auVar71 = in_stack_75._48_16_;
                  auVar72 = in_stack_75._64_16_;
                  auVar73 = in_stack_75._80_16_;
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
                  value_00.color.rgba = (int)uVar51;
                  value_00.color.r = (char)((ulonglong)uVar51 >> 0x20);
                  value_00.color.g = (char)((ulonglong)uVar51 >> 0x28);
                  value_00.color.b = (char)((ulonglong)uVar51 >> 0x30);
                  value_00.color.a = (char)((ulonglong)uVar51 >> 0x38);
                  value_00.uv0.x = (float)auVar71._0_4_;
                  value_00.uv0.y = (float)auVar71._4_4_;
                  value_00.uv0.z = (float)auVar71._8_4_;
                  value_00.uv0.w = (float)auVar71._12_4_;
                  value_00.uv1.x = (float)auVar72._0_4_;
                  value_00.uv1.y = (float)auVar72._4_4_;
                  value_00.uv1.z = (float)auVar72._8_4_;
                  value_00.uv1.w = (float)auVar72._12_4_;
                  value_00.uv2.x = (float)auVar73._0_4_;
                  value_00.uv2.y = (float)auVar73._4_4_;
                  value_00.uv2.z = (float)auVar73._8_4_;
                  value_00.uv2.w = (float)auVar73._12_4_;
                  value_00.uv3.x = (float)in_stack_75._96_4_;
                  value_00.uv3.y = (float)in_stack_75._100_4_;
                  value_00.uv3.z = (float)in_stack_75._104_4_;
                  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
                  List_1_UnityEngine_UIVertex__set_Item(verts,iStack_39,value_00,in_stack_76);
                  puVar43 = &uStack_46;
                  puVar42 = (undefined4 *)&stack0xfffff9f0;
                  pMVar66 = 
                  MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__set_Item_int__UnityEngine__UIVertex_
                  ;
                  for (iVar28 = 0x1b; iVar28 != 0; iVar28 = iVar28 + -1) {
                    *puVar42 = *(undefined4 *)puVar43;
                    puVar43 = (undefined8 *)((int)puVar43 + 4);
                    puVar42 = puVar42 + 1;
                  }
                  in_stack_76 = (MethodInfo *)&UNK_?;
                  value_01.uv3.w = (float)pMVar66;
                  auVar67 = in_stack_77._0_12_;
                  auVar69 = in_stack_77._12_12_;
                  auVar70 = in_stack_77._24_16_;
                  uVar51 = in_stack_77._40_8_;
                  auVar71 = in_stack_77._48_16_;
                  auVar72 = in_stack_77._64_16_;
                  auVar73 = in_stack_77._80_16_;
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
                  value_01.color.rgba = (int)uVar51;
                  value_01.color.r = (char)((ulonglong)uVar51 >> 0x20);
                  value_01.color.g = (char)((ulonglong)uVar51 >> 0x28);
                  value_01.color.b = (char)((ulonglong)uVar51 >> 0x30);
                  value_01.color.a = (char)((ulonglong)uVar51 >> 0x38);
                  value_01.uv0.x = (float)auVar71._0_4_;
                  value_01.uv0.y = (float)auVar71._4_4_;
                  value_01.uv0.z = (float)auVar71._8_4_;
                  value_01.uv0.w = (float)auVar71._12_4_;
                  value_01.uv1.x = (float)auVar72._0_4_;
                  value_01.uv1.y = (float)auVar72._4_4_;
                  value_01.uv1.z = (float)auVar72._8_4_;
                  value_01.uv1.w = (float)auVar72._12_4_;
                  value_01.uv2.x = (float)auVar73._0_4_;
                  value_01.uv2.y = (float)auVar73._4_4_;
                  value_01.uv2.z = (float)auVar73._8_4_;
                  value_01.uv2.w = (float)auVar73._12_4_;
                  value_01.uv3.x = (float)in_stack_77._96_4_;
                  value_01.uv3.y = (float)in_stack_77._100_4_;
                  value_01.uv3.z = (float)in_stack_77._104_4_;
                  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
                  List_1_UnityEngine_UIVertex__set_Item(verts,iStack_40,value_01,in_stack_78);
                  puVar43 = &uStack_47;
                  puVar42 = (undefined4 *)&stack0xfffffa6c;
                  pMVar66 = 
                  MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__set_Item_int__UnityEngine__UIVertex_
                  ;
                  for (iVar28 = 0x1b; iVar28 != 0; iVar28 = iVar28 + -1) {
                    *puVar42 = *(undefined4 *)puVar43;
                    puVar43 = (undefined8 *)((int)puVar43 + 4);
                    puVar42 = puVar42 + 1;
                  }
                  in_stack_78 = (MethodInfo *)&UNK_?;
                  value_02.uv3.w = (float)pMVar66;
                  auVar67 = in_stack_79._0_12_;
                  auVar69 = in_stack_79._12_12_;
                  auVar70 = in_stack_79._24_16_;
                  uVar51 = in_stack_79._40_8_;
                  auVar71 = in_stack_79._48_16_;
                  auVar72 = in_stack_79._64_16_;
                  auVar73 = in_stack_79._80_16_;
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
                  value_02.color.rgba = (int)uVar51;
                  value_02.color.r = (char)((ulonglong)uVar51 >> 0x20);
                  value_02.color.g = (char)((ulonglong)uVar51 >> 0x28);
                  value_02.color.b = (char)((ulonglong)uVar51 >> 0x30);
                  value_02.color.a = (char)((ulonglong)uVar51 >> 0x38);
                  value_02.uv0.x = (float)auVar71._0_4_;
                  value_02.uv0.y = (float)auVar71._4_4_;
                  value_02.uv0.z = (float)auVar71._8_4_;
                  value_02.uv0.w = (float)auVar71._12_4_;
                  value_02.uv1.x = (float)auVar72._0_4_;
                  value_02.uv1.y = (float)auVar72._4_4_;
                  value_02.uv1.z = (float)auVar72._8_4_;
                  value_02.uv1.w = (float)auVar72._12_4_;
                  value_02.uv2.x = (float)auVar73._0_4_;
                  value_02.uv2.y = (float)auVar73._4_4_;
                  value_02.uv2.z = (float)auVar73._8_4_;
                  value_02.uv2.w = (float)auVar73._12_4_;
                  value_02.uv3.x = (float)in_stack_79._96_4_;
                  value_02.uv3.y = (float)in_stack_79._100_4_;
                  value_02.uv3.z = (float)in_stack_79._104_4_;
                  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
                  List_1_UnityEngine_UIVertex__set_Item(verts,iStack_41,value_02,in_stack_80);
                  puVar43 = &uStack_48;
                  puVar42 = (undefined4 *)&stack0xfffffae8;
                  pMVar66 = 
                  MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__set_Item_int__UnityEngine__UIVertex_
                  ;
                  for (iVar28 = 0x1b; iVar28 != 0; iVar28 = iVar28 + -1) {
                    *puVar42 = *(undefined4 *)puVar43;
                    puVar43 = (undefined8 *)((int)puVar43 + 4);
                    puVar42 = puVar42 + 1;
                  }
                  in_stack_80 = (MethodInfo *)&UNK_?;
                  value_03.uv3.w = (float)pMVar66;
                  auVar67 = in_stack_81._0_12_;
                  auVar69 = in_stack_81._12_12_;
                  auVar70 = in_stack_81._24_16_;
                  uVar51 = in_stack_81._40_8_;
                  auVar71 = in_stack_81._48_16_;
                  auVar72 = in_stack_81._64_16_;
                  auVar73 = in_stack_81._80_16_;
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
                  value_03.color.rgba = (int)uVar51;
                  value_03.color.r = (char)((ulonglong)uVar51 >> 0x20);
                  value_03.color.g = (char)((ulonglong)uVar51 >> 0x28);
                  value_03.color.b = (char)((ulonglong)uVar51 >> 0x30);
                  value_03.color.a = (char)((ulonglong)uVar51 >> 0x38);
                  value_03.uv0.x = (float)auVar71._0_4_;
                  value_03.uv0.y = (float)auVar71._4_4_;
                  value_03.uv0.z = (float)auVar71._8_4_;
                  value_03.uv0.w = (float)auVar71._12_4_;
                  value_03.uv1.x = (float)auVar72._0_4_;
                  value_03.uv1.y = (float)auVar72._4_4_;
                  value_03.uv1.z = (float)auVar72._8_4_;
                  value_03.uv1.w = (float)auVar72._12_4_;
                  value_03.uv2.x = (float)auVar73._0_4_;
                  value_03.uv2.y = (float)auVar73._4_4_;
                  value_03.uv2.z = (float)auVar73._8_4_;
                  value_03.uv2.w = (float)auVar73._12_4_;
                  value_03.uv3.x = (float)in_stack_81._96_4_;
                  value_03.uv3.y = (float)in_stack_81._100_4_;
                  value_03.uv3.z = (float)in_stack_81._104_4_;
                  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
                  List_1_UnityEngine_UIVertex__set_Item
                            (verts,(int32_t)pSStack_20,value_03,in_stack_82);
                  puVar43 = &uStack_49;
                  puVar42 = (undefined4 *)&stack0xfffffb64;
                  pMVar66 = 
                  MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__set_Item_int__UnityEngine__UIVertex_
                  ;
                  for (iVar28 = 0x1b; iVar28 != 0; iVar28 = iVar28 + -1) {
                    *puVar42 = *(undefined4 *)puVar43;
                    puVar43 = (undefined8 *)((int)puVar43 + 4);
                    puVar42 = puVar42 + 1;
                  }
                  in_stack_82 = (MethodInfo *)&UNK_?;
                  value_04.uv3.w = (float)pMVar66;
                  auVar67 = in_stack_83._0_12_;
                  auVar69 = in_stack_83._12_12_;
                  auVar70 = in_stack_83._24_16_;
                  uVar51 = in_stack_83._40_8_;
                  auVar71 = in_stack_83._48_16_;
                  auVar72 = in_stack_83._64_16_;
                  auVar73 = in_stack_83._80_16_;
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
                  value_04.color.rgba = (int)uVar51;
                  value_04.color.r = (char)((ulonglong)uVar51 >> 0x20);
                  value_04.color.g = (char)((ulonglong)uVar51 >> 0x28);
                  value_04.color.b = (char)((ulonglong)uVar51 >> 0x30);
                  value_04.color.a = (char)((ulonglong)uVar51 >> 0x38);
                  value_04.uv0.x = (float)auVar71._0_4_;
                  value_04.uv0.y = (float)auVar71._4_4_;
                  value_04.uv0.z = (float)auVar71._8_4_;
                  value_04.uv0.w = (float)auVar71._12_4_;
                  value_04.uv1.x = (float)auVar72._0_4_;
                  value_04.uv1.y = (float)auVar72._4_4_;
                  value_04.uv1.z = (float)auVar72._8_4_;
                  value_04.uv1.w = (float)auVar72._12_4_;
                  value_04.uv2.x = (float)auVar73._0_4_;
                  value_04.uv2.y = (float)auVar73._4_4_;
                  value_04.uv2.z = (float)auVar73._8_4_;
                  value_04.uv2.w = (float)auVar73._12_4_;
                  value_04.uv3.x = (float)in_stack_83._96_4_;
                  value_04.uv3.y = (float)in_stack_83._100_4_;
                  value_04.uv3.z = (float)in_stack_83._104_4_;
                  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
                  List_1_UnityEngine_UIVertex__set_Item(verts,uStack_14,value_04,in_stack_84);
                  this_00 = (Text *)((int)&this_00->klass + 1);
                  iVar28 = iStack_30;
                  pIVar36 = pIStack_29;
code_?:
                  pTVar23 = (Text *)((int)&pTStack_3->klass + 1);
                  pIStack_7 = (IList_1_UnityEngine_UILineInfo_ *)((int)&pIStack_7->klass + 1);
                }
                else {
                  this_00 = (Text *)((int)&this_00->klass + *(int *)(iVar28 + 0xc));
                  pTStack_3 = (Text *)((int)pTVar23 + *(int *)(iVar28 + 0xc) + -1);
                  pIStack_7 = (IList_1_UnityEngine_UILineInfo_ *)((int)&pIStack_7[-1].monitor + 3)
                  ;
                  iVar28 = 0;
                  iStack_30 = 0;
                  cVar1 = (int)pIVar36 < 0;
                  uVar2 = true;
                  if (pIVar36 == (IEnumerator *)0x0) goto code_?;
                  cVar1 = func_?();
                  if (cVar1 == '\0') goto code_?;
                  iStack_37 = func_?();
                  if (iStack_37 != 0) {
                    iVar28 = func_?();
                    bVar34 = 0;
                    cVar33 = '\0';
                    cVar1 = iVar28 < 0;
                    uVar2 = 1;
                    iStack_30 = iVar28;
                    if (iVar28 != 0) goto code_?;
                    goto code_?;
                  }
                  pTVar23 = (Text *)((int)&pTStack_3->klass + 1);
                  iStack_30 = 0;
                  pIStack_7 = (IList_1_UnityEngine_UILineInfo_ *)((int)&pIStack_7->klass + 1);
                }
              }
              this_00 = (Text *)((int)&this_00->klass + 1);
              pIStack_8 = (IList_1_UnityEngine_UILineInfo___Class *)
                           ((int)&(pIStack_8->_0).image + 1);
              ppSStack_10 = ppSStack_10 + 1;
            }
            goto code_?;
          }
        }
      }
    }
  }
code_?:
  cVar33 = '\0';
  bVar34 = 0;
  func_?();
code_?:
  func_?();
code_?:
  bVar85 = func_?();
  pcVar86 = (char *)(extraout_ECX + -1);
  cVar87 = (char)this_00;
  if (pcVar86 == (char *)0x0 || (bool)uVar2 != false) {
    pbVar88 = &this_00[-0x9e3570].fields._.m_ShouldRecalculateStencil;
    bVar89 = *pbVar88;
    bVar24 = *pbVar88;
    *pbVar88 = bVar24 + bVar85 + bVar34;
    pcVar86 = (char *)(extraout_ECX + -2);
    verts = in_XMM1_Da;
    if (pcVar86 == (char *)0x0 || *pbVar88 == 0) {
      *(char *)&this_00->klass =
           *(char *)&this_00->klass + cVar87 + (CARRY1(bVar89,bVar85) || CARRY1(bVar24 + bVar85,bVar34));
      *extraout_EDX = (int)&this_00->klass + *extraout_EDX;
      *pcVar86 = *pcVar86 + cVar87;
      *extraout_EDX =
           *extraout_EDX + CONCAT31((int3)((uint)this_00 >> 8),cVar87 + *(char *)&this_00->klass);
      pcVar90 = (code *)swi(3);
      (*pcVar90)();
      return;
    }
  }
  else if ((bool)uVar2 || cVar33 != cVar1) {
    *pcVar86 = *pcVar86 + cVar87 + bVar34;
  }
  else {
    func_?();
    uRam_? = 1;
  }
  if ((this->fields).m_spacing != (float)verts) {
    (this->fields).m_spacing = (float)verts;
    pGVar91 = UnityEngine.UI.dll::UnityEngine::UI::BaseMeshEffect::BaseMeshEffect_get_graphic
                        ((BaseMeshEffect *)this,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar24 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pGVar91,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar24 != 0) {
      pGVar91 = UnityEngine.UI.dll::UnityEngine::UI::BaseMeshEffect::BaseMeshEffect_get_graphic
                          ((BaseMeshEffect *)this,(MethodInfo *)0x0);
      if (pGVar91 == (Graphic *)0x0) {
        func_?();
        pcVar90 = (code *)swi(3);
        (*pcVar90)();
        return;
      }
      (*(pGVar91->klass->vtable).SetVerticesDirty.methodPtr)();
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
      pMStack4 = (pGVar1->klass->vtable).SetVerticesDirty.method;
      (*(pGVar1->klass->vtable).SetVerticesDirty.methodPtr)();
    }
  }
  return;
}

