
/* Void Enter(EditorStateMachine) */

void Assembly-CSharp.dll::ESLeaveCubeTutorial::ESLeaveCubeTutorial_Enter
               (ESLeaveCubeTutorial *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CubeModelingEvent);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__EditorEvent);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ESStateBase::ESStateBase_Enter((ESStateBase *)this,e,(MethodInfo *)0x0);
  uStackX_10 = 0x2f;
  pOVar1 = (Object *)FUN_?(TypeInfo__EditorEvent,&uStackX_10);
  if (e != (EditorStateMachine *)0x0) {
    FSMEntity::FSMEntity_set_Event((FSMEntity *)e,pOVar1,(MethodInfo *)0x0);
    this_00 = (e->fields).weCamera;
    if (this_00 != (MainCameraManager *)0x0) {
      MainCameraManager::MainCameraManager_set_BlueModeEnabled(this_00,0,(MethodInfo *)0x0);
      this_01 = (e->fields).cubeModelingStateMachine;
      pOVar1 = (Object *)0x0;
      uStackX_10 = 0;
      iVar2._0_2_ = (TypeInfo__CubeModelingEvent->_0).byval_arg.attrs;
      iVar2._2_1_ = (TypeInfo__CubeModelingEvent->_0).byval_arg.type;
      iVar2._3_1_ = (TypeInfo__CubeModelingEvent->_0).byval_arg.field_0xb;
      if (iVar2 < 0) {
        if (((TypeInfo__CubeModelingEvent->_0).generic_class == (Il2CppGenericClass *)0x0) ||
           (((TypeInfo__CubeModelingEvent->_1).field_0x6d & 8) == 0)) {
          pOVar1 = (Object *)FUN_?(TypeInfo__CubeModelingEvent);
          FUN_?(pOVar1 + 1,&uStackX_10);
          if (iRam_? != 0) {
            uVar3 = (uint)((ulonglong)(pOVar1 + 1) >> 0xc);
            puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
            do {
              uVar5 = *puVar4;
              LOCK();
              uVar6 = *puVar4;
              if (uVar5 == uVar6) {
                *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
              }
              UNLOCK();
            } while (uVar5 != uVar6);
          }
        }
      }
      else {
        pOVar1 = (Object *)((ulonglong)uStackX_14 << 0x20);
      }
      if (this_01 != (CubeModelingStateMachine *)0x0) {
        FSMEntity::FSMEntity_set_Event((FSMEntity *)this_01,pOVar1,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar7 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if ((((pMVar7 != (MVGameControllerBase *)0x0) &&
             (pMVar8 = (pMVar7->fields).game, pMVar8 != (MVNetworkGame *)0x0)) &&
            (pGVar9 = (pMVar8->fields).GameEventManager, pGVar9 != (GameEventManager *)0x0)) &&
           (pGVar10 = (pGVar9->fields).AvatarCommandsBuildMode,
           pGVar10 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) {
          if ((pGVar10->fields).OnEnterBuildStateEvent != (Action_2_EditorEvent_Object_ *)0x0) {
            pAVar11 = (pGVar10->fields).OnEnterBuildStateEvent;
            (*(pAVar11->fields)._._.invoke_impl)
                      ((pAVar11->fields)._._.method_code,(this->fields)._.stateType,0,
                       (pAVar11->fields)._._.method);
          }
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* ESLeaveCubeTutorial() */

void Assembly-CSharp.dll::ESLeaveCubeTutorial::ESLeaveCubeTutorial__ctor
               (ESLeaveCubeTutorial *this,MethodInfo *method)

{
  pWVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRefNullRef
                     ((MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields)._.tintedWo = pWVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._.tintedWo >> 0xc);
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
  this_00 = LoggerManager::LoggerManager_get_Instance((MethodInfo *)0x0);
  type = (Type *)FUN_?(&(this->klass->_0).byval_arg);
  if (this_00 == (LoggerManager *)0x0) {
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pIVar8 = LoggerManager::LoggerManager_GetLogger(this_00,type,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields)._.logger = pIVar8;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._.logger >> 0xc);
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
  return;
}

