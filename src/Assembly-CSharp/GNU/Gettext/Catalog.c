
/* Void AddDeletedItem(CatalogDeletedEntry) */

void Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_AddDeletedItem
               (Catalog *this,CatalogDeletedEntry *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogDeletedEntry>__Add_GNU__Gettext__CatalogDeletedEntry_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = 
  MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogDeletedEntry>__Add_GNU__Gettext__CatalogDeletedEntry_
  ;
  pLVar2 = (this->fields).deletedEntriesList;
  if (pLVar2 != (List_1_GNU_Gettext_CatalogDeletedEntry_ *)0x0) {
    piVar3 = &(pLVar2->fields)._version;
    *piVar3 = *piVar3 + 1;
    pCVar4 = (pLVar2->fields)._items;
    if (pCVar4 != (CatalogDeletedEntry__Array *)0x0) {
      uVar5 = (pLVar2->fields)._size;
      if (uVar5 < (uint)pCVar4->max_length) {
        (pLVar2->fields)._size = uVar5 + 1;
      }
      else {
        uVar5 = (pLVar2->fields)._size;
        FUN_?(pLVar2,uVar5 + 1,
                      (pMVar1->klass->rgctx_data[0xe].method)->klass->rgctx_data[0xf].rgctxDataDummy
                      ,pCVar4,unaff_RDI);
        pCVar4 = (pLVar2->fields)._items;
        (pLVar2->fields)._size = uVar5 + 1;
        if (pCVar4 == (CatalogDeletedEntry__Array *)0x0) {
          FUN_?();
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      if ((uint)pCVar4->max_length <= uVar5) {
        FUN_?();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      bVar7 = iRam_? != 0;
      pCVar4->vector[(int)uVar5] = data;
      if (bVar7) {
        uVar5 = (uint)((ulonglong)(pCVar4->vector + (int)uVar5) >> 0xc);
        puVar8 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar9 = *puVar8;
          LOCK();
          uVar10 = *puVar8;
          if (uVar9 == uVar10) {
            *puVar8 = uVar9 | 1L << (uVar5 & 0x3f);
          }
          UNLOCK();
        } while (uVar9 != uVar10);
      }
      return;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* CatalogEntry AddItem(String, String) */

CatalogEntry *
Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_AddItem
          (Catalog *this,String *original,String *plural,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GNU__Gettext__CatalogEntry);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::CatalogEntry>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__String);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).entriesDict;
  pCStackX_8 = (CatalogEntry *)0x0;
  if (pIVar1 == (IDictionary_2_System_String_GNU_Gettext_CatalogEntry_ *)0x0)
  goto code_?;
  pIVar2 = pIVar1->klass;
  uVar3 = 0;
  uVar4._0_1_ = (pIVar2->_1).rank;
  uVar4._1_1_ = (pIVar2->_1).minimumAlignment;
  if (uVar4 != 0) {
    do {
      if (pIVar2->interfaceOffsets[uVar3].interfaceType ==
          (Il2CppClass *)
          TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::CatalogEntry>
         ) {
        pVVar5 = &(pIVar2->vtable).get_Item + (pIVar2->interfaceOffsets[uVar3].offset + 7);
        goto code_?;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar4);
  }
  pVVar5 = (VirtualInvokeData *)
           FUN_?(pIVar1,
                         TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::CatalogEntry>
                         ,7);
code_?:
  cVar6 = (*pVVar5->methodPtr)(pIVar1,original,&pCStackX_8,pVVar5->method);
  if (cVar6 == '\0') {
    pCVar7 = (CatalogEntry *)FUN_?(TypeInfo__GNU__Gettext__CatalogEntry);
    CatalogEntry::CatalogEntry__ctor(pCVar7,this,original,plural,(MethodInfo *)0x0);
    pCStackX_8 = pCVar7;
    if ((plural != (String *)0x0) && ((plural->fields)._stringLength != 0)) {
      translations = (String__Array *)FUN_?(TypeInfo__System__String,2);
      if (translations == (String__Array *)0x0) {
code_?:
        FUN_?();
        pcVar8 = (code *)swi(3);
        pCVar7 = (CatalogEntry *)(*pcVar8)();
        return pCVar7;
      }
      FUN_?(translations,0,::StringLiteral__);
      FUN_?(translations,1);
      if (pCVar7 == (CatalogEntry *)0x0) goto code_?;
      CatalogEntry::CatalogEntry_SetTranslations(pCVar7,translations,(MethodInfo *)0x0);
    }
    Catalog_AddItem_1(this,pCStackX_8,(MethodInfo *)0x0);
  }
  return pCStackX_8;
}


/* Void AddItem(CatalogEntry) */

void Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_AddItem_1
               (Catalog *this,CatalogEntry *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::CatalogEntry>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogEntry>__Add_GNU__Gettext__CatalogEntry_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar1 = Catalog_FindItem_1(this,data,(MethodInfo *)0x0);
  if (pCVar1 != (CatalogEntry *)0x0) {
    return;
  }
  pIVar2 = (this->fields).entriesDict;
  if ((data != (CatalogEntry *)0x0) &&
     (CatalogEntry::CatalogEntry_MakeKey
                ((data->fields).str,(data->fields).context,(MethodInfo *)0x0),
     pIVar2 != (IDictionary_2_System_String_GNU_Gettext_CatalogEntry_ *)0x0)) {
    FUN_?();
    pLVar3 = (this->fields).entriesList;
    if (pLVar3 != (List_1_GNU_Gettext_CatalogEntry_ *)0x0) {
      FUN_?(pLVar3,data);
      return;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Append(Catalog) */

void Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_Append
               (Catalog *this,Catalog *catalog,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GNU__Gettext__CatalogEntry);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::CatalogEntry>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogEntry>__Add_GNU__Gettext__CatalogEntry_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  index = 0;
  if (catalog == (Catalog *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
code_?:
  do {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogEntry>__get_Count__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pLVar2 = (catalog->fields).entriesList;
    if (pLVar2 == (List_1_GNU_Gettext_CatalogEntry_ *)0x0) goto code_?;
    if ((pLVar2->fields)._size <= index) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__EventArgs);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      (this->fields).isDirty = 1;
      if (*(int *)&(TypeInfo__System__EventArgs->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__System__EventArgs);
      }
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(this->klass->vtable).OnDirtyChanged.methodPtr)
                (this,TypeInfo__System__EventArgs->static_fields->Empty,
                 (this->klass->vtable).OnDirtyChanged.method);
      return;
    }
    entry = Catalog_get_Item(catalog,index,(MethodInfo *)0x0);
    pCVar3 = Catalog_FindItem_1(this,entry,(MethodInfo *)0x0);
    if (pCVar3 == (CatalogEntry *)0x0) {
      pCVar3 = (CatalogEntry *)FUN_?(TypeInfo__GNU__Gettext__CatalogEntry);
      CatalogEntry::CatalogEntry__ctor_1(pCVar3,this,entry,(MethodInfo *)0x0);
      pIVar4 = (this->fields).entriesDict;
      if (entry == (CatalogEntry *)0x0) goto code_?;
      CatalogEntry::CatalogEntry_MakeKey
                ((entry->fields).str,(entry->fields).context,(MethodInfo *)0x0);
      if (pIVar4 == (IDictionary_2_System_String_GNU_Gettext_CatalogEntry_ *)0x0)
      goto code_?;
      FUN_?();
      pLVar2 = (this->fields).entriesList;
      if (pLVar2 == (List_1_GNU_Gettext_CatalogEntry_ *)0x0) goto code_?;
      FUN_?(pLVar2,pCVar3);
    }
    else {
      uVar5 = 0;
      if (entry == (CatalogEntry *)0x0) goto code_?;
      while( true ) {
        pSVar6 = CatalogEntry::CatalogEntry_get_References(entry,(MethodInfo *)0x0);
        if (pSVar6 == (String__Array *)0x0) goto code_?;
        if ((longlong)(int)pSVar6->max_length <= (longlong)uVar5) break;
        pSVar6 = CatalogEntry::CatalogEntry_get_References(entry,(MethodInfo *)0x0);
        if (pSVar6 == (String__Array *)0x0) goto code_?;
        if ((uint)pSVar6->max_length <= (uint)uVar5) {
          FUN_?();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        CatalogEntry::CatalogEntry_AddReference(pCVar3,pSVar6->vector[uVar5],(MethodInfo *)0x0);
        uVar5 = (ulonglong)((uint)uVar5 + 1);
      }
      pSVar7 = CatalogEntry::CatalogEntry_GetTranslation(entry,0,(MethodInfo *)0x0);
      if ((pSVar7 != (String *)0x0) && ((pSVar7->fields)._stringLength != 0)) {
        pSVar7 = CatalogEntry::CatalogEntry_GetTranslation(entry,0,(MethodInfo *)0x0);
        CatalogEntry::CatalogEntry_SetTranslation(pCVar3,pSVar7,0,(MethodInfo *)0x0);
      }
      if (((entry->fields).isFuzzy != 0) &&
         ((pCVar3->fields).isFuzzy = 1, (pCVar3->fields).owner != (Catalog *)0x0)) {
        Catalog_set_IsDirty((pCVar3->fields).owner,1,(MethodInfo *)0x0);
      }
      pSVar7 = CatalogEntry::CatalogEntry_get_Flags(entry,(MethodInfo *)0x0);
      if ((pSVar7 != (String *)0x0) && ((pSVar7->fields)._stringLength != 0)) {
        pSVar7 = CatalogEntry::CatalogEntry_get_Flags(entry,(MethodInfo *)0x0);
        CatalogEntry::CatalogEntry_set_Flags(pCVar3,pSVar7,(MethodInfo *)0x0);
        index = index + 1;
        goto code_?;
      }
    }
    index = index + 1;
  } while( true );
}


/* Boolean CanEncodeToCharset(String) */

bool Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_CanEncodeToCharset
               (String *charset,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Globalization__EncodingTable);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__Globalization__EncodingTable->_1).field_0x1c == 0) {
    FUN_?();
  }
  pEVar1 = mscorlib.dll::System::Globalization::EncodingTable::EncodingTable_GetEncodings
                     ((MethodInfo *)0x0);
  uVar2 = 0;
  if (pEVar1 == (EncodingInfo__Array *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    bVar4 = (*pcVar3)();
    return bVar4;
  }
  while( true ) {
    uVar5 = (uint)pEVar1->max_length;
    if ((int)uVar5 <= (int)uVar2) {
      return 0;
    }
    if (uVar5 <= uVar2) break;
    if (pEVar1->vector[(int)uVar2] == (EncodingInfo *)0x0) goto code_?;
    pSVar6 = (pEVar1->vector[(int)uVar2]->fields).strEncodingName;
    if (pSVar6 == (String *)0x0) goto code_?;
    pSVar6 = mscorlib.dll::System::String::String_ToLower(pSVar6,(MethodInfo *)0x0);
    if (charset == (String *)0x0) goto code_?;
    pSVar7 = mscorlib.dll::System::String::String_ToLower(charset,(MethodInfo *)0x0);
    if (pSVar6 == pSVar7) {
      return 1;
    }
    if ((((pSVar6 != (String *)0x0) && (pSVar7 != (String *)0x0)) &&
        ((pSVar6->fields)._stringLength == (pSVar7->fields)._stringLength)) &&
       (bVar4 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                          ((uint8_t *)&(pSVar6->fields)._firstChar,
                           (uint8_t *)&(pSVar7->fields)._firstChar,
                           (longlong)(pSVar6->fields)._stringLength * 2,(MethodInfo *)0x0),
       bVar4 != 0)) {
      return 1;
    }
    uVar2 = uVar2 + 1;
  }
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Void Clear() */

void Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_Clear(Catalog *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Collections__Generic__ICollection<System::Collections::Generic::KeyValuePair<System::String,_GNU::Gettext::CatalogEntry>_>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogDeletedEntry>__Clear__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogEntry>__Clear__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).entriesDict != (IDictionary_2_System_String_GNU_Gettext_CatalogEntry_ *)0x0) {
    FUN_?(3);
    pLVar1 = (this->fields).entriesList;
    if (pLVar1 != (List_1_GNU_Gettext_CatalogEntry_ *)0x0) {
      iVar2 = (pLVar1->fields)._size;
      piVar3 = &(pLVar1->fields)._version;
      *piVar3 = *piVar3 + 1;
      (pLVar1->fields)._size = 0;
      if (0 < iVar2) {
        mscorlib.dll::System::Array::Array_Clear
                  ((Array *)(pLVar1->fields)._items,0,iVar2,(MethodInfo *)0x0);
      }
      pLVar4 = (this->fields).deletedEntriesList;
      if (pLVar4 != (List_1_GNU_Gettext_CatalogDeletedEntry_ *)0x0) {
        iVar2 = (pLVar4->fields)._size;
        piVar3 = &(pLVar4->fields)._version;
        *piVar3 = *piVar3 + 1;
        (pLVar4->fields)._size = 0;
        if (0 < iVar2) {
          mscorlib.dll::System::Array::Array_Clear
                    ((Array *)(pLVar4->fields)._items,0,iVar2,(MethodInfo *)0x0);
        }
        (this->fields).isOk = 1;
        return;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Boolean Contains(String, String) */

bool Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_Contains
               (Catalog *this,String *msgid,String *context,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::CatalogEntry>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).entriesDict;
  pSVar2 = CatalogEntry::CatalogEntry_MakeKey(msgid,context,(MethodInfo *)0x0);
  if (pIVar1 == (IDictionary_2_System_String_GNU_Gettext_CatalogEntry_ *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    bVar4 = (*pcVar3)();
    return bVar4;
  }
  uVar5 = 0;
  pIVar6 = pIVar1->klass;
  uVar7._0_1_ = (pIVar6->_1).rank;
  uVar7._1_1_ = (pIVar6->_1).minimumAlignment;
  if (uVar7 != 0) {
    do {
      if (pIVar6->interfaceOffsets[uVar5].interfaceType ==
          (Il2CppClass *)
          TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::CatalogEntry>
         ) {
        pVVar8 = &(pIVar6->vtable).get_Item + (pIVar6->interfaceOffsets[uVar5].offset + 4);
        goto code_?;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar7);
  }
  pVVar8 = (VirtualInvokeData *)FUN_?(pIVar1);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar4 = (*pVVar8->methodPtr)(pIVar1,pSVar2,pVVar8->method,pVVar8->methodPtr);
  return bVar4;
}


/* Void CreateNewHeaders() */

void Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_CreateNewHeaders
               (Catalog *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    PStackY_48._args = (Object__Array *)&UNK_?;
    FUN_?(&StringLiteral_utf_8);
    LOCK();
    UNLOCK();
    PStackY_48._args = (Object__Array *)&UNK_?;
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    PStackY_48._args = (Object__Array *)&UNK_?;
    FUN_?(&TypeInfo__System__DateTime);
    LOCK();
    UNLOCK();
    PStackY_48._args = (Object__Array *)&UNK_?;
    FUN_?(&StringLiteral_yyyy_MM_dd_HH___mm___sszz00);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__DateTime->_1).field_0x1c == 0) {
    PStackY_48._args = (Object__Array *)&UNK_?;
    FUN_?();
  }
  PStackY_48._args = (Object__Array *)&UNK_?;
  dateTime = mscorlib.dll::System::DateTime::DateTime_get_Now((MethodInfo *)0x0);
  pSVar1 = StringLiteral_yyyy_MM_dd_HH___mm___sszz00;
  if (cRam_? == '\0') {
    PStackY_48._args = (Object__Array *)&UNK_?;
    FUN_?(&TypeInfo__System__DateTimeFormat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__DateTimeFormat->_1).field_0x1c == 0) {
    PStackY_48._args = (Object__Array *)&UNK_?;
    FUN_?();
  }
  PStackY_48._args = (Object__Array *)&UNK_?;
  pSVar1 = mscorlib.dll::System::DateTimeFormat::DateTimeFormat_Format
                     (dateTime,pSVar1,(IFormatProvider *)0x0,(MethodInfo *)0x0);
  iVar2 = iRam_?;
  (this->fields).CreationDate = pSVar1;
  if (iVar2 != 0) {
    uVar3 = (uint)((ulonglong)&(this->fields).CreationDate >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
      iVar2 = iRam_?;
    } while (!bVar7);
  }
  (this->fields).RevisionDate = pSVar1;
  iVar8 = 0;
  if (iVar2 != 0) {
    uVar3 = (uint)((ulonglong)&(this->fields).RevisionDate >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
      iVar8 = iRam_?;
    } while (!bVar7);
  }
  pSVar1 = ::StringLiteral__;
  (this->fields).TeamEmail = ::StringLiteral__;
  iVar2 = 0;
  if (iVar8 != 0) {
    uVar3 = (uint)((ulonglong)&(this->fields).TeamEmail >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
      iVar2 = iRam_?;
    } while (!bVar7);
  }
  (this->fields).Team = pSVar1;
  iVar8 = 0;
  if (iVar2 != 0) {
    uVar3 = (uint)((ulonglong)&(this->fields).Team >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
      iVar8 = iRam_?;
    } while (!bVar7);
  }
  (this->fields).Project = pSVar1;
  iVar2 = 0;
  if (iVar8 != 0) {
    uVar3 = (uint)((ulonglong)&(this->fields).Project >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
      iVar2 = iRam_?;
    } while (!bVar7);
  }
  (this->fields).Country = pSVar1;
  iVar8 = 0;
  if (iVar2 != 0) {
    uVar3 = (uint)((ulonglong)&(this->fields).Country >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
      iVar8 = iRam_?;
    } while (!bVar7);
  }
  (this->fields).Language = pSVar1;
  iVar2 = 0;
  if (iVar8 != 0) {
    uVar3 = (uint)((ulonglong)&(this->fields).Language >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
      iVar2 = iRam_?;
    } while (!bVar7);
  }
  (this->fields).Charset = StringLiteral_utf_8;
  if (iVar2 != 0) {
    uVar3 = (uint)((ulonglong)&(this->fields).Charset >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar7);
  }
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_X_Generator,0);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__1_0);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_PO_Revision_Date);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Project_Id_Version);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__0____1__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Content_Type);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_MonoDevelop_Gettext_addin);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_text_plain__charset_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__8bit);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Content_Transfer_Encoding);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Language_Team);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Last_Translator);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_POT_Creation_Date);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_MIME_Version);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  Catalog_SetHeader(this,StringLiteral_Project_Id_Version,(this->fields).Project,(MethodInfo *)0x0);
  Catalog_SetHeader(this,StringLiteral_POT_Creation_Date,(this->fields).CreationDate,
                    (MethodInfo *)0x0);
  Catalog_SetHeader(this,StringLiteral_PO_Revision_Date,(this->fields).RevisionDate,
                    (MethodInfo *)0x0);
  pSVar9 = StringLiteral__0____1__;
  pSVar1 = (this->fields).TranslatorEmail;
  if ((pSVar1 == (String *)0x0) || ((pSVar1->fields)._stringLength == 0)) {
    pSVar1 = (this->fields).Translator;
  }
  else {
    PStackY_48._arg0 = (Object *)0x0;
    PStackY_48._arg1 = (Object *)0x0;
    PStackY_48._arg2 = (Object *)0x0;
    PStackY_48._args = (Object__Array *)0x0;
    mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1
              (&PStackY_48,(Object *)(this->fields).Translator,(Object *)pSVar1,(MethodInfo *)0x0);
    pOStackY_28 = PStackY_48._arg0;
    pOStackY_20 = PStackY_48._arg1;
    pSVar1 = mscorlib.dll::System::String::String_FormatHelper
                       ((IFormatProvider *)0x0,pSVar9,(ParamsArray *)&pOStackY_28,(MethodInfo *)0x0)
    ;
  }
  Catalog_SetHeader(this,StringLiteral_Last_Translator,pSVar1,(MethodInfo *)0x0);
  pSVar9 = StringLiteral__0____1__;
  pSVar1 = (this->fields).TeamEmail;
  if ((pSVar1 == (String *)0x0) || ((pSVar1->fields)._stringLength == 0)) {
    pSVar1 = (this->fields).Team;
  }
  else {
    PStackY_48._arg0 = (Object *)0x0;
    PStackY_48._arg1 = (Object *)0x0;
    PStackY_48._arg2 = (Object *)0x0;
    PStackY_48._args = (Object__Array *)0x0;
    mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1
              (&PStackY_48,(Object *)(this->fields).Team,(Object *)pSVar1,(MethodInfo *)0x0);
    pOStackY_28 = PStackY_48._arg0;
    pOStackY_20 = PStackY_48._arg1;
    pSVar1 = mscorlib.dll::System::String::String_FormatHelper
                       ((IFormatProvider *)0x0,pSVar9,(ParamsArray *)&pOStackY_28,(MethodInfo *)0x0)
    ;
  }
  Catalog_SetHeader(this,StringLiteral_Language_Team,pSVar1,(MethodInfo *)0x0);
  Catalog_SetHeader(this,StringLiteral_MIME_Version,StringLiteral__1_0,(MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::String::String_Concat_4
                     (StringLiteral_text_plain__charset_,(this->fields).Charset,(MethodInfo *)0x0);
  Catalog_SetHeader(this,StringLiteral_Content_Type,pSVar1,(MethodInfo *)0x0);
  Catalog_SetHeader(this,StringLiteral_Content_Transfer_Encoding,StringLiteral__8bit,
                    (MethodInfo *)0x0);
  pSVar9 = StringLiteral_X_Generator;
  pSVar1 = StringLiteral_MonoDevelop_Gettext_addin;
  uVar10 = 0;
  if (cRam_? == '\0') {
    PStackY_48._arg1 = (Object *)&UNK_?;
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__set_Item_System__String__System__String_
                  ,StringLiteral_X_Generator,StringLiteral_MonoDevelop_Gettext_addin,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).headerEntries;
  if (this_00 == (Dictionary_2_System_String_System_String_ *)0x0) {
    PStackY_48._arg1 = (Object *)&UNK_?;
    FUN_?();
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  PStackY_48._arg1 = (Object *)&UNK_?;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)pSVar9,(Object *)pSVar1,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar10 >> 8),1),
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__set_Item_System__String__System__String_
             ->klass->rgctx_data[0x22].method);
  return;
}


/* Void DeleteHeader(String) */

void Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_DeleteHeader
               (Catalog *this,String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Remove_System__String_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = Catalog_HasHeader(this,key,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    this_00 = (this->fields).headerEntries;
    if (this_00 == (Dictionary_2_System_String_System_String_ *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Remove
              ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)key,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Remove_System__String_
              );
  }
  return;
}


/* String EnsureCorrectEndings(String, String) */

String * Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_EnsureCorrectEndings
                   (String *reference,String *text,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Text__StringBuilder);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (text == (String *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    pSVar2 = (String *)(*pcVar1)();
    return pSVar2;
  }
  pSVar2 = ::StringLiteral__;
  if ((text->fields)._stringLength != 0) {
    iVar3 = 0;
    uVar4 = (text->fields)._stringLength - 1;
    if (-1 < (int)uVar4) {
      puVar5 = &(text->fields)._firstChar + (int)uVar4;
      do {
        if ((uint)(text->fields)._stringLength <= uVar4) goto code_?;
        if (*puVar5 != 10) break;
        puVar5 = puVar5 + -1;
        iVar3 = iVar3 + 1;
        uVar4 = uVar4 - 1;
      } while (-1 < (int)uVar4);
    }
    iVar6 = (text->fields)._stringLength;
    if (reference == (String *)0x0) goto code_?;
    iVar7 = (reference->fields)._stringLength;
    this = (StringBuilder *)FUN_?(TypeInfo__System__Text__StringBuilder);
    mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor_4
              (this,text,0,iVar6 - iVar3,(iVar7 - iVar3) + iVar6,(MethodInfo *)0x0);
    uVar4 = (reference->fields)._stringLength - 1;
    if ((int)uVar4 < 0) {
code_?:
      if (this == (StringBuilder *)0x0) goto code_?;
    }
    else {
      puVar5 = &(reference->fields)._firstChar + (int)uVar4;
      do {
        if ((longlong)(reference->fields)._stringLength <= (longlong)(ulonglong)uVar4) {
code_?:
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowIndexOutOfRangeException
                    ((MethodInfo *)0x0);
          pcVar1 = (code *)swi(3);
          pSVar2 = (String *)(*pcVar1)();
          return pSVar2;
        }
        if (*puVar5 != 10) goto code_?;
        if ((this == (StringBuilder *)0x0) ||
           (pCVar8 = (this->fields).m_ChunkChars, pCVar8 == (Char__Array *)0x0))
        goto code_?;
        if ((this->fields).m_ChunkLength < (int)pCVar8->max_length) {
          uVar9 = (this->fields).m_ChunkLength;
          pCVar8 = (this->fields).m_ChunkChars;
          (this->fields).m_ChunkLength = uVar9 + 1;
          if (pCVar8 == (Char__Array *)0x0) goto code_?;
          if ((uint)pCVar8->max_length <= uVar9) {
            FUN_?();
            pcVar1 = (code *)swi(3);
            pSVar2 = (String *)(*pcVar1)();
            return pSVar2;
          }
          pCVar8->vector[(int)uVar9] = 10;
        }
        else {
          mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append
                    (this,10,1,(MethodInfo *)0x0);
        }
        puVar5 = puVar5 + -1;
        uVar4 = uVar4 - 1;
      } while (-1 < (int)uVar4);
    }
    pSVar2 = (String *)
             (*(this->klass->vtable).ToString.methodPtr)(this,(this->klass->vtable).ToString.method)
    ;
  }
  return pSVar2;
}


/* CatalogEntry FindItem(String, String) */

CatalogEntry *
Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_FindItem
          (Catalog *this,String *msgid,String *context,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::CatalogEntry>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).entriesDict;
  pSVar2 = CatalogEntry::CatalogEntry_MakeKey(msgid,context,(MethodInfo *)0x0);
  if (pIVar1 != (IDictionary_2_System_String_GNU_Gettext_CatalogEntry_ *)0x0) {
    cVar3 = FUN_?(4,
                          TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::CatalogEntry>
                          ,pIVar1,pSVar2);
    if (cVar3 == '\0') {
      pCVar4 = (CatalogEntry *)0x0;
    }
    else {
      pIVar1 = (this->fields).entriesDict;
      CatalogEntry::CatalogEntry_MakeKey(msgid,context,(MethodInfo *)0x0);
      if (pIVar1 == (IDictionary_2_System_String_GNU_Gettext_CatalogEntry_ *)0x0)
      goto code_?;
      pCVar4 = (CatalogEntry *)FUN_?();
    }
    return pCVar4;
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  pCVar4 = (CatalogEntry *)(*pcVar5)();
  return pCVar4;
}


/* CatalogEntry FindItem(CatalogEntry) */

CatalogEntry *
Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_FindItem_1
          (Catalog *this,CatalogEntry *entry,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::CatalogEntry>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).entriesDict;
  if (entry != (CatalogEntry *)0x0) {
    pSVar2 = CatalogEntry::CatalogEntry_MakeKey
                       ((entry->fields).str,(entry->fields).context,(MethodInfo *)0x0);
    if (pIVar1 != (IDictionary_2_System_String_GNU_Gettext_CatalogEntry_ *)0x0) {
      cVar3 = FUN_?(4,
                            TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::CatalogEntry>
                            ,pIVar1,pSVar2);
      if (cVar3 == '\0') {
        return (CatalogEntry *)0x0;
      }
      pIVar1 = (this->fields).entriesDict;
      pSVar2 = CatalogEntry::CatalogEntry_MakeKey
                         ((entry->fields).str,(entry->fields).context,(MethodInfo *)0x0);
      if (pIVar1 != (IDictionary_2_System_String_GNU_Gettext_CatalogEntry_ *)0x0) {
        pIVar4 = pIVar1->klass;
        uVar5 = 0;
        uVar6._0_1_ = (pIVar4->_1).rank;
        uVar6._1_1_ = (pIVar4->_1).minimumAlignment;
        if (uVar6 != 0) {
          do {
            if (pIVar4->interfaceOffsets[uVar5].interfaceType ==
                (Il2CppClass *)
                TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::CatalogEntry>
               ) {
              pVVar7 = &(pIVar4->vtable).get_Item + pIVar4->interfaceOffsets[uVar5].offset;
              goto code_?;
            }
            uVar5 = uVar5 + 1;
          } while (uVar5 < uVar6);
        }
        pVVar7 = (VirtualInvokeData *)
                 FUN_?(pIVar1,
                               TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::CatalogEntry>
                               ,0,pSVar2,unaff_RDI);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pCVar8 = (CatalogEntry *)
                 (*pVVar7->methodPtr)(pIVar1,pSVar2,pVVar7->method,pVVar7->methodPtr);
        return pCVar8;
      }
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  pCVar8 = (CatalogEntry *)(*pcVar9)();
  return pCVar8;
}


/* Void FormatMessageForFile(StringBuilder, String, String, String) */

void Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_FormatMessageForFile
               (StringBuilder *sb,String *prefix,String *message,String *newlineChar,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__n);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral____);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral___);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this = StringEscaping::StringEscaping_ToGettextFormat(message,(MethodInfo *)0x0);
  if ((prefix != (String *)0x0) && (this != (String *)0x0)) {
    if (((this->fields)._stringLength + (prefix->fields)._stringLength < 0x4d) &&
       (bVar1 = mscorlib.dll::System::String::String_Contains
                          (this,StringLiteral__n,(MethodInfo *)0x0), bVar1 == 0)) {
      if (sb != (StringBuilder *)0x0) {
        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                  (sb,prefix,(MethodInfo *)0x0);
        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                  (sb,::StringLiteral___,(MethodInfo *)0x0);
code_?:
        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2(sb,this,(MethodInfo *)0x0)
        ;
        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                  (sb,::StringLiteral__,(MethodInfo *)0x0);
        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                  (sb,newlineChar,(MethodInfo *)0x0);
        return;
      }
    }
    else if (sb != (StringBuilder *)0x0) {
      mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2(sb,prefix,(MethodInfo *)0x0)
      ;
      mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                (sb,::StringLiteral____,(MethodInfo *)0x0);
      mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                (sb,newlineChar,(MethodInfo *)0x0);
      iVar2 = 0;
      puVar3 = &(this->fields)._firstChar;
      startIndex = 0;
      uVar4 = 0;
      uVar5 = 0;
      iVar6 = -1;
      while (uVar7 = (uint)uVar4, (int)uVar5 < (this->fields)._stringLength) {
        if ((longlong)(this->fields)._stringLength <= (longlong)uVar4) {
code_?:
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowIndexOutOfRangeException
                    ((MethodInfo *)0x0);
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        uVar9 = *puVar3;
        uVar5 = uVar7;
        if (uVar9 == 0x5c) {
          if ((this->fields)._stringLength <= (int)(uVar7 + 1)) {
            uVar9 = 0x5c;
            goto code_?;
          }
          uVar5 = uVar7 + 1;
          puVar3 = puVar3 + 1;
          iVar2 = iVar2 + 1;
          if ((longlong)(this->fields)._stringLength <= (longlong)(ulonglong)uVar5)
          goto code_?;
          if (*puVar3 != 0x6e) {
            uVar9 = 0x5c;
            if (*puVar3 == 0x74) {
              iVar6 = uVar7 + 2;
            }
            goto code_?;
          }
          iVar10 = uVar7 + 2;
code_?:
          mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                    (sb,::StringLiteral__,(MethodInfo *)0x0);
          value = mscorlib.dll::System::String::String_Substring_1
                            (this,startIndex,iVar10 - startIndex,(MethodInfo *)0x0);
          mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                    (sb,value,(MethodInfo *)0x0);
          mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                    (sb,::StringLiteral__,(MethodInfo *)0x0);
          mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                    (sb,newlineChar,(MethodInfo *)0x0);
          iVar2 = 0;
          iVar6 = -1;
          startIndex = iVar10;
        }
        else {
code_?:
          iVar10 = uVar5 + 1;
          if (uVar9 != 0x20) {
            iVar10 = iVar6;
          }
          iVar6 = iVar10;
          if ((0x4c < iVar2) && (iVar10 = iVar6, iVar6 != -1)) goto code_?;
        }
        uVar5 = uVar5 + 1;
        uVar4 = (ulonglong)uVar5;
        puVar3 = puVar3 + 1;
        iVar2 = iVar2 + 1;
      }
      this = mscorlib.dll::System::String::String_Substring_1
                       (this,startIndex,(this->fields)._stringLength - startIndex,(MethodInfo *)0x0)
      ;
      if (this != (String *)0x0) {
        if ((this->fields)._stringLength < 1) {
          return;
        }
        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                  (sb,::StringLiteral__,(MethodInfo *)0x0);
        goto code_?;
      }
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* String GetDateTimeRfc822Format() */

String * Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_GetDateTimeRfc822Format
                   (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__DateTime);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_yyyy_MM_dd_HH___mm___sszz00);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__DateTime->_1).field_0x1c == 0) {
    FUN_?();
  }
  dateTime = mscorlib.dll::System::DateTime::DateTime_get_Now((MethodInfo *)0x0);
  pSVar1 = StringLiteral_yyyy_MM_dd_HH___mm___sszz00;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__DateTimeFormat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__DateTimeFormat->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__DateTimeFormat,pSVar1,0,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__DateTimeFormat->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__System__DateTimeFormat);
  }
  pSVar1 = mscorlib.dll::System::DateTimeFormat::DateTimeFormat_Format_1
                     (dateTime,pSVar1,(IFormatProvider *)0x0,
                      (TimeSpan)(TypeInfo__System__DateTimeFormat->static_fields->NullOffset)._ticks
                      ,(MethodInfo *)0x0);
  return pSVar1;
}


/* Encoding GetEncoding(String) */

Encoding *
Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_GetEncoding(String *charset,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Globalization__EncodingTable);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__Globalization__EncodingTable->_1).field_0x1c == 0) {
    FUN_?();
  }
  pEVar1 = mscorlib.dll::System::Globalization::EncodingTable::EncodingTable_GetEncodings
                     ((MethodInfo *)0x0);
  uVar2 = 0;
  if (pEVar1 == (EncodingInfo__Array *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    pEVar4 = (Encoding *)(*pcVar3)();
    return pEVar4;
  }
  while( true ) {
    uVar5 = (uint)pEVar1->max_length;
    if ((int)uVar5 <= (int)uVar2) {
      return (Encoding *)0x0;
    }
    if (uVar5 <= uVar2) break;
    pEVar6 = pEVar1->vector[(int)uVar2];
    if (pEVar6 == (EncodingInfo *)0x0) goto code_?;
    pSVar7 = (pEVar6->fields).strEncodingName;
    if (pSVar7 == (String *)0x0) goto code_?;
    pSVar7 = mscorlib.dll::System::String::String_ToLower(pSVar7,(MethodInfo *)0x0);
    if (charset == (String *)0x0) goto code_?;
    pSVar8 = mscorlib.dll::System::String::String_ToLower(charset,(MethodInfo *)0x0);
    if (pSVar7 == pSVar8) {
code_?:
      pEVar4 = mscorlib.dll::System::Text::Encoding::Encoding_GetEncoding
                         ((pEVar6->fields).iCodePage,(MethodInfo *)0x0);
      return pEVar4;
    }
    if (((pSVar7 != (String *)0x0) && (pSVar8 != (String *)0x0)) &&
       ((pSVar7->fields)._stringLength == (pSVar8->fields)._stringLength)) {
      bVar9 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                        ((uint8_t *)&(pSVar7->fields)._firstChar,
                         (uint8_t *)&(pSVar8->fields)._firstChar,
                         (longlong)(pSVar7->fields)._stringLength * 2,(MethodInfo *)0x0);
      if (bVar9 != 0) goto code_?;
    }
    uVar2 = uVar2 + 1;
  }
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  pEVar4 = (Encoding *)(*pcVar3)();
  return pEVar4;
}


/* IEnumerator`1[GNU.Gettext.CatalogEntry] GetEnumerator() */

IEnumerator_1_GNU_Gettext_CatalogEntry_ *
Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_GetEnumerator(Catalog *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Collections__Generic__List_1_T___Enumerator<GNU::Gettext::CatalogEntry>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogEntry>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).entriesList;
  if (pLVar1 == (List_1_GNU_Gettext_CatalogEntry_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pIVar3 = (IEnumerator_1_GNU_Gettext_CatalogEntry_ *)(*pcVar2)();
    return pIVar3;
  }
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)&uStack_5 >> 0xc);
    puVar6 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar7 = *puVar6;
      LOCK();
      uVar8 = *puVar6;
      if (uVar7 == uVar8) {
        *puVar6 = uVar7 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar7 != uVar8);
  }
  uStack_9 = (pLVar1->fields)._version;
  uStack_10 = 0;
  lStack_11 = (ulonglong)uStack_9 << 0x20;
  uStack_5._0_4_ = SUB84(pLVar1,0);
  uStack_5._4_4_ = (undefined4)((ulonglong)pLVar1 >> 0x20);
  uStack_12 = 0;
  uStack_13 = (undefined4)uStack_5;
  uStack_14 = uStack_5._4_4_;
  uStack_15 = 0;
  uStack_5 = pLVar1;
  pIVar3 = (IEnumerator_1_GNU_Gettext_CatalogEntry_ *)
           FUN_?(TypeInfo__System__Collections__Generic__List_1_T___Enumerator<GNU::Gettext::CatalogEntry>
                         ,&uStack_13);
  return pIVar3;
}


/* String GetHeader(String) */

String * Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_GetHeader
                   (Catalog *this,String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__ContainsKey_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__get_Item_System__String_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
            *)(this->fields).headerEntries;
  if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                 *)0x0) {
    iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                      (pDVar1,(Object *)key,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__ContainsKey_System__String_
                       ->klass->rgctx_data[0x21].method);
    if (iVar2 < 0) {
      return (String *)**(undefined8 **)(lRam_? + 0xb8);
    }
    pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
              *)(this->fields).headerEntries;
    if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                   *)0x0) {
      uVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::StyleComplexSelector+PseudoStateData]::
              Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                        (pDVar1,(Object *)key,
                         MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__get_Item_System__String_
                         ->klass->rgctx_data[0x21].method);
      if ((int)uVar3 < 0) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowKeyNotFoundException
                  ((Object *)key,(MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        pSVar5 = (String *)(*pcVar4)();
        return pSVar5;
      }
      pDVar6 = (pDVar1->fields)._entries;
      if (pDVar6 != (Dictionary_2_TKey_TValue_Entry_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___Array
                     *)0x0) {
        if (uVar3 < (uint)pDVar6->max_length) {
          return (String *)pDVar6->vector[(int)uVar3].value;
        }
        FUN_?();
        pcVar4 = (code *)swi(3);
        pSVar5 = (String *)(*pcVar4)();
        return pSVar5;
      }
      FUN_?();
      pcVar4 = (code *)swi(3);
      pSVar5 = (String *)(*pcVar4)();
      return pSVar5;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  pSVar5 = (String *)(*pcVar4)();
  return pSVar5;
}


/* String GetHeaderString(String) */

String * Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_GetHeaderString
                   (Catalog *this,String *lineDelimeter,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__get_Item_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__get_Keys__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::String,_System::String>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::String,_System::String>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::String,_System::String>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<System::String,_System::String>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Text__StringBuilder);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral___0____1__n__2_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  Catalog_UpdateHeaderDict(this,(MethodInfo *)0x0);
  this_01 = (StringBuilder *)FUN_?(TypeInfo__System__Text__StringBuilder);
  mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor(this_01,(MethodInfo *)0x0);
  this_00 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *
            )(this->fields).headerEntries;
  if ((this_00 ==
       (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0)
     || (pDVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                  TypeConverterRegistry+ConverterKey,System::Object]::
                  Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Keys
                            (this_00,
                             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__get_Keys__
                            ),
        pDVar1 == (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   *)0x0)) {
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
    uVar2 = uStack_3;
code_?:
    uStack_3 = uVar2;
    FUN_?();
code_?:
    FUN_?();
code_?:
    mscorlib.dll::System::ThrowHelper::
    ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
              ((MethodInfo *)0x0);
  }
  else {
    uStack_4 = (pDVar1->fields)._dictionary;
    puStack_5 = (undefined4 *)0x0;
    uStack_6 = 0;
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&uStack_4 >> 0xc);
      puVar7 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar8 = *puVar7;
        LOCK();
        uVar9 = *puVar7;
        if (uVar8 == uVar9) {
          *puVar7 = uVar8 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (uVar8 != uVar9);
    }
    if (uStack_4 ==
        (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0
       ) {
      FUN_?();
      pcVar10 = (code *)swi(3);
      pSVar11 = (String *)(*pcVar10)();
      return pSVar11;
    }
    iStack_12 = (uStack_4->fields)._version;
    uStack_6 = 0;
    uStack_4._4_4_ = (undefined4)((ulonglong)uStack_4 >> 0x20);
    uStack_13 = (undefined4)uStack_4;
    uStack_14 = uStack_4._4_4_;
    uStack_3 = 0;
    apOStack_15[0] = (Object *)0x0;
    uStack_4 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                 *)0x0;
    puStack_5 = &uStack_13;
    while (lVar16 = CONCAT44(uStack_14,uStack_13), lVar16 != 0) {
      if (iStack_12 != *(int *)(lVar16 + 0x2c)) goto code_?;
      do {
        if (lVar16 == 0) goto code_?;
        if (*(uint *)(lVar16 + 0x20) <= uStack_3) {
          uStack_3 = *(int *)(lVar16 + 0x20) + 1;
          apOStack_15[0] = (Object *)0x0;
          if (this_01 != (StringBuilder *)0x0) {
            pSVar11 = (String *)
                      (*(this_01->klass->vtable).ToString.methodPtr)
                                (this_01,(this_01->klass->vtable).ToString.method);
            return pSVar11;
          }
          goto code_?;
        }
        lVar17 = *(longlong *)(lVar16 + 0x18);
        lVar18 = (longlong)(int)uStack_3;
        uVar2 = uStack_3 + 1;
        if (lVar17 == 0) goto code_?;
        bVar19 = *(uint *)(lVar17 + 0x18) <= uStack_3;
        uStack_3 = uVar2;
        if (bVar19) goto code_?;
      } while (*(int *)(lVar17 + 0x20 + lVar18 * 0x18) < 0);
      apOStack_15[0] = *(Object **)(lVar17 + 0x28 + lVar18 * 0x18);
      func_?(apOStack_15);
      key = apOStack_15[0];
      pSVar11 = (String *)**(undefined8 **)(lRam_? + 0xb8);
      pDVar20 = (this->fields).headerEntries;
      if (pDVar20 == (Dictionary_2_System_String_System_String_ *)0x0) goto code_?;
      pOVar21 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         ((Dictionary_2_System_Object_System_Object_ *)pDVar20,apOStack_15[0],
                          MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__get_Item_System__String_
                         );
      if (pOVar21 != (Object *)0x0) {
        pDVar20 = (this->fields).headerEntries;
        if (pDVar20 == (Dictionary_2_System_String_System_String_ *)0x0) goto code_?;
        pSVar11 = (String *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__get_Item
                            ((Dictionary_2_System_Object_System_Object_ *)pDVar20,key,
                             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__get_Item_System__String_
                            );
        pSVar11 = StringEscaping::StringEscaping_ToGettextFormat(pSVar11,(MethodInfo *)0x0);
      }
      if (this_01 == (StringBuilder *)0x0) goto code_?;
      mscorlib.dll::System::Text::StringBuilder::StringBuilder_AppendFormat_2
                (this_01,StringLiteral___0____1__n__2_,key,(Object *)pSVar11,(Object *)lineDelimeter
                 ,(MethodInfo *)0x0);
    }
  }
  FUN_?();
  FUN_?();
  pcVar10 = (code *)swi(3);
  pSVar11 = (String *)(*pcVar10)();
  return pSVar11;
}


/* String GetHeaderString() */

String * Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_GetHeaderString_1
                   (Catalog *this,MethodInfo *method)

{
  pSVar1 = mscorlib.dll::System::Environment::Environment_get_NewLine((MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__get_Item_System__String_
                  ,pSVar1,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__get_Keys__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::String,_System::String>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::String,_System::String>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::String,_System::String>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<System::String,_System::String>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Text__StringBuilder);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral___0____1__n__2_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  Catalog_UpdateHeaderDict(this,(MethodInfo *)0x0);
  this_01 = (StringBuilder *)FUN_?(TypeInfo__System__Text__StringBuilder);
  mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor(this_01,(MethodInfo *)0x0);
  this_00 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *
            )(this->fields).headerEntries;
  if ((this_00 ==
       (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0)
     || (pDVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                  TypeConverterRegistry+ConverterKey,System::Object]::
                  Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Keys
                            (this_00,
                             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__get_Keys__
                            ),
        pDVar2 == (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   *)0x0)) {
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
    uVar3 = uStack_4;
code_?:
    uStack_4 = uVar3;
    FUN_?();
code_?:
    FUN_?();
code_?:
    mscorlib.dll::System::ThrowHelper::
    ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
              ((MethodInfo *)0x0);
  }
  else {
    uStack_5 = (pDVar2->fields)._dictionary;
    puStack_6 = (undefined4 *)0x0;
    uStack_7 = 0;
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&uStack_5 >> 0xc);
      puVar8 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar9 = *puVar8;
        LOCK();
        uVar10 = *puVar8;
        if (uVar9 == uVar10) {
          *puVar8 = uVar9 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (uVar9 != uVar10);
    }
    if (uStack_5 ==
        (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0
       ) {
      FUN_?();
      pcVar11 = (code *)swi(3);
      pSVar1 = (String *)(*pcVar11)();
      return pSVar1;
    }
    iStack_12 = (uStack_5->fields)._version;
    uStack_7 = 0;
    uStack_5._4_4_ = (undefined4)((ulonglong)uStack_5 >> 0x20);
    uStack_13 = (undefined4)uStack_5;
    uStack_14 = uStack_5._4_4_;
    uStack_4 = 0;
    pOStack_15 = (Object *)0x0;
    uStack_5 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                 *)0x0;
    puStack_6 = &uStack_13;
    while (lVar16 = CONCAT44(uStack_14,uStack_13), lVar16 != 0) {
      if (iStack_12 != *(int *)(lVar16 + 0x2c)) goto code_?;
      do {
        if (lVar16 == 0) goto code_?;
        if (*(uint *)(lVar16 + 0x20) <= uStack_4) {
          uStack_4 = *(int *)(lVar16 + 0x20) + 1;
          pOStack_15 = (Object *)0x0;
          if (this_01 != (StringBuilder *)0x0) {
            pSVar1 = (String *)
                      (*(this_01->klass->vtable).ToString.methodPtr)
                                (this_01,(this_01->klass->vtable).ToString.method);
            return pSVar1;
          }
          goto code_?;
        }
        lVar17 = *(longlong *)(lVar16 + 0x18);
        lVar18 = (longlong)(int)uStack_4;
        uVar3 = uStack_4 + 1;
        if (lVar17 == 0) goto code_?;
        bVar19 = *(uint *)(lVar17 + 0x18) <= uStack_4;
        uStack_4 = uVar3;
        if (bVar19) goto code_?;
      } while (*(int *)(lVar17 + 0x20 + lVar18 * 0x18) < 0);
      pOStack_15 = *(Object **)(lVar17 + 0x28 + lVar18 * 0x18);
      func_?(&pOStack_15);
      key = pOStack_15;
      pSVar20 = (String *)**(undefined8 **)(lRam_? + 0xb8);
      pDVar21 = (this->fields).headerEntries;
      if (pDVar21 == (Dictionary_2_System_String_System_String_ *)0x0) goto code_?;
      pOVar22 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         ((Dictionary_2_System_Object_System_Object_ *)pDVar21,pOStack_15,
                          MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__get_Item_System__String_
                         );
      if (pOVar22 != (Object *)0x0) {
        pDVar21 = (this->fields).headerEntries;
        if (pDVar21 == (Dictionary_2_System_String_System_String_ *)0x0) goto code_?;
        pSVar20 = (String *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__get_Item
                            ((Dictionary_2_System_Object_System_Object_ *)pDVar21,key,
                             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__get_Item_System__String_
                            );
        pSVar20 = StringEscaping::StringEscaping_ToGettextFormat(pSVar20,(MethodInfo *)0x0);
      }
      if (this_01 == (StringBuilder *)0x0) goto code_?;
      mscorlib.dll::System::Text::StringBuilder::StringBuilder_AppendFormat_2
                (this_01,StringLiteral___0____1__n__2_,key,(Object *)pSVar20,(Object *)pSVar1,
                 (MethodInfo *)0x0);
    }
  }
  FUN_?();
  FUN_?();
  pcVar11 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar11)();
  return pSVar1;
}


/* Void GetMergeSummary(Catalog, String[] ByRef, String[] ByRef) */

void Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_GetMergeSummary
               (Catalog *this,Catalog *refCat,String__Array **newEntries,
               String__Array **obsoleteEntries,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                 );
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
    cRam_? = '\x01';
  }
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
  uVar1 = 0;
  lVar2 = 0x20;
  uVar3 = uVar1;
  while( true ) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogEntry>__get_Count__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pLVar4 = (this->fields).entriesList;
    if (pLVar4 == (List_1_GNU_Gettext_CatalogEntry_ *)0x0) goto code_?;
    uVar5 = (uint)uVar3;
    if ((pLVar4->fields)._size <= (int)uVar5) break;
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogEntry>__get_Count__
                   );
      LOCK();
      UNLOCK();
      FUN_?();
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uVar3 = uVar1;
    if (-1 < (int)uVar5) {
      pLVar4 = (this->fields).entriesList;
      if (pLVar4 == (List_1_GNU_Gettext_CatalogEntry_ *)0x0) goto code_?;
      uVar6 = (pLVar4->fields)._size;
      if ((int)uVar5 < (int)uVar6) {
        if (uVar6 <= uVar5) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pCVar8 = (pLVar4->fields)._items;
        if (pCVar8 == (CatalogEntry__Array *)0x0) goto code_?;
        if ((uint)pCVar8->max_length <= uVar5) {
          FUN_?();
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar3 = *(ulonglong *)((longlong)pCVar8->vector + lVar2 + -0x20);
      }
    }
    if (refCat == (Catalog *)0x0) goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::CatalogEntry>
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pIVar9 = (refCat->fields).entriesDict;
    if ((uVar3 == 0) ||
       (pSVar10 = CatalogEntry::CatalogEntry_MakeKey
                           (*(String **)(uVar3 + 0x10),*(String **)(uVar3 + 0x68),
                            (MethodInfo *)0x0),
       pIVar9 == (IDictionary_2_System_String_GNU_Gettext_CatalogEntry_ *)0x0))
    goto code_?;
    cVar11 = FUN_?(4,
                          TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::CatalogEntry>
                          ,pIVar9,pSVar10);
    if (cVar11 == '\0') {
code_?:
      pCVar12 = Catalog_get_Item(this,uVar5,(MethodInfo *)0x0);
      if ((pCVar12 == (CatalogEntry *)0x0) ||
         (this_01 ==
          (List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
           *)0x0)) goto code_?;
      FUN_?(this_01,(pCVar12->fields).str);
    }
    else {
      pIVar9 = (refCat->fields).entriesDict;
      CatalogEntry::CatalogEntry_MakeKey
                (*(String **)(uVar3 + 0x10),*(String **)(uVar3 + 0x68),(MethodInfo *)0x0);
      if (pIVar9 == (IDictionary_2_System_String_GNU_Gettext_CatalogEntry_ *)0x0)
      goto code_?;
      lVar13 = FUN_?();
      if (lVar13 == 0) goto code_?;
    }
    uVar3 = (ulonglong)(uVar5 + 1);
    lVar2 = lVar2 + 8;
  }
  if (refCat != (Catalog *)0x0) goto code_?;
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
code_?:
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogEntry>__get_Count__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar4 = (refCat->fields).entriesList;
  if (pLVar4 == (List_1_GNU_Gettext_CatalogEntry_ *)0x0) goto code_?;
  index = (int)uVar1;
  if ((pLVar4->fields)._size <= index) {
    if (this_00 !=
        (List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
         *)0x0) {
      pRVar14 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::UIR::
                RenderTreeManager+VisualChangesProcessor+EntryProcessingInfo]::
                List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo__ToArray
                          (this_00,
                           MethodInfo__System__Collections__Generic__List<System::String>__ToArray__
                          );
      bVar15 = iRam_? != 0;
      *newEntries = (String__Array *)pRVar14;
      if (bVar15) {
        uVar5 = (uint)((ulonglong)newEntries >> 0xc);
        lVar2 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
        do {
          uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
          puVar16 = (ulonglong *)(lVar2 + 0xADDR);
          LOCK();
          bVar15 = uVar3 == *puVar16;
          if (bVar15) {
            *puVar16 = uVar3 | 1L << (uVar5 & 0x3f);
          }
          UNLOCK();
        } while (!bVar15);
      }
      if (this_01 !=
          (List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
           *)0x0) {
        pRVar14 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::UIR::
                  RenderTreeManager+VisualChangesProcessor+EntryProcessingInfo]::
                  List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo__ToArray
                            (this_01,
                             MethodInfo__System__Collections__Generic__List<System::String>__ToArray__
                            );
        bVar15 = iRam_? != 0;
        *obsoleteEntries = (String__Array *)pRVar14;
        if (bVar15) {
          uVar5 = (uint)((ulonglong)obsoleteEntries >> 0xc);
          lVar2 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
          do {
            uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
            puVar16 = (ulonglong *)(lVar2 + 0xADDR);
            LOCK();
            bVar15 = uVar3 == *puVar16;
            if (bVar15) {
              *puVar16 = uVar3 | 1L << (uVar5 & 0x3f);
            }
            UNLOCK();
          } while (!bVar15);
        }
        return;
      }
    }
    goto code_?;
  }
  pCVar12 = Catalog_get_Item(refCat,index,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::CatalogEntry>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar9 = (this->fields).entriesDict;
  if ((pCVar12 == (CatalogEntry *)0x0) ||
     (pSVar10 = CatalogEntry::CatalogEntry_MakeKey
                         ((pCVar12->fields).str,(pCVar12->fields).context,(MethodInfo *)0x0),
     pIVar9 == (IDictionary_2_System_String_GNU_Gettext_CatalogEntry_ *)0x0))
  goto code_?;
  cVar11 = FUN_?(4,
                        TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::CatalogEntry>
                        ,pIVar9,pSVar10);
  if (cVar11 == '\0') {
code_?:
    pCVar12 = Catalog_get_Item(refCat,index,(MethodInfo *)0x0);
    if ((pCVar12 == (CatalogEntry *)0x0) ||
       (this_00 ==
        (List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
         *)0x0)) goto code_?;
    FUN_?(this_00,(pCVar12->fields).str);
  }
  else {
    pIVar9 = (this->fields).entriesDict;
    CatalogEntry::CatalogEntry_MakeKey
              ((pCVar12->fields).str,(pCVar12->fields).context,(MethodInfo *)0x0);
    if (pIVar9 == (IDictionary_2_System_String_GNU_Gettext_CatalogEntry_ *)0x0)
    goto code_?;
    lVar2 = FUN_?();
    if (lVar2 == 0) goto code_?;
  }
  uVar1 = (ulonglong)(index + 1);
  goto code_?;
}


/* String GetPluralFormsHeader() */

String * Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_GetPluralFormsHeader
                   (Catalog *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_Plural_Forms);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_nplurals_2__plural__n____1___n);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = Catalog_HasHeader(this,StringLiteral_Plural_Forms,(MethodInfo *)0x0);
  pSVar2 = StringLiteral_Plural_Forms;
  if (bVar1 == 0) {
    return StringLiteral_nplurals_2__plural__n____1___n;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__ContainsKey_System__String_
                  ,StringLiteral_Plural_Forms,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__get_Item_System__String_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar3 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
            *)(this->fields).headerEntries;
  if (pDVar3 != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                 *)0x0) {
    iVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                      (pDVar3,(Object *)pSVar2,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__ContainsKey_System__String_
                       ->klass->rgctx_data[0x21].method);
    if (iVar4 < 0) {
      return (String *)**(undefined8 **)(lRam_? + 0xb8);
    }
    pDVar3 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
              *)(this->fields).headerEntries;
    if (pDVar3 != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                   *)0x0) {
      uVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::StyleComplexSelector+PseudoStateData]::
              Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                        (pDVar3,(Object *)pSVar2,
                         MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__get_Item_System__String_
                         ->klass->rgctx_data[0x21].method);
      if ((int)uVar5 < 0) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowKeyNotFoundException
                  ((Object *)pSVar2,(MethodInfo *)0x0);
        pcVar6 = (code *)swi(3);
        pSVar2 = (String *)(*pcVar6)();
        return pSVar2;
      }
      pDVar7 = (pDVar3->fields)._entries;
      if (pDVar7 != (Dictionary_2_TKey_TValue_Entry_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___Array
                     *)0x0) {
        if (uVar5 < (uint)pDVar7->max_length) {
          return (String *)pDVar7->vector[(int)uVar5].value;
        }
        FUN_?();
        pcVar6 = (code *)swi(3);
        pSVar2 = (String *)(*pcVar6)();
        return pSVar2;
      }
      FUN_?();
      pcVar6 = (code *)swi(3);
      pSVar2 = (String *)(*pcVar6)();
      return pSVar2;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  pSVar2 = (String *)(*pcVar6)();
  return pSVar2;
}


/* Void GetStatistics(Int32 ByRef, Int32 ByRef, Int32 ByRef, Int32 ByRef, Int32 ByRef) */

void Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_GetStatistics
               (Catalog *this,int32_t *all,int32_t *fuzzy,int32_t *missing,int32_t *badtokens,
               int32_t *untranslated,MethodInfo *method)

{
  index = 0;
  *untranslated = 0;
  *badtokens = 0;
  *missing = 0;
  *fuzzy = 0;
  *all = 0;
  while( true ) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogEntry>__get_Count__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pLVar1 = (this->fields).entriesList;
    if (pLVar1 == (List_1_GNU_Gettext_CatalogEntry_ *)0x0) break;
    if ((pLVar1->fields)._size <= index) {
      return;
    }
    *all = *all + 1;
    pCVar2 = Catalog_get_Item(this,index,(MethodInfo *)0x0);
    if (pCVar2 == (CatalogEntry *)0x0) break;
    if ((pCVar2->fields).isFuzzy != 0) {
      *fuzzy = *fuzzy + 1;
    }
    pCVar2 = Catalog_get_Item(this,index,(MethodInfo *)0x0);
    if (pCVar2 == (CatalogEntry *)0x0) break;
    pSVar3 = CatalogEntry::CatalogEntry_get_References(pCVar2,(MethodInfo *)0x0);
    if (pSVar3 == (String__Array *)0x0) break;
    if (pSVar3->max_length == 0) {
      *missing = *missing + 1;
    }
    pCVar2 = Catalog_get_Item(this,index,(MethodInfo *)0x0);
    if (pCVar2 == (CatalogEntry *)0x0) break;
    if ((pCVar2->fields).validity == 1) {
      *badtokens = *badtokens + 1;
    }
    pCVar2 = Catalog_get_Item(this,index,(MethodInfo *)0x0);
    if (pCVar2 == (CatalogEntry *)0x0) break;
    bVar4 = CatalogEntry::CatalogEntry_get_IsTranslated(pCVar2,(MethodInfo *)0x0);
    if (bVar4 == 0) {
      *untranslated = *untranslated + 1;
    }
    index = index + 1;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Boolean HasHeader(String) */

bool Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_HasHeader
               (Catalog *this,String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__ContainsKey_System__String_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)(this->fields).headerEntries;
  if (this_00 !=
      (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)0x0
     ) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                      (this_00,(Object *)key,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__ContainsKey_System__String_
                       ->klass->rgctx_data[0x21].method);
    return (byte)((uint)iVar1 >> 0x1f) ^ 1;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Void Load(String, String) */

void Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_Load
               (Catalog *this,String *text,String *fileName,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GNU__Gettext__CharsetInfoFinder);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GNU__Gettext__LoadParser);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Collections__Generic__ICollection<System::Collections::Generic::KeyValuePair<System::String,_GNU::Gettext::CatalogEntry>_>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogDeletedEntry>__Clear__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogEntry>__Clear__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).entriesDict != (IDictionary_2_System_String_GNU_Gettext_CatalogEntry_ *)0x0) {
    FUN_?(3);
    pLVar1 = (this->fields).entriesList;
    if (pLVar1 != (List_1_GNU_Gettext_CatalogEntry_ *)0x0) {
      piVar2 = &(pLVar1->fields)._version;
      *piVar2 = *piVar2 + 1;
      iVar3 = (pLVar1->fields)._size;
      (pLVar1->fields)._size = 0;
      if (0 < iVar3) {
        mscorlib.dll::System::Array::Array_Clear
                  ((Array *)(pLVar1->fields)._items,0,iVar3,(MethodInfo *)0x0);
      }
      pLVar4 = (this->fields).deletedEntriesList;
      if (pLVar4 != (List_1_GNU_Gettext_CatalogDeletedEntry_ *)0x0) {
        piVar2 = &(pLVar4->fields)._version;
        *piVar2 = *piVar2 + 1;
        iVar3 = (pLVar4->fields)._size;
        (pLVar4->fields)._size = 0;
        if (0 < iVar3) {
          mscorlib.dll::System::Array::Array_Clear
                    ((Array *)(pLVar4->fields)._items,0,iVar3,(MethodInfo *)0x0);
        }
        (this->fields).isOk = 0;
        (this->fields).fileName = fileName;
        if (iRam_? != 0) {
          uVar5 = (uint)((ulonglong)&(this->fields).fileName >> 0xc);
          lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
          do {
            uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
            puVar8 = (ulonglong *)(lVar6 + 0xADDR);
            LOCK();
            bVar9 = uVar7 == *puVar8;
            if (bVar9) {
              *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
            }
            UNLOCK();
          } while (!bVar9);
        }
        pCVar10 = (CatalogParser *)FUN_?(TypeInfo__GNU__Gettext__CharsetInfoFinder);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__GNU__Gettext__CatalogParser);
          LOCK();
          UNLOCK();
          FUN_?(&StringLiteral_iso_8859_1);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pEVar11 = mscorlib.dll::System::Text::Encoding::Encoding_GetEncoding_2
                            (StringLiteral_iso_8859_1,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__GNU__Gettext__CatalogParser->_1).field_0x1c == 0) {
          FUN_?();
        }
        CatalogParser::CatalogParser__ctor(pCVar10,text,pEVar11,(MethodInfo *)0x0);
        pCVar10[1].klass = (CatalogParser__Class *)StringLiteral_iso_8859_1;
        if (iRam_? != 0) {
          uVar5 = (uint)((ulonglong)(pCVar10 + 1) >> 0xc);
          lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
          do {
            uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
            puVar8 = (ulonglong *)(lVar6 + 0xADDR);
            LOCK();
            bVar9 = uVar7 == *puVar8;
            if (bVar9) {
              *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
            }
            UNLOCK();
          } while (!bVar9);
        }
        iVar12 = iRam_?;
        (this->fields).Charset = (String *)pCVar10[1].klass;
        if (iVar12 != 0) {
          uVar5 = (uint)((ulonglong)&(this->fields).Charset >> 0xc);
          lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
          do {
            uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
            puVar8 = (ulonglong *)(lVar6 + 0xADDR);
            LOCK();
            bVar9 = uVar7 == *puVar8;
            if (bVar9) {
              *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
            }
            UNLOCK();
          } while (!bVar9);
        }
        CatalogParser::CatalogParser_Parse(pCVar10,text,(MethodInfo *)0x0);
        (this->fields).Charset = (String *)pCVar10[1].klass;
        if (iRam_? != 0) {
          uVar5 = (uint)((ulonglong)&(this->fields).Charset >> 0xc);
          lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
          do {
            uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
            puVar8 = (ulonglong *)(lVar6 + 0xADDR);
            LOCK();
            bVar9 = uVar7 == *puVar8;
            if (bVar9) {
              *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
            }
            UNLOCK();
          } while (!bVar9);
        }
        iVar12 = iRam_?;
        (this->fields).Charset = (String *)pCVar10[1].klass;
        if (iVar12 != 0) {
          uVar5 = (uint)((ulonglong)&(this->fields).Charset >> 0xc);
          lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
          do {
            uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
            puVar8 = (ulonglong *)(lVar6 + 0xADDR);
            LOCK();
            bVar9 = uVar7 == *puVar8;
            if (bVar9) {
              *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
            }
            UNLOCK();
          } while (!bVar9);
        }
        pEVar11 = Catalog_GetEncoding((this->fields).Charset,(MethodInfo *)0x0);
        pCVar10 = (CatalogParser *)FUN_?(TypeInfo__GNU__Gettext__LoadParser);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__GNU__Gettext__CatalogParser);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__GNU__Gettext__CatalogParser->_1).field_0x1c == 0) {
          FUN_?();
        }
        CatalogParser::CatalogParser__ctor(pCVar10,text,pEVar11,(MethodInfo *)0x0);
        pCVar10[1].klass = (CatalogParser__Class *)this;
        if (iRam_? != 0) {
          uVar5 = (uint)((ulonglong)(pCVar10 + 1) >> 0xc);
          lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
          do {
            uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
            puVar8 = (ulonglong *)(lVar6 + 0xADDR);
            LOCK();
            bVar9 = uVar7 == *puVar8;
            if (bVar9) {
              *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
            }
            UNLOCK();
          } while (!bVar9);
        }
        bVar13 = CatalogParser::CatalogParser_Parse(pCVar10,text,(MethodInfo *)0x0);
        if (bVar13 == 0) {
          pSVar14 = (String *)func_?(&StringLiteral_Error_during_parsing___0___file_);
          pSVar14 = mscorlib.dll::System::String::String_Format
                              (pSVar14,(Object *)fileName,(MethodInfo *)0x0);
          uVar15 = func_?(&TypeInfo__System__Exception);
          this_00 = (Exception *)func_?(uVar15);
          mscorlib.dll::System::Exception::Exception__ctor_1(this_00,pSVar14,(MethodInfo *)0x0);
          uVar15 = func_?(&
                                       MethodInfo__GNU__Gettext__Catalog__Load_System__String__System__String_
                                      );
          FUN_?(this_00,uVar15);
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        (this->fields).isOk = 1;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__System__EventArgs,0,0);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        (this->fields).isDirty = 0;
        if (*(int *)&(TypeInfo__System__EventArgs->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__System__EventArgs);
        }
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(this->klass->vtable).OnDirtyChanged.methodPtr)
                  (this,TypeInfo__System__EventArgs->static_fields->Empty,
                   (this->klass->vtable).OnDirtyChanged.method);
        return;
      }
    }
  }
  FUN_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void ParseHeaderDict() */

void Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_ParseHeaderDict
               (Catalog *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Char);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_PO_Revision_Date);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Project_Id_Version);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral___charset_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Content_Type);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Language_Team);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Last_Translator);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_POT_Creation_Date);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_iso_8859_1);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = Catalog_GetHeader(this,StringLiteral_Project_Id_Version,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields).Project = pSVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).Project >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pSVar1 = Catalog_GetHeader(this,StringLiteral_POT_Creation_Date,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields).CreationDate = pSVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).CreationDate >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pSVar1 = Catalog_GetHeader(this,StringLiteral_PO_Revision_Date,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields).RevisionDate = pSVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).RevisionDate >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pSVar1 = Catalog_GetHeader(this,StringLiteral_Last_Translator,(MethodInfo *)0x0);
  if ((pSVar1 != (String *)0x0) && ((pSVar1->fields)._stringLength != 0)) {
    lVar4 = FUN_?(TypeInfo__System__Char,2);
    if (lVar4 == 0) goto code_?;
    if ((*(int *)(lVar4 + 0x18) == 0) ||
       (*(undefined2 *)(lVar4 + 0x20) = 0x3c, *(uint *)(lVar4 + 0x18) < 2))
    goto code_?;
    bVar2 = cRam_? == '\0';
    *(undefined2 *)(lVar4 + 0x22) = 0x3e;
    if (bVar2) {
      FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    RStack_7._8_8_ = RStack_7._8_8_ & 0xffffffff;
    if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->field_0x135
        & 1) == 0) {
      FUN_?();
    }
    RStack_7._pointer._value = (void *)(lVar4 + 0x20);
    RStack_7._length = *(undefined4 *)(lVar4 + 0x18);
    pSVar8 = mscorlib.dll::System::String::String_SplitInternal
                       (pSVar1,&RStack_7,0x7fffffff,StringSplitOptions__Enum_None,(MethodInfo *)0x0
                       );
    iVar9 = iRam_?;
    if (pSVar8 == (String__Array *)0x0) goto code_?;
    if ((int)pSVar8->max_length < 2) {
      (this->fields).Translator = pSVar1;
      if (iVar9 != 0) {
        uVar3 = (uint)((ulonglong)&(this->fields).Translator >> 0xc);
        lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
        do {
          uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
          puVar6 = (ulonglong *)(lVar4 + 0xADDR);
          LOCK();
          bVar2 = uVar5 == *puVar6;
          if (bVar2) {
            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
          iVar9 = iRam_?;
        } while (!bVar2);
      }
      (this->fields).TranslatorEmail = (String *)**(undefined8 **)(lRam_? + 0xb8);
      if (iVar9 != 0) {
        uVar3 = (uint)((ulonglong)&(this->fields).TranslatorEmail >> 0xc);
        lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
        do {
          uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
          puVar6 = (ulonglong *)(lVar4 + 0xADDR);
          LOCK();
          bVar2 = uVar5 == *puVar6;
          if (bVar2) {
            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar2);
      }
    }
    else {
      if ((int)pSVar8->max_length == 0) goto code_?;
      if (pSVar8->vector[0] == (String *)0x0) goto code_?;
      pSVar1 = mscorlib.dll::System::String::String_TrimWhiteSpaceHelper
                         (pSVar8->vector[0],String_TrimType__Enum_Both,(MethodInfo *)0x0);
      bVar2 = iRam_? != 0;
      (this->fields).Translator = pSVar1;
      if (bVar2) {
        uVar3 = (uint)((ulonglong)&(this->fields).Translator >> 0xc);
        lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
        do {
          uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
          puVar6 = (ulonglong *)(lVar4 + 0xADDR);
          LOCK();
          bVar2 = uVar5 == *puVar6;
          if (bVar2) {
            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar2);
      }
      if ((uint)pSVar8->max_length < 2) goto code_?;
      if (pSVar8->vector[1] == (String *)0x0) goto code_?;
      pSVar1 = mscorlib.dll::System::String::String_TrimWhiteSpaceHelper
                         (pSVar8->vector[1],String_TrimType__Enum_Both,(MethodInfo *)0x0);
      bVar2 = iRam_? != 0;
      (this->fields).TranslatorEmail = pSVar1;
      if (bVar2) {
        uVar3 = (uint)((ulonglong)&(this->fields).TranslatorEmail >> 0xc);
        lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
        do {
          uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
          puVar6 = (ulonglong *)(lVar4 + 0xADDR);
          LOCK();
          bVar2 = uVar5 == *puVar6;
          if (bVar2) {
            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar2);
      }
    }
  }
  pSVar1 = Catalog_GetHeader(this,StringLiteral_Language_Team,(MethodInfo *)0x0);
  if ((pSVar1 != (String *)0x0) && ((pSVar1->fields)._stringLength != 0)) {
    lVar4 = FUN_?(TypeInfo__System__Char,2);
    if (lVar4 == 0) goto code_?;
    if ((*(int *)(lVar4 + 0x18) == 0) ||
       (*(undefined2 *)(lVar4 + 0x20) = 0x3c, *(uint *)(lVar4 + 0x18) < 2))
    goto code_?;
    bVar2 = cRam_? == '\0';
    *(undefined2 *)(lVar4 + 0x22) = 0x3e;
    if (bVar2) {
      FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    RStack_7._8_8_ = RStack_7._8_8_ & 0xffffffff;
    if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->field_0x135
        & 1) == 0) {
      FUN_?();
    }
    RStack_7._pointer._value = (void *)(lVar4 + 0x20);
    RStack_7._length = *(undefined4 *)(lVar4 + 0x18);
    pSVar8 = mscorlib.dll::System::String::String_SplitInternal
                       (pSVar1,&RStack_7,0x7fffffff,StringSplitOptions__Enum_None,(MethodInfo *)0x0
                       );
    iVar9 = iRam_?;
    if (pSVar8 == (String__Array *)0x0) goto code_?;
    if ((int)pSVar8->max_length < 2) {
      (this->fields).Team = pSVar1;
      if (iVar9 != 0) {
        uVar3 = (uint)((ulonglong)&(this->fields).Team >> 0xc);
        lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
        do {
          uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
          puVar6 = (ulonglong *)(lVar4 + 0xADDR);
          LOCK();
          bVar2 = uVar5 == *puVar6;
          if (bVar2) {
            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
          iVar9 = iRam_?;
        } while (!bVar2);
      }
      (this->fields).TeamEmail = (String *)**(undefined8 **)(lRam_? + 0xb8);
      if (iVar9 != 0) {
        uVar3 = (uint)((ulonglong)&(this->fields).TeamEmail >> 0xc);
        lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
        do {
          uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
          puVar6 = (ulonglong *)(lVar4 + 0xADDR);
          LOCK();
          bVar2 = uVar5 == *puVar6;
          if (bVar2) {
            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar2);
      }
    }
    else {
      if ((int)pSVar8->max_length == 0) {
code_?:
        FUN_?();
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      if (pSVar8->vector[0] == (String *)0x0) goto code_?;
      pSVar1 = mscorlib.dll::System::String::String_TrimWhiteSpaceHelper
                         (pSVar8->vector[0],String_TrimType__Enum_Both,(MethodInfo *)0x0);
      bVar2 = iRam_? != 0;
      (this->fields).Team = pSVar1;
      if (bVar2) {
        uVar3 = (uint)((ulonglong)&(this->fields).Team >> 0xc);
        lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
        do {
          uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
          puVar6 = (ulonglong *)(lVar4 + 0xADDR);
          LOCK();
          bVar2 = uVar5 == *puVar6;
          if (bVar2) {
            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar2);
      }
      if ((uint)pSVar8->max_length < 2) goto code_?;
      if (pSVar8->vector[1] == (String *)0x0) goto code_?;
      pSVar1 = mscorlib.dll::System::String::String_TrimWhiteSpaceHelper
                         (pSVar8->vector[1],String_TrimType__Enum_Both,(MethodInfo *)0x0);
      bVar2 = iRam_? != 0;
      (this->fields).TeamEmail = pSVar1;
      if (bVar2) {
        uVar3 = (uint)((ulonglong)&(this->fields).TeamEmail >> 0xc);
        lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
        do {
          uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
          puVar6 = (ulonglong *)(lVar4 + 0xADDR);
          LOCK();
          bVar2 = uVar5 == *puVar6;
          if (bVar2) {
            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar2);
      }
    }
  }
  pSVar1 = Catalog_GetHeader(this,StringLiteral_Content_Type,(MethodInfo *)0x0);
  if (pSVar1 == (String *)0x0) {
code_?:
    FUN_?();
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  iVar11 = mscorlib.dll::System::String::String_IndexOf_7
                    (pSVar1,StringLiteral___charset_,0,(pSVar1->fields)._stringLength,
                     StringComparison__Enum_CurrentCulture,(MethodInfo *)0x0);
  if (iVar11 == -1) {
    bVar2 = iRam_? != 0;
    (this->fields).Charset = StringLiteral_iso_8859_1;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)&(this->fields).Charset >> 0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
  }
  else {
    if ((StringLiteral___charset_ == (String *)0x0) ||
       (iVar9 = (StringLiteral___charset_->fields)._stringLength + iVar11,
       pSVar1 = mscorlib.dll::System::String::String_Substring_1
                          (pSVar1,iVar9,(pSVar1->fields)._stringLength - iVar9,(MethodInfo *)0x0),
       pSVar1 == (String *)0x0)) goto code_?;
    pSVar1 = mscorlib.dll::System::String::String_TrimWhiteSpaceHelper
                       (pSVar1,String_TrimType__Enum_Both,(MethodInfo *)0x0);
    bVar2 = iRam_? != 0;
    (this->fields).Charset = pSVar1;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)&(this->fields).Charset >> 0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
  }
  return;
}


/* Void ParseHeaderString(String) */

void Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_ParseHeaderString
               (Catalog *this,String *headers,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Clear__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__set_Item_System__String__System__String_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = StringEscaping::StringEscaping_FromGettextFormat(headers,(MethodInfo *)0x0);
  if (pSVar1 == (String *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__ReadOnlySpan_System__Char___int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar3 = 0;
  pSVar4 = mscorlib.dll::System::String::String_SplitInternal
                     (pSVar1,(ReadOnlySpan_1_Char_ *)&stack0xffffffffffffffc8,0x7fffffff,
                      StringSplitOptions__Enum_None,(MethodInfo *)0x0);
  this_00 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *
            )(this->fields).headerEntries;
  if ((this_00 ==
       (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0)
     || (mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
         TypeConverterRegistry+ConverterKey,System::Object]::
         Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__Clear
                   (this_00,
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Clear__
                   ), pSVar4 == (String__Array *)0x0)) goto code_?;
  ppSVar5 = pSVar4->vector;
  for (; (int)uVar3 < (int)pSVar4->max_length; uVar3 = uVar3 + 1) {
    if ((uint)pSVar4->max_length <= uVar3) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pSVar1 = *ppSVar5;
    pSVar6 = (String *)**(undefined8 **)(lRam_? + 0xb8);
    if (pSVar1 != pSVar6) {
      if (pSVar1 == (String *)0x0) goto code_?;
      if ((pSVar6 != (String *)0x0) &&
         ((pSVar1->fields)._stringLength == (pSVar6->fields)._stringLength)) {
        bVar7 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                          ((uint8_t *)&(pSVar1->fields)._firstChar,
                           (uint8_t *)&(pSVar6->fields)._firstChar,
                           (longlong)(pSVar1->fields)._stringLength * 2,(MethodInfo *)0x0);
        if (bVar7 != 0) goto code_?;
        if (pSVar1 == (String *)0x0) goto code_?;
      }
      iVar8 = mscorlib.dll::System::SpanHelpers::SpanHelpers_IndexOf_2
                        (&(pSVar1->fields)._firstChar,0x3a,(pSVar1->fields)._stringLength,
                         (MethodInfo *)0x0);
      if (iVar8 == -1) {
        pSVar6 = (String *)func_?(&StringLiteral_Malformed_header____0__);
        pSVar1 = mscorlib.dll::System::String::String_Format
                           (pSVar6,(Object *)pSVar1,(MethodInfo *)0x0);
        uVar9 = func_?(&TypeInfo__System__Exception);
        this_01 = (Exception *)func_?(uVar9);
        mscorlib.dll::System::Exception::Exception__ctor_1(this_01,pSVar1,(MethodInfo *)0x0);
        uVar9 = func_?(&
                                    MethodInfo__GNU__Gettext__Catalog__ParseHeaderString_System__String_
                                   );
        FUN_?(this_01,uVar9);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pSVar6 = mscorlib.dll::System::String::String_Substring_1(pSVar1,0,iVar8,(MethodInfo *)0x0);
      if (pSVar6 == (String *)0x0) goto code_?;
      mscorlib.dll::System::String::String_TrimWhiteSpaceHelper
                (pSVar6,String_TrimType__Enum_Both,(MethodInfo *)0x0);
      pSVar1 = mscorlib.dll::System::String::String_Substring_1
                         (pSVar1,iVar8 + 1,(pSVar1->fields)._stringLength - (iVar8 + 1),
                          (MethodInfo *)0x0);
      if ((pSVar1 == (String *)0x0) ||
         (mscorlib.dll::System::String::String_TrimWhiteSpaceHelper
                    (pSVar1,String_TrimType__Enum_Both,(MethodInfo *)0x0),
         (this->fields).headerEntries == (Dictionary_2_System_String_System_String_ *)0x0))
      goto code_?;
      FUN_?();
    }
code_?:
    ppSVar5 = ppSVar5 + 1;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Char,0);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_PO_Revision_Date);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Project_Id_Version);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral___charset_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Content_Type);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Language_Team);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Last_Translator);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_POT_Creation_Date);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_iso_8859_1);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = Catalog_GetHeader(this,StringLiteral_Project_Id_Version,(MethodInfo *)0x0);
  bVar10 = iRam_? != 0;
  (this->fields).Project = pSVar1;
  if (bVar10) {
    uVar3 = (uint)((ulonglong)&(this->fields).Project >> 0xc);
    lVar11 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar12 = *(ulonglong *)(lVar11 + 0xADDR);
      puVar13 = (ulonglong *)(lVar11 + 0xADDR);
      LOCK();
      bVar10 = uVar12 == *puVar13;
      if (bVar10) {
        *puVar13 = uVar12 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar10);
  }
  pSVar1 = Catalog_GetHeader(this,StringLiteral_POT_Creation_Date,(MethodInfo *)0x0);
  bVar10 = iRam_? != 0;
  (this->fields).CreationDate = pSVar1;
  if (bVar10) {
    uVar3 = (uint)((ulonglong)&(this->fields).CreationDate >> 0xc);
    lVar11 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar12 = *(ulonglong *)(lVar11 + 0xADDR);
      puVar13 = (ulonglong *)(lVar11 + 0xADDR);
      LOCK();
      bVar10 = uVar12 == *puVar13;
      if (bVar10) {
        *puVar13 = uVar12 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar10);
  }
  pSVar1 = Catalog_GetHeader(this,StringLiteral_PO_Revision_Date,(MethodInfo *)0x0);
  bVar10 = iRam_? != 0;
  (this->fields).RevisionDate = pSVar1;
  if (bVar10) {
    uVar3 = (uint)((ulonglong)&(this->fields).RevisionDate >> 0xc);
    lVar11 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar12 = *(ulonglong *)(lVar11 + 0xADDR);
      puVar13 = (ulonglong *)(lVar11 + 0xADDR);
      LOCK();
      bVar10 = uVar12 == *puVar13;
      if (bVar10) {
        *puVar13 = uVar12 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar10);
  }
  pSVar1 = Catalog_GetHeader(this,StringLiteral_Last_Translator,(MethodInfo *)0x0);
  if ((pSVar1 != (String *)0x0) && ((pSVar1->fields)._stringLength != 0)) {
    lVar11 = FUN_?(TypeInfo__System__Char,2);
    if (lVar11 == 0) goto code_?;
    if ((*(int *)(lVar11 + 0x18) == 0) ||
       (*(undefined2 *)(lVar11 + 0x20) = 0x3c, *(uint *)(lVar11 + 0x18) < 2))
    goto code_?;
    bVar10 = cRam_? == '\0';
    *(undefined2 *)(lVar11 + 0x22) = 0x3e;
    if (bVar10) {
      FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->field_0x135
        & 1) == 0) {
      FUN_?();
    }
    pSVar4 = mscorlib.dll::System::String::String_SplitInternal
                       (pSVar1,(ReadOnlySpan_1_Char_ *)&stack0xffffffffffffffd8,0x7fffffff,
                        StringSplitOptions__Enum_None,(MethodInfo *)0x0);
    iVar14 = iRam_?;
    if (pSVar4 == (String__Array *)0x0) goto code_?;
    if ((int)pSVar4->max_length < 2) {
      (this->fields).Translator = pSVar1;
      if (iVar14 != 0) {
        uVar3 = (uint)((ulonglong)&(this->fields).Translator >> 0xc);
        lVar11 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
        do {
          uVar12 = *(ulonglong *)(lVar11 + 0xADDR);
          puVar13 = (ulonglong *)(lVar11 + 0xADDR);
          LOCK();
          bVar10 = uVar12 == *puVar13;
          if (bVar10) {
            *puVar13 = uVar12 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
          iVar14 = iRam_?;
        } while (!bVar10);
      }
      (this->fields).TranslatorEmail = (String *)**(undefined8 **)(lRam_? + 0xb8);
      if (iVar14 != 0) {
        uVar3 = (uint)((ulonglong)&(this->fields).TranslatorEmail >> 0xc);
        lVar11 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
        do {
          uVar12 = *(ulonglong *)(lVar11 + 0xADDR);
          puVar13 = (ulonglong *)(lVar11 + 0xADDR);
          LOCK();
          bVar10 = uVar12 == *puVar13;
          if (bVar10) {
            *puVar13 = uVar12 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar10);
      }
    }
    else {
      if ((int)pSVar4->max_length == 0) goto code_?;
      if (pSVar4->vector[0] == (String *)0x0) goto code_?;
      pSVar1 = mscorlib.dll::System::String::String_TrimWhiteSpaceHelper
                         (pSVar4->vector[0],String_TrimType__Enum_Both,(MethodInfo *)0x0);
      bVar10 = iRam_? != 0;
      (this->fields).Translator = pSVar1;
      if (bVar10) {
        uVar3 = (uint)((ulonglong)&(this->fields).Translator >> 0xc);
        lVar11 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
        do {
          uVar12 = *(ulonglong *)(lVar11 + 0xADDR);
          puVar13 = (ulonglong *)(lVar11 + 0xADDR);
          LOCK();
          bVar10 = uVar12 == *puVar13;
          if (bVar10) {
            *puVar13 = uVar12 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar10);
      }
      if ((uint)pSVar4->max_length < 2) goto code_?;
      if (pSVar4->vector[1] == (String *)0x0) goto code_?;
      pSVar1 = mscorlib.dll::System::String::String_TrimWhiteSpaceHelper
                         (pSVar4->vector[1],String_TrimType__Enum_Both,(MethodInfo *)0x0);
      bVar10 = iRam_? != 0;
      (this->fields).TranslatorEmail = pSVar1;
      if (bVar10) {
        uVar3 = (uint)((ulonglong)&(this->fields).TranslatorEmail >> 0xc);
        lVar11 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
        do {
          uVar12 = *(ulonglong *)(lVar11 + 0xADDR);
          puVar13 = (ulonglong *)(lVar11 + 0xADDR);
          LOCK();
          bVar10 = uVar12 == *puVar13;
          if (bVar10) {
            *puVar13 = uVar12 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar10);
      }
    }
  }
  pSVar1 = Catalog_GetHeader(this,StringLiteral_Language_Team,(MethodInfo *)0x0);
  if ((pSVar1 != (String *)0x0) && ((pSVar1->fields)._stringLength != 0)) {
    lVar11 = FUN_?(TypeInfo__System__Char,2);
    if (lVar11 == 0) goto code_?;
    if ((*(int *)(lVar11 + 0x18) == 0) ||
       (*(undefined2 *)(lVar11 + 0x20) = 0x3c, *(uint *)(lVar11 + 0x18) < 2))
    goto code_?;
    bVar10 = cRam_? == '\0';
    *(undefined2 *)(lVar11 + 0x22) = 0x3e;
    if (bVar10) {
      FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->field_0x135
        & 1) == 0) {
      FUN_?();
    }
    pSVar4 = mscorlib.dll::System::String::String_SplitInternal
                       (pSVar1,(ReadOnlySpan_1_Char_ *)&stack0xffffffffffffffd8,0x7fffffff,
                        StringSplitOptions__Enum_None,(MethodInfo *)0x0);
    iVar14 = iRam_?;
    if (pSVar4 == (String__Array *)0x0) goto code_?;
    if ((int)pSVar4->max_length < 2) {
      (this->fields).Team = pSVar1;
      if (iVar14 != 0) {
        uVar3 = (uint)((ulonglong)&(this->fields).Team >> 0xc);
        lVar11 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
        do {
          uVar12 = *(ulonglong *)(lVar11 + 0xADDR);
          puVar13 = (ulonglong *)(lVar11 + 0xADDR);
          LOCK();
          bVar10 = uVar12 == *puVar13;
          if (bVar10) {
            *puVar13 = uVar12 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
          iVar14 = iRam_?;
        } while (!bVar10);
      }
      (this->fields).TeamEmail = (String *)**(undefined8 **)(lRam_? + 0xb8);
      if (iVar14 != 0) {
        uVar3 = (uint)((ulonglong)&(this->fields).TeamEmail >> 0xc);
        lVar11 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
        do {
          uVar12 = *(ulonglong *)(lVar11 + 0xADDR);
          puVar13 = (ulonglong *)(lVar11 + 0xADDR);
          LOCK();
          bVar10 = uVar12 == *puVar13;
          if (bVar10) {
            *puVar13 = uVar12 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar10);
      }
    }
    else {
      if ((int)pSVar4->max_length == 0) {
code_?:
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (pSVar4->vector[0] == (String *)0x0) goto code_?;
      pSVar1 = mscorlib.dll::System::String::String_TrimWhiteSpaceHelper
                         (pSVar4->vector[0],String_TrimType__Enum_Both,(MethodInfo *)0x0);
      bVar10 = iRam_? != 0;
      (this->fields).Team = pSVar1;
      if (bVar10) {
        uVar3 = (uint)((ulonglong)&(this->fields).Team >> 0xc);
        lVar11 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
        do {
          uVar12 = *(ulonglong *)(lVar11 + 0xADDR);
          puVar13 = (ulonglong *)(lVar11 + 0xADDR);
          LOCK();
          bVar10 = uVar12 == *puVar13;
          if (bVar10) {
            *puVar13 = uVar12 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar10);
      }
      if ((uint)pSVar4->max_length < 2) goto code_?;
      if (pSVar4->vector[1] == (String *)0x0) goto code_?;
      pSVar1 = mscorlib.dll::System::String::String_TrimWhiteSpaceHelper
                         (pSVar4->vector[1],String_TrimType__Enum_Both,(MethodInfo *)0x0);
      bVar10 = iRam_? != 0;
      (this->fields).TeamEmail = pSVar1;
      if (bVar10) {
        uVar3 = (uint)((ulonglong)&(this->fields).TeamEmail >> 0xc);
        lVar11 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
        do {
          uVar12 = *(ulonglong *)(lVar11 + 0xADDR);
          puVar13 = (ulonglong *)(lVar11 + 0xADDR);
          LOCK();
          bVar10 = uVar12 == *puVar13;
          if (bVar10) {
            *puVar13 = uVar12 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar10);
      }
    }
  }
  pSVar1 = Catalog_GetHeader(this,StringLiteral_Content_Type,(MethodInfo *)0x0);
  if (pSVar1 == (String *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar8 = mscorlib.dll::System::String::String_IndexOf_7
                    (pSVar1,StringLiteral___charset_,0,(pSVar1->fields)._stringLength,
                     StringComparison__Enum_CurrentCulture,(MethodInfo *)0x0);
  if (iVar8 == -1) {
    bVar10 = iRam_? != 0;
    (this->fields).Charset = StringLiteral_iso_8859_1;
    if (bVar10) {
      uVar3 = (uint)((ulonglong)&(this->fields).Charset >> 0xc);
      lVar11 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar12 = *(ulonglong *)(lVar11 + 0xADDR);
        puVar13 = (ulonglong *)(lVar11 + 0xADDR);
        LOCK();
        bVar10 = uVar12 == *puVar13;
        if (bVar10) {
          *puVar13 = uVar12 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar10);
    }
  }
  else {
    if ((StringLiteral___charset_ == (String *)0x0) ||
       (iVar14 = (StringLiteral___charset_->fields)._stringLength + iVar8,
       pSVar1 = mscorlib.dll::System::String::String_Substring_1
                          (pSVar1,iVar14,(pSVar1->fields)._stringLength - iVar14,(MethodInfo *)0x0),
       pSVar1 == (String *)0x0)) goto code_?;
    pSVar1 = mscorlib.dll::System::String::String_TrimWhiteSpaceHelper
                       (pSVar1,String_TrimType__Enum_Both,(MethodInfo *)0x0);
    bVar10 = iRam_? != 0;
    (this->fields).Charset = pSVar1;
    if (bVar10) {
      uVar3 = (uint)((ulonglong)&(this->fields).Charset >> 0xc);
      lVar11 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar12 = *(ulonglong *)(lVar11 + 0xADDR);
        puVar13 = (ulonglong *)(lVar11 + 0xADDR);
        LOCK();
        bVar10 = uVar12 == *puVar13;
        if (bVar10) {
          *puVar13 = uVar12 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar10);
    }
  }
  return;
}


/* Void RemoveDeletedItems() */

void Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_RemoveDeletedItems
               (Catalog *this,MethodInfo *method)

{
  int32_t *piVar1;
  undefined1 *puVar2;
  undefined1 auVar3 [32];
  int iVar4;
  int iVar5;
  List_1_GNU_Gettext_CatalogDeletedEntry_ *pLVar6;
  CatalogDeletedEntry__Array *this_00;
  code *pcVar7;
  int iVar8;
  int32_t iVar9;
  ArgumentNullException *this_01;
  undefined8 uVar10;
  IndexOutOfRangeException *pIVar11;
  String *pSVar12;
  undefined1 (*pauVar13) [32];
  undefined1 (*pauVar14) [32];
  undefined1 (*pauVar15) [16];
  CatalogDeletedEntry **ppCVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  undefined1 auVar20 [32];
  
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogDeletedEntry>__Clear__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar6 = (this->fields).deletedEntriesList;
  if (pLVar6 == (List_1_GNU_Gettext_CatalogDeletedEntry_ *)0x0) {
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar4 = (pLVar6->fields)._size;
  piVar1 = &(pLVar6->fields)._version;
  *piVar1 = *piVar1 + 1;
  (pLVar6->fields)._size = 0;
  if (iVar4 < 1) {
    return;
  }
  this_00 = (pLVar6->fields)._items;
  if (this_00 == (CatalogDeletedEntry__Array *)0x0) {
    uVar10 = func_?(&TypeInfo__System__ArgumentNullException,0,iVar4,0);
    this_01 = (ArgumentNullException *)func_?(uVar10);
    pSVar12 = (String *)func_?(&StringLiteral_array);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this_01,pSVar12,(MethodInfo *)0x0);
    uVar10 = func_?(&
                                 MethodInfo__System__Array__Clear_MethodInfo__System__Array__int__int_
                                );
    FUN_?(this_01,uVar10);
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (iVar4 < 0) {
    uVar10 = func_?(&TypeInfo__System__IndexOutOfRangeException,0,iVar4,0);
    pIVar11 = (IndexOutOfRangeException *)func_?(uVar10);
    pSVar12 = (String *)func_?(&StringLiteral_length___0);
    mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1
              (pIVar11,pSVar12,(MethodInfo *)0x0);
    uVar10 = func_?(&
                                 MethodInfo__System__Array__Clear_MethodInfo__System__Array__int__int_
                                );
    FUN_?(pIVar11,uVar10);
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((((Array__Class *)this_00->klass)->_1).initialized_and_no_error == 0 &&
      ((((Array__Class *)this_00->klass)->_1).initialized == 0 &&
      ((((Array__Class *)this_00->klass)->_1).enumtype == 0 &&
      ((((Array__Class *)this_00->klass)->_1).nullabletype == 0 &&
      ((((Array__Class *)this_00->klass)->_1).is_generic == 0 &&
      ((((Array__Class *)this_00->klass)->_1).has_references == 0 &&
      ((((Array__Class *)this_00->klass)->_1).init_pending == 0 &&
      (((Array__Class *)this_00->klass)->_1).size_init_pending == 0))))))) {
    uVar10 = FUN_?();
    FUN_?(uVar10,0);
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (this_00->bounds == (Il2CppArrayBounds *)0x0) {
    iVar8 = 0;
  }
  else {
    iVar8 = this_00->bounds->lower_bound;
  }
  if (0 < iVar8) {
    uVar10 = func_?(&TypeInfo__System__IndexOutOfRangeException,0,iVar4,0);
    pIVar11 = (IndexOutOfRangeException *)func_?(uVar10);
    pSVar12 = (String *)func_?(&StringLiteral_index___lower_bound);
    mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1
              (pIVar11,pSVar12,(MethodInfo *)0x0);
    uVar10 = func_?(&
                                 MethodInfo__System__Array__Clear_MethodInfo__System__Array__int__int_
                                );
    FUN_?(pIVar11,uVar10);
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar9 = mscorlib.dll::System::Array::Array_get_Length((Array *)this_00,(MethodInfo *)0x0);
  if (iVar9 - iVar4 < -iVar8) {
    uVar10 = func_?(&TypeInfo__System__IndexOutOfRangeException);
    pIVar11 = (IndexOutOfRangeException *)func_?(uVar10);
    pSVar12 = (String *)func_?(&StringLiteral_index___length___size);
    mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1
              (pIVar11,pSVar12,(MethodInfo *)0x0);
    uVar10 = func_?(&
                                 MethodInfo__System__Array__Clear_MethodInfo__System__Array__int__int_
                                );
    FUN_?(pIVar11,uVar10);
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar5 = (((Array__Class *)this_00->klass)->_1).native_size;
  uVar18 = (ulonglong)(iVar5 * iVar4);
  ppCVar16 = (CatalogDeletedEntry **)
             ((longlong)this_00->vector + (longlong)iVar5 * (longlong)-iVar8);
  switch(uVar18) {
  case 0:
    return;
  case 8:
    *(undefined8 *)((longlong)ppCVar16 + (uVar18 - 8)) = 0;
    return;
  case 9:
    *(undefined8 *)((longlong)ppCVar16 + (uVar18 - 9)) = 0;
    *(undefined1 *)((longlong)ppCVar16 + (uVar18 - 1)) = 0;
    return;
  case 10:
    *(undefined8 *)((longlong)ppCVar16 + (uVar18 - 10)) = 0;
    *(undefined2 *)((longlong)ppCVar16 + (uVar18 - 2)) = 0;
    return;
  case 0xb:
    *(undefined8 *)((longlong)ppCVar16 + (uVar18 - 0xb)) = 0;
    *(undefined2 *)((longlong)ppCVar16 + (uVar18 - 3)) = 0;
    *(undefined1 *)((longlong)ppCVar16 + (uVar18 - 1)) = 0;
    return;
  case 0xc:
    *(undefined8 *)((longlong)ppCVar16 + (uVar18 - 0xc)) = 0;
  case 4:
    *(undefined4 *)((longlong)ppCVar16 + (uVar18 - 4)) = 0;
    return;
  case 0xd:
    *(undefined8 *)((longlong)ppCVar16 + (uVar18 - 0xd)) = 0;
  case 5:
    *(undefined4 *)((longlong)ppCVar16 + (uVar18 - 5)) = 0;
    *(undefined1 *)((longlong)ppCVar16 + (uVar18 - 1)) = 0;
    return;
  case 0xe:
    *(undefined8 *)((longlong)ppCVar16 + (uVar18 - 0xe)) = 0;
  case 6:
    *(undefined4 *)((longlong)ppCVar16 + (uVar18 - 6)) = 0;
  case 2:
    *(undefined2 *)((longlong)ppCVar16 + (uVar18 - 2)) = 0;
    return;
  case 0xf:
    *(undefined8 *)((longlong)ppCVar16 + (uVar18 - 0xf)) = 0;
  case 7:
    *(undefined4 *)((longlong)ppCVar16 + (uVar18 - 7)) = 0;
  case 3:
    *(undefined2 *)((longlong)ppCVar16 + (uVar18 - 3)) = 0;
  case 1:
    *(undefined1 *)((longlong)ppCVar16 + (uVar18 - 1)) = 0;
    return;
  }
  auVar20._0_16_ = ZEXT816(0);
  if (uVar18 < 0x21) {
    *(undefined1 (*) [16])ppCVar16 = auVar20._0_16_;
    *(undefined1 (*) [16])((longlong)ppCVar16 + (uVar18 - 0x10)) = auVar20._0_16_;
    return;
  }
  if (uRam_? < 3) {
    if ((uVar18 <= uRam_?) || ((bRam_? & 2) == 0)) {
      lVar19 = ((ulonglong)ppCVar16 & 0xf) - 0x10;
      pauVar15 = (undefined1 (*) [16])((longlong)ppCVar16 - lVar19);
      uVar18 = uVar18 + lVar19;
      if (0x80 < uVar18) {
        do {
          *pauVar15 = auVar20._0_16_;
          pauVar15[1] = auVar20._0_16_;
          pauVar15[2] = auVar20._0_16_;
          pauVar15[3] = auVar20._0_16_;
          pauVar15[4] = auVar20._0_16_;
          pauVar15[5] = auVar20._0_16_;
          pauVar15[6] = auVar20._0_16_;
          pauVar15[7] = auVar20._0_16_;
          pauVar15 = pauVar15 + 8;
          uVar18 = uVar18 - 0x80;
        } while (0x7f < uVar18);
      }
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulonglong)*(uint *)(&UNK_? + (uVar18 + 0xf >> 4) * 4) + 0xADDR))
                (pauVar15,-lVar19);
      return;
    }
  }
  else if (((uVar18 <= uRam_?) || (uRam_? < uVar18)) ||
          ((bRam_? & 2) == 0)) {
    auVar20._16_16_ = auVar20._0_16_;
    lVar19 = ((ulonglong)ppCVar16 & 0x1f) - 0x20;
    pauVar13 = (undefined1 (*) [32])((longlong)ppCVar16 - lVar19);
    uVar18 = uVar18 + lVar19;
    if (0x100 < uVar18) {
      if (uRam_? < uVar18) {
        do {
          uVar17 = uVar18;
          pauVar14 = pauVar13;
          auVar3 = vmovntdq_avx(auVar20);
          *pauVar14 = auVar3;
          auVar3 = vmovntdq_avx(auVar20);
          pauVar14[1] = auVar3;
          auVar3 = vmovntdq_avx(auVar20);
          pauVar14[2] = auVar3;
          auVar3 = vmovntdq_avx(auVar20);
          pauVar14[3] = auVar3;
          auVar3 = vmovntdq_avx(auVar20);
          pauVar14[4] = auVar3;
          auVar3 = vmovntdq_avx(auVar20);
          pauVar14[5] = auVar3;
          auVar3 = vmovntdq_avx(auVar20);
          pauVar14[6] = auVar3;
          auVar3 = vmovntdq_avx(auVar20);
          pauVar14[7] = auVar3;
          pauVar13 = pauVar14 + 8;
          uVar18 = uVar17 - 0x100;
        } while (0xff < uVar17 - 0x100);
        uVar18 = uVar17 - 0xe1 & 0xffffffffffffffe0;
        switch(uVar17) {
        case 0x1e1:
        case 0x1e2:
        case 0x1e3:
        case 0x1e4:
        case 0x1e5:
        case 0x1e6:
        case 0x1e7:
        case 0x1e8:
        case 0x1e9:
        case 0x1ea:
        case 0x1eb:
        case 0x1ec:
        case 0x1ed:
        case 0x1ee:
        case 0x1ef:
        case 0x1f0:
        case 0x1f1:
        case 0x1f2:
        case 499:
        case 500:
        case 0x1f5:
        case 0x1f6:
        case 0x1f7:
        case 0x1f8:
        case 0x1f9:
        case 0x1fa:
        case 0x1fb:
        case 0x1fc:
        case 0x1fd:
        case 0x1fe:
        case 0x1ff:
          auVar3 = vmovntdq_avx(auVar20);
          *(undefined1 (*) [32])(*pauVar14 + uVar18) = auVar3;
        case 0x1c1:
        case 0x1c2:
        case 0x1c3:
        case 0x1c4:
        case 0x1c5:
        case 0x1c6:
        case 0x1c7:
        case 0x1c8:
        case 0x1c9:
        case 0x1ca:
        case 0x1cb:
        case 0x1cc:
        case 0x1cd:
        case 0x1ce:
        case 0x1cf:
        case 0x1d0:
        case 0x1d1:
        case 0x1d2:
        case 0x1d3:
        case 0x1d4:
        case 0x1d5:
        case 0x1d6:
        case 0x1d7:
        case 0x1d8:
        case 0x1d9:
        case 0x1da:
        case 0x1db:
        case 0x1dc:
        case 0x1dd:
        case 0x1de:
        case 0x1df:
        case 0x1e0:
          auVar3 = vmovntdq_avx(auVar20);
          *(undefined1 (*) [32])(pauVar14[1] + uVar18) = auVar3;
        case 0x1a1:
        case 0x1a2:
        case 0x1a3:
        case 0x1a4:
        case 0x1a5:
        case 0x1a6:
        case 0x1a7:
        case 0x1a8:
        case 0x1a9:
        case 0x1aa:
        case 0x1ab:
        case 0x1ac:
        case 0x1ad:
        case 0x1ae:
        case 0x1af:
        case 0x1b0:
        case 0x1b1:
        case 0x1b2:
        case 0x1b3:
        case 0x1b4:
        case 0x1b5:
        case 0x1b6:
        case 0x1b7:
        case 0x1b8:
        case 0x1b9:
        case 0x1ba:
        case 0x1bb:
        case 0x1bc:
        case 0x1bd:
        case 0x1be:
        case 0x1bf:
        case 0x1c0:
          auVar3 = vmovntdq_avx(auVar20);
          *(undefined1 (*) [32])(pauVar14[2] + uVar18) = auVar3;
        case 0x181:
        case 0x182:
        case 0x183:
        case 0x184:
        case 0x185:
        case 0x186:
        case 0x187:
        case 0x188:
        case 0x189:
        case 0x18a:
        case 0x18b:
        case 0x18c:
        case 0x18d:
        case 0x18e:
        case 399:
        case 400:
        case 0x191:
        case 0x192:
        case 0x193:
        case 0x194:
        case 0x195:
        case 0x196:
        case 0x197:
        case 0x198:
        case 0x199:
        case 0x19a:
        case 0x19b:
        case 0x19c:
        case 0x19d:
        case 0x19e:
        case 0x19f:
        case 0x1a0:
          auVar3 = vmovntdq_avx(auVar20);
          *(undefined1 (*) [32])(pauVar14[3] + uVar18) = auVar3;
        case 0x161:
        case 0x162:
        case 0x163:
        case 0x164:
        case 0x165:
        case 0x166:
        case 0x167:
        case 0x168:
        case 0x169:
        case 0x16a:
        case 0x16b:
        case 0x16c:
        case 0x16d:
        case 0x16e:
        case 0x16f:
        case 0x170:
        case 0x171:
        case 0x172:
        case 0x173:
        case 0x174:
        case 0x175:
        case 0x176:
        case 0x177:
        case 0x178:
        case 0x179:
        case 0x17a:
        case 0x17b:
        case 0x17c:
        case 0x17d:
        case 0x17e:
        case 0x17f:
        case 0x180:
          auVar3 = vmovntdq_avx(auVar20);
          *(undefined1 (*) [32])(pauVar14[4] + uVar18) = auVar3;
        case 0x141:
        case 0x142:
        case 0x143:
        case 0x144:
        case 0x145:
        case 0x146:
        case 0x147:
        case 0x148:
        case 0x149:
        case 0x14a:
        case 0x14b:
        case 0x14c:
        case 0x14d:
        case 0x14e:
        case 0x14f:
        case 0x150:
        case 0x151:
        case 0x152:
        case 0x153:
        case 0x154:
        case 0x155:
        case 0x156:
        case 0x157:
        case 0x158:
        case 0x159:
        case 0x15a:
        case 0x15b:
        case 0x15c:
        case 0x15d:
        case 0x15e:
        case 0x15f:
        case 0x160:
          auVar3 = vmovntdq_avx(auVar20);
          *(undefined1 (*) [32])(pauVar14[5] + uVar18) = auVar3;
        case 0x121:
        case 0x122:
        case 0x123:
        case 0x124:
        case 0x125:
        case 0x126:
        case 0x127:
        case 0x128:
        case 0x129:
        case 0x12a:
        case 299:
        case 300:
        case 0x12d:
        case 0x12e:
        case 0x12f:
        case 0x130:
        case 0x131:
        case 0x132:
        case 0x133:
        case 0x134:
        case 0x135:
        case 0x136:
        case 0x137:
        case 0x138:
        case 0x139:
        case 0x13a:
        case 0x13b:
        case 0x13c:
        case 0x13d:
        case 0x13e:
        case 0x13f:
        case 0x140:
          auVar3 = vmovntdq_avx(auVar20);
          *(undefined1 (*) [32])(pauVar14[6] + uVar18) = auVar3;
        default:
          *(undefined1 (*) [32])(pauVar14[-1] + uVar17) = auVar20;
        case 0x100:
          *(undefined1 (*) [32])ppCVar16 = auVar20;
          return;
        }
      }
      do {
        *pauVar13 = auVar20;
        pauVar13[1] = auVar20;
        pauVar13[2] = auVar20;
        pauVar13[3] = auVar20;
        pauVar13[4] = auVar20;
        pauVar13[5] = auVar20;
        pauVar13[6] = auVar20;
        pauVar13[7] = auVar20;
        pauVar13 = pauVar13 + 8;
        uVar18 = uVar18 - 0x100;
      } while (0xff < uVar18);
    }
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulonglong)*(uint *)(&UNK_? + (uVar18 + 0x1f >> 5) * 4) + 0xADDR))
              (0,-lVar19);
    return;
  }
  for (; uVar18 != 0; uVar18 = uVar18 - 1) {
    *(undefined1 *)ppCVar16 = 0;
    ppCVar16 = (CatalogDeletedEntry **)((longlong)ppCVar16 + 1);
  }
  return;
}


/* Void RemoveItem(CatalogEntry) */

void Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_RemoveItem
               (Catalog *this,CatalogEntry *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::CatalogEntry>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogEntry>__Contains_GNU__Gettext__CatalogEntry_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogEntry>__Remove_GNU__Gettext__CatalogEntry_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar1 = Catalog_FindItem_1(this,data,(MethodInfo *)0x0);
  if (pCVar1 != (CatalogEntry *)0x0) {
    pIVar2 = (this->fields).entriesDict;
    if (data == (CatalogEntry *)0x0) goto code_?;
    pSVar3 = CatalogEntry::CatalogEntry_MakeKey
                       ((data->fields).str,(data->fields).context,(MethodInfo *)0x0);
    if (pIVar2 == (IDictionary_2_System_String_GNU_Gettext_CatalogEntry_ *)0x0)
    goto code_?;
    FUN_?(6,
                  TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::CatalogEntry>
                  ,pIVar2,pSVar3);
  }
  pLVar4 = (this->fields).entriesList;
  if (pLVar4 != (List_1_GNU_Gettext_CatalogEntry_ *)0x0) {
    if ((pLVar4->fields)._size != 0) {
      iVar5 = mscorlib.dll::System::Array::Array_IndexOf_69
                        ((Object__Array *)(pLVar4->fields)._items,(Object *)data,0,
                         (pLVar4->fields)._size,
                         (MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogEntry>__Contains_GNU__Gettext__CatalogEntry_
                          ->klass->rgctx_data[0x17].method)->klass->rgctx_data[0x27].method);
      if (iVar5 != -1) {
        pLVar4 = (this->fields).entriesList;
        if (pLVar4 == (List_1_GNU_Gettext_CatalogEntry_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Remove
                  ((List_1_System_Object_ *)pLVar4,(Object *)data,
                   MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogEntry>__Remove_GNU__Gettext__CatalogEntry_
                  );
      }
    }
    return;
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SaveMultiLines(StringBuilder, String, String) */

void Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_SaveMultiLines
               (StringBuilder *sb,String *text,String *newLine,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__String);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_u000A);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__0__1_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_u000Du000A);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_u000Au000D);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_u000D);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (text == (String *)0x0) {
    return;
  }
  pSVar1 = (String__Array *)FUN_?(TypeInfo__System__String,5);
  if (pSVar1 != (String__Array *)0x0) {
    FUN_?(pSVar1,0,StringLiteral_u000Au000D);
    FUN_?(pSVar1,1,StringLiteral_u000Du000A);
    FUN_?(pSVar1,2,StringLiteral_u000D);
    FUN_?(pSVar1,3,StringLiteral_u000A);
    FUN_?(pSVar1,4,StringLiteral_u000D);
    uVar2 = 0;
    pSVar1 = mscorlib.dll::System::String::String_SplitInternal_1
                       (text,(String *)0x0,pSVar1,0x7fffffff,StringSplitOptions__Enum_None,
                        (MethodInfo *)0x0);
    if (pSVar1 != (String__Array *)0x0) {
      ppSVar3 = pSVar1->vector;
      while( true ) {
        format = StringLiteral__0__1_;
        if ((int)pSVar1->max_length <= (int)uVar2) {
          return;
        }
        if ((uint)pSVar1->max_length <= uVar2) {
          FUN_?();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (sb == (StringBuilder *)0x0) break;
        PStack_5._arg0 = (Object *)0x0;
        PStack_5._arg1 = (Object *)0x0;
        PStack_5._arg2 = (Object *)0x0;
        PStack_5._args = (Object__Array *)0x0;
        mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1
                  (&PStack_5,(Object *)*ppSVar3,(Object *)newLine,(MethodInfo *)0x0);
        PStack_6._arg0 = PStack_5._arg0;
        PStack_6._arg1 = PStack_5._arg1;
        PStack_6._arg2 = PStack_5._arg2;
        PStack_6._args = PStack_5._args;
        mscorlib.dll::System::Text::StringBuilder::StringBuilder_AppendFormatHelper
                  (sb,(IFormatProvider *)0x0,format,&PStack_6,(MethodInfo *)0x0);
        uVar2 = uVar2 + 1;
        ppSVar3 = ppSVar3 + 1;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetHeader(String, String) */

void Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_SetHeader
               (Catalog *this,String *key,String *value,MethodInfo *method)

{
  uVar1 = SUB84(method,0);
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__set_Item_System__String__System__String_
                  ,key,value,uVar1);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).headerEntries;
  if (this_00 != (Dictionary_2_System_String_System_String_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)key,(Object *)value,
               CONCAT31((int3)((uint)uVar1 >> 8),1),
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__set_Item_System__String__System__String_
               ->klass->rgctx_data[0x22].method);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetHeaderNotEmpty(String, String) */

void Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_SetHeaderNotEmpty
               (Catalog *this,String *key,String *value,MethodInfo *method)

{
  if ((value == (String *)0x0) || ((value->fields)._stringLength == 0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Remove_System__String_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    bVar1 = Catalog_HasHeader(this,key,(MethodInfo *)0x0);
    pMVar2 = 
    MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Remove_System__String_
    ;
    if (bVar1 != 0) {
      pDVar3 = (this->fields).headerEntries;
      if (pDVar3 == (Dictionary_2_System_String_System_String_ *)0x0) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (key == (String *)0x0) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentNullException
                  (ExceptionArgument__Enum_key,(MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((pDVar3->fields)._buckets != (Int32__Array *)0x0) {
        pIVar5 = (pDVar3->fields)._comparer;
        if (pIVar5 == (IEqualityComparer_1_System_String_ *)0x0) {
          uVar6 = (*(key->klass->vtable).GetHashCode.methodPtr)
                             (key,(key->klass->vtable).GetHashCode.method);
        }
        else {
          pvVar7 = MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Remove_System__String_
                    ->klass->rgctx_data[1].rgctxDataDummy;
          if ((*(byte *)((longlong)pvVar7 + 0x135) & 1) == 0) {
            pvVar7 = (void *)FUN_?(pvVar7);
          }
          uVar6 = FUN_?(1,pvVar7,pIVar5,key);
        }
        pIVar8 = (pDVar3->fields)._buckets;
        if (pIVar8 == (Int32__Array *)0x0) {
code_?:
          FUN_?();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar9 = (int)(uVar6 & 0x7fffffff) % (int)pIVar8->max_length;
        if ((uint)pIVar8->max_length <= uVar9) {
DAT_?:
          FUN_?();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar10 = pIVar8->vector[(int)uVar9] - 1;
        uVar11 = 0xffffffff;
        while (uVar12 = uVar10, -1 < (int)uVar12) {
          pDVar13 = (pDVar3->fields)._entries;
          if (pDVar13 == (Dictionary_2_TKey_TValue_Entry_System_String_System_String___Array *)0x0)
          goto code_?;
          if ((uint)pDVar13->max_length <= uVar12) goto DAT_?;
          if (pDVar13->vector[(int)uVar12].hashCode == (uVar6 & 0x7fffffff)) {
            pIVar5 = (pDVar3->fields)._comparer;
            pIVar14 = pMVar2->klass->rgctx_data;
            if (pIVar5 == (IEqualityComparer_1_System_String_ *)0x0) {
              pEVar15 = mscorlib.dll::System::Collections::Generic::EqualityComparer`1[System::
                        Object]::EqualityComparer_1_System_Object__get_Default(pIVar14[3].method);
              if (pEVar15 == (EqualityComparer_1_System_Object_ *)0x0) goto code_?;
              cVar16 = (*(pEVar15->klass->vtable).__unknown.methodPtr)
                                 (pEVar15,pDVar13->vector[(int)uVar12].key,key,
                                  (pEVar15->klass->vtable).__unknown.method);
            }
            else {
              pvVar7 = pIVar14[1].rgctxDataDummy;
              pSVar17 = pDVar13->vector[(int)uVar12].key;
              if ((*(byte *)((longlong)pvVar7 + 0x135) & 1) == 0) {
                pvVar7 = (void *)FUN_?(pvVar7);
              }
              cVar16 = FUN_?(0,pvVar7,pIVar5,pSVar17,key);
            }
            if (cVar16 != '\0') {
              if ((int)uVar11 < 0) {
                pIVar8 = (pDVar3->fields)._buckets;
                if (pIVar8 == (Int32__Array *)0x0) goto code_?;
                if ((uint)pIVar8->max_length <= uVar9) goto DAT_?;
                pIVar8->vector[(int)uVar9] = pDVar13->vector[(int)uVar12].next + 1;
              }
              else {
                pDVar18 = (pDVar3->fields)._entries;
                if (pDVar18 == (Dictionary_2_TKey_TValue_Entry_System_String_System_String___Array *)
                              0x0) goto code_?;
                if ((uint)pDVar18->max_length <= uVar11) goto DAT_?;
                pDVar18->vector[(int)uVar11].next = pDVar13->vector[(int)uVar12].next;
              }
              pDVar13->vector[(int)uVar12].hashCode = -1;
              pDVar13->vector[(int)uVar12].next = (pDVar3->fields)._freeList;
              pDVar13->vector[(int)uVar12].key = (String *)0x0;
              pDVar13->vector[(int)uVar12].value = (String *)0x0;
              piVar19 = &(pDVar3->fields)._freeCount;
              *piVar19 = *piVar19 + 1;
              piVar19 = &(pDVar3->fields)._version;
              *piVar19 = *piVar19 + 1;
              (pDVar3->fields)._freeList = uVar12;
              return;
            }
          }
          uVar11 = uVar12;
          uVar10 = pDVar13->vector[(int)uVar12].next;
        }
      }
      return;
    }
  }
  else {
    Catalog_SetHeader(this,key,value,(MethodInfo *)0x0);
  }
  return;
}


/* IEnumerator System.Collections.IEnumerable.GetEnumerator() */

IEnumerator *
Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_System_Collections_IEnumerable_GetEnumerator
          (Catalog *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Collections__Generic__List_1_T___Enumerator<GNU::Gettext::CatalogEntry>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogEntry>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).entriesList;
  if (pLVar1 == (List_1_GNU_Gettext_CatalogEntry_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pIVar3 = (IEnumerator *)(*pcVar2)();
    return pIVar3;
  }
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)&uStack_5 >> 0xc);
    puVar6 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar7 = *puVar6;
      LOCK();
      uVar8 = *puVar6;
      if (uVar7 == uVar8) {
        *puVar6 = uVar7 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar7 != uVar8);
  }
  uStack_9 = (pLVar1->fields)._version;
  uStack_10 = 0;
  lStack_11 = (ulonglong)uStack_9 << 0x20;
  uStack_5._0_4_ = SUB84(pLVar1,0);
  uStack_5._4_4_ = (undefined4)((ulonglong)pLVar1 >> 0x20);
  uStack_12 = 0;
  uStack_13 = (undefined4)uStack_5;
  uStack_14 = uStack_5._4_4_;
  uStack_15 = 0;
  uStack_5 = pLVar1;
  pIVar3 = (IEnumerator *)
           FUN_?(TypeInfo__System__Collections__Generic__List_1_T___Enumerator<GNU::Gettext::CatalogEntry>
                         ,&uStack_13);
  return pIVar3;
}


/* Boolean Translate(String, String, String) */

bool Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_Translate
               (Catalog *this,String *msgid,String *context,String *translation,MethodInfo *method)

{
  this_00 = Catalog_FindItem(this,msgid,context,(MethodInfo *)0x0);
  if (this_00 != (CatalogEntry *)0x0) {
    CatalogEntry::CatalogEntry_SetTranslation(this_00,translation,0,(MethodInfo *)0x0);
    return 1;
  }
  return 0;
}


/* Void UpdateHeaderDict() */

void Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_UpdateHeaderDict
               (Catalog *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_X_Generator);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__1_0);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_PO_Revision_Date);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Project_Id_Version);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__0____1__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Content_Type);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_MonoDevelop_Gettext_addin);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_text_plain__charset_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__8bit);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Content_Transfer_Encoding);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Language_Team);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Last_Translator);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_POT_Creation_Date);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_MIME_Version);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  Catalog_SetHeader(this,StringLiteral_Project_Id_Version,(this->fields).Project,(MethodInfo *)0x0);
  Catalog_SetHeader(this,StringLiteral_POT_Creation_Date,(this->fields).CreationDate,
                    (MethodInfo *)0x0);
  Catalog_SetHeader(this,StringLiteral_PO_Revision_Date,(this->fields).RevisionDate,
                    (MethodInfo *)0x0);
  pSVar1 = StringLiteral__0____1__;
  pSVar2 = (this->fields).TranslatorEmail;
  if ((pSVar2 == (String *)0x0) || ((pSVar2->fields)._stringLength == 0)) {
    pSVar2 = (this->fields).Translator;
  }
  else {
    PStackY_48._arg0 = (Object *)0x0;
    PStackY_48._arg1 = (Object *)0x0;
    PStackY_48._arg2 = (Object *)0x0;
    PStackY_48._args = (Object__Array *)0x0;
    mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1
              (&PStackY_48,(Object *)(this->fields).Translator,(Object *)pSVar2,(MethodInfo *)0x0);
    pOStackY_28 = PStackY_48._arg0;
    pOStackY_20 = PStackY_48._arg1;
    pSVar2 = mscorlib.dll::System::String::String_FormatHelper
                       ((IFormatProvider *)0x0,pSVar1,(ParamsArray *)&pOStackY_28,(MethodInfo *)0x0)
    ;
  }
  Catalog_SetHeader(this,StringLiteral_Last_Translator,pSVar2,(MethodInfo *)0x0);
  pSVar1 = StringLiteral__0____1__;
  pSVar2 = (this->fields).TeamEmail;
  if ((pSVar2 == (String *)0x0) || ((pSVar2->fields)._stringLength == 0)) {
    pSVar2 = (this->fields).Team;
  }
  else {
    PStackY_48._arg0 = (Object *)0x0;
    PStackY_48._arg1 = (Object *)0x0;
    PStackY_48._arg2 = (Object *)0x0;
    PStackY_48._args = (Object__Array *)0x0;
    mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1
              (&PStackY_48,(Object *)(this->fields).Team,(Object *)pSVar2,(MethodInfo *)0x0);
    pOStackY_28 = PStackY_48._arg0;
    pOStackY_20 = PStackY_48._arg1;
    pSVar2 = mscorlib.dll::System::String::String_FormatHelper
                       ((IFormatProvider *)0x0,pSVar1,(ParamsArray *)&pOStackY_28,(MethodInfo *)0x0)
    ;
  }
  Catalog_SetHeader(this,StringLiteral_Language_Team,pSVar2,(MethodInfo *)0x0);
  Catalog_SetHeader(this,StringLiteral_MIME_Version,StringLiteral__1_0,(MethodInfo *)0x0);
  pSVar2 = mscorlib.dll::System::String::String_Concat_4
                     (StringLiteral_text_plain__charset_,(this->fields).Charset,(MethodInfo *)0x0);
  Catalog_SetHeader(this,StringLiteral_Content_Type,pSVar2,(MethodInfo *)0x0);
  Catalog_SetHeader(this,StringLiteral_Content_Transfer_Encoding,StringLiteral__8bit,
                    (MethodInfo *)0x0);
  pSVar1 = StringLiteral_X_Generator;
  pSVar2 = StringLiteral_MonoDevelop_Gettext_addin;
  uVar3 = 0;
  if (cRam_? == '\0') {
    PStackY_48._arg1 = (Object *)&UNK_?;
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__set_Item_System__String__System__String_
                  ,StringLiteral_X_Generator,StringLiteral_MonoDevelop_Gettext_addin,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).headerEntries;
  if (this_00 != (Dictionary_2_System_String_System_String_ *)0x0) {
    PStackY_48._arg1 = (Object *)&UNK_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)pSVar1,
               (Object *)pSVar2,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar3 >> 8),1),
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__set_Item_System__String__System__String_
               ->klass->rgctx_data[0x22].method);
    return;
  }
  PStackY_48._arg1 = (Object *)&UNK_?;
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Catalog() */

void Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog__ctor(Catalog *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    PStackY_48._args = (Object__Array *)&UNK_?;
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_GNU::Gettext::CatalogEntry>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    PStackY_48._args = (Object__Array *)&UNK_?;
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    PStackY_48._args = (Object__Array *)&UNK_?;
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::String,_GNU::Gettext::CatalogEntry>
                 );
    LOCK();
    UNLOCK();
    PStackY_48._args = (Object__Array *)&UNK_?;
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::String>
                 );
    LOCK();
    UNLOCK();
    PStackY_48._args = (Object__Array *)&UNK_?;
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogDeletedEntry>__List__
                 );
    LOCK();
    UNLOCK();
    PStackY_48._args = (Object__Array *)&UNK_?;
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogEntry>__List__
                 );
    LOCK();
    UNLOCK();
    PStackY_48._args = (Object__Array *)&UNK_?;
    FUN_?(&TypeInfo__System__Collections__Generic__List<GNU::Gettext::CatalogEntry>);
    LOCK();
    UNLOCK();
    PStackY_48._args = (Object__Array *)&UNK_?;
    FUN_?(&TypeInfo__System__Collections__Generic__List<GNU::Gettext::CatalogDeletedEntry>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  PStackY_48._args = (Object__Array *)&UNK_?;
  pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
            *)FUN_?(
                           TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::String>
                           );
  PStackY_48._args = (Object__Array *)&UNK_?;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Dictionary__
            );
  iVar2 = iRam_?;
  (this->fields).headerEntries = (Dictionary_2_System_String_System_String_ *)pDVar1;
  if (iVar2 != 0) {
    uVar3 = (uint)((ulonglong)&(this->fields).headerEntries >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
      iVar2 = iRam_?;
    } while (!bVar7);
  }
  (this->fields).Project = (String *)**(undefined8 **)(lRam_? + 0xb8);
  iVar8 = 0;
  if (iVar2 != 0) {
    uVar3 = (uint)((ulonglong)&(this->fields).Project >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
      iVar8 = iRam_?;
    } while (!bVar7);
  }
  (this->fields).CreationDate = (String *)**(undefined8 **)(lRam_? + 0xb8);
  iVar2 = 0;
  if (iVar8 != 0) {
    uVar3 = (uint)((ulonglong)&(this->fields).CreationDate >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
      iVar2 = iRam_?;
    } while (!bVar7);
  }
  (this->fields).RevisionDate = (String *)**(undefined8 **)(lRam_? + 0xb8);
  iVar8 = 0;
  if (iVar2 != 0) {
    uVar3 = (uint)((ulonglong)&(this->fields).RevisionDate >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
      iVar8 = iRam_?;
    } while (!bVar7);
  }
  (this->fields).Translator = (String *)**(undefined8 **)(lRam_? + 0xb8);
  iVar2 = 0;
  if (iVar8 != 0) {
    uVar3 = (uint)((ulonglong)&(this->fields).Translator >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
      iVar2 = iRam_?;
    } while (!bVar7);
  }
  (this->fields).TranslatorEmail = (String *)**(undefined8 **)(lRam_? + 0xb8);
  iVar8 = 0;
  if (iVar2 != 0) {
    uVar3 = (uint)((ulonglong)&(this->fields).TranslatorEmail >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
      iVar8 = iRam_?;
    } while (!bVar7);
  }
  (this->fields).Team = (String *)**(undefined8 **)(lRam_? + 0xb8);
  iVar2 = 0;
  if (iVar8 != 0) {
    uVar3 = (uint)((ulonglong)&(this->fields).Team >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
      iVar2 = iRam_?;
    } while (!bVar7);
  }
  (this->fields).TeamEmail = (String *)**(undefined8 **)(lRam_? + 0xb8);
  iVar8 = 0;
  if (iVar2 != 0) {
    uVar3 = (uint)((ulonglong)&(this->fields).TeamEmail >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
      iVar8 = iRam_?;
    } while (!bVar7);
  }
  (this->fields).Charset = (String *)**(undefined8 **)(lRam_? + 0xb8);
  iVar2 = 0;
  if (iVar8 != 0) {
    uVar3 = (uint)((ulonglong)&(this->fields).Charset >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
      iVar2 = iRam_?;
    } while (!bVar7);
  }
  (this->fields).Language = (String *)**(undefined8 **)(lRam_? + 0xb8);
  iVar8 = 0;
  if (iVar2 != 0) {
    uVar3 = (uint)((ulonglong)&(this->fields).Language >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
      iVar8 = iRam_?;
    } while (!bVar7);
  }
  (this->fields).Country = (String *)**(undefined8 **)(lRam_? + 0xb8);
  iVar2 = 0;
  if (iVar8 != 0) {
    uVar3 = (uint)((ulonglong)&(this->fields).Country >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
      iVar2 = iRam_?;
    } while (!bVar7);
  }
  (this->fields).Comment = (String *)**(undefined8 **)(lRam_? + 0xb8);
  if (iVar2 != 0) {
    uVar3 = (uint)((ulonglong)&(this->fields).Comment >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar7);
  }
  PStackY_48._args = (Object__Array *)&UNK_?;
  pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
            *)FUN_?(
                           TypeInfo__System__Collections__Generic__Dictionary<System::String,_GNU::Gettext::CatalogEntry>
                           );
  PStackY_48._args = (Object__Array *)&UNK_?;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_GNU::Gettext::CatalogEntry>__Dictionary__
            );
  bVar7 = iRam_? != 0;
  (this->fields).entriesDict = (IDictionary_2_System_String_GNU_Gettext_CatalogEntry_ *)pDVar1;
  if (bVar7) {
    uVar3 = (uint)((ulonglong)&this->fields >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar7);
  }
  PStackY_48._args = (Object__Array *)&UNK_?;
  this_01 = (List_1_GNU_Gettext_CatalogEntry_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<GNU::Gettext::CatalogEntry>);
  PStackY_48._args = (Object__Array *)&UNK_?;
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_01,
             MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogEntry>__List__);
  bVar7 = iRam_? != 0;
  (this->fields).entriesList = this_01;
  if (bVar7) {
    uVar3 = (uint)((ulonglong)&(this->fields).entriesList >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar7);
  }
  PStackY_48._args = (Object__Array *)&UNK_?;
  this_02 = (List_1_GNU_Gettext_CatalogDeletedEntry_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__List<GNU::Gettext::CatalogDeletedEntry>
                         );
  PStackY_48._args = (Object__Array *)&UNK_?;
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_02,
             MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogDeletedEntry>__List__
            );
  bVar7 = iRam_? != 0;
  (this->fields).deletedEntriesList = this_02;
  if (bVar7) {
    uVar3 = (uint)((ulonglong)&(this->fields).deletedEntriesList >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar7);
  }
  (this->fields).isOk = 1;
  if (cRam_? == '\0') {
    PStackY_48._args = (Object__Array *)&UNK_?;
    FUN_?(&StringLiteral_utf_8,0);
    LOCK();
    UNLOCK();
    PStackY_48._args = (Object__Array *)&UNK_?;
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    PStackY_48._args = (Object__Array *)&UNK_?;
    FUN_?(&TypeInfo__System__DateTime);
    LOCK();
    UNLOCK();
    PStackY_48._args = (Object__Array *)&UNK_?;
    FUN_?(&StringLiteral_yyyy_MM_dd_HH___mm___sszz00);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__DateTime->_1).field_0x1c == 0) {
    PStackY_48._args = (Object__Array *)&UNK_?;
    FUN_?();
  }
  PStackY_48._args = (Object__Array *)&UNK_?;
  dateTime = mscorlib.dll::System::DateTime::DateTime_get_Now((MethodInfo *)0x0);
  pSVar9 = StringLiteral_yyyy_MM_dd_HH___mm___sszz00;
  if (cRam_? == '\0') {
    PStackY_48._args = (Object__Array *)&UNK_?;
    FUN_?(&TypeInfo__System__DateTimeFormat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__DateTimeFormat->_1).field_0x1c == 0) {
    PStackY_48._args = (Object__Array *)&UNK_?;
    FUN_?();
  }
  PStackY_48._args = (Object__Array *)&UNK_?;
  pSVar9 = mscorlib.dll::System::DateTimeFormat::DateTimeFormat_Format
                     (dateTime,pSVar9,(IFormatProvider *)0x0,(MethodInfo *)0x0);
  iVar2 = iRam_?;
  (this->fields).CreationDate = pSVar9;
  if (iVar2 != 0) {
    uVar3 = (uint)((ulonglong)&(this->fields).CreationDate >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
      iVar2 = iRam_?;
    } while (!bVar7);
  }
  (this->fields).RevisionDate = pSVar9;
  iVar8 = 0;
  if (iVar2 != 0) {
    uVar3 = (uint)((ulonglong)&(this->fields).RevisionDate >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
      iVar8 = iRam_?;
    } while (!bVar7);
  }
  pSVar9 = ::StringLiteral__;
  (this->fields).TeamEmail = ::StringLiteral__;
  iVar2 = 0;
  if (iVar8 != 0) {
    uVar3 = (uint)((ulonglong)&(this->fields).TeamEmail >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
      iVar2 = iRam_?;
    } while (!bVar7);
  }
  (this->fields).Team = pSVar9;
  iVar8 = 0;
  if (iVar2 != 0) {
    uVar3 = (uint)((ulonglong)&(this->fields).Team >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
      iVar8 = iRam_?;
    } while (!bVar7);
  }
  (this->fields).Project = pSVar9;
  iVar2 = 0;
  if (iVar8 != 0) {
    uVar3 = (uint)((ulonglong)&(this->fields).Project >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
      iVar2 = iRam_?;
    } while (!bVar7);
  }
  (this->fields).Country = pSVar9;
  iVar8 = 0;
  if (iVar2 != 0) {
    uVar3 = (uint)((ulonglong)&(this->fields).Country >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
      iVar8 = iRam_?;
    } while (!bVar7);
  }
  (this->fields).Language = pSVar9;
  iVar2 = 0;
  if (iVar8 != 0) {
    uVar3 = (uint)((ulonglong)&(this->fields).Language >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
      iVar2 = iRam_?;
    } while (!bVar7);
  }
  (this->fields).Charset = StringLiteral_utf_8;
  if (iVar2 != 0) {
    uVar3 = (uint)((ulonglong)&(this->fields).Charset >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar7);
  }
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_X_Generator,0);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__1_0);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_PO_Revision_Date);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Project_Id_Version);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__0____1__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Content_Type);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_MonoDevelop_Gettext_addin);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_text_plain__charset_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__8bit);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Content_Transfer_Encoding);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Language_Team);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Last_Translator);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_POT_Creation_Date);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_MIME_Version);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  Catalog_SetHeader(this,StringLiteral_Project_Id_Version,(this->fields).Project,(MethodInfo *)0x0);
  Catalog_SetHeader(this,StringLiteral_POT_Creation_Date,(this->fields).CreationDate,
                    (MethodInfo *)0x0);
  Catalog_SetHeader(this,StringLiteral_PO_Revision_Date,(this->fields).RevisionDate,
                    (MethodInfo *)0x0);
  pSVar10 = StringLiteral__0____1__;
  pSVar9 = (this->fields).TranslatorEmail;
  if ((pSVar9 == (String *)0x0) || ((pSVar9->fields)._stringLength == 0)) {
    pSVar9 = (this->fields).Translator;
  }
  else {
    PStackY_48._arg0 = (Object *)0x0;
    PStackY_48._arg1 = (Object *)0x0;
    PStackY_48._arg2 = (Object *)0x0;
    PStackY_48._args = (Object__Array *)0x0;
    mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1
              (&PStackY_48,(Object *)(this->fields).Translator,(Object *)pSVar9,(MethodInfo *)0x0);
    pOStackY_28 = PStackY_48._arg0;
    pOStackY_20 = PStackY_48._arg1;
    pSVar9 = mscorlib.dll::System::String::String_FormatHelper
                       ((IFormatProvider *)0x0,pSVar10,(ParamsArray *)&pOStackY_28,(MethodInfo *)0x0)
    ;
  }
  Catalog_SetHeader(this,StringLiteral_Last_Translator,pSVar9,(MethodInfo *)0x0);
  pSVar10 = StringLiteral__0____1__;
  pSVar9 = (this->fields).TeamEmail;
  if ((pSVar9 == (String *)0x0) || ((pSVar9->fields)._stringLength == 0)) {
    pSVar9 = (this->fields).Team;
  }
  else {
    PStackY_48._arg0 = (Object *)0x0;
    PStackY_48._arg1 = (Object *)0x0;
    PStackY_48._arg2 = (Object *)0x0;
    PStackY_48._args = (Object__Array *)0x0;
    mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1
              (&PStackY_48,(Object *)(this->fields).Team,(Object *)pSVar9,(MethodInfo *)0x0);
    pOStackY_28 = PStackY_48._arg0;
    pOStackY_20 = PStackY_48._arg1;
    pSVar9 = mscorlib.dll::System::String::String_FormatHelper
                       ((IFormatProvider *)0x0,pSVar10,(ParamsArray *)&pOStackY_28,(MethodInfo *)0x0)
    ;
  }
  Catalog_SetHeader(this,StringLiteral_Language_Team,pSVar9,(MethodInfo *)0x0);
  Catalog_SetHeader(this,StringLiteral_MIME_Version,StringLiteral__1_0,(MethodInfo *)0x0);
  pSVar9 = mscorlib.dll::System::String::String_Concat_4
                     (StringLiteral_text_plain__charset_,(this->fields).Charset,(MethodInfo *)0x0);
  Catalog_SetHeader(this,StringLiteral_Content_Type,pSVar9,(MethodInfo *)0x0);
  Catalog_SetHeader(this,StringLiteral_Content_Transfer_Encoding,StringLiteral__8bit,
                    (MethodInfo *)0x0);
  pSVar10 = StringLiteral_X_Generator;
  pSVar9 = StringLiteral_MonoDevelop_Gettext_addin;
  uVar11 = 0;
  if (cRam_? == '\0') {
    PStackY_48._arg1 = (Object *)&UNK_?;
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__set_Item_System__String__System__String_
                  ,StringLiteral_X_Generator,StringLiteral_MonoDevelop_Gettext_addin,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).headerEntries;
  if (this_00 == (Dictionary_2_System_String_System_String_ *)0x0) {
    PStackY_48._arg1 = (Object *)&UNK_?;
    FUN_?();
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  PStackY_48._arg1 = (Object *)&UNK_?;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)pSVar10,(Object *)pSVar9,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar11 >> 8),1),
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__set_Item_System__String__System__String_
             ->klass->rgctx_data[0x22].method);
  return;
}


/* Void add_DirtyChanged(EventHandler) */

void Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_add_DirtyChanged
               (Catalog *this,EventHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).DirtyChanged;
  a = (this->fields).DirtyChanged;
  do {
    pEVar2 = (EventHandler *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pEVar3 = (EventHandler *)0x0;
    if (pEVar2 != (EventHandler *)0x0) {
      if (pEVar2->klass == TypeInfo__System__EventHandler) {
        pEVar3 = pEVar2;
      }
      if (pEVar3 == (EventHandler *)0x0) {
        FUN_?(pEVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    pEVar2 = *ppEVar1;
    bVar5 = a == pEVar2;
    if (bVar5) {
      *ppEVar1 = pEVar3;
      pEVar2 = a;
    }
    UNLOCK();
    pEVar3 = a;
    if (!bVar5) {
      pEVar3 = pEVar2;
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)ppEVar1 >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    bVar5 = pEVar3 != a;
    a = pEVar3;
  } while (bVar5);
  return;
}


/* String get_CommentForGui() */

String * Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_get_CommentForGui
                   (Catalog *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Char);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Text__StringBuilder);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).Comment;
  if ((pSVar1 == (String *)0x0) || ((pSVar1->fields)._stringLength == 0)) {
    return (String *)**(undefined8 **)(lRam_? + 0xb8);
  }
  this_00 = (StringBuilder *)FUN_?(TypeInfo__System__Text__StringBuilder);
  mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor(this_00,(MethodInfo *)0x0);
  pSVar1 = (this->fields).Comment;
  bVar2 = true;
  if (pSVar1 != (String *)0x0) {
    pSVar3 = mscorlib.dll::System::String::String_Split
                       (pSVar1,10,StringSplitOptions__Enum_None,(MethodInfo *)0x0);
    uVar4 = 0;
    if (pSVar3 != (String__Array *)0x0) {
      ppSVar5 = pSVar3->vector;
      for (; (int)uVar4 < (int)pSVar3->max_length; uVar4 = uVar4 + 1) {
        if ((uint)pSVar3->max_length <= uVar4) {
DAT_?:
          FUN_?();
          pcVar6 = (code *)swi(3);
          pSVar1 = (String *)(*pcVar6)();
          return pSVar1;
        }
        pSVar1 = *ppSVar5;
        if (bVar2) {
          bVar2 = false;
        }
        else {
          if (this_00 == (StringBuilder *)0x0) goto code_?;
          mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_6
                    (this_00,10,(MethodInfo *)0x0);
        }
        if (pSVar1 == (String *)0x0) goto code_?;
        bVar7 = mscorlib.dll::System::String::String_StartsWith
                          (pSVar1,::StringLiteral__,(MethodInfo *)0x0);
        if (bVar7 == 0) {
          lVar8 = FUN_?(TypeInfo__System__Char);
          if (lVar8 == 0) goto code_?;
          if ((*(int *)(lVar8 + 0x18) == 0) ||
             (*(undefined2 *)(lVar8 + 0x20) = 0x20, *(uint *)(lVar8 + 0x18) < 2))
          goto DAT_?;
          *(undefined2 *)(lVar8 + 0x22) = 9;
        }
        else {
          pSVar1 = mscorlib.dll::System::String::String_Substring_1
                             (pSVar1,1,(pSVar1->fields)._stringLength + -1,(MethodInfo *)0x0);
          lVar8 = FUN_?(TypeInfo__System__Char);
          if (lVar8 == 0) goto code_?;
          if ((*(int *)(lVar8 + 0x18) == 0) ||
             (*(undefined2 *)(lVar8 + 0x20) = 0x20, *(uint *)(lVar8 + 0x18) < 2))
          goto DAT_?;
          *(undefined2 *)(lVar8 + 0x22) = 9;
          if (pSVar1 == (String *)0x0) goto code_?;
        }
        if (*(longlong *)(lVar8 + 0x18) == 0) {
          pSVar1 = mscorlib.dll::System::String::String_TrimWhiteSpaceHelper
                             (pSVar1,String_TrimType__Enum_Head,(MethodInfo *)0x0);
        }
        else {
          if (*(int *)(lVar8 + 0x18) == 0) goto DAT_?;
          pSVar1 = mscorlib.dll::System::String::String_TrimHelper
                             (pSVar1,(uint16_t *)(lVar8 + 0x20),*(int32_t *)(lVar8 + 0x18),
                              String_TrimType__Enum_Head,(MethodInfo *)0x0);
        }
        if (this_00 == (StringBuilder *)0x0) goto code_?;
        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                  (this_00,pSVar1,(MethodInfo *)0x0);
        ppSVar5 = ppSVar5 + 1;
      }
      if (this_00 != (StringBuilder *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pSVar1 = (String *)
                 (*(this_00->klass->vtable).ToString.methodPtr)
                           (this_00,(this_00->klass->vtable).ToString.method);
        return pSVar1;
      }
    }
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar6)();
  return pSVar1;
}


/* Int32 get_Count() */

int32_t Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_get_Count
                  (Catalog *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogEntry>__get_Count__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).entriesList;
  if (pLVar1 != (List_1_GNU_Gettext_CatalogEntry_ *)0x0) {
    return (pLVar1->fields)._size;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}


/* Boolean get_HasDeletedItems() */

bool Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_get_HasDeletedItems
               (Catalog *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogDeletedEntry>__get_Count__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).deletedEntriesList;
  if (pLVar1 != (List_1_GNU_Gettext_CatalogDeletedEntry_ *)0x0) {
    return 0 < (pLVar1->fields)._size;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* CatalogEntry get_Item(Int32) */

CatalogEntry *
Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_get_Item
          (Catalog *this,int32_t index,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogEntry>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (index < 0) {
    return (CatalogEntry *)0x0;
  }
  pLVar1 = (this->fields).entriesList;
  if (pLVar1 != (List_1_GNU_Gettext_CatalogEntry_ *)0x0) {
    uVar2 = (pLVar1->fields)._size;
    if ((int)uVar2 <= index) {
      return (CatalogEntry *)0x0;
    }
    if (uVar2 <= (uint)index) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      pCVar4 = (CatalogEntry *)(*pcVar3)();
      return pCVar4;
    }
    pCVar5 = (pLVar1->fields)._items;
    if (pCVar5 != (CatalogEntry__Array *)0x0) {
      if ((uint)pCVar5->max_length <= (uint)index) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        pCVar4 = (CatalogEntry *)(*pcVar3)();
        return pCVar4;
      }
      return pCVar5->vector[index];
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  pCVar4 = (CatalogEntry *)(*pcVar3)();
  return pCVar4;
}


/* String get_LocaleCode() */

String * Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_get_LocaleCode
                   (Catalog *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GNU__Gettext__IsoCodes);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__IO__Path);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).Language;
  pSVar2 = (String *)**(undefined8 **)(lRam_? + 0xb8);
  if ((pSVar1 != (String *)0x0) && ((pSVar1->fields)._stringLength != 0)) {
    if (*(int *)&(TypeInfo__GNU__Gettext__IsoCodes->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&
                    TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::IsoCodes::IsoCode>
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__GNU__Gettext__IsoCodes);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__GNU__Gettext__IsoCodes->_1).field_0x1c == 0) {
      FUN_?();
    }
    pIVar3 = TypeInfo__GNU__Gettext__IsoCodes->static_fields->isoLanguagesByCode;
    if (pIVar3 == (IDictionary_2_System_String_GNU_Gettext_IsoCodes_IsoCode_ *)0x0)
    goto code_?;
    cVar4 = FUN_?(4,
                          TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::IsoCodes::IsoCode>
                          ,pIVar3,pSVar1);
    if (cVar4 == '\0') goto code_?;
    if (*(int *)&(TypeInfo__GNU__Gettext__IsoCodes->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__GNU__Gettext__IsoCodes);
    }
    if (TypeInfo__GNU__Gettext__IsoCodes->static_fields->isoLanguagesByCode ==
        (IDictionary_2_System_String_GNU_Gettext_IsoCodes_IsoCode_ *)0x0) goto code_?;
    lVar5 = FUN_?();
    if (lVar5 == 0) goto code_?;
    pSVar2 = *(String **)(lVar5 + 0x18);
    pSVar1 = (this->fields).Country;
    if ((pSVar1 == (String *)0x0) || ((pSVar1->fields)._stringLength == 0))
    goto code_?;
    pSVar1 = mscorlib.dll::System::String::String_Concat_4
                       (pSVar2,::StringLiteral__,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__GNU__Gettext__IsoCodes->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&
                    TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::IsoCodes::IsoCode>
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__GNU__Gettext__IsoCodes);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__GNU__Gettext__IsoCodes->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (TypeInfo__GNU__Gettext__IsoCodes->static_fields->isoCountriesByCode ==
        (IDictionary_2_System_String_GNU_Gettext_IsoCodes_IsoCode_ *)0x0) goto code_?;
    cVar4 = FUN_?(4,
                          TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::IsoCodes::IsoCode>
                         );
    if (cVar4 == '\0') {
code_?:
      pSVar2 = (String *)0x0;
    }
    else {
      if (*(int *)&(TypeInfo__GNU__Gettext__IsoCodes->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__GNU__Gettext__IsoCodes);
      }
      if (TypeInfo__GNU__Gettext__IsoCodes->static_fields->isoCountriesByCode ==
          (IDictionary_2_System_String_GNU_Gettext_IsoCodes_IsoCode_ *)0x0)
      goto code_?;
      plVar6 = (longlong *)FUN_?();
      if (plVar6 == (longlong *)0x0) goto code_?;
      pSVar2 = (String *)(**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
    }
    pSVar2 = mscorlib.dll::System::String::String_Concat_4(pSVar1,pSVar2,(MethodInfo *)0x0);
  }
code_?:
  if ((((pSVar2 == (String *)0x0) || ((pSVar2->fields)._stringLength == 0)) &&
      (pSVar1 = (this->fields).fileName, pSVar1 != (String *)0x0)) &&
     ((pSVar1->fields)._stringLength != 0)) {
    if (*(int *)&(TypeInfo__System__IO__Path->_1).field_0x1c == 0) {
      FUN_?();
    }
    pSVar1 = mscorlib.dll::System::IO::Path::Path_1_GetFileNameWithoutExtension
                       (pSVar1,(MethodInfo *)0x0);
    if (pSVar1 == (String *)0x0) {
code_?:
      FUN_?();
      pcVar7 = (code *)swi(3);
      pSVar1 = (String *)(*pcVar7)();
      return pSVar1;
    }
    if ((pSVar1->fields)._stringLength == 2) {
      if (*(int *)&(TypeInfo__GNU__Gettext__IsoCodes->_1).field_0x1c == 0) {
        FUN_?();
      }
      bVar8 = IsoCodes::IsoCodes_IsKnownLanguageCode(pSVar1,(MethodInfo *)0x0);
      if (bVar8 != 0) {
        pSVar2 = pSVar1;
      }
      return pSVar2;
    }
    if (((pSVar1->fields)._stringLength == 5) && (*(short *)&pSVar1[1].klass == 0x5f)) {
      pSVar9 = mscorlib.dll::System::String::String_Substring_1(pSVar1,0,2,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__GNU__Gettext__IsoCodes->_1).field_0x1c == 0) {
        FUN_?();
      }
      bVar8 = IsoCodes::IsoCodes_IsKnownLanguageCode(pSVar9,(MethodInfo *)0x0);
      if (bVar8 != 0) {
        pSVar9 = mscorlib.dll::System::String::String_Substring_1(pSVar1,3,2,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__GNU__Gettext__IsoCodes->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&
                        TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::IsoCodes::IsoCode>
                       );
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__GNU__Gettext__IsoCodes);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__GNU__Gettext__IsoCodes->_1).field_0x1c == 0) {
          FUN_?();
        }
        pIVar3 = TypeInfo__GNU__Gettext__IsoCodes->static_fields->isoCountriesByCode;
        if (pIVar3 == (IDictionary_2_System_String_GNU_Gettext_IsoCodes_IsoCode_ *)0x0)
        goto code_?;
        cVar4 = FUN_?(4,
                              TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::IsoCodes::IsoCode>
                              ,pIVar3,pSVar9);
        if (cVar4 != '\0') {
          pSVar2 = pSVar1;
        }
      }
    }
  }
  return pSVar2;
}


/* Int32 get_PluralFormsCount() */

int32_t Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_get_PluralFormsCount
                  (Catalog *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_Plural_Forms);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_nplurals_2__plural__n____1___n);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = Catalog_HasHeader(this,StringLiteral_Plural_Forms,(MethodInfo *)0x0);
  str = StringLiteral_nplurals_2__plural__n____1___n;
  if (bVar1 != 0) {
    str = Catalog_GetHeader(this,StringLiteral_Plural_Forms,(MethodInfo *)0x0);
  }
  pPVar2 = PluralFormsCalculator::PluralFormsCalculator_Make(str,(MethodInfo *)0x0);
  if (pPVar2 == (PluralFormsCalculator *)0x0) {
    return 2;
  }
  return (pPVar2->fields).nplurals;
}


/* String[] get_PluralFormsDescriptions() */

String__Array *
Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_get_PluralFormsDescriptions
          (Catalog *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                 );
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
    FUN_?(&StringLiteral_Plural_Forms);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Plural);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Singular);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Form__0___e_g____1___);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Form__0_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (List_1_System_Object_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<System::String>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<System::String>__List__);
  bVar1 = Catalog_HasHeader(this,StringLiteral_Plural_Forms,(MethodInfo *)0x0);
  pMVar2 = MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_;
  pSVar3 = StringLiteral_Singular;
  if (bVar1 == 0) {
    if (this_00 != (List_1_System_Object_ *)0x0) {
      piVar4 = &(this_00->fields)._version;
      *piVar4 = *piVar4 + 1;
      pOVar5 = (this_00->fields)._items;
      if (pOVar5 != (Object__Array *)0x0) {
        uVar6 = (this_00->fields)._size;
        if (uVar6 < (uint)pOVar5->max_length) {
          (this_00->fields)._size = uVar6 + 1;
          FUN_?(pOVar5,(longlong)(int)uVar6,pSVar3);
        }
        else {
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__AddWithResize
                    (this_00,(Object *)pSVar3,pMVar2->klass->rgctx_data[0xe].method);
        }
        pMVar2 = MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
        ;
        pSVar3 = StringLiteral_Plural;
        piVar4 = &(this_00->fields)._version;
        *piVar4 = *piVar4 + 1;
        pOVar5 = (this_00->fields)._items;
        if (pOVar5 != (Object__Array *)0x0) {
          uVar6 = (this_00->fields)._size;
          if (uVar6 < (uint)pOVar5->max_length) {
            (this_00->fields)._size = uVar6 + 1;
            FUN_?(pOVar5,(longlong)(int)uVar6,pSVar3);
          }
          else {
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__AddWithResize
                      (this_00,(Object *)pSVar3,pMVar2->klass->rgctx_data[0xe].method);
          }
          goto code_?;
        }
      }
    }
code_?:
    FUN_?();
    pcVar7 = (code *)swi(3);
    pSVar8 = (String__Array *)(*pcVar7)();
    return pSVar8;
  }
  pSVar3 = Catalog_GetHeader(this,StringLiteral_Plural_Forms,(MethodInfo *)0x0);
  pPVar9 = PluralFormsCalculator::PluralFormsCalculator_Make(pSVar3,(MethodInfo *)0x0);
  iVar10 = Catalog_get_PluralFormsCount(this,(MethodInfo *)0x0);
  iVar11 = 0;
  if (iVar10 < 1) {
    if (this_00 == (List_1_System_Object_ *)0x0) goto code_?;
  }
  else {
    do {
      if (pPVar9 == (PluralFormsCalculator *)0x0) {
code_?:
        auStackX_18[0] = iVar11 + 1;
        pOVar12 = (Object *)FUN_?(uRam_?,auStackX_18);
        mscorlib.dll::System::String::String_Format
                  (StringLiteral_Form__0_,pOVar12,(MethodInfo *)0x0);
      }
      else {
        n = 1;
        do {
          uVar6 = (uint)n;
          if ((((pPVar9->fields).plural == (PluralFormsNode *)0x0) ||
              (lVar13 = PluralFormsNode::PluralFormsNode_Evaluate
                                 ((pPVar9->fields).plural,n,(MethodInfo *)0x0), lVar13 < 0)) ||
             ((pPVar9->fields).nplurals < lVar13)) {
            lVar13 = 0;
          }
          if (lVar13 == iVar11) break;
          uVar6 = uVar6 + 1;
          n = (ulonglong)uVar6;
        } while ((int)uVar6 < 1000);
        if (uVar6 == 1000) {
          iVar14 = 0;
          if (((pPVar9->fields).plural != (PluralFormsNode *)0x0) &&
             ((iVar14 = PluralFormsNode::PluralFormsNode_Evaluate
                                  ((pPVar9->fields).plural,0,(MethodInfo *)0x0), iVar14 < 0 ||
              ((pPVar9->fields).nplurals < iVar14)))) {
            iVar14 = 0;
          }
          if (iVar14 != iVar11) goto code_?;
          uVar6 = 0;
        }
        auStackX_18[0] = iVar11 + 1;
        pOVar12 = (Object *)FUN_?(uRam_?,auStackX_18);
        auStackX_18[0] = uVar6;
        arg1 = (Object *)FUN_?(uRam_?,auStackX_18);
        mscorlib.dll::System::String::String_Format_1
                  (StringLiteral_Form__0___e_g____1___,pOVar12,arg1,(MethodInfo *)0x0);
      }
      if (this_00 == (List_1_System_Object_ *)0x0) goto code_?;
      FUN_?(this_00);
      iVar11 = iVar11 + 1;
    } while (iVar11 < iVar10);
  }
code_?:
  pMVar2 = MethodInfo__System__Collections__Generic__List<System::String>__ToArray__;
  if ((this_00->fields)._size == 0) {
    pvVar15 = MethodInfo__System__Collections__Generic__List<System::String>__ToArray__->klass->
              rgctx_data[2].rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar15 + 0x135) & 1) == 0) {
      pvVar15 = (void *)FUN_?(pvVar15);
    }
    if (*(int *)((longlong)pvVar15 + 0xe4) == 0) {
      FUN_?(pvVar15);
    }
    pIVar16 = pMVar2->klass->rgctx_data[2].klass;
    if ((pIVar16->field_0x135 & 1) == 0) {
      pIVar16 = (Il2CppClass *)FUN_?(pIVar16);
    }
    return *(String__Array **)pIVar16->static_fields;
  }
  pvVar15 = MethodInfo__System__Collections__Generic__List<System::String>__ToArray__->klass->
            rgctx_data[3].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar15 + 0x135) & 1) == 0) {
    pvVar15 = (void *)FUN_?(pvVar15);
  }
  pSVar8 = (String__Array *)FUN_?(pvVar15);
  mscorlib.dll::System::Array::Array_Copy_3
            ((Array *)(this_00->fields)._items,0,(Array *)pSVar8,0,(this_00->fields)._size,
             (MethodInfo *)0x0);
  return pSVar8;
}


/* Void remove_DirtyChanged(EventHandler) */

void Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_remove_DirtyChanged
               (Catalog *this,EventHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).DirtyChanged;
  source = (this->fields).DirtyChanged;
  do {
    pEVar2 = (EventHandler *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pEVar3 = (EventHandler *)0x0;
    if (pEVar2 != (EventHandler *)0x0) {
      if (pEVar2->klass == TypeInfo__System__EventHandler) {
        pEVar3 = pEVar2;
      }
      if (pEVar3 == (EventHandler *)0x0) {
        FUN_?(pEVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    pEVar2 = *ppEVar1;
    bVar5 = source == pEVar2;
    if (bVar5) {
      *ppEVar1 = pEVar3;
      pEVar2 = source;
    }
    UNLOCK();
    pEVar3 = source;
    if (!bVar5) {
      pEVar3 = pEVar2;
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)ppEVar1 >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    bVar5 = pEVar3 != source;
    source = pEVar3;
  } while (bVar5);
  return;
}


/* Void set_CommentForGui(String) */

void Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_set_CommentForGui
               (Catalog *this,String *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Text__StringBuilder);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__String);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral___);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((value == (String *)0x0) || ((value->fields)._stringLength == 0)) {
    bVar1 = iRam_? == 0;
    (this->fields).Comment = (String *)**(undefined8 **)(lRam_? + 0xb8);
    if (bVar1) {
      return;
    }
    uVar2 = (uint)((ulonglong)&(this->fields).Comment >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
    return;
  }
  this_00 = (StringBuilder *)FUN_?(TypeInfo__System__Text__StringBuilder);
  mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor(this_00,(MethodInfo *)0x0);
  pSVar6 = (String__Array *)FUN_?();
  pSVar7 = mscorlib.dll::System::Environment::Environment_get_NewLine((MethodInfo *)0x0);
  if (pSVar6 != (String__Array *)0x0) {
    FUN_?(pSVar6,0,pSVar7);
    uVar2 = 0;
    pSVar6 = mscorlib.dll::System::String::String_SplitInternal_1
                       (value,(String *)0x0,pSVar6,0x7fffffff,StringSplitOptions__Enum_None,
                        (MethodInfo *)0x0);
    if (pSVar6 != (String__Array *)0x0) {
      ppSVar8 = pSVar6->vector;
      for (; (int)uVar2 < (int)pSVar6->max_length; uVar2 = uVar2 + 1) {
        if ((uint)pSVar6->max_length <= uVar2) {
          FUN_?();
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pSVar7 = *ppSVar8;
        if (this_00 == (StringBuilder *)0x0) goto code_?;
        if ((this_00->fields).m_ChunkOffset + (this_00->fields).m_ChunkLength != 0) {
          value_00 = mscorlib.dll::System::Environment::Environment_get_NewLine((MethodInfo *)0x0);
          mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                    (this_00,value_00,(MethodInfo *)0x0);
        }
        pSVar7 = mscorlib.dll::System::String::String_Concat_4
                           (::StringLiteral___,pSVar7,(MethodInfo *)0x0);
        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                  (this_00,pSVar7,(MethodInfo *)0x0);
        ppSVar8 = ppSVar8 + 1;
      }
      if (this_00 != (StringBuilder *)0x0) {
        pSVar7 = (String *)
                 (*(this_00->klass->vtable).ToString.methodPtr)
                           (this_00,(this_00->klass->vtable).ToString.method);
        bVar1 = iRam_? == 0;
        (this->fields).Comment = pSVar7;
        if (bVar1) {
          return;
        }
        uVar2 = (uint)((ulonglong)&(this->fields).Comment >> 0xc);
        lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
        do {
          uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
          puVar5 = (ulonglong *)(lVar3 + 0xADDR);
          LOCK();
          bVar1 = uVar4 == *puVar5;
          if (bVar1) {
            *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (!bVar1);
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void set_IsDirty(Boolean) */

void Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_set_IsDirty
               (Catalog *this,bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventArgs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).isDirty = value;
  if (*(int *)&(TypeInfo__System__EventArgs->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__System__EventArgs);
  }
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(this->klass->vtable).OnDirtyChanged.methodPtr)
            (this,TypeInfo__System__EventArgs->static_fields->Empty,
             (this->klass->vtable).OnDirtyChanged.method);
  return;
}

