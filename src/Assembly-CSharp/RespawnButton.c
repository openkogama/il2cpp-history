
/* Void Respawn() */

void Assembly-CSharp.dll::RespawnButton::RespawnButton_Respawn
               (RespawnButton *this,MethodInfo *method)

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
    FUN_?(&TypeInfo__IEditModeUI);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IPlayModeUI);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__RespawnButton____c___Respawn_b__0_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RespawnButton____c);
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
      (pGVar3 = (pMVar2->fields).GameEventManager, pGVar3 != (GameEventManager *)0x0)) &&
     (pGVar4 = (pGVar3->fields).AvatarCommandsPlayMode,
     pGVar4 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0)) {
    if ((pGVar4->fields).OnKillSelf != (Action *)0x0) {
      pAVar5 = (pGVar4->fields).OnKillSelf;
      (*(pAVar5->fields)._._.invoke_impl)
                ((pAVar5->fields)._._.method_code,(pAVar5->fields)._._.method);
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField ==
        (IEditModeUI *)0x0) {
      cVar6 = '\0';
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField ==
          (IEditModeUI *)0x0) goto code_?;
      cVar6 = FUN_?(1,TypeInfo__IEditModeUI);
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pGVar7 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar7 != (GameSessionData *)0x0) {
      if ((pGVar7->fields).gameMode == 1) {
        cVar6 = '\x01';
      }
      if (cVar6 == '\0') {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pGVar7 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
        if (pGVar7 != (GameSessionData *)0x0) {
          if ((pGVar7->fields).gameMode == 0) {
            root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)this,(MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__RespawnButton____c->_1).field_0x1c == 0) {
              FUN_?(TypeInfo__RespawnButton____c);
            }
            this_00 = TypeInfo__RespawnButton____c->static_fields->__9__0_0;
            if (this_00 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
              if (*(int *)&(TypeInfo__RespawnButton____c->_1).field_0x1c == 0) {
                FUN_?(TypeInfo__RespawnButton____c);
              }
              object = TypeInfo__RespawnButton____c->static_fields->__9;
              this_00 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                        FUN_?(
                                     TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                     );
              UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
              Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                        ((ExecuteEvents_EventFunction_1_System_Object_ *)this_00,(Object *)object,
                         MethodInfo__RespawnButton____c___Respawn_b__0_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                         ,(MethodInfo *)0x0);
              TypeInfo__RespawnButton____c->static_fields->__9__0_0 = this_00;
              func_?(&TypeInfo__RespawnButton____c->static_fields->__9__0_0);
            }
            if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
              FUN_?();
            }
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy
                      (root,(BaseEventData *)0x0,
                       (ExecuteEvents_EventFunction_1_System_Object_ *)this_00,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                      );
          }
          return;
        }
      }
      else {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pIVar8 = TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
        if (pIVar8 != (IPlayModeUI *)0x0) {
          pIVar9 = (Il2CppRuntimeInterfaceOffsetPair *)0x0;
          uVar10 = 0;
          pIVar11 = pIVar8->klass;
          uVar12._0_1_ = (pIVar11->_1).rank;
          uVar12._1_1_ = (pIVar11->_1).minimumAlignment;
          if (uVar12 != 0) {
            pIVar9 = pIVar11->interfaceOffsets;
            do {
              if (pIVar9[uVar10].interfaceType == (Il2CppClass *)TypeInfo__IPlayModeUI) {
                ppIVar13 = &(&(pIVar11->vtable).ShowEUseIcon)[pIVar9[uVar10].offset + 8].methodPtr;
                goto code_?;
              }
              uVar10 = uVar10 + 1;
            } while (uVar10 < uVar12);
          }
          ppIVar13 = (Il2CppMethodPointer *)
                     FUN_?(pIVar8,TypeInfo__IPlayModeUI,8,pIVar9,unaff_RDI);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**ppIVar13)(pIVar8,0,(MethodInfo *)ppIVar13[1],*ppIVar13);
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}

