
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
    bVar6 = true;
    if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField ==
        (IEditModeUI *)0x0) {
      cVar7 = '\0';
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
      cVar7 = FUN_?(1,TypeInfo__IEditModeUI);
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pGVar8 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar8 != (GameSessionData *)0x0) {
      if ((pGVar8->fields).gameMode != 1) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pGVar8 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
        if (pGVar8 == (GameSessionData *)0x0) goto code_?;
        bVar6 = (pGVar8->fields).gameMode == 3;
      }
      if (cVar7 != '\0' || bVar6) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pIVar9 = TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
        if (pIVar9 != (IPlayModeUI *)0x0) {
          pIVar10 = (Il2CppRuntimeInterfaceOffsetPair *)0x0;
          uVar11 = 0;
          pIVar12 = pIVar9->klass;
          uVar13._0_1_ = (pIVar12->_1).rank;
          uVar13._1_1_ = (pIVar12->_1).minimumAlignment;
          if (uVar13 != 0) {
            pIVar10 = pIVar12->interfaceOffsets;
            do {
              if (pIVar10[uVar11].interfaceType == (Il2CppClass *)TypeInfo__IPlayModeUI) {
                ppIVar14 = &(&(pIVar12->vtable).ShowEUseIcon)[pIVar10[uVar11].offset + 8].methodPtr;
                goto code_?;
              }
              uVar11 = uVar11 + 1;
            } while (uVar11 < uVar13);
          }
          ppIVar14 = (Il2CppMethodPointer *)
                     FUN_?(pIVar9,TypeInfo__IPlayModeUI,8,pIVar10,unaff_RDI);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**ppIVar14)(pIVar9,0,(MethodInfo *)ppIVar14[1],*ppIVar14);
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
        pGVar8 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
        if (pGVar8 != (GameSessionData *)0x0) {
          if ((pGVar8->fields).gameMode != 0) {
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__MVGameControllerBase);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pGVar8 = TypeInfo__MVGameControllerBase->static_fields->
                      _GameSessionData_k__BackingField;
            if (pGVar8 == (GameSessionData *)0x0) goto code_?;
            if ((pGVar8->fields).gameMode != 4) {
              return;
            }
          }
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
            if (iRam_? != 0) {
              uVar15 = (uint)((ulonglong)&TypeInfo__RespawnButton____c->static_fields->__9__0_0 >>
                             0xc);
              puVar16 = (ulonglong *)((ulonglong)((uVar15 & 0x1fffff) >> 6) * 8 + 0xADDR);
              do {
                uVar17 = *puVar16;
                LOCK();
                uVar18 = *puVar16;
                if (uVar17 == uVar18) {
                  *puVar16 = uVar17 | 1L << (uVar15 & 0x3f);
                }
                UNLOCK();
              } while (uVar17 != uVar18);
            }
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
          return;
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

