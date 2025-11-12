
/* Void Update() */

void Assembly-CSharp.dll::EnterPlaySessionRoundCountDown::EnterPlaySessionRoundCountDown_Update
               (EnterPlaySessionRoundCountDown *this,MethodInfo *method)

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
    FUN_?(&TypeInfo__IPlayModeUI);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__EnterPlaySessionRoundCountDown____c___Update_b__1_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__EnterPlaySessionRoundCountDown____c);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Round_starts_in__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).text;
  pSVar2 = TM::TM__(StringLiteral_Round_starts_in__,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar3 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar3 != (MVGameControllerBase *)0x0) &&
      (pMVar4 = (pMVar3->fields).game, pMVar4 != (MVNetworkGame *)0x0)) &&
     (pMVar5 = (pMVar4->fields)._NetworkGameStateListener_k__BackingField,
     pMVar5 != (MVNetworkGameStateListener *)0x0)) {
    value = MVNetworkGameStateListener::MVNetworkGameStateListener_get_CountdownInSeconds
                      (pMVar5,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Number);
      LOCK();
      UNLOCK();
      FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->field_0x135
        & 1) == 0) {
      FUN_?();
    }
    if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
      FUN_?();
    }
    aRStack_6[0]._pointer._value = (void *)0x0;
    aRStack_6[0]._length = 0;
    aRStack_6[0]._12_4_ = 0;
    str1 = mscorlib.dll::System::Number::Number_FormatInt32
                     (value,aRStack_6,(IFormatProvider *)0x0,(MethodInfo *)0x0);
    pSVar2 = mscorlib.dll::System::String::String_Concat_4(pSVar2,str1,(MethodInfo *)0x0);
    if (pTVar1 != (Text *)0x0) {
      (*(pTVar1->klass->vtable).set_text.methodPtr)
                (pTVar1,pSVar2,(pTVar1->klass->vtable).set_text.method);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar3 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (((pMVar3 != (MVGameControllerBase *)0x0) &&
          (pMVar4 = (pMVar3->fields).game, pMVar4 != (MVNetworkGame *)0x0)) &&
         (pMVar5 = (pMVar4->fields)._NetworkGameStateListener_k__BackingField,
         pMVar5 != (MVNetworkGameStateListener *)0x0)) {
        if ((pMVar5->fields).currentGameState != 1) {
          return;
        }
        root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__EnterPlaySessionRoundCountDown____c->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__EnterPlaySessionRoundCountDown____c);
        }
        this_00 = TypeInfo__EnterPlaySessionRoundCountDown____c->static_fields->__9__1_0;
        if (this_00 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
          if (*(int *)&(TypeInfo__EnterPlaySessionRoundCountDown____c->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__EnterPlaySessionRoundCountDown____c);
          }
          object = TypeInfo__EnterPlaySessionRoundCountDown____c->static_fields->__9;
          this_00 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                    FUN_?(
                                 TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                 );
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
          Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                    ((ExecuteEvents_EventFunction_1_System_Object_ *)this_00,(Object *)object,
                     MethodInfo__EnterPlaySessionRoundCountDown____c___Update_b__1_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          TypeInfo__EnterPlaySessionRoundCountDown____c->static_fields->__9__1_0 = this_00;
          if (iRam_? != 0) {
            uVar7 = (uint)((ulonglong)
                            &TypeInfo__EnterPlaySessionRoundCountDown____c->static_fields->__9__1_0
                           >> 0xc);
            puVar8 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
            do {
              uVar9 = *puVar8;
              LOCK();
              uVar10 = *puVar8;
              if (uVar9 == uVar10) {
                *puVar8 = uVar9 | 1L << (uVar7 & 0x3f);
              }
              UNLOCK();
            } while (uVar9 != uVar10);
          }
        }
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_00
                   ,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pIVar11 = TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
        if (pIVar11 != (IPlayModeUI *)0x0) {
          FUN_?(8,TypeInfo__IPlayModeUI,pIVar11,0);
          pSVar12 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                              ((MethodInfo *)0x0);
          if ((pSVar12 != (SpawnRoleDataMediator *)0x0) &&
             (pSVar13 = (pSVar12->fields).SpawnRoleModeTypeWrapper,
             pSVar13 != (SpawnRoleModeTypeWrapper *)0x0)) {
            if (cRam_? == '\0') {
              FUN_?();
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pSVar14 = (pSVar13->fields).spawnRoleType;
            if ((pSVar14 != (SpawnRoleVariable_1_MV_Common_SpawnRoleModeType_ *)0x0) &&
               (pSVar15 = (pSVar14->fields).subscribableVariable,
               pSVar15 != (SubscribableVariable_1_MV_Common_SpawnRoleModeType_ *)0x0)) {
              if (((pSVar15->fields)._.value & 4) != 0) {
                pGVar16 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                    ((MethodInfo *)0x0);
                if ((pGVar16 == (GameEventManager *)0x0) ||
                   (pGVar17 = (pGVar16->fields).AvatarCommandsPlayMode,
                   pGVar17 == (GameEventManager_AvatarCommandsPlayModeManager *)0x0))
                goto code_?;
                if ((pGVar17->fields).OnEnterPlaymode != (Action *)0x0) {
                  pAVar18 = (pGVar17->fields).OnEnterPlaymode;
                  (*(pAVar18->fields)._._.invoke_impl)
                            ((pAVar18->fields)._._.method_code,(pAVar18->fields)._._.method);
                }
              }
              return;
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}

