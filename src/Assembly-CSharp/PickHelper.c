
/* Void Initialize(UnityAction`2[MVWorldObjectClient,MVWorldObjectClient], String) */

void Assembly-CSharp.dll::PickHelper::PickHelper_Initialize
               (PickHelper *this,
               UnityAction_2_MVWorldObjectClient_MVWorldObjectClient_ *onPickCallback,String *msg,
               MethodInfo *method)

{
  pTVar1 = (this->fields).message;
  if (pTVar1 != (Text *)0x0) {
    (*(code *)(pTVar1->klass->vtable).set_text.method)
              (pTVar1,msg,(pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    (this->fields).pickCallback = onPickCallback;
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Boolean MVObjectIsType(Transform, Type, Int32 ByRef) */

bool Assembly-CSharp.dll::PickHelper::PickHelper_MVObjectIsType
               (PickHelper *this,Transform *t,Type *type,int32_t *woId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (((t == (Transform *)0x0) ||
      (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)t,(MethodInfo *)0x0), this_01 == (GameObject *)0x0)) ||
     (goId = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                       ((Object_1 *)this_01,(MethodInfo *)0x0),
     this_00 == (MVWorldObjectClientManager *)0x0)) {
    func_?(0);
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  this_02 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectByGoId
                      (this_00,goId,(MethodInfo *)0x0);
  if (this_02 != (MVWorldObjectClient *)0x0) {
    pIVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this_02,(MethodInfo *)0x0);
    *woId = (int32_t)pIVar3;
    return 1;
  }
  pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                     (t,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pTVar4,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    *woId = -1;
    return 0;
  }
  pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                     (t,(MethodInfo *)0x0);
  bVar2 = PickHelper_MVObjectIsType((PickHelper *)&UNK_?,pTVar4,type,woId,(MethodInfo *)0x0);
  return bVar2;
}


/* Void Update() */

void Assembly-CSharp.dll::PickHelper::PickHelper_Update(PickHelper *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  puStack_1 = (undefined *)0x0;
  if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVInputWrapper);
  }
  MVInputWrapper::MVInputWrapper_SuppressInGameInput((MethodInfo *)0x0);
  if (((this->fields).pickCallback != (UnityAction_2_MVWorldObjectClient_MVWorldObjectClient_ *)0x0)
     && (bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Input::Input_GetKeyUp
                           (KeyCode__Enum_Mouse0,(MethodInfo *)0x0), bVar2 != 0)) {
    fStack_3 = 1.00893e-43;
    fStack_4 = 0.0;
    func_?(&fStack_4);
    bVar2 = EditModeObjectPicker::EditModeObjectPicker_Pick
                      ((VoxelHit *)&fStack_4,(HashSet_1_System_Int32_ *)0x0,-0x40005,
                       (MethodInfo *)0x0);
    if (bVar2 != 0) {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pMVar5 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar5 != (MVWorldObjectClientManager *)0x0) {
        bVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_IsType
                          (pMVar5,(int32_t)in_stack_6,
                           WorldObjectType__Enum_CubeModelPrototypeTerrain,(MethodInfo *)0x0);
        if (bVar2 != 0) {
          return;
        }
        if (in_stack_6 == (undefined *)0xffffffff) {
          return;
        }
        puStack_1 = in_stack_6;
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        pMVar5 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if ((pMVar5 != (MVWorldObjectClientManager *)0x0) &&
           (this_01 = (PrefabPool *)
                      MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                (pMVar5,0,(MethodInfo *)0x0), this_01 != (PrefabPool *)0x0)) {
          pMVar7 = PrefabPool::PrefabPool_get_MVPointLightPrefab(this_01,(MethodInfo *)0x0);
          bVar2 = PickHelper_MVObjectIsType
                            (this,(Transform *)pMVar7,(Type *)0x0,(int32_t *)&puStack_1,
                             (MethodInfo *)0x0);
          if (bVar2 == 0) {
            arg1 = mscorlib.dll::System::Object::Object_GetType((Object *)this_01,(MethodInfo *)0x0)
            ;
            if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__String->_1).cctor_started == 0)) {
              func_?();
            }
            message = mscorlib.dll::System::String::String_Concat
                                ((Object *)StringLiteral_tried_to_pick_something_else__,
                                 (Object *)arg1,(MethodInfo *)0x0);
            if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                      ((Object *)message,(MethodInfo *)0x0);
            return;
          }
          pMVar7 = PrefabPool::PrefabPool_get_MVPointLightPrefab(this_01,(MethodInfo *)0x0);
          if (pMVar7 != (MVPointLightObject *)0x0) {
            this_02 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                                ((Transform *)pMVar7,(MethodInfo *)0x0);
            this_00 = (Action_2_Object_UnityEngine_ReflectionProbe_ReflectionProbeEvent_ *)
                      (this->fields).pickCallback;
            if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
              func_?();
            }
            pMVar5 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
            if (((this_02 != (Transform *)0x0) &&
                (goId = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                                  ((Object_1 *)this_02,(MethodInfo *)0x0),
                pMVar5 != (MVWorldObjectClientManager *)0x0)) &&
               (arg2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectByGoId
                                 (pMVar5,goId,(MethodInfo *)0x0),
               this_00 != (Action_2_Object_UnityEngine_ReflectionProbe_ReflectionProbeEvent_ *)0x0))
            {
              System.Core.dll::System::Action`2[Object,UnityEngine::
              ReflectionProbe+ReflectionProbeEvent]::
              Action_2_Object_UnityEngine_ReflectionProbe_ReflectionProbeEvent__Invoke
                        (this_00,(Object *)this_01,(ReflectionProbe_ReflectionProbeEvent__Enum)arg2,
                         MethodInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_MVWorldObjectClient>__Invoke_MVWorldObjectClient__MVWorldObjectClient_
                        );
              return;
            }
          }
        }
      }
      func_?();
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  return;
}

