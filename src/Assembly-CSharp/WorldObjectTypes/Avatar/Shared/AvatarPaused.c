
/* Void Init(Int32) */

void Assembly-CSharp.dll::WorldObjectTypes::Avatar::Shared::AvatarPaused::AvatarPaused_Init
               (AvatarPaused *this,int32_t ownerActorNr,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__WorldObjectTypes__Avatar__Shared__AvatarPaused__OnPause__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__WorldObjectTypes__Avatar__Shared__AvatarPaused__OnResume__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = cRam_? == '\0';
  (this->fields).ownerActorNr = ownerActorNr;
  if (bVar1) {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar2 != (MVGameControllerBase *)0x0) &&
       (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
      (pMVar4 = (pMVar3->fields).playerContainer, pMVar4 != (MVPlayerContainer *)0x0)) &&
     (pMVar5 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                         (pMVar4,ownerActorNr,(MethodInfo *)0x0), pMVar5 != (MVPlayer *)0x0)) {
    pUVar6 = (pMVar5->fields).OnPause;
    pNVar7 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction)
    ;
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar7,(Object *)this,
               MethodInfo__WorldObjectTypes__Avatar__Shared__AvatarPaused__OnPause__,
               (MethodInfo *)0x0);
    pUVar8 = (UnityAction *)
              mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pUVar6,(Delegate *)pNVar7,(MethodInfo *)0x0);
    pUVar6 = (UnityAction *)0x0;
    if (pUVar8 == (UnityAction *)0x0) {
      (pMVar5->fields).OnPause = (UnityAction *)0x0;
    }
    else {
      pUVar9 = pUVar6;
      if (pUVar8->klass == TypeInfo__UnityEngine__Events__UnityAction) {
        pUVar9 = pUVar8;
      }
      if (pUVar9 == (UnityAction *)0x0) {
        FUN_?();
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      (pMVar5->fields).OnPause = pUVar9;
      pUVar9 = pUVar6;
      if (pUVar8->klass == TypeInfo__UnityEngine__Events__UnityAction) {
        pUVar9 = pUVar8;
      }
      if (pUVar9 == (UnityAction *)0x0) {
        FUN_?();
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar11 = (uint)((ulonglong)&(pMVar5->fields).OnPause >> 0xc);
      lVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6) * 8;
      do {
        uVar13 = *(ulonglong *)(lVar12 + 0xADDR);
        puVar14 = (ulonglong *)(lVar12 + 0xADDR);
        LOCK();
        bVar1 = uVar13 == *puVar14;
        if (bVar1) {
          *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar2 != (MVGameControllerBase *)0x0) &&
        (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
       ((pMVar4 = (pMVar3->fields).playerContainer, pMVar4 != (MVPlayerContainer *)0x0 &&
        (pMVar5 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                            (pMVar4,ownerActorNr,(MethodInfo *)0x0), pMVar5 != (MVPlayer *)0x0)))) {
      pUVar8 = (pMVar5->fields).OnResume;
      pNVar7 = (NavMesh_OnNavMeshPreUpdate *)
               FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (pNVar7,(Object *)this,
                 MethodInfo__WorldObjectTypes__Avatar__Shared__AvatarPaused__OnResume__,
                 (MethodInfo *)0x0);
      pUVar8 = (UnityAction *)
                mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pUVar8,(Delegate *)pNVar7,(MethodInfo *)0x0);
      if (pUVar8 == (UnityAction *)0x0) {
        (pMVar5->fields).OnResume = (UnityAction *)0x0;
      }
      else {
        pUVar9 = pUVar6;
        if (pUVar8->klass == TypeInfo__UnityEngine__Events__UnityAction) {
          pUVar9 = pUVar8;
        }
        if (pUVar9 == (UnityAction *)0x0) {
          FUN_?(pUVar8);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        (pMVar5->fields).OnResume = pUVar9;
        if (pUVar8->klass == TypeInfo__UnityEngine__Events__UnityAction) {
          pUVar6 = pUVar8;
        }
        if (pUVar6 == (UnityAction *)0x0) {
          FUN_?(pUVar8);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar11 = (uint)((ulonglong)&(pMVar5->fields).OnResume >> 0xc);
        lVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6) * 8;
        do {
          uVar13 = *(ulonglong *)(lVar12 + 0xADDR);
          puVar14 = (ulonglong *)(lVar12 + 0xADDR);
          LOCK();
          bVar1 = uVar13 == *puVar14;
          if (bVar1) {
            *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
          }
          UNLOCK();
        } while (!bVar1);
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (((pMVar2 != (MVGameControllerBase *)0x0) &&
          (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
         (pMVar4 = (pMVar3->fields).playerContainer, pMVar4 != (MVPlayerContainer *)0x0)) {
        bVar15 = MVPlayerContainer::MVPlayerContainer_ContainsKey
                          (pMVar4,ownerActorNr,(MethodInfo *)0x0);
        if (bVar15 != 0) {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if ((((pMVar2 == (MVGameControllerBase *)0x0) ||
               (pMVar3 = (pMVar2->fields).game, pMVar3 == (MVNetworkGame *)0x0)) ||
              (pMVar4 = (pMVar3->fields).playerContainer, pMVar4 == (MVPlayerContainer *)0x0)) ||
             (pMVar5 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                                 (pMVar4,ownerActorNr,(MethodInfo *)0x0), pMVar5 == (MVPlayer *)0x0)
             ) goto code_?;
          if ((pMVar5->fields).playerState == 2) {
            pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if (((pMVar3 == (MVNetworkGame *)0x0) ||
                (pMVar4 = (pMVar3->fields).playerContainer, pMVar4 == (MVPlayerContainer *)0x0)) ||
               (pMVar16 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                    (pMVar4,(MethodInfo *)0x0), pMVar16 == (MVLocalPlayer *)0x0))
            goto code_?;
            if ((pMVar16->fields)._.playerState == 1) {
              AvatarPaused_OnPause(this,(MethodInfo *)0x0);
            }
            else {
              (this->fields).delayedPlay = 1;
            }
          }
        }
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::WorldObjectTypes::Avatar::Shared::AvatarPaused::AvatarPaused_OnDestroy
               (AvatarPaused *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__WorldObjectTypes__Avatar__Shared__AvatarPaused__OnPause__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__WorldObjectTypes__Avatar__Shared__AvatarPaused__OnResume__);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar2 != (MVGameControllerBase *)0x0) {
    if ((pMVar2->fields).game == (MVNetworkGame *)0x0) {
      return;
    }
    pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar3 != (MVNetworkGame *)0x0) &&
       (pMVar4 = (pMVar3->fields).playerContainer, pMVar4 != (MVPlayerContainer *)0x0)) {
      bVar1 = MVPlayerContainer::MVPlayerContainer_ContainsKey
                        (pMVar4,(this->fields).ownerActorNr,(MethodInfo *)0x0);
      if (bVar1 == 0) {
        return;
      }
      pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (((pMVar3 != (MVNetworkGame *)0x0) &&
          (pMVar4 = (pMVar3->fields).playerContainer, pMVar4 != (MVPlayerContainer *)0x0)) &&
         (pMVar5 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                             (pMVar4,(this->fields).ownerActorNr,(MethodInfo *)0x0),
         pMVar5 != (MVPlayer *)0x0)) {
        pUVar6 = (pMVar5->fields).OnPause;
        pNVar7 = (NavMesh_OnNavMeshPreUpdate *)
                 FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (pNVar7,(Object *)this,
                   MethodInfo__WorldObjectTypes__Avatar__Shared__AvatarPaused__OnPause__,
                   (MethodInfo *)0x0);
        pUVar8 = (UnityAction *)
                 mscorlib.dll::System::Delegate::Delegate_Remove
                           ((Delegate *)pUVar6,(Delegate *)pNVar7,(MethodInfo *)0x0);
        pUVar6 = (UnityAction *)0x0;
        if (pUVar8 == (UnityAction *)0x0) {
          (pMVar5->fields).OnPause = (UnityAction *)0x0;
        }
        else {
          pUVar9 = pUVar6;
          if (pUVar8->klass == TypeInfo__UnityEngine__Events__UnityAction) {
            pUVar9 = pUVar8;
          }
          if (pUVar9 == (UnityAction *)0x0) {
            FUN_?();
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          (pMVar5->fields).OnPause = pUVar9;
          pUVar9 = pUVar6;
          if (pUVar8->klass == TypeInfo__UnityEngine__Events__UnityAction) {
            pUVar9 = pUVar8;
          }
          if (pUVar9 == (UnityAction *)0x0) {
            FUN_?();
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
        }
        func_?();
        pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (((pMVar3 != (MVNetworkGame *)0x0) &&
            (pMVar4 = (pMVar3->fields).playerContainer, pMVar4 != (MVPlayerContainer *)0x0)) &&
           (pMVar5 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                               (pMVar4,(this->fields).ownerActorNr,(MethodInfo *)0x0),
           pMVar5 != (MVPlayer *)0x0)) {
          pUVar8 = (pMVar5->fields).OnResume;
          pNVar7 = (NavMesh_OnNavMeshPreUpdate *)
                   FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
          UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
          NavMesh_OnNavMeshPreUpdate__ctor
                    (pNVar7,(Object *)this,
                     MethodInfo__WorldObjectTypes__Avatar__Shared__AvatarPaused__OnResume__,
                     (MethodInfo *)0x0);
          pUVar8 = (UnityAction *)
                   mscorlib.dll::System::Delegate::Delegate_Remove
                             ((Delegate *)pUVar8,(Delegate *)pNVar7,(MethodInfo *)0x0);
          if (pUVar8 == (UnityAction *)0x0) {
            (pMVar5->fields).OnResume = (UnityAction *)0x0;
          }
          else {
            pUVar9 = pUVar6;
            if (pUVar8->klass == TypeInfo__UnityEngine__Events__UnityAction) {
              pUVar9 = pUVar8;
            }
            if (pUVar9 == (UnityAction *)0x0) {
              FUN_?(pUVar8);
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            (pMVar5->fields).OnResume = pUVar9;
            if (pUVar8->klass == TypeInfo__UnityEngine__Events__UnityAction) {
              pUVar6 = pUVar8;
            }
            if (pUVar6 == (UnityAction *)0x0) {
              FUN_?(pUVar8);
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
          }
          func_?(&(pMVar5->fields).OnResume);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void OnPause() */

void Assembly-CSharp.dll::WorldObjectTypes::Avatar::Shared::AvatarPaused::AvatarPaused_OnPause
               (AvatarPaused *this,MethodInfo *method)

{
  pPVar1 = (this->fields).avatarParticleSystem;
  if (pPVar1 != (ParticleSystem *)0x0) {
    uVar2 = 0;
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)pPVar1,(MethodInfo *)0x0);
    if (this_00 != (GameObject *)0x0) {
      uVar3 = (undefined7)((ulonglong)uVar2 >> 8);
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_00,1,(MethodInfo *)0x0);
      pPVar1 = (this->fields).avatarParticleSystem;
      if (pPVar1 != (ParticleSystem *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem_
                        ,CONCAT71(uVar3,1),0);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (pPVar1 == (ParticleSystem *)0x0) {
          FUN_?();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pvVar5 = (pPVar1->fields)._._.m_CachedPtr;
        if (pvVar5 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pPVar1,(MethodInfo *)0x0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pcVar4 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
          uVar2 = func_?(&UNK_?);
          FUN_?(uVar2,0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pcRam_? = pcVar4;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam_?)(pvVar5,1);
        return;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnResume() */

void Assembly-CSharp.dll::WorldObjectTypes::Avatar::Shared::AvatarPaused::AvatarPaused_OnResume
               (AvatarPaused *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).avatarParticleSystem;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pPVar1 != (ParticleSystem *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pPVar1->fields)._._.m_CachedPtr != (void *)0x0) {
      pPVar1 = (this->fields).avatarParticleSystem;
      if (pPVar1 != (ParticleSystem *)0x0) {
        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Stop_1
                  (pPVar1,1,(MethodInfo *)0x0);
        pPVar1 = (this->fields).avatarParticleSystem;
        if ((pPVar1 != (ParticleSystem *)0x0) &&
           (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)pPVar1,(MethodInfo *)0x0),
           this_00 != (GameObject *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (this_00,0,(MethodInfo *)0x0);
          return;
        }
      }
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::WorldObjectTypes::Avatar::Shared::AvatarPaused::AvatarPaused_Update
               (AvatarPaused *this,MethodInfo *method)

{
  if ((this->fields).delayedPlay == 0) {
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar1 != (MVGameControllerBase *)0x0) &&
       (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
      (this_00 = (pMVar2->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) &&
     (pMVar3 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0),
     pMVar3 != (MVLocalPlayer *)0x0)) {
    if ((pMVar3->fields)._.playerState != 1) {
      return;
    }
    pPVar4 = (this->fields).avatarParticleSystem;
    if ((pPVar4 != (ParticleSystem *)0x0) &&
       (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pPVar4,(MethodInfo *)0x0), this_01 != (GameObject *)0x0))
    {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_01,1,(MethodInfo *)0x0);
      pPVar4 = (this->fields).avatarParticleSystem;
      if (pPVar4 != (ParticleSystem *)0x0) {
        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Play
                  (pPVar4,1,(MethodInfo *)0x0);
        (this->fields).delayedPlay = 0;
        return;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

