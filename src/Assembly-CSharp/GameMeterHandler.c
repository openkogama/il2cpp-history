
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
  pLVar1 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
           (this->fields).gameMeters;
  if (pLVar1 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    while (index < (pLVar1->fields)._size) {
      if ((pLVar1 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
         (RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (pLVar1,index,
                             MethodInfo__System__Collections__Generic__List<GameMeterBase>__get_Item_int_
                            ), RVar2 == (RegexCharClass_SingleRange)0x0)) goto code_?;
      (**(code **)(*(int *)RVar2 + 0xe8))(RVar2,*(undefined4 *)(*(int *)RVar2 + 0xec));
      pLVar1 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (this->fields).gameMeters;
      if ((pLVar1 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
         (RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (pLVar1,index,
                             MethodInfo__System__Collections__Generic__List<GameMeterBase>__get_Item_int_
                            ), RVar2 == (RegexCharClass_SingleRange)0x0)) goto code_?;
      (**(code **)(*(int *)RVar2 + 0x100))(RVar2,*(undefined4 *)(*(int *)RVar2 + 0x104));
      pLVar1 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (this->fields).gameMeters;
      index = index + 1;
      if (pLVar1 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
      goto code_?;
    }
    pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar3 != (MVNetworkGame *)0x0) {
      pGVar4 = (pMVar3->fields).gameStatCounterManager;
      pEVar5 = (EventHandler_1_Object_ *)
               func_?(TypeInfo__System__EventHandler<OnCounterTypeChangedArgs>);
      mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                (pEVar5,(Object *)this,
                 MethodInfo__GameMeterHandler__CounterChanged_System__Object__OnCounterTypeChangedArgs_
                 ,(MethodInfo *)0x0);
      if (pGVar4 != (GameStatCounterManager *)0x0) {
        MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_add_OnCounterTypeChanged
                  (pGVar4,(EventHandler_1_OnCounterTypeChangedArgs_ *)pEVar5,(MethodInfo *)0x0);
        pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar3 != (MVNetworkGame *)0x0) {
          pGVar4 = (pMVar3->fields).gameStatCounterManager;
          pEVar5 = (EventHandler_1_Object_ *)
                   func_?(TypeInfo__System__EventHandler<OnCounterTypeChangedArgs>);
          mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                    (pEVar5,(Object *)this,
                     MethodInfo__GameMeterHandler__OnGameStatUpdated_System__Object__OnCounterTypeChangedArgs_
                     ,(MethodInfo *)0x0);
          if (pGVar4 != (GameStatCounterManager *)0x0) {
            MVWorldObject.dll::GameStatCounterManager::
            GameStatCounterManager_add_OnCounterTypeChanged
                      (pGVar4,(EventHandler_1_OnCounterTypeChangedArgs_ *)pEVar5,(MethodInfo *)0x0);
            pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if (pMVar3 != (MVNetworkGame *)0x0) {
              this_00 = (pMVar3->fields)._WinningConditionManager_k__BackingField;
              pEVar5 = (EventHandler_1_Object_ *)
                       func_?(TypeInfo__System__EventHandler<System::EventArgs>);
              mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                        (pEVar5,(Object *)this,
                         MethodInfo__GameMeterHandler__ConditionCountChanged_System__Object__System__EventArgs_
                         ,(MethodInfo *)0x0);
              if (this_00 != (WinningConditionManager *)0x0) {
                MVWorldObject.dll::WinningConditionManager::
                WinningConditionManager_add_OnWinningConditionAddedOrRemoved
                          (this_00,(EventHandler_1_EventArgs_ *)pEVar5,(MethodInfo *)0x0);
                pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if ((pMVar3 != (MVNetworkGame *)0x0) &&
                   (pMVar6 = (pMVar3->fields).playerContainer, pMVar6 != (MVPlayerContainer *)0x0))
                {
                  pAVar7 = (pMVar6->fields).OnPlayerListChanged;
                  this_01 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
                  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                  NavMesh_OnNavMeshPreUpdate__ctor
                            (this_01,(Object *)this,MethodInfo__GameMeterHandler__UpdateValue__,
                             (MethodInfo *)0x0);
                  pAVar7 = (Action *)
                           mscorlib.dll::System::Delegate::Delegate_Combine
                                     ((Delegate *)pAVar7,(Delegate *)this_01,(MethodInfo *)0x0);
                  if (pAVar7 == (Action *)0x0) {
                    (pMVar6->fields).OnPlayerListChanged = (Action *)0x0;
                  }
                  else {
                    pAVar8 = (Action *)0x0;
                    if (pAVar7->klass == TypeInfo__System__Action) {
                      pAVar8 = pAVar7;
                    }
                    if (pAVar8 == (Action *)0x0) {
                      func_?();
                      goto code_?;
                    }
                    (pMVar6->fields).OnPlayerListChanged = pAVar8;
                    pAVar8 = (Action *)0x0;
                    if (pAVar7->klass == TypeInfo__System__Action) {
                      pAVar8 = pAVar7;
                    }
                    if (pAVar8 == (Action *)0x0) goto code_?;
                  }
                  func_?();
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
  func_?();
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
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
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).gameMeters;
  while (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    if ((this_00->fields)._size <= index) {
      return;
    }
    if ((this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
       (RVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (this_00,index,
                           MethodInfo__System__Collections__Generic__List<GameMeterBase>__get_Item_int_
                          ), RVar1 == (RegexCharClass_SingleRange)0x0)) break;
    (**(code **)(*(int *)RVar1 + 0x100))(RVar1,*(undefined4 *)(*(int *)RVar1 + 0x104));
    index = index + 1;
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this->fields).gameMeters;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
    pEVar4 = (EventHandler_1_Object_ *)
             func_?(TypeInfo__System__EventHandler<OnCounterTypeChangedArgs>);
    mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
              (pEVar4,unaff_EBX,
               MethodInfo__GameMeterHandler__CounterChanged_System__Object__OnCounterTypeChangedArgs_
               ,(MethodInfo *)0x0);
    if (pGVar3 != (GameStatCounterManager *)0x0) {
      MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_remove_OnCounterTypeChanged
                (pGVar3,(EventHandler_1_OnCounterTypeChangedArgs_ *)pEVar4,(MethodInfo *)0x0);
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar2 != (MVNetworkGame *)0x0) {
        pGVar3 = (pMVar2->fields).gameStatCounterManager;
        pEVar4 = (EventHandler_1_Object_ *)func_?();
        mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                  (pEVar4,unaff_EBX,
                   MethodInfo__GameMeterHandler__OnGameStatUpdated_System__Object__OnCounterTypeChangedArgs_
                   ,(MethodInfo *)0x0);
        if (pGVar3 != (GameStatCounterManager *)0x0) {
          MVWorldObject.dll::GameStatCounterManager::
          GameStatCounterManager_remove_OnCounterTypeChanged
                    (pGVar3,(EventHandler_1_OnCounterTypeChangedArgs_ *)pEVar4,(MethodInfo *)0x0);
          pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (pMVar2 != (MVNetworkGame *)0x0) {
            this_00 = (pMVar2->fields)._WinningConditionManager_k__BackingField;
            pEVar4 = (EventHandler_1_Object_ *)func_?();
            mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                      (pEVar4,unaff_EBX,
                       MethodInfo__GameMeterHandler__ConditionCountChanged_System__Object__System__EventArgs_
                       ,(MethodInfo *)0x0);
            if (this_00 != (WinningConditionManager *)0x0) {
              MVWorldObject.dll::WinningConditionManager::
              WinningConditionManager_remove_OnWinningConditionAddedOrRemoved
                        (this_00,(EventHandler_1_EventArgs_ *)pEVar4,(MethodInfo *)0x0);
              pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              object = TypeInfo__System__Action;
              if ((pMVar2 != (MVNetworkGame *)0x0) &&
                 (pMVar5 = (pMVar2->fields).playerContainer, pMVar5 != (MVPlayerContainer *)0x0)) {
                pAVar6 = (pMVar5->fields).OnPlayerListChanged;
                ppAVar7 = &(pMVar5->fields).OnPlayerListChanged;
                this_01 = (NavMesh_OnNavMeshPreUpdate *)func_?();
                UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                NavMesh_OnNavMeshPreUpdate__ctor
                          (this_01,(Object *)object,MethodInfo__GameMeterHandler__UpdateValue__,
                           (MethodInfo *)0x0);
                pAVar6 = (Action *)
                         mscorlib.dll::System::Delegate::Delegate_Remove
                                   ((Delegate *)pAVar6,(Delegate *)this_01,(MethodInfo *)0x0);
                uVar8 = CONCAT44(TypeInfo__System__Action,pAVar6);
                ppAStack9 = ppAVar7;
                if (pAVar6 == (Action *)0x0) {
                  pAStack10 = (Action *)0x0;
                  *ppAVar7 = (Action *)0x0;
                  func_?();
                  return;
                }
                pAVar11 = (Action *)0x0;
                if (pAVar6->klass == TypeInfo__System__Action) {
                  pAVar11 = pAVar6;
                }
                if (pAVar11 != (Action *)0x0) {
                  *ppAVar7 = pAVar11;
                  uVar8 = CONCAT44(TypeInfo__System__Action,pAVar6);
                  pAStack10 = (Action *)0x0;
                  if (pAVar6->klass == TypeInfo__System__Action) {
                    pAStack10 = pAVar6;
                  }
                  if (pAStack10 != (Action *)0x0) {
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
  uVar8 = func_?();
code_?:
  _ppAStack0000001c = uVar8;
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
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
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).gameMeters;
  while (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    if ((this_00->fields)._size <= index) {
      return;
    }
    if ((this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
       (RVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (this_00,index,
                           MethodInfo__System__Collections__Generic__List<GameMeterBase>__get_Item_int_
                          ), RVar1 == (RegexCharClass_SingleRange)0x0)) break;
    (**(code **)(*(int *)RVar1 + 0xf8))(RVar1,*(undefined4 *)(*(int *)RVar1 + 0xfc));
    index = index + 1;
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this->fields).gameMeters;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
          this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                     *)func_?();
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
          UIElements::StyleComplexSelector+PseudoStateData]::
          Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                    (this_00,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                    );
          key = (Object *)func_?();
          value = TM::TM__(StringLiteral_Score__1,(MethodInfo *)0x0);
          if (this_00 ==
              (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
               *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    ((Dictionary_2_System_Object_System_Object_ *)this_00,key,(Object *)value,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          if ((TypeInfo__NotificationController->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          NotificationController::NotificationController_PushNotification_2
                    (NotificationType__Enum_KillPrimary,
                     (Dictionary_2_System_Object_System_Object_ *)this_00,
                     NotificationLifetime__Enum_Low,(MethodInfo *)0x0);
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
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).gameMeters;
  while (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    if ((this_00->fields)._size <= index) {
      return;
    }
    if ((this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
       (RVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (this_00,index,
                           MethodInfo__System__Collections__Generic__List<GameMeterBase>__get_Item_int_
                          ), RVar1 == (RegexCharClass_SingleRange)0x0)) break;
    (**(code **)(*(int *)RVar1 + 0xf8))(RVar1,*(undefined4 *)(*(int *)RVar1 + 0xfc));
    index = index + 1;
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this->fields).gameMeters;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

