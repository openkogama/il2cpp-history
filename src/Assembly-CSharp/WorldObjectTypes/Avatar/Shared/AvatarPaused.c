
/* Void Init(Int32) */

void Assembly-CSharp.dll::WorldObjectTypes::Avatar::Shared::AvatarPaused::AvatarPaused_Init
               (AvatarPaused *this,int32_t ownerActorNr,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__WorldObjectTypes__Avatar__Shared__AvatarPaused__OnPause__);
    func_?(&MethodInfo__WorldObjectTypes__Avatar__Shared__AvatarPaused__OnResume__);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  (this->fields).ownerActorNr = ownerActorNr;
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (((pMVar1 == (MVNetworkGame *)0x0) ||
      (pMVar2 = (pMVar1->fields).playerContainer, pMVar2 == (MVPlayerContainer *)0x0)) ||
     (pMVar3 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                         (pMVar2,ownerActorNr,(MethodInfo *)0x0), pMVar3 == (MVPlayer *)0x0)) {
code_?:
    func_?();
  }
  else {
    pUVar4 = (pMVar3->fields).OnPause;
    pNVar5 = (NavMesh_OnNavMeshPreUpdate *)
             func_?(TypeInfo__UnityEngine__Events__UnityAction);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar5,(Object *)unaff_ESI,
               MethodInfo__WorldObjectTypes__Avatar__Shared__AvatarPaused__OnPause__,
               (MethodInfo *)0x0);
    pUVar4 = (UnityAction *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pUVar4,(Delegate *)pNVar5,(MethodInfo *)0x0);
    if (pUVar4 == (UnityAction *)0x0) {
      (pMVar3->fields).OnPause = (UnityAction *)0x0;
code_?:
      func_?();
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (((pMVar1 != (MVNetworkGame *)0x0) &&
          (pMVar2 = (pMVar1->fields).playerContainer, pMVar2 != (MVPlayerContainer *)0x0)) &&
         (pMVar3 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                             (pMVar2,ownerActorNr,(MethodInfo *)0x0), pMVar3 != (MVPlayer *)0x0)) {
        pUVar4 = (pMVar3->fields).OnResume;
        pNVar5 = (NavMesh_OnNavMeshPreUpdate *)
                 func_?(TypeInfo__UnityEngine__Events__UnityAction);
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (pNVar5,(Object *)unaff_ESI,
                   MethodInfo__WorldObjectTypes__Avatar__Shared__AvatarPaused__OnResume__,
                   (MethodInfo *)0x0);
        pUVar4 = (UnityAction *)
                 mscorlib.dll::System::Delegate::Delegate_Combine
                           ((Delegate *)pUVar4,(Delegate *)pNVar5,(MethodInfo *)0x0);
        if (pUVar4 == (UnityAction *)0x0) {
          (pMVar3->fields).OnResume = (UnityAction *)0x0;
        }
        else {
          pUVar6 = (UnityAction *)0x0;
          if (pUVar4->klass == TypeInfo__UnityEngine__Events__UnityAction) {
            pUVar6 = pUVar4;
          }
          if (pUVar6 == (UnityAction *)0x0) goto code_?;
          (pMVar3->fields).OnResume = pUVar6;
          pUVar6 = (UnityAction *)0x0;
          if (pUVar4->klass == TypeInfo__UnityEngine__Events__UnityAction) {
            pUVar6 = pUVar4;
          }
          if (pUVar6 == (UnityAction *)0x0) goto code_?;
        }
        func_?();
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar1 != (MVNetworkGame *)0x0) &&
           (pMVar2 = (pMVar1->fields).playerContainer, pMVar2 != (MVPlayerContainer *)0x0)) {
          bVar7 = MVPlayerContainer::MVPlayerContainer_ContainsKey
                            (pMVar2,ownerActorNr,(MethodInfo *)0x0);
          if (bVar7 == 0) {
            return;
          }
          pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (((pMVar1 != (MVNetworkGame *)0x0) &&
              (pMVar2 = (pMVar1->fields).playerContainer, pMVar2 != (MVPlayerContainer *)0x0)) &&
             (pMVar3 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                                 (pMVar2,ownerActorNr,(MethodInfo *)0x0), pMVar3 != (MVPlayer *)0x0)
             ) {
            if ((pMVar3->fields).playerState != 2) {
              return;
            }
            pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if ((pMVar1 != (MVNetworkGame *)0x0) &&
               (this_00 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0),
               this_00 != (MVLocalPlayer *)0x0)) {
              bVar7 = MVPlayer::MVPlayer_get_IsReady((MVPlayer *)this_00,(MethodInfo *)0x0);
              if (bVar7 == 0) {
                (unaff_ESI->fields).delayedPlay = 1;
                return;
              }
              AvatarPaused_OnPause(unaff_ESI,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      goto code_?;
    }
    pUVar6 = (UnityAction *)0x0;
    if (pUVar4->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar6 = pUVar4;
    }
    if (pUVar6 == (UnityAction *)0x0) goto code_?;
    (pMVar3->fields).OnPause = pUVar6;
    pUVar6 = (UnityAction *)0x0;
    if (pUVar4->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar6 = pUVar4;
    }
    if (pUVar6 != (UnityAction *)0x0) goto code_?;
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::WorldObjectTypes::Avatar::Shared::AvatarPaused::AvatarPaused_OnDestroy
               (AvatarPaused *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__WorldObjectTypes__Avatar__Shared__AvatarPaused__OnPause__);
    func_?(&MethodInfo__WorldObjectTypes__Avatar__Shared__AvatarPaused__OnResume__);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if ((bVar1 == 0) ||
     (pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0),
     pMVar2 == (MVNetworkGame *)0x0)) {
    return;
  }
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar2 != (MVNetworkGame *)0x0) &&
     (pMVar3 = (pMVar2->fields).playerContainer, pMVar3 != (MVPlayerContainer *)0x0)) {
    bVar1 = MVPlayerContainer::MVPlayerContainer_ContainsKey
                      (pMVar3,*(int32_t *)(unaff_EBX + 0x14),(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return;
    }
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (((pMVar2 != (MVNetworkGame *)0x0) &&
        (pMVar3 = (pMVar2->fields).playerContainer, pMVar3 != (MVPlayerContainer *)0x0)) &&
       (pMVar4 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                           (pMVar3,*(int32_t *)(unaff_EBX + 0x14),(MethodInfo *)0x0),
       pMVar4 != (MVPlayer *)0x0)) {
      pUVar5 = (pMVar4->fields).OnPause;
      pNVar6 = (NavMesh_OnNavMeshPreUpdate *)func_?();
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (pNVar6,(Object *)&UNK_?,
                 MethodInfo__WorldObjectTypes__Avatar__Shared__AvatarPaused__OnPause__,
                 (MethodInfo *)0x0);
      pUVar5 = (UnityAction *)
               mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pUVar5,(Delegate *)pNVar6,(MethodInfo *)0x0);
      if (pUVar5 == (UnityAction *)0x0) {
        (pMVar4->fields).OnPause = (UnityAction *)0x0;
      }
      else {
        pUVar7 = (UnityAction *)0x0;
        if (pUVar5->klass == TypeInfo__UnityEngine__Events__UnityAction) {
          pUVar7 = pUVar5;
        }
        if (pUVar7 == (UnityAction *)0x0) goto code_?;
        (pMVar4->fields).OnPause = pUVar7;
        pUVar7 = (UnityAction *)0x0;
        if (pUVar5->klass == TypeInfo__UnityEngine__Events__UnityAction) {
          pUVar7 = pUVar5;
        }
        if (pUVar7 == (UnityAction *)0x0) goto code_?;
      }
      func_?();
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (((pMVar2 != (MVNetworkGame *)0x0) &&
          (pMVar3 = (pMVar2->fields).playerContainer, pMVar3 != (MVPlayerContainer *)0x0)) &&
         (pMVar4 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                             (pMVar3,iRam_?,(MethodInfo *)0x0), pMVar4 != (MVPlayer *)0x0)) {
        pUVar5 = (pMVar4->fields).OnResume;
        pNVar6 = (NavMesh_OnNavMeshPreUpdate *)func_?();
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (pNVar6,(Object *)
                          MethodInfo__WorldObjectTypes__Avatar__Shared__AvatarPaused__OnResume__,
                   MethodInfo__WorldObjectTypes__Avatar__Shared__AvatarPaused__OnResume__,
                   (MethodInfo *)0x0);
        pUVar5 = (UnityAction *)
                 mscorlib.dll::System::Delegate::Delegate_Remove
                           ((Delegate *)pUVar5,(Delegate *)pNVar6,(MethodInfo *)0x0);
        if (pUVar5 == (UnityAction *)0x0) {
          (pMVar4->fields).OnResume = (UnityAction *)0x0;
          func_?();
          return;
        }
        pUVar7 = (UnityAction *)0x0;
        if (pUVar5->klass == TypeInfo__UnityEngine__Events__UnityAction) {
          pUVar7 = pUVar5;
        }
        if (pUVar7 != (UnityAction *)0x0) {
          (pMVar4->fields).OnResume = pUVar7;
          pUVar7 = (UnityAction *)0x0;
          if (pUVar5->klass == TypeInfo__UnityEngine__Events__UnityAction) {
            pUVar7 = pUVar5;
          }
          if (pUVar7 != (UnityAction *)0x0) {
            func_?();
            return;
          }
        }
        goto code_?;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnPause() */

void Assembly-CSharp.dll::WorldObjectTypes::Avatar::Shared::AvatarPaused::AvatarPaused_OnPause
               (AvatarPaused *this,MethodInfo *method)

{
  pPVar1 = (this->fields).particleSystem;
  if (pPVar1 != (ParticleSystem *)0x0) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)pPVar1,(MethodInfo *)0x0);
    if (this_00 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_00,1,(MethodInfo *)0x0);
      pPVar1 = (this->fields).particleSystem;
      if (pPVar1 != (ParticleSystem *)0x0) {
        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Play
                  (pPVar1,1,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnResume() */

void Assembly-CSharp.dll::WorldObjectTypes::Avatar::Shared::AvatarPaused::AvatarPaused_OnResume
               (AvatarPaused *this,MethodInfo *method)

{
  pPVar1 = (this->fields).particleSystem;
  if (pPVar1 != (ParticleSystem *)0x0) {
    UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Stop_1
              (pPVar1,1,(MethodInfo *)0x0);
    pPVar1 = (this->fields).particleSystem;
    if (pPVar1 != (ParticleSystem *)0x0) {
      this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pPVar1,(MethodInfo *)0x0);
      if (this_00 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_00,0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::WorldObjectTypes::Avatar::Shared::AvatarPaused::AvatarPaused_Update
               (AvatarPaused *this,MethodInfo *method)

{
  if ((this->fields).delayedPlay == 0) {
    return;
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((this_00 != (MVNetworkGame *)0x0) &&
     (this_01 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0),
     this_01 != (MVLocalPlayer *)0x0)) {
    bVar1 = MVPlayer::MVPlayer_get_IsReady((MVPlayer *)this_01,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return;
    }
    AvatarPaused_OnPause(this,(MethodInfo *)0x0);
    (this->fields).delayedPlay = 0;
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

