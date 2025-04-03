
/* String GetNewLine(String, Encoding) */

String * Assembly-CSharp.dll::GNU::Gettext::CatalogParser::CatalogParser_GetNewLine
                   (String *text,Encoding *encoding,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffcc;
  puVar5 = &stack0xffffffcc;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Char);
    func_?(&TypeInfo__System__Char);
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__IO__StringReader);
    func_?(&StringLiteral_u000A);
    func_?(&StringLiteral_u000Du000A);
    func_?(&StringLiteral_u000D);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  uStack_6 = 0x78;
  iVar7 = func_?(TypeInfo__System__Char,1);
  if (iVar7 != 0) {
    if (*(int *)(iVar7 + 0xc) != 0) {
      *(undefined2 *)(iVar7 + 0x10) = 0x78;
      this = (StringReader *)func_?(TypeInfo__System__IO__StringReader);
      mscorlib.dll::System::IO::StringReader::StringReader__ctor(this,text,(MethodInfo *)0x0);
      uStack_1 = 1;
      do {
        while( true ) {
          if (this == (StringReader *)0x0) goto code_?;
          iVar8 = (*(code *)(this->klass->vtable).Read_1.method)
                            (this,iVar7,0,1,(this->klass->vtable).ReadToEnd.methodPtr);
          if (iVar8 == 0) {
            uStack_1 = 0xffffffff;
            if (this != (StringReader *)0x0) {
              func_?(0,TypeInfo__System__IDisposable,this);
            }
            uStack_1 = 0xffffffff;
            if (uStack_6._0_2_ != 0x78) {
              if ((TypeInfo__System__Char->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__System__Char);
              }
              pSVar9 = mscorlib.dll::System::Char::Char_ToString
                                 ((Char *)&uStack_6,(MethodInfo *)0x0);
              *unaff_FS_OFFSET = uStack_3;
              return pSVar9;
            }
            pSVar9 = mscorlib.dll::System::Environment::Environment_get_NewLine((MethodInfo *)0x0);
            *unaff_FS_OFFSET = uStack_3;
            return pSVar9;
          }
          if (*(int *)(iVar7 + 0xc) == 0) goto code_?;
          if (*(short *)(iVar7 + 0x10) == 10) {
            pSVar9 = StringLiteral_u000A;
            if (uStack_6._0_2_ == 0xd) {
              pSVar9 = StringLiteral_u000Du000A;
            }
            goto code_?;
          }
          if (*(short *)(iVar7 + 0x10) != 0xd) break;
          if (uStack_6._0_2_ == 0x78) {
            uStack_6 = 0xd;
          }
          else {
            pSVar9 = StringLiteral_u000D;
            if (uStack_6._0_2_ == 0xd) {
code_?:
              uStack_1 = 0xffffffff;
              if (this != (StringReader *)0x0) {
                func_?(0,TypeInfo__System__IDisposable,this);
              }
              *unaff_FS_OFFSET = uStack_3;
              return pSVar9;
            }
          }
        }
      } while (uStack_6._0_2_ == 0x78);
      if ((TypeInfo__System__Char->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Char);
      }
      pSVar9 = mscorlib.dll::System::Char::Char_ToString((Char *)&uStack_6,(MethodInfo *)0x0);
      goto code_?;
    }
    func_?();
code_?:
    func_?();
  }
code_?:
  uVar10 = func_?();
  func_?(uVar10);
  pcVar11 = (code *)swi(3);
  pSVar9 = (String *)(*pcVar11)();
  return pSVar9;
}


/* Boolean Parse(String) */

bool Assembly-CSharp.dll::GNU::Gettext::CatalogParser::CatalogParser_Parse
               (CatalogParser *this,String *text,MethodInfo *method)

{
  pMVar1 = (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GNU__Gettext__CatalogParser);
    func_?(&TypeInfo__System__Char);
    func_?(&TypeInfo__System__Console);
    func_?(&TypeInfo__System__IDisposable);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<System::String>__Clear__);
    func_?(&MethodInfo__System__Collections__Generic__List<System::String>__ToArray__);
    func_?(&MethodInfo__System__Collections__Generic__List<System::String>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<System::String>);
    func_?(&TypeInfo__System__IO__Path);
    func_?(&TypeInfo__System__Text__StringBuilder);
    func_?(&TypeInfo__System__IO__StringReader);
    func_?(&TypeInfo__System__String);
    func_?(&StringLiteral_u000A);
    func_?(&::StringLiteral___);
    func_?(&StringLiteral_Broken_catalog_file__plural_form);
    func_?(&StringLiteral_msgid__);
    func_?(&StringLiteral_msgstr__);
    func_?(&StringLiteral_msgid_plural__);
    func_?(&::StringLiteral____);
    func_?(&::StringLiteral____);
    func_?(&StringLiteral_msgctxtu0009_);
    func_?(&::StringLiteral___);
    func_?(&StringLiteral_msgstru0009_);
    func_?(&::StringLiteral___);
    func_?(&::StringLiteral____);
    func_?(&StringLiteral_msgid_pluralu0009_);
    func_?(&::StringLiteral____);
    func_?(&StringLiteral_msgidu0009_);
    func_?(&StringLiteral_u0009_);
    func_?(&StringLiteral_msgctxt__);
    func_?(&StringLiteral_Broken_catalog_file__singular_fo);
    func_?(&::StringLiteral__);
    func_?(&::StringLiteral__);
    func_?(&StringLiteral_msgstr_);
    func_?(&::StringLiteral___);
    cRam_? = '\x01';
  }
  pMVar2 = (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0;
  pSVar3 = TypeInfo__System__String->static_fields->Empty;
  this_00 = (LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
            func_?(TypeInfo__System__Collections__Generic__List<System::String>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            (this_00,MethodInfo__System__Collections__Generic__List<System::String>__List__);
  this_01 = (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)
            func_?(TypeInfo__System__Collections__Generic__List<System::String>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_01,
             MethodInfo__System__Collections__Generic__List<System::String>__List__);
  pMVar4 = (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)
           func_?(TypeInfo__System__Collections__Generic__List<System::String>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pMVar4,
             MethodInfo__System__Collections__Generic__List<System::String>__List__);
  cVar5 = '\0';
  pMVar6 = (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0;
  pMVar7 = (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)
           func_?(TypeInfo__System__IO__StringReader);
  mscorlib.dll::System::IO::StringReader::StringReader__ctor
            ((StringReader *)pMVar7,text,(MethodInfo *)0x0);
  do {
    if (pMVar7 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
    goto code_?;
    pMVar8 = (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)
             (*(code *)((Il2CppClass_0 *)&pMVar7->klass)->image[6].codeGenModule)();
    bVar9 = mscorlib.dll::System::String::String_op_Equality
                      ((String *)pMVar8,::StringLiteral__,(MethodInfo *)0x0);
  } while (bVar9 != 0);
  if (pMVar8 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0) {
code_?:
    if (pMVar7 != (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0) {
      func_?();
    }
    *unaff_FS_OFFSET = pMVar1;
    return 0;
  }
code_?:
  pMVar10 = pMVar2;
  if (pMVar8 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0) {
    if (pMVar7 != (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0) {
      func_?();
    }
    *unaff_FS_OFFSET = pMVar1;
    return 1;
  }
  while ((bVar9 = mscorlib.dll::System::String::String_op_Equality
                            ((String *)pMVar8,::StringLiteral___,(MethodInfo *)0x0), bVar9 != 0 ||
         (bVar9 = mscorlib.dll::System::String::String_op_Equality
                            ((String *)pMVar8,::StringLiteral___,(MethodInfo *)0x0), bVar9 != 0))) {
    if (pMVar7 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
    goto code_?;
    pMVar8 = (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)func_?();
  }
  pMVar2 = pMVar8;
  if ((TypeInfo__GNU__Gettext__CatalogParser->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar9 = CatalogParser_ReadParam
                    ((String *)pMVar8,::StringLiteral____,(String **)&stack0xffffffe0,
                     (MethodInfo *)0x0);
  if (bVar9 != 0) {
    if (pMVar7 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
    goto code_?;
    this_01 = (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0xd;
    pMVar4 = (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)&UNK_?;
    pMVar2 = (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)func_?();
  }
  pMVar8 = pMVar2;
  if ((TypeInfo__GNU__Gettext__CatalogParser->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar9 = CatalogParser_ReadParam
                    ((String *)pMVar2,::StringLiteral____,(String **)&stack0xffffffe0,
                     (MethodInfo *)0x0);
  pMVar2 = pMVar10;
  if (bVar9 != 0) {
code_?:
    if ((this_01 != (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0) &&
       (mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Add
                  ((List_1_System_Object_ *)this_01,(Object *)pMVar2,
                   MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                  ), pMVar7 != (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0))
    goto code_?;
code_?:
    func_?();
code_?:
    func_?();
code_?:
    func_?();
    pcVar11 = (code *)swi(3);
    bVar9 = (*pcVar11)();
    return bVar9;
  }
  pMVar12 = pMVar8;
  if ((TypeInfo__GNU__Gettext__CatalogParser->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar9 = CatalogParser_ReadParam
                    ((String *)pMVar8,::StringLiteral___,(String **)&stack0xffffffe0,
                     (MethodInfo *)0x0);
  pMVar2 = pMVar10;
  if (bVar9 != 0) goto code_?;
  pMVar2 = pMVar12;
  if ((TypeInfo__GNU__Gettext__CatalogParser->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar9 = CatalogParser_ReadParam
                    ((String *)pMVar12,::StringLiteral____,(String **)&stack0xffffffe0,
                     (MethodInfo *)0x0);
  if (bVar9 != 0) {
    if (pMVar10 != (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0) {
      while( true ) {
        pMVar2 = (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)
                  mscorlib.dll::System::String::String_Trim((String *)pMVar10,(MethodInfo *)0x0);
        bVar9 = mscorlib.dll::System::String::String_op_Inequality
                          ((String *)pMVar2,TypeInfo__System__String->static_fields->Empty,
                           (MethodInfo *)0x0);
        if (bVar9 == 0) break;
        pMVar4 = (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0;
        while( true ) {
          if (pMVar2 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
          goto code_?;
          if (((int)pMVar2->bounds <= (int)pMVar4) ||
             (uVar13 = mscorlib.dll::System::String::String_get_Chars
                                ((String *)pMVar2,(int32_t)pMVar4,(MethodInfo *)0x0), uVar13 == 0x3a
             )) break;
          pMVar4 = (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)
                   ((int)&((Il2CppClass_0 *)&pMVar4->klass)->image + 1);
        }
        while( true ) {
          if (pMVar2 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
          goto code_?;
          if ((int)pMVar2->bounds <= (int)pMVar4) break;
          uVar13 = mscorlib.dll::System::String::String_get_Chars
                            ((String *)pMVar2,(int32_t)pMVar4,(MethodInfo *)0x0);
          if ((TypeInfo__System__Char->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          bVar9 = mscorlib.dll::System::Char::Char_IsWhiteSpace(uVar13,(MethodInfo *)0x0);
          if (bVar9 != 0) break;
          pMVar4 = (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)
                   ((int)&((Il2CppClass_0 *)&pMVar4->klass)->image + 1);
        }
        if (pMVar2 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
        goto code_?;
        this_02 = (List_1_System_Object_ *)0x0;
        pSVar14 = mscorlib.dll::System::String::String_Substring_1
                           ((String *)pMVar2,0,(int32_t)pMVar4,(MethodInfo *)0x0);
        if ((TypeInfo__System__IO__Path->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        if (TypeInfo__System__IO__Path->static_fields->DirectorySeparatorChar == 0x5c) {
          if ((TypeInfo__System__IO__Path->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          if (pSVar14 == (String *)0x0) goto code_?;
          this_02 = (List_1_System_Object_ *)0x0;
          pSVar14 = mscorlib.dll::System::String::String_Replace
                             (pSVar14,0x2f,
                              TypeInfo__System__IO__Path->static_fields->DirectorySeparatorChar,
                              (MethodInfo *)0x0);
        }
        if ((this_02 == (List_1_System_Object_ *)0x0) ||
           (mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Add
                      (this_02,(Object *)pSVar14,
                       MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                      ), pMVar2 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
           ) goto code_?;
        this_01 = (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0;
        pMVar10 = (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)
                  mscorlib.dll::System::String::String_Substring
                            ((String *)pMVar2,(int32_t)pMVar4,(MethodInfo *)0x0);
        if (pMVar10 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
        goto code_?;
      }
      if (pMVar7 != (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0) {
        pMVar8 = (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)func_?();
        cVar5 = (char)((uint)pMVar6 >> 0x18);
        goto code_?;
      }
    }
    goto code_?;
  }
  pSVar14 = pSVar3;
  pMVar12 = pMVar2;
  if ((TypeInfo__GNU__Gettext__CatalogParser->_1).cctor_finished_or_no_cctor == 0) {
    this_01 = (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)&UNK_?;
    func_?();
    pSVar14 = pSVar3;
  }
  bVar9 = CatalogParser_ReadParam
                    ((String *)pMVar2,StringLiteral_msgctxt__,(String **)&stack0xffffffe0,
                     (MethodInfo *)0x0);
  pSVar3 = pSVar14;
  pMVar2 = pMVar10;
  pMVar8 = pMVar12;
  if (bVar9 != 0) {
code_?:
    CatalogParser_ParseMessage
              (this,(String **)&stack0xffffffe4,(String **)&stack0xffffffe0,(StringReader *)pMVar7,
               (MethodInfo *)0x0);
    goto code_?;
  }
  if ((TypeInfo__GNU__Gettext__CatalogParser->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__GNU__Gettext__CatalogParser);
  }
  bVar9 = CatalogParser_ReadParam
                    ((String *)pMVar12,StringLiteral_msgctxtu0009_,(String **)&stack0xffffffe0,
                     (MethodInfo *)0x0);
  pSVar3 = pSVar14;
  pMVar2 = pMVar10;
  if (bVar9 != 0) goto code_?;
  pMVar12 = pMVar8;
  if ((TypeInfo__GNU__Gettext__CatalogParser->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__GNU__Gettext__CatalogParser);
  }
  bVar9 = CatalogParser_ReadParam
                    ((String *)pMVar8,StringLiteral_msgid__,(String **)&stack0xffffffe0,
                     (MethodInfo *)0x0);
  pSVar3 = pSVar14;
  pMVar2 = pMVar10;
  pMVar8 = pMVar12;
  if (bVar9 != 0) {
code_?:
    CatalogParser_ParseMessage
              (this,(String **)&stack0xffffffe4,(String **)&stack0xffffffe0,(StringReader *)pMVar7,
               (MethodInfo *)0x0);
    goto code_?;
  }
  if ((TypeInfo__GNU__Gettext__CatalogParser->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__GNU__Gettext__CatalogParser);
  }
  bVar9 = CatalogParser_ReadParam
                    ((String *)pMVar12,StringLiteral_msgidu0009_,(String **)&stack0xffffffe0,
                     (MethodInfo *)0x0);
  pSVar3 = pSVar14;
  pMVar2 = pMVar10;
  if (bVar9 != 0) goto code_?;
  pMVar12 = pMVar8;
  if ((TypeInfo__GNU__Gettext__CatalogParser->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar9 = CatalogParser_ReadParam
                    ((String *)pMVar8,StringLiteral_msgid_plural__,(String **)&stack0xffffffe0,
                     (MethodInfo *)0x0);
  pSVar3 = pSVar14;
  pMVar2 = pMVar10;
  pMVar8 = pMVar12;
  if (bVar9 != 0) {
code_?:
    CatalogParser_ParseMessage
              (this,(String **)&stack0xffffffe4,(String **)&stack0xffffffe0,(StringReader *)pMVar7,
               (MethodInfo *)0x0);
    cVar5 = '\x01';
    pMVar6 = (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x1000000;
    goto code_?;
  }
  if ((TypeInfo__GNU__Gettext__CatalogParser->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar9 = CatalogParser_ReadParam
                    ((String *)pMVar12,StringLiteral_msgid_pluralu0009_,(String **)&stack0xffffffe0,
                     (MethodInfo *)0x0);
  pSVar3 = pSVar14;
  pMVar2 = pMVar10;
  if (bVar9 != 0) goto code_?;
  pMVar2 = pMVar8;
  if ((TypeInfo__GNU__Gettext__CatalogParser->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar9 = CatalogParser_ReadParam
                    ((String *)pMVar8,StringLiteral_msgstr__,(String **)&stack0xffffffe0,
                     (MethodInfo *)0x0);
  if (bVar9 != 0) {
code_?:
    if (cVar5 != '\0') {
      pSVar3 = StringLiteral_Broken_catalog_file__singular_fo;
      if ((TypeInfo__System__Console->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
        pSVar3 = StringLiteral_Broken_catalog_file__singular_fo;
      }
      goto code_?;
    }
    pSVar3 = CatalogParser_ParseMessage
                        (this,(String **)&stack0xffffffe4,(String **)&stack0xffffffe0,
                         (StringReader *)pMVar7,(MethodInfo *)0x0);
    if (pMVar4 != (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0) {
      pLVar15 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                *)&UNK_?;
      this_03 = MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_;
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                ((List_1_System_Object_ *)pMVar4,(Object *)pSVar3,
                 MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                );
      pMVar8 = (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)&UNK_?;
      pMVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal
                ::MultiColumnCollectionHeader+ViewState+ColumnState]::
                List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__ToArray
                          ((List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                            *)pMVar4,
                           MethodInfo__System__Collections__Generic__List<System::String>__ToArray__
                          );
      if ((pLVar15 != (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                      *)0x0) &&
         (mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
          MultiColumnCollectionHeader+ViewState+ColumnState]::
          List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__ToArray
                    (pLVar15,
                     MethodInfo__System__Collections__Generic__List<System::String>__ToArray__),
         this_03 != (MethodInfo *)0x0)) {
        pMVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                  Internal::MultiColumnCollectionHeader+ViewState+ColumnState]::
                  List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__ToArray
                            ((List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                              *)this_03,
                             MethodInfo__System__Collections__Generic__List<System::String>__ToArray__
                            );
        pMVar7 = (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0;
        pMVar4 = (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x4;
        this_01 = (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)this;
        cVar5 = func_?();
        if (cVar5 != '\0') {
          pMVar6 = (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0;
          pSVar3 = TypeInfo__System__String->static_fields->Empty;
          func_?();
          goto code_?;
        }
        goto code_?;
      }
    }
    goto code_?;
  }
  pMVar8 = pMVar2;
  if ((TypeInfo__GNU__Gettext__CatalogParser->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar9 = CatalogParser_ReadParam
                    ((String *)pMVar2,StringLiteral_msgstru0009_,(String **)&stack0xffffffe0,
                     (MethodInfo *)0x0);
  if (bVar9 != 0) goto code_?;
  pMVar12 = pMVar8;
  if ((TypeInfo__GNU__Gettext__CatalogParser->_1).cctor_finished_or_no_cctor == 0) {
    pMVar4 = (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)
             TypeInfo__GNU__Gettext__CatalogParser;
    func_?();
  }
  bVar9 = CatalogParser_ReadParam
                    ((String *)pMVar8,StringLiteral_msgstr_,(String **)&stack0xffffffe0,
                     (MethodInfo *)0x0);
  if (bVar9 != 0) {
    if (cVar5 != '\0') {
      if ((pMVar10 != (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0) &&
         (pMVar4 = pMVar10,
         iVar16 = mscorlib.dll::System::String::String_IndexOf
                            ((String *)pMVar10,0x5d,(MethodInfo *)0x0),
         pMVar4 != (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)) {
        this_01 = (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)(iVar16 + -1);
        pMVar2 = (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)
                  mscorlib.dll::System::String::String_Substring_1
                            ((String *)pMVar4,(int32_t)this_01,1,(MethodInfo *)0x0);
        pMVar7 = (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)StringLiteral_msgstr_;
        pMVar6 = (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)::StringLiteral__;
        text = mscorlib.dll::System::String::String_Concat_4
                         (StringLiteral_msgstr_,(String *)pMVar2,::StringLiteral__,
                          (MethodInfo *)0x0);
        do {
          pSVar3 = text;
          pMVar12 = pMVar6;
          pMVar1 = (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)text;
          pSVar14 = mscorlib.dll::System::String::String_Concat_3
                             (text,::StringLiteral___,(MethodInfo *)0x0);
          if ((TypeInfo__GNU__Gettext__CatalogParser->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          this = (CatalogParser *)0x0;
          bVar9 = CatalogParser_ReadParam
                            ((String *)pMVar6,pSVar14,(String **)&stack0xffffffe0,(MethodInfo *)0x0)
          ;
          if (bVar9 == 0) {
            text = (String *)&UNK_?;
            pMVar8 = pMVar12;
            pSVar3 = mscorlib.dll::System::String::String_Concat_3
                                (pSVar3,StringLiteral_u0009_,(MethodInfo *)0x0);
            if ((TypeInfo__GNU__Gettext__CatalogParser->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            bVar9 = CatalogParser_ReadParam
                              ((String *)pMVar12,pSVar3,(String **)&stack0xffffffe0,
                               (MethodInfo *)0x0);
            if (bVar9 == 0) goto code_?;
          }
          if (pMVar2 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0) break;
          pSVar3 = mscorlib.dll::System::String::String_Substring_1
                              ((String *)pMVar2,0,
                               (int32_t)((int)&pMVar2->bounds[-1].lower_bound + 3),
                               (MethodInfo *)0x0);
          this_01 = (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)&UNK_?;
          pMVar10 = (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)func_?();
          pSVar14 = (String *)&UNK_?;
          mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor_2
                    ((StringBuilder *)pMVar10,pSVar3,(MethodInfo *)0x0);
          while( true ) {
            if (pMVar7 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
            goto code_?;
            pMVar1 = (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)func_?();
            bVar9 = mscorlib.dll::System::String::String_IsNullOrEmpty
                              ((String *)pMVar1,(MethodInfo *)0x0);
            if (bVar9 != 0) goto code_?;
            if (pMVar1 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
            goto code_?;
            uVar13 = mscorlib.dll::System::String::String_get_Chars
                              ((String *)pMVar1,0,(MethodInfo *)0x0);
            if (uVar13 == 9) {
              if (pMVar1 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
              goto code_?;
              pMVar1 = (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)
                        mscorlib.dll::System::String::String_Substring
                                  ((String *)pMVar1,1,(MethodInfo *)0x0);
            }
            if (pMVar1 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
            goto code_?;
            uVar13 = mscorlib.dll::System::String::String_get_Chars
                              ((String *)pMVar1,0,(MethodInfo *)0x0);
            pMVar7 = this_01;
            if (uVar13 != 0x22) break;
            if (pMVar1 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
            goto code_?;
            pMVar7 = (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0;
            pMVar4 = (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)
                     ((int)&pMVar1->bounds[-1].lower_bound + 3);
            this_01 = pMVar1;
            uVar13 = mscorlib.dll::System::String::String_get_Chars
                              ((String *)pMVar1,(int32_t)pMVar4,(MethodInfo *)0x0);
            pMVar1 = this_01;
            if (uVar13 != 0x22) break;
            if (this_01 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
            goto code_?;
            pMVar7 = (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0;
            pMVar4 = (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)&UNK_?;
            pSVar3 = mscorlib.dll::System::String::String_Substring_1
                                ((String *)this_01,1,
                                 (int32_t)((int)&this_01->bounds[-1].lower_bound + 2),
                                 (MethodInfo *)0x0);
            if (pMVar10 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
            goto code_?;
            pSVar14 = (String *)&UNK_?;
            mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                      ((StringBuilder *)pMVar10,pSVar3,(MethodInfo *)0x0);
          }
          this_01 = pMVar7;
          if ((TypeInfo__GNU__Gettext__CatalogParser->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__GNU__Gettext__CatalogParser);
          }
          bVar9 = CatalogParser_ReadParam
                            ((String *)pMVar1,StringLiteral_msgstr_,(String **)&stack0xffffffe0,
                             (MethodInfo *)0x0);
          if (bVar9 != 0) {
            if ((pSVar14 == (String *)0x0) ||
               (iVar16 = mscorlib.dll::System::String::String_IndexOf(pSVar14,0x5d,(MethodInfo *)0x0)
               , pSVar14 == (String *)0x0)) break;
            pSVar3 = mscorlib.dll::System::String::String_Substring_1
                                (pSVar14,iVar16 + -1,1,(MethodInfo *)0x0);
            text = mscorlib.dll::System::String::String_Concat_4
                             (StringLiteral_msgstr_,pSVar3,::StringLiteral__,(MethodInfo *)0x0);
          }
code_?:
          if (pMVar10 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0) break;
          pSVar3 = (String *)func_?();
          pMVar7 = (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)&UNK_?;
          pSVar3 = StringEscaping::StringEscaping_FromGettextFormat(pSVar3,(MethodInfo *)0x0);
          if (pMVar4 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0) break;
          pMVar2 = (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)&UNK_?;
          pMVar6 = pMVar4;
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__Add
                    ((List_1_System_Object_ *)pMVar4,(Object *)pSVar3,
                     MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                    );
        } while( true );
      }
      goto code_?;
    }
    pSVar3 = StringLiteral_Broken_catalog_file__plural_form;
    if ((TypeInfo__System__Console->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
      pSVar3 = StringLiteral_Broken_catalog_file__plural_form;
    }
code_?:
    mscorlib.dll::System::Console::Console_WriteLine(pSVar3,(MethodInfo *)0x0);
    goto code_?;
  }
  pMVar2 = pMVar10;
  pMVar8 = pMVar12;
  if ((TypeInfo__GNU__Gettext__CatalogParser->_1).cctor_finished_or_no_cctor == 0) {
    pMVar4 = (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)
             TypeInfo__GNU__Gettext__CatalogParser;
    func_?();
    pMVar2 = pMVar10;
  }
  bVar9 = CatalogParser_ReadParam
                    ((String *)pMVar12,::StringLiteral____,(String **)&stack0xffffffe0,
                     (MethodInfo *)0x0);
  if (bVar9 == 0) {
    pSVar3 = pSVar14;
    if (pMVar8 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
    goto code_?;
    uVar13 = mscorlib.dll::System::String::String_get_Chars((String *)pMVar8,0,(MethodInfo *)0x0);
    pSVar3 = pSVar14;
    if (uVar13 != 0x23) goto code_?;
    while (bVar9 = mscorlib.dll::System::String::String_IsNullOrEmpty
                             ((String *)pMVar8,(MethodInfo *)0x0), bVar9 == 0) {
      if (pMVar8 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
      goto code_?;
      uVar13 = mscorlib.dll::System::String::String_get_Chars((String *)pMVar8,0,(MethodInfo *)0x0);
      if (uVar13 == 0x23) {
        if (pMVar8 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
        goto code_?;
        pMVar10 = this_01;
        pMVar12 = pMVar7;
        this_04 = pMVar6;
        if (1 < (int)pMVar8->bounds) goto code_?;
      }
      else {
code_?:
        if (pMVar8 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
        goto code_?;
        uVar13 = mscorlib.dll::System::String::String_get_Chars((String *)pMVar8,0,(MethodInfo *)0x0)
        ;
        if (uVar13 != 0x23) break;
        if (pMVar8 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
        goto code_?;
        pMVar4 = (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0;
        pMVar10 = pMVar8;
        uVar13 = mscorlib.dll::System::String::String_get_Chars((String *)pMVar8,1,(MethodInfo *)0x0)
        ;
        pMVar8 = pMVar10;
        if (uVar13 == 0x2c) break;
        if (pMVar10 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
        goto code_?;
        pSVar3 = (String *)0x0;
        pMVar4 = (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)&UNK_?;
        pMVar12 = pMVar10;
        uVar13 = mscorlib.dll::System::String::String_get_Chars
                          ((String *)pMVar10,1,(MethodInfo *)0x0);
        this_01 = pMVar10;
        pMVar8 = pMVar12;
        if (uVar13 == 0x3a) break;
        if (pMVar12 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
        goto code_?;
        this_04 = (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0;
        pMVar2 = (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x1;
        pSVar3 = (String *)&UNK_?;
        uVar13 = mscorlib.dll::System::String::String_get_Chars
                          ((String *)pMVar12,1,(MethodInfo *)0x0);
        this_01 = pMVar10;
        pMVar7 = pMVar12;
        pMVar8 = this_04;
        if (uVar13 == 0x2e) break;
        if (this_04 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
        goto code_?;
        pMVar1 = (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0;
        pMVar8 = (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)&UNK_?;
        uVar13 = mscorlib.dll::System::String::String_get_Chars
                          ((String *)this_04,1,(MethodInfo *)0x0);
        this_01 = pMVar10;
        pMVar7 = pMVar12;
        pMVar6 = this_04;
        if (uVar13 == 0x7e) break;
      }
      if (pSVar14 == (String *)0x0) goto code_?;
      this_01 = pMVar10;
      pMVar7 = pMVar12;
      pMVar6 = this_04;
      if (0 < (pSVar14->fields)._stringLength) {
        pMVar8 = (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)
                 mscorlib.dll::System::String::String_Concat_3
                           (StringLiteral_u000A,(String *)pMVar8,(MethodInfo *)0x0);
        this_01 = pMVar10;
        pMVar7 = pMVar12;
        pMVar6 = this_04;
      }
      pSVar14 = mscorlib.dll::System::String::String_Concat_3
                         (pSVar14,(String *)pMVar8,(MethodInfo *)0x0);
      if (pMVar7 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
      goto code_?;
      pSVar3 = pSVar14;
      pMVar8 = (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)func_?();
    }
    cVar5 = (char)((uint)pMVar6 >> 0x18);
    goto code_?;
  }
  pLVar15 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
            *)func_?(TypeInfo__System__Collections__Generic__List<System::String>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar15,
             MethodInfo__System__Collections__Generic__List<System::String>__List__);
  if (pLVar15 == (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                 *)0x0) goto code_?;
  do {
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              ((List_1_System_Object_ *)pLVar15,(Object *)pMVar8,
               MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_);
    if (pMVar7 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
    goto code_?;
    pMVar4 = (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)func_?();
    bVar9 = mscorlib.dll::System::String::String_IsNullOrEmpty((String *)pMVar4,(MethodInfo *)0x0);
    pMVar8 = pMVar4;
    if (bVar9 != 0) break;
    if ((TypeInfo__GNU__Gettext__CatalogParser->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar9 = CatalogParser_ReadParam
                      ((String *)pMVar4,::StringLiteral____,(String **)&stack0xffffffe0,
                       (MethodInfo *)0x0);
  } while (bVar9 != 0);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
  MultiColumnCollectionHeader+ViewState+ColumnState]::
  List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__ToArray
            (pLVar15,MethodInfo__System__Collections__Generic__List<System::String>__ToArray__);
  if (this_01 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
  goto code_?;
  pMVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
           MultiColumnCollectionHeader+ViewState+ColumnState]::
           List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__ToArray
                     ((List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                       *)this_01,
                      MethodInfo__System__Collections__Generic__List<System::String>__ToArray__);
  iVar17 = 0;
  cVar5 = func_?();
  if (cVar5 == '\0') goto code_?;
  cVar5 = '\0';
  pMVar6 = (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0;
  pSVar3 = TypeInfo__System__String->static_fields->Empty;
  if (iVar17 == 0) goto code_?;
  func_?();
  func_?();
  if (pMVar4 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
  goto code_?;
  func_?();
code_?:
  while (bVar9 = mscorlib.dll::System::String::String_op_Equality
                           ((String *)pMVar8,TypeInfo__System__String->static_fields->Empty,
                            (MethodInfo *)0x0), bVar9 != 0) {
code_?:
    if (pMVar7 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
    goto code_?;
code_?:
    pMVar8 = (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)func_?();
  }
  goto code_?;
code_?:
  if (((pMVar4 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0) ||
      (mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
       MultiColumnCollectionHeader+ViewState+ColumnState]::
       List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__ToArray
                 ((List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                   *)pMVar4,
                  MethodInfo__System__Collections__Generic__List<System::String>__ToArray__),
      pMVar10 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)) ||
     (mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
      MultiColumnCollectionHeader+ViewState+ColumnState]::
      List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__ToArray
                ((List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                  *)pMVar10,
                 MethodInfo__System__Collections__Generic__List<System::String>__ToArray__),
     this_01 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0))
  goto code_?;
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
  MultiColumnCollectionHeader+ViewState+ColumnState]::
  List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__ToArray
            ((List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
              *)this_01,MethodInfo__System__Collections__Generic__List<System::String>__ToArray__);
  cVar5 = func_?();
  if (cVar5 == '\0') goto code_?;
  pMVar6 = (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0;
  pSVar3 = TypeInfo__System__String->static_fields->Empty;
  func_?();
code_?:
  cVar5 = '\0';
  func_?();
  func_?();
  goto code_?;
}


/* String ParseMessage(String ByRef, String ByRef, StringReader) */

String * Assembly-CSharp.dll::GNU::Gettext::CatalogParser::CatalogParser_ParseMessage
                   (CatalogParser *this,String **line,String **dummy,StringReader *sr,
                   MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Text__StringBuilder);
    cRam_? = '\x01';
  }
  pSVar1 = *dummy;
  if (pSVar1 != (String *)0x0) {
    pSVar1 = mscorlib.dll::System::String::String_Substring_1
                       (pSVar1,0,(pSVar1->fields)._stringLength + -1,(MethodInfo *)0x0);
    this_00 = (StringBuilder *)func_?(TypeInfo__System__Text__StringBuilder);
    mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor_2
              (this_00,pSVar1,(MethodInfo *)0x0);
    pSVar2 = this_00;
    if (this_00 != (StringBuilder *)0x0) {
      while( true ) {
        pSVar1 = (String *)(*(code *)pSVar2->klass[1]._0.events)();
        *line = pSVar1;
        func_?();
        bVar3 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar1,(MethodInfo *)0x0);
        if (bVar3 != 0) break;
        if (*line == (String *)0x0) goto code_?;
        uVar4 = mscorlib.dll::System::String::String_get_Chars(*line,0,(MethodInfo *)0x0);
        if (uVar4 == 9) {
          if (*line == (String *)0x0) goto code_?;
          pSVar1 = mscorlib.dll::System::String::String_Substring(*line,1,(MethodInfo *)0x0);
          *line = pSVar1;
          func_?(line,pSVar1);
        }
        if (*line == (String *)0x0) goto code_?;
        uVar4 = mscorlib.dll::System::String::String_get_Chars(*line,0,(MethodInfo *)0x0);
        if (uVar4 != 0x22) break;
        pSVar1 = *line;
        if (pSVar1 == (String *)0x0) goto code_?;
        uVar4 = mscorlib.dll::System::String::String_get_Chars
                          (pSVar1,(pSVar1->fields)._stringLength + -1,(MethodInfo *)0x0);
        if (uVar4 != 0x22) break;
        pSVar1 = *line;
        if (pSVar1 == (String *)0x0) goto code_?;
        pSVar1 = mscorlib.dll::System::String::String_Substring_1
                           (pSVar1,1,(pSVar1->fields)._stringLength + -2,(MethodInfo *)0x0);
        pSVar1 = StringEscaping::StringEscaping_FromGettextFormat(pSVar1,(MethodInfo *)0x0);
        if (this_00 == (StringBuilder *)0x0) goto code_?;
        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                  (this_00,pSVar1,(MethodInfo *)0x0);
        pSVar2 = (StringBuilder *)0x0;
      }
      if (this_00 != (StringBuilder *)0x0) {
        pSVar1 = (String *)
                 (*(code *)(this_00->klass->vtable).ToString.method)
                           (this_00,(this_00->klass->vtable).
                                    System_Runtime_Serialization_ISerializable_GetObjectData.
                                    methodPtr);
        return pSVar1;
      }
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar5)();
  return pSVar1;
}


/* Boolean ReadParam(String, String, String ByRef) */

bool Assembly-CSharp.dll::GNU::Gettext::CatalogParser::CatalogParser_ReadParam
               (String *input,String *pattern,String **output,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Char);
    func_?(&TypeInfo__System__String);
    func_?(&::StringLiteral___);
    cRam_? = '\x01';
  }
  pSVar1 = TypeInfo__System__String->static_fields->Empty;
  *output = pSVar1;
  func_?(output,pSVar1);
  if (input == (String *)0x0) {
    return 0;
  }
  pCVar2 = (Char__Array *)func_?(TypeInfo__System__Char,2);
  if (pCVar2 == (Char__Array *)0x0) goto code_?;
  if ((pCVar2->max_length != 0) && (pCVar2->vector[0] = 0x20, 1 < pCVar2->max_length)) {
    pCVar2->vector[1] = 9;
    pSVar1 = mscorlib.dll::System::String::String_TrimStart_1(input,pCVar2,(MethodInfo *)0x0);
    if ((pSVar1 == (String *)0x0) || (pattern == (String *)0x0)) goto code_?;
    if ((pSVar1->fields)._stringLength < (pattern->fields)._stringLength) {
      return 0;
    }
    bVar3 = mscorlib.dll::System::String::String_StartsWith(pSVar1,pattern,(MethodInfo *)0x0);
    if (bVar3 == 0) {
      return 0;
    }
    this = mscorlib.dll::System::String::String_Trim(pattern,(MethodInfo *)0x0);
    if ((this == (String *)0x0) ||
       ((bVar3 = mscorlib.dll::System::String::String_Equals_1
                           (this,::StringLiteral___,(MethodInfo *)0x0), bVar3 != 0 &&
        (pSVar1 = mscorlib.dll::System::String::String_Replace(pSVar1,0x5c,0x2f,(MethodInfo *)0x0),
        pSVar1 == (String *)0x0)))) goto code_?;
    pSVar1 = mscorlib.dll::System::String::String_Substring
                       (pSVar1,(pattern->fields)._stringLength,(MethodInfo *)0x0);
    pCVar2 = (Char__Array *)func_?();
    if (pCVar2 == (Char__Array *)0x0) goto code_?;
    if ((pCVar2->max_length != 0) && (pCVar2->vector[0] = 0x20, 1 < pCVar2->max_length)) {
      pCVar2->vector[1] = 9;
      if (pSVar1 != (String *)0x0) {
        pSVar1 = mscorlib.dll::System::String::String_TrimEnd_2(pSVar1,pCVar2,(MethodInfo *)0x0);
        pSVar1 = StringEscaping::StringEscaping_FromGettextFormat(pSVar1,(MethodInfo *)0x0);
        *output = pSVar1;
        func_?();
        return 1;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  bVar3 = (*pcVar4)();
  return bVar3;
}


/* CatalogParser() */

void Assembly-CSharp.dll::GNU::Gettext::CatalogParser::CatalogParser__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GNU__Gettext__CatalogParser);
    func_?(&TypeInfo__System__String);
    func_?(&StringLiteral_u000A);
    func_?(&StringLiteral_u000Du000A);
    func_?(&StringLiteral_u000D);
    cRam_? = '\x01';
  }
  pSVar1 = (String__Array *)func_?(TypeInfo__System__String,3);
  pSVar2 = StringLiteral_u000Du000A;
  if (pSVar1 == (String__Array *)0x0) {
    func_?();
  }
  else if (pSVar1->max_length != 0) {
    pSVar1->vector[0] = StringLiteral_u000Du000A;
    func_?(pSVar1->vector,pSVar2);
    pSVar2 = StringLiteral_u000D;
    if (1 < pSVar1->max_length) {
      pSVar1->vector[1] = StringLiteral_u000D;
      func_?(pSVar1->vector + 1,pSVar2);
      pSVar2 = StringLiteral_u000A;
      if (2 < pSVar1->max_length) {
        pSVar1->vector[2] = StringLiteral_u000A;
        func_?(pSVar1->vector + 2,pSVar2);
        TypeInfo__GNU__Gettext__CatalogParser->static_fields->LineSplitStrings = pSVar1;
        func_?(TypeInfo__GNU__Gettext__CatalogParser->static_fields,pSVar1);
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* CatalogParser(String, Encoding) */

void Assembly-CSharp.dll::GNU::Gettext::CatalogParser::CatalogParser__ctor
               (CatalogParser *this,String *text,Encoding *encoding,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GNU__Gettext__CatalogParser);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  if ((TypeInfo__GNU__Gettext__CatalogParser->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__GNU__Gettext__CatalogParser);
  }
  pSVar1 = CatalogParser_GetNewLine(text,encoding,(MethodInfo *)0x0);
  (this->fields)._NewLine_k__BackingField = pSVar1;
  func_?(&this->fields,pSVar1);
  return;
}

