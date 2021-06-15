
/* Void Clear() */

void Assembly-CSharp.dll::PhysicsCollisionData::PhysicsCollisionData_Clear
               (PhysicsCollisionData *this,MethodInfo *method)

{
  (this->fields).transform = (Transform *)0x0;
  (this->fields).collider = (Collider *)0x0;
  return;
}


/* Void Set(RaycastHit) */

void Assembly-CSharp.dll::PhysicsCollisionData::PhysicsCollisionData_Set
               (PhysicsCollisionData *this,RaycastHit hit,MethodInfo *method)

{
  puVar1 = (undefined8 *)func_?(&VStack_2,&hit,0);
  uVar3 = *puVar1;
  fVar4 = *(float *)(puVar1 + 1);
  (this->fields).point.x = (float)(int)uVar3;
  (this->fields).point.y = (float)(int)((ulonglong)uVar3 >> 0x20);
  (this->fields).point.z = fVar4;
  this_00 = (Component_1 *)func_?(&hit,0);
  if (this_00 != (Component_1 *)0x0) {
    pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       (this_00,(MethodInfo *)0x0);
    (this->fields).transform = pTVar5;
    (this->fields).isInsideCollider = 0;
    fVar4 = System.Core.dll::System::Linq::Enumerable+<CreateSelectIterator>c__Iterator10`2[System::
            Object,System::Single]::
            Enumerable_CreateSelectIterator_c_Iterator10_2_System_Object_System_Single__System_Collections_Generic_IEnumerator_TResult__get_Current
                      ((Enumerable_CreateSelectIterator_c_Iterator10_2_System_Object_System_Single_
                        *)&hit,(MethodInfo *)0x0);
    (this->fields).distance = fVar4;
    pVVar6 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                       (&VStack_2,(InputToPlayerMovementAndroid *)&hit,(MethodInfo *)0x0);
    fVar7 = pVVar6->y;
    fVar4 = pVVar6->z;
    (this->fields).normal.x = pVVar6->x;
    (this->fields).normal.y = fVar7;
    (this->fields).normal.z = fVar4;
    pCVar8 = (Collider *)func_?(&hit,0);
    (this->fields).collider = pCVar8;
    return;
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void Set(Collider, Vector3) */

void Assembly-CSharp.dll::PhysicsCollisionData::PhysicsCollisionData_Set_1
               (PhysicsCollisionData *this,Collider *collider,Vector3 origin,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).point.x = origin.x;
  (this->fields).point.y = origin.y;
  (this->fields).point.z = origin.z;
  if (collider != (Collider *)0x0) {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)collider,(MethodInfo *)0x0);
    (this->fields).transform = pTVar1;
    (this->fields).isInsideCollider = 1;
    (this->fields).distance = 0.0;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector3);
    }
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                       (&origin,(MethodInfo *)0x0);
    fVar3 = pVVar2->x;
    fVar4 = pVVar2->y;
    fVar5 = pVVar2->z;
    (this->fields).collider = collider;
    (this->fields).normal.x = fVar3;
    (this->fields).normal.y = fVar4;
    (this->fields).normal.z = fVar5;
    return;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

