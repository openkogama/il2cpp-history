
/* Void Destroy() */

void Assembly-CSharp.dll::MVCameraSettings::MVCameraSettings_Destroy
               (MVCameraSettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).isPreview == 0) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
    pOVar2 = AddDotsToTruncatedText+<Start>c__Iterator0::
             AddDotsToTruncatedText_Start_c_Iterator0_System_Collections_IEnumerator_get_Current
                       ((AddDotsToTruncatedText_Start_c_Iterator0 *)pMVar1,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MainCameraManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MainCameraManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__MainCameraManager);
    }
    bVar3 = MainCameraManager::MainCameraManager_HasSetting
                      ((MVGameType__Enum)pOVar2,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
      pOVar2 = AddDotsToTruncatedText+<Start>c__Iterator0::
               AddDotsToTruncatedText_Start_c_Iterator0_System_Collections_IEnumerator_get_Current
                         ((AddDotsToTruncatedText_Start_c_Iterator0 *)pMVar1,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__MainCameraManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MainCameraManager->_1).cctor_started == 0)) {
        func_?(TypeInfo__MainCameraManager);
      }
      pIVar4 = MainCameraManager::MainCameraManager_GetSettings
                         ((MVGameType__Enum)pOVar2,(MethodInfo *)0x0);
      if (pIVar4 == (ICameraSettings *)0x0) goto code_?;
      func_?(1);
    }
  }
  if ((this->fields).needToUnsubscribeToSettingsCallback != 0) {
    if ((((uint)(TypeInfo__MainCameraManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MainCameraManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__MainCameraManager);
    }
    pAVar5 = TypeInfo__MainCameraManager->static_fields->OnCameraSettingAdded;
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__System__Action);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)this,MethodInfo__MVCameraSettings__OnCameraSettingAdded__,
               (MethodInfo *)0x0);
    pAVar6 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pAVar5,(Delegate *)this_00,(MethodInfo *)0x0);
    pAVar5 = (Action *)0x0;
    if (pAVar6 != (Action *)0x0) {
      if (pAVar6->klass == TypeInfo__System__Action) {
        pAVar5 = pAVar6;
      }
      if (pAVar5 == (Action *)0x0) {
        func_?(pAVar6,TypeInfo__System__Action);
code_?:
        func_?();
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    TypeInfo__MainCameraManager->static_fields->OnCameraSettingAdded = pAVar5;
  }
  MVLogicObject::MVLogicObject_Destroy((MVLogicObject *)this,(MethodInfo *)0x0);
  return;
}


/* Void OnCameraSettingAdded() */

void Assembly-CSharp.dll::MVCameraSettings::MVCameraSettings_OnCameraSettingAdded
               (MVCameraSettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    pOVar2 = AddDotsToTruncatedText+<Start>c__Iterator0::
             AddDotsToTruncatedText_Start_c_Iterator0_System_Collections_IEnumerator_get_Current
                       ((AddDotsToTruncatedText_Start_c_Iterator0 *)pMVar1,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MainCameraManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MainCameraManager->_1).cctor_started == 0)) {
      func_?();
    }
    bVar3 = MainCameraManager::MainCameraManager_HasSetting
                      ((MVGameType__Enum)pOVar2,(MethodInfo *)0x0);
    if (bVar3 == 0) {
      return;
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 != (MVNetworkGame *)0x0) {
      pOVar2 = AddDotsToTruncatedText+<Start>c__Iterator0::
               AddDotsToTruncatedText_Start_c_Iterator0_System_Collections_IEnumerator_get_Current
                         ((AddDotsToTruncatedText_Start_c_Iterator0 *)pMVar1,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__MainCameraManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MainCameraManager->_1).cctor_started == 0)) {
        func_?();
      }
      pIVar4 = MainCameraManager::MainCameraManager_GetSettings
                         ((MVGameType__Enum)pOVar2,(MethodInfo *)0x0);
      pOStack5 =
           PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)&UNK_?,(MethodInfo *)0x0)
      ;
      if (pIVar4 != (ICameraSettings *)0x0) {
        pIStack6 = TypeInfo__ICameraSettings;
        pIStack7 = pIVar4;
        func_?();
        UNK_? = 0;
        return;
      }
    }
  }
  pOStack5 = (ObjectPrefab *)0x0;
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::MVCameraSettings::MVCameraSettings_OnDataUpdate
               (MVCameraSettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    pOVar2 = AddDotsToTruncatedText+<Start>c__Iterator0::
             AddDotsToTruncatedText_Start_c_Iterator0_System_Collections_IEnumerator_get_Current
                       ((AddDotsToTruncatedText_Start_c_Iterator0 *)pMVar1,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MainCameraManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MainCameraManager->_1).cctor_started == 0)) {
      func_?();
    }
    bVar3 = MainCameraManager::MainCameraManager_HasSetting
                      ((MVGameType__Enum)pOVar2,(MethodInfo *)0x0);
    if (bVar3 == 0) {
      if ((((uint)(TypeInfo__MainCameraManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MainCameraManager->_1).cctor_started == 0)) {
        func_?();
      }
      pAVar4 = TypeInfo__MainCameraManager->static_fields->OnCameraSettingAdded;
      this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_00,unaff_EDI,MethodInfo__MVCameraSettings__OnCameraSettingAdded__,
                 (MethodInfo *)0x0);
      pAVar5 = (Action *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pAVar4,(Delegate *)this_00,(MethodInfo *)0x0);
      _uStack00000018 = CONCAT44(TypeInfo__System__Action,pAVar5);
      pAVar4 = (Action *)0x0;
      if (pAVar5 == (Action *)0x0) {
code_?:
        TypeInfo__MainCameraManager->static_fields->OnCameraSettingAdded = pAVar4;
        *(undefined1 *)((int)&unaff_EDI[0x1e].klass + 1) = 1;
        return;
      }
      if (pAVar5->klass == TypeInfo__System__Action) {
        pAVar4 = pAVar5;
      }
      if (pAVar4 != (Action *)0x0) goto code_?;
      goto code_?;
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 != (MVNetworkGame *)0x0) {
      pOVar2 = AddDotsToTruncatedText+<Start>c__Iterator0::
               AddDotsToTruncatedText_Start_c_Iterator0_System_Collections_IEnumerator_get_Current
                         ((AddDotsToTruncatedText_Start_c_Iterator0 *)pMVar1,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__MainCameraManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MainCameraManager->_1).cctor_started == 0)) {
        func_?();
      }
      pIVar6 = MainCameraManager::MainCameraManager_GetSettings
                         ((MVGameType__Enum)pOVar2,(MethodInfo *)0x0);
      PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)&UNK_?,(MethodInfo *)0x0);
      if (pIVar6 != (ICameraSettings *)0x0) {
        pIStack7 = TypeInfo__ICameraSettings;
        uStack8 = 0;
        func_?();
        return;
      }
    }
  }
  _uStack00000018 = func_?();
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* MVCameraSettings(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVCameraSettings::MVCameraSettings__ctor
               (MVCameraSettings *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
    func_?(TypeInfo__PrefabPool);
  }
  this_00 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
  if (this_00 != (PrefabPool *)0x0) {
    prefabObject = PrefabPool::PrefabPool_get_MVCameraSettingsPrefab(this_00,(MethodInfo *)0x0);
    MVLogicObject::MVLogicObject__ctor
              ((MVLogicObject *)this,data,prefabObject,worldObjects,(MethodInfo *)0x0);
    iVar1 = (this->fields)._._.interactionFlags;
    *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4) =
         *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4);
    *(uint *)&(this->fields)._._.interactionFlags = (uint)iVar1 & 0xffffdfff | 0x8000;
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* MVWorldObjectDocumentationType get_DocumentationType() */

MVWorldObjectDocumentationType__Enum
Assembly-CSharp.dll::MVCameraSettings::MVCameraSettings_get_DocumentationType
          (MVCameraSettings *this,MethodInfo *method)

{
  return MVWorldObjectDocumentationType__Enum_CameraSettings;
}

