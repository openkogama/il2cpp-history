
/* Void OnPlayerReady() */

void Assembly-CSharp.dll::FPSDistributionManager::FPSDistributionManager_OnPlayerReady
               (FPSDistributionManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = (MVAvatar *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVAvatar *)0x0) {
    pMVar1 = MVAvatar::MVAvatar_get_Shield(this_00,(MethodInfo *)0x0);
    if (pMVar1 != (MVRuntimeDataVariableClampedFloat *)0x0) {
      pDVar2 = *(Delegate **)&(pMVar1->fields)._._.writeThrough;
      this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(TypeInfo__System__Action);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_01,(Object *)this,MethodInfo__FPSDistributionManager__OnPlayerReady__,
                 (MethodInfo *)0x0);
      pDStack3 =
           mscorlib.dll::System::Delegate::Delegate_Remove
                     (pDVar2,(Delegate *)this_01,(MethodInfo *)0x0);
      pDVar2 = (Delegate *)0x0;
      if (pDStack3 == (Delegate *)0x0) {
code_?:
        *(Delegate **)&(pMVar1->fields)._._.writeThrough = pDVar2;
        (this->fields).calculatingFPS = 1;
        fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
        (this->fields).startTime = fVar4;
        return;
      }
      if ((Action__Class *)pDStack3->klass == TypeInfo__System__Action) {
        pDVar2 = pDStack3;
      }
      if (pDVar2 != (Delegate *)0x0) goto code_?;
      goto code_?;
    }
  }
  func_?();
  pDStack3 = extraout_ECX;
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::FPSDistributionManager::FPSDistributionManager_Start
               (FPSDistributionManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  item = (SmoothPhysicsMovement_Package *)0x0;
  do {
    this_00 = (Queue_1_SmoothPhysicsMovement_Package_ *)(this->fields).intervals;
    if (this_00 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) goto code_?;
    System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]::
    Queue_1_SmoothPhysicsMovement_Package__Enqueue
              (this_00,item,MethodInfo__System__Collections__Generic__Queue<int>__Enqueue_int_);
    item = (SmoothPhysicsMovement_Package *)((int)&item->klass + 2);
  } while ((int)item < 0x12);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_01 != (MVNetworkGame *)0x0) {
    this_02 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_01,(MethodInfo *)0x0);
    if (this_02 != (MVLocalPlayer *)0x0) {
      bVar1 = MVPlayer::MVPlayer_get_IsReady((MVPlayer *)this_02,(MethodInfo *)0x0);
      if (bVar1 == 0) {
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        pMVar2 = (MVAvatar *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar2 != (MVAvatar *)0x0) {
          pMVar3 = MVAvatar::MVAvatar_get_Shield(pMVar2,(MethodInfo *)0x0);
          if (pMVar3 != (MVRuntimeDataVariableClampedFloat *)0x0) {
            pDVar4 = *(Delegate **)&(pMVar3->fields)._._.writeThrough;
            pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                      *)func_?(TypeInfo__System__Action);
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar5,(Object *)this,MethodInfo__FPSDistributionManager__OnPlayerReady__,
                       (MethodInfo *)0x0);
            pDVar6 = mscorlib.dll::System::Delegate::Delegate_Combine
                               (pDVar4,(Delegate *)pUVar5,(MethodInfo *)0x0);
            pDVar4 = (Delegate *)0x0;
            if (pDVar6 != (Delegate *)0x0) {
              if ((Action__Class *)pDVar6->klass == TypeInfo__System__Action) {
                pDVar4 = pDVar6;
              }
              if (pDVar4 == (Delegate *)0x0) goto code_?;
            }
            *(Delegate **)&(pMVar3->fields)._._.writeThrough = pDVar4;
            return;
          }
        }
      }
      else {
        if (cRam_? == '\0') {
          func_?(_UNK_?);
          cRam_? = '\x01';
        }
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        pMVar2 = (MVAvatar *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar2 != (MVAvatar *)0x0) {
          pMVar3 = MVAvatar::MVAvatar_get_Shield(pMVar2,(MethodInfo *)0x0);
          if (pMVar3 != (MVRuntimeDataVariableClampedFloat *)0x0) {
            pDVar4 = *(Delegate **)&(pMVar3->fields)._._.writeThrough;
            pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                      *)func_?(TypeInfo__System__Action);
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar5,(Object *)this,MethodInfo__FPSDistributionManager__OnPlayerReady__,
                       (MethodInfo *)0x0);
            pDVar6 = mscorlib.dll::System::Delegate::Delegate_Remove
                               (pDVar4,(Delegate *)pUVar5,(MethodInfo *)0x0);
            pDVar4 = (Delegate *)0x0;
            if (pDVar6 == (Delegate *)0x0) {
code_?:
              *(Delegate **)&(pMVar3->fields)._._.writeThrough = pDVar4;
              (this->fields).calculatingFPS = 1;
              fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                                ((MethodInfo *)0x0);
              (this->fields).startTime = fVar7;
              return;
            }
            if ((Action__Class *)pDVar6->klass == TypeInfo__System__Action) {
              pDVar4 = pDVar6;
            }
            if (pDVar4 != (Delegate *)0x0) goto code_?;
            goto code_?;
          }
        }
      }
    }
  }
code_?:
  func_?(0);
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::FPSDistributionManager::FPSDistributionManager_Update
               (FPSDistributionManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).calculatingFPS == 0) {
    return;
  }
  pQVar1 = (this->fields).intervals;
  if (pQVar1 != (Queue_1_System_Int32_ *)0x0) {
    pIVar2 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
             KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
             KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                       ((KogamaSettingNumericBase_1_System_Single_ *)pQVar1,
                        MethodInfo__System__Collections__Generic__Queue<int>__get_Count__);
    if ((int)pIVar2 < 1) {
      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                ((Behaviour *)this,0,(MethodInfo *)0x0);
      return;
    }
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    pQVar1 = (this->fields).intervals;
    if (pQVar1 != (Queue_1_System_Int32_ *)0x0) {
      fVar4 = (this->fields).startTime;
      iVar5 = System.dll::System::Collections::Generic::Queue`1[System::Int32]::
              Queue_1_System_Int32__Peek
                        (pQVar1,MethodInfo__System__Collections__Generic__Queue<int>__Peek__);
      if ((float)(iVar5 * 0x3c) < fVar3 - fVar4) {
        this_00 = (Queue_1_SmoothPhysicsMovement_Package_ *)(this->fields).intervals;
        if (this_00 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) goto code_?;
        System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]::
        Queue_1_SmoothPhysicsMovement_Package__Dequeue
                  (this_00,MethodInfo__System__Collections__Generic__Queue<int>__Dequeue__);
        pSVar6 = (String *)func_?();
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?();
        }
        pSVar6 = mscorlib.dll::System::String::String_Concat_2
                           (StringLiteral_FPSMeasuredAtMinute,pSVar6,(MethodInfo *)0x0);
        fVar3 = FpsCounter::FpsCounter_get_Fps((MethodInfo *)0x0);
        if ((((uint)(TypeInfo__StatHatWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__StatHatWrapper->_1).cctor_started == 0)) {
          func_?();
        }
        StatHatWrapper::StatHatWrapper_Value_1(pSVar6,fVar3,(MethodInfo *)0x0);
      }
      return;
    }
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* FPSDistributionManager() */

void Assembly-CSharp.dll::FPSDistributionManager::FPSDistributionManager__ctor
               (FPSDistributionManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Queue_1_SmoothPhysicsMovement_Package_ *)
            func_?(TypeInfo__System__Collections__Generic__Queue<int>);
  System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]::
  Queue_1_SmoothPhysicsMovement_Package___ctor
            (this_00,MethodInfo__System__Collections__Generic__Queue<int>__Queue__);
  (this->fields).intervals = (Queue_1_System_Int32_ *)this_00;
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

