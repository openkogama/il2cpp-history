
/* Void Init() */

void Assembly-CSharp.dll::GameMeterXP::GameMeterXP_Init(GameMeterXP *this,MethodInfo *method)

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
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0),
     pMVar2 != (MVLocalPlayer *)0x0)) {
    pXVar3 = (pMVar2->fields).OnXPProgressData;
    pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(TypeInfo__XPProgress__OnXPProgressDataDelegate);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar4,(Object *)this,MethodInfo__GameMeterXP__OnProgressUpdate_XPProgressData_,
               (MethodInfo *)0x0);
    pXVar5 = (XPProgress_OnXPProgressDataDelegate *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pXVar3,(Delegate *)pUVar4,(MethodInfo *)0x0);
    pXVar3 = (XPProgress_OnXPProgressDataDelegate *)0x0;
    if (pXVar5 != (XPProgress_OnXPProgressDataDelegate *)0x0) {
      if (pXVar5->klass == TypeInfo__XPProgress__OnXPProgressDataDelegate) {
        pXVar3 = pXVar5;
      }
      if (pXVar3 == (XPProgress_OnXPProgressDataDelegate *)0x0) {
        func_?();
        goto code_?;
      }
    }
    (pMVar2->fields).OnXPProgressData = pXVar3;
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this,1,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__LevelingManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__LevelingManager->_1).cctor_started == 0)) {
      func_?();
    }
    pUVar6 = TypeInfo__LevelingManager->static_fields->OnLevelingInitialized;
    pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar4,(Object *)this,MethodInfo__GameMeterXP__Init__,(MethodInfo *)0x0);
    pUVar7 = (UnityAction *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pUVar6,(Delegate *)pUVar4,(MethodInfo *)0x0);
    uVar8 = CONCAT44(TypeInfo__UnityEngine__Events__UnityAction,pUVar7);
    pUVar6 = (UnityAction *)0x0;
    if (pUVar7 != (UnityAction *)0x0) {
      if (pUVar7->klass == TypeInfo__UnityEngine__Events__UnityAction) {
        pUVar6 = pUVar7;
      }
      if (pUVar6 == (UnityAction *)0x0) goto code_?;
    }
    TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = pUVar6;
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar1 != (MVNetworkGame *)0x0) &&
       (this_00 = (ThemeSkybox *)
                  MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0),
       this_00 != (ThemeSkybox *)0x0)) {
      this_01 = (XPProgressData *)ThemeSkybox::ThemeSkybox_get_SunLight(this_00,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      pLVar9 = (this->fields)._.gameMeterVisualEffects;
      index = (XPProgressData *)0x0;
      if (pLVar9 != (List_1_GameMeterVisuals_GameMeterVisualEffect_ *)0x0) {
        while (pOVar10 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::
                        Json::Serialization::JsonProperty]::
                        Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                  ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                   pLVar9,
                                   MethodInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>__get_Count__
                                  ), (int)index < (int)pOVar10) {
          pLVar9 = (this->fields)._.gameMeterVisualEffects;
          if ((pLVar9 == (List_1_GameMeterVisuals_GameMeterVisualEffect_ *)0x0) ||
             (this_01 = index,
             pIVar11 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems
                       ::IEventSystemHandler]::
                       List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                 ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar9,
                                  (int32_t)index,
                                  MethodInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>__get_Item_int_
                                 ), pIVar11 == (IEventSystemHandler *)0x0)) goto code_?;
          (*(code *)pIVar11->klass[1]._0.castClass)();
          pLVar9 = (this->fields)._.gameMeterVisualEffects;
          index = (XPProgressData *)((int)&index->klass + 1);
          if (pLVar9 == (List_1_GameMeterVisuals_GameMeterVisualEffect_ *)0x0)
          goto code_?;
        }
        if (this_01 != (XPProgressData *)0x0) {
          pOVar10 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                   Serialization::JsonProperty]::
                   Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                             ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_01,
                              (MethodInfo *)0x0);
          iVar12 = XPProgressData::XPProgressData_get_NextXP(this_01,(MethodInfo *)0x0);
          (this->fields).elapsedInterpolationTime = 0.0;
          (this->fields).interpolateTowardsXPProgress = (float)((int)pOVar10 / iVar12);
          return;
        }
      }
    }
  }
code_?:
  uVar8 = func_?(0);
code_?:
  func_?(uVar8);
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::GameMeterXP::GameMeterXP_Initialize(GameMeterXP *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__LevelingManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__LevelingManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__LevelingManager);
  }
  bVar1 = LevelingManager::LevelingManager_get_IsInitialized((MethodInfo *)0x0);
  if (bVar1 != 0) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar2 == (MVNetworkGame *)0x0) ||
       (this = (GameMeterXP *)
               MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0),
       (MVLocalPlayer *)this == (MVLocalPlayer *)0x0)) goto code_?;
    bVar1 = MVLocalPlayer::MVLocalPlayer_get_CanGetXPProgressData
                      ((MVLocalPlayer *)this,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar2 != (MVNetworkGame *)0x0) &&
         (pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0),
         pMVar3 != (MVLocalPlayer *)0x0)) {
        pXVar4 = (pMVar3->fields).OnXPProgressData;
        pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar5,(Object *)in_stack_6,
                   MethodInfo__GameMeterXP__OnProgressUpdate_XPProgressData_,(MethodInfo *)0x0);
        pXVar7 = (XPProgress_OnXPProgressDataDelegate *)
                 mscorlib.dll::System::Delegate::Delegate_Combine
                           ((Delegate *)pXVar4,(Delegate *)pUVar5,(MethodInfo *)0x0);
        pXVar4 = (XPProgress_OnXPProgressDataDelegate *)0x0;
        if (pXVar7 != (XPProgress_OnXPProgressDataDelegate *)0x0) {
          if (pXVar7->klass == TypeInfo__XPProgress__OnXPProgressDataDelegate) {
            pXVar4 = pXVar7;
          }
          if (pXVar4 == (XPProgress_OnXPProgressDataDelegate *)0x0) {
            func_?();
            goto code_?;
          }
        }
        (pMVar3->fields).OnXPProgressData = pXVar4;
        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                  (in_stack_6,1,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__LevelingManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__LevelingManager->_1).cctor_started == 0)) {
          func_?();
        }
        pUVar8 = TypeInfo__LevelingManager->static_fields->OnLevelingInitialized;
        pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar5,(Object *)in_stack_6,MethodInfo__GameMeterXP__Init__,
                   (MethodInfo *)0x0);
        pUVar9 = (UnityAction *)
                 mscorlib.dll::System::Delegate::Delegate_Remove
                           ((Delegate *)pUVar8,(Delegate *)pUVar5,(MethodInfo *)0x0);
        uVar10 = CONCAT44(TypeInfo__UnityEngine__Events__UnityAction,pUVar9);
        pUVar8 = (UnityAction *)0x0;
        if (pUVar9 != (UnityAction *)0x0) {
          if (pUVar9->klass == TypeInfo__UnityEngine__Events__UnityAction) {
            pUVar8 = pUVar9;
          }
          if (pUVar8 == (UnityAction *)0x0) goto code_?;
        }
        TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = pUVar8;
        pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar2 != (MVNetworkGame *)0x0) &&
           (this_00 = (ThemeSkybox *)
                      MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0),
           this_00 != (ThemeSkybox *)0x0)) {
          this_01 = (XPProgressData *)
                    ThemeSkybox::ThemeSkybox_get_SunLight(this_00,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          this_02 = in_stack_6[1].klass;
          pXVar11 = (XPProgressData *)0x0;
          if (this_02 != (Behaviour__Class *)0x0) {
            while (index = pXVar11,
                  pOVar12 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::
                           Json::Serialization::JsonProperty]::
                           Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                     ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                      this_02,
                                      MethodInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>__get_Count__
                                     ), (int)index < (int)pOVar12) {
              if ((in_stack_6[1].klass == (Behaviour__Class *)0x0) ||
                 (pIVar13 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                            EventSystems::IEventSystemHandler]::
                            List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                      ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)
                                       in_stack_6[1].klass,(int32_t)index,
                                       MethodInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>__get_Item_int_
                                      ), pIVar13 == (IEventSystemHandler *)0x0))
              goto code_?;
              (*(code *)pIVar13->klass[1]._0.castClass)();
              this_02 = in_stack_6[1].klass;
              pXVar11 = (XPProgressData *)((int)&index->klass + 1);
              this_01 = index;
              if (this_02 == (Behaviour__Class *)0x0) goto code_?;
            }
            if (this_01 != (XPProgressData *)0x0) {
              pOVar12 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json
                       ::Serialization::JsonProperty]::
                       Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                 ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                  this_01,(MethodInfo *)0x0);
              iVar14 = XPProgressData::XPProgressData_get_NextXP(this_01,(MethodInfo *)0x0);
              in_stack_6[3].klass = (Behaviour__Class *)0x0;
              in_stack_6[2].monitor = (MonitorData *)(float)((int)pOVar12 / iVar14);
              return;
            }
          }
        }
      }
code_?:
      uVar10 = func_?();
code_?:
      func_?(uVar10);
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
  }
  if ((((uint)(TypeInfo__LevelingManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__LevelingManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__LevelingManager);
  }
  pUVar8 = TypeInfo__LevelingManager->static_fields->OnLevelingInitialized;
  pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar5,(Object *)this,MethodInfo__GameMeterXP__Init__,(MethodInfo *)0x0);
  pUVar9 = (UnityAction *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pUVar8,(Delegate *)pUVar5,(MethodInfo *)0x0);
  pUVar8 = (UnityAction *)0x0;
  if (pUVar9 != (UnityAction *)0x0) {
    if (pUVar9->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar8 = pUVar9;
    }
    if (pUVar8 == (UnityAction *)0x0) {
      func_?();
code_?:
      func_?();
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
  }
  TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = pUVar8;
  return;
}


/* Void OnProgressUpdate(XPProgressData) */

void Assembly-CSharp.dll::GameMeterXP::GameMeterXP_OnProgressUpdate
               (GameMeterXP *this,XPProgressData *xpProgress,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  index = 0;
  pLVar1 = (this->fields)._.gameMeterVisualEffects;
  if (pLVar1 != (List_1_GameMeterVisuals_GameMeterVisualEffect_ *)0x0) {
    while (pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                    Serialization::JsonProperty]::
                    Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                              ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                               MethodInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>__get_Count__
                              ), index < (int)pOVar2) {
      pLVar1 = (this->fields)._.gameMeterVisualEffects;
      if ((pLVar1 == (List_1_GameMeterVisuals_GameMeterVisualEffect_ *)0x0) ||
         (pIVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                   IEventSystemHandler]::
                   List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                             ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,index,
                              MethodInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>__get_Item_int_
                             ), pIVar3 == (IEventSystemHandler *)0x0)) goto code_?;
      (*(code *)pIVar3->klass[1]._0.castClass)(pIVar3);
      pLVar1 = (this->fields)._.gameMeterVisualEffects;
      index = index + 1;
      if (pLVar1 == (List_1_GameMeterVisuals_GameMeterVisualEffect_ *)0x0) goto code_?;
    }
    if (xpProgress != (XPProgressData *)0x0) {
      pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)xpProgress,
                          (MethodInfo *)0x0);
      iVar4 = XPProgressData::XPProgressData_get_NextXP(xpProgress,(MethodInfo *)0x0);
      (this->fields).elapsedInterpolationTime = 0.0;
      (this->fields).interpolateTowardsXPProgress = (float)((int)pOVar2 / iVar4);
      return;
    }
  }
code_?:
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetShowGameMeter(Boolean) */

void Assembly-CSharp.dll::GameMeterXP::GameMeterXP_SetShowGameMeter
               (GameMeterXP *this,bool show,MethodInfo *method)

{
  pGVar1 = (this->fields).XPMeter;
  if (pGVar1 == (GameObject *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)func_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?,0,0);
    func_?(uVar3);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(pGVar1,_show);
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::GameMeterXP::GameMeterXP_Update(GameMeterXP *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = (this->fields).elapsedInterpolationTime;
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  if (fVar2 + _UNK_? <= fVar1) {
    return;
  }
  fVar1 = (this->fields).elapsedInterpolationTime;
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  fVar2 = fVar2 + fVar1;
  fVar1 = (this->fields).previousXPProgress;
  b = (Mathf__Class *)(this->fields).interpolateTowardsXPProgress;
  (this->fields).elapsedInterpolationTime = fVar2;
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    b = TypeInfo__UnityEngine__Mathf;
    func_?();
  }
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Lerp
                    (fVar1,(float)b,fVar2,(MethodInfo *)0x0);
  pLVar3 = (this->fields)._.gameMeterVisualEffects;
  index = 0;
  (this->fields).previousXPProgress = fVar1;
  while (pLVar3 != (List_1_GameMeterVisuals_GameMeterVisualEffect_ *)0x0) {
    pOVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar3,
                        MethodInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>__get_Count__
                       );
    if ((int)pOVar4 <= index) {
      return;
    }
    pLVar3 = (this->fields)._.gameMeterVisualEffects;
    if ((pLVar3 == (List_1_GameMeterVisuals_GameMeterVisualEffect_ *)0x0) ||
       (pIVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                 IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                           ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar3,index,
                            MethodInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>__get_Item_int_
                           ), pIVar5 == (IEventSystemHandler *)0x0)) break;
    (*(code *)pIVar5->klass[1]._0.castClass)();
    index = index + 1;
    pLVar3 = (this->fields)._.gameMeterVisualEffects;
  }
  func_?(0);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* GameMeterXP() */

void Assembly-CSharp.dll::GameMeterXP::GameMeterXP__ctor(GameMeterXP *this,MethodInfo *method)

{
  (this->fields).elapsedInterpolationTime = 1.0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_Vector4_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>
                           );
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>__List__
            );
  (this->fields)._.gameMeterVisualEffects =
       (List_1_GameMeterVisuals_GameMeterVisualEffect_ *)this_00;
  (this->fields)._.meterActive = 1;
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


/* GameMeterType get_GameMeterType() */

GameMeterType__Enum
Assembly-CSharp.dll::GameMeterXP::GameMeterXP_get_GameMeterType
          (GameMeterXP *this,MethodInfo *method)

{
  return GameMeterType__Enum_XP;
}

