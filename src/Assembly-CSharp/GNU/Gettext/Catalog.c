
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
  if (pIVar2 != (IDictionary_2_System_String_GNU_Gettext_CatalogEntry_ *)0x0) {
    pIVar3 = pIVar2->klass;
    uVar4 = 0;
    uVar5._0_1_ = (pIVar3->_1).rank;
    uVar5._1_1_ = (pIVar3->_1).minimumAlignment;
    if (uVar5 != 0) {
      do {
        if (pIVar3->interfaceOffsets[uVar4].interfaceType ==
            (Il2CppClass *)
            TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::CatalogEntry>
           ) {
          ppMVar6 = &(&(pIVar2->klass->vtable).TryGetValue)[pIVar3->interfaceOffsets[uVar4].offset]
                     .method;
          goto code_?;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar5);
    }
    ppMVar6 = (MethodInfo **)
              func_?(pIVar2,
                              TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::CatalogEntry>
                              ,7);
code_?:
    cVar7 = (*(code *)*ppMVar6)(pIVar2,original,&pCStack_1,ppMVar6[1]);
    if (cVar7 != '\0') {
      return pCStack_1;
    }
    pCVar8 = (CatalogEntry *)func_?(TypeInfo__GNU__Gettext__CatalogEntry);
    CatalogEntry::CatalogEntry__ctor(pCVar8,this,original,plural,(MethodInfo *)0x0);
    pCStack_1 = pCVar8;
    bVar9 = mscorlib.dll::System::String::String_IsNullOrEmpty(plural,(MethodInfo *)0x0);
    pCVar8 = pCStack_1;
    if (bVar9 != 0) {
code_?:
      Catalog_AddItem_1(this,pCStack_1,(MethodInfo *)0x0);
      return pCStack_1;
    }
    translations = (String__Array *)func_?(TypeInfo__System__String,2);
    pSVar10 = ::StringLiteral__;
    if (translations != (String__Array *)0x0) {
      if (translations->max_length == 0) goto code_?;
      translations->vector[0] = ::StringLiteral__;
      func_?(translations->vector,pSVar10);
      pSVar10 = ::StringLiteral__;
      if (translations->max_length < 2) goto code_?;
      translations->vector[1] = ::StringLiteral__;
      func_?(translations->vector + 1,pSVar10);
      if (pCVar8 != (CatalogEntry *)0x0) {
        CatalogEntry::CatalogEntry_SetTranslations(pCVar8,translations,(MethodInfo *)0x0);
        goto code_?;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  pCVar8 = (CatalogEntry *)(*pcVar11)();
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
     (CatalogEntry::CatalogEntry_MakeKey
                ((data->fields).str,(data->fields).context,(MethodInfo *)0x0),
     pIVar2 != (IDictionary_2_System_String_GNU_Gettext_CatalogEntry_ *)0x0)) {
    func_?(5,
                    TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::CatalogEntry>
                    ,pIVar2);
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
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
  RVar1.First = 0;
  RVar1.Last = 0;
  if (catalog != (Catalog *)0x0) {
    while( true ) {
      RVar2 = RVar1;
      if (cRam_? == '\0') {
        func_?(&
                        MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogEntry>__get_Count__
                       );
        cRam_? = '\x01';
      }
      pLVar3 = (catalog->fields).entriesList;
      if (pLVar3 == (List_1_GNU_Gettext_CatalogEntry_ *)0x0) break;
      if ((pLVar3->fields)._size <= (int)RVar1) {
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
      if ((int)RVar1 < 0) {
code_?:
        entry.First = 0;
        entry.Last = 0;
      }
      else {
        this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                  (catalog->fields).entriesList;
        if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
        break;
        if ((this_00->fields)._size <= (int)RVar1) goto code_?;
        entry = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (this_00,(int32_t)RVar1,
                           MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogEntry>__get_Item_int_
                          );
      }
      RVar1 = (RegexCharClass_SingleRange)
              Catalog_FindItem_1(this,(CatalogEntry *)entry,(MethodInfo *)0x0);
      if (RVar1 == (RegexCharClass_SingleRange)0x0) {
        this_01 = (CatalogEntry *)func_?(TypeInfo__GNU__Gettext__CatalogEntry);
        CatalogEntry::CatalogEntry__ctor_1(this_01,this,(CatalogEntry *)entry,(MethodInfo *)0x0);
        pIVar4 = (this->fields).entriesDict;
        if ((entry == (RegexCharClass_SingleRange)0x0) ||
           (pSVar5 = CatalogEntry::CatalogEntry_MakeKey
                               (*(String **)((int)entry + 8),*(String **)((int)entry + 0x34),
                                (MethodInfo *)0x0),
           pIVar4 == (IDictionary_2_System_String_GNU_Gettext_CatalogEntry_ *)0x0)) break;
        func_?(5,
                        TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::CatalogEntry>
                        ,pIVar4,pSVar5,this_01);
        pLVar3 = (this->fields).entriesList;
        if (pLVar3 == (List_1_GNU_Gettext_CatalogEntry_ *)0x0) break;
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Add
                  ((List_1_System_Object_ *)pLVar3,(Object *)this_01,
                   MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogEntry>__Add_GNU__Gettext__CatalogEntry_
                  );
        RVar1 = (RegexCharClass_SingleRange)((int)RVar2 + 1);
      }
      else {
        uVar6 = 0;
        iVar7 = 0x10;
        while( true ) {
          if ((entry == (RegexCharClass_SingleRange)0x0) ||
             (pSVar8 = CatalogEntry::CatalogEntry_get_References
                                 ((CatalogEntry *)entry,(MethodInfo *)0x0),
             pSVar8 == (String__Array *)0x0)) goto code_?;
          uVar9 = pSVar8->max_length;
          if (((int)uVar9 < 0 && (int)uVar9 >> 0x1f < 1) ||
             (((int)uVar9 >> 0x1f < 1 && (uVar9 <= uVar6)))) break;
          pSVar8 = CatalogEntry::CatalogEntry_get_References
                             ((CatalogEntry *)entry,(MethodInfo *)0x0);
          if (pSVar8 == (String__Array *)0x0) goto code_?;
          if (pSVar8->max_length <= uVar6) goto code_?;
          RVar2.First = 0;
          RVar2.Last = 0;
          CatalogEntry::CatalogEntry_AddReference
                    ((CatalogEntry *)RVar1,*(String **)((int)pSVar8->vector + iVar7 + -0x10),
                     (MethodInfo *)0x0);
          uVar6 = uVar6 + 1;
          iVar7 = iVar7 + 4;
        }
        pSVar5 = CatalogEntry::CatalogEntry_GetTranslation
                           ((CatalogEntry *)entry,0,(MethodInfo *)0x0);
        bVar10 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar5,(MethodInfo *)0x0);
        if (bVar10 == 0) {
          RVar1 = entry;
          pSVar5 = CatalogEntry::CatalogEntry_GetTranslation
                             ((CatalogEntry *)entry,0,(MethodInfo *)0x0);
          RVar2 = RVar1;
          CatalogEntry::CatalogEntry_SetTranslation
                    ((CatalogEntry *)RVar1,pSVar5,0,(MethodInfo *)0x0);
        }
        if (*(char *)((int)entry + 0x20) != '\0') {
          CatalogEntry::CatalogEntry_set_IsFuzzy((CatalogEntry *)RVar1,1,(MethodInfo *)0x0);
        }
        pSVar5 = CatalogEntry::CatalogEntry_get_Flags((CatalogEntry *)entry,(MethodInfo *)0x0);
        bVar10 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar5,(MethodInfo *)0x0);
        if (bVar10 == 0) {
          pSVar5 = CatalogEntry::CatalogEntry_get_Flags((CatalogEntry *)entry,(MethodInfo *)0x0);
          CatalogEntry::CatalogEntry_set_Flags((CatalogEntry *)RVar1,pSVar5,(MethodInfo *)0x0);
        }
        RVar1 = (RegexCharClass_SingleRange)((int)RVar2 + 1);
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
  do {
    if (pEVar4 == (EncodingInfo__Array *)0x0) {
code_?:
      func_?();
      func_?(&stack0xffffffdc);
      pcVar6 = (code *)swi(3);
      bVar7 = (*pcVar6)();
      return bVar7;
    }
    if ((int)pEVar4->max_length <= (int)uVar5) {
      *unaff_FS_OFFSET = uStack_3;
      return 0;
    }
    if (pEVar4->max_length <= uVar5) {
      func_?();
      goto code_?;
    }
    uStack_1 = 0;
    if ((pEVar4->vector[uVar5] == (EncodingInfo *)0x0) ||
       (pSVar8 = (pEVar4->vector[uVar5]->fields).strEncodingName, pSVar8 == (String *)0x0))
    goto code_?;
    pSVar8 = mscorlib.dll::System::String::String_ToLower(pSVar8,(MethodInfo *)0x0);
    if (charset == (String *)0x0) goto code_?;
    b = mscorlib.dll::System::String::String_ToLower(charset,(MethodInfo *)0x0);
    bVar7 = mscorlib.dll::System::String::String_op_Equality(pSVar8,b,(MethodInfo *)0x0);
    if (bVar7 != 0) {
      *unaff_FS_OFFSET = uStack_3;
      return 1;
    }
    uStack_1 = 0xffffffff;
    uVar5 = uVar5 + 1;
  } while( true );
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
  ppSVar3 = &(this->fields).CreationDate;
  *ppSVar3 = pSVar2;
  func_?(ppSVar3,pSVar2);
  ppSVar3 = &(this->fields).RevisionDate;
  *ppSVar3 = pSVar2;
  func_?(ppSVar3,pSVar2);
  pSVar2 = ::StringLiteral__;
  ppSVar3 = &(this->fields).TeamEmail;
  *ppSVar3 = ::StringLiteral__;
  func_?(ppSVar3,pSVar2);
  ppSVar3 = &(this->fields).Team;
  *ppSVar3 = pSVar2;
  func_?(ppSVar3,pSVar2);
  ppSVar3 = &(this->fields).Project;
  *ppSVar3 = pSVar2;
  func_?(ppSVar3,pSVar2);
  ppSVar3 = &(this->fields).Country;
  *ppSVar3 = pSVar2;
  func_?(ppSVar3,pSVar2);
  (this->fields).Language = pSVar2;
  uStack_1._0_4_ = &(this->fields).Language;
  uStack_1._4_4_ = pSVar2;
  func_?();
  ppSVar3 = &(this->fields).Charset;
  *ppSVar3 = StringLiteral_utf_8;
  func_?(ppSVar3,StringLiteral_utf_8);
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
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
            (this->fields).headerEntries;
  if (this_00 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
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
    iVar1 = (text->fields)._stringLength;
    if (iVar1 == 0) {
      return ::StringLiteral__;
    }
    iVar2 = 0;
    while ((iVar1 = iVar1 + -1, -1 < iVar1 &&
           (uVar3 = mscorlib.dll::System::String::String_get_Chars(text,iVar1,(MethodInfo *)0x0),
           uVar3 == 10))) {
      iVar2 = iVar2 + 1;
    }
    iVar1 = (text->fields)._stringLength;
    if (reference != (String *)0x0) {
      iVar4 = (reference->fields)._stringLength;
      this = (StringBuilder *)func_?(TypeInfo__System__Text__StringBuilder);
      mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor_4
                (this,text,0,iVar1 - iVar2,(iVar4 - iVar2) + iVar1,(MethodInfo *)0x0);
      iVar1 = (reference->fields)._stringLength + -1;
      if (iVar1 < 0) {
code_?:
        if (this == (StringBuilder *)0x0) goto code_?;
      }
      else {
        do {
          uVar3 = mscorlib.dll::System::String::String_get_Chars(reference,iVar1,(MethodInfo *)0x0);
          if (uVar3 != 10) goto code_?;
          if (this == (StringBuilder *)0x0) goto code_?;
          mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_6
                    (this,10,(MethodInfo *)0x0);
          iVar1 = iVar1 + -1;
        } while (-1 < iVar1);
      }
      pSVar5 = (String *)
               (*(code *)(this->klass->vtable).ToString.method)
                         (this,(this->klass->vtable).
                               System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
      return pSVar5;
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  pSVar5 = (String *)(*pcVar6)();
  return pSVar5;
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
    pSVar2 = CatalogEntry::CatalogEntry_MakeKey
                       ((entry->fields).str,(entry->fields).context,(MethodInfo *)0x0);
    if (pIVar1 != (IDictionary_2_System_String_GNU_Gettext_CatalogEntry_ *)0x0) {
      cVar3 = func_?(4,
                              TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::CatalogEntry>
                              ,pIVar1,pSVar2);
      if (cVar3 == '\0') {
        return (CatalogEntry *)0x0;
      }
      pIVar1 = (this->fields).entriesDict;
      pSVar2 = CatalogEntry::CatalogEntry_MakeKey
                         ((entry->fields).str,(entry->fields).context,(MethodInfo *)0x0);
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
    if (((prefix->fields)._stringLength + (pSVar1->fields)._stringLength < 0x4d) &&
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
      pSVar4 = (String *)0x0;
code_?:
      do {
        if ((pSVar1->fields)._stringLength <= (int)pSVar4) goto code_?;
        pSVar5 = pSVar4;
        pSVar6 = pSVar3;
        uVar7 = mscorlib.dll::System::String::String_get_Chars
                          (pSVar1,(int32_t)pSVar4,(MethodInfo *)0x0);
        pSVar8 = (String *)((int)&pSVar4->klass + 1);
        if (uVar7 == 0x5c) {
          if ((pSVar1->fields)._stringLength <= (int)pSVar8) {
            pSVar8 = (String *)((int)&pSVar5->klass + 1);
            goto code_?;
          }
          message = (String *)((int)&message->klass + 1);
          uVar7 = mscorlib.dll::System::String::String_get_Chars
                            (pSVar1,(int32_t)pSVar8,(MethodInfo *)0x0);
          pSVar8 = (String *)((int)&pSVar4->klass + 2);
          if (uVar7 != 0x6e) {
            if (uVar7 == 0x74) {
              pSVar3 = pSVar8;
              pSVar8 = (String *)((int)&pSVar4->klass + 2);
            }
            goto code_?;
          }
          pSVar4 = (String *)((int)&pSVar4->klass + 2);
        }
        else {
          pSVar3 = pSVar8;
          if (uVar7 != 0x20) {
            pSVar3 = pSVar6;
          }
code_?:
          pSVar4 = pSVar8;
          if (((int)message < 0x4d) || (pSVar8 = pSVar3, pSVar3 == (String *)0xffffffff)) {
            message = (String *)((int)&message->klass + 1);
            goto code_?;
          }
        }
        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                  (sb,::StringLiteral__,(MethodInfo *)0x0);
        pSVar3 = mscorlib.dll::System::String::String_Substring_1
                           (pSVar1,(int32_t)prefix,(int)pSVar8 - (int)prefix,(MethodInfo *)0x0);
        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                  (sb,pSVar3,(MethodInfo *)0x0);
        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                  (sb,::StringLiteral__,(MethodInfo *)0x0);
        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                  (sb,newlineChar,(MethodInfo *)0x0);
        pSVar3 = (String *)0xffffffff;
        message = (String *)0x1;
        prefix = pSVar8;
      } while( true );
    }
  }
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
code_?:
  pSVar1 = mscorlib.dll::System::String::String_Substring(pSVar1,(int32_t)prefix,(MethodInfo *)0x0);
  if (pSVar1 != (String *)0x0) {
    if ((pSVar1->fields)._stringLength < 1) {
      return;
    }
    mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
              (sb,::StringLiteral__,(MethodInfo *)0x0);
    mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2(sb,pSVar1,(MethodInfo *)0x0);
    mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
              (sb,::StringLiteral__,(MethodInfo *)0x0);
    mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
              (sb,newlineChar,(MethodInfo *)0x0);
    return;
  }
  goto code_?;
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
  do {
    if (pEVar4 == (EncodingInfo__Array *)0x0) {
code_?:
      func_?();
      func_?(&stack0xffffffdc);
      pcVar6 = (code *)swi(3);
      pEVar7 = (Encoding *)(*pcVar6)();
      return pEVar7;
    }
    if ((int)pEVar4->max_length <= (int)uVar5) {
      *unaff_FS_OFFSET = uStack_3;
      return (Encoding *)0x0;
    }
    if (pEVar4->max_length <= uVar5) {
      func_?();
      goto code_?;
    }
    this = pEVar4->vector[uVar5];
    uStack_1 = 0;
    if ((this == (EncodingInfo *)0x0) ||
       (pSVar8 = (this->fields).strEncodingName, pSVar8 == (String *)0x0)) goto code_?;
    pSVar8 = mscorlib.dll::System::String::String_ToLower(pSVar8,(MethodInfo *)0x0);
    if (charset == (String *)0x0) goto code_?;
    b = mscorlib.dll::System::String::String_ToLower(charset,(MethodInfo *)0x0);
    bVar9 = mscorlib.dll::System::String::String_op_Equality(pSVar8,b,(MethodInfo *)0x0);
    if (bVar9 != 0) {
      pEVar7 = mscorlib.dll::System::Text::EncodingInfo::EncodingInfo_GetEncoding
                         (this,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return pEVar7;
    }
    uStack_1 = 0xffffffff;
    uVar5 = uVar5 + 1;
  } while( true );
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
  pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
           (this->fields).headerEntries;
  if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      (pDVar1,(Object *)key,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__ContainsKey_System__String_
                      );
    if (bVar2 == 0) {
      return TypeInfo__System__String->static_fields->Empty;
    }
    pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
             (this->fields).headerEntries;
    if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
      TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        (pDVar1,(Object *)key,
                         MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__get_Item_System__String_
                        );
      return (String *)TVar3.m_Index;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pSVar5 = (String *)(*pcVar4)();
  return pSVar5;
}


/* String GetHeaderString(String) */

String * Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_GetHeaderString
                   (Catalog *this,String *lineDelimeter,MethodInfo *method)

{
  uVar1 = *unaff_FS_OFFSET;
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
  this_01 = (StringBuilder *)func_?(TypeInfo__System__Text__StringBuilder);
  mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor(this_01,(MethodInfo *)0x0);
  this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)(this->fields).headerEntries;
  if ((this_00 !=
       (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
        *)0x0) &&
     (this_02 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Keys
                          (this_00,
                           MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__get_Keys__
                          ),
     this_02 !=
     (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
      *)0x0)) {
    mscorlib.dll::System::Collections::Generic::
    Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
    StyleSheetCache+SheetHandleKey,System::Object]::
    Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
              ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                *)&stack0xffffffcc,
               (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                *)this_02,
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<System::String,_System::String>__GetEnumerator__
              );
    while (bVar2 = mscorlib.dll::System::Collections::Generic::
                   Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::
                   Object,UnityEngine::UIElements::TextureId]::
                   Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Object_UnityEngine_UIElements_TextureId__MoveNext
                             ((Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Object_UnityEngine_UIElements_TextureId_
                               *)&stack0xffffffbc,
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::String,_System::String>__MoveNext__
                             ), bVar2 != 0) {
      pSVar3 = TypeInfo__System__String->static_fields->Empty;
      pDVar4 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
               (this->fields).headerEntries;
      if (pDVar4 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
      goto code_?;
      TVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        (pDVar4,(Object *)&UNK_?,
                         MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__get_Item_System__String_
                        );
      if (TVar5.m_Index != 0) {
        pDVar4 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                 (this->fields).headerEntries;
        if (pDVar4 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
        goto code_?;
        TVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          (pDVar4,(Object *)&UNK_?,
                           MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__get_Item_System__String_
                          );
        uVar1 = 0;
        pSVar3 = StringEscaping::StringEscaping_ToGettextFormat
                           ((String *)TVar5.m_Index,(MethodInfo *)0x0);
      }
      if (this_01 == (StringBuilder *)0x0) goto code_?;
      in_stack_6 = (MethodInfo *)lineDelimeter;
      mscorlib.dll::System::Text::StringBuilder::StringBuilder_AppendFormat_2
                (this_01,StringLiteral___0____1__n__2_,pOStack_7,(Object *)pSVar3,
                 (Object *)lineDelimeter,(MethodInfo *)0x0);
    }
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)&stack0xffffffbc,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::String,_System::String>__Dispose__
               ,in_stack_6);
    if (this_01 != (StringBuilder *)0x0) {
      pSVar3 = (String *)(*(code *)(this_01->klass->vtable).ToString.method)();
      *unaff_FS_OFFSET = uVar1;
      return pSVar3;
    }
  }
code_?:
  func_?();
  func_?();
  pcVar8 = (code *)swi(3);
  pSVar3 = (String *)(*pcVar8)();
  return pSVar3;
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
  pLVar1 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
            *)func_?(TypeInfo__System__Collections__Generic__List<System::String>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar1,
             MethodInfo__System__Collections__Generic__List<System::String>__List__);
  this_00 = (IDictionary_2_System_String_GNU_Gettext_CatalogEntry___Class *)
            func_?(TypeInfo__System__Collections__Generic__List<System::String>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<System::String>__List__);
  iVar2 = 0;
  while( true ) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogEntry>__get_Count__
                      ,this_00);
      cRam_? = '\x01';
    }
    pLVar3 = (this->fields).entriesList;
    if (pLVar3 == (List_1_GNU_Gettext_CatalogEntry_ *)0x0) goto code_?;
    if ((pLVar3->fields)._size <= iVar2) break;
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogEntry>__get_Count__
                      ,this_00);
      func_?(&
                      MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogEntry>__get_Item_int_
                     );
      cRam_? = '\x01';
    }
    if (iVar2 < 0) {
code_?:
      RVar4.First = 0;
      RVar4.Last = 0;
    }
    else {
      pLVar5 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (this->fields).entriesList;
      if (pLVar5 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
      goto code_?;
      if ((pLVar5->fields)._size <= iVar2) goto code_?;
      RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (pLVar5,iVar2,
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
    if (RVar4 == (RegexCharClass_SingleRange)0x0) goto code_?;
    pLVar1 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
              *)0x0;
    pSVar6 = CatalogEntry::CatalogEntry_MakeKey
                       (*(String **)((int)RVar4 + 8),*(String **)((int)RVar4 + 0x34),
                        (MethodInfo *)0x0);
    if (pLVar1 == (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                   *)0x0) goto code_?;
    this_00 = 
    TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::CatalogEntry>;
    cVar7 = func_?(4,
                            TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::CatalogEntry>
                            ,pLVar1,pSVar6);
    if (cVar7 == '\0') {
code_?:
      pCVar8 = Catalog_get_Item(this,iVar2,(MethodInfo *)0x0);
      if ((pCVar8 == (CatalogEntry *)0x0) ||
         (this_00 == (IDictionary_2_System_String_GNU_Gettext_CatalogEntry___Class *)0x0))
      goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                ((List_1_System_Object_ *)this_00,(Object *)(pCVar8->fields).str,
                 MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                );
    }
    else {
      pIVar9 = (refCat->fields).entriesDict;
      pSVar6 = CatalogEntry::CatalogEntry_MakeKey
                         (*(String **)((int)RVar4 + 8),*(String **)((int)RVar4 + 0x34),
                          (MethodInfo *)0x0);
      if (pIVar9 == (IDictionary_2_System_String_GNU_Gettext_CatalogEntry_ *)0x0)
      goto code_?;
      iVar10 = func_?(0,
                              TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::CatalogEntry>
                              ,pIVar9,pSVar6);
      if (iVar10 == 0) goto code_?;
    }
    iVar2 = iVar2 + 1;
  }
  iVar2 = 0;
  if (refCat != (Catalog *)0x0) goto code_?;
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
code_?:
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogEntry>__get_Count__
                    ,this_00);
    cRam_? = '\x01';
  }
  pLVar3 = (refCat->fields).entriesList;
  if (pLVar3 == (List_1_GNU_Gettext_CatalogEntry_ *)0x0) goto code_?;
  if ((pLVar3->fields)._size <= iVar2) {
    if (pLVar1 != (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                   *)0x0) {
      pMVar12 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal
                ::MultiColumnCollectionHeader+ViewState+ColumnState]::
                List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__ToArray
                          (pLVar1,
                           MethodInfo__System__Collections__Generic__List<System::String>__ToArray__
                          );
      *newEntries = (String__Array *)pMVar12;
      pLVar1 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                *)&UNK_?;
      func_?(newEntries,pMVar12);
      if (pLVar1 != (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                     *)0x0) {
        pMVar12 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                  Internal::MultiColumnCollectionHeader+ViewState+ColumnState]::
                  List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__ToArray
                            (pLVar1,
                             MethodInfo__System__Collections__Generic__List<System::String>__ToArray__
                            );
        *obsoleteEntries = (String__Array *)pMVar12;
        func_?(obsoleteEntries,pMVar12);
        return;
      }
    }
    goto code_?;
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
    RVar13.First = 0;
    RVar13.Last = 0;
  }
  else {
    pLVar5 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
             (refCat->fields).entriesList;
    if (pLVar5 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
    goto code_?;
    if ((pLVar5->fields)._size <= iVar2) goto code_?;
    RVar13 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                       (pLVar5,iVar2,
                        MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogEntry>__get_Item_int_
                       );
  }
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::CatalogEntry>
                   );
    cRam_? = '\x01';
  }
  if (RVar13 == (RegexCharClass_SingleRange)0x0) goto code_?;
  pLVar1 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
            *)0x0;
  pSVar6 = CatalogEntry::CatalogEntry_MakeKey
                     (*(String **)((int)RVar13 + 8),*(String **)((int)RVar13 + 0x34),
                      (MethodInfo *)0x0);
  if (pLVar1 == (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                 *)0x0) goto code_?;
  this_00 = 
  TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::CatalogEntry>;
  cVar7 = func_?(4,
                          TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::CatalogEntry>
                          ,pLVar1,pSVar6);
  if (cVar7 == '\0') {
code_?:
    pCVar8 = Catalog_get_Item(refCat,iVar2,(MethodInfo *)0x0);
    if ((pCVar8 == (CatalogEntry *)0x0) ||
       (pLVar1 == (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                   *)0x0)) goto code_?;
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              ((List_1_System_Object_ *)pLVar1,(Object *)(pCVar8->fields).str,
               MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_);
  }
  else {
    pIVar9 = (this->fields).entriesDict;
    pSVar6 = CatalogEntry::CatalogEntry_MakeKey
                       (*(String **)((int)RVar13 + 8),*(String **)((int)RVar13 + 0x34),
                        (MethodInfo *)0x0);
    if (pIVar9 == (IDictionary_2_System_String_GNU_Gettext_CatalogEntry_ *)0x0)
    goto code_?;
    iVar10 = func_?(0,
                            TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::CatalogEntry>
                            ,pIVar9,pSVar6);
    if (iVar10 == 0) goto code_?;
  }
  iVar2 = iVar2 + 1;
  goto code_?;
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
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
            (this->fields).headerEntries;
  if (this_00 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
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
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
            (this->fields).headerEntries;
  if (this_00 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
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
        ppSVar6 = &(this->fields).fileName;
        (this->fields).isOk = 0;
        *ppSVar6 = fileName;
        func_?(ppSVar6,fileName);
        pCVar7 = (CatalogParser *)func_?(TypeInfo__GNU__Gettext__CharsetInfoFinder);
        pEStack_8 = (Encoding *)pCVar7;
        if (cRam_? == '\0') {
          func_?(&TypeInfo__GNU__Gettext__CatalogParser);
          func_?(&StringLiteral_iso_8859_1);
          cRam_? = '\x01';
        }
        encoding = mscorlib.dll::System::Text::Encoding::Encoding_GetEncoding_2
                             (StringLiteral_iso_8859_1,(MethodInfo *)0x0);
        if ((TypeInfo__GNU__Gettext__CatalogParser->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        CatalogParser::CatalogParser__ctor(pCVar7,text,encoding,(MethodInfo *)0x0);
        pCVar7[1].klass = (CatalogParser__Class *)StringLiteral_iso_8859_1;
        func_?();
        pCVar9 = pCVar7[1].klass;
        ppSVar6 = &(this->fields).Charset;
        *ppSVar6 = (String *)pCVar9;
        func_?(ppSVar6,pCVar9);
        CatalogParser::CatalogParser_Parse((CatalogParser *)pEStack_8,text,(MethodInfo *)0x0);
        *ppSVar6 = (String *)((CatalogParser *)((int)pEStack_8 + 0xc))->klass;
        func_?();
        *ppSVar6 = (String *)((CatalogParser *)((int)pEStack_8 + 0xc))->klass;
        func_?();
        pEStack_8 = Catalog_GetEncoding((this->fields).Charset,(MethodInfo *)0x0);
        pCVar7 = (CatalogParser *)func_?();
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if ((TypeInfo__GNU__Gettext__CatalogParser->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        CatalogParser::CatalogParser__ctor(pCVar7,text,pEStack_8,(MethodInfo *)0x0);
        pCVar7[1].klass = (CatalogParser__Class *)this;
        func_?();
        bVar10 = CatalogParser::CatalogParser_Parse(pCVar7,text,(MethodInfo *)0x0);
        in_stack_11 = (MethodInfo *)0x0;
        if (bVar10 != 0) {
          (this->fields).isOk = 1;
          Catalog_set_IsDirty(this,0,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = text;
          return;
        }
        goto code_?;
      }
    }
  }
  func_?();
  fileName = unaff_EDI;
code_?:
  pSVar12 = (String *)func_?();
  pSVar12 = mscorlib.dll::System::String::String_Format
                      (pSVar12,(Object *)fileName,in_stack_11);
  func_?();
  this_00 = (Exception *)func_?();
  mscorlib.dll::System::Exception::Exception__ctor_1(this_00,pSVar12,(MethodInfo *)0x0);
  uStack13 = func_?();
  pEStack14 = this_00;
  func_?();
  pEStack_15 = this_00->klass;
  ppEStack16 = &pEStack_15;
  func_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
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
  ppSVar2 = &(this->fields).Project;
  *ppSVar2 = pSVar1;
  func_?(ppSVar2,&stack0xfffffffc,&UNK_?,ppSVar2,pSVar1);
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
    this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)(this->fields).headerEntries;
    unaff_ESI = this;
    if (this_00 !=
        (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
         *)0x0) {
      pSVar3 = (String__Array *)&UNK_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::StyleSheets
      ::StyleSheetCache+SheetHandleKey,System::Object]::
      Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__Clear
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
    CatalogEntry::CatalogEntry_MakeKey((data->fields).str,(data->fields).context,(MethodInfo *)0x0);
    if (pIVar2 == (IDictionary_2_System_String_GNU_Gettext_CatalogEntry_ *)0x0)
    goto code_?;
    func_?(6,
                    TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::CatalogEntry>
                   );
  }
  pLVar3 = (this->fields).entriesList;
  if (pLVar3 != (List_1_GNU_Gettext_CatalogEntry_ *)0x0) {
    bVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Contains
                      ((List_1_System_Object_ *)pLVar3,(Object *)data,
                       MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogEntry>__Contains_GNU__Gettext__CatalogEntry_
                      );
    if (bVar4 != 0) {
      pLVar3 = (this->fields).entriesList;
      if (pLVar3 == (List_1_GNU_Gettext_CatalogEntry_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
      List_1_System_Object__Remove
                ((List_1_System_Object_ *)pLVar3,(Object *)data,
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
  pSVar2 = StringLiteral_u000Au000D;
  if (pSVar1 != (String__Array *)0x0) {
    if (pSVar1->max_length != 0) {
      pSVar1->vector[0] = StringLiteral_u000Au000D;
      func_?(pSVar1->vector,pSVar2);
      pSVar2 = StringLiteral_u000Du000A;
      if (1 < pSVar1->max_length) {
        pSVar1->vector[1] = StringLiteral_u000Du000A;
        func_?(pSVar1->vector + 1,pSVar2);
        pSVar2 = StringLiteral_u000D;
        if (2 < pSVar1->max_length) {
          pSVar1->vector[2] = StringLiteral_u000D;
          func_?(pSVar1->vector + 2,pSVar2);
          pSVar2 = StringLiteral_u000A;
          if (3 < pSVar1->max_length) {
            pSVar1->vector[3] = StringLiteral_u000A;
            func_?(pSVar1->vector + 3,pSVar2);
            pSVar2 = StringLiteral_u000D;
            if (4 < pSVar1->max_length) {
              pSVar1->vector[4] = StringLiteral_u000D;
              func_?(pSVar1->vector + 4,pSVar2);
              pSVar1 = mscorlib.dll::System::String::String_Split_4
                                 (text,pSVar1,StringSplitOptions__Enum_None,(MethodInfo *)0x0);
              uVar3 = 0;
              if (pSVar1 == (String__Array *)0x0) goto code_?;
              ppSVar4 = pSVar1->vector;
              while( true ) {
                if ((int)pSVar1->max_length <= (int)uVar3) {
                  return;
                }
                if (pSVar1->max_length <= uVar3) break;
                if (sb == (StringBuilder *)0x0) goto code_?;
                mscorlib.dll::System::Text::StringBuilder::StringBuilder_AppendFormat_1
                          (sb,StringLiteral__0__1_,(Object *)*ppSVar4,(Object *)newLine,
                           (MethodInfo *)0x0);
                uVar3 = uVar3 + 1;
                ppSVar4 = ppSVar4 + 1;
              }
            }
          }
        }
      }
    }
    func_?();
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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
    this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
              (this->fields).headerEntries;
    if (this_00 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
      bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
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
        pSVar1 = StringLiteral_Last_Translator;
        pSVar2 = (this->fields).Translator;
        if (bVar4 == 0) {
          pSVar2 = mscorlib.dll::System::String::String_Format_1
                             (StringLiteral__0____1__,(Object *)pSVar2,
                              (Object *)(this->fields).TranslatorEmail,(MethodInfo *)0x0);
          pSVar1 = StringLiteral_Last_Translator;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pDVar3 = (this->fields).headerEntries;
        }
        else {
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pDVar3 = (this->fields).headerEntries;
        }
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
            func_?();
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
            pSVar1 = StringLiteral__1_0;
            pSVar2 = StringLiteral_MIME_Version;
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
                  pSVar1 = StringLiteral_X_Generator;
                  pSVar2 = StringLiteral_MonoDevelop_Gettext_addin;
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
  pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
            *)func_?(
                             TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::String>
                             );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  StyleComplexSelector+PseudoStateData]::
  Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
            (pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Dictionary__
            );
  ppDVar2 = &(this->fields).headerEntries;
  *ppDVar2 = (Dictionary_2_System_String_System_String_ *)pDVar1;
  func_?(ppDVar2,pDVar1);
  ppSVar3 = &(this->fields).Project;
  pSVar4 = TypeInfo__System__String->static_fields->Empty;
  *ppSVar3 = pSVar4;
  func_?(ppSVar3,pSVar4);
  ppSVar5 = &(this->fields).CreationDate;
  pSVar4 = TypeInfo__System__String->static_fields->Empty;
  *ppSVar5 = pSVar4;
  func_?(ppSVar5,pSVar4);
  ppSVar5 = &(this->fields).RevisionDate;
  pSVar4 = TypeInfo__System__String->static_fields->Empty;
  *ppSVar5 = pSVar4;
  func_?(ppSVar5,pSVar4);
  ppSVar5 = &(this->fields).Translator;
  pSVar4 = TypeInfo__System__String->static_fields->Empty;
  *ppSVar5 = pSVar4;
  func_?(ppSVar5,pSVar4);
  ppSVar5 = &(this->fields).TranslatorEmail;
  pSVar4 = TypeInfo__System__String->static_fields->Empty;
  *ppSVar5 = pSVar4;
  func_?(ppSVar5,pSVar4);
  ppSVar5 = &(this->fields).Team;
  pSVar4 = TypeInfo__System__String->static_fields->Empty;
  *ppSVar5 = pSVar4;
  func_?(ppSVar5,pSVar4);
  ppSVar5 = &(this->fields).TeamEmail;
  pSVar4 = TypeInfo__System__String->static_fields->Empty;
  *ppSVar5 = pSVar4;
  func_?(ppSVar5,pSVar4);
  ppSVar5 = &(this->fields).Charset;
  pSVar4 = TypeInfo__System__String->static_fields->Empty;
  *ppSVar5 = pSVar4;
  func_?(ppSVar5,pSVar4);
  ppSVar5 = &(this->fields).Language;
  pSVar4 = TypeInfo__System__String->static_fields->Empty;
  *ppSVar5 = pSVar4;
  func_?(ppSVar5,pSVar4);
  ppSVar5 = &(this->fields).Country;
  pSVar4 = TypeInfo__System__String->static_fields->Empty;
  *ppSVar5 = pSVar4;
  func_?(ppSVar5,pSVar4);
  method_00 = (MethodInfo *)&(this->fields).Comment;
  pSVar4 = TypeInfo__System__String->static_fields->Empty;
  *(String **)method_00 = pSVar4;
  func_?(method_00,pSVar4);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
            *)func_?(
                             TypeInfo__System__Collections__Generic__Dictionary<System::String,_GNU::Gettext::CatalogEntry>
                             );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  StyleComplexSelector+PseudoStateData]::
  Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
            (pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_GNU::Gettext::CatalogEntry>__Dictionary__
            );
  (this->fields).entriesDict = (IDictionary_2_System_String_GNU_Gettext_CatalogEntry_ *)pDVar1;
  func_?(&this->fields,pDVar1);
  this_00 = (List_1_GNU_Gettext_CatalogEntry_ *)func_?();
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogEntry>__List__);
  (this->fields).entriesList = this_00;
  func_?();
  this_01 = (List_1_GNU_Gettext_CatalogDeletedEntry_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<GNU::Gettext::CatalogDeletedEntry>
                           );
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_01,
             MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogDeletedEntry>__List__
            );
  ppLVar6 = &(this->fields).deletedEntriesList;
  *ppLVar6 = this_01;
  func_?(ppLVar6,this_01);
  (this->fields).isOk = 1;
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__DateTime->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  mscorlib.dll::System::DateTime::DateTime_get_Now((MethodInfo *)0x0);
  pSVar4 = mscorlib.dll::System::DateTime::DateTime_ToString_1
                     ((DateTime *)&stack0xfffffff4,StringLiteral_yyyy_MM_dd_HH___mm___sszz00,
                      (MethodInfo *)0x0);
  (this->fields).CreationDate = pSVar4;
  func_?();
  (this->fields).RevisionDate = pSVar4;
  func_?();
  pSVar4 = ::StringLiteral__;
  (this->fields).TeamEmail = ::StringLiteral__;
  func_?();
  ppSVar5 = &(this->fields).Team;
  *ppSVar5 = pSVar4;
  func_?(ppSVar5);
  *ppSVar3 = pSVar4;
  func_?(ppSVar3,pSVar4);
  ppSVar3 = &(this->fields).Country;
  *ppSVar3 = pSVar4;
  func_?(ppSVar3,pSVar4);
  (this->fields).Language = pSVar4;
  ppSStack7 = &(this->fields).Language;
  pSStack8 = pSVar4;
  func_?();
  ppSStack9 = &(this->fields).Charset;
  *ppSStack9 = StringLiteral_utf_8;
  pSStack10 = StringLiteral_utf_8;
  func_?();
  Catalog_UpdateHeaderDict(this,(MethodInfo *)0x0);
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
  ppEVar1 = &(this->fields).DirtyChanged;
  a = *ppEVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((EventHandler__Class *)pDVar2->klass == TypeInfo__System__EventHandler) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__System__EventHandler);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler *)func_?(ppEVar1,pDVar3,a);
    bVar6 = pEVar5 == a;
    a = pEVar5;
    if (bVar6) {
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
  mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor(this_00,(MethodInfo *)0x0);
  pSVar2 = (this->fields).Comment;
  this = (Catalog *)0x1000000;
  if (pSVar2 != (String *)0x0) {
    pSVar3 = mscorlib.dll::System::String::String_Split
                       (pSVar2,10,StringSplitOptions__Enum_None,(MethodInfo *)0x0);
    uVar4 = 0;
    if (pSVar3 != (String__Array *)0x0) {
      ppSVar5 = pSVar3->vector;
      for (; (int)uVar4 < (int)pSVar3->max_length; uVar4 = uVar4 + 1) {
        if (pSVar3->max_length <= uVar4) {
code_?:
          func_?();
          goto code_?;
        }
        pSVar2 = *ppSVar5;
        if (this._3_1_ == '\0') {
          if (this_00 == (StringBuilder *)0x0) goto code_?;
          mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_6
                    (this_00,10,(MethodInfo *)0x0);
        }
        if (pSVar2 == (String *)0x0) goto code_?;
        bVar1 = mscorlib.dll::System::String::String_StartsWith
                          (pSVar2,::StringLiteral__,(MethodInfo *)0x0);
        if (bVar1 == 0) {
          trimChars = (Char__Array *)func_?();
          if (trimChars == (Char__Array *)0x0) goto code_?;
          if ((trimChars->max_length == 0) ||
             (trimChars->vector[0] = 0x20, trimChars->max_length < 2)) goto code_?;
          trimChars->vector[1] = 9;
        }
        else {
          pSVar2 = mscorlib.dll::System::String::String_Substring(pSVar2,1,(MethodInfo *)0x0);
          trimChars = (Char__Array *)func_?();
          if (trimChars == (Char__Array *)0x0) goto code_?;
          if ((trimChars->max_length == 0) ||
             (trimChars->vector[0] = 0x20, trimChars->max_length < 2)) goto code_?;
          trimChars->vector[1] = 9;
          if (pSVar2 == (String *)0x0) goto code_?;
        }
        puVar6 = &UNK_?;
        pSVar2 = mscorlib.dll::System::String::String_TrimStart_1
                           (pSVar2,trimChars,(MethodInfo *)0x0);
        if (this_00 == (StringBuilder *)0x0) goto code_?;
        this = (Catalog *)&UNK_?;
        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                  (this_00,pSVar2,(MethodInfo *)0x0);
        ppSVar5 = (String **)(puVar6 + 4);
      }
      if (this_00 != (StringBuilder *)0x0) {
        pSVar2 = (String *)(*(code *)(this_00->klass->vtable).ToString.method)();
        return pSVar2;
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
    if ((TypeInfo__GNU__Gettext__IsoCodes->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__GNU__Gettext__IsoCodes);
    }
    if (cRam_? == '\0') {
      func_?(&
                      TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::IsoCodes::IsoCode>
                     );
      func_?(&TypeInfo__GNU__Gettext__IsoCodes);
      cRam_? = '\x01';
    }
    if ((TypeInfo__GNU__Gettext__IsoCodes->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    if (TypeInfo__GNU__Gettext__IsoCodes->static_fields->isoLanguagesByCode ==
        (IDictionary_2_System_String_GNU_Gettext_IsoCodes_IsoCode_ *)0x0) goto code_?;
    cVar3 = func_?();
    if (cVar3 == '\0') goto code_?;
    if ((TypeInfo__GNU__Gettext__IsoCodes->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    if (TypeInfo__GNU__Gettext__IsoCodes->static_fields->isoLanguagesByCode ==
        (IDictionary_2_System_String_GNU_Gettext_IsoCodes_IsoCode_ *)0x0) goto code_?;
    iVar4 = func_?();
    if (iVar4 == 0) goto code_?;
    pSVar1 = *(String **)(iVar4 + 0xc);
    bVar2 = mscorlib.dll::System::String::String_IsNullOrEmpty
                      ((this->fields).Country,(MethodInfo *)0x0);
    if (bVar2 != 0) goto code_?;
    pSVar1 = mscorlib.dll::System::String::String_Concat_3
                       (pSVar1,::StringLiteral__,(MethodInfo *)0x0);
    if ((TypeInfo__GNU__Gettext__IsoCodes->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    if (cRam_? == '\0') {
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    if ((TypeInfo__GNU__Gettext__IsoCodes->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    if (TypeInfo__GNU__Gettext__IsoCodes->static_fields->isoCountriesByCode ==
        (IDictionary_2_System_String_GNU_Gettext_IsoCodes_IsoCode_ *)0x0) goto code_?;
    cVar3 = func_?();
    if (cVar3 == '\0') {
code_?:
      pSVar5 = (String *)0x0;
    }
    else {
      if ((TypeInfo__GNU__Gettext__IsoCodes->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      if (TypeInfo__GNU__Gettext__IsoCodes->static_fields->isoCountriesByCode ==
          (IDictionary_2_System_String_GNU_Gettext_IsoCodes_IsoCode_ *)0x0) goto code_?;
      piVar6 = (int *)func_?();
      if (piVar6 == (int *)0x0) goto code_?;
      pSVar5 = (String *)(**(code **)(*piVar6 + 0xd8))();
    }
    pSVar1 = mscorlib.dll::System::String::String_Concat_3(pSVar1,pSVar5,(MethodInfo *)0x0);
  }
code_?:
  bVar2 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar1,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    bVar2 = mscorlib.dll::System::String::String_IsNullOrEmpty
                      ((this->fields).fileName,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      pSVar5 = (this->fields).fileName;
      if ((TypeInfo__System__IO__Path->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pSVar5 = mscorlib.dll::System::IO::Path::Path_GetFileNameWithoutExtension
                         (pSVar5,(MethodInfo *)0x0);
      if (pSVar5 == (String *)0x0) {
code_?:
        func_?();
        pcVar7 = (code *)swi(3);
        pSVar1 = (String *)(*pcVar7)();
        return pSVar1;
      }
      iVar4 = (pSVar5->fields)._stringLength;
      if (iVar4 == 2) {
        if ((TypeInfo__GNU__Gettext__IsoCodes->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        bVar2 = IsoCodes::IsoCodes_IsKnownLanguageCode(pSVar5,(MethodInfo *)0x0);
        if (bVar2 != 0) {
          pSVar1 = pSVar5;
        }
        return pSVar1;
      }
      if (iVar4 == 5) {
        uVar8 = mscorlib.dll::System::String::String_get_Chars(pSVar5,2,(MethodInfo *)0x0);
        if (uVar8 == 0x5f) {
          code = mscorlib.dll::System::String::String_Substring_1(pSVar5,0,2,(MethodInfo *)0x0);
          if ((TypeInfo__GNU__Gettext__IsoCodes->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          bVar2 = IsoCodes::IsoCodes_IsKnownLanguageCode(code,(MethodInfo *)0x0);
          if (bVar2 != 0) {
            mscorlib.dll::System::String::String_Substring_1(pSVar5,3,2,(MethodInfo *)0x0);
            if ((TypeInfo__GNU__Gettext__IsoCodes->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            if (cRam_? == '\0') {
              func_?();
              func_?();
              cRam_? = '\x01';
            }
            if ((TypeInfo__GNU__Gettext__IsoCodes->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            if (TypeInfo__GNU__Gettext__IsoCodes->static_fields->isoCountriesByCode ==
                (IDictionary_2_System_String_GNU_Gettext_IsoCodes_IsoCode_ *)0x0)
            goto code_?;
            cVar3 = func_?();
            if (cVar3 != '\0') {
              pSVar1 = pSVar5;
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
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
            (this->fields).headerEntries;
  if (this_00 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
    func_?();
    pcVar3 = (code *)swi(3);
    iVar1 = (*pcVar3)();
    return iVar1;
  }
  bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
          UIElements::TextureId]::
          Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
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
  this_01 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
             *)func_?(TypeInfo__System__Collections__Generic__List<System::String>);
  pLVar1 = this_01;
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_01,
             MethodInfo__System__Collections__Generic__List<System::String>__List__);
  pSVar2 = StringLiteral_Plural_Forms;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__ContainsKey_System__String_
                   );
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
            (this->fields).headerEntries;
  if (this_00 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
    bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      (this_00,(Object *)pSVar2,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__ContainsKey_System__String_
                      );
    if (bVar3 != 0) {
      pSVar2 = Catalog_GetHeader(this,StringLiteral_Plural_Forms,(MethodInfo *)0x0);
      pPVar4 = PluralFormsCalculator::PluralFormsCalculator_Make(pSVar2,(MethodInfo *)0x0);
      this_02 = pPVar4;
      iVar5 = Catalog_get_PluralFormsCount(this,(MethodInfo *)0x0);
      this = (Catalog *)0x0;
      if (iVar5 < 1) {
        if (this_01 ==
            (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
             *)0x0) goto code_?;
      }
      else {
        do {
          bVar6 = pPVar4 == (PluralFormsCalculator *)0x0;
          pMVar7 = in_stack_8;
          pPVar4 = this_02;
          if (bVar6) {
code_?:
            pIVar9 = TypeInfo__System__Int32;
            pOVar10 = (Object *)func_?();
            pSVar2 = mscorlib.dll::System::String::String_Format
                               (StringLiteral_Form__0_,pOVar10,(MethodInfo *)0x0);
          }
          else {
            pMVar7 = (MethodInfo *)0x1;
            this_01 = pLVar1;
            do {
              iVar11 = PluralFormsCalculator::PluralFormsCalculator_Evaluate_1
                                 (this_02,(ulonglong)(uint)((int)pMVar7 >> 0x1f),in_stack_8);
              if (iVar11 == (int)this) break;
              pMVar7 = (MethodInfo *)((int)&pMVar7->methodPointer + 1);
            } while ((int)pMVar7 < 1000);
            if (pMVar7 == (MethodInfo *)0x3e8) {
              this_01 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                         *)0x0;
              pPVar4 = (PluralFormsCalculator *)0x0;
              pMVar7 = (MethodInfo *)&UNK_?;
              iVar11 = PluralFormsCalculator::PluralFormsCalculator_Evaluate_1
                                 ((PluralFormsCalculator *)0x0,0,unaff_EBP);
              pLVar1 = this_01;
              if (iVar11 != (ulonglong)(uint)((int)this >> 0x1f) << 0x20) goto code_?;
              pMVar7 = (MethodInfo *)0x0;
            }
            pIVar9 = TypeInfo__System__Int32;
            pOVar10 = (Object *)func_?();
            arg1 = (Object *)func_?(TypeInfo__System__Int32,&stack0xffffffe8);
            pSVar2 = mscorlib.dll::System::String::String_Format_1
                               (StringLiteral_Form__0___e_g____1___,pOVar10,arg1,(MethodInfo *)0x0);
            pLVar1 = this_01;
          }
          this = (Catalog *)((int)&this->klass + 1);
          if (this_01 ==
              (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
               *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__Add
                    ((List_1_System_Object_ *)this_01,(Object *)pSVar2,
                     MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                    );
          in_stack_8 = pMVar7;
          this_02 = pPVar4;
        } while ((int)this < (int)pIVar9);
      }
      pMVar12 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal
               ::MultiColumnCollectionHeader+ViewState+ColumnState]::
               List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__ToArray
                         (this_01,
                          MethodInfo__System__Collections__Generic__List<System::String>__ToArray__)
      ;
      return (String__Array *)pMVar12;
    }
    if (this_01 !=
        (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_ *
        )0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                ((List_1_System_Object_ *)this_01,(Object *)StringLiteral_Singular,
                 MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                );
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                ((List_1_System_Object_ *)this_01,(Object *)StringLiteral_Plural,
                 MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                );
      pMVar12 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal
               ::MultiColumnCollectionHeader+ViewState+ColumnState]::
               List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__ToArray
                         (this_01,
                          MethodInfo__System__Collections__Generic__List<System::String>__ToArray__)
      ;
      return (String__Array *)pMVar12;
    }
  }
code_?:
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
  ppEVar1 = &(this->fields).DirtyChanged;
  source = *ppEVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((EventHandler__Class *)pDVar2->klass == TypeInfo__System__EventHandler) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__System__EventHandler);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler *)func_?(ppEVar1,pDVar3,source);
    bVar6 = pEVar5 == source;
    source = pEVar5;
    if (bVar6) {
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
    ppSVar3 = &(this->fields).Comment;
    *ppSVar3 = pSVar2;
    func_?(ppSVar3,pSVar2);
    return;
  }
  this_00 = (String__Array *)func_?(TypeInfo__System__Text__StringBuilder);
  mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor
            ((StringBuilder *)this_00,(MethodInfo *)0x0);
  pSVar4 = (String__Array *)func_?(TypeInfo__System__String,1);
  pSVar2 = mscorlib.dll::System::Environment::Environment_get_NewLine((MethodInfo *)0x0);
  if (pSVar4 != (String__Array *)0x0) {
    if (pSVar4->max_length == 0) {
code_?:
      func_?();
    }
    else {
      pSVar4->vector[0] = pSVar2;
      func_?(pSVar4->vector,pSVar2);
      if (value != (String *)0x0) {
        pSVar4 = mscorlib.dll::System::String::String_Split_4
                           (value,pSVar4,StringSplitOptions__Enum_None,(MethodInfo *)0x0);
        pSVar5 = (StringBuilder *)0x0;
        if (pSVar4 != (String__Array *)0x0) {
          ppSVar3 = pSVar4->vector;
          for (; (int)pSVar5 < (int)pSVar4->max_length;
              pSVar5 = (StringBuilder *)((int)&pSVar5->klass + 1)) {
            if ((StringBuilder *)pSVar4->max_length <= pSVar5) goto code_?;
            pSVar2 = *ppSVar3;
            if (this_00 == (String__Array *)0x0) goto code_?;
            pSVar4 = this_00;
            iVar6 = mscorlib.dll::System::Text::StringBuilder::StringBuilder_get_Length
                              ((StringBuilder *)this_00,(MethodInfo *)0x0);
            if (iVar6 != 0) {
              mscorlib.dll::System::Text::StringBuilder::StringBuilder_AppendLine
                        ((StringBuilder *)this_00,(MethodInfo *)0x0);
            }
            pSVar2 = mscorlib.dll::System::String::String_Concat_3
                               (::StringLiteral___,pSVar2,(MethodInfo *)0x0);
            mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                      ((StringBuilder *)this_00,pSVar2,(MethodInfo *)0x0);
            ppSVar3 = ppSVar3 + 1;
            this = (Catalog *)this_00;
          }
          if (this_00 != (String__Array *)0x0) {
            pSVar2 = (String *)
                     (*(code *)(((StringBuilder__Class *)this_00->klass)->vtable).ToString.method)
                               (this_00,(((StringBuilder__Class *)this_00->klass)->vtable).
                                        System_Runtime_Serialization_ISerializable_GetObjectData.
                                        methodPtr);
            ppSVar3 = &(this->fields).Comment;
            *ppSVar3 = pSVar2;
            func_?(ppSVar3,pSVar2);
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
  (*(code *)(this->klass->vtable).OnDirtyChanged.method)
            (this,TypeInfo__System__EventArgs->static_fields->Empty,this->klass[1]._0.image);
  return;
}

