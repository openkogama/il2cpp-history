
/* Void GetBadgeTexture(Int32, Action`1[UnityEngine.Networking.UnityWebRequest]) */

void Assembly-CSharp.dll::BadgeManager::BadgeManager_GetBadgeTexture
               (int32_t level,Action_1_UnityEngine_Networking_UnityWebRequest_ *callback,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__BadgeManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__BadgeManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__BadgeManager);
  }
  if (TypeInfo__BadgeManager->static_fields->maxLevelBadge == 0) {
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)StringLiteral_No_badges_was_loaded,(MethodInfo *)0x0);
    return;
  }
  if ((((uint)(TypeInfo__BadgeManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__BadgeManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__BadgeManager);
  }
  this = (Dictionary_2_System_Int32_System_Object_ *)
         TypeInfo__BadgeManager->static_fields->badgeUrls;
  if (this != (Dictionary_2_System_Int32_System_Object_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__ContainsKey
                      (this,level,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_BadgeUrlData>__ContainsKey_int_
                      );
    if (bVar1 == 0) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                ((Object *)StringLiteral_Level_exceeds_defined_badges__Us,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__BadgeManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__BadgeManager->_1).cctor_started == 0)) {
        func_?(TypeInfo__BadgeManager);
      }
      level = TypeInfo__BadgeManager->static_fields->maxLevelBadge;
    }
    if ((((uint)(TypeInfo__BadgeManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__BadgeManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__BadgeManager);
    }
    this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
               *)TypeInfo__BadgeManager->static_fields->badgeUrls;
    if ((this_00 !=
         (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *
         )0x0) &&
       (pTVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine
                 ::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                 Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                           (this_00,level,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_BadgeUrlData>__get_Item_int_
                           ), pTVar2 != (TerrainUtility_TerrainMap *)0x0)) {
      pSVar3 = (String *)(pTVar2->fields).m_patchSize.y;
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      pSVar3 = mscorlib.dll::System::String::String_Concat_2
                         (pSVar3,StringLiteral__Unity_2,(MethodInfo *)0x0);
      this_01 = (CachedTextureRequest *)func_?(TypeInfo__CachedTextureRequest);
      CachedTextureRequest::CachedTextureRequest__ctor
                (this_01,pSVar3,callback,WWWRequestPriority__Enum_WaitUntilSyncronizingIsDone,0,
                 (MethodInfo *)0x0);
      if ((((uint)(TypeInfo__AsyncWWWManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__AsyncWWWManager->_1).cctor_started == 0)) {
        func_?();
      }
      AsyncWWWManager::AsyncWWWManager_WWWRequest((AsyncWebRequest *)this_01,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Int32 GetFriendsLimit(Int32) */

int32_t Assembly-CSharp.dll::BadgeManager::BadgeManager_GetFriendsLimit
                  (int32_t level,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__BadgeManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__BadgeManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__BadgeManager);
  }
  this = (Dictionary_2_System_Int32_System_Object_ *)
         TypeInfo__BadgeManager->static_fields->badgeUrls;
  if (this != (Dictionary_2_System_Int32_System_Object_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__ContainsKey
                      (this,level,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_BadgeUrlData>__ContainsKey_int_
                      );
    if (bVar1 == 0) {
      return 200;
    }
    if ((((uint)(TypeInfo__BadgeManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__BadgeManager->_1).cctor_started == 0)) {
      level = (int32_t)TypeInfo__BadgeManager;
      func_?();
    }
    this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
               *)TypeInfo__BadgeManager->static_fields->badgeUrls;
    if (this_00 !=
        (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
        0x0) {
      pTVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
               Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
               Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                         (this_00,level,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_BadgeUrlData>__get_Item_int_
                         );
      if (pTVar2 != (TerrainUtility_TerrainMap *)0x0) {
        return (int32_t)(pTVar2->fields).m_patchSize.z;
      }
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  iVar4 = (*pcVar3)();
  return iVar4;
}


/* Void Initialize(List`1[BadgeUrlData]) */

void Assembly-CSharp.dll::BadgeManager::BadgeManager_Initialize
               (List_1_BadgeUrlData_ *badgeUrlDatas,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb8;
  puVar5 = &stack0xffffffb8;
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
  puStack_7 = (undefined4 *)&stack0xffffffb8;
  puStack_4 = &stack0xffffffb8;
  if (badgeUrlDatas != (List_1_BadgeUrlData_ *)0x0) {
    puStack_7 = (undefined4 *)&stack0xffffffb8;
    puStack_4 = &stack0xffffffb8;
    pLVar8 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
             List_1_UnityEngine_Color32__GetEnumerator
                       ((List_1_T_Enumerator_UnityEngine_Color32_ *)auStack_9,
                        (List_1_UnityEngine_Color32_ *)badgeUrlDatas,
                        MethodInfo__System__Collections__Generic__List<BadgeUrlData>__GetEnumerator__
                       );
    CStack_6.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar8->l;
    CStack_6.monitor = (MonitorData *)pLVar8->next;
    CStack_6.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar8->ver;
    CStack_6.fields.syncRoot = (Object *)(pLVar8->current).rgba;
    uStack_1 = 0;
    while( true ) {
      auStack_9._0_4_ =
           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<BadgeUrlData>__MoveNext__
      ;
      cVar10 = func_?();
      if (cVar10 == '\0') {
        *puStack_7 = 0x74;
        uStack_1 = 0xffffffff;
        func_?(&CStack_6,
                        MethodInfo__System__Collections__Generic__List_1_T___Enumerator<BadgeUrlData>__Dispose__
                       );
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      value = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
              Serialization::JsonProperty]::
              Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                        (&CStack_6,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<BadgeUrlData>__get_Current__
                        );
      if (value == (Object *)0x0) break;
      unaff_EDI = value[1].klass;
      if ((((uint)(TypeInfo__BadgeManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__BadgeManager->_1).cctor_started == 0)) {
        func_?(TypeInfo__BadgeManager);
      }
      if (TypeInfo__BadgeManager->static_fields->maxLevelBadge < (int)unaff_EDI) {
        unaff_EDI = value[1].klass;
        if ((((uint)(TypeInfo__BadgeManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__BadgeManager->_1).cctor_started == 0)) {
          func_?(TypeInfo__BadgeManager);
        }
        TypeInfo__BadgeManager->static_fields->maxLevelBadge = (int32_t)unaff_EDI;
      }
      if ((((uint)(TypeInfo__BadgeManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__BadgeManager->_1).cctor_started == 0)) {
        func_?(TypeInfo__BadgeManager);
      }
      pDVar11 = (Dictionary_2_System_Int32_System_Object_ *)
               TypeInfo__BadgeManager->static_fields->badgeUrls;
      if (pDVar11 == (Dictionary_2_System_Int32_System_Object_ *)0x0) break;
      bVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__ContainsKey
                        (pDVar11,(int32_t)value[1].klass,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_BadgeUrlData>__ContainsKey_int_
                        );
      if (bVar12 == 0) {
        if ((((uint)(TypeInfo__BadgeManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__BadgeManager->_1).cctor_started == 0)) {
          func_?();
        }
        pDVar11 = (Dictionary_2_System_Int32_System_Object_ *)
                 TypeInfo__BadgeManager->static_fields->badgeUrls;
        if (pDVar11 == (Dictionary_2_System_Int32_System_Object_ *)0x0) break;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__Add
                  (pDVar11,(int32_t)value[1].klass,value,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_BadgeUrlData>__Add_int__BadgeUrlData_
                  );
      }
    }
  }
  func_?(0);
  func_?(unaff_EDI,0,0);
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::BadgeManager::BadgeManager_Reset(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (Dictionary_2_System_Int32_BadgeUrlData_ *)
         func_?(TypeInfo__System__Collections__Generic__Dictionary<int,_BadgeUrlData>);
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this,
             MethodInfo__System__Collections__Generic__Dictionary<int,_BadgeUrlData>__Dictionary__);
  if ((((uint)(TypeInfo__BadgeManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__BadgeManager->_1).cctor_started == 0)) {
    func_?();
  }
  TypeInfo__BadgeManager->static_fields->badgeUrls = this;
  TypeInfo__BadgeManager->static_fields->maxLevelBadge = 0;
  return;
}


/* Void UnsubscribeGetBadgeRequest(Action`1[UnityEngine.Networking.UnityWebRequest]) */

void Assembly-CSharp.dll::BadgeManager::BadgeManager_UnsubscribeGetBadgeRequest
               (Action_1_UnityEngine_Networking_UnityWebRequest_ *callback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pIStack_1 = _UNK_?;
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__AsyncWWWManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__AsyncWWWManager->_1).cctor_started == 0)) {
    pIStack_1 = (Il2CppClass *)TypeInfo__AsyncWWWManager;
    func_?();
  }
  pIStack_1 = (Il2CppClass *)0xffffffff;
  pIStack_2 = (Il2CppClass *)&DAT_?;
  pIStack_3 = (Il2CppClass *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &pIStack_3;
  pIStack_4 = (Il2CppClass *)&stack0xffffff7c;
  pIVar5 = (Il2CppClass *)&stack0xffffff7c;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    pIVar5 = pIStack_4;
  }
  pIStack_4 = pIVar5;
  auStack_6._16_4_ = (Object *)0x0;
  iStack_7 = 0;
  auStack_6._20_4_ = (Action *)0x0;
  iStack_8 = 0;
  iStack_9 = 0;
  iStack_10 = 0;
  iStack_11 = 0;
  KStack_12.key = 0;
  KStack_12.value = 0;
  auStack_6._0_4_ = (LevelRewardsManager__Class *)0x0;
  auStack_6._4_4_ = (MethodInfo *)0x0;
  auStack_6._8_4_ = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  auStack_6._12_4_ = 0;
  uStack_13 = 0;
  func_?();
  iStack_14 = -1;
  _Stack_1c.dummy = &stack0xffffff7c;
  pIStack_4 = (Il2CppClass *)&stack0xffffff7c;
  if ((((uint)(TypeInfo__AsyncWWWManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     (_Stack_1c.dummy = &stack0xffffff7c, pIStack_4 = (Il2CppClass *)&stack0xffffff7c,
     (TypeInfo__AsyncWWWManager->_1).cctor_started == 0)) {
    _Stack_1c.dummy = &stack0xffffff7c;
    pIStack_4 = (Il2CppClass *)&stack0xffffff7c;
    func_?(TypeInfo__AsyncWWWManager);
  }
  this = TypeInfo__AsyncWWWManager->static_fields->activeRequests;
  iVar15 = 0;
  if (this != (HashSet_1_AsyncWebRequest_ *)0x0) {
    pHVar16 = System.Core.dll::System::Collections::Generic::HashSet`1[MV::WorldObject::MetaData::
             FirstTimeEvent]::HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent__GetEnumerator
                       ((HashSet_1_T_Enumerator_MV_WorldObject_MetaData_FirstTimeEvent_ *)
                        (auStack_17 + 4),(HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)this,
                        MethodInfo__System__Collections__Generic__HashSet<AsyncWebRequest>__GetEnumerator__
                       );
    auStack_6._20_4_ = pHVar16->hashset;
    iStack_8 = pHVar16->next;
    iStack_9 = pHVar16->stamp;
    iStack_10 = pHVar16->current;
    pIStack_1 = (Il2CppClass *)0x0;
    while (cVar18 = func_?(), cVar18 != '\0') {
      pAVar19 = (AsyncWebRequest *)
               mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                          (auStack_6 + 0x14),
                          MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<AsyncWebRequest>__get_Current__
                         );
      if ((((uint)(TypeInfo__AsyncWWWManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__AsyncWWWManager->_1).cctor_started == 0)) {
        func_?(TypeInfo__AsyncWWWManager);
      }
      AsyncWWWManager::AsyncWWWManager_Unsubscribe(pAVar19,callback,(MethodInfo *)0x0);
    }
    iVar20 = 0;
    iStack_14 = 0;
    iVar21 = 0;
    ((_Stack_1c.type)->data).__klassIndex = 0x3e;
    pIStack_1 = (Il2CppClass *)0xffffffff;
    func_?(auStack_6 + 0x14,
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<AsyncWebRequest>__Dispose__
                   );
    if ((_Stack_1c.array)->etype == (Il2CppType *)0x3e) {
      iVar20 = -1;
      iStack_14 = -1;
    }
    if ((((uint)(TypeInfo__AsyncWWWManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__AsyncWWWManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__AsyncWWWManager);
    }
    this_00 = TypeInfo__AsyncWWWManager->static_fields->requests;
    iVar15 = iVar21;
    if (this_00 != (Dictionary_2_WWWRequestPriority_Queue_1_AsyncWebRequest_ *)0x0) {
      pDVar22 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System
               ::Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                         ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_ *
                          )auStack_17,(Dictionary_2_WinningConditionType_System_Object_ *)this_00,
                          MethodInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__GetEnumerator__
                         );
      auStack_6._0_4_ = pDVar22->dictionary;
      auStack_6._4_4_ = pDVar22->next;
      auStack_6._8_4_ = pDVar22->stamp;
      auStack_6._12_4_ = (pDVar22->current).key;
      auStack_6._16_4_ = (pDVar22->current).value;
      pIStack_1 = (Il2CppClass *)0x2;
      while (iVar23 = iVar20, cVar18 = func_?(), iVar15 = iStack_11, cVar18 != '\0') {
        KStack_12 = LevelRewardsManager::LevelRewardsManager_get_NextReward
                              ((LevelRewardsManager *)auStack_6,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__get_Current__
                              );
        auStack_6._0_4_ = &KStack_12;
        auStack_6._4_4_ =
             MethodInfo__System__Collections__Generic__KeyValuePair<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__get_Value__
        ;
        this_02 = (Queue_1_System_Int32_ *)func_?();
        iVar15 = iVar21;
        if (this_02 == (Queue_1_System_Int32_ *)0x0) goto code_?;
        pQVar24 = System.dll::System::Collections::Generic::Queue`1[System::Int32]::
                 Queue_1_System_Int32__GetEnumerator
                           (&QStack_25,this_02,
                            MethodInfo__System__Collections__Generic__Queue<AsyncWebRequest>__GetEnumerator__
                           );
        uStack_13._0_4_ = pQVar24->q;
        uStack_13._4_4_ = pQVar24->idx;
        iStack_7 = pQVar24->ver;
        pIStack_1._0_1_ = 3;
        while (cVar18 = func_?(), cVar18 != '\0') {
          pAVar19 = (AsyncWebRequest *)func_?();
          if ((((uint)(TypeInfo__AsyncWWWManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__AsyncWWWManager->_1).cctor_started == 0)) {
            func_?(TypeInfo__AsyncWWWManager);
          }
          AsyncWWWManager::AsyncWWWManager_Unsubscribe(pAVar19,callback,(MethodInfo *)0x0);
        }
        iVar21 = iVar23 + 1;
        pIStack_1 = (Il2CppClass *)CONCAT31(pIStack_1._1_3_,2);
        *(undefined4 *)((int)_Stack_1c.dummy + iVar21 * 4) = 0x99;
        iStack_14 = iVar21;
        func_?();
        if (iStack_11 != 0) {
          func_?();
          iVar15 = iVar21;
          goto code_?;
        }
        iVar20 = iVar21;
        if (((iVar21 != -1) && (*(int *)((int)_Stack_1c.dummy + iVar21 * 4) == 0x99)) &&
           (iVar20 = iVar23, iStack_14 = iVar23, iVar21 < 0)) {
          iVar20 = iVar21;
          iStack_14 = iVar21;
        }
      }
      *(undefined4 *)((int)_Stack_1c.dummy + iVar23 * 4 + 4) = 0xb8;
      pIStack_1 = (Il2CppClass *)0xffffffff;
      func_?();
      if (iVar15 != 0) goto code_?;
      if ((((uint)(TypeInfo__AsyncWWWManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__AsyncWWWManager->_1).cctor_started == 0)) {
        func_?(TypeInfo__AsyncWWWManager);
      }
      this_01 = TypeInfo__AsyncWWWManager->static_fields->cache;
      if (this_01 != (AsyncWWWManager_Cache *)0x0) {
        AsyncWWWManager+Cache::AsyncWWWManager_Cache_UnsubscribeCached
                  (this_01,callback,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pIStack_3;
        return;
      }
    }
  }
code_?:
  func_?(0);
code_?:
  func_?(iVar15,0,0);
  pcVar26 = (code *)swi(3);
  (*pcVar26)();
  return;
}


/* BadgeManager() */

void Assembly-CSharp.dll::BadgeManager::BadgeManager__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (Dictionary_2_System_Int32_BadgeUrlData_ *)
         func_?(TypeInfo__System__Collections__Generic__Dictionary<int,_BadgeUrlData>);
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this,
             MethodInfo__System__Collections__Generic__Dictionary<int,_BadgeUrlData>__Dictionary__);
  TypeInfo__BadgeManager->static_fields->badgeUrls = this;
  TypeInfo__BadgeManager->static_fields->maxLevelBadge = 0;
  return;
}

