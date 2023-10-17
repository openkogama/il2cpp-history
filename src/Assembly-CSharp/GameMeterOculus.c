
/* Void Initialize() */

void Assembly-CSharp.dll::GameMeterOculus::GameMeterOculus_Initialize
               (GameMeterOculus *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<System::EventArgs>);
    func_?(&
                    MethodInfo__GameMeterOculus__OnVictoryConditionMet_System__Object__System__EventArgs_
                   );
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    this_00 = (pMVar1->fields)._WinningConditionManager_k__BackingField;
    this_01 = (UnityAction_2_System_Object_System_Object_ *)
              func_?(TypeInfo__System__EventHandler<System::EventArgs>);
    if (this_01 != (UnityAction_2_System_Object_System_Object_ *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (this_01,(Object *)this,
                 MethodInfo__GameMeterOculus__OnVictoryConditionMet_System__Object__System__EventArgs_
                 ,(MethodInfo *)0x0);
      if (this_00 != (WinningConditionManager *)0x0) {
        MVWorldObject.dll::WinningConditionManager::
        WinningConditionManager_add_OnWinningConditionReset
                  (this_00,(EventHandler_1_EventArgs_ *)this_01,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::GameMeterOculus::GameMeterOculus_OnDestroy
               (GameMeterOculus *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<System::EventArgs>);
    func_?(&
                    MethodInfo__GameMeterOculus__OnVictoryConditionMet_System__Object__System__EventArgs_
                   );
    cRam_? = '\x01';
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if ((bVar1 != 0) &&
     (pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0),
     pMVar2 != (MVNetworkGame *)0x0)) {
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar2 != (MVNetworkGame *)0x0) {
      this_00 = (pMVar2->fields)._WinningConditionManager_k__BackingField;
      this_01 = (UnityAction_2_System_Object_System_Object_ *)
                func_?(TypeInfo__System__EventHandler<System::EventArgs>);
      if ((this_01 != (UnityAction_2_System_Object_System_Object_ *)0x0) &&
         (UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    (this_01,unaff_ESI,
                     MethodInfo__GameMeterOculus__OnVictoryConditionMet_System__Object__System__EventArgs_
                     ,(MethodInfo *)0x0), this_00 != (WinningConditionManager *)0x0)) {
        MVWorldObject.dll::WinningConditionManager::
        WinningConditionManager_remove_OnWinningConditionReset
                  (this_00,(EventHandler_1_EventArgs_ *)this_01,(MethodInfo *)0x0);
        return;
      }
    }
    func_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  return;
}


/* Void OnVictoryConditionMet(Object, EventArgs) */

void Assembly-CSharp.dll::GameMeterOculus::GameMeterOculus_OnVictoryConditionMet
               (GameMeterOculus *this,Object *sender,EventArgs *args,MethodInfo *method)

{
  (*(this->klass->vtable).UpdateValue.methodPtr)(this,(this->klass->vtable).UpdateValue.method);
  return;
}


/* Void SetGameMeterVisibility() */

void Assembly-CSharp.dll::GameMeterOculus::GameMeterOculus_SetGameMeterVisibility
               (GameMeterOculus *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    OculusKillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<OculusKillLimitClient>__
                   );
    cRam_? = '\x01';
  }
  WStack_1 = WinningConditionType__Enum_Collectible;
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar2 != (MVNetworkGame *)0x0) &&
     (this_00 = (pMVar2->fields)._WinningConditionManager_k__BackingField,
     this_00 != (WinningConditionManager *)0x0)) {
    pOVar3 = (OculusKillLimitClient *)
             MVWorldObject.dll::WinningConditionManager::
             WinningConditionManager_GetSingletonWinnerConditionByType
                       (this_00,
                        OculusKillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<OculusKillLimitClient>__
                       );
    (this->fields).oculusClient = pOVar3;
    func_?(&(this->fields).oculusClient,pOVar3);
    WinningConditionControl::WinningConditionControl_TryGetPrioritizedWinCondition
              (&WStack_1,(MethodInfo *)0x0);
    if (WStack_1 == WinningConditionType__Enum_Oculus) {
      pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      if (pGVar4 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar4,1,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      if (pGVar4 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar4,0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void UpdateValue() */

void Assembly-CSharp.dll::GameMeterOculus::GameMeterOculus_UpdateValue
               (GameMeterOculus *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  if ((this->fields).oculusClient == (OculusKillLimitClient *)0x0) {
    return;
  }
  GameMeterKillBase::GameMeterKillBase_SetCount
            ((GameMeterKillBase *)this,GameStatCounterType__Enum_OculusKill,
             (((this->fields).oculusClient)->fields)._._.limit,(MethodInfo *)0x0);
  this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((this_01 != (MVNetworkGame *)0x0) &&
     (this_02 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_01,(MethodInfo *)0x0),
     this_02 != (MVLocalPlayer *)0x0)) {
    iVar1 = MVPlayer::MVPlayer_GetGameStat
                      ((MVPlayer *)this_02,GameStatCounterType__Enum_OculusKill,(MethodInfo *)0x0);
    if ((this->fields).prevValue == iVar1) {
      return;
    }
    if (iVar1 == 0) {
      return;
    }
    (this->fields).prevValue = iVar1;
    index = 0;
    pLVar2 = (this->fields)._._.gameMeterVisualEffects;
    while (pLVar2 != (List_1_GameMeterVisuals_GameMeterVisualEffect_ *)0x0) {
      if ((pLVar2->fields)._size <= index) {
        return;
      }
      this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                (this->fields)._._.gameMeterVisualEffects;
      if ((this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
         (RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (this_00,index,
                             MethodInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>__get_Item_int_
                            ), RVar3 == (RegexCharClass_SingleRange)0x0)) break;
      (**(code **)(*(int *)RVar3 + 0xdc))();
      index = index + 1;
      pLVar2 = (this->fields)._._.gameMeterVisualEffects;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

