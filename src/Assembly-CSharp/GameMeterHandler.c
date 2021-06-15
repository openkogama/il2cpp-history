
/* Void Awake() */

void Assembly-CSharp.dll::GameMeterHandler::GameMeterHandler_Awake
               (GameMeterHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  index = 0;
  pLVar1 = (this->fields).gameMeters;
  if (pLVar1 != (List_1_GameMeterBase_ *)0x0) {
    while (pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                    Serialization::JsonProperty]::
                    Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                              ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                               MethodInfo__System__Collections__Generic__List<GameMeterBase>__get_Count__
                              ), index < (int)pOVar2) {
      pLVar1 = (this->fields).gameMeters;
      if ((pLVar1 == (List_1_GameMeterBase_ *)0x0) ||
         (pIVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                   IEventSystemHandler]::
                   List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                             ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,index,
                              MethodInfo__System__Collections__Generic__List<GameMeterBase>__get_Item_int_
                             ), pIVar3 == (IEventSystemHandler *)0x0)) goto code_?;
      (*(code *)pIVar3->klass[1]._0.parent)(pIVar3);
      pLVar1 = (this->fields).gameMeters;
      if ((pLVar1 == (List_1_GameMeterBase_ *)0x0) ||
         (pIVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                   IEventSystemHandler]::
                   List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                             ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,index,
                              MethodInfo__System__Collections__Generic__List<GameMeterBase>__get_Item_int_
                             ), pIVar3 == (IEventSystemHandler *)0x0)) goto code_?;
      (*(code *)pIVar3->klass[1]._0.events)(pIVar3,pIVar3->klass[1]._0.properties);
      pLVar1 = (this->fields).gameMeters;
      index = index + 1;
      if (pLVar1 == (List_1_GameMeterBase_ *)0x0) goto code_?;
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar4 != (MVNetworkGame *)0x0) {
      pGVar5 = (GameStatCounterManager *)
               DayNightCycle::DayNightCycle_get_CurrentStarsParam
                         ((DayNightCycle *)pMVar4,(MethodInfo *)0x0);
      pUVar6 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(TypeInfo__System__EventHandler<OnCounterTypeChangedArgs>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar6,(Object *)this,
                 MethodInfo__GameMeterHandler__CounterChanged_System__Object__OnCounterTypeChangedArgs_
                 ,
                 MethodInfo__System__EventHandler<OnCounterTypeChangedArgs>__EventHandler_System__Object__void__
                );
      if (pGVar5 != (GameStatCounterManager *)0x0) {
        MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_add_OnCounterTypeChanged
                  (pGVar5,(EventHandler_1_OnCounterTypeChangedArgs_ *)pUVar6,(MethodInfo *)0x0);
        pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar4 != (MVNetworkGame *)0x0) {
          pGVar5 = (GameStatCounterManager *)
                   DayNightCycle::DayNightCycle_get_CurrentStarsParam
                             ((DayNightCycle *)pMVar4,(MethodInfo *)0x0);
          pUVar6 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?(TypeInfo__System__EventHandler<OnCounterTypeChangedArgs>);
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar6,(Object *)this,
                     MethodInfo__GameMeterHandler__OnGameStatUpdated_System__Object__OnCounterTypeChangedArgs_
                     ,
                     MethodInfo__System__EventHandler<OnCounterTypeChangedArgs>__EventHandler_System__Object__void__
                    );
          if (pGVar5 != (GameStatCounterManager *)0x0) {
            MVWorldObject.dll::GameStatCounterManager::
            GameStatCounterManager_add_OnCounterTypeChanged
                      (pGVar5,(EventHandler_1_OnCounterTypeChangedArgs_ *)pUVar6,(MethodInfo *)0x0);
            this_00 = (PrefabPool *)
                      MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if (this_00 != (PrefabPool *)0x0) {
              this_01 = (WinningConditionManager *)
                        PrefabPool::PrefabPool_get_MVSoundEmitterPrefab(this_00,(MethodInfo *)0x0);
              pUVar6 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                        *)func_?(TypeInfo__System__EventHandler<System::EventArgs>);
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
              SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
              UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                        (pUVar6,(Object *)this,
                         MethodInfo__GameMeterHandler__ConditionCountChanged_System__Object__System__EventArgs_
                         ,
                         MethodInfo__System__EventHandler<System::EventArgs>__EventHandler_System__Object__void__
                        );
              if (this_01 != (WinningConditionManager *)0x0) {
                MVWorldObject.dll::WinningConditionManager::
                WinningConditionManager_add_OnWinningConditionAddedOrRemoved
                          (this_01,(EventHandler_1_EventArgs_ *)pUVar6,(MethodInfo *)0x0);
                this_02 = (MVAvatar *)
                          MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if ((this_02 != (MVAvatar *)0x0) &&
                   (pMVar7 = MVAvatar::MVAvatar_get_Shield(this_02,(MethodInfo *)0x0),
                   pMVar7 != (MVRuntimeDataVariableClampedFloat *)0x0)) {
                  pDVar8 = (Delegate *)(pMVar7->fields)._._.sendInterval;
                  pUVar6 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                            *)func_?(TypeInfo__System__Action);
                  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                  SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                            (pUVar6,(Object *)this,MethodInfo__GameMeterHandler__UpdateValue__,
                             (MethodInfo *)0x0);
                  pDVar9 = mscorlib.dll::System::Delegate::Delegate_Combine
                                     (pDVar8,(Delegate *)pUVar6,(MethodInfo *)0x0);
                  pDVar8 = (Delegate *)0x0;
                  if (pDVar9 != (Delegate *)0x0) {
                    if ((Action__Class *)pDVar9->klass == TypeInfo__System__Action) {
                      pDVar8 = pDVar9;
                    }
                    if (pDVar8 == (Delegate *)0x0) {
                      func_?();
                      goto code_?;
                    }
                  }
                  (pMVar7->fields)._._.sendInterval = (float)pDVar8;
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void ConditionCountChanged(Object, EventArgs) */

void Assembly-CSharp.dll::GameMeterHandler::GameMeterHandler_ConditionCountChanged
               (GameMeterHandler *this,Object *sender,EventArgs *args,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  index = 0;
  pLVar1 = (this->fields).gameMeters;
  while (pLVar1 != (List_1_GameMeterBase_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                        MethodInfo__System__Collections__Generic__List<GameMeterBase>__get_Count__);
    if ((int)pOVar2 <= index) {
      return;
    }
    pLVar1 = (this->fields).gameMeters;
    if ((pLVar1 == (List_1_GameMeterBase_ *)0x0) ||
       (pIVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                 IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                           ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,index,
                            MethodInfo__System__Collections__Generic__List<GameMeterBase>__get_Item_int_
                           ), pIVar3 == (IEventSystemHandler *)0x0)) break;
    (*(code *)pIVar3->klass[1]._0.events)(pIVar3);
    index = index + 1;
    pLVar1 = (this->fields).gameMeters;
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void CounterChanged(Object, OnCounterTypeChangedArgs) */

void Assembly-CSharp.dll::GameMeterHandler::GameMeterHandler_CounterChanged
               (GameMeterHandler *this,Object *sender,OnCounterTypeChangedArgs *args,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (((this_00 != (MVNetworkGame *)0x0) &&
      (this_01 = (GameStatCounterManager *)
                 DayNightCycle::DayNightCycle_get_CurrentStarsParam
                           ((DayNightCycle *)this_00,(MethodInfo *)0x0),
      this_01 != (GameStatCounterManager *)0x0)) &&
     (this_02 = MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_get_ActiveTeams
                          (this_01,(MethodInfo *)0x0),
     pMVar1 = 
     MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>__get_Count__,
     this_02 != (HashSet_1_MV_WorldObject_MVTeam_ *)0x0)) {
    JVar2 = System.Core.dll::System::Linq::
            Enumerable+<CreateWhereIterator>c__Iterator1D`1[Newtonsoft::Json::Schema::
            JsonSchemaType]::
            Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType__System_Collections_Generic_IEnumerator_TSource__get_Current
                      ((Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_
                        *)this_02,
                       MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>__get_Count__
                      );
    if (1 < (int)JVar2) {
code_?:
      GameMeterHandler_UpdateValue((GameMeterHandler *)&UNK_?,(MethodInfo *)0x0);
      return;
    }
    if (pMVar1 != (MethodInfo *)0x0) {
      pIVar3 = pMVar1->klass;
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      this_03 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
      if (this_03 != (MVLocalPlayer *)0x0) {
        pIVar4 = (Il2CppClass *)
                 ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
                 NamedThemeAttribute_1_UnityEngine_Color__get_Name
                           ((NamedThemeAttribute_1_UnityEngine_Color_ *)this_03,(MethodInfo *)0x0);
        if (pIVar3 != pIVar4) {
          return;
        }
        goto code_?;
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::GameMeterHandler::GameMeterHandler_OnDestroy
               (GameMeterHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar2 == (MVNetworkGame *)0x0) {
    return;
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar2 != (MVNetworkGame *)0x0) {
    pGVar3 = (GameStatCounterManager *)
             DayNightCycle::DayNightCycle_get_CurrentStarsParam
                       ((DayNightCycle *)pMVar2,(MethodInfo *)0x0);
    pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(TypeInfo__System__EventHandler<OnCounterTypeChangedArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar4,unaff_EBX,
               MethodInfo__GameMeterHandler__CounterChanged_System__Object__OnCounterTypeChangedArgs_
               ,
               MethodInfo__System__EventHandler<OnCounterTypeChangedArgs>__EventHandler_System__Object__void__
              );
    if (pGVar3 != (GameStatCounterManager *)0x0) {
      MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_remove_OnCounterTypeChanged
                (pGVar3,(EventHandler_1_OnCounterTypeChangedArgs_ *)pUVar4,(MethodInfo *)0x0);
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar2 != (MVNetworkGame *)0x0) {
        pGVar3 = (GameStatCounterManager *)
                 DayNightCycle::DayNightCycle_get_CurrentStarsParam
                           ((DayNightCycle *)pMVar2,(MethodInfo *)0x0);
        pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar4,unaff_EBX,
                   MethodInfo__GameMeterHandler__OnGameStatUpdated_System__Object__OnCounterTypeChangedArgs_
                   ,
                   MethodInfo__System__EventHandler<OnCounterTypeChangedArgs>__EventHandler_System__Object__void__
                  );
        if (pGVar3 != (GameStatCounterManager *)0x0) {
          MVWorldObject.dll::GameStatCounterManager::
          GameStatCounterManager_remove_OnCounterTypeChanged
                    (pGVar3,(EventHandler_1_OnCounterTypeChangedArgs_ *)pUVar4,(MethodInfo *)0x0);
          this_00 = (PrefabPool *)
                    MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (this_00 != (PrefabPool *)0x0) {
            this_01 = (WinningConditionManager *)
                      PrefabPool::PrefabPool_get_MVSoundEmitterPrefab(this_00,(MethodInfo *)0x0);
            pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                      *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar4,unaff_EBX,
                       MethodInfo__GameMeterHandler__ConditionCountChanged_System__Object__System__EventArgs_
                       ,
                       MethodInfo__System__EventHandler<System::EventArgs>__EventHandler_System__Object__void__
                      );
            if (this_01 != (WinningConditionManager *)0x0) {
              MVWorldObject.dll::WinningConditionManager::
              WinningConditionManager_remove_OnWinningConditionAddedOrRemoved
                        (this_01,(EventHandler_1_EventArgs_ *)pUVar4,(MethodInfo *)0x0);
              this_02 = (MVAvatar *)
                        MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if ((this_02 != (MVAvatar *)0x0) &&
                 (pMVar5 = MVAvatar::MVAvatar_get_Shield(this_02,(MethodInfo *)0x0),
                 object = TypeInfo__System__Action,
                 pMVar5 != (MVRuntimeDataVariableClampedFloat *)0x0)) {
                pDVar6 = (Delegate *)(pMVar5->fields)._._.sendInterval;
                pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                          *)func_?();
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                          (pUVar4,(Object *)object,MethodInfo__GameMeterHandler__UpdateValue__,
                           (MethodInfo *)0x0);
                pDStack7 =
                     mscorlib.dll::System::Delegate::Delegate_Remove
                               (pDVar6,(Delegate *)pUVar4,(MethodInfo *)0x0);
                pDVar6 = (Delegate *)0x0;
                if (pDStack7 == (Delegate *)0x0) {
code_?:
                  (pMVar5->fields)._._.sendInterval = (float)pDVar6;
                  return;
                }
                if ((Action__Class *)pDStack7->klass == TypeInfo__System__Action) {
                  pDVar6 = pDStack7;
                }
                pAStack8 = TypeInfo__System__Action;
                if (pDVar6 != (Delegate *)0x0) goto code_?;
                goto code_?;
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pDStack7 = extraout_ECX;
  pAStack8 = extraout_EDX;
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::GameMeterHandler::GameMeterHandler_OnEnable
               (GameMeterHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  index = 0;
  pLVar1 = (this->fields).gameMeters;
  while (pLVar1 != (List_1_GameMeterBase_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                        MethodInfo__System__Collections__Generic__List<GameMeterBase>__get_Count__);
    if ((int)pOVar2 <= index) {
      return;
    }
    pLVar1 = (this->fields).gameMeters;
    if ((pLVar1 == (List_1_GameMeterBase_ *)0x0) ||
       (pIVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                 IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                           ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,index,
                            MethodInfo__System__Collections__Generic__List<GameMeterBase>__get_Item_int_
                           ), pIVar3 == (IEventSystemHandler *)0x0)) break;
    (*(code *)pIVar3->klass[1]._0.klass)(pIVar3);
    index = index + 1;
    pLVar1 = (this->fields).gameMeters;
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnGameStatUpdated(Object, OnCounterTypeChangedArgs) */

void Assembly-CSharp.dll::GameMeterHandler::GameMeterHandler_OnGameStatUpdated
               (GameMeterHandler *this,Object *sender,OnCounterTypeChangedArgs *args,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pOVar1 = args;
  if (args != (OnCounterTypeChangedArgs *)0x0) {
    WinningConditionNotificationManager::WinningConditionNotificationManager_UpdateNotification
              ((args->fields).actorNumber,(uint)(args->fields).counterType,(args->fields).count,
               (MethodInfo *)0x0);
    pSVar2 = (String *)(pOVar1->fields).actorNumber;
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    this_00 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    if (this_00 != (MVLocalPlayer *)0x0) {
      uVar3 = 0x10;
      pSVar4 = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
               NamedThemeAttribute_1_UnityEngine_Color__get_Name
                         ((NamedThemeAttribute_1_UnityEngine_Color_ *)this_00,(MethodInfo *)0x0);
      if ((pSVar2 == pSVar4) && ((pOVar1->fields).counterType == 1)) {
        WinningConditionControl::WinningConditionControl_TryGetPrioritizedStat
                  ((GameStatCounterType__Enum *)&stack0xfffffffb,(MethodInfo *)0x0);
        if (uVar3 == GameStatCounterType__Enum_Kill) {
          method = (MethodInfo *)
                   TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
          ;
          args = (OnCounterTypeChangedArgs *)&UNK_?;
          data = (Dictionary_2_System_Object_System_Object_ *)func_?();
          args = (OnCounterTypeChangedArgs *)
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
          ;
          System.Core.dll::System::Collections::Generic::
          HashSet`1[AvatarModifierPackage+AvatarModifier]::
          HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                    ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)data,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                    );
          args = (OnCounterTypeChangedArgs *)((int)&args + 3);
          pSVar2 = (String *)func_?();
          value = (CrossPlatformInputManager_VirtualButton *)
                  TM::TM__(StringLiteral_Score__1,(MethodInfo *)0x0);
          if (data == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
          String,UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
          Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                    ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                      *)data,pSVar2,value,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          if ((((uint)(TypeInfo__NotificationController->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__NotificationController->_1).cctor_started == 0)) {
            method = (MethodInfo *)TypeInfo__NotificationController;
            args = (OnCounterTypeChangedArgs *)&UNK_?;
            func_?();
          }
          method = (MethodInfo *)0x0;
          args = (OnCounterTypeChangedArgs *)0x2;
          NotificationController::NotificationController_PushNotification_2
                    (NotificationType__Enum_KillPrimary,data,NotificationLifetime__Enum_Low,
                     (MethodInfo *)0x0);
        }
      }
      return;
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void UpdateValue() */

void Assembly-CSharp.dll::GameMeterHandler::GameMeterHandler_UpdateValue
               (GameMeterHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  index = 0;
  pLVar1 = (this->fields).gameMeters;
  while (pLVar1 != (List_1_GameMeterBase_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                        MethodInfo__System__Collections__Generic__List<GameMeterBase>__get_Count__);
    if ((int)pOVar2 <= index) {
      return;
    }
    pLVar1 = (this->fields).gameMeters;
    if ((pLVar1 == (List_1_GameMeterBase_ *)0x0) ||
       (pIVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                 IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                           ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,index,
                            MethodInfo__System__Collections__Generic__List<GameMeterBase>__get_Item_int_
                           ), pIVar3 == (IEventSystemHandler *)0x0)) break;
    (*(code *)pIVar3->klass[1]._0.klass)(pIVar3);
    index = index + 1;
    pLVar1 = (this->fields).gameMeters;
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

