
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
  collection = (IEnumerable_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
               func_?(TypeInfo__System__String,0);
  data = (CatalogDeletedEntry *)func_?(TypeInfo__GNU__Gettext__CatalogDeletedEntry);
  if (data != (CatalogDeletedEntry *)0x0) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__List<System::String>__List_System__Collections__Generic__IEnumerable<System::String>_
                     );
      func_?(&MethodInfo__System__Collections__Generic__List<System::String>__List__);
      func_?(&TypeInfo__System__Collections__Generic__List<System::String>);
      cRam_? = '\x01';
    }
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)data,ExceptionArgument__Enum_obj,unaff_EDI);
    pLVar1 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
             func_?(TypeInfo__System__Collections__Generic__List<System::String>);
    if (pLVar1 != (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
      UnitySynchronizationContext+WorkRequest]::
      List_1_UnityEngine_UnitySynchronizationContext_WorkRequest___ctor_1
                (pLVar1,collection,
                 MethodInfo__System__Collections__Generic__List<System::String>__List_System__Collections__Generic__IEnumerable<System::String>_
                );
      (data->fields).deletedLines = (List_1_System_String_ *)pLVar1;
      func_?(&data->fields,pLVar1);
      pLVar2 = (List_1_System_String_ *)
               func_?(TypeInfo__System__Collections__Generic__List<System::String>);
      if (pLVar2 != (List_1_System_String_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
        LowLevelList_1_System_Object___ctor
                  ((LowLevelList_1_System_Object_ *)pLVar2,
                   MethodInfo__System__Collections__Generic__List<System::String>__List__);
        (data->fields).references = pLVar2;
        func_?(&(data->fields).references,pLVar2);
        pLVar2 = (List_1_System_String_ *)
                 func_?(TypeInfo__System__Collections__Generic__List<System::String>);
        if (pLVar2 != (List_1_System_String_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
          LowLevelList_1_System_Object___ctor
                    ((LowLevelList_1_System_Object_ *)pLVar2,
                     MethodInfo__System__Collections__Generic__List<System::String>__List__);
          (data->fields).autocomments = pLVar2;
          func_?(&(data->fields).autocomments,pLVar2);
          bVar3 = mscorlib.dll::System::String::String_IsNullOrEmpty(flags,(MethodInfo *)0x0);
          if (bVar3 == 0) {
            (data->fields).flags = flags;
            func_?(&(data->fields).flags,flags);
          }
          if (cRam_? == '\0') {
            func_?(&
                            MethodInfo__System__Collections__Generic__List<System::String>__List_System__Collections__Generic__IEnumerable<System::String>_
                           );
            func_?(&TypeInfo__System__Collections__Generic__List<System::String>);
            cRam_? = '\x01';
          }
          pLVar1 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                   func_?(TypeInfo__System__Collections__Generic__List<System::String>);
          if (pLVar1 != (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
            UnitySynchronizationContext+WorkRequest]::
            List_1_UnityEngine_UnitySynchronizationContext_WorkRequest___ctor_1
                      (pLVar1,(IEnumerable_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                              deletedLines,
                       MethodInfo__System__Collections__Generic__List<System::String>__List_System__Collections__Generic__IEnumerable<System::String>_
                      );
            (data->fields).deletedLines = (List_1_System_String_ *)pLVar1;
            func_?(&data->fields,pLVar1);
            (data->fields).comment = comment;
            func_?(&(data->fields).comment,comment);
            uVar4 = 0;
            if (autocomments != (String__Array *)0x0) {
              ppSVar5 = autocomments->vector;
              while( true ) {
                iVar6 = (int)autocomments->max_length >> 0x1f;
                if ((iVar6 < 0) || ((iVar6 < 1 && (autocomments->max_length <= uVar4)))) break;
                if (autocomments->max_length <= uVar4) goto code_?;
                item = *ppSVar5;
                if (cRam_? == '\0') {
                  func_?(&
                                  MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                                 );
                  cRam_? = '\x01';
                }
                pLVar2 = (data->fields).autocomments;
                if (pLVar2 == (List_1_System_String_ *)0x0) goto code_?;
                mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                List_1_System_Object__Add
                          ((List_1_System_Object_ *)pLVar2,(Object *)item,
                           MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                          );
                uVar4 = uVar4 + 1;
                ppSVar5 = ppSVar5 + 1;
              }
              this_00 = (this->fields).catalog;
              if (this_00 != (Catalog *)0x0) {
                Catalog::Catalog_AddDeletedItem(this_00,data,(MethodInfo *)0x0);
                return 1;
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  bVar3 = (*pcVar7)();
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
    value = TypeInfo__System__String->static_fields->Empty;
    this_01 = (CatalogEntry *)func_?(TypeInfo__GNU__Gettext__CatalogEntry);
    if (this_01 != (CatalogEntry *)0x0) {
      if (cRam_? == '\0') {
        func_?(&MethodInfo__System__Collections__Generic__List<System::String>__List__);
        func_?(&TypeInfo__System__Collections__Generic__List<System::String>);
        func_?(&TypeInfo__System__String);
        cRam_? = '\x01';
      }
      pSVar4 = TypeInfo__System__String->static_fields->Empty;
      (this_01->fields).context = pSVar4;
      method_00 = (MethodInfo *)&(this_01->fields).context;
      func_?(method_00,pSVar4);
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)this_01,ExceptionArgument__Enum_obj,method_00);
      (this_01->fields).owner = pCVar2;
      func_?(&(this_01->fields).owner,pCVar2);
      (this_01->fields).str = pSVar3;
      func_?(&this_01->fields,pSVar3);
      (this_01->fields).plural = value;
      func_?(&(this_01->fields).plural,value);
      bVar1 = mscorlib.dll::System::String::String_IsNullOrEmpty(value,(MethodInfo *)0x0);
      (this_01->fields).hasPlural = bVar1 == 0;
      pLVar5 = (List_1_System_String_ *)
               func_?(TypeInfo__System__Collections__Generic__List<System::String>);
      if (pLVar5 != (List_1_System_String_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
        LowLevelList_1_System_Object___ctor
                  ((LowLevelList_1_System_Object_ *)pLVar5,
                   MethodInfo__System__Collections__Generic__List<System::String>__List__);
        (this_01->fields).references = pLVar5;
        func_?(&(this_01->fields).references,pLVar5);
        pLVar5 = (List_1_System_String_ *)
                 func_?(TypeInfo__System__Collections__Generic__List<System::String>);
        if (pLVar5 != (List_1_System_String_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
          LowLevelList_1_System_Object___ctor
                    ((LowLevelList_1_System_Object_ *)pLVar5,
                     MethodInfo__System__Collections__Generic__List<System::String>__List__);
          (this_01->fields).autocomments = pLVar5;
          func_?(&(this_01->fields).autocomments,pLVar5);
          pLVar5 = (List_1_System_String_ *)
                   func_?(TypeInfo__System__Collections__Generic__List<System::String>);
          if (pLVar5 != (List_1_System_String_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
            LowLevelList_1_System_Object___ctor
                      ((LowLevelList_1_System_Object_ *)pLVar5,
                       MethodInfo__System__Collections__Generic__List<System::String>__List__);
            (this_01->fields).translations = pLVar5;
            func_?(&(this_01->fields).translations,pLVar5);
            (this_01->fields).isFuzzy = 0;
            (this_01->fields).isModified = 0;
            (this_01->fields).isAutomatic = 0;
            (this_01->fields).validity = 0;
            bVar1 = mscorlib.dll::System::String::String_IsNullOrEmpty(flags,(MethodInfo *)0x0);
            if (bVar1 == 0) {
              this = (LoadParser *)0x0;
              CatalogEntry::CatalogEntry_set_Flags(this_01,flags,(MethodInfo *)0x0);
            }
            (this_01->fields).str = msgid;
            func_?();
            (this_01->fields).validity = 0;
            hasPlural = (bool)msgid;
            if (hasPlural != 0) {
              (this_01->fields).plural = (String *)&this_01->fields;
              func_?();
              bVar1 = mscorlib.dll::System::String::String_IsNullOrEmpty
                                ((String *)&this_01->fields,(MethodInfo *)0x0);
              (this_01->fields).hasPlural = bVar1 == 0;
            }
            if (cRam_? == '\0') {
              func_?();
              func_?();
              cRam_? = '\x01';
            }
            this_02 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                      func_?();
            if (this_02 != (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
              UnitySynchronizationContext+WorkRequest]::
              List_1_UnityEngine_UnitySynchronizationContext_WorkRequest___ctor_1
                        (this_02,(IEnumerable_1_UnityEngine_UnitySynchronizationContext_WorkRequest_
                                  *)translations,
                         MethodInfo__System__Collections__Generic__List<System::String>__List_System__Collections__Generic__IEnumerable<System::String>_
                        );
              (this_01->fields).translations = (List_1_System_String_ *)this_02;
              func_?(&(this_01->fields).translations,this_02);
              (this_01->fields).validity = 0;
              if ((this_01->fields).owner != (Catalog *)0x0) {
                Catalog::Catalog_set_IsDirty((this_01->fields).owner,1,(MethodInfo *)0x0);
              }
              bVar1 = mscorlib.dll::System::String::String_op_Inequality
                                ((this_01->fields).comment,comment,(MethodInfo *)0x0);
              if (bVar1 != 0) {
                (this_01->fields).comment = comment;
                func_?(&(this_01->fields).comment,comment);
                if ((this_01->fields).owner != (Catalog *)0x0) {
                  Catalog::Catalog_set_IsDirty((this_01->fields).owner,1,(MethodInfo *)0x0);
                }
              }
              uVar6 = 0;
              if (references != (String__Array *)0x0) {
                pRVar7 = (RegexCharClass_SingleRange *)references->vector;
                while( true ) {
                  iVar8 = (int)references->max_length >> 0x1f;
                  if ((iVar8 < 0) || ((iVar8 < 1 && (references->max_length <= uVar6)))) break;
                  if (references->max_length <= uVar6) goto code_?;
                  item = *pRVar7;
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
                            (this_01->fields).references;
                  if (this_00 ==
                      (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
                  goto code_?;
                  bVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                          RegularExpressions::RegexCharClass+SingleRange]::
                          List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__Contains
                                    (this_00,item,
                                     MethodInfo__System__Collections__Generic__List<System::String>__Contains_System__String_
                                    );
                  if (bVar1 == 0) {
                    pLVar5 = (this_01->fields).references;
                    if (pLVar5 == (List_1_System_String_ *)0x0) goto code_?;
                    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                    List_1_System_Object__Add
                              ((List_1_System_Object_ *)pLVar5,(Object *)item,
                               MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                              );
                  }
                  uVar6 = uVar6 + 1;
                  pRVar7 = pRVar7 + 1;
                }
                msgid = (String *)0x0;
                if (autocomments != (String__Array *)0x0) {
                  ppSVar9 = autocomments->vector;
                  while( true ) {
                    iVar8 = (int)autocomments->max_length >> 0x1f;
                    if ((iVar8 < 0) ||
                       ((iVar8 < 1 && ((String *)autocomments->max_length <= msgid)))) break;
                    if ((String *)autocomments->max_length <= msgid) goto code_?;
                    pSVar3 = *ppSVar9;
                    if (cRam_? == '\0') {
                      func_?(&
                                      MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                                     );
                      func_?(&
                                      MethodInfo__System__Collections__Generic__List<System::String>__Contains_System__String_
                                     );
                      cRam_? = '\x01';
                    }
                    pLVar5 = (this_01->fields).autocomments;
                    if (pLVar5 == (List_1_System_String_ *)0x0) goto code_?;
                    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                    List_1_System_Object__Add
                              ((List_1_System_Object_ *)pLVar5,(Object *)pSVar3,
                               MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                              );
                    msgid = (String *)((int)&msgid->klass + 1);
                    ppSVar9 = ppSVar9 + 1;
                  }
                  if (msgctxt != (String *)0x0) {
                    pSVar3 = mscorlib.dll::System::String::String_Trim(msgctxt,(MethodInfo *)0x0);
                    (this_01->fields).context = pSVar3;
                    func_?(&(this_01->fields).context,pSVar3);
                    pCVar2 = (this->fields).catalog;
                    if (pCVar2 != (Catalog *)0x0) {
                      Catalog::Catalog_AddItem_1(pCVar2,this_01,(MethodInfo *)0x0);
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
  }
  else {
    pCVar2 = (this->fields).catalog;
    if (translations != (String__Array *)0x0) {
      if (translations->max_length == 0) goto code_?;
      if (pCVar2 != (Catalog *)0x0) {
        Catalog::Catalog_ParseHeaderString(pCVar2,translations->vector[0],(MethodInfo *)0x0);
        pCVar2 = (this->fields).catalog;
        if (pCVar2 != (Catalog *)0x0) {
          (pCVar2->fields).Comment = comment;
          func_?(&(pCVar2->fields).Comment);
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
  (this->fields).catalog = catalog;
  func_?(&(this->fields).catalog,catalog);
  return;
}

