
/* Void AccessoryCreatedInternalCallback(Int32, AvatarAccessory) */

void Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::
     AccessoryLoader_AccessoryCreatedInternalCallback
               (AccessoryLoader *this,int32_t doneId,AvatarAccessory *avatarAccessory,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
            *)(this->fields).requests;
  if (pDVar1 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                 *)0x0) {
    pTVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
             Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
             Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                       (pDVar1,doneId,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::Request>__get_Item_int_
                       );
    pDVar1 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
              *)(this->fields).requests;
    if (pDVar1 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                   *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
      Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
      Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Remove
                (pDVar1,doneId,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::Request>__Remove_int_
                );
      if (pTVar2 != (TerrainUtility_TerrainMap *)0x0) {
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        this_00 = (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)
                  (pTVar2->fields).m_patchSize.x;
        if (this_00 !=
            (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)0x0) {
          mscorlib.dll::System::Action`1[System::Collections::Generic::Dictionary`2[System::
          String,System::Object]]::
          Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object__Invoke
                    (this_00,(Dictionary_2_System_String_System_Object_ *)avatarAccessory,
                     MethodInfo__System__Action<AvatarAccessory>__Invoke_AvatarAccessory_);
          return;
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void AddRequest(AccessoryLoader+AccessoryLoaderRequest, Action`1[AvatarAccessory]) */

void Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::
     AccessoryLoader_AddRequest
               (AccessoryLoader *this,AccessoryLoader_AccessoryLoaderRequest *accessoryLoaderRequest
               ,Action_1_AvatarAccessory_ *accessoryCreatedExternalCallback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).requests;
  key = (this->fields).id;
  method_00 = 
  TypeInfo__Assets__Scripts__WorldObjectTypes__Avatar__Accessories__AccessoryLoader__Request;
  this_01 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,(MethodInfo *)method_00);
  (this_01->fields)._._._._.m_CachedPtr = accessoryCreatedExternalCallback;
  (this_01->fields).state = (int32_t)accessoryLoaderRequest;
  if (this_00 !=
      (Dictionary_2_System_Int32_Assets_Scripts_WorldObjectTypes_Avatar_Accessories_AccessoryLoader_Request_
       *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__Add
              ((Dictionary_2_System_Int32_System_Object_ *)this_00,key,(Object *)this_01,
               MethodInfo__System__Collections__Generic__Dictionary<int,_Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::Request>__Add_int__Assets__Scripts__WorldObjectTypes__Avatar__Accessories__AccessoryLoader__Request_
              );
    if (accessoryLoaderRequest != (AccessoryLoader_AccessoryLoaderRequest *)0x0) {
      AccessoryLoader+AccessoryLoaderRequest::AccessoryLoader_AccessoryLoaderRequest_LoadAccessory
                (accessoryLoaderRequest,(MethodInfo *)0x0);
      (this->fields).id = (this->fields).id + 1;
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Destroy() */

void Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::
     AccessoryLoader_Destroy(AccessoryLoader *this,MethodInfo *method)

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
  auStack_6._4_4_ = (MonitorData *)0x0;
  auStack_6._8_4_ = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  auStack_6._12_4_ = 0;
  func_?();
  this_00 = (this->fields).requests;
  pLStack_8 = (Link__Array *)&stack0xffffffa8;
  pWStack_4 = (WinningConditionType__Enum__Array *)&stack0xffffffa8;
  if (this_00 !=
      (Dictionary_2_System_Int32_Assets_Scripts_WorldObjectTypes_Avatar_Accessories_AccessoryLoader_Request_
       *)0x0) {
    pLStack_8 = (Link__Array *)&stack0xffffffa8;
    pWStack_4 = (WinningConditionType__Enum__Array *)&stack0xffffffa8;
    pDVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
             Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                       (&DStack_10,(Dictionary_2_WinningConditionType_System_Object_ *)this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::Request>__GetEnumerator__
                       );
    auStack_6._0_4_ = pDVar9->dictionary;
    auStack_6._4_4_ = pDVar9->next;
    auStack_6._8_4_ = pDVar9->stamp;
    auStack_6._12_4_ = (pDVar9->current).key;
    auStack_6._16_4_ = (pDVar9->current).value;
    iStack_1 = 0;
    while (cVar11 = func_?(), cVar11 != '\0') {
      KStack_7 = LevelRewardsManager::LevelRewardsManager_get_NextReward
                            ((LevelRewardsManager *)auStack_6,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::Request>__get_Current__
                            );
      DStack_10.dictionary = (Dictionary_2_WinningConditionType_System_Object_ *)&KStack_7;
      DStack_10.next =
           (int32_t)
           MethodInfo__System__Collections__Generic__KeyValuePair<int,_Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::Request>__get_Value__
      ;
      iVar12 = func_?();
      if ((iVar12 == 0) || (unaff_ESI = *(Object **)(iVar12 + 0xc), unaff_ESI == (Object *)0x0))
      goto code_?;
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      unaff_ESI[1].monitor = (MonitorData *)0x0;
      this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(
                                  TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>
                                  );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_02,unaff_ESI,
                 MethodInfo__Assets__Scripts__WorldObjectTypes__Avatar__Accessories__AccessoryLoader__AccessoryLoaderRequest__Callback_UnityEngine__Networking__UnityWebRequest_
                 ,
                 MethodInfo__System__Action<UnityEngine::Networking::UnityWebRequest>__Action_System__Object__void__
                );
      if ((((uint)(TypeInfo__AsyncWWWManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__AsyncWWWManager->_1).cctor_started == 0)) {
        func_?();
      }
      AsyncWWWManager::AsyncWWWManager_UnsubscribeWWWRequest
                ((Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_02,(MethodInfo *)0x0);
    }
    unaff_ESI = (Object *)0x0;
    pLStack_8->klass = (Link__Array__Class *)0x44;
    iStack_1 = -1;
    func_?();
    this_01 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
               *)(this->fields).requests;
    if (this_01 !=
        (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
        0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
      Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
      Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Clear
                (this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::Request>__Clear__
                );
      *unaff_FS_OFFSET = pOStack_3;
      return;
    }
  }
code_?:
  func_?(0);
  func_?(unaff_ESI,0,0);
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void LoadAccessory(String, Action`1[AvatarAccessory]) */

void Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::
     AccessoryLoader_LoadAccessory
               (AccessoryLoader *this,String *url,
               Action_1_AvatarAccessory_ *accessoryCreatedExternalCallback,MethodInfo *method)

{
  iStack_1 = -1;
  puStack_2 = &DAT_?;
  pOStack_3 = (Object *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &pOStack_3;
  puStack_4 = &stack0xffffffa0;
  puVar5 = &stack0xffffffa0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  auStack_6._16_4_ = (Object *)0x0;
  pWStack_7 = (WinningConditionType__Enum__Array *)0x0;
  KStack_8.key = 0;
  KStack_8.value = 0;
  auStack_6._0_4_ = (AccessoryLoader_Request__Class *)0x0;
  auStack_6._4_4_ = (MonitorData *)0x0;
  auStack_6._8_4_ = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  auStack_6._12_4_ = 0;
  func_?();
  pLStack_9 = (Link__Array *)0xffffffff;
  this_00 = (this->fields).requests;
  pOStack_10 = (Object__Array *)&stack0xffffffa0;
  puStack_4 = &stack0xffffffa0;
  if (this_00 !=
      (Dictionary_2_System_Int32_Assets_Scripts_WorldObjectTypes_Avatar_Accessories_AccessoryLoader_Request_
       *)0x0) {
    pOStack_10 = (Object__Array *)&stack0xffffffa0;
    puStack_4 = &stack0xffffffa0;
    pDVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
             Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                       (&DStack_12,(Dictionary_2_WinningConditionType_System_Object_ *)this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::Request>__GetEnumerator__
                       );
    auStack_6._0_4_ = pDVar11->dictionary;
    auStack_6._4_4_ = pDVar11->next;
    auStack_6._8_4_ = pDVar11->stamp;
    auStack_6._12_4_ = (pDVar11->current).key;
    auStack_6._16_4_ = (pDVar11->current).value;
    iStack_1 = 0;
    do {
      cVar13 = func_?();
      pOVar14 = pOStack_10;
      if (cVar13 == '\0') {
        pOStack_10->klass = (Object__Array__Class *)0x54;
        goto code_?;
      }
      KStack_8 = LevelRewardsManager::LevelRewardsManager_get_NextReward
                            ((LevelRewardsManager *)auStack_6,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::Request>__get_Current__
                            );
      DStack_12.dictionary = (Dictionary_2_WinningConditionType_System_Object_ *)&KStack_8;
      DStack_12.next =
           (int32_t)
           MethodInfo__System__Collections__Generic__KeyValuePair<int,_Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::Request>__get_Value__
      ;
      iVar15 = func_?();
      if ((iVar15 == 0) || (*(int *)(iVar15 + 0xc) == 0)) goto code_?;
      a = *(String **)(*(int *)(iVar15 + 0xc) + 0x10);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      bVar16 = mscorlib.dll::System::String::String_op_Equality(a,url,(MethodInfo *)0x0);
      pOVar14 = pOStack_10;
    } while (bVar16 == 0);
    pOStack_10->klass = (Object__Array__Class *)0x73;
code_?:
    iStack_1 = -1;
    func_?();
    if (pWStack_7 != (WinningConditionType__Enum__Array *)0x0) goto code_?;
    if (pOVar14->klass == (Object__Array__Class *)0x73) {
code_?:
      *unaff_FS_OFFSET = pOStack_3;
      return;
    }
    pvVar17 = (void *)(this->fields).id;
    this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?();
    method_00 = (MethodInfo *)&UNK_?;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_02,(Object *)this,
               MethodInfo__Assets__Scripts__WorldObjectTypes__Avatar__Accessories__AccessoryLoader__AccessoryCreatedInternalCallback_int__AvatarAccessory_
               ,MethodInfo__System__Action<int,_AvatarAccessory>__Action_System__Object__void__);
    method_01 = 
    TypeInfo__Assets__Scripts__WorldObjectTypes__Avatar__Accessories__AccessoryLoader__AccessoryLoaderRequest
    ;
    pWStack_7 = (WinningConditionType__Enum__Array *)func_?();
    ScaleAnimationBase::ScaleAnimationBase_Play
              ((ScaleAnimationBase *)pWStack_7,0.0,(MethodInfo *)method_01);
    this_01 = pWStack_7;
    bVar18 = cRam_? == '\0';
    (((ScaleAnimationBase__Fields *)&pWStack_7->bounds)->_)._._._.m_CachedPtr = pvVar17;
    pWStack_7->max_length = (il2cpp_array_size_t)this_02;
    ((Vector3 *)pWStack_7->vector)->x = (float)url;
    if (bVar18) {
      auStack_6._0_4_ = _UNK_?;
      DStack_12.current.value = (Object *)&UNK_?;
      func_?();
      cRam_? = '\x01';
    }
    auStack_6._0_4_ =
         TypeInfo__Assets__Scripts__WorldObjectTypes__Avatar__Accessories__AccessoryLoader__Request;
    pLStack_9 = (Link__Array *)(this->fields).requests;
    pWStack_7 = (WinningConditionType__Enum__Array *)(this->fields).id;
    DStack_12.current.value = (Object *)&UNK_?;
    this_03 = (ScaleAnimationBase *)func_?();
    ScaleAnimationBase::ScaleAnimationBase_Play(this_03,0.0,method_00);
    (this_03->fields)._._._._.m_CachedPtr = accessoryCreatedExternalCallback;
    (this_03->fields).state = (int32_t)this_01;
    if (pLStack_9 != (Link__Array *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
      Dictionary_2_System_Int32_System_Object__Add
                ((Dictionary_2_System_Int32_System_Object_ *)pLStack_9,(int32_t)pWStack_7,
                 (Object *)this_03,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::Request>__Add_int__Assets__Scripts__WorldObjectTypes__Avatar__Accessories__AccessoryLoader__Request_
                );
      AccessoryLoader+AccessoryLoaderRequest::AccessoryLoader_AccessoryLoaderRequest_LoadAccessory
                ((AccessoryLoader_AccessoryLoaderRequest *)this_01,(MethodInfo *)0x0);
      (this->fields).id = (this->fields).id + 1;
      goto code_?;
    }
  }
code_?:
  func_?(0);
code_?:
  func_?();
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}


/* AccessoryLoader() */

void Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::
     AccessoryLoader__ctor(AccessoryLoader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_Assets_Scripts_WorldObjectTypes_Avatar_Accessories_AccessoryLoader_Request_
             *)func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<int,_Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::Request>
                              );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<int,_Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::Request>__Dictionary__
            );
  (this->fields).requests = this_00;
  return;
}

