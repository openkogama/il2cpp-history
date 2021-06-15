
/* Boolean Delete(MVWorldObjectClientManager, String ByRef) */

bool Assembly-CSharp.dll::MVMovingPlatformNode::MVMovingPlatformNode_Delete
               (MVMovingPlatformNode *this,MVWorldObjectClientManager *WOCM,String **errorText,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
            ((Object *)StringLiteral_Delete,(MethodInfo *)0x0);
  if (WOCM != (MVWorldObjectClientManager *)0x0) {
    pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (WOCM,(this->fields)._._.groupId,(MethodInfo *)0x0);
    if (pMVar1 != (MVWorldObject *)0x0) {
      pMVar2 = pMVar1->klass;
      bVar3 = (TypeInfo__MVMovingPlatformGroup->_1).naturalAligment;
      if (((pMVar2->_1).naturalAligment < bVar3) ||
         ((MVMovingPlatformGroup__Class *)(pMVar2->_1).typeHierarchy[bVar3 - 1] !=
          TypeInfo__MVMovingPlatformGroup)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      pMVar5 = (MVWorldObject *)0x0;
      if (bVar4) {
        pMVar5 = pMVar1;
      }
      if (pMVar5 != (MVWorldObject *)0x0) {
        bVar6 = (*(code *)pMVar2[2]._0.byval_arg.data)(pMVar1,WOCM);
        return bVar6;
      }
    }
    return 1;
  }
  func_?();
  pcVar7 = (code *)swi(3);
  bVar6 = (*pcVar7)();
  return bVar6;
}


/* Bounds GetLocalBounds(BoundsContext) */

Bounds * Assembly-CSharp.dll::MVMovingPlatformNode::MVMovingPlatformNode_GetLocalBounds
                   (Bounds *__return_storage_ptr__,MVMovingPlatformNode *this,
                   BoundsContext__Enum boundsContext,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = PrefabPool::PrefabPool_get_MVNegatePrefab((PrefabPool *)this,(MethodInfo *)0x0);
  if (this_00 != (ObjectPrefab *)0x0) {
    pBVar1 = UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_get_bounds
                       (&BStack_2,(Collider *)this_00,(MethodInfo *)0x0);
    fVar3 = (pBVar1->m_Center).x;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                       (&BStack_2.m_Extents,(MethodInfo *)0x0);
    fVar5 = pVVar4->x;
    uVar6 = pVVar4->y;
    fVar7 = pVVar4->z;
    BStack_2.m_Center.x = 0.0;
    puVar8 = &UNK_?;
    func_?();
    (__return_storage_ptr__->m_Center).x = fVar3;
    (__return_storage_ptr__->m_Center).y = (float)puVar8;
    (__return_storage_ptr__->m_Center).z = (float)&stack0xffffffcc;
    (__return_storage_ptr__->m_Extents).x = fVar5;
    (__return_storage_ptr__->m_Extents).y = (float)uVar6;
    (__return_storage_ptr__->m_Extents).z = fVar7;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar9 = (code *)swi(3);
  pBVar1 = (Bounds *)(*pcVar9)();
  return pBVar1;
}


/* MVMovingPlatformNode(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVMovingPlatformNode::MVMovingPlatformNode__ctor
               (MVMovingPlatformNode *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
    func_?(TypeInfo__PrefabPool);
  }
  this_00 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
  if (this_00 != (PrefabPool *)0x0) {
    prefabObject = MVCubeModelBase::MVCubeModelBase_get_ModelingConstraintBuilder
                             ((MVCubeModelBase *)this_00,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVWorldObjectClient->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVWorldObjectClient->_1).cctor_started == 0)) {
      func_?();
    }
    MVWorldObjectClient::MVWorldObjectClient__ctor
              ((MVWorldObjectClient *)this,data,(GameObject *)prefabObject,worldObjects,
               (MethodInfo *)0x0);
    iVar1 = (this->fields)._.interactionFlags;
    *(undefined4 *)((int)&(this->fields)._.interactionFlags + 4) =
         *(undefined4 *)((int)&(this->fields)._.interactionFlags + 4);
    *(uint *)&(this->fields)._.interactionFlags = (uint)iVar1 & 0xfffffc7f | 9;
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* MVMovingPlatformNode get_Next() */

MVMovingPlatformNode *
Assembly-CSharp.dll::MVMovingPlatformNode::MVMovingPlatformNode_get_Next
          (MVMovingPlatformNode *this,MethodInfo *method)

{
  return (this->fields)._Next_k__BackingField;
}


/* Void set_Next(MVMovingPlatformNode) */

void Assembly-CSharp.dll::MVMovingPlatformNode::MVMovingPlatformNode_set_Next
               (MVMovingPlatformNode *this,MVMovingPlatformNode *value,MethodInfo *method)

{
  (this->fields)._Next_k__BackingField = value;
  return;
}

