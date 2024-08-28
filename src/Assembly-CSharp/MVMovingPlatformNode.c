
/* Boolean Delete(MVWorldObjectClientManager, String ByRef) */

bool Assembly-CSharp.dll::MVMovingPlatformNode::MVMovingPlatformNode_Delete
               (MVMovingPlatformNode *this,MVWorldObjectClientManager *WOCM,String **errorText,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__MVMovingPlatformGroup);
    func_?(&StringLiteral_Delete);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_Delete,(MethodInfo *)0x0);
  if (WOCM != (MVWorldObjectClientManager *)0x0) {
    pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (WOCM,(this->fields)._._.groupId,(MethodInfo *)0x0);
    if (pMVar1 != (MVWorldObject *)0x0) {
      pMVar2 = pMVar1->klass;
      bVar3 = (TypeInfo__MVMovingPlatformGroup->_1).naturalAligment;
      if ((bVar3 <= (pMVar2->_1).naturalAligment) &&
         ((MVMovingPlatformGroup__Class *)(pMVar2->_1).typeHierarchy[bVar3 - 1] ==
          TypeInfo__MVMovingPlatformGroup)) {
        bVar4 = (*(code *)pMVar2[2]._0.element_class)(pMVar1,WOCM,errorText);
        return bVar4;
      }
    }
    return 1;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  bVar4 = (*pcVar5)();
  return bVar4;
}


/* Bounds GetLocalBounds(BoundsContext) */

Bounds * Assembly-CSharp.dll::MVMovingPlatformNode::MVMovingPlatformNode_GetLocalBounds
                   (Bounds *__return_storage_ptr__,MVMovingPlatformNode *this,
                   BoundsContext__Enum boundsContext,MethodInfo *method)

{
  this_00 = (this->fields)._.collider;
  (__return_storage_ptr__->m_Center).x = 0.0;
  (__return_storage_ptr__->m_Center).y = 0.0;
  (__return_storage_ptr__->m_Center).z = 0.0;
  (__return_storage_ptr__->m_Extents).x = 0.0;
  (__return_storage_ptr__->m_Extents).y = 0.0;
  (__return_storage_ptr__->m_Extents).z = 0.0;
  if (this_00 != (Collider *)0x0) {
    pBVar1 = UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_get_bounds
                       (&BStack_2,this_00,(MethodInfo *)0x0);
    bVar3 = cRam_? == '\0';
    fVar4 = (pBVar1->m_Center).y;
    fVar5 = (pBVar1->m_Center).z;
    fVar6 = (pBVar1->m_Extents).x;
    (__return_storage_ptr__->m_Center).x = (pBVar1->m_Center).x;
    (__return_storage_ptr__->m_Center).y = fVar4;
    (__return_storage_ptr__->m_Center).z = fVar5;
    (__return_storage_ptr__->m_Extents).x = fVar6;
    fVar4 = (pBVar1->m_Extents).z;
    (__return_storage_ptr__->m_Extents).y = (pBVar1->m_Extents).y;
    (__return_storage_ptr__->m_Extents).z = fVar4;
    if (bVar3) {
      BStack_2.m_Center.y = (float)&TypeInfo__UnityEngine__Vector3;
      BStack_2.m_Center.x = (float)&UNK_?;
      func_?();
      cRam_? = '\x01';
    }
    pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar5 = (pVVar7->zeroVector).y;
    fVar4 = (pVVar7->zeroVector).z;
    (__return_storage_ptr__->m_Center).x = (pVVar7->zeroVector).x;
    (__return_storage_ptr__->m_Center).y = fVar5;
    (__return_storage_ptr__->m_Center).z = fVar4;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar8 = (code *)swi(3);
  pBVar1 = (Bounds *)(*pcVar8)();
  return pBVar1;
}


/* MVMovingPlatformNode(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVMovingPlatformNode::MVMovingPlatformNode__ctor
               (MVMovingPlatformNode *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVWorldObjectClient);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PrefabPool);
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar1 != (PrefabPool *)0x0) {
    prefabObject = (pPVar1->fields).mvMovingPlatformNodePrefab;
    if ((TypeInfo__MVWorldObjectClient->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MVWorldObjectClient);
    }
    MVWorldObjectClient::MVWorldObjectClient__ctor
              ((MVWorldObjectClient *)this,data,prefabObject,worldObjects,(MethodInfo *)0x0);
    piVar2 = &(this->fields)._.interactionFlags;
    *(uint *)piVar2 = (uint)*piVar2 & 0xfffffc7f;
    uVar3 = *(undefined4 *)((int)&(this->fields)._.interactionFlags + 4);
    piVar2 = &(this->fields)._.interactionFlags;
    *(uint *)piVar2 = (uint)*piVar2 | 9;
    *(undefined4 *)((int)&(this->fields)._.interactionFlags + 4) = uVar3;
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

