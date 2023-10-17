
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
  }
  else {
    pXVar3 = (pMVar2->fields).OnXPProgressData;
    this_01 = (Action_1_Object_ *)func_?(TypeInfo__XPProgress__OnXPProgressDataDelegate);
    if (this_01 == (Action_1_Object_ *)0x0) goto code_?;
    mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
              (this_01,(Object *)this,MethodInfo__GameMeterXP__OnProgressUpdate_XPProgressData_,
               (MethodInfo *)0x0);
    pXVar3 = (XPProgress_OnXPProgressDataDelegate *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pXVar3,(Delegate *)this_01,(MethodInfo *)0x0);
    if (pXVar3 != (XPProgress_OnXPProgressDataDelegate *)0x0) {
      pXVar4 = (XPProgress_OnXPProgressDataDelegate *)0x0;
      if (pXVar3->klass == TypeInfo__XPProgress__OnXPProgressDataDelegate) {
        pXVar4 = pXVar3;
      }
      if (pXVar4 != (XPProgress_OnXPProgressDataDelegate *)0x0) {
        (pMVar2->fields).OnXPProgressData = pXVar4;
        pXVar4 = (XPProgress_OnXPProgressDataDelegate *)0x0;
        if (pXVar3->klass == TypeInfo__XPProgress__OnXPProgressDataDelegate) {
          pXVar4 = pXVar3;
        }
        if (pXVar4 != (XPProgress_OnXPProgressDataDelegate *)0x0) goto code_?;
      }
      func_?();
      goto code_?;
    }
    (pMVar2->fields).OnXPProgressData = (XPProgress_OnXPProgressDataDelegate *)0x0;
code_?:
    func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this,1,(MethodInfo *)0x0);
    if ((TypeInfo__LevelingManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pUVar5 = TypeInfo__LevelingManager->static_fields->OnLevelingInitialized;
    this_02 = (NavMesh_OnNavMeshPreUpdate *)func_?();
    if (this_02 == (NavMesh_OnNavMeshPreUpdate *)0x0) goto code_?;
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
        this_03 = MVLocalPlayer::MVLocalPlayer_get_XPProgressData(pMVar2,(MethodInfo *)0x0);
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
            (**(code **)(*(int *)RVar8 + 0xdc))(RVar8);
            pLVar6 = (this->fields)._.gameMeterVisualEffects;
            iVar7 = iVar7 + 1;
            if (pLVar6 == (List_1_GameMeterVisuals_GameMeterVisualEffect_ *)0x0)
            goto code_?;
          }
          if (this_03 != (XPProgressData *)0x0) {
            iVar7 = (this_03->fields).playerCurrentXP;
            iVar9 = mscorlib.dll::System::Threading::SparselyPopulatedArrayFragment`1[System::
                    Object]::SparselyPopulatedArrayFragment_1_System_Object__get_Length
                              ((SparselyPopulatedArrayFragment_1_System_Object_ *)this_03,
                               (MethodInfo *)0x0);
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
    if (pUVar10 == (UnityAction *)0x0) goto code_?;
    TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = pUVar10;
    pUVar10 = (UnityAction *)0x0;
    if (pUVar5->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar10 = pUVar5;
    }
    if (pUVar10 != (UnityAction *)0x0) goto code_?;
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
    if (pNVar2 == (NavMesh_OnNavMeshPreUpdate *)0x0) {
code_?:
      func_?();
      pUStack3 = extraout_EDX;
    }
    else {
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (pNVar2,(Object *)0x0,MethodInfo__GameMeterXP__Init__,(MethodInfo *)0x0);
      pUVar1 = (UnityAction *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pUVar1,(Delegate *)pNVar2,(MethodInfo *)0x0);
      if (pUVar1 == (UnityAction *)0x0) {
        TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = (UnityAction *)0x0;
        pUStack3 = (UnityAction__Class *)0x0;
        func_?();
        return;
      }
      pUVar4 = (UnityAction *)0x0;
      if (pUVar1->klass == TypeInfo__UnityEngine__Events__UnityAction) {
        pUVar4 = pUVar1;
      }
      pUStack3 = TypeInfo__UnityEngine__Events__UnityAction;
      if (pUVar4 == (UnityAction *)0x0) goto code_?;
      TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = pUVar4;
      pUVar4 = (UnityAction *)0x0;
      if (pUVar1->klass == TypeInfo__UnityEngine__Events__UnityAction) {
        pUVar4 = pUVar1;
      }
      pUStack3 = TypeInfo__UnityEngine__Events__UnityAction;
      if (pUVar4 != (UnityAction *)0x0) {
        pUStack3 = (UnityAction__Class *)pUVar4;
        func_?();
        return;
      }
    }
    pUStack3 = (UnityAction__Class *)func_?();
code_?:
    func_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar6 == (MVNetworkGame *)0x0) ||
     (pMVar7 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar6,(MethodInfo *)0x0),
     pMVar7 == (MVLocalPlayer *)0x0)) goto code_?;
  bVar8 = MVLocalPlayer::MVLocalPlayer_get_CanGetXPProgressData(pMVar7,(MethodInfo *)0x0);
  if (bVar8 == 0) goto code_?;
  pXStack9 = extraout_ECX;
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    func_?(&TypeInfo__XPProgress__OnXPProgressDataDelegate);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar6 == (MVNetworkGame *)0x0) ||
     (pMVar7 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar6,(MethodInfo *)0x0),
     pMVar7 == (MVLocalPlayer *)0x0)) {
code_?:
    func_?();
  }
  else {
    pXStack9 = (pMVar7->fields).OnXPProgressData;
    this_00 = (Action_1_Object_ *)func_?();
    if (this_00 == (Action_1_Object_ *)0x0) goto code_?;
    mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
              (this_00,(Object *)in_stack_10,
               MethodInfo__GameMeterXP__OnProgressUpdate_XPProgressData_,(MethodInfo *)0x0);
    pXVar11 = (XPProgress_OnXPProgressDataDelegate *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pXStack9,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pXVar11 != (XPProgress_OnXPProgressDataDelegate *)0x0) {
      pXVar12 = (XPProgress_OnXPProgressDataDelegate *)0x0;
      if (pXVar11->klass == TypeInfo__XPProgress__OnXPProgressDataDelegate) {
        pXVar12 = pXVar11;
      }
      if (pXVar12 != (XPProgress_OnXPProgressDataDelegate *)0x0) {
        (pMVar7->fields).OnXPProgressData = pXVar12;
        pXVar12 = (XPProgress_OnXPProgressDataDelegate *)0x0;
        if (pXVar11->klass == TypeInfo__XPProgress__OnXPProgressDataDelegate) {
          pXVar12 = pXVar11;
        }
        if (pXVar12 != (XPProgress_OnXPProgressDataDelegate *)0x0) goto code_?;
      }
      func_?();
      goto code_?;
    }
    (pMVar7->fields).OnXPProgressData = (XPProgress_OnXPProgressDataDelegate *)0x0;
code_?:
    func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              (in_stack_10,1,(MethodInfo *)0x0);
    if ((TypeInfo__LevelingManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pUVar1 = TypeInfo__LevelingManager->static_fields->OnLevelingInitialized;
    pNVar2 = (NavMesh_OnNavMeshPreUpdate *)func_?();
    if (pNVar2 == (NavMesh_OnNavMeshPreUpdate *)0x0) goto code_?;
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar2,(Object *)in_stack_10,MethodInfo__GameMeterXP__Init__,(MethodInfo *)0x0)
    ;
    pUVar1 = (UnityAction *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pUVar1,(Delegate *)pNVar2,(MethodInfo *)0x0);
    if (pUVar1 == (UnityAction *)0x0) {
      TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = (UnityAction *)0x0;
code_?:
      func_?();
      pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar6 != (MVNetworkGame *)0x0) &&
         (pMVar7 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar6,(MethodInfo *)0x0),
         pMVar7 != (MVLocalPlayer *)0x0)) {
        this_01 = MVLocalPlayer::MVLocalPlayer_get_XPProgressData(pMVar7,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?();
          func_?();
          cRam_? = '\x01';
        }
        pBVar13 = in_stack_10[1].klass;
        iVar14 = 0;
        if (pBVar13 != (Behaviour__Class *)0x0) {
          while (iVar14 < (int)(pBVar13->_0).namespaze) {
            if ((in_stack_10[1].klass == (Behaviour__Class *)0x0) ||
               (RVar15 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                        RegularExpressions::RegexCharClass+SingleRange]::
                        List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                  ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                    *)in_stack_10[1].klass,iVar14,
                                   MethodInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>__get_Item_int_
                                  ), RVar15 == (RegexCharClass_SingleRange)0x0))
            goto code_?;
            (**(code **)(*(int *)RVar15 + 0xdc))();
            pBVar13 = in_stack_10[1].klass;
            iVar14 = iVar14 + 1;
            if (pBVar13 == (Behaviour__Class *)0x0) goto code_?;
          }
          if (this_01 != (XPProgressData *)0x0) {
            iVar14 = (this_01->fields).playerCurrentXP;
            iVar16 = mscorlib.dll::System::Threading::SparselyPopulatedArrayFragment`1[System::
                    Object]::SparselyPopulatedArrayFragment_1_System_Object__get_Length
                              ((SparselyPopulatedArrayFragment_1_System_Object_ *)this_01,
                               (MethodInfo *)0x0);
            in_stack_10[3].klass = (Behaviour__Class *)0x0;
            in_stack_10[2].monitor = (MonitorData *)(float)(iVar14 / iVar16);
            return;
          }
        }
      }
      goto code_?;
    }
    pUVar4 = (UnityAction *)0x0;
    if (pUVar1->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar4 = pUVar1;
    }
    if (pUVar4 == (UnityAction *)0x0) goto code_?;
    TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = pUVar4;
    pUVar4 = (UnityAction *)0x0;
    if (pUVar1->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar4 = pUVar1;
    }
    if (pUVar4 != (UnityAction *)0x0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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
      (**(code **)(*(int *)RVar3 + 0xdc))(RVar3,*(undefined4 *)(*(int *)RVar3 + 0xe0));
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
    (**(code **)(*(int *)RVar4 + 0xdc))(RVar4);
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
  if (this_00 != (List_1_GameMeterVisuals_GameMeterVisualEffect_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>__List__
              );
    (this->fields)._.gameMeterVisualEffects = this_00;
    func_?(&(this->fields)._.gameMeterVisualEffects,this_00);
    (this->fields)._.meterActive = 1;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform__ctor
              ((Transform *)this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

