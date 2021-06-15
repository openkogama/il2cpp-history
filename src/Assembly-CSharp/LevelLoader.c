
/* Void LoadScenes(MVGameMode, Boolean, Action) */

void Assembly-CSharp.dll::LevelLoader::LevelLoader_LoadScenes
               (LevelLoader *this,MVGameMode__Enum gameMode,bool tourist,Action *callback,
               MethodInfo *method)

{
  if (gameMode == MVGameMode__Enum_Play) {
    LevelLoader_LoadScenes_1(this,(uint)tourist * 2,callback,(MethodInfo *)0x0);
    return;
  }
  if (gameMode == MVGameMode__Enum_Edit) {
    LevelLoader_LoadScenes_1(this,ScenesForMode__Enum_EditMode,callback,(MethodInfo *)0x0);
    return;
  }
  if (gameMode == MVGameMode__Enum_CharacterEditor) {
    LevelLoader_LoadScenes_1(this,ScenesForMode__Enum_AvatarEditMode,callback,(MethodInfo *)0x0);
  }
  return;
}


/* Void LoadScenes(ScenesForMode, Action) */

void Assembly-CSharp.dll::LevelLoader::LevelLoader_LoadScenes_1
               (LevelLoader *this,ScenesForMode__Enum mode,Action *callback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).callback = callback;
  if ((((uint)(TypeInfo__LevelLoader->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__LevelLoader->_1).cctor_started == 0)) {
    func_?(TypeInfo__LevelLoader);
  }
  this_00 = TypeInfo__LevelLoader->static_fields->scenesForModeMap;
  if (this_00 != (Dictionary_2_ScenesForMode_System_String_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[ScenesForMode,System::Object]
             ::Dictionary_2_ScenesForMode_System_Object__get_Item
                       ((Dictionary_2_ScenesForMode_System_Object_ *)this_00,mode,
                        MethodInfo__System__Collections__Generic__Dictionary<ScenesForMode,_System::String_[]>__get_Item_ScenesForMode_
                       );
    pMVar2 = (MonitorData *)0x0;
    if (pOVar1 != (Object *)0x0) {
      pOVar3 = pOVar1 + 2;
      while( true ) {
        if ((int)pOVar1[1].monitor <= (int)pMVar2) {
          return;
        }
        this_01 = (this->fields).pendingScenes;
        if (pOVar1[1].monitor <= pMVar2) break;
        sceneName = pOVar3->klass;
        if ((((uint)(TypeInfo__UnityEngine__SceneManagement__SceneManager->vtable).Equals.methodPtr
             & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__SceneManagement__SceneManager->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__SceneManagement__SceneManager);
        }
        item = UnityEngine.CoreModule.dll::UnityEngine::SceneManagement::SceneManager::
               SceneManager_LoadSceneAsync
                         ((String *)sceneName,LoadSceneMode__Enum_Additive,(MethodInfo *)0x0);
        if (this_01 == (List_1_UnityEngine_AsyncOperation_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                  ((List_1_UIPushOption_ *)this_01,(UIPushOption__Enum)item,
                   MethodInfo__System__Collections__Generic__List<UnityEngine::AsyncOperation>__Add_UnityEngine__AsyncOperation_
                  );
        pMVar2 = pMVar2 + 1;
        pOVar3 = (Object *)&pOVar3->monitor;
      }
      uVar4 = func_?(0,0);
      func_?(uVar4);
    }
  }
code_?:
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::LevelLoader::LevelLoader_Update(LevelLoader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).pendingScenes;
  if (pLVar1 != (List_1_UnityEngine_AsyncOperation_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::AsyncOperation>__get_Count__
                       );
    for (index = (undefined1 *)((int)&pOVar2[-1].monitor + 3); -1 < (int)index; index = index + -1)
    {
      pLVar1 = (this->fields).pendingScenes;
      if ((pLVar1 == (List_1_UnityEngine_AsyncOperation_ *)0x0) ||
         (this_02 = (AsyncOperation *)
                    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                    IEventSystemHandler]::
                    List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                              ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,
                               (int32_t)index,
                               MethodInfo__System__Collections__Generic__List<UnityEngine::AsyncOperation>__get_Item_int_
                              ), this_02 == (AsyncOperation *)0x0)) goto code_?;
      bVar3 = UnityEngine.CoreModule.dll::UnityEngine::AsyncOperation::AsyncOperation_get_isDone
                        (this_02,(MethodInfo *)0x0);
      if (bVar3 != 0) {
        this_00 = (List_1_MVPlayer_ *)(this->fields).pendingScenes;
        if (this_00 == (List_1_MVPlayer_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::List`1[MVPlayer]::List_1_MVPlayer__RemoveAt
                  (this_00,(int32_t)index,
                   MethodInfo__System__Collections__Generic__List<UnityEngine::AsyncOperation>__RemoveAt_int_
                  );
      }
    }
    pLVar1 = (this->fields).pendingScenes;
    if (pLVar1 != (List_1_UnityEngine_AsyncOperation_ *)0x0) {
      pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                          MethodInfo__System__Collections__Generic__List<UnityEngine::AsyncOperation>__get_Count__
                         );
      if (((int)pOVar2 < 1) &&
         (this_01 = (JumpState_OnWallJumpDelegate *)(this->fields).callback,
         this_01 != (JumpState_OnWallJumpDelegate *)0x0)) {
        JumpState+OnWallJumpDelegate::JumpState_OnWallJumpDelegate_Invoke(this_01,(MethodInfo *)0x0)
        ;
        (this->fields).callback = (Action *)0x0;
        if ((((uint)(TypeInfo__LevelLoader->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__LevelLoader->_1).cctor_started == 0)) {
          func_?();
        }
        if (TypeInfo__LevelLoader->static_fields->__f__am_cache0 == (UnityAction *)0x0) {
          this_03 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                     *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (this_03,(Object *)0x0,MethodInfo__LevelLoader___Update_m__0__,(MethodInfo *)0x0
                    );
          if ((((uint)(TypeInfo__LevelLoader->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__LevelLoader->_1).cctor_started == 0)) {
            func_?();
          }
          TypeInfo__LevelLoader->static_fields->__f__am_cache0 = (UnityAction *)this_03;
        }
        if ((((uint)(TypeInfo__LevelLoader->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__LevelLoader->_1).cctor_started == 0)) {
          func_?();
        }
        routine = WaitForFrames::WaitForFrames_Frames
                            (3,TypeInfo__LevelLoader->static_fields->__f__am_cache0,
                             (MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
                  ((MonoBehaviour *)this,routine,(MethodInfo *)0x0);
      }
      return;
    }
  }
code_?:
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void <Update>m__0() */

void Assembly-CSharp.dll::LevelLoader::LevelLoader__Update_m__0(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  args = (Object__Array *)func_?(TypeInfo__System__Object,0);
  if ((((uint)(TypeInfo__BrowserComm__ToJavaScript->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__BrowserComm__ToJavaScript->_1).cctor_started == 0)) {
    func_?(TypeInfo__BrowserComm__ToJavaScript);
  }
  BrowserComm+ToJavaScript::BrowserComm_ToJavaScript_ExternalCall
            (StringLiteral_readyForAd,args,(MethodInfo *)0x0);
  return;
}


/* LevelLoader() */

void Assembly-CSharp.dll::LevelLoader::LevelLoader__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (Dictionary_2_ScenesForMode_System_String_ *)
         func_?(
                        TypeInfo__System__Collections__Generic__Dictionary<ScenesForMode,_System::String_[]>
                        );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this,
             MethodInfo__System__Collections__Generic__Dictionary<ScenesForMode,_System::String_[]>__Dictionary__
            );
  pOVar1 = (Object *)func_?(TypeInfo__System__String,1);
  if (pOVar1 == (Object *)0x0) goto code_?;
  if ((StringLiteral_DesktopPlayModeGUI == (String *)0x0) ||
     (iVar2 = func_?(StringLiteral_DesktopPlayModeGUI,(pOVar1->klass->_0).element_class),
     iVar2 != 0)) {
    if (pOVar1[1].monitor == (MonitorData *)0x0) goto code_?;
    pOVar1[2].klass = (Object__Class *)StringLiteral_DesktopPlayModeGUI;
    if (this == (Dictionary_2_ScenesForMode_System_String_ *)0x0) {
code_?:
      func_?(0);
      goto code_?;
    }
    mscorlib.dll::System::Collections::Generic::Dictionary`2[ScenesForMode,System::Object]::
    Dictionary_2_ScenesForMode_System_Object__Add
              ((Dictionary_2_ScenesForMode_System_Object_ *)this,ScenesForMode__Enum_PlayMode,pOVar1
               ,
               MethodInfo__System__Collections__Generic__Dictionary<ScenesForMode,_System::String_[]>__Add_ScenesForMode__System__String____
              );
    pOVar1 = (Object *)func_?(TypeInfo__System__String,1);
    if (pOVar1 == (Object *)0x0) goto code_?;
    if ((StringLiteral_DesktopPlayModeGUI != (String *)0x0) &&
       (iVar2 = func_?(StringLiteral_DesktopPlayModeGUI,(pOVar1->klass->_0).element_class),
       iVar2 == 0)) goto code_?;
    if (pOVar1[1].monitor == (MonitorData *)0x0) goto code_?;
    pOVar1[2].klass = (Object__Class *)StringLiteral_DesktopPlayModeGUI;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[ScenesForMode,System::Object]::
    Dictionary_2_ScenesForMode_System_Object__Add
              ((Dictionary_2_ScenesForMode_System_Object_ *)this,ScenesForMode__Enum_PlayModeTourist
               ,pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<ScenesForMode,_System::String_[]>__Add_ScenesForMode__System__String____
              );
    pOVar1 = (Object *)func_?(TypeInfo__System__String,2);
    if (pOVar1 == (Object *)0x0) goto code_?;
    if ((StringLiteral_DesktopEditModeGUI != (String *)0x0) &&
       (iVar2 = func_?(StringLiteral_DesktopEditModeGUI,(pOVar1->klass->_0).element_class),
       iVar2 == 0)) goto code_?;
    if (pOVar1[1].monitor == (MonitorData *)0x0) goto code_?;
    pOVar1[2].klass = (Object__Class *)StringLiteral_DesktopEditModeGUI;
    if ((StringLiteral_DesktopPlayModeGUI != (String *)0x0) &&
       (iVar2 = func_?(StringLiteral_DesktopPlayModeGUI,(pOVar1->klass->_0).element_class),
       iVar2 == 0)) goto code_?;
    if (pOVar1[1].monitor < (MonitorData *)0x2) goto code_?;
    pOVar1[2].monitor = (MonitorData *)StringLiteral_DesktopPlayModeGUI;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[ScenesForMode,System::Object]::
    Dictionary_2_ScenesForMode_System_Object__Add
              ((Dictionary_2_ScenesForMode_System_Object_ *)this,ScenesForMode__Enum_EditMode,pOVar1
               ,
               MethodInfo__System__Collections__Generic__Dictionary<ScenesForMode,_System::String_[]>__Add_ScenesForMode__System__String____
              );
    pOVar1 = (Object *)func_?(TypeInfo__System__String,1);
    if (pOVar1 == (Object *)0x0) goto code_?;
    if ((StringLiteral_DesktopAvatarEditModeGUI == (String *)0x0) ||
       (iVar2 = func_?(StringLiteral_DesktopAvatarEditModeGUI,
                                (pOVar1->klass->_0).element_class), iVar2 != 0)) {
      if (pOVar1[1].monitor != (MonitorData *)0x0) {
        pOVar1[2].klass = (Object__Class *)StringLiteral_DesktopAvatarEditModeGUI;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[ScenesForMode,System::Object]::
        Dictionary_2_ScenesForMode_System_Object__Add
                  ((Dictionary_2_ScenesForMode_System_Object_ *)this,
                   ScenesForMode__Enum_AvatarEditMode,pOVar1,
                   MethodInfo__System__Collections__Generic__Dictionary<ScenesForMode,_System::String_[]>__Add_ScenesForMode__System__String____
                  );
        TypeInfo__LevelLoader->static_fields->scenesForModeMap = this;
        return;
      }
      goto code_?;
    }
  }
  else {
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
  }
  uVar3 = func_?(0,0);
  func_?(uVar3);
code_?:
  uVar3 = func_?(0,0);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* LevelLoader() */

void Assembly-CSharp.dll::LevelLoader::LevelLoader__ctor(LevelLoader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_Vector4_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<UnityEngine::AsyncOperation>
                           );
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__List<UnityEngine::AsyncOperation>__List__);
  (this->fields).pendingScenes = (List_1_UnityEngine_AsyncOperation_ *)this_00;
  uStack1 = 0;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
  return;
}

