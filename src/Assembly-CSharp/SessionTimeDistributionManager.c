
/* Void OnPlayerReady() */

void Assembly-CSharp.dll::SessionTimeDistributionManager::
     SessionTimeDistributionManager_OnPlayerReady
               (SessionTimeDistributionManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__SessionTimeDistributionManager__OnPlayerReady__);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    pMVar2 = (pMVar1->fields).playerContainer;
    if (pMVar2 != (MVPlayerContainer *)0x0) {
      pAVar3 = (pMVar2->fields).OnLocalPlayerReady;
      this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
      if (this_00 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (this_00,(Object *)this,
                   MethodInfo__SessionTimeDistributionManager__OnPlayerReady__,(MethodInfo *)0x0);
        pAVar3 = (Action *)
                 mscorlib.dll::System::Delegate::Delegate_Remove
                           ((Delegate *)pAVar3,(Delegate *)this_00,(MethodInfo *)0x0);
        if (pAVar3 == (Action *)0x0) {
          (pMVar2->fields).OnLocalPlayerReady = (Action *)0x0;
code_?:
          func_?();
          (this->fields).countingSessionTime = 1;
          fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
          (this->fields).startTime = fVar4;
          return;
        }
        pAVar5 = (Action *)0x0;
        if (pAVar3->klass == TypeInfo__System__Action) {
          pAVar5 = pAVar3;
        }
        if (pAVar5 != (Action *)0x0) {
          (pMVar2->fields).OnLocalPlayerReady = pAVar5;
          pAVar5 = (Action *)0x0;
          if (pAVar3->klass == TypeInfo__System__Action) {
            pAVar5 = pAVar3;
          }
          if (pAVar5 != (Action *)0x0) goto code_?;
        }
        goto code_?;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::SessionTimeDistributionManager::SessionTimeDistributionManager_Start
               (SessionTimeDistributionManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__System__Collections__Generic__Queue<int>__Enqueue_int_);
    func_?(&MethodInfo__SessionTimeDistributionManager__OnPlayerReady__);
    cRam_? = '\x01';
  }
  item = 0;
  do {
    this_00 = (this->fields).intervals;
    if (this_00 == (Queue_1_System_Int32_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::Queue`1[System::Int32]::
    Queue_1_System_Int32__Enqueue
              (this_00,item,MethodInfo__System__Collections__Generic__Queue<int>__Enqueue_int_);
    item = item + 2;
  } while (item < 0x12);
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
    if (pMVar2 != (MVLocalPlayer *)0x0) {
      if ((pMVar2->fields)._.playerState == 1) {
        if (cRam_? == '\0') {
          func_?();
          func_?(&MethodInfo__SessionTimeDistributionManager__OnPlayerReady__);
          cRam_? = '\x01';
        }
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar1 != (MVNetworkGame *)0x0) &&
           (pMVar3 = (pMVar1->fields).playerContainer, pMVar3 != (MVPlayerContainer *)0x0)) {
          pAVar4 = (pMVar3->fields).OnLocalPlayerReady;
          pNVar5 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
          if (pNVar5 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
            UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
            NavMesh_OnNavMeshPreUpdate__ctor
                      (pNVar5,(Object *)this,
                       MethodInfo__SessionTimeDistributionManager__OnPlayerReady__,(MethodInfo *)0x0
                      );
            pAVar4 = (Action *)
                     mscorlib.dll::System::Delegate::Delegate_Remove
                               ((Delegate *)pAVar4,(Delegate *)pNVar5,(MethodInfo *)0x0);
            if (pAVar4 == (Action *)0x0) {
              (pMVar3->fields).OnLocalPlayerReady = (Action *)0x0;
code_?:
              func_?();
              (this->fields).countingSessionTime = 1;
              fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                                ((MethodInfo *)0x0);
              (this->fields).startTime = fVar6;
              return;
            }
            pAVar7 = (Action *)0x0;
            if (pAVar4->klass == TypeInfo__System__Action) {
              pAVar7 = pAVar4;
            }
            if (pAVar7 != (Action *)0x0) {
              (pMVar3->fields).OnLocalPlayerReady = pAVar7;
              pAVar7 = (Action *)0x0;
              if (pAVar4->klass == TypeInfo__System__Action) {
                pAVar7 = pAVar4;
              }
              if (pAVar7 != (Action *)0x0) goto code_?;
            }
            goto code_?;
          }
        }
      }
      else {
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar1 != (MVNetworkGame *)0x0) &&
           (pMVar3 = (pMVar1->fields).playerContainer, pMVar3 != (MVPlayerContainer *)0x0)) {
          pAVar4 = (pMVar3->fields).OnLocalPlayerReady;
          pNVar5 = (NavMesh_OnNavMeshPreUpdate *)func_?();
          if (pNVar5 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
            UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
            NavMesh_OnNavMeshPreUpdate__ctor
                      (pNVar5,(Object *)this,
                       MethodInfo__SessionTimeDistributionManager__OnPlayerReady__,(MethodInfo *)0x0
                      );
            pAVar4 = (Action *)
                     mscorlib.dll::System::Delegate::Delegate_Combine
                               ((Delegate *)pAVar4,(Delegate *)pNVar5,(MethodInfo *)0x0);
            if (pAVar4 == (Action *)0x0) {
              (pMVar3->fields).OnLocalPlayerReady = (Action *)0x0;
              func_?();
              return;
            }
            pAVar7 = (Action *)0x0;
            if (pAVar4->klass == TypeInfo__System__Action) {
              pAVar7 = pAVar4;
            }
            if (pAVar7 != (Action *)0x0) {
              (pMVar3->fields).OnLocalPlayerReady = pAVar7;
              pAVar7 = (Action *)0x0;
              if (pAVar4->klass == TypeInfo__System__Action) {
                pAVar7 = pAVar4;
              }
              if (pAVar7 != (Action *)0x0) {
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
code_?:
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::SessionTimeDistributionManager::SessionTimeDistributionManager_Update
               (SessionTimeDistributionManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__Queue<int>__Dequeue__);
    func_?(&MethodInfo__System__Collections__Generic__Queue<int>__Peek__);
    func_?(&MethodInfo__System__Collections__Generic__Queue<int>__get_Count__);
    func_?(&TypeInfo__StatHatWrapper);
    func_?(&StringLiteral_SessionTimeMeasuredAtMinute);
    cRam_? = '\x01';
  }
  if ((this->fields).countingSessionTime == 0) {
    return;
  }
  pQVar1 = (this->fields).intervals;
  if (pQVar1 != (Queue_1_System_Int32_ *)0x0) {
    if ((pQVar1->fields)._size < 1) {
      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                ((Behaviour *)this,0,(MethodInfo *)0x0);
      return;
    }
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    this_00 = (Queue_1_System_Object_ *)(this->fields).intervals;
    if (this_00 != (Queue_1_System_Object_ *)0x0) {
      fVar3 = (this->fields).startTime;
      pOVar4 = mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
               Queue_1_System_Object__Peek
                         (this_00,MethodInfo__System__Collections__Generic__Queue<int>__Peek__);
      if ((float)((int)pOVar4 * 0x3c) < fVar2 - fVar3) {
        pQVar1 = (this->fields).intervals;
        if (pQVar1 == (Queue_1_System_Int32_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Queue`1[System::Int32]::
        Queue_1_System_Int32__Dequeue
                  (pQVar1,MethodInfo__System__Collections__Generic__Queue<int>__Dequeue__);
        pSVar5 = mscorlib.dll::System::Int32::Int32_ToString
                           ((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
        pSVar5 = mscorlib.dll::System::String::String_Concat_3
                           (StringLiteral_SessionTimeMeasuredAtMinute,pSVar5,(MethodInfo *)0x0);
        if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        StatHatWrapper::StatHatWrapper_Count(pSVar5,1,(MethodInfo *)0x0);
      }
      return;
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* SessionTimeDistributionManager() */

void Assembly-CSharp.dll::SessionTimeDistributionManager::SessionTimeDistributionManager__ctor
               (SessionTimeDistributionManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__Queue<int>__Queue__);
    func_?(&TypeInfo__System__Collections__Generic__Queue<int>);
    cRam_? = '\x01';
  }
  this_00 = (Queue_1_System_Int32_ *)
            func_?(TypeInfo__System__Collections__Generic__Queue<int>);
  if (this_00 != (Queue_1_System_Int32_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Stack`1[System::Object]::
    Stack_1_System_Object___ctor
              ((Stack_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Queue<int>__Queue__);
    (this->fields).intervals = this_00;
    func_?(&(this->fields).intervals,this_00);
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform__ctor
              ((Transform *)this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

