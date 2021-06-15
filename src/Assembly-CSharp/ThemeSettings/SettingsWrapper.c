
/* Void Add(ThemeAttribute) */

void Assembly-CSharp.dll::ThemeSettings::SettingsWrapper::SettingsWrapper_Add
               (SettingsWrapper *this,ThemeAttribute *attrib,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).attributes;
  if (this_00 != (List_1_ThemeAttributes_ThemeAttribute_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
              ((List_1_UIPushOption_ *)this_00,(UIPushOption__Enum)attrib,
               MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__Add_ThemeAttributes__ThemeAttribute_
              );
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void DisableAttributeGroups(Int32) */

void Assembly-CSharp.dll::ThemeSettings::SettingsWrapper::SettingsWrapper_DisableAttributeGroups
               (SettingsWrapper *this,int32_t groupsFlag,MethodInfo *method)

{
  uVar1 = (this->fields).activeAttributeGroup & ~groupsFlag;
  uStack_2 = 0xffffffff;
  puStack_3 = &DAT_?;
  uStack_4 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_4;
  puStack_5 = &stack0xffffff98;
  puVar6 = &stack0xffffff98;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar6 = puStack_5;
  }
  puStack_5 = puVar6;
  iStack_7 = 0;
  CStack_8.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_8.monitor = (MonitorData *)0x0;
  CStack_8.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_8.fields.syncRoot = (Object *)0x0;
  CStack_9.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_9.monitor = (MonitorData *)0x0;
  CStack_9.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_9.fields.syncRoot = (Object *)0x0;
  func_?();
  uStack_10 = 0xffffffff;
  piStack_11 = (int *)&stack0xffffff98;
  puStack_5 = &stack0xffffff98;
  this_01 = (List_1_UnityEngine_Color32_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>
                           );
  mscorlib.dll::System::Collections::Generic::List`1[ThemeAttributes::ThemeAttribute]::
  List_1_ThemeAttributes_ThemeAttribute___ctor
            ((List_1_ThemeAttributes_ThemeAttribute_ *)this_01,2,
             MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__List_int_
            );
  this_00 = (List_1_UnityEngine_Color32_ *)(this->fields).attributes;
  pLStack_12 = this_01;
  if (this_00 == (List_1_UnityEngine_Color32_ *)0x0) {
code_?:
    func_?();
  }
  else {
    pLVar13 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
             List_1_UnityEngine_Color32__GetEnumerator
                       ((List_1_T_Enumerator_UnityEngine_Color32_ *)&stack0xffffffa4,this_00,
                        MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__GetEnumerator__
                       );
    CStack_8.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar13->l;
    CStack_8.monitor = (MonitorData *)pLVar13->next;
    CStack_8.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar13->ver;
    CStack_8.fields.syncRoot = (Object *)(pLVar13->current).rgba;
    uStack_2 = 0;
    while (cVar14 = func_?(), cVar14 != '\0') {
      pOVar15 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         (&CStack_8,
                          MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__get_Current__
                         );
      if (pOVar15 == (Object *)0x0) goto code_?;
      if (((MonitorData *)((uint)pOVar15[1].monitor & (this->fields).activeAttributeGroup) !=
           pOVar15[1].monitor) &&
         ((MonitorData *)((uint)pOVar15[1].monitor & uVar1) == pOVar15[1].monitor)) {
        if (this_01 == (List_1_UnityEngine_Color32_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                  ((List_1_UIPushOption_ *)this_01,(UIPushOption__Enum)pOVar15,
                   MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__Add_ThemeAttributes__ThemeAttribute_
                  );
      }
    }
    iVar16 = 0;
    *piStack_11 = 0x7b;
    uStack_2 = 0xffffffff;
    func_?();
    if (iStack_7 == 0) {
      if (*piStack_11 == 0x7b) {
        iVar16 = -1;
      }
      (this->fields).activeAttributeGroup = uVar1;
      if (this_01 != (List_1_UnityEngine_Color32_ *)0x0) {
        pLVar13 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
                 List_1_UnityEngine_Color32__GetEnumerator
                           ((List_1_T_Enumerator_UnityEngine_Color32_ *)&stack0xffffffa4,this_01,
                            MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__GetEnumerator__
                           );
        CStack_9.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar13->ver;
        CStack_9.fields.syncRoot = (Object *)(pLVar13->current).rgba;
        uStack_2 = 2;
        while( true ) {
          CStack_9.monitor =
               (MonitorData *)
               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__MoveNext__
          ;
          CStack_9.klass =
               (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)&CStack_9;
          cVar14 = func_?();
          iVar17 = iStack_7;
          if (cVar14 == '\0') break;
          pOVar15 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                   Serialization::JsonProperty]::
                   Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                             (&CStack_9,
                              MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__get_Current__
                             );
          if (pOVar15 == (Object *)0x0) goto code_?;
          (**(code **)&pOVar15->klass[1]._0.byval_arg.attrs)();
        }
        piStack_11[iVar16 + 1] = 0xbe;
        uStack_2 = 0xffffffff;
        func_?();
        if (iVar17 == 0) {
          if ((this->fields).menu != (IMenu *)0x0) {
            func_?();
          }
          *unaff_FS_OFFSET = uStack_4;
          return;
        }
        goto code_?;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Void EnableAttributeGroups(Int32) */

void Assembly-CSharp.dll::ThemeSettings::SettingsWrapper::SettingsWrapper_EnableAttributeGroups
               (SettingsWrapper *this,int32_t groupsFlag,MethodInfo *method)

{
  uVar1 = groupsFlag | (this->fields).activeAttributeGroup;
  uStack_2 = 0xffffffff;
  puStack_3 = &DAT_?;
  uStack_4 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_4;
  puStack_5 = &stack0xffffff98;
  puVar6 = &stack0xffffff98;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar6 = puStack_5;
  }
  puStack_5 = puVar6;
  iStack_7 = 0;
  CStack_8.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_8.monitor = (MonitorData *)0x0;
  CStack_8.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_8.fields.syncRoot = (Object *)0x0;
  CStack_9.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_9.monitor = (MonitorData *)0x0;
  CStack_9.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_9.fields.syncRoot = (Object *)0x0;
  func_?();
  uStack_10 = 0xffffffff;
  piStack_11 = (int *)&stack0xffffff98;
  puStack_5 = &stack0xffffff98;
  this_01 = (List_1_UnityEngine_Color32_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>
                           );
  mscorlib.dll::System::Collections::Generic::List`1[ThemeAttributes::ThemeAttribute]::
  List_1_ThemeAttributes_ThemeAttribute___ctor
            ((List_1_ThemeAttributes_ThemeAttribute_ *)this_01,2,
             MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__List_int_
            );
  this_00 = (List_1_UnityEngine_Color32_ *)(this->fields).attributes;
  pLStack_12 = this_01;
  if (this_00 == (List_1_UnityEngine_Color32_ *)0x0) {
code_?:
    func_?();
  }
  else {
    pLVar13 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
             List_1_UnityEngine_Color32__GetEnumerator
                       ((List_1_T_Enumerator_UnityEngine_Color32_ *)&stack0xffffffa4,this_00,
                        MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__GetEnumerator__
                       );
    CStack_8.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar13->l;
    CStack_8.monitor = (MonitorData *)pLVar13->next;
    CStack_8.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar13->ver;
    CStack_8.fields.syncRoot = (Object *)(pLVar13->current).rgba;
    uStack_2 = 0;
    while (cVar14 = func_?(), cVar14 != '\0') {
      pOVar15 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         (&CStack_8,
                          MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__get_Current__
                         );
      if (pOVar15 == (Object *)0x0) goto code_?;
      if (((MonitorData *)((uint)pOVar15[1].monitor & (this->fields).activeAttributeGroup) !=
           pOVar15[1].monitor) &&
         ((MonitorData *)((uint)pOVar15[1].monitor & uVar1) == pOVar15[1].monitor)) {
        if (this_01 == (List_1_UnityEngine_Color32_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                  ((List_1_UIPushOption_ *)this_01,(UIPushOption__Enum)pOVar15,
                   MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__Add_ThemeAttributes__ThemeAttribute_
                  );
      }
    }
    iVar16 = 0;
    *piStack_11 = 0x7b;
    uStack_2 = 0xffffffff;
    func_?();
    if (iStack_7 == 0) {
      if (*piStack_11 == 0x7b) {
        iVar16 = -1;
      }
      (this->fields).activeAttributeGroup = uVar1;
      if (this_01 != (List_1_UnityEngine_Color32_ *)0x0) {
        pLVar13 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
                 List_1_UnityEngine_Color32__GetEnumerator
                           ((List_1_T_Enumerator_UnityEngine_Color32_ *)&stack0xffffffa4,this_01,
                            MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__GetEnumerator__
                           );
        CStack_9.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar13->ver;
        CStack_9.fields.syncRoot = (Object *)(pLVar13->current).rgba;
        uStack_2 = 2;
        while( true ) {
          CStack_9.monitor =
               (MonitorData *)
               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__MoveNext__
          ;
          CStack_9.klass =
               (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)&CStack_9;
          cVar14 = func_?();
          iVar17 = iStack_7;
          if (cVar14 == '\0') break;
          pOVar15 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                   Serialization::JsonProperty]::
                   Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                             (&CStack_9,
                              MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__get_Current__
                             );
          if (pOVar15 == (Object *)0x0) goto code_?;
          (**(code **)&pOVar15->klass[1]._0.byval_arg.attrs)();
        }
        piStack_11[iVar16 + 1] = 0xbe;
        uStack_2 = 0xffffffff;
        func_?();
        if (iVar17 == 0) {
          if ((this->fields).menu != (IMenu *)0x0) {
            func_?();
          }
          *unaff_FS_OFFSET = uStack_4;
          return;
        }
        goto code_?;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Boolean GetValueForAttribute[Boolean](ThemeAttribute) */

bool Assembly-CSharp.dll::ThemeSettings::SettingsWrapper::SettingsWrapper_GetValueForAttribute_1
               (SettingsWrapper *this,ThemeAttribute *attrib,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).settingsData;
  if ((attrib != (ThemeAttribute *)0x0) &&
     (key = (String *)
            mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
            Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)attrib,(MethodInfo *)0x0),
     pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0)) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject
            ::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
            Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                      ((Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                        *)pDVar1,key,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar2 == 0) {
      attrib = (ThemeAttribute *)(*(code *)(attrib->klass->vtable).__unknown.method)(attrib);
      this = (SettingsWrapper *)*method->parameters;
      if (((uint)this[7].fields.menu & 0x10000) == 0) {
        pPStack3 = (Pool *)this;
        func_?();
      }
      if ((Pool *)attrib != (Pool *)0x0) {
        if ((((Pool *)attrib)->klass->_0).element_class ==
            (Il2CppClass *)this[1].fields.settingsData) {
code_?:
          pPStack3 = (Pool *)attrib;
          pbVar4 = (bool *)func_?();
          return *pbVar4;
        }
        goto code_?;
      }
    }
    else {
      pDVar1 = (this->fields).settingsData;
      key_00 = (Type *)mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                       Collection_1_VoxelHit__get_Items
                                 ((Collection_1_VoxelHit_ *)attrib,(MethodInfo *)0x0);
      this = (SettingsWrapper *)0x0;
      if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        attrib = (ThemeAttribute *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                 Dictionary_2_System_Type_Pool__get_Item
                           ((Dictionary_2_System_Type_Pool_ *)pDVar1,key_00,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        this = (SettingsWrapper *)*method->parameters;
        if (((uint)this[7].fields.menu & 0x10000) == 0) {
          pPStack3 = (Pool *)this;
          func_?();
        }
        if ((Pool *)attrib != (Pool *)0x0) {
          if ((((Pool *)attrib)->klass->_0).element_class ==
              (Il2CppClass *)this[1].fields.settingsData) goto code_?;
          goto code_?;
        }
      }
    }
  }
  pPStack3 = (Pool *)0x0;
  func_?();
code_?:
  pPStack5 = (Pool *)attrib;
  pPStack3 = (Pool *)this;
  func_?();
  pcVar6 = (code *)swi(3);
  bVar2 = (*pcVar6)();
  return bVar2;
}


/* Dictionary`2[System.Object,System.Object]
   GetValueForAttribute[Dictionary`2[System.Object,System.Object]](ThemeAttribute) */

Dictionary_2_System_Object_System_Object_ *
Assembly-CSharp.dll::ThemeSettings::SettingsWrapper::SettingsWrapper_GetValueForAttribute_2
          (SettingsWrapper *this,ThemeAttribute *attrib,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).settingsData;
  if ((attrib != (ThemeAttribute *)0x0) &&
     (key = (String *)
            mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
            Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)attrib,(MethodInfo *)0x0),
     pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0)) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject
            ::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
            Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                      ((Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                        *)pDVar1,key,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar2 == 0) {
      this = (SettingsWrapper *)(*(code *)(attrib->klass->vtable).__unknown.method)(attrib);
    }
    else {
      pDVar1 = (this->fields).settingsData;
      key_00 = (Type *)mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                       Collection_1_VoxelHit__get_Items
                                 ((Collection_1_VoxelHit_ *)attrib,(MethodInfo *)0x0);
      this = (SettingsWrapper *)0x0;
      if (pDVar1 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
      this = (SettingsWrapper *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)pDVar1,key_00,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    }
    attrib = (ThemeAttribute *)*method->parameters;
    if (((uint)attrib[9].fields._Key_k__BackingField & 0x10000) == 0) {
      pTStack3 = attrib;
      func_?();
    }
    if ((Pool *)this == (Pool *)0x0) {
      pDVar1 = (Dictionary_2_System_Object_System_Object_ *)0x0;
    }
    else {
      pPStack4 = (Pool *)this;
      pTStack3 = attrib;
      pDVar1 = (Dictionary_2_System_Object_System_Object_ *)func_?();
      if (pDVar1 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    }
    return pDVar1;
  }
code_?:
  func_?();
code_?:
  pPStack4 = (Pool *)this;
  pTStack3 = attrib;
  func_?();
  pcVar5 = (code *)swi(3);
  pDVar1 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar5)();
  return pDVar1;
}


/* Single GetValueForAttribute[Single](ThemeAttribute) */

float Assembly-CSharp.dll::ThemeSettings::SettingsWrapper::SettingsWrapper_GetValueForAttribute_3
                (SettingsWrapper *this,ThemeAttribute *attrib,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).settingsData;
  if ((attrib != (ThemeAttribute *)0x0) &&
     (key = (String *)
            mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
            Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)attrib,(MethodInfo *)0x0),
     pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0)) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject
            ::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
            Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                      ((Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                        *)pDVar1,key,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar2 == 0) {
      attrib = (ThemeAttribute *)(*(code *)(attrib->klass->vtable).__unknown.method)(attrib);
      this = (SettingsWrapper *)*method->parameters;
      if (((uint)this[7].fields.menu & 0x10000) == 0) {
        pPStack3 = (Pool *)this;
        func_?();
      }
      if ((Pool *)attrib != (Pool *)0x0) {
        if ((((Pool *)attrib)->klass->_0).element_class ==
            (Il2CppClass *)this[1].fields.settingsData) {
code_?:
          pPStack3 = (Pool *)attrib;
          pfVar4 = (float *)func_?();
          return *pfVar4;
        }
        goto code_?;
      }
    }
    else {
      pDVar1 = (this->fields).settingsData;
      key_00 = (Type *)mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                       Collection_1_VoxelHit__get_Items
                                 ((Collection_1_VoxelHit_ *)attrib,(MethodInfo *)0x0);
      this = (SettingsWrapper *)0x0;
      if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        attrib = (ThemeAttribute *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                 Dictionary_2_System_Type_Pool__get_Item
                           ((Dictionary_2_System_Type_Pool_ *)pDVar1,key_00,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        this = (SettingsWrapper *)*method->parameters;
        if (((uint)this[7].fields.menu & 0x10000) == 0) {
          pPStack3 = (Pool *)this;
          func_?();
        }
        if ((Pool *)attrib != (Pool *)0x0) {
          if ((((Pool *)attrib)->klass->_0).element_class ==
              (Il2CppClass *)this[1].fields.settingsData) goto code_?;
          goto code_?;
        }
      }
    }
  }
  pPStack3 = (Pool *)0x0;
  func_?();
code_?:
  pPStack5 = (Pool *)attrib;
  pPStack3 = (Pool *)this;
  func_?();
  pcVar6 = (code *)swi(3);
  fVar7 = (float10)(*pcVar6)();
  return (float)fVar7;
}


/* Int32 GetValueForAttribute[Int32](ThemeAttribute) */

int32_t Assembly-CSharp.dll::ThemeSettings::SettingsWrapper::SettingsWrapper_GetValueForAttribute_4
                  (SettingsWrapper *this,ThemeAttribute *attrib,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).settingsData;
  if ((attrib != (ThemeAttribute *)0x0) &&
     (key = (String *)
            mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
            Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)attrib,(MethodInfo *)0x0),
     pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0)) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject
            ::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
            Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                      ((Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                        *)pDVar1,key,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar2 == 0) {
      attrib = (ThemeAttribute *)(*(code *)(attrib->klass->vtable).__unknown.method)(attrib);
      this = (SettingsWrapper *)*method->parameters;
      if (((uint)this[7].fields.menu & 0x10000) == 0) {
        pPStack3 = (Pool *)this;
        func_?();
      }
      if ((Pool *)attrib != (Pool *)0x0) {
        if ((((Pool *)attrib)->klass->_0).element_class ==
            (Il2CppClass *)this[1].fields.settingsData) {
code_?:
          pPStack3 = (Pool *)attrib;
          piVar4 = (int32_t *)func_?();
          return *piVar4;
        }
        goto code_?;
      }
    }
    else {
      pDVar1 = (this->fields).settingsData;
      key_00 = (Type *)mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                       Collection_1_VoxelHit__get_Items
                                 ((Collection_1_VoxelHit_ *)attrib,(MethodInfo *)0x0);
      this = (SettingsWrapper *)0x0;
      if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        attrib = (ThemeAttribute *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                 Dictionary_2_System_Type_Pool__get_Item
                           ((Dictionary_2_System_Type_Pool_ *)pDVar1,key_00,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        this = (SettingsWrapper *)*method->parameters;
        if (((uint)this[7].fields.menu & 0x10000) == 0) {
          pPStack3 = (Pool *)this;
          func_?();
        }
        if ((Pool *)attrib != (Pool *)0x0) {
          if ((((Pool *)attrib)->klass->_0).element_class ==
              (Il2CppClass *)this[1].fields.settingsData) goto code_?;
          goto code_?;
        }
      }
    }
  }
  pPStack3 = (Pool *)0x0;
  func_?();
code_?:
  pPStack5 = (Pool *)attrib;
  pPStack3 = (Pool *)this;
  func_?();
  pcVar6 = (code *)swi(3);
  iVar7 = (*pcVar6)();
  return iVar7;
}


/* Void Initialize() */

void Assembly-CSharp.dll::ThemeSettings::SettingsWrapper::SettingsWrapper_Initialize
               (SettingsWrapper *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffbc;
  puVar5 = &stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  CStack_6.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_6.monitor = (MonitorData *)0x0;
  CStack_6.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_6.fields.syncRoot = (Object *)0x0;
  func_?();
  this_00 = (List_1_UnityEngine_Color32_ *)(this->fields).attributes;
  puStack_4 = &stack0xffffffbc;
  if (this_00 != (List_1_UnityEngine_Color32_ *)0x0) {
    puStack_4 = &stack0xffffffbc;
    pLVar7 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
             List_1_UnityEngine_Color32__GetEnumerator
                       ((List_1_T_Enumerator_UnityEngine_Color32_ *)auStack_8,this_00,
                        MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__GetEnumerator__
                       );
    CStack_6.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar7->l;
    CStack_6.monitor = (MonitorData *)pLVar7->next;
    CStack_6.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar7->ver;
    CStack_6.fields.syncRoot = (Object *)(pLVar7->current).rgba;
    uStack_1 = 0;
    while( true ) {
      cVar9 = func_?(&CStack_6,
                              MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__MoveNext__
                             );
      if (cVar9 == '\0') {
        uStack_1 = 0xffffffff;
        func_?(&CStack_6,
                        MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__Dispose__
                       );
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      pOVar10 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         (&CStack_6,
                          MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__get_Current__
                         );
      if (pOVar10 == (Object *)0x0) break;
      if (pOVar10[1].monitor == (MonitorData *)0x0) {
        func_?(6,pOVar10);
      }
    }
  }
  func_?(0);
  func_?(0,0,0);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void SetAttributeGroups(Int32) */

void Assembly-CSharp.dll::ThemeSettings::SettingsWrapper::SettingsWrapper_SetAttributeGroups
               (SettingsWrapper *this,int32_t groupsFlag,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff98;
  puVar5 = &stack0xffffff98;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  iStack_6 = 0;
  CStack_7.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_7.monitor = (MonitorData *)0x0;
  CStack_7.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_7.fields.syncRoot = (Object *)0x0;
  CStack_8.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_8.monitor = (MonitorData *)0x0;
  CStack_8.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_8.fields.syncRoot = (Object *)0x0;
  func_?();
  uStack_9 = 0xffffffff;
  piStack_10 = (int *)&stack0xffffff98;
  puStack_4 = &stack0xffffff98;
  this_01 = (List_1_UnityEngine_Color32_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>
                           );
  mscorlib.dll::System::Collections::Generic::List`1[ThemeAttributes::ThemeAttribute]::
  List_1_ThemeAttributes_ThemeAttribute___ctor
            ((List_1_ThemeAttributes_ThemeAttribute_ *)this_01,2,
             MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__List_int_
            );
  this_00 = (List_1_UnityEngine_Color32_ *)(this->fields).attributes;
  pLStack_11 = this_01;
  if (this_00 == (List_1_UnityEngine_Color32_ *)0x0) {
code_?:
    func_?();
  }
  else {
    pLVar12 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
             List_1_UnityEngine_Color32__GetEnumerator
                       ((List_1_T_Enumerator_UnityEngine_Color32_ *)&stack0xffffffa4,this_00,
                        MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__GetEnumerator__
                       );
    CStack_7.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar12->l;
    CStack_7.monitor = (MonitorData *)pLVar12->next;
    CStack_7.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar12->ver;
    CStack_7.fields.syncRoot = (Object *)(pLVar12->current).rgba;
    uStack_1 = 0;
    while (cVar13 = func_?(), cVar13 != '\0') {
      pOVar14 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         (&CStack_7,
                          MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__get_Current__
                         );
      if (pOVar14 == (Object *)0x0) goto code_?;
      if (((MonitorData *)((uint)pOVar14[1].monitor & (this->fields).activeAttributeGroup) !=
           pOVar14[1].monitor) &&
         ((MonitorData *)((uint)pOVar14[1].monitor & groupsFlag) == pOVar14[1].monitor)) {
        if (this_01 == (List_1_UnityEngine_Color32_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                  ((List_1_UIPushOption_ *)this_01,(UIPushOption__Enum)pOVar14,
                   MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__Add_ThemeAttributes__ThemeAttribute_
                  );
      }
    }
    iVar15 = 0;
    *piStack_10 = 0x7b;
    uStack_1 = 0xffffffff;
    func_?();
    if (iStack_6 == 0) {
      if (*piStack_10 == 0x7b) {
        iVar15 = -1;
      }
      (this->fields).activeAttributeGroup = groupsFlag;
      if (this_01 != (List_1_UnityEngine_Color32_ *)0x0) {
        pLVar12 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
                 List_1_UnityEngine_Color32__GetEnumerator
                           ((List_1_T_Enumerator_UnityEngine_Color32_ *)&stack0xffffffa4,this_01,
                            MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__GetEnumerator__
                           );
        CStack_8.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar12->ver;
        CStack_8.fields.syncRoot = (Object *)(pLVar12->current).rgba;
        uStack_1 = 2;
        while( true ) {
          CStack_8.monitor =
               (MonitorData *)
               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__MoveNext__
          ;
          CStack_8.klass =
               (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)&CStack_8;
          cVar13 = func_?();
          iVar16 = iStack_6;
          if (cVar13 == '\0') break;
          pOVar14 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                   Serialization::JsonProperty]::
                   Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                             (&CStack_8,
                              MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__get_Current__
                             );
          if (pOVar14 == (Object *)0x0) goto code_?;
          (**(code **)&pOVar14->klass[1]._0.byval_arg.attrs)();
        }
        piStack_10[iVar15 + 1] = 0xbe;
        uStack_1 = 0xffffffff;
        func_?();
        if (iVar16 == 0) {
          if ((this->fields).menu != (IMenu *)0x0) {
            func_?();
          }
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        goto code_?;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void SubscribeToSettingsUI(IMenu) */

void Assembly-CSharp.dll::ThemeSettings::SettingsWrapper::SettingsWrapper_SubscribeToSettingsUI
               (SettingsWrapper *this,IMenu *menu,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).menu = menu;
  if (menu != (IMenu *)0x0) {
    func_?(0,TypeInfo__ThemeSettings__IMenu,menu);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void UpdateData(String, Object) */

void Assembly-CSharp.dll::ThemeSettings::SettingsWrapper::SettingsWrapper_UpdateData
               (SettingsWrapper *this,String *key,Object *val,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).settingsData;
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
    Dictionary_2_System_String_Theme__set_Item
              ((Dictionary_2_System_String_Theme_ *)this_00,key,(Theme *)val,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
              );
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* SettingsWrapper() */

void Assembly-CSharp.dll::ThemeSettings::SettingsWrapper::SettingsWrapper__ctor
               (SettingsWrapper *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_ThemeAttributes_ThemeAttribute_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>
                           );
  mscorlib.dll::System::Collections::Generic::List`1[ThemeAttributes::ThemeAttribute]::
  List_1_ThemeAttributes_ThemeAttribute___ctor
            (this_00,8,
             MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__List_int_
            );
  (this->fields).attributes = this_00;
  return;
}


/* Boolean <get_SettingsUI>m__0(ThemeAttribute) */

bool Assembly-CSharp.dll::ThemeSettings::SettingsWrapper::SettingsWrapper__get_SettingsUI_m__0
               (SettingsWrapper *this,ThemeAttribute *attrib,MethodInfo *method)

{
  if (attrib != (ThemeAttribute *)0x0) {
    uVar1 = (attrib->fields)._Groups_k__BackingField;
    return ((this->fields).activeAttributeGroup & uVar1) == uVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* RectTransform[] get_SettingsUI() */

RectTransform__Array *
Assembly-CSharp.dll::ThemeSettings::SettingsWrapper::SettingsWrapper_get_SettingsUI
          (SettingsWrapper *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_VoxelHit_ *)(this->fields).attributes;
  this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__System__Predicate<ThemeAttributes::ThemeAttribute>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_01,(Object *)this,
             MethodInfo__ThemeSettings__SettingsWrapper___get_SettingsUI_m__0_ThemeAttributes__ThemeAttribute_
             ,
             MethodInfo__System__Predicate<ThemeAttributes::ThemeAttribute>__Predicate_System__Object__void__
            );
  if (pLVar1 != (List_1_VoxelHit_ *)0x0) {
    pLVar1 = mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit__FindAll
                       (pLVar1,(Predicate_1_VoxelHit_ *)this_01,
                        MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__FindAll_System__Predicate<ThemeAttributes::ThemeAttribute>_
                       );
    if (pLVar1 != (List_1_VoxelHit_ *)0x0) {
      mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::Serialization::
      JsonProperty]::
      Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                 MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__get_Count__
                );
      pRVar2 = (RectTransform__Array *)func_?();
      index = 0;
      ppRVar3 = pRVar2->vector;
      while( true ) {
        this_00 = 
        MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__get_Count__
        ;
        pOVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                            MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__get_Count__
                            ,
                            MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__get_Count__
                           );
        if ((int)pOVar4 <= (int)index) {
          return pRVar2;
        }
        pIVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                 IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                           ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_00,index,
                            MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__get_Item_int_
                           );
        if (pIVar5 == (IEventSystemHandler *)0x0) break;
        pRVar6 = (RectTransform *)(*(code *)pIVar5->klass[1]._0.parent)();
        if (pRVar2 == (RectTransform__Array *)0x0) break;
        if (pRVar6 != (RectTransform *)0x0) {
          iVar7 = func_?();
          if (iVar7 == 0) goto code_?;
        }
        if (pRVar2->max_length <= index) goto code_?;
        index = index + 1;
        *ppRVar3 = pRVar6;
        ppRVar3 = ppRVar3 + 1;
      }
    }
  }
  func_?();
code_?:
  uVar8 = func_?();
  func_?(uVar8);
code_?:
  uVar8 = func_?();
  func_?(uVar8);
  pcVar9 = (code *)swi(3);
  pRVar2 = (RectTransform__Array *)(*pcVar9)();
  return pRVar2;
}

