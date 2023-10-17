
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
    if (*(int *)(iVar7 + 0xc) == 0) {
      func_?();
code_?:
      func_?();
code_?:
      func_?();
    }
    else {
      *(undefined2 *)(iVar7 + 0x10) = 0x78;
      this = (StringReader *)func_?(TypeInfo__System__IO__StringReader);
      if (this != (StringReader *)0x0) {
        mscorlib.dll::System::IO::StringReader::StringReader__ctor(this,text,(MethodInfo *)0x0);
        uStack_1 = 1;
        while( true ) {
          if (this == (StringReader *)0x0) goto code_?;
          iVar8 = (*(this->klass->vtable).Read_1.methodPtr)
                            (this,iVar7,0,1,(this->klass->vtable).Read_1.method);
          if (iVar8 == 0) {
            uStack_1 = 0xffffffff;
            if (this != (StringReader *)0x0) {
              func_?(0,TypeInfo__System__IDisposable,this);
            }
            uStack_1 = 0xffffffff;
            if (uStack_6._0_2_ != 0x78) {
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
          if (*(short *)(iVar7 + 0x10) == 10) break;
          if (*(int *)(iVar7 + 0xc) == 0) goto code_?;
          if (*(short *)(iVar7 + 0x10) == 0xd) {
            if (uStack_6._0_2_ == 0x78) {
              uStack_6 = 0xd;
            }
            else {
              pSVar9 = StringLiteral_u000D;
              if (uStack_6._0_2_ == 0xd) {
code_?:
                uStack_1 = 0xffffffff;
                func_?();
                *unaff_FS_OFFSET = uStack_3;
                return pSVar9;
              }
            }
          }
          else if (uStack_6._0_2_ != 0x78) {
            pSVar9 = mscorlib.dll::System::Char::Char_ToString((Char *)&uStack_6,(MethodInfo *)0x0)
            ;
            goto code_?;
          }
        }
        pSVar9 = StringLiteral_u000A;
        if (uStack_6._0_2_ == 0xd) {
          pSVar9 = StringLiteral_u000Du000A;
        }
        goto code_?;
      }
    }
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
  pSVar1 = (String *)*unaff_FS_OFFSET;
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
  pLStack_2 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0;
  pLVar3 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
            TypeInfo__System__String->static_fields->Empty;
  pLVar4 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
           TypeInfo__System__String->static_fields->Empty;
  this_00 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
            func_?(TypeInfo__System__Collections__Generic__List<System::String>);
  if (this_00 != (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__List<System::String>__List__);
    this_01 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
              func_?(TypeInfo__System__Collections__Generic__List<System::String>);
    if (this_01 != (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
      LowLevelList_1_System_Object___ctor
                ((LowLevelList_1_System_Object_ *)this_01,
                 MethodInfo__System__Collections__Generic__List<System::String>__List__);
      this_02 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                func_?(TypeInfo__System__Collections__Generic__List<System::String>);
      if (this_02 != (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
        LowLevelList_1_System_Object___ctor
                  ((LowLevelList_1_System_Object_ *)this_02,
                   MethodInfo__System__Collections__Generic__List<System::String>__List__);
        cVar5 = '\0';
        uVar6 = 0;
        this_03 = (StringReader *)func_?(TypeInfo__System__IO__StringReader);
        if (this_03 != (StringReader *)0x0) {
          mscorlib.dll::System::IO::StringReader::StringReader__ctor(this_03,text,(MethodInfo *)0x0)
          ;
          do {
            if (this_03 == (StringReader *)0x0) goto code_?;
            pLVar7 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                     (*(this_03->klass->vtable).ReadLine.methodPtr)
                               (this_03,(this_03->klass->vtable).ReadLine.method);
            bVar8 = mscorlib.dll::System::String::String_op_Equality
                              ((String *)pLVar7,::StringLiteral__,(MethodInfo *)0x0);
          } while (bVar8 != 0);
          if (pLVar7 == (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
            if (this_03 != (StringReader *)0x0) {
              func_?(0,TypeInfo__System__IDisposable,this_03);
            }
            *unaff_FS_OFFSET = pSVar1;
            return 0;
          }
code_?:
          if (pLVar7 == (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
            if (this_03 != (StringReader *)0x0) {
              func_?(0,TypeInfo__System__IDisposable,this_03);
            }
            *unaff_FS_OFFSET = pSVar1;
            return 1;
          }
          while ((bVar8 = mscorlib.dll::System::String::String_op_Equality
                                    ((String *)pLVar7,::StringLiteral___,(MethodInfo *)0x0),
                 bVar8 != 0 ||
                 (bVar8 = mscorlib.dll::System::String::String_op_Equality
                                    ((String *)pLVar7,::StringLiteral___,(MethodInfo *)0x0),
                 bVar8 != 0))) {
            if (this_03 == (StringReader *)0x0) goto code_?;
            pLVar7 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                     func_?(0xc,this_03);
          }
          pLVar9 = pLVar7;
          if ((TypeInfo__GNU__Gettext__CatalogParser->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__GNU__Gettext__CatalogParser);
          }
          bVar8 = CatalogParser_ReadParam
                            ((String *)pLVar7,::StringLiteral____,(String **)&pLStack_2,
                             (MethodInfo *)0x0);
          if (bVar8 != 0) {
            if (this_03 == (StringReader *)0x0) goto code_?;
            pLVar3 = pLStack_2;
            pLVar9 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                     func_?();
          }
          pLVar7 = pLVar9;
          if ((TypeInfo__GNU__Gettext__CatalogParser->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__GNU__Gettext__CatalogParser);
          }
          bVar8 = CatalogParser_ReadParam
                            ((String *)pLVar9,::StringLiteral____,(String **)&pLStack_2,
                             (MethodInfo *)0x0);
          if (bVar8 != 0) {
code_?:
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Add
                      ((List_1_System_Object_ *)this_01,(Object *)pLStack_2,
                       MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                      );
            if (this_03 != (StringReader *)0x0) goto code_?;
            goto code_?;
          }
          pLVar9 = pLVar7;
          if ((TypeInfo__GNU__Gettext__CatalogParser->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__GNU__Gettext__CatalogParser);
          }
          bVar8 = CatalogParser_ReadParam
                            ((String *)pLVar7,::StringLiteral___,(String **)&pLStack_2,
                             (MethodInfo *)0x0);
          if (bVar8 != 0) goto code_?;
          pLVar7 = pLVar9;
          if ((TypeInfo__GNU__Gettext__CatalogParser->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__GNU__Gettext__CatalogParser);
          }
          bVar8 = CatalogParser_ReadParam
                            ((String *)pLVar9,::StringLiteral____,(String **)&pLStack_2,
                             (MethodInfo *)0x0);
          if (bVar8 == 0) {
            pLVar9 = this_02;
            str0 = pLVar4;
            pLVar10 = pLVar7;
            if ((TypeInfo__GNU__Gettext__CatalogParser->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
              pLVar9 = this_02;
              str0 = pLVar4;
            }
            bVar8 = CatalogParser_ReadParam
                              ((String *)pLVar7,StringLiteral_msgctxt__,(String **)&pLStack_2,
                               (MethodInfo *)0x0);
            this_02 = pLVar9;
            pLVar4 = str0;
            pLVar7 = pLVar10;
            if (bVar8 == 0) {
              if ((TypeInfo__GNU__Gettext__CatalogParser->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__GNU__Gettext__CatalogParser);
              }
              bVar8 = CatalogParser_ReadParam
                                ((String *)pLVar10,StringLiteral_msgctxtu0009_,
                                 (String **)&pLStack_2,(MethodInfo *)0x0);
              this_02 = pLVar9;
              pLVar4 = str0;
              if (bVar8 == 0) {
                pLVar10 = pLVar7;
                if ((TypeInfo__GNU__Gettext__CatalogParser->_1).cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__GNU__Gettext__CatalogParser);
                }
                bVar8 = CatalogParser_ReadParam
                                  ((String *)pLVar7,StringLiteral_msgid__,(String **)&pLStack_2,
                                   (MethodInfo *)0x0);
                this_02 = pLVar9;
                pLVar4 = str0;
                pLVar7 = pLVar10;
                if (bVar8 == 0) {
                  if ((TypeInfo__GNU__Gettext__CatalogParser->_1).cctor_finished_or_no_cctor == 0) {
                    func_?(TypeInfo__GNU__Gettext__CatalogParser);
                  }
                  bVar8 = CatalogParser_ReadParam
                                    ((String *)pLVar10,StringLiteral_msgidu0009_,
                                     (String **)&pLStack_2,(MethodInfo *)0x0);
                  this_02 = pLVar9;
                  pLVar4 = str0;
                  if (bVar8 == 0) {
                    pLVar10 = pLVar7;
                    if ((TypeInfo__GNU__Gettext__CatalogParser->_1).cctor_finished_or_no_cctor == 0)
                    {
                      func_?(TypeInfo__GNU__Gettext__CatalogParser);
                    }
                    bVar8 = CatalogParser_ReadParam
                                      ((String *)pLVar7,StringLiteral_msgid_plural__,
                                       (String **)&pLStack_2,(MethodInfo *)0x0);
                    this_02 = pLVar9;
                    pLVar4 = str0;
                    pLVar7 = pLVar10;
                    if (bVar8 == 0) {
                      if ((TypeInfo__GNU__Gettext__CatalogParser->_1).cctor_finished_or_no_cctor ==
                          0) {
                        func_?(TypeInfo__GNU__Gettext__CatalogParser);
                      }
                      bVar8 = CatalogParser_ReadParam
                                        ((String *)pLVar10,StringLiteral_msgid_pluralu0009_,
                                         (String **)&pLStack_2,(MethodInfo *)0x0);
                      this_02 = pLVar9;
                      pLVar4 = str0;
                      if (bVar8 == 0) {
                        pLVar4 = pLVar7;
                        if ((TypeInfo__GNU__Gettext__CatalogParser->_1).cctor_finished_or_no_cctor
                            == 0) {
                          func_?(TypeInfo__GNU__Gettext__CatalogParser);
                        }
                        bVar8 = CatalogParser_ReadParam
                                          ((String *)pLVar7,StringLiteral_msgstr__,
                                           (String **)&pLStack_2,(MethodInfo *)0x0);
                        this_02 = this_00;
                        pLVar7 = pLVar4;
                        if (bVar8 == 0) {
                          if ((TypeInfo__GNU__Gettext__CatalogParser->_1).cctor_finished_or_no_cctor
                              == 0) {
                            func_?(TypeInfo__GNU__Gettext__CatalogParser);
                          }
                          bVar8 = CatalogParser_ReadParam
                                            ((String *)pLVar4,StringLiteral_msgstru0009_,
                                             (String **)&pLStack_2,(MethodInfo *)0x0);
                          this_02 = this_00;
                          if (bVar8 != 0) goto code_?;
                          this_02 = pLVar9;
                          pLVar4 = pLVar7;
                          if ((TypeInfo__GNU__Gettext__CatalogParser->_1).cctor_finished_or_no_cctor
                              == 0) {
                            func_?();
                            this_02 = pLVar9;
                          }
                          bVar8 = CatalogParser_ReadParam
                                            ((String *)pLVar7,StringLiteral_msgstr_,
                                             (String **)&pLStack_2,(MethodInfo *)0x0);
                          if (bVar8 == 0) {
                            pLVar7 = pLVar4;
                            if ((TypeInfo__GNU__Gettext__CatalogParser->_1).
                                cctor_finished_or_no_cctor == 0) {
                              func_?();
                            }
                            bVar8 = CatalogParser_ReadParam
                                              ((String *)pLVar4,::StringLiteral____,
                                               (String **)&pLStack_2,(MethodInfo *)0x0);
                            if (bVar8 == 0) {
                              pLVar4 = str0;
                              if (pLVar7 == (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_
                                             *)0x0) goto code_?;
                              uVar11 = mscorlib.dll::System::String::String_get_Chars
                                                ((String *)pLVar7,0,(MethodInfo *)0x0);
                              pLVar4 = str0;
                              if (uVar11 != 0x23) goto code_?;
                              while (bVar8 = mscorlib.dll::System::String::String_IsNullOrEmpty
                                                       ((String *)pLVar7,(MethodInfo *)0x0),
                                    bVar8 == 0) {
                                if (pLVar7 == (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_
                                               *)0x0) goto code_?;
                                uVar11 = mscorlib.dll::System::String::String_get_Chars
                                                  ((String *)pLVar7,0,(MethodInfo *)0x0);
                                if (uVar11 == 0x23) {
                                  if (pLVar7 == (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_
                                                 *)0x0) goto code_?;
                                  if (1 < (int)(pLVar7->fields)._items) goto code_?;
                                }
                                else {
code_?:
                                  if (pLVar7 == (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_
                                                 *)0x0) goto code_?;
                                  uVar11 = mscorlib.dll::System::String::String_get_Chars
                                                    ((String *)pLVar7,0,(MethodInfo *)0x0);
                                  if (uVar11 != 0x23) break;
                                  if (pLVar7 == (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_
                                                 *)0x0) goto code_?;
                                  uVar11 = mscorlib.dll::System::String::String_get_Chars
                                                    ((String *)pLVar7,1,(MethodInfo *)0x0);
                                  if (uVar11 == 0x2c) break;
                                  if (pLVar7 == (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_
                                                 *)0x0) goto code_?;
                                  uVar11 = mscorlib.dll::System::String::String_get_Chars
                                                    ((String *)pLVar7,1,(MethodInfo *)0x0);
                                  if (uVar11 == 0x3a) break;
                                  if (pLVar7 == (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_
                                                 *)0x0) goto code_?;
                                  uVar11 = mscorlib.dll::System::String::String_get_Chars
                                                    ((String *)pLVar7,1,(MethodInfo *)0x0);
                                  if (uVar11 == 0x2e) break;
                                  if (pLVar7 == (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_
                                                 *)0x0) goto code_?;
                                  this_00 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_
                                             *)0x1;
                                  uVar11 = mscorlib.dll::System::String::String_get_Chars
                                                    ((String *)pLVar7,1,(MethodInfo *)0x0);
                                  if (uVar11 == 0x7e) break;
                                }
                                if (str0 == (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_
                                             *)0x0) goto code_?;
                                if (0 < (int)(str0->fields)._items) {
                                  pLVar7 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_
                                            *)mscorlib.dll::System::String::String_Concat_3
                                                        (StringLiteral_u000A,(String *)pLVar7,
                                                         (MethodInfo *)0x0);
                                }
                                str0 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_
                                        *)mscorlib.dll::System::String::String_Concat_3
                                                    ((String *)str0,(String *)pLVar7,
                                                     (MethodInfo *)0x0);
                                if (this_03 == (StringReader *)0x0) goto code_?;
                                pLVar4 = str0;
                                pLVar7 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_
                                          *)func_?(0xc,this_03);
                              }
                              cVar5 = (char)((uint)uVar6 >> 0x18);
                              goto code_?;
                            }
                            pLVar4 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                                     func_?(
                                                  TypeInfo__System__Collections__Generic__List<System::String>
                                                  );
                            if (pLVar4 != (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_
                                           *)0x0) {
                              mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::
                              Object]::LowLevelList_1_System_Object___ctor
                                        ((LowLevelList_1_System_Object_ *)pLVar4,
                                         MethodInfo__System__Collections__Generic__List<System::String>__List__
                                        );
                              do {
                                mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                                List_1_System_Object__Add
                                          ((List_1_System_Object_ *)pLVar4,(Object *)pLVar7,
                                           MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                                          );
                                if (this_03 == (StringReader *)0x0) goto code_?;
                                pLVar9 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_
                                          *)func_?(0xc,this_03);
                                bVar8 = mscorlib.dll::System::String::String_IsNullOrEmpty
                                                  ((String *)pLVar9,(MethodInfo *)0x0);
                                pLVar7 = pLVar9;
                                if (bVar8 != 0) break;
                                if ((TypeInfo__GNU__Gettext__CatalogParser->_1).
                                    cctor_finished_or_no_cctor == 0) {
                                  func_?(TypeInfo__GNU__Gettext__CatalogParser);
                                }
                                bVar8 = CatalogParser_ReadParam
                                                  ((String *)pLVar9,::StringLiteral____,
                                                   (String **)&pLStack_2,(MethodInfo *)0x0);
                              } while (bVar8 != 0);
                              pUVar12 = mscorlib.dll::System::Collections::Generic::
                                       List`1[UnityEngine::UnitySynchronizationContext+WorkRequest]
                                       ::
                                       List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__ToArray
                                                 (pLVar4,
                                                  MethodInfo__System__Collections__Generic__List<System::String>__ToArray__
                                                 );
                              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                              UnitySynchronizationContext+WorkRequest]::
                              List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__ToArray
                                        (this_01,
                                         MethodInfo__System__Collections__Generic__List<System::String>__ToArray__
                                        );
                              cVar5 = func_?(5,this,pUVar12,pLVar3,0,str0);
                              goto code_?;
                            }
                            goto code_?;
                          }
                          if (cVar5 != '\0') {
                            if ((pLStack_2 !=
                                 (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0)
                               && (iVar13 = mscorlib.dll::System::String::String_IndexOf
                                                     ((String *)pLStack_2,0x5d,(MethodInfo *)0x0),
                                  pLStack_2 !=
                                  (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0
                                  )) {
                              pSVar1 = mscorlib.dll::System::String::String_Substring_1
                                                  ((String *)pLStack_2,iVar13 + -1,1,
                                                   (MethodInfo *)0x0);
                              this = (CatalogParser *)::StringLiteral__;
                              pLVar7 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_
                                        *)mscorlib.dll::System::String::String_Concat_4
                                                    (StringLiteral_msgstr_,pSVar1,::StringLiteral__
                                                     ,(MethodInfo *)0x0);
                              this_01 = pLVar4;
                              do {
                                this_00 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_
                                           *)&UNK_?;
                                pLVar4 = this_01;
                                pSVar1 = mscorlib.dll::System::String::String_Concat_3
                                                    ((String *)pLVar7,::StringLiteral___,
                                                     (MethodInfo *)0x0);
                                if ((TypeInfo__GNU__Gettext__CatalogParser->_1).
                                    cctor_finished_or_no_cctor == 0) {
                                  func_?();
                                }
                                this_03 = (StringReader *)0x0;
                                this_02 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_
                                           *)&UNK_?;
                                bVar8 = CatalogParser_ReadParam
                                                  ((String *)this_01,pSVar1,(String **)&pLStack_2,
                                                   (MethodInfo *)0x0);
                                if (bVar8 == 0) {
                                  pLStack_2 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_
                                                *)&UNK_?;
                                  pSVar1 = mscorlib.dll::System::String::String_Concat_3
                                                      ((String *)pLVar7,StringLiteral_u0009_,
                                                       (MethodInfo *)0x0);
                                  if ((TypeInfo__GNU__Gettext__CatalogParser->_1).
                                      cctor_finished_or_no_cctor == 0) {
                                    func_?();
                                  }
                                  bVar8 = CatalogParser_ReadParam
                                                    ((String *)pLVar4,pSVar1,(String **)&pLStack_2
                                                     ,(MethodInfo *)0x0);
                                  if (bVar8 == 0) goto code_?;
                                }
                                if (pLStack_2 ==
                                    (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                                    0x0) break;
                                pSVar1 = mscorlib.dll::System::String::String_Substring_1
                                                    ((String *)pLStack_2,0,
                                                     (int32_t)((int)&(pLStack_2->fields)._items[-1]
                                                                     .vector[0x1f].m_WaitHandle + 3)
                                                     ,(MethodInfo *)0x0);
                                this_04 = (StringBuilder *)func_?();
                                if (this_04 == (StringBuilder *)0x0) break;
                                mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor_2
                                          (this_04,pSVar1,(MethodInfo *)0x0);
                                while( true ) {
                                  if (this_03 == (StringReader *)0x0) goto code_?;
                                  this = (CatalogParser *)0xc;
                                  this_01 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_
                                             *)func_?();
                                  bVar8 = mscorlib.dll::System::String::String_IsNullOrEmpty
                                                    ((String *)this_01,(MethodInfo *)0x0);
                                  if (bVar8 != 0) goto code_?;
                                  if (this_01 ==
                                      (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *
                                      )0x0) goto code_?;
                                  uVar11 = mscorlib.dll::System::String::String_get_Chars
                                                    ((String *)this_01,0,(MethodInfo *)0x0);
                                  pLVar4 = this_01;
                                  if (uVar11 == 9) {
                                    if (this_01 ==
                                        (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_
                                         *)0x0) goto code_?;
                                    pLVar4 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_
                                              *)mscorlib.dll::System::String::String_Substring
                                                          ((String *)this_01,1,(MethodInfo *)0x0);
                                  }
                                  if (pLVar4 == (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_
                                                 *)0x0) goto code_?;
                                  uVar11 = mscorlib.dll::System::String::String_get_Chars
                                                    ((String *)pLVar4,0,(MethodInfo *)0x0);
                                  if (uVar11 != 0x22) break;
                                  if (pLVar4 == (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_
                                                 *)0x0) goto code_?;
                                  uVar11 = mscorlib.dll::System::String::String_get_Chars
                                                    ((String *)pLVar4,
                                                     (int32_t)((int)&(pLVar4->fields)._items[-1].
                                                                     vector[0x1f].m_WaitHandle + 3),
                                                     (MethodInfo *)0x0);
                                  if (uVar11 != 0x22) break;
                                  if (pLVar4 == (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_
                                                 *)0x0) goto code_?;
                                  pSVar1 = mscorlib.dll::System::String::String_Substring_1
                                                      ((String *)pLVar4,1,
                                                       (int32_t)((int)&(pLVar4->fields)._items[-1].
                                                                       vector[0x1f].m_WaitHandle + 2
                                                                ),(MethodInfo *)0x0);
                                  mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                                            (this_04,pSVar1,(MethodInfo *)0x0);
                                }
                                this_01 = pLVar4;
                                if ((TypeInfo__GNU__Gettext__CatalogParser->_1).
                                    cctor_finished_or_no_cctor == 0) {
                                  func_?(TypeInfo__GNU__Gettext__CatalogParser);
                                }
                                bVar8 = CatalogParser_ReadParam
                                                  ((String *)pLVar4,StringLiteral_msgstr_,
                                                   (String **)&pLStack_2,(MethodInfo *)0x0);
                                if (bVar8 != 0) {
                                  if ((pLStack_2 ==
                                       (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_
                                        *)0x0) ||
                                     (iVar13 = mscorlib.dll::System::String::String_IndexOf
                                                        ((String *)pLStack_2,0x5d,(MethodInfo *)0x0
                                                        ),
                                     pLStack_2 ==
                                     (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                                     0x0)) break;
                                  pSVar1 = mscorlib.dll::System::String::String_Substring_1
                                                      ((String *)pLStack_2,iVar13 + -1,1,
                                                       (MethodInfo *)0x0);
                                  mscorlib.dll::System::String::String_Concat_4
                                            (StringLiteral_msgstr_,pSVar1,::StringLiteral__,
                                             (MethodInfo *)0x0);
                                }
code_?:
                                pSVar1 = (String *)func_?();
                                pLVar7 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_
                                          *)StringEscaping::StringEscaping_FromGettextFormat
                                                      (pSVar1,(MethodInfo *)0x0);
                                mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                                List_1_System_Object__Add
                                          ((List_1_System_Object_ *)this,(Object *)pLVar7,
                                           MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                                          );
                              } while( true );
                            }
                            goto code_?;
                          }
                          pSVar14 = StringLiteral_Broken_catalog_file__plural_form;
                          if ((TypeInfo__System__Console->_1).cctor_finished_or_no_cctor == 0) {
                            func_?();
                            pSVar14 = StringLiteral_Broken_catalog_file__plural_form;
                          }
                        }
                        else {
code_?:
                          this_00 = str0;
                          if (cVar5 == '\0') {
                            pSVar14 = CatalogParser_ParseMessage
                                                (this,(String **)&stack0xffffffe4,
                                                 (String **)&pLStack_2,this_03,(MethodInfo *)0x0);
                            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                            List_1_System_Object__Add
                                      ((List_1_System_Object_ *)pLVar9,(Object *)pSVar14,
                                       MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                                      );
                            mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                            UnitySynchronizationContext+WorkRequest]::
                            List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__ToArray
                                      (pLVar9,
                                       MethodInfo__System__Collections__Generic__List<System::String>__ToArray__
                                      );
                            mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                            UnitySynchronizationContext+WorkRequest]::
                            List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__ToArray
                                      (this_02,
                                       MethodInfo__System__Collections__Generic__List<System::String>__ToArray__
                                      );
                            mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                            UnitySynchronizationContext+WorkRequest]::
                            List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__ToArray
                                      (this_01,
                                       MethodInfo__System__Collections__Generic__List<System::String>__ToArray__
                                      );
                            cVar5 = func_?();
code_?:
                            if (cVar5 == '\0') goto code_?;
                            cVar5 = '\0';
                            uVar6 = 0;
                            pLVar3 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *
                                      )TypeInfo__System__String->static_fields->Empty;
                            pLVar4 = pLVar3;
                            func_?(this_00,
                                            MethodInfo__System__Collections__Generic__List<System::String>__Clear__
                                           );
                            func_?(this_01,
                                            MethodInfo__System__Collections__Generic__List<System::String>__Clear__
                                           );
                            func_?(this_02,
                                            MethodInfo__System__Collections__Generic__List<System::String>__Clear__
                                           );
                            goto code_?;
                          }
                          pSVar14 = StringLiteral_Broken_catalog_file__singular_fo;
                          if ((TypeInfo__System__Console->_1).cctor_finished_or_no_cctor == 0) {
                            func_?(TypeInfo__System__Console);
                            pSVar14 = StringLiteral_Broken_catalog_file__singular_fo;
                          }
                        }
                        mscorlib.dll::System::Console::Console_WriteLine_2
                                  (pSVar14,(MethodInfo *)0x0);
                        goto code_?;
                      }
                    }
                    CatalogParser_ParseMessage
                              (this,(String **)&stack0xffffffe4,(String **)&pLStack_2,this_03,
                               (MethodInfo *)0x0);
                    cVar5 = '\x01';
                    uVar6 = 0x1000000;
                    goto code_?;
                  }
                }
                CatalogParser_ParseMessage
                          (this,(String **)&stack0xffffffe4,(String **)&pLStack_2,this_03,
                           (MethodInfo *)0x0);
                goto code_?;
              }
            }
            CatalogParser_ParseMessage
                      (this,(String **)&stack0xffffffe4,(String **)&pLStack_2,this_03,
                       (MethodInfo *)0x0);
            goto code_?;
          }
          pLVar7 = pLStack_2;
          if (pLStack_2 == (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0)
          goto code_?;
          while( true ) {
            pLStack_2 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                         mscorlib.dll::System::String::String_Trim
                                   ((String *)pLVar7,(MethodInfo *)0x0);
            bVar8 = mscorlib.dll::System::String::String_op_Inequality
                              ((String *)pLStack_2,TypeInfo__System__String->static_fields->Empty,
                               (MethodInfo *)0x0);
            if (bVar8 == 0) break;
            index = 0;
            while( true ) {
              if (pLStack_2 == (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0)
              goto code_?;
              if (((int)(pLStack_2->fields)._items <= index) ||
                 (uVar11 = mscorlib.dll::System::String::String_get_Chars
                                    ((String *)pLStack_2,index,(MethodInfo *)0x0), uVar11 == 0x3a))
              break;
              index = index + 1;
            }
            while( true ) {
              if (pLStack_2 == (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0)
              goto code_?;
              if ((int)(pLStack_2->fields)._items <= index) break;
              uVar11 = mscorlib.dll::System::String::String_get_Chars
                                ((String *)pLStack_2,index,(MethodInfo *)0x0);
              if ((TypeInfo__System__Char->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              bVar8 = mscorlib.dll::System::Char::Char_IsWhiteSpace(uVar11,(MethodInfo *)0x0);
              if (bVar8 != 0) break;
              index = index + 1;
            }
            if (pLStack_2 == (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0)
            goto code_?;
            pSVar14 = mscorlib.dll::System::String::String_Substring_1
                                ((String *)pLStack_2,0,index,(MethodInfo *)0x0);
            if ((TypeInfo__System__IO__Path->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            if (TypeInfo__System__IO__Path->static_fields->DirectorySeparatorChar == 0x5c) {
              if ((TypeInfo__System__IO__Path->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__System__IO__Path);
              }
              if (pSVar14 == (String *)0x0) goto code_?;
              pSVar14 = mscorlib.dll::System::String::String_Replace
                                  (pSVar14,0x2f,
                                   TypeInfo__System__IO__Path->static_fields->DirectorySeparatorChar
                                   ,(MethodInfo *)0x0);
            }
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Add
                      ((List_1_System_Object_ *)this_00,(Object *)pSVar14,
                       MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                      );
            if (pLStack_2 == (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0)
            goto code_?;
            pLVar7 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                     mscorlib.dll::System::String::String_Substring
                               ((String *)pLStack_2,index,(MethodInfo *)0x0);
            if (pLVar7 == (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0)
            goto code_?;
          }
          if (this_03 == (StringReader *)0x0) goto code_?;
          pLVar7 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                   func_?(0xc,this_03);
          cVar5 = (char)((uint)uVar6 >> 0x18);
          goto code_?;
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  bVar8 = (*pcVar15)();
  return bVar8;
code_?:
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
  UnitySynchronizationContext+WorkRequest]::
  List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__ToArray
            (this_02,MethodInfo__System__Collections__Generic__List<System::String>__ToArray__);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
  UnitySynchronizationContext+WorkRequest]::
  List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__ToArray
            (this_00,MethodInfo__System__Collections__Generic__List<System::String>__ToArray__);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
  UnitySynchronizationContext+WorkRequest]::
  List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__ToArray
            (this_01,MethodInfo__System__Collections__Generic__List<System::String>__ToArray__);
  cVar5 = func_?();
  if (cVar5 == '\0') {
code_?:
    func_?();
    *unaff_FS_OFFSET = pSVar1;
    return 0;
  }
  cVar5 = '\0';
  uVar6 = 0;
  pLVar3 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
            TypeInfo__System__String->static_fields->Empty;
  pLVar4 = pLVar3;
  func_?(this_00,MethodInfo__System__Collections__Generic__List<System::String>__Clear__);
  func_?(this_01,MethodInfo__System__Collections__Generic__List<System::String>__Clear__);
  func_?(this_02,MethodInfo__System__Collections__Generic__List<System::String>__Clear__);
code_?:
  while (bVar8 = mscorlib.dll::System::String::String_op_Equality
                           ((String *)pLVar7,TypeInfo__System__String->static_fields->Empty,
                            (MethodInfo *)0x0), bVar8 != 0) {
code_?:
    if (this_03 == (StringReader *)0x0) goto code_?;
code_?:
    pLVar7 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
             func_?(0xc,this_03);
  }
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
  if (*dummy != (String *)0x0) {
    pSVar1 = mscorlib.dll::System::String::String_Substring_1
                       (*dummy,0,((*dummy)->fields)._stringLength + -1,(MethodInfo *)0x0);
    dummy = (String **)func_?(TypeInfo__System__Text__StringBuilder);
    if (((StringBuilder *)dummy != (StringBuilder *)0x0) &&
       (mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor_2
                  ((StringBuilder *)dummy,pSVar1,(MethodInfo *)0x0), sr != (StringReader *)0x0)) {
      while( true ) {
        pSVar1 = (String *)(*(sr->klass->vtable).ReadLine.methodPtr)();
        *line = pSVar1;
        func_?();
        bVar2 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar1,(MethodInfo *)0x0);
        if (bVar2 != 0) break;
        if (*line == (String *)0x0) goto code_?;
        uVar3 = mscorlib.dll::System::String::String_get_Chars(*line,0,(MethodInfo *)0x0);
        if (uVar3 == 9) {
          if (*line == (String *)0x0) goto code_?;
          pSVar1 = mscorlib.dll::System::String::String_Substring(*line,1,(MethodInfo *)0x0);
          *line = pSVar1;
          func_?(line,pSVar1);
        }
        if (*line == (String *)0x0) goto code_?;
        uVar3 = mscorlib.dll::System::String::String_get_Chars(*line,0,(MethodInfo *)0x0);
        if (uVar3 != 0x22) break;
        if (*line == (String *)0x0) goto code_?;
        uVar3 = mscorlib.dll::System::String::String_get_Chars
                          (*line,((*line)->fields)._stringLength + -1,(MethodInfo *)0x0);
        if (uVar3 != 0x22) break;
        if (*line == (String *)0x0) goto code_?;
        pSVar1 = mscorlib.dll::System::String::String_Substring_1
                           (*line,1,((*line)->fields)._stringLength + -2,(MethodInfo *)0x0);
        dummy = (String **)
                StringEscaping::StringEscaping_FromGettextFormat(pSVar1,(MethodInfo *)0x0);
        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                  ((StringBuilder *)dummy,(String *)dummy,(MethodInfo *)0x0);
      }
      pSVar1 = (String *)(*(code *)(*dummy)[0xd].monitor)(dummy,(*dummy)[0xd].fields._stringLength);
      return pSVar1;
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar4)();
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
        pSVar1 = mscorlib.dll::System::String::String_TrimEnd_1(pSVar1,pCVar2,(MethodInfo *)0x0);
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
  if (pSVar1 == (String__Array *)0x0) {
    func_?();
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
  }
  else {
    if ((StringLiteral_u000Du000A != (String *)0x0) &&
       (iVar3 = func_?(StringLiteral_u000Du000A,(pSVar1->klass->_0).element_class),
       iVar3 == 0)) goto code_?;
    pSVar4 = StringLiteral_u000Du000A;
    if (pSVar1->max_length == 0) goto code_?;
    pSVar1->vector[0] = StringLiteral_u000Du000A;
    func_?(pSVar1->vector,pSVar4);
    if ((StringLiteral_u000D != (String *)0x0) &&
       (iVar3 = func_?(StringLiteral_u000D,(pSVar1->klass->_0).element_class), iVar3 == 0))
    goto code_?;
    pSVar4 = StringLiteral_u000D;
    if (pSVar1->max_length < 2) goto code_?;
    pSVar1->vector[1] = StringLiteral_u000D;
    func_?(pSVar1->vector + 1,pSVar4);
    if ((StringLiteral_u000A == (String *)0x0) ||
       (iVar3 = func_?(StringLiteral_u000A,(pSVar1->klass->_0).element_class), iVar3 != 0))
    {
      pSVar4 = StringLiteral_u000A;
      if (2 < pSVar1->max_length) {
        pSVar1->vector[2] = StringLiteral_u000A;
        func_?(pSVar1->vector + 2,pSVar4);
        TypeInfo__GNU__Gettext__CatalogParser->static_fields->LineSplitStrings = pSVar1;
        func_?(TypeInfo__GNU__Gettext__CatalogParser->static_fields,pSVar1);
        return;
      }
      goto code_?;
    }
  }
  uVar2 = func_?(0);
  func_?(uVar2);
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  if ((TypeInfo__GNU__Gettext__CatalogParser->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__GNU__Gettext__CatalogParser);
  }
  pSVar1 = CatalogParser_GetNewLine(text,encoding,(MethodInfo *)0x0);
  (this->fields)._NewLine_k__BackingField = pSVar1;
  func_?(&this->fields,pSVar1);
  return;
}

