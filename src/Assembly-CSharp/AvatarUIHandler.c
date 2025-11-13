
/* Void Initialize(Boolean, MVWorldObjectClient, Int32, ChatAnchor) */

void Assembly-CSharp.dll::AvatarUIHandler::AvatarUIHandler_Initialize
               (AvatarUIHandler *this,bool isLocal,MVWorldObjectClient *wo,int32_t ownerActorNr,
               ChatAnchor *chatBubbleAnchor,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AvatarUIHandler__HandleTeamChange_System__Object__MV__WorldObject__TeamEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AvatarUIHandler__OnSayChatMessageRecieved_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__EventHandler<MV::WorldObject::TeamEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SayChatBubbleVisibilityManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = iRam_?;
  (this->fields).worldObject = wo;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).worldObject >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar1 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).chatBubbleAnchor = chatBubbleAnchor;
  (this->fields).ownerActorNr = ownerActorNr;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).chatBubbleAnchor >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  pAVar7 = (Action *)0x0;
  if (isLocal != 0) {
    pAVar8 = TypeInfo__SayChatBubbleVisibilityManager->static_fields->OnSayChatMessageRecieved;
    this_00 = (Action_2_Int32Enum_Object_ *)
              FUN_?(
                           TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                           );
    mscorlib.dll::System::Action`2[Int32Enum,Object]::Action_2_Int32Enum_Object___ctor
              (this_00,(Object *)this,
               MethodInfo__AvatarUIHandler__OnSayChatMessageRecieved_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
               ,(MethodInfo *)0x0);
    pDVar9 = mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pAVar8,(Delegate *)this_00,(MethodInfo *)0x0);
    pAVar10 = 
    TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
    ;
    if (pDVar9 == (Delegate *)0x0) {
      TypeInfo__SayChatBubbleVisibilityManager->static_fields->OnSayChatMessageRecieved =
           (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)
           0x0;
    }
    else {
      pAVar8 = (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                 *)FUN_?(pDVar9,
                                 TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                                );
      if (pAVar8 ==
          (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)0x0
         ) {
        FUN_?(pDVar9,pAVar10);
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      TypeInfo__SayChatBubbleVisibilityManager->static_fields->OnSayChatMessageRecieved = pAVar8;
      pAVar10 = 
      TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
      ;
      lVar3 = FUN_?(pDVar9,
                             TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                            );
      if (lVar3 == 0) {
        FUN_?(pDVar9,pAVar10);
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)
                      &TypeInfo__SayChatBubbleVisibilityManager->static_fields->
                       OnSayChatMessageRecieved >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar6 = uVar4 == *puVar5;
        if (bVar6) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar12 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar12 != (MVGameControllerBase *)0x0) &&
     (pFVar13 = (pMVar12->fields).firstFrameUpdateActorReady,
     pFVar13 != (FirstFrameUpdateActorReady *)0x0)) {
    pAVar14 = (pFVar13->fields).callbacks;
    pNVar15 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar15,(Object *)this,(this->klass->vtable).HandleTeamChange.method,
               (MethodInfo *)0x0);
    pAVar16 = (Action *)
              mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pAVar14,(Delegate *)pNVar15,(MethodInfo *)0x0);
    pAVar14 = pAVar7;
    if (pAVar16 != (Action *)0x0) {
      if (pAVar16->klass == TypeInfo__System__Action) {
        pAVar14 = pAVar16;
      }
      if (pAVar14 == (Action *)0x0) {
        FUN_?(pAVar16);
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
    }
    MVGameControllerBase::MVGameControllerBase_set_OnFirstFrameUpdateActorReady
              (pAVar14,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar12 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar12 != (MVGameControllerBase *)0x0) &&
        (pMVar17 = (pMVar12->fields).game, pMVar17 != (MVNetworkGame *)0x0)) &&
       (pMVar18 = (pMVar17->fields).playerContainer, pMVar18 != (MVPlayerContainer *)0x0)) {
      pAVar14 = (pMVar18->fields).OnPlayerListChanged;
      pNVar15 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (pNVar15,(Object *)this,(this->klass->vtable).HandleTeamChange.method,
                 (MethodInfo *)0x0);
      pAVar14 = (Action *)
                mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pAVar14,(Delegate *)pNVar15,(MethodInfo *)0x0);
      if (pAVar14 == (Action *)0x0) {
        (pMVar18->fields).OnPlayerListChanged = (Action *)0x0;
      }
      else {
        pAVar16 = pAVar7;
        if (pAVar14->klass == TypeInfo__System__Action) {
          pAVar16 = pAVar14;
        }
        if (pAVar16 == (Action *)0x0) {
          FUN_?(pAVar14);
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        (pMVar18->fields).OnPlayerListChanged = pAVar16;
        if (pAVar14->klass == TypeInfo__System__Action) {
          pAVar7 = pAVar14;
        }
        if (pAVar7 == (Action *)0x0) {
          FUN_?(pAVar14);
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar2 = (uint)((ulonglong)&(pMVar18->fields).OnPlayerListChanged >> 0xc);
        lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
        do {
          uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
          puVar5 = (ulonglong *)(lVar3 + 0xADDR);
          LOCK();
          bVar6 = uVar4 == *puVar5;
          if (bVar6) {
            *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (!bVar6);
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar12 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if ((pMVar12 != (MVGameControllerBase *)0x0) &&
         (pMVar17 = (pMVar12->fields).game, pMVar17 != (MVNetworkGame *)0x0)) {
        pMVar19 = (pMVar17->fields).teamManager;
        pUVar20 = (UnityAction_2_System_Object_System_Object_ *)
                  FUN_?(TypeInfo__System__EventHandler<MV::WorldObject::TeamEventArgs>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  (pUVar20,(Object *)this,
                   MethodInfo__AvatarUIHandler__HandleTeamChange_System__Object__MV__WorldObject__TeamEventArgs_
                   ,(MethodInfo *)0x0);
        if (pMVar19 != (MVTeamManager *)0x0) {
          MVTeamManager::MVTeamManager_add_OnTeamAdded
                    (pMVar19,(EventHandler_1_MV_WorldObject_TeamEventArgs_ *)pUVar20,
                     (MethodInfo *)0x0);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar12 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if ((pMVar12 != (MVGameControllerBase *)0x0) &&
             (pMVar17 = (pMVar12->fields).game, pMVar17 != (MVNetworkGame *)0x0)) {
            pMVar19 = (pMVar17->fields).teamManager;
            pUVar20 = (UnityAction_2_System_Object_System_Object_ *)
                      FUN_?(TypeInfo__System__EventHandler<MV::WorldObject::TeamEventArgs>);
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      (pUVar20,(Object *)this,
                       MethodInfo__AvatarUIHandler__HandleTeamChange_System__Object__MV__WorldObject__TeamEventArgs_
                       ,(MethodInfo *)0x0);
            if (pMVar19 != (MVTeamManager *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__System__EventHandler<MV::WorldObject::TeamEventArgs>);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              ppEVar21 = &(pMVar19->fields).OnTeamRemoved;
              a = (pMVar19->fields).OnTeamRemoved;
              do {
                pDVar9 = mscorlib.dll::System::Delegate::Delegate_Combine
                                    ((Delegate *)a,(Delegate *)pUVar20,(MethodInfo *)0x0);
                pEVar22 = TypeInfo__System__EventHandler<MV::WorldObject::TeamEventArgs>;
                if (pDVar9 == (Delegate *)0x0) {
                  pEVar23 = (EventHandler_1_MV_WorldObject_TeamEventArgs_ *)0x0;
                }
                else {
                  pEVar23 = (EventHandler_1_MV_WorldObject_TeamEventArgs_ *)
                            FUN_?(pDVar9,
                                          TypeInfo__System__EventHandler<MV::WorldObject::TeamEventArgs>
                                         );
                  if (pEVar23 == (EventHandler_1_MV_WorldObject_TeamEventArgs_ *)0x0) {
                    FUN_?(pDVar9,pEVar22);
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                }
                LOCK();
                pEVar24 = *ppEVar21;
                bVar6 = a == pEVar24;
                if (bVar6) {
                  *ppEVar21 = pEVar23;
                  pEVar24 = a;
                }
                UNLOCK();
                pEVar23 = a;
                if (!bVar6) {
                  pEVar23 = pEVar24;
                }
                if (iRam_? != 0) {
                  uVar2 = (uint)((ulonglong)ppEVar21 >> 0xc);
                  uVar4 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
                  do {
                    uVar25 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
                    puVar5 = (ulonglong *)(uVar4 * 8 + 0xADDR);
                    LOCK();
                    bVar6 = uVar25 == *puVar5;
                    if (bVar6) {
                      *puVar5 = uVar25 | 1L << (uVar2 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar6);
                }
                bVar6 = pEVar23 != a;
                a = pEVar23;
              } while (bVar6);
              return;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::AvatarUIHandler::AvatarUIHandler_OnDestroy
               (AvatarUIHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AvatarUIHandler__HandleTeamChange_System__Object__MV__WorldObject__TeamEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AvatarUIHandler__OnSayChatMessageRecieved_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__EventHandler<MV::WorldObject::TeamEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SayChatBubbleVisibilityManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__SayChatBubbleVisibilityManager->static_fields->OnSayChatMessageRecieved;
  this_00 = (Action_2_Int32Enum_Object_ *)
            FUN_?(
                         TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                         );
  mscorlib.dll::System::Action`2[Int32Enum,Object]::Action_2_Int32Enum_Object___ctor
            (this_00,(Object *)this,
             MethodInfo__AvatarUIHandler__OnSayChatMessageRecieved_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
             ,(MethodInfo *)0x0);
  pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pAVar1,(Delegate *)this_00,(MethodInfo *)0x0);
  pAVar3 = 
  TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
  ;
  pAVar4 = (Action *)0x0;
  if (pDVar2 == (Delegate *)0x0) {
    TypeInfo__SayChatBubbleVisibilityManager->static_fields->OnSayChatMessageRecieved =
         (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)0x0;
  }
  else {
    pAVar1 = (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *
              )FUN_?(pDVar2,
                             TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                            );
    if (pAVar1 ==
        (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)0x0)
    {
      FUN_?(pDVar2,pAVar3);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    TypeInfo__SayChatBubbleVisibilityManager->static_fields->OnSayChatMessageRecieved = pAVar1;
    pAVar3 = 
    TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
    ;
    lVar6 = FUN_?(pDVar2,
                           TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                          );
    if (lVar6 == 0) {
      FUN_?(pDVar2,pAVar3);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar7 = (uint)((ulonglong)
                    &TypeInfo__SayChatBubbleVisibilityManager->static_fields->
                     OnSayChatMessageRecieved >> 0xc);
    lVar6 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
    do {
      uVar8 = *(ulonglong *)(lVar6 + 0xADDR);
      puVar9 = (ulonglong *)(lVar6 + 0xADDR);
      LOCK();
      bVar10 = uVar8 == *puVar9;
      if (bVar10) {
        *puVar9 = uVar8 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar10);
  }
  bVar11 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar11 != 0) {
    pAVar12 = MVGameControllerBase::MVGameControllerBase_get_OnFirstFrameUpdateActorReady
                        ((MethodInfo *)0x0);
    pNVar13 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
    if (this != (AvatarUIHandler *)0x0) {
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (pNVar13,(Object *)this,(this->klass->vtable).HandleTeamChange.method,
                 (MethodInfo *)0x0);
      pAVar14 = (Action *)
                mscorlib.dll::System::Delegate::Delegate_Remove
                          ((Delegate *)pAVar12,(Delegate *)pNVar13,(MethodInfo *)0x0);
      pAVar12 = pAVar4;
      if (pAVar14 != (Action *)0x0) {
        if (pAVar14->klass == TypeInfo__System__Action) {
          pAVar12 = pAVar14;
        }
        if (pAVar12 == (Action *)0x0) {
          FUN_?(pAVar14);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      MVGameControllerBase::MVGameControllerBase_set_OnFirstFrameUpdateActorReady
                (pAVar12,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar15 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (pMVar15 != (MVGameControllerBase *)0x0) {
        if ((pMVar15->fields).game == (MVNetworkGame *)0x0) {
          return;
        }
        pMVar16 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar16 != (MVNetworkGame *)0x0) &&
           (pMVar17 = (pMVar16->fields).playerContainer, pMVar17 != (MVPlayerContainer *)0x0)) {
          pAVar12 = (pMVar17->fields).OnPlayerListChanged;
          pNVar13 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
          UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
          NavMesh_OnNavMeshPreUpdate__ctor
                    (pNVar13,(Object *)this,(this->klass->vtable).HandleTeamChange.method,
                     (MethodInfo *)0x0);
          pAVar12 = (Action *)
                    mscorlib.dll::System::Delegate::Delegate_Remove
                              ((Delegate *)pAVar12,(Delegate *)pNVar13,(MethodInfo *)0x0);
          if (pAVar12 == (Action *)0x0) {
            (pMVar17->fields).OnPlayerListChanged = (Action *)0x0;
          }
          else {
            pAVar14 = pAVar4;
            if (pAVar12->klass == TypeInfo__System__Action) {
              pAVar14 = pAVar12;
            }
            if (pAVar14 == (Action *)0x0) {
              FUN_?(pAVar12);
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            (pMVar17->fields).OnPlayerListChanged = pAVar14;
            if (pAVar12->klass == TypeInfo__System__Action) {
              pAVar4 = pAVar12;
            }
            if (pAVar4 == (Action *)0x0) {
              FUN_?(pAVar12);
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          if (iRam_? != 0) {
            uVar7 = (uint)((ulonglong)&(pMVar17->fields).OnPlayerListChanged >> 0xc);
            lVar6 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
            do {
              uVar8 = *(ulonglong *)(lVar6 + 0xADDR);
              puVar9 = (ulonglong *)(lVar6 + 0xADDR);
              LOCK();
              bVar10 = uVar8 == *puVar9;
              if (bVar10) {
                *puVar9 = uVar8 | 1L << (uVar7 & 0x3f);
              }
              UNLOCK();
            } while (!bVar10);
          }
          pMVar16 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (pMVar16 != (MVNetworkGame *)0x0) {
            pMVar18 = (pMVar16->fields).teamManager;
            pUVar19 = (UnityAction_2_System_Object_System_Object_ *)
                      FUN_?(TypeInfo__System__EventHandler<MV::WorldObject::TeamEventArgs>);
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      (pUVar19,(Object *)this,
                       MethodInfo__AvatarUIHandler__HandleTeamChange_System__Object__MV__WorldObject__TeamEventArgs_
                       ,(MethodInfo *)0x0);
            if (pMVar18 != (MVTeamManager *)0x0) {
              MVTeamManager::MVTeamManager_remove_OnTeamAdded
                        (pMVar18,(EventHandler_1_MV_WorldObject_TeamEventArgs_ *)pUVar19,
                         (MethodInfo *)0x0);
              pMVar16 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if (pMVar16 != (MVNetworkGame *)0x0) {
                pMVar18 = (pMVar16->fields).teamManager;
                pUVar19 = (UnityAction_2_System_Object_System_Object_ *)
                          FUN_?(
                                       TypeInfo__System__EventHandler<MV::WorldObject::TeamEventArgs>
                                       );
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System
                ::Object]::UnityAction_2_System_Object_System_Object___ctor
                          (pUVar19,(Object *)this,
                           MethodInfo__AvatarUIHandler__HandleTeamChange_System__Object__MV__WorldObject__TeamEventArgs_
                           ,(MethodInfo *)0x0);
                if (pMVar18 != (MVTeamManager *)0x0) {
                  MVTeamManager::MVTeamManager_remove_OnTeamRemoved
                            (pMVar18,(EventHandler_1_MV_WorldObject_TeamEventArgs_ *)pUVar19,
                             (MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
    FUN_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  return;
}


/* Void OnSayChatMessageRecieved(Int32, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::AvatarUIHandler::AvatarUIHandler_OnSayChatMessageRecieved
               (AvatarUIHandler *this,int32_t actorNr,
               Dictionary_2_System_Object_System_Object_ *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).ownerActorNr != actorNr) {
    return;
  }
  this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_01 != (GameObject *)0x0) {
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                      (this_01,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return;
    }
    this_00 = (this->fields).chatBubbleAnchor;
    if (this_00 != (ChatAnchor *)0x0) {
      anchorId = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                           ((Object_1 *)this_00,(MethodInfo *)0x0);
      auStackX_10[0] = 5;
      key = (Object *)FUN_?(uRam_?,auStackX_10);
      if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        pSVar2 = (String *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           (data,key,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        text = (String *)0x0;
        if (pSVar2 != (String *)0x0) {
          if (pSVar2->klass == pSRam0000000182db2520) {
            text = pSVar2;
          }
          if (text == (String *)0x0) {
            FUN_?(pSVar2);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        ChatBubbleManager::ChatBubbleManager_ShowChatBubble
                  (text,anchorId,(this->fields).chatBubbleAnchor,(MethodInfo *)0x0);
        return;
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

