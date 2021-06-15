
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = this;
  this = (GUIPromotionalLoginHandler *)0x0;
  pDVar1 = (this_00->fields).gameSessionData;
  pTVar2 = (Theme *)func_?(TypeInfo__System__Int32,&this);
  if (pDVar1 != (Dictionary_2_System_String_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
    Dictionary_2_System_String_Theme__set_Item
              ((Dictionary_2_System_String_Theme_ *)pDVar1,StringLiteral_profileID,pTVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
              );
    pDVar1 = (this_00->fields).gameSessionData;
    iStack_3 = planetID;
    pTVar2 = (Theme *)func_?(TypeInfo__System__Int32,&iStack_3);
    if (pDVar1 != (Dictionary_2_System_String_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
      Dictionary_2_System_String_Theme__set_Item
                ((Dictionary_2_System_String_Theme_ *)pDVar1,StringLiteral_planetID,pTVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
                );
      pDVar1 = (this_00->fields).gameSessionData;
      if (pDVar1 != (Dictionary_2_System_String_System_Object_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
        Dictionary_2_System_String_Theme__set_Item
                  ((Dictionary_2_System_String_Theme_ *)pDVar1,StringLiteral_token,
                   (Theme *)StringLiteral__0,
                   MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
                  );
        pDVar1 = (this_00->fields).gameSessionData;
        if (pDVar1 != (Dictionary_2_System_String_System_Object_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
          Dictionary_2_System_String_Theme__set_Item
                    ((Dictionary_2_System_String_Theme_ *)pDVar1,StringLiteral_serverIP,
                     (Theme *)StringLiteral__95_211_162_200_5055,
                     MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
                    );
          pDVar1 = (this_00->fields).gameSessionData;
          uStack_4 = 1;
          pTVar2 = (Theme *)func_?(TypeInfo__MV__Common__MVGameMode,&uStack_4);
          if (pDVar1 != (Dictionary_2_System_String_System_Object_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
            Dictionary_2_System_String_Theme__set_Item
                      ((Dictionary_2_System_String_Theme_ *)pDVar1,StringLiteral_gameMode,pTVar2,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
                      );
            pDVar1 = (this_00->fields).gameSessionData;
            if (pDVar1 != (Dictionary_2_System_String_System_Object_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
              Dictionary_2_System_String_Theme__set_Item
                        ((Dictionary_2_System_String_Theme_ *)pDVar1,StringLiteral_language,
                         (Theme *)StringLiteral_en_US,
                         MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
                        );
              pDVar1 = (this_00->fields).gameSessionData;
              this_01 = (GameSessionData *)func_?(TypeInfo__GameSessionData);
              GameSessionData::GameSessionData__ctor_1(this_01,pDVar1,(MethodInfo *)0x0);
              if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                func_?(TypeInfo__MVGameControllerBase);
              }
              MVGameControllerBase::MVGameControllerBase_SetGameSessionData
                        (this_01,(MethodInfo *)0x0);
              this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                        Component_1_get_gameObject((Component_1 *)this_00,(MethodInfo *)0x0);
              if (this_02 != (GameObject *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (this_02,0,(MethodInfo *)0x0);
                if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) !=
                     0) && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
                  func_?(TypeInfo__UnityEngine__Debug);
                }
                UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                          ((Object *)this_01,(MethodInfo *)0x0);
                if ((((uint)(TypeInfo__UnityEngine__SceneManagement__SceneManager->vtable).Equals.
                            methodPtr & 0x2000000) != 0) &&
                   ((TypeInfo__UnityEngine__SceneManagement__SceneManager->_1).cctor_started == 0))
                {
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
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* GUIPromotionalLoginHandler() */

void Assembly-CSharp.dll::GUIPromotionalLoginHandler::GUIPromotionalLoginHandler__ctor
               (GUIPromotionalLoginHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_String_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Dictionary__
            );
  if (this_00 != (Dictionary_2_System_String_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)this_00,StringLiteral_newToken,
               (CrossPlatformInputManager_VirtualButton *)StringLiteral_clientDefinedNewToken_,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)this_00,StringLiteral_newPlanetName,
               (CrossPlatformInputManager_VirtualButton *)StringLiteral_game_server_test,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
              );
    pCVar1 = (CrossPlatformInputManager_VirtualButton *)
             func_?(TypeInfo__System__Boolean,&stack0xfffffffb);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)this_00,StringLiteral_isSoftLaunch,pCVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
              );
    pCVar1 = (CrossPlatformInputManager_VirtualButton *)
             func_?(TypeInfo__System__Boolean,&stack0xfffffffa);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)this_00,StringLiteral_embedded,pCVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
              );
    (this->fields).gameSessionData = this_00;
    UnityEngine.UIModule.dll::UnityEngine::Canvas::Canvas__ctor((Canvas *)this,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

