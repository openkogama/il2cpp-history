
/* Void AvatarStateChanged(SpawnRoleModeType) */

void Assembly-CSharp.dll::TeamMenuButton::TeamMenuButton_AvatarStateChanged
               (TeamMenuButton *this,SpawnRoleModeType__Enum state,MethodInfo *method)

{
  if ((state & SpawnRoleModeType__Enum_Hidden) == SpawnRoleModeType__Enum_None) {
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (pMVar3 = (pMVar2->fields).teamManager, pMVar3 != (MVTeamManager *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__get_Count__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pDVar4 = (pMVar3->fields).teams;
    if ((pDVar4 != (Dictionary_2_MV_WorldObject_MVTeam_HashSet_1_System_Int32_ *)0x0) &&
       (obj = (this->fields).buttonEnabler, obj != (GameObject *)0x0)) {
      bVar5 = 1 < (pDVar4->fields)._count - (pDVar4->fields)._freeCount;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                      ,CONCAT71((int7)((ulonglong)pDVar4 >> 8),bVar5),0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (obj == (GameObject *)0x0) {
        FUN_?();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pvVar7 = (obj->fields)._.m_CachedPtr;
      if (pvVar7 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pcVar6 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
        uVar8 = func_?(&UNK_?);
        FUN_?(uVar8,0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pcRam_? = pcVar6;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar7,bVar5);
      return;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::TeamMenuButton::TeamMenuButton_OnDestroy
               (TeamMenuButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<MV::Common::SpawnRoleModeType>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__EventHandler<MV::WorldObject::TeamEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__TeamMenuButton__AvatarStateChanged_MV__Common__SpawnRoleModeType_);
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
               MethodInfo__TeamMenuButton__AvatarStateChanged_MV__Common__SpawnRoleModeType_,
               (MethodInfo *)0x0);
    if (this_00 != (SpawnRoleModeTypeWrapper *)0x0) {
      SpawnRoleModeTypeWrapper::SpawnRoleModeTypeWrapper_remove_OnChange
                (this_00,(Action_1_MV_Common_SpawnRoleModeType_ *)this_01,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar3 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if ((pMVar3 != (MVGameControllerBase *)0x0) &&
         (pMVar4 = (pMVar3->fields).game, pMVar4 != (MVNetworkGame *)0x0)) {
        pMVar5 = (pMVar4->fields).teamManager;
        pUVar6 = (UnityAction_2_System_Object_System_Object_ *)
                 FUN_?(TypeInfo__System__EventHandler<MV::WorldObject::TeamEventArgs>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  (pUVar6,(Object *)this,
                   MethodInfo__TeamMenuButton__TeamChanged_System__Object__MV__WorldObject__TeamEventArgs_
                   ,(MethodInfo *)0x0);
        if (pMVar5 != (MVTeamManager *)0x0) {
          MVTeamManager::MVTeamManager_remove_OnTeamAdded
                    (pMVar5,(EventHandler_1_MV_WorldObject_TeamEventArgs_ *)pUVar6,(MethodInfo *)0x0
                    );
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar3 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if ((pMVar3 != (MVGameControllerBase *)0x0) &&
             (pMVar4 = (pMVar3->fields).game, pMVar4 != (MVNetworkGame *)0x0)) {
            pMVar5 = (pMVar4->fields).teamManager;
            pUVar6 = (UnityAction_2_System_Object_System_Object_ *)
                     FUN_?(TypeInfo__System__EventHandler<MV::WorldObject::TeamEventArgs>);
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      (pUVar6,(Object *)this,
                       MethodInfo__TeamMenuButton__TeamChanged_System__Object__MV__WorldObject__TeamEventArgs_
                       ,(MethodInfo *)0x0);
            if (pMVar5 != (MVTeamManager *)0x0) {
              MVTeamManager::MVTeamManager_remove_OnTeamRemoved
                        (pMVar5,(EventHandler_1_MV_WorldObject_TeamEventArgs_ *)pUVar6,
                         (MethodInfo *)0x0);
              return;
            }
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


/* Void SetButtonIsActive() */

void Assembly-CSharp.dll::TeamMenuButton::TeamMenuButton_SetButtonIsActive
               (TeamMenuButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (pMVar3 = (pMVar2->fields).teamManager, pMVar3 != (MVTeamManager *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__get_Count__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pDVar4 = (pMVar3->fields).teams;
    if ((pDVar4 != (Dictionary_2_MV_WorldObject_MVTeam_HashSet_1_System_Int32_ *)0x0) &&
       (obj = (this->fields).buttonEnabler, obj != (GameObject *)0x0)) {
      bVar5 = 1 < (pDVar4->fields)._count - (pDVar4->fields)._freeCount;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                      ,CONCAT71((int7)((ulonglong)pDVar4 >> 8),bVar5),0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (obj == (GameObject *)0x0) {
        FUN_?();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pvVar7 = (obj->fields)._.m_CachedPtr;
      if (pvVar7 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pcVar6 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
        uVar8 = func_?(&UNK_?);
        FUN_?(uVar8,0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pcRam_? = pcVar6;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar7,bVar5);
      return;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void ShowTeamMenu() */

void Assembly-CSharp.dll::TeamMenuButton::TeamMenuButton_ShowTeamMenu
               (TeamMenuButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
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
    FUN_?(&TeamMenu_MethodInfo__UnityEngine__Object__Instantiate<TeamMenu>_TeamMenu_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__TeamMenuButton____c___ShowTeamMenu_b__7_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__TeamMenuButton____c__DisplayClass7_0___ShowTeamMenu_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TeamMenuButton____c__DisplayClass7_0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TeamMenuButton____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object_00 = (Object *)FUN_?(TypeInfo__TeamMenuButton____c__DisplayClass7_0);
  original = (this->fields).teamMenuPrefab;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar1 = (Object__Class *)
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                      ((Object *)original,
                       TeamMenu_MethodInfo__UnityEngine__Object__Instantiate<TeamMenu>_TeamMenu_);
  if (object_00 != (Object *)0x0) {
    bVar2 = iRam_? != 0;
    object_00[1].klass = pOVar1;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)(object_00 + 1) >> 0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__TeamMenuButton____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__TeamMenuButton____c);
    }
    this_00 = TypeInfo__TeamMenuButton____c->static_fields->__9__7_0;
    if (this_00 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      if (*(int *)&(TypeInfo__TeamMenuButton____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__TeamMenuButton____c);
      }
      object = TypeInfo__TeamMenuButton____c->static_fields->__9;
      this_00 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                ((ExecuteEvents_EventFunction_1_System_Object_ *)this_00,(Object *)object,
                 MethodInfo__TeamMenuButton____c___ShowTeamMenu_b__7_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__TeamMenuButton____c->static_fields->__9__7_0 = this_00;
      if (iRam_? != 0) {
        uVar3 = (uint)((ulonglong)&TypeInfo__TeamMenuButton____c->static_fields->__9__7_0 >> 0xc);
        lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
        do {
          uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
          puVar6 = (ulonglong *)(lVar4 + 0xADDR);
          LOCK();
          bVar2 = uVar5 == *puVar6;
          if (bVar2) {
            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar2);
      }
    }
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar7,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_00,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              (this_01,object_00,
               MethodInfo__TeamMenuButton____c__DisplayClass7_0___ShowTeamMenu_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar7,(BaseEventData *)0x0,this_01,
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
      if ((pGVar11->fields).OnRemoveFromGame == (Action *)0x0) {
        return;
      }
      pAVar12 = (pGVar11->fields).OnRemoveFromGame;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pAVar12->fields)._._.invoke_impl)
                ((pAVar12->fields)._._.method_code,(pAVar12->fields)._._.method);
      return;
    }
  }
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::TeamMenuButton::TeamMenuButton_Start
               (TeamMenuButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<MV::Common::SpawnRoleModeType>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__EventHandler<MV::WorldObject::TeamEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__TeamMenuButton__AvatarStateChanged_MV__Common__SpawnRoleModeType_);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                     ((MethodInfo *)0x0);
  if (pSVar1 != (SpawnRoleDataMediator *)0x0) {
    this_00 = (pSVar1->fields).SpawnRoleModeTypeWrapper;
    this_01 = (UnityAction_1_System_Int32Enum_ *)
              FUN_?(TypeInfo__System__Action<MV::Common::SpawnRoleModeType>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (this_01,(Object *)this,
               MethodInfo__TeamMenuButton__AvatarStateChanged_MV__Common__SpawnRoleModeType_,
               (MethodInfo *)0x0);
    if (this_00 != (SpawnRoleModeTypeWrapper *)0x0) {
      SpawnRoleModeTypeWrapper::SpawnRoleModeTypeWrapper_add_OnChange
                (this_00,(Action_1_MV_Common_SpawnRoleModeType_ *)this_01,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if ((pMVar2 != (MVGameControllerBase *)0x0) &&
         (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) {
        pMVar4 = (pMVar3->fields).teamManager;
        pUVar5 = (UnityAction_2_System_Object_System_Object_ *)
                 FUN_?(TypeInfo__System__EventHandler<MV::WorldObject::TeamEventArgs>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  (pUVar5,(Object *)this,
                   MethodInfo__TeamMenuButton__TeamChanged_System__Object__MV__WorldObject__TeamEventArgs_
                   ,(MethodInfo *)0x0);
        if (pMVar4 != (MVTeamManager *)0x0) {
          MVTeamManager::MVTeamManager_add_OnTeamAdded
                    (pMVar4,(EventHandler_1_MV_WorldObject_TeamEventArgs_ *)pUVar5,(MethodInfo *)0x0
                    );
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if ((pMVar2 != (MVGameControllerBase *)0x0) &&
             (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) {
            pMVar4 = (pMVar3->fields).teamManager;
            pUVar5 = (UnityAction_2_System_Object_System_Object_ *)
                     FUN_?(TypeInfo__System__EventHandler<MV::WorldObject::TeamEventArgs>);
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      (pUVar5,(Object *)this,
                       MethodInfo__TeamMenuButton__TeamChanged_System__Object__MV__WorldObject__TeamEventArgs_
                       ,(MethodInfo *)0x0);
            if (pMVar4 != (MVTeamManager *)0x0) {
              MVTeamManager::MVTeamManager_add_OnTeamRemoved
                        (pMVar4,(EventHandler_1_MV_WorldObject_TeamEventArgs_ *)pUVar5,
                         (MethodInfo *)0x0);
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__MVGameControllerBase,0);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
              if (((pMVar2 != (MVGameControllerBase *)0x0) &&
                  (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
                 (pMVar4 = (pMVar3->fields).teamManager, pMVar4 != (MVTeamManager *)0x0)) {
                if (cRam_? == '\0') {
                  FUN_?(&
                                MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__get_Count__
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pDVar6 = (pMVar4->fields).teams;
                if ((pDVar6 != (Dictionary_2_MV_WorldObject_MVTeam_HashSet_1_System_Int32_ *)0x0) &&
                   (obj = (this->fields).buttonEnabler, obj != (GameObject *)0x0)) {
                  bVar7 = 1 < (pDVar6->fields)._count - (pDVar6->fields)._freeCount;
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                                  ,CONCAT71((int7)((ulonglong)pDVar6 >> 8),bVar7),0);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  if (obj == (GameObject *)0x0) {
                    FUN_?();
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  pvVar9 = (obj->fields)._.m_CachedPtr;
                  if (pvVar9 == (void *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  pcVar8 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
                    uVar10 = func_?(&UNK_?);
                    FUN_?(uVar10,0);
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  pcRam_? = pcVar8;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*pcRam_?)(pvVar9,bVar7);
                  return;
                }
              }
              FUN_?();
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
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


/* Void TeamChanged(Object, TeamEventArgs) */

void Assembly-CSharp.dll::TeamMenuButton::TeamMenuButton_TeamChanged
               (TeamMenuButton *this,Object *sender,TeamEventArgs *eventArgs,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (pMVar3 = (pMVar2->fields).teamManager, pMVar3 != (MVTeamManager *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__get_Count__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pDVar4 = (pMVar3->fields).teams;
    if ((pDVar4 != (Dictionary_2_MV_WorldObject_MVTeam_HashSet_1_System_Int32_ *)0x0) &&
       (obj = (this->fields).buttonEnabler, obj != (GameObject *)0x0)) {
      bVar5 = 1 < (pDVar4->fields)._count - (pDVar4->fields)._freeCount;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                      ,CONCAT71((int7)((ulonglong)pDVar4 >> 8),bVar5),0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (obj == (GameObject *)0x0) {
        FUN_?();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pvVar7 = (obj->fields)._.m_CachedPtr;
      if (pvVar7 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pcVar6 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
        uVar8 = func_?(&UNK_?);
        FUN_?(uVar8,0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pcRam_? = pcVar6;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar7,bVar5);
      return;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

