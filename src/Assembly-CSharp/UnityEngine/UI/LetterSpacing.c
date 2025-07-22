
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
  uVar2 = (POPCOUNT((uint)this_01 & 0xff) & 1U) == 0;
  OStack_3.m_CachedPtr = this_01;
  if (this_01 != (Text *)0x0) {
    unaff_EDI = (Il2CppClass *)(*(code *)(this_01->klass->vtable).get_text.method)();
    pIStack_4 = unaff_EDI;
    this_02 = UnityEngine.UI.dll::UnityEngine::UI::Text::Text_get_cachedTextGenerator
                        (this_01,(MethodInfo *)0x0);
    uVar2 = (POPCOUNT((uint)this_02 & 0xff) & 1U) == 0;
    if (this_02 != (TextGenerator *)0x0) {
      unaff_ESI = (Il2CppClass *)
                  UnityEngine.TextRenderingModule.dll::UnityEngine::TextGenerator::
                  TextGenerator_get_lines(this_02,(MethodInfo *)0x0);
      uVar2 = (POPCOUNT((uint)unaff_ESI & 0xff) & 1U) == 0;
      pIStack_5 = unaff_ESI;
      if (unaff_ESI != (Il2CppClass *)0x0) {
        pSStack_6 = (String__Class *)unaff_ESI->image;
        uVar7 = 0;
        ppSStack_8 = (String **)0x0;
        uVar9._0_1_ = (pSStack_6->_1).rank;
        uVar9._1_1_ = (pSStack_6->_1).minimumAlignment;
        if (uVar9 != 0) {
          do {
            if (pSStack_6->interfaceOffsets[uVar7].interfaceType ==
                (Il2CppClass *)
                TypeInfo__System__Collections__Generic__ICollection<UnityEngine::UILineInfo>) {
              ppMVar10 = &(&(((String__Class *)unaff_ESI->image)->vtable).Equals)
                          [((String__Class *)unaff_ESI->image)->interfaceOffsets[uVar7].offset].
                          method;
              this_03 = pIStack_4;
              goto code_?;
            }
            uVar7 = uVar7 + 1;
            unaff_EDI = pIStack_4;
          } while (uVar7 < uVar9);
        }
        ppMVar10 = (MethodInfo **)func_?();
        this_03 = unaff_EDI;
code_?:
        this_01 = (Text *)(*(code *)*ppMVar10)();
        pIVar11 = (Il2CppClass *)
                 TypeInfo__System__Collections__Generic__IList<UnityEngine::UILineInfo>;
        while (this_01 = (Text *)((int)&this_01[-1].fields.m_TempVerts + 3),
              TypeInfo__System__Collections__Generic__IList<UnityEngine::UILineInfo> =
                   (IList_1_UnityEngine_UILineInfo___Class *)pIVar11, 0 < (int)this_01) {
          pSStack_6 = (String__Class *)unaff_ESI->image;
          uVar9 = 0;
          ppSStack_8 = (String **)0x0;
          uVar7._0_1_ = (pSStack_6->_1).rank;
          uVar7._1_1_ = (pSStack_6->_1).minimumAlignment;
          pIStack_12 = (Il2CppClass *)(uint)uVar7;
          if (uVar7 != 0) {
            do {
              unaff_ESI = pIStack_5;
              if (pSStack_6->interfaceOffsets[uVar9].interfaceType == pIVar11) {
                ppMVar10 = &(&(((String__Class *)pIStack_5->image)->vtable).Equals)
                            [((String__Class *)pIStack_5->image)->interfaceOffsets[uVar9].offset].
                            method;
                goto code_?;
              }
              uVar9 = uVar9 + 1;
            } while (uVar9 < uVar7);
          }
          ppMVar10 = (MethodInfo **)func_?();
code_?:
          piVar13 = (int32_t *)(*(code *)*ppMVar10)();
          iStack_14 = *piVar13;
          VStack_15.x = (float)piVar13[1];
          VStack_15.y = (float)piVar13[2];
          VStack_15.z = (float)piVar13[3];
          uVar2 = (POPCOUNT((uint)pIStack_4 & 0xff) & 1U) == 0;
          unaff_EDI = pIVar11;
          if (pIStack_4 == (Il2CppClass *)0x0) goto code_?;
          pSStack_16 = mscorlib.dll::System::String::String_Insert
                                 ((String *)pIStack_4,iStack_14,StringLiteral_u000A,
                                  (MethodInfo *)0x0);
          uVar9 = 0;
          pSStack_6 = (String__Class *)unaff_ESI->image;
          ppSStack_8 = (String **)0x0;
          uVar17._0_1_ = (pSStack_6->_1).rank;
          uVar17._1_1_ = (pSStack_6->_1).minimumAlignment;
          unaff_EDI = (Il2CppClass *)(uint)uVar17;
          pIStack_12 = unaff_EDI;
          if (uVar17 != 0) {
            do {
              unaff_ESI = pIStack_5;
              if (pSStack_6->interfaceOffsets[uVar9].interfaceType ==
                  (Il2CppClass *)
                  TypeInfo__System__Collections__Generic__IList<UnityEngine::UILineInfo>) {
                ppMVar10 = &(&(((String__Class *)pIStack_5->image)->vtable).Equals)
                            [((String__Class *)pIStack_5->image)->interfaceOffsets[uVar9].offset].
                            method;
                goto code_?;
              }
              uVar9 = uVar9 + 1;
            } while (uVar9 < uVar17);
          }
          ppMVar10 = (MethodInfo **)func_?();
code_?:
          piVar18 = (int *)(*(code *)*ppMVar10)();
          iStack_14 = *piVar18;
          VStack_15.x = (float)piVar18[1];
          VStack_15.y = (float)piVar18[2];
          VStack_15.z = (float)piVar18[3];
          uVar2 = (POPCOUNT((uint)pSStack_16 & 0xff) & 1U) == 0;
          if (pSStack_16 == (String *)0x0) goto code_?;
          this_03 = (Il2CppClass *)
                    mscorlib.dll::System::String::String_Remove
                              (pSStack_16,iStack_14 + -1,1,(MethodInfo *)0x0);
          pIVar11 = (Il2CppClass *)
                   TypeInfo__System__Collections__Generic__IList<UnityEngine::UILineInfo>;
          pIStack_4 = this_03;
        }
        uVar2 = (POPCOUNT((uint)this_03 & 0xff) & 1U) == 0;
        unaff_EDI = (Il2CppClass *)0x0;
        if (this_03 != (Il2CppClass *)0x0) {
          pSStack_19 = mscorlib.dll::System::String::String_Split
                                 ((String *)this_03,10,StringSplitOptions__Enum_None,
                                  (MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          this_00.m_CachedPtr = OStack_3.m_CachedPtr;
          bVar20 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                             (OStack_3.m_CachedPtr,(Object_1 *)0x0,(MethodInfo *)0x0);
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
                             (this_00.m_CachedPtr,(MethodInfo *)0x0);
          this_01 = (Text *)0x0;
          fStack_22 = ((float)iVar21 * (float)ppSStack_8) / _UNK_?;
          pIStack_4 = (Il2CppClass *)0x0;
          if ((this->fields).useRichText == 0) {
            bStack_23 = 0;
          }
          else {
            bStack_23 = UnityEngine.UI.dll::UnityEngine::UI::Text::Text_get_supportRichText
                                 (this_00.m_CachedPtr,(MethodInfo *)0x0);
          }
          unaff_ESI = (Il2CppClass *)0x0;
          unaff_EDI = (Il2CppClass *)0x0;
          pIStack_24 = (Il2CppClass *)0x0;
          pIStack_25 = (Il2CppClass *)0x0;
          TVar26 = UnityEngine.UI.dll::UnityEngine::UI::Text::Text_get_alignment
                             (OStack_3.m_CachedPtr,(MethodInfo *)0x0);
          switch(TVar26) {
          case TextAnchor__Enum_UpperLeft:
          case TextAnchor__Enum_MiddleLeft:
          case TextAnchor__Enum_LowerLeft:
            pIStack_4 = (Il2CppClass *)0x0;
            break;
          case TextAnchor__Enum_UpperCenter:
          case TextAnchor__Enum_MiddleCenter:
          case TextAnchor__Enum_LowerCenter:
            pIStack_4 = _UNK_?;
            break;
          case TextAnchor__Enum_UpperRight:
          case TextAnchor__Enum_MiddleRight:
          case TextAnchor__Enum_LowerRight:
            pIStack_4 = _UNK_?;
          }
          pSStack_6 = (String__Class *)0x0;
          uVar2 = (POPCOUNT((uint)pSStack_19 & 0xff) & 1U) == 0;
          if (pSStack_19 != (String__Array *)0x0) {
            ppSStack_8 = pSStack_19->vector;
            while( true ) {
              if ((int)pSStack_19->max_length <= (int)pSStack_6) {
                return;
              }
              uVar2 = (POPCOUNT((int)pSStack_6 - (int)pSStack_19->max_length & 0xff) & 1U) == 0;
              bVar27 = 0;
              unaff_EDI = pIStack_24;
              if ((String__Class *)pSStack_19->max_length <= pSStack_6) break;
              pSStack_28 = *ppSStack_8;
              uVar2 = (POPCOUNT((uint)pSStack_28 & 0xff) & 1U) == 0;
              if (pSStack_28 == (String *)0x0) goto code_?;
              OStack_3.m_CachedPtr = (void *)(pSStack_28->fields)._stringLength;
              if (bStack_23 != 0) {
                unaff_EDI = (Il2CppClass *)
                            LetterSpacing_GetRegexMatchedTagCollection
                                      (this,pSStack_28,(int32_t *)&OStack_3,(MethodInfo *)0x0);
                unaff_ESI = (Il2CppClass *)0x0;
                pIStack_25 = (Il2CppClass *)0x0;
                uVar2 = (POPCOUNT((uint)unaff_EDI & 0xff) & 1U) == 0;
                pIStack_24 = unaff_EDI;
                if (unaff_EDI == (Il2CppClass *)0x0) goto code_?;
                cVar1 = func_?();
                if (cVar1 != '\0') {
                  iStack_29 = func_?();
                  if (iStack_29 == 0) {
                    pIStack_25 = (Il2CppClass *)0x0;
                  }
                  else {
                    unaff_ESI = (Il2CppClass *)func_?();
                    bVar27 = 0;
                    uVar2 = (POPCOUNT((uint)unaff_ESI & 0xff) & 1U) == 0;
                    pIStack_25 = unaff_ESI;
                    if (unaff_ESI == (Il2CppClass *)0x0) goto code_?;
                  }
                }
              }
              CVar30._.m_CachedPtr = (Object_1__Fields)(void *)0x0;
              pIStack_5 = (Il2CppClass *)0x0;
              fStack_31 = (float)(int)((int)&(((Text *)((int)OStack_3.m_CachedPtr + -0x9c))->fields
                                             ).m_TempVerts + 3) * fStack_22 * (float)pIStack_4;
              while (OStack_3 = CVar30._.m_CachedPtr,
                    (int)CVar30._.m_CachedPtr < (pSStack_28->fields)._stringLength) {
                if (((bStack_23 == 0) || (unaff_ESI == (Il2CppClass *)0x0)) ||
                   ((Object_1__Fields)(((BaseMeshEffect__Fields *)&unaff_ESI->name)->_)._._._ !=
                    CVar30._.m_CachedPtr)) {
                  iStack_32 = (int)this_01 * 6 + 1;
                  iStack_29 = (int)this_01 * 6;
                  iStack_33 = (int)this_01 * 6 + 2;
                  iStack_34 = (int)this_01 * 6 + 3;
                  pSStack_16 = (String *)((int)this_01 * 6 + 4);
                  unaff_ESI = (Il2CppClass *)((int)this_01 * 6 + 5);
                  uVar2 = (POPCOUNT((uint)verts & 0xff) & 1U) == 0;
                  pIStack_12 = unaff_ESI;
                  if (verts == (List_1_UnityEngine_UIVertex_ *)0x0) goto code_?;
                  if ((verts->fields)._size + -1 < (int)unaff_ESI) {
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
                  __return_storage_ptr__ = &VStack_15;
                  uVar43 = 0;
                  puVar36 = &uStack_44;
                  for (iVar38 = 0x1b; iVar38 != 0; iVar38 = iVar38 + -1) {
                    *(undefined4 *)puVar36 = *puVar35;
                    puVar35 = puVar35 + 1;
                    puVar36 = (undefined8 *)((int)puVar36 + 4);
                  }
                  puVar45 = &UNK_?;
                  pVVar46 = RTG::TriangPrismShape3D::TriangPrismShape3D_get_ModelRight
                                      (__return_storage_ptr__,(MethodInfo *)0x0);
                  uStack_47._0_4_ = pVVar46->x;
                  uStack_47._4_4_ = pVVar46->y;
                  fStack_48 = pVVar46->z;
                  fVar49 = (float)(int)pIStack_5 * fStack_22 - fStack_31;
                  fVar50 = (float)(undefined4)uStack_47 * fVar49;
                  fVar51 = (float)uStack_47._4_4_ * fVar49;
                  fVar49 = pVVar46->z * fVar49;
                  fStack_52 = fStack_53 + fVar49;
                  uStack_37 = CONCAT44(uStack_37._4_4_ + fVar51,(float)uStack_37 + fVar50);
                  fStack_53 = fStack_53 + fVar49;
                  fStack_54 = fVar49 + fStack_55;
                  uStack_39 = CONCAT44(fVar51 + uStack_39._4_4_,fVar50 + (float)uStack_39);
                  fStack_55 = fVar49 + fStack_55;
                  fStack_56 = fVar49 + fStack_57;
                  uStack_40 = CONCAT44(fVar51 + uStack_40._4_4_,fVar50 + (float)uStack_40);
                  fStack_57 = fVar49 + fStack_57;
                  fStack_58 = fVar49 + fStack_59;
                  uStack_41 = CONCAT44(fVar51 + uStack_41._4_4_,fVar50 + (float)uStack_41);
                  fStack_59 = fVar49 + fStack_59;
                  fStack_60 = fVar49 + fStack_61;
                  uStack_42 = CONCAT44(fVar51 + uStack_42._4_4_,fVar50 + (float)uStack_42);
                  fStack_61 = fVar49 + fStack_61;
                  fStack_62 = fVar49 + fStack_63;
                  uStack_44 = CONCAT44(fVar51 + uStack_44._4_4_,fVar50 + (float)uStack_44);
                  fStack_63 = fVar49 + fStack_63;
                  puVar36 = &uStack_37;
                  puVar35 = (undefined4 *)&stack0xfffff8f8;
                  pMVar64 = 
                  MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__set_Item_int__UnityEngine__UIVertex_
                  ;
                  for (iVar38 = 0x1b; iVar38 != 0; iVar38 = iVar38 + -1) {
                    *puVar35 = *(undefined4 *)puVar36;
                    puVar36 = (undefined8 *)((int)puVar36 + 4);
                    puVar35 = puVar35 + 1;
                  }
                  value.uv0.w = (float)puVar45;
                  auVar65 = in_stack_66._0_12_;
                  auVar67 = in_stack_66._12_12_;
                  auVar68 = in_stack_66._24_16_;
                  uVar69 = in_stack_66._40_8_;
                  value.position.x = (float)auVar65._0_4_;
                  value.position.y = (float)auVar65._4_4_;
                  value.position.z = (float)auVar65._8_4_;
                  value.normal.x = (float)auVar67._0_4_;
                  value.normal.y = (float)auVar67._4_4_;
                  value.normal.z = (float)auVar67._8_4_;
                  value.tangent.x = (float)auVar68._0_4_;
                  value.tangent.y = (float)auVar68._4_4_;
                  value.tangent.z = (float)auVar68._8_4_;
                  value.tangent.w = (float)auVar68._12_4_;
                  value.color.rgba = (int)uVar69;
                  value.color.r = (char)((ulonglong)uVar69 >> 0x20);
                  value.color.g = (char)((ulonglong)uVar69 >> 0x28);
                  value.color.b = (char)((ulonglong)uVar69 >> 0x30);
                  value.color.a = (char)((ulonglong)uVar69 >> 0x38);
                  value.uv0.x = (float)in_stack_66._48_4_;
                  value.uv0.y = (float)in_stack_66._52_4_;
                  value.uv0.z = (float)in_stack_66._56_4_;
                  value.uv1.x = (float)__return_storage_ptr__;
                  value.uv1.y = (float)uVar43;
                  auVar68 = in_stack_70._8_16_;
                  value.uv1.z = (float)in_stack_70._0_4_;
                  value.uv1.w = (float)in_stack_70._4_4_;
                  value.uv2.x = (float)auVar68._0_4_;
                  value.uv2.y = (float)auVar68._4_4_;
                  value.uv2.z = (float)auVar68._8_4_;
                  value.uv2.w = (float)auVar68._12_4_;
                  value.uv3.x = (float)in_stack_70._24_4_;
                  value.uv3.y = (float)in_stack_70._28_4_;
                  value.uv3.z = (float)in_stack_70._32_4_;
                  value.uv3.w = (float)pMVar64;
                  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
                  List_1_UnityEngine_UIVertex__set_Item(verts,iStack_29,value,in_stack_71);
                  puVar36 = &uStack_39;
                  puVar35 = (undefined4 *)&stack0xfffff974;
                  pMVar64 = 
                  MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__set_Item_int__UnityEngine__UIVertex_
                  ;
                  for (iVar38 = 0x1b; iVar38 != 0; iVar38 = iVar38 + -1) {
                    *puVar35 = *(undefined4 *)puVar36;
                    puVar36 = (undefined8 *)((int)puVar36 + 4);
                    puVar35 = puVar35 + 1;
                  }
                  in_stack_71 = (MethodInfo *)&UNK_?;
                  value_00.uv3.w = (float)pMVar64;
                  auVar65 = in_stack_72._0_12_;
                  auVar67 = in_stack_72._12_12_;
                  auVar68 = in_stack_72._24_16_;
                  uVar69 = in_stack_72._40_8_;
                  auVar73 = in_stack_72._48_16_;
                  auVar74 = in_stack_72._64_16_;
                  auVar75 = in_stack_72._80_16_;
                  value_00.position.x = (float)auVar65._0_4_;
                  value_00.position.y = (float)auVar65._4_4_;
                  value_00.position.z = (float)auVar65._8_4_;
                  value_00.normal.x = (float)auVar67._0_4_;
                  value_00.normal.y = (float)auVar67._4_4_;
                  value_00.normal.z = (float)auVar67._8_4_;
                  value_00.tangent.x = (float)auVar68._0_4_;
                  value_00.tangent.y = (float)auVar68._4_4_;
                  value_00.tangent.z = (float)auVar68._8_4_;
                  value_00.tangent.w = (float)auVar68._12_4_;
                  value_00.color.rgba = (int)uVar69;
                  value_00.color.r = (char)((ulonglong)uVar69 >> 0x20);
                  value_00.color.g = (char)((ulonglong)uVar69 >> 0x28);
                  value_00.color.b = (char)((ulonglong)uVar69 >> 0x30);
                  value_00.color.a = (char)((ulonglong)uVar69 >> 0x38);
                  value_00.uv0.x = (float)auVar73._0_4_;
                  value_00.uv0.y = (float)auVar73._4_4_;
                  value_00.uv0.z = (float)auVar73._8_4_;
                  value_00.uv0.w = (float)auVar73._12_4_;
                  value_00.uv1.x = (float)auVar74._0_4_;
                  value_00.uv1.y = (float)auVar74._4_4_;
                  value_00.uv1.z = (float)auVar74._8_4_;
                  value_00.uv1.w = (float)auVar74._12_4_;
                  value_00.uv2.x = (float)auVar75._0_4_;
                  value_00.uv2.y = (float)auVar75._4_4_;
                  value_00.uv2.z = (float)auVar75._8_4_;
                  value_00.uv2.w = (float)auVar75._12_4_;
                  value_00.uv3.x = (float)in_stack_72._96_4_;
                  value_00.uv3.y = (float)in_stack_72._100_4_;
                  value_00.uv3.z = (float)in_stack_72._104_4_;
                  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
                  List_1_UnityEngine_UIVertex__set_Item(verts,iStack_32,value_00,in_stack_76);
                  puVar36 = &uStack_40;
                  puVar35 = (undefined4 *)&stack0xfffff9f0;
                  pMVar64 = 
                  MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__set_Item_int__UnityEngine__UIVertex_
                  ;
                  for (iVar38 = 0x1b; iVar38 != 0; iVar38 = iVar38 + -1) {
                    *puVar35 = *(undefined4 *)puVar36;
                    puVar36 = (undefined8 *)((int)puVar36 + 4);
                    puVar35 = puVar35 + 1;
                  }
                  in_stack_76 = (MethodInfo *)&UNK_?;
                  value_01.uv3.w = (float)pMVar64;
                  auVar65 = in_stack_77._0_12_;
                  auVar67 = in_stack_77._12_12_;
                  auVar68 = in_stack_77._24_16_;
                  uVar69 = in_stack_77._40_8_;
                  auVar73 = in_stack_77._48_16_;
                  auVar74 = in_stack_77._64_16_;
                  auVar75 = in_stack_77._80_16_;
                  value_01.position.x = (float)auVar65._0_4_;
                  value_01.position.y = (float)auVar65._4_4_;
                  value_01.position.z = (float)auVar65._8_4_;
                  value_01.normal.x = (float)auVar67._0_4_;
                  value_01.normal.y = (float)auVar67._4_4_;
                  value_01.normal.z = (float)auVar67._8_4_;
                  value_01.tangent.x = (float)auVar68._0_4_;
                  value_01.tangent.y = (float)auVar68._4_4_;
                  value_01.tangent.z = (float)auVar68._8_4_;
                  value_01.tangent.w = (float)auVar68._12_4_;
                  value_01.color.rgba = (int)uVar69;
                  value_01.color.r = (char)((ulonglong)uVar69 >> 0x20);
                  value_01.color.g = (char)((ulonglong)uVar69 >> 0x28);
                  value_01.color.b = (char)((ulonglong)uVar69 >> 0x30);
                  value_01.color.a = (char)((ulonglong)uVar69 >> 0x38);
                  value_01.uv0.x = (float)auVar73._0_4_;
                  value_01.uv0.y = (float)auVar73._4_4_;
                  value_01.uv0.z = (float)auVar73._8_4_;
                  value_01.uv0.w = (float)auVar73._12_4_;
                  value_01.uv1.x = (float)auVar74._0_4_;
                  value_01.uv1.y = (float)auVar74._4_4_;
                  value_01.uv1.z = (float)auVar74._8_4_;
                  value_01.uv1.w = (float)auVar74._12_4_;
                  value_01.uv2.x = (float)auVar75._0_4_;
                  value_01.uv2.y = (float)auVar75._4_4_;
                  value_01.uv2.z = (float)auVar75._8_4_;
                  value_01.uv2.w = (float)auVar75._12_4_;
                  value_01.uv3.x = (float)in_stack_77._96_4_;
                  value_01.uv3.y = (float)in_stack_77._100_4_;
                  value_01.uv3.z = (float)in_stack_77._104_4_;
                  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
                  List_1_UnityEngine_UIVertex__set_Item(verts,iStack_33,value_01,in_stack_78);
                  puVar36 = &uStack_41;
                  puVar35 = (undefined4 *)&stack0xfffffa6c;
                  pMVar64 = 
                  MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__set_Item_int__UnityEngine__UIVertex_
                  ;
                  for (iVar38 = 0x1b; iVar38 != 0; iVar38 = iVar38 + -1) {
                    *puVar35 = *(undefined4 *)puVar36;
                    puVar36 = (undefined8 *)((int)puVar36 + 4);
                    puVar35 = puVar35 + 1;
                  }
                  in_stack_78 = (MethodInfo *)&UNK_?;
                  value_02.uv3.w = (float)pMVar64;
                  auVar65 = in_stack_79._0_12_;
                  auVar67 = in_stack_79._12_12_;
                  auVar68 = in_stack_79._24_16_;
                  uVar69 = in_stack_79._40_8_;
                  auVar73 = in_stack_79._48_16_;
                  auVar74 = in_stack_79._64_16_;
                  auVar75 = in_stack_79._80_16_;
                  value_02.position.x = (float)auVar65._0_4_;
                  value_02.position.y = (float)auVar65._4_4_;
                  value_02.position.z = (float)auVar65._8_4_;
                  value_02.normal.x = (float)auVar67._0_4_;
                  value_02.normal.y = (float)auVar67._4_4_;
                  value_02.normal.z = (float)auVar67._8_4_;
                  value_02.tangent.x = (float)auVar68._0_4_;
                  value_02.tangent.y = (float)auVar68._4_4_;
                  value_02.tangent.z = (float)auVar68._8_4_;
                  value_02.tangent.w = (float)auVar68._12_4_;
                  value_02.color.rgba = (int)uVar69;
                  value_02.color.r = (char)((ulonglong)uVar69 >> 0x20);
                  value_02.color.g = (char)((ulonglong)uVar69 >> 0x28);
                  value_02.color.b = (char)((ulonglong)uVar69 >> 0x30);
                  value_02.color.a = (char)((ulonglong)uVar69 >> 0x38);
                  value_02.uv0.x = (float)auVar73._0_4_;
                  value_02.uv0.y = (float)auVar73._4_4_;
                  value_02.uv0.z = (float)auVar73._8_4_;
                  value_02.uv0.w = (float)auVar73._12_4_;
                  value_02.uv1.x = (float)auVar74._0_4_;
                  value_02.uv1.y = (float)auVar74._4_4_;
                  value_02.uv1.z = (float)auVar74._8_4_;
                  value_02.uv1.w = (float)auVar74._12_4_;
                  value_02.uv2.x = (float)auVar75._0_4_;
                  value_02.uv2.y = (float)auVar75._4_4_;
                  value_02.uv2.z = (float)auVar75._8_4_;
                  value_02.uv2.w = (float)auVar75._12_4_;
                  value_02.uv3.x = (float)in_stack_79._96_4_;
                  value_02.uv3.y = (float)in_stack_79._100_4_;
                  value_02.uv3.z = (float)in_stack_79._104_4_;
                  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
                  List_1_UnityEngine_UIVertex__set_Item(verts,iStack_34,value_02,in_stack_80);
                  puVar36 = &uStack_42;
                  puVar35 = (undefined4 *)&stack0xfffffae8;
                  pMVar64 = 
                  MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__set_Item_int__UnityEngine__UIVertex_
                  ;
                  for (iVar38 = 0x1b; iVar38 != 0; iVar38 = iVar38 + -1) {
                    *puVar35 = *(undefined4 *)puVar36;
                    puVar36 = (undefined8 *)((int)puVar36 + 4);
                    puVar35 = puVar35 + 1;
                  }
                  in_stack_80 = (MethodInfo *)&UNK_?;
                  value_03.uv3.w = (float)pMVar64;
                  auVar65 = in_stack_81._0_12_;
                  auVar67 = in_stack_81._12_12_;
                  auVar68 = in_stack_81._24_16_;
                  uVar69 = in_stack_81._40_8_;
                  auVar73 = in_stack_81._48_16_;
                  auVar74 = in_stack_81._64_16_;
                  auVar75 = in_stack_81._80_16_;
                  value_03.position.x = (float)auVar65._0_4_;
                  value_03.position.y = (float)auVar65._4_4_;
                  value_03.position.z = (float)auVar65._8_4_;
                  value_03.normal.x = (float)auVar67._0_4_;
                  value_03.normal.y = (float)auVar67._4_4_;
                  value_03.normal.z = (float)auVar67._8_4_;
                  value_03.tangent.x = (float)auVar68._0_4_;
                  value_03.tangent.y = (float)auVar68._4_4_;
                  value_03.tangent.z = (float)auVar68._8_4_;
                  value_03.tangent.w = (float)auVar68._12_4_;
                  value_03.color.rgba = (int)uVar69;
                  value_03.color.r = (char)((ulonglong)uVar69 >> 0x20);
                  value_03.color.g = (char)((ulonglong)uVar69 >> 0x28);
                  value_03.color.b = (char)((ulonglong)uVar69 >> 0x30);
                  value_03.color.a = (char)((ulonglong)uVar69 >> 0x38);
                  value_03.uv0.x = (float)auVar73._0_4_;
                  value_03.uv0.y = (float)auVar73._4_4_;
                  value_03.uv0.z = (float)auVar73._8_4_;
                  value_03.uv0.w = (float)auVar73._12_4_;
                  value_03.uv1.x = (float)auVar74._0_4_;
                  value_03.uv1.y = (float)auVar74._4_4_;
                  value_03.uv1.z = (float)auVar74._8_4_;
                  value_03.uv1.w = (float)auVar74._12_4_;
                  value_03.uv2.x = (float)auVar75._0_4_;
                  value_03.uv2.y = (float)auVar75._4_4_;
                  value_03.uv2.z = (float)auVar75._8_4_;
                  value_03.uv2.w = (float)auVar75._12_4_;
                  value_03.uv3.x = (float)in_stack_81._96_4_;
                  value_03.uv3.y = (float)in_stack_81._100_4_;
                  value_03.uv3.z = (float)in_stack_81._104_4_;
                  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
                  List_1_UnityEngine_UIVertex__set_Item
                            (verts,(int32_t)pSStack_16,value_03,in_stack_82);
                  puVar36 = &uStack_44;
                  puVar35 = (undefined4 *)&stack0xfffffb64;
                  pMVar64 = 
                  MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__set_Item_int__UnityEngine__UIVertex_
                  ;
                  for (iVar38 = 0x1b; iVar38 != 0; iVar38 = iVar38 + -1) {
                    *puVar35 = *(undefined4 *)puVar36;
                    puVar36 = (undefined8 *)((int)puVar36 + 4);
                    puVar35 = puVar35 + 1;
                  }
                  in_stack_82 = (MethodInfo *)&UNK_?;
                  value_04.uv3.w = (float)pMVar64;
                  auVar65 = in_stack_83._0_12_;
                  auVar67 = in_stack_83._12_12_;
                  auVar68 = in_stack_83._24_16_;
                  uVar69 = in_stack_83._40_8_;
                  auVar73 = in_stack_83._48_16_;
                  auVar74 = in_stack_83._64_16_;
                  auVar75 = in_stack_83._80_16_;
                  value_04.position.x = (float)auVar65._0_4_;
                  value_04.position.y = (float)auVar65._4_4_;
                  value_04.position.z = (float)auVar65._8_4_;
                  value_04.normal.x = (float)auVar67._0_4_;
                  value_04.normal.y = (float)auVar67._4_4_;
                  value_04.normal.z = (float)auVar67._8_4_;
                  value_04.tangent.x = (float)auVar68._0_4_;
                  value_04.tangent.y = (float)auVar68._4_4_;
                  value_04.tangent.z = (float)auVar68._8_4_;
                  value_04.tangent.w = (float)auVar68._12_4_;
                  value_04.color.rgba = (int)uVar69;
                  value_04.color.r = (char)((ulonglong)uVar69 >> 0x20);
                  value_04.color.g = (char)((ulonglong)uVar69 >> 0x28);
                  value_04.color.b = (char)((ulonglong)uVar69 >> 0x30);
                  value_04.color.a = (char)((ulonglong)uVar69 >> 0x38);
                  value_04.uv0.x = (float)auVar73._0_4_;
                  value_04.uv0.y = (float)auVar73._4_4_;
                  value_04.uv0.z = (float)auVar73._8_4_;
                  value_04.uv0.w = (float)auVar73._12_4_;
                  value_04.uv1.x = (float)auVar74._0_4_;
                  value_04.uv1.y = (float)auVar74._4_4_;
                  value_04.uv1.z = (float)auVar74._8_4_;
                  value_04.uv1.w = (float)auVar74._12_4_;
                  value_04.uv2.x = (float)auVar75._0_4_;
                  value_04.uv2.y = (float)auVar75._4_4_;
                  value_04.uv2.z = (float)auVar75._8_4_;
                  value_04.uv2.w = (float)auVar75._12_4_;
                  value_04.uv3.x = (float)in_stack_83._96_4_;
                  value_04.uv3.y = (float)in_stack_83._100_4_;
                  value_04.uv3.z = (float)in_stack_83._104_4_;
                  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
                  List_1_UnityEngine_UIVertex__set_Item
                            (verts,(int32_t)pIStack_12,value_04,in_stack_84);
                  this_01 = (Text *)((int)&this_01->klass + 1);
                  unaff_ESI = pIStack_25;
                  unaff_EDI = pIStack_24;
code_?:
                  CVar30._.m_CachedPtr = (Object_1__Fields)((int)OStack_3.m_CachedPtr + 1);
                  pIStack_5 = (Il2CppClass *)((int)&pIStack_5->image + 1);
                }
                else {
                  this_01 = (Text *)((int)&((CancellationTokenSource *)unaff_ESI->namespaze)->klass
                                    + (int)&this_01->klass);
                  OStack_3.m_CachedPtr =
                       (undefined1 *)
                       ((int)&(((Text *)((int)CVar30._.m_CachedPtr + 0xffffff64))->fields).
                              m_TempVerts + 3) + (int)unaff_ESI->namespaze;
                  pIStack_5 = (Il2CppClass *)((int)&pIStack_5[-1].vtable[0x1f].method + 3);
                  unaff_ESI = (Il2CppClass *)0x0;
                  pIStack_25 = (Il2CppClass *)0x0;
                  uVar2 = (POPCOUNT((uint)unaff_EDI & 0xff) & 1U) == 0;
                  if (unaff_EDI == (Il2CppClass *)0x0) goto code_?;
                  cVar1 = func_?();
                  if (cVar1 == '\0') goto code_?;
                  iStack_29 = func_?();
                  if (iStack_29 != 0) {
                    unaff_ESI = (Il2CppClass *)func_?();
                    bVar27 = 0;
                    uVar2 = (POPCOUNT((uint)unaff_ESI & 0xff) & 1U) == 0;
                    pIStack_25 = unaff_ESI;
                    if (unaff_ESI != (Il2CppClass *)0x0) goto code_?;
                    goto code_?;
                  }
                  CVar30._.m_CachedPtr = (Object_1__Fields)((int)OStack_3.m_CachedPtr + 1);
                  pIStack_25 = (Il2CppClass *)0x0;
                  pIStack_5 = (Il2CppClass *)((int)&pIStack_5->image + 1);
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
  }
code_?:
  bVar27 = 0;
  func_?();
code_?:
  func_?();
code_?:
  uVar69 = func_?();
  piVar18 = (int *)((ulonglong)uVar69 >> 0x20);
  pcVar85 = (char *)uVar69;
  if (!(bool)uVar2) {
    puVar86 = (undefined1 *)((int)&unaff_EDI->cctor_started + 2);
    bVar87 = *puVar86;
    bVar88 = (byte)((uint)this_01 >> 8);
    bVar89 = *puVar86 + bVar88;
    *puVar86 = bVar89 + bVar27;
    extraout_ECX[0x105072] =
         extraout_ECX[0x105072] + (char)extraout_ECX +
         (CARRY1(bVar87,bVar88) || CARRY1(bVar89,bVar27));
    *piVar18 = (int)(pcVar85 + *piVar18);
    *extraout_ECX = *extraout_ECX + (char)uVar69;
    *piVar18 = *piVar18 + CONCAT31((int3)((ulonglong)uVar69 >> 8),(char)uVar69 + *pcVar85);
    pcVar90 = (code *)swi(3);
    (*pcVar90)();
    return;
  }
  puVar91 = (uint *)((int)&this_01[-0x7ceb7d].fields._._.m_RectTransform + 1);
  uVar92 = *puVar91;
  *puVar91 = (uint)(extraout_ECX + *puVar91);
  ppTVar93 = &this_01[-0xc3caa].fields._._.m_ColorTweenRunner;
  *ppTVar93 = (TweenRunner_1_ColorTween_ *)
             (pcVar85 + (uint)CARRY4(uVar92,(uint)extraout_ECX) + (int)&(*ppTVar93)->klass);
  if (*(int *)(extraout_ECX + 0x74) == 0) {
    func_?();
  }
  bVar20 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                     ((Object_1 *)unaff_EDI,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar20 != 0) {
    pGVar94 = UnityEngine.UI.dll::UnityEngine::UI::BaseMeshEffect::BaseMeshEffect_get_graphic
                        ((BaseMeshEffect *)unaff_ESI,(MethodInfo *)0x0);
    if (pGVar94 == (Graphic *)0x0) {
      func_?();
      pcVar90 = (code *)swi(3);
      (*pcVar90)();
      return;
    }
    (*(code *)(pGVar94->klass->vtable).SetVerticesDirty.method)();
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

