
/* IEnumerator GetRegexMatchedTagCollection(String, Int32 ByRef) */

IEnumerator *
Assembly-CSharp.dll::UnityEngine::UI::LetterSpacing::LetterSpacing_GetRegexMatchedTagCollection
          (LetterSpacing *this,String *line,int32_t *lineLengthWithoutTags,MethodInfo *method)

{
  piStack_1 = lineLengthWithoutTags;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__IDisposable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerator);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Text__RegularExpressions__Match);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Text__RegularExpressions__Regex);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__b____b___i____i___size__Ptr_____s);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar2 = 0;
  pIStack_3 = (IEnumerator *)0x0;
  lStack_4 = 0;
  startat = 0;
  if (*(int *)&(TypeInfo__System__Text__RegularExpressions__Regex->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar5 = StringLiteral__b____b___i____i___size__Ptr_____s;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Text__RegularExpressions__Regex);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__Text__RegularExpressions__Regex->_1).field_0x1c == 0) {
    FUN_?();
  }
  matchTimeout._ticks =
       (TypeInfo__System__Text__RegularExpressions__Regex->static_fields->s_defaultMatchTimeout).
       _ticks;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Text__RegularExpressions__Regex);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Regex *)FUN_?(TypeInfo__System__Text__RegularExpressions__Regex);
  pSVar6 = (String *)0x0;
  System.dll::System::Text::RegularExpressions::Regex::Regex__ctor_3
            (this_00,pSVar5,RegexOptions__Enum_None,matchTimeout,1,(MethodInfo *)0x0);
  if (this_00 != (Regex *)0x0) {
    if (line == (String *)0x0) {
      uVar7 = func_?(&TypeInfo__System__ArgumentNullException);
      this_02 = (ArgumentNullException *)func_?(uVar7);
      pSVar5 = (String *)func_?(&StringLiteral_input);
      mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
                (this_02,pSVar5,(MethodInfo *)0x0);
      uVar7 = func_?(&
                                   MethodInfo__System__Text__RegularExpressions__Regex__Matches_System__String_
                                  );
      FUN_?(this_02,uVar7);
      pcVar8 = (code *)swi(3);
      pIVar9 = (IEnumerator *)(*pcVar8)();
      return pIVar9;
    }
    if (((this_00->fields).roptions & 0x40) != 0) {
      startat = (line->fields)._stringLength;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Text__RegularExpressions__MatchCollection);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    length = (line->fields)._stringLength;
    this_01 = (MatchCollection *)
              FUN_?(TypeInfo__System__Text__RegularExpressions__MatchCollection);
    pSVar6 = line;
    System.dll::System::Text::RegularExpressions::MatchCollection::MatchCollection__ctor
              (this_01,this_00,line,0,length,startat,(MethodInfo *)0x0);
    *lineLengthWithoutTags = 0;
    pMStack_10 = this_01;
    if (this_01 != (MatchCollection *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<System::Text::RegularExpressions::Match>__get_Count__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((this_01->fields)._done == 0) {
        pSVar6 = (String *)0x0;
        System.dll::System::Text::RegularExpressions::MatchCollection::MatchCollection_GetMatch
                  (this_01,0x7fffffff,(MethodInfo *)0x0);
      }
      pLVar11 = (this_01->fields)._matches;
      if (pLVar11 != (List_1_System_Text_RegularExpressions_Match_ *)0x0) {
        if ((pLVar11->fields)._size < 1) {
          iVar2 = (line->fields)._stringLength;
code_?:
          *lineLengthWithoutTags = iVar2;
          pIVar9 = System.dll::System::Text::RegularExpressions::MatchCollection::
                   MatchCollection_GetEnumerator(this_01,(MethodInfo *)0x0);
          return pIVar9;
        }
        pIStack_3 = System.dll::System::Text::RegularExpressions::MatchCollection::
                     MatchCollection_GetEnumerator(this_01,(MethodInfo *)0x0);
        uStack_12 = 0;
        ppIStack_13 = &pIStack_3;
        plStack_14 = &lStack_4;
        while (pIStack_3 != (IEnumerator *)0x0) {
          cVar15 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
          pIVar9 = pIStack_3;
          if (cVar15 == '\0') {
            lStack_4 = FUN_?(pIStack_3);
            if (lStack_4 != 0) {
              FUN_?(0,TypeInfo__System__IDisposable,lStack_4);
            }
            iVar2 = (line->fields)._stringLength - iVar2;
            goto code_?;
          }
          if (pIStack_3 == (IEnumerator *)0x0) goto code_?;
          pIVar16 = pIStack_3->klass;
          uVar17 = 0;
          uVar18._0_1_ = (pIVar16->_1).rank;
          uVar18._1_1_ = (pIVar16->_1).minimumAlignment;
          if (uVar18 != 0) {
            do {
              if (pIVar16->interfaceOffsets[uVar17].interfaceType ==
                  (Il2CppClass *)TypeInfo__System__Collections__IEnumerator) {
                pVVar19 = &(pIVar16->vtable).MoveNext + (pIVar16->interfaceOffsets[uVar17].offset + 1);
                goto code_?;
              }
              uVar17 = uVar17 + 1;
            } while (uVar17 < uVar18);
          }
          pVVar19 = (VirtualInvokeData *)
                   FUN_?(pIStack_3,TypeInfo__System__Collections__IEnumerator,1);
code_?:
          pSVar6 = (String *)(*pVVar19->methodPtr)(pIVar9,pVVar19->method);
          if (pSVar6 == (String *)0x0) goto code_?;
          bVar20 = (TypeInfo__System__Text__RegularExpressions__Match->_1).naturalAligment;
          if (((pSVar6->klass->_1).naturalAligment < bVar20) ||
             ((pSVar6->klass->_1).typeHierarchy[(ulonglong)bVar20 - 1] !=
              (Il2CppClass *)TypeInfo__System__Text__RegularExpressions__Match))
          goto code_?;
          iVar2 = iVar2 + *(int *)&(pSVar6->fields)._firstChar;
        }
        goto code_?;
      }
    }
  }
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?(pSVar6);
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar8 = (code *)swi(3);
  pIVar9 = (IEnumerator *)(*pcVar8)();
  return pIVar9;
}


/* Void ModifyMesh(VertexHelper) */

void Assembly-CSharp.dll::UnityEngine::UI::LetterSpacing::LetterSpacing_ModifyMesh
               (LetterSpacing *this,VertexHelper *vh,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::UIVertex>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  cVar1 = (*(this->klass->vtable).IsActive.methodPtr)(this,(this->klass->vtable).IsActive.method);
  if (cVar1 != '\0') {
    stream = (List_1_UnityEngine_UIVertex_ *)
             FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::UIVertex>);
    FUN_?(stream,
                  MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__List__);
    if (vh == (VertexHelper *)0x0) {
      FUN_?();
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
    FUN_?(&
                  UnityEngine__UI__Text_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::Text>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__ICollection<UnityEngine::UILineInfo>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerator);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__IList<UnityEngine::UILineInfo>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__set_Item_int__UnityEngine__UIVertex_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Text__RegularExpressions__Match);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_u000A);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_LetterSpacing__Missing_Text_comp);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  cVar1 = (*(this->klass->vtable).IsActive.methodPtr)(this,(this->klass->vtable).IsActive.method);
  if (cVar1 == '\0') {
    return;
  }
  this_00 = (Text *)UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                              ((Component *)this,
                               UnityEngine__UI__Text_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::Text>__
                              );
  if (this_00 == (Text *)0x0) goto DAT_?;
  pSVar2 = (String *)(*(this_00->klass->vtable).get_text.methodPtr)(this_00);
  this_01 = UnityEngine.UI.dll::UnityEngine::UI::Text::Text_get_cachedTextGenerator
                      (this_00,(MethodInfo *)0x0);
  if ((this_01 == (TextGenerator_1 *)0x0) ||
     (pIVar3 = UnityEngine.TextRenderingModule.dll::UnityEngine::TextGenerator::
                TextGenerator_1_get_lines(this_01,(MethodInfo *)0x0),
     pIVar3 == (IList_1_UnityEngine_UILineInfo_ *)0x0)) goto DAT_?;
  uVar4 = FUN_?(0,
                         TypeInfo__System__Collections__Generic__ICollection<UnityEngine::UILineInfo>
                         ,pIVar3);
  pIVar5 = (IEnumerator *)0x0;
  while (uVar4 = uVar4 - 1, 0 < (int)uVar4) {
    pIVar6 = pIVar3->klass;
    uVar7 = 0;
    uVar8._0_1_ = (pIVar6->_1).rank;
    uVar8._1_1_ = (pIVar6->_1).minimumAlignment;
    if (uVar8 != 0) {
      uVar9 = uVar7;
      do {
        if (pIVar6->interfaceOffsets[uVar9].interfaceType ==
            (Il2CppClass *)TypeInfo__System__Collections__Generic__IList<UnityEngine::UILineInfo>) {
          ppIVar10 = &(&(pIVar6->vtable).get_Item)[pIVar6->interfaceOffsets[uVar9].offset].
                      methodPtr;
          goto code_?;
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar8);
    }
    ppIVar10 = (Il2CppMethodPointer *)
               FUN_?(pIVar3,
                             TypeInfo__System__Collections__Generic__IList<UnityEngine::UILineInfo>,
                             0);
code_?:
    piVar11 = (int32_t *)(**ppIVar10)(&uStack_12,pIVar3,(ulonglong)uVar4);
    if (pSVar2 == (String *)0x0) goto DAT_?;
    pSVar2 = mscorlib.dll::System::String::String_Insert
                        (pSVar2,*piVar11,StringLiteral_u000A,(MethodInfo *)0x0);
    pIVar6 = pIVar3->klass;
    uVar9._0_1_ = (pIVar6->_1).rank;
    uVar9._1_1_ = (pIVar6->_1).minimumAlignment;
    if (uVar9 != 0) {
      do {
        if (pIVar6->interfaceOffsets[uVar7].interfaceType ==
            (Il2CppClass *)TypeInfo__System__Collections__Generic__IList<UnityEngine::UILineInfo>) {
          ppIVar10 = &(&(pIVar6->vtable).get_Item)[pIVar6->interfaceOffsets[uVar7].offset].
                      methodPtr;
          goto code_?;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar9);
    }
    ppIVar10 = (Il2CppMethodPointer *)
               FUN_?(pIVar3,
                             TypeInfo__System__Collections__Generic__IList<UnityEngine::UILineInfo>,
                             0);
code_?:
    piVar13 = (int *)(**ppIVar10)(&uStack_14,pIVar3,(ulonglong)uVar4);
    if (pSVar2 == (String *)0x0) goto DAT_?;
    pSVar2 = mscorlib.dll::System::String::String_Remove(pSVar2,*piVar13 + -1,1,(MethodInfo *)0x0)
    ;
  }
  if (pSVar2 == (String *)0x0) goto DAT_?;
  auStackX_20[0] = 10;
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__ReadOnlySpan_System__Char___int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  RStack_15._pointer._value = auStackX_20;
  RStack_15._length = 1;
  RStack_15._12_4_ = 0;
  pSVar16 = mscorlib.dll::System::String::String_SplitInternal
                      (pSVar2,&RStack_15,0x7fffffff,StringSplitOptions__Enum_None,
                       (MethodInfo *)0x0);
  pSStack_17 = pSVar16;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if ((void *)(this_00->fields)._._._._._._._ == (void *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
              ((Object *)StringLiteral_LetterSpacing__Missing_Text_comp,(MethodInfo *)0x0);
    return;
  }
  pFVar18 = (this_00->fields).m_FontData;
  if (pFVar18 == (FontData *)0x0) goto DAT_?;
  plVar19 = (longlong *)0x0;
  fStack_20 = 0.0;
  fVar21 = ((float)(pFVar18->fields).m_FontSize * (this->fields).m_spacing) / _UNK_?;
  plVar22 = plVar19;
  if ((this->fields).useRichText != 0) {
    plVar22 = (longlong *)(ulonglong)(pFVar18->fields).m_RichText;
  }
  uStack_23 = (uint)plVar22;
  fVar24 = 0.0;
  switch((pFVar18->fields).m_Alignment) {
  case 0:
  case 3:
  case 6:
    break;
  case 1:
  case 4:
  case 7:
    fVar24 = _UNK_?;
    break;
  case 2:
  case 5:
  case 8:
    fVar24 = _UNK_?;
    break;
  default:
    goto code_?;
  }
  fStack_20 = fVar24;
code_?:
  uStack_25 = 0;
  fStack_26 = fVar21;
  if (pSVar16 != (String__Array *)0x0) {
    ppSStack_27 = pSVar16->vector;
    plVar28 = plVar19;
    plVar29 = plVar19;
    do {
      fVar24 = fStack_20;
      if ((int)pSVar16->max_length <= (int)(uint)plVar19) {
        return;
      }
      if ((uint)pSVar16->max_length <= (uint)plVar19) {
code_?:
        FUN_?();
        pcVar30 = (code *)swi(3);
        (*pcVar30)();
        return;
      }
      pSStack_31 = *ppSStack_27;
      if (pSStack_31 == (String *)0x0) break;
      uStack_32 = (pSStack_31->fields)._stringLength;
      uVar4 = uStack_23;
      if ((uint)plVar22 != 0) {
        pIVar5 = LetterSpacing_GetRegexMatchedTagCollection
                            (this,pSStack_31,(int32_t *)&uStack_32,(MethodInfo *)0x0);
        plVar29 = (longlong *)0x0;
        if (pIVar5 == (IEnumerator *)0x0) break;
        cVar1 = FUN_?(0,TypeInfo__System__Collections__IEnumerator,pIVar5);
        uVar4 = uStack_23;
        if (cVar1 != '\0') {
          plVar29 = (longlong *)FUN_?(1,TypeInfo__System__Collections__IEnumerator,pIVar5);
          if (plVar29 == (longlong *)0x0) {
            plVar29 = (longlong *)0x0;
            uVar4 = uStack_23;
          }
          else {
            bVar33 = (TypeInfo__System__Text__RegularExpressions__Match->_1).naturalAligment;
            if ((*(byte *)(*plVar29 + 0x130) < bVar33) ||
               (uVar4 = (uint)plVar22,
               *(Match__Class **)(*(longlong *)(*plVar29 + 200) + -8 + (ulonglong)bVar33 * 8) !=
               TypeInfo__System__Text__RegularExpressions__Match)) {
              FUN_?(plVar29);
              pcVar30 = (code *)swi(3);
              (*pcVar30)();
              return;
            }
          }
        }
      }
      uStack_23 = uVar4;
      iVar34 = 0;
      fVar24 = (float)(int)(uStack_32 - 1) * fVar21 * fVar24;
      fStack_35 = fVar24;
      iVar36 = iVar34;
      while( true ) {
        iVar37 = (int)plVar28;
        if ((pSStack_31->fields)._stringLength <= iVar34) break;
        if ((((uint)plVar22 == 0) || (plVar29 == (longlong *)0x0)) || ((int)plVar29[2] != iVar34)) {
          iVar38 = iVar37 * 6;
          iStack_39 = iVar38 + 1;
          uVar4 = iVar37 * 6;
          iVar40 = iVar37 * 6;
          iStack_41 = iVar40 + 2;
          iVar42 = iVar37 * 6;
          iStack_43 = iVar42 + 3;
          iVar44 = iVar37 * 6;
          iStack_45 = iVar44 + 4;
          iStack_46 = iVar37 * 6;
          uStack_32 = iStack_46 + 5;
          if (verts == (List_1_UnityEngine_UIVertex_ *)0x0) goto DAT_?;
          if ((verts->fields)._size + -1 < (int)uStack_32) {
            return;
          }
          if ((uint)(verts->fields)._size <= uVar4) {
code_?:
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                      ((MethodInfo *)0x0);
            pcVar30 = (code *)swi(3);
            (*pcVar30)();
            return;
          }
          pUVar47 = (verts->fields)._items;
          if (pUVar47 == (UIVertex__Array *)0x0) goto DAT_?;
          if ((uint)pUVar47->max_length <= uVar4) goto code_?;
          lVar48 = (longlong)(int)uVar4;
          lVar49 = lVar48 * 0x6c;
          pVVar50 = &pUVar47->vector[0].position + lVar48 * 9;
          uStack_51._0_4_ = pVVar50->x;
          uStack_51._4_4_ = pVVar50->y;
          uStack_52 = *(undefined8 *)(&pVVar50->x + 2);
          uStack_53 = *(undefined4 *)((longlong)&pUVar47->vector[0].uv3 + lVar49 + 8);
          pVVar50 = &pUVar47->vector[0].normal + lVar48 * 9;
          uStack_54._0_4_ = pVVar50->y;
          uStack_54._4_4_ = pVVar50->z;
          uStack_55 = *(undefined8 *)(&pVVar50->y + 2);
          puVar56 = (undefined8 *)((longlong)&pUVar47->vector[0].tangent + lVar49 + 8);
          uStack_57 = *puVar56;
          uStack_58 = puVar56[1];
          puVar56 = (undefined8 *)((longlong)&pUVar47->vector[0].uv0 + lVar49);
          uStack_59 = *puVar56;
          uStack_60 = puVar56[1];
          puVar56 = (undefined8 *)((longlong)&pUVar47->vector[0].uv1 + lVar49);
          uStack_61 = *puVar56;
          uStack_62 = puVar56[1];
          puVar56 = (undefined8 *)((longlong)&pUVar47->vector[0].uv2 + lVar49);
          uStack_63 = *puVar56;
          uStack_64 = puVar56[1];
          uStack_65 = *(undefined8 *)((longlong)&pUVar47->vector[0].uv3 + lVar49);
          if ((uint)(verts->fields)._size <= iVar38 + 1U) goto code_?;
          if (pUVar47 == (UIVertex__Array *)0x0) goto DAT_?;
          if ((uint)pUVar47->max_length <= iVar38 + 1U) goto code_?;
          lVar48 = (longlong)iVar38 * 0x6c;
          puVar56 = (undefined8 *)((longlong)&pUVar47->vector[0].uv3 + lVar48 + 0xc);
          uStack_66 = *puVar56;
          uStack_67 = puVar56[1];
          uStack_68 = *(undefined4 *)((longlong)&pUVar47->vector[1].uv3 + lVar48 + 4);
          pVVar50 = &pUVar47->vector[1].normal + (longlong)iVar38 * 9;
          uStack_69._0_4_ = pVVar50->x;
          uStack_69._4_4_ = pVVar50->y;
          uStack_70 = *(undefined8 *)(&pVVar50->x + 2);
          puVar56 = (undefined8 *)((longlong)&pUVar47->vector[1].tangent + lVar48 + 4);
          uStack_71 = *puVar56;
          uStack_72 = puVar56[1];
          puVar56 = (undefined8 *)((longlong)&pUVar47->vector[1].color + lVar48 + 4);
          uStack_73 = *puVar56;
          uStack_74 = puVar56[1];
          puVar56 = (undefined8 *)((longlong)&pUVar47->vector[1].uv0 + lVar48 + 0xc);
          uStack_75 = *puVar56;
          uStack_76 = puVar56[1];
          puVar56 = (undefined8 *)((longlong)&pUVar47->vector[1].uv1 + lVar48 + 0xc);
          uStack_77 = *puVar56;
          uStack_78 = puVar56[1];
          uStack_79 = *(undefined8 *)((longlong)&pUVar47->vector[1].uv2 + lVar48 + 0xc);
          if ((uint)(verts->fields)._size <= iVar40 + 2U) goto code_?;
          if (pUVar47 == (UIVertex__Array *)0x0) goto DAT_?;
          if ((uint)pUVar47->max_length <= iVar40 + 2U) goto code_?;
          lVar48 = (longlong)iVar40 * 0x6c;
          puVar56 = (undefined8 *)((longlong)&pUVar47->vector[1].uv3 + lVar48 + 8);
          uStack_80 = *puVar56;
          uStack_81 = puVar56[1];
          uStack_82 = *(undefined4 *)((longlong)&pUVar47->vector[2].uv3 + lVar48);
          pfVar83 = &(&pUVar47->vector[2].position)[(longlong)iVar40 * 9].z;
          uStack_84 = *(undefined8 *)pfVar83;
          uStack_85 = *(undefined8 *)(pfVar83 + 2);
          puVar56 = (undefined8 *)((longlong)&pUVar47->vector[2].tangent + lVar48);
          uStack_86 = *puVar56;
          uStack_87 = puVar56[1];
          puVar56 = (undefined8 *)((longlong)&pUVar47->vector[2].color + lVar48);
          uStack_88 = *puVar56;
          uStack_89 = puVar56[1];
          puVar56 = (undefined8 *)((longlong)&pUVar47->vector[2].uv0 + lVar48 + 8);
          uStack_90 = *puVar56;
          uStack_91 = puVar56[1];
          puVar56 = (undefined8 *)((longlong)&pUVar47->vector[2].uv1 + lVar48 + 8);
          uStack_92 = *puVar56;
          uStack_93 = puVar56[1];
          uStack_94 = *(undefined8 *)((longlong)&pUVar47->vector[2].uv2 + lVar48 + 8);
          if ((uint)(verts->fields)._size <= iVar42 + 3U) goto code_?;
          if (pUVar47 == (UIVertex__Array *)0x0) goto DAT_?;
          if ((uint)pUVar47->max_length <= iVar42 + 3U) goto code_?;
          lVar48 = (longlong)iVar42;
          lVar49 = lVar48 * 0x6c;
          puVar56 = (undefined8 *)((longlong)&pUVar47->vector[2].uv3 + lVar49 + 4);
          uStack_95 = *puVar56;
          uStack_96 = puVar56[1];
          uStack_97 = *(undefined4 *)((longlong)&pUVar47->vector[3].uv2 + lVar49 + 0xc);
          pVVar50 = &pUVar47->vector[3].position + lVar48 * 9;
          uStack_98._0_4_ = pVVar50->y;
          uStack_98._4_4_ = pVVar50->z;
          uStack_99 = *(undefined8 *)(&pVVar50->y + 2);
          pfVar83 = &(&pUVar47->vector[3].normal)[lVar48 * 9].z;
          uStack_100 = *(undefined8 *)pfVar83;
          uStack_101 = *(undefined8 *)(pfVar83 + 2);
          puVar56 = (undefined8 *)((longlong)&pUVar47->vector[3].tangent + lVar49 + 0xc);
          uStack_102 = *puVar56;
          uStack_103 = puVar56[1];
          puVar56 = (undefined8 *)((longlong)&pUVar47->vector[3].uv0 + lVar49 + 4);
          uStack_104 = *puVar56;
          uStack_105 = puVar56[1];
          puVar56 = (undefined8 *)((longlong)&pUVar47->vector[3].uv1 + lVar49 + 4);
          uStack_106 = *puVar56;
          uStack_107 = puVar56[1];
          uStack_108 = *(undefined8 *)((longlong)&pUVar47->vector[3].uv2 + lVar49 + 4);
          if ((uint)(verts->fields)._size <= iVar44 + 4U) goto code_?;
          if (pUVar47 == (UIVertex__Array *)0x0) goto DAT_?;
          if ((uint)pUVar47->max_length <= iVar44 + 4U) goto code_?;
          lVar48 = (longlong)iVar44;
          lVar49 = lVar48 * 0x6c;
          puVar56 = (undefined8 *)((longlong)&pUVar47->vector[3].uv3 + lVar49);
          uStack_109 = *puVar56;
          uStack_110 = puVar56[1];
          uStack_111 = *(undefined4 *)((longlong)&pUVar47->vector[4].uv2 + lVar49 + 8);
          pVVar50 = &pUVar47->vector[4].position + lVar48 * 9;
          uStack_112._0_4_ = pVVar50->x;
          uStack_112._4_4_ = pVVar50->y;
          uStack_113 = *(undefined8 *)(&pVVar50->x + 2);
          pVVar50 = &pUVar47->vector[4].normal + lVar48 * 9;
          uStack_114._0_4_ = pVVar50->y;
          uStack_114._4_4_ = pVVar50->z;
          uStack_115 = *(undefined8 *)(&pVVar50->y + 2);
          puVar56 = (undefined8 *)((longlong)&pUVar47->vector[4].tangent + lVar49 + 8);
          uStack_116 = *puVar56;
          uStack_117 = puVar56[1];
          puVar56 = (undefined8 *)((longlong)&pUVar47->vector[4].uv0 + lVar49);
          uStack_14 = *puVar56;
          uStack_118 = puVar56[1];
          puVar56 = (undefined8 *)((longlong)&pUVar47->vector[4].uv1 + lVar49);
          uStack_12 = *puVar56;
          uStack_119 = puVar56[1];
          uStack_120 = *(undefined8 *)((longlong)&pUVar47->vector[4].uv2 + lVar49);
          if ((uint)(verts->fields)._size <= uStack_32) goto code_?;
          if (pUVar47 == (UIVertex__Array *)0x0) goto DAT_?;
          lVar48 = (longlong)iStack_46;
          if ((uint)pUVar47->max_length <= iStack_46 + 5U) goto code_?;
          lVar49 = lVar48 * 0x6c;
          puVar56 = (undefined8 *)((longlong)&pUVar47->vector[4].uv2 + lVar49 + 0xc);
          uStack_121 = *puVar56;
          uStack_122 = puVar56[1];
          iStack_46 = *(int *)((longlong)&pUVar47->vector[5].uv2 + lVar49 + 4);
          puVar56 = (undefined8 *)((longlong)&pUVar47->vector[4].uv3 + lVar49 + 0xc);
          uVar123 = *puVar56;
          uVar124 = puVar56[1];
          pVVar50 = &pUVar47->vector[5].normal + lVar48 * 9;
          uVar125._0_4_ = pVVar50->x;
          uVar125._4_4_ = pVVar50->y;
          uVar126 = *(undefined8 *)(&pVVar50->x + 2);
          puVar56 = (undefined8 *)((longlong)&pUVar47->vector[5].tangent + lVar49 + 4);
          uVar127 = *puVar56;
          uVar128 = puVar56[1];
          puVar56 = (undefined8 *)((longlong)&pUVar47->vector[5].color + lVar49 + 4);
          uVar129 = *puVar56;
          uVar130 = puVar56[1];
          puVar56 = (undefined8 *)((longlong)&pUVar47->vector[5].uv0 + lVar49 + 0xc);
          uVar131 = *puVar56;
          uVar132 = puVar56[1];
          uStack_133 = *(undefined8 *)((longlong)&pUVar47->vector[5].uv1 + lVar49 + 0xc);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Vector3);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pVVar134 = TypeInfo__UnityEngine__Vector3->static_fields;
          uVar135 = (pVVar134->rightVector).y;
          uVar136 = (pVVar134->rightVector).x;
          fVar24 = (float)iVar36 * fVar21 - fVar24;
          fVar137 = (float)uVar136 * fVar24;
          fVar138 = (float)uVar135 * fVar24;
          fVar24 = (pVVar134->rightVector).z * fVar24;
          fStack_139 = (float)uStack_51 + fVar137;
          fStack_140 = uStack_51._4_4_ + fVar138;
          fStack_141 = (float)uStack_52 + fVar24;
          fVar142 = (float)uStack_66 + fVar137;
          fVar21 = uStack_66._4_4_ + fVar138;
          fVar143 = (float)uStack_80 + fVar137;
          fVar144 = uStack_80._4_4_ + fVar138;
          fVar145 = (float)uStack_95 + fVar137;
          fVar146 = uStack_95._4_4_ + fVar138;
          fVar147 = fVar137 + (float)uStack_109;
          fVar148 = fVar138 + uStack_109._4_4_;
          fVar137 = fVar137 + (float)uStack_121;
          fVar138 = fVar138 + uStack_121._4_4_;
          uStack_149 = uStack_54;
          uStack_150 = uStack_55;
          uStack_151 = uStack_53;
          uStack_51 = CONCAT44(fStack_140,fStack_139);
          uStack_52 = CONCAT44(uStack_52._4_4_,fStack_141);
          uStack_152 = uStack_52._4_4_;
          uStack_153 = uStack_59;
          uStack_154 = uStack_60;
          uStack_155 = uStack_57;
          uStack_156 = uStack_58;
          uStack_157 = uStack_61;
          uStack_158 = uStack_62;
          uStack_159 = uStack_65;
          uStack_160 = uStack_63;
          uStack_161 = uStack_64;
          uStack_67._0_4_ = (float)uStack_67 + fVar24;
          uStack_81._0_4_ = (float)uStack_81 + fVar24;
          uStack_96._0_4_ = (float)uStack_96 + fVar24;
          uStack_110._0_4_ = fVar24 + (float)uStack_110;
          uStack_122._0_4_ = fVar24 + (float)uStack_122;
          FUN_?(verts,uVar4,&fStack_139);
          uStack_66 = CONCAT44(fVar21,fVar142);
          fStack_162 = (float)uStack_67;
          uStack_163 = uStack_67._4_4_;
          uStack_164 = uStack_68;
          uStack_165 = uStack_69;
          uStack_166 = uStack_70;
          uStack_167 = uStack_71;
          uStack_168 = uStack_72;
          uStack_169 = uStack_73;
          uStack_170 = uStack_74;
          uStack_171 = uStack_75;
          uStack_172 = uStack_76;
          uStack_173 = uStack_79;
          uStack_174 = uStack_77;
          uStack_175 = uStack_78;
          fStack_176 = fVar142;
          fStack_177 = fVar21;
          FUN_?(verts,iStack_39,&fStack_176);
          uStack_80 = CONCAT44(fVar144,fVar143);
          fStack_178 = (float)uStack_81;
          uStack_179 = uStack_81._4_4_;
          uStack_180 = uStack_82;
          uStack_181 = uStack_84;
          uStack_182 = uStack_85;
          uStack_183 = uStack_86;
          uStack_184 = uStack_87;
          uStack_185 = uStack_88;
          uStack_186 = uStack_89;
          uStack_187 = uStack_90;
          uStack_188 = uStack_91;
          uStack_189 = uStack_94;
          uStack_190 = uStack_92;
          uStack_191 = uStack_93;
          fStack_192 = fVar143;
          fStack_193 = fVar144;
          FUN_?(verts,iStack_41,&fStack_192);
          uStack_95 = CONCAT44(fVar146,fVar145);
          fStack_194 = (float)uStack_96;
          uStack_195 = uStack_96._4_4_;
          uStack_196 = uStack_98;
          uStack_197 = uStack_99;
          uStack_198 = uStack_100;
          uStack_199 = uStack_101;
          uStack_200 = uStack_102;
          uStack_201 = uStack_103;
          uStack_202 = uStack_104;
          uStack_203 = uStack_105;
          uStack_204 = uStack_108;
          uStack_205 = uStack_106;
          uStack_206 = uStack_107;
          uStack_207 = uStack_97;
          fStack_208 = fVar145;
          fStack_209 = fVar146;
          FUN_?(verts,iStack_43,&fStack_208);
          uStack_109 = CONCAT44(fVar148,fVar147);
          fStack_210 = (float)uStack_110;
          uStack_211 = uStack_110._4_4_;
          uStack_212 = uStack_111;
          uStack_213 = uStack_112;
          uStack_214 = uStack_113;
          uStack_215 = uStack_114;
          uStack_216 = uStack_115;
          uStack_217 = uStack_116;
          uStack_218 = uStack_117;
          uStack_219 = uStack_14;
          uStack_220 = uStack_118;
          uStack_221 = uStack_120;
          uStack_222 = uStack_12;
          uStack_223 = uStack_119;
          fStack_224 = fVar147;
          fStack_225 = fVar148;
          FUN_?(verts,iStack_45,&fStack_224);
          uStack_121 = CONCAT44(fVar138,fVar137);
          fStack_226 = (float)uStack_122;
          uStack_227 = uStack_122._4_4_;
          uStack_228 = uStack_133;
          iStack_229 = iStack_46;
          fStack_230 = fVar137;
          fStack_231 = fVar138;
          uStack_232 = uVar123;
          uStack_233 = uVar124;
          uStack_234 = uVar125;
          uStack_235 = uVar126;
          uStack_236 = uVar127;
          uStack_237 = uVar128;
          uStack_238 = uVar129;
          uStack_239 = uVar130;
          uStack_240 = uVar131;
          uStack_241 = uVar132;
          FUN_?(verts,uStack_32,&fStack_230);
          plVar28 = (longlong *)(ulonglong)(iVar37 + 1);
          plVar22 = (longlong *)(ulonglong)uStack_23;
          iVar37 = iVar36;
          fVar24 = fStack_35;
          fVar21 = fStack_26;
code_?:
          iVar34 = iVar34 + 1;
          iVar36 = iVar37 + 1;
        }
        else {
          plVar28 = (longlong *)(ulonglong)(uint)(iVar37 + *(int *)((longlong)plVar29 + 0x14));
          iVar34 = iVar34 + -1 + *(int *)((longlong)plVar29 + 0x14);
          if (pIVar5 == (IEnumerator *)0x0) goto DAT_?;
          cVar1 = FUN_?(0,TypeInfo__System__Collections__IEnumerator,pIVar5);
          plVar29 = (longlong *)0x0;
          iVar37 = iVar36 + -1;
          if (cVar1 == '\0') goto code_?;
          plVar29 = (longlong *)FUN_?(1,TypeInfo__System__Collections__IEnumerator,pIVar5);
          if (plVar29 == (longlong *)0x0) {
            iVar34 = iVar34 + 1;
          }
          else {
            bVar33 = (TypeInfo__System__Text__RegularExpressions__Match->_1).naturalAligment;
            if ((*(byte *)(*plVar29 + 0x130) < bVar33) ||
               (*(Match__Class **)(*(longlong *)(*plVar29 + 200) + -8 + (ulonglong)bVar33 * 8) !=
                TypeInfo__System__Text__RegularExpressions__Match)) {
              FUN_?(plVar29);
              pcVar30 = (code *)swi(3);
              (*pcVar30)();
              return;
            }
            iVar34 = iVar34 + 1;
            uStack_23 = (uint)plVar22;
          }
        }
      }
      plVar28 = (longlong *)(ulonglong)(iVar37 + 1);
      uStack_25 = uStack_25 + 1;
      plVar19 = (longlong *)(ulonglong)uStack_25;
      ppSStack_27 = ppSStack_27 + 1;
      pSVar16 = pSStack_17;
    } while( true );
  }
DAT_?:
  FUN_?();
  pcVar30 = (code *)swi(3);
  (*pcVar30)();
  return;
}


/* Void set_spacing(Single) */

void Assembly-CSharp.dll::UnityEngine::UI::LetterSpacing::LetterSpacing_set_spacing
               (LetterSpacing *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).m_spacing != value) {
    (this->fields).m_spacing = value;
    pGVar1 = UnityEngine.UI.dll::UnityEngine::UI::BaseMeshEffect::BaseMeshEffect_get_graphic
                       ((BaseMeshEffect *)this,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (pGVar1 != (Graphic *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if ((pGVar1->fields)._._._._._.m_CachedPtr != (void *)0x0) {
        pGVar1 = UnityEngine.UI.dll::UnityEngine::UI::BaseMeshEffect::BaseMeshEffect_get_graphic
                           ((BaseMeshEffect *)this,(MethodInfo *)0x0);
        if (pGVar1 == (Graphic *)0x0) {
          FUN_?();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        (*(pGVar1->klass->vtable).SetVerticesDirty.methodPtr)
                  (pGVar1,(pGVar1->klass->vtable).SetVerticesDirty.method);
      }
    }
  }
  return;
}

