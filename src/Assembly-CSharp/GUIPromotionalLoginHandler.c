
/* Void Play() */

void Assembly-CSharp.dll::GUIPromotionalLoginHandler::GUIPromotionalLoginHandler_Play
               (GUIPromotionalLoginHandler *this,MethodInfo *method)

{
  GUIPromotionalLoginHandler_StartAutoJoinSession(this,0xbef7,(MethodInfo *)0x0);
  return;
}


/* Void Play2D() */

void Assembly-CSharp.dll::GUIPromotionalLoginHandler::GUIPromotionalLoginHandler_Play2D
               (GUIPromotionalLoginHandler *this,MethodInfo *method)

{
  GUIPromotionalLoginHandler_StartAutoJoinSession(this,0xbf24,(MethodInfo *)0x0);
  return;
}


/* Void StartAutoJoinSession(Int32) */

void Assembly-CSharp.dll::GUIPromotionalLoginHandler::
     GUIPromotionalLoginHandler_StartAutoJoinSession
               (GUIPromotionalLoginHandler *this,int32_t planetID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
                   );
    func_?(&TypeInfo__GameSessionData);
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__MV__Common__MVGameMode);
    func_?(&TypeInfo__UnityEngine__SceneManagement__SceneManager);
    func_?(&StringLiteral_BaseLegacyUI);
    func_?(&StringLiteral_token);
    func_?(&StringLiteral__212_32_240_13_5055);
    func_?(&StringLiteral_profileID);
    func_?(&StringLiteral_serverIP);
    func_?(&StringLiteral_language);
    func_?(&StringLiteral_planetID);
    func_?(&StringLiteral_gameMode);
    func_?(&StringLiteral_en_US);
    func_?(&StringLiteral__0);
    cRam_? = '\x01';
  }
  this_00 = this;
  pDVar1 = (this->fields).gameSessionData;
  this = (GUIPromotionalLoginHandler *)0x0;
  pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&this);
  if (pDVar1 != (Dictionary_2_System_String_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__set_Item
              ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)StringLiteral_profileID
               ,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
              );
    pDVar1 = (this_00->fields).gameSessionData;
    iStack_3 = planetID;
    pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&iStack_3);
    if (pDVar1 != (Dictionary_2_System_String_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__set_Item
                ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                 (Object *)StringLiteral_planetID,pOVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
                );
      pDVar1 = (this_00->fields).gameSessionData;
      if (pDVar1 != (Dictionary_2_System_String_System_Object_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__set_Item
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)StringLiteral_token
                   ,(Object *)StringLiteral__0,
                   MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
                  );
        pDVar1 = (this_00->fields).gameSessionData;
        if (pDVar1 != (Dictionary_2_System_String_System_Object_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__set_Item
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                     (Object *)StringLiteral_serverIP,(Object *)StringLiteral__212_32_240_13_5055,
                     MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
                    );
          pDVar1 = (this_00->fields).gameSessionData;
          uStack_4 = 1;
          pOVar2 = (Object *)func_?(TypeInfo__MV__Common__MVGameMode,&uStack_4);
          if (pDVar1 != (Dictionary_2_System_String_System_Object_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__set_Item
                      ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                       (Object *)StringLiteral_gameMode,pOVar2,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
                      );
            pDVar1 = (this_00->fields).gameSessionData;
            if (pDVar1 != (Dictionary_2_System_String_System_Object_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__set_Item
                        ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                         (Object *)StringLiteral_language,(Object *)StringLiteral_en_US,
                         MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
                        );
              pDVar1 = (this_00->fields).gameSessionData;
              this_01 = (GameSessionData *)func_?(TypeInfo__GameSessionData);
              if (this_01 != (GameSessionData *)0x0) {
                GameSessionData::GameSessionData__ctor_1(this_01,pDVar1,(MethodInfo *)0x0);
                MVGameControllerBase::MVGameControllerBase_SetGameSessionData
                          (this_01,(MethodInfo *)0x0);
                this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_gameObject((Component *)this_00,(MethodInfo *)0x0);
                if (this_02 != (GameObject *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (this_02,0,(MethodInfo *)0x0);
                  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                    func_?(TypeInfo__UnityEngine__Debug);
                  }
                  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                            ((Object *)this_01,(MethodInfo *)0x0);
                  if ((TypeInfo__UnityEngine__SceneManagement__SceneManager->_1).
                      cctor_finished_or_no_cctor == 0) {
                    this = (GUIPromotionalLoginHandler *)
                           TypeInfo__UnityEngine__SceneManagement__SceneManager;
                    func_?();
                  }
                  this = (GUIPromotionalLoginHandler *)0x0;
                  UnityEngine.CoreModule.dll::UnityEngine::SceneManagement::SceneManager::
                  SceneManager_LoadScene(StringLiteral_BaseLegacyUI,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* GUIPromotionalLoginHandler() */

void Assembly-CSharp.dll::GUIPromotionalLoginHandler::GUIPromotionalLoginHandler__ctor
               (GUIPromotionalLoginHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>
                   );
    func_?(&StringLiteral_game_server_test);
    func_?(&StringLiteral_embedded);
    func_?(&StringLiteral_newPlanetName);
    func_?(&StringLiteral_clientDefinedNewToken_);
    func_?(&StringLiteral_newToken);
    func_?(&StringLiteral_isSoftLaunch);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_String_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>
                           );
  if (this_00 != (Dictionary_2_System_String_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Dictionary__
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)StringLiteral_newToken
               ,(Object *)StringLiteral_clientDefinedNewToken_,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this_00,
               (Object *)StringLiteral_newPlanetName,(Object *)StringLiteral_game_server_test,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
              );
    uStack_1 = uStack_1 & 0xffffff;
    pOVar2 = (Object *)func_?(TypeInfo__System__Boolean,(int)&uStack_1 + 3);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this_00,
               (Object *)StringLiteral_isSoftLaunch,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
              );
    uStack_1._0_3_ = (uint3)(ushort)uStack_1;
    iStack3 = (int)&uStack_1 + 2;
    pBStack4 = TypeInfo__System__Boolean;
    pOVar2 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)StringLiteral_embedded
               ,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
              );
    (this->fields).gameSessionData = this_00;
    func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform__ctor
              ((Transform *)this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

