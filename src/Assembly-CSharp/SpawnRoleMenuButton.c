
/* Void AvatarStateChanged(SpawnRoleModeType) */

void Assembly-CSharp.dll::SpawnRoleMenuButton::SpawnRoleMenuButton_AvatarStateChanged
               (SpawnRoleMenuButton *this,SpawnRoleModeType__Enum state,MethodInfo *method)

{
  if ((state & SpawnRoleModeType__Enum_Hidden) == SpawnRoleModeType__Enum_None) {
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__,
                  0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
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
      ((pMVar2->fields).worldNetwork != (WorldNetwork *)0x0)) &&
     ((this_00 = (MVWorldObjectClientManager *)
                 (((pMVar2->fields).worldNetwork)->fields)._.worldObjectClientManager,
      this_00 != (MVWorldObjectClientManager *)0x0 &&
      (pLVar3 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectsByType
                          (this_00,WorldObjectType__Enum_AvatarSpawnRoleCreator,(MethodInfo *)0x0),
      pLVar3 != (List_1_MVWorldObjectClient_ *)0x0)))) {
    iVar4 = (pLVar3->fields)._size;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar1 != (MVGameControllerBase *)0x0) &&
        (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
       (pMVar5 = (pMVar2->fields).teamManager, pMVar5 != (MVTeamManager *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__get_Count__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pDVar6 = (pMVar5->fields).teams;
      if (pDVar6 != (Dictionary_2_MV_WorldObject_MVTeam_HashSet_1_System_Int32_ *)0x0) {
        iVar7 = (pDVar6->fields)._count - (pDVar6->fields)._freeCount;
        obj = (this->fields).buttonObject;
        if (obj != (GameObject *)0x0) {
          bVar8 = iVar7 < 2 && 0 < iVar4;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                          ,CONCAT31((int3)((uint)iVar7 >> 8),bVar8),0,in_R9,unaff_RSI);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (obj == (GameObject *)0x0) {
            FUN_?();
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pvVar10 = (obj->fields)._.m_CachedPtr;
          if (pvVar10 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pcVar9 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
            uVar11 = func_?(&UNK_?);
            FUN_?(uVar11,0);
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pcRam_? = pcVar9;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam_?)(pvVar10,bVar8);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::SpawnRoleMenuButton::SpawnRoleMenuButton_OnDestroy
               (SpawnRoleMenuButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<MV::Common::SpawnRoleModeType>);
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
  pSVar2 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                     ((MethodInfo *)0x0);
  if (pSVar2 != (SpawnRoleDataMediator *)0x0) {
    this_00 = (pSVar2->fields).SpawnRoleModeTypeWrapper;
    this_01 = (UnityAction_1_System_Int32Enum_ *)
              FUN_?(TypeInfo__System__Action<MV::Common::SpawnRoleModeType>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (this_01,(Object *)this,
               MethodInfo__SpawnRoleMenuButton__AvatarStateChanged_MV__Common__SpawnRoleModeType_,
               (MethodInfo *)0x0);
    if (this_00 != (SpawnRoleModeTypeWrapper *)0x0) {
      SpawnRoleModeTypeWrapper::SpawnRoleModeTypeWrapper_remove_OnChange
                (this_00,(Action_1_MV_Common_SpawnRoleModeType_ *)this_01,(MethodInfo *)0x0);
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetButtonIsActive() */

void Assembly-CSharp.dll::SpawnRoleMenuButton::SpawnRoleMenuButton_SetButtonIsActive
               (SpawnRoleMenuButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__)
    ;
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
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
      ((pMVar2->fields).worldNetwork != (WorldNetwork *)0x0)) &&
     ((this_00 = (MVWorldObjectClientManager *)
                 (((pMVar2->fields).worldNetwork)->fields)._.worldObjectClientManager,
      this_00 != (MVWorldObjectClientManager *)0x0 &&
      (pLVar3 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectsByType
                          (this_00,WorldObjectType__Enum_AvatarSpawnRoleCreator,(MethodInfo *)0x0),
      pLVar3 != (List_1_MVWorldObjectClient_ *)0x0)))) {
    iVar4 = (pLVar3->fields)._size;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar1 != (MVGameControllerBase *)0x0) &&
        (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
       (pMVar5 = (pMVar2->fields).teamManager, pMVar5 != (MVTeamManager *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__get_Count__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pDVar6 = (pMVar5->fields).teams;
      if (pDVar6 != (Dictionary_2_MV_WorldObject_MVTeam_HashSet_1_System_Int32_ *)0x0) {
        iVar7 = (pDVar6->fields)._count - (pDVar6->fields)._freeCount;
        obj = (this->fields).buttonObject;
        if (obj != (GameObject *)0x0) {
          bVar8 = iVar7 < 2 && 0 < iVar4;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                          ,CONCAT31((int3)((uint)iVar7 >> 8),bVar8),0,in_R9,unaff_RSI);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (obj == (GameObject *)0x0) {
            FUN_?();
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pvVar10 = (obj->fields)._.m_CachedPtr;
          if (pvVar10 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pcVar9 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
            uVar11 = func_?(&UNK_?);
            FUN_?(uVar11,0);
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pcRam_? = pcVar9;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam_?)(pvVar10,bVar8);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void ShowSpawnRoleMenu() */

void Assembly-CSharp.dll::SpawnRoleMenuButton::SpawnRoleMenuButton_ShowSpawnRoleMenu
               (SpawnRoleMenuButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  SpawnRoleMenu_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleMenu>_SpawnRoleMenu_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__SpawnRoleMenuButton____c___ShowSpawnRoleMenu_b__6_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__SpawnRoleMenuButton____c__DisplayClass6_0___ShowSpawnRoleMenu_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SpawnRoleMenuButton____c__DisplayClass6_0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SpawnRoleMenuButton____c);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ShowSpawnRoleMenu);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object_00 = (Object *)FUN_?(TypeInfo__SpawnRoleMenuButton____c__DisplayClass6_0);
  original = (this->fields).spawnRoleMenuPrefab;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  player = (MVPlayer *)
           SpawnRoleMenu_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleMenu>_SpawnRoleMenu_;
  pOVar1 = (Object__Class *)
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                      ((Object *)original,
                       SpawnRoleMenu_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleMenu>_SpawnRoleMenu_
                      );
  if (object_00 != (Object *)0x0) {
    bVar2 = iRam_? != 0;
    object_00[1].klass = pOVar1;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)(object_00 + 1) >> 0xc);
      in_R8 = (MethodInfo *)(ulonglong)(uVar3 & 0x3f);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      player = (MVPlayer *)(lVar4 + 0xADDR);
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *(ulonglong *)(lVar4 + 0xADDR);
        if (bVar2) {
          *(ulonglong *)(lVar4 + 0xADDR) = uVar5 | 1L << (longlong)in_R8;
        }
        UNLOCK();
      } while (!bVar2);
    }
    pOVar1 = object_00[1].klass;
    MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,player,in_R8);
    if ((extraout_RAX != 0) && (pOVar1 != (Object__Class *)0x0)) {
      SpawnRoleMenu::SpawnRoleMenu_Initialize
                ((SpawnRoleMenu *)pOVar1,*(MVTeam__Enum *)(extraout_RAX + 0x84),(MethodInfo *)0x0);
      pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__SpawnRoleMenuButton____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__SpawnRoleMenuButton____c);
      }
      this_00 = TypeInfo__SpawnRoleMenuButton____c->static_fields->__9__6_0;
      if (this_00 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        if (*(int *)&(TypeInfo__SpawnRoleMenuButton____c->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__SpawnRoleMenuButton____c);
        }
        object = TypeInfo__SpawnRoleMenuButton____c->static_fields->__9;
        this_00 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                               );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]
        ::ExecuteEvents_EventFunction_1_System_Object___ctor
                  ((ExecuteEvents_EventFunction_1_System_Object_ *)this_00,(Object *)object,
                   MethodInfo__SpawnRoleMenuButton____c___ShowSpawnRoleMenu_b__6_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__SpawnRoleMenuButton____c->static_fields->__9__6_0 = this_00;
        if (iRam_? != 0) {
          uVar3 = (uint)((ulonglong)&TypeInfo__SpawnRoleMenuButton____c->static_fields->__9__6_0 >>
                         0xc);
          lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
          do {
            uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
            puVar7 = (ulonglong *)(lVar4 + 0xADDR);
            LOCK();
            bVar2 = uVar5 == *puVar7;
            if (bVar2) {
              *puVar7 = uVar5 | 1L << (uVar3 & 0x3f);
            }
            UNLOCK();
          } while (!bVar2);
        }
      }
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar6,(BaseEventData *)0x0,
                 (ExecuteEvents_EventFunction_1_System_Object_ *)this_00,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                (this_01,object_00,
                 MethodInfo__SpawnRoleMenuButton____c__DisplayClass6_0___ShowSpawnRoleMenu_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar6,(BaseEventData *)0x0,this_01,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar8 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if ((((pMVar8 != (MVGameControllerBase *)0x0) &&
           (pMVar9 = (pMVar8->fields).game, pMVar9 != (MVNetworkGame *)0x0)) &&
          (pGVar10 = (pMVar9->fields).GameEventManager, pGVar10 != (GameEventManager *)0x0)) &&
         (pGVar11 = (pGVar10->fields).AvatarCommandsPlayMode,
         pGVar11 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0)) {
        if ((pGVar11->fields).OnRemoveFromGame != (Action *)0x0) {
          pAVar12 = (pGVar11->fields).OnRemoveFromGame;
          (*(pAVar12->fields)._._.invoke_impl)
                    ((pAVar12->fields)._._.method_code,(pAVar12->fields)._._.method);
        }
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        pSVar13 = StringLiteral_ShowSpawnRoleMenu;
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
        pIVar14 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
        if (pIVar14 == (ILogger_1 *)0x0) {
          FUN_?();
          pcVar15 = (code *)swi(3);
          (*pcVar15)();
          return;
        }
        FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar14,3,pSVar13);
        return;
      }
    }
  }
  FUN_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::SpawnRoleMenuButton::SpawnRoleMenuButton_Start
               (SpawnRoleMenuButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<MV::Common::SpawnRoleModeType>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__SpawnRoleMenuButton__AvatarStateChanged_MV__Common__SpawnRoleModeType_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  SpawnRoleMenuButton_SetButtonIsActive(this,(MethodInfo *)0x0);
  pSVar1 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                     ((MethodInfo *)0x0);
  if (pSVar1 != (SpawnRoleDataMediator *)0x0) {
    pSVar2 = (pSVar1->fields).SpawnRoleModeTypeWrapper;
    this_00 = (UnityAction_1_System_Int32Enum_ *)
              FUN_?(TypeInfo__System__Action<MV::Common::SpawnRoleModeType>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (this_00,(Object *)this,
               MethodInfo__SpawnRoleMenuButton__AvatarStateChanged_MV__Common__SpawnRoleModeType_,
               (MethodInfo *)0x0);
    if (pSVar2 != (SpawnRoleModeTypeWrapper *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Action<MV::Common::SpawnRoleModeType>);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      ppAVar3 = &(pSVar2->fields).OnChange;
      a = (pSVar2->fields).OnChange;
      do {
        pDVar4 = mscorlib.dll::System::Delegate::Delegate_Combine
                           ((Delegate *)a,(Delegate *)this_00,(MethodInfo *)0x0);
        pAVar5 = TypeInfo__System__Action<MV::Common::SpawnRoleModeType>;
        if (pDVar4 == (Delegate *)0x0) {
          pAVar6 = (Action_1_MV_Common_SpawnRoleModeType_ *)0x0;
        }
        else {
          pAVar6 = (Action_1_MV_Common_SpawnRoleModeType_ *)
                   FUN_?(pDVar4,TypeInfo__System__Action<MV::Common::SpawnRoleModeType>);
          if (pAVar6 == (Action_1_MV_Common_SpawnRoleModeType_ *)0x0) {
            FUN_?(pDVar4,pAVar5);
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        LOCK();
        pAVar8 = *ppAVar3;
        bVar9 = a == pAVar8;
        if (bVar9) {
          *ppAVar3 = pAVar6;
          pAVar8 = a;
        }
        UNLOCK();
        pAVar6 = a;
        if (!bVar9) {
          pAVar6 = pAVar8;
        }
        if (iRam_? != 0) {
          uVar10 = (uint)((ulonglong)ppAVar3 >> 0xc);
          uVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6);
          do {
            uVar12 = *(ulonglong *)(uVar11 * 8 + 0xADDR);
            puVar13 = (ulonglong *)(uVar11 * 8 + 0xADDR);
            LOCK();
            bVar9 = uVar12 == *puVar13;
            if (bVar9) {
              *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
            }
            UNLOCK();
          } while (!bVar9);
        }
        bVar9 = pAVar6 != a;
        a = pAVar6;
      } while (bVar9);
      return;
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

