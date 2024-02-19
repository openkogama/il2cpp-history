
/* Void Init() */

void Assembly-CSharp.dll::GameMeterXP::GameMeterXP_Init(GameMeterXP *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__GameMeterXP__Init__);
    func_?(&MethodInfo__GameMeterXP__OnProgressUpdate_XPProgressData_);
    func_?(&TypeInfo__LevelingManager);
    func_?(&TypeInfo__XPProgress__OnXPProgressDataDelegate);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 == (MVNetworkGame *)0x0) ||
     (pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0),
     pMVar2 == (MVLocalPlayer *)0x0)) {
code_?:
    func_?();
code_?:
    func_?();
  }
  else {
    pXVar3 = (pMVar2->fields).OnXPProgressData;
    this_01 = (UnityAction_1_System_Object_ *)
              func_?(TypeInfo__XPProgress__OnXPProgressDataDelegate);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
    UnityAction_1_System_Object___ctor
              (this_01,(Object *)this,MethodInfo__GameMeterXP__OnProgressUpdate_XPProgressData_,
               (MethodInfo *)0x0);
    pXVar3 = (XPProgress_OnXPProgressDataDelegate *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pXVar3,(Delegate *)this_01,(MethodInfo *)0x0);
    if (pXVar3 == (XPProgress_OnXPProgressDataDelegate *)0x0) {
      (pMVar2->fields).OnXPProgressData = (XPProgress_OnXPProgressDataDelegate *)0x0;
    }
    else {
      pXVar4 = (XPProgress_OnXPProgressDataDelegate *)0x0;
      if (pXVar3->klass == TypeInfo__XPProgress__OnXPProgressDataDelegate) {
        pXVar4 = pXVar3;
      }
      if (pXVar4 == (XPProgress_OnXPProgressDataDelegate *)0x0) {
        func_?();
        goto code_?;
      }
      (pMVar2->fields).OnXPProgressData = pXVar4;
      pXVar4 = (XPProgress_OnXPProgressDataDelegate *)0x0;
      if (pXVar3->klass == TypeInfo__XPProgress__OnXPProgressDataDelegate) {
        pXVar4 = pXVar3;
      }
      if (pXVar4 == (XPProgress_OnXPProgressDataDelegate *)0x0) goto code_?;
    }
    func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this,1,(MethodInfo *)0x0);
    if ((TypeInfo__LevelingManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pUVar5 = TypeInfo__LevelingManager->static_fields->OnLevelingInitialized;
    this_02 = (NavMesh_OnNavMeshPreUpdate *)func_?();
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_02,(Object *)this,MethodInfo__GameMeterXP__Init__,(MethodInfo *)0x0);
    pUVar5 = (UnityAction *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pUVar5,(Delegate *)this_02,(MethodInfo *)0x0);
    if (pUVar5 == (UnityAction *)0x0) {
      TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = (UnityAction *)0x0;
code_?:
      func_?();
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar1 != (MVNetworkGame *)0x0) &&
         (pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0),
         pMVar2 != (MVLocalPlayer *)0x0)) {
        this_03 = (SparselyPopulatedArrayFragment_1_System_Object_ *)
                  DayNightCycle::DayNightCycle_get__skyParamsList
                            ((DayNightCycle *)pMVar2,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?(&
                          MethodInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>__get_Count__
                         );
          func_?(&
                          MethodInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>__get_Item_int_
                         );
          cRam_? = '\x01';
        }
        pLVar6 = (this->fields)._.gameMeterVisualEffects;
        iVar7 = 0;
        if (pLVar6 != (List_1_GameMeterVisuals_GameMeterVisualEffect_ *)0x0) {
          while (iVar7 < (pLVar6->fields)._size) {
            this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                      (this->fields)._.gameMeterVisualEffects;
            if ((this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0
                ) || (RVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                              RegularExpressions::RegexCharClass+SingleRange]::
                              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                        (this_00,iVar7,
                                         MethodInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>__get_Item_int_
                                        ), RVar8 == (RegexCharClass_SingleRange)0x0))
            goto code_?;
            (**(code **)(*(int *)RVar8 + 0xe0))(RVar8);
            pLVar6 = (this->fields)._.gameMeterVisualEffects;
            iVar7 = iVar7 + 1;
            if (pLVar6 == (List_1_GameMeterVisuals_GameMeterVisualEffect_ *)0x0)
            goto code_?;
          }
          if (this_03 != (SparselyPopulatedArrayFragment_1_System_Object_ *)0x0) {
            iVar7 = (this_03->fields)._freeCount;
            iVar9 = mscorlib.dll::System::Threading::SparselyPopulatedArrayFragment`1[System::
                    Object]::SparselyPopulatedArrayFragment_1_System_Object__get_Length
                              (this_03,(MethodInfo *)0x0);
            (this->fields).elapsedInterpolationTime = 0.0;
            (this->fields).interpolateTowardsXPProgress = (float)(iVar7 / iVar9);
            return;
          }
        }
      }
      goto code_?;
    }
    pUVar10 = (UnityAction *)0x0;
    if (pUVar5->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar10 = pUVar5;
    }
    if (pUVar10 != (UnityAction *)0x0) {
      TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = pUVar10;
      pUVar10 = (UnityAction *)0x0;
      if (pUVar5->klass == TypeInfo__UnityEngine__Events__UnityAction) {
        pUVar10 = pUVar5;
      }
      if (pUVar10 != (UnityAction *)0x0) goto code_?;
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::GameMeterXP::GameMeterXP_Initialize(GameMeterXP *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__GameMeterXP__Init__);
    func_?(&TypeInfo__LevelingManager);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  if ((TypeInfo__LevelingManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__LevelingManager);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__LevelingManager);
    cRam_? = '\x01';
  }
  if ((TypeInfo__LevelingManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__LevelingManager);
  }
  if (TypeInfo__LevelingManager->static_fields->_IsInitialized_k__BackingField == 0) {
code_?:
    if ((TypeInfo__LevelingManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__LevelingManager);
    }
    pUVar1 = TypeInfo__LevelingManager->static_fields->OnLevelingInitialized;
    pNVar2 = (NavMesh_OnNavMeshPreUpdate *)
             func_?(TypeInfo__UnityEngine__Events__UnityAction);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar2,(Object *)this,MethodInfo__GameMeterXP__Init__,(MethodInfo *)0x0);
    pUVar1 = (UnityAction *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pUVar1,(Delegate *)pNVar2,(MethodInfo *)0x0);
    if (pUVar1 == (UnityAction *)0x0) {
      TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = (UnityAction *)0x0;
      func_?();
      return;
    }
    pUVar3 = (UnityAction *)0x0;
    if (pUVar1->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar3 = pUVar1;
    }
    if (pUVar3 != (UnityAction *)0x0) {
      TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = pUVar3;
      pUVar3 = (UnityAction *)0x0;
      if (pUVar1->klass == TypeInfo__UnityEngine__Events__UnityAction) {
        pUVar3 = pUVar1;
      }
      if (pUVar3 != (UnityAction *)0x0) {
        func_?();
        return;
      }
      goto code_?;
    }
    func_?();
  }
  else {
    pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar4 != (MVNetworkGame *)0x0) &&
       (pMVar5 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar4,(MethodInfo *)0x0),
       pMVar5 != (MVLocalPlayer *)0x0)) {
      this = (GameMeterXP *)0x0;
      bVar6 = MVLocalPlayer::MVLocalPlayer_get_CanGetXPProgressData(pMVar5,(MethodInfo *)0x0);
      if (bVar6 == 0) goto code_?;
      if (cRam_? == '\0') {
        func_?();
        func_?();
        func_?();
        func_?(&TypeInfo__XPProgress__OnXPProgressDataDelegate);
        func_?(&TypeInfo__UnityEngine__Events__UnityAction);
        cRam_? = '\x01';
      }
      pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar4 == (MVNetworkGame *)0x0) ||
         (pMVar5 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar4,(MethodInfo *)0x0),
         pMVar5 == (MVLocalPlayer *)0x0)) {
code_?:
        func_?();
code_?:
        func_?();
      }
      else {
        pXVar7 = (pMVar5->fields).OnXPProgressData;
        this_00 = (UnityAction_1_System_Object_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
        UnityAction_1_System_Object___ctor
                  (this_00,(Object *)in_stack_8,
                   MethodInfo__GameMeterXP__OnProgressUpdate_XPProgressData_,(MethodInfo *)0x0);
        pXVar7 = (XPProgress_OnXPProgressDataDelegate *)
                 mscorlib.dll::System::Delegate::Delegate_Combine
                           ((Delegate *)pXVar7,(Delegate *)this_00,(MethodInfo *)0x0);
        if (pXVar7 == (XPProgress_OnXPProgressDataDelegate *)0x0) {
          (pMVar5->fields).OnXPProgressData = (XPProgress_OnXPProgressDataDelegate *)0x0;
        }
        else {
          pXVar9 = (XPProgress_OnXPProgressDataDelegate *)0x0;
          if (pXVar7->klass == TypeInfo__XPProgress__OnXPProgressDataDelegate) {
            pXVar9 = pXVar7;
          }
          if (pXVar9 == (XPProgress_OnXPProgressDataDelegate *)0x0) {
            func_?();
            goto code_?;
          }
          (pMVar5->fields).OnXPProgressData = pXVar9;
          pXVar9 = (XPProgress_OnXPProgressDataDelegate *)0x0;
          if (pXVar7->klass == TypeInfo__XPProgress__OnXPProgressDataDelegate) {
            pXVar9 = pXVar7;
          }
          if (pXVar9 == (XPProgress_OnXPProgressDataDelegate *)0x0) goto code_?;
        }
        func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                  (in_stack_8,1,(MethodInfo *)0x0);
        if ((TypeInfo__LevelingManager->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pUVar1 = TypeInfo__LevelingManager->static_fields->OnLevelingInitialized;
        pNVar2 = (NavMesh_OnNavMeshPreUpdate *)func_?();
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (pNVar2,(Object *)in_stack_8,MethodInfo__GameMeterXP__Init__,
                   (MethodInfo *)0x0);
        pUVar1 = (UnityAction *)
                 mscorlib.dll::System::Delegate::Delegate_Remove
                           ((Delegate *)pUVar1,(Delegate *)pNVar2,(MethodInfo *)0x0);
        if (pUVar1 == (UnityAction *)0x0) {
          TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = (UnityAction *)0x0;
code_?:
          func_?();
          pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar4 != (MVNetworkGame *)0x0) &&
             (pMVar5 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar4,(MethodInfo *)0x0),
             pMVar5 != (MVLocalPlayer *)0x0)) {
            this_01 = (SparselyPopulatedArrayFragment_1_System_Object_ *)
                      DayNightCycle::DayNightCycle_get__skyParamsList
                                ((DayNightCycle *)pMVar5,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              func_?();
              func_?();
              cRam_? = '\x01';
            }
            pMVar10 = in_stack_8[1].monitor;
            iVar11 = 0;
            if (pMVar10 != (MonitorData *)0x0) {
              while (iVar11 < *(int *)(pMVar10 + 0xc)) {
                if (((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                     in_stack_8[1].monitor ==
                     (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
                   (RVar12 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                            RegularExpressions::RegexCharClass+SingleRange]::
                            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                      ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                        *)in_stack_8[1].monitor,iVar11,
                                       MethodInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>__get_Item_int_
                                      ), RVar12 == (RegexCharClass_SingleRange)0x0))
                goto code_?;
                (**(code **)(*(int *)RVar12 + 0xe0))();
                pMVar10 = in_stack_8[1].monitor;
                iVar11 = iVar11 + 1;
                if (pMVar10 == (MonitorData *)0x0) goto code_?;
              }
              if (this_01 != (SparselyPopulatedArrayFragment_1_System_Object_ *)0x0) {
                iVar11 = (this_01->fields)._freeCount;
                iVar13 = mscorlib.dll::System::Threading::SparselyPopulatedArrayFragment`1[System::
                        Object]::SparselyPopulatedArrayFragment_1_System_Object__get_Length
                                  (this_01,(MethodInfo *)0x0);
                in_stack_8[3].monitor = (MonitorData *)0x0;
                in_stack_8[2].fields._._.m_CachedPtr = (void *)(float)(iVar11 / iVar13);
                return;
              }
            }
          }
          goto code_?;
        }
        pUVar3 = (UnityAction *)0x0;
        if (pUVar1->klass == TypeInfo__UnityEngine__Events__UnityAction) {
          pUVar3 = pUVar1;
        }
        if (pUVar3 != (UnityAction *)0x0) {
          TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = pUVar3;
          pUVar3 = (UnityAction *)0x0;
          if (pUVar1->klass == TypeInfo__UnityEngine__Events__UnityAction) {
            pUVar3 = pUVar1;
          }
          if (pUVar3 != (UnityAction *)0x0) goto code_?;
          goto code_?;
        }
      }
      func_?();
code_?:
      func_?();
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void OnProgressUpdate(XPProgressData) */

void Assembly-CSharp.dll::GameMeterXP::GameMeterXP_OnProgressUpdate
               (GameMeterXP *this,XPProgressData *xpProgress,MethodInfo *method)

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
  iVar1 = 0;
  pLVar2 = (this->fields)._.gameMeterVisualEffects;
  if (pLVar2 != (List_1_GameMeterVisuals_GameMeterVisualEffect_ *)0x0) {
    while (iVar1 < (pLVar2->fields)._size) {
      this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                (this->fields)._.gameMeterVisualEffects;
      if ((this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
         (RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (this_00,iVar1,
                             MethodInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>__get_Item_int_
                            ), RVar3 == (RegexCharClass_SingleRange)0x0)) goto code_?;
      (**(code **)(*(int *)RVar3 + 0xe0))(RVar3,*(undefined4 *)(*(int *)RVar3 + 0xe4));
      pLVar2 = (this->fields)._.gameMeterVisualEffects;
      iVar1 = iVar1 + 1;
      if (pLVar2 == (List_1_GameMeterVisuals_GameMeterVisualEffect_ *)0x0) goto code_?;
    }
    if (xpProgress != (XPProgressData *)0x0) {
      iVar1 = (xpProgress->fields).playerCurrentXP;
      iVar4 = mscorlib.dll::System::Threading::SparselyPopulatedArrayFragment`1[System::Object]::
              SparselyPopulatedArrayFragment_1_System_Object__get_Length
                        ((SparselyPopulatedArrayFragment_1_System_Object_ *)xpProgress,
                         (MethodInfo *)0x0);
      (this->fields).elapsedInterpolationTime = 0.0;
      (this->fields).interpolateTowardsXPProgress = (float)(iVar1 / iVar4);
      return;
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetShowGameMeter(Boolean) */

void Assembly-CSharp.dll::GameMeterXP::GameMeterXP_SetShowGameMeter
               (GameMeterXP *this,bool show,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields).XPMeter;
  if (pGVar2 != (GameObject *)0x0) {
    if (pcRam_? == (code *)0x0) {
      pcRam_? = (code *)func_?();
    }
    puStack_1 = (undefined1 *)_show;
    pGStack_3 = pGVar2;
    (*pcRam_?)();
    return;
  }
  uVar4 = func_?(&puStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::GameMeterXP::GameMeterXP_Update(GameMeterXP *this,MethodInfo *method)

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
  fVar1 = (this->fields).elapsedInterpolationTime;
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  if (fVar2 + _UNK_? <= fVar1) {
    return;
  }
  fVar1 = (this->fields).elapsedInterpolationTime;
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  fVar2 = fVar2 + fVar1;
  fVar1 = (this->fields).previousXPProgress;
  (this->fields).elapsedInterpolationTime = fVar2;
  if (fVar2 < 0.0) {
    fVar2 = 0.0;
  }
  else if (_UNK_? < fVar2) {
    fVar2 = _UNK_?;
  }
  pLVar3 = (this->fields)._.gameMeterVisualEffects;
  index = 0;
  (this->fields).previousXPProgress =
       ((this->fields).interpolateTowardsXPProgress - fVar1) * fVar2 + fVar1;
  while (pLVar3 != (List_1_GameMeterVisuals_GameMeterVisualEffect_ *)0x0) {
    if ((pLVar3->fields)._size <= index) {
      return;
    }
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this->fields)._.gameMeterVisualEffects;
    if ((this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
       (RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (this_00,index,
                           MethodInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>__get_Item_int_
                          ), RVar4 == (RegexCharClass_SingleRange)0x0)) break;
    (**(code **)(*(int *)RVar4 + 0xe0))(RVar4);
    index = index + 1;
    pLVar3 = (this->fields)._.gameMeterVisualEffects;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* GameMeterXP() */

void Assembly-CSharp.dll::GameMeterXP::GameMeterXP__ctor(GameMeterXP *this,MethodInfo *method)

{
  (this->fields).elapsedInterpolationTime = 1.0;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>__List__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>
                   );
    cRam_? = '\x01';
  }
  this_00 = (List_1_GameMeterVisuals_GameMeterVisualEffect_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>
                           );
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>__List__
            );
  (this->fields)._.gameMeterVisualEffects = this_00;
  func_?(&(this->fields)._.gameMeterVisualEffects,this_00);
  (this->fields)._.meterActive = 1;
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

