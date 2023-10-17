
/* Void AddDeletedItem(CatalogDeletedEntry) */

void Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_AddDeletedItem
               (Catalog *this,CatalogDeletedEntry *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).deletedEntriesList;
  if (this_00 != (List_1_GNU_Gettext_CatalogDeletedEntry_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              ((List_1_System_Object_ *)this_00,(Object *)data,
               MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogDeletedEntry>__Add_GNU__Gettext__CatalogDeletedEntry_
              );
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* CatalogEntry AddItem(String, String) */

CatalogEntry *
Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_AddItem
          (Catalog *this,String *original,String *plural,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GNU__Gettext__CatalogEntry);
    func_?(&
                    TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::CatalogEntry>
                   );
    func_?(&TypeInfo__System__String);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  pCStack_1 = (CatalogEntry *)0x0;
  pIVar2 = (this->fields).entriesDict;
  if (pIVar2 == (IDictionary_2_System_String_GNU_Gettext_CatalogEntry_ *)0x0) {
code_?:
    func_?();
code_?:
    uVar3 = func_?(0);
    func_?(uVar3);
  }
  else {
    uVar4 = 0;
    uVar5 = (pIVar2->klass->_1).interface_offsets_count;
    if (uVar5 != 0) {
      do {
        if (pIVar2->klass->interfaceOffsets[uVar4].interfaceType ==
            (Il2CppClass *)
            TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::CatalogEntry>
           ) {
          ppIVar6 = &(&(pIVar2->klass->vtable).TryGetValue)
                     [pIVar2->klass->interfaceOffsets[uVar4].offset].methodPtr;
          goto code_?;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar5);
    }
    ppIVar6 = (Il2CppMethodPointer *)
              func_?(pIVar2,
                              TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::CatalogEntry>
                              ,7);
code_?:
    cVar7 = (**ppIVar6)(pIVar2,original,&pCStack_1,(MethodInfo *)ppIVar6[1]);
    if (cVar7 != '\0') {
      return pCStack_1;
    }
    pCVar8 = (CatalogEntry *)func_?(TypeInfo__GNU__Gettext__CatalogEntry);
    if (pCVar8 == (CatalogEntry *)0x0) goto code_?;
    CatalogEntry::CatalogEntry__ctor(pCVar8,this,original,plural,(MethodInfo *)0x0);
    pCStack_1 = pCVar8;
    bVar9 = mscorlib.dll::System::String::String_IsNullOrEmpty(plural,(MethodInfo *)0x0);
    pCVar8 = pCStack_1;
    if (bVar9 != 0) {
code_?:
      pCVar8 = pCStack_1;
      if (cRam_? == '\0') {
        func_?(&
                        TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::CatalogEntry>
                       );
        func_?(&
                        MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogEntry>__Add_GNU__Gettext__CatalogEntry_
                       );
        cRam_? = '\x01';
      }
      pCVar10 = Catalog_FindItem_1(this,pCVar8,(MethodInfo *)0x0);
      if (pCVar10 != (CatalogEntry *)0x0) {
        return pCStack_1;
      }
      pIVar2 = (this->fields).entriesDict;
      if ((pCVar8 != (CatalogEntry *)0x0) &&
         (pSVar11 = CatalogEntry::CatalogEntry_get_Key(pCVar8,(MethodInfo *)0x0),
         pIVar2 != (IDictionary_2_System_String_GNU_Gettext_CatalogEntry_ *)0x0)) {
        func_?(5,
                        TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::CatalogEntry>
                        ,pIVar2,pSVar11,pCVar8);
        this_00 = (this->fields).entriesList;
        if (this_00 != (List_1_GNU_Gettext_CatalogEntry_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__Add
                    ((List_1_System_Object_ *)this_00,(Object *)pCVar8,
                     MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogEntry>__Add_GNU__Gettext__CatalogEntry_
                    );
          return pCStack_1;
        }
      }
      goto code_?;
    }
    translations = (String__Array *)func_?(TypeInfo__System__String,2);
    if (translations == (String__Array *)0x0) goto code_?;
    if ((::StringLiteral__ != (String *)0x0) &&
       (iVar12 = func_?(::StringLiteral__,(translations->klass->_0).element_class),
       iVar12 == 0)) goto code_?;
    pSVar11 = ::StringLiteral__;
    if (translations->max_length == 0) goto code_?;
    translations->vector[0] = ::StringLiteral__;
    func_?(translations->vector,pSVar11);
    if ((::StringLiteral__ == (String *)0x0) ||
       (iVar12 = func_?(::StringLiteral__,(translations->klass->_0).element_class),
       iVar12 != 0)) {
      pSVar11 = ::StringLiteral__;
      if (translations->max_length < 2) goto code_?;
      translations->vector[1] = ::StringLiteral__;
      func_?(translations->vector + 1,pSVar11);
      if (pCVar8 != (CatalogEntry *)0x0) {
        CatalogEntry::CatalogEntry_SetTranslations(pCVar8,translations,(MethodInfo *)0x0);
        goto code_?;
      }
      goto code_?;
    }
  }
  uVar3 = func_?(0);
  func_?(uVar3);
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  pCVar8 = (CatalogEntry *)(*pcVar13)();
  return pCVar8;
}


/* Void AddItem(CatalogEntry) */

void Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_AddItem_1
               (Catalog *this,CatalogEntry *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::CatalogEntry>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogEntry>__Add_GNU__Gettext__CatalogEntry_
                   );
    cRam_? = '\x01';
  }
  pCVar1 = Catalog_FindItem_1(this,data,(MethodInfo *)0x0);
  if (pCVar1 != (CatalogEntry *)0x0) {
    return;
  }
  pIVar2 = (this->fields).entriesDict;
  if ((data != (CatalogEntry *)0x0) &&
     (pSVar3 = CatalogEntry::CatalogEntry_get_Key(data,(MethodInfo *)0x0),
     pIVar2 != (IDictionary_2_System_String_GNU_Gettext_CatalogEntry_ *)0x0)) {
    func_?(5,
                    TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::CatalogEntry>
                    ,pIVar2,pSVar3);
    this_00 = (this->fields).entriesList;
    if (this_00 != (List_1_GNU_Gettext_CatalogEntry_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                ((List_1_System_Object_ *)this_00,(Object *)data,
                 MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogEntry>__Add_GNU__Gettext__CatalogEntry_
                );
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Append(Catalog) */

void Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_Append
               (Catalog *this,Catalog *catalog,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GNU__Gettext__CatalogEntry);
    func_?(&
                    TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::CatalogEntry>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogEntry>__Add_GNU__Gettext__CatalogEntry_
                   );
    cRam_? = '\x01';
  }
  iStack_1 = 0;
  if (catalog != (Catalog *)0x0) {
    while( true ) {
      if (cRam_? == '\0') {
        func_?(&
                        MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogEntry>__get_Count__
                       );
        cRam_? = '\x01';
      }
      pLVar2 = (catalog->fields).entriesList;
      if (pLVar2 == (List_1_GNU_Gettext_CatalogEntry_ *)0x0) break;
      if ((pLVar2->fields)._size <= iStack_1) {
        Catalog_set_IsDirty(this,1,(MethodInfo *)0x0);
        return;
      }
      if (cRam_? == '\0') {
        func_?(&
                        MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogEntry>__get_Count__
                       );
        func_?(&
                        MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogEntry>__get_Item_int_
                       );
        cRam_? = '\x01';
      }
      if (iStack_1 < 0) {
code_?:
        entry.First = 0;
        entry.Last = 0;
      }
      else {
        this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                  (catalog->fields).entriesList;
        if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
        break;
        if ((this_00->fields)._size <= iStack_1) goto code_?;
        entry = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (this_00,iStack_1,
                           MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogEntry>__get_Item_int_
                          );
      }
      pCVar3 = Catalog_FindItem_1(this,(CatalogEntry *)entry,(MethodInfo *)0x0);
      if (pCVar3 == (CatalogEntry *)0x0) {
        pCVar3 = (CatalogEntry *)func_?(TypeInfo__GNU__Gettext__CatalogEntry);
        if (pCVar3 == (CatalogEntry *)0x0) break;
        CatalogEntry::CatalogEntry__ctor_1(pCVar3,this,(CatalogEntry *)entry,(MethodInfo *)0x0);
        pIVar4 = (this->fields).entriesDict;
        if ((entry == (RegexCharClass_SingleRange)0x0) ||
           (pSVar5 = CatalogEntry::CatalogEntry_get_Key((CatalogEntry *)entry,(MethodInfo *)0x0),
           pIVar4 == (IDictionary_2_System_String_GNU_Gettext_CatalogEntry_ *)0x0)) break;
        func_?(5,
                        TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::CatalogEntry>
                        ,pIVar4,pSVar5,pCVar3);
        pLVar2 = (this->fields).entriesList;
        if (pLVar2 == (List_1_GNU_Gettext_CatalogEntry_ *)0x0) break;
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Add
                  ((List_1_System_Object_ *)pLVar2,(Object *)pCVar3,
                   MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogEntry>__Add_GNU__Gettext__CatalogEntry_
                  );
        iStack_1 = iStack_1 + 1;
      }
      else {
        uVar6 = 0;
        iVar7 = 0x10;
        if (entry == (RegexCharClass_SingleRange)0x0) break;
        while( true ) {
          pSVar8 = CatalogEntry::CatalogEntry_get_References
                             ((CatalogEntry *)entry,(MethodInfo *)0x0);
          if (pSVar8 == (String__Array *)0x0) goto code_?;
          uVar9 = pSVar8->max_length;
          if (((int)uVar9 < 0 && (int)uVar9 >> 0x1f < 1) ||
             (((int)uVar9 >> 0x1f < 1 && (uVar9 <= uVar6)))) break;
          pSVar8 = CatalogEntry::CatalogEntry_get_References
                             ((CatalogEntry *)entry,(MethodInfo *)0x0);
          if (pSVar8 == (String__Array *)0x0) goto code_?;
          if (pSVar8->max_length <= uVar6) goto code_?;
          CatalogEntry::CatalogEntry_AddReference
                    (pCVar3,*(String **)((int)pSVar8->vector + iVar7 + -0x10),(MethodInfo *)0x0);
          uVar6 = uVar6 + 1;
          iVar7 = iVar7 + 4;
        }
        pSVar5 = CatalogEntry::CatalogEntry_GetTranslation
                           ((CatalogEntry *)entry,0,(MethodInfo *)0x0);
        bVar10 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar5,(MethodInfo *)0x0);
        if (bVar10 == 0) {
          pSVar5 = CatalogEntry::CatalogEntry_GetTranslation
                             ((CatalogEntry *)entry,0,(MethodInfo *)0x0);
          CatalogEntry::CatalogEntry_SetTranslation(pCVar3,pSVar5,0,(MethodInfo *)0x0);
        }
        if (*(char *)((int)entry + 0x20) != '\0') {
          CatalogEntry::CatalogEntry_set_IsFuzzy(pCVar3,1,(MethodInfo *)0x0);
        }
        catalog = (Catalog *)
                  CatalogEntry::CatalogEntry_get_Flags((CatalogEntry *)entry,(MethodInfo *)0x0);
        this = (Catalog *)&UNK_?;
        bVar10 = mscorlib.dll::System::String::String_IsNullOrEmpty
                          ((String *)catalog,(MethodInfo *)0x0);
        if (bVar10 == 0) {
          pSVar5 = CatalogEntry::CatalogEntry_get_Flags((CatalogEntry *)entry,(MethodInfo *)0x0);
          CatalogEntry::CatalogEntry_set_Flags(pCVar3,pSVar5,(MethodInfo *)0x0);
        }
        iStack_1 = iStack_1 + 1;
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Boolean CanEncodeToCharset(String) */

bool Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_CanEncodeToCharset
               (String *charset,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  pEVar4 = mscorlib.dll::System::Text::Encoding::Encoding_GetEncodings((MethodInfo *)0x0);
  uVar5 = 0;
  if (pEVar4 != (EncodingInfo__Array *)0x0) {
    while( true ) {
      if ((int)pEVar4->max_length <= (int)uVar5) {
        *unaff_FS_OFFSET = uStack_3;
        return 0;
      }
      if (pEVar4->max_length <= uVar5) break;
      uStack_1 = 0;
      if (((pEVar4->vector[uVar5] == (EncodingInfo *)0x0) ||
          (pSVar6 = (pEVar4->vector[uVar5]->fields).strEncodingName, pSVar6 == (String *)0x0)) ||
         (pSVar6 = mscorlib.dll::System::String::String_ToLower(pSVar6,(MethodInfo *)0x0),
         charset == (String *)0x0)) goto code_?;
      b = mscorlib.dll::System::String::String_ToLower(charset,(MethodInfo *)0x0);
      bVar7 = mscorlib.dll::System::String::String_op_Equality(pSVar6,b,(MethodInfo *)0x0);
      if (bVar7 != 0) {
        *unaff_FS_OFFSET = uStack_3;
        return 1;
      }
      uStack_1 = 0xffffffff;
      uVar5 = uVar5 + 1;
    }
    func_?();
  }
code_?:
  func_?();
  func_?(&stack0xffffffdc);
  pcVar8 = (code *)swi(3);
  bVar7 = (*pcVar8)();
  return bVar7;
}


/* Void Clear() */

void Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_Clear(Catalog *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Collections__Generic__ICollection<System::Collections::Generic::KeyValuePair<System::String,_GNU::Gettext::CatalogEntry>_>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogDeletedEntry>__Clear__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogEntry>__Clear__
                   );
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).entriesDict;
  if (pIVar1 != (IDictionary_2_System_String_GNU_Gettext_CatalogEntry_ *)0x0) {
    func_?(3,
                    TypeInfo__System__Collections__Generic__ICollection<System::Collections::Generic::KeyValuePair<System::String,_GNU::Gettext::CatalogEntry>_>
                    ,pIVar1);
    pLVar2 = (this->fields).entriesList;
    if (pLVar2 != (List_1_GNU_Gettext_CatalogEntry_ *)0x0) {
      iVar3 = (pLVar2->fields)._size;
      piVar4 = &(pLVar2->fields)._version;
      *piVar4 = *piVar4 + 1;
      (pLVar2->fields)._size = 0;
      if (0 < iVar3) {
        mscorlib.dll::System::Array::Array_Clear
                  ((Array *)(pLVar2->fields)._items,0,iVar3,(MethodInfo *)0x0);
      }
      pLVar5 = (this->fields).deletedEntriesList;
      if (pLVar5 != (List_1_GNU_Gettext_CatalogDeletedEntry_ *)0x0) {
        iVar3 = (pLVar5->fields)._size;
        piVar4 = &(pLVar5->fields)._version;
        *piVar4 = *piVar4 + 1;
        (pLVar5->fields)._size = 0;
        if (0 < iVar3) {
          mscorlib.dll::System::Array::Array_Clear
                    ((Array *)(pLVar5->fields)._items,0,iVar3,(MethodInfo *)0x0);
        }
        (this->fields).isOk = 1;
        return;
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Boolean Contains(String, String) */

bool Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_Contains
               (Catalog *this,String *msgid,String *context,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::CatalogEntry>
                   );
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).entriesDict;
  CatalogEntry::CatalogEntry_MakeKey(msgid,context,(MethodInfo *)0x0);
  if (pIVar1 != (IDictionary_2_System_String_GNU_Gettext_CatalogEntry_ *)0x0) {
    bVar2 = func_?(4,
                            TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::CatalogEntry>
                            ,pIVar1);
    return bVar2;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* Void CreateNewHeaders() */

void Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_CreateNewHeaders
               (Catalog *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_utf_8);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__DateTime);
    func_?(&StringLiteral_yyyy_MM_dd_HH___mm___sszz00);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__DateTime->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__DateTime);
  }
  uStack_1 = mscorlib.dll::System::DateTime::DateTime_get_Now((MethodInfo *)0x0);
  pSVar2 = mscorlib.dll::System::DateTime::DateTime_ToString_1
                     ((DateTime *)&uStack_1,StringLiteral_yyyy_MM_dd_HH___mm___sszz00,
                      (MethodInfo *)0x0);
  (this->fields).CreationDate = pSVar2;
  func_?(&(this->fields).CreationDate,pSVar2);
  (this->fields).RevisionDate = pSVar2;
  func_?(&(this->fields).RevisionDate,pSVar2);
  pSVar2 = ::StringLiteral__;
  (this->fields).TeamEmail = ::StringLiteral__;
  func_?(&(this->fields).TeamEmail,pSVar2);
  (this->fields).Team = pSVar2;
  func_?(&(this->fields).Team,pSVar2);
  (this->fields).Project = pSVar2;
  func_?(&(this->fields).Project,pSVar2);
  (this->fields).Country = pSVar2;
  func_?(&(this->fields).Country,pSVar2);
  (this->fields).Language = pSVar2;
  uStack_1._0_4_ = &(this->fields).Language;
  uStack_1._4_4_ = pSVar2;
  func_?();
  (this->fields).Charset = StringLiteral_utf_8;
  func_?(&(this->fields).Charset,StringLiteral_utf_8);
  Catalog_UpdateHeaderDict(this,(MethodInfo *)0x0);
  return;
}


/* Void DeleteHeader(String) */

void Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_DeleteHeader
               (Catalog *this,String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Remove_System__String_
                   );
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__ContainsKey_System__String_
                   );
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this->fields).headerEntries;
  if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this_00,(Object *)key,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__ContainsKey_System__String_
                      );
    if (bVar1 != 0) {
      this_01 = (this->fields).headerEntries;
      if (this_01 == (Dictionary_2_System_String_System_String_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Remove
                ((Dictionary_2_System_Object_System_Object_ *)this_01,(Object *)key,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Remove_System__String_
                );
    }
    return;
  }
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* String EnsureCorrectEndings(String, String) */

String * Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_EnsureCorrectEndings
                   (String *reference,String *text,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Text__StringBuilder);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  if (text != (String *)0x0) {
    if ((text->fields)._stringLength == 0) {
      return ::StringLiteral__;
    }
    iVar1 = (text->fields)._stringLength;
    iVar2 = 0;
    while ((iVar1 = iVar1 + -1, -1 < iVar1 &&
           (uVar3 = mscorlib.dll::System::String::String_get_Chars(text,iVar1,(MethodInfo *)0x0),
           uVar3 == 10))) {
      iVar2 = iVar2 + 1;
    }
    iVar1 = (text->fields)._stringLength;
    if (reference != (String *)0x0) {
      iVar4 = (reference->fields)._stringLength;
      iVar5 = iVar1;
      this = (StringBuilder *)func_?(TypeInfo__System__Text__StringBuilder);
      if (this != (StringBuilder *)0x0) {
        mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor_4
                  (this,text,0,iVar5 - iVar2,(iVar4 - iVar2) + iVar1,(MethodInfo *)0x0);
        iVar1 = (reference->fields)._stringLength;
        while ((iVar1 = iVar1 + -1, -1 < iVar1 &&
               (uVar3 = mscorlib.dll::System::String::String_get_Chars
                                  (reference,iVar1,(MethodInfo *)0x0), uVar3 == 10))) {
          reference = (String *)0xa;
          mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_5
                    (this,10,(MethodInfo *)0x0);
        }
        pSVar6 = (String *)
                 (*(this->klass->vtable).ToString.methodPtr)
                           (this,(this->klass->vtable).ToString.method);
        return pSVar6;
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  pSVar6 = (String *)(*pcVar7)();
  return pSVar6;
}


/* CatalogEntry FindItem(String, String) */

CatalogEntry *
Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_FindItem
          (Catalog *this,String *msgid,String *context,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::CatalogEntry>
                   );
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).entriesDict;
  CatalogEntry::CatalogEntry_MakeKey(msgid,context,(MethodInfo *)0x0);
  if (pIVar1 != (IDictionary_2_System_String_GNU_Gettext_CatalogEntry_ *)0x0) {
    cVar2 = func_?(4,
                            TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::CatalogEntry>
                            ,pIVar1);
    if (cVar2 == '\0') {
      return (CatalogEntry *)0x0;
    }
    pIVar1 = (this->fields).entriesDict;
    CatalogEntry::CatalogEntry_MakeKey(msgid,context,(MethodInfo *)0x0);
    if (pIVar1 != (IDictionary_2_System_String_GNU_Gettext_CatalogEntry_ *)0x0) {
      pCVar3 = (CatalogEntry *)
               func_?(0,
                               TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::CatalogEntry>
                               ,pIVar1);
      return pCVar3;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pCVar3 = (CatalogEntry *)(*pcVar4)();
  return pCVar3;
}


/* CatalogEntry FindItem(CatalogEntry) */

CatalogEntry *
Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_FindItem_1
          (Catalog *this,CatalogEntry *entry,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::CatalogEntry>
                   );
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).entriesDict;
  if (entry != (CatalogEntry *)0x0) {
    pSVar2 = CatalogEntry::CatalogEntry_get_Key(entry,(MethodInfo *)0x0);
    if (pIVar1 != (IDictionary_2_System_String_GNU_Gettext_CatalogEntry_ *)0x0) {
      cVar3 = func_?(4,
                              TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::CatalogEntry>
                              ,pIVar1,pSVar2);
      if (cVar3 == '\0') {
        return (CatalogEntry *)0x0;
      }
      pIVar1 = (this->fields).entriesDict;
      pSVar2 = CatalogEntry::CatalogEntry_get_Key(entry,(MethodInfo *)0x0);
      if (pIVar1 != (IDictionary_2_System_String_GNU_Gettext_CatalogEntry_ *)0x0) {
        pCVar4 = (CatalogEntry *)
                 func_?(0,
                                 TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::CatalogEntry>
                                 ,pIVar1,pSVar2);
        return pCVar4;
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pCVar4 = (CatalogEntry *)(*pcVar5)();
  return pCVar4;
}


/* Void FormatMessageForFile(StringBuilder, String, String, String) */

void Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_FormatMessageForFile
               (StringBuilder *sb,String *prefix,String *message,String *newlineChar,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral__n);
    func_?(&::StringLiteral____);
    func_?(&::StringLiteral__);
    func_?(&::StringLiteral___);
    cRam_? = '\x01';
  }
  pSVar1 = StringEscaping::StringEscaping_ToGettextFormat(message,(MethodInfo *)0x0);
  if ((prefix != (String *)0x0) && (pSVar1 != (String *)0x0)) {
    if (((pSVar1->fields)._stringLength + (prefix->fields)._stringLength < 0x4d) &&
       (bVar2 = mscorlib.dll::System::String::String_Contains
                          (pSVar1,StringLiteral__n,(MethodInfo *)0x0), bVar2 == 0)) {
      if (sb != (StringBuilder *)0x0) {
        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                  (sb,prefix,(MethodInfo *)0x0);
        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                  (sb,::StringLiteral___,(MethodInfo *)0x0);
        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                  (sb,pSVar1,(MethodInfo *)0x0);
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
      pSVar3 = (String *)0xffffffff;
      prefix = (String *)0x0;
      message = (String *)0x0;
      index = 0;
      while (index < (pSVar1->fields)._stringLength) {
        pSVar4 = pSVar3;
        uVar5 = mscorlib.dll::System::String::String_get_Chars(pSVar1,index,(MethodInfo *)0x0);
        if (uVar5 == 0x5c) {
          if ((pSVar1->fields)._stringLength <= index + 1) goto code_?;
          sVar6 = 0;
          index_00 = index + 1;
          message = (String *)((int)&message->klass + 1);
          pSVar7 = pSVar3;
          uVar5 = mscorlib.dll::System::String::String_get_Chars(pSVar1,index_00,(MethodInfo *)0x0);
          pSVar4 = (String *)(index + 2);
          if (uVar5 != 0x6e) {
            if (uVar5 == 0x74) {
              pSVar3 = (String *)(index + 2);
              index = index_00;
              if (sVar6 != 0x20) {
                pSVar3 = pSVar4;
              }
            }
            else {
              pSVar3 = pSVar4;
              index = index_00;
              if (sVar6 != 0x20) {
                pSVar3 = pSVar7;
              }
            }
            goto code_?;
          }
code_?:
          mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                    (sb,::StringLiteral__,(MethodInfo *)0x0);
          pSVar3 = mscorlib.dll::System::String::String_Substring_1
                             (pSVar1,(int32_t)prefix,(int)pSVar4 - (int)prefix,(MethodInfo *)0x0);
          mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                    (sb,pSVar3,(MethodInfo *)0x0);
          mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                    (sb,::StringLiteral__,(MethodInfo *)0x0);
          mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                    (sb,newlineChar,(MethodInfo *)0x0);
          index = index_00 + 1;
          pSVar3 = (String *)0xffffffff;
          message = (String *)0x1;
          prefix = pSVar4;
        }
        else {
          pSVar3 = (String *)(index + 1);
          if (uVar5 != 0x20) {
            pSVar3 = pSVar4;
          }
code_?:
          if ((0x4c < (int)message) &&
             (pSVar4 = pSVar3, index_00 = index, pSVar3 != (String *)0xffffffff))
          goto code_?;
          index = index + 1;
          message = (String *)((int)&message->klass + 1);
        }
      }
      pSVar1 = mscorlib.dll::System::String::String_Substring
                         (pSVar1,(int32_t)prefix,(MethodInfo *)0x0);
      if (pSVar1 != (String *)0x0) {
        if ((pSVar1->fields)._stringLength < 1) {
          return;
        }
        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                  (sb,::StringLiteral__,(MethodInfo *)0x0);
        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                  (sb,pSVar1,(MethodInfo *)0x0);
        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                  (sb,::StringLiteral__,(MethodInfo *)0x0);
        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                  (sb,newlineChar,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* String GetDateTimeRfc822Format() */

String * Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_GetDateTimeRfc822Format
                   (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__DateTime);
    func_?(&StringLiteral_yyyy_MM_dd_HH___mm___sszz00);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__DateTime->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__DateTime);
  }
  DStack_1 = mscorlib.dll::System::DateTime::DateTime_get_Now((MethodInfo *)0x0);
  pSVar2 = mscorlib.dll::System::DateTime::DateTime_ToString_1
                     (&DStack_1,StringLiteral_yyyy_MM_dd_HH___mm___sszz00,(MethodInfo *)0x0);
  return pSVar2;
}


/* Encoding GetEncoding(String) */

Encoding *
Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_GetEncoding(String *charset,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  pEVar4 = mscorlib.dll::System::Text::Encoding::Encoding_GetEncodings((MethodInfo *)0x0);
  uVar5 = 0;
  if (pEVar4 != (EncodingInfo__Array *)0x0) {
    while( true ) {
      if ((int)pEVar4->max_length <= (int)uVar5) {
        *unaff_FS_OFFSET = uStack_3;
        return (Encoding *)0x0;
      }
      if (pEVar4->max_length <= uVar5) break;
      this = pEVar4->vector[uVar5];
      uStack_1 = 0;
      if ((this == (EncodingInfo *)0x0) ||
         (pSVar6 = (this->fields).strEncodingName, pSVar6 == (String *)0x0)) goto code_?;
      pSVar6 = mscorlib.dll::System::String::String_ToLower(pSVar6,(MethodInfo *)0x0);
      if (charset == (String *)0x0) goto code_?;
      b = mscorlib.dll::System::String::String_ToLower(charset,(MethodInfo *)0x0);
      bVar7 = mscorlib.dll::System::String::String_op_Equality(pSVar6,b,(MethodInfo *)0x0);
      if (bVar7 != 0) {
        pEVar8 = mscorlib.dll::System::Text::EncodingInfo::EncodingInfo_GetEncoding
                           (this,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return pEVar8;
      }
      uStack_1 = 0xffffffff;
      uVar5 = uVar5 + 1;
    }
    func_?();
  }
code_?:
  func_?();
  func_?(&stack0xffffffdc);
  pcVar9 = (code *)swi(3);
  pEVar8 = (Encoding *)(*pcVar9)();
  return pEVar8;
}


/* IEnumerator`1[GNU.Gettext.CatalogEntry] GetEnumerator() */

IEnumerator_1_GNU_Gettext_CatalogEntry_ *
Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_GetEnumerator(Catalog *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Collections__Generic__List_1_T___Enumerator<GNU::Gettext::CatalogEntry>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogEntry>__GetEnumerator__
                   );
    cRam_? = '\x01';
  }
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).entriesList;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    pLVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_2,this_00,
                        MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogEntry>__GetEnumerator__
                       );
    pLStack_3 = pLVar1->_list;
    iStack_4 = pLVar1->_index;
    iStack_5 = pLVar1->_version;
    RStack_6 = pLVar1->_current;
    pIVar7 = (IEnumerator_1_GNU_Gettext_CatalogEntry_ *)
             func_?(TypeInfo__System__Collections__Generic__List_1_T___Enumerator<GNU::Gettext::CatalogEntry>
                             ,&pLStack_3);
    return pIVar7;
  }
  func_?();
  pcVar8 = (code *)swi(3);
  pIVar7 = (IEnumerator_1_GNU_Gettext_CatalogEntry_ *)(*pcVar8)();
  return pIVar7;
}


/* String GetHeader(String) */

String * Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_GetHeader
                   (Catalog *this,String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__ContainsKey_System__String_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__get_Item_System__String_
                   );
    func_?(&TypeInfo__System__String);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this->fields).headerEntries;
  if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this_00,(Object *)key,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__ContainsKey_System__String_
                      );
    if (bVar1 == 0) {
      return TypeInfo__System__String->static_fields->Empty;
    }
    this_01 = (this->fields).headerEntries;
    if (this_01 != (Dictionary_2_System_String_System_String_ *)0x0) {
      pSVar2 = (String *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         ((Dictionary_2_System_Object_System_Object_ *)this_01,(Object *)key,
                          MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__get_Item_System__String_
                         );
      return pSVar2;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pSVar2 = (String *)(*pcVar3)();
  return pSVar2;
}


/* String GetHeaderString(String) */

String * Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_GetHeaderString
                   (Catalog *this,String *lineDelimeter,MethodInfo *method)

{
  pSVar1 = (String *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__get_Item_System__String_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__get_Keys__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::String,_System::String>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::String,_System::String>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::String,_System::String>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<System::String,_System::String>__GetEnumerator__
                   );
    func_?(&TypeInfo__System__Text__StringBuilder);
    func_?(&TypeInfo__System__String);
    func_?(&StringLiteral___0____1__n__2_);
    cRam_? = '\x01';
  }
  Catalog_UpdateHeaderDict(this,(MethodInfo *)0x0);
  this_02 = (MethodInfo *)func_?(TypeInfo__System__Text__StringBuilder);
  if (this_02 != (MethodInfo *)0x0) {
    pMVar2 = this_02;
    mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor
              ((StringBuilder *)this_02,(MethodInfo *)0x0);
    this_00 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *
              )(this->fields).headerEntries;
    if ((this_00 !=
         (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)0x0)
       && (this_03 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
                     RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                     Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Keys
                               (this_00,
                                MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__get_Keys__
                               ),
          this_03 !=
          (Dictionary_2_TKey_TValue_KeyCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
           *)0x0)) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+ValueCollection[System::
      Text::RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__GetEnumerator
                ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                  *)&stack0xffffffcc,
                 (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                  *)this_03,
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<System::String,_System::String>__GetEnumerator__
                );
      while( true ) {
        bVar3 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::
                Object,System::Object]::
                Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                          ((Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Object_System_Object_
                            *)&stack0xffffffbc,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::String,_System::String>__MoveNext__
                          );
        if (bVar3 == 0) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    ((Object *)&stack0xffffffbc,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::String,_System::String>__Dispose__
                     ,in_stack_4);
          pSVar5 = (String *)(**(code **)(this_02->methodPointer + 0xd4))();
          *unaff_FS_OFFSET = pSVar1;
          return pSVar5;
        }
        pSVar1 = TypeInfo__System__String->static_fields->Empty;
        this_01 = (this->fields).headerEntries;
        if (this_01 == (Dictionary_2_System_String_System_String_ *)0x0) break;
        pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           ((Dictionary_2_System_Object_System_Object_ *)this_01,
                            (Object *)&UNK_?,
                            MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__get_Item_System__String_
                           );
        this_02 = pMVar2;
        if (pOVar6 != (Object *)0x0) {
          in_stack_4 = (MethodInfo *)(this->fields).headerEntries;
          if (in_stack_4 == (MethodInfo *)0x0) break;
          this_02 = 
          MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__get_Item_System__String_
          ;
          pSVar1 = (String *)
                   mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                   Object]::Dictionary_2_System_Object_System_Object__get_Item
                             ((Dictionary_2_System_Object_System_Object_ *)in_stack_4,
                              (Object *)&UNK_?,
                              MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__get_Item_System__String_
                             );
          pSVar1 = StringEscaping::StringEscaping_ToGettextFormat(pSVar1,(MethodInfo *)0x0);
        }
        pMVar2 = this_02;
        mscorlib.dll::System::Text::StringBuilder::StringBuilder_AppendFormat_2
                  ((StringBuilder *)this_02,StringLiteral___0____1__n__2_,(Object *)&UNK_?,
                   (Object *)pSVar1,(Object *)lineDelimeter,(MethodInfo *)0x0);
      }
    }
  }
  func_?();
  func_?();
  pcVar7 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar7)();
  return pSVar1;
}


/* String GetHeaderString() */

String * Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_GetHeaderString_1
                   (Catalog *this,MethodInfo *method)

{
  pSVar1 = mscorlib.dll::System::Environment::Environment_get_NewLine((MethodInfo *)0x0);
  pSVar1 = Catalog_GetHeaderString(this,pSVar1,(MethodInfo *)0x0);
  return pSVar1;
}


/* Void GetMergeSummary(Catalog, String[] ByRef, String[] ByRef) */

void Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_GetMergeSummary
               (Catalog *this,Catalog *refCat,String__Array **newEntries,
               String__Array **obsoleteEntries,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<System::String>__ToArray__);
    func_?(&MethodInfo__System__Collections__Generic__List<System::String>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<System::String>);
    cRam_? = '\x01';
  }
  pLVar1 = (LowLevelList_1_System_Object_ *)
           func_?(TypeInfo__System__Collections__Generic__List<System::String>);
  if (pLVar1 != (LowLevelList_1_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              (pLVar1,MethodInfo__System__Collections__Generic__List<System::String>__List__);
    pLVar1 = (LowLevelList_1_System_Object_ *)
             func_?(TypeInfo__System__Collections__Generic__List<System::String>);
    if (pLVar1 != (LowLevelList_1_System_Object_ *)0x0) {
      this_02 = MethodInfo__System__Collections__Generic__List<System::String>__List__;
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
      LowLevelList_1_System_Object___ctor
                (pLVar1,MethodInfo__System__Collections__Generic__List<System::String>__List__);
      iVar2 = 0;
      while( true ) {
        if (cRam_? == '\0') {
          unaff_EDI = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)&UNK_?;
          func_?(&
                          MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogEntry>__get_Count__
                         );
          cRam_? = '\x01';
        }
        pLVar3 = (this->fields).entriesList;
        if (pLVar3 == (List_1_GNU_Gettext_CatalogEntry_ *)0x0) goto code_?;
        if ((pLVar3->fields)._size <= iVar2) break;
        if (cRam_? == '\0') {
          func_?(&
                          MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogEntry>__get_Count__
                         );
          func_?(&
                          MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogEntry>__get_Item_int_
                         );
          cRam_? = '\x01';
        }
        if (iVar2 < 0) {
code_?:
          this_00.First = 0;
          this_00.Last = 0;
        }
        else {
          pLVar4 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                   (this->fields).entriesList;
          if (pLVar4 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
          goto code_?;
          if ((pLVar4->fields)._size <= iVar2) goto code_?;
          this_00 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                              (pLVar4,iVar2,
                               MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogEntry>__get_Item_int_
                              );
        }
        if (refCat == (Catalog *)0x0) goto code_?;
        if (cRam_? == '\0') {
          func_?(&
                          TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::CatalogEntry>
                         );
          cRam_? = '\x01';
        }
        this_02 = (MethodInfo *)(refCat->fields).entriesDict;
        if (this_00 == (RegexCharClass_SingleRange)0x0) goto code_?;
        unaff_EDI = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                    CatalogEntry::CatalogEntry_get_Key((CatalogEntry *)this_00,(MethodInfo *)0x0);
        if (this_02 == (MethodInfo *)0x0) goto code_?;
        cVar5 = func_?(4,
                                TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::CatalogEntry>
                               );
        if (cVar5 == '\0') {
code_?:
          pCVar6 = Catalog_get_Item(this,iVar2,(MethodInfo *)0x0);
          if (pCVar6 == (CatalogEntry *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__Add
                    ((List_1_System_Object_ *)this_02,(Object *)(pCVar6->fields).str,
                     MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                    );
        }
        else {
          pIVar7 = (refCat->fields).entriesDict;
          pSVar8 = CatalogEntry::CatalogEntry_get_Key((CatalogEntry *)this_00,(MethodInfo *)0x0);
          if (pIVar7 == (IDictionary_2_System_String_GNU_Gettext_CatalogEntry_ *)0x0)
          goto code_?;
          iVar9 = func_?(0,
                                  TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::CatalogEntry>
                                  ,pIVar7,pSVar8);
          if (iVar9 == 0) goto code_?;
        }
        iVar2 = iVar2 + 1;
      }
      iVar2 = 0;
      if (refCat != (Catalog *)0x0) goto code_?;
    }
  }
  goto code_?;
code_?:
  if (cRam_? == '\0') {
    unaff_EDI = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)&UNK_?;
    func_?(&
                    MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogEntry>__get_Count__
                   );
    cRam_? = '\x01';
  }
  pLVar3 = (refCat->fields).entriesList;
  if (pLVar3 != (List_1_GNU_Gettext_CatalogEntry_ *)0x0) {
    if ((pLVar3->fields)._size <= iVar2) {
      pUVar10 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                UnitySynchronizationContext+WorkRequest]::
                List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__ToArray
                          (unaff_EDI,
                           MethodInfo__System__Collections__Generic__List<System::String>__ToArray__
                          );
      *newEntries = (String__Array *)pUVar10;
      func_?(newEntries,pUVar10);
      pUVar10 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                UnitySynchronizationContext+WorkRequest]::
                List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__ToArray
                          ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this_02,
                           MethodInfo__System__Collections__Generic__List<System::String>__ToArray__
                          );
      *obsoleteEntries = (String__Array *)pUVar10;
      func_?(obsoleteEntries,pUVar10);
      return;
    }
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogEntry>__get_Count__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogEntry>__get_Item_int_
                     );
      cRam_? = '\x01';
    }
    if (iVar2 < 0) {
code_?:
      this_01.First = 0;
      this_01.Last = 0;
    }
    else {
      pLVar4 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (refCat->fields).entriesList;
      if (pLVar4 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
      goto code_?;
      if ((pLVar4->fields)._size <= iVar2) goto code_?;
      this_01 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (pLVar4,iVar2,
                           MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogEntry>__get_Item_int_
                          );
    }
    if (cRam_? == '\0') {
      func_?(&
                      TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::CatalogEntry>
                     );
      cRam_? = '\x01';
    }
    this_02 = (MethodInfo *)(this->fields).entriesDict;
    if (this_01 == (RegexCharClass_SingleRange)0x0) goto code_?;
    unaff_EDI = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                CatalogEntry::CatalogEntry_get_Key((CatalogEntry *)this_01,(MethodInfo *)0x0);
    if (this_02 == (MethodInfo *)0x0) goto code_?;
    cVar5 = func_?(4,
                            TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::CatalogEntry>
                           );
    if (cVar5 == '\0') {
code_?:
      pCVar6 = Catalog_get_Item(refCat,iVar2,(MethodInfo *)0x0);
      if (pCVar6 == (CatalogEntry *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                ((List_1_System_Object_ *)unaff_EDI,(Object *)(pCVar6->fields).str,
                 MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                );
      iVar2 = iVar2 + 1;
    }
    else {
      pIVar7 = (this->fields).entriesDict;
      pSVar8 = CatalogEntry::CatalogEntry_get_Key((CatalogEntry *)this_01,(MethodInfo *)0x0);
      if (pIVar7 == (IDictionary_2_System_String_GNU_Gettext_CatalogEntry_ *)0x0)
      goto code_?;
      iVar9 = func_?(0,
                              TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::CatalogEntry>
                              ,pIVar7,pSVar8);
      if (iVar9 == 0) goto code_?;
      iVar2 = iVar2 + 1;
    }
    goto code_?;
  }
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* String GetPluralFormsHeader() */

String * Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_GetPluralFormsHeader
                   (Catalog *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_Plural_Forms);
    func_?(&StringLiteral_nplurals_2__plural__n____1___n);
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_Plural_Forms;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__ContainsKey_System__String_
                   );
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this->fields).headerEntries;
  if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this_00,(Object *)pSVar1,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__ContainsKey_System__String_
                      );
    if (bVar2 == 0) {
      return StringLiteral_nplurals_2__plural__n____1___n;
    }
    pSVar1 = Catalog_GetHeader(this,StringLiteral_Plural_Forms,(MethodInfo *)0x0);
    return pSVar1;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar3)();
  return pSVar1;
}


/* Void GetStatistics(Int32 ByRef, Int32 ByRef, Int32 ByRef, Int32 ByRef, Int32 ByRef) */

void Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_GetStatistics
               (Catalog *this,int32_t *all,int32_t *fuzzy,int32_t *missing,int32_t *badtokens,
               int32_t *untranslated,MethodInfo *method)

{
  *untranslated = 0;
  *badtokens = 0;
  *missing = 0;
  *fuzzy = 0;
  *all = 0;
  piVar1 = (int32_t *)0x0;
  while( true ) {
    index = piVar1;
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogEntry>__get_Count__
                     );
      cRam_? = '\x01';
    }
    pLVar2 = (this->fields).entriesList;
    if (pLVar2 == (List_1_GNU_Gettext_CatalogEntry_ *)0x0) break;
    if ((pLVar2->fields)._size <= (int)index) {
      return;
    }
    *all = *all + 1;
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogEntry>__get_Count__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogEntry>__get_Item_int_
                     );
      cRam_? = '\x01';
    }
    if ((((int)index < 0) ||
        (this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                   (this->fields).entriesList,
        this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)) ||
       ((this_00->fields)._size <= (int)index)) break;
    RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                      (this_00,(int32_t)index,
                       MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogEntry>__get_Item_int_
                      );
    if (RVar3 == (RegexCharClass_SingleRange)0x0) break;
    if (*(char *)((int)RVar3 + 0x20) != '\0') {
      *fuzzy = *fuzzy + 1;
    }
    pCVar4 = Catalog_get_Item(this,(int32_t)index,(MethodInfo *)0x0);
    if (pCVar4 == (CatalogEntry *)0x0) break;
    pSVar5 = CatalogEntry::CatalogEntry_get_References(pCVar4,(MethodInfo *)0x0);
    if (pSVar5 == (String__Array *)0x0) break;
    if (pSVar5->max_length == 0) {
      *missing = *missing + 1;
    }
    pCVar4 = Catalog_get_Item(this,(int32_t)index,(MethodInfo *)0x0);
    if (pCVar4 == (CatalogEntry *)0x0) break;
    if ((pCVar4->fields).validity == 1) {
      *badtokens = *badtokens + 1;
    }
    missing = (int32_t *)this;
    fuzzy = (int32_t *)&UNK_?;
    pCVar4 = Catalog_get_Item(this,(int32_t)index,(MethodInfo *)0x0);
    if (pCVar4 == (CatalogEntry *)0x0) break;
    bVar6 = CatalogEntry::CatalogEntry_get_IsTranslated(pCVar4,(MethodInfo *)0x0);
    if (bVar6 == 0) {
      *untranslated = *untranslated + 1;
    }
    piVar1 = (int32_t *)((int)index + 1);
    all = index;
    badtokens = index;
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Boolean HasHeader(String) */

bool Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_HasHeader
               (Catalog *this,String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this->fields).headerEntries;
  if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this_00,(Object *)key,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__ContainsKey_System__String_
                      );
    return bVar1;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  bVar1 = (*pcVar3)();
  return bVar1;
}


/* Void Load(String, String) */

void Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_Load
               (Catalog *this,String *text,String *fileName,MethodInfo *method)

{
  method_00 = (MethodInfo *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GNU__Gettext__CharsetInfoFinder);
    func_?(&TypeInfo__GNU__Gettext__LoadParser);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Collections__Generic__ICollection<System::Collections::Generic::KeyValuePair<System::String,_GNU::Gettext::CatalogEntry>_>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogDeletedEntry>__Clear__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogEntry>__Clear__
                   );
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).entriesDict;
  if (pIVar1 != (IDictionary_2_System_String_GNU_Gettext_CatalogEntry_ *)0x0) {
    func_?(3,
                    TypeInfo__System__Collections__Generic__ICollection<System::Collections::Generic::KeyValuePair<System::String,_GNU::Gettext::CatalogEntry>_>
                    ,pIVar1);
    pLVar2 = (this->fields).entriesList;
    if (pLVar2 != (List_1_GNU_Gettext_CatalogEntry_ *)0x0) {
      iVar3 = (pLVar2->fields)._size;
      piVar4 = &(pLVar2->fields)._version;
      *piVar4 = *piVar4 + 1;
      (pLVar2->fields)._size = 0;
      if (0 < iVar3) {
        mscorlib.dll::System::Array::Array_Clear
                  ((Array *)(pLVar2->fields)._items,0,iVar3,(MethodInfo *)0x0);
      }
      pLVar5 = (this->fields).deletedEntriesList;
      if (pLVar5 != (List_1_GNU_Gettext_CatalogDeletedEntry_ *)0x0) {
        iVar3 = (pLVar5->fields)._size;
        piVar4 = &(pLVar5->fields)._version;
        *piVar4 = *piVar4 + 1;
        (pLVar5->fields)._size = 0;
        if (0 < iVar3) {
          mscorlib.dll::System::Array::Array_Clear
                    ((Array *)(pLVar5->fields)._items,0,iVar3,(MethodInfo *)0x0);
        }
        (this->fields).fileName = fileName;
        (this->fields).isOk = 0;
        func_?(&(this->fields).fileName,fileName);
        this_00 = (CharsetInfoFinder *)func_?(TypeInfo__GNU__Gettext__CharsetInfoFinder);
        unaff_EDI = (String *)0x0;
        if (this_00 != (CharsetInfoFinder *)0x0) {
          CharsetInfoFinder::CharsetInfoFinder__ctor(this_00,text,(MethodInfo *)0x0);
          pSVar6 = (this_00->fields).charset;
          (this->fields).Charset = pSVar6;
          func_?(&(this->fields).Charset,pSVar6);
          CatalogParser::CatalogParser_Parse((CatalogParser *)this_00,text,(MethodInfo *)0x0);
          (this->fields).Charset = (this_00->fields).charset;
          func_?();
          (this->fields).Charset = (this_00->fields).charset;
          func_?();
          encoding = Catalog_GetEncoding((this->fields).Charset,(MethodInfo *)0x0);
          this_01 = (LoadParser *)func_?();
          unaff_EDI = fileName;
          if (this_01 != (LoadParser *)0x0) {
            LoadParser::LoadParser__ctor(this_01,this,text,encoding,(MethodInfo *)0x0);
            bVar7 = CatalogParser::CatalogParser_Parse
                              ((CatalogParser *)this_01,text,(MethodInfo *)0x0);
            method_00 = (MethodInfo *)0x0;
            if (bVar7 != 0) {
              (this->fields).isOk = 1;
              Catalog_set_IsDirty(this,0,(MethodInfo *)0x0);
              *unaff_FS_OFFSET = method_00;
              return;
            }
            goto code_?;
          }
        }
      }
    }
  }
  func_?();
  fileName = unaff_EDI;
code_?:
  pSVar6 = (String *)func_?();
  pSVar6 = mscorlib.dll::System::String::String_Format(pSVar6,(Object *)fileName,method_00);
  func_?();
  this_02 = (Exception *)func_?();
  func_?();
  mscorlib.dll::System::Exception::Exception__ctor_1(this_02,pSVar6,(MethodInfo *)0x0);
  func_?();
  func_?();
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnDirtyChanged(EventArgs) */

void Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_OnDirtyChanged
               (Catalog *this,EventArgs *e,MethodInfo *method)

{
  if ((this->fields).DirtyChanged != (EventHandler *)0x0) {
    pEVar1 = (this->fields).DirtyChanged;
    (*(pEVar1->fields)._._.invoke_impl)
              ((pEVar1->fields)._._.method_code,this,e,(pEVar1->fields)._._.method);
  }
  return;
}


/* Void ParseHeaderDict() */

void Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_ParseHeaderDict
               (Catalog *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Char);
    func_?(&TypeInfo__System__String);
    func_?(&StringLiteral_PO_Revision_Date);
    func_?(&StringLiteral_Project_Id_Version);
    func_?(&StringLiteral___charset_);
    func_?(&StringLiteral_Content_Type);
    func_?(&StringLiteral_Language_Team);
    func_?(&StringLiteral_Last_Translator);
    func_?(&StringLiteral_POT_Creation_Date);
    func_?(&StringLiteral_iso_8859_1);
    cRam_? = '\x01';
  }
  pSVar1 = Catalog_GetHeader(this,StringLiteral_Project_Id_Version,(MethodInfo *)0x0);
  (this->fields).Project = pSVar1;
  func_?(&(this->fields).Project,pSVar1);
  pSVar1 = Catalog_GetHeader(this,StringLiteral_POT_Creation_Date,(MethodInfo *)0x0);
  (this->fields).CreationDate = pSVar1;
  func_?(&(this->fields).CreationDate,pSVar1);
  pSVar1 = Catalog_GetHeader(this,StringLiteral_PO_Revision_Date,(MethodInfo *)0x0);
  (this->fields).RevisionDate = pSVar1;
  func_?(&(this->fields).RevisionDate,pSVar1);
  pSVar1 = Catalog_GetHeader(this,StringLiteral_Last_Translator,(MethodInfo *)0x0);
  bVar2 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar1,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    pCVar3 = (Char__Array *)func_?();
    if (pCVar3 != (Char__Array *)0x0) {
      if ((pCVar3->max_length == 0) || (pCVar3->vector[0] = 0x3c, pCVar3->max_length < 2))
      goto code_?;
      pCVar3->vector[1] = 0x3e;
      if (pSVar1 != (String *)0x0) {
        pSVar4 = mscorlib.dll::System::String::String_Split_1(pSVar1,pCVar3,(MethodInfo *)0x0);
        if (pSVar4 != (String__Array *)0x0) {
          if ((int)pSVar4->max_length < 2) {
            (this->fields).Translator = pSVar1;
            func_?();
            pSVar1 = TypeInfo__System__String->static_fields->Empty;
code_?:
            (this->fields).TranslatorEmail = pSVar1;
            func_?();
            goto code_?;
          }
          if (pSVar4->max_length == 0) goto code_?;
          if (pSVar4->vector[0] != (String *)0x0) {
            pSVar1 = mscorlib.dll::System::String::String_Trim(pSVar4->vector[0],(MethodInfo *)0x0);
            (this->fields).Translator = pSVar1;
            func_?();
            if (pSVar4->max_length < 2) goto code_?;
            if (pSVar4->vector[1] != (String *)0x0) {
              pSVar1 = mscorlib.dll::System::String::String_Trim
                                 (pSVar4->vector[1],(MethodInfo *)0x0);
              goto code_?;
            }
          }
        }
      }
    }
  }
  else {
code_?:
    pSVar1 = Catalog_GetHeader(this,StringLiteral_Language_Team,(MethodInfo *)0x0);
    bVar2 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar1,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      pCVar3 = (Char__Array *)func_?();
      if (pCVar3 != (Char__Array *)0x0) {
        if ((pCVar3->max_length == 0) || (pCVar3->vector[0] = 0x3c, pCVar3->max_length < 2))
        goto code_?;
        pCVar3->vector[1] = 0x3e;
        if (pSVar1 != (String *)0x0) {
          pSVar4 = mscorlib.dll::System::String::String_Split_1(pSVar1,pCVar3,(MethodInfo *)0x0);
          if (pSVar4 != (String__Array *)0x0) {
            if ((int)pSVar4->max_length < 2) {
              (this->fields).Team = pSVar1;
              func_?();
              pSVar1 = TypeInfo__System__String->static_fields->Empty;
code_?:
              (this->fields).TeamEmail = pSVar1;
              func_?();
              goto code_?;
            }
            if (pSVar4->max_length == 0) goto code_?;
            if (pSVar4->vector[0] != (String *)0x0) {
              pSVar1 = mscorlib.dll::System::String::String_Trim
                                 (pSVar4->vector[0],(MethodInfo *)0x0);
              (this->fields).Team = pSVar1;
              func_?();
              if (pSVar4->max_length < 2) goto code_?;
              if (pSVar4->vector[1] != (String *)0x0) {
                pSVar1 = mscorlib.dll::System::String::String_Trim
                                   (pSVar4->vector[1],(MethodInfo *)0x0);
                goto code_?;
              }
            }
          }
        }
      }
    }
    else {
code_?:
      pSVar1 = Catalog_GetHeader(this,StringLiteral_Content_Type,(MethodInfo *)0x0);
      if (pSVar1 != (String *)0x0) {
        iVar5 = mscorlib.dll::System::String::String_IndexOf_3
                          (pSVar1,StringLiteral___charset_,(MethodInfo *)0x0);
        if (iVar5 == -1) {
          (this->fields).Charset = StringLiteral_iso_8859_1;
          func_?();
          return;
        }
        if (StringLiteral___charset_ != (String *)0x0) {
          pSVar1 = mscorlib.dll::System::String::String_Substring
                             (pSVar1,(StringLiteral___charset_->fields)._stringLength + iVar5,
                              (MethodInfo *)0x0);
          if (pSVar1 != (String *)0x0) {
            pSVar1 = mscorlib.dll::System::String::String_Trim(pSVar1,(MethodInfo *)0x0);
            (this->fields).Charset = pSVar1;
            func_?();
            return;
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void ParseHeaderString(String) */

void Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_ParseHeaderString
               (Catalog *this,String *headers,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Clear__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__set_Item_System__String__System__String_
                   );
    func_?(&TypeInfo__System__String);
    cRam_? = '\x01';
  }
  pSVar1 = StringEscaping::StringEscaping_FromGettextFormat(headers,(MethodInfo *)0x0);
  if (pSVar1 != (String *)0x0) {
    pSVar2 = mscorlib.dll::System::String::String_Split
                       (pSVar1,10,StringSplitOptions__Enum_None,(MethodInfo *)0x0);
    this_00 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *
              )(this->fields).headerEntries;
    unaff_ESI = this;
    if (this_00 !=
        (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)0x0)
    {
      pSVar3 = (String__Array *)&UNK_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Clear
                (this_00,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Clear__
                );
      uVar4 = 0;
      unaff_ESI = this;
      if (pSVar2 != (String__Array *)0x0) {
        pSVar5 = (String__Fields *)pSVar2->vector;
        unaff_ESI = this;
        while( true ) {
          while( true ) {
            if ((int)pSVar2->max_length <= (int)uVar4) {
              Catalog_ParseHeaderDict(unaff_ESI,(MethodInfo *)0x0);
              return;
            }
            if (pSVar2->max_length <= uVar4) goto code_?;
            a = (Catalog *)pSVar5->_stringLength;
            bVar6 = mscorlib.dll::System::String::String_op_Inequality
                              ((String *)a,TypeInfo__System__String->static_fields->Empty,
                               (MethodInfo *)0x0);
            if (bVar6 != 0) break;
            unaff_ESI = (Catalog *)0x0;
            uVar4 = uVar4 + 1;
            pSVar5 = (String__Fields *)&pSVar5->_firstChar;
          }
          unaff_ESI = a;
          if (a == (Catalog *)0x0) break;
          length = mscorlib.dll::System::String::String_IndexOf((String *)a,0x3a,(MethodInfo *)0x0);
          in_stack_7 = (MethodInfo *)0x0;
          if (length == -1) goto code_?;
          pSVar1 = mscorlib.dll::System::String::String_Substring_1
                             ((String *)a,0,length,(MethodInfo *)0x0);
          if (pSVar1 == (String *)0x0) break;
          pSVar1 = mscorlib.dll::System::String::String_Trim(pSVar1,(MethodInfo *)0x0);
          pSVar8 = mscorlib.dll::System::String::String_Substring
                             ((String *)a,length + 1,(MethodInfo *)0x0);
          if (pSVar8 == (String *)0x0) break;
          pSVar8 = mscorlib.dll::System::String::String_Trim(pSVar8,(MethodInfo *)0x0);
          unaff_ESI = (Catalog *)&UNK_?;
          if (_UNK_? == (Dictionary_2_System_Object_System_Object_ *)0x0) break;
          pSVar2 = pSVar3;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__set_Item
                    (_UNK_?,(Object *)pSVar1,(Object *)pSVar8,
                     MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__set_Item_System__String__System__String_
                    );
          uVar4 = uVar4 + 1;
          pSVar5 = (String__Fields *)&a->monitor;
          pSVar3 = pSVar2;
        }
      }
    }
  }
  func_?();
code_?:
  pSVar1 = (String *)func_?();
  pSVar1 = mscorlib.dll::System::String::String_Format(pSVar1,(Object *)unaff_ESI,in_stack_7)
  ;
  func_?();
  this_01 = (Exception *)func_?();
  func_?();
  mscorlib.dll::System::Exception::Exception__ctor_1(this_01,pSVar1,(MethodInfo *)0x0);
  func_?();
  func_?();
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void RemoveDeletedItems() */

void Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_RemoveDeletedItems
               (Catalog *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).deletedEntriesList;
  if (pLVar1 != (List_1_GNU_Gettext_CatalogDeletedEntry_ *)0x0) {
    length = (pLVar1->fields)._size;
    piVar2 = &(pLVar1->fields)._version;
    *piVar2 = *piVar2 + 1;
    (pLVar1->fields)._size = 0;
    if (0 < length) {
      mscorlib.dll::System::Array::Array_Clear
                ((Array *)(pLVar1->fields)._items,0,length,(MethodInfo *)0x0);
    }
    return;
  }
  uVar3 = func_?(&stack0xfffffff0);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void RemoveItem(CatalogEntry) */

void Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_RemoveItem
               (Catalog *this,CatalogEntry *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::CatalogEntry>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogEntry>__Contains_GNU__Gettext__CatalogEntry_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogEntry>__Remove_GNU__Gettext__CatalogEntry_
                   );
    cRam_? = '\x01';
  }
  pCVar1 = Catalog_FindItem_1(this,data,(MethodInfo *)0x0);
  if (pCVar1 != (CatalogEntry *)0x0) {
    pIVar2 = (this->fields).entriesDict;
    if (data == (CatalogEntry *)0x0) goto code_?;
    CatalogEntry::CatalogEntry_get_Key(data,(MethodInfo *)0x0);
    if (pIVar2 == (IDictionary_2_System_String_GNU_Gettext_CatalogEntry_ *)0x0)
    goto code_?;
    func_?(6,
                    TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::CatalogEntry>
                    ,pIVar2);
  }
  pLVar3 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
           (this->fields).entriesList;
  if (pLVar3 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    bVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__Contains
                      (pLVar3,(RegexCharClass_SingleRange)data,
                       MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogEntry>__Contains_GNU__Gettext__CatalogEntry_
                      );
    if (bVar4 != 0) {
      pLVar3 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (this->fields).entriesList;
      if (pLVar3 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
      goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
      RegexCharClass+SingleRange]::
      List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__Remove
                (pLVar3,(RegexCharClass_SingleRange)data,
                 MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogEntry>__Remove_GNU__Gettext__CatalogEntry_
                );
    }
    return;
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SaveMultiLines(StringBuilder, String, String) */

void Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_SaveMultiLines
               (StringBuilder *sb,String *text,String *newLine,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__String);
    func_?(&StringLiteral_u000A);
    func_?(&StringLiteral__0__1_);
    func_?(&StringLiteral_u000Du000A);
    func_?(&StringLiteral_u000Au000D);
    func_?(&StringLiteral_u000D);
    cRam_? = '\x01';
  }
  if (text == (String *)0x0) {
    return;
  }
  pSVar1 = (String__Array *)func_?(TypeInfo__System__String,5);
  if (pSVar1 == (String__Array *)0x0) goto code_?;
  if ((StringLiteral_u000Au000D == (String *)0x0) ||
     (iVar2 = func_?(StringLiteral_u000Au000D,(pSVar1->klass->_0).element_class),
     iVar2 != 0)) {
    pSVar3 = StringLiteral_u000Au000D;
    if (pSVar1->max_length == 0) goto code_?;
    pSVar1->vector[0] = StringLiteral_u000Au000D;
    func_?(pSVar1->vector,pSVar3);
    if ((StringLiteral_u000Du000A != (String *)0x0) &&
       (iVar2 = func_?(StringLiteral_u000Du000A,(pSVar1->klass->_0).element_class),
       iVar2 == 0)) goto code_?;
    pSVar3 = StringLiteral_u000Du000A;
    if (pSVar1->max_length < 2) goto code_?;
    pSVar1->vector[1] = StringLiteral_u000Du000A;
    func_?(pSVar1->vector + 1,pSVar3);
    if ((StringLiteral_u000D != (String *)0x0) &&
       (iVar2 = func_?(StringLiteral_u000D,(pSVar1->klass->_0).element_class), iVar2 == 0))
    goto code_?;
    pSVar3 = StringLiteral_u000D;
    if (pSVar1->max_length < 3) goto code_?;
    pSVar1->vector[2] = StringLiteral_u000D;
    func_?(pSVar1->vector + 2,pSVar3);
    if ((StringLiteral_u000A != (String *)0x0) &&
       (iVar2 = func_?(StringLiteral_u000A,(pSVar1->klass->_0).element_class), iVar2 == 0))
    goto code_?;
    pSVar3 = StringLiteral_u000A;
    if (3 < pSVar1->max_length) {
      pSVar1->vector[3] = StringLiteral_u000A;
      func_?(pSVar1->vector + 3,pSVar3);
      if ((StringLiteral_u000D != (String *)0x0) &&
         (iVar2 = func_?(StringLiteral_u000D,(pSVar1->klass->_0).element_class), iVar2 == 0
         )) goto code_?;
      pSVar3 = StringLiteral_u000D;
      if (4 < pSVar1->max_length) {
        pSVar1->vector[4] = StringLiteral_u000D;
        func_?(pSVar1->vector + 4,pSVar3);
        pSVar1 = mscorlib.dll::System::String::String_Split_4
                           (text,pSVar1,StringSplitOptions__Enum_None,(MethodInfo *)0x0);
        uVar4 = 0;
        if (pSVar1 == (String__Array *)0x0) goto code_?;
        ppSVar5 = pSVar1->vector;
        while( true ) {
          if ((int)pSVar1->max_length <= (int)uVar4) {
            return;
          }
          if (pSVar1->max_length <= uVar4) break;
          if (sb == (StringBuilder *)0x0) goto code_?;
          mscorlib.dll::System::Text::StringBuilder::StringBuilder_AppendFormat_1
                    (sb,StringLiteral__0__1_,(Object *)*ppSVar5,(Object *)newLine,(MethodInfo *)0x0)
          ;
          uVar4 = uVar4 + 1;
          ppSVar5 = ppSVar5 + 1;
        }
      }
    }
  }
  else {
    uVar6 = func_?(0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0);
    func_?(uVar6);
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void SetHeader(String, String) */

void Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_SetHeader
               (Catalog *this,String *key,String *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).headerEntries;
  if (this_00 != (Dictionary_2_System_String_System_String_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__set_Item
              ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)key,(Object *)value,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__set_Item_System__String__System__String_
              );
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetHeaderNotEmpty(String, String) */

void Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_SetHeaderNotEmpty
               (Catalog *this,String *key,String *value,MethodInfo *method)

{
  bVar1 = mscorlib.dll::System::String::String_IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__set_Item_System__String__System__String_
                     );
      cRam_? = '\x01';
    }
    pDVar2 = (this->fields).headerEntries;
    if (pDVar2 != (Dictionary_2_System_String_System_String_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__set_Item
                ((Dictionary_2_System_Object_System_Object_ *)pDVar2,(Object *)key,(Object *)value,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__set_Item_System__String__System__String_
                );
      return;
    }
  }
  else {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Remove_System__String_
                     );
      cRam_? = '\x01';
    }
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__ContainsKey_System__String_
                     );
      cRam_? = '\x01';
    }
    this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this->fields).headerEntries
    ;
    if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
      bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              Object,GUILoginHandler+PlanetData]::
              Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                        (this_00,(Object *)key,
                         MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__ContainsKey_System__String_
                        );
      if (bVar1 == 0) {
        return;
      }
      pDVar2 = (this->fields).headerEntries;
      if (pDVar2 != (Dictionary_2_System_String_System_String_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Remove
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar2,
                   (Object *)
                   MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Remove_System__String_
                   ,
                   MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Remove_System__String_
                  );
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* IEnumerator System.Collections.IEnumerable.GetEnumerator() */

IEnumerator *
Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_System_Collections_IEnumerable_GetEnumerator
          (Catalog *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Collections__Generic__List_1_T___Enumerator<GNU::Gettext::CatalogEntry>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogEntry>__GetEnumerator__
                   );
    cRam_? = '\x01';
  }
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).entriesList;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    pLVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_2,this_00,
                        MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogEntry>__GetEnumerator__
                       );
    pLStack_3 = pLVar1->_list;
    iStack_4 = pLVar1->_index;
    iStack_5 = pLVar1->_version;
    RStack_6 = pLVar1->_current;
    pIVar7 = (IEnumerator *)
             func_?(TypeInfo__System__Collections__Generic__List_1_T___Enumerator<GNU::Gettext::CatalogEntry>
                             ,&pLStack_3);
    return pIVar7;
  }
  func_?();
  pcVar8 = (code *)swi(3);
  pIVar7 = (IEnumerator *)(*pcVar8)();
  return pIVar7;
}


/* Boolean Translate(String, String, String) */

bool Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_Translate
               (Catalog *this,String *msgid,String *context,String *translation,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::CatalogEntry>
                   );
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).entriesDict;
  CatalogEntry::CatalogEntry_MakeKey(msgid,context,(MethodInfo *)0x0);
  if (pIVar1 != (IDictionary_2_System_String_GNU_Gettext_CatalogEntry_ *)0x0) {
    cVar2 = func_?(4,
                            TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::CatalogEntry>
                            ,pIVar1);
    if (cVar2 != '\0') {
      pIVar1 = (this->fields).entriesDict;
      CatalogEntry::CatalogEntry_MakeKey(msgid,context,(MethodInfo *)0x0);
      if (pIVar1 == (IDictionary_2_System_String_GNU_Gettext_CatalogEntry_ *)0x0)
      goto code_?;
      this_00 = (CatalogEntry *)
                func_?(0,
                                TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::CatalogEntry>
                                ,pIVar1);
      if (this_00 != (CatalogEntry *)0x0) {
        CatalogEntry::CatalogEntry_SetTranslation(this_00,translation,0,(MethodInfo *)0x0);
        return 1;
      }
    }
    return 0;
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Void UpdateHeaderDict() */

void Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_UpdateHeaderDict
               (Catalog *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_X_Generator);
    func_?(&StringLiteral__1_0);
    func_?(&StringLiteral_PO_Revision_Date);
    func_?(&StringLiteral_Project_Id_Version);
    func_?(&StringLiteral__0____1__);
    func_?(&StringLiteral_Content_Type);
    func_?(&StringLiteral_MonoDevelop_Gettext_addin);
    func_?(&StringLiteral_text_plain__charset_);
    func_?(&StringLiteral__8bit);
    func_?(&StringLiteral_Content_Transfer_Encoding);
    func_?(&StringLiteral_Language_Team);
    func_?(&StringLiteral_Last_Translator);
    func_?(&StringLiteral_POT_Creation_Date);
    func_?(&StringLiteral_MIME_Version);
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_Project_Id_Version;
  pSVar2 = (this->fields).Project;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__set_Item_System__String__System__String_
                   );
    cRam_? = '\x01';
  }
  pDVar3 = (this->fields).headerEntries;
  if (pDVar3 != (Dictionary_2_System_String_System_String_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__set_Item
              ((Dictionary_2_System_Object_System_Object_ *)pDVar3,(Object *)pSVar1,(Object *)pSVar2
               ,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__set_Item_System__String__System__String_
              );
    pSVar1 = StringLiteral_POT_Creation_Date;
    pSVar2 = (this->fields).CreationDate;
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__set_Item_System__String__System__String_
                     );
      cRam_? = '\x01';
    }
    pDVar3 = (this->fields).headerEntries;
    if (pDVar3 != (Dictionary_2_System_String_System_String_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__set_Item
                ((Dictionary_2_System_Object_System_Object_ *)pDVar3,(Object *)pSVar1,
                 (Object *)pSVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__set_Item_System__String__System__String_
                );
      pSVar1 = StringLiteral_PO_Revision_Date;
      pSVar2 = (this->fields).RevisionDate;
      if (cRam_? == '\0') {
        func_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__set_Item_System__String__System__String_
                       );
        cRam_? = '\x01';
      }
      pDVar3 = (this->fields).headerEntries;
      if (pDVar3 != (Dictionary_2_System_String_System_String_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__set_Item
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar3,(Object *)pSVar1,
                   (Object *)pSVar2,
                   MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__set_Item_System__String__System__String_
                  );
        bVar4 = mscorlib.dll::System::String::String_IsNullOrEmpty
                          ((this->fields).TranslatorEmail,(MethodInfo *)0x0);
        pSVar2 = (this->fields).Translator;
        if (bVar4 == 0) {
          pSVar2 = mscorlib.dll::System::String::String_Format_1
                             (StringLiteral__0____1__,(Object *)pSVar2,
                              (Object *)(this->fields).TranslatorEmail,(MethodInfo *)0x0);
        }
        pSVar1 = StringLiteral_Last_Translator;
        if (cRam_? == '\0') {
          func_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__set_Item_System__String__System__String_
                         );
          cRam_? = '\x01';
        }
        pDVar3 = (this->fields).headerEntries;
        if (pDVar3 != (Dictionary_2_System_String_System_String_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__set_Item
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar3,(Object *)pSVar1,
                     (Object *)pSVar2,
                     MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__set_Item_System__String__System__String_
                    );
          bVar4 = mscorlib.dll::System::String::String_IsNullOrEmpty
                            ((this->fields).TeamEmail,(MethodInfo *)0x0);
          pSVar2 = (this->fields).Team;
          if (bVar4 == 0) {
            pSVar2 = mscorlib.dll::System::String::String_Format_1
                               (StringLiteral__0____1__,(Object *)pSVar2,
                                (Object *)(this->fields).TeamEmail,(MethodInfo *)0x0);
          }
          pSVar1 = StringLiteral_Language_Team;
          if (cRam_? == '\0') {
            func_?(&
                            MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__set_Item_System__String__System__String_
                           );
            cRam_? = '\x01';
          }
          pDVar3 = (this->fields).headerEntries;
          if (pDVar3 != (Dictionary_2_System_String_System_String_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__set_Item
                      ((Dictionary_2_System_Object_System_Object_ *)pDVar3,(Object *)pSVar1,
                       (Object *)pSVar2,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__set_Item_System__String__System__String_
                      );
            pSVar1 = StringLiteral_MIME_Version;
            pSVar2 = StringLiteral__1_0;
            if (cRam_? == '\0') {
              func_?(&
                              MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__set_Item_System__String__System__String_
                             );
              cRam_? = '\x01';
            }
            pDVar3 = (this->fields).headerEntries;
            if (pDVar3 != (Dictionary_2_System_String_System_String_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__set_Item
                        ((Dictionary_2_System_Object_System_Object_ *)pDVar3,(Object *)pSVar1,
                         (Object *)pSVar2,
                         MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__set_Item_System__String__System__String_
                        );
              pSVar1 = mscorlib.dll::System::String::String_Concat_3
                                 (StringLiteral_text_plain__charset_,(this->fields).Charset,
                                  (MethodInfo *)0x0);
              pSVar2 = StringLiteral_Content_Type;
              if (cRam_? == '\0') {
                func_?();
                cRam_? = '\x01';
              }
              pDVar3 = (this->fields).headerEntries;
              if (pDVar3 != (Dictionary_2_System_String_System_String_ *)0x0) {
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__set_Item
                          ((Dictionary_2_System_Object_System_Object_ *)pDVar3,(Object *)pSVar2,
                           (Object *)pSVar1,
                           MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__set_Item_System__String__System__String_
                          );
                pSVar1 = StringLiteral__8bit;
                pSVar2 = StringLiteral_Content_Transfer_Encoding;
                if (cRam_? == '\0') {
                  func_?(&
                                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__set_Item_System__String__System__String_
                                 );
                  cRam_? = '\x01';
                }
                pDVar3 = (this->fields).headerEntries;
                if (pDVar3 != (Dictionary_2_System_String_System_String_ *)0x0) {
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__set_Item
                            ((Dictionary_2_System_Object_System_Object_ *)pDVar3,(Object *)pSVar2,
                             (Object *)pSVar1,
                             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__set_Item_System__String__System__String_
                            );
                  pSVar1 = StringLiteral_MonoDevelop_Gettext_addin;
                  pSVar2 = StringLiteral_X_Generator;
                  if (cRam_? == '\0') {
                    func_?(&
                                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__set_Item_System__String__System__String_
                                   );
                    cRam_? = '\x01';
                  }
                  pDVar3 = (this->fields).headerEntries;
                  if (pDVar3 != (Dictionary_2_System_String_System_String_ *)0x0) {
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                    Object]::Dictionary_2_System_Object_System_Object__set_Item
                              ((Dictionary_2_System_Object_System_Object_ *)pDVar3,(Object *)pSVar2,
                               (Object *)pSVar1,
                               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__set_Item_System__String__System__String_
                              );
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Catalog() */

void Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog__ctor(Catalog *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_GNU::Gettext::CatalogEntry>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::String,_GNU::Gettext::CatalogEntry>
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::String>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogDeletedEntry>__List__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogEntry>__List__
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<GNU::Gettext::CatalogEntry>);
    func_?(&TypeInfo__System__Collections__Generic__List<GNU::Gettext::CatalogDeletedEntry>
                   );
    func_?(&TypeInfo__System__String);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_String_System_String_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::String>
                           );
  if (this_00 != (Dictionary_2_System_String_System_String_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Dictionary__
              );
    (this->fields).headerEntries = this_00;
    func_?(&(this->fields).headerEntries,this_00);
    pSVar1 = TypeInfo__System__String->static_fields->Empty;
    (this->fields).Project = pSVar1;
    func_?(&(this->fields).Project,pSVar1);
    pSVar1 = TypeInfo__System__String->static_fields->Empty;
    (this->fields).CreationDate = pSVar1;
    func_?(&(this->fields).CreationDate,pSVar1);
    pSVar1 = TypeInfo__System__String->static_fields->Empty;
    (this->fields).RevisionDate = pSVar1;
    func_?(&(this->fields).RevisionDate,pSVar1);
    pSVar1 = TypeInfo__System__String->static_fields->Empty;
    (this->fields).Translator = pSVar1;
    func_?(&(this->fields).Translator,pSVar1);
    pSVar1 = TypeInfo__System__String->static_fields->Empty;
    (this->fields).TranslatorEmail = pSVar1;
    func_?(&(this->fields).TranslatorEmail,pSVar1);
    pSVar1 = TypeInfo__System__String->static_fields->Empty;
    (this->fields).Team = pSVar1;
    func_?(&(this->fields).Team,pSVar1);
    pSVar1 = TypeInfo__System__String->static_fields->Empty;
    (this->fields).TeamEmail = pSVar1;
    func_?(&(this->fields).TeamEmail,pSVar1);
    pSVar1 = TypeInfo__System__String->static_fields->Empty;
    (this->fields).Charset = pSVar1;
    func_?(&(this->fields).Charset,pSVar1);
    pSVar1 = TypeInfo__System__String->static_fields->Empty;
    (this->fields).Language = pSVar1;
    func_?(&(this->fields).Language,pSVar1);
    pSVar1 = TypeInfo__System__String->static_fields->Empty;
    (this->fields).Country = pSVar1;
    func_?(&(this->fields).Country,pSVar1);
    pSVar1 = TypeInfo__System__String->static_fields->Empty;
    (this->fields).Comment = pSVar1;
    method_00 = (MethodInfo *)&(this->fields).Comment;
    func_?(method_00,pSVar1);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)this,ExceptionArgument__Enum_obj,method_00);
    this_01 = (ParameterOverride_1_System_Object_ *)
              func_?(
                             TypeInfo__System__Collections__Generic__Dictionary<System::String,_GNU::Gettext::CatalogEntry>
                             );
    if (this_01 != (ParameterOverride_1_System_Object_ *)0x0) {
      Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
      ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                (this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_GNU::Gettext::CatalogEntry>__Dictionary__
                );
      (this->fields).entriesDict = (IDictionary_2_System_String_GNU_Gettext_CatalogEntry_ *)this_01;
      func_?(&this->fields,this_01);
      this_02 = (List_1_GNU_Gettext_CatalogEntry_ *)
                func_?(
                               TypeInfo__System__Collections__Generic__List<GNU::Gettext::CatalogEntry>
                               );
      if (this_02 != (List_1_GNU_Gettext_CatalogEntry_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
        LowLevelList_1_System_Object___ctor
                  ((LowLevelList_1_System_Object_ *)this_02,
                   MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogEntry>__List__
                  );
        (this->fields).entriesList = this_02;
        func_?(&(this->fields).entriesList,this_02);
        this_03 = (List_1_GNU_Gettext_CatalogDeletedEntry_ *)
                  func_?(
                                 TypeInfo__System__Collections__Generic__List<GNU::Gettext::CatalogDeletedEntry>
                                 );
        if (this_03 != (List_1_GNU_Gettext_CatalogDeletedEntry_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
          LowLevelList_1_System_Object___ctor
                    ((LowLevelList_1_System_Object_ *)this_03,
                     MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogDeletedEntry>__List__
                    );
          (this->fields).deletedEntriesList = this_03;
          func_?(&(this->fields).deletedEntriesList,this_03);
          (this->fields).isOk = 1;
          if (cRam_? == '\0') {
            func_?(&StringLiteral_utf_8);
            func_?(&::StringLiteral__);
            cRam_? = '\x01';
          }
          if (cRam_? == '\0') {
            func_?(&TypeInfo__System__DateTime);
            func_?(&StringLiteral_yyyy_MM_dd_HH___mm___sszz00);
            cRam_? = '\x01';
          }
          if ((TypeInfo__System__DateTime->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__System__DateTime);
          }
          uStack_2 = mscorlib.dll::System::DateTime::DateTime_get_Now((MethodInfo *)0x0);
          pSVar1 = mscorlib.dll::System::DateTime::DateTime_ToString_1
                             ((DateTime *)&uStack_2,StringLiteral_yyyy_MM_dd_HH___mm___sszz00,
                              (MethodInfo *)0x0);
          (this->fields).CreationDate = pSVar1;
          func_?(&(this->fields).CreationDate,pSVar1);
          (this->fields).RevisionDate = pSVar1;
          func_?(&(this->fields).RevisionDate,pSVar1);
          pSVar1 = ::StringLiteral__;
          (this->fields).TeamEmail = ::StringLiteral__;
          func_?(&(this->fields).TeamEmail,pSVar1);
          (this->fields).Team = pSVar1;
          func_?(&(this->fields).Team,pSVar1);
          (this->fields).Project = pSVar1;
          func_?(&(this->fields).Project,pSVar1);
          (this->fields).Country = pSVar1;
          func_?(&(this->fields).Country,pSVar1);
          (this->fields).Language = pSVar1;
          uStack_2._4_4_ = (String *)&UNK_?;
          func_?();
          (this->fields).Charset = StringLiteral_utf_8;
          uStack_2._0_4_ = &(this->fields).Charset;
          uStack_2._4_4_ = StringLiteral_utf_8;
          func_?();
          Catalog_UpdateHeaderDict(this,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void add_DirtyChanged(EventHandler) */

void Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_add_DirtyChanged
               (Catalog *this,EventHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler);
    cRam_? = '\x01';
  }
  a = (this->fields).DirtyChanged;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((EventHandler__Class *)pDVar1->klass == TypeInfo__System__EventHandler) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__System__EventHandler);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pEVar4 = (EventHandler *)func_?(&(this->fields).DirtyChanged,pDVar2,a);
    bVar5 = pEVar4 == a;
    a = pEVar4;
    if (bVar5) {
      return;
    }
  } while( true );
}


/* String get_CommentForGui() */

String * Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_get_CommentForGui
                   (Catalog *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Char);
    func_?(&TypeInfo__System__Text__StringBuilder);
    func_?(&TypeInfo__System__String);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  bVar1 = mscorlib.dll::System::String::String_IsNullOrEmpty
                    ((this->fields).Comment,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    return TypeInfo__System__String->static_fields->Empty;
  }
  this_00 = (StringBuilder *)func_?(TypeInfo__System__Text__StringBuilder);
  if (this_00 != (StringBuilder *)0x0) {
    mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor(this_00,(MethodInfo *)0x0);
    pSVar2 = (this->fields).Comment;
    bVar3 = true;
    if (pSVar2 != (String *)0x0) {
      pSVar4 = mscorlib.dll::System::String::String_Split
                         (pSVar2,10,StringSplitOptions__Enum_None,(MethodInfo *)0x0);
      uVar5 = 0;
      if (pSVar4 != (String__Array *)0x0) {
        ppSVar6 = pSVar4->vector;
        while( true ) {
          if ((int)pSVar4->max_length <= (int)uVar5) {
            pSVar2 = (String *)(*(this_00->klass->vtable).ToString.methodPtr)();
            return pSVar2;
          }
          if (pSVar4->max_length <= uVar5) break;
          pSVar2 = *ppSVar6;
          if (!bVar3) {
            mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_5
                      (this_00,10,(MethodInfo *)0x0);
          }
          if (pSVar2 == (String *)0x0) goto code_?;
          bVar1 = mscorlib.dll::System::String::String_StartsWith
                            (pSVar2,::StringLiteral__,(MethodInfo *)0x0);
          if (bVar1 == 0) {
            trimChars = (Char__Array *)func_?();
            if (trimChars == (Char__Array *)0x0) goto code_?;
            if ((trimChars->max_length == 0) ||
               (trimChars->vector[0] = 0x20, trimChars->max_length < 2)) break;
            trimChars->vector[1] = 9;
          }
          else {
            pSVar2 = mscorlib.dll::System::String::String_Substring(pSVar2,1,(MethodInfo *)0x0);
            trimChars = (Char__Array *)func_?();
            if (trimChars == (Char__Array *)0x0) goto code_?;
            if ((trimChars->max_length == 0) ||
               (trimChars->vector[0] = 0x20, trimChars->max_length < 2)) break;
            trimChars->vector[1] = 9;
            if (pSVar2 == (String *)0x0) goto code_?;
          }
          pSVar2 = mscorlib.dll::System::String::String_TrimStart_1
                             (pSVar2,trimChars,(MethodInfo *)0x0);
          bVar3 = false;
          mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                    (this_00,pSVar2,(MethodInfo *)0x0);
          uVar5 = uVar5 + 1;
          ppSVar6 = (String **)&UNK_?;
        }
        func_?();
      }
    }
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  pSVar2 = (String *)(*pcVar7)();
  return pSVar2;
}


/* Int32 get_Count() */

int32_t Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_get_Count
                  (Catalog *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppMStack_1 = &
                 MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogEntry>__get_Count__
    ;
    func_?();
    cRam_? = '\x01';
  }
  pLVar2 = (this->fields).entriesList;
  if (pLVar2 != (List_1_GNU_Gettext_CatalogEntry_ *)0x0) {
    return (pLVar2->fields)._size;
  }
  ppMStack_1 = (MethodInfo **)&stack0xfffffffc;
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  iVar6 = (*pcVar5)();
  return iVar6;
}


/* Boolean get_HasDeletedItems() */

bool Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_get_HasDeletedItems
               (Catalog *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppMStack_1 = &
                 MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogDeletedEntry>__get_Count__
    ;
    func_?();
    cRam_? = '\x01';
  }
  pLVar2 = (this->fields).deletedEntriesList;
  if (pLVar2 != (List_1_GNU_Gettext_CatalogDeletedEntry_ *)0x0) {
    return 0 < (pLVar2->fields)._size;
  }
  ppMStack_1 = (MethodInfo **)&stack0xfffffffc;
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* CatalogEntry get_Item(Int32) */

CatalogEntry *
Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_get_Item
          (Catalog *this,int32_t index,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  if (-1 < index) {
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this->fields).entriesList;
    if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      uVar1 = func_?(&stack0xfffffff0);
      func_?(uVar1);
      pcVar2 = (code *)swi(3);
      pCVar3 = (CatalogEntry *)(*pcVar2)();
      return pCVar3;
    }
    if (index < (this_00->fields)._size) {
      RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (this_00,index,
                         MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogEntry>__get_Item_int_
                        );
      return (CatalogEntry *)RVar4;
    }
  }
  return (CatalogEntry *)0x0;
}


/* String get_LocaleCode() */

String * Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_get_LocaleCode
                   (Catalog *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GNU__Gettext__IsoCodes);
    func_?(&TypeInfo__System__IO__Path);
    func_?(&TypeInfo__System__String);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  pSVar1 = TypeInfo__System__String->static_fields->Empty;
  bVar2 = mscorlib.dll::System::String::String_IsNullOrEmpty
                    ((this->fields).Language,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    pSVar1 = (this->fields).Language;
    if ((TypeInfo__GNU__Gettext__IsoCodes->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__GNU__Gettext__IsoCodes);
    }
    pIVar3 = IsoCodes::IsoCodes_LookupLanguageCode(pSVar1,(MethodInfo *)0x0);
    if (pIVar3 == (IsoCodes_IsoCode *)0x0) goto code_?;
    pSVar1 = (pIVar3->fields).name;
    bVar2 = mscorlib.dll::System::String::String_IsNullOrEmpty
                      ((this->fields).Country,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      pSVar4 = mscorlib.dll::System::String::String_Concat_3
                         (pSVar1,::StringLiteral__,(MethodInfo *)0x0);
      pSVar1 = (this->fields).Country;
      if ((TypeInfo__GNU__Gettext__IsoCodes->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pIVar3 = IsoCodes::IsoCodes_LookupCountryCode(pSVar1,(MethodInfo *)0x0);
      if (pIVar3 == (IsoCodes_IsoCode *)0x0) {
        pSVar1 = (String *)0x0;
      }
      else {
        pSVar1 = (String *)
                 (*(pIVar3->klass->vtable).ToString.methodPtr)
                           (pIVar3,(pIVar3->klass->vtable).ToString.method);
      }
      pSVar1 = mscorlib.dll::System::String::String_Concat_3(pSVar4,pSVar1,(MethodInfo *)0x0);
    }
  }
  bVar2 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar1,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    bVar2 = mscorlib.dll::System::String::String_IsNullOrEmpty
                      ((this->fields).fileName,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      pSVar4 = (this->fields).fileName;
      if ((TypeInfo__System__IO__Path->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pSVar4 = mscorlib.dll::System::IO::Path::Path_GetFileNameWithoutExtension
                         (pSVar4,(MethodInfo *)0x0);
      if (pSVar4 == (String *)0x0) {
code_?:
        func_?();
        pcVar5 = (code *)swi(3);
        pSVar1 = (String *)(*pcVar5)();
        return pSVar1;
      }
      if ((pSVar4->fields)._stringLength == 2) {
        if ((TypeInfo__GNU__Gettext__IsoCodes->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        bVar2 = IsoCodes::IsoCodes_IsKnownLanguageCode(pSVar4,(MethodInfo *)0x0);
        if (bVar2 != 0) {
          pSVar1 = pSVar4;
        }
        return pSVar1;
      }
      if ((pSVar4->fields)._stringLength == 5) {
        uVar6 = mscorlib.dll::System::String::String_get_Chars(pSVar4,2,(MethodInfo *)0x0);
        if (uVar6 == 0x5f) {
          pSVar7 = mscorlib.dll::System::String::String_Substring_1(pSVar4,0,2,(MethodInfo *)0x0);
          if ((TypeInfo__GNU__Gettext__IsoCodes->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          bVar2 = IsoCodes::IsoCodes_IsKnownLanguageCode(pSVar7,(MethodInfo *)0x0);
          if (bVar2 != 0) {
            pSVar7 = mscorlib.dll::System::String::String_Substring_1(pSVar4,3,2,(MethodInfo *)0x0);
            if ((TypeInfo__GNU__Gettext__IsoCodes->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            bVar2 = IsoCodes::IsoCodes_IsKnownCountryCode(pSVar7,(MethodInfo *)0x0);
            if (bVar2 != 0) {
              pSVar1 = pSVar4;
            }
          }
        }
      }
    }
  }
  return pSVar1;
}


/* Int32 get_PluralFormsCount() */

int32_t Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_get_PluralFormsCount
                  (Catalog *this,MethodInfo *method)

{
  iVar1 = 2;
  if (cRam_? == '\0') {
    func_?(&StringLiteral_Plural_Forms);
    func_?(&StringLiteral_nplurals_2__plural__n____1___n);
    cRam_? = '\x01';
  }
  pSVar2 = StringLiteral_Plural_Forms;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__ContainsKey_System__String_
                   );
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this->fields).headerEntries;
  if (this_00 == (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
    func_?();
    pcVar3 = (code *)swi(3);
    iVar1 = (*pcVar3)();
    return iVar1;
  }
  bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
          Object,GUILoginHandler+PlanetData]::
          Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                    (this_00,(Object *)pSVar2,
                     MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__ContainsKey_System__String_
                    );
  pSVar2 = StringLiteral_nplurals_2__plural__n____1___n;
  if (bVar4 != 0) {
    pSVar2 = Catalog_GetHeader(this,StringLiteral_Plural_Forms,(MethodInfo *)0x0);
  }
  pPVar5 = PluralFormsCalculator::PluralFormsCalculator_Make(pSVar2,(MethodInfo *)0x0);
  if (pPVar5 != (PluralFormsCalculator *)0x0) {
    iVar1 = (pPVar5->fields).nplurals;
  }
  return iVar1;
}


/* String[] get_PluralFormsDescriptions() */

String__Array *
Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_get_PluralFormsDescriptions
          (Catalog *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<System::String>__ToArray__);
    func_?(&MethodInfo__System__Collections__Generic__List<System::String>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<System::String>);
    func_?(&StringLiteral_Plural_Forms);
    func_?(&StringLiteral_Plural);
    func_?(&StringLiteral_Singular);
    func_?(&StringLiteral_Form__0___e_g____1___);
    func_?(&StringLiteral_Form__0_);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
            func_?(TypeInfo__System__Collections__Generic__List<System::String>);
  if (this_00 != (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__List<System::String>__List__);
    pSVar1 = StringLiteral_Plural_Forms;
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__ContainsKey_System__String_
                     );
      cRam_? = '\x01';
    }
    pDVar2 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this->fields).headerEntries;
    if (pDVar2 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
      bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              Object,GUILoginHandler+PlanetData]::
              Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                        (pDVar2,(Object *)pSVar1,
                         MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__ContainsKey_System__String_
                        );
      if (bVar3 == 0) {
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Add
                  ((List_1_System_Object_ *)this_00,(Object *)StringLiteral_Singular,
                   MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                  );
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Add
                  ((List_1_System_Object_ *)this_00,(Object *)StringLiteral_Plural,
                   MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                  );
        pUVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                 UnitySynchronizationContext+WorkRequest]::
                 List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__ToArray
                           (this_00,
                            MethodInfo__System__Collections__Generic__List<System::String>__ToArray__
                           );
        return (String__Array *)pUVar4;
      }
      pSVar1 = Catalog_GetHeader(this,StringLiteral_Plural_Forms,(MethodInfo *)0x0);
      this_01 = (UnitySynchronizationContext_WorkRequest__Array *)
                PluralFormsCalculator::PluralFormsCalculator_Make(pSVar1,(MethodInfo *)0x0);
      pUVar4 = this_01;
      if (cRam_? == '\0') {
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      pSVar1 = StringLiteral_Plural_Forms;
      if (cRam_? == '\0') {
        func_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__ContainsKey_System__String_
                       );
        cRam_? = '\x01';
      }
      pDVar2 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
               (this->fields).headerEntries;
      if (pDVar2 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
        bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                Object,GUILoginHandler+PlanetData]::
                Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                          (pDVar2,(Object *)pSVar1,
                           MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__ContainsKey_System__String_
                          );
        pSVar1 = StringLiteral_nplurals_2__plural__n____1___n;
        if (bVar3 != 0) {
          pUVar4 = (UnitySynchronizationContext_WorkRequest__Array *)0x0;
          pSVar1 = Catalog_GetHeader(this,StringLiteral_Plural_Forms,(MethodInfo *)0x0);
        }
        this_02 = (UnitySynchronizationContext_WorkRequest__Array *)0x0;
        pPVar5 = PluralFormsCalculator::PluralFormsCalculator_Make(pSVar1,(MethodInfo *)0x0);
        if (pPVar5 == (PluralFormsCalculator *)0x0) {
          iVar6 = 2;
        }
        else {
          iVar6 = (pPVar5->fields).nplurals;
        }
        iVar7 = 0;
        if (0 < iVar6) {
          do {
            if (this_01 == (UnitySynchronizationContext_WorkRequest__Array *)0x0) {
code_?:
              pUVar4 = (UnitySynchronizationContext_WorkRequest__Array *)&UNK_?;
              pIVar8 = TypeInfo__System__Int32;
              pOVar9 = (Object *)func_?();
              pSVar1 = mscorlib.dll::System::String::String_Format
                                 (StringLiteral_Form__0_,pOVar9,(MethodInfo *)0x0);
            }
            else {
              iVar10 = 1;
              do {
                iVar11 = PluralFormsCalculator::PluralFormsCalculator_Evaluate_1
                                   ((PluralFormsCalculator *)this_01,
                                    (ulonglong)(uint)(iVar10 >> 0x1f),unaff_retaddr);
                if (((int)iVar11 == iVar7) && ((int)((ulonglong)iVar11 >> 0x20) == 0)) break;
                iVar10 = iVar10 + 1;
              } while (iVar10 < 1000);
              if (iVar10 == 1000) {
                unaff_retaddr = (MethodInfo *)&UNK_?;
                iVar11 = PluralFormsCalculator::PluralFormsCalculator_Evaluate_1
                                   ((PluralFormsCalculator *)this_01,0,in_stack_12);
                if (((int)iVar11 != iVar7) || ((int)((ulonglong)iVar11 >> 0x20) != 0))
                goto code_?;
              }
              this_01 = pUVar4;
              pIVar8 = TypeInfo__System__Int32;
              pOVar9 = (Object *)func_?();
              pUVar4 = (UnitySynchronizationContext_WorkRequest__Array *)&stack0xffffffec;
              arg1 = (Object *)func_?();
              pSVar1 = mscorlib.dll::System::String::String_Format_1
                                 (StringLiteral_Form__0___e_g____1___,pOVar9,arg1,(MethodInfo *)0x0)
              ;
            }
            this_02 = pUVar4;
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Add
                      ((List_1_System_Object_ *)pUVar4,(Object *)pSVar1,
                       MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                      );
            iVar7 = iVar7 + 1;
          } while (iVar7 < (int)pIVar8);
        }
        pUVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                 UnitySynchronizationContext+WorkRequest]::
                 List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__ToArray
                           ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this_02,
                            MethodInfo__System__Collections__Generic__List<System::String>__ToArray__
                           );
        return (String__Array *)pUVar4;
      }
    }
  }
  func_?();
  pcVar13 = (code *)swi(3);
  pSVar14 = (String__Array *)(*pcVar13)();
  return pSVar14;
}


/* Void remove_DirtyChanged(EventHandler) */

void Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_remove_DirtyChanged
               (Catalog *this,EventHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler);
    cRam_? = '\x01';
  }
  source = (this->fields).DirtyChanged;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((EventHandler__Class *)pDVar1->klass == TypeInfo__System__EventHandler) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__System__EventHandler);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pEVar4 = (EventHandler *)func_?(&(this->fields).DirtyChanged,pDVar2,source);
    bVar5 = pEVar4 == source;
    source = pEVar4;
    if (bVar5) {
      return;
    }
  } while( true );
}


/* Void set_CommentForGui(String) */

void Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_set_CommentForGui
               (Catalog *this,String *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Text__StringBuilder);
    func_?(&TypeInfo__System__String);
    func_?(&TypeInfo__System__String);
    func_?(&::StringLiteral___);
    cRam_? = '\x01';
  }
  bVar1 = mscorlib.dll::System::String::String_IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    pSVar2 = TypeInfo__System__String->static_fields->Empty;
    (this->fields).Comment = pSVar2;
    func_?(&(this->fields).Comment,pSVar2);
    return;
  }
  this_00 = (StringBuilder *)func_?(TypeInfo__System__Text__StringBuilder);
  if (this_00 == (StringBuilder *)0x0) goto code_?;
  mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor(this_00,(MethodInfo *)0x0);
  pSVar3 = (String__Array *)func_?(TypeInfo__System__String,1);
  pSVar2 = mscorlib.dll::System::Environment::Environment_get_NewLine((MethodInfo *)0x0);
  if (pSVar3 == (String__Array *)0x0) goto code_?;
  if (pSVar2 == (String *)0x0) {
code_?:
    if (pSVar3->max_length != 0) {
      pSVar3->vector[0] = pSVar2;
      func_?(pSVar3->vector,pSVar2);
      if (value == (String *)0x0) goto code_?;
      pSVar3 = mscorlib.dll::System::String::String_Split_4
                         (value,pSVar3,StringSplitOptions__Enum_None,(MethodInfo *)0x0);
      uVar4 = 0;
      if (pSVar3 == (String__Array *)0x0) goto code_?;
      ppSVar5 = pSVar3->vector;
      while( true ) {
        if ((int)pSVar3->max_length <= (int)uVar4) {
          pSVar2 = (String *)
                   (*(this_00->klass->vtable).ToString.methodPtr)
                             (this_00,(this_00->klass->vtable).ToString.method);
          (this->fields).Comment = pSVar2;
          func_?(&(this->fields).Comment,pSVar2);
          return;
        }
        if (pSVar3->max_length <= uVar4) break;
        pSVar2 = *ppSVar5;
        iVar6 = mscorlib.dll::System::Text::StringBuilder::StringBuilder_get_Length
                          (this_00,(MethodInfo *)0x0);
        if (iVar6 != 0) {
          pSVar2 = (String *)0x0;
          mscorlib.dll::System::Text::StringBuilder::StringBuilder_AppendLine
                    (this_00,(MethodInfo *)0x0);
        }
        pSVar2 = mscorlib.dll::System::String::String_Concat_3
                           (::StringLiteral___,pSVar2,(MethodInfo *)0x0);
        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                  (this_00,pSVar2,(MethodInfo *)0x0);
        uVar4 = uVar4 + 1;
        ppSVar5 = ppSVar5 + 1;
      }
    }
  }
  else {
    iVar7 = func_?(pSVar2,(pSVar3->klass->_0).element_class);
    if (iVar7 != 0) goto code_?;
    uVar8 = func_?(0);
    func_?(uVar8);
  }
  func_?();
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void set_IsDirty(Boolean) */

void Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_set_IsDirty
               (Catalog *this,bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventArgs);
    cRam_? = '\x01';
  }
  (this->fields).isDirty = value;
  if ((TypeInfo__System__EventArgs->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__EventArgs);
  }
  (*(this->klass->vtable).OnDirtyChanged.methodPtr)
            (this,TypeInfo__System__EventArgs->static_fields->Empty,
             (this->klass->vtable).OnDirtyChanged.method);
  return;
}

