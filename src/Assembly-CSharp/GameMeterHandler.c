
/* Void Awake() */

void Assembly-CSharp.dll::GameMeterHandler::GameMeterHandler_Awake
               (GameMeterHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&TypeInfo__System__EventHandler<OnCounterTypeChangedArgs>);
    func_?(&TypeInfo__System__EventHandler<System::EventArgs>);
    func_?(&
                    MethodInfo__GameMeterHandler__ConditionCountChanged_System__Object__System__EventArgs_
                   );
    func_?(&
                    MethodInfo__GameMeterHandler__CounterChanged_System__Object__OnCounterTypeChangedArgs_
                   );
    func_?(&
                    MethodInfo__GameMeterHandler__OnGameStatUpdated_System__Object__OnCounterTypeChangedArgs_
                   );
    func_?(&MethodInfo__GameMeterHandler__UpdateValue__);
    func_?(&MethodInfo__System__Collections__Generic__List<GameMeterBase>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<GameMeterBase>__get_Item_int_);
    cRam_? = '\x01';
  }
  index = 0;
  pLVar1 = (this->fields).gameMeters;
  if (pLVar1 != (List_1_GameMeterBase_ *)0x0) {
    while (index < (pLVar1->fields)._size) {
      pLVar2 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (this->fields).gameMeters;
      if ((pLVar2 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
         (RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (pLVar2,index,
                             MethodInfo__System__Collections__Generic__List<GameMeterBase>__get_Item_int_
                            ), RVar3 == (RegexCharClass_SingleRange)0x0)) goto code_?;
      (**(code **)(*(int *)RVar3 + 0xe4))(RVar3,*(undefined4 *)(*(int *)RVar3 + 0xe8));
      pLVar2 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (this->fields).gameMeters;
      if ((pLVar2 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
         (RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (pLVar2,index,
                             MethodInfo__System__Collections__Generic__List<GameMeterBase>__get_Item_int_
                            ), RVar3 == (RegexCharClass_SingleRange)0x0)) goto code_?;
      (**(code **)(*(int *)RVar3 + 0xfc))(RVar3,*(undefined4 *)(*(int *)RVar3 + 0x100));
      pLVar1 = (this->fields).gameMeters;
      index = index + 1;
      if (pLVar1 == (List_1_GameMeterBase_ *)0x0) goto code_?;
    }
    pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar4 != (MVNetworkGame *)0x0) {
      pGVar5 = (pMVar4->fields).gameStatCounterManager;
      pUVar6 = (UnityAction_2_System_Object_System_Object_ *)
               func_?(TypeInfo__System__EventHandler<OnCounterTypeChangedArgs>);
      if ((pUVar6 != (UnityAction_2_System_Object_System_Object_ *)0x0) &&
         (UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    (pUVar6,(Object *)this,
                     MethodInfo__GameMeterHandler__CounterChanged_System__Object__OnCounterTypeChangedArgs_
                     ,(MethodInfo *)0x0), pGVar5 != (GameStatCounterManager *)0x0)) {
        MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_add_OnCounterTypeChanged
                  (pGVar5,(EventHandler_1_OnCounterTypeChangedArgs_ *)pUVar6,(MethodInfo *)0x0);
        pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar4 != (MVNetworkGame *)0x0) {
          pGVar5 = (pMVar4->fields).gameStatCounterManager;
          pUVar6 = (UnityAction_2_System_Object_System_Object_ *)
                   func_?(TypeInfo__System__EventHandler<OnCounterTypeChangedArgs>);
          if ((pUVar6 != (UnityAction_2_System_Object_System_Object_ *)0x0) &&
             (UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
              Object]::UnityAction_2_System_Object_System_Object___ctor
                        (pUVar6,(Object *)this,
                         MethodInfo__GameMeterHandler__OnGameStatUpdated_System__Object__OnCounterTypeChangedArgs_
                         ,(MethodInfo *)0x0), pGVar5 != (GameStatCounterManager *)0x0)) {
            MVWorldObject.dll::GameStatCounterManager::
            GameStatCounterManager_add_OnCounterTypeChanged
                      (pGVar5,(EventHandler_1_OnCounterTypeChangedArgs_ *)pUVar6,(MethodInfo *)0x0);
            pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if (pMVar4 != (MVNetworkGame *)0x0) {
              this_00 = (pMVar4->fields)._WinningConditionManager_k__BackingField;
              pUVar6 = (UnityAction_2_System_Object_System_Object_ *)
                       func_?(TypeInfo__System__EventHandler<System::EventArgs>);
              if ((pUVar6 != (UnityAction_2_System_Object_System_Object_ *)0x0) &&
                 (UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::
                  Object,System::Object]::UnityAction_2_System_Object_System_Object___ctor
                            (pUVar6,(Object *)this,
                             MethodInfo__GameMeterHandler__ConditionCountChanged_System__Object__System__EventArgs_
                             ,(MethodInfo *)0x0), this_00 != (WinningConditionManager *)0x0)) {
                MVWorldObject.dll::WinningConditionManager::
                WinningConditionManager_add_OnWinningConditionAddedOrRemoved
                          (this_00,(EventHandler_1_EventArgs_ *)pUVar6,(MethodInfo *)0x0);
                pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if ((pMVar4 != (MVNetworkGame *)0x0) &&
                   (pMVar7 = (pMVar4->fields).playerContainer, pMVar7 != (MVPlayerContainer *)0x0))
                {
                  pAVar8 = (pMVar7->fields).OnPlayerListChanged;
                  this_01 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
                  if (this_01 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
                    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                    NavMesh_OnNavMeshPreUpdate__ctor
                              (this_01,(Object *)this,MethodInfo__GameMeterHandler__UpdateValue__,
                               (MethodInfo *)0x0);
                    pAVar8 = (Action *)
                             mscorlib.dll::System::Delegate::Delegate_Combine
                                       ((Delegate *)pAVar8,(Delegate *)this_01,(MethodInfo *)0x0);
                    if (pAVar8 == (Action *)0x0) {
                      (pMVar7->fields).OnPlayerListChanged = (Action *)0x0;
                      func_?();
                      return;
                    }
                    pAVar9 = (Action *)0x0;
                    if (pAVar8->klass == TypeInfo__System__Action) {
                      pAVar9 = pAVar8;
                    }
                    if (pAVar9 != (Action *)0x0) {
                      (pMVar7->fields).OnPlayerListChanged = pAVar9;
                      pAVar9 = (Action *)0x0;
                      if (pAVar8->klass == TypeInfo__System__Action) {
                        pAVar9 = pAVar8;
                      }
                      if (pAVar9 != (Action *)0x0) {
                        func_?();
                        return;
                      }
                    }
                    func_?();
                  }
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void ConditionCountChanged(Object, EventArgs) */

void Assembly-CSharp.dll::GameMeterHandler::GameMeterHandler_ConditionCountChanged
               (GameMeterHandler *this,Object *sender,EventArgs *args,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<GameMeterBase>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<GameMeterBase>__get_Item_int_);
    cRam_? = '\x01';
  }
  index = 0;
  pLVar1 = (this->fields).gameMeters;
  while (pLVar1 != (List_1_GameMeterBase_ *)0x0) {
    if ((pLVar1->fields)._size <= index) {
      return;
    }
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this->fields).gameMeters;
    if ((this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
       (RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (this_00,index,
                           MethodInfo__System__Collections__Generic__List<GameMeterBase>__get_Item_int_
                          ), RVar2 == (RegexCharClass_SingleRange)0x0)) break;
    (**(code **)(*(int *)RVar2 + 0xfc))(RVar2,*(undefined4 *)(*(int *)RVar2 + 0x100));
    index = index + 1;
    pLVar1 = (this->fields).gameMeters;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void CounterChanged(Object, OnCounterTypeChangedArgs) */

void Assembly-CSharp.dll::GameMeterHandler::GameMeterHandler_CounterChanged
               (GameMeterHandler *this,Object *sender,OnCounterTypeChangedArgs *args,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>__get_Count__
                   );
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (((pMVar1 != (MVNetworkGame *)0x0) &&
      (this_00 = (pMVar1->fields).gameStatCounterManager, this_00 != (GameStatCounterManager *)0x0))
     && (pHVar2 = MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_get_ActiveTeams
                            (this_00,(MethodInfo *)0x0),
        pHVar2 != (HashSet_1_MV_WorldObject_MVTeam_ *)0x0)) {
    if (1 < (pHVar2->fields)._count) {
code_?:
      GameMeterHandler_UpdateValue(this,(MethodInfo *)0x0);
      return;
    }
    if (args != (OnCounterTypeChangedArgs *)0x0) {
      iVar3 = (args->fields).actorNumber;
      pMVar4 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
      if (pMVar4 != (MVLocalPlayer *)0x0) {
        this = unaff_ESI;
        if (iVar3 != (pMVar4->fields)._._ActorNr_k__BackingField) {
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
    func_?(&TypeInfo__System__Action);
    func_?(&TypeInfo__System__EventHandler<OnCounterTypeChangedArgs>);
    func_?(&TypeInfo__System__EventHandler<System::EventArgs>);
    func_?(&
                    MethodInfo__GameMeterHandler__ConditionCountChanged_System__Object__System__EventArgs_
                   );
    func_?(&
                    MethodInfo__GameMeterHandler__CounterChanged_System__Object__OnCounterTypeChangedArgs_
                   );
    func_?(&
                    MethodInfo__GameMeterHandler__OnGameStatUpdated_System__Object__OnCounterTypeChangedArgs_
                   );
    func_?(&MethodInfo__GameMeterHandler__UpdateValue__);
    cRam_? = '\x01';
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar2 == (MVNetworkGame *)0x0) {
    return;
  }
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar2 != (MVNetworkGame *)0x0) {
    pGVar3 = (pMVar2->fields).gameStatCounterManager;
    pUVar4 = (UnityAction_2_System_Object_System_Object_ *)
             func_?(TypeInfo__System__EventHandler<OnCounterTypeChangedArgs>);
    if ((pUVar4 != (UnityAction_2_System_Object_System_Object_ *)0x0) &&
       (UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  (pUVar4,(Object *)this,
                   MethodInfo__GameMeterHandler__CounterChanged_System__Object__OnCounterTypeChangedArgs_
                   ,(MethodInfo *)0x0), pGVar3 != (GameStatCounterManager *)0x0)) {
      MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_remove_OnCounterTypeChanged
                (pGVar3,(EventHandler_1_OnCounterTypeChangedArgs_ *)pUVar4,(MethodInfo *)0x0);
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar2 != (MVNetworkGame *)0x0) {
        pGVar3 = (pMVar2->fields).gameStatCounterManager;
        pUVar4 = (UnityAction_2_System_Object_System_Object_ *)func_?();
        if ((pUVar4 != (UnityAction_2_System_Object_System_Object_ *)0x0) &&
           (UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      (pUVar4,(Object *)this,
                       MethodInfo__GameMeterHandler__OnGameStatUpdated_System__Object__OnCounterTypeChangedArgs_
                       ,(MethodInfo *)0x0), pGVar3 != (GameStatCounterManager *)0x0)) {
          MVWorldObject.dll::GameStatCounterManager::
          GameStatCounterManager_remove_OnCounterTypeChanged
                    (pGVar3,(EventHandler_1_OnCounterTypeChangedArgs_ *)pUVar4,(MethodInfo *)0x0);
          pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (pMVar2 != (MVNetworkGame *)0x0) {
            this_00 = (pMVar2->fields)._WinningConditionManager_k__BackingField;
            pUVar4 = (UnityAction_2_System_Object_System_Object_ *)func_?();
            if ((pUVar4 != (UnityAction_2_System_Object_System_Object_ *)0x0) &&
               (UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System
                ::Object]::UnityAction_2_System_Object_System_Object___ctor
                          (pUVar4,(Object *)this,
                           MethodInfo__GameMeterHandler__ConditionCountChanged_System__Object__System__EventArgs_
                           ,(MethodInfo *)0x0), this_00 != (WinningConditionManager *)0x0)) {
              MVWorldObject.dll::WinningConditionManager::
              WinningConditionManager_remove_OnWinningConditionAddedOrRemoved
                        (this_00,(EventHandler_1_EventArgs_ *)pUVar4,(MethodInfo *)0x0);
              pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if ((pMVar2 != (MVNetworkGame *)0x0) &&
                 ((pMVar5 = (pMVar2->fields).playerContainer, pMVar5 != (MVPlayerContainer *)0x0 &&
                  (this_01 = (NavMesh_OnNavMeshPreUpdate *)func_?(),
                  this_01 != (NavMesh_OnNavMeshPreUpdate *)0x0)))) {
                UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                NavMesh_OnNavMeshPreUpdate__ctor
                          (this_01,(Object *)this,MethodInfo__GameMeterHandler__UpdateValue__,
                           (MethodInfo *)0x0);
                pAVar6 = (Action *)
                         mscorlib.dll::System::Delegate::Delegate_Remove
                                   ((Delegate *)this,(Delegate *)this_01,(MethodInfo *)0x0);
                uVar7 = CONCAT44(TypeInfo__System__Action,pAVar6);
                if (pAVar6 == (Action *)0x0) {
                  (pMVar5->fields).OnPlayerListChanged = (Action *)0x0;
                  ppAStack8 = &(pMVar5->fields).OnPlayerListChanged;
                  pAStack9 = (Action *)0x0;
                  func_?();
                  return;
                }
                pAVar10 = (Action *)0x0;
                if (pAVar6->klass == TypeInfo__System__Action) {
                  pAVar10 = pAVar6;
                }
                if (pAVar10 != (Action *)0x0) {
                  (pMVar5->fields).OnPlayerListChanged = pAVar10;
                  uVar7 = CONCAT44(TypeInfo__System__Action,pAVar6);
                  pAStack9 = (Action *)0x0;
                  if (pAVar6->klass == TypeInfo__System__Action) {
                    pAStack9 = pAVar6;
                  }
                  if (pAStack9 != (Action *)0x0) {
                    ppAStack8 = &(pMVar5->fields).OnPlayerListChanged;
                    func_?();
                    return;
                  }
                }
                goto code_?;
              }
            }
          }
        }
      }
    }
  }
  uVar7 = func_?();
code_?:
  _ppAStack00000018 = uVar7;
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::GameMeterHandler::GameMeterHandler_OnEnable
               (GameMeterHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<GameMeterBase>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<GameMeterBase>__get_Item_int_);
    cRam_? = '\x01';
  }
  index = 0;
  pLVar1 = (this->fields).gameMeters;
  while (pLVar1 != (List_1_GameMeterBase_ *)0x0) {
    if ((pLVar1->fields)._size <= index) {
      return;
    }
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this->fields).gameMeters;
    if ((this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
       (RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (this_00,index,
                           MethodInfo__System__Collections__Generic__List<GameMeterBase>__get_Item_int_
                          ), RVar2 == (RegexCharClass_SingleRange)0x0)) break;
    (**(code **)(*(int *)RVar2 + 0xf4))(RVar2,*(undefined4 *)(*(int *)RVar2 + 0xf8));
    index = index + 1;
    pLVar1 = (this->fields).gameMeters;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnGameStatUpdated(Object, OnCounterTypeChangedArgs) */

void Assembly-CSharp.dll::GameMeterHandler::GameMeterHandler_OnGameStatUpdated
               (GameMeterHandler *this,Object *sender,OnCounterTypeChangedArgs *args,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__NotificationController);
    func_?(&StringLiteral_Score__1);
    cRam_? = '\x01';
  }
  if (args != (OnCounterTypeChangedArgs *)0x0) {
    WinningConditionNotificationManager::WinningConditionNotificationManager_UpdateNotification
              ((args->fields).actorNumber,(uint)(args->fields).counterType,(args->fields).count,
               (MethodInfo *)0x0);
    iVar1 = (args->fields).actorNumber;
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    if (pMVar2 != (MVLocalPlayer *)0x0) {
      if ((iVar1 == (pMVar2->fields)._._ActorNr_k__BackingField) &&
         ((args->fields).counterType == 1)) {
        uVar3 = 0x10;
        WinningConditionControl::WinningConditionControl_TryGetPrioritizedStat
                  ((GameStatCounterType__Enum *)&stack0xfffffffb,(MethodInfo *)0x0);
        if (uVar3 == GameStatCounterType__Enum_Kill) {
          this_00 = (Dictionary_2_System_Object_System_Object_ *)func_?();
          if (this_00 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
          Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
          ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                    ((ParameterOverride_1_System_Object_ *)this_00,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                    );
          key = (Object *)func_?();
          value = TM::TM__(StringLiteral_Score__1,(MethodInfo *)0x0);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    (this_00,key,(Object *)value,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          if ((TypeInfo__NotificationController->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          NotificationController::NotificationController_PushNotification_2
                    (NotificationType__Enum_KillPrimary,this_00,NotificationLifetime__Enum_Low,
                     (MethodInfo *)0x0);
        }
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


/* Void UpdateValue() */

void Assembly-CSharp.dll::GameMeterHandler::GameMeterHandler_UpdateValue
               (GameMeterHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<GameMeterBase>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<GameMeterBase>__get_Item_int_);
    cRam_? = '\x01';
  }
  index = 0;
  pLVar1 = (this->fields).gameMeters;
  while (pLVar1 != (List_1_GameMeterBase_ *)0x0) {
    if ((pLVar1->fields)._size <= index) {
      return;
    }
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this->fields).gameMeters;
    if ((this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
       (RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (this_00,index,
                           MethodInfo__System__Collections__Generic__List<GameMeterBase>__get_Item_int_
                          ), RVar2 == (RegexCharClass_SingleRange)0x0)) break;
    (**(code **)(*(int *)RVar2 + 0xf4))(RVar2,*(undefined4 *)(*(int *)RVar2 + 0xf8));
    index = index + 1;
    pLVar1 = (this->fields).gameMeters;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

