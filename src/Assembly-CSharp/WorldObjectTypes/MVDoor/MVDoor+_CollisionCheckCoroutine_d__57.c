
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoor+<CollisionCheckCoroutine>d__57::
     MVDoor_CollisionCheckCoroutine_d_57_MoveNext
               (MVDoor_CollisionCheckCoroutine_d_57 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVAvatarLocal);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  this_00 = (this->fields).__4__this;
  if (iVar1 == 0) {
    (this->fields).__1__state = -1;
    this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    this_02 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    if ((this_02 != (MVLocalPlayer *)0x0) &&
       (id = MVPlayer::MVPlayer_get_WoId((MVPlayer *)this_02,(MethodInfo *)0x0),
       this_01 != (MVWorldObjectClientManager *)0x0)) {
      pMVar2 = (MVAvatarLocal *)
                MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          (this_01,id,(MethodInfo *)0x0);
      if (pMVar2 == (MVAvatarLocal *)0x0) {
        (this->fields)._localAvatar_5__2 = (MVAvatarLocal *)0x0;
      }
      else if (((((pMVar2->klass->_1).typeHierarchyDepth <
                  (TypeInfo__MVAvatarLocal->_1).typeHierarchyDepth) ||
                ((MVAvatarLocal__Class *)
                 (pMVar2->klass->_1).typeHierarchy
                 [(TypeInfo__MVAvatarLocal->_1).typeHierarchyDepth - 1] != TypeInfo__MVAvatarLocal))
               || ((this->fields)._localAvatar_5__2 = pMVar2,
                  (pMVar2->klass->_1).typeHierarchyDepth <
                  (TypeInfo__MVAvatarLocal->_1).typeHierarchyDepth)) ||
              ((MVAvatarLocal__Class *)
               (pMVar2->klass->_1).typeHierarchy
               [(TypeInfo__MVAvatarLocal->_1).typeHierarchyDepth - 1] != TypeInfo__MVAvatarLocal))
      goto code_?;
      func_?();
      (this->fields)._foundIntersection_5__3 = 1;
      goto code_?;
    }
  }
  else {
    if (iVar1 != 1) {
      return 0;
    }
    (this->fields).__1__state = -1;
code_?:
    while ((this->fields)._foundIntersection_5__3 != 0) {
      if (this_00 == (MVDoor *)0x0) goto code_?;
      MVDoor::MVDoor_ToggleDoorColliders(this_00,1,(MethodInfo *)0x0);
      pMVar2 = (this->fields)._localAvatar_5__2;
      if (pMVar2 == (MVAvatarLocal *)0x0) goto code_?;
      pBVar3 = MVAvatarLocal::MVAvatarLocal_get_Bounds
                          ((Bounds *)&stack0xffffffe4,pMVar2,(MethodInfo *)0x0);
      uVar4 = (pBVar3->m_Extents).z;
      uVar5 = (pBVar3->m_Center).x;
      uVar6 = (pBVar3->m_Center).y;
      uVar7 = (pBVar3->m_Center).z;
      bound.m_Center.z = (float)uVar7;
      bound.m_Center.y = (float)uVar6;
      bound.m_Center.x = (float)uVar5;
      uVar8 = (pBVar3->m_Extents).x;
      uVar9 = (pBVar3->m_Extents).y;
      bound.m_Extents.y = (float)uVar9;
      bound.m_Extents.x = (float)uVar8;
      bound.m_Extents.z = (float)uVar4;
      bVar10 = MVDoor::MVDoor_IntersectsWithDoor(this_00,bound,(MethodInfo *)0x0);
      (this->fields)._foundIntersection_5__3 = bVar10;
      if (bVar10 != 0) {
        MVDoor::MVDoor_ToggleDoorColliders(this_00,0,(MethodInfo *)0x0);
        (this->fields).__2__current = (Object *)0x0;
        func_?();
        (this->fields).__1__state = 1;
        return 1;
      }
    }
    if (this_00 != (MVDoor *)0x0) {
      (this_00->fields).collisionCheckRoutine = (IEnumerator *)0x0;
      func_?(&(this_00->fields).collisionCheckRoutine,0);
      return 0;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  bVar10 = (*pcVar11)();
  return bVar10;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoor+<CollisionCheckCoroutine>d__57::
     MVDoor_CollisionCheckCoroutine_d_57_System_Collections_IEnumerator_Reset
               (MVDoor_CollisionCheckCoroutine_d_57 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  func_?(this_00);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__WorldObjectTypes__MVDoor__MVDoor___CollisionCheckCoroutine_d__57__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

