
/* Boolean OnDeletedEntry(String[], String, String[], String, String[]) */

bool Assembly-CSharp.dll::GNU::Gettext::LoadParser::LoadParser_OnDeletedEntry
               (LoadParser *this,String__Array *deletedLines,String *flags,String__Array *references
               ,String *comment,String__Array *autocomments,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GNU__Gettext__CatalogDeletedEntry);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__String);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  collection = (IEnumerable_1_System_Object_ *)FUN_?(TypeInfo__System__String,0);
  item_00 = (Object *)FUN_?(TypeInfo__GNU__Gettext__CatalogDeletedEntry);
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<System::String>__List_System__Collections__Generic__IEnumerable<System::String>_
                 );
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
  pOVar1 = (Object__Class *)
            FUN_?(TypeInfo__System__Collections__Generic__List<System::String>);
  mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object___ctor_1
            ((List_1_System_Object_ *)pOVar1,collection,
             MethodInfo__System__Collections__Generic__List<System::String>__List_System__Collections__Generic__IEnumerable<System::String>_
            );
  bVar2 = iRam_? != 0;
  item_00[1].klass = pOVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)(item_00 + 1) >> 0xc);
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
  this_01 = (LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<System::String>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            (this_01,MethodInfo__System__Collections__Generic__List<System::String>__List__);
  bVar2 = iRam_? != 0;
  item_00[1].monitor = (MonitorData *)this_01;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&item_00[1].monitor >> 0xc);
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
  pOVar1 = (Object__Class *)
            FUN_?(TypeInfo__System__Collections__Generic__List<System::String>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pOVar1,
             MethodInfo__System__Collections__Generic__List<System::String>__List__);
  iVar7 = iRam_?;
  item_00[2].klass = pOVar1;
  if (iVar7 != 0) {
    uVar3 = (uint)((ulonglong)(item_00 + 2) >> 0xc);
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
      iVar7 = iRam_?;
    } while (!bVar2);
  }
  if (((flags != (String *)0x0) && ((flags->fields)._stringLength != 0)) &&
     (item_00[2].monitor = (MonitorData *)flags, iVar7 != 0)) {
    uVar3 = (uint)((ulonglong)&item_00[2].monitor >> 0xc);
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
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<System::String>__List_System__Collections__Generic__IEnumerable<System::String>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<System::String>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar1 = (Object__Class *)
            FUN_?(TypeInfo__System__Collections__Generic__List<System::String>);
  mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object___ctor_1
            ((List_1_System_Object_ *)pOVar1,(IEnumerable_1_System_Object_ *)deletedLines,
             MethodInfo__System__Collections__Generic__List<System::String>__List_System__Collections__Generic__IEnumerable<System::String>_
            );
  iVar7 = iRam_?;
  item_00[1].klass = pOVar1;
  if (iVar7 != 0) {
    uVar3 = (uint)((ulonglong)(item_00 + 1) >> 0xc);
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
      iVar7 = iRam_?;
    } while (!bVar2);
  }
  item_00[3].klass = (Object__Class *)comment;
  if (iVar7 != 0) {
    uVar3 = (uint)((ulonglong)(item_00 + 3) >> 0xc);
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
  uVar5 = 0;
  if (autocomments != (String__Array *)0x0) {
    while ((longlong)uVar5 < (longlong)(int)autocomments->max_length) {
      uVar3 = (uint)uVar5;
      if ((uint)autocomments->max_length <= uVar3) {
        FUN_?();
        pcVar8 = (code *)swi(3);
        bVar9 = (*pcVar8)();
        return bVar9;
      }
      item = autocomments->vector[uVar5];
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar10 = MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_;
      pOVar1 = item_00[2].klass;
      if (pOVar1 == (Object__Class *)0x0) goto code_?;
      piVar11 = (int32_t *)((longlong)&(pOVar1->_0).namespaze + 4);
      *piVar11 = *piVar11 + 1;
      pOVar12 = ((List_1_System_Object___Fields *)&(pOVar1->_0).name)->_items;
      if (pOVar12 == (Object__Array *)0x0) goto code_?;
      uVar13 = *(uint *)&(pOVar1->_0).namespaze;
      if (uVar13 < (uint)pOVar12->max_length) {
        *(uint *)&(pOVar1->_0).namespaze = uVar13 + 1;
        FUN_?(pOVar12,(longlong)(int)uVar13,item);
        uVar5 = (ulonglong)(uVar3 + 1);
      }
      else {
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__AddWithResize
                  ((List_1_System_Object_ *)pOVar1,(Object *)item,
                   pMVar10->klass->rgctx_data[0xe].method);
        uVar5 = (ulonglong)(uVar3 + 1);
      }
    }
    pCVar14 = (this->fields).catalog;
    if (pCVar14 != (Catalog *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogDeletedEntry>__Add_GNU__Gettext__CatalogDeletedEntry_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar10 = 
      MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogDeletedEntry>__Add_GNU__Gettext__CatalogDeletedEntry_
      ;
      this_00 = (pCVar14->fields).deletedEntriesList;
      if (this_00 != (List_1_GNU_Gettext_CatalogDeletedEntry_ *)0x0) {
        piVar11 = &(this_00->fields)._version;
        *piVar11 = *piVar11 + 1;
        pCVar15 = (this_00->fields)._items;
        if (pCVar15 != (CatalogDeletedEntry__Array *)0x0) {
          uVar3 = (this_00->fields)._size;
          if (uVar3 < (uint)pCVar15->max_length) {
            (this_00->fields)._size = uVar3 + 1;
            FUN_?(pCVar15,(longlong)(int)uVar3,item_00);
          }
          else {
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__AddWithResize
                      ((List_1_System_Object_ *)this_00,item_00,
                       pMVar10->klass->rgctx_data[0xe].method);
          }
          return 1;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  bVar9 = (*pcVar8)();
  return bVar9;
}


/* Boolean OnEntry(String, String, Boolean, String[], String, String[], String, String[], String) */

bool Assembly-CSharp.dll::GNU::Gettext::LoadParser::LoadParser_OnEntry
               (LoadParser *this,String *msgid,String *msgidPlural,bool hasPlural,
               String__Array *translations,String *flags,String__Array *references,String *comment,
               String__Array *autocomments,String *msgctxt,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GNU__Gettext__CatalogEntry);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (((msgid == (String *)0x0) || ((msgid->fields)._stringLength == 0)) &&
     ((this->fields).headerParsed == 0)) {
    pCVar1 = (this->fields).catalog;
    if (translations != (String__Array *)0x0) {
      if ((int)translations->max_length == 0) {
code_?:
        FUN_?();
        pcVar2 = (code *)swi(3);
        bVar3 = (*pcVar2)();
        return bVar3;
      }
      if (pCVar1 != (Catalog *)0x0) {
        Catalog::Catalog_ParseHeaderString(pCVar1,translations->vector[0],(MethodInfo *)0x0);
        pCVar1 = (this->fields).catalog;
        if (pCVar1 != (Catalog *)0x0) {
          bVar4 = iRam_? != 0;
          (pCVar1->fields).Comment = comment;
          if (bVar4) {
            uVar5 = (uint)((ulonglong)&(pCVar1->fields).Comment >> 0xc);
            lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
            do {
              uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
              puVar8 = (ulonglong *)(lVar6 + 0xADDR);
              LOCK();
              bVar4 = uVar7 == *puVar8;
              if (bVar4) {
                *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
              }
              UNLOCK();
            } while (!bVar4);
          }
          (this->fields).headerParsed = 1;
          return 1;
        }
      }
    }
  }
  else {
    pCVar1 = (this->fields).catalog;
    pSVar9 = (String *)**(undefined8 **)(lRam_? + 0xb8);
    this_01 = (CatalogEntry *)FUN_?(TypeInfo__GNU__Gettext__CatalogEntry);
    uVar7 = 0;
    CatalogEntry::CatalogEntry__ctor(this_01,pCVar1,pSVar9,pSVar9,(MethodInfo *)0x0);
    if ((flags == (String *)0x0) || ((flags->fields)._stringLength == 0)) {
      if (this_01 == (CatalogEntry *)0x0) goto code_?;
    }
    else {
      if (this_01 == (CatalogEntry *)0x0) goto code_?;
      CatalogEntry::CatalogEntry_set_Flags(this_01,flags,(MethodInfo *)0x0);
    }
    iVar10 = iRam_?;
    (this_01->fields).str = msgid;
    if (iVar10 != 0) {
      uVar5 = (uint)((ulonglong)&this_01->fields >> 0xc);
      lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
      do {
        uVar11 = *(ulonglong *)(lVar6 + 0xADDR);
        puVar8 = (ulonglong *)(lVar6 + 0xADDR);
        LOCK();
        bVar4 = uVar11 == *puVar8;
        if (bVar4) {
          *puVar8 = uVar11 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
        iVar10 = iRam_?;
      } while (!bVar4);
    }
    (this_01->fields).validity = 0;
    if (hasPlural != 0) {
      (this_01->fields).plural = msgidPlural;
      if (iVar10 != 0) {
        uVar5 = (uint)((ulonglong)&(this_01->fields).plural >> 0xc);
        lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
        do {
          uVar11 = *(ulonglong *)(lVar6 + 0xADDR);
          puVar8 = (ulonglong *)(lVar6 + 0xADDR);
          LOCK();
          bVar4 = uVar11 == *puVar8;
          if (bVar4) {
            *puVar8 = uVar11 | 1L << (uVar5 & 0x3f);
          }
          UNLOCK();
        } while (!bVar4);
      }
      if ((msgidPlural == (String *)0x0) || ((msgidPlural->fields)._stringLength == 0)) {
        bVar3 = 0;
      }
      else {
        bVar3 = 1;
      }
      (this_01->fields).hasPlural = bVar3;
    }
    CatalogEntry::CatalogEntry_SetTranslations(this_01,translations,(MethodInfo *)0x0);
    pSVar9 = (this_01->fields).comment;
    if ((pSVar9 != comment) &&
       ((((pSVar9 == (String *)0x0 || (comment == (String *)0x0)) ||
         ((pSVar9->fields)._stringLength != (comment->fields)._stringLength)) ||
        (bVar3 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                            ((uint8_t *)&(pSVar9->fields)._firstChar,
                             (uint8_t *)&(comment->fields)._firstChar,
                             (longlong)(pSVar9->fields)._stringLength * 2,(MethodInfo *)0x0),
        bVar3 == 0)))) {
      bVar4 = iRam_? != 0;
      (this_01->fields).comment = comment;
      if (bVar4) {
        uVar5 = (uint)((ulonglong)&(this_01->fields).comment >> 0xc);
        lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
        do {
          uVar11 = *(ulonglong *)(lVar6 + 0xADDR);
          puVar8 = (ulonglong *)(lVar6 + 0xADDR);
          LOCK();
          bVar4 = uVar11 == *puVar8;
          if (bVar4) {
            *puVar8 = uVar11 | 1L << (uVar5 & 0x3f);
          }
          UNLOCK();
        } while (!bVar4);
      }
      if ((this_01->fields).owner != (Catalog *)0x0) {
        Catalog::Catalog_set_IsDirty((this_01->fields).owner,1,(MethodInfo *)0x0);
      }
    }
    uVar11 = uVar7;
    if (references != (String__Array *)0x0) {
      for (; (longlong)uVar11 < (longlong)(int)references->max_length;
          uVar11 = (ulonglong)((uint)uVar11 + 1)) {
        if ((uint)references->max_length <= (uint)uVar11) goto code_?;
        CatalogEntry::CatalogEntry_AddReference
                  (this_01,references->vector[uVar11],(MethodInfo *)0x0);
      }
      if (autocomments != (String__Array *)0x0) {
        while ((longlong)uVar7 < (longlong)(int)autocomments->max_length) {
          uVar5 = (uint)uVar7;
          if ((uint)autocomments->max_length <= uVar5) goto code_?;
          pSVar9 = autocomments->vector[uVar7];
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                         );
            LOCK();
            UNLOCK();
            FUN_?(&
                          MethodInfo__System__Collections__Generic__List<System::String>__Contains_System__String_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar12 = 
          MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_;
          this_00 = (this_01->fields).autocomments;
          if (this_00 == (List_1_System_String_ *)0x0) goto code_?;
          piVar13 = &(this_00->fields)._version;
          *piVar13 = *piVar13 + 1;
          pSVar14 = (this_00->fields)._items;
          if (pSVar14 == (String__Array *)0x0) goto code_?;
          uVar15 = (this_00->fields)._size;
          if (uVar15 < (uint)pSVar14->max_length) {
            (this_00->fields)._size = uVar15 + 1;
            FUN_?(pSVar14,(longlong)(int)uVar15);
            uVar7 = (ulonglong)(uVar5 + 1);
          }
          else {
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__AddWithResize
                      ((List_1_System_Object_ *)this_00,(Object *)pSVar9,
                       pMVar12->klass->rgctx_data[0xe].method);
            uVar7 = (ulonglong)(uVar5 + 1);
          }
        }
        if (msgctxt != (String *)0x0) {
          pSVar9 = mscorlib.dll::System::String::String_TrimWhiteSpaceHelper
                              (msgctxt,String_TrimType__Enum_Both,(MethodInfo *)0x0);
          bVar4 = iRam_? != 0;
          (this_01->fields).context = pSVar9;
          if (bVar4) {
            uVar5 = (uint)((ulonglong)&(this_01->fields).context >> 0xc);
            lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
            do {
              uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
              puVar8 = (ulonglong *)(lVar6 + 0xADDR);
              LOCK();
              bVar4 = uVar7 == *puVar8;
              if (bVar4) {
                *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
              }
              UNLOCK();
            } while (!bVar4);
          }
          pCVar1 = (this->fields).catalog;
          if (pCVar1 != (Catalog *)0x0) {
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
            pCVar16 = Catalog::Catalog_FindItem_1(pCVar1,this_01,(MethodInfo *)0x0);
            if (pCVar16 != (CatalogEntry *)0x0) {
              return 1;
            }
            pIVar17 = (pCVar1->fields).entriesDict;
            CatalogEntry::CatalogEntry_MakeKey
                      ((this_01->fields).str,(this_01->fields).context,(MethodInfo *)0x0);
            if (pIVar17 != (IDictionary_2_System_String_GNU_Gettext_CatalogEntry_ *)0x0) {
              FUN_?();
              pLVar18 = (pCVar1->fields).entriesList;
              if (pLVar18 != (List_1_GNU_Gettext_CatalogEntry_ *)0x0) {
                FUN_?(pLVar18,this_01);
                return 1;
              }
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* LoadParser(Catalog, String, Encoding) */

void Assembly-CSharp.dll::GNU::Gettext::LoadParser::LoadParser__ctor
               (LoadParser *this,Catalog *catalog,String *text,Encoding *encoding,MethodInfo *method
               )

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
  CatalogParser::CatalogParser__ctor((CatalogParser *)this,text,encoding,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields).catalog = catalog;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).catalog >> 0xc);
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

