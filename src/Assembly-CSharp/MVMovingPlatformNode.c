
/* Boolean Delete(MVWorldObjectClientManager, String ByRef) */

bool Assembly-CSharp.dll::MVMovingPlatformNode::MVMovingPlatformNode_Delete
               (MVMovingPlatformNode *this,MVWorldObjectClientManager *WOCM,String **errorText,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVMovingPlatformGroup);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Delete);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_Delete,(MethodInfo *)0x0);
  if (WOCM != (MVWorldObjectClientManager *)0x0) {
    pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                       (WOCM,(this->fields)._._.groupId,(MethodInfo *)0x0);
    if (pMVar1 != (MVWorldObjectClient *)0x0) {
      pMVar2 = pMVar1->klass;
      bVar3 = (TypeInfo__MVMovingPlatformGroup->_1).naturalAligment;
      if ((bVar3 <= (pMVar2->_1).naturalAligment) &&
         ((MVMovingPlatformGroup__Class *)(pMVar2->_1).typeHierarchy[(ulonglong)bVar3 - 1] ==
          TypeInfo__MVMovingPlatformGroup)) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        bVar4 = (*(pMVar2->vtable).Delete.methodPtr)
                          (pMVar1,WOCM,errorText,(pMVar2->vtable).Delete.method);
        return bVar4;
      }
    }
    return 1;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  bVar4 = (*pcVar5)();
  return bVar4;
}


/* Bounds GetLocalBounds(BoundsContext) */

Bounds * Assembly-CSharp.dll::MVMovingPlatformNode::MVMovingPlatformNode_GetLocalBounds
                   (Bounds *__return_storage_ptr__,MVMovingPlatformNode *this,
                   BoundsContext__Enum boundsContext,MethodInfo *method)

{
  obj = (this->fields)._.collider;
  (__return_storage_ptr__->m_Center).x = 0.0;
  (__return_storage_ptr__->m_Center).y = 0.0;
  *(undefined8 *)&(__return_storage_ptr__->m_Center).z = 0;
  (__return_storage_ptr__->m_Extents).y = 0.0;
  (__return_storage_ptr__->m_Extents).z = 0.0;
  if (obj == (Collider *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pBVar2 = (Bounds *)(*pcVar1)();
    return pBVar2;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Collider>_UnityEngine__Collider_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_3 = 0;
  uStack_4 = 0;
  uStack_5 = 0;
  pvVar6 = (obj->fields)._._.m_CachedPtr;
  if (pvVar6 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    pBVar2 = (Bounds *)(*pcVar1)();
    return pBVar2;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar7 = func_?(&UNK_?);
    FUN_?(uVar7,0);
    pcVar1 = (code *)swi(3);
    pBVar2 = (Bounds *)(*pcVar1)();
    return pBVar2;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar6,&uStack_3);
  bVar8 = cRam_? == '\0';
  (__return_storage_ptr__->m_Center).x = (float)uStack_3;
  (__return_storage_ptr__->m_Center).y = uStack_3._4_4_;
  (__return_storage_ptr__->m_Center).z = (float)uStack_4;
  (__return_storage_ptr__->m_Extents).x = uStack_4._4_4_;
  (__return_storage_ptr__->m_Extents).y = (float)(undefined4)uStack_5;
  (__return_storage_ptr__->m_Extents).z = (float)uStack_5._4_4_;
  if (bVar8) {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar10 = (pVVar9->zeroVector).y;
  fVar11 = (pVVar9->zeroVector).z;
  (__return_storage_ptr__->m_Center).x = (pVVar9->zeroVector).x;
  (__return_storage_ptr__->m_Center).y = fVar10;
  (__return_storage_ptr__->m_Center).z = fVar11;
  return __return_storage_ptr__;
}


/* MVMovingPlatformNode(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVMovingPlatformNode::MVMovingPlatformNode__ctor
               (MVMovingPlatformNode *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVWorldObjectClient);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PrefabPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar1 != (PrefabPool *)0x0) {
    prefabObject = (pPVar1->fields).mvMovingPlatformNodePrefab;
    if (*(int *)&(TypeInfo__MVWorldObjectClient->_1).field_0x1c == 0) {
      FUN_?();
    }
    MVWorldObjectClient::MVWorldObjectClient__ctor
              ((MVWorldObjectClient *)this,data,prefabObject,worldObjects,(MethodInfo *)0x0);
    (this->fields)._.interactionFlags = (this->fields)._.interactionFlags & 0xfffffffffffffc7fU | 9;
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

