
/* Void AddAutoComment(String, Boolean) */

void Assembly-CSharp.dll::GNU::Gettext::CatalogEntry::CatalogEntry_AddAutoComment
               (CatalogEntry *this,String *comment,bool ifNotExists,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<System::String>__Contains_System__String_
                   );
    cRam_? = '\x01';
  }
  if (ifNotExists != 0) {
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this->fields).autocomments;
    if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
    goto code_?;
    bVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__Contains
                      (this_00,(RegexCharClass_SingleRange)comment,
                       MethodInfo__System__Collections__Generic__List<System::String>__Contains_System__String_
                      );
    if (bVar1 != 0) {
      return;
    }
  }
  this_01 = (this->fields).autocomments;
  if (this_01 != (List_1_System_String_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              ((List_1_System_Object_ *)this_01,(Object *)comment,
               MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_);
    return;
  }
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void AddAutoComment(String) */

void Assembly-CSharp.dll::GNU::Gettext::CatalogEntry::CatalogEntry_AddAutoComment_1
               (CatalogEntry *this,String *comment,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).autocomments;
  if (this_00 != (List_1_System_String_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              ((List_1_System_Object_ *)this_00,(Object *)comment,
               MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void AddReference(String) */

void Assembly-CSharp.dll::GNU::Gettext::CatalogEntry::CatalogEntry_AddReference
               (CatalogEntry *this,String *reference,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<System::String>__Contains_System__String_
                   );
    cRam_? = '\x01';
  }
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).references;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__Contains
                      (this_00,(RegexCharClass_SingleRange)reference,
                       MethodInfo__System__Collections__Generic__List<System::String>__Contains_System__String_
                      );
    if (bVar1 == 0) {
      this_01 = (this->fields).references;
      if (this_01 == (List_1_System_String_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                ((List_1_System_Object_ *)this_01,(Object *)reference,
                 MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
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


/* Void ClearAutoComments() */

void Assembly-CSharp.dll::GNU::Gettext::CatalogEntry::CatalogEntry_ClearAutoComments
               (CatalogEntry *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).autocomments;
  if (pLVar1 != (List_1_System_String_ *)0x0) {
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


/* Void ClearReferences() */

void Assembly-CSharp.dll::GNU::Gettext::CatalogEntry::CatalogEntry_ClearReferences
               (CatalogEntry *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).references;
  if (pLVar1 != (List_1_System_String_ *)0x0) {
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


/* String GetTranslation(Int32) */

String * Assembly-CSharp.dll::GNU::Gettext::CatalogEntry::CatalogEntry_GetTranslation
                   (CatalogEntry *this,int32_t index,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  if (-1 < index) {
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this->fields).translations;
    if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      uVar1 = func_?(&stack0xfffffff0);
      func_?(uVar1);
      pcVar2 = (code *)swi(3);
      pSVar3 = (String *)(*pcVar2)();
      return pSVar3;
    }
    if (index < (this_00->fields)._size) {
      RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (this_00,index,
                         MethodInfo__System__Collections__Generic__List<System::String>__get_Item_int_
                        );
      return (String *)RVar4;
    }
  }
  return TypeInfo__System__String->static_fields->Empty;
}


/* Boolean IsInFormat(String) */

bool Assembly-CSharp.dll::GNU::Gettext::CatalogEntry::CatalogEntry_IsInFormat
               (CatalogEntry *this,String *format,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral__0__format);
    cRam_? = '\x01';
  }
  bVar1 = mscorlib.dll::System::String::String_IsNullOrEmpty
                    ((this->fields).moreFlags,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    return 0;
  }
  pCVar2 = (CatalogEntry *)
           mscorlib.dll::System::String::String_Format
                     (StringLiteral__0__format,(Object *)format,(MethodInfo *)0x0);
  pSVar3 = (this->fields).moreFlags;
  if (pSVar3 != (String *)0x0) {
    pSVar4 = mscorlib.dll::System::String::String_Split
                       (pSVar3,0x2c,StringSplitOptions__Enum_None,(MethodInfo *)0x0);
    uVar5 = 0;
    if (pSVar4 != (String__Array *)0x0) {
      ppSVar6 = pSVar4->vector;
      this = pCVar2;
      while( true ) {
        pCVar2 = this;
        if ((int)pSVar4->max_length <= (int)uVar5) {
          return 0;
        }
        if (pSVar4->max_length <= uVar5) break;
        if (*ppSVar6 == (String *)0x0) goto code_?;
        pSVar3 = mscorlib.dll::System::String::String_Trim(*ppSVar6,(MethodInfo *)0x0);
        this = (CatalogEntry *)&UNK_?;
        bVar1 = mscorlib.dll::System::String::String_op_Equality
                          (pSVar3,(String *)pCVar2,(MethodInfo *)0x0);
        if (bVar1 != 0) {
          return 1;
        }
        uVar5 = uVar5 + 1;
        ppSVar6 = ppSVar6 + 1;
      }
      func_?();
    }
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  bVar1 = (*pcVar7)();
  return bVar1;
}


/* String MakeKey(String, String) */

String * Assembly-CSharp.dll::GNU::Gettext::CatalogEntry::CatalogEntry_MakeKey
                   (String *msgid,String *context,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__String);
    func_?(&StringLiteral__0__1_);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  bVar1 = mscorlib.dll::System::String::String_IsNullOrEmpty(msgid,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    bVar1 = mscorlib.dll::System::String::String_IsNullOrEmpty(context,(MethodInfo *)0x0);
    pSVar2 = StringLiteral__0__1_;
    if (bVar1 != 0) {
      pSVar2 = mscorlib.dll::System::String::String_Format_1
                         (StringLiteral__0__1_,
                          (Object *)TypeInfo__System__String->static_fields->Empty,(Object *)msgid,
                          (MethodInfo *)0x0);
      return pSVar2;
    }
    if (context != (String *)0x0) {
      pSVar3 = mscorlib.dll::System::String::String_Trim(context,(MethodInfo *)0x0);
      pSVar3 = mscorlib.dll::System::String::String_Concat_3
                         (pSVar3,::StringLiteral__,(MethodInfo *)0x0);
      pSVar2 = mscorlib.dll::System::String::String_Format_1
                         (pSVar2,(Object *)pSVar3,(Object *)msgid,(MethodInfo *)0x0);
      return pSVar2;
    }
  }
  else {
    uVar4 = func_?(&TypeInfo__System__Exception);
    this = (Exception *)func_?(uVar4);
    func_?(this);
    method_00 = (MethodInfo *)0x0;
    pSVar2 = (String *)func_?(&StringLiteral_Msgid_cannot_be_empty);
    mscorlib.dll::System::Exception::Exception__ctor_1(this,pSVar2,method_00);
    func_?(&MethodInfo__GNU__Gettext__CatalogEntry__MakeKey_System__String__System__String_
                   );
    func_?();
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pSVar2 = (String *)(*pcVar5)();
  return pSVar2;
}


/* Void MarkOwnerDirty() */

void Assembly-CSharp.dll::GNU::Gettext::CatalogEntry::CatalogEntry_MarkOwnerDirty
               (CatalogEntry *this,MethodInfo *method)

{
  if ((this->fields).owner != (Catalog *)0x0) {
    Catalog::Catalog_set_IsDirty((this->fields).owner,1,(MethodInfo *)0x0);
  }
  return;
}


/* Void RemoveReference(String) */

void Assembly-CSharp.dll::GNU::Gettext::CatalogEntry::CatalogEntry_RemoveReference
               (CatalogEntry *this,String *reference,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<System::String>__Contains_System__String_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<System::String>__Remove_System__String_
                   );
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
           (this->fields).references;
  if (pLVar1 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__Contains
                      (pLVar1,(RegexCharClass_SingleRange)reference,
                       MethodInfo__System__Collections__Generic__List<System::String>__Contains_System__String_
                      );
    if (bVar2 != 0) {
      pLVar1 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (this->fields).references;
      if (pLVar1 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
      goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
      RegexCharClass+SingleRange]::
      List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__Remove
                (pLVar1,(RegexCharClass_SingleRange)reference,
                 MethodInfo__System__Collections__Generic__List<System::String>__Remove_System__String_
                );
    }
    return;
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Boolean RemoveReferenceTo(String) */

bool Assembly-CSharp.dll::GNU::Gettext::CatalogEntry::CatalogEntry_RemoveReferenceTo
               (CatalogEntry *this,String *fileNamePrefix,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<System::String>__RemoveAt_int_);
    func_?(&MethodInfo__System__Collections__Generic__List<System::String>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<System::String>__get_Item_int_);
    cRam_? = '\x01';
  }
  bVar1 = 0;
  index = 0;
  pLVar2 = (this->fields).references;
  while (pLVar2 != (List_1_System_String_ *)0x0) {
    if ((pLVar2->fields)._size <= index) {
      return bVar1;
    }
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this->fields).references;
    if ((this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
       (this_01 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (this_00,index,
                             MethodInfo__System__Collections__Generic__List<System::String>__get_Item_int_
                            ), this_01 == (RegexCharClass_SingleRange)0x0)) break;
    bVar3 = mscorlib.dll::System::String::String_StartsWith
                      ((String *)this_01,fileNamePrefix,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      pLVar2 = (this->fields).references;
      if (pLVar2 == (List_1_System_String_ *)0x0) break;
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
      List_1_System_Object__RemoveAt
                ((List_1_System_Object_ *)pLVar2,index,
                 MethodInfo__System__Collections__Generic__List<System::String>__RemoveAt_int_);
      bVar1 = 1;
      index = index + -1;
    }
    index = index + 1;
    pLVar2 = (this->fields).references;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  bVar1 = (*pcVar4)();
  return bVar1;
}


/* Void SetPluralString(String) */

void Assembly-CSharp.dll::GNU::Gettext::CatalogEntry::CatalogEntry_SetPluralString
               (CatalogEntry *this,String *plural,MethodInfo *method)

{
  (this->fields).plural = plural;
  func_?(&(this->fields).plural,plural);
  bVar1 = mscorlib.dll::System::String::String_IsNullOrEmpty(plural,(MethodInfo *)0x0);
  (this->fields).hasPlural = bVar1 == 0;
  return;
}


/* Void SetString(String) */

void Assembly-CSharp.dll::GNU::Gettext::CatalogEntry::CatalogEntry_SetString
               (CatalogEntry *this,String *str,MethodInfo *method)

{
  (this->fields).str = str;
  func_?(&this->fields,str);
  (this->fields).validity = 0;
  return;
}


/* Void SetTranslation(String, Int32) */

void Assembly-CSharp.dll::GNU::Gettext::CatalogEntry::CatalogEntry_SetTranslation
               (CatalogEntry *this,String *translation,int32_t index,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<System::String>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<System::String>__get_Item_int_);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<System::String>__set_Item_int__System__String_
                   );
    func_?(&TypeInfo__System__String);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).translations;
  do {
    if (pLVar1 == (List_1_System_String_ *)0x0) {
code_?:
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this->fields).translations;
    if (index < (pLVar1->fields)._size) {
      if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
      goto code_?;
      a = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
          RegexCharClass+SingleRange]::
          List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                    (this_00,index,
                     MethodInfo__System__Collections__Generic__List<System::String>__get_Item_int_);
      bVar3 = mscorlib.dll::System::String::String_op_Inequality
                        ((String *)a,translation,(MethodInfo *)0x0);
      if (bVar3 != 0) {
        pLVar1 = (this->fields).translations;
        if (pLVar1 == (List_1_System_String_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__set_Item
                  ((List_1_System_Object_ *)pLVar1,index,
                   (Object *)
                   MethodInfo__System__Collections__Generic__List<System::String>__set_Item_int__System__String_
                   ,
                   MethodInfo__System__Collections__Generic__List<System::String>__set_Item_int__System__String_
                  );
        (this->fields).validity = 0;
        if ((this->fields).owner != (Catalog *)0x0) {
          Catalog::Catalog_set_IsDirty((this->fields).owner,1,(MethodInfo *)0x0);
        }
      }
      return;
    }
    if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
    goto code_?;
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              ((List_1_System_Object_ *)this_00,
               (Object *)TypeInfo__System__String->static_fields->Empty,
               MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_);
    pLVar1 = (this->fields).translations;
  } while( true );
}


/* Void SetTranslations(String[]) */

void Assembly-CSharp.dll::GNU::Gettext::CatalogEntry::CatalogEntry_SetTranslations
               (CatalogEntry *this,String__Array *translations,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<System::String>__List_System__Collections__Generic__IEnumerable<System::String>_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<System::String>);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
            func_?(TypeInfo__System__Collections__Generic__List<System::String>);
  if (this_00 != (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest___ctor_1
              (this_00,(IEnumerable_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                       translations,
               MethodInfo__System__Collections__Generic__List<System::String>__List_System__Collections__Generic__IEnumerable<System::String>_
              );
    (this->fields).translations = (List_1_System_String_ *)this_00;
    func_?(&(this->fields).translations,this_00);
    (this->fields).validity = 0;
    if ((this->fields).owner != (Catalog *)0x0) {
      Catalog::Catalog_set_IsDirty((this->fields).owner,1,(MethodInfo *)0x0);
    }
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* CatalogEntry(Catalog, String, String) */

void Assembly-CSharp.dll::GNU::Gettext::CatalogEntry::CatalogEntry__ctor
               (CatalogEntry *this,Catalog *owner,String *str,String *plural,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<System::String>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<System::String>);
    func_?(&TypeInfo__System__String);
    cRam_? = '\x01';
  }
  pSVar1 = TypeInfo__System__String->static_fields->Empty;
  (this->fields).context = pSVar1;
  method_00 = (MethodInfo *)&(this->fields).context;
  func_?(method_00,pSVar1);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  (this->fields).owner = owner;
  func_?(&(this->fields).owner,owner);
  (this->fields).str = str;
  func_?(&this->fields,str);
  (this->fields).plural = plural;
  func_?(&(this->fields).plural,plural);
  bVar2 = mscorlib.dll::System::String::String_IsNullOrEmpty(plural,(MethodInfo *)0x0);
  (this->fields).hasPlural = bVar2 == 0;
  pLVar3 = (List_1_System_String_ *)
           func_?(TypeInfo__System__Collections__Generic__List<System::String>);
  if (pLVar3 != (List_1_System_String_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)pLVar3,
               MethodInfo__System__Collections__Generic__List<System::String>__List__);
    (this->fields).references = pLVar3;
    func_?(&(this->fields).references);
    pLVar3 = (List_1_System_String_ *)
             func_?(TypeInfo__System__Collections__Generic__List<System::String>);
    if (pLVar3 != (List_1_System_String_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
      LowLevelList_1_System_Object___ctor
                ((LowLevelList_1_System_Object_ *)pLVar3,
                 MethodInfo__System__Collections__Generic__List<System::String>__List__);
      (this->fields).autocomments = pLVar3;
      func_?(&(this->fields).autocomments);
      pLVar3 = (List_1_System_String_ *)
               func_?(TypeInfo__System__Collections__Generic__List<System::String>);
      if (pLVar3 != (List_1_System_String_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
        LowLevelList_1_System_Object___ctor
                  ((LowLevelList_1_System_Object_ *)pLVar3,
                   MethodInfo__System__Collections__Generic__List<System::String>__List__);
        (this->fields).translations = pLVar3;
        func_?(&(this->fields).translations);
        (this->fields).isFuzzy = 0;
        (this->fields).isModified = 0;
        (this->fields).isAutomatic = 0;
        (this->fields).validity = 0;
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* CatalogEntry(Catalog, CatalogEntry) */

void Assembly-CSharp.dll::GNU::Gettext::CatalogEntry::CatalogEntry__ctor_1
               (CatalogEntry *this,Catalog *owner,CatalogEntry *dt,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<System::String>__List_System__Collections__Generic__IEnumerable<System::String>_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<System::String>);
    func_?(&TypeInfo__System__String);
    cRam_? = '\x01';
  }
  pSVar1 = TypeInfo__System__String->static_fields->Empty;
  (this->fields).context = pSVar1;
  method_00 = (MethodInfo *)&(this->fields).context;
  func_?(method_00,pSVar1);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  (this->fields).owner = owner;
  func_?(&(this->fields).owner,owner);
  if (dt != (CatalogEntry *)0x0) {
    pSVar1 = (dt->fields).str;
    (this->fields).str = pSVar1;
    func_?(&this->fields,pSVar1);
    pSVar1 = (dt->fields).plural;
    (this->fields).plural = pSVar1;
    func_?(&(this->fields).plural,pSVar1);
    (this->fields).hasPlural = (dt->fields).hasPlural;
    pLVar2 = (dt->fields).translations;
    pLVar3 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
             func_?(TypeInfo__System__Collections__Generic__List<System::String>);
    if (pLVar3 != (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
      UnitySynchronizationContext+WorkRequest]::
      List_1_UnityEngine_UnitySynchronizationContext_WorkRequest___ctor_1
                (pLVar3,(IEnumerable_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)pLVar2
                 ,
                 MethodInfo__System__Collections__Generic__List<System::String>__List_System__Collections__Generic__IEnumerable<System::String>_
                );
      (this->fields).translations = (List_1_System_String_ *)pLVar3;
      func_?(&(this->fields).translations,pLVar3);
      pLVar2 = (dt->fields).references;
      pLVar3 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
               func_?(TypeInfo__System__Collections__Generic__List<System::String>);
      if (pLVar3 != (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
        UnitySynchronizationContext+WorkRequest]::
        List_1_UnityEngine_UnitySynchronizationContext_WorkRequest___ctor_1
                  (pLVar3,(IEnumerable_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                          pLVar2,
                   MethodInfo__System__Collections__Generic__List<System::String>__List_System__Collections__Generic__IEnumerable<System::String>_
                  );
        (this->fields).references = (List_1_System_String_ *)pLVar3;
        func_?(&(this->fields).references,pLVar3);
        pLVar2 = (dt->fields).autocomments;
        pLVar3 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                 func_?(TypeInfo__System__Collections__Generic__List<System::String>);
        if (pLVar3 != (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
          UnitySynchronizationContext+WorkRequest]::
          List_1_UnityEngine_UnitySynchronizationContext_WorkRequest___ctor_1
                    (pLVar3,(IEnumerable_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                            pLVar2,
                     MethodInfo__System__Collections__Generic__List<System::String>__List_System__Collections__Generic__IEnumerable<System::String>_
                    );
          (this->fields).autocomments = (List_1_System_String_ *)pLVar3;
          func_?(&(this->fields).autocomments,pLVar3);
          (this->fields).isFuzzy = (dt->fields).isFuzzy;
          (this->fields).isModified = (dt->fields).isModified;
          (this->fields).isAutomatic = (dt->fields).isAutomatic;
          (this->fields).hasBadTokens = (dt->fields).hasBadTokens;
          pSVar1 = (dt->fields).moreFlags;
          (this->fields).moreFlags = pSVar1;
          func_?(&(this->fields).moreFlags,pSVar1);
          pSVar1 = (dt->fields).comment;
          (this->fields).comment = pSVar1;
          func_?(&(this->fields).comment,pSVar1);
          (this->fields).validity = (dt->fields).validity;
          pSVar1 = (dt->fields).errorString;
          (this->fields).errorString = pSVar1;
          func_?(&(this->fields).errorString,pSVar1);
          pSVar1 = (dt->fields).context;
          (this->fields).context = pSVar1;
          func_?(&(this->fields).context,pSVar1);
          return;
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* String[] get_AutoComments() */

String__Array *
Assembly-CSharp.dll::GNU::Gettext::CatalogEntry::CatalogEntry_get_AutoComments
          (CatalogEntry *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
            (this->fields).autocomments;
  if (this_00 != (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
    pUVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
             UnitySynchronizationContext+WorkRequest]::
             List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__ToArray
                       (this_00,
                        MethodInfo__System__Collections__Generic__List<System::String>__ToArray__);
    return (String__Array *)pUVar1;
  }
  uVar2 = func_?(&puStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  pSVar5 = (String__Array *)(*pcVar4)();
  return pSVar5;
}


/* String get_Flags() */

String * Assembly-CSharp.dll::GNU::Gettext::CatalogEntry::CatalogEntry_get_Flags
                   (CatalogEntry *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__String);
    func_?(&::StringLiteral__);
    func_?(&StringLiteral___fuzzy);
    cRam_? = '\x01';
  }
  pSVar1 = TypeInfo__System__String->static_fields->Empty;
  if ((this->fields).isFuzzy != 0) {
    pSVar1 = StringLiteral___fuzzy;
  }
  pSVar1 = mscorlib.dll::System::String::String_Concat_3
                     (pSVar1,(this->fields).moreFlags,(MethodInfo *)0x0);
  bVar2 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar1,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    return TypeInfo__System__String->static_fields->Empty;
  }
  pSVar1 = mscorlib.dll::System::String::String_Concat_3(::StringLiteral__,pSVar1,(MethodInfo *)0x0)
  ;
  return pSVar1;
}


/* Boolean get_HasComment() */

bool Assembly-CSharp.dll::GNU::Gettext::CatalogEntry::CatalogEntry_get_HasComment
               (CatalogEntry *this,MethodInfo *method)

{
  bVar1 = mscorlib.dll::System::String::String_IsNullOrEmpty
                    ((this->fields).comment,(MethodInfo *)0x0);
  return bVar1 == 0;
}


/* Boolean get_HasContext() */

bool Assembly-CSharp.dll::GNU::Gettext::CatalogEntry::CatalogEntry_get_HasContext
               (CatalogEntry *this,MethodInfo *method)

{
  bVar1 = mscorlib.dll::System::String::String_IsNullOrEmpty
                    ((this->fields).context,(MethodInfo *)0x0);
  return bVar1 == 0;
}


/* Boolean get_IsModified() */

bool Assembly-CSharp.dll::GNU::Gettext::CatalogEntry::CatalogEntry_get_IsModified
               (CatalogEntry *this,MethodInfo *method)

{
  return (this->fields).isModified;
}


/* Boolean get_IsTranslated() */

bool Assembly-CSharp.dll::GNU::Gettext::CatalogEntry::CatalogEntry_get_IsTranslated
               (CatalogEntry *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<System::String>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<System::String>__get_Item_int_);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).translations;
  if (pLVar1 != (List_1_System_String_ *)0x0) {
    iVar2 = (pLVar1->fields)._size;
    pCVar3 = (this->fields).owner;
    if (pCVar3 != (Catalog *)0x0) {
      iVar4 = Catalog::Catalog_get_PluralFormsCount(pCVar3,(MethodInfo *)0x0);
      if (iVar2 < iVar4) {
        if ((this->fields).hasPlural == 0) {
          pLVar5 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                   (this->fields).translations;
          if (pLVar5 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
          goto code_?;
          RVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (pLVar5,0,
                             MethodInfo__System__Collections__Generic__List<System::String>__get_Item_int_
                            );
          bVar7 = mscorlib.dll::System::String::String_IsNullOrEmpty
                            ((String *)RVar6,(MethodInfo *)0x0);
          pCVar3 = (Catalog *)(uint)(bVar7 == 0);
        }
        else {
          pCVar3 = (Catalog *)0x0;
        }
      }
      else {
        pCVar3 = (Catalog *)0x1;
      }
      if (((char)pCVar3 == '\0') || ((this->fields).hasPlural == 0)) {
code_?:
        return (bool)pCVar3;
      }
      iVar2 = 0;
      pCVar3 = (this->fields).owner;
      while (pCVar3 != (Catalog *)0x0) {
        iVar4 = Catalog::Catalog_get_PluralFormsCount(pCVar3,(MethodInfo *)0x0);
        if (iVar4 <= iVar2) goto code_?;
        pLVar5 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                 (this->fields).translations;
        if (pLVar5 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
        break;
        RVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (pLVar5,iVar2,
                           MethodInfo__System__Collections__Generic__List<System::String>__get_Item_int_
                          );
        bVar7 = mscorlib.dll::System::String::String_IsNullOrEmpty
                          ((String *)RVar6,(MethodInfo *)0x0);
        if (bVar7 != 0) {
          return 0;
        }
        iVar2 = iVar2 + 1;
        pCVar3 = (this->fields).owner;
      }
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  bVar7 = (*pcVar8)();
  return bVar7;
}


/* String get_Key() */

String * Assembly-CSharp.dll::GNU::Gettext::CatalogEntry::CatalogEntry_get_Key
                   (CatalogEntry *this,MethodInfo *method)

{
  pSVar1 = (this->fields).str;
  pSVar2 = (this->fields).context;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__String);
    func_?(&StringLiteral__0__1_);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  bVar3 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar1,(MethodInfo *)0x0);
  if (bVar3 == 0) {
    bVar3 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar2,(MethodInfo *)0x0);
    format = StringLiteral__0__1_;
    if (bVar3 != 0) {
      pSVar1 = mscorlib.dll::System::String::String_Format_1
                         (StringLiteral__0__1_,
                          (Object *)TypeInfo__System__String->static_fields->Empty,(Object *)pSVar1,
                          (MethodInfo *)0x0);
      return pSVar1;
    }
    if (pSVar2 != (String *)0x0) {
      pSVar2 = mscorlib.dll::System::String::String_Trim(pSVar2,(MethodInfo *)0x0);
      pSVar2 = mscorlib.dll::System::String::String_Concat_3
                         (pSVar2,::StringLiteral__,(MethodInfo *)0x0);
      pSVar1 = mscorlib.dll::System::String::String_Format_1
                         (format,(Object *)pSVar2,(Object *)pSVar1,(MethodInfo *)0x0);
      return pSVar1;
    }
  }
  else {
    uVar4 = func_?(&TypeInfo__System__Exception);
    this_00 = (Exception *)func_?(uVar4);
    func_?(this_00);
    method_00 = (MethodInfo *)0x0;
    pSVar1 = (String *)func_?(&StringLiteral_Msgid_cannot_be_empty);
    mscorlib.dll::System::Exception::Exception__ctor_1(this_00,pSVar1,method_00);
    func_?(&MethodInfo__GNU__Gettext__CatalogEntry__MakeKey_System__String__System__String_
                   );
    func_?(this_00);
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar5)();
  return pSVar1;
}


/* String get_LocaleCode() */

String * Assembly-CSharp.dll::GNU::Gettext::CatalogEntry::CatalogEntry_get_LocaleCode
                   (CatalogEntry *this,MethodInfo *method)

{
  pCVar1 = (this->fields).owner;
  if (pCVar1 != (Catalog *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      func_?();
      func_?();
      func_?(&::StringLiteral__);
      cRam_? = '\x01';
    }
    pSVar2 = TypeInfo__System__String->static_fields->Empty;
    bVar3 = mscorlib.dll::System::String::String_IsNullOrEmpty
                      ((pCVar1->fields).Language,(MethodInfo *)0x0);
    if (bVar3 == 0) {
      pSVar2 = (pCVar1->fields).Language;
      if ((TypeInfo__GNU__Gettext__IsoCodes->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__GNU__Gettext__IsoCodes);
      }
      pIVar4 = IsoCodes::IsoCodes_LookupLanguageCode(pSVar2,(MethodInfo *)0x0);
      if (pIVar4 == (IsoCodes_IsoCode *)0x0) goto code_?;
      pSVar2 = (pIVar4->fields).name;
      bVar3 = mscorlib.dll::System::String::String_IsNullOrEmpty
                        ((pCVar1->fields).Country,(MethodInfo *)0x0);
      if (bVar3 == 0) {
        pSVar5 = mscorlib.dll::System::String::String_Concat_3
                           (pSVar2,::StringLiteral__,(MethodInfo *)0x0);
        pSVar2 = (pCVar1->fields).Country;
        if ((TypeInfo__GNU__Gettext__IsoCodes->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__GNU__Gettext__IsoCodes);
        }
        pIVar4 = IsoCodes::IsoCodes_LookupCountryCode(pSVar2,(MethodInfo *)0x0);
        if (pIVar4 == (IsoCodes_IsoCode *)0x0) {
          pSVar2 = (String *)0x0;
        }
        else {
          pSVar2 = (String *)
                   (*(pIVar4->klass->vtable).ToString.methodPtr)
                             (pIVar4,(pIVar4->klass->vtable).ToString.method);
        }
        pSVar2 = mscorlib.dll::System::String::String_Concat_3(pSVar5,pSVar2,(MethodInfo *)0x0);
      }
    }
    bVar3 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar2,(MethodInfo *)0x0);
    if ((bVar3 != 0) &&
       (bVar3 = mscorlib.dll::System::String::String_IsNullOrEmpty
                          ((pCVar1->fields).fileName,(MethodInfo *)0x0), bVar3 == 0)) {
      pSVar5 = (pCVar1->fields).fileName;
      if ((TypeInfo__System__IO__Path->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pSVar5 = mscorlib.dll::System::IO::Path::Path_GetFileNameWithoutExtension
                         (pSVar5,(MethodInfo *)0x0);
      if (pSVar5 == (String *)0x0) goto code_?;
      if ((pSVar5->fields)._stringLength == 2) {
        if ((TypeInfo__GNU__Gettext__IsoCodes->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        bVar3 = IsoCodes::IsoCodes_IsKnownLanguageCode(pSVar5,(MethodInfo *)0x0);
        if (bVar3 != 0) {
          pSVar2 = pSVar5;
        }
        return pSVar2;
      }
      if (((pSVar5->fields)._stringLength == 5) &&
         (uVar6 = mscorlib.dll::System::String::String_get_Chars(pSVar5,2,(MethodInfo *)0x0),
         uVar6 == 0x5f)) {
        pSVar7 = mscorlib.dll::System::String::String_Substring_1(pSVar5,0,2,(MethodInfo *)0x0);
        if ((TypeInfo__GNU__Gettext__IsoCodes->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        bVar3 = IsoCodes::IsoCodes_IsKnownLanguageCode(pSVar7,(MethodInfo *)0x0);
        if (bVar3 != 0) {
          pSVar7 = mscorlib.dll::System::String::String_Substring_1(pSVar5,3,2,(MethodInfo *)0x0);
          if ((TypeInfo__GNU__Gettext__IsoCodes->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          bVar3 = IsoCodes::IsoCodes_IsKnownCountryCode(pSVar7,(MethodInfo *)0x0);
          if (bVar3 != 0) {
            pSVar2 = pSVar5;
          }
        }
      }
    }
    return pSVar2;
  }
code_?:
  uVar8 = func_?(&stack0xfffffff0);
  func_?(uVar8);
  pcVar9 = (code *)swi(3);
  pSVar2 = (String *)(*pcVar9)();
  return pSVar2;
}


/* Int32 get_NumberOfTranslations() */

int32_t Assembly-CSharp.dll::GNU::Gettext::CatalogEntry::CatalogEntry_get_NumberOfTranslations
                  (CatalogEntry *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppMStack_1 = &MethodInfo__System__Collections__Generic__List<System::String>__get_Count__;
    func_?();
    cRam_? = '\x01';
  }
  pLVar2 = (this->fields).translations;
  if (pLVar2 != (List_1_System_String_ *)0x0) {
    return (pLVar2->fields)._size;
  }
  ppMStack_1 = (MethodInfo **)&stack0xfffffffc;
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  iVar6 = (*pcVar5)();
  return iVar6;
}


/* String[] get_References() */

String__Array *
Assembly-CSharp.dll::GNU::Gettext::CatalogEntry::CatalogEntry_get_References
          (CatalogEntry *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)(this->fields).references
  ;
  if (this_00 != (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
    pUVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
             UnitySynchronizationContext+WorkRequest]::
             List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__ToArray
                       (this_00,
                        MethodInfo__System__Collections__Generic__List<System::String>__ToArray__);
    return (String__Array *)pUVar1;
  }
  uVar2 = func_?(&puStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  pSVar5 = (String__Array *)(*pcVar4)();
  return pSVar5;
}


/* Int32 get_TranslationsCount() */

int32_t Assembly-CSharp.dll::GNU::Gettext::CatalogEntry::CatalogEntry_get_TranslationsCount
                  (CatalogEntry *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppMStack_1 = &MethodInfo__System__Collections__Generic__List<System::String>__get_Count__;
    func_?();
    cRam_? = '\x01';
  }
  pLVar2 = (this->fields).translations;
  if (pLVar2 != (List_1_System_String_ *)0x0) {
    return (pLVar2->fields)._size;
  }
  ppMStack_1 = (MethodInfo **)&stack0xfffffffc;
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  iVar6 = (*pcVar5)();
  return iVar6;
}


/* Void set_Comment(String) */

void Assembly-CSharp.dll::GNU::Gettext::CatalogEntry::CatalogEntry_set_Comment
               (CatalogEntry *this,String *value,MethodInfo *method)

{
  bVar1 = mscorlib.dll::System::String::String_op_Inequality
                    ((this->fields).comment,value,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    (this->fields).comment = value;
    func_?(&(this->fields).comment,value);
    if ((this->fields).owner != (Catalog *)0x0) {
      Catalog::Catalog_set_IsDirty((this->fields).owner,1,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void set_Context(String) */

void Assembly-CSharp.dll::GNU::Gettext::CatalogEntry::CatalogEntry_set_Context
               (CatalogEntry *this,String *value,MethodInfo *method)

{
  if (value != (String *)0x0) {
    pSVar1 = mscorlib.dll::System::String::String_Trim(value,(MethodInfo *)0x0);
    (this->fields).context = pSVar1;
    func_?();
    return;
  }
  uVar2 = func_?(&puStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void set_Flags(String) */

void Assembly-CSharp.dll::GNU::Gettext::CatalogEntry::CatalogEntry_set_Flags
               (CatalogEntry *this,String *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Char);
    func_?(&TypeInfo__System__String);
    func_?(&::StringLiteral___);
    func_?(&StringLiteral_fuzzy);
    cRam_? = '\x01';
  }
  (this->fields).isFuzzy = 0;
  pSVar1 = TypeInfo__System__String->static_fields->Empty;
  (this->fields).moreFlags = pSVar1;
  func_?(&(this->fields).moreFlags,pSVar1);
  bVar2 = mscorlib.dll::System::String::String_IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    return;
  }
  trimChars = (Char__Array *)func_?(TypeInfo__System__Char,2);
  if (trimChars == (Char__Array *)0x0) goto code_?;
  if ((trimChars->max_length != 0) && (trimChars->vector[0] = 0x23, 1 < trimChars->max_length)) {
    trimChars->vector[1] = 0x2c;
    if ((value == (String *)0x0) ||
       (pSVar1 = mscorlib.dll::System::String::String_TrimStart_1(value,trimChars,(MethodInfo *)0x0)
       , pSVar1 == (String *)0x0)) goto code_?;
    pSVar3 = mscorlib.dll::System::String::String_Split
                       (pSVar1,0x2c,StringSplitOptions__Enum_None,(MethodInfo *)0x0);
    uVar4 = 0;
    if (pSVar3 == (String__Array *)0x0) goto code_?;
    ppSVar5 = pSVar3->vector;
    while( true ) {
      if ((int)pSVar3->max_length <= (int)uVar4) {
        return;
      }
      if (pSVar3->max_length <= uVar4) break;
      pSVar1 = *ppSVar5;
      if (pSVar1 == (String *)0x0) goto code_?;
      a = mscorlib.dll::System::String::String_Trim(pSVar1,(MethodInfo *)0x0);
      pSVar6 = StringLiteral_fuzzy;
      bVar2 = mscorlib.dll::System::String::String_op_Equality
                        (a,StringLiteral_fuzzy,(MethodInfo *)0x0);
      if (bVar2 == 0) {
        pSVar1 = mscorlib.dll::System::String::String_Trim(pSVar1,(MethodInfo *)0x0);
        pSRam00000000 =
             mscorlib.dll::System::String::String_Concat_4
                       (pSRam00000000,::StringLiteral___,pSVar1,(MethodInfo *)0x0);
        func_?();
        uVar4 = uVar4 + 1;
        ppSVar5 = ppSVar5 + 1;
        this = (CatalogEntry *)pSVar6;
      }
      else {
        (this->fields).isFuzzy = 1;
        uVar4 = uVar4 + 1;
        ppSVar5 = ppSVar5 + 1;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void set_IsAutomatic(Boolean) */

void Assembly-CSharp.dll::GNU::Gettext::CatalogEntry::CatalogEntry_set_IsAutomatic
               (CatalogEntry *this,bool value,MethodInfo *method)

{
  (this->fields).isAutomatic = value;
  return;
}


/* Void set_IsFuzzy(Boolean) */

void Assembly-CSharp.dll::GNU::Gettext::CatalogEntry::CatalogEntry_set_IsFuzzy
               (CatalogEntry *this,bool value,MethodInfo *method)

{
  (this->fields).isFuzzy = value;
  if ((this->fields).owner != (Catalog *)0x0) {
    Catalog::Catalog_set_IsDirty((this->fields).owner,1,(MethodInfo *)0x0);
  }
  return;
}


/* Void set_IsModified(Boolean) */

void Assembly-CSharp.dll::GNU::Gettext::CatalogEntry::CatalogEntry_set_IsModified
               (CatalogEntry *this,bool value,MethodInfo *method)

{
  (this->fields).isModified = value;
  return;
}

