
/* Void OnPlayerReady() */

void Assembly-CSharp.dll::FPSDistributionManager::FPSDistributionManager_OnPlayerReady
               (FPSDistributionManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__FPSDistributionManager__OnPlayerReady__);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    pMVar2 = (pMVar1->fields).playerContainer;
    if (pMVar2 != (MVPlayerContainer *)0x0) {
      pAVar3 = (pMVar2->fields).OnLocalPlayerReady;
      ppAVar4 = &(pMVar2->fields).OnLocalPlayerReady;
      this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_00,(Object *)this,MethodInfo__FPSDistributionManager__OnPlayerReady__,
                 (MethodInfo *)0x0);
      pAVar3 = (Action *)
               mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pAVar3,(Delegate *)this_00,(MethodInfo *)0x0);
      uVar5 = CONCAT44(TypeInfo__System__Action,pAVar3);
      pAStack6 = (Action *)0x0;
      if (pAVar3 == (Action *)0x0) {
        *ppAVar4 = (Action *)0x0;
code_?:
        ppAStack7 = ppAVar4;
        func_?();
        (this->fields).calculatingFPS = 1;
        fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
        (this->fields).startTime = fVar8;
        return;
      }
      if (pAVar3->klass == TypeInfo__System__Action) {
        pAStack6 = pAVar3;
      }
      if (pAStack6 != (Action *)0x0) {
        *ppAVar4 = pAStack6;
        uVar5 = CONCAT44(TypeInfo__System__Action,pAVar3);
        pAStack6 = (Action *)0x0;
        if (pAVar3->klass == TypeInfo__System__Action) {
          pAStack6 = pAVar3;
        }
        if (pAStack6 != (Action *)0x0) goto code_?;
      }
      goto code_?;
    }
  }
  uVar5 = func_?();
code_?:
  _ppAStack00000010 = uVar5;
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::FPSDistributionManager::FPSDistributionManager_Start
               (FPSDistributionManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__FPSDistributionManager__OnPlayerReady__);
    func_?(&MethodInfo__System__Collections__Generic__Queue<int>__Enqueue_int_);
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
  if ((pMVar1 == (MVNetworkGame *)0x0) ||
     (pMVar2 = (pMVar1->fields).playerContainer, pMVar2 == (MVPlayerContainer *)0x0)) {
code_?:
    func_?();
  }
  else {
    this_01 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar2,(MethodInfo *)0x0);
    if (this_01 == (MVLocalPlayer *)0x0) goto code_?;
    bVar3 = MVPlayer::MVPlayer_get_IsReady((MVPlayer *)this_01,(MethodInfo *)0x0);
    if (bVar3 == 0) {
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar1 != (MVNetworkGame *)0x0) {
        pMVar2 = (pMVar1->fields).playerContainer;
        if (pMVar2 != (MVPlayerContainer *)0x0) {
          pAVar4 = (pMVar2->fields).OnLocalPlayerReady;
          pNVar5 = (NavMesh_OnNavMeshPreUpdate *)func_?();
          UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
          NavMesh_OnNavMeshPreUpdate__ctor
                    (pNVar5,(Object *)this,MethodInfo__FPSDistributionManager__OnPlayerReady__,
                     (MethodInfo *)0x0);
          pAVar4 = (Action *)
                   mscorlib.dll::System::Delegate::Delegate_Combine
                             ((Delegate *)pAVar4,(Delegate *)pNVar5,(MethodInfo *)0x0);
          if (pAVar4 == (Action *)0x0) {
            (pMVar2->fields).OnLocalPlayerReady = (Action *)0x0;
            func_?();
            return;
          }
          pAVar6 = (Action *)0x0;
          if (pAVar4->klass == TypeInfo__System__Action) {
            pAVar6 = pAVar4;
          }
          if (pAVar6 == (Action *)0x0) goto code_?;
          (pMVar2->fields).OnLocalPlayerReady = pAVar6;
          pAVar6 = (Action *)0x0;
          if (pAVar4->klass == TypeInfo__System__Action) {
            pAVar6 = pAVar4;
          }
          if (pAVar6 != (Action *)0x0) {
            func_?();
            return;
          }
          goto code_?;
        }
      }
      goto code_?;
    }
    if (cRam_? == '\0') {
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
    pMVar2 = (pMVar1->fields).playerContainer;
    if (pMVar2 == (MVPlayerContainer *)0x0) goto code_?;
    pAVar4 = (pMVar2->fields).OnLocalPlayerReady;
    pNVar5 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar5,(Object *)this,MethodInfo__FPSDistributionManager__OnPlayerReady__,
               (MethodInfo *)0x0);
    pAVar4 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pAVar4,(Delegate *)pNVar5,(MethodInfo *)0x0);
    if (pAVar4 == (Action *)0x0) {
      (pMVar2->fields).OnLocalPlayerReady = (Action *)0x0;
code_?:
      func_?();
      (this->fields).calculatingFPS = 1;
      fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      (this->fields).startTime = fVar7;
      return;
    }
    pAVar6 = (Action *)0x0;
    if (pAVar4->klass == TypeInfo__System__Action) {
      pAVar6 = pAVar4;
    }
    if (pAVar6 == (Action *)0x0) goto code_?;
    (pMVar2->fields).OnLocalPlayerReady = pAVar6;
    pAVar6 = (Action *)0x0;
    if (pAVar4->klass == TypeInfo__System__Action) {
      pAVar6 = pAVar4;
    }
    if (pAVar6 != (Action *)0x0) goto code_?;
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

void Assembly-CSharp.dll::FPSDistributionManager::FPSDistributionManager_Update
               (FPSDistributionManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__Queue<int>__Dequeue__);
    func_?(&MethodInfo__System__Collections__Generic__Queue<int>__Peek__);
    func_?(&MethodInfo__System__Collections__Generic__Queue<int>__get_Count__);
    func_?(&TypeInfo__StatHatWrapper);
    func_?(&StringLiteral_FPSMeasuredAtMinute);
    cRam_? = '\x01';
  }
  if ((this->fields).calculatingFPS == 0) {
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
                           (StringLiteral_FPSMeasuredAtMinute,pSVar5,(MethodInfo *)0x0);
        fVar2 = FpsCounter::FpsCounter_get_Fps((MethodInfo *)0x0);
        if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        StatHatWrapper::StatHatWrapper_Value_1(pSVar5,fVar2,(MethodInfo *)0x0);
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


/* FPSDistributionManager() */

void Assembly-CSharp.dll::FPSDistributionManager::FPSDistributionManager__ctor
               (FPSDistributionManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__Queue<int>__Queue__);
    func_?(&TypeInfo__System__Collections__Generic__Queue<int>);
    cRam_? = '\x01';
  }
  this_00 = (Queue_1_System_Int32_ *)
            func_?(TypeInfo__System__Collections__Generic__Queue<int>);
  System.Core.dll::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder`1[System::Object]::
  ReadOnlyCollectionBuilder_1_System_Object___ctor
            ((ReadOnlyCollectionBuilder_1_System_Object_ *)this_00,
             MethodInfo__System__Collections__Generic__Queue<int>__Queue__);
  ppQVar1 = &(this->fields).intervals;
  *ppQVar1 = this_00;
  func_?(ppQVar1,this_00);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

