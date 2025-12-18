
/* Boolean HasModifierEffect(AvatarModifierEffect) */

bool Assembly-CSharp.dll::Avatar::Avatar_HasModifierEffect
               (Avatar *this,AvatarModifierEffect__Enum modifierEffect,MethodInfo *method)

{
  pBVar1 = (this->fields).modifierEffectCount;
  if (pBVar1 == (Byte__Array *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  if (modifierEffect < (AvatarModifierEffect__Enum)pBVar1->max_length) {
    return pBVar1->vector[(int)modifierEffect] != 0;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Void Initialize(MVAvatar, Boolean) */

void Assembly-CSharp.dll::Avatar::Avatar_Initialize
               (Avatar *this,MVAvatar *mvAvatar,bool isLocal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__Collider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Collider>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  InteractionDataHandlerBase_MethodInfo__UnityEngine__Component__GetComponent<InteractionDataHandlerBase>__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = iRam_?;
  (this->fields).mvAvatar = mvAvatar;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).mvAvatar >> 0xc);
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
  if (((mvAvatar != (MVAvatar *)0x0) && (pMVar7 = (mvAvatar->fields).body, pMVar7 != (MVBody *)0x0))
     && (pAVar8 = (this->fields).avatarFader, pAVar8 != (AvatarFader *)0x0)) {
    (pAVar8->fields).bodyTransform = (pMVar7->fields)._._._.transform;
    if (iVar1 != 0) {
      uVar2 = (uint)((ulonglong)&(pAVar8->fields).bodyTransform >> 0xc);
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
    (this->fields).isLocal = isLocal;
    pIVar9 = (InteractionDataHandlerBase *)
              UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                        ((Component *)this,
                         InteractionDataHandlerBase_MethodInfo__UnityEngine__Component__GetComponent<InteractionDataHandlerBase>__
                        );
    bVar6 = iRam_? != 0;
    (this->fields).interactionDataHandler = pIVar9;
    if (bVar6) {
      uVar2 = (uint)((ulonglong)&(this->fields).interactionDataHandler >> 0xc);
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
    pCVar10 = (Collider *)
              UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                        ((Component *)this,
                         UnityEngine__Collider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Collider>__
                        );
    bVar6 = iRam_? != 0;
    (this->fields).avatarCollider = pCVar10;
    if (bVar6) {
      uVar2 = (uint)((ulonglong)&(this->fields).avatarCollider >> 0xc);
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
    this_00 = (this->fields).avatarLevelUp;
    if (this_00 != (AvatarLevelUp *)0x0) {
      AvatarLevelUp::AvatarLevelUp_Init
                (this_00,(mvAvatar->fields)._._._.ownerActorNr,(MethodInfo *)0x0);
      pWVar11 = (this->fields).waterSplashComponent;
      if (pWVar11 != (WaterSplashComponent *)0x0) {
        (*(pWVar11->klass->vtable).Initialize.methodPtr)
                  (pWVar11,this,(pWVar11->klass->vtable).Initialize.method);
        pAVar12 = (this->fields).avatarUIHandler;
        if (pAVar12 != (AvatarUIHandler *)0x0) {
          (*(pAVar12->klass->vtable).Initialize.methodPtr)
                    (pAVar12,(ulonglong)(this->fields).isLocal,mvAvatar,
                     (ulonglong)(uint)(mvAvatar->fields)._._._.ownerActorNr,
                     (this->fields).chatBubbleAnchor,(pAVar12->klass->vtable).Initialize.method);
          pCVar13 = (this->fields).chatBubbleAnchor;
          if (pCVar13 != (ChatAnchor *)0x0) {
            bVar6 = iRam_? != 0;
            (pCVar13->fields).isLocal = isLocal;
            (pCVar13->fields).avatar = this;
            if (bVar6) {
              uVar2 = (uint)((ulonglong)&(pCVar13->fields).avatar >> 0xc);
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
            this_01 = (this->fields).avatarPaused;
            if (this_01 != (AvatarPaused *)0x0) {
              actorNr = (mvAvatar->fields)._._._.ownerActorNr;
              if (cRam_? == '\0') {
                FUN_?(&MethodInfo__WorldObjectTypes__Avatar__Shared__AvatarPaused__OnPause__
                             );
                LOCK();
                UNLOCK();
                FUN_?(&
                              MethodInfo__WorldObjectTypes__Avatar__Shared__AvatarPaused__OnResume__
                             );
                LOCK();
                UNLOCK();
                FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              bVar6 = cRam_? == '\0';
              (this_01->fields).ownerActorNr = actorNr;
              if (bVar6) {
                FUN_?(&TypeInfo__MVGameControllerBase);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pMVar14 = TypeInfo__MVGameControllerBase->static_fields->instance;
              if (((pMVar14 != (MVGameControllerBase *)0x0) &&
                  (pMVar15 = (pMVar14->fields).game, pMVar15 != (MVNetworkGame *)0x0)) &&
                 ((pMVar16 = (pMVar15->fields).playerContainer, pMVar16 != (MVPlayerContainer *)0x0
                  && (pMVar17 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                                          (pMVar16,actorNr,(MethodInfo *)0x0),
                     pMVar17 != (MVPlayer *)0x0)))) {
                pUVar18 = (pMVar17->fields).OnPause;
                pNVar19 = (NavMesh_OnNavMeshPreUpdate *)
                          FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
                UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                NavMesh_OnNavMeshPreUpdate__ctor
                          (pNVar19,(Object *)this_01,
                           MethodInfo__WorldObjectTypes__Avatar__Shared__AvatarPaused__OnPause__,
                           (MethodInfo *)0x0);
                pUVar20 = (UnityAction *)
                          mscorlib.dll::System::Delegate::Delegate_Combine
                                    ((Delegate *)pUVar18,(Delegate *)pNVar19,(MethodInfo *)0x0);
                pUVar18 = (UnityAction *)0x0;
                if (pUVar20 == (UnityAction *)0x0) {
                  (pMVar17->fields).OnPause = (UnityAction *)0x0;
                }
                else {
                  pUVar21 = pUVar18;
                  if (pUVar20->klass == TypeInfo__UnityEngine__Events__UnityAction) {
                    pUVar21 = pUVar20;
                  }
                  if (pUVar21 == (UnityAction *)0x0) {
                    FUN_?();
                    pcVar22 = (code *)swi(3);
                    (*pcVar22)();
                    return;
                  }
                  (pMVar17->fields).OnPause = pUVar21;
                  pUVar21 = pUVar18;
                  if (pUVar20->klass == TypeInfo__UnityEngine__Events__UnityAction) {
                    pUVar21 = pUVar20;
                  }
                  if (pUVar21 == (UnityAction *)0x0) {
                    FUN_?();
                    pcVar22 = (code *)swi(3);
                    (*pcVar22)();
                    return;
                  }
                }
                if (iRam_? != 0) {
                  uVar2 = (uint)((ulonglong)&(pMVar17->fields).OnPause >> 0xc);
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
                pMVar14 = TypeInfo__MVGameControllerBase->static_fields->instance;
                if (((pMVar14 != (MVGameControllerBase *)0x0) &&
                    (pMVar15 = (pMVar14->fields).game, pMVar15 != (MVNetworkGame *)0x0)) &&
                   ((pMVar16 = (pMVar15->fields).playerContainer,
                    pMVar16 != (MVPlayerContainer *)0x0 &&
                    (pMVar17 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                                         (pMVar16,actorNr,(MethodInfo *)0x0),
                    pMVar17 != (MVPlayer *)0x0)))) {
                  pUVar20 = (pMVar17->fields).OnResume;
                  pNVar19 = (NavMesh_OnNavMeshPreUpdate *)
                            FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
                  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                  NavMesh_OnNavMeshPreUpdate__ctor
                            (pNVar19,(Object *)this_01,
                             MethodInfo__WorldObjectTypes__Avatar__Shared__AvatarPaused__OnResume__,
                             (MethodInfo *)0x0);
                  pUVar20 = (UnityAction *)
                            mscorlib.dll::System::Delegate::Delegate_Combine
                                      ((Delegate *)pUVar20,(Delegate *)pNVar19,(MethodInfo *)0x0);
                  if (pUVar20 == (UnityAction *)0x0) {
                    (pMVar17->fields).OnResume = (UnityAction *)0x0;
                  }
                  else {
                    pUVar21 = pUVar18;
                    if (pUVar20->klass == TypeInfo__UnityEngine__Events__UnityAction) {
                      pUVar21 = pUVar20;
                    }
                    if (pUVar21 == (UnityAction *)0x0) {
                      FUN_?(pUVar20);
                      pcVar22 = (code *)swi(3);
                      (*pcVar22)();
                      return;
                    }
                    (pMVar17->fields).OnResume = pUVar21;
                    if (pUVar20->klass == TypeInfo__UnityEngine__Events__UnityAction) {
                      pUVar18 = pUVar20;
                    }
                    if (pUVar18 == (UnityAction *)0x0) {
                      FUN_?(pUVar20);
                      pcVar22 = (code *)swi(3);
                      (*pcVar22)();
                      return;
                    }
                  }
                  if (iRam_? != 0) {
                    uVar2 = (uint)((ulonglong)&(pMVar17->fields).OnResume >> 0xc);
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
                  pMVar14 = TypeInfo__MVGameControllerBase->static_fields->instance;
                  if (((pMVar14 != (MVGameControllerBase *)0x0) &&
                      (pMVar15 = (pMVar14->fields).game, pMVar15 != (MVNetworkGame *)0x0)) &&
                     (pMVar16 = (pMVar15->fields).playerContainer,
                     pMVar16 != (MVPlayerContainer *)0x0)) {
                    bVar23 = MVPlayerContainer::MVPlayerContainer_ContainsKey
                                       (pMVar16,actorNr,(MethodInfo *)0x0);
                    if (bVar23 != 0) {
                      if (cRam_? == '\0') {
                        FUN_?(&TypeInfo__MVGameControllerBase);
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      pMVar14 = TypeInfo__MVGameControllerBase->static_fields->instance;
                      if (((pMVar14 == (MVGameControllerBase *)0x0) ||
                          (pMVar15 = (pMVar14->fields).game, pMVar15 == (MVNetworkGame *)0x0)) ||
                         ((pMVar16 = (pMVar15->fields).playerContainer,
                          pMVar16 == (MVPlayerContainer *)0x0 ||
                          (pMVar17 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                                               (pMVar16,actorNr,(MethodInfo *)0x0),
                          pMVar17 == (MVPlayer *)0x0)))) goto code_?;
                      if ((pMVar17->fields).playerState == 2) {
                        pMVar15 = MVGameControllerBase::MVGameControllerBase_get_Game
                                            ((MethodInfo *)0x0);
                        if (((pMVar15 == (MVNetworkGame *)0x0) ||
                            (pMVar16 = (pMVar15->fields).playerContainer,
                            pMVar16 == (MVPlayerContainer *)0x0)) ||
                           (pMVar24 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                                (pMVar16,(MethodInfo *)0x0),
                           pMVar24 == (MVLocalPlayer *)0x0)) goto code_?;
                        if ((pMVar24->fields)._.playerState == 1) {
                          WorldObjectTypes::Avatar::Shared::AvatarPaused::AvatarPaused_OnPause
                                    (this_01,(MethodInfo *)0x0);
                        }
                        else {
                          (this_01->fields).delayedPlay = 1;
                        }
                      }
                    }
                    return;
                  }
                }
              }
code_?:
              FUN_?();
              pcVar22 = (code *)swi(3);
              (*pcVar22)();
              return;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
  return;
}


/* Void OnEnterVehicle() */

void Assembly-CSharp.dll::Avatar::Avatar_OnEnterVehicle(Avatar *this,MethodInfo *method)

{
  obj = (this->fields).waterSplashComponent;
  if (obj == (WaterSplashComponent *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                  ,0,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (WaterSplashComponent *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pvVar2 = (obj->fields)._._._._.m_CachedPtr;
  if (pvVar2 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar2,0);
  return;
}


/* Void OnExitVehicle() */

void Assembly-CSharp.dll::Avatar::Avatar_OnExitVehicle(Avatar *this,MethodInfo *method)

{
  obj = (this->fields).waterSplashComponent;
  if (obj == (WaterSplashComponent *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                  ,1,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (WaterSplashComponent *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pvVar2 = (obj->fields)._._._._.m_CachedPtr;
  if (pvVar2 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar2,1);
  return;
}


/* Void StartBlinking(BlinkType, Single) */

void Assembly-CSharp.dll::Avatar::Avatar_StartBlinking
               (Avatar *this,BlinkType__Enum type,float duration,MethodInfo *method)

{
  pMVar1 = (this->fields).mvAvatar;
  if ((((pMVar1 == (MVAvatar *)0x0) || (pMVar2 = (pMVar1->fields).body, pMVar2 == (MVBody *)0x0)) ||
      (pMVar3 = (pMVar2->fields).bodyObject, pMVar3 == (MVBodyObject *)0x0)) ||
     (pAVar4 = (pMVar3->fields).avatarBlinker, pAVar4 == (AvatarBlinker *)0x0)) {
    FUN_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__get_Item_BlinkType_
                  ,CONCAT44(in_register_00000014,type),in_R8,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (pAVar4->fields)._.blinkers;
  if ((this_00 != (Dictionary_2_BlinkType_Blinker_ *)0x0) &&
     (pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
               Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                         ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,type,
                          MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__get_Item_BlinkType_
                         ), pOVar6 != (Object *)0x0)) {
    pcVar5 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
      uVar7 = func_?(&UNK_?);
      FUN_?(uVar7,0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pcRam_? = pcVar5;
    uVar8 = (*pcRam_?)();
    *(float *)((longlong)&pOVar6[1].monitor + 4) = duration;
    *(undefined4 *)&pOVar6[1].monitor = uVar8;
    return;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void StopBlinking(BlinkType) */

void Assembly-CSharp.dll::Avatar::Avatar_StopBlinking
               (Avatar *this,BlinkType__Enum type,MethodInfo *method)

{
  pMVar1 = (this->fields).mvAvatar;
  if ((((pMVar1 != (MVAvatar *)0x0) && (pMVar2 = (pMVar1->fields).body, pMVar2 != (MVBody *)0x0)) &&
      (pMVar3 = (pMVar2->fields).bodyObject, pMVar3 != (MVBodyObject *)0x0)) &&
     (pAVar4 = (pMVar3->fields).avatarBlinker, pAVar4 != (AvatarBlinker *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__get_Item_BlinkType_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this_00 = (pAVar4->fields)._.blinkers;
    if (this_00 != (Dictionary_2_BlinkType_Blinker_ *)0x0) {
      pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
               Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                         ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,type,
                          MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__get_Item_BlinkType_
                         );
      if (pOVar5 != (Object *)0x0) {
        pOVar5[1].monitor = (MonitorData *)0x0;
        return;
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void UpdateModifiers(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::Avatar::Avatar_UpdateModifiers
               (Avatar *this,Dictionary_2_System_Object_System_Object_ *newModifiers,
               MethodInfo *method)

{
  pAStackX_8 = this;
  pDStackX_10 = newModifiers;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AvatarModifierPackageFactory);
    LOCK();
    UNLOCK();
    FUN_?(&TypeRef__AvatarModifierPackageType);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AvatarModifierPackageType);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_unsigned_char>__Add_AvatarModifierPackageType__unsigned_char_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifier>__Add_AvatarModifierPackageType__AvatarModifier_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifier>__ContainsKey_AvatarModifierPackageType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_unsigned_char>__Remove_AvatarModifierPackageType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifier>__Remove_AvatarModifierPackageType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifier>__get_Item_AvatarModifierPackageType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_unsigned_char>__get_Item_AvatarModifierPackageType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifier>__get_Keys__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_unsigned_char>__set_Item_AvatarModifierPackageType__unsigned_char_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<AvatarModifierPackageType,_AvatarModifier>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<AvatarModifierPackageType,_AvatarModifier>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<AvatarModifierPackageType,_AvatarModifier>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<AvatarModifierPackageType,_AvatarModifier>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<AvatarModifierPackageType>__Add_AvatarModifierPackageType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<AvatarModifierPackageType>__List__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<AvatarModifierPackageType>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<AvatarModifierPackageType>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<AvatarModifierPackageType>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  auStack_1 = (undefined1  [8])0x0;
  pMStack_2 = (MonitorData *)0x0;
  pSStack_3 = (String *)0x0;
  pLStack_4 = (List_1_System_UInt32Enum_ *)0x0;
  uStack_5._0_4_ = 0;
  uStack_5._4_4_ = 0;
  this_03 = (List_1_System_UInt32Enum_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<AvatarModifierPackageType>);
  pLStack_6 = this_03;
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_03,
             MethodInfo__System__Collections__Generic__List<AvatarModifierPackageType>__List__);
  this_00 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *
            )(this->fields).modifiers;
  pLStack_7 = this_03;
  if ((this_00 !=
       (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0)
     && (pDVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements
                   ::TypeConverterRegistry+ConverterKey,System::Object]::
                   Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Keys
                             (this_00,
                              MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifier>__get_Keys__
                             ),
        pDVar8 !=
        (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
         *)0x0)) {
    pDStack_9 = (pDVar8->fields)._dictionary;
    ppDStack_10 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                    **)0x0;
    uStack_11 = 0;
    if (iRam_? != 0) {
      uVar12 = (uint)((ulonglong)&pDStack_13 >> 0xc);
      lVar14 = (ulonglong)((uVar12 & 0x1fffff) >> 6) * 8;
      method = (MethodInfo *)(ulonglong)(uVar12 & 0x3f);
      do {
        uVar15 = *(ulonglong *)(lVar14 + 0xADDR);
        puVar16 = (ulonglong *)(lVar14 + 0xADDR);
        LOCK();
        bVar17 = uVar15 == *puVar16;
        if (bVar17) {
          *puVar16 = uVar15 | 1L << (longlong)method;
        }
        UNLOCK();
      } while (!bVar17);
    }
    if (pDStack_9 ==
        (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0
       ) {
      pDStack_13 = pDStack_9;
      FUN_?();
      pcVar18 = (code *)swi(3);
      (*pcVar18)();
      return;
    }
    iStack_19 = (pDStack_9->fields)._version;
    uStack_11 = 0;
    uStack_20 = 0;
    uStack_21 = 0;
    pDStack_13 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   *)0x0;
    ppDStack_10 = &pDStack_9;
    value = this_03;
code_?:
    if (pDStack_9 !=
        (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0
       ) {
      if (iStack_19 == (pDStack_9->fields)._version) {
        do {
          if (pDStack_9 ==
              (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
               *)0x0) goto code_?;
          if ((uint)(pDStack_9->fields)._count <= uStack_20) {
            _uStack_180 = CONCAT44(iStack_19,(pDStack_9->fields)._count + 1);
            uStack_21 = (ulonglong)uStack_21._4_4_ << 0x20;
            pSVar22 = (String *)0x0;
            uVar12 = 0;
            if (this_03 == (List_1_System_UInt32Enum_ *)0x0) goto code_?;
            lVar14 = 0x20;
            goto code_?;
          }
          method = (MethodInfo *)(pDStack_9->fields)._entries;
          lVar14 = (longlong)(int)uStack_20;
          uVar12 = uStack_20 + 1;
          if ((Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
               *)method ==
              (Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
               *)0x0) goto code_?;
          if (*(uint *)&((Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
                          *)method)->max_length <= uStack_20) {
            uStack_20 = uVar12;
            FUN_?();
            goto code_?;
          }
          uStack_20 = uVar12;
        } while (((_union_86 *)
                 &((Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
                    *)method)->vector[0].hashCode)[lVar14 * 3].__klassIndex < 0);
        uVar23 = *(undefined4 *)
                 ((longlong)
                  &((Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
                     *)method)->vector[0].key + lVar14 * 0x18);
        uStack_21 = CONCAT44(uStack_21._4_4_,uVar23);
        EStack_24.klass = (Enum__Class *)TypeInfo__AvatarModifierPackageType;
        EStack_24.monitor = (MonitorData *)0xffffffffffffffff;
        uStack_25 = CONCAT44(uStack_25._4_4_,uVar23);
        pSVar22 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_24,(MethodInfo *)0x0);
        pSVar22 = mscorlib.dll::System::String::String_Concat_4
                            (::StringLiteral__,pSVar22,(MethodInfo *)0x0);
        if (newModifiers != (Dictionary_2_System_Object_System_Object_ *)0x0)
        goto code_?;
        goto code_?;
      }
      goto code_?;
    }
code_?:
    FUN_?();
    FUN_?();
    pcVar18 = (code *)swi(3);
    (*pcVar18)();
    return;
  }
  goto code_?;
code_?:
  if ((pLStack_6->fields)._size <= (int)uVar12) goto code_?;
  uVar12 = (uint)pSVar22;
  if ((uint)(this_03->fields)._size <= uVar12) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
              ((MethodInfo *)0x0);
    goto code_?;
  }
  pUVar26 = (this_03->fields)._items;
  if (pUVar26 == (UInt32Enum__Enum__Array *)0x0) goto code_?;
  if ((uint)pUVar26->max_length <= uVar12) {
code_?:
    FUN_?();
    pcVar18 = (code *)swi(3);
    (*pcVar18)();
    return;
  }
  IVar27 = *(Int32Enum__Enum *)((longlong)pUVar26->vector + lVar14 + -0x20);
  value = (List_1_System_UInt32Enum_ *)(ulonglong)IVar27;
  pDVar28 = (this->fields).modifiers;
  if (pDVar28 == (Dictionary_2_AvatarModifierPackageType_AvatarModifier_ *)0x0)
  goto code_?;
  pOVar29 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
            Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                      ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar28,IVar27,
                       MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifier>__get_Item_AvatarModifierPackageType_
                      );
  pDVar28 = (this->fields).modifiers;
  if (pDVar28 == (Dictionary_2_AvatarModifierPackageType_AvatarModifier_ *)0x0)
  goto code_?;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__Remove
            ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar28,IVar27,
             MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifier>__Remove_AvatarModifierPackageType_
            );
  this_01 = (Dictionary_2_System_Int32Enum_System_Single_ *)(this->fields).currentModifierByteState;
  if (this_01 == (Dictionary_2_System_Int32Enum_System_Single_ *)0x0) goto code_?;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Single]::
  Dictionary_2_System_Int32Enum_System_Single__Remove
            (this_01,IVar27,
             MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_unsigned_char>__Remove_AvatarModifierPackageType_
            );
  if (*(int *)&(TypeInfo__AvatarModifierPackageFactory->_1).field_0x1c == 0) {
    FUN_?();
  }
  pAVar30 = AvatarModifierPackageFactory::AvatarModifierPackageFactory_GetPackage
                      (&AStack_31,IVar27,(MethodInfo *)0x0);
  uVar32 = 0;
  pAVar33 = pAVar30->avatarModifiers;
  piVar34 = &pAVar33->vector[0].avatarModifierEffect;
  while( true ) {
    if (pAVar33 == (AvatarModifierPackage_AvatarModifier__Array *)0x0) goto code_?;
    uVar35 = (uint)pAVar33->max_length;
    if ((int)uVar35 <= (int)uVar32) break;
    pBVar36 = (this->fields).modifierEffectCount;
    if (uVar35 <= uVar32) goto code_?;
    if (pBVar36 == (Byte__Array *)0x0) goto code_?;
    if ((uint)pBVar36->max_length <= (uint)*piVar34) goto code_?;
    pBVar36->vector[*piVar34] = pBVar36->vector[*piVar34] - 1;
    uVar32 = uVar32 + 1;
    piVar34 = piVar34 + 4;
  }
  if (pOVar29 == (Object *)0x0) goto code_?;
  *(undefined1 *)((longlong)&pOVar29[2].klass + 4) = 0;
  method = (MethodInfo *)pOVar29->klass[1]._0.castClass;
  (*(code *)pOVar29->klass[1]._0.element_class)(pOVar29,this);
  uVar12 = uVar12 + 1;
  pSVar22 = (String *)(ulonglong)uVar12;
  lVar14 = lVar14 + 4;
  goto code_?;
code_?:
  method = MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
           ->klass->rgctx_data[0x21].method;
  iVar37 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
           UIElements::StyleComplexSelector+PseudoStateData]::
           Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                     ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                       *)newModifiers,(Object *)pSVar22,method);
  pIVar38 = TypeRef__AvatarModifierPackageType;
  if (iVar37 < 0) {
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    pTVar39 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                        ((RuntimeTypeHandle)pIVar38,(MethodInfo *)0x0);
    if (pSVar22 != (String *)0x0) {
      auStackX_20[0] = 0x5f;
      value = (List_1_System_UInt32Enum_ *)
              mscorlib.dll::System::String::String_TrimHelper
                        (pSVar22,auStackX_20,1,String_TrimType__Enum_Head,(MethodInfo *)0x0);
      if (*(int *)(lRam_? + 0xe4) == 0) {
        FUN_?();
      }
      pOVar29 = mscorlib.dll::System::Enum::Enum_Parse(pTVar39,(String *)value,(MethodInfo *)0x0);
      if (pOVar29 != (Object *)0x0) {
        method = (MethodInfo *)TypeInfo__AvatarModifierPackageType;
        if ((pOVar29->klass->_0).element_class ==
            (TypeInfo__AvatarModifierPackageType->_0).element_class) {
          if (this_03 != (List_1_System_UInt32Enum_ *)0x0) {
            method = 
            MethodInfo__System__Collections__Generic__List<AvatarModifierPackageType>__Add_AvatarModifierPackageType_
            ;
            mscorlib.dll::System::Collections::Generic::List`1[System::UInt32Enum]::
            List_1_System_UInt32Enum__Add
                      (this_03,*(UInt32Enum__Enum *)&pOVar29[1].klass,
                       MethodInfo__System__Collections__Generic__List<AvatarModifierPackageType>__Add_AvatarModifierPackageType_
                      );
            goto code_?;
          }
code_?:
          pOVar29 = (Object *)FUN_?();
        }
        FUN_?(pOVar29,method);
      }
      FUN_?();
    }
    FUN_?();
code_?:
    FUN_?();
    uVar12 = uStack_20;
code_?:
    uStack_20 = uVar12;
    FUN_?();
code_?:
    FUN_?();
code_?:
    mscorlib.dll::System::ThrowHelper::
    ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
              ((MethodInfo *)0x0);
    goto code_?;
  }
  goto code_?;
code_?:
  FUN_?(value);
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?(value,method);
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  uVar40 = func_?(&UNK_?);
  FUN_?(uVar40,0);
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
  ThrowHelper_2_ThrowNullReferenceException((Object *)pSVar22,(MethodInfo *)0x0);
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?(method);
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
code_?:
  if (newModifiers != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    if (iRam_? != 0) {
      uVar12 = (uint)((ulonglong)&EStack_24 >> 0xc);
      lVar14 = (ulonglong)((uVar12 & 0x1fffff) >> 6) * 8;
      do {
        uVar15 = *(ulonglong *)(lVar14 + 0xADDR);
        puVar16 = (ulonglong *)(lVar14 + 0xADDR);
        LOCK();
        bVar17 = uVar15 == *puVar16;
        if (bVar17) {
          *puVar16 = uVar15 | 1L << (uVar12 & 0x3f);
        }
        UNLOCK();
      } while (!bVar17);
    }
    EStack_24.monitor = (MonitorData *)(ulonglong)(uint)(newModifiers->fields)._version;
    uStack_41 = 2;
    uStack_25 = 0;
    uStack_42 = 0;
    pMStack_2 = EStack_24.monitor;
    pSStack_3 = (String *)0x0;
    pLStack_4 = (List_1_System_UInt32Enum_ *)0x0;
    uStack_5._0_4_ = 2;
    uStack_5._4_4_ = 0;
    pDStack_13 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   *)0x0;
    ppDStack_10 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                    **)auStack_1;
    EStack_24.klass = (Enum__Class *)newModifiers;
    auStack_1 = (undefined1  [8])newModifiers;
    do {
      bVar43 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
               Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                         ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                          auStack_1,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                         );
      value = pLStack_4;
      pIVar38 = TypeRef__AvatarModifierPackageType;
      if (bVar43 == 0) {
        return;
      }
      pSVar22 = (String *)0x0;
      if (pSStack_3 != (String *)0x0) {
        if (pSStack_3->klass == pSRam0000000182dc50c0) {
          pSVar22 = pSStack_3;
        }
        if (pSVar22 == (String *)0x0) goto code_?;
      }
      if (*(int *)(lRam_? + 0xe4) == 0) {
        FUN_?();
      }
      pTVar39 = (Type *)0x0;
      if (pIVar38 != (Il2CppType *)0x0) {
        if (*(int *)(lRam_? + 0xe4) == 0) {
          FUN_?();
        }
        lVar14 = FUN_?(pIVar38,1);
        pTVar39 = (Type *)FUN_?(lVar14 + 0x20);
      }
      if (pSVar22 == (String *)0x0) goto code_?;
      pAStackX_8 = (Avatar *)CONCAT62(pAStackX_8._2_6_,0x5f);
      pSVar22 = mscorlib.dll::System::String::String_TrimHelper
                          (pSVar22,(uint16_t *)&pAStackX_8,1,String_TrimType__Enum_Head,
                           (MethodInfo *)0x0);
      if ((*(int *)(lRam_? + 0xe4) == 0) &&
         (FUN_?(), *(int *)(lRam_? + 0xe4) == 0)) {
        FUN_?();
      }
      uVar40 = 0;
      method = (MethodInfo *)
               mscorlib.dll::System::Enum::Enum_Parse_1(pTVar39,pSVar22,0,(MethodInfo *)0x0);
      if ((Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
           *)method ==
          (Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
           *)0x0) goto code_?;
      if (*(Il2CppClass **)
           &((Il2CppClass_0 *)
            &((Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
               *)method)->klass)->image->token !=
          (TypeInfo__AvatarModifierPackageType->_0).element_class) goto code_?;
      IVar27 = *(Int32Enum__Enum *)
               &((Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
                  *)method)->bounds;
      this_02 = (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)(this->fields).modifiers;
      if (this_02 == (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)0x0)
      goto code_?;
      method = MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifier>__ContainsKey_AvatarModifierPackageType_
               ->klass->rgctx_data[0x21].method;
      iVar37 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
               Int32Enum,UnityEngine::Vector3]::
               Dictionary_2_System_Int32Enum_UnityEngine_Vector3__FindEntry(this_02,IVar27,method);
      if (iVar37 < 0) {
        method = (MethodInfo *)0x0;
        this_04 = (Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
                   *)AvatarModifier::AvatarModifier_CreateFromType(IVar27,this,(MethodInfo *)0x0);
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
        if (this_04 ==
            (Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
             *)0x0) {
          bVar17 = false;
        }
        else {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          bVar17 = this_04->bounds != (Il2CppArrayBounds *)0x0;
        }
        if (bVar17) {
          if (this_04 ==
              (Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
               *)0x0) goto code_?;
          pIVar44 = ((Il2CppClass_0 *)&this_04->klass)->image;
          method = *(MethodInfo **)&pIVar44[5].typeCount;
          cVar45 = (*(code *)pIVar44[5].assembly)(this_04);
          if (cVar45 == '\0') {
            obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this_04,(MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                      ((Object_1 *)obj,(MethodInfo *)0x0);
          }
          else {
            this_05 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)this_04,(MethodInfo *)0x0);
            value_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                 ((Component *)this,(MethodInfo *)0x0);
            if (this_05 == (Transform *)0x0) goto code_?;
            method = (MethodInfo *)0x0;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                      (this_05,value_00,(MethodInfo *)0x0);
            pSVar22 = (String *)
                      UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)this_04,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Vector3);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (pSVar22 == (String *)0x0) goto code_?;
            pLStack_6 = *(List_1_System_UInt32Enum_ **)
                           &TypeInfo__UnityEngine__Vector3->static_fields->zeroVector;
            fStack_46 = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).z;
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            SVar47 = pSVar22->fields;
            if (SVar47 == (String__Fields)0x0) goto code_?;
            pcVar18 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar18 = (code *)FUN_?(&UNK_?), pcVar18 == (code *)0x0))
            goto code_?;
            pcRam_? = pcVar18;
            (*pcRam_?)(SVar47);
            pDVar28 = (this->fields).modifiers;
            if (pDVar28 == (Dictionary_2_AvatarModifierPackageType_AvatarModifier_ *)0x0)
            goto code_?;
            uVar40 = CONCAT71((int7)((ulonglong)uVar40 >> 8),2);
            method = (MethodInfo *)this_04;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
            Object]::Dictionary_2_System_Int32Enum_System_Object__TryInsert
                      ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar28,IVar27,
                       (Object *)this_04,(InsertionBehavior__Enum)uVar40,
                       MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifier>__Add_AvatarModifierPackageType__AvatarModifier_
                       ->klass->rgctx_data[0x22].method);
            pDVar48 = (this->fields).currentModifierByteState;
            if (pDVar48 == (Dictionary_2_AvatarModifierPackageType_System_Byte_ *)0x0)
            goto code_?;
            method = (MethodInfo *)pDRam0000000182dc5048;
            if (value == (List_1_System_UInt32Enum_ *)0x0) goto code_?;
            if ((value->klass->_0).element_class !=
                (Il2CppClass *)((_union_155 *)(pDRam0000000182dc5048->vector + 1))->genericMethod)
            goto code_?;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Byte]
            ::Dictionary_2_System_Int32Enum_System_Byte__TryInsert
                      ((Dictionary_2_System_Int32Enum_System_Byte_ *)pDVar48,IVar27,
                       *(uint8_t *)&(value->fields)._items,
                       (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar40 >> 8),2),
                       MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_unsigned_char>__Add_AvatarModifierPackageType__unsigned_char_
                       ->klass->rgctx_data[0x22].method);
            *(undefined1 *)&this_04->vector[0].next = 1;
            (**(code **)&((Il2CppClass_0 *)&this_04->klass)->image[5].token)(this_04,this);
            pIVar44 = ((Il2CppClass_0 *)&this_04->klass)->image;
            packageType = (*(code *)pIVar44[5].nameToClassHashTable)
                                    (this_04,pIVar44[5].codeGenModule);
            if (*(int *)&(TypeInfo__AvatarModifierPackageFactory->_1).field_0x1c == 0) {
              FUN_?();
            }
            pAVar30 = AvatarModifierPackageFactory::AvatarModifierPackageFactory_GetPackage
                                (&AStack_31,packageType,(MethodInfo *)0x0);
            method = (MethodInfo *)pAVar30->avatarModifiers;
            uVar12 = 0;
            if ((Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
                 *)method ==
                (Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
                 *)0x0) goto code_?;
            for (; (int)uVar12 <
                   (int)*(uint *)&((Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
                                    *)method)->max_length; uVar12 = uVar12 + 1) {
              pBVar36 = (this->fields).modifierEffectCount;
              if (*(uint *)&((Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
                              *)method)->max_length <= uVar12) goto code_?;
              uVar32 = (&((Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
                           *)method)->vector[0].next)[(longlong)(int)uVar12 * 4];
              if (pBVar36 == (Byte__Array *)0x0) goto code_?;
              if ((uint)pBVar36->max_length <= uVar32) goto code_?;
              pBVar36->vector[(int)uVar32] = pBVar36->vector[(int)uVar32] + 1;
            }
          }
        }
      }
      else {
        pDVar48 = (this->fields).currentModifierByteState;
        if (pDVar48 == (Dictionary_2_AvatarModifierPackageType_System_Byte_ *)0x0)
        goto code_?;
        cVar45 = FUN_?(pDVar48,IVar27);
        method = (MethodInfo *)pDRam0000000182dc5048;
        if (value == (List_1_System_UInt32Enum_ *)0x0) goto code_?;
        if ((value->klass->_0).element_class !=
            (Il2CppClass *)((_union_155 *)(pDRam0000000182dc5048->vector + 1))->genericMethod)
        goto code_?;
        if (*(char *)&(value->fields)._items != cVar45) {
          pDVar28 = (this->fields).modifiers;
          if (pDVar28 == (Dictionary_2_AvatarModifierPackageType_AvatarModifier_ *)0x0)
          goto code_?;
          method = 
          MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifier>__get_Item_AvatarModifierPackageType_
          ;
          pOVar29 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                              ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar28,IVar27,
                               MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifier>__get_Item_AvatarModifierPackageType_
                              );
          if (pOVar29 == (Object *)0x0) goto code_?;
          method = (MethodInfo *)pOVar29->klass[1]._0.name;
          (*(code *)method)(pOVar29,pOVar29->klass[1]._0.namespaze);
          pDVar48 = (this->fields).currentModifierByteState;
          if (pDVar48 == (Dictionary_2_AvatarModifierPackageType_System_Byte_ *)0x0)
          goto code_?;
          if ((value->klass->_0).element_class !=
              (Il2CppClass *)((_union_155 *)(pDRam0000000182dc5048->vector + 1))->genericMethod)
          goto code_?;
          method_00 = MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_unsigned_char>__set_Item_AvatarModifierPackageType__unsigned_char_
                      ->klass->rgctx_data[0x22].method;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Byte]::
          Dictionary_2_System_Int32Enum_System_Byte__TryInsert
                    ((Dictionary_2_System_Int32Enum_System_Byte_ *)pDVar48,IVar27,
                     *(uint8_t *)&(value->fields)._items,
                     (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)method_00 >> 8),1),
                     method_00);
        }
      }
    } while( true );
  }
code_?:
  FUN_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Void VisualizeBulletImpact(VoxelHit, Ray, Int32, Single) */

void Assembly-CSharp.dll::Avatar::Avatar_VisualizeBulletImpact
               (Avatar *this,VoxelHit *voxelHit,Ray *lineOfFire,int32_t shooterActorNumber,
               float damage,MethodInfo *method)

{
  pAVar1 = (this->fields).bulletImpactVisualizer;
  if (pAVar1 != (AvatarBulletImpactVisualizer *)0x0) {
    uStack_2._0_4_ = (lineOfFire->m_Origin).x;
    uStack_2._4_4_ = (lineOfFire->m_Origin).y;
    uStack_3 = *(undefined8 *)&(lineOfFire->m_Origin).z;
    uStack_4._0_4_ = (lineOfFire->m_Direction).y;
    uStack_4._4_4_ = (lineOfFire->m_Direction).z;
    uStack_5._0_4_ = (voxelHit->point).x;
    uStack_5._4_4_ = (voxelHit->point).y;
    uStack_6 = *(undefined8 *)&(voxelHit->point).z;
    uStack_7._0_4_ = voxelHit->face;
    uStack_7._4_1_ = voxelHit->isCubeHit;
    uStack_7._5_3_ = *(undefined3 *)&voxelHit->field_0x25;
    uStack_8 = *(undefined8 *)&voxelHit->woId;
    uStack_9._0_4_ = (voxelHit->normal).y;
    uStack_9._4_4_ = (voxelHit->normal).z;
    uStack_10 = *(undefined8 *)&voxelHit->cubePos;
    pCStack_11 = voxelHit->collider;
    pTStack_12 = voxelHit->transform;
    pCStack_13 = voxelHit->cube;
    uStack_14 = *(undefined8 *)&voxelHit->distance;
    iStack_15 = voxelHit->interactionFlags;
    (*(pAVar1->klass->vtable).VisualizeBulletImpact_1.methodPtr)
              (pAVar1,&uStack_5,&uStack_2,shooterActorNumber,damage,
               (pAVar1->klass->vtable).VisualizeBulletImpact_1.method);
    return;
  }
  FUN_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Avatar() */

void Assembly-CSharp.dll::Avatar::Avatar__ctor(Avatar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifier>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_unsigned_char>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_unsigned_char>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifier>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifier>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifier>__Dictionary__
            );
  bVar1 = iRam_? != 0;
  (this->fields).modifiers = (Dictionary_2_AvatarModifierPackageType_AvatarModifier_ *)this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).modifiers >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pDVar6 = (Dictionary_2_AvatarModifierPackageType_System_Byte_ *)
           FUN_?(
                        TypeInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_unsigned_char>
                        );
  pEVar7 = mscorlib.dll::System::Collections::Generic::EqualityComparer`1[System::Int32Enum]::
           EqualityComparer_1_System_Int32Enum__get_Default
                     (MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_unsigned_char>__Dictionary__
                      ->klass->rgctx_data->method->klass->rgctx_data[3].method);
  if ((pEVar7 != (EqualityComparer_1_System_Int32Enum_ *)0x0) &&
     (bVar1 = iRam_? != 0,
     (pDVar6->fields)._comparer = (IEqualityComparer_1_AvatarModifierPackageType_ *)0x0, bVar1)) {
    uVar2 = (uint)((ulonglong)&(pDVar6->fields)._comparer >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  bVar1 = iRam_? != 0;
  (this->fields).currentModifierByteState = pDVar6;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).currentModifierByteState >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pBVar8 = (Byte__Array *)FUN_?(TypeInfo__System__Byte,0x1c);
  bVar1 = iRam_? != 0;
  (this->fields).modifierEffectCount = pBVar8;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).modifierEffectCount >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
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
  return;
}


/* Bounds get_Bounds() */

Bounds * Assembly-CSharp.dll::Avatar::Avatar_get_Bounds
                   (Bounds *__return_storage_ptr__,Avatar *this,MethodInfo *method)

{
  pMVar1 = (this->fields).mvAvatar;
  if (pMVar1 != (MVAvatar *)0x0) {
    puVar2 = (undefined8 *)
             (*(pMVar1->klass->vtable).GetLocalBounds.methodPtr)
                       (auStack_3,pMVar1,3,(pMVar1->klass->vtable).GetLocalBounds.method);
    uVar4 = *puVar2;
    uVar5 = puVar2[1];
    uVar6 = puVar2[2];
    (__return_storage_ptr__->m_Center).x = (float)(int)uVar4;
    (__return_storage_ptr__->m_Center).y = (float)(int)((ulonglong)uVar4 >> 0x20);
    *(undefined8 *)&(__return_storage_ptr__->m_Center).z = uVar5;
    (__return_storage_ptr__->m_Extents).y = (float)(int)uVar6;
    (__return_storage_ptr__->m_Extents).z = (float)(int)((ulonglong)uVar6 >> 0x20);
    return __return_storage_ptr__;
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  pBVar8 = (Bounds *)(*pcVar7)();
  return pBVar8;
}


/* Vector3 get_Position() */

Vector3 * Assembly-CSharp.dll::Avatar::Avatar_get_Position
                    (Vector3 *__return_storage_ptr__,Avatar *this,MethodInfo *method)

{
  obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                  ((Component *)this,(MethodInfo *)0x0);
  if (obj == (Transform *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pVVar2 = (Vector3 *)(*pcVar1)();
    return pVVar2;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_3 = 0;
  fStack_4 = 0.0;
  pvVar5 = (obj->fields)._._.m_CachedPtr;
  if (pvVar5 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    pVVar2 = (Vector3 *)(*pcVar1)();
    return pVVar2;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar6 = func_?(&UNK_?);
    FUN_?(uVar6,0);
    pcVar1 = (code *)swi(3);
    pVVar2 = (Vector3 *)(*pcVar1)();
    return pVVar2;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar5,&uStack_3);
  __return_storage_ptr__->x = (float)(undefined4)uStack_3;
  __return_storage_ptr__->y = (float)uStack_3._4_4_;
  __return_storage_ptr__->z = fStack_4;
  return __return_storage_ptr__;
}


/* Vector3 get_Velocity() */

Vector3 * Assembly-CSharp.dll::Avatar::Avatar_get_Velocity
                    (Vector3 *__return_storage_ptr__,Avatar *this,MethodInfo *method)

{
  pMVar1 = (this->fields).mvAvatar;
  if (pMVar1 != (MVAvatar *)0x0) {
    puVar2 = (undefined8 *)
             (*(pMVar1->klass->vtable).__unknown_1.methodPtr)
                       (auStack_3,pMVar1,(pMVar1->klass->vtable).__unknown_1.method);
    uVar4 = *puVar2;
    fVar5 = *(float *)(puVar2 + 1);
    __return_storage_ptr__->x = (float)(int)uVar4;
    __return_storage_ptr__->y = (float)(int)((ulonglong)uVar4 >> 0x20);
    __return_storage_ptr__->z = fVar5;
    return __return_storage_ptr__;
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  pVVar7 = (Vector3 *)(*pcVar6)();
  return pVVar7;
}

