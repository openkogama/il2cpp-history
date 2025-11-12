
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoor+<CollisionCheckCoroutine>d__57::
     MVDoor_CollisionCheckCoroutine_d_57_MoveNext
               (MVDoor_CollisionCheckCoroutine_d_57 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  this_00 = (this->fields).__4__this;
  if (iVar1 == 0) {
    (this->fields).__1__state = -1;
    this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,(MVPlayer *)method,in_R8);
    if ((((extraout_RAX == 0) || (*(longlong *)(extraout_RAX + 0x88) == 0)) ||
        (lVar2 = *(longlong *)(*(longlong *)(extraout_RAX + 0x88) + 0x10), lVar2 == 0)) ||
       (this_01 == (MVWorldObjectClientManager *)0x0)) goto code_?;
    pMVar3 = (MVAvatarLocal *)
              MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                        (this_01,*(int32_t *)(lVar2 + 0x10),(MethodInfo *)0x0);
    if (pMVar3 == (MVAvatarLocal *)0x0) {
      (this->fields)._localAvatar_5__2 = (MVAvatarLocal *)0x0;
    }
    else {
      bVar4 = (TypeInfo__MVAvatarLocal->_1).naturalAligment;
      if (((pMVar3->klass->_1).naturalAligment < bVar4) ||
         ((MVAvatarLocal__Class *)(pMVar3->klass->_1).typeHierarchy[(ulonglong)bVar4 - 1] !=
          TypeInfo__MVAvatarLocal)) {
        FUN_?(pMVar3);
        pcVar5 = (code *)swi(3);
        bVar6 = (*pcVar5)();
        return bVar6;
      }
      (this->fields)._localAvatar_5__2 = pMVar3;
      bVar4 = (TypeInfo__MVAvatarLocal->_1).naturalAligment;
      if (((pMVar3->klass->_1).naturalAligment < bVar4) ||
         ((MVAvatarLocal__Class *)(pMVar3->klass->_1).typeHierarchy[(ulonglong)bVar4 - 1] !=
          TypeInfo__MVAvatarLocal)) {
        FUN_?(pMVar3);
        pcVar5 = (code *)swi(3);
        bVar6 = (*pcVar5)();
        return bVar6;
      }
    }
    if (iRam_? != 0) {
      uVar7 = (uint)((ulonglong)&(this->fields)._localAvatar_5__2 >> 0xc);
      lVar2 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
      do {
        uVar8 = *(ulonglong *)(lVar2 + 0xADDR);
        puVar9 = (ulonglong *)(lVar2 + 0xADDR);
        LOCK();
        bVar10 = uVar8 == *puVar9;
        if (bVar10) {
          *puVar9 = uVar8 | 1L << (uVar7 & 0x3f);
        }
        UNLOCK();
      } while (!bVar10);
    }
    (this->fields)._foundIntersection_5__3 = 1;
  }
  else {
    if (iVar1 != 1) {
      return 0;
    }
    (this->fields).__1__state = -1;
  }
  while ((this->fields)._foundIntersection_5__3 != 0) {
    if (this_00 == (MVDoor *)0x0) goto code_?;
    MVDoor::MVDoor_ToggleDoorColliders(this_00,1,(MethodInfo *)0x0);
    pMVar3 = (this->fields)._localAvatar_5__2;
    if ((((pMVar3 == (MVAvatarLocal *)0x0) ||
         (pUVar11 = (pMVar3->fields).useInteractorHandler, pUVar11 == (UseInteractorHandler *)0x0))
        || (pCVar12 = (pUVar11->fields).triggingColliders, pCVar12 == (ColliderCollection *)0x0)) ||
       (obj = (pCVar12->fields).activeCollider, obj == (Collider *)0x0)) goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Collider>_UnityEngine__Collider_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    auStack_13._0_4_ = 0.0;
    auStack_13._4_4_ = 0.0;
    auStack_13._8_4_ = 0.0;
    auStack_13._12_4_ = 0.0;
    uStack_14._0_4_ = 0.0;
    uStack_14._4_4_ = 0.0;
    pvVar15 = (obj->fields)._._.m_CachedPtr;
    if (pvVar15 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar5 = (code *)swi(3);
      bVar6 = (*pcVar5)();
      return bVar6;
    }
    pcVar5 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
      uVar16 = func_?(&UNK_?);
      FUN_?(uVar16,0);
      pcVar5 = (code *)swi(3);
      bVar6 = (*pcVar5)();
      return bVar6;
    }
    pcRam_? = pcVar5;
    (*pcRam_?)(pvVar15,auStack_13);
    BStack_17.m_Center.x = (float)auStack_13._0_4_;
    BStack_17.m_Center.y = (float)auStack_13._4_4_;
    BStack_17.m_Center.z = (float)auStack_13._8_4_;
    BStack_17.m_Extents.x = (float)auStack_13._12_4_;
    BStack_17.m_Extents.y = (float)uStack_14;
    BStack_17.m_Extents.z = uStack_14._4_4_;
    bVar6 = MVDoor::MVDoor_IntersectsWithDoor(this_00,&BStack_17,(MethodInfo *)0x0);
    (this->fields)._foundIntersection_5__3 = bVar6;
    if (bVar6 != 0) {
      MVDoor::MVDoor_ToggleDoorColliders(this_00,0,(MethodInfo *)0x0);
      (this->fields).__2__current = (Object *)0x0;
      func_?(&(this->fields).__2__current);
      (this->fields).__1__state = 1;
      return 1;
    }
  }
  if (this_00 != (MVDoor *)0x0) {
    bVar10 = iRam_? != 0;
    (this_00->fields).collisionCheckRoutine = (IEnumerator *)0x0;
    if (bVar10) {
      uVar7 = (uint)((ulonglong)&(this_00->fields).collisionCheckRoutine >> 0xc);
      lVar2 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
      do {
        uVar8 = *(ulonglong *)(lVar2 + 0xADDR);
        puVar9 = (ulonglong *)(lVar2 + 0xADDR);
        LOCK();
        bVar10 = uVar8 == *puVar9;
        if (bVar10) {
          *puVar9 = uVar8 | 1L << (uVar7 & 0x3f);
        }
        UNLOCK();
      } while (!bVar10);
    }
    return 0;
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoor+<CollisionCheckCoroutine>d__57::
     MVDoor_CollisionCheckCoroutine_d_57_System_Collections_IEnumerator_Reset
               (MVDoor_CollisionCheckCoroutine_d_57 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&
                              MethodInfo__WorldObjectTypes__MVDoor__MVDoor___CollisionCheckCoroutine_d__57__System_Collections_IEnumerator_Reset__
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

