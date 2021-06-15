
/* Void Awake() */

void Assembly-CSharp.dll::GUILoginHandler::GUILoginHandler_Awake
               (GUILoginHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).playerPrefKey = StringLiteral_Dev_profileId_standalone;
  GUILoginHandler_SetValuesToPrefOrDefault(this,(MethodInfo *)0x0);
  devTarget = UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_GetInt
                        (StringLiteral_serverIndex,0,(MethodInfo *)0x0);
  GUILoginHandler_SetupServerDropdown(this,devTarget,(MethodInfo *)0x0);
  pIVar1 = (this->fields).serverIp;
  pSVar2 = GUILoginHandler_GetIPFromDevServerTarget(devTarget,(MethodInfo *)0x0);
  if (pIVar1 != (InputField *)0x0) {
    UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_set_text
              (pIVar1,pSVar2,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pDVar3 = (this->fields).gameSessionData;
    pIVar1 = (this->fields).profileIdTextField;
    if (pDVar3 != (Dictionary_2_System_String_System_Object_ *)0x0) {
      pPVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
               Dictionary_2_System_Type_Pool__get_Item
                         ((Dictionary_2_System_Type_Pool_ *)pDVar3,(Type *)StringLiteral_profileID,
                          MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__get_Item_System__String_
                         );
      if (pPVar4 != (Pool *)0x0) {
        if ((pPVar4->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
        goto code_?;
        func_?();
        pSVar2 = (String *)func_?();
        if (pIVar1 != (InputField *)0x0) {
          UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_set_text
                    (pIVar1,pSVar2,(MethodInfo *)0x0);
          pPVar5 = (PrefabPool *)(this->fields).profileIdTextField;
          if (pPVar5 != (PrefabPool *)0x0) {
            pMVar6 = PrefabPool::PrefabPool_get_MVTextMsgPrefab(pPVar5,(MethodInfo *)0x0);
            pUVar7 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                      *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar7,(Object *)this,
                       MethodInfo__GUILoginHandler___SetupProfileID_m__1_System__String_,
                       MethodInfo__UnityEngine__Events__UnityAction<System::String>__UnityAction_System__Object__void__
                      );
            if (pMVar6 != (MVTextMsgObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent`1[System::String]::
              UnityEvent_1_System_String__AddListener
                        ((UnityEvent_1_System_String_ *)pMVar6,
                         (UnityAction_1_System_String_ *)pUVar7,
                         MethodInfo__UnityEngine__Events__UnityEvent<System::String>__AddListener_UnityEngine__Events__UnityAction<System::String>_
                        );
              if (cRam_? == '\0') {
                func_?();
                cRam_? = '\x01';
              }
              pDVar3 = (this->fields).gameSessionData;
              pIVar1 = (this->fields).planetIdTextField;
              if (pDVar3 != (Dictionary_2_System_String_System_Object_ *)0x0) {
                pPVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]
                         ::Dictionary_2_System_Type_Pool__get_Item
                                   ((Dictionary_2_System_Type_Pool_ *)pDVar3,
                                    (Type *)StringLiteral_planetID,
                                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__get_Item_System__String_
                                   );
                if (pPVar4 != (Pool *)0x0) {
                  if ((pPVar4->klass->_0).element_class !=
                      (TypeInfo__System__Int32->_0).element_class) goto code_?;
                  func_?();
                  pSVar2 = (String *)func_?();
                  if (pIVar1 != (InputField *)0x0) {
                    UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_set_text
                              (pIVar1,pSVar2,(MethodInfo *)0x0);
                    pPVar5 = (PrefabPool *)(this->fields).planetIdTextField;
                    if (pPVar5 != (PrefabPool *)0x0) {
                      pMVar6 = PrefabPool::PrefabPool_get_MVTextMsgPrefab(pPVar5,(MethodInfo *)0x0);
                      pUVar7 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                *)func_?();
                      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                      SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                (pUVar7,(Object *)this,
                                 MethodInfo__GUILoginHandler___SetupPlanetID_m__0_System__String_,
                                 MethodInfo__UnityEngine__Events__UnityAction<System::String>__UnityAction_System__Object__void__
                                );
                      if (pMVar6 != (MVTextMsgObject *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent`1[System::
                        String]::UnityEvent_1_System_String__AddListener
                                  ((UnityEvent_1_System_String_ *)pMVar6,
                                   (UnityAction_1_System_String_ *)pUVar7,
                                   MethodInfo__UnityEngine__Events__UnityEvent<System::String>__AddListener_UnityEngine__Events__UnityAction<System::String>_
                                  );
                        this_00 = (this->fields).disableCacheToggle;
                        iVar8 = UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::
                                PlayerPrefs_GetInt_1(StringLiteral_cachingEnabled,(MethodInfo *)0x0)
                        ;
                        if (this_00 != (Toggle *)0x0) {
                          UnityEngine.UI.dll::UnityEngine::UI::Toggle::Toggle_Set
                                    (this_00,iVar8 < 1,(MethodInfo *)0x0);
                          return;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void Caching() */

void Assembly-CSharp.dll::GUILoginHandler::GUILoginHandler_Caching
               (GUILoginHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).disableCacheToggle;
  if (this_00 != (Toggle *)0x0) {
    bVar1 = UnityEngine.UI.dll::UnityEngine::UI::Toggle::Toggle_get_isOn(this_00,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_SetInt
                (StringLiteral_cachingEnabled,1,(MethodInfo *)0x0);
      return;
    }
    UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_SetInt
              (StringLiteral_cachingEnabled,0,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ComboboxChanged(Int32) */

void Assembly-CSharp.dll::GUILoginHandler::GUILoginHandler_ComboboxChanged
               (GUILoginHandler *this,int32_t index,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  value = (Theme *)GUILoginHandler_GetIPFromDevServerTarget(index,(MethodInfo *)0x0);
  this_00 = (this->fields).serverIp;
  if (this_00 != (InputField *)0x0) {
    UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_set_text
              (this_00,(String *)value,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_SetInt
              (StringLiteral_serverIndex,index,(MethodInfo *)0x0);
    this_01 = (this->fields).gameSessionData;
    if (this_01 != (Dictionary_2_System_String_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
      Dictionary_2_System_String_Theme__set_Item
                ((Dictionary_2_System_String_Theme_ *)this_01,StringLiteral_serverIP,value,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
                );
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      message = mscorlib.dll::System::String::String_Concat_2
                          (StringLiteral_ServerIP_,(String *)value,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)message,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Embedded(Boolean) */

void Assembly-CSharp.dll::GUILoginHandler::GUILoginHandler_Embedded
               (GUILoginHandler *this,bool isEmbedded,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).gameSessionData;
  bStack1 = isEmbedded;
  value = (Theme *)func_?(TypeInfo__System__Boolean,&stack0x0000000b);
  if (this_00 != (Dictionary_2_System_String_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
    Dictionary_2_System_String_Theme__set_Item
              ((Dictionary_2_System_String_Theme_ *)this_00,StringLiteral_embedded,value,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
              );
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void EnterCharacterEditOnClick() */

void Assembly-CSharp.dll::GUILoginHandler::GUILoginHandler_EnterCharacterEditOnClick
               (GUILoginHandler *this,MethodInfo *method)

{
  GUILoginHandler_StartGame(this,MVGameMode__Enum_CharacterEditor,(MethodInfo *)0x0);
  return;
}


/* Void EnterEditOnClick() */

void Assembly-CSharp.dll::GUILoginHandler::GUILoginHandler_EnterEditOnClick
               (GUILoginHandler *this,MethodInfo *method)

{
  GUILoginHandler_StartGame(this,MVGameMode__Enum_Edit,(MethodInfo *)0x0);
  return;
}


/* Void EnterPlayOnClick() */

void Assembly-CSharp.dll::GUILoginHandler::GUILoginHandler_EnterPlayOnClick
               (GUILoginHandler *this,MethodInfo *method)

{
  GUILoginHandler_StartGame(this,MVGameMode__Enum_Play,(MethodInfo *)0x0);
  return;
}


/* String GetIPFromDevServerTarget(GUILoginHandler+DevServerTarget) */

String * Assembly-CSharp.dll::GUILoginHandler::GUILoginHandler_GetIPFromDevServerTarget
                   (GUILoginHandler_DevServerTarget__Enum devTarget,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (devTarget == GUILoginHandler_DevServerTarget__Enum_Dev) {
    return StringLiteral__95_211_162_200_5055;
  }
  if (devTarget == GUILoginHandler_DevServerTarget__Enum_Test) {
    return StringLiteral__62_212_95_185_5055;
  }
  if (devTarget != GUILoginHandler_DevServerTarget__Enum_Local) {
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    return TypeInfo__System__String->static_fields->Empty;
  }
  return StringLiteral__127_0_0_1_5055;
}


/* String GetPrefOrDefault(String, String) */

String * Assembly-CSharp.dll::GUILoginHandler::GUILoginHandler_GetPrefOrDefault
                   (GUILoginHandler *this,String *prefName,String *target,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  a = UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_GetString
                (prefName,TypeInfo__System__String->static_fields->Empty,(MethodInfo *)0x0);
  bVar1 = mscorlib.dll::System::String::String_op_Inequality
                    (a,TypeInfo__System__String->static_fields->Empty,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    a = target;
  }
  return a;
}


/* Void OnPlanetDropdownChanged() */

void Assembly-CSharp.dll::GUILoginHandler::GUILoginHandler_OnPlanetDropdownChanged
               (GUILoginHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).planetDropdown;
  if (this_00 != (Dropdown *)0x0) {
    this_03 = UnityEngine.UI.dll::UnityEngine::UI::Dropdown::Dropdown_get_options
                        (this_00,(MethodInfo *)0x0);
    this_01 = (PrefabPool *)(this->fields).planetDropdown;
    if ((this_01 != (PrefabPool *)0x0) &&
       (index = PrefabPool::PrefabPool_get_MVSmokePrefab(this_01,(MethodInfo *)0x0),
       this_03 != (List_1_UnityEngine_UI_Dropdown_OptionData_ *)0x0)) {
      this_04 = (Collection_1_VoxelHit_ *)
                mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                          ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_03,
                           (int32_t)index,
                           MethodInfo__System__Collections__Generic__List<UnityEngine::UI::Dropdown::OptionData>__get_Item_int_
                          );
      pDVar1 = (this->fields).defaultPlanetData;
      if ((this_04 != (Collection_1_VoxelHit_ *)0x0) &&
         (pIVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                   Collection_1_VoxelHit__get_Items(this_04,(MethodInfo *)0x0),
         pDVar1 != (Dictionary_2_System_String_GUILoginHandler_PlanetData_ *)0x0)) {
        bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                Object,GUILoginHandler+PlanetData]::
                Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                          ((Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)pDVar1,
                           (Object *)pIVar2,
                           MethodInfo__System__Collections__Generic__Dictionary<System::String,_GUILoginHandler::PlanetData>__ContainsKey_System__String_
                          );
        if (bVar3 == 0) {
          return;
        }
        pDVar1 = (this->fields).defaultPlanetData;
        pIVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                 Collection_1_VoxelHit__get_Items(this_04,(MethodInfo *)0x0);
        if (pDVar1 != (Dictionary_2_System_String_GUILoginHandler_PlanetData_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
          Object,GUILoginHandler+PlanetData]::
          Dictionary_2_System_Object_GUILoginHandler_PlanetData__get_Item
                    ((Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)pDVar1,
                     (Object *)pIVar2,
                     MethodInfo__System__Collections__Generic__Dictionary<System::String,_GUILoginHandler::PlanetData>__get_Item_System__String_
                    );
          pSVar4 = (String *)func_?();
          UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_set_text
                    ((InputField *)&UNK_?,pSVar4,(MethodInfo *)0x0);
          this_02 = (this->fields).profileIdTextField;
          pDVar1 = (this->fields).defaultPlanetData;
          pIVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                   Collection_1_VoxelHit__get_Items(this_04,(MethodInfo *)0x0);
          if (pDVar1 != (Dictionary_2_System_String_GUILoginHandler_PlanetData_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__get_Item
                      ((Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)pDVar1,
                       (Object *)pIVar2,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_GUILoginHandler::PlanetData>__get_Item_System__String_
                      );
            pSVar4 = (String *)func_?();
            if (this_02 != (InputField *)0x0) {
              UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_set_text
                        (this_02,pSVar4,(MethodInfo *)0x0);
              return;
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


/* Void OnProfileDropdownChanged() */

void Assembly-CSharp.dll::GUILoginHandler::GUILoginHandler_OnProfileDropdownChanged
               (GUILoginHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).profileDropdown;
  if (this_00 != (Dropdown *)0x0) {
    this_03 = UnityEngine.UI.dll::UnityEngine::UI::Dropdown::Dropdown_get_options
                        (this_00,(MethodInfo *)0x0);
    this_01 = (PrefabPool *)(this->fields).profileDropdown;
    if (this_01 != (PrefabPool *)0x0) {
      index = PrefabPool::PrefabPool_get_MVSmokePrefab(this_01,(MethodInfo *)0x0);
      if (this_03 != (List_1_UnityEngine_UI_Dropdown_OptionData_ *)0x0) {
        this_04 = (Collection_1_VoxelHit_ *)
                  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                  IEventSystemHandler]::
                  List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                            ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_03,
                             (int32_t)index,
                             MethodInfo__System__Collections__Generic__List<UnityEngine::UI::Dropdown::OptionData>__get_Item_int_
                            );
        if (this_04 != (Collection_1_VoxelHit_ *)0x0) {
          pSVar1 = (String *)
                   mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                   Collection_1_VoxelHit__get_Items(this_04,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__String->_1).cctor_started == 0)) {
            func_?();
          }
          replacement = TypeInfo__System__String->static_fields->Empty;
          if ((((uint)(TypeInfo__System__Text__RegularExpressions__Regex->vtable).Equals.methodPtr &
               0x2000000) != 0) &&
             ((TypeInfo__System__Text__RegularExpressions__Regex->_1).cctor_started == 0)) {
            func_?();
          }
          pSVar1 = System.dll::System::Text::RegularExpressions::Regex::Regex_Replace
                             (pSVar1,StringLiteral___0_9__,replacement,(MethodInfo *)0x0);
          this_02 = (this->fields).profileIdTextField;
          if (this_02 != (InputField *)0x0) {
            UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_set_text
                      (this_02,pSVar1,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetValuesToPrefOrDefault() */

void Assembly-CSharp.dll::GUILoginHandler::GUILoginHandler_SetValuesToPrefOrDefault
               (GUILoginHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).gameSessionData;
  pSVar2 = GUILoginHandler_GetPrefOrDefault
                     (this,(this->fields).playerPrefKey,StringLiteral__1,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
    func_?();
  }
  mscorlib.dll::System::Convert::Convert_ToInt32_10(pSVar2,(MethodInfo *)0x0);
  pTVar3 = (Theme *)func_?(TypeInfo__System__Int32);
  if (pDVar1 != (Dictionary_2_System_String_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
    Dictionary_2_System_String_Theme__set_Item
              ((Dictionary_2_System_String_Theme_ *)pDVar1,StringLiteral_profileID,pTVar3,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
              );
    pDVar1 = (this->fields).gameSessionData;
    pTVar3 = (Theme *)GUILoginHandler_GetPrefOrDefault
                                (this,(this->fields).playerPrefKey,StringLiteral__1,
                                 (MethodInfo *)0x0);
    if (pDVar1 != (Dictionary_2_System_String_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
      Dictionary_2_System_String_Theme__set_Item
                ((Dictionary_2_System_String_Theme_ *)pDVar1,StringLiteral_token,pTVar3,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
                );
      pDVar1 = (this->fields).gameSessionData;
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      pTVar3 = (Theme *)GUILoginHandler_GetPrefOrDefault
                                  (this,StringLiteral_Dev_serverip,
                                   TypeInfo__System__String->static_fields->Empty,(MethodInfo *)0x0)
      ;
      if (pDVar1 != (Dictionary_2_System_String_System_Object_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
        Dictionary_2_System_String_Theme__set_Item
                  ((Dictionary_2_System_String_Theme_ *)pDVar1,StringLiteral_serverIP,pTVar3,
                   MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
                  );
        pDVar1 = (this->fields).gameSessionData;
        pSVar2 = GUILoginHandler_GetPrefOrDefault
                           (this,StringLiteral_Dev_planetId,StringLiteral__1,(MethodInfo *)0x0);
        mscorlib.dll::System::Convert::Convert_ToInt32_10(pSVar2,(MethodInfo *)0x0);
        pTVar3 = (Theme *)func_?();
        if (pDVar1 != (Dictionary_2_System_String_System_Object_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
          Dictionary_2_System_String_Theme__set_Item
                    ((Dictionary_2_System_String_Theme_ *)pDVar1,StringLiteral_planetID,pTVar3,
                     MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
                    );
          return;
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetupPlanetID() */

void Assembly-CSharp.dll::GUILoginHandler::GUILoginHandler_SetupPlanetID
               (GUILoginHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  this_00 = (this->fields).gameSessionData;
  this_01 = (this->fields).planetIdTextField;
  if (this_00 != (Dictionary_2_System_String_System_Object_ *)0x0) {
    pPVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)this_00,(Type *)StringLiteral_planetID,
                        MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__get_Item_System__String_
                       );
    uVar3 = CONCAT44(TypeInfo__System__Int32,pPVar2);
    if (pPVar2 != (Pool *)0x0) {
      if ((pPVar2->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      puVar4 = (undefined4 *)func_?(pPVar2);
      uStack_1 = *puVar4;
      value = (String *)func_?(&uStack_1,0);
      if (this_01 != (InputField *)0x0) {
        UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_set_text
                  (this_01,value,(MethodInfo *)0x0);
        this_02 = (PrefabPool *)(this->fields).planetIdTextField;
        if (this_02 != (PrefabPool *)0x0) {
          this_03 = PrefabPool::PrefabPool_get_MVTextMsgPrefab(this_02,(MethodInfo *)0x0);
          this_04 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                     *)func_?(TypeInfo__UnityEngine__Events__UnityAction<System::String>);
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (this_04,(Object *)this,
                     MethodInfo__GUILoginHandler___SetupPlanetID_m__0_System__String_,
                     MethodInfo__UnityEngine__Events__UnityAction<System::String>__UnityAction_System__Object__void__
                    );
          if (this_03 != (MVTextMsgObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent`1[System::String]::
            UnityEvent_1_System_String__AddListener
                      ((UnityEvent_1_System_String_ *)this_03,
                       (UnityAction_1_System_String_ *)this_04,
                       MethodInfo__UnityEngine__Events__UnityEvent<System::String>__AddListener_UnityEngine__Events__UnityAction<System::String>_
                      );
            return;
          }
        }
      }
    }
  }
  uVar3 = func_?(0);
code_?:
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetupProfileID() */

void Assembly-CSharp.dll::GUILoginHandler::GUILoginHandler_SetupProfileID
               (GUILoginHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  this_00 = (this->fields).gameSessionData;
  this_01 = (this->fields).profileIdTextField;
  if (this_00 != (Dictionary_2_System_String_System_Object_ *)0x0) {
    pPVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)this_00,(Type *)StringLiteral_profileID,
                        MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__get_Item_System__String_
                       );
    uVar3 = CONCAT44(TypeInfo__System__Int32,pPVar2);
    if (pPVar2 != (Pool *)0x0) {
      if ((pPVar2->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      puVar4 = (undefined4 *)func_?(pPVar2);
      uStack_1 = *puVar4;
      value = (String *)func_?(&uStack_1,0);
      if (this_01 != (InputField *)0x0) {
        UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_set_text
                  (this_01,value,(MethodInfo *)0x0);
        this_02 = (PrefabPool *)(this->fields).profileIdTextField;
        if (this_02 != (PrefabPool *)0x0) {
          this_03 = PrefabPool::PrefabPool_get_MVTextMsgPrefab(this_02,(MethodInfo *)0x0);
          this_04 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                     *)func_?(TypeInfo__UnityEngine__Events__UnityAction<System::String>);
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (this_04,(Object *)this,
                     MethodInfo__GUILoginHandler___SetupProfileID_m__1_System__String_,
                     MethodInfo__UnityEngine__Events__UnityAction<System::String>__UnityAction_System__Object__void__
                    );
          if (this_03 != (MVTextMsgObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent`1[System::String]::
            UnityEvent_1_System_String__AddListener
                      ((UnityEvent_1_System_String_ *)this_03,
                       (UnityAction_1_System_String_ *)this_04,
                       MethodInfo__UnityEngine__Events__UnityEvent<System::String>__AddListener_UnityEngine__Events__UnityAction<System::String>_
                      );
            return;
          }
        }
      }
    }
  }
  uVar3 = func_?(0);
code_?:
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetupServerDropdown(Int32) */

void Assembly-CSharp.dll::GUILoginHandler::GUILoginHandler_SetupServerDropdown
               (GUILoginHandler *this,int32_t savedChoice,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = TypeRef__GUILoginHandler__DevServerTarget;
  if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Type->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Type);
  }
  pTVar2 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                     ((RuntimeTypeHandle)pIVar1,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__System__Enum->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Enum->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Enum);
  }
  pSVar3 = mscorlib.dll::System::Enum::Enum_GetNames(pTVar2,(MethodInfo *)0x0);
  pcVar4 = (char *)0x0;
  if (pSVar3 != (String__Array *)0x0) {
    ppSVar5 = pSVar3->vector;
    for (; (int)pcVar4 < (int)pSVar3->max_length; pcVar4 = pcVar4 + 1) {
      if ((char *)pSVar3->max_length <= pcVar4) goto code_?;
      pSVar3 = (String__Array *)*ppSVar5;
      pDVar6 = (this->fields).serverDropdown;
      if (pDVar6 == (Dropdown *)0x0) goto code_?;
      this_03 = UnityEngine.UI.dll::UnityEngine::UI::Dropdown::Dropdown_get_options
                          (pDVar6,(MethodInfo *)0x0);
      this_04 = (TextCommand_Command *)
                func_?(TypeInfo__UnityEngine__UI__Dropdown__OptionData);
      TextCommand+Command::TextCommand_Command__ctor(this_04,pSVar3,(MethodInfo *)0x0);
      if (this_03 == (List_1_UnityEngine_UI_Dropdown_OptionData_ *)0x0) goto code_?;
      pSVar3 = (String__Array *)
               MethodInfo__System__Collections__Generic__List<UnityEngine::UI::Dropdown::OptionData>__Add_UnityEngine__UI__Dropdown__OptionData_
      ;
      mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                ((List_1_UIPushOption_ *)this_03,(UIPushOption__Enum)this_04,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::UI::Dropdown::OptionData>__Add_UnityEngine__UI__Dropdown__OptionData_
                );
      ppSVar5 = ppSVar5 + 1;
    }
    pDVar6 = (this->fields).serverDropdown;
    if (pDVar6 != (Dropdown *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::Dropdown::Dropdown_set_value
                (pDVar6,savedChoice,(MethodInfo *)0x0);
      pIVar1 = TypeRef__GUILoginHandler__DevServerTarget;
      if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Type->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__Type);
      }
      pTVar2 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                         ((RuntimeTypeHandle)pIVar1,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__System__Enum->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Enum->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__Enum);
      }
      pSVar3 = mscorlib.dll::System::Enum::Enum_GetNames(pTVar2,(MethodInfo *)0x0);
      if (pSVar3 != (String__Array *)0x0) {
        if (pSVar3->max_length <= (uint)savedChoice) goto code_?;
        pSVar7 = pSVar3->vector[savedChoice];
        this_00 = (PrefabPool *)(this->fields).serverDropdown;
        if ((this_00 != (PrefabPool *)0x0) &&
           (pOVar8 = PrefabPool::PrefabPool_get_MVPulseBoxPrefab(this_00,(MethodInfo *)0x0),
           pOVar8 != (ObjectPrefab *)0x0)) {
          (*(code *)pOVar8->klass[3].static_fields)(pOVar8,pSVar7,pOVar8->klass[3].rgctx_data);
          if (cRam_? == '\0') {
            func_?(_UNK_?);
            cRam_? = '\x01';
          }
          if (cRam_? == '\0') {
            func_?(_UNK_?);
            cRam_? = '\x01';
          }
          value = (Theme *)StringLiteral__95_211_162_200_5055;
          if (((savedChoice != 0) &&
              (value = (Theme *)StringLiteral__62_212_95_185_5055, savedChoice != 1)) &&
             (value = (Theme *)StringLiteral__127_0_0_1_5055, savedChoice != 2)) {
            if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__String->_1).cctor_started == 0)) {
              func_?(TypeInfo__System__String);
            }
            value = (Theme *)TypeInfo__System__String->static_fields->Empty;
          }
          this_01 = (this->fields).serverIp;
          if (this_01 != (InputField *)0x0) {
            UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_set_text
                      (this_01,(String *)value,(MethodInfo *)0x0);
            UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_SetInt
                      (StringLiteral_serverIndex,savedChoice,(MethodInfo *)0x0);
            this_02 = (this->fields).gameSessionData;
            if (this_02 != (Dictionary_2_System_String_System_Object_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
              Dictionary_2_System_String_Theme__set_Item
                        ((Dictionary_2_System_String_Theme_ *)this_02,StringLiteral_serverIP,value,
                         MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
                        );
              if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__System__String->_1).cctor_started == 0)) {
                func_?();
              }
              pSVar7 = mscorlib.dll::System::String::String_Concat_2
                                 (StringLiteral_ServerIP_,(String *)value,(MethodInfo *)0x0);
              if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0)
                 && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
                func_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                        ((Object *)pSVar7,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?(0);
code_?:
  uVar9 = func_?(0,0);
  func_?(uVar9);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void StartGame(MVGameMode) */

void Assembly-CSharp.dll::GUILoginHandler::GUILoginHandler_StartGame
               (GUILoginHandler *this,MVGameMode__Enum gameMode,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff94;
  puVar5 = &stack0xffffff94;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  iStack_6 = 0;
  func_?();
  MStack_7 = gameMode;
  pDVar8 = (this->fields).gameSessionData;
  puStack_4 = &stack0xffffff94;
  method_00 = (MethodInfo *)func_?(TypeInfo__MV__Common__MVGameMode,&MStack_7);
  if (pDVar8 != (Dictionary_2_System_String_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
    Dictionary_2_System_String_Theme__set_Item
              ((Dictionary_2_System_String_Theme_ *)pDVar8,StringLiteral_gameMode,(Theme *)method_00
               ,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
              );
    pDVar8 = (this->fields).gameSessionData;
    if (pDVar8 != (Dictionary_2_System_String_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
      Dictionary_2_System_String_Theme__set_Item
                ((Dictionary_2_System_String_Theme_ *)pDVar8,StringLiteral_language,
                 (Theme *)StringLiteral_en_US,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
                );
      pDVar8 = (this->fields).gameSessionData;
      if (pDVar8 != (Dictionary_2_System_String_System_Object_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
        Dictionary_2_System_String_Theme__set_Item
                  ((Dictionary_2_System_String_Theme_ *)pDVar8,StringLiteral_referrer,
                   (Theme *)StringLiteral_gsm,
                   MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
                  );
        pDVar8 = (this->fields).gameSessionData;
        this_02 = (GameSessionData *)func_?();
        method_01 = (Dictionary_2_WinningConditionType_System_Object_ *)&UNK_?;
        GameSessionData::GameSessionData__ctor_1(this_02,pDVar8,(MethodInfo *)0x0);
        this_03 = (StringBuilder *)func_?();
        mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor_3
                  (this_03,0x100,(MethodInfo *)0x0);
        if (this_03 != (StringBuilder *)0x0) {
          mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append
                    (this_03,StringLiteral_GameSessionData_u000A,(MethodInfo *)0x0);
          pDVar8 = (this->fields).gameSessionData;
          if (pDVar8 != (Dictionary_2_System_String_System_Object_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
            Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                      ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_ *)
                       &stack0xffffffa0,(Dictionary_2_WinningConditionType_System_Object_ *)pDVar8,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__GetEnumerator__
                      );
            uStack_1 = 0;
            while (cVar9 = func_?(), cVar9 != '\0') {
              LevelRewardsManager::LevelRewardsManager_get_NextReward
                        ((LevelRewardsManager *)&stack0xffffffb4,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_System::Object>__get_Current__
                        );
              arg0 = (Object *)func_?();
              arg1 = (Object *)func_?();
              method_01 = (Dictionary_2_WinningConditionType_System_Object_ *)&UNK_?;
              mscorlib.dll::System::Text::StringBuilder::StringBuilder_AppendFormat_3
                        (this_03,StringLiteral__0_____1_u000A,arg0,arg1,(MethodInfo *)0x0);
            }
            uStack_1 = 0xffffffff;
            func_?();
            iVar10 = iStack_6;
            if (iStack_6 != 0) goto code_?;
            if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
              func_?(TypeInfo__UnityEngine__Debug);
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                      ((Object *)this_03,(MethodInfo *)0x0);
            if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
              func_?(TypeInfo__MVGameControllerBase);
            }
            MVGameControllerBase::MVGameControllerBase_SetGameSessionData(this_02,(MethodInfo *)0x0)
            ;
            this_04 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                                ((Component_1 *)this,(MethodInfo *)0x0);
            if (this_04 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (this_04,0,method_00);
              if ((((uint)(TypeInfo__UnityEngine__SceneManagement__SceneManager->vtable).Equals.
                          methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__UnityEngine__SceneManagement__SceneManager->_1).cctor_started == 0)) {
                func_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::SceneManagement::SceneManager::
              SceneManager_LoadScene(StringLiteral_DesktopBase,(MethodInfo *)0x0);
              this_00 = (this->fields).disableCacheToggle;
              if (this_00 != (Toggle *)0x0) {
                bVar11 = UnityEngine.UI.dll::UnityEngine::UI::Toggle::Toggle_get_isOn
                                  (this_00,(MethodInfo *)method_01);
                if (bVar11 == 0) {
code_?:
                  *unaff_FS_OFFSET = uStack_3;
                  return;
                }
                if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) !=
                     0) && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
                  func_?();
                }
                UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                          ((Object *)StringLiteral_Cache_disabled_,(MethodInfo *)0x0);
                this_01 = (this->fields).kogamaSettings;
                if (this_01 != (KoGaMaSettingsContainer *)0x0) {
                  KoGaMaSettingsContainer::KoGaMaSettingsContainer_InvalidateStreamingAssetsCache
                            (this_01,1,(MethodInfo *)0x0);
                  goto code_?;
                }
              }
            }
          }
        }
      }
    }
  }
  iVar10 = func_?();
code_?:
  func_?(iVar10,0,0);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void UIDropdownChanged(Int32) */

void Assembly-CSharp.dll::GUILoginHandler::GUILoginHandler_UIDropdownChanged
               (GUILoginHandler *this,int32_t index,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_SetInt
            (StringLiteral_uiIndex,index,(MethodInfo *)0x0);
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::GUILoginHandler::GUILoginHandler_Update
               (GUILoginHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  uStack_2 = 0;
  pDVar3 = (this->fields).gameSessionData;
  pSVar4 = (this->fields).playerPrefKey;
  pSVar5 = (this->fields)._profileId;
  if (pDVar3 == (Dictionary_2_System_String_System_Object_ *)0x0) {
code_?:
    uVar6 = func_?(0);
  }
  else {
    pPVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)pDVar3,(Type *)StringLiteral_profileID,
                        MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__get_Item_System__String_
                       );
    uVar6 = CONCAT44(TypeInfo__System__Int32,pPVar7);
    if (pPVar7 == (Pool *)0x0) goto code_?;
    if ((pPVar7->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
      puVar8 = (undefined4 *)func_?(pPVar7);
      uStack_1 = *puVar8;
      target = (String *)func_?(&uStack_1,0);
      pSVar5 = GUILoginHandler_UpdateIfChanged(this,pSVar4,pSVar5,target,(MethodInfo *)0x0);
      pSVar4 = (this->fields)._serverip;
      (this->fields)._profileId = pSVar5;
      pDVar3 = (this->fields).gameSessionData;
      if (pDVar3 != (Dictionary_2_System_String_System_Object_ *)0x0) {
        pPVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                 Dictionary_2_System_Type_Pool__get_Item
                           ((Dictionary_2_System_Type_Pool_ *)pDVar3,(Type *)StringLiteral_serverIP,
                            MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__get_Item_System__String_
                           );
        pPVar7 = (Pool *)0x0;
        if (pPVar9 != (Pool *)0x0) {
          if ((String__Class *)pPVar9->klass == TypeInfo__System__String) {
            pPVar7 = pPVar9;
          }
          pSVar10 = TypeInfo__System__String;
          if (pPVar7 == (Pool *)0x0) goto code_?;
        }
        pSVar5 = GUILoginHandler_UpdateIfChanged
                           (this,StringLiteral_Dev_serverip,pSVar4,(String *)pPVar7,
                            (MethodInfo *)0x0);
        pSVar4 = (this->fields)._planetId;
        (this->fields)._serverip = pSVar5;
        pDVar3 = (this->fields).gameSessionData;
        if (pDVar3 != (Dictionary_2_System_String_System_Object_ *)0x0) {
          pPVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                   Dictionary_2_System_Type_Pool__get_Item
                             ((Dictionary_2_System_Type_Pool_ *)pDVar3,
                              (Type *)StringLiteral_planetID,
                              MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__get_Item_System__String_
                             );
          uVar6 = CONCAT44(TypeInfo__System__Int32,pPVar7);
          if (pPVar7 != (Pool *)0x0) {
            if ((pPVar7->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
              puVar8 = (undefined4 *)func_?(pPVar7);
              uStack_2 = *puVar8;
              pSVar5 = (String *)func_?(&uStack_2,0);
              pSVar4 = GUILoginHandler_UpdateIfChanged
                                 (this,StringLiteral_Dev_planetId,pSVar4,pSVar5,(MethodInfo *)0x0);
              (this->fields)._planetId = pSVar4;
              return;
            }
            goto code_?;
          }
        }
      }
      goto code_?;
    }
  }
code_?:
  func_?(uVar6);
  pPVar9 = extraout_ECX;
  pSVar10 = extraout_EDX;
code_?:
  func_?(pPVar9,pSVar10);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* String UpdateIfChanged(String, String, String) */

String * Assembly-CSharp.dll::GUILoginHandler::GUILoginHandler_UpdateIfChanged
                   (GUILoginHandler *this,String *prefName,String *current,String *target,
                   MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  bVar1 = mscorlib.dll::System::String::String_op_Inequality(current,target,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_SetString
              (prefName,target,(MethodInfo *)0x0);
    return target;
  }
  return current;
}


/* Void UpdatePrefValuesIfChanged() */

void Assembly-CSharp.dll::GUILoginHandler::GUILoginHandler_UpdatePrefValuesIfChanged
               (GUILoginHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  uStack_2 = 0;
  pDVar3 = (this->fields).gameSessionData;
  pSVar4 = (this->fields).playerPrefKey;
  pSVar5 = (this->fields)._profileId;
  if (pDVar3 == (Dictionary_2_System_String_System_Object_ *)0x0) {
code_?:
    uVar6 = func_?(0);
  }
  else {
    pPVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)pDVar3,(Type *)StringLiteral_profileID,
                        MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__get_Item_System__String_
                       );
    uVar6 = CONCAT44(TypeInfo__System__Int32,pPVar7);
    if (pPVar7 == (Pool *)0x0) goto code_?;
    if ((pPVar7->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
      puVar8 = (undefined4 *)func_?(pPVar7);
      uStack_1 = *puVar8;
      target = (String *)func_?(&uStack_1,0);
      pSVar5 = GUILoginHandler_UpdateIfChanged(this,pSVar4,pSVar5,target,(MethodInfo *)0x0);
      pSVar4 = (this->fields)._serverip;
      (this->fields)._profileId = pSVar5;
      pDVar3 = (this->fields).gameSessionData;
      if (pDVar3 != (Dictionary_2_System_String_System_Object_ *)0x0) {
        pPVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                 Dictionary_2_System_Type_Pool__get_Item
                           ((Dictionary_2_System_Type_Pool_ *)pDVar3,(Type *)StringLiteral_serverIP,
                            MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__get_Item_System__String_
                           );
        pPVar7 = (Pool *)0x0;
        if (pPVar9 != (Pool *)0x0) {
          if ((String__Class *)pPVar9->klass == TypeInfo__System__String) {
            pPVar7 = pPVar9;
          }
          pSVar10 = TypeInfo__System__String;
          if (pPVar7 == (Pool *)0x0) goto code_?;
        }
        pSVar5 = GUILoginHandler_UpdateIfChanged
                           (this,StringLiteral_Dev_serverip,pSVar4,(String *)pPVar7,
                            (MethodInfo *)0x0);
        pSVar4 = (this->fields)._planetId;
        (this->fields)._serverip = pSVar5;
        pDVar3 = (this->fields).gameSessionData;
        if (pDVar3 != (Dictionary_2_System_String_System_Object_ *)0x0) {
          pPVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                   Dictionary_2_System_Type_Pool__get_Item
                             ((Dictionary_2_System_Type_Pool_ *)pDVar3,
                              (Type *)StringLiteral_planetID,
                              MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__get_Item_System__String_
                             );
          uVar6 = CONCAT44(TypeInfo__System__Int32,pPVar7);
          if (pPVar7 != (Pool *)0x0) {
            if ((pPVar7->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
              puVar8 = (undefined4 *)func_?(pPVar7);
              uStack_2 = *puVar8;
              pSVar5 = (String *)func_?(&uStack_2,0);
              pSVar4 = GUILoginHandler_UpdateIfChanged
                                 (this,StringLiteral_Dev_planetId,pSVar4,pSVar5,(MethodInfo *)0x0);
              (this->fields)._planetId = pSVar4;
              return;
            }
            goto code_?;
          }
        }
      }
      goto code_?;
    }
  }
code_?:
  func_?(uVar6);
  pPVar9 = extraout_ECX;
  pSVar10 = extraout_EDX;
code_?:
  func_?(pPVar9,pSVar10);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void <SetupPlanetID>m__0(String) */

void Assembly-CSharp.dll::GUILoginHandler::GUILoginHandler__SetupPlanetID_m__0
               (GUILoginHandler *this,String *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_01 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)0x0;
  bVar1 = mscorlib.dll::System::Int32::Int32_TryParse
                    (value,(int32_t *)&stack0xfffffff8,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    this_00 = (this->fields).gameSessionData;
    if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
      func_?();
    }
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::Experimental
    ::TerrainAPI::TerrainUtility+TerrainMap]::
    Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
              (this_01,(MethodInfo *)0x0);
    value_00 = (Theme *)func_?(TypeInfo__System__Int32);
    if (this_00 == (Dictionary_2_System_String_System_Object_ *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
    Dictionary_2_System_String_Theme__set_Item
              ((Dictionary_2_System_String_Theme_ *)this_00,StringLiteral_planetID,value_00,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
              );
  }
  return;
}


/* Void <SetupProfileID>m__1(String) */

void Assembly-CSharp.dll::GUILoginHandler::GUILoginHandler__SetupProfileID_m__1
               (GUILoginHandler *this,String *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bVar1 = mscorlib.dll::System::Int32::Int32_TryParse
                    (value,(int32_t *)&stack0xfffffff8,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    pDVar2 = (this->fields).gameSessionData;
    value_00 = (Theme *)func_?(TypeInfo__System__Int32);
    if (pDVar2 == (Dictionary_2_System_String_System_Object_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
    Dictionary_2_System_String_Theme__set_Item
              ((Dictionary_2_System_String_Theme_ *)pDVar2,StringLiteral_profileID,value_00,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
              );
  }
  pDVar2 = (this->fields).gameSessionData;
  if (pDVar2 != (Dictionary_2_System_String_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
    Dictionary_2_System_String_Theme__set_Item
              ((Dictionary_2_System_String_Theme_ *)pDVar2,StringLiteral_token,(Theme *)value,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
              );
    return;
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* GUILoginHandler() */

void Assembly-CSharp.dll::GUILoginHandler::GUILoginHandler__ctor
               (GUILoginHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_String_GUILoginHandler_PlanetData_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<System::String,_GUILoginHandler::PlanetData>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_GUILoginHandler::PlanetData>__Dictionary__
            );
  if (this_00 != (Dictionary_2_System_String_GUILoginHandler_PlanetData_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
    Object,GUILoginHandler+PlanetData]::Dictionary_2_System_Object_GUILoginHandler_PlanetData__Add
              ((Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)this_00,
               (Object *)StringLiteral_WOTest,(GUILoginHandler_PlanetData)0x10000bef7,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_GUILoginHandler::PlanetData>__Add_System__String__GUILoginHandler__PlanetData_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
    Object,GUILoginHandler+PlanetData]::Dictionary_2_System_Object_GUILoginHandler_PlanetData__Add
              ((Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)this_00,
               (Object *)StringLiteral_Default,(GUILoginHandler_PlanetData)0xd0000bef8,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_GUILoginHandler::PlanetData>__Add_System__String__GUILoginHandler__PlanetData_
              );
    (this->fields).defaultPlanetData = this_00;
    this_01 = (Dictionary_2_System_String_System_Object_ *)
              func_?(
                             TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>
                             );
    System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
    HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
              ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_01,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Dictionary__
              );
    if (this_01 != (Dictionary_2_System_String_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
      CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
      Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                  *)this_01,StringLiteral_newToken,
                 (CrossPlatformInputManager_VirtualButton *)StringLiteral_clientDefinedNewToken_,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
      CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
      Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                  *)this_01,StringLiteral_newPlanetName,
                 (CrossPlatformInputManager_VirtualButton *)StringLiteral_game_server_test,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
                );
      uStack_1 = uStack_1 & 0xffffff;
      pCVar2 = (CrossPlatformInputManager_VirtualButton *)
               func_?(TypeInfo__System__Boolean,(int)&uStack_1 + 3);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
      CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
      Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                  *)this_01,StringLiteral_isSoftLaunch,pCVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
                );
      uStack_1._0_3_ = (uint3)(ushort)uStack_1;
      pCVar2 = (CrossPlatformInputManager_VirtualButton *)
               func_?(TypeInfo__System__Boolean,(int)&uStack_1 + 2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
      CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
      Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                  *)this_01,StringLiteral_embedded,pCVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
                );
      (this->fields).gameSessionData = this_01;
      (this->fields).playerPrefKey = StringLiteral_Dev_profileId;
      UnityEngine.UIModule.dll::UnityEngine::Canvas::Canvas__ctor((Canvas *)this,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

