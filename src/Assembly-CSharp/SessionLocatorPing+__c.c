
/* Void <CloseApplication>b__12_0() */

void Assembly-CSharp.dll::SessionLocatorPing+<>c::SessionLocatorPing_c__CloseApplication_b__12_0
               (SessionLocatorPing_c *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__QuitConnectionError);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_01 = (Object__Class *)FUN_?(TypeInfo__QuitConnectionError);
  QuitConnectionError::QuitConnectionError__ctor((QuitConnectionError *)this_01,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AsyncWWWManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVGameControllerBase____c__DisplayClass181_0___ApplicationQuit_b__0__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVGameControllerBase____c__DisplayClass181_0);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Application_quit);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__MVGameControllerBase____c__DisplayClass181_0);
  if (object != (Object *)0x0) {
    bVar1 = iRam_? != 0;
    object[1].klass = this_01;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)(object + 1) >> 0xc);
      puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar4 = *puVar3;
        LOCK();
        uVar5 = *puVar3;
        if (uVar4 == uVar5) {
          *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (uVar4 != uVar5);
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_Application_quit,(MethodInfo *)0x0);
    pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (pMVar6 != (MVGameControllerBase *)0x0) {
      if ((pMVar6->fields).quitHasBeenCalled == 0) {
        (pMVar6->fields).quitHasBeenCalled = 1;
        this_00 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (this_00,object,
                   MethodInfo__MVGameControllerBase____c__DisplayClass181_0___ApplicationQuit_b__0__
                   ,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
          FUN_?();
        }
        AsyncWWWManager::AsyncWWWManager_ShutDown((Action *)this_00,(MethodInfo *)0x0);
      }
      return;
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* SessionLocatorPing+<>c() */

void Assembly-CSharp.dll::SessionLocatorPing+<>c::SessionLocatorPing_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__SessionLocatorPing____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (SessionLocatorPing_c *)FUN_?(TypeInfo__SessionLocatorPing____c);
  TypeInfo__SessionLocatorPing____c->static_fields->__9 = pSVar1;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)TypeInfo__SessionLocatorPing____c->static_fields >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  return;
}

