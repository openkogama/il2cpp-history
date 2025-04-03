
/* Void Clear() */

void Assembly-CSharp.dll::PhysicsCollisionData::PhysicsCollisionData_Clear
               (PhysicsCollisionData *this,MethodInfo *method)

{
  ppTVar1 = &(this->fields).transform;
  *ppTVar1 = (Transform *)0x0;
  func_?(ppTVar1,&stack0xfffffffc,&UNK_?,ppTVar1,0);
  return;
}


/* Void Set(RaycastHit) */

void Assembly-CSharp.dll::PhysicsCollisionData::PhysicsCollisionData_Set
               (PhysicsCollisionData *this,RaycastHit hit,MethodInfo *method)

{
  pRVar1 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::
           RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
           KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                     ((Regex_CachedCodeEntryKey *)&stack0xfffffff0,
                      (KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                       *)&hit,(MethodInfo *)0x0);
  pSVar2 = pRVar1->_cultureKey;
  pSVar3 = pRVar1->_pattern;
  (this->fields).point.x = (float)pRVar1->_options;
  (this->fields).point.y = (float)pSVar2;
  (this->fields).point.z = (float)pSVar3;
  pCVar4 = UnityEngine.PhysicsModule.dll::UnityEngine::RaycastHit::RaycastHit_get_collider
                     (&hit,(MethodInfo *)0x0);
  if (pCVar4 != (Collider *)0x0) {
    pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)pCVar4,(MethodInfo *)0x0);
    (this->fields).transform = pTVar5;
    func_?();
    (this->fields).isInsideCollider = 0;
    fVar6 = RTG::SphereTreeNode`1[System::Object]::SphereTreeNode_1_System_Object__get_Radius
                      ((SphereTreeNode_1_System_Object_ *)&hit,(MethodInfo *)0x0);
    (this->fields).distance = fVar6;
    pMVar7 = mscorlib.dll::System::Tuple`3[Object,Memory`1[Byte],Object]::
             Tuple_3_Object_Memory_1_Byte_Object__get_Item2
                       ((Memory_1_Byte_ *)&stack0xfffffff0,
                        (Tuple_3_Object_Memory_1_Byte_Object_ *)&hit,(MethodInfo *)0x0);
    iVar8 = pMVar7->_index;
    fVar6 = (float)pMVar7->_length;
    (this->fields).normal.x = (float)pMVar7->_object;
    (this->fields).normal.y = (float)iVar8;
    (this->fields).normal.z = fVar6;
    pCVar4 = UnityEngine.PhysicsModule.dll::UnityEngine::RaycastHit::RaycastHit_get_collider
                       (&hit,(MethodInfo *)0x0);
    (this->fields).collider = pCVar4;
    func_?();
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
  (this->fields).point.x = origin.x;
  (this->fields).point.y = origin.y;
  (this->fields).point.z = origin.z;
  if (collider != (Collider *)0x0) {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)collider,(MethodInfo *)0x0);
    ppTVar2 = &(this->fields).transform;
    *ppTVar2 = pTVar1;
    func_?(ppTVar2,pTVar1);
    (this->fields).isInsideCollider = 1;
    (this->fields).distance = 0.0;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar4 = (pVVar3->zeroVector).y;
    fVar5 = (pVVar3->zeroVector).z;
    (this->fields).normal.x = (pVVar3->zeroVector).x;
    (this->fields).normal.y = fVar4;
    (this->fields).normal.z = fVar5;
    ppCVar6 = &(this->fields).collider;
    *ppCVar6 = collider;
    func_?(ppCVar6,collider);
    return;
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

