
/* Void ApplicationOnLogMessageReceived(String, String, LogType) */

void Assembly-CSharp.dll::MobileAdManagerTestScript::
     MobileAdManagerTestScript_ApplicationOnLogMessageReceived
               (MobileAdManagerTestScript *this,String *condition,String *stacktrace,
               LogType__Enum type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pQVar1 = (Queue_1_SmoothPhysicsMovement_Package_ *)(this->fields).outputMessages;
  if (pQVar1 != (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) {
    System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]::
    Queue_1_SmoothPhysicsMovement_Package__Enqueue
              (pQVar1,(SmoothPhysicsMovement_Package *)condition,
               MethodInfo__System__Collections__Generic__Queue<System::String>__Enqueue_System__String_
              );
    this_00 = (this->fields).outputMessages;
    while (this_00 != (Queue_1_System_String_ *)0x0) {
      pIVar2 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
               KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
               KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                         ((KogamaSettingNumericBase_1_System_Single_ *)this_00,
                          MethodInfo__System__Collections__Generic__Queue<System::String>__get_Count__
                         );
      if ((int)pIVar2 < 4) {
        return;
      }
      pQVar1 = (Queue_1_SmoothPhysicsMovement_Package_ *)(this->fields).outputMessages;
      if (pQVar1 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) break;
      System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]::
      Queue_1_SmoothPhysicsMovement_Package__Dequeue
                (pQVar1,MethodInfo__System__Collections__Generic__Queue<System::String>__Dequeue__);
      this_00 = (this->fields).outputMessages;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void InterstitialCallback(InterstitialAdResult) */

void Assembly-CSharp.dll::MobileAdManagerTestScript::MobileAdManagerTestScript_InterstitialCallback
               (MobileAdManagerTestScript *this,InterstitialAdResult__Enum obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  arg1 = (Object *)
         func_?(TypeInfo__Assets__Scripts__AdIntegration__InterstitialAdResult,&obj);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  message = mscorlib.dll::System::String::String_Concat
                      ((Object *)StringLiteral_InterstitialAdResult__,arg1,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)message,(MethodInfo *)0x0);
  return;
}


/* Void OnGUI() */

void Assembly-CSharp.dll::MobileAdManagerTestScript::MobileAdManagerTestScript_OnGUI
               (MobileAdManagerTestScript *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff40;
  puVar5 = &stack0xffffff40;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  iStack_6 = 0;
  uStack_7 = 0;
  iStack_8 = 0;
  uStack_9 = 0;
  uStack_10 = 0;
  uStack_11 = 0;
  fStack_12 = 0.0;
  fStack_13 = 0.0;
  pMStack_14 = (MethodInfo *)0x0;
  pMStack_15 = (MethodInfo *)0x0;
  pGStack_16 = (GUIStyle__Class *)0x0;
  fStack_17 = 0.0;
  pMStack_18 = (MethodInfo *)0x0;
  pMStack_19 = (MethodInfo *)0x0;
  pGStack_20 = (GUIStyle__Class *)0x0;
  func_?();
  puStack_21 = (undefined4 *)&stack0xffffff40;
  puStack_4 = &stack0xffffff40;
  if ((((uint)(TypeInfo__UnityEngine__GUI->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     (puStack_21 = (undefined4 *)&stack0xffffff40, puStack_4 = &stack0xffffff40,
     (TypeInfo__UnityEngine__GUI->_1).cctor_started == 0)) {
    puStack_21 = (undefined4 *)&stack0xffffff40;
    puStack_4 = &stack0xffffff40;
    func_?(TypeInfo__UnityEngine__GUI);
  }
  this_01 = UnityEngine.IMGUIModule.dll::UnityEngine::GUI::GUI_get_skin((MethodInfo *)0x0);
  if (this_01 != (GUISkin *)0x0) {
    pGVar22 = (GUIStyle *)
             MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
             KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
             KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                       ((KogamaSettingNumericBase_1_System_Single_ *)this_01,(MethodInfo *)0x0);
    iVar23 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_width((MethodInfo *)0x0);
    if (pGVar22 != (GUIStyle *)0x0) {
      UnityEngine.IMGUIModule.dll::UnityEngine::GUIStyle::GUIStyle_set_fontSize
                (pGVar22,(int)((float)iVar23 * _UNK_?),(MethodInfo *)0x0);
      iVar23 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_width((MethodInfo *)0x0);
      pMStack_24 = (MethodInfo *)((float)iVar23 * _UNK_?);
      iVar23 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
      pGStack_25 = (GUIStyle__Class *)((float)iVar23 * _UNK_?);
      iVar23 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_width((MethodInfo *)0x0);
      fStack_26 = (float)iVar23 * _UNK_?;
      iVar23 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_width((MethodInfo *)0x0);
      pSStack_27 = (String *)((float)iVar23 * _UNK_?);
      iVar23 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
      pMVar28 = pMStack_24;
      pGVar29 = pGStack_25;
      fVar30 = fStack_26;
      pMVar31 = (MethodInfo *)((float)iVar23 * _UNK_?);
      func_?();
      position.m_YMin = (float)uStack_10;
      position.m_XMin = (float)uStack_9;
      position.m_Width = (float)uStack_11;
      position.m_Height = fStack_12;
      bVar32 = UnityEngine.IMGUIModule.dll::UnityEngine::GUI::GUI_Button
                        (position,StringLiteral_Initializeu000AMobileAdManager,(MethodInfo *)0x0);
      if (bVar32 != 0) {
        pMVar33 = (this->fields).mobileAdManager;
        if (pMVar33 == (MobileAdManager *)0x0) goto code_?;
        Assets::Scripts::AdIntegration::Mobile::MobileAdManager::MobileAdManager_Initialize
                  (pMVar33,(MethodInfo *)0x0);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
      func_?(&fStack_13,fStack_26);
      fStack_34 = fStack_13;
      QStack_35.q = (Queue_1_System_Int32_ *)pMStack_14;
      QStack_35.idx = (int32_t)pMStack_15;
      QStack_35.ver = (int32_t)pGStack_16;
      if ((((uint)(TypeInfo__UnityEngine__GUI->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__GUI->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__GUI);
      }
      position_00.m_YMin = (float)QStack_35.q;
      position_00.m_XMin = fStack_34;
      position_00.m_Width = (float)QStack_35.idx;
      position_00.m_Height = (float)QStack_35.ver;
      pMVar36 = (MethodInfo *)QStack_35.idx;
      bVar32 = UnityEngine.IMGUIModule.dll::UnityEngine::GUI::GUI_Button
                        (position_00,StringLiteral_Destroyu000AMobileAdManager,(MethodInfo *)0x0);
      if (bVar32 != 0) {
        pMVar33 = (this->fields).mobileAdManager;
        if (pMVar33 == (MobileAdManager *)0x0) goto code_?;
        Assets::Scripts::AdIntegration::Mobile::MobileAdManager::MobileAdManager_Destroy
                  (pMVar33,(MethodInfo *)0x0);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
      func_?(&fStack_17,pSStack_27);
      fStack_34 = fStack_17;
      QStack_35.q = (Queue_1_System_Int32_ *)pMStack_18;
      QStack_35.idx = (int32_t)pMStack_19;
      QStack_35.ver = (int32_t)pGStack_20;
      if ((((uint)(TypeInfo__UnityEngine__GUI->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__GUI->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__GUI);
      }
      position_01.m_YMin = (float)QStack_35.q;
      position_01.m_XMin = fStack_34;
      position_01.m_Width = (float)QStack_35.idx;
      position_01.m_Height = (float)QStack_35.ver;
      bVar32 = UnityEngine.IMGUIModule.dll::UnityEngine::GUI::GUI_Button
                        (position_01,StringLiteral_Requestu000ARewardedAd,(MethodInfo *)0x0);
      if (bVar32 != 0) {
        pMVar33 = (this->fields).mobileAdManager;
        pAStack_37 = (Action_1_Assets_Scripts_AdIntegration_RewardedAdResult_ *)func_?();
        pMVar36 = (MethodInfo *)&UNK_?;
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  ((UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)pAStack_37,(Object *)this,
                   MethodInfo__MobileAdManagerTestScript__RewardedAdCallback_Assets__Scripts__AdIntegration__RewardedAdResult_
                   ,
                   MethodInfo__System__Action<Assets::Scripts::AdIntegration::RewardedAdResult>__Action_System__Object__void__
                  );
        if (pMVar33 == (MobileAdManager *)0x0) goto code_?;
        Assets::Scripts::AdIntegration::Mobile::MobileAdManager::MobileAdManager_RequestRewardedAd
                  (pMVar33,pAStack_37,AdContext__Enum_None,(MethodInfo *)0x0);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
      func_?();
      fStack_34 = 0.0;
      QStack_35.q = (Queue_1_System_Int32_ *)0x0;
      QStack_35.idx = 0;
      QStack_35.ver = 0;
      if ((((uint)(TypeInfo__UnityEngine__GUI->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__GUI->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__GUI);
      }
      position_02.m_YMin = (float)QStack_35.q;
      position_02.m_XMin = fStack_34;
      position_02.m_Width = (float)QStack_35.idx;
      position_02.m_Height = (float)QStack_35.ver;
      bVar32 = UnityEngine.IMGUIModule.dll::UnityEngine::GUI::GUI_Button
                        (position_02,StringLiteral_Requestu000AInterstitial,(MethodInfo *)0x0);
      if (bVar32 != 0) {
        pMVar33 = (this->fields).mobileAdManager;
        pAStack_37 = (Action_1_Assets_Scripts_AdIntegration_RewardedAdResult_ *)func_?();
        pMVar36 = (MethodInfo *)&UNK_?;
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  ((UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)pAStack_37,(Object *)this,
                   MethodInfo__MobileAdManagerTestScript__InterstitialCallback_Assets__Scripts__AdIntegration__InterstitialAdResult_
                   ,
                   MethodInfo__System__Action<Assets::Scripts::AdIntegration::InterstitialAdResult>__Action_System__Object__void__
                  );
        if (pMVar33 == (MobileAdManager *)0x0) goto code_?;
        Assets::Scripts::AdIntegration::Mobile::MobileAdManager::MobileAdManager_RequestInterstitial
                  (pMVar33,(Action_1_Assets_Scripts_AdIntegration_InterstitialAdResult_ *)pAStack_37,
                   AdContext__Enum_None,(MethodInfo *)0x0);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
      pMVar38 = pMStack_24;
      func_?();
      this_02 = (GUIStyle__Class *)func_?();
      pGStack_25 = this_02;
      UnityEngine.IMGUIModule.dll::UnityEngine::GUIStyle::GUIStyle__ctor
                ((GUIStyle *)this_02,(MethodInfo *)0x0);
      pGStack_39 = this_02;
      if (this_02 != (GUIStyle__Class *)0x0) {
        UnityEngine.IMGUIModule.dll::UnityEngine::GUIStyle::GUIStyle_set_wordWrap
                  ((GUIStyle *)this_02,1,pMVar36);
        UnityEngine.IMGUIModule.dll::UnityEngine::GUIStyle::GUIStyle_set_fontStyle
                  ((GUIStyle *)this_02,FontStyle__Enum_Bold,(MethodInfo *)0x0);
        pMVar36 = (MethodInfo *)0x0;
        UnityEngine.IMGUIModule.dll::UnityEngine::GUIStyle::GUIStyle_set_fontSize
                  ((GUIStyle *)this_02,0x14,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?();
        }
        pSVar40 = TypeInfo__System__String->static_fields->Empty;
        this_00 = (this->fields).outputMessages;
        pSStack_27 = pSVar40;
        if (this_00 != (Queue_1_System_String_ *)0x0) {
          pQVar41 = System.dll::System::Collections::Generic::Queue`1[System::Int32]::
                    Queue_1_System_Int32__GetEnumerator
                              (&QStack_35,(Queue_1_System_Int32_ *)this_00,
                               MethodInfo__System__Collections__Generic__Queue<System::String>__GetEnumerator__
                              );
          uStack_7._0_4_ = pQVar41->q;
          uStack_7._4_4_ = pQVar41->idx;
          iStack_6 = pQVar41->ver;
          uStack_1 = 0;
          while (cVar42 = func_?(), cVar42 != '\0') {
            pAStack_37 = (Action_1_Assets_Scripts_AdIntegration_RewardedAdResult_ *)
                         func_?();
            if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__String->_1).cctor_started == 0)) {
              func_?(TypeInfo__System__String);
            }
            pSVar40 = mscorlib.dll::System::String::String_Concat_3
                                (pSVar40,(String *)pAStack_37,StringLiteral_u000A,(MethodInfo *)0x0)
            ;
            pSStack_27 = pSVar40;
          }
          *puStack_21 = 0x1c4;
          uStack_1 = 0xffffffff;
          func_?();
          if (iStack_8 != 0) goto code_?;
          fStack_34 = fVar30;
          QStack_35.idx = (int32_t)pMVar28;
          QStack_35.ver = (int32_t)pGVar29;
          QStack_35.q = (Queue_1_System_Int32_ *)pMVar31;
          if ((((uint)(TypeInfo__UnityEngine__GUI->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__GUI->_1).cctor_started == 0)) {
            func_?();
          }
          position_04.m_YMin = (float)QStack_35.q;
          position_04.m_XMin = fStack_34;
          position_04.m_Width = (float)QStack_35.idx;
          position_04.m_Height = (float)QStack_35.ver;
          UnityEngine.IMGUIModule.dll::UnityEngine::GUI::GUI_Label
                    (position_04,pSVar40,(GUIStyle *)pGStack_25,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
          fVar30 = 0.0;
          UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
          func_?();
          pGVar29 = TypeInfo__UnityEngine__GUIStyle;
          pGVar22 = (GUIStyle *)func_?();
          UnityEngine.IMGUIModule.dll::UnityEngine::GUIStyle::GUIStyle__ctor
                    (pGVar22,(MethodInfo *)0x0);
          if (pGVar22 != (GUIStyle *)0x0) {
            UnityEngine.IMGUIModule.dll::UnityEngine::GUIStyle::GUIStyle_set_wordWrap
                      (pGVar22,1,pMVar36);
            UnityEngine.IMGUIModule.dll::UnityEngine::GUIStyle::GUIStyle_set_fontStyle
                      (pGVar22,FontStyle__Enum_Bold,(MethodInfo *)0x0);
            UnityEngine.IMGUIModule.dll::UnityEngine::GUIStyle::GUIStyle_set_fontSize
                      (pGVar22,0x14,(MethodInfo *)0x0);
            pMVar33 = (this->fields).mobileAdManager;
            QStack_35.idx = (int32_t)&UNK_?;
            QStack_35.ver = (int32_t)pGVar29;
            fStack_34 = fVar30;
            QStack_35.q = (Queue_1_System_Int32_ *)pMVar38;
            if (pMVar33 != (MobileAdManager *)0x0) {
              pSVar40 = (String *)(*(code *)(pMVar33->klass->vtable).ToString.method)(pMVar33);
              position_03.m_YMin = (float)QStack_35.q;
              position_03.m_XMin = fStack_34;
              position_03.m_Width = (float)QStack_35.idx;
              position_03.m_Height = (float)QStack_35.ver;
              UnityEngine.IMGUIModule.dll::UnityEngine::GUI::GUI_Label
                        (position_03,pSVar40,pGVar22,(MethodInfo *)0x0);
              *unaff_FS_OFFSET = uStack_3;
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar43 = (code *)swi(3);
  (*pcVar43)();
  return;
}


/* Void RewardedAdCallback(RewardedAdResult) */

void Assembly-CSharp.dll::MobileAdManagerTestScript::MobileAdManagerTestScript_RewardedAdCallback
               (MobileAdManagerTestScript *this,RewardedAdResult__Enum obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  arg1 = (Object *)func_?(TypeInfo__Assets__Scripts__AdIntegration__RewardedAdResult,&obj);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  message = mscorlib.dll::System::String::String_Concat
                      ((Object *)StringLiteral_RewardedAdResult__,arg1,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)message,(MethodInfo *)0x0);
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::MobileAdManagerTestScript::MobileAdManagerTestScript_Start
               (MobileAdManagerTestScript *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (MobileAdManager *)
            func_?(TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager);
  Assets::Scripts::AdIntegration::Mobile::MobileAdManager::MobileAdManager__ctor
            (this_00,1,(MethodInfo *)0x0);
  (this->fields).mobileAdManager = this_00;
  this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__UnityEngine__Application__LogCallback);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_01,(Object *)this,
             MethodInfo__MobileAdManagerTestScript__ApplicationOnLogMessageReceived_System__String__System__String__UnityEngine__LogType_
             ,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Application::Application_add_logMessageReceived
            ((Application_LogCallback *)this_01,(MethodInfo *)0x0);
  return;
}


/* MobileAdManagerTestScript() */

void Assembly-CSharp.dll::MobileAdManagerTestScript::MobileAdManagerTestScript__ctor
               (MobileAdManagerTestScript *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Queue_1_SmoothPhysicsMovement_Package_ *)
            func_?(TypeInfo__System__Collections__Generic__Queue<System::String>);
  System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]::
  Queue_1_SmoothPhysicsMovement_Package___ctor
            (this_00,MethodInfo__System__Collections__Generic__Queue<System::String>__Queue__);
  (this->fields).outputMessages = (Queue_1_System_String_ *)this_00;
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

