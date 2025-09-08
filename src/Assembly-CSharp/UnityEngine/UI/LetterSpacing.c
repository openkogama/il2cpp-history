
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
  uVar2 = this_01 == (Text *)0x0;
  OStack_3.m_CachedPtr = this_01;
  if (!(bool)uVar2) {
    unaff_EDI = (Il2CppClass *)(*(code *)(this_01->klass->vtable).get_text.method)();
    pIStack_4 = unaff_EDI;
    this_02 = UnityEngine.UI.dll::UnityEngine::UI::Text::Text_get_cachedTextGenerator
                        (this_01,(MethodInfo *)0x0);
    uVar2 = this_02 == (TextGenerator *)0x0;
    if (!(bool)uVar2) {
      unaff_ESI = (Il2CppClass *)
                  UnityEngine.TextRenderingModule.dll::UnityEngine::TextGenerator::
                  TextGenerator_get_lines(this_02,(MethodInfo *)0x0);
      uVar2 = unaff_ESI == (Il2CppClass *)0x0;
      pIStack_5 = unaff_ESI;
      if (!(bool)uVar2) {
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
          in_XMM0_Da = (Il2CppClass *)*piVar13;
          VStack_14.x = (float)piVar13[1];
          VStack_14.y = (float)piVar13[2];
          VStack_14.z = (float)piVar13[3];
          uVar2 = true;
          unaff_EDI = pIVar11;
          pIStack_15 = in_XMM0_Da;
          if (pIStack_4 == (Il2CppClass *)0x0) goto code_?;
          pSStack_16 = mscorlib.dll::System::String::String_Insert
                                 ((String *)pIStack_4,(int32_t)in_XMM0_Da,StringLiteral_u000A,
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
          unaff_EBX = aiStack_18;
          piVar19 = (int *)(*(code *)*ppMVar10)();
          in_XMM0_Da = (Il2CppClass *)*piVar19;
          VStack_14.x = (float)piVar19[1];
          VStack_14.y = (float)piVar19[2];
          VStack_14.z = (float)piVar19[3];
          uVar2 = true;
          pIStack_15 = in_XMM0_Da;
          if (pSStack_16 == (String *)0x0) goto code_?;
          this_03 = (Il2CppClass *)
                    mscorlib.dll::System::String::String_Remove
                              (pSStack_16,(int32_t)((int)&in_XMM0_Da[-1].vtable[0x1f].method + 3),1,
                               (MethodInfo *)0x0);
          pIVar11 = (Il2CppClass *)
                   TypeInfo__System__Collections__Generic__IList<UnityEngine::UILineInfo>;
          pIStack_4 = this_03;
        }
        uVar2 = this_03 == (Il2CppClass *)0x0;
        unaff_EDI = (Il2CppClass *)0x0;
        if (!(bool)uVar2) {
          pSStack_20 = mscorlib.dll::System::String::String_Split
                                 ((String *)this_03,10,StringSplitOptions__Enum_None,
                                  (MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          this_00.m_CachedPtr = OStack_3.m_CachedPtr;
          bVar21 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                            (OStack_3.m_CachedPtr,(Object_1 *)0x0,(MethodInfo *)0x0);
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
                             (this_00.m_CachedPtr,(MethodInfo *)0x0);
          this_01 = (Text *)0x0;
          fStack_23 = ((float)iVar22 * (float)ppSStack_8) / _UNK_?;
          in_XMM0_Da = (Il2CppClass *)0x0;
          pIStack_4 = (Il2CppClass *)0x0;
          if ((this->fields).useRichText == 0) {
            bStack_24 = 0;
          }
          else {
            bStack_24 = UnityEngine.UI.dll::UnityEngine::UI::Text::Text_get_supportRichText
                                 (this_00.m_CachedPtr,(MethodInfo *)0x0);
          }
          unaff_ESI = (Il2CppClass *)0x0;
          unaff_EDI = (Il2CppClass *)0x0;
          pIStack_25 = (Il2CppClass *)0x0;
          pIStack_26 = (Il2CppClass *)0x0;
          TVar27 = UnityEngine.UI.dll::UnityEngine::UI::Text::Text_get_alignment
                             (OStack_3.m_CachedPtr,(MethodInfo *)0x0);
          switch(TVar27) {
          case TextAnchor__Enum_UpperLeft:
          case TextAnchor__Enum_MiddleLeft:
          case TextAnchor__Enum_LowerLeft:
            in_XMM0_Da = (Il2CppClass *)0x0;
            pIStack_4 = in_XMM0_Da;
            break;
          case TextAnchor__Enum_UpperCenter:
          case TextAnchor__Enum_MiddleCenter:
          case TextAnchor__Enum_LowerCenter:
            in_XMM0_Da = _UNK_?;
            pIStack_4 = _UNK_?;
            break;
          case TextAnchor__Enum_UpperRight:
          case TextAnchor__Enum_MiddleRight:
          case TextAnchor__Enum_LowerRight:
            in_XMM0_Da = _UNK_?;
            pIStack_4 = _UNK_?;
          }
          pSStack_6 = (String__Class *)0x0;
          uVar2 = true;
          if (pSStack_20 != (String__Array *)0x0) {
            ppSStack_8 = pSStack_20->vector;
            while( true ) {
              if ((int)pSStack_20->max_length <= (int)pSStack_6) {
                return;
              }
              uVar2 = pSStack_6 == (String__Class *)pSStack_20->max_length;
              bVar28 = 0;
              unaff_EDI = pIStack_25;
              if ((String__Class *)pSStack_20->max_length <= pSStack_6) break;
              pSStack_29 = *ppSStack_8;
              uVar2 = true;
              if (pSStack_29 == (String *)0x0) goto code_?;
              OStack_3.m_CachedPtr = (void *)(pSStack_29->fields)._stringLength;
              if (bStack_24 != 0) {
                unaff_EDI = (Il2CppClass *)
                            LetterSpacing_GetRegexMatchedTagCollection
                                      (this,pSStack_29,(int32_t *)&OStack_3,(MethodInfo *)0x0);
                unaff_ESI = (Il2CppClass *)0x0;
                pIStack_26 = (Il2CppClass *)0x0;
                uVar2 = true;
                pIStack_25 = unaff_EDI;
                if (unaff_EDI == (Il2CppClass *)0x0) goto code_?;
                unaff_EBX = (int *)&UNK_?;
                cVar1 = func_?();
                if (cVar1 != '\0') {
                  iStack_30 = func_?();
                  if (iStack_30 == 0) {
                    pIStack_26 = (Il2CppClass *)0x0;
                  }
                  else {
                    unaff_ESI = (Il2CppClass *)func_?();
                    bVar28 = 0;
                    uVar2 = 1;
                    pIStack_26 = unaff_ESI;
                    if (unaff_ESI == (Il2CppClass *)0x0) goto code_?;
                  }
                }
              }
              CVar31._.m_CachedPtr = (Object_1__Fields)(void *)0x0;
              pIStack_5 = (Il2CppClass *)0x0;
              in_XMM0_Da = (Il2CppClass *)
                           ((float)(int)((int)&(((Text *)((int)OStack_3.m_CachedPtr + -0x9c))->
                                               fields).m_TempVerts + 3) * fStack_23 *
                           (float)pIStack_4);
              pIStack_32 = in_XMM0_Da;
              while (OStack_3 = CVar31._.m_CachedPtr,
                    (int)CVar31._.m_CachedPtr < (pSStack_29->fields)._stringLength) {
                if (((bStack_24 == 0) || (unaff_ESI == (Il2CppClass *)0x0)) ||
                   ((Object_1__Fields)(((BaseMeshEffect__Fields *)&unaff_ESI->name)->_)._._._ !=
                    CVar31._.m_CachedPtr)) {
                  iStack_33 = (int)this_01 * 6 + 1;
                  iStack_30 = (int)this_01 * 6;
                  iStack_34 = (int)this_01 * 6 + 2;
                  iStack_35 = (int)this_01 * 6 + 3;
                  pSStack_16 = (String *)((int)this_01 * 6 + 4);
                  unaff_ESI = (Il2CppClass *)((int)this_01 * 6 + 5);
                  uVar2 = true;
                  pIStack_12 = unaff_ESI;
                  if (verts == (List_1_UnityEngine_UIVertex_ *)0x0) goto code_?;
                  if ((verts->fields)._size + -1 < (int)unaff_ESI) {
                    return;
                  }
                  puVar36 = (undefined4 *)func_?();
                  puVar37 = &uStack_38;
                  for (iVar39 = 0x1b; iVar39 != 0; iVar39 = iVar39 + -1) {
                    *(undefined4 *)puVar37 = *puVar36;
                    puVar36 = puVar36 + 1;
                    puVar37 = (undefined8 *)((int)puVar37 + 4);
                  }
                  puVar36 = (undefined4 *)func_?();
                  puVar37 = &uStack_40;
                  for (iVar39 = 0x1b; iVar39 != 0; iVar39 = iVar39 + -1) {
                    *(undefined4 *)puVar37 = *puVar36;
                    puVar36 = puVar36 + 1;
                    puVar37 = (undefined8 *)((int)puVar37 + 4);
                  }
                  puVar36 = (undefined4 *)func_?();
                  puVar37 = &uStack_41;
                  for (iVar39 = 0x1b; iVar39 != 0; iVar39 = iVar39 + -1) {
                    *(undefined4 *)puVar37 = *puVar36;
                    puVar36 = puVar36 + 1;
                    puVar37 = (undefined8 *)((int)puVar37 + 4);
                  }
                  puVar36 = (undefined4 *)func_?();
                  puVar37 = &uStack_42;
                  for (iVar39 = 0x1b; iVar39 != 0; iVar39 = iVar39 + -1) {
                    *(undefined4 *)puVar37 = *puVar36;
                    puVar36 = puVar36 + 1;
                    puVar37 = (undefined8 *)((int)puVar37 + 4);
                  }
                  puVar36 = (undefined4 *)func_?();
                  puVar37 = &uStack_43;
                  for (iVar39 = 0x1b; iVar39 != 0; iVar39 = iVar39 + -1) {
                    *(undefined4 *)puVar37 = *puVar36;
                    puVar36 = puVar36 + 1;
                    puVar37 = (undefined8 *)((int)puVar37 + 4);
                  }
                  puVar36 = (undefined4 *)func_?();
                  __return_storage_ptr__ = &VStack_14;
                  uVar44 = 0;
                  puVar37 = &uStack_45;
                  for (iVar39 = 0x1b; iVar39 != 0; iVar39 = iVar39 + -1) {
                    *(undefined4 *)puVar37 = *puVar36;
                    puVar36 = puVar36 + 1;
                    puVar37 = (undefined8 *)((int)puVar37 + 4);
                  }
                  puVar46 = &UNK_?;
                  pVVar47 = RTG::TriangPrismShape3D::TriangPrismShape3D_get_ModelRight
                                      (__return_storage_ptr__,(MethodInfo *)0x0);
                  uStack_48._0_4_ = pVVar47->x;
                  uStack_48._4_4_ = pVVar47->y;
                  fStack_49 = pVVar47->z;
                  fVar50 = (float)(int)pIStack_5 * fStack_23 - (float)pIStack_32;
                  fVar51 = (float)(undefined4)uStack_48 * fVar50;
                  fVar52 = (float)uStack_48._4_4_ * fVar50;
                  fVar50 = pVVar47->z * fVar50;
                  fStack_53 = fStack_54 + fVar50;
                  uStack_38 = CONCAT44(uStack_38._4_4_ + fVar52,(float)uStack_38 + fVar51);
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
                  in_XMM0_Da = (Il2CppClass *)((float)pIStack_63 + fVar50);
                  uStack_43 = CONCAT44(uStack_43._4_4_ + fVar52,(float)uStack_43 + fVar51);
                  in_XMM1_Da = (_union_86)(uStack_45._4_4_ + fVar52);
                  fStack_62 = fStack_62 + fVar50;
                  pIStack_64 = in_XMM0_Da;
                  uStack_45 = CONCAT44(in_XMM1_Da.dummy,(float)uStack_45 + fVar51);
                  pIStack_63 = in_XMM0_Da;
                  puVar37 = &uStack_38;
                  puVar36 = (undefined4 *)&stack0xfffff8f8;
                  pMVar65 = 
                  MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__set_Item_int__UnityEngine__UIVertex_
                  ;
                  for (iVar39 = 0x1b; iVar39 != 0; iVar39 = iVar39 + -1) {
                    *puVar36 = *(undefined4 *)puVar37;
                    puVar37 = (undefined8 *)((int)puVar37 + 4);
                    puVar36 = puVar36 + 1;
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
                  List_1_UnityEngine_UIVertex__set_Item(verts,iStack_30,value,in_stack_72);
                  puVar37 = &uStack_40;
                  puVar36 = (undefined4 *)&stack0xfffff974;
                  pMVar65 = 
                  MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__set_Item_int__UnityEngine__UIVertex_
                  ;
                  for (iVar39 = 0x1b; iVar39 != 0; iVar39 = iVar39 + -1) {
                    *puVar36 = *(undefined4 *)puVar37;
                    puVar37 = (undefined8 *)((int)puVar37 + 4);
                    puVar36 = puVar36 + 1;
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
                  List_1_UnityEngine_UIVertex__set_Item(verts,iStack_33,value_00,in_stack_77);
                  puVar37 = &uStack_41;
                  puVar36 = (undefined4 *)&stack0xfffff9f0;
                  pMVar65 = 
                  MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__set_Item_int__UnityEngine__UIVertex_
                  ;
                  for (iVar39 = 0x1b; iVar39 != 0; iVar39 = iVar39 + -1) {
                    *puVar36 = *(undefined4 *)puVar37;
                    puVar37 = (undefined8 *)((int)puVar37 + 4);
                    puVar36 = puVar36 + 1;
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
                  List_1_UnityEngine_UIVertex__set_Item(verts,iStack_34,value_01,in_stack_79);
                  puVar37 = &uStack_42;
                  puVar36 = (undefined4 *)&stack0xfffffa6c;
                  pMVar65 = 
                  MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__set_Item_int__UnityEngine__UIVertex_
                  ;
                  for (iVar39 = 0x1b; iVar39 != 0; iVar39 = iVar39 + -1) {
                    *puVar36 = *(undefined4 *)puVar37;
                    puVar37 = (undefined8 *)((int)puVar37 + 4);
                    puVar36 = puVar36 + 1;
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
                  List_1_UnityEngine_UIVertex__set_Item(verts,iStack_35,value_02,in_stack_81);
                  puVar37 = &uStack_43;
                  puVar36 = (undefined4 *)&stack0xfffffae8;
                  pMVar65 = 
                  MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__set_Item_int__UnityEngine__UIVertex_
                  ;
                  for (iVar39 = 0x1b; iVar39 != 0; iVar39 = iVar39 + -1) {
                    *puVar36 = *(undefined4 *)puVar37;
                    puVar37 = (undefined8 *)((int)puVar37 + 4);
                    puVar36 = puVar36 + 1;
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
                            (verts,(int32_t)pSStack_16,value_03,in_stack_83);
                  puVar37 = &uStack_45;
                  puVar36 = (undefined4 *)&stack0xfffffb64;
                  pMVar65 = 
                  MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__set_Item_int__UnityEngine__UIVertex_
                  ;
                  for (iVar39 = 0x1b; iVar39 != 0; iVar39 = iVar39 + -1) {
                    *puVar36 = *(undefined4 *)puVar37;
                    puVar37 = (undefined8 *)((int)puVar37 + 4);
                    puVar36 = puVar36 + 1;
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
                            (verts,(int32_t)pIStack_12,value_04,in_stack_85);
                  this_01 = (Text *)((int)&this_01->klass + 1);
                  unaff_ESI = pIStack_26;
                  unaff_EDI = pIStack_25;
code_?:
                  CVar31._.m_CachedPtr = (Object_1__Fields)((int)OStack_3.m_CachedPtr + 1);
                  pIStack_5 = (Il2CppClass *)((int)&pIStack_5->image + 1);
                }
                else {
                  this_01 = (Text *)((int)&((CancellationTokenSource *)unaff_ESI->namespaze)->klass
                                    + (int)&this_01->klass);
                  OStack_3.m_CachedPtr =
                       (undefined1 *)
                       ((int)&(((Text *)((int)CVar31._.m_CachedPtr + 0xffffff64))->fields).
                              m_TempVerts + 3) + (int)unaff_ESI->namespaze;
                  pIStack_5 = (Il2CppClass *)((int)&pIStack_5[-1].vtable[0x1f].method + 3);
                  unaff_ESI = (Il2CppClass *)0x0;
                  pIStack_26 = (Il2CppClass *)0x0;
                  uVar2 = true;
                  if (unaff_EDI == (Il2CppClass *)0x0) goto code_?;
                  cVar1 = func_?();
                  if (cVar1 == '\0') goto code_?;
                  iStack_30 = func_?();
                  if (iStack_30 != 0) {
                    unaff_ESI = (Il2CppClass *)func_?();
                    bVar28 = 0;
                    uVar2 = 1;
                    pIStack_26 = unaff_ESI;
                    if (unaff_ESI != (Il2CppClass *)0x0) goto code_?;
                    goto code_?;
                  }
                  CVar31._.m_CachedPtr = (Object_1__Fields)((int)OStack_3.m_CachedPtr + 1);
                  pIStack_26 = (Il2CppClass *)0x0;
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
  bVar28 = 0;
  func_?();
code_?:
  func_?();
code_?:
  pcVar86 = (char *)func_?();
  cVar1 = (char)pcVar86;
  if ((bool)uVar2) {
    puVar87 = (undefined1 *)((int)&unaff_EDI->cctor_finished_or_no_cctor + 1);
    bVar88 = *puVar87 + (byte)this_01;
    bVar89 = CARRY1(*puVar87,(byte)this_01) || CARRY1(bVar88,bVar28);
    *puVar87 = bVar88 + bVar28;
    pbVar90 = (byte *)(extraout_ECX + 0x75);
    bVar28 = *pbVar90;
    bVar91 = (byte)((uint)extraout_ECX >> 8);
    bVar88 = *pbVar90 + bVar91;
    *pbVar90 = bVar88 + bVar89;
    *pcVar86 = *pcVar86 + cVar1 + (CARRY1(bVar28,bVar91) || CARRY1(bVar88,bVar89));
    *unaff_EBX = (int)(pcVar86 + *unaff_EBX);
    *extraout_ECX = *extraout_ECX + cVar1;
    *unaff_EBX = *unaff_EBX + CONCAT31((int3)((uint)pcVar86 >> 8),cVar1 + *pcVar86);
    pcVar92 = (code *)swi(3);
    (*pcVar92)();
    return;
  }
  *(byte *)&(unaff_ESI->this_arg).data = *(char *)&(unaff_ESI->this_arg).data + cVar1 + bVar28;
  if ((float)in_XMM0_Da != (float)in_XMM1_Da) {
    (unaff_ESI->this_arg).data = in_XMM1_Da;
    pGVar93 = UnityEngine.UI.dll::UnityEngine::UI::BaseMeshEffect::BaseMeshEffect_get_graphic
                        ((BaseMeshEffect *)unaff_ESI,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar21 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pGVar93,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar21 != 0) {
      pGVar93 = UnityEngine.UI.dll::UnityEngine::UI::BaseMeshEffect::BaseMeshEffect_get_graphic
                          ((BaseMeshEffect *)unaff_ESI,(MethodInfo *)0x0);
      if (pGVar93 == (Graphic *)0x0) {
        func_?();
        pcVar92 = (code *)swi(3);
        (*pcVar92)();
        return;
      }
      (*(code *)(pGVar93->klass->vtable).SetVerticesDirty.method)();
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

