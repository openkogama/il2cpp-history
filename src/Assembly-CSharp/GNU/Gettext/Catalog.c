
/* Void AddDeletedItem(CatalogDeletedEntry) */

void Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_AddDeletedItem
               (Catalog *this,CatalogDeletedEntry *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).deletedEntriesList;
  if (this_00 != (List_1_GNU_Gettext_CatalogDeletedEntry_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
              ((List_1_UIPushOption_ *)this_00,(UIPushOption__Enum)data,
               MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogDeletedEntry>__Add_GNU__Gettext__CatalogDeletedEntry_
              );
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* CatalogEntry AddItem(String, String) */

CatalogEntry *
Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_AddItem
          (Catalog *this,String *original,String *plural,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pCStack_1 = (CatalogEntry *)0x0;
  pIVar2 = (this->fields).entriesDict;
  if (pIVar2 == (IDictionary_2_System_String_GNU_Gettext_CatalogEntry_ *)0x0) {
code_?:
    func_?(0);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
  }
  else {
    pIVar4 = pIVar2->klass;
    uVar5 = 0;
    uVar6._0_1_ = (pIVar4->_1).rank;
    uVar6._1_1_ = (pIVar4->_1).minimumAlignment;
    if (uVar6 != 0) {
      do {
        if (pIVar4->interfaceOffsets[uVar5].interfaceType ==
            (Il2CppClass *)
            TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::CatalogEntry>
           ) {
          ppMVar7 = &(&(pIVar2->klass->vtable).TryGetValue)
                     [pIVar2->klass->interfaceOffsets[uVar5].offset].method;
          goto code_?;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar6);
    }
    ppMVar7 = (MethodInfo **)
              func_?(pIVar2,
                              TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::CatalogEntry>
                              ,3);
code_?:
    cVar8 = (*(code *)*ppMVar7)(pIVar2,original,&pCStack_1,ppMVar7[1]);
    if (cVar8 != '\0') {
      return pCStack_1;
    }
    pCVar9 = (CatalogEntry *)func_?(TypeInfo__GNU__Gettext__CatalogEntry);
    CatalogEntry::CatalogEntry__ctor(pCVar9,this,original,plural,(MethodInfo *)0x0);
    pCStack_1 = pCVar9;
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    bVar10 = mscorlib.dll::System::String::String_IsNullOrEmpty(plural,(MethodInfo *)0x0);
    pCVar9 = pCStack_1;
    if (bVar10 != 0) {
code_?:
      pCVar9 = pCStack_1;
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      pCVar11 = Catalog_FindItem_1(this,pCVar9,(MethodInfo *)0x0);
      if (pCVar11 != (CatalogEntry *)0x0) {
        return pCStack_1;
      }
      pIVar2 = (this->fields).entriesDict;
      if ((pCVar9 != (CatalogEntry *)0x0) &&
         (pSVar12 = CatalogEntry::CatalogEntry_get_Key(pCVar9,(MethodInfo *)0x0),
         pIVar2 != (IDictionary_2_System_String_GNU_Gettext_CatalogEntry_ *)0x0)) {
        func_?(0,
                        TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::CatalogEntry>
                        ,pIVar2,pSVar12,pCVar9);
        this_00 = (this->fields).entriesList;
        if (this_00 != (List_1_GNU_Gettext_CatalogEntry_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                    ((List_1_UIPushOption_ *)this_00,(UIPushOption__Enum)pCVar9,
                     MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogEntry>__Add_GNU__Gettext__CatalogEntry_
                    );
          return pCStack_1;
        }
      }
      goto code_?;
    }
    translations = (String__Array *)func_?(TypeInfo__System__String,2);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar12 = TypeInfo__System__String->static_fields->Empty;
    if (translations == (String__Array *)0x0) goto code_?;
    if ((pSVar12 != (String *)0x0) &&
       (iVar13 = func_?(pSVar12,(translations->klass->_0).element_class), iVar13 == 0))
    goto code_?;
    if (translations->max_length == 0) goto code_?;
    translations->vector[0] = pSVar12;
    pSVar12 = TypeInfo__System__String->static_fields->Empty;
    if ((pSVar12 == (String *)0x0) ||
       (iVar13 = func_?(pSVar12,(translations->klass->_0).element_class), iVar13 != 0)) {
      if (translations->max_length < 2) goto code_?;
      translations->vector[1] = pSVar12;
      if (pCVar9 != (CatalogEntry *)0x0) {
        CatalogEntry::CatalogEntry_SetTranslations(pCVar9,translations,(MethodInfo *)0x0);
        goto code_?;
      }
      goto code_?;
    }
  }
  uVar3 = func_?(0,0);
  func_?(uVar3);
code_?:
  uVar3 = func_?(0,0);
  func_?(uVar3);
  pcVar14 = (code *)swi(3);
  pCVar9 = (CatalogEntry *)(*pcVar14)();
  return pCVar9;
}


/* Void AddItem(CatalogEntry) */

void Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_AddItem_1
               (Catalog *this,CatalogEntry *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
    func_?(0,
                    TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::CatalogEntry>
                    ,pIVar2,pSVar3);
    this_00 = (this->fields).entriesList;
    if (this_00 != (List_1_GNU_Gettext_CatalogEntry_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                ((List_1_UIPushOption_ *)this_00,(UIPushOption__Enum)data,
                 MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogEntry>__Add_GNU__Gettext__CatalogEntry_
                );
      return;
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Append(Catalog) */

void Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_Append
               (Catalog *this,Catalog *catalog,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  puStack_1 = (undefined *)0x0;
  if (catalog == (Catalog *)0x0) {
code_?:
    func_?(0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
code_?:
  do {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    this_00 = (catalog->fields).entriesList;
    if (this_00 == (List_1_GNU_Gettext_CatalogEntry_ *)0x0) goto code_?;
    pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                        MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogEntry>__get_Count__
                       );
    if ((int)pOVar3 <= (int)puStack_1) {
      Catalog_set_IsDirty(this,1,(MethodInfo *)0x0);
      return;
    }
    entry = Catalog_get_Item(catalog,(int32_t)puStack_1,(MethodInfo *)0x0);
    pCVar4 = Catalog_FindItem_1(this,entry,(MethodInfo *)0x0);
    if (pCVar4 == (CatalogEntry *)0x0) {
      catalog = (Catalog *)TypeInfo__GNU__Gettext__CatalogEntry;
      this = (Catalog *)&UNK_?;
      pCVar4 = (CatalogEntry *)func_?();
      CatalogEntry::CatalogEntry__ctor_1(pCVar4,(Catalog *)&UNK_?,entry,(MethodInfo *)0x0);
      iVar5 = _UNK_?;
      if (entry == (CatalogEntry *)0x0) goto code_?;
      pSVar6 = CatalogEntry::CatalogEntry_get_Key(entry,(MethodInfo *)0x0);
      if (iVar5 == 0) goto code_?;
      func_?(0,
                      TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::CatalogEntry>
                      ,iVar5,pSVar6,pCVar4);
      if (_UNK_? == (List_1_UIPushOption_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                (_UNK_?,(UIPushOption__Enum)pCVar4,
                 MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogEntry>__Add_GNU__Gettext__CatalogEntry_
                );
    }
    else {
      puVar7 = (undefined *)0x0;
      while( true ) {
        puVar8 = puVar7;
        if (entry == (CatalogEntry *)0x0) goto code_?;
        pSVar9 = CatalogEntry::CatalogEntry_get_References(entry,(MethodInfo *)0x0);
        if (pSVar9 == (String__Array *)0x0) goto code_?;
        puVar7 = (undefined *)pSVar9->max_length;
        if (((int)puVar7 < 0 && (int)puVar7 >> 0x1f < 1) ||
           (((int)puVar7 >> 0x1f < 1 && (puVar7 <= puVar8)))) break;
        pSVar9 = CatalogEntry::CatalogEntry_get_References(entry,(MethodInfo *)0x0);
        if (pSVar9 == (String__Array *)0x0) goto code_?;
        pSVar6 = (String *)func_?();
        CatalogEntry::CatalogEntry_AddReference(pCVar4,pSVar6,(MethodInfo *)0x0);
        puVar7 = puVar8 + 1;
        puStack_1 = puVar8;
      }
      pSVar6 = CatalogEntry::CatalogEntry_GetTranslation(entry,0,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      bVar10 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar6,(MethodInfo *)0x0);
      if (bVar10 == 0) {
        pSVar6 = CatalogEntry::CatalogEntry_GetTranslation(entry,0,(MethodInfo *)0x0);
        CatalogEntry::CatalogEntry_SetTranslation(pCVar4,pSVar6,0,(MethodInfo *)0x0);
      }
      bVar10 = TimedPlayReward::TimedPlayReward_get_IsClaimable
                        ((TimedPlayReward *)entry,(MethodInfo *)0x0);
      if (bVar10 != 0) {
        CatalogEntry::CatalogEntry_set_IsFuzzy(pCVar4,1,(MethodInfo *)0x0);
      }
      pSVar6 = CatalogEntry::CatalogEntry_get_Flags(entry,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      bVar10 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar6,(MethodInfo *)0x0);
      if (bVar10 == 0) {
        pSVar6 = CatalogEntry::CatalogEntry_get_Flags(entry,(MethodInfo *)0x0);
        CatalogEntry::CatalogEntry_set_Flags(pCVar4,pSVar6,(MethodInfo *)0x0);
        puStack_1 = puStack_1 + 1;
        goto code_?;
      }
    }
    puStack_1 = puStack_1 + 1;
  } while( true );
}


/* Boolean CanEncodeToCharset(String) */

bool Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_CanEncodeToCharset
               (String *charset,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  if ((((uint)(TypeInfo__System__Text__Encoding->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Text__Encoding->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Text__Encoding);
  }
  pEVar4 = mscorlib.dll::System::Text::Encoding::Encoding_GetEncodings((MethodInfo *)0x0);
  uVar5 = 0;
  while (pEVar4 != (EncodingInfo__Array *)0x0) {
    if ((int)pEVar4->max_length <= (int)uVar5) {
      *unaff_FS_OFFSET = uStack_3;
      return 0;
    }
    if (pEVar4->max_length <= uVar5) goto code_?;
    uStack_1 = 0;
    if (((pEVar4->vector[uVar5] == (EncodingInfo *)0x0) ||
        (pSVar6 = mscorlib.dll::System::Text::EncodingInfo::EncodingInfo_get_Name
                            (pEVar4->vector[uVar5],(MethodInfo *)0x0), pSVar6 == (String *)0x0)) ||
       (mscorlib.dll::System::String::String_ToLower(pSVar6,(MethodInfo *)0x0),
       charset == (String *)0x0)) break;
    pSVar6 = mscorlib.dll::System::String::String_ToLower(charset,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    bVar7 = mscorlib.dll::System::String::String_op_Equality((String *)0x0,pSVar6,(MethodInfo *)0x0)
    ;
    if (bVar7 != 0) {
      *unaff_FS_OFFSET = uStack_3;
      return 1;
    }
    uStack_1 = 0xffffffff;
    uVar5 = uVar5 + 1;
  }
  func_?();
code_?:
  uVar8 = func_?(0);
  func_?(uVar8);
  func_?(&stack0xffffffd8,&UNK_?);
  pcVar9 = (code *)swi(3);
  bVar7 = (*pcVar9)();
  return bVar7;
}


/* Void Clear() */

void Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_Clear(Catalog *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).entriesDict;
  if (pIVar1 != (IDictionary_2_System_String_GNU_Gettext_CatalogEntry_ *)0x0) {
    func_?(3,
                    TypeInfo__System__Collections__Generic__ICollection<System::Collections::Generic::KeyValuePair<System::String,_GNU::Gettext::CatalogEntry>_>
                    ,pIVar1);
    pLVar2 = (List_1_UnityEngine_UIVertex_ *)(this->fields).entriesList;
    if (pLVar2 != (List_1_UnityEngine_UIVertex_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
      List_1_UnityEngine_UIVertex__Clear
                (pLVar2,
                 MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogEntry>__Clear__
                );
      pLVar2 = (List_1_UnityEngine_UIVertex_ *)(this->fields).deletedEntriesList;
      if (pLVar2 != (List_1_UnityEngine_UIVertex_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
        List_1_UnityEngine_UIVertex__Clear
                  (pLVar2,
                   MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogDeletedEntry>__Clear__
                  );
        (this->fields).isOk = 1;
        return;
      }
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Boolean Contains(String, String) */

bool Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_Contains
               (Catalog *this,String *msgid,String *context,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).entriesDict;
  CatalogEntry::CatalogEntry_MakeKey(msgid,context,(MethodInfo *)0x0);
  if (pIVar1 != (IDictionary_2_System_String_GNU_Gettext_CatalogEntry_ *)0x0) {
    bVar2 = func_?(1,
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  uStack_2 = 0;
  iStack_3 = 0;
  uStack_4 = 0;
  if ((((uint)(TypeInfo__System__DateTime->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__DateTime->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__DateTime);
  }
  pDVar5 = mscorlib.dll::System::DateTime::DateTime_get_Now
                     ((DateTime *)&stack0xffffffdc,(MethodInfo *)0x0);
  uStack_1 = (undefined4)(pDVar5->ticks)._ticks;
  uStack_2 = *(undefined4 *)((int)&(pDVar5->ticks)._ticks + 4);
  iStack_3 = pDVar5->kind;
  uStack_4 = *(undefined4 *)&pDVar5->field_0xc;
  pSVar6 = (String *)func_?(&uStack_1,StringLiteral_yyyy_MM_dd_HH___mm___sszz00,0);
  (this->fields).CreationDate = pSVar6;
  (this->fields).RevisionDate = pSVar6;
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?();
  }
  pSVar6 = TypeInfo__System__String->static_fields->Empty;
  (this->fields).TeamEmail = pSVar6;
  (this->fields).Team = pSVar6;
  (this->fields).Project = pSVar6;
  (this->fields).Country = pSVar6;
  (this->fields).Language = pSVar6;
  (this->fields).Charset = StringLiteral_utf_8;
  Catalog_UpdateHeaderDict(this,(MethodInfo *)0x0);
  return;
}


/* Void DeleteHeader(String) */

void Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_DeleteHeader
               (Catalog *this,String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).headerEntries;
  if (pDVar1 != (Dictionary_2_System_String_System_String_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject
            ::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
            Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                      ((Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                        *)pDVar1,key,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__ContainsKey_System__String_
                      );
    if (bVar2 != 0) {
      pDVar1 = (this->fields).headerEntries;
      if (pDVar1 == (Dictionary_2_System_String_System_String_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
      CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
      Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Remove
                ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                  *)pDVar1,key,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Remove_System__String_
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


/* String EnsureCorrectEndings(String, String) */

String * Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_EnsureCorrectEndings
                   (String *reference,String *text,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (text != (String *)0x0) {
    pIVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)text,(MethodInfo *)0x0);
    if (pIVar1 == (IList_1_VoxelHit_ *)0x0) {
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      return TypeInfo__System__String->static_fields->Empty;
    }
    iVar2 = 0;
    pIVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)text,(MethodInfo *)0x0);
    index = (undefined1 *)((int)&pIVar1[-1].monitor + 3);
    while ((-1 < (int)index &&
           (uVar3 = mscorlib.dll::System::String::String_get_Chars
                              (text,(int32_t)index,(MethodInfo *)0x0), uVar3 == 10))) {
      iVar2 = iVar2 + 1;
      index = index + -1;
    }
    method_00 = (MethodInfo *)
                mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)text,(MethodInfo *)0x0);
    pIVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)text,method_00);
    if (reference != (String *)0x0) {
      pIVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items
                         ((Collection_1_VoxelHit_ *)reference,(MethodInfo *)0x0);
      this = TypeInfo__System__Text__StringBuilder;
      this_00 = (StringBuilder *)func_?();
      mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor
                (this_00,text,0,(int)method_00 - iVar2,((int)pIVar4 - iVar2) + (int)pIVar1,
                 (MethodInfo *)0x0);
      pIVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this,(MethodInfo *)0x0);
      while ((pIVar1 = (IList_1_VoxelHit_ *)((int)&pIVar1[-1].monitor + 3), -1 < (int)pIVar1 &&
             (uVar3 = mscorlib.dll::System::String::String_get_Chars
                                ((String *)this,(int32_t)pIVar1,(MethodInfo *)0x0), uVar3 == 10))) {
        if (this_00 == (StringBuilder *)0x0) goto code_?;
        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_5
                  (this_00,10,(MethodInfo *)0x0);
      }
      if (this_00 != (StringBuilder *)0x0) {
        pSVar5 = (String *)(*(code *)(this_00->klass->vtable).ToString.method)();
        return pSVar5;
      }
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).entriesDict;
  CatalogEntry::CatalogEntry_MakeKey(msgid,context,(MethodInfo *)0x0);
  if (pIVar1 != (IDictionary_2_System_String_GNU_Gettext_CatalogEntry_ *)0x0) {
    cVar2 = func_?(1,
                            TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::CatalogEntry>
                            ,pIVar1);
    if (cVar2 == '\0') {
      return (CatalogEntry *)0x0;
    }
    pIVar1 = (this->fields).entriesDict;
    CatalogEntry::CatalogEntry_MakeKey(msgid,context,(MethodInfo *)0x0);
    if (pIVar1 != (IDictionary_2_System_String_GNU_Gettext_CatalogEntry_ *)0x0) {
      pCVar3 = (CatalogEntry *)
               func_?(4,
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).entriesDict;
  if (entry != (CatalogEntry *)0x0) {
    pSVar2 = CatalogEntry::CatalogEntry_get_Key(entry,(MethodInfo *)0x0);
    if (pIVar1 != (IDictionary_2_System_String_GNU_Gettext_CatalogEntry_ *)0x0) {
      cVar3 = func_?(1,
                              TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::CatalogEntry>
                              ,pIVar1,pSVar2);
      if (cVar3 == '\0') {
        return (CatalogEntry *)0x0;
      }
      pIVar1 = (this->fields).entriesDict;
      pSVar2 = CatalogEntry::CatalogEntry_get_Key(entry,(MethodInfo *)0x0);
      if (pIVar1 != (IDictionary_2_System_String_GNU_Gettext_CatalogEntry_ *)0x0) {
        pCVar4 = (CatalogEntry *)
                 func_?(4,
                                 TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::CatalogEntry>
                                 ,pIVar1,pSVar2);
        return pCVar4;
      }
    }
  }
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pCVar1 = (Collection_1_VoxelHit_ *)
           StringEscaping::StringEscaping_ToGettextFormat(message,(MethodInfo *)0x0);
  if ((prefix != (String *)0x0) &&
     (pIVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)prefix,(MethodInfo *)0x0),
     pCVar1 != (Collection_1_VoxelHit_ *)0x0)) {
    pIVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items(pCVar1,(MethodInfo *)0x0);
    if (((int)&pIVar2->klass + (int)&pIVar3->klass < 0x4d) &&
       (bVar4 = mscorlib.dll::System::String::String_Contains
                          ((String *)pCVar1,StringLiteral__n,(MethodInfo *)0x0), bVar4 == 0)) {
      if (sb != (StringBuilder *)0x0) {
        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append(sb,prefix,(MethodInfo *)0x0)
        ;
        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append
                  (sb,::StringLiteral___,(MethodInfo *)0x0);
        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append
                  (sb,(String *)pCVar1,(MethodInfo *)0x0);
        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append
                  (sb,::StringLiteral__,(MethodInfo *)0x0);
        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append
                  (sb,newlineChar,(MethodInfo *)0x0);
        return;
      }
    }
    else if (sb != (StringBuilder *)0x0) {
      mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append(sb,prefix,(MethodInfo *)0x0);
      mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append
                (sb,StringLiteral____,(MethodInfo *)0x0);
      mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append
                (sb,newlineChar,(MethodInfo *)0x0);
      prefix = (String *)0x0;
      message = (String *)0x0;
      index = 0;
      pSVar5 = (String *)0xffffffff;
      while( true ) {
        iVar6 = 0;
        pIVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                 Collection_1_VoxelHit__get_Items(pCVar1,(MethodInfo *)0x0);
        if ((int)pIVar2 <= iVar6) break;
        uVar7 = mscorlib.dll::System::String::String_get_Chars
                          ((String *)pCVar1,index,(MethodInfo *)0x0);
        if (uVar7 == 0x5c) {
          iVar6 = index + 1;
          message = (String *)0x0;
          sb = (StringBuilder *)&UNK_?;
          pIVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                   Collection_1_VoxelHit__get_Items(pCVar1,(MethodInfo *)0x0);
          prefix = (String *)pCVar1;
          if ((int)pIVar2 <= iVar6) goto code_?;
          prefix = (String *)&UNK_?;
          uVar7 = mscorlib.dll::System::String::String_get_Chars
                            ((String *)pCVar1,iVar6,(MethodInfo *)0x0);
          if (uVar7 != 0x6e) {
            bVar8 = uVar7 == 0x74;
            index = iVar6;
            message = (String *)pCVar1;
            goto code_?;
          }
          pSVar5 = (String *)(iVar6 + 1);
          message = (String *)pCVar1;
code_?:
          mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append
                    (sb,::StringLiteral__,(MethodInfo *)0x0);
          pSVar9 = mscorlib.dll::System::String::String_Substring_1
                             ((String *)pCVar1,(int32_t)message,(int)pSVar5 - (int)message,
                              (MethodInfo *)0x0);
          mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append
                    (sb,pSVar9,(MethodInfo *)0x0);
          mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append
                    (sb,::StringLiteral__,(MethodInfo *)0x0);
          mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append
                    (sb,(String *)&UNK_?,(MethodInfo *)0x0);
          prefix = (String *)0x0;
          pSVar9 = (String *)0xffffffff;
          message = pSVar5;
        }
        else {
          bVar8 = uVar7 == 0x20;
code_?:
          if (bVar8) {
            pSVar5 = (String *)(index + 1);
          }
code_?:
          iVar6 = index;
          pSVar9 = pSVar5;
          if ((0x4c < (int)prefix) && (pSVar5 != (String *)0xffffffff)) goto code_?;
        }
        index = iVar6 + 1;
        prefix = (String *)((int)&prefix->klass + 1);
        pSVar5 = pSVar9;
      }
      pCVar1 = (Collection_1_VoxelHit_ *)
               mscorlib.dll::System::String::String_Substring
                         ((String *)pCVar1,(int32_t)message,(MethodInfo *)0x0);
      if (pCVar1 != (Collection_1_VoxelHit_ *)0x0) {
        pIVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                 Collection_1_VoxelHit__get_Items(pCVar1,(MethodInfo *)0x0);
        if ((int)pIVar2 < 1) {
          return;
        }
        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append
                  ((StringBuilder *)&UNK_?,::StringLiteral__,(MethodInfo *)0x0);
        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append
                  ((StringBuilder *)&UNK_?,(String *)pCVar1,(MethodInfo *)0x0);
        pSVar5 = ::StringLiteral__;
        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append
                  ((StringBuilder *)&UNK_?,::StringLiteral__,(MethodInfo *)0x0);
        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append
                  ((StringBuilder *)&UNK_?,pSVar5,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* String GetDateTimeRfc822Format() */

String * Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_GetDateTimeRfc822Format
                   (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  uStack_2 = 0;
  iStack_3 = 0;
  uStack_4 = 0;
  if ((((uint)(TypeInfo__System__DateTime->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__DateTime->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__DateTime);
  }
  pDVar5 = mscorlib.dll::System::DateTime::DateTime_get_Now(&DStack_6,(MethodInfo *)0x0);
  uStack_1 = (undefined4)(pDVar5->ticks)._ticks;
  uStack_2 = *(undefined4 *)((int)&(pDVar5->ticks)._ticks + 4);
  iStack_3 = pDVar5->kind;
  uStack_4 = *(undefined4 *)&pDVar5->field_0xc;
  pSVar7 = (String *)func_?(&uStack_1,StringLiteral_yyyy_MM_dd_HH___mm___sszz00,0);
  return pSVar7;
}


/* Encoding GetEncoding(String) */

Encoding *
Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_GetEncoding(String *charset,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  if ((((uint)(TypeInfo__System__Text__Encoding->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Text__Encoding->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Text__Encoding);
  }
  pEVar4 = mscorlib.dll::System::Text::Encoding::Encoding_GetEncodings((MethodInfo *)0x0);
  uVar5 = 0;
  while (pEVar4 != (EncodingInfo__Array *)0x0) {
    if ((int)pEVar4->max_length <= (int)uVar5) {
      *unaff_FS_OFFSET = uStack_3;
      return (Encoding *)0x0;
    }
    if (pEVar4->max_length <= uVar5) goto code_?;
    this = pEVar4->vector[uVar5];
    uStack_1 = 0;
    if (((this == (EncodingInfo *)0x0) ||
        (pSVar6 = mscorlib.dll::System::Text::EncodingInfo::EncodingInfo_get_Name
                            (this,(MethodInfo *)0x0), pSVar6 == (String *)0x0)) ||
       (mscorlib.dll::System::String::String_ToLower(pSVar6,(MethodInfo *)0x0),
       charset == (String *)0x0)) break;
    pSVar6 = mscorlib.dll::System::String::String_ToLower(charset,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    bVar7 = mscorlib.dll::System::String::String_op_Equality((String *)0x0,pSVar6,(MethodInfo *)0x0)
    ;
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
code_?:
  uVar9 = func_?(0);
  func_?(uVar9);
  func_?(&stack0xffffffd8,&UNK_?);
  pcVar10 = (code *)swi(3);
  pEVar8 = (Encoding *)(*pcVar10)();
  return pEVar8;
}


/* IEnumerator`1[GNU.Gettext.CatalogEntry] GetEnumerator() */

IEnumerator_1_GNU_Gettext_CatalogEntry_ *
Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_GetEnumerator(Catalog *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_Color32_ *)(this->fields).entriesList;
  if (this_00 != (List_1_UnityEngine_Color32_ *)0x0) {
    pLVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
             List_1_UnityEngine_Color32__GetEnumerator
                       ((List_1_T_Enumerator_UnityEngine_Color32_ *)auStack_2,this_00,
                        MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogEntry>__GetEnumerator__
                       );
    auStack_2._16_4_ = pLVar1->l;
    iStack_3 = pLVar1->next;
    iStack_4 = pLVar1->ver;
    iStack_5 = (pLVar1->current).rgba;
    pIVar6 = (IEnumerator_1_GNU_Gettext_CatalogEntry_ *)
             func_?(TypeInfo__System__Collections__Generic__List_1_T___Enumerator<GNU::Gettext::CatalogEntry>
                             ,auStack_2 + 0x10);
    return pIVar6;
  }
  func_?(0);
  pcVar7 = (code *)swi(3);
  pIVar6 = (IEnumerator_1_GNU_Gettext_CatalogEntry_ *)(*pcVar7)();
  return pIVar6;
}


/* String GetHeader(String) */

String * Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_GetHeader
                   (Catalog *this,String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).headerEntries;
  if (pDVar1 != (Dictionary_2_System_String_System_String_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject
            ::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
            Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                      ((Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                        *)pDVar1,key,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__ContainsKey_System__String_
                      );
    if (bVar2 == 0) {
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      return TypeInfo__System__String->static_fields->Empty;
    }
    pDVar1 = (this->fields).headerEntries;
    if (pDVar1 != (Dictionary_2_System_String_System_String_ *)0x0) {
      pPVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
               Dictionary_2_System_Type_Pool__get_Item
                         ((Dictionary_2_System_Type_Pool_ *)pDVar1,(Type *)key,
                          MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__get_Item_System__String_
                         );
      return (String *)pPVar3;
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
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  Catalog_UpdateHeaderDict(this,(MethodInfo *)0x0);
  this_00 = (StringBuilder *)func_?(TypeInfo__System__Text__StringBuilder);
  mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor_2(this_00,(MethodInfo *)0x0);
  pDVar4 = (this->fields).headerEntries;
  if ((pDVar4 != (Dictionary_2_System_String_System_String_ *)0x0) &&
     (this_01 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System
                ::Object]::Dictionary_2_WinningConditionType_System_Object__get_Keys
                          ((Dictionary_2_WinningConditionType_System_Object_ *)pDVar4,
                           MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__get_Keys__
                          ),
     this_01 != (Dictionary_2_TKey_TValue_KeyCollection_WinningConditionType_System_Object_ *)0x0))
  {
    mscorlib.dll::System::Collections::Generic::
    Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
    Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__GetEnumerator
              ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_WinningConditionType_System_Object_
                *)&stack0xffffffb4,
               (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_ *)
               this_01,
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<System::String,_System::String>__GetEnumerator__
              );
    uStack_1 = 0;
    while (cVar5 = func_?(), cVar5 != '\0') {
      key = (Type *)func_?();
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      pSVar6 = TypeInfo__System__String->static_fields->Empty;
      pDVar4 = (this->fields).headerEntries;
      if (pDVar4 == (Dictionary_2_System_String_System_String_ *)0x0) goto code_?;
      pPVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
               Dictionary_2_System_Type_Pool__get_Item
                         ((Dictionary_2_System_Type_Pool_ *)pDVar4,key,
                          MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__get_Item_System__String_
                         );
      if (pPVar7 != (Pool *)0x0) {
        pDVar4 = (this->fields).headerEntries;
        if (pDVar4 == (Dictionary_2_System_String_System_String_ *)0x0) goto code_?;
        pPVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                 Dictionary_2_System_Type_Pool__get_Item
                           ((Dictionary_2_System_Type_Pool_ *)pDVar4,key,
                            MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__get_Item_System__String_
                           );
        pSVar6 = StringEscaping::StringEscaping_ToGettextFormat((String *)pPVar7,(MethodInfo *)0x0);
      }
      if (this_00 == (StringBuilder *)0x0) goto code_?;
      mscorlib.dll::System::Text::StringBuilder::StringBuilder_AppendFormat_4
                (this_00,StringLiteral___0____1__n__2_,(Object *)key,(Object *)pSVar6,
                 (Object *)lineDelimeter,(MethodInfo *)0x0);
    }
    uStack_1 = 0xffffffff;
    func_?();
    if (this_00 != (StringBuilder *)0x0) {
      pSVar6 = (String *)(*(code *)(this_00->klass->vtable).ToString.method)();
      *unaff_FS_OFFSET = uStack_3;
      return pSVar6;
    }
  }
code_?:
  func_?();
  func_?();
  pcVar8 = (code *)swi(3);
  pSVar6 = (String *)(*pcVar8)();
  return pSVar6;
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
  this_00 = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_01 = (Catalog *)func_?(TypeInfo__System__Collections__Generic__List<System::String>)
  ;
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            ((List_1_UnityEngine_Vector4_ *)this_01,
             MethodInfo__System__Collections__Generic__List<System::String>__List__);
  this_02 = (List_1_UnityEngine_Vector4_ *)
            func_?(TypeInfo__System__Collections__Generic__List<System::String>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_02,MethodInfo__System__Collections__Generic__List<System::String>__List__);
  index = (Catalog *)0x0;
  while( true ) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    pLVar1 = (this->fields).entriesList;
    if (pLVar1 == (List_1_GNU_Gettext_CatalogEntry_ *)0x0) goto code_?;
    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                        MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogEntry>__get_Count__
                       );
    if ((int)pOVar2 <= (int)index) break;
    if (cRam_? == '\0') {
      this_01 = (Catalog *)&UNK_?;
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if ((int)index < 0) {
code_?:
      pCVar3 = (CatalogEntry *)0x0;
    }
    else {
      pLVar1 = (this->fields).entriesList;
      if (pLVar1 == (List_1_GNU_Gettext_CatalogEntry_ *)0x0) goto code_?;
      pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                          MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogEntry>__get_Count__
                         );
      if ((int)pOVar2 <= (int)index) goto code_?;
      pLVar1 = (this->fields).entriesList;
      if (pLVar1 == (List_1_GNU_Gettext_CatalogEntry_ *)0x0) goto code_?;
      this_01 = index;
      pCVar3 = (CatalogEntry *)
               mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
               IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                         ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,
                          (int32_t)index,
                          MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogEntry>__get_Item_int_
                         );
    }
    if (refCat == (Catalog *)0x0) goto code_?;
    pCVar3 = Catalog_FindItem_1(refCat,pCVar3,(MethodInfo *)0x0);
    if (pCVar3 == (CatalogEntry *)0x0) {
      newEntries = (String__Array **)&UNK_?;
      this_01 = this;
      pCVar3 = Catalog_get_Item(this,(int32_t)index,(MethodInfo *)0x0);
      if (pCVar3 == (CatalogEntry *)0x0) goto code_?;
      pIVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)pCVar3,(MethodInfo *)0x0);
      if ((List_1_UIPushOption_ *)newEntries == (List_1_UIPushOption_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                ((List_1_UIPushOption_ *)newEntries,(UIPushOption__Enum)pIVar4,
                 MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                );
    }
    index = (Catalog *)((int)&index->klass + 1);
  }
  this = (Catalog *)0x0;
  if (refCat != (Catalog *)0x0) goto code_?;
code_?:
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
code_?:
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pLVar1 = (refCat->fields).entriesList;
  if (pLVar1 == (List_1_GNU_Gettext_CatalogEntry_ *)0x0) goto code_?;
  this_03 = MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogEntry>__get_Count__;
  pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
           Serialization::JsonProperty]::
           Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                     ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                      MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogEntry>__get_Count__
                     );
  if ((int)pOVar2 <= (int)this) {
    if (this_01 != (Catalog *)0x0) {
      pVVar6 = mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::
               List_1_VoxelHit__ToArray
                         ((List_1_VoxelHit_ *)this_01,
                          MethodInfo__System__Collections__Generic__List<System::String>__ToArray__)
      ;
      *newEntries = (String__Array *)pVVar6;
      pMVar7 = MethodInfo__System__Collections__Generic__List<System::String>__ToArray__;
      if (this_03 != (MethodInfo *)0x0) {
        pVVar6 = mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::
                 List_1_VoxelHit__ToArray
                           ((List_1_VoxelHit_ *)this_03,
                            MethodInfo__System__Collections__Generic__List<System::String>__ToArray__
                           );
        pMVar7->methodPointer = (Il2CppMethodPointer)pVVar6;
        return;
      }
    }
    goto code_?;
  }
  if (cRam_? == '\0') {
    this_01 = (Catalog *)&UNK_?;
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((int)this < 0) {
code_?:
    pCVar3 = (CatalogEntry *)0x0;
  }
  else {
    pLVar1 = (refCat->fields).entriesList;
    if (pLVar1 == (List_1_GNU_Gettext_CatalogEntry_ *)0x0) goto code_?;
    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                        MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogEntry>__get_Count__
                       );
    if ((int)pOVar2 <= (int)this) goto code_?;
    pLVar1 = (refCat->fields).entriesList;
    if (pLVar1 == (List_1_GNU_Gettext_CatalogEntry_ *)0x0) goto code_?;
    this_01 = this;
    pCVar3 = (CatalogEntry *)
             mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
             IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                       ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,(int32_t)this
                        ,
                        MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogEntry>__get_Item_int_
                       );
  }
  pCVar3 = Catalog_FindItem_1(this_00,pCVar3,(MethodInfo *)0x0);
  if (pCVar3 == (CatalogEntry *)0x0) {
    pCVar3 = Catalog_get_Item(refCat,(int32_t)this,(MethodInfo *)0x0);
    if (pCVar3 == (CatalogEntry *)0x0) goto code_?;
    pIVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)pCVar3,(MethodInfo *)0x0);
    if (this_01 == (Catalog *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
              ((List_1_UIPushOption_ *)this_01,(UIPushOption__Enum)pIVar4,
               MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_);
  }
  this = (Catalog *)((int)&this->klass + 1);
  goto code_?;
}


/* String GetPluralFormsHeader() */

String * Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_GetPluralFormsHeader
                   (Catalog *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_Plural_Forms;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).headerEntries;
  if (this_00 != (Dictionary_2_System_String_System_String_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject
            ::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
            Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                      ((Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                        *)this_00,pSVar1,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__ContainsKey_System__String_
                      );
    if (bVar2 == 0) {
      return StringLiteral_nplurals_2__plural__n____1___n;
    }
    pSVar1 = Catalog_GetHeader(this,StringLiteral_Plural_Forms,(MethodInfo *)0x0);
    return pSVar1;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar3)();
  return pSVar1;
}


/* Void GetStatistics(Int32 ByRef, Int32 ByRef, Int32 ByRef, Int32 ByRef, Int32 ByRef) */

void Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_GetStatistics
               (Catalog *this,int32_t *all,int32_t *fuzzy,int32_t *missing,int32_t *badtokens,
               int32_t *untranslated,MethodInfo *method)

{
  index = 0;
  *untranslated = 0;
  *badtokens = 0;
  *missing = 0;
  *fuzzy = 0;
  *all = 0;
  while( true ) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    pLVar1 = (this->fields).entriesList;
    if (pLVar1 == (List_1_GNU_Gettext_CatalogEntry_ *)0x0) break;
    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                        MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogEntry>__get_Count__
                       );
    if ((int)pOVar2 <= index) {
      return;
    }
    *all = *all + 1;
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if ((index < 0) ||
       (pLVar1 = (this->fields).entriesList, pLVar1 == (List_1_GNU_Gettext_CatalogEntry_ *)0x0))
    break;
    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                        MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogEntry>__get_Count__
                       );
    if (((int)pOVar2 <= index) ||
       (pLVar1 = (this->fields).entriesList, pLVar1 == (List_1_GNU_Gettext_CatalogEntry_ *)0x0))
    break;
    this_00 = (TimedPlayReward *)
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
              IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                        ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,index,
                         MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogEntry>__get_Item_int_
                        );
    if (this_00 == (TimedPlayReward *)0x0) break;
    bVar3 = TimedPlayReward::TimedPlayReward_get_IsClaimable(this_00,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      *fuzzy = *fuzzy + 1;
    }
    all = (int32_t *)0x0;
    pCVar4 = Catalog_get_Item(this,index,(MethodInfo *)0x0);
    if (pCVar4 == (CatalogEntry *)0x0) break;
    fuzzy = (int32_t *)&UNK_?;
    pSVar5 = CatalogEntry::CatalogEntry_get_References(pCVar4,(MethodInfo *)0x0);
    if (pSVar5 == (String__Array *)0x0) break;
    if (pSVar5->max_length == 0) {
      pCVar4->klass = (CatalogEntry__Class *)((int)&(pCVar4->klass->_0).image + 1);
    }
    this_01 = (Enumerable_CreateUnionIterator_c_Iterator1C_1_System_Object_ *)
              Catalog_get_Item(this,index,(MethodInfo *)0x0);
    if (this_01 == (Enumerable_CreateUnionIterator_c_Iterator1C_1_System_Object_ *)0x0) break;
    pOVar2 = System.Core.dll::System::Linq::Enumerable+<CreateUnionIterator>c__Iterator1C`1[System::
             Object]::
             Enumerable_CreateUnionIterator_c_Iterator1C_1_System_Object__System_Collections_IEnumerator_get_Current
                       (this_01,(MethodInfo *)0x0);
    if (pOVar2 == (Object *)0x1) {
      this->klass = (Catalog__Class *)((int)&(this->klass->_0).image + 1);
    }
    pCVar4 = Catalog_get_Item(this,index,(MethodInfo *)0x0);
    if (pCVar4 == (CatalogEntry *)0x0) break;
    bVar3 = CatalogEntry::CatalogEntry_get_IsTranslated(pCVar4,(MethodInfo *)0x0);
    if (bVar3 == 0) {
      *untranslated = *untranslated + 1;
    }
    index = index + 1;
  }
  func_?(0);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Boolean HasHeader(String) */

bool Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_HasHeader
               (Catalog *this,String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).headerEntries;
  if (this_00 != (Dictionary_2_System_String_System_String_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject
            ::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
            Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                      ((Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                        *)this_00,key,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__ContainsKey_System__String_
                      );
    return bVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* Void Load(String, String) */

void Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_Load
               (Catalog *this,String *text,String *fileName,MethodInfo *method)

{
  *unaff_FS_OFFSET = &stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).entriesDict;
  if (pIVar1 != (IDictionary_2_System_String_GNU_Gettext_CatalogEntry_ *)0x0) {
    func_?(3,
                    TypeInfo__System__Collections__Generic__ICollection<System::Collections::Generic::KeyValuePair<System::String,_GNU::Gettext::CatalogEntry>_>
                    ,pIVar1);
    pLVar2 = (List_1_UnityEngine_UIVertex_ *)(this->fields).entriesList;
    if (pLVar2 != (List_1_UnityEngine_UIVertex_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
      List_1_UnityEngine_UIVertex__Clear
                (pLVar2,
                 MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogEntry>__Clear__
                );
      pLVar2 = (List_1_UnityEngine_UIVertex_ *)(this->fields).deletedEntriesList;
      if (pLVar2 != (List_1_UnityEngine_UIVertex_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
        List_1_UnityEngine_UIVertex__Clear
                  (pLVar2,
                   MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogDeletedEntry>__Clear__
                  );
        (this->fields).isOk = 0;
        (this->fields).fileName = fileName;
        this_00 = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                  func_?(TypeInfo__GNU__Gettext__CharsetInfoFinder);
        CharsetInfoFinder::CharsetInfoFinder__ctor
                  ((CharsetInfoFinder *)this_00,text,(MethodInfo *)0x0);
        if (this_00 != (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0) {
          pSVar3 = (String *)
                   mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                   Serialization::JsonProperty]::
                   Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                             (this_00,(MethodInfo *)0x0);
          (this->fields).Charset = pSVar3;
          CatalogParser::CatalogParser_Parse((CatalogParser *)this_00,text,(MethodInfo *)0x0);
          pSVar3 = (String *)
                   mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                   Serialization::JsonProperty]::
                   Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                             (this_00,(MethodInfo *)0x0);
          (this->fields).Charset = pSVar3;
          pSVar3 = (String *)
                   mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                   Serialization::JsonProperty]::
                   Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                             (this_00,(MethodInfo *)0x0);
          (this->fields).Charset = pSVar3;
          encoding = Catalog_GetEncoding(pSVar3,(MethodInfo *)0x0);
          puVar4 = &UNK_?;
          this_01 = (LoadParser *)func_?();
          LoadParser::LoadParser__ctor(this_01,this,text,encoding,(MethodInfo *)0x0);
          if (this_01 != (LoadParser *)0x0) {
            bVar5 = CatalogParser::CatalogParser_Parse
                              ((CatalogParser *)this_01,text,(MethodInfo *)0x0);
            if (bVar5 != 0) {
              (this->fields).isOk = 1;
              Catalog_set_IsDirty(this,0,(MethodInfo *)0x0);
              *unaff_FS_OFFSET = puVar4;
              return;
            }
            goto code_?;
          }
        }
      }
    }
  }
  func_?(0);
code_?:
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?();
  }
  pSVar3 = mscorlib.dll::System::String::String_Format
                     (StringLiteral_Error_during_parsing___0___file_,(Object *)fileName,
                      (MethodInfo *)0x0);
  this_02 = (IsolatedStorageException *)func_?();
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1(this_02,pSVar3,(MethodInfo *)0x0);
  func_?();
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnDirtyChanged(EventArgs) */

void Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_OnDirtyChanged
               (Catalog *this,EventArgs *e,MethodInfo *method)

{
  this_00 = (EventHandler_1_InitializedGameQueryDataEventArgs_ *)(this->fields).DirtyChanged;
  if (this_00 != (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0) {
    mscorlib.dll::System::EventHandler`1[InitializedGameQueryDataEventArgs]::
    EventHandler_1_InitializedGameQueryDataEventArgs__Invoke
              (this_00,(Object *)this,(InitializedGameQueryDataEventArgs *)e,(MethodInfo *)0x0);
  }
  return;
}


/* Void ParseHeaderDict() */

void Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_ParseHeaderDict
               (Catalog *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = Catalog_GetHeader(this,StringLiteral_Project_Id_Version,(MethodInfo *)0x0);
  (this->fields).Project = pSVar1;
  pSVar1 = Catalog_GetHeader(this,StringLiteral_POT_Creation_Date,(MethodInfo *)0x0);
  (this->fields).CreationDate = pSVar1;
  pSVar1 = Catalog_GetHeader(this,StringLiteral_PO_Revision_Date,(MethodInfo *)0x0);
  (this->fields).RevisionDate = pSVar1;
  pSVar1 = Catalog_GetHeader(this,StringLiteral_Last_Translator,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?();
  }
  bVar2 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar1,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    pCVar3 = (Char__Array *)func_?();
    if (pCVar3 == (Char__Array *)0x0) goto code_?;
    if (pCVar3->max_length == 0) goto code_?;
    pCVar3->vector[0] = 0x3c;
    if (pCVar3->max_length < 2) goto code_?;
    pCVar3->vector[1] = 0x3e;
    if (pSVar1 == (String *)0x0) goto code_?;
    pSVar4 = mscorlib.dll::System::String::String_Split(pSVar1,pCVar3,(MethodInfo *)0x0);
    if (pSVar4 == (String__Array *)0x0) goto code_?;
    if ((int)pSVar4->max_length < 2) {
      (this->fields).Translator = pSVar1;
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      pSVar1 = TypeInfo__System__String->static_fields->Empty;
code_?:
      (this->fields).TranslatorEmail = pSVar1;
      goto code_?;
    }
    if (pSVar4->max_length == 0) goto code_?;
    if (pSVar4->vector[0] == (String *)0x0) goto code_?;
    pSVar1 = mscorlib.dll::System::String::String_Trim(pSVar4->vector[0],(MethodInfo *)0x0);
    (this->fields).Translator = pSVar1;
    if (1 < pSVar4->max_length) {
      if (pSVar4->vector[1] != (String *)0x0) {
        pSVar1 = mscorlib.dll::System::String::String_Trim(pSVar4->vector[1],(MethodInfo *)0x0);
        goto code_?;
      }
      goto code_?;
    }
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
  }
  else {
code_?:
    pSVar1 = Catalog_GetHeader(this,StringLiteral_Language_Team,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    bVar2 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar1,(MethodInfo *)0x0);
    if (bVar2 != 0) {
code_?:
      pSVar1 = Catalog_GetHeader(this,StringLiteral_Content_Type,(MethodInfo *)0x0);
      if (pSVar1 != (String *)0x0) {
        iVar5 = mscorlib.dll::System::String::String_IndexOf_5
                          (pSVar1,StringLiteral___charset_,(MethodInfo *)0x0);
        if (iVar5 == -1) {
          (this->fields).Charset = StringLiteral_iso_8859_1;
          return;
        }
        if (StringLiteral___charset_ != (String *)0x0) {
          pIVar6 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                   Collection_1_VoxelHit__get_Items
                             ((Collection_1_VoxelHit_ *)StringLiteral___charset_,(MethodInfo *)0x0);
          pSVar1 = mscorlib.dll::System::String::String_Substring
                             (pSVar1,(int)&pIVar6->klass + iVar5,(MethodInfo *)0x0);
          if (pSVar1 != (String *)0x0) {
            pSVar1 = mscorlib.dll::System::String::String_Trim(pSVar1,(MethodInfo *)0x0);
            (this->fields).Charset = pSVar1;
            return;
          }
        }
      }
code_?:
      func_?();
code_?:
      func_?();
      func_?();
code_?:
      func_?();
      func_?();
code_?:
      func_?();
      func_?();
      goto code_?;
    }
    pCVar3 = (Char__Array *)func_?();
    if (pCVar3 == (Char__Array *)0x0) goto code_?;
    if (pCVar3->max_length == 0) goto code_?;
    pCVar3->vector[0] = 0x3c;
    if (pCVar3->max_length < 2) goto code_?;
    pCVar3->vector[1] = 0x3e;
    if (pSVar1 == (String *)0x0) goto code_?;
    pSVar4 = mscorlib.dll::System::String::String_Split(pSVar1,pCVar3,(MethodInfo *)0x0);
    if (pSVar4 == (String__Array *)0x0) goto code_?;
    if ((int)pSVar4->max_length < 2) {
      (this->fields).Team = pSVar1;
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      pSVar1 = TypeInfo__System__String->static_fields->Empty;
code_?:
      (this->fields).TeamEmail = pSVar1;
      goto code_?;
    }
    if (pSVar4->max_length != 0) {
      if (pSVar4->vector[0] != (String *)0x0) {
        pSVar1 = mscorlib.dll::System::String::String_Trim(pSVar4->vector[0],(MethodInfo *)0x0);
        (this->fields).Team = pSVar1;
        if (pSVar4->max_length < 2) goto code_?;
        if (pSVar4->vector[1] != (String *)0x0) {
          pSVar1 = mscorlib.dll::System::String::String_Trim(pSVar4->vector[1],(MethodInfo *)0x0);
          goto code_?;
        }
      }
      goto code_?;
    }
  }
  func_?();
  func_?();
code_?:
  func_?();
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void ParseHeaderString(String) */

void Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_ParseHeaderString
               (Catalog *this,String *headers,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_01 = (Catalog *)StringEscaping::StringEscaping_FromGettextFormat(headers,(MethodInfo *)0x0);
  separator = (Char__Array *)func_?(TypeInfo__System__Char,1);
  if (separator != (Char__Array *)0x0) {
    if (separator->max_length == 0) goto code_?;
    separator->vector[0] = 10;
    if (this_01 != (Catalog *)0x0) {
      this_02 = mscorlib.dll::System::String::String_Split
                          ((String *)this_01,separator,(MethodInfo *)0x0);
      this_00 = (this->fields).headerEntries;
      this_01 = this;
      if (this_00 != (Dictionary_2_System_String_System_String_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
        Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
        Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Clear
                  ((Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                    *)this_00,
                   MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Clear__
                  );
        pLVar1 = (Link__Array *)0x0;
        if (this_02 != (String__Array *)0x0) {
          ppSVar2 = this_02->vector;
          while( true ) {
            while( true ) {
              if ((int)this_02->max_length <= (int)pLVar1) {
                Catalog_ParseHeaderDict(this,(MethodInfo *)0x0);
                return;
              }
              this_01 = this;
              if ((Link__Array *)this_02->max_length <= pLVar1) goto code_?;
              this_01 = (Catalog *)*ppSVar2;
              if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__System__String->_1).cctor_started == 0)) {
                func_?();
              }
              bVar3 = mscorlib.dll::System::String::String_op_Inequality
                                ((String *)this_01,TypeInfo__System__String->static_fields->Empty,
                                 (MethodInfo *)0x0);
              if (bVar3 != 0) break;
              pLVar1 = (Link__Array *)((int)&pLVar1->klass + 1);
              ppSVar2 = ppSVar2 + 1;
            }
            if (this_01 == (Catalog *)0x0) break;
            length = mscorlib.dll::System::String::String_IndexOf_2
                               ((String *)this_01,0x3a,(MethodInfo *)0x0);
            if (length == -1) goto code_?;
            pSVar4 = mscorlib.dll::System::String::String_Substring_1
                               ((String *)this_01,0,length,(MethodInfo *)0x0);
            if (pSVar4 == (String *)0x0) break;
            mscorlib.dll::System::String::String_Trim(pSVar4,(MethodInfo *)0x0);
            pSVar4 = mscorlib.dll::System::String::String_Substring
                               ((String *)this_01,length + 1,(MethodInfo *)0x0);
            if (pSVar4 == (String *)0x0) break;
            key = (String *)0x0;
            value = (Theme *)mscorlib.dll::System::String::String_Trim(pSVar4,(MethodInfo *)0x0);
            this_02 = (String__Array *)(this->fields).headerEntries;
            this_01 = this;
            if (this_02 == (String__Array *)0x0) break;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
            Dictionary_2_System_String_Theme__set_Item
                      ((Dictionary_2_System_String_Theme_ *)this_02,key,value,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__set_Item_System__String__System__String_
                      );
            pLVar1 = (Link__Array *)((int)&pLVar1->klass + 1);
            ppSVar2 = ppSVar2 + 1;
          }
        }
      }
    }
  }
  func_?();
code_?:
  uVar5 = func_?(0);
  func_?(uVar5);
code_?:
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar4 = mscorlib.dll::System::String::String_Format
                     (StringLiteral_Malformed_header____0__,(Object *)this_01,(MethodInfo *)0x0);
  this_03 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1(this_03,pSVar4,(MethodInfo *)0x0);
  func_?(this_03,0,MethodInfo__GNU__Gettext__Catalog__ParseHeaderString_System__String_);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void RemoveDeletedItems() */

void Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_RemoveDeletedItems
               (Catalog *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_UIVertex_ *)(this->fields).deletedEntriesList;
  if (this_00 != (List_1_UnityEngine_UIVertex_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
    List_1_UnityEngine_UIVertex__Clear
              (this_00,
               MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogDeletedEntry>__Clear__
              );
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void RemoveItem(CatalogEntry) */

void Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_RemoveItem
               (Catalog *this,CatalogEntry *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pCVar1 = Catalog_FindItem_1(this,data,(MethodInfo *)0x0);
  if (pCVar1 != (CatalogEntry *)0x0) {
    unaff_EBP = (MethodInfo *)(this->fields).entriesDict;
    if (data == (CatalogEntry *)0x0) goto code_?;
    CatalogEntry::CatalogEntry_get_Key(data,(MethodInfo *)0x0);
    if (unaff_EBP == (MethodInfo *)0x0) goto code_?;
    func_?(2,
                    TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::CatalogEntry>
                   );
  }
  pLVar2 = (List_1_UnityEngine_Color32_ *)(this->fields).entriesList;
  if (pLVar2 != (List_1_UnityEngine_Color32_ *)0x0) {
    item_00._4_4_ =
         MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogEntry>__Contains_GNU__Gettext__CatalogEntry_
    ;
    item_00.rgba = (int32_t)data;
    bVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
            List_1_UnityEngine_Color32__Contains(pLVar2,item_00,unaff_EBP);
    if (bVar3 != 0) {
      pLVar2 = (List_1_UnityEngine_Color32_ *)(this->fields).entriesList;
      if (pLVar2 == (List_1_UnityEngine_Color32_ *)0x0) goto code_?;
      item._4_4_ = 
      MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogEntry>__Remove_GNU__Gettext__CatalogEntry_
      ;
      item.rgba = (int32_t)data;
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
      List_1_UnityEngine_Color32__Remove(pLVar2,item,(MethodInfo *)data);
    }
    return;
  }
code_?:
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SaveMultiLines(StringBuilder, String, String) */

void Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_SaveMultiLines
               (StringBuilder *sb,String *text,String *newLine,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
    if (pSVar1->max_length == 0) goto code_?;
    pSVar1->vector[0] = StringLiteral_u000Au000D;
    if ((StringLiteral_u000Du000A != (String *)0x0) &&
       (iVar2 = func_?(StringLiteral_u000Du000A,(pSVar1->klass->_0).element_class),
       iVar2 == 0)) goto code_?;
    if (pSVar1->max_length < 2) goto code_?;
    pSVar1->vector[1] = StringLiteral_u000Du000A;
    if ((StringLiteral_u000D != (String *)0x0) &&
       (iVar2 = func_?(StringLiteral_u000D,(pSVar1->klass->_0).element_class), iVar2 == 0))
    goto code_?;
    if (pSVar1->max_length < 3) goto code_?;
    pSVar1->vector[2] = StringLiteral_u000D;
    if ((StringLiteral_u000A != (String *)0x0) &&
       (iVar2 = func_?(StringLiteral_u000A,(pSVar1->klass->_0).element_class), iVar2 == 0))
    goto code_?;
    if (pSVar1->max_length < 4) goto code_?;
    pSVar1->vector[3] = StringLiteral_u000A;
    if ((StringLiteral_u000D != (String *)0x0) &&
       (iVar2 = func_?(StringLiteral_u000D,(pSVar1->klass->_0).element_class), iVar2 == 0))
    goto code_?;
    if (4 < pSVar1->max_length) {
      pSVar1->vector[4] = StringLiteral_u000D;
      pSVar1 = mscorlib.dll::System::String::String_Split_5
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
        mscorlib.dll::System::Text::StringBuilder::StringBuilder_AppendFormat_3
                  (sb,StringLiteral__0__1_,(Object *)*ppSVar4,(Object *)newLine,(MethodInfo *)0x0);
        uVar3 = uVar3 + 1;
        ppSVar4 = ppSVar4 + 1;
      }
      goto code_?;
    }
  }
  else {
    uVar5 = func_?(0,0);
    func_?(uVar5);
code_?:
    uVar5 = func_?(0,0);
    func_?(uVar5);
code_?:
    uVar5 = func_?(0,0);
    func_?(uVar5);
code_?:
    uVar5 = func_?(0,0);
    func_?(uVar5);
code_?:
    uVar5 = func_?(0,0);
    func_?(uVar5);
code_?:
    uVar5 = func_?(0,0);
    func_?(uVar5);
code_?:
    uVar5 = func_?(0,0);
    func_?(uVar5);
code_?:
    uVar5 = func_?(0,0);
    func_?(uVar5);
code_?:
    uVar5 = func_?(0,0);
    func_?(uVar5);
  }
  uVar5 = func_?();
  func_?(uVar5);
code_?:
  func_?(0);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetHeader(String, String) */

void Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_SetHeader
               (Catalog *this,String *key,String *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).headerEntries;
  if (this_00 != (Dictionary_2_System_String_System_String_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
    Dictionary_2_System_String_Theme__set_Item
              ((Dictionary_2_System_String_Theme_ *)this_00,key,(Theme *)value,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__set_Item_System__String__System__String_
              );
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void SetHeaderNotEmpty(String, String) */

void Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_SetHeaderNotEmpty
               (Catalog *this,String *key,String *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  bVar1 = mscorlib.dll::System::String::String_IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    pDVar2 = (this->fields).headerEntries;
    if (pDVar2 != (Dictionary_2_System_String_System_String_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
      Dictionary_2_System_String_Theme__set_Item
                ((Dictionary_2_System_String_Theme_ *)pDVar2,key,(Theme *)value,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__set_Item_System__String__System__String_
                );
      return;
    }
  }
  else {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    pDVar2 = (this->fields).headerEntries;
    if (pDVar2 != (Dictionary_2_System_String_System_String_ *)0x0) {
      bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::
              WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
              KogamaSettingWrapperBase]::
              Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                        ((Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                          *)pDVar2,key,
                         MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__ContainsKey_System__String_
                        );
      if (bVar1 == 0) {
        return;
      }
      pDVar2 = (this->fields).headerEntries;
      if (pDVar2 != (Dictionary_2_System_String_System_String_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets
        ::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
        Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Remove
                  ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                    *)pDVar2,
                   (String *)
                   MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Remove_System__String_
                   ,
                   MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Remove_System__String_
                  );
        return;
      }
    }
  }
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_Color32_ *)(this->fields).entriesList;
  if (this_00 != (List_1_UnityEngine_Color32_ *)0x0) {
    pLVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
             List_1_UnityEngine_Color32__GetEnumerator
                       ((List_1_T_Enumerator_UnityEngine_Color32_ *)auStack_2,this_00,
                        MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogEntry>__GetEnumerator__
                       );
    auStack_2._16_4_ = pLVar1->l;
    iStack_3 = pLVar1->next;
    iStack_4 = pLVar1->ver;
    iStack_5 = (pLVar1->current).rgba;
    pIVar6 = (IEnumerator *)
             func_?(TypeInfo__System__Collections__Generic__List_1_T___Enumerator<GNU::Gettext::CatalogEntry>
                             ,auStack_2 + 0x10);
    return pIVar6;
  }
  func_?(0);
  pcVar7 = (code *)swi(3);
  pIVar6 = (IEnumerator *)(*pcVar7)();
  return pIVar6;
}


/* Boolean Translate(String, String, String) */

bool Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_Translate
               (Catalog *this,String *msgid,String *context,String *translation,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).entriesDict;
  CatalogEntry::CatalogEntry_MakeKey(msgid,context,(MethodInfo *)0x0);
  if (pIVar1 != (IDictionary_2_System_String_GNU_Gettext_CatalogEntry_ *)0x0) {
    cVar2 = func_?(1,
                            TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::CatalogEntry>
                            ,pIVar1);
    if (cVar2 != '\0') {
      pIVar1 = (this->fields).entriesDict;
      CatalogEntry::CatalogEntry_MakeKey(msgid,context,(MethodInfo *)0x0);
      if (pIVar1 == (IDictionary_2_System_String_GNU_Gettext_CatalogEntry_ *)0x0)
      goto code_?;
      this_00 = (CatalogEntry *)
                func_?(4,
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_Project_Id_Version;
  pTVar2 = (Theme *)(this->fields).Project;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar3 = (this->fields).headerEntries;
  if (pDVar3 != (Dictionary_2_System_String_System_String_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
    Dictionary_2_System_String_Theme__set_Item
              ((Dictionary_2_System_String_Theme_ *)pDVar3,pSVar1,pTVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__set_Item_System__String__System__String_
              );
    pSVar1 = StringLiteral_POT_Creation_Date;
    pTVar2 = (Theme *)(this->fields).CreationDate;
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    pDVar3 = (this->fields).headerEntries;
    if (pDVar3 != (Dictionary_2_System_String_System_String_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
      Dictionary_2_System_String_Theme__set_Item
                ((Dictionary_2_System_String_Theme_ *)pDVar3,pSVar1,pTVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__set_Item_System__String__System__String_
                );
      pSVar1 = StringLiteral_PO_Revision_Date;
      pTVar2 = (Theme *)(this->fields).RevisionDate;
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      pDVar3 = (this->fields).headerEntries;
      if (pDVar3 != (Dictionary_2_System_String_System_String_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
        Dictionary_2_System_String_Theme__set_Item
                  ((Dictionary_2_System_String_Theme_ *)pDVar3,pSVar1,pTVar2,
                   MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__set_Item_System__String__System__String_
                  );
        pSVar1 = (this->fields).TranslatorEmail;
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__String);
        }
        bVar4 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar1,(MethodInfo *)0x0);
        pTVar2 = (Theme *)(this->fields).Translator;
        if (bVar4 == 0) {
          pSVar1 = (this->fields).TranslatorEmail;
          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__String->_1).cctor_started == 0)) {
            func_?(TypeInfo__System__String);
          }
          pTVar2 = (Theme *)mscorlib.dll::System::String::String_Format_1
                                      (StringLiteral__0____1__,(Object *)pTVar2,(Object *)pSVar1,
                                       (MethodInfo *)0x0);
        }
        pSVar1 = StringLiteral_Last_Translator;
        if (cRam_? == '\0') {
          func_?(_UNK_?);
          cRam_? = '\x01';
        }
        pDVar3 = (this->fields).headerEntries;
        if (pDVar3 != (Dictionary_2_System_String_System_String_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
          Dictionary_2_System_String_Theme__set_Item
                    ((Dictionary_2_System_String_Theme_ *)pDVar3,pSVar1,pTVar2,
                     MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__set_Item_System__String__System__String_
                    );
          pSVar1 = (this->fields).TeamEmail;
          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__String->_1).cctor_started == 0)) {
            func_?(TypeInfo__System__String);
          }
          bVar4 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar1,(MethodInfo *)0x0);
          pTVar2 = (Theme *)(this->fields).Team;
          if (bVar4 == 0) {
            pSVar1 = (this->fields).TeamEmail;
            if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__String->_1).cctor_started == 0)) {
              func_?(TypeInfo__System__String);
            }
            pTVar2 = (Theme *)mscorlib.dll::System::String::String_Format_1
                                        (StringLiteral__0____1__,(Object *)pTVar2,(Object *)pSVar1,
                                         (MethodInfo *)0x0);
          }
          pSVar1 = StringLiteral_Language_Team;
          if (cRam_? == '\0') {
            func_?(_UNK_?);
            cRam_? = '\x01';
          }
          pDVar3 = (this->fields).headerEntries;
          if (pDVar3 != (Dictionary_2_System_String_System_String_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
            Dictionary_2_System_String_Theme__set_Item
                      ((Dictionary_2_System_String_Theme_ *)pDVar3,pSVar1,pTVar2,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__set_Item_System__String__System__String_
                      );
            pSVar5 = StringLiteral__1_0;
            pSVar1 = StringLiteral_MIME_Version;
            if (cRam_? == '\0') {
              func_?(_UNK_?);
              cRam_? = '\x01';
            }
            pDVar3 = (this->fields).headerEntries;
            if (pDVar3 != (Dictionary_2_System_String_System_String_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
              Dictionary_2_System_String_Theme__set_Item
                        ((Dictionary_2_System_String_Theme_ *)pDVar3,pSVar1,(Theme *)pSVar5,
                         MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__set_Item_System__String__System__String_
                        );
              pSVar1 = (this->fields).Charset;
              if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__System__String->_1).cctor_started == 0)) {
                func_?(TypeInfo__System__String);
              }
              pTVar2 = (Theme *)mscorlib.dll::System::String::String_Concat_2
                                          (StringLiteral_text_plain__charset_,pSVar1,
                                           (MethodInfo *)0x0);
              pSVar1 = StringLiteral_Content_Type;
              if (cRam_? == '\0') {
                func_?(_UNK_?);
                cRam_? = '\x01';
              }
              pDVar3 = (this->fields).headerEntries;
              if (pDVar3 != (Dictionary_2_System_String_System_String_ *)0x0) {
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
                Dictionary_2_System_String_Theme__set_Item
                          ((Dictionary_2_System_String_Theme_ *)pDVar3,pSVar1,pTVar2,
                           MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__set_Item_System__String__System__String_
                          );
                pSVar5 = StringLiteral__8bit;
                pSVar1 = StringLiteral_Content_Transfer_Encoding;
                if (cRam_? == '\0') {
                  func_?(_UNK_?);
                  cRam_? = '\x01';
                }
                pDVar3 = (this->fields).headerEntries;
                if (pDVar3 != (Dictionary_2_System_String_System_String_ *)0x0) {
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
                  Dictionary_2_System_String_Theme__set_Item
                            ((Dictionary_2_System_String_Theme_ *)pDVar3,pSVar1,(Theme *)pSVar5,
                             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__set_Item_System__String__System__String_
                            );
                  pSVar5 = StringLiteral_MonoDevelop_Gettext_addin;
                  pSVar1 = StringLiteral_X_Generator;
                  if (cRam_? == '\0') {
                    func_?(_UNK_?);
                    cRam_? = '\x01';
                  }
                  pDVar3 = (this->fields).headerEntries;
                  if (pDVar3 != (Dictionary_2_System_String_System_String_ *)0x0) {
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
                    Dictionary_2_System_String_Theme__set_Item
                              ((Dictionary_2_System_String_Theme_ *)pDVar3,pSVar1,(Theme *)pSVar5,
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
  func_?(0);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Catalog() */

void Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog__ctor(Catalog *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_String_System_String_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::String>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Dictionary__
            );
  (this->fields).headerEntries = this_00;
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  (this->fields).Project = TypeInfo__System__String->static_fields->Empty;
  (this->fields).CreationDate = TypeInfo__System__String->static_fields->Empty;
  (this->fields).RevisionDate = TypeInfo__System__String->static_fields->Empty;
  (this->fields).Translator = TypeInfo__System__String->static_fields->Empty;
  (this->fields).TranslatorEmail = TypeInfo__System__String->static_fields->Empty;
  (this->fields).Team = TypeInfo__System__String->static_fields->Empty;
  (this->fields).TeamEmail = TypeInfo__System__String->static_fields->Empty;
  (this->fields).Charset = TypeInfo__System__String->static_fields->Empty;
  (this->fields).Language = TypeInfo__System__String->static_fields->Empty;
  (this->fields).Country = TypeInfo__System__String->static_fields->Empty;
  (this->fields).Comment = TypeInfo__System__String->static_fields->Empty;
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,in_stack_1);
  this_01 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<System::String,_GNU::Gettext::CatalogEntry>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_GNU::Gettext::CatalogEntry>__Dictionary__
            );
  (this->fields).entriesDict = (IDictionary_2_System_String_GNU_Gettext_CatalogEntry_ *)this_01;
  pLVar2 = (List_1_UnityEngine_Vector4_ *)
           func_?(TypeInfo__System__Collections__Generic__List<GNU::Gettext::CatalogEntry>)
  ;
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (pLVar2,
             MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogEntry>__List__);
  (this->fields).entriesList = (List_1_GNU_Gettext_CatalogEntry_ *)pLVar2;
  pLVar2 = (List_1_UnityEngine_Vector4_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__List<GNU::Gettext::CatalogDeletedEntry>
                          );
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (pLVar2,
             MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogDeletedEntry>__List__
            );
  (this->fields).deletedEntriesList = (List_1_GNU_Gettext_CatalogDeletedEntry_ *)pLVar2;
  bVar3 = cRam_? == '\0';
  (this->fields).isOk = 1;
  if (bVar3) {
    func_?();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__DateTime->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__DateTime->_1).cctor_started == 0)) {
    func_?();
  }
  mscorlib.dll::System::DateTime::DateTime_get_Now((DateTime *)&stack0xffffffdc,(MethodInfo *)0x0);
  pSVar4 = (String *)func_?();
  (this->fields).CreationDate = pSVar4;
  (this->fields).RevisionDate = pSVar4;
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?();
  }
  pSVar4 = TypeInfo__System__String->static_fields->Empty;
  (this->fields).TeamEmail = pSVar4;
  (this->fields).Team = pSVar4;
  (this->fields).Project = pSVar4;
  (this->fields).Country = pSVar4;
  (this->fields).Language = pSVar4;
  (this->fields).Charset = StringLiteral_utf_8;
  Catalog_UpdateHeaderDict(this,(MethodInfo *)0x0);
  return;
}


/* Void add_DirtyChanged(EventHandler) */

void Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_add_DirtyChanged
               (Catalog *this,EventHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).Comment;
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
  this_00 = (StringBuilder *)func_?(TypeInfo__System__Text__StringBuilder);
  mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor_2(this_00,(MethodInfo *)0x0);
  pSVar1 = (this->fields).Comment;
  this = (Catalog *)0x1000000;
  pCVar3 = (Char__Array *)func_?(TypeInfo__System__Char,1);
  if (pCVar3 != (Char__Array *)0x0) {
    if (pCVar3->max_length == 0) {
code_?:
      uVar4 = func_?(0,0);
      func_?(uVar4);
    }
    else {
      pCVar3->vector[0] = 10;
      if (pSVar1 != (String *)0x0) {
        pSVar5 = mscorlib.dll::System::String::String_Split(pSVar1,pCVar3,(MethodInfo *)0x0);
        puVar6 = (undefined1 *)0x0;
        if (pSVar5 != (String__Array *)0x0) {
          ppSVar7 = pSVar5->vector;
          while ((int)puVar6 < (int)pSVar5->max_length) {
            if ((undefined1 *)pSVar5->max_length <= puVar6) goto code_?;
            pSVar1 = *ppSVar7;
            if (this._3_1_ == '\0') {
              if (this_00 == (StringBuilder *)0x0) goto code_?;
              mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_5
                        (this_00,10,(MethodInfo *)0x0);
            }
            if (pSVar1 == (String *)0x0) goto code_?;
            bVar2 = mscorlib.dll::System::String::String_StartsWith
                              (pSVar1,::StringLiteral__,(MethodInfo *)0x0);
            if (bVar2 == 0) {
              pCVar3 = (Char__Array *)func_?();
              if (pCVar3 == (Char__Array *)0x0) goto code_?;
              func_?(0,0x20);
              func_?(1,9);
            }
            else {
              pSVar1 = mscorlib.dll::System::String::String_Substring(pSVar1,1,(MethodInfo *)0x0);
              pCVar3 = (Char__Array *)func_?();
              if (pCVar3 == (Char__Array *)0x0) goto code_?;
              func_?(0,0x20);
              func_?(1,9);
              if (pSVar1 == (String *)0x0) goto code_?;
            }
            pSVar5 = (String__Array *)&UNK_?;
            this = (Catalog *)
                   mscorlib.dll::System::String::String_TrimStart(pSVar1,pCVar3,(MethodInfo *)0x0);
            if (this_00 == (StringBuilder *)0x0) goto code_?;
            mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append
                      (this_00,(String *)this,(MethodInfo *)0x0);
            ppSVar7 = (String **)&pSVar1->monitor;
            puVar6 = (undefined1 *)((int)&pCVar3->klass + 1);
          }
          if (this_00 != (StringBuilder *)0x0) {
            pSVar1 = (String *)(*(code *)(this_00->klass->vtable).ToString.method)(this_00);
            return pSVar1;
          }
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar8 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar8)();
  return pSVar1;
}


/* Int32 get_Count() */

int32_t Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_get_Count
                  (Catalog *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).entriesList;
  if (this_00 != (List_1_GNU_Gettext_CatalogEntry_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                        MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogEntry>__get_Count__
                       );
    return (int32_t)pOVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}


/* Boolean get_HasDeletedItems() */

bool Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_get_HasDeletedItems
               (Catalog *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).deletedEntriesList;
  if (this_00 != (List_1_GNU_Gettext_CatalogDeletedEntry_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                        MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogDeletedEntry>__get_Count__
                       );
    return 0 < (int)pOVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* CatalogEntry get_Item(Int32) */

CatalogEntry *
Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_get_Item
          (Catalog *this,int32_t index,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (index < 0) {
    return (CatalogEntry *)0x0;
  }
  pLVar1 = (this->fields).entriesList;
  if (pLVar1 != (List_1_GNU_Gettext_CatalogEntry_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                        MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogEntry>__get_Count__
                       );
    if ((int)pOVar2 <= index) {
      return (CatalogEntry *)0x0;
    }
    pLVar1 = (this->fields).entriesList;
    if (pLVar1 != (List_1_GNU_Gettext_CatalogEntry_ *)0x0) {
      pCVar3 = (CatalogEntry *)
               mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
               IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                         ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,index,
                          MethodInfo__System__Collections__Generic__List<GNU::Gettext::CatalogEntry>__get_Item_int_
                         );
      return pCVar3;
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  pCVar3 = (CatalogEntry *)(*pcVar4)();
  return pCVar3;
}


/* String get_LocaleCode() */

String * Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_get_LocaleCode
                   (Catalog *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pCVar1 = this;
  value = (MethodInfo *)TypeInfo__System__String->static_fields->Empty;
  bVar2 = mscorlib.dll::System::String::String_IsNullOrEmpty
                    ((this->fields).Language,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    pSVar3 = (pCVar1->fields).Language;
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
    pSVar3 = (pCVar1->fields).Country;
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      this = (Catalog *)TypeInfo__System__String;
      func_?();
    }
    bVar2 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar3,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      this = (Catalog *)0x5f;
      arg1 = (Object *)func_?(TypeInfo__System__Char,&this);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      arg0 = mscorlib.dll::System::String::String_Concat((Object *)value,arg1,(MethodInfo *)0x0);
      pSVar3 = (pCVar1->fields).Country;
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
  bVar2 = mscorlib.dll::System::String::String_IsNullOrEmpty((String *)value,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pSVar3 = (pCVar1->fields).fileName;
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    bVar2 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar3,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      pSVar3 = (pCVar1->fields).fileName;
      if ((((uint)(TypeInfo__System__IO__Path->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__IO__Path->_1).cctor_started == 0)) {
        this = (Catalog *)TypeInfo__System__IO__Path;
        func_?();
      }
      this = (Catalog *)0x0;
      this_01 = (MethodInfo *)
                mscorlib.dll::System::IO::Path::Path_GetFileNameWithoutExtension
                          (pSVar3,(MethodInfo *)0x0);
      if (this_01 == (MethodInfo *)0x0) {
code_?:
        method = (MethodInfo *)&UNK_?;
        func_?();
        pcVar4 = (code *)swi(3);
        pSVar3 = (String *)(*pcVar4)();
        return pSVar3;
      }
      this = (Catalog *)&UNK_?;
      method = this_01;
      pIVar5 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this_01,(MethodInfo *)0x0)
      ;
      if (pIVar5 == (IList_1_VoxelHit_ *)0x2) {
        if ((((uint)(TypeInfo__GNU__Gettext__IsoCodes->vtable).Equals.methodPtr & 0x2000000) != 0)
           && ((TypeInfo__GNU__Gettext__IsoCodes->_1).cctor_started == 0)) {
          func_?();
        }
        bVar2 = IsoCodes::IsoCodes_IsKnownLanguageCode((String *)this_01,(MethodInfo *)0x0);
        if (bVar2 != 0) {
          value = this_01;
        }
        return (String *)value;
      }
      pIVar5 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this_01,(MethodInfo *)0x0)
      ;
      if (pIVar5 == (IList_1_VoxelHit_ *)0x5) {
        uVar6 = mscorlib.dll::System::String::String_get_Chars
                          ((String *)this_01,2,(MethodInfo *)0x0);
        if (uVar6 == 0x5f) {
          pSVar3 = mscorlib.dll::System::String::String_Substring_1
                             ((String *)this_01,0,2,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__GNU__Gettext__IsoCodes->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__GNU__Gettext__IsoCodes->_1).cctor_started == 0)) {
            func_?();
          }
          bVar2 = IsoCodes::IsoCodes_IsKnownLanguageCode(pSVar3,(MethodInfo *)0x0);
          if (bVar2 != 0) {
            pSVar3 = mscorlib.dll::System::String::String_Substring_1
                               ((String *)this_01,3,2,(MethodInfo *)0x0);
            if ((((uint)(TypeInfo__GNU__Gettext__IsoCodes->vtable).Equals.methodPtr & 0x2000000) !=
                 0) && ((TypeInfo__GNU__Gettext__IsoCodes->_1).cctor_started == 0)) {
              func_?();
            }
            bVar2 = IsoCodes::IsoCodes_IsKnownCountryCode(pSVar3,(MethodInfo *)0x0);
            if (bVar2 != 0) {
              value = this_01;
            }
          }
        }
      }
    }
  }
  return (String *)value;
}


/* Int32 get_PluralFormsCount() */

int32_t Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_get_PluralFormsCount
                  (Catalog *this,MethodInfo *method)

{
  pIVar1 = (IList_1_VoxelHit_ *)0x2;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar2 = StringLiteral_Plural_Forms;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).headerEntries;
  if (this_00 == (Dictionary_2_System_String_System_String_ *)0x0) {
    func_?(0);
    pcVar3 = (code *)swi(3);
    iVar4 = (*pcVar3)();
    return iVar4;
  }
  bVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject::
          KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
          Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                    ((Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                      *)this_00,pSVar2,
                     MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__ContainsKey_System__String_
                    );
  pSVar2 = StringLiteral_nplurals_2__plural__n____1___n;
  if (bVar5 != 0) {
    pSVar2 = Catalog_GetHeader(this,StringLiteral_Plural_Forms,(MethodInfo *)0x0);
  }
  this_01 = PluralFormsCalculator::PluralFormsCalculator_Make(pSVar2,(MethodInfo *)0x0);
  if (this_01 != (PluralFormsCalculator *)0x0) {
    pIVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this_01,(MethodInfo *)0x0);
  }
  return (int32_t)pIVar1;
}


/* String[] get_PluralFormsDescriptions() */

String__Array *
Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_get_PluralFormsDescriptions
          (Catalog *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_VoxelHit_ *)
           func_?(TypeInfo__System__Collections__Generic__List<System::String>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            ((List_1_UnityEngine_Vector4_ *)pLVar1,
             MethodInfo__System__Collections__Generic__List<System::String>__List__);
  pSVar2 = StringLiteral_Plural_Forms;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar3 = (this->fields).headerEntries;
  if (pDVar3 != (Dictionary_2_System_String_System_String_ *)0x0) {
    bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject
            ::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
            Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                      ((Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                        *)pDVar3,pSVar2,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__ContainsKey_System__String_
                      );
    if (bVar4 == 0) {
      if (pLVar1 != (List_1_VoxelHit_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                  ((List_1_UIPushOption_ *)pLVar1,(UIPushOption__Enum)StringLiteral_Singular,
                   MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                  );
        mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                  ((List_1_UIPushOption_ *)pLVar1,(UIPushOption__Enum)StringLiteral_Plural,
                   MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                  );
        pVVar5 = mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::
                 List_1_VoxelHit__ToArray
                           (pLVar1,
                            MethodInfo__System__Collections__Generic__List<System::String>__ToArray__
                           );
        return (String__Array *)pVVar5;
      }
    }
    else {
      pSVar2 = Catalog_GetHeader(this,StringLiteral_Plural_Forms,(MethodInfo *)0x0);
      method_00 = (Catalog *)&UNK_?;
      this_00 = PluralFormsCalculator::PluralFormsCalculator_Make(pSVar2,(MethodInfo *)0x0);
      pIVar6 = (IList_1_VoxelHit_ *)0x2;
      pLStack_7 = pLVar1;
      if (cRam_? == '\0') {
        pLStack_7 = _UNK_?;
        func_?();
        cRam_? = '\x01';
      }
      pSVar2 = StringLiteral_Plural_Forms;
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      pDVar3 = (this->fields).headerEntries;
      if (pDVar3 != (Dictionary_2_System_String_System_String_ *)0x0) {
        bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::
                WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
                KogamaSettingWrapperBase]::
                Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                          ((Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                            *)pDVar3,pSVar2,
                           MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__ContainsKey_System__String_
                          );
        pSVar2 = StringLiteral_nplurals_2__plural__n____1___n;
        if (bVar4 != 0) {
          pSVar2 = Catalog_GetHeader(this,StringLiteral_Plural_Forms,(MethodInfo *)0x0);
          method_00 = this;
        }
        this_01 = PluralFormsCalculator::PluralFormsCalculator_Make(pSVar2,(MethodInfo *)0x0);
        if (this_01 == (PluralFormsCalculator *)0x0) {
          pIVar8 = (IList_1_VoxelHit_ *)0x2;
        }
        else {
          pIVar8 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                   Collection_1_VoxelHit__get_Items
                             ((Collection_1_VoxelHit_ *)this_01,(MethodInfo *)0x0);
          pIVar6 = pIVar8;
        }
        pMStack_9 = (MethodInfo *)0x0;
        if (0 < (int)pIVar8) {
          do {
            if (this_00 == (PluralFormsCalculator *)0x0) {
code_?:
              pOVar10 = (Object *)func_?(TypeInfo__System__Int32,&stack0xffffffe0);
              if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__System__String->_1).cctor_started == 0)) {
                func_?(TypeInfo__System__String);
              }
              pSVar2 = mscorlib.dll::System::String::String_Format
                                 (StringLiteral_Form__0_,pOVar10,(MethodInfo *)0x0);
            }
            else {
              iVar11 = 1;
              method_01 = pMStack_9;
              do {
                iVar12 = PluralFormsCalculator::PluralFormsCalculator_Evaluate_1
                                   (this_00,(ulonglong)(uint)(iVar11 >> 0x1f),
                                    (MethodInfo *)method_00);
                if (iVar12 == (int)pMStack_9) break;
                iVar11 = iVar11 + 1;
              } while (iVar11 < 1000);
              pLVar1 = pLStack_7;
              if (iVar11 == 1000) {
                pIVar6 = (IList_1_VoxelHit_ *)0x0;
                method_00 = (Catalog *)&UNK_?;
                iVar12 = PluralFormsCalculator::PluralFormsCalculator_Evaluate_1
                                   (this_00,0,method_01);
                if (iVar12 != CONCAT44((int)pMStack_9 >> 0x1f,method_01)) goto code_?;
              }
              pOVar10 = (Object *)func_?(TypeInfo__System__Int32,&stack0xffffffe8);
              arg1 = (Object *)func_?(TypeInfo__System__Int32,&stack0xffffffe4);
              if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__System__String->_1).cctor_started == 0)) {
                func_?(TypeInfo__System__String);
              }
              pSVar2 = mscorlib.dll::System::String::String_Format_1
                                 (StringLiteral_Form__0___e_g____1___,pOVar10,arg1,(MethodInfo *)0x0)
              ;
            }
            pMStack_9 = (MethodInfo *)((int)&pMStack_9->methodPointer + 1);
            if (pLVar1 == (List_1_VoxelHit_ *)0x0) goto code_?;
            mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
            List_1_UIPushOption__Add
                      ((List_1_UIPushOption_ *)pLVar1,(UIPushOption__Enum)pSVar2,
                       MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                      );
          } while ((int)pMStack_9 < (int)pIVar6);
        }
        if (pLVar1 != (List_1_VoxelHit_ *)0x0) {
          pVVar5 = mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::
                   List_1_VoxelHit__ToArray
                             (pLVar1,
                              MethodInfo__System__Collections__Generic__List<System::String>__ToArray__
                             );
          return (String__Array *)pVVar5;
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar13 = (code *)swi(3);
  pSVar14 = (String__Array *)(*pcVar13)();
  return pSVar14;
}


/* Void remove_DirtyChanged(EventHandler) */

void Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_remove_DirtyChanged
               (Catalog *this,EventHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  bVar1 = mscorlib.dll::System::String::String_IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    (this->fields).Comment = TypeInfo__System__String->static_fields->Empty;
    return;
  }
  this_00 = (String__Array *)func_?(TypeInfo__System__Text__StringBuilder);
  mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor_2
            ((StringBuilder *)this_00,(MethodInfo *)0x0);
  pSVar2 = (String__Array *)func_?(TypeInfo__System__String,1);
  pSVar3 = mscorlib.dll::System::Environment::Environment_get_NewLine((MethodInfo *)0x0);
  if (pSVar2 != (String__Array *)0x0) {
    if ((pSVar3 == (String *)0x0) ||
       (iVar4 = func_?(pSVar3,(pSVar2->klass->_0).element_class), iVar4 != 0)) {
      if (pSVar2->max_length != 0) {
        pSVar2->vector[0] = pSVar3;
        if (value != (String *)0x0) {
          pSVar2 = mscorlib.dll::System::String::String_Split_5
                             (value,pSVar2,StringSplitOptions__Enum_None,(MethodInfo *)0x0);
          pSVar3 = (String *)0x0;
          if (pSVar2 != (String__Array *)0x0) {
            ppSVar5 = pSVar2->vector;
            for (; (int)pSVar3 < (int)pSVar2->max_length;
                pSVar3 = (String *)((int)&pSVar3->klass + 1)) {
              if ((String *)pSVar2->max_length <= pSVar3) goto code_?;
              value = *ppSVar5;
              if (this_00 == (String__Array *)0x0) goto code_?;
              pSVar2 = this_00;
              pIVar6 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                       Collection_1_VoxelHit__get_Items
                                 ((Collection_1_VoxelHit_ *)this_00,(MethodInfo *)0x0);
              if (pIVar6 != (IList_1_VoxelHit_ *)0x0) {
                mscorlib.dll::System::Text::StringBuilder::StringBuilder_AppendLine
                          ((StringBuilder *)this_00,(MethodInfo *)0x0);
              }
              if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__System__String->_1).cctor_started == 0)) {
                value = (String *)&UNK_?;
                func_?();
              }
              value_00 = mscorlib.dll::System::String::String_Concat_2
                                   (::StringLiteral___,value,(MethodInfo *)0x0);
              mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append
                        ((StringBuilder *)this_00,value_00,(MethodInfo *)0x0);
              ppSVar5 = ppSVar5 + 1;
              this = (Catalog *)this_00;
            }
            if (this_00 != (String__Array *)0x0) {
              pSVar3 = (String *)
                       (*(code *)(((StringBuilder__Class *)this_00->klass)->vtable).ToString.method)
                                 (this_00,(((StringBuilder__Class *)this_00->klass)->vtable).
                                          System_Runtime_Serialization_ISerializable_GetObjectData.
                                          methodPtr);
              (this->fields).Comment = pSVar3;
              return;
            }
          }
        }
        goto code_?;
      }
    }
    else {
      uVar7 = func_?(0,0);
      func_?(uVar7);
    }
code_?:
    uVar7 = func_?(0,0);
    func_?(uVar7);
  }
code_?:
  func_?(0);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void set_IsDirty(Boolean) */

void Assembly-CSharp.dll::GNU::Gettext::Catalog::Catalog_set_IsDirty
               (Catalog *this,bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).isDirty = value;
  if ((((uint)(TypeInfo__System__EventArgs->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__EventArgs->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__EventArgs);
  }
  (*(code *)(this->klass->vtable).OnDirtyChanged.method)
            (this,TypeInfo__System__EventArgs->static_fields->Empty,this->klass[1]._0.image);
  return;
}

