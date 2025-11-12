
/* Boolean OnEntry(String, String, Boolean, String[], String, String[], String, String[], String) */

bool Assembly-CSharp.dll::GNU::Gettext::CharsetInfoFinder::CharsetInfoFinder_OnEntry
               (CharsetInfoFinder *this,String *msgid,String *msgidPlural,bool hasPlural,
               String__Array *translations,String *flags,String__Array *references,String *comment,
               String__Array *autocomments,String *msgctxt,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GNU__Gettext__Catalog);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_CHARSET);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_iso_8859_1);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((msgid != (String *)0x0) && ((msgid->fields)._stringLength != 0)) {
    return 1;
  }
  this_00 = (Catalog *)FUN_?(TypeInfo__GNU__Gettext__Catalog);
  Catalog::Catalog__ctor(this_00,(MethodInfo *)0x0);
  if (translations != (String__Array *)0x0) {
    if ((int)translations->max_length == 0) {
      FUN_?();
      pcVar1 = (code *)swi(3);
      bVar2 = (*pcVar1)();
      return bVar2;
    }
    if (this_00 != (Catalog *)0x0) {
      Catalog::Catalog_ParseHeaderString(this_00,translations->vector[0],(MethodInfo *)0x0);
      iVar3 = iRam_?;
      (this->fields).charset = (this_00->fields).Charset;
      if (iVar3 != 0) {
        uVar4 = (uint)((ulonglong)&(this->fields).charset >> 0xc);
        lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
        do {
          uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
          puVar7 = (ulonglong *)(lVar5 + 0xADDR);
          LOCK();
          bVar8 = uVar6 == *puVar7;
          if (bVar8) {
            *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
          iVar3 = iRam_?;
        } while (!bVar8);
      }
      pSVar9 = (this->fields).charset;
      if (((pSVar9 == StringLiteral_CHARSET) ||
          ((((pSVar9 != (String *)0x0 && (StringLiteral_CHARSET != (String *)0x0)) &&
            ((pSVar9->fields)._stringLength == (StringLiteral_CHARSET->fields)._stringLength)) &&
           (bVar2 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                              ((uint8_t *)&(pSVar9->fields)._firstChar,
                               (uint8_t *)&(StringLiteral_CHARSET->fields)._firstChar,
                               (longlong)(pSVar9->fields)._stringLength * 2,(MethodInfo *)0x0),
           bVar2 != 0)))) && ((this->fields).charset = StringLiteral_iso_8859_1, iVar3 != 0)) {
        uVar4 = (uint)((ulonglong)&(this->fields).charset >> 0xc);
        lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
        do {
          uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
          puVar7 = (ulonglong *)(lVar5 + 0xADDR);
          LOCK();
          bVar8 = uVar6 == *puVar7;
          if (bVar8) {
            *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
        } while (!bVar8);
      }
      return 0;
    }
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  bVar2 = (*pcVar1)();
  return bVar2;
}


/* CharsetInfoFinder(String) */

void Assembly-CSharp.dll::GNU::Gettext::CharsetInfoFinder::CharsetInfoFinder__ctor
               (CharsetInfoFinder *this,String *text,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GNU__Gettext__CatalogParser);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_iso_8859_1);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  encoding = mscorlib.dll::System::Text::Encoding::Encoding_GetEncoding_2
                       (StringLiteral_iso_8859_1,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__GNU__Gettext__CatalogParser->_1).field_0x1c == 0) {
    FUN_?();
  }
  CatalogParser::CatalogParser__ctor((CatalogParser *)this,text,encoding,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields).charset = StringLiteral_iso_8859_1;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).charset >> 0xc);
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
  return;
}

