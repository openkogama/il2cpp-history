
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  if ((((uint)(TypeInfo__System__Text__RegularExpressions__Regex->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__System__Text__RegularExpressions__Regex->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Text__RegularExpressions__Regex);
  }
  this_00 = (MethodInfo *)
            System.dll::System::Text::RegularExpressions::Regex::Regex_Matches
                      (line,StringLiteral__b____b___i____i___size__Ptr_____s,(MethodInfo *)0x0);
  iStack_4 = 0;
  *lineLengthWithoutTags = 0;
  if (this_00 != (MethodInfo *)0x0) {
    method_00 = this_00;
    iVar5 = System.dll::System::Text::RegularExpressions::MatchCollection::MatchCollection_get_Count
                      ((MatchCollection *)this_00,(MethodInfo *)0x0);
    iVar6 = 0;
    if (iVar5 < 1) {
code_?:
      if (line != (String *)0x0) {
        pIVar7 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                  Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)line,method_00);
        *lineLengthWithoutTags = (int)pIVar7 - iVar6;
        if (this_00 != (MethodInfo *)0x0) {
          pIVar8 = System.dll::System::Text::RegularExpressions::MatchCollection::
                   MatchCollection_GetEnumerator((MatchCollection *)this_00,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return pIVar8;
        }
      }
    }
    else {
      pIVar8 = System.dll::System::Text::RegularExpressions::MatchCollection::
               MatchCollection_GetEnumerator((MatchCollection *)this_00,(MethodInfo *)0x0);
      uStack_1 = 0;
      while (pIVar8 != (IEnumerator *)0x0) {
        pIVar9 = pIVar8;
        cVar10 = func_?();
        if (cVar10 == '\0') {
          pIVar9->klass = (IEnumerator__Class *)0x64;
          uStack_1 = 0xffffffff;
          this_00 = (MethodInfo *)&UNK_?;
          pMVar11 = (MethodInfo *)func_?();
          iVar6 = iStack_4;
          method_00 = this_00;
          if (pMVar11 != (MethodInfo *)0x0) {
            this_00 = pMVar11;
            func_?();
            method_00 = this_00;
          }
          goto code_?;
        }
        pIVar12 = pIVar8->klass;
        uVar13 = 0;
        uVar14._0_1_ = (pIVar12->_1).rank;
        uVar14._1_1_ = (pIVar12->_1).minimumAlignment;
        if (uVar14 != 0) {
          do {
            if (pIVar12->interfaceOffsets[uVar13].interfaceType ==
                (Il2CppClass *)TypeInfo__System__Collections__IEnumerator) {
              ppMVar15 = &(&(pIVar8->klass->vtable).get_Current)
                          [pIVar12->interfaceOffsets[uVar13].offset].method;
              goto code_?;
            }
            uVar13 = uVar13 + 1;
          } while (uVar13 < uVar14);
        }
        ppMVar15 = (MethodInfo **)func_?();
code_?:
        pCVar16 = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)(*(code *)*ppMVar15)()
        ;
        if (pCVar16 == (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0) break;
        bVar17 = (TypeInfo__System__Text__RegularExpressions__Match->_1).naturalAligment;
        if (((pCVar16->klass->_1).naturalAligment < bVar17) ||
           ((pCVar16->klass->_1).typeHierarchy[bVar17 - 1] !=
            (Il2CppClass *)TypeInfo__System__Text__RegularExpressions__Match)) {
          bVar18 = false;
        }
        else {
          bVar18 = true;
        }
        this_01 = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
        if (bVar18) {
          this_01 = pCVar16;
        }
        if (this_01 == (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0) {
          func_?();
          break;
        }
        pOVar19 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                  Serialization::JsonProperty]::
                  Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                            (this_01,(MethodInfo *)0x0);
        iStack_4 = (int)&pOVar19->klass + iStack_4;
      }
    }
  }
  func_?();
  func_?();
  pcVar20 = (code *)swi(3);
  pIVar8 = (IEnumerator *)(*pcVar20)();
  return pIVar8;
}


/* Void ModifyMesh(VertexHelper) */

void Assembly-CSharp.dll::UnityEngine::UI::LetterSpacing::LetterSpacing_ModifyMesh
               (LetterSpacing *this,VertexHelper *vh,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  cVar1 = (*(code *)(this->klass->vtable).IsActive.method)
                    (this,(this->klass->vtable).OnRectTransformDimensionsChange.methodPtr);
  if (cVar1 != '\0') {
    stream = (List_1_UnityEngine_UIVertex_ *)
             func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::UIVertex>);
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
    List_1_UnityEngine_Vector4___ctor
              ((List_1_UnityEngine_Vector4_ *)stream,
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  cVar1 = (*(code *)(this->klass->vtable).IsActive.method)
                     (this,(this->klass->vtable).OnRectTransformDimensionsChange.methodPtr);
  if (cVar1 == '\0') {
    return;
  }
  pTVar2 = (Text *)UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58
                              ((Component_1 *)this,
                               UnityEngine__UI__Text_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::Text>__
                              );
  pTStack_3 = pTVar2;
  if (pTVar2 != (Text *)0x0) {
    pSVar4 = (String *)(*(code *)(pTVar2->klass->vtable).get_text.method)();
    pSStack_5 = pSVar4;
    this_01 = UnityEngine.UI.dll::UnityEngine::UI::Text::Text_get_cachedTextGenerator
                        (pTVar2,(MethodInfo *)0x0);
    if ((this_01 != (TextGenerator *)0x0) &&
       (unaff_ESI = (IList_1_UnityEngine_UILineInfo___Class *)
                    UnityEngine.TextRenderingModule.dll::UnityEngine::TextGenerator::
                    TextGenerator_get_lines(this_01,(MethodInfo *)0x0),
       pIStack_6 = (IList_1_UnityEngine_UILineInfo_ *)unaff_ESI,
       unaff_ESI != (IList_1_UnityEngine_UILineInfo___Class *)0x0)) {
      pIStack_7 = *(IList_1_UnityEngine_UILineInfo___Class **)&unaff_ESI->_0;
      uVar8 = 0;
      pSStack_9 = (String *)0x0;
      uVar10._0_1_ = (pIStack_7->_1).rank;
      uVar10._1_1_ = (pIStack_7->_1).minimumAlignment;
      if (uVar10 != 0) {
        do {
          pTVar2 = pTStack_3;
          pSVar4 = pSStack_5;
          if (pIStack_7->interfaceOffsets[uVar8].interfaceType ==
              (Il2CppClass *)
              TypeInfo__System__Collections__Generic__ICollection<UnityEngine::UILineInfo>) {
            pIVar11 = (unaff_ESI->_0).image;
            puVar12 = &pIVar11[4].exportedTypeCount +
                      *(int *)(pIVar11[2].name + (uint)uVar8 * 8 + 4) * 2;
            goto code_?;
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar10);
      }
      puVar12 = (uint32_t *)func_?(unaff_ESI);
code_?:
      iVar13 = (*(code *)*puVar12)();
      pTStack_14 = (Text *)(iVar13 + -1);
      while (0 < (int)pTStack_14) {
        pIVar11 = (unaff_ESI->_0).image;
        pTVar2 = (Text *)0x0;
        uVar8 = 0;
        uVar10 = *(ushort *)((int)&pIVar11[4].nameNoExt + 2);
        if (uVar10 != 0) {
          pTVar2 = (Text *)pIVar11[2].name;
          do {
            if ((&pTVar2->klass)[(uint)uVar8 * 2] ==
                (Text__Class *)
                TypeInfo__System__Collections__Generic__IList<UnityEngine::UILineInfo>) {
              ppcVar15 = &((unaff_ESI->_0).image)->name +
                         (int)((&pTVar2->monitor)[(uint)uVar8 * 2] + 0x1b) * 2;
              goto code_?;
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 < uVar10);
        }
        ppcVar15 = (char **)func_?();
code_?:
        piVar16 = (int32_t *)(*(code *)*ppcVar15)();
        iStack_17 = *piVar16;
        VStack_18.x = (float)piVar16[1];
        VStack_18.y = (float)piVar16[2];
        VStack_18.z = (float)piVar16[3];
        if (pSStack_5 == (String *)0x0) goto code_?;
        pSStack_9 = mscorlib.dll::System::String::String_Insert
                               (pSStack_5,iStack_17,StringLiteral_u000A,(MethodInfo *)0x0);
        pIVar11 = (unaff_ESI->_0).image;
        uVar8 = 0;
        uVar10 = *(ushort *)((int)&pIVar11[4].nameNoExt + 2);
        if (uVar10 != 0) {
          pcVar19 = pIVar11[2].name;
          do {
            if (*(IList_1_UnityEngine_UILineInfo___Class **)(pcVar19 + (uint)uVar8 * 8) ==
                TypeInfo__System__Collections__Generic__IList<UnityEngine::UILineInfo>) {
              puVar20 = &(unaff_ESI->_0).image[4].dynamic +
                        *(int *)(pcVar19 + (uint)uVar8 * 8 + 4) * 8;
              goto code_?;
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 < uVar10);
        }
        puVar20 = (uint8_t *)func_?();
code_?:
        pTVar2 = pTStack_14;
        piVar21 = (int *)(**(code **)puVar20)();
        iStack_17 = *piVar21;
        VStack_18.x = (float)piVar21[1];
        VStack_18.y = (float)piVar21[2];
        VStack_18.z = (float)piVar21[3];
        if (pSStack_9 == (String *)0x0) goto code_?;
        pSVar4 = mscorlib.dll::System::String::String_Remove_1
                            (pSStack_9,iStack_17 + -1,1,(MethodInfo *)0x0);
        pTStack_14 = (Text *)((int)&pTVar2[-1].fields.m_TempVerts + 3);
        pTVar2 = pTStack_3;
        pSStack_5 = pSVar4;
      }
      separator = (Char__Array *)func_?();
      if (separator != (Char__Array *)0x0) {
        if (separator->max_length == 0) goto code_?;
        separator->vector[0] = 10;
        if (pSVar4 != (String *)0x0) {
          pSStack_22 = mscorlib.dll::System::String::String_Split
                                 (pSVar4,separator,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          bVar23 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                             ((Object_1 *)pTVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
          if (bVar23 != 0) {
            if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
              func_?(TypeInfo__UnityEngine__Debug);
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                      ((Object *)StringLiteral_LetterSpacing__Missing_Text_comp,(MethodInfo *)0x0);
            return;
          }
          pSStack_9 = (String *)(this->fields).m_spacing;
          iVar24 = UnityEngine.UI.dll::UnityEngine::UI::Text::Text_get_fontSize
                             (pTVar2,(MethodInfo *)0x0);
          pSVar4 = (String *)0x0;
          pSStack_5 = (String *)0x0;
          pIStack_6 = (IList_1_UnityEngine_UILineInfo_ *)
                       (((float)iVar24 * (float)pSStack_9) / _UNK_?);
          pTStack_14 = (Text *)0x0;
          if ((this->fields).useRichText == 0) {
            bStack_25 = 0;
          }
          else {
            bStack_25 = UnityEngine.UI.dll::UnityEngine::UI::Text::Text_get_supportRichText
                                 (pTVar2,(MethodInfo *)0x0);
          }
          pTVar2 = (Text *)0x0;
          pIStack_26 = (IEnumerator *)0x0;
          TVar27 = UnityEngine.UI.dll::UnityEngine::UI::Text::Text_get_alignment
                             (pTStack_3,(MethodInfo *)0x0);
          switch(TVar27) {
          case TextAnchor__Enum_UpperLeft:
          case TextAnchor__Enum_MiddleLeft:
          case TextAnchor__Enum_LowerLeft:
            pTStack_14 = (Text *)0x0;
            break;
          case TextAnchor__Enum_UpperCenter:
          case TextAnchor__Enum_MiddleCenter:
          case TextAnchor__Enum_LowerCenter:
            pTStack_14 = _UNK_?;
            break;
          case TextAnchor__Enum_UpperRight:
          case TextAnchor__Enum_MiddleRight:
          case TextAnchor__Enum_LowerRight:
            pTStack_14 = _UNK_?;
          }
          pSStack_9 = (String *)0x0;
          unaff_ESI = (IList_1_UnityEngine_UILineInfo___Class *)this;
          if (pSStack_22 != (String__Array *)0x0) {
            ppSStack_28 = pSStack_22->vector;
            while( true ) {
              if ((int)pSStack_22->max_length <= (int)pSStack_9) {
                return;
              }
              if ((String *)pSStack_22->max_length <= pSStack_9) break;
              this_00 = (Collection_1_VoxelHit_ *)*ppSStack_28;
              unaff_ESI = (IList_1_UnityEngine_UILineInfo___Class *)0x0;
              pCStack_29 = this_00;
              if (this_00 == (Collection_1_VoxelHit_ *)0x0) goto code_?;
              pTStack_3 = (Text *)mscorlib.dll::System::Collections::ObjectModel::
                                  Collection`1[VoxelHit]::Collection_1_VoxelHit__get_Items
                                            (this_00,(MethodInfo *)0x0);
              if (bStack_25 != 0) {
                pIVar30 = LetterSpacing_GetRegexMatchedTagCollection
                                    (this,(String *)this_00,(int32_t *)&pTStack_3,(MethodInfo *)0x0)
                ;
                pTVar2 = (Text *)0x0;
                unaff_ESI = (IList_1_UnityEngine_UILineInfo___Class *)0x0;
                pIStack_26 = pIVar30;
                if (pIVar30 == (IEnumerator *)0x0) goto code_?;
                cVar1 = func_?();
                if (cVar1 != '\0') {
                  uVar31 = func_?(0,TypeInfo__System__Collections__IEnumerator,pIVar30);
                  pTVar2 = (Text *)func_?(uVar31,
                                                  TypeInfo__System__Text__RegularExpressions__Match)
                  ;
                }
              }
              pTVar32 = pTStack_3 + -1;
              unaff_ESI = (IList_1_UnityEngine_UILineInfo___Class *)0x0;
              pTStack_3 = (Text *)0x0;
              fStack_33 = (float)(int)((int)&(pTVar32->fields).m_TempVerts + 3) * (float)pIStack_6
                          * (float)pTStack_14;
              while (pIStack_7 = unaff_ESI,
                    pIVar34 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]
                              ::Collection_1_VoxelHit__get_Items(pCStack_29,(MethodInfo *)0x0),
                    (int)unaff_ESI < (int)pIVar34) {
                if (((bStack_25 == 0) || (pTVar2 == (Text *)0x0)) ||
                   (pIVar35 = (IList_1_UnityEngine_UILineInfo___Class *)
                              mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]
                              ::Collection_1_VoxelHit__get_Items
                                        ((Collection_1_VoxelHit_ *)pTVar2,(MethodInfo *)0x0),
                   pIVar35 != unaff_ESI)) {
                  iVar13 = (int)pSVar4 * 6;
                  unaff_ESI = (IList_1_UnityEngine_UILineInfo___Class *)0x0;
                  if (verts == (List_1_UnityEngine_UIVertex_ *)0x0) goto code_?;
                  pOVar36 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft
                            ::Json::Serialization::JsonProperty]::
                            Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                      ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                       verts,
                                       MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__get_Count__
                                      );
                  if ((int)((int)&pOVar36[-1].monitor + 3) < iVar13 + 5) {
                    return;
                  }
                  pVVar37 = (Vector3 *)func_?();
                  VVar38 = *pVVar37;
                  fVar39 = pVVar37[1].x;
                  fStack_40 = pVVar37[1].y;
                  fStack_41 = pVVar37[1].z;
                  fStack_42 = pVVar37[2].x;
                  fStack_43 = pVVar37[2].y;
                  fStack_44 = pVVar37[2].z;
                  fStack_45 = pVVar37[3].x;
                  fStack_46 = pVVar37[3].y;
                  fStack_47 = pVVar37[3].z;
                  fStack_48 = pVVar37[4].x;
                  fStack_49 = pVVar37[4].y;
                  fStack_50 = pVVar37[4].z;
                  fStack_51 = pVVar37[5].x;
                  uStack_52._0_4_ = pVVar37[5].y;
                  uStack_52._4_4_ = pVVar37[5].z;
                  fStack_53 = pVVar37[6].x;
                  pVVar37 = (Vector3 *)
                            func_?(&stack0xfffffbe4,verts,iVar13 + 1,
                                            MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__get_Item_int_
                                           );
                  VVar54 = *pVVar37;
                  fVar55 = pVVar37[1].x;
                  fStack_56 = pVVar37[1].y;
                  fStack_57 = pVVar37[1].z;
                  fStack_58 = pVVar37[2].x;
                  fStack_59 = pVVar37[2].y;
                  fStack_60 = pVVar37[2].z;
                  fStack_61 = pVVar37[3].x;
                  fStack_62 = pVVar37[3].y;
                  fStack_63 = pVVar37[3].z;
                  fStack_64 = pVVar37[4].x;
                  fStack_65 = pVVar37[4].y;
                  fStack_66 = pVVar37[4].z;
                  fStack_67 = pVVar37[5].x;
                  uStack_68._0_4_ = pVVar37[5].y;
                  uStack_68._4_4_ = pVVar37[5].z;
                  fStack_69 = pVVar37[6].x;
                  pVVar37 = (Vector3 *)
                            func_?(&stack0xfffffbe4,verts,iVar13 + 2,
                                            MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__get_Item_int_
                                           );
                  VVar70 = *pVVar37;
                  fVar71 = pVVar37[1].x;
                  fStack_72 = pVVar37[1].y;
                  fStack_73 = pVVar37[1].z;
                  fStack_74 = pVVar37[2].x;
                  fStack_75 = pVVar37[2].y;
                  fStack_76 = pVVar37[2].z;
                  fStack_77 = pVVar37[3].x;
                  fStack_78 = pVVar37[3].y;
                  fStack_79 = pVVar37[3].z;
                  fStack_80 = pVVar37[4].x;
                  fStack_81 = pVVar37[4].y;
                  fStack_82 = pVVar37[4].z;
                  fStack_83 = pVVar37[5].x;
                  uStack_84._0_4_ = pVVar37[5].y;
                  uStack_84._4_4_ = pVVar37[5].z;
                  fStack_85 = pVVar37[6].x;
                  pVVar37 = (Vector3 *)
                            func_?(&stack0xfffffbe4,verts,iVar13 + 3,
                                            MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__get_Item_int_
                                           );
                  VVar86 = *pVVar37;
                  fVar87 = pVVar37[1].x;
                  fStack_88 = pVVar37[1].y;
                  fStack_89 = pVVar37[1].z;
                  fStack_90 = pVVar37[2].x;
                  fStack_91 = pVVar37[2].y;
                  fStack_92 = pVVar37[2].z;
                  fStack_93 = pVVar37[3].x;
                  fStack_94 = pVVar37[3].y;
                  fStack_95 = pVVar37[3].z;
                  fStack_96 = pVVar37[4].x;
                  fStack_97 = pVVar37[4].y;
                  fStack_98 = pVVar37[4].z;
                  fStack_99 = pVVar37[5].x;
                  uStack_100._0_4_ = pVVar37[5].y;
                  uStack_100._4_4_ = pVVar37[5].z;
                  fStack_101 = pVVar37[6].x;
                  pVVar37 = (Vector3 *)func_?();
                  VVar102 = *pVVar37;
                  fVar103 = pVVar37[1].x;
                  fStack_104 = pVVar37[1].y;
                  fStack_105 = pVVar37[1].z;
                  fStack_106 = pVVar37[2].x;
                  fStack_107 = pVVar37[2].y;
                  fStack_108 = pVVar37[2].z;
                  fStack_109 = pVVar37[3].x;
                  fStack_110 = pVVar37[3].y;
                  fStack_111 = pVVar37[3].z;
                  fStack_112 = pVVar37[4].x;
                  fStack_113 = pVVar37[4].y;
                  fStack_114 = pVVar37[4].z;
                  fStack_115 = pVVar37[5].x;
                  uStack_116._0_4_ = pVVar37[5].y;
                  uStack_116._4_4_ = pVVar37[5].z;
                  fStack_117 = pVVar37[6].x;
                  pVVar37 = (Vector3 *)
                            func_?(&stack0xfffffbe4,verts,iVar13 + 5,
                                            MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__get_Item_int_
                                           );
                  a = *pVVar37;
                  fVar118 = pVVar37[1].x;
                  fStack_119 = pVVar37[1].y;
                  fStack_120 = pVVar37[1].z;
                  fStack_121 = pVVar37[2].x;
                  fStack_122 = pVVar37[2].y;
                  fStack_123 = pVVar37[2].z;
                  fStack_124 = pVVar37[3].x;
                  fStack_125 = pVVar37[3].y;
                  fStack_126 = pVVar37[3].z;
                  fStack_127 = pVVar37[4].x;
                  fStack_128 = pVVar37[4].y;
                  fStack_129 = pVVar37[4].z;
                  fStack_130 = pVVar37[5].x;
                  uStack_131._0_4_ = pVVar37[5].y;
                  uStack_131._4_4_ = pVVar37[5].z;
                  fStack_132 = pVVar37[6].x;
                  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000)
                       != 0) && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
                    func_?(TypeInfo__UnityEngine__Vector3);
                  }
                  pVVar37 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_right
                                      (&VStack_133,(MethodInfo *)0x0);
                  pVVar37 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                                      (&VStack_134,*pVVar37,
                                       (float)(int)pTStack_3 * (float)pIStack_6 - fStack_33,
                                       (MethodInfo *)0x0);
                  uStack_135._0_4_ = pVVar37->x;
                  uStack_135._4_4_ = pVVar37->y;
                  fVar136 = pVVar37->z;
                  pVVar37 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                                      (&VStack_137,VVar38,*pVVar37,(MethodInfo *)0x0);
                  VVar138 = *pVVar37;
                  VVar38.z = fVar136;
                  VVar38.x = (float)(undefined4)uStack_135;
                  VVar38.y = (float)uStack_135._4_4_;
                  pVVar37 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                                      (&VStack_139,VVar54,VVar38,(MethodInfo *)0x0);
                  VVar38 = *pVVar37;
                  VVar54.z = fVar136;
                  VVar54.x = (float)(undefined4)uStack_135;
                  VVar54.y = (float)uStack_135._4_4_;
                  pVVar37 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                                      (&VStack_140,VVar70,VVar54,(MethodInfo *)0x0);
                  VVar54 = *pVVar37;
                  VVar70.z = fVar136;
                  VVar70.x = (float)(undefined4)uStack_135;
                  VVar70.y = (float)uStack_135._4_4_;
                  pVVar37 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                                      (&VStack_141,VVar86,VVar70,(MethodInfo *)0x0);
                  VVar70 = *pVVar37;
                  VVar86.z = fVar136;
                  VVar86.x = (float)(undefined4)uStack_135;
                  VVar86.y = (float)uStack_135._4_4_;
                  pVVar37 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                                      (&VStack_142,VVar102,VVar86,(MethodInfo *)0x0);
                  VVar86 = *pVVar37;
                  VVar102.z = fVar136;
                  VVar102.x = (float)(undefined4)uStack_135;
                  VVar102.y = (float)uStack_135._4_4_;
                  pVVar37 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                                      (&VStack_18,a,VVar102,(MethodInfo *)0x0);
                  VVar102 = *pVVar37;
                  value.normal.x = fVar39;
                  value.position = VVar138;
                  value.normal.y = fStack_40;
                  value.normal.z = fStack_41;
                  value.tangent.x = fStack_42;
                  value.tangent.y = fStack_43;
                  value.tangent.z = fStack_44;
                  value.tangent.w = fStack_45;
                  value.color.rgba = (int32_t)fStack_46;
                  value.color._4_4_ = fStack_47;
                  value.uv0.x = fStack_48;
                  value.uv0.y = fStack_49;
                  value.uv1.x = fStack_50;
                  value.uv1.y = fStack_51;
                  value.uv2.x = (float)(undefined4)uStack_52;
                  value.uv2.y = (float)uStack_52._4_4_;
                  value.uv3.x = fStack_53;
                  value.uv3.y = (float)
                                MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__set_Item_int__UnityEngine__UIVertex_
                  ;
                  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
                  List_1_UnityEngine_UIVertex__set_Item(verts,iVar13,value,in_stack_143);
                  in_stack_143 = (MethodInfo *)&UNK_?;
                  value_00.normal.x = fVar55;
                  value_00.position = VVar38;
                  value_00.normal.y = fStack_56;
                  value_00.normal.z = fStack_57;
                  value_00.tangent.x = fStack_58;
                  value_00.tangent.y = fStack_59;
                  value_00.tangent.z = fStack_60;
                  value_00.tangent.w = fStack_61;
                  value_00.color.rgba = (int32_t)fStack_62;
                  value_00.color._4_4_ = fStack_63;
                  value_00.uv0.x = fStack_64;
                  value_00.uv0.y = fStack_65;
                  value_00.uv1.x = fStack_66;
                  value_00.uv1.y = fStack_67;
                  value_00.uv2.x = (float)(undefined4)uStack_68;
                  value_00.uv2.y = (float)uStack_68._4_4_;
                  value_00.uv3.x = fStack_69;
                  value_00.uv3.y =
                       (float)
                       MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__set_Item_int__UnityEngine__UIVertex_
                  ;
                  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
                  List_1_UnityEngine_UIVertex__set_Item(verts,iVar13 + 1,value_00,in_stack_144)
                  ;
                  in_stack_144 = (MethodInfo *)&UNK_?;
                  value_01.normal.x = fVar71;
                  value_01.position = VVar54;
                  value_01.normal.y = fStack_72;
                  value_01.normal.z = fStack_73;
                  value_01.tangent.x = fStack_74;
                  value_01.tangent.y = fStack_75;
                  value_01.tangent.z = fStack_76;
                  value_01.tangent.w = fStack_77;
                  value_01.color.rgba = (int32_t)fStack_78;
                  value_01.color._4_4_ = fStack_79;
                  value_01.uv0.x = fStack_80;
                  value_01.uv0.y = fStack_81;
                  value_01.uv1.x = fStack_82;
                  value_01.uv1.y = fStack_83;
                  value_01.uv2.x = (float)(undefined4)uStack_84;
                  value_01.uv2.y = (float)uStack_84._4_4_;
                  value_01.uv3.x = fStack_85;
                  value_01.uv3.y =
                       (float)
                       MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__set_Item_int__UnityEngine__UIVertex_
                  ;
                  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
                  List_1_UnityEngine_UIVertex__set_Item(verts,iVar13 + 2,value_01,in_stack_145)
                  ;
                  in_stack_145 = (MethodInfo *)&UNK_?;
                  value_02.normal.x = fVar87;
                  value_02.position = VVar70;
                  value_02.normal.y = fStack_88;
                  value_02.normal.z = fStack_89;
                  value_02.tangent.x = fStack_90;
                  value_02.tangent.y = fStack_91;
                  value_02.tangent.z = fStack_92;
                  value_02.tangent.w = fStack_93;
                  value_02.color.rgba = (int32_t)fStack_94;
                  value_02.color._4_4_ = fStack_95;
                  value_02.uv0.x = fStack_96;
                  value_02.uv0.y = fStack_97;
                  value_02.uv1.x = fStack_98;
                  value_02.uv1.y = fStack_99;
                  value_02.uv2.x = (float)(undefined4)uStack_100;
                  value_02.uv2.y = (float)uStack_100._4_4_;
                  value_02.uv3.x = fStack_101;
                  value_02.uv3.y =
                       (float)
                       MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__set_Item_int__UnityEngine__UIVertex_
                  ;
                  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
                  List_1_UnityEngine_UIVertex__set_Item(verts,iVar13 + 3,value_02,in_stack_146)
                  ;
                  in_stack_146 = (MethodInfo *)&UNK_?;
                  value_03.normal.x = fVar103;
                  value_03.position = VVar86;
                  value_03.normal.y = fStack_104;
                  value_03.normal.z = fStack_105;
                  value_03.tangent.x = fStack_106;
                  value_03.tangent.y = fStack_107;
                  value_03.tangent.z = fStack_108;
                  value_03.tangent.w = fStack_109;
                  value_03.color.rgba = (int32_t)fStack_110;
                  value_03.color._4_4_ = fStack_111;
                  value_03.uv0.x = fStack_112;
                  value_03.uv0.y = fStack_113;
                  value_03.uv1.x = fStack_114;
                  value_03.uv1.y = fStack_115;
                  value_03.uv2.x = (float)(undefined4)uStack_116;
                  value_03.uv2.y = (float)uStack_116._4_4_;
                  value_03.uv3.x = fStack_117;
                  value_03.uv3.y =
                       (float)
                       MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__set_Item_int__UnityEngine__UIVertex_
                  ;
                  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
                  List_1_UnityEngine_UIVertex__set_Item(verts,iVar13 + 4,value_03,in_stack_147)
                  ;
                  in_stack_147 = (MethodInfo *)&UNK_?;
                  value_04.normal.x = fVar118;
                  value_04.position = VVar102;
                  value_04.normal.y = fStack_119;
                  value_04.normal.z = fStack_120;
                  value_04.tangent.x = fStack_121;
                  value_04.tangent.y = fStack_122;
                  value_04.tangent.z = fStack_123;
                  value_04.tangent.w = fStack_124;
                  value_04.color.rgba = (int32_t)fStack_125;
                  value_04.color._4_4_ = fStack_126;
                  value_04.uv0.x = fStack_127;
                  value_04.uv0.y = fStack_128;
                  value_04.uv1.x = fStack_129;
                  value_04.uv1.y = fStack_130;
                  value_04.uv2.x = (float)(undefined4)uStack_131;
                  value_04.uv2.y = (float)uStack_131._4_4_;
                  value_04.uv3.x = fStack_132;
                  value_04.uv3.y =
                       (float)
                       MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__set_Item_int__UnityEngine__UIVertex_
                  ;
                  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
                  List_1_UnityEngine_UIVertex__set_Item(verts,iVar13 + 5,value_04,in_stack_148)
                  ;
                  pSVar4 = (String *)((int)&pSStack_5->klass + 1);
                  unaff_ESI = pIStack_7;
                  pSStack_5 = pSVar4;
code_?:
                  unaff_ESI = (IList_1_UnityEngine_UILineInfo___Class *)
                              ((int)&(unaff_ESI->_0).image + 1);
                  pTStack_3 = (Text *)((int)&pTStack_3->klass + 1);
                }
                else {
                  pOVar36 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft
                            ::Json::Serialization::JsonProperty]::
                            Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                      ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                       pTVar2,(MethodInfo *)0x0);
                  pTStack_3 = (Text *)((int)&pTStack_3[-1].fields.m_TempVerts + 3);
                  unaff_ESI = (IList_1_UnityEngine_UILineInfo___Class *)
                              ((undefined1 *)((int)&pOVar36[-1].monitor + 3) + (int)&unaff_ESI->_0);
                  pOVar36 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft
                            ::Json::Serialization::JsonProperty]::
                            Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                      ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                       pTVar2,(MethodInfo *)0x0);
                  pSVar4 = (String *)((int)&pOVar36->klass + (int)&pSVar4->klass);
                  pTVar2 = (Text *)0x0;
                  pSStack_5 = pSVar4;
                  if (pIStack_26 == (IEnumerator *)0x0) goto code_?;
                  cVar1 = func_?();
                  if (cVar1 == '\0') goto code_?;
                  uVar31 = func_?(0,TypeInfo__System__Collections__IEnumerator,pIStack_26);
                  pTVar2 = (Text *)func_?(uVar31,
                                                  TypeInfo__System__Text__RegularExpressions__Match)
                  ;
                  unaff_ESI = (IList_1_UnityEngine_UILineInfo___Class *)
                              ((int)&(unaff_ESI->_0).image + 1);
                  pTStack_3 = (Text *)((int)&pTStack_3->klass + 1);
                }
              }
              pSVar4 = (String *)((int)&pSVar4->klass + 1);
              pSStack_9 = (String *)((int)&pSStack_9->klass + 1);
              ppSStack_28 = ppSStack_28 + 1;
              pSStack_5 = pSVar4;
            }
            goto code_?;
          }
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  uVar31 = func_?();
  uVar149 = func_?(uVar31);
  piVar21 = (int *)((ulonglong)uVar149 >> 0x20);
  pcVar19 = (char *)uVar149;
  pbVar150 = &stack0xfffffbd8 + (int)unaff_ESI;
  bVar151 = *pbVar150;
  *pbVar150 = *pbVar150 + (byte)pTVar2;
  *(char *)&(unaff_ESI->_0).image =
       *(char *)&(unaff_ESI->_0).image + (char)((ulonglong)uVar149 >> 8) +
       CARRY1(bVar151,(byte)pTVar2);
  cVar1 = (char)uVar149;
  *pcVar19 = *pcVar19 + cVar1;
  *piVar21 = (int)(pcVar19 + *piVar21);
  *extraout_ECX = *extraout_ECX + cVar1;
  *piVar21 = *piVar21 + CONCAT31((int3)((ulonglong)uVar149 >> 8),cVar1 + *pcVar19);
  pcVar152 = (code *)swi(3);
  (*pcVar152)();
  return;
}


/* Void set_spacing(Single) */

void Assembly-CSharp.dll::UnityEngine::UI::LetterSpacing::LetterSpacing_set_spacing
               (LetterSpacing *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).m_spacing != value) {
    (this->fields).m_spacing = value;
    pGVar1 = UnityEngine.UI.dll::UnityEngine::UI::BaseMeshEffect::BaseMeshEffect_get_graphic
                       ((BaseMeshEffect *)this,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pGVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      pGVar1 = UnityEngine.UI.dll::UnityEngine::UI::BaseMeshEffect::BaseMeshEffect_get_graphic
                         ((BaseMeshEffect *)this,(MethodInfo *)0x0);
      if (pGVar1 == (Graphic *)0x0) {
        pIStack3 = (Il2CppMethodPointer)0x0;
        func_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pIStack3 = (pGVar1->klass->vtable).SetMaterialDirty.methodPtr;
      (*(code *)(pGVar1->klass->vtable).SetVerticesDirty.method)();
    }
  }
  return;
}

