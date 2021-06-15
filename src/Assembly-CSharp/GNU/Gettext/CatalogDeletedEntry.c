
/* Void AddAutoComments(String) */

void Assembly-CSharp.dll::GNU::Gettext::CatalogDeletedEntry::CatalogDeletedEntry_AddAutoComments
               (CatalogDeletedEntry *this,String *comment,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).autocomments;
  if (this_00 != (List_1_System_String_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
              ((List_1_UIPushOption_ *)this_00,(UIPushOption__Enum)comment,
               MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void AddReference(String) */

void Assembly-CSharp.dll::GNU::Gettext::CatalogDeletedEntry::CatalogDeletedEntry_AddReference
               (CatalogDeletedEntry *this,String *reference,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_Color32_ *)(this->fields).references;
  if (this_00 != (List_1_UnityEngine_Color32_ *)0x0) {
    item._4_4_ = 
    MethodInfo__System__Collections__Generic__List<System::String>__Contains_System__String_;
    item.rgba = (int32_t)reference;
    bVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
            List_1_UnityEngine_Color32__Contains(this_00,item,unaff_ESI);
    if (bVar1 == 0) {
      this_01 = (this->fields).references;
      if (this_01 == (List_1_System_String_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                ((List_1_UIPushOption_ *)this_01,(UIPushOption__Enum)reference,
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_UIVertex_ *)(this->fields).autocomments;
  if (this_00 != (List_1_UnityEngine_UIVertex_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
    List_1_UnityEngine_UIVertex__Clear
              (this_00,MethodInfo__System__Collections__Generic__List<System::String>__Clear__);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void ClearReferences() */

void Assembly-CSharp.dll::GNU::Gettext::CatalogDeletedEntry::CatalogDeletedEntry_ClearReferences
               (CatalogDeletedEntry *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_UIVertex_ *)(this->fields).references;
  if (this_00 != (List_1_UnityEngine_UIVertex_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
    List_1_UnityEngine_UIVertex__Clear
              (this_00,MethodInfo__System__Collections__Generic__List<System::String>__Clear__);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void SetDeletedLines(String[]) */

void Assembly-CSharp.dll::GNU::Gettext::CatalogDeletedEntry::CatalogDeletedEntry_SetDeletedLines
               (CatalogDeletedEntry *this,String__Array *lines,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_VoxelHit_ *)
            func_?(TypeInfo__System__Collections__Generic__List<System::String>);
  mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit___ctor_1
            (this_00,(IEnumerable_1_VoxelHit_ *)lines,
             MethodInfo__System__Collections__Generic__List<System::String>__List_System__Collections__Generic__IEnumerable<System::String>_
            );
  (this->fields).deletedLines = (List_1_System_String_ *)this_00;
  return;
}


/* CatalogDeletedEntry(String[]) */

void Assembly-CSharp.dll::GNU::Gettext::CatalogDeletedEntry::CatalogDeletedEntry__ctor
               (CatalogDeletedEntry *this,String__Array *deletedLines,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
  this_00 = (List_1_VoxelHit_ *)
            func_?(TypeInfo__System__Collections__Generic__List<System::String>);
  mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit___ctor_1
            (this_00,(IEnumerable_1_VoxelHit_ *)deletedLines,
             MethodInfo__System__Collections__Generic__List<System::String>__List_System__Collections__Generic__IEnumerable<System::String>_
            );
  (this->fields).deletedLines = (List_1_System_String_ *)this_00;
  pLVar1 = (List_1_UnityEngine_Vector4_ *)
           func_?(TypeInfo__System__Collections__Generic__List<System::String>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (pLVar1,MethodInfo__System__Collections__Generic__List<System::String>__List__);
  (this->fields).references = (List_1_System_String_ *)pLVar1;
  pLVar1 = (List_1_UnityEngine_Vector4_ *)
           func_?(TypeInfo__System__Collections__Generic__List<System::String>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (pLVar1,MethodInfo__System__Collections__Generic__List<System::String>__List__);
  (this->fields).autocomments = (List_1_System_String_ *)pLVar1;
  return;
}


/* CatalogDeletedEntry(CatalogDeletedEntry) */

void Assembly-CSharp.dll::GNU::Gettext::CatalogDeletedEntry::CatalogDeletedEntry__ctor_1
               (CatalogDeletedEntry *this,CatalogDeletedEntry *dt,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
  if (dt != (CatalogDeletedEntry *)0x0) {
    pLVar1 = (dt->fields).deletedLines;
    pLVar2 = (List_1_VoxelHit_ *)
             func_?(TypeInfo__System__Collections__Generic__List<System::String>);
    mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit___ctor_1
              (pLVar2,(IEnumerable_1_VoxelHit_ *)pLVar1,
               MethodInfo__System__Collections__Generic__List<System::String>__List_System__Collections__Generic__IEnumerable<System::String>_
              );
    (this->fields).deletedLines = (List_1_System_String_ *)pLVar2;
    pLVar1 = (dt->fields).references;
    pLVar2 = (List_1_VoxelHit_ *)
             func_?(TypeInfo__System__Collections__Generic__List<System::String>);
    mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit___ctor_1
              (pLVar2,(IEnumerable_1_VoxelHit_ *)pLVar1,
               MethodInfo__System__Collections__Generic__List<System::String>__List_System__Collections__Generic__IEnumerable<System::String>_
              );
    (this->fields).references = (List_1_System_String_ *)pLVar2;
    pLVar1 = (dt->fields).autocomments;
    pLVar2 = (List_1_VoxelHit_ *)
             func_?(TypeInfo__System__Collections__Generic__List<System::String>);
    mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit___ctor_1
              (pLVar2,(IEnumerable_1_VoxelHit_ *)pLVar1,
               MethodInfo__System__Collections__Generic__List<System::String>__List_System__Collections__Generic__IEnumerable<System::String>_
              );
    (this->fields).autocomments = (List_1_System_String_ *)pLVar2;
    (this->fields).flags = (dt->fields).flags;
    (this->fields).comment = (dt->fields).comment;
    return;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* String[] get_AutoComments() */

String__Array *
Assembly-CSharp.dll::GNU::Gettext::CatalogDeletedEntry::CatalogDeletedEntry_get_AutoComments
          (CatalogDeletedEntry *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_VoxelHit_ *)(this->fields).autocomments;
  if (this_00 != (List_1_VoxelHit_ *)0x0) {
    pVVar1 = mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit__ToArray
                       (this_00,
                        MethodInfo__System__Collections__Generic__List<System::String>__ToArray__);
    return (String__Array *)pVVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pSVar3 = (String__Array *)(*pcVar2)();
  return pSVar3;
}


/* String[] get_DeletedLines() */

String__Array *
Assembly-CSharp.dll::GNU::Gettext::CatalogDeletedEntry::CatalogDeletedEntry_get_DeletedLines
          (CatalogDeletedEntry *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_VoxelHit_ *)(this->fields).deletedLines;
  if (this_00 != (List_1_VoxelHit_ *)0x0) {
    pVVar1 = mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit__ToArray
                       (this_00,
                        MethodInfo__System__Collections__Generic__List<System::String>__ToArray__);
    return (String__Array *)pVVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pSVar3 = (String__Array *)(*pcVar2)();
  return pSVar3;
}


/* String get_Flags() */

String * Assembly-CSharp.dll::GNU::Gettext::CatalogDeletedEntry::CatalogDeletedEntry_get_Flags
                   (CatalogDeletedEntry *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).flags;
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  bVar2 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar1,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    return TypeInfo__System__String->static_fields->Empty;
  }
  pSVar1 = (this->fields).flags;
  if (pSVar1 == (String *)0x0) {
    func_?();
    pcVar3 = (code *)swi(3);
    pSVar1 = (String *)(*pcVar3)();
    return pSVar1;
  }
  bVar2 = mscorlib.dll::System::String::String_StartsWith
                    (pSVar1,::StringLiteral___,(MethodInfo *)0x0);
  pSVar1 = (this->fields).flags;
  if (bVar2 == 0) {
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    pSVar1 = mscorlib.dll::System::String::String_Concat_2
                       (StringLiteral____,pSVar1,(MethodInfo *)0x0);
    return pSVar1;
  }
  return pSVar1;
}


/* Boolean get_HasComment() */

bool Assembly-CSharp.dll::GNU::Gettext::CatalogDeletedEntry::CatalogDeletedEntry_get_HasComment
               (CatalogDeletedEntry *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  value = (this->fields).comment;
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  bVar1 = mscorlib.dll::System::String::String_IsNullOrEmpty(value,(MethodInfo *)0x0);
  return bVar1 == 0;
}


/* String[] get_References() */

String__Array *
Assembly-CSharp.dll::GNU::Gettext::CatalogDeletedEntry::CatalogDeletedEntry_get_References
          (CatalogDeletedEntry *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_VoxelHit_ *)(this->fields).references;
  if (this_00 != (List_1_VoxelHit_ *)0x0) {
    pVVar1 = mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit__ToArray
                       (this_00,
                        MethodInfo__System__Collections__Generic__List<System::String>__ToArray__);
    return (String__Array *)pVVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pSVar3 = (String__Array *)(*pcVar2)();
  return pSVar3;
}

