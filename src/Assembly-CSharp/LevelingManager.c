
/* InitialLevelData CreateInitialLevelData() */

InitialLevelData *
Assembly-CSharp.dll::LevelingManager::LevelingManager_CreateInitialLevelData(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)
            func_?(TypeInfo__InitialLevelData);
  WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1::
  WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__ctor(this_00,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__LevelingManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__LevelingManager->_1).cctor_started == 0)) {
    func_?();
  }
  pWVar1 = (WinningConditionDebriefing *)LevelingManager_TestBadgeUrlData((MethodInfo *)0x0);
  if (this_00 != (WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)0x0) {
    (this_00->fields)._this = pWVar1;
    (this_00->fields)._current = (Object *)0x2;
    *(undefined4 *)&(this_00->fields)._disposing = 0x78;
    this = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
            *)TypeInfo__LevelingManager->static_fields->TestLevelToLimits;
    if (this != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                 *)0x0) {
      pTVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
               Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
               Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                         (this,2,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_XPLevelLimits>__get_Item_int_
                         );
      (this_00->fields)._PC = (int32_t)pTVar2;
      return (InitialLevelData *)this_00;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pIVar4 = (InitialLevelData *)(*pcVar3)();
  return pIVar4;
}


/* Void Destroy() */

void Assembly-CSharp.dll::LevelingManager::LevelingManager_Destroy(MethodInfo *method)

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
  uStack_1 = 1;
  if ((((uint)(TypeInfo__LevelingManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__LevelingManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__LevelingManager);
  }
  if (TypeInfo__LevelingManager->static_fields->__f__mg_cache0 ==
      (Action_1_UnityEngine_Networking_UnityWebRequest_ *)0x0) {
    this = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this,(Object *)0x0,
               MethodInfo__LevelingManager__OnInitialData_UnityEngine__Networking__UnityWebRequest_,
               MethodInfo__System__Action<UnityEngine::Networking::UnityWebRequest>__Action_System__Object__void__
              );
    if ((((uint)(TypeInfo__LevelingManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__LevelingManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__LevelingManager);
    }
    TypeInfo__LevelingManager->static_fields->__f__mg_cache0 =
         (Action_1_UnityEngine_Networking_UnityWebRequest_ *)this;
  }
  if ((((uint)(TypeInfo__LevelingManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__LevelingManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__LevelingManager);
  }
  callback = TypeInfo__LevelingManager->static_fields->__f__mg_cache0;
  if ((((uint)(TypeInfo__AsyncWWWManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__AsyncWWWManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__AsyncWWWManager);
  }
  AsyncWWWManager::AsyncWWWManager_UnsubscribeWWWRequest(callback,(MethodInfo *)0x0);
  uStack_1 = 0xffffffff;
  if ((((uint)(TypeInfo__LevelingManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__LevelingManager->_1).cctor_started == 0)) {
    func_?();
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__LevelingManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__LevelingManager->_1).cctor_started == 0)) {
    func_?();
  }
  TypeInfo__LevelingManager->static_fields->_IsInitialized_k__BackingField = 0;
  TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = (UnityAction *)0x0;
  *unaff_FS_OFFSET = uStack_3;
  return;
}


/* Void Initialize(Int32) */

void Assembly-CSharp.dll::LevelingManager::LevelingManager_Initialize
               (int32_t profileID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MV__Common__Urls->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MV__Common__Urls->_1).cctor_started == 0)) {
    func_?(TypeInfo__MV__Common__Urls);
  }
  pSVar1 = MVCommon.dll::MV::Common::Urls::Urls_get_InitialData((MethodInfo *)0x0);
  pAStack_2 = (Action_1_UnityEngine_Networking_UnityWebRequest___Class *)profileID;
  arg1 = (Object *)func_?(TypeInfo__System__Int32,&pAStack_2);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar1 = mscorlib.dll::System::String::String_Concat((Object *)pSVar1,arg1,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__LevelingManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__LevelingManager->_1).cctor_started == 0)) {
    pAStack_2 = (Action_1_UnityEngine_Networking_UnityWebRequest___Class *)TypeInfo__LevelingManager
    ;
    func_?();
  }
  if (TypeInfo__LevelingManager->static_fields->__f__mg_cache1 ==
      (Action_1_UnityEngine_Networking_UnityWebRequest_ *)0x0) {
    pAStack_2 = TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>;
    this = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this,(Object *)0x0,
               MethodInfo__LevelingManager__OnInitialData_UnityEngine__Networking__UnityWebRequest_,
               MethodInfo__System__Action<UnityEngine::Networking::UnityWebRequest>__Action_System__Object__void__
              );
    if ((((uint)(TypeInfo__LevelingManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__LevelingManager->_1).cctor_started == 0)) {
      pAStack_2 = (Action_1_UnityEngine_Networking_UnityWebRequest___Class *)
                  TypeInfo__LevelingManager;
      func_?();
    }
    TypeInfo__LevelingManager->static_fields->__f__mg_cache1 =
         (Action_1_UnityEngine_Networking_UnityWebRequest_ *)this;
  }
  if ((((uint)(TypeInfo__LevelingManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__LevelingManager->_1).cctor_started == 0)) {
    pAStack_2 = (Action_1_UnityEngine_Networking_UnityWebRequest___Class *)TypeInfo__LevelingManager
    ;
    func_?();
  }
  pAStack_2 = (Action_1_UnityEngine_Networking_UnityWebRequest___Class *)TypeInfo__GetRequest;
  callback = TypeInfo__LevelingManager->static_fields->__f__mg_cache1;
  this_00 = (GetRequest *)func_?();
  GetRequest::GetRequest__ctor
            (this_00,pSVar1,callback,WWWRequestPriority__Enum_WaitUntilSyncronizingIsDone,
             (MethodInfo *)0x0);
  if ((((uint)(TypeInfo__AsyncWWWManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__AsyncWWWManager->_1).cctor_started == 0)) {
    func_?();
  }
  AsyncWWWManager::AsyncWWWManager_WWWRequest((AsyncWebRequest *)this_00,(MethodInfo *)0x0);
  return;
}


/* Void Notify(InitialLevelData) */

void Assembly-CSharp.dll::LevelingManager::LevelingManager_Notify
               (InitialLevelData *initialLevelData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (initialLevelData != (InitialLevelData *)0x0) {
    badgeUrlDatas = (initialLevelData->fields).BadgeUrlData;
    if ((((uint)(TypeInfo__BadgeManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__BadgeManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__BadgeManager);
    }
    BadgeManager::BadgeManager_Initialize(badgeUrlDatas,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this_00 != (MVNetworkGame *)0x0) {
      pMVar1 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0);
      if (pMVar1 != (MVLocalPlayer *)0x0) {
        (*(code *)(pMVar1->klass->vtable).InitializeLeveling.method)();
        if ((((uint)(TypeInfo__LevelingManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__LevelingManager->_1).cctor_started == 0)) {
          func_?();
        }
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if ((((uint)(TypeInfo__LevelingManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__LevelingManager->_1).cctor_started == 0)) {
          func_?();
        }
        TypeInfo__LevelingManager->static_fields->_IsInitialized_k__BackingField = 1;
        if (TypeInfo__LevelingManager->static_fields->OnLevelingInitialized != (UnityAction *)0x0) {
          if ((((uint)(TypeInfo__LevelingManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__LevelingManager->_1).cctor_started == 0)) {
            func_?();
          }
          this = (AvatarMotor_OnActiveBounceDelegate *)
                 TypeInfo__LevelingManager->static_fields->OnLevelingInitialized;
          if (this == (AvatarMotor_OnActiveBounceDelegate *)0x0) goto code_?;
          AvatarMotor+OnActiveBounceDelegate::AvatarMotor_OnActiveBounceDelegate_Invoke
                    (this,(MethodInfo *)0x0);
          TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = (UnityAction *)0x0;
        }
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnInitialData(UnityWebRequest) */

void Assembly-CSharp.dll::LevelingManager::LevelingManager_OnInitialData
               (UnityWebRequest *result,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (result != (UnityWebRequest *)0x0) {
    this_00 = (ActDetectorBase *)
              mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
              Serialization::JsonProperty]::
              Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                        ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)result,
                         (MethodInfo *)0x0);
    if (this_00 != (ActDetectorBase *)0x0) {
      Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ActDetectorBase::
      ActDetectorBase_OnApplicationQuit(this_00,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) !=
           0) && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
        func_?();
      }
      pXVar1 = Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_43
                         (value,
                          InitialLevelData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<InitialLevelData>_System__String_
                         );
      if ((((uint)(TypeInfo__LevelingManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__LevelingManager->_1).cctor_started == 0)) {
        func_?(TypeInfo__LevelingManager);
      }
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      if (pXVar1 != (XPLevelLimits *)0x0) {
        badgeUrlDatas = (List_1_BadgeUrlData_ *)(pXVar1->fields)._PrevXP_k__BackingField;
        if ((((uint)(TypeInfo__BadgeManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__BadgeManager->_1).cctor_started == 0)) {
          func_?(TypeInfo__BadgeManager);
        }
        BadgeManager::BadgeManager_Initialize(badgeUrlDatas,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (this_01 != (MVNetworkGame *)0x0) {
          pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_01,(MethodInfo *)0x0);
          if (pMVar2 != (MVLocalPlayer *)0x0) {
            (*(code *)(pMVar2->klass->vtable).InitializeLeveling.method)
                      (pMVar2,pXVar1,(pMVar2->klass->vtable).Destroy.methodPtr);
            if ((((uint)(TypeInfo__LevelingManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__LevelingManager->_1).cctor_started == 0)) {
              func_?(TypeInfo__LevelingManager);
            }
            if (cRam_? == '\0') {
              func_?(_UNK_?);
              cRam_? = '\x01';
            }
            if ((((uint)(TypeInfo__LevelingManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__LevelingManager->_1).cctor_started == 0)) {
              func_?(TypeInfo__LevelingManager);
            }
            TypeInfo__LevelingManager->static_fields->_IsInitialized_k__BackingField = 1;
            if (TypeInfo__LevelingManager->static_fields->OnLevelingInitialized !=
                (UnityAction *)0x0) {
              if ((((uint)(TypeInfo__LevelingManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__LevelingManager->_1).cctor_started == 0)) {
                func_?(TypeInfo__LevelingManager);
              }
              this = (AvatarMotor_OnActiveBounceDelegate *)
                     TypeInfo__LevelingManager->static_fields->OnLevelingInitialized;
              if (this == (AvatarMotor_OnActiveBounceDelegate *)0x0) goto code_?;
              AvatarMotor+OnActiveBounceDelegate::AvatarMotor_OnActiveBounceDelegate_Invoke
                        (this,(MethodInfo *)0x0);
              TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = (UnityAction *)0x0;
            }
            return;
          }
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* List`1[BadgeUrlData] TestBadgeUrlData() */

List_1_BadgeUrlData_ *
Assembly-CSharp.dll::LevelingManager::LevelingManager_TestBadgeUrlData(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (List_1_UnityEngine_Vector4_ *)
         func_?(TypeInfo__System__Collections__Generic__List<BadgeUrlData>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this,MethodInfo__System__Collections__Generic__List<BadgeUrlData>__List__);
  if ((((uint)(TypeInfo__MV__Common__Urls->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MV__Common__Urls->_1).cctor_started == 0)) {
    func_?(TypeInfo__MV__Common__Urls);
  }
  pSVar1 = MVCommon.dll::MV::Common::Urls::Urls_get_StreamingAssets((MethodInfo *)0x0);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar1 = mscorlib.dll::System::String::String_Concat_2
                     (pSVar1,StringLiteral_Promotion_Promotion_01_png,(MethodInfo *)0x0);
  pBVar2 = (BadgeUrlData *)func_?(TypeInfo__BadgeUrlData);
  BadgeUrlData::BadgeUrlData__ctor_1(pBVar2,1,pSVar1,(MethodInfo *)0x0);
  if (this != (List_1_UnityEngine_Vector4_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
              ((List_1_UIPushOption_ *)this,(UIPushOption__Enum)pBVar2,
               MethodInfo__System__Collections__Generic__List<BadgeUrlData>__Add_BadgeUrlData_);
    pSVar1 = MVCommon.dll::MV::Common::Urls::Urls_get_StreamingAssets((MethodInfo *)0x0);
    pSVar1 = mscorlib.dll::System::String::String_Concat_2
                       (pSVar1,StringLiteral_Promotion_Promotion_02_png,(MethodInfo *)0x0);
    pBVar2 = (BadgeUrlData *)func_?();
    BadgeUrlData::BadgeUrlData__ctor_1(pBVar2,2,pSVar1,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
              ((List_1_UIPushOption_ *)this,(UIPushOption__Enum)pBVar2,
               MethodInfo__System__Collections__Generic__List<BadgeUrlData>__Add_BadgeUrlData_);
    pSVar1 = MVCommon.dll::MV::Common::Urls::Urls_get_StreamingAssets((MethodInfo *)0x0);
    pSVar1 = mscorlib.dll::System::String::String_Concat_2
                       (pSVar1,StringLiteral_Promotion_Promotion_03_png,(MethodInfo *)0x0);
    pBVar2 = (BadgeUrlData *)func_?();
    BadgeUrlData::BadgeUrlData__ctor_1(pBVar2,3,pSVar1,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
              ((List_1_UIPushOption_ *)this,(UIPushOption__Enum)pBVar2,
               MethodInfo__System__Collections__Generic__List<BadgeUrlData>__Add_BadgeUrlData_);
    pSVar1 = MVCommon.dll::MV::Common::Urls::Urls_get_StreamingAssets((MethodInfo *)0x0);
    pSVar1 = mscorlib.dll::System::String::String_Concat_2
                       (pSVar1,StringLiteral_Promotion_Promotion_04_png,(MethodInfo *)0x0);
    pBVar2 = (BadgeUrlData *)func_?();
    BadgeUrlData::BadgeUrlData__ctor_1(pBVar2,4,pSVar1,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
              ((List_1_UIPushOption_ *)this,(UIPushOption__Enum)pBVar2,
               MethodInfo__System__Collections__Generic__List<BadgeUrlData>__Add_BadgeUrlData_);
    return (List_1_BadgeUrlData_ *)this;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pLVar4 = (List_1_BadgeUrlData_ *)(*pcVar3)();
  return pLVar4;
}


/* LevelingManager() */

void Assembly-CSharp.dll::LevelingManager::LevelingManager__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (Dictionary_2_System_Int32_System_Object_ *)
         func_?(TypeInfo__System__Collections__Generic__Dictionary<int,_XPLevelLimits>);
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this,
             MethodInfo__System__Collections__Generic__Dictionary<int,_XPLevelLimits>__Dictionary__)
  ;
  pSVar1 = (ShortcutManager_ShortcutKey *)func_?(TypeInfo__XPLevelLimits);
  ShortcutManager+ShortcutKey::ShortcutManager_ShortcutKey__ctor
            (pSVar1,KogamaControls__Enum_MoveForward,100,(UnityAction *)0x1,(MethodInfo *)0x0);
  if (this != (Dictionary_2_System_Int32_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__Add
              (this,1,(Object *)pSVar1,
               MethodInfo__System__Collections__Generic__Dictionary<int,_XPLevelLimits>__Add_int__XPLevelLimits_
              );
    pSVar1 = (ShortcutManager_ShortcutKey *)func_?();
    ShortcutManager+ShortcutKey::ShortcutManager_ShortcutKey__ctor
              (pSVar1,0x65,200,(UnityAction *)0x2,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__Add
              (this,2,(Object *)pSVar1,
               MethodInfo__System__Collections__Generic__Dictionary<int,_XPLevelLimits>__Add_int__XPLevelLimits_
              );
    pSVar1 = (ShortcutManager_ShortcutKey *)func_?();
    ShortcutManager+ShortcutKey::ShortcutManager_ShortcutKey__ctor
              (pSVar1,0xc9,300,(UnityAction *)0x3,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__Add
              (this,3,(Object *)pSVar1,
               MethodInfo__System__Collections__Generic__Dictionary<int,_XPLevelLimits>__Add_int__XPLevelLimits_
              );
    pSVar1 = (ShortcutManager_ShortcutKey *)func_?();
    ShortcutManager+ShortcutKey::ShortcutManager_ShortcutKey__ctor
              (pSVar1,0x12d,400,(UnityAction *)0x4,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__Add
              (this,4,(Object *)pSVar1,
               MethodInfo__System__Collections__Generic__Dictionary<int,_XPLevelLimits>__Add_int__XPLevelLimits_
              );
    pSVar1 = (ShortcutManager_ShortcutKey *)func_?();
    ShortcutManager+ShortcutKey::ShortcutManager_ShortcutKey__ctor
              (pSVar1,0x191,500,(UnityAction *)0x5,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__Add
              (this,5,(Object *)pSVar1,
               MethodInfo__System__Collections__Generic__Dictionary<int,_XPLevelLimits>__Add_int__XPLevelLimits_
              );
    pSVar1 = (ShortcutManager_ShortcutKey *)func_?();
    ShortcutManager+ShortcutKey::ShortcutManager_ShortcutKey__ctor
              (pSVar1,0x1f5,600,(UnityAction *)0x6,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__Add
              (this,6,(Object *)pSVar1,
               MethodInfo__System__Collections__Generic__Dictionary<int,_XPLevelLimits>__Add_int__XPLevelLimits_
              );
    TypeInfo__LevelingManager->static_fields->TestLevelToLimits =
         (Dictionary_2_System_Int32_XPLevelLimits_ *)this;
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Boolean get_IsInitialized() */

bool Assembly-CSharp.dll::LevelingManager::LevelingManager_get_IsInitialized(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__LevelingManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__LevelingManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__LevelingManager);
  }
  return TypeInfo__LevelingManager->static_fields->_IsInitialized_k__BackingField;
}


/* Void set_IsInitialized(Boolean) */

void Assembly-CSharp.dll::LevelingManager::LevelingManager_set_IsInitialized
               (bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__LevelingManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__LevelingManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__LevelingManager);
    TypeInfo__LevelingManager->static_fields->_IsInitialized_k__BackingField = value;
    return;
  }
  TypeInfo__LevelingManager->static_fields->_IsInitialized_k__BackingField = value;
  return;
}

