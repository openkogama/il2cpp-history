
/* Void Activate(Int32, Vector3, Quaternion) */

void Assembly-CSharp.dll::MVAvatarRemote::MVAvatarRemote_Activate
               (MVAvatarRemote *this,int32_t idFrom,Vector3 *position,Quaternion *rotation,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__DynamicCullingHandler__UpdateCullingRadius_MVWorldObjectClient__ScaleChangedEventArgs_
                  ,CONCAT44(in_register_00000014,idFrom));
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__GameObject);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVNetworkListener);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fStack_1 = position->z;
  uStack_2._0_4_ = position->x;
  uStack_2._4_4_ = position->y;
  (*(this->klass->vtable).set_Position.methodPtr)
            (this,&uStack_2,(this->klass->vtable).set_Position.method);
  uStack_2._0_4_ = rotation->x;
  uStack_2._4_4_ = rotation->y;
  fStack_1 = rotation->z;
  fStack_3 = rotation->w;
  (*(this->klass->vtable).set_Rotation.methodPtr)(this,&uStack_2);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar4 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar4 != (MVGameControllerBase *)0x0) &&
      (pMVar5 = (pMVar4->fields).game, pMVar5 != (MVNetworkGame *)0x0)) &&
     (this_00 = (pMVar5->fields).transformNetworkManager, this_00 != (TransformNetworkManager *)0x0)
     ) {
    this_01 = (MVNetworkListener *)
              TransformNetworkManager::TransformNetworkManager_GetNetworkObject
                        (this_00,(this->fields)._._._._.id,(MethodInfo *)0x0);
    if (this_01 != (MVNetworkListener *)0x0) {
      bVar6 = (TypeInfo__MVNetworkListener->_1).naturalAligment;
      if (((this_01->klass->_1).naturalAligment < bVar6) ||
         ((this_01->klass->_1).typeHierarchy[(ulonglong)bVar6 - 1] !=
          (Il2CppClass *)TypeInfo__MVNetworkListener)) {
        FUN_?(this_01);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      MVNetworkListener::MVNetworkListener_SetToCurrentPosition(this_01,(MethodInfo *)0x0);
    }
    pGVar8 = (this->fields)._._._.gameObject;
    if (pGVar8 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar8,1,(MethodInfo *)0x0);
      pAVar9 = (this->fields)._.avatar;
      if ((pAVar9 != (Avatar *)0x0) &&
         (pAVar10 = (pAVar9->fields).avatarUIHandler, pAVar10 != (AvatarUIHandler *)0x0)) {
        (*(pAVar10->klass->vtable).Activate.methodPtr)
                  (pAVar10,(pAVar10->klass->vtable).Activate.method);
        pDVar11 = (this->fields).cullingHandler;
        pGVar8 = (this->fields)._._._.gameObject;
        cullingGroup = (GameObject__Array *)FUN_?(TypeInfo__UnityEngine__GameObject,1);
        pMVar12 = (this->fields)._.body;
        if ((pMVar12 != (MVBody *)0x0) && (cullingGroup != (GameObject__Array *)0x0)) {
          if ((int)cullingGroup->max_length == 0) {
            FUN_?();
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          bVar13 = iRam_? != 0;
          cullingGroup->vector[0] = (pMVar12->fields)._._._.gameObject;
          if (bVar13) {
            uVar14 = (uint)((ulonglong)cullingGroup->vector >> 0xc);
            lVar15 = (ulonglong)((uVar14 & 0x1fffff) >> 6) * 8;
            do {
              uVar16 = *(ulonglong *)(lVar15 + 0xADDR);
              puVar17 = (ulonglong *)(lVar15 + 0xADDR);
              LOCK();
              bVar13 = uVar16 == *puVar17;
              if (bVar13) {
                *puVar17 = uVar16 | 1L << (uVar14 & 0x3f);
              }
              UNLOCK();
            } while (!bVar13);
          }
          if (pDVar11 != (DynamicCullingHandler *)0x0) {
            DynamicCullingHandler::DynamicCullingHandler_ActivateCulling
                      (pDVar11,pGVar8,cullingGroup,1,(MethodInfo *)0x0);
            pUVar18 = (this->fields)._._._.ScaleChanged;
            pDVar11 = (this->fields).cullingHandler;
            this_02 = (UnityAction_2_System_Object_System_Object_ *)
                      FUN_?(
                                   TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>
                                   );
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      (this_02,(Object *)pDVar11,
                       MethodInfo__DynamicCullingHandler__UpdateCullingRadius_MVWorldObjectClient__ScaleChangedEventArgs_
                       ,(MethodInfo *)0x0);
            pDVar19 = mscorlib.dll::System::Delegate::Delegate_Combine
                                ((Delegate *)pUVar18,(Delegate *)this_02,(MethodInfo *)0x0);
            pUVar20 = 
            TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>;
            if (pDVar19 == (Delegate *)0x0) {
              (this->fields)._._._.ScaleChanged =
                   (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs_ *)0x0;
            }
            else {
              pUVar18 = (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs_ *)
                        FUN_?(pDVar19,
                                      TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>
                                     );
              if (pUVar18 == (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs_ *)0x0) {
                FUN_?(pDVar19,pUVar20);
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              (this->fields)._._._.ScaleChanged = pUVar18;
              pUVar20 = 
              TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>
              ;
              lVar15 = FUN_?(pDVar19,
                                     TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>
                                    );
              if (lVar15 == 0) {
                FUN_?(pDVar19,pUVar20);
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
            }
            if (iRam_? != 0) {
              uVar14 = (uint)((ulonglong)&(this->fields)._._._.ScaleChanged >> 0xc);
              lVar15 = (ulonglong)((uVar14 & 0x1fffff) >> 6) * 8;
              do {
                uVar16 = *(ulonglong *)(lVar15 + 0xADDR);
                puVar17 = (ulonglong *)(lVar15 + 0xADDR);
                LOCK();
                bVar13 = uVar16 == *puVar17;
                if (bVar13) {
                  *puVar17 = uVar16 | 1L << (uVar14 & 0x3f);
                }
                UNLOCK();
              } while (!bVar13);
            }
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void AttachBody(MVBody) */

void Assembly-CSharp.dll::MVAvatarRemote::MVAvatarRemote_AttachBody
               (MVAvatarRemote *this,MVBody *newBody,MethodInfo *method)

{
  MVAvatar::MVAvatar_AttachBody((MVAvatar *)this,newBody,(MethodInfo *)0x0);
  if (newBody == (MVBody *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (((newBody->fields).forceHidden != 0) || ((newBody->fields).visible == 1)) {
    return;
  }
  (newBody->fields).visible = 1;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Renderer>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Renderer>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Renderer>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Renderer>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar2 = (newBody->fields).renderers;
  if (pLVar2 != (List_1_UnityEngine_Renderer_ *)0x0) {
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&uStack_4 >> 0xc);
      puVar5 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar6 = *puVar5;
        LOCK();
        uVar7 = *puVar5;
        if (uVar6 == uVar7) {
          *puVar5 = uVar6 | 1L << (ulonglong)(uVar3 & 0x3f);
        }
        UNLOCK();
      } while (uVar6 != uVar7);
    }
    pLStack_8 = (List_1_T_Enumerator_System_Object_ *)
                 ((ulonglong)(uint)(pLVar2->fields)._version << 0x20);
    puStack_9 = (undefined *)0x0;
    LStack_10._8_8_ = pLStack_8;
    LStack_10._current = (Object *)0x0;
    uStack_4 = 0;
    pLStack_8 = &LStack_10;
    LStack_10._list = (List_1_System_Object_ *)pLVar2;
    while (bVar11 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                   ::List_1_T_Enumerator_System_Object__MoveNext
                             (&LStack_10,
                              MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Renderer>__MoveNext__
                             ), pAVar12 = (AvatarBlinker *)LStack_10._current, bVar11 != 0) {
      bVar11 = (newBody->fields).visible;
      if ((AvatarBlinker *)LStack_10._current == (AvatarBlinker *)0x0) goto code_?;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar13 = (((AvatarBlinker__Fields *)((longlong)pAVar12 + 0x10))->_)._._._._.m_CachedPtr;
      if (pvVar13 == (void *)0x0) goto code_?;
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0))
      goto code_?;
      pcRam_? = pcVar1;
      (*pcRam_?)(pvVar13,bVar11);
      unaff_RDI = pAVar12;
    }
    if ((newBody->fields).shadowVisible != 0) {
      pMVar14 = (newBody->fields).bodyObject;
      if (pMVar14 == (MVBodyObject *)0x0) goto code_?;
      unaff_RDI = (AvatarBlinker *)(pMVar14->fields).avatarBlobShadowController;
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
      if (unaff_RDI != (AvatarBlinker *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((unaff_RDI->fields)._._._._._.m_CachedPtr != (void *)0x0) {
          pMVar14 = (newBody->fields).bodyObject;
          if ((pMVar14 == (MVBodyObject *)0x0) ||
             (this_00 = (pMVar14->fields).avatarBlobShadowController,
             this_00 == (AvatarBlobShadowController *)0x0)) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                    ((Behaviour *)this_00,(newBody->fields).visible,(MethodInfo *)0x0);
        }
      }
    }
    pMVar14 = (newBody->fields).bodyObject;
    if (pMVar14 != (MVBodyObject *)0x0) {
      unaff_RDI = (pMVar14->fields).avatarBlinker;
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
      if (unaff_RDI != (AvatarBlinker *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((unaff_RDI->fields)._._._._._.m_CachedPtr != (void *)0x0) {
          pMVar14 = (newBody->fields).bodyObject;
          if ((pMVar14 == (MVBodyObject *)0x0) ||
             (pAVar12 = (pMVar14->fields).avatarBlinker, pAVar12 == (AvatarBlinker *)0x0))
          goto code_?;
          (pAVar12->fields)._.visible = (newBody->fields).visible;
        }
      }
      this_01 = (newBody->fields).bodyAccessoriesController;
      if (this_01 != (BodyAccessoriesController *)0x0) {
        BodyAccessoriesController::BodyAccessoriesController_UpdateAccessoryVisibility
                  (this_01,(newBody->fields).visible,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  FUN_?();
  pAVar12 = unaff_RDI;
code_?:
  uVar15 = func_?(&UNK_?);
  FUN_?(uVar15);
code_?:
  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
  ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar12,(MethodInfo *)0x0);
code_?:
  FUN_?();
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void AvatarStateChangedHandler(Object) */

void Assembly-CSharp.dll::MVAvatarRemote::MVAvatarRemote_AvatarStateChangedHandler
               (MVAvatarRemote *this,Object *a,MethodInfo *method)

{
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
code_?:
    FUN_?();
code_?:
    FUN_?();
  }
  else {
    pcRam_? = pcVar1;
    fVar3 = (float)(*pcRam_?)();
    (this->fields)._.healParticleSpawnTime = fVar3;
    MVAvatar::MVAvatar_AvatarStateChangedHandler((MVAvatar *)this,a,(MethodInfo *)0x0);
    if (a == (Object *)0x0) {
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((a->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40))
    goto code_?;
    if (((ulonglong)a[1].klass & 4) != 0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__AvatarUIHandlerRemote);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this_01 = (this->fields)._.body;
      if (this_01 != (MVBody *)0x0) {
        if (((this_01->fields).forceHidden == 0) && ((this_01->fields).visible != 0)) {
          (this_01->fields).visible = 0;
          MVBody::MVBody_UpdateVisibility(this_01,(MethodInfo *)0x0);
        }
        pAVar4 = (this->fields)._.avatar;
        if ((pAVar4 != (Avatar *)0x0) &&
           (pAVar5 = (pAVar4->fields).avatarUIHandler, pAVar5 != (AvatarUIHandler *)0x0)) {
          (*(pAVar5->klass->vtable).SetShouldShowUI.methodPtr)
                    (pAVar5,0,(pAVar5->klass->vtable).SetShouldShowUI.method);
          pAVar4 = (this->fields)._.avatar;
          if ((pAVar4 != (Avatar *)0x0) &&
             (this_02 = (AvatarUIHandlerRemote *)(pAVar4->fields).avatarUIHandler,
             this_02 != (AvatarUIHandlerRemote *)0x0)) {
            bVar6 = (TypeInfo__AvatarUIHandlerRemote->_1).naturalAligment;
            if (((this_02->klass->_1).naturalAligment < bVar6) ||
               ((this_02->klass->_1).typeHierarchy[(ulonglong)bVar6 - 1] !=
                (Il2CppClass *)TypeInfo__AvatarUIHandlerRemote)) {
              FUN_?(this_02);
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            AvatarUIHandlerRemote::AvatarUIHandlerRemote_set_NameTagLabelVisible
                      (this_02,0,(MethodInfo *)0x0);
            obj = (this->fields).triggerCollider;
            if (obj != (CapsuleCollider *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Collider>_UnityEngine__Collider_
                              ,0,0);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (obj == (CapsuleCollider *)0x0) {
                FUN_?();
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              pvVar7 = (obj->fields)._._._.m_CachedPtr;
              if (pvVar7 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              pcVar1 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
                uVar2 = func_?(&UNK_?);
                FUN_?(uVar2,0);
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*pcRam_?)(pvVar7,0);
              return;
            }
          }
        }
      }
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar8 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (pMVar8 != (MVGameControllerBase *)0x0) {
      pMVar9 = (pMVar8->fields).game;
      if (pMVar9 != (MVNetworkGame *)0x0) {
        this_00 = (pMVar9->fields).playerContainer;
        if (this_00 != (MVPlayerContainer *)0x0) {
          pMVar10 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                             (this_00,(this->fields)._._._._.ownerActorNr,(MethodInfo *)0x0);
          if ((pMVar10 != (MVPlayer *)0x0) && ((pMVar10->fields).playerState != 3)) {
            MVAvatarRemote_ShowBody(this,(MethodInfo *)0x0);
          }
          return;
        }
        goto code_?;
      }
      goto code_?;
    }
  }
  FUN_?();
code_?:
  FUN_?(a);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* CapsuleCollider CreateTriggerCollider() */

CapsuleCollider *
Assembly-CSharp.dll::MVAvatarRemote::MVAvatarRemote_CreateTriggerCollider
          (MVAvatarRemote *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__CapsuleCollider);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__CapsuleCollider_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::CapsuleCollider>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TriggerBoxEvents_MethodInfo__UnityEngine__GameObject__AddComponent<TriggerBoxEvents>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Collider>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__GameObject);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVAvatarRemote__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_triggerCollider);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Player);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  self = (GameObject *)FUN_?(TypeInfo__UnityEngine__GameObject);
  name = StringLiteral_triggerCollider;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_Internal_CreateGameObject
            (self,name,(MethodInfo *)0x0);
  if (self != (GameObject *)0x0) {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (self,(MethodInfo *)0x0);
    pGVar2 = (this->fields)._._._.gameObject;
    if ((pGVar2 != (GameObject *)0x0) &&
       (value_00 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                             (pGVar2,(MethodInfo *)0x0), pTVar1 != (Transform *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                (pTVar1,value_00,(MethodInfo *)0x0);
      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (self,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pTVar1 == (Transform *)0x0) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        pCVar4 = (CapsuleCollider *)(*pcVar3)();
        return pCVar4;
      }
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar5 = (pTVar1->fields)._._.m_CachedPtr;
      if (pvVar5 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        pCVar4 = (CapsuleCollider *)(*pcVar3)();
        return pCVar4;
      }
      pcVar3 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
        uVar6 = func_?(&UNK_?);
        FUN_?(uVar6,0);
        pcVar3 = (code *)swi(3);
        pCVar4 = (CapsuleCollider *)(*pcVar3)();
        return pCVar4;
      }
      pcRam_? = pcVar3;
      (*pcRam_?)(pvVar5);
      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (self,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Quaternion);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pQVar7 = TypeInfo__UnityEngine__Quaternion->static_fields;
      if (pTVar1 != (Transform *)0x0) {
        fStack_8 = (pQVar7->identityQuaternion).x;
        fStack_9 = (pQVar7->identityQuaternion).y;
        fStack_10 = (pQVar7->identityQuaternion).z;
        fStack_11 = (pQVar7->identityQuaternion).w;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar5 = (pTVar1->fields)._._.m_CachedPtr;
        if (pvVar5 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
          pcVar3 = (code *)swi(3);
          pCVar4 = (CapsuleCollider *)(*pcVar3)();
          return pCVar4;
        }
        pcVar3 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
          uVar6 = func_?(&UNK_?);
          FUN_?(uVar6,0);
          pcVar3 = (code *)swi(3);
          pCVar4 = (CapsuleCollider *)(*pcVar3)();
          return pCVar4;
        }
        pcRam_? = pcVar3;
        (*pcRam_?)(pvVar5);
        value = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                          (StringLiteral_Player,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
                  (self,value,(MethodInfo *)0x0);
        pCVar4 = (CapsuleCollider *)
                 UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                           (self,
                            UnityEngine__CapsuleCollider_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::CapsuleCollider>__
                           );
        if (pCVar4 != (CapsuleCollider *)0x0) {
          lStack_12 = (ulonglong)_UNK_? << 0x20;
          uStack_13 = 0;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::CapsuleCollider>_UnityEngine__CapsuleCollider_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar5 = (pCVar4->fields)._._._.m_CachedPtr;
          if (pvVar5 != (void *)0x0) {
            pcVar3 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
              uVar6 = func_?(&UNK_?);
              FUN_?(uVar6,0);
              pcVar3 = (code *)swi(3);
              pCVar4 = (CapsuleCollider *)(*pcVar3)();
              return pCVar4;
            }
            pcRam_? = pcVar3;
            (*pcRam_?)(pvVar5,&lStack_12);
            UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_isTrigger
                      ((Collider *)pCVar4,1,(MethodInfo *)0x0);
            pGVar2 = (this->fields)._._._.gameObject;
            if ((pGVar2 == (GameObject *)0x0) ||
               (obj = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                                (pGVar2,
                                 UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Collider>__
                                ), obj == (Object *)0x0)) goto code_?;
            bVar14 = (TypeInfo__UnityEngine__CapsuleCollider->_1).naturalAligment;
            if (((obj->klass->_1).naturalAligment < bVar14) ||
               ((obj->klass->_1).typeHierarchy[(ulonglong)bVar14 - 1] !=
                (Il2CppClass *)TypeInfo__UnityEngine__CapsuleCollider)) {
              FUN_?(obj);
              pcVar3 = (code *)swi(3);
              pCVar4 = (CapsuleCollider *)(*pcVar3)();
              return pCVar4;
            }
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::CapsuleCollider>_UnityEngine__CapsuleCollider_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pOVar15 = obj[1].klass;
            if (pOVar15 == (Object__Class *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException(obj,(MethodInfo *)0x0);
              pcVar3 = (code *)swi(3);
              pCVar4 = (CapsuleCollider *)(*pcVar3)();
              return pCVar4;
            }
            pcVar3 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
              uVar6 = func_?(&UNK_?);
              FUN_?(uVar6,0);
              pcVar3 = (code *)swi(3);
              pCVar4 = (CapsuleCollider *)(*pcVar3)();
              return pCVar4;
            }
            pcRam_? = pcVar3;
            uVar16 = (*pcRam_?)(pOVar15);
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::CapsuleCollider>_UnityEngine__CapsuleCollider_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar5 = (pCVar4->fields)._._._.m_CachedPtr;
            if (pvVar5 != (void *)0x0) {
              pcVar3 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
                uVar6 = func_?(&UNK_?);
                FUN_?(uVar6,0);
                pcVar3 = (code *)swi(3);
                pCVar4 = (CapsuleCollider *)(*pcVar3)();
                return pCVar4;
              }
              pcRam_? = pcVar3;
              (*pcRam_?)(pvVar5,uVar16);
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::CapsuleCollider>_UnityEngine__CapsuleCollider_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pOVar15 = obj[1].klass;
              if (pOVar15 == (Object__Class *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException(obj,(MethodInfo *)0x0);
                pcVar3 = (code *)swi(3);
                pCVar4 = (CapsuleCollider *)(*pcVar3)();
                return pCVar4;
              }
              pcVar3 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
                uVar6 = func_?(&UNK_?);
                FUN_?(uVar6,0);
                pcVar3 = (code *)swi(3);
                pCVar4 = (CapsuleCollider *)(*pcVar3)();
                return pCVar4;
              }
              pcRam_? = pcVar3;
              uVar16 = (*pcRam_?)(pOVar15);
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::CapsuleCollider>_UnityEngine__CapsuleCollider_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pvVar5 = (pCVar4->fields)._._._.m_CachedPtr;
              if (pvVar5 != (void *)0x0) {
                pcVar3 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
                  uVar6 = func_?(&UNK_?);
                  FUN_?(uVar6,0);
                  pcVar3 = (code *)swi(3);
                  pCVar4 = (CapsuleCollider *)(*pcVar3)();
                  return pCVar4;
                }
                pcRam_? = pcVar3;
                (*pcRam_?)(pvVar5,uVar16);
                this_00 = (TriggerBoxEvents *)
                          UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_AddComponent_1
                                    (self,
                                     TriggerBoxEvents_MethodInfo__UnityEngine__GameObject__AddComponent<TriggerBoxEvents>__
                                    );
                this_01 = (UnityAction_2_System_Object_System_Object_ *)
                          FUN_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System
                ::Object]::UnityAction_2_System_Object_System_Object___ctor
                          (this_01,(Object *)this,
                           MethodInfo__MVAvatarRemote__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                           ,(MethodInfo *)0x0);
                if (this_00 != (TriggerBoxEvents *)0x0) {
                  TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
                            (this_00,(EventHandler_1_TriggerEventArgs_ *)this_01,(MethodInfo *)0x0);
                  return pCVar4;
                }
                goto code_?;
              }
            }
          }
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pCVar4,(MethodInfo *)0x0);
          pcVar3 = (code *)swi(3);
          pCVar4 = (CapsuleCollider *)(*pcVar3)();
          return pCVar4;
        }
      }
code_?:
      FUN_?();
      pcVar3 = (code *)swi(3);
      pCVar4 = (CapsuleCollider *)(*pcVar3)();
      return pCVar4;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  pCVar4 = (CapsuleCollider *)(*pcVar3)();
  return pCVar4;
}


/* Void DeActivate(Int32) */

void Assembly-CSharp.dll::MVAvatarRemote::MVAvatarRemote_DeActivate
               (MVAvatarRemote *this,int32_t idTo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__DynamicCullingHandler__UpdateCullingRadius_MVWorldObjectClient__ScaleChangedEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._._._.gameObject;
  if (this_00 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_00,0,(MethodInfo *)0x0);
    pAVar1 = (this->fields)._.avatar;
    if ((pAVar1 != (Avatar *)0x0) &&
       (pAVar2 = (pAVar1->fields).avatarUIHandler, pAVar2 != (AvatarUIHandler *)0x0)) {
      (*(pAVar2->klass->vtable).Deactivate.methodPtr)();
      pDVar3 = (this->fields).cullingHandler;
      if (pDVar3 != (DynamicCullingHandler *)0x0) {
        DynamicCullingHandler::DynamicCullingHandler_DeActivateCulling(pDVar3,(MethodInfo *)0x0);
        pUVar4 = (this->fields)._._._.ScaleChanged;
        pDVar3 = (this->fields).cullingHandler;
        this_01 = (UnityAction_2_System_Object_System_Object_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>
                               );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  (this_01,(Object *)pDVar3,
                   MethodInfo__DynamicCullingHandler__UpdateCullingRadius_MVWorldObjectClient__ScaleChangedEventArgs_
                   ,(MethodInfo *)0x0);
        pDVar5 = mscorlib.dll::System::Delegate::Delegate_Remove
                           ((Delegate *)pUVar4,(Delegate *)this_01,(MethodInfo *)0x0);
        pUVar6 = 
        TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>;
        if (pDVar5 == (Delegate *)0x0) {
          (this->fields)._._._.ScaleChanged =
               (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs_ *)0x0;
        }
        else {
          pUVar4 = (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs_ *)
                    FUN_?(pDVar5,
                                  TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>
                                 );
          if (pUVar4 == (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs_ *)0x0) {
            FUN_?(pDVar5,pUVar6);
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          (this->fields)._._._.ScaleChanged = pUVar4;
          pUVar6 = 
          TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>;
          lVar8 = FUN_?(pDVar5,
                                 TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>
                                );
          if (lVar8 == 0) {
            FUN_?(pDVar5,pUVar6);
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        if (iRam_? != 0) {
          uVar9 = (uint)((ulonglong)&(this->fields)._._._.ScaleChanged >> 0xc);
          puVar10 = (ulonglong *)((ulonglong)((uVar9 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar11 = *puVar10;
            LOCK();
            uVar12 = *puVar10;
            if (uVar11 == uVar12) {
              *puVar10 = uVar11 | 1L << (uVar9 & 0x3f);
            }
            UNLOCK();
          } while (uVar11 != uVar12);
        }
        return;
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Destroy() */

void Assembly-CSharp.dll::MVAvatarRemote::MVAvatarRemote_Destroy
               (MVAvatarRemote *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DynamicCullingHandler__UpdateCullingRadius_MVWorldObjectClient__ScaleChangedEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVAvatarRemote__InitAvatarState__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UpdateController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVWorldObjectClient::MVWorldObjectClient_Destroy((MVWorldObjectClient *)this,(MethodInfo *)0x0);
  pAVar1 = (this->fields)._.avatar;
  if ((pAVar1 != (Avatar *)0x0) &&
     (pAVar2 = (pAVar1->fields).avatarUIHandler, pAVar2 != (AvatarUIHandler *)0x0)) {
    (*(pAVar2->klass->vtable).OnDestroy.methodPtr)();
    if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
      FUN_?();
    }
    UpdateController::UpdateController_RemoveLateUpdateObject
              ((IUpdatecontrollerSubscriberLateUpdate *)this,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar3 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar3 != (MVGameControllerBase *)0x0) &&
        (pMVar4 = (pMVar3->fields).game, pMVar4 != (MVNetworkGame *)0x0)) &&
       (pMVar5 = (pMVar4->fields).playerContainer, pMVar5 != (MVPlayerContainer *)0x0)) {
      pAVar6 = (pMVar5->fields).OnLocalPlayerReady;
      this_00 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_00,(Object *)this,MethodInfo__MVAvatarRemote__InitAvatarState__,
                 (MethodInfo *)0x0);
      pAVar6 = (Action *)
                mscorlib.dll::System::Delegate::Delegate_Remove
                          ((Delegate *)pAVar6,(Delegate *)this_00,(MethodInfo *)0x0);
      if (pAVar6 == (Action *)0x0) {
        (pMVar5->fields).OnLocalPlayerReady = (Action *)0x0;
      }
      else {
        pAVar7 = (Action *)0x0;
        if (pAVar6->klass == TypeInfo__System__Action) {
          pAVar7 = pAVar6;
        }
        if (pAVar7 == (Action *)0x0) {
          FUN_?();
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        (pMVar5->fields).OnLocalPlayerReady = pAVar7;
        pAVar7 = (Action *)0x0;
        if (pAVar6->klass == TypeInfo__System__Action) {
          pAVar7 = pAVar6;
        }
        if (pAVar7 == (Action *)0x0) {
          FUN_?();
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar9 = (uint)((ulonglong)&(pMVar5->fields).OnLocalPlayerReady >> 0xc);
        lVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6) * 8;
        do {
          uVar11 = *(ulonglong *)(lVar10 + 0xADDR);
          puVar12 = (ulonglong *)(lVar10 + 0xADDR);
          LOCK();
          bVar13 = uVar11 == *puVar12;
          if (bVar13) {
            *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
          }
          UNLOCK();
        } while (!bVar13);
      }
      pDVar14 = (this->fields).cullingHandler;
      if (pDVar14 != (DynamicCullingHandler *)0x0) {
        DynamicCullingHandler::DynamicCullingHandler_DeActivateCulling(pDVar14,(MethodInfo *)0x0);
        pUVar15 = (this->fields)._._._.ScaleChanged;
        pDVar14 = (this->fields).cullingHandler;
        this_01 = (UnityAction_2_System_Object_System_Object_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>
                               );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  (this_01,(Object *)pDVar14,
                   MethodInfo__DynamicCullingHandler__UpdateCullingRadius_MVWorldObjectClient__ScaleChangedEventArgs_
                   ,(MethodInfo *)0x0);
        pDVar16 = mscorlib.dll::System::Delegate::Delegate_Remove
                            ((Delegate *)pUVar15,(Delegate *)this_01,(MethodInfo *)0x0);
        pUVar17 = 
        TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>;
        if (pDVar16 == (Delegate *)0x0) {
          (this->fields)._._._.ScaleChanged =
               (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs_ *)0x0;
        }
        else {
          pUVar15 = (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs_ *)
                    FUN_?(pDVar16,
                                  TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>
                                 );
          if (pUVar15 == (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs_ *)0x0) {
            FUN_?(pDVar16,pUVar17);
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          (this->fields)._._._.ScaleChanged = pUVar15;
          pUVar17 = 
          TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>;
          lVar10 = FUN_?(pDVar16,
                                 TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>
                                );
          if (lVar10 == 0) {
            FUN_?(pDVar16,pUVar17);
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        if (iRam_? != 0) {
          uVar9 = (uint)((ulonglong)&(this->fields)._._._.ScaleChanged >> 0xc);
          lVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6) * 8;
          do {
            uVar11 = *(ulonglong *)(lVar10 + 0xADDR);
            puVar12 = (ulonglong *)(lVar10 + 0xADDR);
            LOCK();
            bVar13 = uVar11 == *puVar12;
            if (bVar13) {
              *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
            }
            UNLOCK();
          } while (!bVar13);
        }
        return;
      }
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void HideBody() */

void Assembly-CSharp.dll::MVAvatarRemote::MVAvatarRemote_HideBody
               (MVAvatarRemote *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AvatarUIHandlerRemote);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._.body;
  if (this_00 != (MVBody *)0x0) {
    if (((this_00->fields).forceHidden == 0) && ((this_00->fields).visible != 0)) {
      (this_00->fields).visible = 0;
      MVBody::MVBody_UpdateVisibility(this_00,(MethodInfo *)0x0);
    }
    pAVar1 = (this->fields)._.avatar;
    if ((pAVar1 != (Avatar *)0x0) &&
       (pAVar2 = (pAVar1->fields).avatarUIHandler, pAVar2 != (AvatarUIHandler *)0x0)) {
      (*(pAVar2->klass->vtable).SetShouldShowUI.methodPtr)
                (pAVar2,0,(pAVar2->klass->vtable).SetShouldShowUI.method);
      pAVar1 = (this->fields)._.avatar;
      if ((pAVar1 != (Avatar *)0x0) &&
         (this_01 = (AvatarUIHandlerRemote *)(pAVar1->fields).avatarUIHandler,
         this_01 != (AvatarUIHandlerRemote *)0x0)) {
        bVar3 = (TypeInfo__AvatarUIHandlerRemote->_1).naturalAligment;
        if (((this_01->klass->_1).naturalAligment < bVar3) ||
           ((this_01->klass->_1).typeHierarchy[(ulonglong)bVar3 - 1] !=
            (Il2CppClass *)TypeInfo__AvatarUIHandlerRemote)) {
          FUN_?(this_01);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        AvatarUIHandlerRemote::AvatarUIHandlerRemote_set_NameTagLabelVisible
                  (this_01,0,(MethodInfo *)0x0);
        obj = (this->fields).triggerCollider;
        if (obj != (CapsuleCollider *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Collider>_UnityEngine__Collider_
                          ,0,0);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (obj == (CapsuleCollider *)0x0) {
            FUN_?();
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pvVar5 = (obj->fields)._._._.m_CachedPtr;
          if (pvVar5 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pcVar4 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
            uVar6 = func_?(&UNK_?);
            FUN_?(uVar6,0);
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pcRam_? = pcVar4;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam_?)(pvVar5,0);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void InitAvatarState() */

void Assembly-CSharp.dll::MVAvatarRemote::MVAvatarRemote_InitAvatarState
               (MVAvatarRemote *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVAvatarRemote__InitAvatarState__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._.SpawnRoleModeTypes;
  if (pMVar1 != (MVRuntimeDataVariable *)0x0) {
    pOVar2 = ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                       ((pMVar1->fields).value,(MethodInfo *)0x0);
    (*(this->klass->vtable).AvatarStateChangedHandler.methodPtr)
              (this,pOVar2,(this->klass->vtable).AvatarStateChangedHandler.method);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar3 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar3 != (MVGameControllerBase *)0x0) &&
        (pMVar4 = (pMVar3->fields).game, pMVar4 != (MVNetworkGame *)0x0)) &&
       (pMVar5 = (pMVar4->fields).playerContainer, pMVar5 != (MVPlayerContainer *)0x0)) {
      pAVar6 = (pMVar5->fields).OnLocalPlayerReady;
      this_00 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_00,(Object *)this,MethodInfo__MVAvatarRemote__InitAvatarState__,
                 (MethodInfo *)0x0);
      pAVar6 = (Action *)
                mscorlib.dll::System::Delegate::Delegate_Remove
                          ((Delegate *)pAVar6,(Delegate *)this_00,(MethodInfo *)0x0);
      if (pAVar6 == (Action *)0x0) {
        (pMVar5->fields).OnLocalPlayerReady = (Action *)0x0;
      }
      else {
        pAVar7 = (Action *)0x0;
        if (pAVar6->klass == TypeInfo__System__Action) {
          pAVar7 = pAVar6;
        }
        if (pAVar7 == (Action *)0x0) {
          FUN_?(pAVar6,TypeInfo__System__Action);
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        (pMVar5->fields).OnLocalPlayerReady = pAVar7;
        pAVar7 = (Action *)0x0;
        if (pAVar6->klass == TypeInfo__System__Action) {
          pAVar7 = pAVar6;
        }
        if (pAVar7 == (Action *)0x0) {
          FUN_?();
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar9 = (uint)((ulonglong)&(pMVar5->fields).OnLocalPlayerReady >> 0xc);
        puVar10 = (ulonglong *)((ulonglong)((uVar9 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar11 = *puVar10;
          LOCK();
          uVar12 = *puVar10;
          if (uVar11 == uVar12) {
            *puVar10 = uVar11 | 1L << (uVar9 & 0x3f);
          }
          UNLOCK();
        } while (uVar11 != uVar12);
      }
      return;
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVAvatarRemote::MVAvatarRemote_Initialize
               (MVAvatarRemote *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AvatarLimbManagerRemote);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AvatarUIHandlerRemote);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  AvatarRemoteMovementCalculator_MethodInfo__UnityEngine__GameObject__AddComponent<AvatarRemoteMovementCalculator>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVAvatarRemote__InitAvatarState__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVAvatarRemote__OnObserve__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVAvatarRemote__OnResume__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_OwnerActorNr_____1);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVAvatar::MVAvatar_Initialize((MVAvatar *)this,(MethodInfo *)0x0);
  if ((this->fields)._._._._.ownerActorNr == -1) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug,0);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UnityEngine__ILogger);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    pIVar1 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
    if (pIVar1 == (ILogger_1 *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar1,2);
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar3 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar3 == (MVGameControllerBase *)0x0) ||
       (pMVar4 = (pMVar3->fields).game, pMVar4 == (MVNetworkGame *)0x0)) ||
      (pMVar5 = (pMVar4->fields).playerContainer, pMVar5 == (MVPlayerContainer *)0x0)) ||
     (pMVar6 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                          (pMVar5,(this->fields)._._._._.ownerActorNr,(MethodInfo *)0x0),
     pMVar6 == (MVPlayer *)0x0)) goto code_?;
  pUVar7 = (pMVar6->fields).OnObserve;
  pNVar8 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar8,(Object *)this,MethodInfo__MVAvatarRemote__OnObserve__,(MethodInfo *)0x0);
  pUVar9 = (UnityAction *)
            mscorlib.dll::System::Delegate::Delegate_Combine
                      ((Delegate *)pUVar7,(Delegate *)pNVar8,(MethodInfo *)0x0);
  pUVar7 = (UnityAction *)0x0;
  if (pUVar9 == (UnityAction *)0x0) {
    (pMVar6->fields).OnObserve = (UnityAction *)0x0;
  }
  else {
    pUVar10 = pUVar7;
    if (pUVar9->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar10 = pUVar9;
    }
    if (pUVar10 == (UnityAction *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (pMVar6->fields).OnObserve = pUVar10;
    pUVar10 = pUVar7;
    if (pUVar9->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar10 = pUVar9;
    }
    if (pUVar10 == (UnityAction *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar11 = (uint)((ulonglong)&(pMVar6->fields).OnObserve >> 0xc);
    uVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
    do {
      uVar13 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
      puVar14 = (ulonglong *)(uVar12 * 8 + 0xADDR);
      LOCK();
      bVar15 = uVar13 == *puVar14;
      if (bVar15) {
        *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
      }
      UNLOCK();
    } while (!bVar15);
  }
  pUVar9 = (pMVar6->fields).OnResume;
  pNVar8 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar8,(Object *)this,MethodInfo__MVAvatarRemote__OnResume__,(MethodInfo *)0x0);
  pUVar9 = (UnityAction *)
            mscorlib.dll::System::Delegate::Delegate_Combine
                      ((Delegate *)pUVar9,(Delegate *)pNVar8,(MethodInfo *)0x0);
  if (pUVar9 == (UnityAction *)0x0) {
    (pMVar6->fields).OnResume = (UnityAction *)0x0;
  }
  else {
    pUVar10 = pUVar7;
    if (pUVar9->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar10 = pUVar9;
    }
    if (pUVar10 == (UnityAction *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (pMVar6->fields).OnResume = pUVar10;
    pUVar10 = pUVar7;
    if (pUVar9->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar10 = pUVar9;
    }
    if (pUVar10 == (UnityAction *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar11 = (uint)((ulonglong)&(pMVar6->fields).OnResume >> 0xc);
    uVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
    do {
      uVar13 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
      puVar14 = (ulonglong *)(uVar12 * 8 + 0xADDR);
      LOCK();
      bVar15 = uVar13 == *puVar14;
      if (bVar15) {
        *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
      }
      UNLOCK();
    } while (!bVar15);
  }
  pAVar16 = (this->fields)._.avatar;
  if ((pAVar16 == (Avatar *)0x0) ||
     (this_00 = (AvatarUIHandlerRemote *)(pAVar16->fields).avatarUIHandler,
     this_00 == (AvatarUIHandlerRemote *)0x0)) goto code_?;
  bVar17 = (TypeInfo__AvatarUIHandlerRemote->_1).naturalAligment;
  if (((this_00->klass->_1).naturalAligment < bVar17) ||
     ((this_00->klass->_1).typeHierarchy[(ulonglong)bVar17 - 1] !=
      (Il2CppClass *)TypeInfo__AvatarUIHandlerRemote)) {
    FUN_?(this_00);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  AvatarUIHandlerRemote::AvatarUIHandlerRemote_UpdateNameTag(this_00,(MethodInfo *)0x0);
  uVar18 = (pMVar6->fields)._BuildTarget_k__BackingField;
  if ((uVar18 == 3) || (uVar18 == 4)) {
    pAVar16 = (this->fields)._.avatar;
    if ((pAVar16 == (Avatar *)0x0) ||
       (pAVar19 = (pAVar16->fields).avatarUIHandler, pAVar19 == (AvatarUIHandler *)0x0))
    goto code_?;
    bVar17 = (TypeInfo__AvatarUIHandlerRemote->_1).naturalAligment;
    if (((pAVar19->klass->_1).naturalAligment < bVar17) ||
       ((pAVar19->klass->_1).typeHierarchy[(ulonglong)bVar17 - 1] !=
        (Il2CppClass *)TypeInfo__AvatarUIHandlerRemote)) {
      FUN_?(pAVar19);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((pAVar19[3].klass == (AvatarUIHandler__Class *)0x0) ||
       (pGVar20 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pAVar19[3].klass,(MethodInfo *)0x0),
       pGVar20 == (GameObject *)0x0)) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar20,1,(MethodInfo *)0x0);
    if (uVar18 == 3) {
      if ((pAVar19[3].klass == (AvatarUIHandler__Class *)0x0) ||
         (this_04 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                              ((Renderer *)pAVar19[3].klass,(MethodInfo *)0x0),
         this_04 == (Material *)0x0)) goto code_?;
      value = (Texture *)pAVar19[3].monitor;
code_?:
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_mainTexture
                (this_04,value,(MethodInfo *)0x0);
    }
    else if (uVar18 == 4) {
      if ((pAVar19[3].klass == (AvatarUIHandler__Class *)0x0) ||
         (this_04 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                              ((Renderer *)pAVar19[3].klass,(MethodInfo *)0x0),
         this_04 == (Material *)0x0)) goto code_?;
      value = pAVar19[3].fields._._._._.m_CachedPtr;
      goto code_?;
    }
    *(undefined1 *)&pAVar19[1].fields.worldObject = 1;
  }
  pAVar16 = (this->fields)._.avatar;
  if ((pAVar16 != (Avatar *)0x0) &&
     (pAVar19 = (pAVar16->fields).avatarUIHandler, pAVar19 != (AvatarUIHandler *)0x0)) {
    bVar17 = (TypeInfo__AvatarUIHandlerRemote->_1).naturalAligment;
    if (((pAVar19->klass->_1).naturalAligment < bVar17) ||
       ((pAVar19->klass->_1).typeHierarchy[(ulonglong)bVar17 - 1] !=
        (Il2CppClass *)TypeInfo__AvatarUIHandlerRemote)) {
      FUN_?(pAVar19);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    this_01 = *(HealthBar **)&pAVar19[1].fields.ownerActorNr;
    if (this_01 != (HealthBar *)0x0) {
      HealthBar::HealthBar_set_Oxygen(this_01,0.0,(MethodInfo *)0x0);
      MVAvatarRemote_InitializeHealth(this,(MethodInfo *)0x0);
      MVAvatarRemote_InitializeShield(this,(MethodInfo *)0x0);
      pCVar21 = MVAvatarRemote_CreateTriggerCollider(this,(MethodInfo *)0x0);
      bVar15 = iRam_? != 0;
      (this->fields).triggerCollider = pCVar21;
      if (bVar15) {
        uVar11 = (uint)((ulonglong)&(this->fields).triggerCollider >> 0xc);
        uVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
        do {
          uVar13 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
          puVar14 = (ulonglong *)(uVar12 * 8 + 0xADDR);
          LOCK();
          bVar15 = uVar13 == *puVar14;
          if (bVar15) {
            *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
          }
          UNLOCK();
        } while (!bVar15);
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar3 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if ((((pMVar3 != (MVGameControllerBase *)0x0) &&
           (pMVar4 = (pMVar3->fields).game, pMVar4 != (MVNetworkGame *)0x0)) &&
          (pMVar5 = (pMVar4->fields).playerContainer, pMVar5 != (MVPlayerContainer *)0x0)) &&
         (pMVar22 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar5,(MethodInfo *)0x0),
         pMVar22 != (MVLocalPlayer *)0x0)) {
        if ((pMVar22->fields)._.playerState == 1) {
          MVAvatarRemote_InitAvatarState(this,(MethodInfo *)0x0);
        }
        else {
          pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar4 == (MVNetworkGame *)0x0) ||
             (pMVar5 = (pMVar4->fields).playerContainer, pMVar5 == (MVPlayerContainer *)0x0))
          goto code_?;
          a = (pMVar5->fields).OnLocalPlayerReady;
          pNVar8 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
          UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
          NavMesh_OnNavMeshPreUpdate__ctor
                    (pNVar8,(Object *)this,MethodInfo__MVAvatarRemote__InitAvatarState__,
                     (MethodInfo *)0x0);
          pUVar9 = (UnityAction *)
                    mscorlib.dll::System::Delegate::Delegate_Combine
                              ((Delegate *)a,(Delegate *)pNVar8,(MethodInfo *)0x0);
          if (pUVar9 == (UnityAction *)0x0) {
            (pMVar5->fields).OnLocalPlayerReady = (Action *)0x0;
          }
          else {
            pUVar10 = pUVar7;
            if ((Action__Class *)pUVar9->klass == TypeInfo__System__Action) {
              pUVar10 = pUVar9;
            }
            if (pUVar10 == (UnityAction *)0x0) {
              FUN_?(pUVar9);
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            (pMVar5->fields).OnLocalPlayerReady = (Action *)pUVar10;
            if ((Action__Class *)pUVar9->klass == TypeInfo__System__Action) {
              pUVar7 = pUVar9;
            }
            if (pUVar7 == (UnityAction *)0x0) {
              FUN_?(pUVar9);
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          if (iRam_? != 0) {
            uVar11 = (uint)((ulonglong)&(pMVar5->fields).OnLocalPlayerReady >> 0xc);
            uVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
            do {
              uVar13 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
              puVar14 = (ulonglong *)(uVar12 * 8 + 0xADDR);
              LOCK();
              bVar15 = uVar13 == *puVar14;
              if (bVar15) {
                *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
              }
              UNLOCK();
            } while (!bVar15);
          }
        }
        pGVar20 = (this->fields)._._._.gameObject;
        if (pGVar20 != (GameObject *)0x0) {
          pAVar23 = (AvatarRemoteMovementCalculator *)
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                              (pGVar20,
                               AvatarRemoteMovementCalculator_MethodInfo__UnityEngine__GameObject__AddComponent<AvatarRemoteMovementCalculator>__
                              );
          bVar15 = iRam_? != 0;
          (this->fields).avatarRemoteMovementCalculator = pAVar23;
          if (bVar15) {
            uVar11 = (uint)((ulonglong)&(this->fields).avatarRemoteMovementCalculator >> 0xc);
            uVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
            do {
              uVar13 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
              puVar14 = (ulonglong *)(uVar12 * 8 + 0xADDR);
              LOCK();
              bVar15 = uVar13 == *puVar14;
              if (bVar15) {
                *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
              }
              UNLOCK();
            } while (!bVar15);
          }
          pAVar24 = (AvatarLimbManager *)FUN_?(TypeInfo__AvatarLimbManagerRemote);
          bVar15 = iRam_? != 0;
          (this->fields)._.limbManager = pAVar24;
          if (bVar15) {
            uVar11 = (uint)((ulonglong)&(this->fields)._.limbManager >> 0xc);
            uVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
            do {
              uVar13 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
              puVar14 = (ulonglong *)(uVar12 * 8 + 0xADDR);
              LOCK();
              bVar15 = uVar13 == *puVar14;
              if (bVar15) {
                *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
              }
              UNLOCK();
            } while (!bVar15);
          }
          pAVar16 = (this->fields)._.avatar;
          if ((pAVar16 != (Avatar *)0x0) &&
             (pAVar24 = (this->fields)._.limbManager, pAVar24 != (AvatarLimbManager *)0x0)) {
            auStack_25._8_8_ = (pAVar24->klass->vtable).Initialize.method;
            auStack_25._0_8_ = (this->fields)._.LimbRotationRuntimeData;
            (*(pAVar24->klass->vtable).Initialize.methodPtr)
                      (pAVar24,this,(this->fields)._.body,(pAVar16->fields).enabledChangeHandler);
            pGVar20 = (this->fields)._._._.gameObject;
            if (pGVar20 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar20,0,(MethodInfo *)0x0);
              if ((pMVar6->fields).playerState == 3) {
                MVAvatarRemote_HideBody(this,(MethodInfo *)0x0);
              }
              id = (this->fields)._._._._.id;
              this_02 = (pMVar6->fields).spawnRolesManager;
              if ((this_02 != (SpawnRolesManager *)0x0) &&
                 (pSVar26 = (this_02->fields).spawnRolesRuntimeData,
                 pSVar26 != (SpawnRolesRuntimeData *)0x0)) {
                if (id == (pSVar26->fields).activeSpawnRole) {
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__MVGameControllerBase);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pMVar3 = TypeInfo__MVGameControllerBase->static_fields->instance;
                  if ((((pMVar3 == (MVGameControllerBase *)0x0) ||
                       (pMVar4 = (pMVar3->fields).game, pMVar4 == (MVNetworkGame *)0x0)) ||
                      ((pMVar4->fields).worldNetwork == (WorldNetwork *)0x0)) ||
                     ((this_03 = (MVWorldObjectClientManager *)
                                 (((pMVar4->fields).worldNetwork)->fields)._.
                                 worldObjectClientManager,
                      this_03 == (MVWorldObjectClientManager *)0x0 ||
                      (pMVar27 = MVWorldObjectClientManager::
                                 MVWorldObjectClientManager_GetWorldObjectClient
                                           (this_03,id,(MethodInfo *)0x0),
                      pMVar27 == (MVWorldObjectClient *)0x0)))) goto code_?;
                  puVar28 = (undefined8 *)
                            (*(pMVar27->klass->vtable).get_Position.methodPtr)
                                      (auStack_25,pMVar27,
                                       (pMVar27->klass->vtable).get_Position.method);
                  uVar29 = *puVar28;
                  uVar30 = *(undefined4 *)(puVar28 + 1);
                  (*(pMVar27->klass->vtable).get_Rotation.methodPtr)
                            (&stack0xffffffffffffffe8,pMVar27,
                             (pMVar27->klass->vtable).get_Rotation.method);
                  auStack_25._8_4_ = uVar30;
                  auStack_25._0_8_ = uVar29;
                  SpawnRolesManager::SpawnRolesManager_ActivateSpawnRole
                            (this_02,id,(Vector3 *)auStack_25,(Quaternion *)&stack0xffffffffffffffe8
                             ,(MethodInfo *)0x0);
                }
                return;
              }
code_?:
              FUN_?();
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void InitializeHealth() */

void Assembly-CSharp.dll::MVAvatarRemote::MVAvatarRemote_InitializeHealth
               (MVAvatarRemote *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AvatarUIHandlerRemote);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVAvatarRemote____c__DisplayClass23_0___InitializeHealth_b__0_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVAvatarRemote____c__DisplayClass23_0___InitializeHealth_b__1_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVAvatarRemote____c__DisplayClass23_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__MVAvatarRemote____c__DisplayClass23_0);
  iVar1 = iRam_?;
  if (object != (Object *)0x0) {
    object[1].klass = (Object__Class *)this;
    if (iVar1 != 0) {
      uVar2 = (uint)((ulonglong)(object + 1) >> 0xc);
      uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
      do {
        uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
        puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
        LOCK();
        bVar6 = uVar4 == *puVar5;
        if (bVar6) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
        iVar1 = iRam_?;
      } while (!bVar6);
    }
    pAVar7 = (this->fields)._.avatar;
    if ((pAVar7 != (Avatar *)0x0) &&
       (pAVar8 = (pAVar7->fields).avatarUIHandler, pAVar8 != (AvatarUIHandler *)0x0)) {
      bVar9 = (TypeInfo__AvatarUIHandlerRemote->_1).naturalAligment;
      if (((pAVar8->klass->_1).naturalAligment < bVar9) ||
         ((pAVar8->klass->_1).typeHierarchy[(ulonglong)bVar9 - 1] !=
          (Il2CppClass *)TypeInfo__AvatarUIHandlerRemote)) {
        FUN_?(pAVar8);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      object[1].monitor = *(MonitorData **)&pAVar8[1].fields.ownerActorNr;
      if (iVar1 != 0) {
        uVar2 = (uint)((ulonglong)&object[1].monitor >> 0xc);
        uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
        do {
          uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
          puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
          LOCK();
          bVar6 = uVar4 == *puVar5;
          if (bVar6) {
            *puVar5 = uVar4 | 1L << (ulonglong)(uVar2 & 0x3f);
          }
          UNLOCK();
        } while (!bVar6);
      }
      pMVar11 = (this->fields)._.Health;
      this_00 = (HealthBar *)object[1].monitor;
      if ((pMVar11 != (MVRuntimeDataVariable_1_System_Single_ *)0x0) &&
         (fVar12 = (float)(*(pMVar11->klass->vtable).get_Value.methodPtr)
                                    (pMVar11,(pMVar11->klass->vtable).get_Value.method),
         this_00 != (HealthBar *)0x0)) {
        HealthBar::HealthBar_SetScaleFromHealth(this_00,fVar12,(MethodInfo *)0x0);
        pMVar11 = (this->fields)._.Health;
        pMVar13 = (this->fields)._.body;
        if ((pMVar11 != (MVRuntimeDataVariable_1_System_Single_ *)0x0) &&
           (((fVar12 = (float)(*(pMVar11->klass->vtable).get_Value.methodPtr)
                                        (pMVar11,(pMVar11->klass->vtable).get_Value.method),
             pMVar13 != (MVBody *)0x0 &&
             (pMVar14 = (pMVar13->fields).bodyObject, pMVar14 != (MVBodyObject *)0x0)) &&
            (pAVar15 = (pMVar14->fields).avatarBlinker, pAVar15 != (AvatarBlinker *)0x0)))) {
          (pAVar15->fields).previousBlinkHealth = fVar12;
          pMVar11 = (this->fields)._.Health;
          if (pMVar11 != (MVRuntimeDataVariable_1_System_Single_ *)0x0) {
            pMVar16 = (pMVar11->fields)._.OnChange;
            pUVar17 = (UnityAction_1_System_Object_ *)
                      FUN_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
            UnityAction_1_System_Object___ctor
                      (pUVar17,object,
                       MethodInfo__MVAvatarRemote____c__DisplayClass23_0___InitializeHealth_b__0_System__Object_
                       ,(MethodInfo *)0x0);
            pMVar18 = (MVRuntimeDataVariable_OnChangeDelegate *)
                      mscorlib.dll::System::Delegate::Delegate_Combine
                                ((Delegate *)pMVar16,(Delegate *)pUVar17,(MethodInfo *)0x0);
            pMVar16 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
            if (pMVar18 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
              (pMVar11->fields)._.OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
            }
            else {
              pMVar19 = pMVar16;
              if (pMVar18->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
                pMVar19 = pMVar18;
              }
              if (pMVar19 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
                FUN_?();
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              (pMVar11->fields)._.OnChange = pMVar19;
              pMVar19 = pMVar16;
              if (pMVar18->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
                pMVar19 = pMVar18;
              }
              if (pMVar19 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
                FUN_?();
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
            }
            if (iRam_? != 0) {
              uVar2 = (uint)((ulonglong)&(pMVar11->fields)._.OnChange >> 0xc);
              uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
              do {
                uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
                puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
                LOCK();
                bVar6 = uVar4 == *puVar5;
                if (bVar6) {
                  *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
                }
                UNLOCK();
              } while (!bVar6);
            }
            pMVar20 = (this->fields)._.MaxHealth;
            pMVar21 = object[1].monitor;
            if ((pMVar20 != (MVRuntimeDataVariable_1_System_Int32_ *)0x0) &&
               (iVar1 = (*(pMVar20->klass->vtable).get_Value.methodPtr)
                                   (pMVar20,(pMVar20->klass->vtable).get_Value.method),
               pMVar21 != (MonitorData *)0x0)) {
              *(float *)(pMVar21 + 0x30) = (float)iVar1;
              pMVar20 = (this->fields)._.MaxHealth;
              if (pMVar20 != (MVRuntimeDataVariable_1_System_Int32_ *)0x0) {
                pMVar18 = (pMVar20->fields)._.OnChange;
                pUVar17 = (UnityAction_1_System_Object_ *)
                          FUN_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
                UnityAction_1_System_Object___ctor
                          (pUVar17,object,
                           MethodInfo__MVAvatarRemote____c__DisplayClass23_0___InitializeHealth_b__1_System__Object_
                           ,(MethodInfo *)0x0);
                pMVar18 = (MVRuntimeDataVariable_OnChangeDelegate *)
                          mscorlib.dll::System::Delegate::Delegate_Combine
                                    ((Delegate *)pMVar18,(Delegate *)pUVar17,(MethodInfo *)0x0);
                if (pMVar18 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
                  (pMVar20->fields)._.OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
                }
                else {
                  pMVar19 = pMVar16;
                  if (pMVar18->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
                    pMVar19 = pMVar18;
                  }
                  if (pMVar19 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
                    FUN_?(pMVar18);
                    pcVar10 = (code *)swi(3);
                    (*pcVar10)();
                    return;
                  }
                  (pMVar20->fields)._.OnChange = pMVar19;
                  if (pMVar18->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
                    pMVar16 = pMVar18;
                  }
                  if (pMVar16 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
                    FUN_?(pMVar18);
                    pcVar10 = (code *)swi(3);
                    (*pcVar10)();
                    return;
                  }
                }
                if (iRam_? != 0) {
                  uVar2 = (uint)((ulonglong)&(pMVar20->fields)._.OnChange >> 0xc);
                  uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
                  do {
                    uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
                    puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
                    LOCK();
                    bVar6 = uVar4 == *puVar5;
                    if (bVar6) {
                      *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar6);
                }
                return;
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void InitializeShield() */

void Assembly-CSharp.dll::MVAvatarRemote::MVAvatarRemote_InitializeShield
               (MVAvatarRemote *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AvatarUIHandlerRemote);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVAvatarRemote___InitializeShield_b__24_0_System__Object_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._.shield;
  if (pMVar1 != (MVRuntimeDataVariableClampedFloat *)0x0) {
    pMVar2 = (pMVar1->fields)._._.OnChange;
    this_00 = (UnityAction_1_System_Object_ *)
              FUN_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
    UnityAction_1_System_Object___ctor
              (this_00,(Object *)this,
               MethodInfo__MVAvatarRemote___InitializeShield_b__24_0_System__Object_,
               (MethodInfo *)0x0);
    pMVar2 = (MVRuntimeDataVariable_OnChangeDelegate *)
              mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pMVar2,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pMVar2 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
      (pMVar1->fields)._._.OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
    }
    else {
      pMVar3 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
      if (pMVar2->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
        pMVar3 = pMVar2;
      }
      if (pMVar3 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      (pMVar1->fields)._._.OnChange = pMVar3;
      pMVar3 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
      if (pMVar2->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
        pMVar3 = pMVar2;
      }
      if (pMVar3 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)&(pMVar1->fields)._._.OnChange >> 0xc);
      uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
      do {
        uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
        puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
        LOCK();
        bVar9 = uVar7 == *puVar8;
        if (bVar9) {
          *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar9);
    }
    pAVar10 = (this->fields)._.avatar;
    if ((pAVar10 != (Avatar *)0x0) &&
       (pAVar11 = (pAVar10->fields).avatarUIHandler, pAVar11 != (AvatarUIHandler *)0x0)) {
      bVar12 = (TypeInfo__AvatarUIHandlerRemote->_1).naturalAligment;
      if (((pAVar11->klass->_1).naturalAligment < bVar12) ||
         ((pAVar11->klass->_1).typeHierarchy[(ulonglong)bVar12 - 1] !=
          (Il2CppClass *)TypeInfo__AvatarUIHandlerRemote)) {
        FUN_?(pAVar11);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pMVar1 = (this->fields)._.shield;
      pSVar13 = pAVar11[1].fields.ownerActorName;
      if ((pMVar1 != (MVRuntimeDataVariableClampedFloat *)0x0) &&
         (iVar14 = (*(pMVar1->klass->vtable).get_Value.methodPtr)
                             (pMVar1,(pMVar1->klass->vtable).get_Value.method),
         pSVar13 != (String *)0x0)) {
        pSVar13[1].fields._stringLength = iVar14;
        *(undefined4 *)&pSVar13[2].klass = 0;
        pMVar1 = (this->fields)._.shield;
        pMVar15 = (this->fields)._.body;
        if ((pMVar1 != (MVRuntimeDataVariableClampedFloat *)0x0) &&
           (((fVar16 = (float)(*(pMVar1->klass->vtable).get_Value.methodPtr)
                                        (pMVar1,(pMVar1->klass->vtable).get_Value.method),
             pMVar15 != (MVBody *)0x0 &&
             (pMVar17 = (pMVar15->fields).bodyObject, pMVar17 != (MVBodyObject *)0x0)) &&
            (pAVar18 = (pMVar17->fields).avatarBlinker, pAVar18 != (AvatarBlinker *)0x0)))) {
          (pAVar18->fields).previousBlinkShield = fVar16;
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnAnimationChange(Object) */

void Assembly-CSharp.dll::MVAvatarRemote::MVAvatarRemote_OnAnimationChange
               (MVAvatarRemote *this,Object *newAnimationData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_state);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._.body;
  if (((pMVar1 != (MVBody *)0x0) &&
      (pMVar2 = (pMVar1->fields).bodyObject, pMVar2 != (MVBodyObject *)0x0)) &&
     (pBVar3 = (pMVar2->fields).boneAnimation, pBVar3 != (BoneAnimation *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_timeStamp);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_state);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (newAnimationData != (Object *)0x0) {
      bVar4 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).naturalAligment;
      if (((newAnimationData->klass->_1).naturalAligment < bVar4) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (newAnimationData->klass->_1).typeHierarchy[(ulonglong)bVar4 - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        FUN_?(newAnimationData);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pSVar6 = (String *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         ((Dictionary_2_System_Object_System_Object_ *)newAnimationData,
                          (Object *)StringLiteral_state,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      animationName = (String *)0x0;
      pSVar7 = animationName;
      if (pSVar6 != (String *)0x0) {
        if (pSVar6->klass == pSRam0000000182dc50c0) {
          pSVar7 = pSVar6;
        }
        if (pSVar7 == (String *)0x0) {
          FUN_?(pSVar6);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         ((Dictionary_2_System_Object_System_Object_ *)newAnimationData,
                          (Object *)StringLiteral_timeStamp,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pOVar8 != (Object *)0x0) {
        if ((pOVar8->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
          FUN_?(pOVar8);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        BoneAnimation::BoneAnimation_StartAnimation
                  (pBVar3,pSVar7,*(int32_t *)&pOVar8[1].klass,(MethodInfo *)0x0);
        pMVar9 = (this->fields)._.SpawnRoleModeTypes;
        if ((pMVar9 != (MVRuntimeDataVariable *)0x0) &&
           (pOVar8 = ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                               ((pMVar9->fields).value,(MethodInfo *)0x0), pOVar8 != (Object *)0x0))
        {
          if ((pOVar8->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
            FUN_?(pOVar8,lRam_?);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (((ulonglong)pOVar8[1].klass & 1) == 0) {
            return;
          }
          bVar4 = (
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                  ->_1).naturalAligment;
          if (((newAnimationData->klass->_1).naturalAligment < bVar4) ||
             ((Dictionary_2_System_Object_System_Object___Class *)
              (newAnimationData->klass->_1).typeHierarchy[(ulonglong)bVar4 - 1] !=
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
            FUN_?(newAnimationData);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pMVar1 = (this->fields)._.body;
          if ((pMVar1 != (MVBody *)0x0) &&
             (pMVar2 = (pMVar1->fields).bodyObject, pMVar2 != (MVBodyObject *)0x0)) {
            pBVar3 = (pMVar2->fields).boneAnimation;
            pSVar7 = (String *)
                     mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                     ::Object]::Dictionary_2_System_Object_System_Object__get_Item
                               ((Dictionary_2_System_Object_System_Object_ *)newAnimationData,
                                (Object *)StringLiteral_state,
                                MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                               );
            if (pBVar3 != (BoneAnimation *)0x0) {
              if (pSVar7 != (String *)0x0) {
                if (pSVar7->klass == pSRam0000000182dc50c0) {
                  animationName = pSVar7;
                }
                if (animationName == (String *)0x0) {
                  FUN_?(pSVar7);
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
              }
              BoneAnimation::BoneAnimation_Play(pBVar3,animationName,(MethodInfo *)0x0);
              return;
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


/* Void OnEnterVehicle() */

void Assembly-CSharp.dll::MVAvatarRemote::MVAvatarRemote_OnEnterVehicle
               (MVAvatarRemote *this,MethodInfo *method)

{
  pAVar1 = (this->fields)._.avatar;
  if ((pAVar1 != (Avatar *)0x0) &&
     (this_00 = (pAVar1->fields).waterSplashComponent, this_00 != (WaterSplashComponent *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,0,(MethodInfo *)0x0);
    (this->fields)._IsInVehicle_k__BackingField = 1;
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnLeaveVehicle() */

void Assembly-CSharp.dll::MVAvatarRemote::MVAvatarRemote_OnLeaveVehicle
               (MVAvatarRemote *this,MethodInfo *method)

{
  pAVar1 = (this->fields)._.avatar;
  if ((pAVar1 == (Avatar *)0x0) ||
     (this_00 = (pAVar1->fields).waterSplashComponent, this_00 == (WaterSplashComponent *)0x0)) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
            ((Behaviour *)this_00,1,(MethodInfo *)0x0);
  (this->fields)._IsInVehicle_k__BackingField = 0;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  AvatarPickupOwner_MethodInfo__UnityEngine__GameObject__GetComponent<AvatarPickupOwner>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  VehicleSeatManager_MethodInfo__UnityEngine__GameObject__GetComponent<VehicleSeatManager>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVVehicleBase);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Could_not_find_AvatarPickupOwner);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Did_not_find_seatmanager__Cannot);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Trying_to_leave_vehicle_but_Grou);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar3 = (this->fields)._._._.group;
  if (pMVar3 != (MVGroup *)0x0) {
    pMVar4 = pMVar3->klass;
    bVar5 = (TypeInfo__MVVehicleBase->_1).naturalAligment;
    if ((bVar5 <= (pMVar4->_1).naturalAligment) &&
       ((MVVehicleBase__Class *)(pMVar4->_1).typeHierarchy[(ulonglong)bVar5 - 1] ==
        TypeInfo__MVVehicleBase)) {
      pGVar6 = (((this->fields)._._._.group)->fields)._.gameObject;
      if (pGVar6 == (GameObject *)0x0) {
DAT_?:
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      this_01 = (VehicleSeatManager *)
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                          (pGVar6,
                           VehicleSeatManager_MethodInfo__UnityEngine__GameObject__GetComponent<VehicleSeatManager>__
                          );
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
      if (this_01 != (VehicleSeatManager *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((this_01->fields)._._._._.m_CachedPtr != (void *)0x0) {
          VehicleSeatManager::VehicleSeatManager_DetachFromSeat
                    (this_01,(MVAvatar *)this,(MethodInfo *)0x0);
          pGVar6 = (this->fields)._._._.gameObject;
          if (pGVar6 == (GameObject *)0x0) goto DAT_?;
          pOVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                              (pGVar6,
                               AvatarPickupOwner_MethodInfo__UnityEngine__GameObject__GetComponent<AvatarPickupOwner>__
                              );
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
          if (pOVar7 != (Object *)0x0) {
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            if (pOVar7[1].klass != (Object__Class *)0x0) {
              bVar8 = iRam_? != 0;
              pOVar7[9].klass = (Object__Class *)0x0;
              if (bVar8) {
                uVar9 = (uint)((ulonglong)(pOVar7 + 9) >> 0xc);
                puVar10 = (ulonglong *)((ulonglong)((uVar9 & 0x1fffff) >> 6) * 8 + 0xADDR);
                do {
                  uVar11 = *puVar10;
                  LOCK();
                  uVar12 = *puVar10;
                  if (uVar11 == uVar12) {
                    *puVar10 = uVar11 | 1L << (uVar9 & 0x3f);
                  }
                  UNLOCK();
                } while (uVar11 != uVar12);
              }
              return;
            }
          }
          pSVar13 = StringLiteral_Could_not_find_AvatarPickupOwner;
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
            pSVar13 = StringLiteral_Could_not_find_AvatarPickupOwner;
          }
          goto UnityEngine_CoreModule_dll_UnityEngine_Debug_Debug_2_LogError;
        }
      }
      pSVar13 = StringLiteral_Did_not_find_seatmanager__Cannot;
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
        pSVar13 = StringLiteral_Did_not_find_seatmanager__Cannot;
      }
      goto UnityEngine_CoreModule_dll_UnityEngine_Debug_Debug_2_LogError;
    }
  }
  plVar14 = (longlong *)FUN_?(&(this->klass->_0).byval_arg);
  str0 = StringLiteral_Trying_to_leave_vehicle_but_Grou;
  pSVar13 = (String *)0x0;
  if (plVar14 != (longlong *)0x0) {
    pSVar13 = (String *)(**(code **)(*plVar14 + 0x168))(plVar14,*(undefined8 *)(*plVar14 + 0x170));
  }
  pSVar13 = mscorlib.dll::System::String::String_Concat_4(str0,pSVar13,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
UnityEngine_CoreModule_dll_UnityEngine_Debug_Debug_2_LogError:
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__ILogger);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  pIVar15 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
  if (pIVar15 == (ILogger_1 *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar15,0,pSVar13);
  return;
}


/* Void OnObserve() */

void Assembly-CSharp.dll::MVAvatarRemote::MVAvatarRemote_OnObserve
               (MVAvatarRemote *this,MethodInfo *method)

{
  MVAvatarRemote_HideBody(this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (pMVar3 = (pMVar2->fields).playerContainer, pMVar3 != (MVPlayerContainer *)0x0)) {
    if ((pMVar3->fields).OnPlayerListChanged != (Action *)0x0) {
      pAVar4 = (pMVar3->fields).OnPlayerListChanged;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pAVar4->fields)._._.invoke_impl)
                ((pAVar4->fields)._._.method_code,(pAVar4->fields)._._.method);
      return;
    }
    return;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnResume() */

void Assembly-CSharp.dll::MVAvatarRemote::MVAvatarRemote_OnResume
               (MVAvatarRemote *this,MethodInfo *method)

{
  MVAvatarRemote_ShowBody(this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (pMVar3 = (pMVar2->fields).playerContainer, pMVar3 != (MVPlayerContainer *)0x0)) {
    if ((pMVar3->fields).OnPlayerListChanged != (Action *)0x0) {
      pAVar4 = (pMVar3->fields).OnPlayerListChanged;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pAVar4->fields)._._.invoke_impl)
                ((pAVar4->fields)._._.method_code,(pAVar4->fields)._._.method);
      return;
    }
    return;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void ShowBody() */

void Assembly-CSharp.dll::MVAvatarRemote::MVAvatarRemote_ShowBody
               (MVAvatarRemote *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AvatarUIHandlerRemote);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._.body;
  if (this_00 != (MVBody *)0x0) {
    if (((this_00->fields).forceHidden == 0) && ((this_00->fields).visible != 1)) {
      (this_00->fields).visible = 1;
      MVBody::MVBody_UpdateVisibility(this_00,(MethodInfo *)0x0);
    }
    pAVar1 = (this->fields)._.avatar;
    if (pAVar1 != (Avatar *)0x0) {
      pAVar2 = (AvatarUIHandlerRemote *)(pAVar1->fields).avatarUIHandler;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar3 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if ((((pMVar3 != (MVGameControllerBase *)0x0) &&
           (pMVar4 = (pMVar3->fields).game, pMVar4 != (MVNetworkGame *)0x0)) &&
          (this_01 = (pMVar4->fields).playerContainer, this_01 != (MVPlayerContainer *)0x0)) &&
         ((this_02 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_01,(MethodInfo *)0x0)
          , this_02 != (MVLocalPlayer *)0x0 &&
          (isFriendly = MVPlayer::MVPlayer_IsOnSameTeam_1
                                  ((MVPlayer *)this_02,(MVWorldObjectClient *)this,(MethodInfo *)0x0
                                  ), pAVar2 != (AvatarUIHandlerRemote *)0x0)))) {
        bVar5 = (TypeInfo__AvatarUIHandlerRemote->_1).naturalAligment;
        if (((pAVar2->klass->_1).naturalAligment < bVar5) ||
           ((pAVar2->klass->_1).typeHierarchy[(ulonglong)bVar5 - 1] !=
            (Il2CppClass *)TypeInfo__AvatarUIHandlerRemote)) {
          FUN_?(pAVar2,TypeInfo__AvatarUIHandlerRemote);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        AvatarUIHandlerRemote::AvatarUIHandlerRemote_SetHealthBarColor
                  (pAVar2,isFriendly,(MethodInfo *)0x0);
        pAVar1 = (this->fields)._.avatar;
        if ((pAVar1 != (Avatar *)0x0) &&
           (pAVar2 = (AvatarUIHandlerRemote *)(pAVar1->fields).avatarUIHandler,
           pAVar2 != (AvatarUIHandlerRemote *)0x0)) {
          bVar5 = (TypeInfo__AvatarUIHandlerRemote->_1).naturalAligment;
          if (((pAVar2->klass->_1).naturalAligment < bVar5) ||
             ((pAVar2->klass->_1).typeHierarchy[(ulonglong)bVar5 - 1] !=
              (Il2CppClass *)TypeInfo__AvatarUIHandlerRemote)) {
            FUN_?(pAVar2);
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar7 = (undefined7)((ulonglong)TypeInfo__AvatarUIHandlerRemote >> 8);
          AvatarUIHandlerRemote::AvatarUIHandlerRemote_set_NameTagLabelVisible
                    (pAVar2,1,(MethodInfo *)0x0);
          pAVar1 = (this->fields)._.avatar;
          if ((pAVar1 != (Avatar *)0x0) &&
             (pAVar8 = (pAVar1->fields).avatarUIHandler, pAVar8 != (AvatarUIHandler *)0x0)) {
            (*(pAVar8->klass->vtable).SetShouldShowUI.methodPtr)
                      (pAVar8,CONCAT71(uVar7,1),(pAVar8->klass->vtable).SetShouldShowUI.method);
            obj = (this->fields).triggerCollider;
            if (obj != (CapsuleCollider *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Collider>_UnityEngine__Collider_
                              ,1,0);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (obj == (CapsuleCollider *)0x0) {
                FUN_?();
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              pvVar9 = (obj->fields)._._._.m_CachedPtr;
              if (pvVar9 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              pcVar6 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
                uVar10 = func_?(&UNK_?);
                FUN_?(uVar10,0);
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              pcRam_? = pcVar6;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*pcRam_?)(pvVar9,1);
              return;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void VisualizeBulletImpact(VoxelHit, Ray, Int32, Single) */

void Assembly-CSharp.dll::MVAvatarRemote::MVAvatarRemote_VisualizeBulletImpact
               (MVAvatarRemote *this,VoxelHit *voxelHit,Ray *lineOfFire,int32_t shooterActorNumber,
               float damage,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IGUICrossHair);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IPlayModeUI);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  apMStack_1[0] = (MVPlayer *)0x0;
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
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__TryGetValue_int__MVPlayer__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this_00 = (pMVar4->fields).players;
    if (this_00 != (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
      bVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__TryGetValue
                        ((Dictionary_2_System_Int32_System_Object_ *)this_00,shooterActorNumber,
                         (Object **)apMStack_1,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__TryGetValue_int__MVPlayer__
                        );
      if (bVar5 == 0) {
        return;
      }
      if (apMStack_1[0] != (MVPlayer *)0x0) {
        bVar5 = MVPlayer::MVPlayer_IsOnSameTeam_1
                          (apMStack_1[0],(MVWorldObjectClient *)this,(MethodInfo *)0x0);
        if (bVar5 != 0) {
          return;
        }
        pMVar6 = (this->fields)._.SpawnRoleModeTypes;
        if ((pMVar6 != (MVRuntimeDataVariable *)0x0) &&
           (pOVar7 = ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                               ((pMVar6->fields).value,(MethodInfo *)0x0), pOVar7 != (Object *)0x0))
        {
          if ((pOVar7->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
            FUN_?(pOVar7,lRam_?);
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if (((ulonglong)pOVar7[1].klass & 2) != 0) {
            return;
          }
          pAVar9 = (this->fields)._.avatar;
          if ((pAVar9 != (Avatar *)0x0) &&
             (pBVar10 = (pAVar9->fields).modifierEffectCount, pBVar10 != (Byte__Array *)0x0)) {
            if ((uint)pBVar10->max_length < 0xb) {
              FUN_?();
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            if (pBVar10->vector[10] != 0) {
              return;
            }
            pAVar9 = (this->fields)._.avatar;
            if ((pAVar9 != (Avatar *)0x0) &&
               (pAVar11 = (pAVar9->fields).bulletImpactVisualizer,
               pAVar11 != (AvatarBulletImpactVisualizer *)0x0)) {
              uStack_12._0_4_ = (lineOfFire->m_Origin).x;
              uStack_12._4_4_ = (lineOfFire->m_Origin).y;
              uStack_13 = *(undefined8 *)&(lineOfFire->m_Origin).z;
              uStack_14._0_4_ = (lineOfFire->m_Direction).y;
              uStack_14._4_4_ = (lineOfFire->m_Direction).z;
              uStack_15._0_4_ = (voxelHit->point).x;
              uStack_15._4_4_ = (voxelHit->point).y;
              uStack_16 = *(undefined8 *)&(voxelHit->point).z;
              uStack_17._0_4_ = voxelHit->face;
              uStack_17._4_1_ = voxelHit->isCubeHit;
              uStack_17._5_3_ = *(undefined3 *)&voxelHit->field_0x25;
              uStack_18 = *(undefined8 *)&voxelHit->woId;
              uStack_19._0_4_ = (voxelHit->normal).y;
              uStack_19._4_4_ = (voxelHit->normal).z;
              uStack_20 = *(undefined8 *)&voxelHit->cubePos;
              pCStack_21 = voxelHit->collider;
              pTStack_22 = voxelHit->transform;
              pCStack_23 = voxelHit->cube;
              uStack_24 = *(undefined8 *)&voxelHit->distance;
              iStack_25 = voxelHit->interactionFlags;
              (*(pAVar11->klass->vtable).VisualizeBulletImpact_1.methodPtr)
                        (pAVar11,&uStack_15,&uStack_12,shooterActorNumber,damage,
                         (pAVar11->klass->vtable).VisualizeBulletImpact_1.method);
              pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if ((pMVar3 != (MVNetworkGame *)0x0) &&
                 ((pMVar4 = (pMVar3->fields).playerContainer, pMVar4 != (MVPlayerContainer *)0x0 &&
                  (pMVar26 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                       (pMVar4,(MethodInfo *)0x0), pMVar26 != (MVLocalPlayer *)0x0))
                 )) {
                if (shooterActorNumber != (pMVar26->fields)._._ActorNr_k__BackingField) {
                  return;
                }
                pMVar27 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                    ((MethodInfo *)0x0);
                if ((pMVar27 != (MainCameraManager *)0x0) &&
                   (this_01 = (pMVar27->fields).plingSound, this_01 != (AudioSource *)0x0)) {
                  UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play_1
                            (this_01,(MethodInfo *)0x0);
                  lVar28 = FUN_?();
                  if ((lVar28 != 0) &&
                     (lVar28 = FUN_?(2,TypeInfo__IPlayModeUI,lVar28), lVar28 != 0)) {
                    FUN_?(3,TypeInfo__IGUICrossHair,lVar28);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void <InitializeShield>b__24_0(Object) */

void Assembly-CSharp.dll::MVAvatarRemote::MVAvatarRemote__InitializeShield_b__24_0
               (MVAvatarRemote *this,Object *shield,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AvatarUIHandlerRemote);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields)._.avatar;
  if ((pAVar1 != (Avatar *)0x0) &&
     (pAVar2 = (pAVar1->fields).avatarUIHandler, pAVar2 != (AvatarUIHandler *)0x0)) {
    bVar3 = (TypeInfo__AvatarUIHandlerRemote->_1).naturalAligment;
    if (((pAVar2->klass->_1).naturalAligment < bVar3) ||
       ((pAVar2->klass->_1).typeHierarchy[(ulonglong)bVar3 - 1] !=
        (Il2CppClass *)TypeInfo__AvatarUIHandlerRemote)) {
      FUN_?(pAVar2);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pSVar5 = pAVar2[1].fields.ownerActorName;
    if ((pSVar5 != (String *)0x0) && (obj = (Object *)pSVar5[1].monitor, obj != (Object *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_6 = 0;
      uStack_7 = 0;
      pOVar8 = obj[1].klass;
      if (pOVar8 == (Object__Class *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException(obj,(MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar9 = func_?(&UNK_?);
        FUN_?(uVar9,0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcRam_? = pcVar4;
      (*pcRam_?)(pOVar8,&uStack_6);
      pMVar10 = (this->fields)._.shield;
      if (pMVar10 != (MVRuntimeDataVariableClampedFloat *)0x0) {
        currentHealth =
             (float)(*(pMVar10->klass->vtable).get_Value.methodPtr)
                              (pMVar10,(pMVar10->klass->vtable).get_Value.method);
        MVAvatar::MVAvatar_TrySpawningHealParticles
                  ((MVAvatar *)this,(float)uStack_6 * _UNK_?,currentHealth,
                   (MethodInfo *)0x0);
        pAVar1 = (this->fields)._.avatar;
        if ((pAVar1 != (Avatar *)0x0) &&
           (pAVar2 = (pAVar1->fields).avatarUIHandler, pAVar2 != (AvatarUIHandler *)0x0)) {
          bVar3 = (TypeInfo__AvatarUIHandlerRemote->_1).naturalAligment;
          if (((pAVar2->klass->_1).naturalAligment < bVar3) ||
             ((pAVar2->klass->_1).typeHierarchy[(ulonglong)bVar3 - 1] !=
              (Il2CppClass *)TypeInfo__AvatarUIHandlerRemote)) {
            FUN_?(pAVar2);
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pSVar5 = pAVar2[1].fields.ownerActorName;
          if ((pSVar5 != (String *)0x0) && (shield != (Object *)0x0)) {
            if ((shield->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40))
            {
              FUN_?(shield,lRam_?);
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pSVar5[1].fields._stringLength = *(int32_t *)&shield[1].klass;
            *(undefined4 *)&pSVar5[2].klass = 0;
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* MVAvatarRemote(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVAvatarRemote::MVAvatarRemote__ctor
               (MVAvatarRemote *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DynamicCullingHandler);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (DynamicCullingHandler *)FUN_?(TypeInfo__DynamicCullingHandler);
  bVar2 = iRam_? != 0;
  (pDVar1->fields).cullingRadius = 3.5;
  (this->fields).cullingHandler = pDVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).cullingHandler >> 0xc);
    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pcVar7 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
    uVar8 = func_?(&UNK_?);
    FUN_?(uVar8,0);
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pcRam_? = pcVar7;
  fVar9 = (float)(*pcRam_?)();
  bVar2 = cRam_? == '\0';
  (this->fields).prevHitTime = fVar9 - TypeRef__System__Activator__T._0_4_;
  if (bVar2) {
    FUN_?(&TypeInfo__PrefabPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar10 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar10 != (PrefabPool *)0x0) {
    MVAvatar::MVAvatar__ctor
              ((MVAvatar *)this,data,(pPVar10->fields).mvRemoteAvatarPrefab,worldObjects,
               (MethodInfo *)0x0);
    MVWorldObjectClient::MVWorldObjectClient_SetNetworkObject
              ((MVWorldObjectClient *)this,0,(MethodInfo *)0x0);
    pMVar11 = (this->fields)._.Animation;
    (this->fields)._IsInVehicle_k__BackingField = 0;
    if (pMVar11 != (MVRuntimeDataVariable *)0x0) {
      pMVar12 = (pMVar11->fields).OnChange;
      this_00 = (UnityAction_1_System_Object_ *)
                FUN_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
      UnityAction_1_System_Object___ctor
                (this_00,(Object *)this,(this->klass->vtable).OnAnimationChange.method,
                 (MethodInfo *)0x0);
      pMVar12 = (MVRuntimeDataVariable_OnChangeDelegate *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pMVar12,(Delegate *)this_00,(MethodInfo *)0x0);
      if (pMVar12 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
        (pMVar11->fields).OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
      }
      else {
        pMVar13 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
        if (pMVar12->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
          pMVar13 = pMVar12;
        }
        if (pMVar13 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
          FUN_?(pMVar12);
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        (pMVar11->fields).OnChange = pMVar13;
        pMVar13 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
        if (pMVar12->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
          pMVar13 = pMVar12;
        }
        if (pMVar13 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
          FUN_?(pMVar12);
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar3 = (uint)((ulonglong)&(pMVar11->fields).OnChange >> 0xc);
        uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
        do {
          uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
          puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
          LOCK();
          bVar2 = uVar5 == *puVar6;
          if (bVar2) {
            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar2);
      }
      return;
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Boolean get_IsInVehicle() */

bool Assembly-CSharp.dll::MVAvatarRemote::MVAvatarRemote_get_IsInVehicle
               (MVAvatarRemote *this,MethodInfo *method)

{
  return (this->fields)._IsInVehicle_k__BackingField;
}


/* Vector3 get_VelocityAbsolute() */

Vector3 * Assembly-CSharp.dll::MVAvatarRemote::MVAvatarRemote_get_VelocityAbsolute
                    (Vector3 *__return_storage_ptr__,MVAvatarRemote *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).avatarRemoteMovementCalculator;
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
  if (pAVar1 != (AvatarRemoteMovementCalculator *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pAVar1->fields)._._._._.m_CachedPtr != (void *)0x0) {
      pAVar1 = (this->fields).avatarRemoteMovementCalculator;
      if (pAVar1 == (AvatarRemoteMovementCalculator *)0x0) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        pVVar3 = (Vector3 *)(*pcVar2)();
        return pVVar3;
      }
      uVar4._0_4_ = (pAVar1->fields).velocityEstimate.x;
      uVar4._4_4_ = (pAVar1->fields).velocityEstimate.y;
      fVar5 = (pAVar1->fields).velocityEstimate.z;
      goto code_?;
    }
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar4._0_4_ = (pVVar6->zeroVector).x;
  uVar4._4_4_ = (pVVar6->zeroVector).y;
  fVar5 = (pVVar6->zeroVector).z;
code_?:
  __return_storage_ptr__->x = (float)(int)uVar4;
  __return_storage_ptr__->y = (float)(int)((ulonglong)uVar4 >> 0x20);
  __return_storage_ptr__->z = fVar5;
  return __return_storage_ptr__;
}


/* Vector3 get_VelocityRelative() */

Vector3 * Assembly-CSharp.dll::MVAvatarRemote::MVAvatarRemote_get_VelocityRelative
                    (Vector3 *__return_storage_ptr__,MVAvatarRemote *this,MethodInfo *method)

{
  if ((this->fields)._IsInVehicle_k__BackingField != 0) {
    __return_storage_ptr__->x = 0.0;
    __return_storage_ptr__->y = 0.0;
    __return_storage_ptr__->z = 0.0;
    return __return_storage_ptr__;
  }
  pAVar1 = (this->fields).avatarRemoteMovementCalculator;
  if (pAVar1 != (AvatarRemoteMovementCalculator *)0x0) {
    fVar2 = (pAVar1->fields).velocityEstimate.y;
    fVar3 = (pAVar1->fields).velocityEstimate.z;
    __return_storage_ptr__->x = (pAVar1->fields).velocityEstimate.x;
    __return_storage_ptr__->y = fVar2;
    __return_storage_ptr__->z = fVar3;
    return __return_storage_ptr__;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  pVVar5 = (Vector3 *)(*pcVar4)();
  return pVVar5;
}


/* Void triggerBoxEvents_TriggerEnter(Object, TriggerEventArgs) */

void Assembly-CSharp.dll::MVAvatarRemote::MVAvatarRemote_triggerBoxEvents_TriggerEnter
               (MVAvatarRemote *this,Object *sender,TriggerEventArgs *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  InteractionDataHandlerBase_MethodInfo__UnityEngine__GameObject__GetComponent<InteractionDataHandlerBase>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MVRigidBody_MethodInfo__UnityEngine__GameObject__GetComponent<MVRigidBody>__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVVehicleBase);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  VStack_1.x = 0.0;
  VStack_1.y = 0.0;
  VStack_1.z = 0.0;
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  fVar4 = (float)(*pcRam_?)();
  if (TypeRef__System__Activator__T._0_4_ <= fVar4 - (this->fields).prevHitTime) {
    this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if ((e == (TriggerEventArgs *)0x0) || (this_00 == (MVWorldObjectClientManager *)0x0))
    goto DAT_?;
    this_01 = (MVVehicleBase *)
              MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                        (this_00,(e->fields).instigatorWOID,(MethodInfo *)0x0);
    if (this_01 != (MVVehicleBase *)0x0) {
      method_00 = this_01->klass;
      bVar5 = (TypeInfo__MVVehicleBase->_1).naturalAligment;
      if ((bVar5 <= (method_00->_1).naturalAligment) &&
         ((MVVehicleBase__Class *)(method_00->_1).typeHierarchy[(ulonglong)bVar5 - 1] ==
          TypeInfo__MVVehicleBase)) {
        bVar5 = (TypeInfo__MVVehicleBase->_1).naturalAligment;
        if (((method_00->_1).naturalAligment < bVar5) ||
           ((MVVehicleBase__Class *)(method_00->_1).typeHierarchy[(ulonglong)bVar5 - 1] !=
            TypeInfo__MVVehicleBase)) {
          FUN_?(this_01);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        MVTriggerBox::MVTriggerBox_OnExit
                  ((MVTriggerBox *)0x0,(MVPlayer *)TypeInfo__MVVehicleBase,(MethodInfo *)method_00);
        if (this_02 == (MVLocalPlayer *)0x0) {
DAT_?:
          FUN_?();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pMVar6 = MVLocalPlayer::MVLocalPlayer_get_AvatarLocal(this_02,(MethodInfo *)0x0);
        if ((pMVar6 != (MVAvatarLocal *)0x0) &&
           (bVar7 = MVVehicleBase::MVVehicleBase_IsPlayerInVehicle
                              (this_01,(pMVar6->fields)._._._._.id,1,(MethodInfo *)0x0), bVar7 != 0)
           ) {
          pGVar8 = (this_01->fields)._._._.gameObject;
          if (pGVar8 == (GameObject *)0x0) goto DAT_?;
          pMVar9 = (MethodInfo *)
                   UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                             (pGVar8,
                              MVRigidBody_MethodInfo__UnityEngine__GameObject__GetComponent<MVRigidBody>__
                             );
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
          if (pMVar9 != (MethodInfo *)0x0) {
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            if (pMVar9->invoker_method != (InvokerMethod)0x0) {
              pOVar10 = (Object__Class *)pMVar9->methodPointer;
              uVar3._0_2_ = pOVar10[1]._0.byval_arg.attrs;
              uVar3._2_1_ = pOVar10[1]._0.byval_arg.type;
              uVar3._3_5_ = *(undefined5 *)&pOVar10[1]._0.byval_arg.field_0xb;
              puVar11 = (undefined8 *)
                       (*(code *)pOVar10[1]._0.byval_arg.data)(&fStack_12,pMVar9,uVar3);
              aIStack_13[0]._0_8_ = *puVar11;
              fVar14 = (float)aIStack_13[0]._0_8_;
              fVar15 = SUB84(aIStack_13[0]._0_8_,4);
              fVar4 = *(float *)(puVar11 + 1);
              fVar16 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                                 ((MethodInfo *)0x0);
              VStack_1.z = fVar4 / fVar16;
              VStack_1.y = fVar15 / fVar16;
              VStack_1.x = fVar14 / fVar16;
              fVar4 = (float)FUN_?(&VStack_1);
              if (_UNK_? <= fVar4) {
                fVar16 = (float)FUN_?(&VStack_1);
                fVar4 = _UNK_?;
                if ((fVar16 < _UNK_?) || (fVar4 = _UNK_?, _UNK_? < fVar16))
                {
                  fVar16 = fVar4;
                }
                VStack_1._0_8_ = VStack_1._0_8_ & 0xffffffff;
                UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
                          (&VStack_1,pMVar9);
                VStack_1.y = 1.0;
                UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
                          (&VStack_1,pMVar9);
                fVar16 = fVar16 * _UNK_?;
                pGVar8 = (this->fields)._._._.gameObject;
                fVar14 = fVar16 * VStack_1.y;
                fVar4 = VStack_1.x * fVar16;
                fVar16 = VStack_1.z * fVar16;
                if (pGVar8 == (GameObject *)0x0) goto DAT_?;
                pMVar9 = 
                InteractionDataHandlerBase_MethodInfo__UnityEngine__GameObject__GetComponent<InteractionDataHandlerBase>__
                ;
                pOVar17 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_GetComponent_1
                                    (pGVar8,
                                     InteractionDataHandlerBase_MethodInfo__UnityEngine__GameObject__GetComponent<InteractionDataHandlerBase>__
                                    );
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
                if (pOVar17 != (Object *)0x0) {
                  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  if (pOVar17[1].klass != (Object__Class *)0x0) {
                    aIStack_13[0].interactionType = 0;
                    aIStack_13[0].playerKilledByType = 0;
                    aIStack_13[0]._18_2_ = 0;
                    VStack_1.y = fVar14;
                    VStack_1.x = fVar4;
                    aIStack_13[0].damage = 0.0;
                    aIStack_13[0].impulse.x = 0.0;
                    aIStack_13[0].impulse.y = 0.0;
                    aIStack_13[0].impulse.z = 0.0;
                    VStack_1.z = fVar16;
                    MVWorldObject.dll::MV::WorldObject::InteractionData::InteractionData__ctor_5
                              (aIStack_13,
                               (InteractionPackageType__Enum)
                               CONCAT71((int7)((ulonglong)pMVar9 >> 8),0x1c),0.0,&VStack_1,
                               in_stack_18 & 0xffffff00,(MethodInfo *)0x0);
                    pOVar10 = pOVar17->klass;
                    uStack_19 = aIStack_13[0].interactionType;
                    uStack_20 = aIStack_13[0].playerKilledByType;
                    uStack_21 = aIStack_13[0]._18_2_;
                    uVar22._0_2_ = pOVar10[1]._0.this_arg.attrs;
                    uVar22._2_1_ = pOVar10[1]._0.this_arg.type;
                    uVar22._3_5_ = *(undefined5 *)&pOVar10[1]._0.this_arg.field_0xb;
                    fStack_12 = aIStack_13[0].damage;
                    fStack_23 = aIStack_13[0].impulse.x;
                    fStack_24 = aIStack_13[0].impulse.y;
                    fStack_25 = aIStack_13[0].impulse.z;
                    (*(code *)pOVar10[1]._0.this_arg.data)(pOVar17,0,&fStack_12,0,uVar22);
                    fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                                       ((MethodInfo *)0x0);
                    (this->fields).prevHitTime = fVar4;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}

