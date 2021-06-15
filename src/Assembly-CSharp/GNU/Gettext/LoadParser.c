
/* Boolean OnDeletedEntry(String[], String, String[], String, String[]) */

bool Assembly-CSharp.dll::GNU::Gettext::LoadParser::LoadParser_OnDeletedEntry
               (LoadParser *this,String__Array *deletedLines,String *flags,String__Array *references
               ,String *comment,String__Array *autocomments,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  collection = (IEnumerable_1_VoxelHit_ *)func_?(TypeInfo__System__String,0);
  this_00 = (ScaleAnimationBase *)func_?(TypeInfo__GNU__Gettext__CatalogDeletedEntry);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,unaff_ESI);
  pLVar1 = (List_1_VoxelHit_ *)
           func_?(TypeInfo__System__Collections__Generic__List<System::String>);
  mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit___ctor_1
            (pLVar1,collection,
             MethodInfo__System__Collections__Generic__List<System::String>__List_System__Collections__Generic__IEnumerable<System::String>_
            );
  (this_00->fields)._._._._.m_CachedPtr = pLVar1;
  pLVar2 = (List_1_UnityEngine_Vector4_ *)
           func_?(TypeInfo__System__Collections__Generic__List<System::String>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (pLVar2,MethodInfo__System__Collections__Generic__List<System::String>__List__);
  (this_00->fields).state = (int32_t)pLVar2;
  pLVar2 = (List_1_UnityEngine_Vector4_ *)
           func_?(TypeInfo__System__Collections__Generic__List<System::String>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (pLVar2,MethodInfo__System__Collections__Generic__List<System::String>__List__);
  (this_00->fields).originalScale.x = (float)pLVar2;
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    flags = (String *)TypeInfo__System__String;
    func_?();
  }
  bVar3 = mscorlib.dll::System::String::String_IsNullOrEmpty(flags,(MethodInfo *)0x0);
  if (bVar3 == 0) {
    (this_00->fields).originalScale.y = (float)flags;
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pLVar4 = TypeInfo__System__Collections__Generic__List<System::String>;
  pLVar1 = (List_1_VoxelHit_ *)func_?();
  mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit___ctor_1
            (pLVar1,(IEnumerable_1_VoxelHit_ *)flags,
             MethodInfo__System__Collections__Generic__List<System::String>__List_System__Collections__Generic__IEnumerable<System::String>_
            );
  (this_00->fields)._._._._.m_CachedPtr = pLVar1;
  (this_00->fields).originalScale.z = (float)pLVar4;
  flags = (String *)0x0;
  if (autocomments != (String__Array *)0x0) {
    ppSVar5 = autocomments->vector;
    while( true ) {
      pSVar6 = (String *)autocomments->max_length;
      if (((int)pSVar6 >> 0x1f < 0) || (((int)pSVar6 >> 0x1f < 1 && (pSVar6 <= flags)))) break;
      if (pSVar6 <= flags) goto code_?;
      pSVar6 = *ppSVar5;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      autocomments = (String__Array *)(this_00->fields).originalScale.x;
      if (autocomments == (String__Array *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                ((List_1_UIPushOption_ *)autocomments,(UIPushOption__Enum)pSVar6,
                 MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                );
      flags = (String *)((int)&flags->klass + 1);
      ppSVar5 = ppSVar5 + 1;
    }
    if (_UNK_? != (Catalog *)0x0) {
      Catalog::Catalog_AddDeletedItem
                (_UNK_?,(CatalogDeletedEntry *)this_00,(MethodInfo *)0x0);
      return 1;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  bVar1 = mscorlib.dll::System::String::String_IsNullOrEmpty(msgid,(MethodInfo *)0x0);
  if ((bVar1 == 0) || ((this->fields).headerParsed != 0)) {
    pCVar2 = (this->fields).catalog;
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar3 = TypeInfo__System__String->static_fields->Empty;
    this_01 = (CatalogEntry *)func_?(TypeInfo__GNU__Gettext__CatalogEntry);
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    (this_01->fields).context = TypeInfo__System__String->static_fields->Empty;
    ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this_01,0.0,unaff_EDI);
    (this_01->fields).owner = pCVar2;
    (this_01->fields).str = pSVar3;
    (this_01->fields).plural = pSVar3;
    bVar1 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar3,(MethodInfo *)0x0);
    (this_01->fields).hasPlural = bVar1 == 0;
    pLVar4 = (List_1_UnityEngine_Vector4_ *)
             func_?(TypeInfo__System__Collections__Generic__List<System::String>);
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
    List_1_UnityEngine_Vector4___ctor
              (pLVar4,MethodInfo__System__Collections__Generic__List<System::String>__List__);
    (this_01->fields).references = (List_1_System_String_ *)pLVar4;
    pLVar4 = (List_1_UnityEngine_Vector4_ *)
             func_?(TypeInfo__System__Collections__Generic__List<System::String>);
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
    List_1_UnityEngine_Vector4___ctor
              (pLVar4,MethodInfo__System__Collections__Generic__List<System::String>__List__);
    (this_01->fields).autocomments = (List_1_System_String_ *)pLVar4;
    pLVar4 = (List_1_UnityEngine_Vector4_ *)
             func_?(TypeInfo__System__Collections__Generic__List<System::String>);
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
    List_1_UnityEngine_Vector4___ctor
              (pLVar4,MethodInfo__System__Collections__Generic__List<System::String>__List__);
    (this_01->fields).translations = (List_1_System_String_ *)pLVar4;
    (this_01->fields).isFuzzy = 0;
    (this_01->fields).isModified = 0;
    (this_01->fields).isAutomatic = 0;
    (this_01->fields).validity = 0;
    bVar1 = mscorlib.dll::System::String::String_IsNullOrEmpty(flags,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      comment = (String *)0x0;
      references = (String__Array *)flags;
      translations = (String__Array *)&UNK_?;
      CatalogEntry::CatalogEntry_set_Flags(this_01,flags,(MethodInfo *)0x0);
    }
    (this_01->fields).str = msgid;
    (this_01->fields).validity = 0;
    if (hasPlural != 0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      (this_01->fields).plural = msgidPlural;
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      autocomments = (String__Array *)0x0;
      comment = msgidPlural;
      references = (String__Array *)&UNK_?;
      bVar1 = mscorlib.dll::System::String::String_IsNullOrEmpty(msgidPlural,(MethodInfo *)0x0);
      (this_01->fields).hasPlural = bVar1 == 0;
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    this_02 = (List_1_VoxelHit_ *)func_?();
    mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit___ctor_1
              (this_02,(IEnumerable_1_VoxelHit_ *)translations,
               MethodInfo__System__Collections__Generic__List<System::String>__List_System__Collections__Generic__IEnumerable<System::String>_
              );
    pCVar2 = (this_01->fields).owner;
    (this_01->fields).translations = (List_1_System_String_ *)this_02;
    (this_01->fields).validity = 0;
    if (pCVar2 != (Catalog *)0x0) {
      Catalog::Catalog_set_IsDirty(pCVar2,1,(MethodInfo *)0x0);
    }
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    pSVar3 = (this_01->fields).comment;
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    bVar1 = mscorlib.dll::System::String::String_op_Inequality(pSVar3,comment,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      pCVar2 = (this_01->fields).owner;
      (this_01->fields).comment = comment;
      if (pCVar2 != (Catalog *)0x0) {
        Catalog::Catalog_set_IsDirty(pCVar2,1,(MethodInfo *)0x0);
      }
    }
    msgid = (String *)0x0;
    if (references != (String__Array *)0x0) {
      ppSVar5 = references->vector;
      while( true ) {
        pSVar3 = (String *)references->max_length;
        if (((int)pSVar3 >> 0x1f < 0) || (((int)pSVar3 >> 0x1f < 1 && (pSVar3 <= msgid)))) break;
        if (pSVar3 <= msgid) goto code_?;
        method_00 = (MethodInfo *)*ppSVar5;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        this_00 = (List_1_UnityEngine_Color32_ *)(this_01->fields).references;
        if (this_00 == (List_1_UnityEngine_Color32_ *)0x0) goto code_?;
        item._4_4_ = 
        MethodInfo__System__Collections__Generic__List<System::String>__Contains_System__String_;
        item.rgba = (int32_t)method_00;
        bVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
                List_1_UnityEngine_Color32__Contains(this_00,item,method_00);
        if (bVar1 == 0) {
          pLVar6 = (this_01->fields).references;
          if (pLVar6 == (List_1_System_String_ *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                    ((List_1_UIPushOption_ *)pLVar6,(UIPushOption__Enum)method_00,
                     MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                    );
        }
        msgid = (String *)((int)&msgid->klass + 1);
        ppSVar5 = ppSVar5 + 1;
      }
      msgid = (String *)0x0;
      if (autocomments != (String__Array *)0x0) {
        ppSVar5 = autocomments->vector;
        while( true ) {
          pSVar3 = (String *)autocomments->max_length;
          if (((int)pSVar3 >> 0x1f < 0) || (((int)pSVar3 >> 0x1f < 1 && (pSVar3 <= msgid)))) break;
          if (pSVar3 <= msgid) goto code_?;
          pSVar3 = *ppSVar5;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pLVar6 = (this_01->fields).autocomments;
          if (pLVar6 == (List_1_System_String_ *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                    ((List_1_UIPushOption_ *)pLVar6,(UIPushOption__Enum)pSVar3,
                     MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                    );
          msgid = (String *)((int)&msgid->klass + 1);
          ppSVar5 = ppSVar5 + 1;
        }
        pSVar3 = mscorlib.dll::System::String::String_Trim
                           ((String *)&UNK_?,(MethodInfo *)0x0);
        (this_01->fields).context = pSVar3;
        if (pCRam0000000c != (Catalog *)0x0) {
          Catalog::Catalog_AddItem_1(pCRam0000000c,this_01,(MethodInfo *)0x0);
          return 1;
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
          (this->fields).headerParsed = 1;
          return 1;
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  uVar7 = func_?();
  func_?(uVar7);
  pcVar8 = (code *)swi(3);
  bVar1 = (*pcVar8)();
  return bVar1;
}


/* LoadParser(Catalog, String, Encoding) */

void Assembly-CSharp.dll::GNU::Gettext::LoadParser::LoadParser__ctor
               (LoadParser *this,Catalog *catalog,String *text,Encoding *encoding,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GNU__Gettext__CatalogParser->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GNU__Gettext__CatalogParser->_1).cctor_started == 0)) {
    func_?(TypeInfo__GNU__Gettext__CatalogParser);
  }
  CatalogParser::CatalogParser__ctor((CatalogParser *)this,text,encoding,(MethodInfo *)0x0);
  (this->fields).catalog = catalog;
  return;
}

