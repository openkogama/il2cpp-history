
/* Void Initialize() */

void Assembly-CSharp.dll::LevelProgressAccessoryShop::LevelProgressAccessoryShop_Initialize
               (LevelProgressAccessoryShop *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BadgeManager);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__LevelProgressAccessoryShop__Initialize__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__LevelProgressAccessoryShop__OnLevelingBadgeLoaded_UnityEngine__Networking__UnityWebRequest_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__LevelProgressAccessoryShop__OnXPUpdate_XPProgressData_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__LevelingManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__XPProgress__OnXPProgressDataDelegate);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__LevelingManager->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__LevelingManager);
  }
  source = TypeInfo__LevelingManager->static_fields->OnLevelingInitialized;
  this_03 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_03,(Object *)this,MethodInfo__LevelProgressAccessoryShop__Initialize__,
             (MethodInfo *)0x0);
  pXVar1 = (XPProgress_OnXPProgressDataDelegate *)
            mscorlib.dll::System::Delegate::Delegate_Remove
                      ((Delegate *)source,(Delegate *)this_03,(MethodInfo *)0x0);
  pXVar2 = (XPProgress_OnXPProgressDataDelegate *)0x0;
  if (pXVar1 == (XPProgress_OnXPProgressDataDelegate *)0x0) {
    TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = (UnityAction *)0x0;
  }
  else {
    pXVar3 = pXVar2;
    if (pXVar1->klass ==
        (XPProgress_OnXPProgressDataDelegate__Class *)TypeInfo__UnityEngine__Events__UnityAction) {
      pXVar3 = pXVar1;
    }
    if (pXVar3 == (XPProgress_OnXPProgressDataDelegate *)0x0) {
      FUN_?(pXVar1,TypeInfo__UnityEngine__Events__UnityAction);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = (UnityAction *)pXVar3;
    pXVar3 = pXVar2;
    if (pXVar1->klass ==
        (XPProgress_OnXPProgressDataDelegate__Class *)TypeInfo__UnityEngine__Events__UnityAction) {
      pXVar3 = pXVar1;
    }
    if (pXVar3 == (XPProgress_OnXPProgressDataDelegate *)0x0) {
      FUN_?(pXVar1);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar5 = (uint)((ulonglong)TypeInfo__LevelingManager->static_fields >> 0xc);
    lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
    do {
      uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
      puVar8 = (ulonglong *)(lVar6 + 0xADDR);
      LOCK();
      bVar9 = uVar7 == *puVar8;
      if (bVar9) {
        *puVar8 = uVar7 | 1L << (ulonglong)(uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar9);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar10 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar10 != (MVGameControllerBase *)0x0) &&
       (pMVar11 = (pMVar10->fields).game, pMVar11 != (MVNetworkGame *)0x0)) &&
      (pMVar12 = (pMVar11->fields).playerContainer, pMVar12 != (MVPlayerContainer *)0x0)) &&
     (pMVar13 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar12,(MethodInfo *)0x0),
     pMVar13 != (MVLocalPlayer *)0x0)) {
    bVar9 = cRam_? == '\0';
    (this->fields).badgeLevel = (pMVar13->fields)._.level;
    if (bVar9) {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar10 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar10 != (MVGameControllerBase *)0x0) &&
        (pMVar11 = (pMVar10->fields).game, pMVar11 != (MVNetworkGame *)0x0)) &&
       ((pMVar12 = (pMVar11->fields).playerContainer, pMVar12 != (MVPlayerContainer *)0x0 &&
        ((pMVar13 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar12,(MethodInfo *)0x0),
         pMVar13 != (MVLocalPlayer *)0x0 &&
         (pXVar14 = (pMVar13->fields).xpProgress, pXVar14 != (XPProgress *)0x0)))))) {
      LevelProgressAccessoryShop_OnXPUpdate(this,(pXVar14->fields).xpProgressData,(MethodInfo *)0x0)
      ;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar10 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if ((((pMVar10 != (MVGameControllerBase *)0x0) &&
           (pMVar11 = (pMVar10->fields).game, pMVar11 != (MVNetworkGame *)0x0)) &&
          (pMVar12 = (pMVar11->fields).playerContainer, pMVar12 != (MVPlayerContainer *)0x0)) &&
         (pMVar13 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar12,(MethodInfo *)0x0),
         pMVar13 != (MVLocalPlayer *)0x0)) {
        pXVar1 = (pMVar13->fields).OnXPProgressData;
        pUVar15 = (UnityAction_1_System_Object_ *)
                  FUN_?(TypeInfo__XPProgress__OnXPProgressDataDelegate);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
        UnityAction_1_System_Object___ctor
                  (pUVar15,(Object *)this,
                   MethodInfo__LevelProgressAccessoryShop__OnXPUpdate_XPProgressData_,
                   (MethodInfo *)0x0);
        pXVar1 = (XPProgress_OnXPProgressDataDelegate *)
                  mscorlib.dll::System::Delegate::Delegate_Combine
                            ((Delegate *)pXVar1,(Delegate *)pUVar15,(MethodInfo *)0x0);
        if (pXVar1 == (XPProgress_OnXPProgressDataDelegate *)0x0) {
          (pMVar13->fields).OnXPProgressData = (XPProgress_OnXPProgressDataDelegate *)0x0;
        }
        else {
          pXVar3 = pXVar2;
          if (pXVar1->klass == TypeInfo__XPProgress__OnXPProgressDataDelegate) {
            pXVar3 = pXVar1;
          }
          if (pXVar3 == (XPProgress_OnXPProgressDataDelegate *)0x0) {
            FUN_?(pXVar1);
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          (pMVar13->fields).OnXPProgressData = pXVar3;
          if (pXVar1->klass == TypeInfo__XPProgress__OnXPProgressDataDelegate) {
            pXVar2 = pXVar1;
          }
          if (pXVar2 == (XPProgress_OnXPProgressDataDelegate *)0x0) {
            FUN_?(pXVar1);
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        if (iRam_? != 0) {
          uVar5 = (uint)((ulonglong)&(pMVar13->fields).OnXPProgressData >> 0xc);
          lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
          do {
            uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
            puVar8 = (ulonglong *)(lVar6 + 0xADDR);
            LOCK();
            bVar9 = uVar7 == *puVar8;
            if (bVar9) {
              *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
            }
            UNLOCK();
          } while (!bVar9);
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar10 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if (((pMVar10 != (MVGameControllerBase *)0x0) &&
            (pMVar11 = (pMVar10->fields).game, pMVar11 != (MVNetworkGame *)0x0)) &&
           ((pMVar12 = (pMVar11->fields).playerContainer, pMVar12 != (MVPlayerContainer *)0x0 &&
            (pMVar13 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                 (pMVar12,(MethodInfo *)0x0), pMVar13 != (MVLocalPlayer *)0x0)))) {
          key = (pMVar13->fields)._.level;
          pUVar15 = (UnityAction_1_System_Object_ *)
                    FUN_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>
                                 );
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
          UnityAction_1_System_Object___ctor
                    (pUVar15,(Object *)this,
                     MethodInfo__LevelProgressAccessoryShop__OnLevelingBadgeLoaded_UnityEngine__Networking__UnityWebRequest_
                     ,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__BadgeManager->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__AsyncWWWManager,pUVar15,0);
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__BadgeManager);
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__CachedTextureRequest);
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__UnityEngine__Debug);
            LOCK();
            UNLOCK();
            FUN_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<int,_BadgeUrlData>__ContainsKey_int_
                         );
            LOCK();
            UNLOCK();
            FUN_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<int,_BadgeUrlData>__get_Item_int_
                         );
            LOCK();
            UNLOCK();
            FUN_?(&StringLiteral_Level_exceeds_defined_badges__Us);
            LOCK();
            UNLOCK();
            FUN_?(&StringLiteral_No_badges_was_loaded);
            LOCK();
            UNLOCK();
            FUN_?(&StringLiteral__Unity_2);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__BadgeManager->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (TypeInfo__BadgeManager->static_fields->maxLevelBadge == 0) {
            if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
              FUN_?();
            }
            pSVar16 = StringLiteral_No_badges_was_loaded;
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
            pIVar17 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
            if (pIVar17 != (ILogger_1 *)0x0) {
              FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar17,0,pSVar16);
              return;
            }
            FUN_?();
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (*(int *)&(TypeInfo__BadgeManager->_1).field_0x1c == 0) {
            FUN_?();
          }
          this_01 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)
                    TypeInfo__BadgeManager->static_fields->badgeUrls;
          if (this_01 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
            iVar18 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     Int32,UnityEngine::Vector3]::
                     Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                               (this_01,key,
                                MethodInfo__System__Collections__Generic__Dictionary<int,_BadgeUrlData>__ContainsKey_int_
                                ->klass->rgctx_data[0x21].method);
            if (iVar18 < 0) {
              if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                FUN_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                        ((Object *)StringLiteral_Level_exceeds_defined_badges__Us,(MethodInfo *)0x0)
              ;
              if (*(int *)&(TypeInfo__BadgeManager->_1).field_0x1c == 0) {
                FUN_?();
              }
              key = TypeInfo__BadgeManager->static_fields->maxLevelBadge;
            }
            if (*(int *)&(TypeInfo__BadgeManager->_1).field_0x1c == 0) {
              FUN_?();
            }
            this_02 = TypeInfo__BadgeManager->static_fields->badgeUrls;
            if ((this_02 != (Dictionary_2_System_Int32_BadgeUrlData_ *)0x0) &&
               (pOVar19 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                    ((Dictionary_2_System_Int32_System_Object_ *)this_02,key,
                                     MethodInfo__System__Collections__Generic__Dictionary<int,_BadgeUrlData>__get_Item_int_
                                    ), pOVar19 != (Object *)0x0)) {
              pSVar16 = mscorlib.dll::System::String::String_Concat_4
                                  ((String *)pOVar19[1].monitor,StringLiteral__Unity_2,
                                   (MethodInfo *)0x0);
              this_04 = (AsyncWebRequest *)FUN_?(TypeInfo__CachedTextureRequest);
              AsyncWebRequest::AsyncWebRequest__ctor
                        (this_04,pSVar16,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)pUVar15
                         ,WWWRequestPriority__Enum_WaitUntilSyncronizingIsDone,(MethodInfo *)0x0);
              *(undefined1 *)&this_04[1].klass = 0;
              if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
                FUN_?();
              }
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__AsyncWWWManager,0);
                LOCK();
                UNLOCK();
                FUN_?(&TypeInfo__CachedGetRequest);
                LOCK();
                UNLOCK();
                FUN_?(&
                              MethodInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__get_Item_WWWRequestPriority_
                             );
                LOCK();
                UNLOCK();
                FUN_?(&
                              MethodInfo__System__Collections__Generic__Queue<AsyncWebRequest>__Enqueue_AsyncWebRequest_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
                FUN_?(TypeInfo__AsyncWWWManager);
              }
              if (TypeInfo__AsyncWWWManager->static_fields->isQuiting != 0) {
                return;
              }
              if (this_04 != (AsyncWebRequest *)0x0) {
                bVar20 = (TypeInfo__CachedGetRequest->_1).naturalAligment;
                if ((bVar20 <= (this_04->klass->_1).naturalAligment) &&
                   ((this_04->klass->_1).typeHierarchy[(ulonglong)bVar20 - 1] ==
                    (Il2CppClass *)TypeInfo__CachedGetRequest)) {
                  if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
                    FUN_?(TypeInfo__AsyncWWWManager);
                  }
                  pAVar21 = this_04->klass;
                  bVar20 = (TypeInfo__CachedGetRequest->_1).naturalAligment;
                  if (((pAVar21->_1).naturalAligment < bVar20) ||
                     ((pAVar21->_1).typeHierarchy[(ulonglong)bVar20 - 1] !=
                      (Il2CppClass *)TypeInfo__CachedGetRequest)) {
                    FUN_?(this_04,TypeInfo__CachedGetRequest,TypeInfo__CachedGetRequest,
                                  pAVar21,unaff_RBX);
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  cVar22 = (*(code *)pAVar21[1]._0.image)
                                     (this_04,TypeInfo__AsyncWWWManager->static_fields->cache,
                                      pAVar21[1]._0.gc_desc);
                  if (cVar22 != '\0') {
                    return;
                  }
                }
              }
              if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
                FUN_?(TypeInfo__AsyncWWWManager);
              }
              this_00 = TypeInfo__AsyncWWWManager->static_fields->requests;
              if (((this_04 != (AsyncWebRequest *)0x0) &&
                  (this_00 != (Dictionary_2_WWWRequestPriority_Queue_1_AsyncWebRequest_ *)0x0)) &&
                 (pOVar19 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Int32Enum,System::Object]::
                            Dictionary_2_System_Int32Enum_System_Object__get_Item
                                      ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,
                                       (this_04->fields).requestPriority,
                                       MethodInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__get_Item_WWWRequestPriority_
                                      ), pOVar19 != (Object *)0x0)) {
                if (pOVar19[1].klass != (Object__Class *)0x0) {
                  if (*(int *)&pOVar19[2].klass == *(int *)&((pOVar19[1].klass)->_0).namespaze) {
                    pOVar23 = pOVar19[1].klass;
                    iVar24 = *(int *)&(pOVar23->_0).namespaze * 2;
                    if (iVar24 < *(int *)&(pOVar23->_0).namespaze + 4) {
                      iVar24 = *(int *)&(pOVar23->_0).namespaze + 4;
                    }
                    FUN_?(pOVar19,iVar24,
                                  MethodInfo__System__Collections__Generic__Queue<AsyncWebRequest>__Enqueue_AsyncWebRequest_
                                  ->klass->rgctx_data[5].rgctxDataDummy);
                  }
                  if (pOVar19[1].klass != (Object__Class *)0x0) {
                    FUN_?(pOVar19[1].klass,
                                  (longlong)*(int *)((longlong)&pOVar19[1].monitor + 4),this_04);
                    if (pOVar19[1].klass != (Object__Class *)0x0) {
                      iVar25 = *(int *)((longlong)&pOVar19[1].monitor + 4) + 1;
                      iVar24 = 0;
                      if (iVar25 != *(int *)&((pOVar19[1].klass)->_0).namespaze) {
                        iVar24 = iVar25;
                      }
                      *(int *)((longlong)&pOVar19[1].monitor + 4) = iVar24;
                      *(int *)&pOVar19[2].klass = *(int *)&pOVar19[2].klass + 1;
                      piVar26 = (int *)((longlong)&pOVar19[2].klass + 4);
                      *piVar26 = *piVar26 + 1;
                      return;
                    }
                  }
                }
                FUN_?();
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              FUN_?();
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          FUN_?();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
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


/* Void OnDestroy() */

void Assembly-CSharp.dll::LevelProgressAccessoryShop::LevelProgressAccessoryShop_OnDestroy
               (LevelProgressAccessoryShop *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BadgeManager);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__LevelProgressAccessoryShop__Initialize__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__LevelProgressAccessoryShop__OnLevelingBadgeLoaded_UnityEngine__Networking__UnityWebRequest_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__LevelProgressAccessoryShop__OnXPUpdate_XPProgressData_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__LevelingManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__XPProgress__OnXPProgressDataDelegate);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__LevelingManager->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__LevelingManager);
  }
  pUVar1 = TypeInfo__LevelingManager->static_fields->OnLevelingInitialized;
  this_01 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_01,(Object *)this,MethodInfo__LevelProgressAccessoryShop__Initialize__,
             (MethodInfo *)0x0);
  pUVar1 = (UnityAction *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pUVar1,(Delegate *)this_01,(MethodInfo *)0x0);
  if (pUVar1 == (UnityAction *)0x0) {
    TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = (UnityAction *)0x0;
  }
  else {
    pUVar2 = (UnityAction *)0x0;
    if (pUVar1->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar2 = pUVar1;
    }
    if (pUVar2 == (UnityAction *)0x0) {
      FUN_?(pUVar1,TypeInfo__UnityEngine__Events__UnityAction);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = pUVar2;
    pUVar2 = (UnityAction *)0x0;
    if (pUVar1->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar2 = pUVar1;
    }
    if (pUVar2 == (UnityAction *)0x0) {
      FUN_?(pUVar1);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)TypeInfo__LevelingManager->static_fields >> 0xc);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (ulonglong)(uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar9 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar9 != (MVGameControllerBase *)0x0) &&
       (pMVar10 = (pMVar9->fields).game, pMVar10 != (MVNetworkGame *)0x0)) &&
      (this_00 = (pMVar10->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) &&
     (pMVar11 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0),
     pMVar11 != (MVLocalPlayer *)0x0)) {
    pXVar12 = (pMVar11->fields).OnXPProgressData;
    pUVar13 = (UnityAction_1_System_Object_ *)
              FUN_?(TypeInfo__XPProgress__OnXPProgressDataDelegate);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
    UnityAction_1_System_Object___ctor
              (pUVar13,(Object *)this,
               MethodInfo__LevelProgressAccessoryShop__OnXPUpdate_XPProgressData_,(MethodInfo *)0x0)
    ;
    pXVar12 = (XPProgress_OnXPProgressDataDelegate *)
              mscorlib.dll::System::Delegate::Delegate_Remove
                        ((Delegate *)pXVar12,(Delegate *)pUVar13,(MethodInfo *)0x0);
    if (pXVar12 == (XPProgress_OnXPProgressDataDelegate *)0x0) {
      (pMVar11->fields).OnXPProgressData = (XPProgress_OnXPProgressDataDelegate *)0x0;
    }
    else {
      pXVar14 = (XPProgress_OnXPProgressDataDelegate *)0x0;
      if (pXVar12->klass == TypeInfo__XPProgress__OnXPProgressDataDelegate) {
        pXVar14 = pXVar12;
      }
      if (pXVar14 == (XPProgress_OnXPProgressDataDelegate *)0x0) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (pMVar11->fields).OnXPProgressData = pXVar14;
      pXVar14 = (XPProgress_OnXPProgressDataDelegate *)0x0;
      if (pXVar12->klass == TypeInfo__XPProgress__OnXPProgressDataDelegate) {
        pXVar14 = pXVar12;
      }
      if (pXVar14 == (XPProgress_OnXPProgressDataDelegate *)0x0) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar4 = (uint)((ulonglong)&(pMVar11->fields).OnXPProgressData >> 0xc);
      lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
      do {
        uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
        puVar7 = (ulonglong *)(lVar5 + 0xADDR);
        LOCK();
        bVar8 = uVar6 == *puVar7;
        if (bVar8) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar8);
    }
    pUVar13 = (UnityAction_1_System_Object_ *)
              FUN_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
    UnityAction_1_System_Object___ctor
              (pUVar13,(Object *)this,
               MethodInfo__LevelProgressAccessoryShop__OnLevelingBadgeLoaded_UnityEngine__Networking__UnityWebRequest_
               ,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__BadgeManager->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__AsyncWWWManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
      FUN_?();
    }
    AsyncWWWManager::AsyncWWWManager_UnsubscribeWWWRequest
              ((Action_1_UnityEngine_Networking_UnityWebRequest_ *)pUVar13,(MethodInfo *)0x0);
    bVar8 = iRam_? != 0;
    (this->fields).badgeTextureAsset = (Texture2D *)0x0;
    if (bVar8) {
      uVar4 = (uint)((ulonglong)&(this->fields).badgeTextureAsset >> 0xc);
      lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
      do {
        uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
        puVar7 = (ulonglong *)(lVar5 + 0xADDR);
        LOCK();
        bVar8 = uVar6 == *puVar7;
        if (bVar8) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar8);
    }
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnLevelingBadgeLoaded(UnityWebRequest) */

void Assembly-CSharp.dll::LevelProgressAccessoryShop::
     LevelProgressAccessoryShop_OnLevelingBadgeLoaded
               (LevelProgressAccessoryShop *this,UnityWebRequest *www,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Texture_not_loaded__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (www != (UnityWebRequest *)0x0) {
    pSVar1 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
             UnityWebRequest_get_error(www,(MethodInfo *)0x0);
    if ((pSVar1 == (String *)0x0) || ((pSVar1->fields)._stringLength == 0)) {
      pTVar2 = UnityEngine.UnityWebRequestTextureModule.dll::UnityEngine::Networking::
               DownloadHandlerTexture::DownloadHandlerTexture_GetContent(www,(MethodInfo *)0x0);
      bVar3 = iRam_? != 0;
      (this->fields).badgeTextureAsset = pTVar2;
      if (bVar3) {
        uVar4 = (uint)((ulonglong)&(this->fields).badgeTextureAsset >> 0xc);
        puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar6 = *puVar5;
          LOCK();
          uVar7 = *puVar5;
          if (uVar6 == uVar7) {
            *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
        } while (uVar6 != uVar7);
      }
      pRVar8 = (this->fields).badgeTexture;
      if (pRVar8 == (RawImage *)0x0) {
        FUN_?();
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pTVar2 = (this->fields).badgeTextureAsset;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object,pTVar2,0,in_R9,unaff_RDI);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pTVar10 = (Texture2D *)(pRVar8->fields).m_Texture;
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
      if (pTVar2 != (Texture2D *)0x0 || pTVar10 != (Texture2D *)0x0) {
        if (pTVar2 == (Texture2D *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (pTVar10 == (Texture2D *)0x0) {
            FUN_?();
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          bVar3 = (pTVar10->fields)._._.m_CachedPtr == (void *)0x0;
        }
        else if (pTVar10 == (Texture2D *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          bVar3 = (pTVar2->fields)._._.m_CachedPtr == (void *)0x0;
        }
        else {
          bVar3 = pTVar10 == pTVar2;
        }
        if (!bVar3) {
          bVar3 = iRam_? != 0;
          (pRVar8->fields).m_Texture = (Texture *)pTVar2;
          if (bVar3) {
            uVar4 = (uint)((ulonglong)&(pRVar8->fields).m_Texture >> 0xc);
            puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
            do {
              uVar6 = *puVar5;
              LOCK();
              uVar7 = *puVar5;
              if (uVar6 == uVar7) {
                *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
              }
              UNLOCK();
            } while (uVar6 != uVar7);
          }
          (*(pRVar8->klass->vtable).SetVerticesDirty.methodPtr)
                    (pRVar8,(pRVar8->klass->vtable).SetVerticesDirty.method);
          (*(pRVar8->klass->vtable).SetMaterialDirty.methodPtr)
                    (pRVar8,(pRVar8->klass->vtable).SetMaterialDirty.method);
        }
      }
      return;
    }
    pSVar1 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
             UnityWebRequest_get_error(www,(MethodInfo *)0x0);
    pSVar1 = mscorlib.dll::System::String::String_Concat_4
                       (StringLiteral_Texture_not_loaded__,pSVar1,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
              ((Object *)pSVar1,(MethodInfo *)0x0);
  }
  return;
}


/* Void OnXPUpdate(XPProgressData) */

void Assembly-CSharp.dll::LevelProgressAccessoryShop::LevelProgressAccessoryShop_OnXPUpdate
               (LevelProgressAccessoryShop *this,XPProgressData *xpProgressData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BadgeManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__LevelProgressAccessoryShop__OnLevelingBadgeLoaded_UnityEngine__Networking__UnityWebRequest_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_XP___0_____1_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((xpProgressData != (XPProgressData *)0x0) &&
     (pXVar1 = (xpProgressData->fields).xpLevelLimits, pXVar1 != (XPLevelLimits *)0x0)) {
    iVar2 = (xpProgressData->fields).playerCurrentXP;
    iVar3 = (pXVar1->fields)._NextXP_k__BackingField;
    iVar4 = (((xpProgressData->fields).xpLevelLimits)->fields)._PrevXP_k__BackingField;
    pTVar5 = (this->fields).progressText;
    aiStackX_10[0] = iVar2 - iVar4;
    arg0 = (Object *)FUN_?(uRam_?,aiStackX_10);
    aiStackX_10[0] = iVar3 - iVar4;
    arg1 = (Object *)FUN_?(uRam_?,aiStackX_10);
    format = StringLiteral_XP___0_____1_;
    PStack_6._arg0 = (Object *)0x0;
    PStack_6._arg1 = (Object *)0x0;
    PStack_6._arg2 = (Object *)0x0;
    PStack_6._args = (Object__Array *)0x0;
    mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1(&PStack_6,arg0,arg1,(MethodInfo *)0x0);
    PStack_7._arg0 = PStack_6._arg0;
    PStack_7._arg1 = PStack_6._arg1;
    PStack_7._arg2 = PStack_6._arg2;
    PStack_7._args = PStack_6._args;
    mscorlib.dll::System::String::String_FormatHelper
              ((IFormatProvider *)0x0,format,&PStack_7,(MethodInfo *)0x0);
    if (pTVar5 != (Text *)0x0) {
      (*(pTVar5->klass->vtable).set_text.methodPtr)(pTVar5);
      pPVar8 = (this->fields).progressBar;
      if (pPVar8 != (ProgressBar *)0x0) {
        value = (float)(iVar2 - iVar4) / (float)(iVar3 - iVar4);
        if (value < 0.0) {
          value = 0.0;
        }
        else if (_UNK_? < value) {
          value = _UNK_?;
        }
        this_00 = (pPVar8->fields).progressBar;
        (pPVar8->fields).progress = value;
        if (this_00 != (Scrollbar *)0x0) {
          UnityEngine.UI.dll::UnityEngine::UI::Scrollbar::Scrollbar_set_size
                    (this_00,value,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar9 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if ((((pMVar9 != (MVGameControllerBase *)0x0) &&
               (pMVar10 = (pMVar9->fields).game, pMVar10 != (MVNetworkGame *)0x0)) &&
              (pMVar11 = (pMVar10->fields).playerContainer, pMVar11 != (MVPlayerContainer *)0x0)) &&
             (pMVar12 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                  (pMVar11,(MethodInfo *)0x0), pMVar12 != (MVLocalPlayer *)0x0)) {
            if ((pMVar12->fields)._.level == (this->fields).badgeLevel) {
              return;
            }
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__MVGameControllerBase);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pMVar9 = TypeInfo__MVGameControllerBase->static_fields->instance;
            if (((pMVar9 != (MVGameControllerBase *)0x0) &&
                (pMVar10 = (pMVar9->fields).game, pMVar10 != (MVNetworkGame *)0x0)) &&
               ((pMVar11 = (pMVar10->fields).playerContainer, pMVar11 != (MVPlayerContainer *)0x0 &&
                (pMVar12 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                     (pMVar11,(MethodInfo *)0x0), pMVar12 != (MVLocalPlayer *)0x0))))
            {
              bVar13 = cRam_? == '\0';
              (this->fields).badgeLevel = (pMVar12->fields)._.level;
              if (bVar13) {
                FUN_?(&TypeInfo__MVGameControllerBase);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pMVar9 = TypeInfo__MVGameControllerBase->static_fields->instance;
              if (((pMVar9 != (MVGameControllerBase *)0x0) &&
                  (pMVar10 = (pMVar9->fields).game, pMVar10 != (MVNetworkGame *)0x0)) &&
                 ((pMVar11 = (pMVar10->fields).playerContainer, pMVar11 != (MVPlayerContainer *)0x0 &&
                  (pMVar12 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                       (pMVar11,(MethodInfo *)0x0), pMVar12 != (MVLocalPlayer *)0x0))
                 )) {
                level = (pMVar12->fields)._.level;
                this_01 = (UnityAction_1_System_Object_ *)
                          FUN_?(
                                       TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>
                                       );
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
                UnityAction_1_System_Object___ctor
                          (this_01,(Object *)this,
                           MethodInfo__LevelProgressAccessoryShop__OnLevelingBadgeLoaded_UnityEngine__Networking__UnityWebRequest_
                           ,(MethodInfo *)0x0);
                if (*(int *)&(TypeInfo__BadgeManager->_1).field_0x1c == 0) {
                  FUN_?();
                }
                BadgeManager::BadgeManager_GetBadgeTexture
                          (level,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_01,
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
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::LevelProgressAccessoryShop::LevelProgressAccessoryShop_Start
               (LevelProgressAccessoryShop *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__LevelProgressAccessoryShop__Initialize__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__LevelingManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__LevelingManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__LevelingManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__LevelingManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (TypeInfo__LevelingManager->static_fields->_IsInitialized_k__BackingField == 0) {
    if (*(int *)&(TypeInfo__LevelingManager->_1).field_0x1c == 0) {
      FUN_?();
    }
    pUVar1 = TypeInfo__LevelingManager->static_fields->OnLevelingInitialized;
    pNVar2 = (NavMesh_OnNavMeshPreUpdate *)
              FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar2,(Object *)this,MethodInfo__LevelProgressAccessoryShop__Initialize__,
               (MethodInfo *)0x0);
    pUVar1 = (UnityAction *)
              mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pUVar1,(Delegate *)pNVar2,(MethodInfo *)0x0);
    if (pUVar1 == (UnityAction *)0x0) {
      TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = (UnityAction *)0x0;
    }
    else {
      pUVar3 = (UnityAction *)0x0;
      if (pUVar1->klass == TypeInfo__UnityEngine__Events__UnityAction) {
        pUVar3 = pUVar1;
      }
      if (pUVar3 == (UnityAction *)0x0) {
        FUN_?(pUVar1,TypeInfo__UnityEngine__Events__UnityAction);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = pUVar3;
      pUVar3 = (UnityAction *)0x0;
      if (pUVar1->klass == TypeInfo__UnityEngine__Events__UnityAction) {
        pUVar3 = pUVar1;
      }
      if (pUVar3 == (UnityAction *)0x0) {
        FUN_?(pUVar1,TypeInfo__UnityEngine__Events__UnityAction);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)TypeInfo__LevelingManager->static_fields >> 0xc);
      puVar6 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar7 = *puVar6;
        LOCK();
        uVar8 = *puVar6;
        if (uVar7 == uVar8) {
          *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (uVar7 != uVar8);
      return;
    }
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BadgeManager);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__LevelProgressAccessoryShop__Initialize__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__LevelProgressAccessoryShop__OnLevelingBadgeLoaded_UnityEngine__Networking__UnityWebRequest_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__LevelProgressAccessoryShop__OnXPUpdate_XPProgressData_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__LevelingManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__XPProgress__OnXPProgressDataDelegate);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__LevelingManager->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__LevelingManager);
  }
  pUVar1 = TypeInfo__LevelingManager->static_fields->OnLevelingInitialized;
  pNVar2 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar2,(Object *)this,MethodInfo__LevelProgressAccessoryShop__Initialize__,
             (MethodInfo *)0x0);
  pXVar9 = (XPProgress_OnXPProgressDataDelegate *)
            mscorlib.dll::System::Delegate::Delegate_Remove
                      ((Delegate *)pUVar1,(Delegate *)pNVar2,(MethodInfo *)0x0);
  pXVar10 = (XPProgress_OnXPProgressDataDelegate *)0x0;
  if (pXVar9 == (XPProgress_OnXPProgressDataDelegate *)0x0) {
    TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = (UnityAction *)0x0;
  }
  else {
    pXVar11 = pXVar10;
    if (pXVar9->klass ==
        (XPProgress_OnXPProgressDataDelegate__Class *)TypeInfo__UnityEngine__Events__UnityAction) {
      pXVar11 = pXVar9;
    }
    if (pXVar11 == (XPProgress_OnXPProgressDataDelegate *)0x0) {
      FUN_?(pXVar9,TypeInfo__UnityEngine__Events__UnityAction);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = (UnityAction *)pXVar11;
    pXVar11 = pXVar10;
    if (pXVar9->klass ==
        (XPProgress_OnXPProgressDataDelegate__Class *)TypeInfo__UnityEngine__Events__UnityAction) {
      pXVar11 = pXVar9;
    }
    if (pXVar11 == (XPProgress_OnXPProgressDataDelegate *)0x0) {
      FUN_?(pXVar9);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar5 = (uint)((ulonglong)TypeInfo__LevelingManager->static_fields >> 0xc);
    lVar12 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
    do {
      uVar8 = *(ulonglong *)(lVar12 + 0xADDR);
      puVar6 = (ulonglong *)(lVar12 + 0xADDR);
      LOCK();
      bVar13 = uVar8 == *puVar6;
      if (bVar13) {
        *puVar6 = uVar8 | 1L << (ulonglong)(uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar13);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar14 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar14 != (MVGameControllerBase *)0x0) &&
       (pMVar15 = (pMVar14->fields).game, pMVar15 != (MVNetworkGame *)0x0)) &&
      (pMVar16 = (pMVar15->fields).playerContainer, pMVar16 != (MVPlayerContainer *)0x0)) &&
     (pMVar17 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar16,(MethodInfo *)0x0),
     pMVar17 != (MVLocalPlayer *)0x0)) {
    bVar13 = cRam_? == '\0';
    (this->fields).badgeLevel = (pMVar17->fields)._.level;
    if (bVar13) {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar14 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar14 != (MVGameControllerBase *)0x0) &&
        (pMVar15 = (pMVar14->fields).game, pMVar15 != (MVNetworkGame *)0x0)) &&
       ((pMVar16 = (pMVar15->fields).playerContainer, pMVar16 != (MVPlayerContainer *)0x0 &&
        ((pMVar17 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar16,(MethodInfo *)0x0),
         pMVar17 != (MVLocalPlayer *)0x0 &&
         (pXVar18 = (pMVar17->fields).xpProgress, pXVar18 != (XPProgress *)0x0)))))) {
      LevelProgressAccessoryShop_OnXPUpdate(this,(pXVar18->fields).xpProgressData,(MethodInfo *)0x0)
      ;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar14 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if ((((pMVar14 != (MVGameControllerBase *)0x0) &&
           (pMVar15 = (pMVar14->fields).game, pMVar15 != (MVNetworkGame *)0x0)) &&
          (pMVar16 = (pMVar15->fields).playerContainer, pMVar16 != (MVPlayerContainer *)0x0)) &&
         (pMVar17 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar16,(MethodInfo *)0x0),
         pMVar17 != (MVLocalPlayer *)0x0)) {
        pXVar9 = (pMVar17->fields).OnXPProgressData;
        pUVar19 = (UnityAction_1_System_Object_ *)
                  FUN_?(TypeInfo__XPProgress__OnXPProgressDataDelegate);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
        UnityAction_1_System_Object___ctor
                  (pUVar19,(Object *)this,
                   MethodInfo__LevelProgressAccessoryShop__OnXPUpdate_XPProgressData_,
                   (MethodInfo *)0x0);
        pXVar9 = (XPProgress_OnXPProgressDataDelegate *)
                  mscorlib.dll::System::Delegate::Delegate_Combine
                            ((Delegate *)pXVar9,(Delegate *)pUVar19,(MethodInfo *)0x0);
        if (pXVar9 == (XPProgress_OnXPProgressDataDelegate *)0x0) {
          (pMVar17->fields).OnXPProgressData = (XPProgress_OnXPProgressDataDelegate *)0x0;
        }
        else {
          pXVar11 = pXVar10;
          if (pXVar9->klass == TypeInfo__XPProgress__OnXPProgressDataDelegate) {
            pXVar11 = pXVar9;
          }
          if (pXVar11 == (XPProgress_OnXPProgressDataDelegate *)0x0) {
            FUN_?(pXVar9);
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          (pMVar17->fields).OnXPProgressData = pXVar11;
          if (pXVar9->klass == TypeInfo__XPProgress__OnXPProgressDataDelegate) {
            pXVar10 = pXVar9;
          }
          if (pXVar10 == (XPProgress_OnXPProgressDataDelegate *)0x0) {
            FUN_?(pXVar9);
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        if (iRam_? != 0) {
          uVar5 = (uint)((ulonglong)&(pMVar17->fields).OnXPProgressData >> 0xc);
          lVar12 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
          do {
            uVar8 = *(ulonglong *)(lVar12 + 0xADDR);
            puVar6 = (ulonglong *)(lVar12 + 0xADDR);
            LOCK();
            bVar13 = uVar8 == *puVar6;
            if (bVar13) {
              *puVar6 = uVar8 | 1L << (uVar5 & 0x3f);
            }
            UNLOCK();
          } while (!bVar13);
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
           ((pMVar16 = (pMVar15->fields).playerContainer, pMVar16 != (MVPlayerContainer *)0x0 &&
            (pMVar17 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                 (pMVar16,(MethodInfo *)0x0), pMVar17 != (MVLocalPlayer *)0x0)))) {
          key = (pMVar17->fields)._.level;
          pUVar19 = (UnityAction_1_System_Object_ *)
                    FUN_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>
                                 );
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
          UnityAction_1_System_Object___ctor
                    (pUVar19,(Object *)this,
                     MethodInfo__LevelProgressAccessoryShop__OnLevelingBadgeLoaded_UnityEngine__Networking__UnityWebRequest_
                     ,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__BadgeManager->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__AsyncWWWManager,pUVar19,0);
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__BadgeManager);
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__CachedTextureRequest);
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__UnityEngine__Debug);
            LOCK();
            UNLOCK();
            FUN_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<int,_BadgeUrlData>__ContainsKey_int_
                         );
            LOCK();
            UNLOCK();
            FUN_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<int,_BadgeUrlData>__get_Item_int_
                         );
            LOCK();
            UNLOCK();
            FUN_?(&StringLiteral_Level_exceeds_defined_badges__Us);
            LOCK();
            UNLOCK();
            FUN_?(&StringLiteral_No_badges_was_loaded);
            LOCK();
            UNLOCK();
            FUN_?(&StringLiteral__Unity_2);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__BadgeManager->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (TypeInfo__BadgeManager->static_fields->maxLevelBadge == 0) {
            if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
              FUN_?();
            }
            pSVar20 = StringLiteral_No_badges_was_loaded;
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
            pIVar21 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
            if (pIVar21 != (ILogger_1 *)0x0) {
              FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar21,0,pSVar20);
              return;
            }
            FUN_?();
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (*(int *)&(TypeInfo__BadgeManager->_1).field_0x1c == 0) {
            FUN_?();
          }
          this_01 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)
                    TypeInfo__BadgeManager->static_fields->badgeUrls;
          if (this_01 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
            iVar22 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     Int32,UnityEngine::Vector3]::
                     Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                               (this_01,key,
                                MethodInfo__System__Collections__Generic__Dictionary<int,_BadgeUrlData>__ContainsKey_int_
                                ->klass->rgctx_data[0x21].method);
            if (iVar22 < 0) {
              if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                FUN_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                        ((Object *)StringLiteral_Level_exceeds_defined_badges__Us,(MethodInfo *)0x0)
              ;
              if (*(int *)&(TypeInfo__BadgeManager->_1).field_0x1c == 0) {
                FUN_?();
              }
              key = TypeInfo__BadgeManager->static_fields->maxLevelBadge;
            }
            if (*(int *)&(TypeInfo__BadgeManager->_1).field_0x1c == 0) {
              FUN_?();
            }
            this_02 = TypeInfo__BadgeManager->static_fields->badgeUrls;
            if ((this_02 != (Dictionary_2_System_Int32_BadgeUrlData_ *)0x0) &&
               (pOVar23 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                    ((Dictionary_2_System_Int32_System_Object_ *)this_02,key,
                                     MethodInfo__System__Collections__Generic__Dictionary<int,_BadgeUrlData>__get_Item_int_
                                    ), pOVar23 != (Object *)0x0)) {
              pSVar20 = mscorlib.dll::System::String::String_Concat_4
                                  ((String *)pOVar23[1].monitor,StringLiteral__Unity_2,
                                   (MethodInfo *)0x0);
              this_03 = (AsyncWebRequest *)FUN_?(TypeInfo__CachedTextureRequest);
              AsyncWebRequest::AsyncWebRequest__ctor
                        (this_03,pSVar20,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)pUVar19
                         ,WWWRequestPriority__Enum_WaitUntilSyncronizingIsDone,(MethodInfo *)0x0);
              *(undefined1 *)&this_03[1].klass = 0;
              if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
                FUN_?();
              }
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__AsyncWWWManager,0);
                LOCK();
                UNLOCK();
                FUN_?(&TypeInfo__CachedGetRequest);
                LOCK();
                UNLOCK();
                FUN_?(&
                              MethodInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__get_Item_WWWRequestPriority_
                             );
                LOCK();
                UNLOCK();
                FUN_?(&
                              MethodInfo__System__Collections__Generic__Queue<AsyncWebRequest>__Enqueue_AsyncWebRequest_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
                FUN_?(TypeInfo__AsyncWWWManager);
              }
              if (TypeInfo__AsyncWWWManager->static_fields->isQuiting != 0) {
                return;
              }
              if (this_03 != (AsyncWebRequest *)0x0) {
                bVar24 = (TypeInfo__CachedGetRequest->_1).naturalAligment;
                if ((bVar24 <= (this_03->klass->_1).naturalAligment) &&
                   ((this_03->klass->_1).typeHierarchy[(ulonglong)bVar24 - 1] ==
                    (Il2CppClass *)TypeInfo__CachedGetRequest)) {
                  if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
                    FUN_?(TypeInfo__AsyncWWWManager);
                  }
                  pAVar25 = this_03->klass;
                  bVar24 = (TypeInfo__CachedGetRequest->_1).naturalAligment;
                  if (((pAVar25->_1).naturalAligment < bVar24) ||
                     ((pAVar25->_1).typeHierarchy[(ulonglong)bVar24 - 1] !=
                      (Il2CppClass *)TypeInfo__CachedGetRequest)) {
                    FUN_?(this_03,TypeInfo__CachedGetRequest,TypeInfo__CachedGetRequest,
                                  pAVar25,unaff_RBX);
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  cVar26 = (*(code *)pAVar25[1]._0.image)
                                     (this_03,TypeInfo__AsyncWWWManager->static_fields->cache,
                                      pAVar25[1]._0.gc_desc);
                  if (cVar26 != '\0') {
                    return;
                  }
                }
              }
              if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
                FUN_?(TypeInfo__AsyncWWWManager);
              }
              this_00 = TypeInfo__AsyncWWWManager->static_fields->requests;
              if (((this_03 != (AsyncWebRequest *)0x0) &&
                  (this_00 != (Dictionary_2_WWWRequestPriority_Queue_1_AsyncWebRequest_ *)0x0)) &&
                 (pOVar23 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Int32Enum,System::Object]::
                            Dictionary_2_System_Int32Enum_System_Object__get_Item
                                      ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,
                                       (this_03->fields).requestPriority,
                                       MethodInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__get_Item_WWWRequestPriority_
                                      ), pOVar23 != (Object *)0x0)) {
                if (pOVar23[1].klass != (Object__Class *)0x0) {
                  if (*(int *)&pOVar23[2].klass == *(int *)&((pOVar23[1].klass)->_0).namespaze) {
                    pOVar27 = pOVar23[1].klass;
                    iVar28 = *(int *)&(pOVar27->_0).namespaze * 2;
                    if (iVar28 < *(int *)&(pOVar27->_0).namespaze + 4) {
                      iVar28 = *(int *)&(pOVar27->_0).namespaze + 4;
                    }
                    FUN_?(pOVar23,iVar28,
                                  MethodInfo__System__Collections__Generic__Queue<AsyncWebRequest>__Enqueue_AsyncWebRequest_
                                  ->klass->rgctx_data[5].rgctxDataDummy);
                  }
                  if (pOVar23[1].klass != (Object__Class *)0x0) {
                    FUN_?(pOVar23[1].klass,
                                  (longlong)*(int *)((longlong)&pOVar23[1].monitor + 4),this_03);
                    if (pOVar23[1].klass != (Object__Class *)0x0) {
                      iVar29 = *(int *)((longlong)&pOVar23[1].monitor + 4) + 1;
                      iVar28 = 0;
                      if (iVar29 != *(int *)&((pOVar23[1].klass)->_0).namespaze) {
                        iVar28 = iVar29;
                      }
                      *(int *)((longlong)&pOVar23[1].monitor + 4) = iVar28;
                      *(int *)&pOVar23[2].klass = *(int *)&pOVar23[2].klass + 1;
                      piVar30 = (int *)((longlong)&pOVar23[2].klass + 4);
                      *piVar30 = *piVar30 + 1;
                      return;
                    }
                  }
                }
                FUN_?();
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              FUN_?();
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          FUN_?();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
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


/* LevelProgressAccessoryShop() */

void Assembly-CSharp.dll::LevelProgressAccessoryShop::LevelProgressAccessoryShop__ctor
               (LevelProgressAccessoryShop *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields).badgeLevel = 1;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar2 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar3 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  lVar4 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
  ppMVar5 = ppMVar3;
  if (lVar4 == lRam_?) {
    iRam_? = iRam_? + 1;
    lVar4 = lRam_?;
  }
  else {
    do {
      uVar6 = (uint)ppMVar5;
      LOCK();
      bVar1 = uVar6 != uRam_?;
      uVar7 = uVar6;
      uVar8 = uVar6 + 1;
      if (bVar1) {
        uVar7 = uRam_?;
        uVar8 = uRam_?;
      }
      uRam_? = uVar8;
      UNLOCK();
    } while ((bVar1) && (ppMVar5 = (MethodInfo **)(ulonglong)uVar7, uVar6 = uVar7, uVar7 != 2)
            );
    while (uVar6 != 0) {
      _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
      uVar6 = uRam_?;
      LOCK();
      uRam_? = 2;
      UNLOCK();
    }
  }
  lRam_? = lVar4;
  puVar9 = &(pOVar2->_1).field_0x1c;
  LOCK();
  bVar1 = *(int *)puVar9 == 1;
  if (bVar1) {
    *(undefined4 *)puVar9 = 1;
  }
  uVar6 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? != 0) {
      iRam_? = iRam_? + -1;
      return;
    }
    lRam_? = 0;
    LOCK();
    uRam_? = 0;
    UNLOCK();
    if (uVar6 != 2) {
      uRam_? = 0;
      lRam_? = 0;
      return;
    }
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
              (0xADDR,1,0);
    return;
  }
  puVar10 = &(pOVar2->_1).cctor_finished_or_no_cctor;
  LOCK();
  bVar1 = *puVar10 == 1;
  if (bVar1) {
    *puVar10 = 1;
  }
  uVar6 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar6 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    uVar6 = GetCurrentThreadId();
    psVar11 = &(pOVar2->_1).cctor_thread;
    LOCK();
    bVar1 = (ulonglong)uVar6 == *psVar11;
    if (bVar1) {
      *psVar11 = (ulonglong)uVar6;
    }
    UNLOCK();
    if (bVar1) {
      return;
    }
    while( true ) {
      puVar9 = &(pOVar2->_1).field_0x1c;
      LOCK();
      bVar1 = *(int *)puVar9 == 1;
      if (bVar1) {
        *(undefined4 *)puVar9 = 1;
      }
      UNLOCK();
      if (bVar1) break;
      LOCK();
      lVar4._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
      lVar4._4_4_ = (pOVar2->_1).cctor_started;
      if (lVar4 == 0) {
        (pOVar2->_1).initializationExceptionGCHandle = 0;
        (pOVar2->_1).cctor_started = 0;
      }
      UNLOCK();
      if (lVar4 != 0) break;
      FUN_?(*puRam_?);
    }
code_?:
    lVar12._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
    lVar12._4_4_ = (pOVar2->_1).cctor_started;
    if (lVar12 == 0) {
      return;
    }
  }
  else {
    uVar6 = GetCurrentThreadId();
    LOCK();
    (pOVar2->_1).cctor_thread = (ulonglong)uVar6;
    UNLOCK();
    LOCK();
    (pOVar2->_1).cctor_finished_or_no_cctor = 1;
    uVar6 = uRam_?;
    UNLOCK();
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar6 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    lStackX_10 = 0;
    if (((pOVar2->_1).field_0x6e & 4) != 0) {
      FUN_?(pOVar2);
      ppMVar5 = ppMVar3;
      pIVar13 = (Il2CppClass *)pOVar2;
code_?:
      do {
        if (ppMVar5 == (MethodInfo **)0x0) {
          FUN_?(pIVar13);
          if (pIVar13->field_count != 0) {
            ppMVar5 = pIVar13->methods;
            pMVar14 = *ppMVar5;
code_?:
            if (pMVar14 != (MethodInfo *)0x0) {
              if ((*pMVar14->name == '.') && ((pMVar14->flags & 0x800) != 0)) {
                ppMVar15 = ppMVar3;
                while (ppMVar16 = ppMVar15 + 0x3052aacd,
                      ppMVar15 = (MethodInfo **)((longlong)ppMVar15 + 1),
                      *(char *)ppMVar16 == (pMVar14->name + -1)[(longlong)ppMVar15]) {
                  if (ppMVar15 == (MethodInfo **)0x7) {
                    FUN_?(pMVar14,0,0,&lStackX_10);
                    goto code_?;
                  }
                }
              }
              goto code_?;
            }
          }
        }
        else {
          ppMVar5 = ppMVar5 + 1;
          if (ppMVar5 < pIVar13->methods + pIVar13->field_count) {
            pMVar14 = *ppMVar5;
            goto code_?;
          }
        }
        pIVar13 = pIVar13->parent;
        ppMVar5 = ppMVar3;
      } while (pIVar13 != (Il2CppClass *)0x0);
    }
code_?:
    LOCK();
    (pOVar2->_1).cctor_thread = 0;
    uVar17 = _UNK_?;
    uVar18 = _UNK_?;
    UNLOCK();
    if (lStackX_10 == 0) {
      LOCK();
      *(undefined4 *)&(pOVar2->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_19 = 0;
    uStack_20 = _UNK_?;
    uStack_21 = _UNK_?;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar2->_0).byval_arg,0,0);
    pppppppuVar16 = &pppppppuStack_78;
    if (0xf < uStack_21) {
      pppppppuVar16 = pppppppuStack_78;
    }
    FUN_?(apppppppuStack_58,&UNK_?,pppppppuVar16);
    if (uStack_21 < 0x10) {
code_?:
      lVar4 = lStackX_10;
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar16 = apppppppuStack_58;
      if (0xf < uStack_22) {
        pppppppuVar16 = apppppppuStack_58[0];
      }
      uStack_20 = uVar18;
      uStack_21 = uVar17;
      lVar12 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar16);
      if (lVar4 != 0) {
        *(longlong *)(lVar12 + 0x28U) = lVar4;
        if (iRam_? != 0) {
          uVar6 = (uint)(lVar12 + 0x28U >> 0xc);
          puVar23 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar24 = *puVar23;
            LOCK();
            uVar17 = *puVar23;
            if (uVar24 == uVar17) {
              *puVar23 = uVar24 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (uVar24 != uVar17);
        }
      }
      FUN_?(pOVar2,lVar12);
      if (0xf < uStack_22) {
        pppppppuVar16 = apppppppuStack_58[0];
        if ((0xfff < uStack_22 + 1) &&
           (pppppppuVar16 = (undefined8 *******)apppppppuStack_58[0][-1],
           0x1f < (ulonglong)((longlong)apppppppuStack_58[0] + (-8 - (longlong)pppppppuVar16))))
        goto code_?;
        func_?(pppppppuVar16);
      }
      goto code_?;
    }
    pppppppuVar16 = pppppppuStack_78;
    if ((uStack_21 + 1 < 0x1000) ||
       (pppppppuVar16 = (undefined8 *******)pppppppuStack_78[-1],
       (ulonglong)((longlong)pppppppuStack_78 + (-8 - (longlong)pppppppuVar16)) < 0x20)) {
      func_?(pppppppuVar16);
      uVar18 = _UNK_?;
      uVar17 = _UNK_?;
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar18._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
  uVar18._4_4_ = (pOVar2->_1).cctor_started;
  uVar18 = FUN_?(uVar18);
  FUN_?(uVar18,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}

