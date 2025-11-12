
/* String GetNewLine(String, Encoding) */

String * Assembly-CSharp.dll::GNU::Gettext::CatalogParser::CatalogParser_GetNewLine
                   (String *text,Encoding *encoding,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Char);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__IDisposable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__IO__StringReader);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_u000A);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_u000Du000A);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_u000D);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  c = 0x78;
  lVar1 = FUN_?(TypeInfo__System__Char,1);
  if (lVar1 == 0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pSVar3 = (String *)(*pcVar2)();
    return pSVar3;
  }
  if (*(int *)(lVar1 + 0x18) == 0) {
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
  }
  else {
    *(undefined2 *)(lVar1 + 0x20) = 0x78;
    this = (StringReader *)FUN_?(TypeInfo__System__IO__StringReader);
    mscorlib.dll::System::IO::StringReader::StringReader__ctor(this,text,(MethodInfo *)0x0);
    uStack_4 = 0;
    ppSStack_5 = apSStack_6;
    apSStack_6[0] = this;
    while (apSStack_6[0] != (StringReader *)0x0) {
      iVar7 = (*(apSStack_6[0]->klass->vtable).Read_1.methodPtr)
                        (apSStack_6[0],lVar1,0,1,(apSStack_6[0]->klass->vtable).Read_1.method);
      pSVar8 = StringLiteral_u000A;
      pSVar9 = StringLiteral_u000Du000A;
      pSVar3 = StringLiteral_u000D;
      if (iVar7 == 0) {
        if (apSStack_6[0] != (StringReader *)0x0) {
          FUN_?(0,TypeInfo__System__IDisposable,apSStack_6[0]);
        }
        if (c == 0x78) {
          pSVar3 = mscorlib.dll::System::Environment::Environment_get_NewLine((MethodInfo *)0x0);
          return pSVar3;
        }
        if ((*(int *)(lRam_? + 0xe4) == 0) &&
           (FUN_?(), *(int *)(lRam_? + 0xe4) == 0)) {
          FUN_?();
        }
        pSVar3 = mscorlib.dll::System::Char::Char_ToString_2(c,(MethodInfo *)0x0);
        return pSVar3;
      }
      if (*(int *)(lVar1 + 0x18) == 0) goto code_?;
      if (*(short *)(lVar1 + 0x20) == 10) {
        if (c == 0xd) {
          if (apSStack_6[0] == (StringReader *)0x0) {
            return StringLiteral_u000Du000A;
          }
          FUN_?(0,TypeInfo__System__IDisposable,apSStack_6[0]);
          return pSVar9;
        }
        if (apSStack_6[0] == (StringReader *)0x0) {
          return StringLiteral_u000A;
        }
        FUN_?(0,TypeInfo__System__IDisposable,apSStack_6[0]);
        return pSVar8;
      }
      if (*(int *)(lVar1 + 0x18) == 0) goto code_?;
      if (*(short *)(lVar1 + 0x20) == 0xd) {
        if (c == 0x78) {
          c = 0xd;
        }
        else if (c == 0xd) {
          if (apSStack_6[0] != (StringReader *)0x0) {
            FUN_?(0,TypeInfo__System__IDisposable,apSStack_6[0]);
          }
          return pSVar3;
        }
      }
      else if (c != 0x78) {
        if ((*(int *)(lRam_? + 0xe4) == 0) &&
           (FUN_?(), *(int *)(lRam_? + 0xe4) == 0)) {
          FUN_?();
        }
        pSVar3 = mscorlib.dll::System::Char::Char_ToString_2(c,(MethodInfo *)0x0);
        if (apSStack_6[0] == (StringReader *)0x0) {
          return pSVar3;
        }
        FUN_?(0,TypeInfo__System__IDisposable,apSStack_6[0]);
        return pSVar3;
      }
    }
  }
  FUN_?();
  FUN_?();
  pcVar2 = (code *)swi(3);
  pSVar3 = (String *)(*pcVar2)();
  return pSVar3;
}


/* Boolean Parse(String) */

bool Assembly-CSharp.dll::GNU::Gettext::CatalogParser::CatalogParser_Parse
               (CatalogParser *this,String *text,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GNU__Gettext__CatalogParser);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Console);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__IDisposable);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<System::String>__Clear__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<System::String>__ToArray__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<System::String>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<System::String>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__IO__Path);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Text__StringBuilder);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__IO__StringReader);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_u000A);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral___);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Broken_catalog_file__plural_form);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_msgid__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_msgstr__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_msgid_plural__);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral____);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral____);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_msgctxtu0009_);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral___);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_msgstru0009_);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral___);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral____);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_msgid_pluralu0009_);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral____);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_msgidu0009_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_u0009_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_msgctxt__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Broken_catalog_file__singular_fo);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_msgstr_);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral___);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  apSStackX_10[0] = (String *)0x0;
  pSStackX_20 = (String *)0x0;
  pSStack_1 = (String *)**(undefined8 **)(lRam_? + 0xb8);
  pSStack_2 = (String *)**(undefined8 **)(lRam_? + 0xb8);
  pSStack_3 = (String *)**(undefined8 **)(lRam_? + 0xb8);
  pSStack_4 = (String *)**(undefined8 **)(lRam_? + 0xb8);
  pSVar5 = (String *)**(undefined8 **)(lRam_? + 0xb8);
  pSStack_6 = pSVar5;
  this_00 = (List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
             *)FUN_?(TypeInfo__System__Collections__Generic__List<System::String>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<System::String>__List__);
  this_01 = (List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
             *)FUN_?(TypeInfo__System__Collections__Generic__List<System::String>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_01,
             MethodInfo__System__Collections__Generic__List<System::String>__List__);
  this_02 = (List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
             *)FUN_?(TypeInfo__System__Collections__Generic__List<System::String>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_02,
             MethodInfo__System__Collections__Generic__List<System::String>__List__);
  bVar7 = false;
  this_03 = (StringReader *)FUN_?(TypeInfo__System__IO__StringReader);
  mscorlib.dll::System::IO::StringReader::StringReader__ctor(this_03,text,(MethodInfo *)0x0);
  uStack_8 = 0;
  ppSStack_9 = &pSStack_10;
  pSStack_10 = this_03;
  if (this_03 != (StringReader *)0x0) {
    pSVar11 = (String *)
             (*(this_03->klass->vtable).ReadLine.methodPtr)
                       (this_03,(this_03->klass->vtable).ReadLine.method);
    do {
      apSStackX_10[0] = pSVar11;
      if (pSVar11 != ::StringLiteral__) {
        if (pSVar11 != (String *)0x0) {
          if (((::StringLiteral__ != (String *)0x0) &&
              ((pSVar11->fields)._stringLength == (::StringLiteral__->fields)._stringLength)) &&
             (bVar12 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                ((uint8_t *)&(pSVar11->fields)._firstChar,
                                 (uint8_t *)&(::StringLiteral__->fields)._firstChar,
                                 (longlong)(pSVar11->fields)._stringLength * 2,(MethodInfo *)0x0),
             bVar12 != 0)) goto code_?;
          if (pSVar11 != (String *)0x0) goto code_?;
        }
        if (pSStack_10 != (StringReader *)0x0) {
          FUN_?(0,TypeInfo__System__IDisposable,pSStack_10);
        }
        goto code_?;
      }
code_?:
      if (pSStack_10 == (StringReader *)0x0) goto code_?;
      pSVar11 = (String *)
               (*(pSStack_10->klass->vtable).ReadLine.methodPtr)
                         (pSStack_10,(pSStack_10->klass->vtable).ReadLine.method);
    } while( true );
  }
  goto code_?;
code_?:
  pSVar11 = (String *)**(longlong **)(lRam_? + 0xb8);
  pSStackX_20 = pSVar5;
  if ((pSVar5 != pSVar11) &&
     ((((pSVar5 == (String *)0x0 || (pSVar11 == (String *)0x0)) ||
       ((pSVar5->fields)._stringLength != (pSVar11->fields)._stringLength)) ||
      (bVar12 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                         ((uint8_t *)&(pSVar5->fields)._firstChar,
                          (uint8_t *)&(pSVar11->fields)._firstChar,
                          (longlong)(pSVar5->fields)._stringLength * 2,(MethodInfo *)0x0),
      bVar12 == 0)))) {
    uVar13 = 0;
    puVar14 = &(pSVar5->fields)._firstChar;
    while( true ) {
      if (pSVar5 == (String *)0x0) goto code_?;
      if ((pSVar5->fields)._stringLength <= (int)uVar13) break;
      if ((longlong)(pSVar5->fields)._stringLength <= (longlong)uVar13) goto code_?;
      if (*puVar14 == 0x3a) break;
      uVar13 = (ulonglong)((int)uVar13 + 1);
      puVar14 = puVar14 + 1;
    }
    do {
      if (pSVar5 == (String *)0x0) goto code_?;
      iVar15 = (int)uVar13;
      if ((pSVar5->fields)._stringLength <= iVar15) goto code_?;
      if ((longlong)(pSVar5->fields)._stringLength <= (longlong)uVar13) goto code_?;
      c = (&(pSVar5->fields)._firstChar)[iVar15];
      if (*(int *)(lRam_? + 0xe4) == 0) {
        FUN_?();
      }
      bVar12 = mscorlib.dll::System::Char::Char_IsWhiteSpace(c,(MethodInfo *)0x0);
      pSVar5 = pSStackX_20;
      if (bVar12 != 0) goto code_?;
      uVar13 = (ulonglong)(iVar15 + 1);
    } while( true );
  }
  if (pSStack_10 != (StringReader *)0x0) goto code_?;
  goto code_?;
code_?:
  if (pSVar5 == (String *)0x0) goto code_?;
  pSVar5 = mscorlib.dll::System::String::String_Substring_1(pSVar5,0,iVar15,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__System__IO__Path->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (TypeInfo__System__IO__Path->static_fields->DirectorySeparatorChar == 0x5c) {
    if (*(int *)&(TypeInfo__System__IO__Path->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (pSVar5 == (String *)0x0) goto code_?;
    pSVar5 = mscorlib.dll::System::String::String_Replace
                        (pSVar5,0x2f,
                         TypeInfo__System__IO__Path->static_fields->DirectorySeparatorChar,
                         (MethodInfo *)0x0);
  }
  if (this_00 ==
      (List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
       *)0x0) goto code_?;
  FUN_?(this_00,pSVar5,
                MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_)
  ;
  if (pSStackX_20 == (String *)0x0) goto code_?;
  pSVar5 = mscorlib.dll::System::String::String_Substring_1
                      (pSStackX_20,iVar15,(pSStackX_20->fields)._stringLength - iVar15,
                       (MethodInfo *)0x0);
  if (pSVar5 == (String *)0x0) goto code_?;
  pSVar5 = mscorlib.dll::System::String::String_TrimWhiteSpaceHelper
                      (pSVar5,String_TrimType__Enum_Both,(MethodInfo *)0x0);
  goto code_?;
code_?:
  if (pSVar11 == (String *)0x0) {
code_?:
    if (pSStack_10 != (StringReader *)0x0) {
      FUN_?(0,TypeInfo__System__IDisposable,pSStack_10);
    }
    bVar12 = 1;
  }
  else {
    while (((pSVar11 == ::StringLiteral___ ||
            ((((pSVar11 != (String *)0x0 && (::StringLiteral___ != (String *)0x0)) &&
              (((pSVar11->fields)._stringLength == (::StringLiteral___->fields)._stringLength &&
               (bVar12 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                  ((uint8_t *)&(pSVar11->fields)._firstChar,
                                   (uint8_t *)&(::StringLiteral___->fields)._firstChar,
                                   (longlong)(pSVar11->fields)._stringLength * 2,(MethodInfo *)0x0),
               bVar12 != 0)))) || (pSVar11 == ::StringLiteral___)))) ||
           (((pSVar11 != (String *)0x0 && (::StringLiteral___ != (String *)0x0)) &&
            (((pSVar11->fields)._stringLength == (::StringLiteral___->fields)._stringLength &&
             (bVar12 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                ((uint8_t *)&(pSVar11->fields)._firstChar,
                                 (uint8_t *)&(::StringLiteral___->fields)._firstChar,
                                 (longlong)(pSVar11->fields)._stringLength * 2,(MethodInfo *)0x0),
             bVar12 != 0))))))) {
      if (pSStack_10 == (StringReader *)0x0) goto code_?;
      pSVar11 = (String *)
               (*(pSStack_10->klass->vtable).ReadLine.methodPtr)
                         (pSStack_10,(pSStack_10->klass->vtable).ReadLine.method);
      apSStackX_10[0] = pSVar11;
    }
    if (*(int *)&(TypeInfo__GNU__Gettext__CatalogParser->_1).field_0x1c == 0) {
      FUN_?();
    }
    bVar12 = CatalogParser_ReadParam(pSVar11,::StringLiteral____,&pSStackX_20,(MethodInfo *)0x0);
    if (bVar12 != 0) {
      pSStack_1 = pSStackX_20;
      if (pSStack_10 != (StringReader *)0x0) {
        apSStackX_10[0] =
             (String *)
             (*(pSStack_10->klass->vtable).ReadLine.methodPtr)
                       (pSStack_10,(pSStack_10->klass->vtable).ReadLine.method);
        pSVar5 = pSStack_6;
        goto code_?;
      }
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowIndexOutOfRangeException
                ((MethodInfo *)0x0);
code_?:
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowIndexOutOfRangeException
                ((MethodInfo *)0x0);
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
      goto code_?;
    }
code_?:
    pSVar11 = apSStackX_10[0];
    if (*(int *)&(TypeInfo__GNU__Gettext__CatalogParser->_1).field_0x1c == 0) {
      FUN_?();
    }
    bVar12 = CatalogParser_ReadParam(pSVar11,::StringLiteral____,&pSStackX_20,(MethodInfo *)0x0);
    pSVar11 = apSStackX_10[0];
    if (bVar12 != 0) {
code_?:
      if (this_01 !=
          (List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
           *)0x0) {
        FUN_?(this_01,pSStackX_20,
                      MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                     );
        if (pSStack_10 != (StringReader *)0x0) {
          apSStackX_10[0] =
               (String *)
               (*(pSStack_10->klass->vtable).ReadLine.methodPtr)
                         (pSStack_10,(pSStack_10->klass->vtable).ReadLine.method);
          goto code_?;
        }
        goto code_?;
      }
      goto code_?;
    }
    if (*(int *)&(TypeInfo__GNU__Gettext__CatalogParser->_1).field_0x1c == 0) {
      FUN_?();
    }
    bVar12 = CatalogParser_ReadParam(pSVar11,::StringLiteral___,&pSStackX_20,(MethodInfo *)0x0);
    pSVar11 = apSStackX_10[0];
    if (bVar12 != 0) goto code_?;
    if (*(int *)&(TypeInfo__GNU__Gettext__CatalogParser->_1).field_0x1c == 0) {
      FUN_?();
    }
    bVar12 = CatalogParser_ReadParam(pSVar11,::StringLiteral____,&pSStackX_20,(MethodInfo *)0x0);
    pSVar11 = apSStackX_10[0];
    if (bVar12 != 0) {
      if (pSStackX_20 == (String *)0x0) goto code_?;
      pSVar5 = mscorlib.dll::System::String::String_TrimWhiteSpaceHelper
                          (pSStackX_20,String_TrimType__Enum_Both,(MethodInfo *)0x0);
      goto code_?;
    }
    if (*(int *)&(TypeInfo__GNU__Gettext__CatalogParser->_1).field_0x1c == 0) {
      FUN_?();
    }
    bVar12 = CatalogParser_ReadParam(pSVar11,StringLiteral_msgctxt__,&pSStackX_20,(MethodInfo *)0x0);
    pSVar11 = apSStackX_10[0];
    if (bVar12 != 0) {
code_?:
      pSStack_3 = CatalogParser_ParseMessage
                             (this,apSStackX_10,&pSStackX_20,pSStack_10,(MethodInfo *)0x0);
      goto code_?;
    }
    if (*(int *)&(TypeInfo__GNU__Gettext__CatalogParser->_1).field_0x1c == 0) {
      FUN_?();
    }
    bVar12 = CatalogParser_ReadParam
                      (pSVar11,StringLiteral_msgctxtu0009_,&pSStackX_20,(MethodInfo *)0x0);
    pSVar11 = apSStackX_10[0];
    if (bVar12 != 0) goto code_?;
    if (*(int *)&(TypeInfo__GNU__Gettext__CatalogParser->_1).field_0x1c == 0) {
      FUN_?();
    }
    bVar12 = CatalogParser_ReadParam(pSVar11,StringLiteral_msgid__,&pSStackX_20,(MethodInfo *)0x0);
    pSVar11 = apSStackX_10[0];
    if (bVar12 != 0) {
code_?:
      pSStack_2 = CatalogParser_ParseMessage
                             (this,apSStackX_10,&pSStackX_20,pSStack_10,(MethodInfo *)0x0);
      goto code_?;
    }
    if (*(int *)&(TypeInfo__GNU__Gettext__CatalogParser->_1).field_0x1c == 0) {
      FUN_?();
    }
    bVar12 = CatalogParser_ReadParam(pSVar11,StringLiteral_msgidu0009_,&pSStackX_20,(MethodInfo *)0x0)
    ;
    pSVar11 = apSStackX_10[0];
    if (bVar12 != 0) goto code_?;
    if (*(int *)&(TypeInfo__GNU__Gettext__CatalogParser->_1).field_0x1c == 0) {
      FUN_?();
    }
    bVar12 = CatalogParser_ReadParam
                      (pSVar11,StringLiteral_msgid_plural__,&pSStackX_20,(MethodInfo *)0x0);
    pSVar11 = apSStackX_10[0];
    if (bVar12 != 0) {
code_?:
      pSStack_4 = CatalogParser_ParseMessage
                             (this,apSStackX_10,&pSStackX_20,pSStack_10,(MethodInfo *)0x0);
      bVar7 = true;
      goto code_?;
    }
    if (*(int *)&(TypeInfo__GNU__Gettext__CatalogParser->_1).field_0x1c == 0) {
      FUN_?();
    }
    bVar12 = CatalogParser_ReadParam
                      (pSVar11,StringLiteral_msgid_pluralu0009_,&pSStackX_20,(MethodInfo *)0x0);
    pSVar11 = apSStackX_10[0];
    if (bVar12 != 0) goto code_?;
    if (*(int *)&(TypeInfo__GNU__Gettext__CatalogParser->_1).field_0x1c == 0) {
      FUN_?();
    }
    bVar12 = CatalogParser_ReadParam(pSVar11,StringLiteral_msgstr__,&pSStackX_20,(MethodInfo *)0x0);
    pSVar11 = apSStackX_10[0];
    if (bVar12 == 0) {
      if (*(int *)&(TypeInfo__GNU__Gettext__CatalogParser->_1).field_0x1c == 0) {
        FUN_?();
      }
      bVar12 = CatalogParser_ReadParam
                        (pSVar11,StringLiteral_msgstru0009_,&pSStackX_20,(MethodInfo *)0x0);
      pSVar11 = apSStackX_10[0];
      if (bVar12 != 0) goto code_?;
      if (*(int *)&(TypeInfo__GNU__Gettext__CatalogParser->_1).field_0x1c == 0) {
        FUN_?();
      }
      bVar12 = CatalogParser_ReadParam(pSVar11,StringLiteral_msgstr_,&pSStackX_20,(MethodInfo *)0x0);
      pSVar11 = apSStackX_10[0];
      if (bVar12 == 0) {
        if (*(int *)&(TypeInfo__GNU__Gettext__CatalogParser->_1).field_0x1c == 0) {
          FUN_?();
        }
        bVar12 = CatalogParser_ReadParam(pSVar11,::StringLiteral____,&pSStackX_20,(MethodInfo *)0x0);
        if (bVar12 == 0) {
          if (apSStackX_10[0] != (String *)0x0) {
            if ((apSStackX_10[0]->fields)._stringLength < 1) goto code_?;
            if ((apSStackX_10[0]->fields)._firstChar == 0x23) {
              while ((apSStackX_10[0] != (String *)0x0 &&
                     (iVar15 = (apSStackX_10[0]->fields)._stringLength, iVar15 != 0))) {
                if (iVar15 < 1) goto code_?;
                if (((apSStackX_10[0]->fields)._firstChar != 0x23) ||
                   ((1 < (uint)(apSStackX_10[0]->fields)._stringLength &&
                    ((((*(short *)&(apSStackX_10[0]->fields).field_0x6 == 0x2c ||
                       (*(short *)&(apSStackX_10[0]->fields).field_0x6 == 0x3a)) ||
                      (*(short *)&(apSStackX_10[0]->fields).field_0x6 == 0x2e)) ||
                     (*(short *)&(apSStackX_10[0]->fields).field_0x6 == 0x7e)))))) break;
                if (pSVar5 == (String *)0x0) goto code_?;
                pSVar11 = apSStackX_10[0];
                if (0 < (pSVar5->fields)._stringLength) {
                  pSVar11 = mscorlib.dll::System::String::String_Concat_4
                                     (StringLiteral_u000A,apSStackX_10[0],(MethodInfo *)0x0);
                }
                pSVar5 = mscorlib.dll::System::String::String_Concat_4
                                    (pSVar5,pSVar11,(MethodInfo *)0x0);
                pSStack_6 = pSVar5;
                if (pSStack_10 == (StringReader *)0x0) goto code_?;
                apSStackX_10[0] =
                     (String *)
                     (*(pSStack_10->klass->vtable).ReadLine.methodPtr)
                               (pSStack_10,(pSStack_10->klass->vtable).ReadLine.method);
              }
              goto code_?;
            }
          }
          if (pSStack_10 != (StringReader *)0x0) goto code_?;
          goto code_?;
        }
        this_04 = (List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
                   *)FUN_?(TypeInfo__System__Collections__Generic__List<System::String>);
        mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
        __Il2CppFullySharedGenericType]::
        LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                  ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_04,
                   MethodInfo__System__Collections__Generic__List<System::String>__List__);
        if (this_04 ==
            (List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
             *)0x0) goto code_?;
        FUN_?(this_04,apSStackX_10[0],
                      MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                     );
        while( true ) {
          if (pSStack_10 == (StringReader *)0x0) goto code_?;
          pSVar5 = (String *)
                    (*(pSStack_10->klass->vtable).ReadLine.methodPtr)
                              (pSStack_10,(pSStack_10->klass->vtable).ReadLine.method);
          apSStackX_10[0] = pSVar5;
          if ((pSVar5 == (String *)0x0) || ((pSVar5->fields)._stringLength == 0)) break;
          if (*(int *)&(TypeInfo__GNU__Gettext__CatalogParser->_1).field_0x1c == 0) {
            FUN_?();
          }
          bVar12 = CatalogParser_ReadParam
                            (pSVar5,::StringLiteral____,&pSStackX_20,(MethodInfo *)0x0);
          if (bVar12 == 0) break;
          FUN_?(this_04,apSStackX_10[0],
                        MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                       );
        }
        pRVar16 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::UIR::
                  RenderTreeManager+VisualChangesProcessor+EntryProcessingInfo]::
                  List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo__ToArray
                            (this_04,
                             MethodInfo__System__Collections__Generic__List<System::String>__ToArray__
                            );
        if (this_01 ==
            (List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
             *)0x0) goto code_?;
        pRVar17 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::UIR::
                  RenderTreeManager+VisualChangesProcessor+EntryProcessingInfo]::
                  List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo__ToArray
                            (this_01,
                             MethodInfo__System__Collections__Generic__List<System::String>__ToArray__
                            );
        cVar18 = (*(this->klass->vtable).OnDeletedEntry.methodPtr)
                          (this,pRVar16,pSStack_1,0,pSStack_6,pRVar17,
                           (this->klass->vtable).OnDeletedEntry.method);
        if (cVar18 != '\0') {
          pSStack_6 = (String *)**(undefined8 **)(lRam_? + 0xb8);
          pSStack_1 = pSStack_6;
          pSStack_2 = pSStack_6;
          pSStack_4 = pSStack_6;
          pSStack_3 = pSStack_6;
          if (this_00 ==
              (List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
               *)0x0) goto code_?;
          piVar19 = &(this_00->fields)._version;
          *piVar19 = *piVar19 + 1;
          iVar20 = (this_00->fields)._size;
          (this_00->fields)._size = 0;
          if (0 < iVar20) {
            mscorlib.dll::System::Array::Array_Clear
                      ((Array *)(this_00->fields)._items,0,iVar20,(MethodInfo *)0x0);
          }
          piVar19 = &(this_01->fields)._version;
          *piVar19 = *piVar19 + 1;
          iVar20 = (this_01->fields)._size;
          (this_01->fields)._size = 0;
          if (0 < iVar20) {
            mscorlib.dll::System::Array::Array_Clear
                      ((Array *)(this_01->fields)._items,0,iVar20,(MethodInfo *)0x0);
          }
          if (this_02 ==
              (List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
               *)0x0) goto code_?;
          goto code_?;
        }
        if (pSStack_10 != (StringReader *)0x0) {
          FUN_?(0,TypeInfo__System__IDisposable,pSStack_10);
        }
      }
      else {
        if (bVar7) {
          if (pSStackX_20 != (String *)0x0) {
            iVar20 = mscorlib.dll::System::SpanHelpers::SpanHelpers_IndexOf_2
                              (&(pSStackX_20->fields)._firstChar,0x5d,
                               (pSStackX_20->fields)._stringLength,(MethodInfo *)0x0);
            if (pSStackX_20 != (String *)0x0) {
              pSVar5 = mscorlib.dll::System::String::String_Substring_1
                                  (pSStackX_20,iVar20 + -1,1,(MethodInfo *)0x0);
              pSVar5 = mscorlib.dll::System::String::String_Concat_5
                                  (StringLiteral_msgstr_,pSVar5,::StringLiteral__,(MethodInfo *)0x0
                                  );
              do {
                pSVar11 = apSStackX_10[0];
                pSVar21 = mscorlib.dll::System::String::String_Concat_4
                                    (pSVar5,::StringLiteral___,(MethodInfo *)0x0);
                if (*(int *)&(TypeInfo__GNU__Gettext__CatalogParser->_1).field_0x1c == 0) {
                  FUN_?();
                }
                bVar12 = CatalogParser_ReadParam(pSVar11,pSVar21,&pSStackX_20,(MethodInfo *)0x0);
                pSVar11 = apSStackX_10[0];
                if (bVar12 == 0) {
                  pSVar21 = mscorlib.dll::System::String::String_Concat_4
                                      (pSVar5,StringLiteral_u0009_,(MethodInfo *)0x0);
                  if (*(int *)&(TypeInfo__GNU__Gettext__CatalogParser->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  bVar12 = CatalogParser_ReadParam(pSVar11,pSVar21,&pSStackX_20,(MethodInfo *)0x0);
                  if (bVar12 == 0) goto code_?;
                }
                if (pSStackX_20 == (String *)0x0) goto code_?;
                pSVar11 = mscorlib.dll::System::String::String_Substring_1
                                   (pSStackX_20,0,(pSStackX_20->fields)._stringLength + -1,
                                    (MethodInfo *)0x0);
                this_05 = (StringBuilder *)FUN_?(TypeInfo__System__Text__StringBuilder);
                if (pSVar11 == (String *)0x0) {
                  iVar20 = 0;
                  pSVar11 = (String *)0x0;
                }
                else {
                  iVar20 = (pSVar11->fields)._stringLength;
                }
                mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor_4
                          (this_05,pSVar11,0,iVar20,0x10,(MethodInfo *)0x0);
                while( true ) {
                  if (pSStack_10 == (StringReader *)0x0) goto code_?;
                  pSVar11 = (String *)
                           (*(pSStack_10->klass->vtable).ReadLine.methodPtr)
                                     (pSStack_10,(pSStack_10->klass->vtable).ReadLine.method);
                  apSStackX_10[0] = pSVar11;
                  if ((pSVar11 == (String *)0x0) || ((pSVar11->fields)._stringLength == 0))
                  goto code_?;
                  if (pSVar11 == (String *)0x0) goto code_?;
                  if ((pSVar11->fields)._stringLength < 1) goto code_?;
                  if ((pSVar11->fields)._firstChar == 9) {
                    pSVar11 = mscorlib.dll::System::String::String_Substring_1
                                       (pSVar11,1,(pSVar11->fields)._stringLength + -1,
                                        (MethodInfo *)0x0);
                  }
                  apSStackX_10[0] = pSVar11;
                  if (pSVar11 == (String *)0x0) goto code_?;
                  if ((pSVar11->fields)._stringLength < 1) goto code_?;
                  if ((pSVar11->fields)._firstChar != 0x22) break;
                  uVar22 = (pSVar11->fields)._stringLength;
                  if ((uint)(pSVar11->fields)._stringLength <= uVar22 - 1) goto code_?;
                  if (*(short *)((longlong)&(pSVar11->fields)._stringLength +
                                (ulonglong)uVar22 * 2 + 2) != 0x22) break;
                  pSVar11 = mscorlib.dll::System::String::String_Substring_1
                                     (pSVar11,1,uVar22 - 2,(MethodInfo *)0x0);
                  if (this_05 == (StringBuilder *)0x0) goto code_?;
                  mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                            (this_05,pSVar11,(MethodInfo *)0x0);
                }
                if (*(int *)&(TypeInfo__GNU__Gettext__CatalogParser->_1).field_0x1c == 0) {
                  FUN_?();
                }
                bVar12 = CatalogParser_ReadParam
                                  (pSVar11,StringLiteral_msgstr_,&pSStackX_20,(MethodInfo *)0x0);
                if (bVar12 != 0) {
                  if (pSStackX_20 == (String *)0x0) goto code_?;
                  iVar20 = mscorlib.dll::System::SpanHelpers::SpanHelpers_IndexOf_2
                                    (&(pSStackX_20->fields)._firstChar,0x5d,
                                     (pSStackX_20->fields)._stringLength,(MethodInfo *)0x0);
                  if (pSStackX_20 == (String *)0x0) goto code_?;
                  pSVar5 = mscorlib.dll::System::String::String_Substring_1
                                      (pSStackX_20,iVar20 + -1,1,(MethodInfo *)0x0);
                  pSVar5 = mscorlib.dll::System::String::String_Concat_5
                                      (StringLiteral_msgstr_,pSVar5,::StringLiteral__,
                                       (MethodInfo *)0x0);
                }
code_?:
                if (this_05 == (StringBuilder *)0x0) goto code_?;
                pSVar11 = (String *)(*(this_05->klass->vtable).ToString.methodPtr)(this_05);
                pSVar11 = StringEscaping::StringEscaping_FromGettextFormat(pSVar11,(MethodInfo *)0x0);
                if (this_02 ==
                    (List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
                     *)0x0) goto code_?;
                FUN_?(this_02,pSVar11);
              } while( true );
            }
            goto code_?;
          }
          goto code_?;
        }
        if (*(int *)&(TypeInfo__System__Console->_1).field_0x1c == 0) {
          FUN_?();
        }
        mscorlib.dll::System::Console::Console_WriteLine
                  (StringLiteral_Broken_catalog_file__plural_form,(MethodInfo *)0x0);
        if (pSStack_10 != (StringReader *)0x0) {
          FUN_?(0,TypeInfo__System__IDisposable,pSStack_10);
        }
      }
    }
    else {
code_?:
      if (bVar7) {
        if (*(int *)&(TypeInfo__System__Console->_1).field_0x1c == 0) {
          FUN_?();
        }
        mscorlib.dll::System::Console::Console_WriteLine
                  (StringLiteral_Broken_catalog_file__singular_fo,(MethodInfo *)0x0);
        if (pSStack_10 != (StringReader *)0x0) {
          FUN_?(0,TypeInfo__System__IDisposable,pSStack_10);
        }
      }
      else {
        uVar13 = 0;
        pSVar5 = CatalogParser_ParseMessage
                            (this,apSStackX_10,&pSStackX_20,pSStack_10,(MethodInfo *)0x0);
        if (this_02 ==
            (List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
             *)0x0) goto code_?;
        FUN_?(this_02,pSVar5,
                      MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                     );
        uVar23 = **(undefined8 **)(lRam_? + 0xb8);
        pRVar16 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::UIR::
                  RenderTreeManager+VisualChangesProcessor+EntryProcessingInfo]::
                  List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo__ToArray
                            (this_02,
                             MethodInfo__System__Collections__Generic__List<System::String>__ToArray__
                            );
        if (this_00 ==
            (List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
             *)0x0) goto code_?;
        pRVar17 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::UIR::
                  RenderTreeManager+VisualChangesProcessor+EntryProcessingInfo]::
                  List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo__ToArray
                            (this_00,
                             MethodInfo__System__Collections__Generic__List<System::String>__ToArray__
                            );
        if (this_01 ==
            (List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
             *)0x0) goto code_?;
        pRVar24 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::UIR::
                  RenderTreeManager+VisualChangesProcessor+EntryProcessingInfo]::
                  List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo__ToArray
                            (this_01,
                             MethodInfo__System__Collections__Generic__List<System::String>__ToArray__
                            );
        cVar18 = FUN_?(pSStack_3,this,pSStack_2,uVar23,uVar13 & 0xffffffffffffff00,pRVar16,
                              pSStack_1,pRVar17,pSStack_6,pRVar24,pSStack_3);
        if (cVar18 != '\0') {
          pSStack_6 = (String *)**(undefined8 **)(lRam_? + 0xb8);
          piVar19 = &(this_00->fields)._version;
          *piVar19 = *piVar19 + 1;
          iVar20 = (this_00->fields)._size;
          (this_00->fields)._size = 0;
          pSStack_1 = pSStack_6;
          pSStack_2 = pSStack_6;
          pSStack_4 = pSStack_6;
          pSStack_3 = pSStack_6;
          if (0 < iVar20) {
            mscorlib.dll::System::Array::Array_Clear
                      ((Array *)(this_00->fields)._items,0,iVar20,(MethodInfo *)0x0);
          }
          goto code_?;
        }
        if (pSStack_10 != (StringReader *)0x0) {
          FUN_?(0,TypeInfo__System__IDisposable,pSStack_10);
        }
      }
    }
code_?:
    bVar12 = 0;
  }
  return bVar12;
code_?:
  if (this_02 !=
      (List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
       *)0x0) {
    pRVar16 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::UIR::
              RenderTreeManager+VisualChangesProcessor+EntryProcessingInfo]::
              List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo__ToArray
                        (this_02,
                         MethodInfo__System__Collections__Generic__List<System::String>__ToArray__);
    if (this_00 !=
        (List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
         *)0x0) {
      pRVar17 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::UIR::
                RenderTreeManager+VisualChangesProcessor+EntryProcessingInfo]::
                List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo__ToArray
                          (this_00,
                           MethodInfo__System__Collections__Generic__List<System::String>__ToArray__
                          );
      if (this_01 !=
          (List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
           *)0x0) {
        pRVar24 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::UIR::
                  RenderTreeManager+VisualChangesProcessor+EntryProcessingInfo]::
                  List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo__ToArray
                            (this_01,
                             MethodInfo__System__Collections__Generic__List<System::String>__ToArray__
                            );
        cVar18 = FUN_?(pSStack_3,this,pSStack_2,pSStack_4,1,pRVar16,pSStack_1,pRVar17,
                              pSStack_6,pRVar24,pSStack_3);
        if (cVar18 != '\0') {
          pSStack_6 = (String *)**(undefined8 **)(lRam_? + 0xb8);
          piVar19 = &(this_00->fields)._version;
          *piVar19 = *piVar19 + 1;
          iVar20 = (this_00->fields)._size;
          (this_00->fields)._size = 0;
          pSStack_1 = pSStack_6;
          pSStack_2 = pSStack_6;
          pSStack_4 = pSStack_6;
          if (0 < iVar20) {
            mscorlib.dll::System::Array::Array_Clear
                      ((Array *)(this_00->fields)._items,0,iVar20,(MethodInfo *)0x0);
          }
code_?:
          piVar19 = &(this_01->fields)._version;
          *piVar19 = *piVar19 + 1;
          iVar20 = (this_01->fields)._size;
          (this_01->fields)._size = 0;
          if (0 < iVar20) {
            mscorlib.dll::System::Array::Array_Clear
                      ((Array *)(this_01->fields)._items,0,iVar20,(MethodInfo *)0x0);
          }
code_?:
          bVar7 = false;
          piVar19 = &(this_02->fields)._version;
          *piVar19 = *piVar19 + 1;
          iVar20 = (this_02->fields)._size;
          (this_02->fields)._size = 0;
          if (0 < iVar20) {
            mscorlib.dll::System::Array::Array_Clear
                      ((Array *)(this_02->fields)._items,0,iVar20,(MethodInfo *)0x0);
          }
code_?:
          do {
            pSVar5 = pSStack_6;
            pSVar11 = apSStackX_10[0];
            pSVar21 = (String *)**(longlong **)(lRam_? + 0xb8);
            if (apSStackX_10[0] != pSVar21) {
              if (apSStackX_10[0] == (String *)0x0) goto code_?;
              if (((pSVar21 == (String *)0x0) ||
                  ((apSStackX_10[0]->fields)._stringLength != (pSVar21->fields)._stringLength)) ||
                 (bVar12 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                    ((uint8_t *)&(apSStackX_10[0]->fields)._firstChar,
                                     (uint8_t *)&(pSVar21->fields)._firstChar,
                                     (longlong)(apSStackX_10[0]->fields)._stringLength * 2,
                                     (MethodInfo *)0x0), bVar12 == 0)) goto code_?;
            }
            if (pSStack_10 == (StringReader *)0x0) goto code_?;
code_?:
            apSStackX_10[0] =
                 (String *)
                 (*(pSStack_10->klass->vtable).ReadLine.methodPtr)
                           (pSStack_10,(pSStack_10->klass->vtable).ReadLine.method);
          } while( true );
        }
        if (pSStack_10 != (StringReader *)0x0) {
          FUN_?(0,TypeInfo__System__IDisposable,pSStack_10);
        }
        goto code_?;
      }
code_?:
      FUN_?();
    }
    FUN_?();
  }
  FUN_?();
code_?:
  FUN_?();
code_?:
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowIndexOutOfRangeException((MethodInfo *)0x0);
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowIndexOutOfRangeException((MethodInfo *)0x0);
code_?:
  FUN_?();
code_?:
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowIndexOutOfRangeException((MethodInfo *)0x0);
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowIndexOutOfRangeException((MethodInfo *)0x0);
code_?:
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowIndexOutOfRangeException((MethodInfo *)0x0);
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar25 = (code *)swi(3);
  bVar12 = (*pcVar25)();
  return bVar12;
}


/* String ParseMessage(String ByRef, String ByRef, StringReader) */

String * Assembly-CSharp.dll::GNU::Gettext::CatalogParser::CatalogParser_ParseMessage
                   (CatalogParser *this,String **line,String **dummy,StringReader *sr,
                   MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Text__StringBuilder);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*dummy != (String *)0x0) {
    pSVar1 = mscorlib.dll::System::String::String_Substring_1
                       (*dummy,0,((*dummy)->fields)._stringLength + -1,(MethodInfo *)0x0);
    this_00 = (StringBuilder *)FUN_?(TypeInfo__System__Text__StringBuilder);
    if (pSVar1 == (String *)0x0) {
      length = 0;
      pSVar1 = (String *)0x0;
    }
    else {
      length = (pSVar1->fields)._stringLength;
    }
    mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor_4
              (this_00,pSVar1,0,length,0x10,(MethodInfo *)0x0);
    if (sr != (StringReader *)0x0) {
      do {
        pSVar1 = (String *)
                 (*(sr->klass->vtable).ReadLine.methodPtr)(sr,(sr->klass->vtable).ReadLine.method);
        bVar2 = iRam_? != 0;
        *line = pSVar1;
        if (bVar2) {
          uVar3 = (uint)((ulonglong)line >> 0xc);
          puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar5 = *puVar4;
            LOCK();
            uVar6 = *puVar4;
            if (uVar5 == uVar6) {
              *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
            }
            UNLOCK();
          } while (uVar5 != uVar6);
        }
        if ((pSVar1 == (String *)0x0) || ((pSVar1->fields)._stringLength == 0))
        goto code_?;
        pSVar1 = *line;
        if (pSVar1 == (String *)0x0) break;
        if ((pSVar1->fields)._stringLength < 1) {
code_?:
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowIndexOutOfRangeException
                    ((MethodInfo *)0x0);
          pcVar7 = (code *)swi(3);
          pSVar1 = (String *)(*pcVar7)();
          return pSVar1;
        }
        if ((pSVar1->fields)._firstChar == 9) {
          pSVar1 = mscorlib.dll::System::String::String_Substring_1
                             (pSVar1,1,(pSVar1->fields)._stringLength + -1,(MethodInfo *)0x0);
          *line = pSVar1;
          func_?();
        }
        pSVar1 = *line;
        if (pSVar1 == (String *)0x0) break;
        if ((pSVar1->fields)._stringLength < 1) goto code_?;
        if ((pSVar1->fields)._firstChar != 0x22) {
code_?:
          if (this_00 != (StringBuilder *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            pSVar1 = (String *)
                     (*(this_00->klass->vtable).ToString.methodPtr)
                               (this_00,(this_00->klass->vtable).ToString.method);
            return pSVar1;
          }
          break;
        }
        uVar3 = (pSVar1->fields)._stringLength;
        if ((uint)(pSVar1->fields)._stringLength <= uVar3 - 1) goto code_?;
        if (*(short *)((longlong)&(pSVar1->fields)._stringLength + (ulonglong)uVar3 * 2 + 2) != 0x22
           ) goto code_?;
        pSVar1 = mscorlib.dll::System::String::String_Substring_1
                           (pSVar1,1,(pSVar1->fields)._stringLength + -2,(MethodInfo *)0x0);
        pSVar1 = StringEscaping::StringEscaping_FromGettextFormat(pSVar1,(MethodInfo *)0x0);
        if (this_00 == (StringBuilder *)0x0) break;
        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                  (this_00,pSVar1,(MethodInfo *)0x0);
      } while( true );
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar7)();
  return pSVar1;
}


/* Boolean ReadParam(String, String, String ByRef) */

bool Assembly-CSharp.dll::GNU::Gettext::CatalogParser::CatalogParser_ReadParam
               (String *input,String *pattern,String **output,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Char);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral___);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  *output = (String *)**(undefined8 **)(lRam_? + 0xb8);
  if (bVar1) {
    uVar2 = (uint)((ulonglong)output >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  if (input == (String *)0x0) {
    return 0;
  }
  lVar6 = FUN_?(TypeInfo__System__Char);
  if (lVar6 != 0) {
    if ((*(int *)(lVar6 + 0x18) == 0) ||
       (*(undefined2 *)(lVar6 + 0x20) = 0x20, *(uint *)(lVar6 + 0x18) < 2))
    goto code_?;
    *(undefined2 *)(lVar6 + 0x22) = 9;
    if (*(longlong *)(lVar6 + 0x18) == 0) {
      pSVar7 = mscorlib.dll::System::String::String_TrimWhiteSpaceHelper
                         (input,String_TrimType__Enum_Head,(MethodInfo *)0x0);
    }
    else {
      if (*(int *)(lVar6 + 0x18) == 0) goto code_?;
      pSVar7 = mscorlib.dll::System::String::String_TrimHelper
                         (input,(uint16_t *)(lVar6 + 0x20),*(int32_t *)(lVar6 + 0x18),
                          String_TrimType__Enum_Head,(MethodInfo *)0x0);
    }
    if ((pSVar7 != (String *)0x0) && (pattern != (String *)0x0)) {
      if ((pSVar7->fields)._stringLength < (pattern->fields)._stringLength) {
        return 0;
      }
      bVar8 = mscorlib.dll::System::String::String_StartsWith(pSVar7,pattern,(MethodInfo *)0x0);
      if (bVar8 == 0) {
        return 0;
      }
      pSVar9 = mscorlib.dll::System::String::String_TrimWhiteSpaceHelper
                         (pattern,String_TrimType__Enum_Both,(MethodInfo *)0x0);
      if ((pSVar9 != (String *)0x0) &&
         (((pSVar9 != ::StringLiteral___ &&
           (((::StringLiteral___ == (String *)0x0 ||
             ((pSVar9->fields)._stringLength != (::StringLiteral___->fields)._stringLength)) ||
            (bVar8 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                               ((uint8_t *)&(pSVar9->fields)._firstChar,
                                (uint8_t *)&(::StringLiteral___->fields)._firstChar,
                                (longlong)(pSVar9->fields)._stringLength * 2,(MethodInfo *)0x0),
            bVar8 == 0)))) ||
          (pSVar7 = mscorlib.dll::System::String::String_Replace(pSVar7,0x5c,0x2f,(MethodInfo *)0x0)
          , pSVar7 != (String *)0x0)))) {
        startIndex = (pattern->fields)._stringLength;
        pSVar7 = mscorlib.dll::System::String::String_Substring_1
                           (pSVar7,startIndex,(pSVar7->fields)._stringLength - startIndex,
                            (MethodInfo *)0x0);
        lVar6 = FUN_?(TypeInfo__System__Char,2);
        if (lVar6 != 0) {
          if ((*(int *)(lVar6 + 0x18) == 0) ||
             (*(undefined2 *)(lVar6 + 0x20) = 0x20, *(uint *)(lVar6 + 0x18) < 2)) {
code_?:
            FUN_?();
            pcVar10 = (code *)swi(3);
            bVar8 = (*pcVar10)();
            return bVar8;
          }
          *(undefined2 *)(lVar6 + 0x22) = 9;
          if (pSVar7 != (String *)0x0) {
            if (*(longlong *)(lVar6 + 0x18) == 0) {
              pSVar7 = mscorlib.dll::System::String::String_TrimWhiteSpaceHelper
                                 (pSVar7,String_TrimType__Enum_Tail,(MethodInfo *)0x0);
            }
            else {
              if (*(int *)(lVar6 + 0x18) == 0) goto code_?;
              pSVar7 = mscorlib.dll::System::String::String_TrimHelper
                                 (pSVar7,(uint16_t *)(lVar6 + 0x20),*(int32_t *)(lVar6 + 0x18),
                                  String_TrimType__Enum_Tail,(MethodInfo *)0x0);
            }
            pSVar7 = StringEscaping::StringEscaping_FromGettextFormat(pSVar7,(MethodInfo *)0x0);
            *output = pSVar7;
            func_?(output);
            return 1;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  bVar8 = (*pcVar10)();
  return bVar8;
}


/* CatalogParser() */

void Assembly-CSharp.dll::GNU::Gettext::CatalogParser::CatalogParser__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GNU__Gettext__CatalogParser);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__String);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_u000A);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_u000Du000A);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_u000D);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (String__Array *)FUN_?(TypeInfo__System__String,3);
  if (pSVar1 == (String__Array *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FUN_?(pSVar1,0,StringLiteral_u000Du000A);
  FUN_?(pSVar1,1,StringLiteral_u000D);
  FUN_?(pSVar1,2,StringLiteral_u000A);
  bVar3 = iRam_? != 0;
  TypeInfo__GNU__Gettext__CatalogParser->static_fields->LineSplitStrings = pSVar1;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)TypeInfo__GNU__Gettext__CatalogParser->static_fields >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  return;
}


/* CatalogParser(String, Encoding) */

void Assembly-CSharp.dll::GNU::Gettext::CatalogParser::CatalogParser__ctor
               (CatalogParser *this,String *text,Encoding *encoding,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GNU__Gettext__CatalogParser);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__GNU__Gettext__CatalogParser->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar1 = CatalogParser_GetNewLine(text,encoding,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields)._NewLine_k__BackingField = pSVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&this->fields >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  return;
}

