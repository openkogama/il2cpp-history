
/* Void Initialize(UnityAction`2[MVWorldObjectClient,MVWorldObjectClient], String) */

void Assembly-CSharp.dll::PickHelper::PickHelper_Initialize
               (PickHelper *this,
               UnityAction_2_MVWorldObjectClient_MVWorldObjectClient_ *onPickCallback,String *msg,
               MethodInfo *method)

{
  pTVar1 = (this->fields).message;
  if (pTVar1 == (Text *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  (*(pTVar1->klass->vtable).set_text.methodPtr)(pTVar1,msg,(pTVar1->klass->vtable).set_text.method);
  bVar3 = iRam_? != 0;
  (this->fields).pickCallback = onPickCallback;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(this->fields).pickCallback >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  return;
}


/* Boolean MVObjectIsType(Transform, Type, Int32 ByRef) */

bool Assembly-CSharp.dll::PickHelper::PickHelper_MVObjectIsType
               (PickHelper *this,Transform *t,Type *type,int32_t *woId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (((t == (Transform *)0x0) ||
      (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)t,(MethodInfo *)0x0), this_00 == (GameObject *)0x0)) ||
     (goId = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                       ((Object_1 *)this_00,(MethodInfo *)0x0),
     pMVar1 == (MVWorldObjectClientManager *)0x0)) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  pMVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectByGoId
                     (pMVar1,goId,(MethodInfo *)0x0);
  if (pMVar4 == (MVWorldObjectClient *)0x0) {
code_?:
    pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                       (t,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (pTVar5 != (Transform *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if ((pTVar5->fields)._._.m_CachedPtr != (void *)0x0) {
        pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                           (t,(MethodInfo *)0x0);
        bVar3 = PickHelper_MVObjectIsType(this,pTVar5,type,woId,(MethodInfo *)0x0);
        return bVar3;
      }
    }
    *woId = -1;
code_?:
    bVar3 = 0;
  }
  else {
    *woId = (pMVar4->fields)._.id;
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    if (type != (Type *)0x0) {
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar1 == (MVWorldObjectClientManager *)0x0) goto code_?;
      bVar3 = MVWorldObjectClientManager::MVWorldObjectClientManager_IsType
                        (pMVar1,*woId,WorldObjectType__Enum_CubeModelPrototypeTerrain,
                         (MethodInfo *)0x0);
      if (bVar3 != 0) goto code_?;
      uVar6 = FUN_?(&(pMVar4->klass->_0).byval_arg);
      cVar7 = (*(type->klass->vtable).IsAssignableFrom.methodPtr)
                        (type,uVar6,(type->klass->vtable).IsAssignableFrom.method);
      if (cVar7 == '\0') goto code_?;
    }
    bVar3 = 1;
  }
  return bVar3;
}


/* Void Update() */

void Assembly-CSharp.dll::PickHelper::PickHelper_Update(PickHelper *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_tried_to_pick_something_else__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  MVInputWrapper::MVInputWrapper_SuppressInGameInput((MethodInfo *)0x0);
  if ((this->fields).pickCallback != (UnityAction_2_MVWorldObjectClient_MVWorldObjectClient_ *)0x0)
  {
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    cVar3 = (*pcRam_?)(0x143);
    if (cVar3 != '\0') {
      aVStack_4[0].interactionFlags = 0;
      aVStack_4[0].point.x = 0.0;
      aVStack_4[0].point.y = 0.0;
      aVStack_4[0].point.z = 0.0;
      aVStack_4[0].normal.x = 0.0;
      aVStack_4[0].normal.y = 0.0;
      aVStack_4[0].normal.z = 0.0;
      aVStack_4[0].cubePos.x = 0;
      aVStack_4[0].cubePos.y = 0;
      aVStack_4[0].cubePos.z = 0;
      aVStack_4[0]._30_2_ = 0;
      aVStack_4[0].face = 0;
      aVStack_4[0].isCubeHit = 0;
      aVStack_4[0]._37_3_ = 0;
      aVStack_4[0].woId = 0;
      aVStack_4[0]._44_4_ = 0;
      aVStack_4[0].cube = (Cube *)0x0;
      aVStack_4[0].distance = 0.0;
      aVStack_4[0]._60_4_ = 0;
      aVStack_4[0].collider = (Collider *)0x0;
      aVStack_4[0].transform = (Transform *)0x0;
      bVar5 = EditModeObjectPicker::EditModeObjectPicker_Pick
                        (aVStack_4,(HashSet_1_System_Int32_ *)0x0,-0x40005,(MethodInfo *)0x0);
      if (bVar5 != 0) {
        pMVar6 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (pMVar6 != (MVWorldObjectClientManager *)0x0) {
          bVar5 = MVWorldObjectClientManager::MVWorldObjectClientManager_IsType
                            (pMVar6,aVStack_4[0].woId,
                             WorldObjectType__Enum_CubeModelPrototypeTerrain,(MethodInfo *)0x0);
          if (bVar5 != 0) {
            return;
          }
          if (aVStack_4[0].woId == -1) {
            return;
          }
          aiStackX_8[0] = aVStack_4[0].woId;
          pMVar6 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          if (pMVar6 != (MVWorldObjectClientManager *)0x0) {
            pMVar7 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                               (pMVar6,aVStack_4[0].woId,(MethodInfo *)0x0);
            if (pMVar7 != (MVWorldObjectClient *)0x0) {
              pSVar8 = (String *)0x0;
              bVar5 = PickHelper_MVObjectIsType
                                (this,(pMVar7->fields).transform,(Type *)0x0,aiStackX_8,
                                 (MethodInfo *)0x0);
              if (bVar5 == 0) {
                plVar9 = (longlong *)FUN_?(&(pMVar7->klass->_0).byval_arg);
                str0 = StringLiteral_tried_to_pick_something_else__;
                if (plVar9 != (longlong *)0x0) {
                  pSVar8 = (String *)
                           (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
                }
                pSVar8 = mscorlib.dll::System::String::String_Concat_4
                                   (str0,pSVar8,(MethodInfo *)0x0);
                if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                  FUN_?();
                }
                UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                          ((Object *)pSVar8,(MethodInfo *)0x0);
                return;
              }
              pTVar10 = (pMVar7->fields).transform;
              if (pTVar10 != (Transform *)0x0) {
                pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                                   (pTVar10,(MethodInfo *)0x0);
                pUVar11 = (this->fields).pickCallback;
                pMVar6 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
                if (((pTVar10 != (Transform *)0x0) &&
                    (goId = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                                      ((Object_1 *)pTVar10,(MethodInfo *)0x0),
                    pMVar6 != (MVWorldObjectClientManager *)0x0)) &&
                   (pMVar12 = MVWorldObjectClientManager::
                              MVWorldObjectClientManager_GetWorldObjectByGoId
                                        (pMVar6,goId,(MethodInfo *)0x0),
                   pUVar11 != (UnityAction_2_MVWorldObjectClient_MVWorldObjectClient_ *)0x0)) {
                  (*(pUVar11->fields)._._.invoke_impl)
                            ((pUVar11->fields)._._.method_code,pMVar7,pMVar12,
                             (pUVar11->fields)._._.method);
                  return;
                }
              }
            }
          }
        }
        FUN_?();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  return;
}

