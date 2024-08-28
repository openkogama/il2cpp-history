
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
    pLVar1 = (this->fields).autocomments;
    if (pLVar1 == (List_1_System_String_ *)0x0) goto code_?;
    bVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Contains
                      ((List_1_System_Object_ *)pLVar1,(Object *)comment,
                       MethodInfo__System__Collections__Generic__List<System::String>__Contains_System__String_
                      );
    if (bVar2 != 0) {
      return;
    }
  }
  pLVar1 = (this->fields).autocomments;
  if (pLVar1 != (List_1_System_String_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              ((List_1_System_Object_ *)pLVar1,(Object *)comment,
               MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_);
    return;
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
  pLVar1 = (this->fields).references;
  if (pLVar1 != (List_1_System_String_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Contains
                      ((List_1_System_Object_ *)pLVar1,(Object *)reference,
                       MethodInfo__System__Collections__Generic__List<System::String>__Contains_System__String_
                      );
    if (bVar2 == 0) {
      pLVar1 = (this->fields).references;
      if (pLVar1 == (List_1_System_String_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                ((List_1_System_Object_ *)pLVar1,(Object *)reference,
                 MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
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
  this_00 = (this->fields).owner;
  if (this_00 != (Catalog *)0x0) {
    Catalog::Catalog_set_IsDirty(this_00,1,(MethodInfo *)0x0);
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
  pLVar1 = (this->fields).references;
  if (pLVar1 != (List_1_System_String_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Contains
                      ((List_1_System_Object_ *)pLVar1,(Object *)reference,
                       MethodInfo__System__Collections__Generic__List<System::String>__Contains_System__String_
                      );
    if (bVar2 != 0) {
      pLVar1 = (this->fields).references;
      if (pLVar1 == (List_1_System_String_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
      List_1_System_Object__Remove
                ((List_1_System_Object_ *)pLVar1,(Object *)reference,
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
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).references;
  while (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    if ((this_00->fields)._size <= index) {
      return bVar1;
    }
    if ((this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
       (this_02 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (this_00,index,
                             MethodInfo__System__Collections__Generic__List<System::String>__get_Item_int_
                            ), this_02 == (RegexCharClass_SingleRange)0x0)) break;
    bVar2 = mscorlib.dll::System::String::String_StartsWith
                      ((String *)this_02,fileNamePrefix,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      this_01 = (this->fields).references;
      if (this_01 == (List_1_System_String_ *)0x0) break;
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
      List_1_System_Object__RemoveAt
                ((List_1_System_Object_ *)this_01,index,
                 MethodInfo__System__Collections__Generic__List<System::String>__RemoveAt_int_);
      bVar1 = 1;
      index = index + -1;
    }
    index = index + 1;
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this->fields).references;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  bVar1 = (*pcVar3)();
  return bVar1;
}


/* Void SetPluralString(String) */

void Assembly-CSharp.dll::GNU::Gettext::CatalogEntry::CatalogEntry_SetPluralString
               (CatalogEntry *this,String *plural,MethodInfo *method)

{
  ppSVar1 = &(this->fields).plural;
  *ppSVar1 = plural;
  func_?(ppSVar1,plural);
  bVar2 = mscorlib.dll::System::String::String_IsNullOrEmpty(plural,(MethodInfo *)0x0);
  (this->fields).hasPlural = bVar2 == 0;
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
        pCVar4 = (this->fields).owner;
        if (pCVar4 != (Catalog *)0x0) {
          if (cRam_? == '\0') {
            ppEStack5 = &TypeInfo__System__EventArgs;
            func_?();
            cRam_? = '\x01';
          }
          (pCVar4->fields).isDirty = 1;
          if ((TypeInfo__System__EventArgs->_1).cctor_finished_or_no_cctor == 0) {
            ppEStack5 = (EventArgs__Class **)TypeInfo__System__EventArgs;
            func_?();
          }
          ppEStack5 = (EventArgs__Class **)pCVar4->klass[1]._0.image;
          pEStack6 = TypeInfo__System__EventArgs->static_fields->Empty;
          (*(code *)(pCVar4->klass->vtable).OnDirtyChanged.method)();
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
  this_00 = (List_1_System_String_ *)
            func_?(TypeInfo__System__Collections__Generic__List<System::String>);
  mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object___ctor_1
            ((List_1_System_Object_ *)this_00,(IEnumerable_1_System_Object_ *)translations,
             MethodInfo__System__Collections__Generic__List<System::String>__List_System__Collections__Generic__IEnumerable<System::String>_
            );
  ppLVar1 = &(this->fields).translations;
  *ppLVar1 = this_00;
  func_?(ppLVar1,this_00);
  (this->fields).validity = 0;
  if ((this->fields).owner != (Catalog *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    *(undefined1 *)((int)in_stack_2 + 0x15) = in_stack_3;
    if ((TypeInfo__System__EventArgs->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    (**(code **)(*in_stack_2 + 0xf0))
              (in_stack_2,TypeInfo__System__EventArgs->static_fields->Empty);
    return;
  }
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
  method_00 = (MethodInfo *)&(this->fields).context;
  *(String **)method_00 = pSVar1;
  func_?(method_00,pSVar1);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  ppCVar2 = &(this->fields).owner;
  *ppCVar2 = owner;
  func_?(ppCVar2,owner);
  (this->fields).str = str;
  func_?(&this->fields,str);
  ppSVar3 = &(this->fields).plural;
  *ppSVar3 = plural;
  func_?(ppSVar3,plural);
  bVar4 = mscorlib.dll::System::String::String_IsNullOrEmpty(plural,(MethodInfo *)0x0);
  (this->fields).hasPlural = bVar4 == 0;
  pLVar5 = (List_1_System_String_ *)
           func_?(TypeInfo__System__Collections__Generic__List<System::String>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar5,
             MethodInfo__System__Collections__Generic__List<System::String>__List__);
  ppLVar6 = &(this->fields).references;
  *ppLVar6 = pLVar5;
  func_?(ppLVar6,pLVar5);
  pLVar5 = (List_1_System_String_ *)func_?();
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar5,
             MethodInfo__System__Collections__Generic__List<System::String>__List__);
  (this->fields).autocomments = pLVar5;
  func_?();
  pLVar5 = (List_1_System_String_ *)
           func_?(TypeInfo__System__Collections__Generic__List<System::String>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar5,
             MethodInfo__System__Collections__Generic__List<System::String>__List__);
  ppLVar6 = &(this->fields).translations;
  *ppLVar6 = pLVar5;
  func_?(ppLVar6,pLVar5);
  (this->fields).isFuzzy = 0;
  (this->fields).isModified = 0;
  (this->fields).isAutomatic = 0;
  (this->fields).validity = 0;
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
  method_00 = (MethodInfo *)&(this->fields).context;
  pSVar1 = TypeInfo__System__String->static_fields->Empty;
  *(String **)method_00 = pSVar1;
  func_?(method_00,pSVar1);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  ppCVar2 = &(this->fields).owner;
  *ppCVar2 = owner;
  func_?(ppCVar2,owner);
  if (dt != (CatalogEntry *)0x0) {
    pSVar1 = (dt->fields).str;
    (this->fields).str = pSVar1;
    func_?(&this->fields,pSVar1);
    pSVar1 = (dt->fields).plural;
    ppSVar3 = &(this->fields).plural;
    *ppSVar3 = pSVar1;
    func_?(ppSVar3,pSVar1);
    (this->fields).hasPlural = (dt->fields).hasPlural;
    pLVar4 = (dt->fields).translations;
    pLVar5 = (List_1_System_String_ *)
             func_?(TypeInfo__System__Collections__Generic__List<System::String>);
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
    List_1_System_Object___ctor_1
              ((List_1_System_Object_ *)pLVar5,(IEnumerable_1_System_Object_ *)pLVar4,
               MethodInfo__System__Collections__Generic__List<System::String>__List_System__Collections__Generic__IEnumerable<System::String>_
              );
    ppLVar6 = &(this->fields).translations;
    *ppLVar6 = pLVar5;
    func_?(ppLVar6,pLVar5);
    pLVar4 = (dt->fields).references;
    pLVar5 = (List_1_System_String_ *)
             func_?(TypeInfo__System__Collections__Generic__List<System::String>);
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
    List_1_System_Object___ctor_1
              ((List_1_System_Object_ *)pLVar5,(IEnumerable_1_System_Object_ *)pLVar4,
               MethodInfo__System__Collections__Generic__List<System::String>__List_System__Collections__Generic__IEnumerable<System::String>_
              );
    ppLVar6 = &(this->fields).references;
    *ppLVar6 = pLVar5;
    func_?(ppLVar6,pLVar5);
    pLVar7 = TypeInfo__System__Collections__Generic__List<System::String>;
    pLVar4 = (dt->fields).autocomments;
    pLVar5 = (List_1_System_String_ *)func_?();
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
    List_1_System_Object___ctor_1
              ((List_1_System_Object_ *)pLVar5,(IEnumerable_1_System_Object_ *)pLVar4,
               MethodInfo__System__Collections__Generic__List<System::String>__List_System__Collections__Generic__IEnumerable<System::String>_
              );
    (this->fields).autocomments = pLVar5;
    func_?();
    ppSVar3 = &(this->fields).moreFlags;
    (this->fields).isFuzzy = *(bool *)&(pLVar7->_0).element_class;
    (this->fields).isModified = *(bool *)((int)&(pLVar7->_0).element_class + 1);
    (this->fields).isAutomatic = *(bool *)((int)&(pLVar7->_0).element_class + 2);
    (this->fields).hasBadTokens = *(bool *)((int)&(pLVar7->_0).element_class + 3);
    *ppSVar3 = (String *)(pLVar7->_0).castClass;
    func_?(ppSVar3);
    pIVar8 = (pLVar7->_0).declaringType;
    ppSVar3 = &(this->fields).comment;
    *ppSVar3 = (String *)pIVar8;
    func_?(ppSVar3,pIVar8);
    ppSVar3 = &(this->fields).errorString;
    (this->fields).validity = (int32_t)(pLVar7->_0).parent;
    pSVar1 = (String *)(pLVar7->_0).generic_class;
    *ppSVar3 = pSVar1;
    func_?(ppSVar3,pSVar1);
    pSVar1 = (String *)(pLVar7->_0).typeMetadataHandle;
    ppSVar3 = &(this->fields).context;
    *ppSVar3 = pSVar1;
    func_?(ppSVar3,pSVar1);
    return;
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
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
  this_00 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
             *)(this->fields).autocomments;
  if (this_00 !=
      (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_ *)
      0x0) {
    pMVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
             MultiColumnCollectionHeader+ViewState+ColumnState]::
             List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__ToArray
                       (this_00,
                        MethodInfo__System__Collections__Generic__List<System::String>__ToArray__);
    return (String__Array *)pMVar1;
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
  pSVar1 = CatalogEntry_MakeKey((this->fields).str,(this->fields).context,(MethodInfo *)0x0);
  return pSVar1;
}


/* String get_LocaleCode() */

String * Assembly-CSharp.dll::GNU::Gettext::CatalogEntry::CatalogEntry_get_LocaleCode
                   (CatalogEntry *this,MethodInfo *method)

{
  pCVar1 = (this->fields).owner;
  if (pCVar1 == (Catalog *)0x0) goto code_?;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GNU__Gettext__IsoCodes);
    func_?(&TypeInfo__System__IO__Path);
    func_?(&TypeInfo__System__String);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  pSVar2 = TypeInfo__System__String->static_fields->Empty;
  bVar3 = mscorlib.dll::System::String::String_IsNullOrEmpty
                    ((pCVar1->fields).Language,(MethodInfo *)0x0);
  if (bVar3 == 0) {
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
    if ((TypeInfo__GNU__Gettext__IsoCodes->static_fields->isoLanguagesByCode ==
         (IDictionary_2_System_String_GNU_Gettext_IsoCodes_IsoCode_ *)0x0) ||
       (cVar4 = func_?(), cVar4 == '\0')) goto code_?;
    if ((TypeInfo__GNU__Gettext__IsoCodes->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    if ((TypeInfo__GNU__Gettext__IsoCodes->static_fields->isoLanguagesByCode ==
         (IDictionary_2_System_String_GNU_Gettext_IsoCodes_IsoCode_ *)0x0) ||
       (iVar5 = func_?(), iVar5 == 0)) goto code_?;
    pSVar2 = *(String **)(iVar5 + 0xc);
    bVar3 = mscorlib.dll::System::String::String_IsNullOrEmpty
                      ((pCVar1->fields).Country,(MethodInfo *)0x0);
    if (bVar3 != 0) goto code_?;
    pSVar2 = mscorlib.dll::System::String::String_Concat_3
                       (pSVar2,::StringLiteral__,(MethodInfo *)0x0);
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
    cVar4 = func_?();
    if (cVar4 == '\0') {
code_?:
      pSVar6 = (String *)0x0;
    }
    else {
      if ((TypeInfo__GNU__Gettext__IsoCodes->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      if (TypeInfo__GNU__Gettext__IsoCodes->static_fields->isoCountriesByCode ==
          (IDictionary_2_System_String_GNU_Gettext_IsoCodes_IsoCode_ *)0x0) goto code_?;
      piVar7 = (int *)func_?();
      if (piVar7 == (int *)0x0) goto code_?;
      pSVar6 = (String *)(**(code **)(*piVar7 + 0xd8))();
    }
    pSVar2 = mscorlib.dll::System::String::String_Concat_3(pSVar2,pSVar6,(MethodInfo *)0x0);
  }
code_?:
  bVar3 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar2,(MethodInfo *)0x0);
  if ((bVar3 != 0) &&
     (bVar3 = mscorlib.dll::System::String::String_IsNullOrEmpty
                        ((pCVar1->fields).fileName,(MethodInfo *)0x0), bVar3 == 0)) {
    pSVar6 = (pCVar1->fields).fileName;
    if ((TypeInfo__System__IO__Path->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pSVar6 = mscorlib.dll::System::IO::Path::Path_GetFileNameWithoutExtension
                       (pSVar6,(MethodInfo *)0x0);
    if (pSVar6 == (String *)0x0) {
code_?:
      func_?();
      func_?();
      pcVar8 = (code *)swi(3);
      pSVar2 = (String *)(*pcVar8)();
      return pSVar2;
    }
    iVar5 = (pSVar6->fields)._stringLength;
    if (iVar5 == 2) {
      if ((TypeInfo__GNU__Gettext__IsoCodes->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar3 = IsoCodes::IsoCodes_IsKnownLanguageCode(pSVar6,(MethodInfo *)0x0);
      if (bVar3 != 0) {
        pSVar2 = pSVar6;
      }
      return pSVar2;
    }
    if ((iVar5 == 5) &&
       (uVar9 = mscorlib.dll::System::String::String_get_Chars(pSVar6,2,(MethodInfo *)0x0),
       uVar9 == 0x5f)) {
      code = mscorlib.dll::System::String::String_Substring_1(pSVar6,0,2,(MethodInfo *)0x0);
      if ((TypeInfo__GNU__Gettext__IsoCodes->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar3 = IsoCodes::IsoCodes_IsKnownLanguageCode(code,(MethodInfo *)0x0);
      if (bVar3 != 0) {
        mscorlib.dll::System::String::String_Substring_1(pSVar6,3,2,(MethodInfo *)0x0);
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
        cVar4 = func_?();
        if (cVar4 != '\0') {
          pSVar2 = pSVar6;
        }
      }
    }
  }
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
  this_00 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
             *)(this->fields).references;
  if (this_00 !=
      (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_ *)
      0x0) {
    pMVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
             MultiColumnCollectionHeader+ViewState+ColumnState]::
             List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__ToArray
                       (this_00,
                        MethodInfo__System__Collections__Generic__List<System::String>__ToArray__);
    return (String__Array *)pMVar1;
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
  ppSVar1 = &(this->fields).comment;
  bVar2 = mscorlib.dll::System::String::String_op_Inequality(*ppSVar1,value,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    *ppSVar1 = value;
    func_?(ppSVar1,value);
    if ((this->fields).owner != (Catalog *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      *(undefined1 *)((int)in_stack_3 + 0x15) = in_stack_4;
      if ((TypeInfo__System__EventArgs->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      (**(code **)(*in_stack_3 + 0xf0))
                (in_stack_3,TypeInfo__System__EventArgs->static_fields->Empty);
      return;
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
  ppSVar1 = &(this->fields).moreFlags;
  (this->fields).isFuzzy = 0;
  pSVar2 = TypeInfo__System__String->static_fields->Empty;
  *ppSVar1 = pSVar2;
  func_?(ppSVar1,pSVar2);
  bVar3 = mscorlib.dll::System::String::String_IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    return;
  }
  trimChars = (Char__Array *)func_?(TypeInfo__System__Char,2);
  if (trimChars == (Char__Array *)0x0) goto code_?;
  if ((trimChars->max_length != 0) && (trimChars->vector[0] = 0x23, 1 < trimChars->max_length)) {
    trimChars->vector[1] = 0x2c;
    if ((value == (String *)0x0) ||
       (pSVar2 = mscorlib.dll::System::String::String_TrimStart_1(value,trimChars,(MethodInfo *)0x0)
       , pSVar2 == (String *)0x0)) goto code_?;
    pSVar4 = mscorlib.dll::System::String::String_Split
                       (pSVar2,0x2c,StringSplitOptions__Enum_None,(MethodInfo *)0x0);
    uVar5 = 0;
    if (pSVar4 == (String__Array *)0x0) goto code_?;
    ppSVar6 = pSVar4->vector;
    while( true ) {
      if ((int)pSVar4->max_length <= (int)uVar5) {
        return;
      }
      if (pSVar4->max_length <= uVar5) break;
      pSVar2 = *ppSVar6;
      if (pSVar2 == (String *)0x0) goto code_?;
      a = mscorlib.dll::System::String::String_Trim(pSVar2,(MethodInfo *)0x0);
      pSVar7 = StringLiteral_fuzzy;
      bVar3 = mscorlib.dll::System::String::String_op_Equality
                        (a,StringLiteral_fuzzy,(MethodInfo *)0x0);
      if (bVar3 == 0) {
        str0 = *ppSVar1;
        pSVar2 = mscorlib.dll::System::String::String_Trim(pSVar2,(MethodInfo *)0x0);
        pSVar2 = mscorlib.dll::System::String::String_Concat_4
                           (str0,::StringLiteral___,pSVar2,(MethodInfo *)0x0);
        ppSVar1 = (String **)&a[2].monitor;
        *ppSVar1 = pSVar2;
        func_?();
        uVar5 = uVar5 + 1;
        ppSVar6 = (String **)&pSVar7->monitor;
      }
      else {
        *(undefined1 *)&a[2].klass = 1;
        uVar5 = uVar5 + 1;
        ppSVar6 = (String **)&pSVar7->monitor;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void set_IsFuzzy(Boolean) */

void Assembly-CSharp.dll::GNU::Gettext::CatalogEntry::CatalogEntry_set_IsFuzzy
               (CatalogEntry *this,bool value,MethodInfo *method)

{
  (this->fields).isFuzzy = value;
  pCVar1 = (this->fields).owner;
  if (pCVar1 != (Catalog *)0x0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__EventArgs);
      cRam_? = '\x01';
    }
    (pCVar1->fields).isDirty = 1;
    if ((TypeInfo__System__EventArgs->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__EventArgs);
    }
    (*(code *)(pCVar1->klass->vtable).OnDirtyChanged.method)
              (pCVar1,TypeInfo__System__EventArgs->static_fields->Empty,pCVar1->klass[1]._0.image);
    return;
  }
  return;
}

