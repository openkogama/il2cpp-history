
/* Void LoadScenes(MVGameMode, Boolean, Boolean, Action) */

void Assembly-CSharp.dll::LevelLoader::LevelLoader_LoadScenes
               (LevelLoader *this,MVGameMode__Enum gameMode,bool tourist,bool useTouch,
               Action *callback,MethodInfo *method)

{
  if (gameMode == MVGameMode__Enum_Edit) {
    LevelLoader_LoadScenes_1(this,ScenesForMode__Enum_EditMode,callback,(MethodInfo *)0x0);
  }
  else {
    if (gameMode == MVGameMode__Enum_Play) {
      if (this != (LevelLoader *)0x0) {
        LevelLoader_LoadScenes_1(this,(uint)tourist * 2,callback,(MethodInfo *)0x0);
        return;
      }
      uVar1 = func_?(&stack0xfffffff0);
      func_?(uVar1);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (gameMode == MVGameMode__Enum_CharacterEditor) {
      LevelLoader_LoadScenes_1(this,ScenesForMode__Enum_AvatarEditMode,callback,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


/* Void LoadScenes(ScenesForMode, Action) */

void Assembly-CSharp.dll::LevelLoader::LevelLoader_LoadScenes_1
               (LevelLoader *this,ScenesForMode__Enum mode,Action *callbackAction,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<ScenesForMode,_System::String_[]>__get_Item_ScenesForMode_
                   );
    func_?(&TypeInfo__LevelLoader);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::AsyncOperation>__Add_UnityEngine__AsyncOperation_
                   );
    func_?(&TypeInfo__UnityEngine__SceneManagement__SceneManager);
    cRam_? = '\x01';
  }
  (this->fields).callback = callbackAction;
  func_?(&(this->fields).callback,callbackAction);
  if ((TypeInfo__LevelLoader->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__LevelLoader);
  }
  this_00 = TypeInfo__LevelLoader->static_fields->scenesForModeMap;
  if (this_00 != (Dictionary_2_ScenesForMode_System_String_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
             Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                       ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,mode,
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
        if ((TypeInfo__UnityEngine__SceneManagement__SceneManager->_1).cctor_finished_or_no_cctor ==
            0) {
          func_?(TypeInfo__UnityEngine__SceneManagement__SceneManager);
        }
        item = UnityEngine.CoreModule.dll::UnityEngine::SceneManagement::SceneManager::
               SceneManager_LoadSceneAsync
                         ((String *)sceneName,LoadSceneMode__Enum_Additive,(MethodInfo *)0x0);
        if (this_01 == (List_1_UnityEngine_AsyncOperation_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Add
                  ((List_1_System_Object_ *)this_01,(Object *)item,
                   MethodInfo__System__Collections__Generic__List<UnityEngine::AsyncOperation>__Add_UnityEngine__AsyncOperation_
                  );
        pMVar2 = pMVar2 + 1;
        pOVar3 = (Object *)&pOVar3->monitor;
      }
      func_?();
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::LevelLoader::LevelLoader_Update(LevelLoader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::AsyncOperation>__RemoveAt_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::AsyncOperation>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::AsyncOperation>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).pendingScenes;
  if (pLVar1 != (List_1_UnityEngine_AsyncOperation_ *)0x0) {
    index = (pLVar1->fields)._size;
    while (index = index + -1, -1 < index) {
      this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                (this->fields).pendingScenes;
      if ((this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
         (this_01 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                              (this_00,index,
                               MethodInfo__System__Collections__Generic__List<UnityEngine::AsyncOperation>__get_Item_int_
                              ), this_01 == (RegexCharClass_SingleRange)0x0)) goto code_?;
      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::AsyncOperation::AsyncOperation_get_isDone
                        ((AsyncOperation *)this_01,(MethodInfo *)0x0);
      if (bVar2 != 0) {
        pLVar1 = (this->fields).pendingScenes;
        if (pLVar1 == (List_1_UnityEngine_AsyncOperation_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__RemoveAt
                  ((List_1_System_Object_ *)pLVar1,index,
                   MethodInfo__System__Collections__Generic__List<UnityEngine::AsyncOperation>__RemoveAt_int_
                  );
      }
    }
    pLVar1 = (this->fields).pendingScenes;
    if (pLVar1 != (List_1_UnityEngine_AsyncOperation_ *)0x0) {
      if (((pLVar1->fields)._size < 1) && ((this->fields).callback != (Action *)0x0)) {
        pAVar3 = (this->fields).callback;
        (*(pAVar3->fields)._._.invoke_impl)
                  ((pAVar3->fields)._._.method_code,(pAVar3->fields)._._.method);
        (this->fields).callback = (Action *)0x0;
        func_?(&(this->fields).callback,0);
      }
      return;
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* LevelLoader() */

void Assembly-CSharp.dll::LevelLoader::LevelLoader__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<ScenesForMode,_System::String_[]>__Add_ScenesForMode__System__String____
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<ScenesForMode,_System::String_[]>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<ScenesForMode,_System::String_[]>
                   );
    func_?(&TypeInfo__LevelLoader);
    func_?(&TypeInfo__System__String);
    func_?(&StringLiteral_DesktopAvatarEditModeGUI);
    func_?(&StringLiteral_DesktopPlayModeGUI);
    func_?(&StringLiteral_DesktopEditModeGUI);
    cRam_? = '\x01';
  }
  this = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
         func_?(
                        TypeInfo__System__Collections__Generic__Dictionary<ScenesForMode,_System::String_[]>
                        );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (this,
             MethodInfo__System__Collections__Generic__Dictionary<ScenesForMode,_System::String_[]>__Dictionary__
            );
  pOVar1 = (Object *)func_?(TypeInfo__System__String,1);
  pSVar2 = StringLiteral_DesktopPlayModeGUI;
  if (pOVar1 != (Object *)0x0) {
    if (pOVar1[1].monitor == (MonitorData *)0x0) goto code_?;
    pOVar1[2].klass = (Object__Class *)StringLiteral_DesktopPlayModeGUI;
    func_?(pOVar1 + 2,pSVar2);
    if (this != (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
      Dictionary_2_System_Int32Enum_System_Object__Add
                ((Dictionary_2_System_Int32Enum_System_Object_ *)this,0,pOVar1,
                 MethodInfo__System__Collections__Generic__Dictionary<ScenesForMode,_System::String_[]>__Add_ScenesForMode__System__String____
                );
      pOVar1 = (Object *)func_?(TypeInfo__System__String,1);
      pSVar2 = StringLiteral_DesktopPlayModeGUI;
      if (pOVar1 != (Object *)0x0) {
        if (pOVar1[1].monitor == (MonitorData *)0x0) goto code_?;
        pOVar1[2].klass = (Object__Class *)StringLiteral_DesktopPlayModeGUI;
        func_?(pOVar1 + 2,pSVar2);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
        Dictionary_2_System_Int32Enum_System_Object__Add
                  ((Dictionary_2_System_Int32Enum_System_Object_ *)this,2,pOVar1,
                   MethodInfo__System__Collections__Generic__Dictionary<ScenesForMode,_System::String_[]>__Add_ScenesForMode__System__String____
                  );
        pOVar1 = (Object *)func_?(TypeInfo__System__String,2);
        pSVar2 = StringLiteral_DesktopEditModeGUI;
        if (pOVar1 != (Object *)0x0) {
          if (pOVar1[1].monitor == (MonitorData *)0x0) goto code_?;
          pOVar1[2].klass = (Object__Class *)StringLiteral_DesktopEditModeGUI;
          func_?(pOVar1 + 2,pSVar2);
          pSVar2 = StringLiteral_DesktopPlayModeGUI;
          if (pOVar1[1].monitor < (MonitorData *)0x2) goto code_?;
          pOVar1[2].monitor = (MonitorData *)StringLiteral_DesktopPlayModeGUI;
          func_?(&pOVar1[2].monitor,pSVar2);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]
          ::Dictionary_2_System_Int32Enum_System_Object__Add
                    ((Dictionary_2_System_Int32Enum_System_Object_ *)this,3,pOVar1,
                     MethodInfo__System__Collections__Generic__Dictionary<ScenesForMode,_System::String_[]>__Add_ScenesForMode__System__String____
                    );
          pOVar1 = (Object *)func_?(TypeInfo__System__String,1);
          pSVar2 = StringLiteral_DesktopAvatarEditModeGUI;
          if (pOVar1 != (Object *)0x0) {
            if (pOVar1[1].monitor != (MonitorData *)0x0) {
              pOVar1[2].klass = (Object__Class *)StringLiteral_DesktopAvatarEditModeGUI;
              func_?(pOVar1 + 2,pSVar2);
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
              Object]::Dictionary_2_System_Int32Enum_System_Object__Add
                        ((Dictionary_2_System_Int32Enum_System_Object_ *)this,4,pOVar1,
                         MethodInfo__System__Collections__Generic__Dictionary<ScenesForMode,_System::String_[]>__Add_ScenesForMode__System__String____
                        );
              TypeInfo__LevelLoader->static_fields->scenesForModeMap =
                   (Dictionary_2_ScenesForMode_System_String_ *)this;
              func_?(TypeInfo__LevelLoader->static_fields,this);
              return;
            }
            goto code_?;
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* LevelLoader() */

void Assembly-CSharp.dll::LevelLoader::LevelLoader__ctor(LevelLoader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::AsyncOperation>__List__
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::AsyncOperation>);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_AsyncOperation_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<UnityEngine::AsyncOperation>
                           );
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<UnityEngine::AsyncOperation>__List__);
  (this->fields).pendingScenes = this_00;
  func_?(&(this->fields).pendingScenes,this_00);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

