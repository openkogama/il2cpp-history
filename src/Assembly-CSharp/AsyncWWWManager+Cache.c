
/* Void Add(String, CachedGetRequest) */

void Assembly-CSharp.dll::AsyncWWWManager+Cache::AsyncWWWManager_Cache_Add
               (AsyncWWWManager_Cache *this,String *path,CachedGetRequest *cachedGetRequest,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).cachedRequests;
  if (this_00 != (Dictionary_2_System_String_CachedGetRequest_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)this_00,path,(CrossPlatformInputManager_VirtualButton *)cachedGetRequest,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_CachedGetRequest>__Add_System__String__CachedGetRequest_
              );
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Clear() */

void Assembly-CSharp.dll::AsyncWWWManager+Cache::AsyncWWWManager_Cache_Clear
               (AsyncWWWManager_Cache *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)(this->fields).cachedRequests;
  if (this_00 !=
      (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
      0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::Experimental
    ::TerrainAPI::TerrainUtility+TerrainMap]::
    Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Clear
              (this_00,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_CachedGetRequest>__Clear__
              );
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Boolean TryGet(String, CachedGetRequest ByRef) */

bool Assembly-CSharp.dll::AsyncWWWManager+Cache::AsyncWWWManager_Cache_TryGet
               (AsyncWWWManager_Cache *this,String *path,CachedGetRequest **cachedGetRequest,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).cachedRequests;
  if (this_00 != (Dictionary_2_System_String_CachedGetRequest_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityEngine::
            Sprite]::Dictionary_2_System_String_UnityEngine_Sprite__TryGetValue
                      ((Dictionary_2_System_String_UnityEngine_Sprite_ *)this_00,path,
                       (Sprite **)cachedGetRequest,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_CachedGetRequest>__TryGetValue_System__String__CachedGetRequest__
                      );
    return bVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* Void UnsubscribeCached(Action`1[UnityEngine.Networking.UnityWebRequest]) */

void Assembly-CSharp.dll::AsyncWWWManager+Cache::AsyncWWWManager_Cache_UnsubscribeCached
               (AsyncWWWManager_Cache *this,
               Action_1_UnityEngine_Networking_UnityWebRequest_ *callback,MethodInfo *method)

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
  auStack_6._16_4_ = 0;
  KStack_7.key = 0;
  KStack_7.value = 0;
  auStack_6._0_4_ = (LevelRewardsManager__Class *)0x0;
  auStack_6._4_4_ = (MonitorData *)0x0;
  auStack_6._8_4_ = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  auStack_6._12_4_ = 0;
  func_?();
  this_00 = (this->fields).cachedRequests;
  if (this_00 == (Dictionary_2_System_String_CachedGetRequest_ *)0x0) {
    pLStack_8 = (Link__Array *)&stack0xffffffa8;
    pWStack_4 = (WinningConditionType__Enum__Array *)&stack0xffffffa8;
    func_?(0);
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pLStack_8 = (Link__Array *)&stack0xffffffa8;
  pWStack_4 = (WinningConditionType__Enum__Array *)&stack0xffffffa8;
  pDVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
           Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                     (&DStack_11,(Dictionary_2_WinningConditionType_System_Object_ *)this_00,
                      MethodInfo__System__Collections__Generic__Dictionary<System::String,_CachedGetRequest>__GetEnumerator__
                     );
  auStack_6._0_4_ = pDVar10->dictionary;
  auStack_6._4_4_ = pDVar10->next;
  auStack_6._8_4_ = pDVar10->stamp;
  auStack_6._12_4_ = (pDVar10->current).key;
  auStack_6._16_4_ = (pDVar10->current).value;
  iStack_1 = 0;
  while (cVar12 = func_?(), cVar12 != '\0') {
    KStack_7 = LevelRewardsManager::LevelRewardsManager_get_NextReward
                          ((LevelRewardsManager *)auStack_6,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_CachedGetRequest>__get_Current__
                          );
    DStack_11.dictionary = (Dictionary_2_WinningConditionType_System_Object_ *)&KStack_7;
    DStack_11.next =
         (int32_t)
         MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_CachedGetRequest>__get_Value__
    ;
    request = (AsyncWebRequest *)func_?();
    if ((((uint)(TypeInfo__AsyncWWWManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__AsyncWWWManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__AsyncWWWManager);
    }
    AsyncWWWManager::AsyncWWWManager_Unsubscribe(request,callback,(MethodInfo *)0x0);
  }
  pLStack_8->klass = (Link__Array__Class *)0x45;
  iStack_1 = -1;
  func_?();
  *unaff_FS_OFFSET = pOStack_3;
  return;
}


/* AsyncWWWManager+Cache() */

void Assembly-CSharp.dll::AsyncWWWManager+Cache::AsyncWWWManager_Cache__ctor
               (AsyncWWWManager_Cache *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_String_CachedGetRequest_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<System::String,_CachedGetRequest>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_CachedGetRequest>__Dictionary__
            );
  (this->fields).cachedRequests = this_00;
  return;
}

