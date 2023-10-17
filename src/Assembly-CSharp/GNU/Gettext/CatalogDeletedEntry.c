
/* Void AddAutoComments(String) */

void Assembly-CSharp.dll::GNU::Gettext::CatalogDeletedEntry::CatalogDeletedEntry_AddAutoComments
               (CatalogDeletedEntry *this,String *comment,MethodInfo *method)

{
  if (cRam_? == '\0') {
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

void Assembly-CSharp.dll::GNU::Gettext::CatalogDeletedEntry::CatalogDeletedEntry_AddReference
               (CatalogDeletedEntry *this,String *reference,MethodInfo *method)

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

void Assembly-CSharp.dll::GNU::Gettext::CatalogDeletedEntry::CatalogDeletedEntry_ClearAutoComments
               (CatalogDeletedEntry *this,MethodInfo *method)

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

void Assembly-CSharp.dll::GNU::Gettext::CatalogDeletedEntry::CatalogDeletedEntry_ClearReferences
               (CatalogDeletedEntry *this,MethodInfo *method)

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


/* Void SetDeletedLines(String[]) */

void Assembly-CSharp.dll::GNU::Gettext::CatalogDeletedEntry::CatalogDeletedEntry_SetDeletedLines
               (CatalogDeletedEntry *this,String__Array *lines,MethodInfo *method)

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
              (this_00,(IEnumerable_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)lines,
               MethodInfo__System__Collections__Generic__List<System::String>__List_System__Collections__Generic__IEnumerable<System::String>_
              );
    (this->fields).deletedLines = (List_1_System_String_ *)this_00;
    func_?(&this->fields,this_00);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* CatalogDeletedEntry(String[]) */

void Assembly-CSharp.dll::GNU::Gettext::CatalogDeletedEntry::CatalogDeletedEntry__ctor
               (CatalogDeletedEntry *this,String__Array *deletedLines,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<System::String>__List_System__Collections__Generic__IEnumerable<System::String>_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<System::String>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<System::String>);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  this_00 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
            func_?(TypeInfo__System__Collections__Generic__List<System::String>);
  if (this_00 != (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest___ctor_1
              (this_00,(IEnumerable_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                       deletedLines,
               MethodInfo__System__Collections__Generic__List<System::String>__List_System__Collections__Generic__IEnumerable<System::String>_
              );
    (this->fields).deletedLines = (List_1_System_String_ *)this_00;
    func_?(&this->fields,this_00);
    pLVar1 = (List_1_System_String_ *)
             func_?(TypeInfo__System__Collections__Generic__List<System::String>);
    if (pLVar1 != (List_1_System_String_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
      LowLevelList_1_System_Object___ctor
                ((LowLevelList_1_System_Object_ *)pLVar1,
                 MethodInfo__System__Collections__Generic__List<System::String>__List__);
      (this->fields).references = pLVar1;
      func_?(&(this->fields).references,pLVar1);
      pLVar1 = (List_1_System_String_ *)
               func_?(TypeInfo__System__Collections__Generic__List<System::String>);
      if (pLVar1 != (List_1_System_String_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
        LowLevelList_1_System_Object___ctor
                  ((LowLevelList_1_System_Object_ *)pLVar1,
                   MethodInfo__System__Collections__Generic__List<System::String>__List__);
        (this->fields).autocomments = pLVar1;
        func_?(&(this->fields).autocomments,pLVar1);
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* CatalogDeletedEntry(CatalogDeletedEntry) */

void Assembly-CSharp.dll::GNU::Gettext::CatalogDeletedEntry::CatalogDeletedEntry__ctor_1
               (CatalogDeletedEntry *this,CatalogDeletedEntry *dt,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<System::String>__List_System__Collections__Generic__IEnumerable<System::String>_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<System::String>);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  if (dt != (CatalogDeletedEntry *)0x0) {
    pLVar1 = (dt->fields).deletedLines;
    pLVar2 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
             func_?(TypeInfo__System__Collections__Generic__List<System::String>);
    if (pLVar2 != (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
      UnitySynchronizationContext+WorkRequest]::
      List_1_UnityEngine_UnitySynchronizationContext_WorkRequest___ctor_1
                (pLVar2,(IEnumerable_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)pLVar1
                 ,
                 MethodInfo__System__Collections__Generic__List<System::String>__List_System__Collections__Generic__IEnumerable<System::String>_
                );
      (this->fields).deletedLines = (List_1_System_String_ *)pLVar2;
      func_?(&this->fields,pLVar2);
      pLVar1 = (dt->fields).references;
      pLVar2 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
               func_?(TypeInfo__System__Collections__Generic__List<System::String>);
      if (pLVar2 != (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
        UnitySynchronizationContext+WorkRequest]::
        List_1_UnityEngine_UnitySynchronizationContext_WorkRequest___ctor_1
                  (pLVar2,(IEnumerable_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                          pLVar1,
                   MethodInfo__System__Collections__Generic__List<System::String>__List_System__Collections__Generic__IEnumerable<System::String>_
                  );
        (this->fields).references = (List_1_System_String_ *)pLVar2;
        func_?(&(this->fields).references,pLVar2);
        pLVar1 = (dt->fields).autocomments;
        pLVar2 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                 func_?(TypeInfo__System__Collections__Generic__List<System::String>);
        if (pLVar2 != (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
          UnitySynchronizationContext+WorkRequest]::
          List_1_UnityEngine_UnitySynchronizationContext_WorkRequest___ctor_1
                    (pLVar2,(IEnumerable_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                            pLVar1,
                     MethodInfo__System__Collections__Generic__List<System::String>__List_System__Collections__Generic__IEnumerable<System::String>_
                    );
          (this->fields).autocomments = (List_1_System_String_ *)pLVar2;
          func_?(&(this->fields).autocomments,pLVar2);
          pSVar3 = (dt->fields).flags;
          (this->fields).flags = pSVar3;
          func_?(&(this->fields).flags,pSVar3);
          pSVar3 = (dt->fields).comment;
          (this->fields).comment = pSVar3;
          func_?(&(this->fields).comment,pSVar3);
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
Assembly-CSharp.dll::GNU::Gettext::CatalogDeletedEntry::CatalogDeletedEntry_get_AutoComments
          (CatalogDeletedEntry *this,MethodInfo *method)

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


/* String[] get_DeletedLines() */

String__Array *
Assembly-CSharp.dll::GNU::Gettext::CatalogDeletedEntry::CatalogDeletedEntry_get_DeletedLines
          (CatalogDeletedEntry *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
            (this->fields).deletedLines;
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

String * Assembly-CSharp.dll::GNU::Gettext::CatalogDeletedEntry::CatalogDeletedEntry_get_Flags
                   (CatalogDeletedEntry *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__String);
    func_?(&::StringLiteral____);
    func_?(&::StringLiteral___);
    cRam_? = '\x01';
  }
  bVar1 = mscorlib.dll::System::String::String_IsNullOrEmpty((this->fields).flags,(MethodInfo *)0x0)
  ;
  if (bVar1 != 0) {
    return TypeInfo__System__String->static_fields->Empty;
  }
  pSVar2 = (this->fields).flags;
  if (pSVar2 == (String *)0x0) {
    func_?();
    pcVar3 = (code *)swi(3);
    pSVar2 = (String *)(*pcVar3)();
    return pSVar2;
  }
  bVar1 = mscorlib.dll::System::String::String_StartsWith
                    (pSVar2,::StringLiteral___,(MethodInfo *)0x0);
  pSVar2 = (this->fields).flags;
  if (bVar1 == 0) {
    pSVar2 = mscorlib.dll::System::String::String_Concat_3
                       (::StringLiteral____,pSVar2,(MethodInfo *)0x0);
    return pSVar2;
  }
  return pSVar2;
}


/* Boolean get_HasComment() */

bool Assembly-CSharp.dll::GNU::Gettext::CatalogDeletedEntry::CatalogDeletedEntry_get_HasComment
               (CatalogDeletedEntry *this,MethodInfo *method)

{
  bVar1 = mscorlib.dll::System::String::String_IsNullOrEmpty
                    ((this->fields).comment,(MethodInfo *)0x0);
  return bVar1 == 0;
}


/* String[] get_References() */

String__Array *
Assembly-CSharp.dll::GNU::Gettext::CatalogDeletedEntry::CatalogDeletedEntry_get_References
          (CatalogDeletedEntry *this,MethodInfo *method)

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

