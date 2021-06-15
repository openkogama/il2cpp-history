
/* Void PartialRemoveFromHashtable(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Object,System.Object]) */

void MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PartialRemoveFromHashtable
               (Dictionary_2_System_Object_System_Object_ *target,
               Dictionary_2_System_Object_System_Object_ *source,MethodInfo *method)

{
  CommonUtils_PartialRemoveFromHashtable_1(target,source,0,(MethodInfo *)0x0);
  return;
}


/* Void PartialRemoveFromHashtable(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Object,System.Object], Boolean) */

void MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PartialRemoveFromHashtable_1
               (Dictionary_2_System_Object_System_Object_ *target,
               Dictionary_2_System_Object_System_Object_ *source,bool acceptMissingValuesInTarget,
               MethodInfo *method)

{
  iStack_1 = -1;
  puStack_2 = &DAT_?;
  pOStack_3 = (Object__Array *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &pOStack_3;
  pWStack_4 = (WinningConditionType__Enum__Array *)&stack0xffffffa8;
  pWVar5 = (WinningConditionType__Enum__Array *)&stack0xffffffa8;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    pWVar5 = pWStack_4;
  }
  pWStack_4 = pWVar5;
  auStack_6._16_4_ = (Object *)0x0;
  KStack_7.key = 0;
  KStack_7.value = 0;
  auStack_6._0_4_ = (LevelRewardsManager__Class *)0x0;
  auStack_6._4_4_ = (MethodInfo *)0x0;
  auStack_6._8_4_ = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  auStack_6._12_4_ = 0;
  func_?();
  pLStack_8 = (Link__Array *)&stack0xffffffa8;
  pWStack_4 = (WinningConditionType__Enum__Array *)&stack0xffffffa8;
  if (source != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pLStack_8 = (Link__Array *)&stack0xffffffa8;
    pWStack_4 = (WinningConditionType__Enum__Array *)&stack0xffffffa8;
    pDVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
             Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_ *)
                        &pDStack_10,(Dictionary_2_WinningConditionType_System_Object_ *)source,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                       );
    auStack_6._0_4_ = pDVar9->dictionary;
    auStack_6._4_4_ = pDVar9->next;
    auStack_6._8_4_ = pDVar9->stamp;
    auStack_6._12_4_ = (pDVar9->current).key;
    auStack_6._16_4_ = (pDVar9->current).value;
    iStack_1 = 0;
code_?:
    do {
      while( true ) {
        cVar11 = func_?();
        if (cVar11 == '\0') {
          pLStack_8->klass = (Link__Array__Class *)0xb4;
          iStack_1 = -1;
          func_?();
          *unaff_FS_OFFSET = pOStack_3;
          return;
        }
        KStack_7 = Assembly-CSharp.dll::LevelRewardsManager::LevelRewardsManager_get_NextReward
                              ((LevelRewardsManager *)auStack_6,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                              );
        pDStack_10 = (Dictionary_2_WinningConditionType_System_Object_ *)&KStack_7;
        iVar12 = func_?();
        pDStack_10 = (Dictionary_2_WinningConditionType_System_Object_ *)&KStack_7;
        if (iVar12 != 0) break;
        pSVar13 = (String *)func_?();
        if (target == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
code_?:
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets
        ::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
        Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Remove
                  ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                    *)target,pSVar13,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Remove_System__Object_
                  );
      }
      pDStack_10 = (Dictionary_2_WinningConditionType_System_Object_ *)func_?();
      source_00 = (Dictionary_2_System_Object_System_Object_ *)func_?();
      pDStack_10 = (Dictionary_2_WinningConditionType_System_Object_ *)&KStack_7;
      pSVar13 = (String *)func_?();
      if (source_00 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
        if (target != (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
        goto code_?;
      }
      if (target == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
      bVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::
              WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
              KogamaSettingWrapperBase]::
              Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                        ((Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                          *)target,pSVar13,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                        );
      if (bVar14 != 0) {
        key = (Type *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
        Dictionary_2_System_Type_Pool__get_Item
                  ((Dictionary_2_System_Type_Pool_ *)target,key,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        target_00 = (Dictionary_2_System_Object_System_Object_ *)func_?();
        CommonUtils_PartialRemoveFromHashtable_1
                  (target_00,source_00,acceptMissingValuesInTarget,(MethodInfo *)0x0);
        goto code_?;
      }
    } while (acceptMissingValuesInTarget != 0);
    arg1 = (Object *)func_?();
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    pSVar13 = mscorlib.dll::System::String::String_Concat_1
                       ((Object *)StringLiteral_Target_hashtable_doesn_t_contain,arg1,
                        (Object *)::StringLiteral__,(MethodInfo *)0x0);
    this = (ArgumentException *)func_?();
    mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1
              (this,pSVar13,(MethodInfo *)0x0);
    auStack_6._4_4_ =
         MethodInfo__MV__Common__CommonUtils__PartialRemoveFromHashtable_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__Collections__Generic__Dictionary<System::Object,_System::Object>__bool_
    ;
    auStack_6._0_4_ = (LevelRewardsManager__Class *)0x0;
    func_?();
  }
code_?:
  func_?(0);
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void PartialUpdateHashtable(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Object,System.Object]) */

void MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PartialUpdateHashtable
               (Dictionary_2_System_Object_System_Object_ *target,
               Dictionary_2_System_Object_System_Object_ *source,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffa8;
  puVar5 = &stack0xffffffa8;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  KStack_6.key = 0;
  KStack_6.value = 0;
  func_?();
  puStack_7 = (undefined4 *)&stack0xffffffa8;
  puStack_4 = &stack0xffffffa8;
  if (source == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
    pSVar8 = (String *)0x0;
code_?:
    func_?(pSVar8);
code_?:
    pOVar9 = (Object *)func_?();
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    pSVar8 = mscorlib.dll::System::String::String_Concat_1
                       ((Object *)StringLiteral_Update_table_contains_NULL_valye,pOVar9,
                        (Object *)::StringLiteral__,(MethodInfo *)0x0);
    pAVar10 = (ArgumentException *)func_?();
    mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1
              (pAVar10,pSVar8,(MethodInfo *)0x0);
    func_?();
    func_?();
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  puStack_7 = (undefined4 *)&stack0xffffffa8;
  puStack_4 = &stack0xffffffa8;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::Object]::
  Dictionary_2_WinningConditionType_System_Object__GetEnumerator
            ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_ *)
             &stack0xffffffb4,(Dictionary_2_WinningConditionType_System_Object_ *)source,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
            );
  uStack_1 = 0;
  do {
    while( true ) {
      cVar12 = func_?();
      if (cVar12 == '\0') {
        *puStack_7 = 0x135;
        uStack_1 = 0xffffffff;
        func_?();
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      KStack_6 = Assembly-CSharp.dll::LevelRewardsManager::LevelRewardsManager_get_NextReward
                            ((LevelRewardsManager *)&stack0xffffffc8,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                            );
      iVar13 = func_?();
      if (iVar13 == 0) goto code_?;
      pSVar8 = (String *)func_?();
      if (target == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
      bVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::
              WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
              KogamaSettingWrapperBase]::
              Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                        ((Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                          *)target,pSVar8,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                        );
      if (bVar14 != 0) break;
code_?:
      pSVar8 = (String *)func_?();
      value = (Theme *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
      Dictionary_2_System_String_Theme__set_Item
                ((Dictionary_2_System_String_Theme_ *)target,pSVar8,value,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                );
    }
    pTVar15 = (Type *)func_?();
    this = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
           Dictionary_2_System_Type_Pool__get_Item
                     ((Dictionary_2_System_Type_Pool_ *)target,pTVar15,
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
    pSVar8 = (String *)0x0;
    if (this == (Pool *)0x0) goto code_?;
    pTVar15 = mscorlib.dll::System::Object::Object_GetType((Object *)this,(MethodInfo *)0x0);
    pOVar9 = (Object *)func_?();
    pSVar8 = (String *)0x0;
    if (pOVar9 == (Object *)0x0) goto code_?;
    pTVar16 = mscorlib.dll::System::Object::Object_GetType(pOVar9,(MethodInfo *)0x0);
    if (pTVar15 != pTVar16) {
      args = (Object__Array *)func_?();
      if (args == (Object__Array *)0x0) goto code_?;
      func_?(args,StringLiteral_Incompatible_types_);
      func_?(0,StringLiteral_Incompatible_types_);
      pTVar15 = mscorlib.dll::System::Object::Object_GetType((Object *)this,(MethodInfo *)0x0);
      func_?(args,pTVar15);
      func_?(1,pTVar15);
      func_?(args,StringLiteral__and_);
      func_?(2,StringLiteral__and_);
      pOVar9 = (Object *)
               func_?(&KStack_6,
                               MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
                              );
      pSVar8 = (String *)0x0;
      if (pOVar9 != (Object *)0x0) {
        mscorlib.dll::System::Object::Object_GetType(pOVar9,(MethodInfo *)0x0);
        func_?();
        func_?();
        func_?(args,StringLiteral__for_key__);
        pSVar8 = StringLiteral__for_key__;
        func_?(4,StringLiteral__for_key__);
        uVar17 = func_?(&KStack_6,
                                 MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Key__
                                );
        func_?(args,uVar17);
        func_?(5,uVar17);
        func_?(args,::StringLiteral__);
        func_?(6,::StringLiteral__);
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__String);
        }
        message = mscorlib.dll::System::String::String_Concat_5(args,(MethodInfo *)0x0);
        pAVar10 = (ArgumentException *)func_?(TypeInfo__System__ArgumentException);
        mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1
                  (pAVar10,message,(MethodInfo *)0x0);
        func_?(pAVar10,0,
                        MethodInfo__MV__Common__CommonUtils__PartialUpdateHashtable_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                       );
      }
      goto code_?;
    }
    target_00 = (Dictionary_2_System_Object_System_Object_ *)func_?();
    if (target_00 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    func_?();
    source_00 = (Dictionary_2_System_Object_System_Object_ *)func_?();
    CommonUtils_PartialUpdateHashtable(target_00,source_00,(MethodInfo *)0x0);
  } while( true );
}


/* Boolean PruneEmptyDictionaries(Dictionary`2[System.Object,System.Object]) */

bool MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PruneEmptyDictionaries
               (Dictionary_2_System_Object_System_Object_ *target,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff84;
  puVar5 = &stack0xffffff84;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pDStack_6 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
  KStack_7.key = 0;
  KStack_7.value = 0;
  CStack_8.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_8.monitor = (MonitorData *)0x0;
  CStack_8.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_8.fields.syncRoot = (Object *)0x0;
  func_?();
  uStack_9 = 0xffffffff;
  piStack_10 = (int *)&stack0xffffff84;
  puStack_4 = &stack0xffffff84;
  this = (Dictionary_2_System_Object_System_Object___Class *)
         func_?(TypeInfo__System__Collections__Generic__List<System::String>);
  pDStack_11 = this;
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            ((List_1_UnityEngine_Vector4_ *)this,
             MethodInfo__System__Collections__Generic__List<System::String>__List__);
  pDStack_12 = this;
  if (target == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
    pDVar13 = (Dictionary_2_System_Object_System_Object___Class *)func_?();
  }
  else {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::Object]::
    Dictionary_2_WinningConditionType_System_Object__GetEnumerator
              ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_ *)auStack_14
               ,(Dictionary_2_WinningConditionType_System_Object_ *)target,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
              );
    uStack_1 = 0;
    while (cVar15 = func_?(), cVar15 != '\0') {
      KStack_7 = Assembly-CSharp.dll::LevelRewardsManager::LevelRewardsManager_get_NextReward
                            ((LevelRewardsManager *)&stack0xffffff90,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                            );
      piVar16 = (int *)func_?();
      this = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
      if (piVar16 != (int *)0x0) {
        bVar17 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).naturalAligment;
        if ((*(byte *)(*piVar16 + 0xb8) < bVar17) ||
           (*(Dictionary_2_System_Object_System_Object___Class **)
             (*(int *)(*piVar16 + 100) + -4 + (uint)bVar17 * 4) !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          bVar18 = false;
        }
        else {
          bVar18 = true;
        }
        piVar19 = (int *)0x0;
        if (bVar18) {
          piVar19 = piVar16;
        }
        if (piVar19 != (int *)0x0) {
          func_?();
          target_00 = (Dictionary_2_System_Object_System_Object_ *)func_?();
          bVar20 = CommonUtils_PruneEmptyDictionaries(target_00,(MethodInfo *)0x0);
          if (bVar20 != 0) {
            func_?();
            method_00 = 
            MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_;
            if (pDStack_11 == (Dictionary_2_System_Object_System_Object___Class *)0x0)
            goto code_?;
            item = func_?();
            mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
            List_1_UIPushOption__Add((List_1_UIPushOption_ *)pDStack_11,item,method_00);
          }
        }
      }
    }
    pDVar21 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
    *piStack_10 = 0x66;
    uStack_1 = 0xffffffff;
    func_?();
    pDVar13 = pDStack_6;
    this = pDVar21;
    if (pDStack_6 == (Dictionary_2_System_Object_System_Object___Class *)0x0) {
      if (*piStack_10 == 0x66) {
        pDVar21 = (Dictionary_2_System_Object_System_Object___Class *)0xffffffff;
      }
      this = pDVar21;
      if (pDStack_11 != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        pLVar22 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
                 List_1_UnityEngine_Color32__GetEnumerator
                           ((List_1_T_Enumerator_UnityEngine_Color32_ *)(auStack_14 + 4),
                            (List_1_UnityEngine_Color32_ *)pDStack_11,
                            MethodInfo__System__Collections__Generic__List<System::String>__GetEnumerator__
                           );
        CStack_8.klass =
             (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar22->l;
        CStack_8.monitor = (MonitorData *)pLVar22->next;
        CStack_8.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar22->ver;
        CStack_8.fields.syncRoot = (Object *)(pLVar22->current).rgba;
        uStack_1 = 2;
        while (cVar15 = func_?(), this = pDStack_6, cVar15 != '\0') {
          key = (String *)
                mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                Serialization::JsonProperty]::
                Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                          (&CStack_8,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::String>__get_Current__
                          );
          this = pDVar21;
          if (target == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
          String,UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
          Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Remove
                    ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                      *)target,key,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Remove_System__Object_
                    );
        }
        piStack_10[(int)((int)&(pDVar21->_0).image + 1)] = 0x99;
        uStack_1 = 0xffffffff;
        func_?(&CStack_8,
                        MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::String>__Dispose__
                       );
        if (this != (Dictionary_2_System_Object_System_Object___Class *)0x0) goto code_?;
        if (target != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          pOVar23 = System.Core.dll::System::Linq::
                    Enumerable+<CreateSelectIterator>c__Iterator10`2[System::Collections::Generic::
                    KeyValuePair`2[System::Object,System::Object],System::Object]::
                    Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                              ((Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                                *)target,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Count__
                              );
          *unaff_FS_OFFSET = uStack_3;
          return pOVar23 == (Object *)0x0;
        }
      }
      goto code_?;
    }
  }
  func_?(pDVar13);
code_?:
  func_?(this);
  pcVar24 = (code *)swi(3);
  bVar20 = (*pcVar24)();
  return bVar20;
}

