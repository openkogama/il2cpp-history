
/* Boolean OnDeletedEntry(String[], String, String[], String, String[]) */

bool Assembly-CSharp.dll::GNU::Gettext::LoadParser::LoadParser_OnDeletedEntry
               (LoadParser *this,String__Array *deletedLines,String *flags,String__Array *references
               ,String *comment,String__Array *autocomments,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GNU__Gettext__CatalogDeletedEntry);
    func_?(&TypeInfo__System__String);
    cRam_? = '\x01';
  }
  collection = (IEnumerable_1_System_Object_ *)func_?(TypeInfo__System__String,0);
  value = (Object *)func_?(TypeInfo__GNU__Gettext__CatalogDeletedEntry);
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<System::String>__List_System__Collections__Generic__IEnumerable<System::String>_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<System::String>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<System::String>);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,unaff_EDI);
  pOVar1 = (Object__Class *)
           func_?(TypeInfo__System__Collections__Generic__List<System::String>);
  mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object___ctor_1
            ((List_1_System_Object_ *)pOVar1,collection,
             MethodInfo__System__Collections__Generic__List<System::String>__List_System__Collections__Generic__IEnumerable<System::String>_
            );
  pOVar2 = value + 1;
  pOVar2->klass = pOVar1;
  func_?(pOVar2,pOVar1);
  this_01 = (LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
            func_?(TypeInfo__System__Collections__Generic__List<System::String>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            (this_01,MethodInfo__System__Collections__Generic__List<System::String>__List__);
  value[1].monitor = (MonitorData *)this_01;
  func_?(&value[1].monitor,this_01);
  deletedLines = (String__Array *)
                 func_?(TypeInfo__System__Collections__Generic__List<System::String>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)deletedLines,
             MethodInfo__System__Collections__Generic__List<System::String>__List__);
  value[2].klass = (Object__Class *)deletedLines;
  func_?();
  bVar3 = mscorlib.dll::System::String::String_IsNullOrEmpty(flags,(MethodInfo *)0x0);
  if (bVar3 == 0) {
    value[2].monitor = (MonitorData *)flags;
    deletedLines = (String__Array *)&UNK_?;
    func_?();
  }
  if (cRam_? == '\0') {
    func_?();
    deletedLines = (String__Array *)&UNK_?;
    func_?();
    cRam_? = '\x01';
  }
  pOVar1 = (Object__Class *)func_?();
  mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object___ctor_1
            ((List_1_System_Object_ *)pOVar1,(IEnumerable_1_System_Object_ *)deletedLines,
             MethodInfo__System__Collections__Generic__List<System::String>__List_System__Collections__Generic__IEnumerable<System::String>_
            );
  pOVar2->klass = pOVar1;
  func_?();
  value[3].klass = (Object__Class *)comment;
  func_?();
  uVar4 = 0;
  if (autocomments != (String__Array *)0x0) {
    ppSVar5 = autocomments->vector;
    while( true ) {
      uVar6 = autocomments->max_length;
      if (((int)uVar6 >> 0x1f < 0) || (((int)uVar6 >> 0x1f < 1 && (uVar6 <= uVar4)))) break;
      if (uVar6 <= uVar4) goto code_?;
      autocomments = (String__Array *)*ppSVar5;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if (_UNK_? == (List_1_System_Object_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                (_UNK_?,(Object *)autocomments,
                 MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                );
      uVar4 = uVar4 + 1;
      ppSVar5 = ppSVar5 + 1;
    }
    iVar7 = *(int *)&(comment->fields)._firstChar;
    if (iVar7 != 0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      this_00 = *(List_1_System_Object_ **)(iVar7 + 0x10);
      if (this_00 != (List_1_System_Object_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Add
                  (this_00,value,
                   MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogDeletedEntry>__Add_GNU__Gettext__CatalogDeletedEntry_
                  );
        return 1;
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  bVar3 = (*pcVar8)();
  return bVar3;
}


/* Boolean OnEntry(String, String, Boolean, String[], String, String[], String, String[], String) */

bool Assembly-CSharp.dll::GNU::Gettext::LoadParser::LoadParser_OnEntry
               (LoadParser *this,String *msgid,String *msgidPlural,bool hasPlural,
               String__Array *translations,String *flags,String__Array *references,String *comment,
               String__Array *autocomments,String *msgctxt,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GNU__Gettext__CatalogEntry);
    func_?(&TypeInfo__System__String);
    cRam_? = '\x01';
  }
  bVar1 = mscorlib.dll::System::String::String_IsNullOrEmpty(msgid,(MethodInfo *)0x0);
  if ((bVar1 == 0) || ((this->fields).headerParsed != 0)) {
    pCVar2 = (this->fields).catalog;
    pSVar3 = TypeInfo__System__String->static_fields->Empty;
    this_01 = (CatalogEntry *)func_?(TypeInfo__GNU__Gettext__CatalogEntry);
    CatalogEntry::CatalogEntry__ctor(this_01,pCVar2,pSVar3,pSVar3,(MethodInfo *)0x0);
    bVar1 = mscorlib.dll::System::String::String_IsNullOrEmpty(flags,(MethodInfo *)0x0);
    if (this_01 != (CatalogEntry *)0x0) {
      if (bVar1 == 0) {
        CatalogEntry::CatalogEntry_set_Flags(this_01,flags,(MethodInfo *)0x0);
      }
      (this_01->fields).str = msgid;
      func_?(&this_01->fields);
      (this_01->fields).validity = 0;
      if (hasPlural != 0) {
        ppSVar4 = &(this_01->fields).plural;
        *ppSVar4 = msgidPlural;
        func_?(ppSVar4,msgidPlural);
        bVar1 = mscorlib.dll::System::String::String_IsNullOrEmpty(msgidPlural,(MethodInfo *)0x0);
        (this_01->fields).hasPlural = bVar1 == 0;
      }
      CatalogEntry::CatalogEntry_SetTranslations(this_01,translations,(MethodInfo *)0x0);
      ppSVar4 = &(this_01->fields).comment;
      bVar1 = mscorlib.dll::System::String::String_op_Inequality
                        (*ppSVar4,comment,(MethodInfo *)0x0);
      if (bVar1 != 0) {
        *ppSVar4 = comment;
        func_?(ppSVar4);
        pCVar2 = (this_01->fields).owner;
        if (pCVar2 != (Catalog *)0x0) {
          Catalog::Catalog_set_IsDirty(pCVar2,1,(MethodInfo *)0x0);
        }
      }
      uVar5 = 0;
      if (references != (String__Array *)0x0) {
        ppSVar4 = references->vector;
        while( true ) {
          iVar6 = (int)references->max_length >> 0x1f;
          if ((iVar6 < 0) || ((iVar6 < 1 && (references->max_length <= uVar5)))) break;
          if (references->max_length <= uVar5) goto code_?;
          pSVar3 = *ppSVar4;
          if (cRam_? == '\0') {
            func_?();
            func_?(&
                            MethodInfo__System__Collections__Generic__List<System::String>__Contains_System__String_
                           );
            cRam_? = '\x01';
          }
          pLVar7 = (this_01->fields).references;
          if (pLVar7 == (List_1_System_String_ *)0x0) goto code_?;
          bVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                  List_1_System_Object__Contains
                            ((List_1_System_Object_ *)pLVar7,(Object *)pSVar3,
                             MethodInfo__System__Collections__Generic__List<System::String>__Contains_System__String_
                            );
          if (bVar1 == 0) {
            this = (LoadParser *)(this_01->fields).references;
            if ((List_1_System_String_ *)this == (List_1_System_String_ *)0x0)
            goto code_?;
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Add
                      ((List_1_System_Object_ *)this,(Object *)pSVar3,
                       MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                      );
          }
          uVar5 = uVar5 + 1;
          ppSVar4 = ppSVar4 + 1;
        }
        uVar5 = 0;
        if (autocomments != (String__Array *)0x0) {
          ppSVar4 = autocomments->vector;
          while( true ) {
            iVar6 = (int)autocomments->max_length >> 0x1f;
            if ((iVar6 < 0) || ((iVar6 < 1 && (autocomments->max_length <= uVar5)))) break;
            if (autocomments->max_length <= uVar5) goto code_?;
            pSVar3 = *ppSVar4;
            if (cRam_? == '\0') {
              func_?();
              func_?(&
                              MethodInfo__System__Collections__Generic__List<System::String>__Contains_System__String_
                             );
              cRam_? = '\x01';
            }
            pLVar7 = (this_01->fields).autocomments;
            if (pLVar7 == (List_1_System_String_ *)0x0) goto code_?;
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Add
                      ((List_1_System_Object_ *)pLVar7,(Object *)pSVar3,
                       MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                      );
            uVar5 = uVar5 + 1;
            ppSVar4 = ppSVar4 + 1;
          }
          if (msgctxt != (String *)0x0) {
            pSVar3 = mscorlib.dll::System::String::String_Trim(msgctxt,(MethodInfo *)0x0);
            ppSVar4 = &(this_01->fields).context;
            *ppSVar4 = pSVar3;
            func_?(ppSVar4);
            pCVar2 = (this->fields).catalog;
            if (pCVar2 != (Catalog *)0x0) {
              if (cRam_? == '\0') {
                func_?();
                func_?(&
                                MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogEntry>__Add_GNU__Gettext__CatalogEntry_
                               );
                cRam_? = '\x01';
              }
              if (cRam_? == '\0') {
                func_?(&
                                TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::CatalogEntry>
                               );
                cRam_? = '\x01';
              }
              pIVar8 = (pCVar2->fields).entriesDict;
              CatalogEntry::CatalogEntry_MakeKey((this_01->fields).str,*ppSVar4,(MethodInfo *)0x0);
              if (pIVar8 != (IDictionary_2_System_String_GNU_Gettext_CatalogEntry_ *)0x0) {
                cVar9 = func_?(4,
                                        TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::CatalogEntry>
                                        ,pIVar8);
                if (cVar9 != '\0') {
                  pIVar8 = (pCVar2->fields).entriesDict;
                  CatalogEntry::CatalogEntry_MakeKey
                            ((this_01->fields).str,*ppSVar4,(MethodInfo *)0x0);
                  if (pIVar8 == (IDictionary_2_System_String_GNU_Gettext_CatalogEntry_ *)0x0)
                  goto code_?;
                  iVar6 = func_?(0,
                                          TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::CatalogEntry>
                                          ,pIVar8);
                  if (iVar6 != 0) {
                    return 1;
                  }
                }
                pIVar8 = (pCVar2->fields).entriesDict;
                pSVar3 = CatalogEntry::CatalogEntry_MakeKey
                                   ((this_01->fields).str,*ppSVar4,(MethodInfo *)0x0);
                if (pIVar8 != (IDictionary_2_System_String_GNU_Gettext_CatalogEntry_ *)0x0) {
                  func_?(5,
                                  TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::CatalogEntry>
                                  ,pIVar8,pSVar3);
                  this_00 = (pCVar2->fields).entriesList;
                  if (this_00 != (List_1_GNU_Gettext_CatalogEntry_ *)0x0) {
                    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                    List_1_System_Object__Add
                              ((List_1_System_Object_ *)this_00,(Object *)this_01,
                               MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogEntry>__Add_GNU__Gettext__CatalogEntry_
                              );
                    return 1;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    pCVar2 = (this->fields).catalog;
    if (translations != (String__Array *)0x0) {
      if (translations->max_length == 0) goto code_?;
      if (pCVar2 != (Catalog *)0x0) {
        Catalog::Catalog_ParseHeaderString(pCVar2,translations->vector[0],(MethodInfo *)0x0);
        pCVar2 = (this->fields).catalog;
        if (pCVar2 != (Catalog *)0x0) {
          ppSVar4 = &(pCVar2->fields).Comment;
          *ppSVar4 = comment;
          func_?(ppSVar4);
          (this->fields).headerParsed = 1;
          return 1;
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  bVar1 = (*pcVar10)();
  return bVar1;
}


/* LoadParser(Catalog, String, Encoding) */

void Assembly-CSharp.dll::GNU::Gettext::LoadParser::LoadParser__ctor
               (LoadParser *this,Catalog *catalog,String *text,Encoding *encoding,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GNU__Gettext__CatalogParser);
    cRam_? = '\x01';
  }
  if ((TypeInfo__GNU__Gettext__CatalogParser->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__GNU__Gettext__CatalogParser);
  }
  CatalogParser::CatalogParser__ctor((CatalogParser *)this,text,encoding,(MethodInfo *)0x0);
  ppCVar1 = &(this->fields).catalog;
  *ppCVar1 = catalog;
  func_?(ppCVar1,catalog);
  return;
}

