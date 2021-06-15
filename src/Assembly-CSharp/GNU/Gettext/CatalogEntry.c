
/* Void AddAutoComment(String, Boolean) */

void Assembly-CSharp.dll::GNU::Gettext::CatalogEntry::CatalogEntry_AddAutoComment
               (CatalogEntry *this,String *comment,bool ifNotExists,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (ifNotExists != 0) {
    this_00 = (List_1_UnityEngine_Color32_ *)(this->fields).autocomments;
    if (this_00 == (List_1_UnityEngine_Color32_ *)0x0) goto code_?;
    item._4_4_ = 
    MethodInfo__System__Collections__Generic__List<System::String>__Contains_System__String_;
    item.rgba = (int32_t)comment;
    bVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
            List_1_UnityEngine_Color32__Contains(this_00,item,unaff_ESI);
    if (bVar1 != 0) {
      return;
    }
  }
  this_01 = (this->fields).autocomments;
  if (this_01 != (List_1_System_String_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
              ((List_1_UIPushOption_ *)this_01,(UIPushOption__Enum)comment,
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

void Assembly-CSharp.dll::GNU::Gettext::CatalogEntry::CatalogEntry_AddReference
               (CatalogEntry *this,String *reference,MethodInfo *method)

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

void Assembly-CSharp.dll::GNU::Gettext::CatalogEntry::CatalogEntry_ClearAutoComments
               (CatalogEntry *this,MethodInfo *method)

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

void Assembly-CSharp.dll::GNU::Gettext::CatalogEntry::CatalogEntry_ClearReferences
               (CatalogEntry *this,MethodInfo *method)

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


/* String GetTranslation(Int32) */

String * Assembly-CSharp.dll::GNU::Gettext::CatalogEntry::CatalogEntry_GetTranslation
                   (CatalogEntry *this,int32_t index,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (-1 < index) {
    pLVar1 = (this->fields).translations;
    if (pLVar1 != (List_1_System_String_ *)0x0) {
      pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                          MethodInfo__System__Collections__Generic__List<System::String>__get_Count__
                         );
      if ((int)pOVar2 <= index) goto code_?;
      pLVar1 = (this->fields).translations;
      if (pLVar1 != (List_1_System_String_ *)0x0) {
        pSVar3 = (String *)
                 mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                 IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                           ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,index,
                            MethodInfo__System__Collections__Generic__List<System::String>__get_Item_int_
                           );
        return pSVar3;
      }
    }
    func_?(0);
    pcVar4 = (code *)swi(3);
    pSVar3 = (String *)(*pcVar4)();
    return pSVar3;
  }
code_?:
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  return TypeInfo__System__String->static_fields->Empty;
}


/* Boolean IsInFormat(String) */

bool Assembly-CSharp.dll::GNU::Gettext::CatalogEntry::CatalogEntry_IsInFormat
               (CatalogEntry *this,String *format,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).moreFlags;
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  bVar2 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar1,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    return 0;
  }
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  mscorlib.dll::System::String::String_Format
            (StringLiteral__0__format,(Object *)format,(MethodInfo *)0x0);
  pSVar1 = (this->fields).moreFlags;
  separator = (Char__Array *)func_?(TypeInfo__System__Char,1);
  if (separator == (Char__Array *)0x0) goto code_?;
  if (separator->max_length != 0) {
    separator->vector[0] = 0x2c;
    if (pSVar1 == (String *)0x0) goto code_?;
    pSVar3 = mscorlib.dll::System::String::String_Split(pSVar1,separator,(MethodInfo *)0x0);
    uVar4 = 0;
    if (pSVar3 == (String__Array *)0x0) goto code_?;
    ppSVar5 = pSVar3->vector;
    while( true ) {
      if ((int)pSVar3->max_length <= (int)uVar4) {
        return 0;
      }
      if (pSVar3->max_length <= uVar4) break;
      pSVar1 = *ppSVar5;
      if (pSVar1 == (String *)0x0) goto code_?;
      a = mscorlib.dll::System::String::String_Trim(pSVar1,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      bVar2 = mscorlib.dll::System::String::String_op_Equality(a,pSVar1,(MethodInfo *)0x0);
      if (bVar2 != 0) {
        return 1;
      }
      uVar4 = uVar4 + 1;
      ppSVar5 = ppSVar5 + 1;
    }
  }
  func_?();
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  bVar2 = (*pcVar6)();
  return bVar2;
}


/* String MakeKey(String, String) */

String * Assembly-CSharp.dll::GNU::Gettext::CatalogEntry::CatalogEntry_MakeKey
                   (String *msgid,String *context,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  bVar1 = mscorlib.dll::System::String::String_IsNullOrEmpty(msgid,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    bVar1 = mscorlib.dll::System::String::String_IsNullOrEmpty(context,(MethodInfo *)0x0);
    pSVar2 = StringLiteral__0__1_;
    if (bVar1 == 0) {
      if (context == (String *)0x0) goto code_?;
      pSVar3 = mscorlib.dll::System::String::String_Trim(context,(MethodInfo *)0x0);
      arg1 = (Object *)func_?(TypeInfo__System__Char);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      pSVar3 = mscorlib.dll::System::String::String_Concat((Object *)pSVar3,arg1,(MethodInfo *)0x0);
    }
    else {
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      pSVar3 = TypeInfo__System__String->static_fields->Empty;
    }
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    pSVar2 = mscorlib.dll::System::String::String_Format_1
                       (pSVar2,(Object *)pSVar3,(Object *)msgid,(MethodInfo *)0x0);
    return pSVar2;
  }
  this = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1(this,StringLiteral_Msgid_cannot_be_empty,(MethodInfo *)0x0);
  func_?(this);
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  pSVar2 = (String *)(*pcVar4)();
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_UnityEngine_Color32_ *)(this->fields).references;
  if (pLVar1 != (List_1_UnityEngine_Color32_ *)0x0) {
    item._4_4_ = 
    MethodInfo__System__Collections__Generic__List<System::String>__Contains_System__String_;
    item.rgba = (int32_t)reference;
    bVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
            List_1_UnityEngine_Color32__Contains(pLVar1,item,unaff_ESI);
    if (bVar2 != 0) {
      pLVar1 = (List_1_UnityEngine_Color32_ *)(this->fields).references;
      if (pLVar1 == (List_1_UnityEngine_Color32_ *)0x0) goto code_?;
      item_00._4_4_ =
           MethodInfo__System__Collections__Generic__List<System::String>__Remove_System__String_;
      item_00.rgba = (int32_t)reference;
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
      List_1_UnityEngine_Color32__Remove(pLVar1,item_00,(MethodInfo *)this);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = (String *)0x0;
  index = 0;
  pLVar2 = (this->fields).references;
  while (pLVar2 != (List_1_System_String_ *)0x0) {
    bVar3 = (bool)((uint)pSVar1 >> 0x18);
    pOVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar2,
                        MethodInfo__System__Collections__Generic__List<System::String>__get_Count__)
    ;
    if ((int)pOVar4 <= index) {
      return bVar3;
    }
    pLVar2 = (this->fields).references;
    if ((pLVar2 == (List_1_System_String_ *)0x0) ||
       (this_01 = (String *)
                  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                  IEventSystemHandler]::
                  List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                            ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar2,index,
                             MethodInfo__System__Collections__Generic__List<System::String>__get_Item_int_
                            ), this_01 == (String *)0x0)) break;
    pSVar1 = fileNamePrefix;
    bVar3 = mscorlib.dll::System::String::String_StartsWith
                      (this_01,fileNamePrefix,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      this_00 = (List_1_MVPlayer_ *)(this->fields).references;
      if (this_00 == (List_1_MVPlayer_ *)0x0) break;
      fileNamePrefix =
           (String *)MethodInfo__System__Collections__Generic__List<System::String>__RemoveAt_int_;
      mscorlib.dll::System::Collections::Generic::List`1[MVPlayer]::List_1_MVPlayer__RemoveAt
                (this_00,index,
                 MethodInfo__System__Collections__Generic__List<System::String>__RemoveAt_int_);
      pSVar1 = (String *)0x1000000;
      index = index + -1;
    }
    index = index + 1;
    pLVar2 = (this->fields).references;
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  bVar3 = (*pcVar5)();
  return bVar3;
}


/* Void SetPluralString(String) */

void Assembly-CSharp.dll::GNU::Gettext::CatalogEntry::CatalogEntry_SetPluralString
               (CatalogEntry *this,String *plural,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).plural = plural;
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  bVar1 = mscorlib.dll::System::String::String_IsNullOrEmpty(plural,(MethodInfo *)0x0);
  (this->fields).hasPlural = bVar1 == 0;
  return;
}


/* Void SetString(String) */

void Assembly-CSharp.dll::GNU::Gettext::CatalogEntry::CatalogEntry_SetString
               (CatalogEntry *this,String *str,MethodInfo *method)

{
  (this->fields).str = str;
  (this->fields).validity = 0;
  return;
}


/* Void SetTranslation(String, Int32) */

void Assembly-CSharp.dll::GNU::Gettext::CatalogEntry::CatalogEntry_SetTranslation
               (CatalogEntry *this,String *translation,int32_t index,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).translations;
  do {
    if (pLVar1 == (List_1_System_String_ *)0x0) {
code_?:
      func_?(0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                        MethodInfo__System__Collections__Generic__List<System::String>__get_Count__)
    ;
    pLVar1 = (this->fields).translations;
    if (index < (int)pOVar3) {
      if (pLVar1 == (List_1_System_String_ *)0x0) goto code_?;
      a = (String *)
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
          IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                    ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,index,
                     MethodInfo__System__Collections__Generic__List<System::String>__get_Item_int_);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      bVar4 = mscorlib.dll::System::String::String_op_Inequality(a,translation,(MethodInfo *)0x0);
      if (bVar4 != 0) {
        this_00 = (List_1_WinningConditionBriefingLayoutFitter_LayoutGroupAspectFitterDef_ *)
                  (this->fields).translations;
        if (this_00 ==
            (List_1_WinningConditionBriefingLayoutFitter_LayoutGroupAspectFitterDef_ *)0x0)
        goto code_?;
        mscorlib.dll::System::Collections::Generic::
        List`1[WinningConditionBriefingLayoutFitter+LayoutGroupAspectFitterDef]::
        List_1_WinningConditionBriefingLayoutFitter_LayoutGroupAspectFitterDef__set_Item
                  (this_00,index,
                   (WinningConditionBriefingLayoutFitter_LayoutGroupAspectFitterDef *)translation,
                   MethodInfo__System__Collections__Generic__List<System::String>__set_Item_int__System__String_
                  );
        this_01 = (this->fields).owner;
        (this->fields).validity = 0;
        if (this_01 != (Catalog *)0x0) {
          Catalog::Catalog_set_IsDirty(this_01,1,(MethodInfo *)0x0);
        }
      }
      return;
    }
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    if (pLVar1 == (List_1_System_String_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
              ((List_1_UIPushOption_ *)pLVar1,
               (UIPushOption__Enum)TypeInfo__System__String->static_fields->Empty,
               MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_);
    pLVar1 = (this->fields).translations;
  } while( true );
}


/* Void SetTranslations(String[]) */

void Assembly-CSharp.dll::GNU::Gettext::CatalogEntry::CatalogEntry_SetTranslations
               (CatalogEntry *this,String__Array *translations,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_VoxelHit_ *)
            func_?(TypeInfo__System__Collections__Generic__List<System::String>);
  mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit___ctor_1
            (this_00,(IEnumerable_1_VoxelHit_ *)translations,
             MethodInfo__System__Collections__Generic__List<System::String>__List_System__Collections__Generic__IEnumerable<System::String>_
            );
  (this->fields).translations = (List_1_System_String_ *)this_00;
  (this->fields).validity = 0;
  if ((this->fields).owner != (Catalog *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    *(undefined1 *)((int)in_stack_1 + 0x15) = in_stack_2;
    if ((((uint)(TypeInfo__System__EventArgs->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__EventArgs->_1).cctor_started == 0)) {
      func_?();
    }
    (**(code **)(*in_stack_1 + 0xf0))
              (in_stack_1,TypeInfo__System__EventArgs->static_fields->Empty);
    return;
  }
  return;
}


/* CatalogEntry(Catalog, String, String) */

void Assembly-CSharp.dll::GNU::Gettext::CatalogEntry::CatalogEntry__ctor
               (CatalogEntry *this,Catalog *owner,String *str,String *plural,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  (this->fields).context = TypeInfo__System__String->static_fields->Empty;
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
  (this->fields).owner = owner;
  (this->fields).str = str;
  (this->fields).plural = plural;
  bVar1 = mscorlib.dll::System::String::String_IsNullOrEmpty(plural,(MethodInfo *)0x0);
  (this->fields).hasPlural = bVar1 == 0;
  pLVar2 = (List_1_UnityEngine_Vector4_ *)
           func_?(TypeInfo__System__Collections__Generic__List<System::String>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (pLVar2,MethodInfo__System__Collections__Generic__List<System::String>__List__);
  (this->fields).references = (List_1_System_String_ *)pLVar2;
  pLVar2 = (List_1_UnityEngine_Vector4_ *)
           func_?(TypeInfo__System__Collections__Generic__List<System::String>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (pLVar2,MethodInfo__System__Collections__Generic__List<System::String>__List__);
  (this->fields).autocomments = (List_1_System_String_ *)pLVar2;
  pLVar2 = (List_1_UnityEngine_Vector4_ *)
           func_?(TypeInfo__System__Collections__Generic__List<System::String>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (pLVar2,MethodInfo__System__Collections__Generic__List<System::String>__List__);
  (this->fields).translations = (List_1_System_String_ *)pLVar2;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  (this->fields).context = TypeInfo__System__String->static_fields->Empty;
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
  (this->fields).owner = owner;
  if (dt != (CatalogEntry *)0x0) {
    (this->fields).str = (dt->fields).str;
    (this->fields).plural = (dt->fields).plural;
    (this->fields).hasPlural = (dt->fields).hasPlural;
    pLVar1 = (dt->fields).translations;
    pLVar2 = (List_1_VoxelHit_ *)
             func_?(TypeInfo__System__Collections__Generic__List<System::String>);
    mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit___ctor_1
              (pLVar2,(IEnumerable_1_VoxelHit_ *)pLVar1,
               MethodInfo__System__Collections__Generic__List<System::String>__List_System__Collections__Generic__IEnumerable<System::String>_
              );
    (this->fields).translations = (List_1_System_String_ *)pLVar2;
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
    (this->fields).isFuzzy = (dt->fields).isFuzzy;
    (this->fields).isModified = (dt->fields).isModified;
    (this->fields).isAutomatic = (dt->fields).isAutomatic;
    (this->fields).hasBadTokens = (dt->fields).hasBadTokens;
    (this->fields).moreFlags = (dt->fields).moreFlags;
    (this->fields).comment = (dt->fields).comment;
    (this->fields).validity = (dt->fields).validity;
    (this->fields).errorString = (dt->fields).errorString;
    (this->fields).context = (dt->fields).context;
    return;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* String[] get_AutoComments() */

String__Array *
Assembly-CSharp.dll::GNU::Gettext::CatalogEntry::CatalogEntry_get_AutoComments
          (CatalogEntry *this,MethodInfo *method)

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


/* String get_Flags() */

String * Assembly-CSharp.dll::GNU::Gettext::CatalogEntry::CatalogEntry_get_Flags
                   (CatalogEntry *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar1 = TypeInfo__System__String->static_fields->Empty;
  if ((this->fields).isFuzzy != 0) {
    pSVar1 = StringLiteral___fuzzy;
  }
  str1 = (this->fields).moreFlags;
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar1 = mscorlib.dll::System::String::String_Concat_2(pSVar1,str1,(MethodInfo *)0x0);
  bVar2 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar1,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    return TypeInfo__System__String->static_fields->Empty;
  }
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?();
  }
  pSVar1 = mscorlib.dll::System::String::String_Concat_2(::StringLiteral__,pSVar1,(MethodInfo *)0x0)
  ;
  return pSVar1;
}


/* Boolean get_HasComment() */

bool Assembly-CSharp.dll::GNU::Gettext::CatalogEntry::CatalogEntry_get_HasComment
               (CatalogEntry *this,MethodInfo *method)

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


/* Boolean get_HasContext() */

bool Assembly-CSharp.dll::GNU::Gettext::CatalogEntry::CatalogEntry_get_HasContext
               (CatalogEntry *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  value = (this->fields).context;
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  bVar1 = mscorlib.dll::System::String::String_IsNullOrEmpty(value,(MethodInfo *)0x0);
  return bVar1 == 0;
}


/* Boolean get_IsAutomatic() */

bool Assembly-CSharp.dll::GNU::Gettext::CatalogEntry::CatalogEntry_get_IsAutomatic
               (CatalogEntry *this,MethodInfo *method)

{
  return (this->fields).isAutomatic;
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
  pCVar1 = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pLVar2 = (this->fields).translations;
  if (pLVar2 != (List_1_System_String_ *)0x0) {
    pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar2,
                        MethodInfo__System__Collections__Generic__List<System::String>__get_Count__)
    ;
    pCVar4 = (this->fields).owner;
    if (pCVar4 != (Catalog *)0x0) {
      iVar5 = Catalog::Catalog_get_PluralFormsCount(pCVar4,(MethodInfo *)0x0);
      if ((int)pOVar3 < iVar5) {
        if ((this->fields).hasPlural == 0) {
          pLVar2 = (this->fields).translations;
          if (pLVar2 == (List_1_System_String_ *)0x0) goto code_?;
          pSVar6 = (String *)
                   mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                   IEventSystemHandler]::
                   List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                             ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar2,0,
                              MethodInfo__System__Collections__Generic__List<System::String>__get_Item_int_
                             );
          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__String->_1).cctor_started == 0)) {
            func_?();
          }
          bVar7 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar6,(MethodInfo *)0x0);
          pSVar6 = (String *)(uint)(bVar7 == 0);
        }
        else {
          pSVar6 = (String *)0x0;
        }
      }
      else {
        pSVar6 = (String *)0x1;
      }
      if (((bool)pSVar6 == 0) || ((this->fields).hasPlural == 0)) {
        return (bool)pSVar6;
      }
      index = 0;
      pCVar4 = (this->fields).owner;
      while (pCVar4 != (Catalog *)0x0) {
        this._0_1_ = (bool)pSVar6;
        iVar5 = Catalog::Catalog_get_PluralFormsCount(pCVar4,(MethodInfo *)0x0);
        if (iVar5 <= index) {
          return (bool)this;
        }
        pLVar2 = (pCVar1->fields).translations;
        if (pLVar2 == (List_1_System_String_ *)0x0) break;
        pSVar6 = (String *)
                 mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                 IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                           ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar2,index,
                            MethodInfo__System__Collections__Generic__List<System::String>__get_Item_int_
                           );
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?();
        }
        bVar7 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar6,(MethodInfo *)0x0);
        if (bVar7 != 0) {
          return 0;
        }
        index = index + 1;
        pCVar4 = (pCVar1->fields).owner;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  bVar3 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar1,(MethodInfo *)0x0);
  if (bVar3 == 0) {
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    bVar3 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar2,(MethodInfo *)0x0);
    format = StringLiteral__0__1_;
    if (bVar3 == 0) {
      if (pSVar2 == (String *)0x0) goto code_?;
      pSVar2 = mscorlib.dll::System::String::String_Trim(pSVar2,(MethodInfo *)0x0);
      this = (CatalogEntry *)0x7c;
      arg1 = (Object *)func_?(TypeInfo__System__Char,&this);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      pSVar2 = mscorlib.dll::System::String::String_Concat((Object *)pSVar2,arg1,(MethodInfo *)0x0);
    }
    else {
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      pSVar2 = TypeInfo__System__String->static_fields->Empty;
    }
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar1 = mscorlib.dll::System::String::String_Format_1
                       (format,(Object *)pSVar2,(Object *)pSVar1,(MethodInfo *)0x0);
    return pSVar1;
  }
  this_00 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1(this_00,StringLiteral_Msgid_cannot_be_empty,(MethodInfo *)0x0);
  func_?(this_00,0,
                  MethodInfo__GNU__Gettext__CatalogEntry__MakeKey_System__String__System__String_);
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar4)();
  return pSVar1;
}


/* String get_LocaleCode() */

String * Assembly-CSharp.dll::GNU::Gettext::CatalogEntry::CatalogEntry_get_LocaleCode
                   (CatalogEntry *this,MethodInfo *method)

{
  pCVar1 = (this->fields).owner;
  if (pCVar1 == (Catalog *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    pSVar3 = (String *)(*pcVar2)();
    return pSVar3;
  }
  method = (MethodInfo *)0x0;
  this = (CatalogEntry *)pCVar1;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pCVar4 = this;
  value = (MethodInfo *)TypeInfo__System__String->static_fields->Empty;
  bVar5 = mscorlib.dll::System::String::String_IsNullOrEmpty(this[1].fields.str,(MethodInfo *)0x0);
  if (bVar5 == 0) {
    pSVar3 = pCVar4[1].fields.str;
    if ((((uint)(TypeInfo__GNU__Gettext__IsoCodes->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__GNU__Gettext__IsoCodes->_1).cctor_started == 0)) {
      func_?(TypeInfo__GNU__Gettext__IsoCodes);
    }
    this_00 = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
              IsoCodes::IsoCodes_LookupLanguageCode(pSVar3,(MethodInfo *)0x0);
    if (this_00 == (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0)
    goto code_?;
    value = (MethodInfo *)
            mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
            Serialization::JsonProperty]::
            Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                      (this_00,(MethodInfo *)0x0);
    pSVar3 = pCVar4[1].fields.plural;
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      this = (CatalogEntry *)TypeInfo__System__String;
      func_?();
    }
    bVar5 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar3,(MethodInfo *)0x0);
    if (bVar5 == 0) {
      this = (CatalogEntry *)0x5f;
      arg1 = (Object *)func_?(TypeInfo__System__Char,&this);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      arg0 = mscorlib.dll::System::String::String_Concat((Object *)value,arg1,(MethodInfo *)0x0);
      pSVar3 = pCVar4[1].fields.plural;
      if ((((uint)(TypeInfo__GNU__Gettext__IsoCodes->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__GNU__Gettext__IsoCodes->_1).cctor_started == 0)) {
        func_?(TypeInfo__GNU__Gettext__IsoCodes);
      }
      arg1_00 = IsoCodes::IsoCodes_LookupCountryCode(pSVar3,(MethodInfo *)0x0);
      value = (MethodInfo *)
              mscorlib.dll::System::String::String_Concat
                        ((Object *)arg0,(Object *)arg1_00,(MethodInfo *)0x0);
    }
  }
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  bVar5 = mscorlib.dll::System::String::String_IsNullOrEmpty((String *)value,(MethodInfo *)0x0);
  if (bVar5 != 0) {
    pLVar6 = (pCVar4->fields).references;
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    bVar5 = mscorlib.dll::System::String::String_IsNullOrEmpty((String *)pLVar6,(MethodInfo *)0x0);
    if (bVar5 == 0) {
      pLVar6 = (pCVar4->fields).references;
      if ((((uint)(TypeInfo__System__IO__Path->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__IO__Path->_1).cctor_started == 0)) {
        this = (CatalogEntry *)TypeInfo__System__IO__Path;
        func_?();
      }
      this = (CatalogEntry *)0x0;
      this_01 = (MethodInfo *)
                mscorlib.dll::System::IO::Path::Path_GetFileNameWithoutExtension
                          ((String *)pLVar6,(MethodInfo *)0x0);
      if (this_01 == (MethodInfo *)0x0) {
code_?:
        method = (MethodInfo *)&UNK_?;
        func_?();
        pcVar2 = (code *)swi(3);
        pSVar3 = (String *)(*pcVar2)();
        return pSVar3;
      }
      this = (CatalogEntry *)&UNK_?;
      method = this_01;
      pIVar7 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this_01,(MethodInfo *)0x0)
      ;
      if (pIVar7 == (IList_1_VoxelHit_ *)0x2) {
        if ((((uint)(TypeInfo__GNU__Gettext__IsoCodes->vtable).Equals.methodPtr & 0x2000000) != 0)
           && ((TypeInfo__GNU__Gettext__IsoCodes->_1).cctor_started == 0)) {
          func_?();
        }
        bVar5 = IsoCodes::IsoCodes_IsKnownLanguageCode((String *)this_01,(MethodInfo *)0x0);
        if (bVar5 != 0) {
          value = this_01;
        }
        return (String *)value;
      }
      pIVar7 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this_01,(MethodInfo *)0x0)
      ;
      if (pIVar7 == (IList_1_VoxelHit_ *)0x5) {
        uVar8 = mscorlib.dll::System::String::String_get_Chars
                          ((String *)this_01,2,(MethodInfo *)0x0);
        if (uVar8 == 0x5f) {
          pSVar3 = mscorlib.dll::System::String::String_Substring_1
                             ((String *)this_01,0,2,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__GNU__Gettext__IsoCodes->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__GNU__Gettext__IsoCodes->_1).cctor_started == 0)) {
            func_?();
          }
          bVar5 = IsoCodes::IsoCodes_IsKnownLanguageCode(pSVar3,(MethodInfo *)0x0);
          if (bVar5 != 0) {
            pSVar3 = mscorlib.dll::System::String::String_Substring_1
                               ((String *)this_01,3,2,(MethodInfo *)0x0);
            if ((((uint)(TypeInfo__GNU__Gettext__IsoCodes->vtable).Equals.methodPtr & 0x2000000) !=
                 0) && ((TypeInfo__GNU__Gettext__IsoCodes->_1).cctor_started == 0)) {
              func_?();
            }
            bVar5 = IsoCodes::IsoCodes_IsKnownCountryCode(pSVar3,(MethodInfo *)0x0);
            if (bVar5 != 0) {
              value = this_01;
            }
          }
        }
      }
    }
  }
  return (String *)value;
}


/* Int32 get_NumberOfTranslations() */

int32_t Assembly-CSharp.dll::GNU::Gettext::CatalogEntry::CatalogEntry_get_NumberOfTranslations
                  (CatalogEntry *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).translations;
  if (this_00 != (List_1_System_String_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                        MethodInfo__System__Collections__Generic__List<System::String>__get_Count__)
    ;
    return (int32_t)pOVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}


/* String[] get_References() */

String__Array *
Assembly-CSharp.dll::GNU::Gettext::CatalogEntry::CatalogEntry_get_References
          (CatalogEntry *this,MethodInfo *method)

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


/* Int32 get_TranslationsCount() */

int32_t Assembly-CSharp.dll::GNU::Gettext::CatalogEntry::CatalogEntry_get_TranslationsCount
                  (CatalogEntry *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).translations;
  if (this_00 != (List_1_System_String_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                        MethodInfo__System__Collections__Generic__List<System::String>__get_Count__)
    ;
    return (int32_t)pOVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}


/* Void set_Comment(String) */

void Assembly-CSharp.dll::GNU::Gettext::CatalogEntry::CatalogEntry_set_Comment
               (CatalogEntry *this,String *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  a = (this->fields).comment;
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  bVar1 = mscorlib.dll::System::String::String_op_Inequality(a,value,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    (this->fields).comment = value;
    if ((this->fields).owner != (Catalog *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      *(undefined1 *)((int)in_stack_2 + 0x15) = in_stack_3;
      if ((((uint)(TypeInfo__System__EventArgs->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__EventArgs->_1).cctor_started == 0)) {
        func_?();
      }
      (**(code **)(*in_stack_2 + 0xf0))
                (in_stack_2,TypeInfo__System__EventArgs->static_fields->Empty);
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
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void set_Flags(String) */

void Assembly-CSharp.dll::GNU::Gettext::CatalogEntry::CatalogEntry_set_Flags
               (CatalogEntry *this,String *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).isFuzzy = 0;
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  (this->fields).moreFlags = TypeInfo__System__String->static_fields->Empty;
  bVar1 = mscorlib.dll::System::String::String_IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    return;
  }
  pCVar2 = (Char__Array *)func_?(TypeInfo__System__Char,2);
  if (pCVar2 == (Char__Array *)0x0) goto code_?;
  if (pCVar2->max_length == 0) {
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
  }
  else {
    pCVar2->vector[0] = 0x23;
    if (pCVar2->max_length < 2) goto code_?;
    pCVar2->vector[1] = 0x2c;
    if (value == (String *)0x0) goto code_?;
    pSVar4 = mscorlib.dll::System::String::String_TrimStart(value,pCVar2,(MethodInfo *)0x0);
    pCVar2 = (Char__Array *)func_?(TypeInfo__System__Char,1);
    if (pCVar2 == (Char__Array *)0x0) goto code_?;
    if (pCVar2->max_length != 0) {
      pCVar2->vector[0] = 0x2c;
      if (pSVar4 == (String *)0x0) goto code_?;
      pSVar5 = mscorlib.dll::System::String::String_Split(pSVar4,pCVar2,(MethodInfo *)0x0);
      uVar6 = 0;
      if (pSVar5 == (String__Array *)0x0) goto code_?;
      ppSVar7 = pSVar5->vector;
      while( true ) {
        if ((int)pSVar5->max_length <= (int)uVar6) {
          return;
        }
        if (pSVar5->max_length <= uVar6) break;
        pSVar4 = *ppSVar7;
        if (pSVar4 == (String *)0x0) goto code_?;
        pSVar8 = mscorlib.dll::System::String::String_Trim(pSVar4,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__String);
        }
        pSVar5 = (String__Array *)0x0;
        bVar1 = mscorlib.dll::System::String::String_op_Equality
                          (pSVar8,StringLiteral_fuzzy,(MethodInfo *)0x0);
        if (bVar1 == 0) {
          pSVar4 = mscorlib.dll::System::String::String_Trim(pSVar4,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__String->_1).cctor_started == 0)) {
            func_?();
          }
          pSVar8 = ::StringLiteral___;
          this = (CatalogEntry *)::StringLiteral___;
          pSVar4 = mscorlib.dll::System::String::String_Concat_3
                             (pSVar4,::StringLiteral___,pSVar4,(MethodInfo *)0x0);
          uVar6 = uVar6 + 1;
          ppSVar7 = ppSVar7 + 1;
          pSVar8[2].monitor = (MonitorData *)pSVar4;
        }
        else {
          (this->fields).isFuzzy = 1;
          uVar6 = uVar6 + 1;
          ppSVar7 = ppSVar7 + 1;
        }
      }
      goto code_?;
    }
  }
  uVar3 = func_?(0,0);
  func_?(uVar3);
code_?:
  func_?(0);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
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
  pCVar1 = (this->fields).owner;
  if (pCVar1 != (Catalog *)0x0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    (pCVar1->fields).isDirty = 1;
    if ((((uint)(TypeInfo__System__EventArgs->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__EventArgs->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__EventArgs);
    }
    (*(code *)(pCVar1->klass->vtable).OnDirtyChanged.method)
              (pCVar1,TypeInfo__System__EventArgs->static_fields->Empty,pCVar1->klass[1]._0.image);
    return;
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

