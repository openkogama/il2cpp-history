
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
    func_?(&(this->fields).pickCallback,onPickCallback);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Boolean MVObjectIsType(Transform, Type, Int32 ByRef) */

bool Assembly-CSharp.dll::PickHelper::PickHelper_MVObjectIsType
               (PickHelper *this,Transform *t,Type *type,int32_t *woId,MethodInfo *method)

{
  pTVar1 = t;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (((t != (Transform *)0x0) &&
      (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)t,(MethodInfo *)0x0), this_00 != (GameObject *)0x0)) &&
     (goId = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                       ((Object_1 *)this_00,(MethodInfo *)0x0),
     pMVar2 != (MVWorldObjectClientManager *)0x0)) {
    t = (Transform *)
        MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectByGoId
                  (pMVar2,goId,(MethodInfo *)0x0);
    if ((MVWorldObjectClient *)t == (MVWorldObjectClient *)0x0) {
code_?:
      x = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                    (pTVar1,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar3 == 0) {
        *woId = -1;
        return 0;
      }
      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                         (pTVar1,(MethodInfo *)0x0);
      bVar3 = PickHelper_MVObjectIsType
                        ((PickHelper *)&UNK_?,pTVar1,type,woId,(MethodInfo *)0x0);
      return bVar3;
    }
    *woId = (((MVWorldObjectClient *)t)->fields)._.id;
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      t = (Transform *)&UNK_?;
      func_?();
    }
    bVar3 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
            UnsafeUtility_EnumEquals((Int32Enum__Enum)type,0,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      return 1;
    }
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar2 != (MVWorldObjectClientManager *)0x0) {
      bVar3 = MVWorldObjectClientManager::MVWorldObjectClientManager_IsType
                        (pMVar2,*woId,WorldObjectType__Enum_CubeModelPrototypeTerrain,
                         (MethodInfo *)0x0);
      if (bVar3 != 0) {
        return 0;
      }
      pTVar4 = mscorlib.dll::System::Object::Object_GetType((Object *)t,(MethodInfo *)0x0);
      if (type != (Type *)0x0) {
        cVar5 = (*(code *)(type->klass->vtable).IsAssignableFrom.method)
                          (type,pTVar4,(type->klass->vtable).GetType.methodPtr);
        if (cVar5 != '\0') {
          return 1;
        }
        goto code_?;
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  bVar3 = (*pcVar6)();
  return bVar3;
}


/* Void Update() */

void Assembly-CSharp.dll::PickHelper::PickHelper_Update(PickHelper *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__MVInputWrapper);
    func_?(&StringLiteral_tried_to_pick_something_else__);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVInputWrapper);
  }
  MVInputWrapper::MVInputWrapper_SuppressInGameInput((MethodInfo *)0x0);
  if (((this->fields).pickCallback != (UnityAction_2_MVWorldObjectClient_MVWorldObjectClient_ *)0x0)
     && (bVar1 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_GetKeyUp
                           (KeyCode__Enum_Mouse0,(MethodInfo *)0x0), bVar1 != 0)) {
    fStack_2 = 1.00893e-43;
    fStack_3 = 0.0;
    func_?(&fStack_3);
    bVar1 = EditModeObjectPicker::EditModeObjectPicker_Pick
                      ((VoxelHit *)&fStack_3,(HashSet_1_System_Int32_ *)0x0,-0x40005,
                       (MethodInfo *)0x0);
    if (bVar1 != 0) {
      pMVar4 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar4 != (MVWorldObjectClientManager *)0x0) {
        bVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_IsType
                          (pMVar4,in_stack_5,WorldObjectType__Enum_CubeModelPrototypeTerrain,
                           (MethodInfo *)0x0);
        if (bVar1 != 0) {
          return;
        }
        if (in_stack_5 == -1) {
          return;
        }
        pMVar4 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if ((pMVar4 != (MVWorldObjectClientManager *)0x0) &&
           (this_00 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                (pMVar4,0,(MethodInfo *)0x0), this_00 != (MVWorldObject *)0x0)) {
          bVar1 = PickHelper_MVObjectIsType
                            (this,(Transform *)this_00[1].fields.ownerActorNr,(Type *)0x0,
                             (int32_t *)&stack0xfffffff8,(MethodInfo *)0x0);
          if (bVar1 == 0) {
            pTVar6 = mscorlib.dll::System::Object::Object_GetType
                               ((Object *)this_00,(MethodInfo *)0x0);
            pSVar7 = StringLiteral_tried_to_pick_something_else__;
            if (pTVar6 == (Type *)0x0) {
              str1 = (String *)0x0;
            }
            else {
              str1 = (String *)func_?();
            }
            pSVar7 = mscorlib.dll::System::String::String_Concat_3(pSVar7,str1,(MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                      ((Object *)pSVar7,(MethodInfo *)0x0);
            return;
          }
          pTVar8 = (Transform *)this_00[1].fields.ownerActorNr;
          if (pTVar8 != (Transform *)0x0) {
            pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                               (pTVar8,(MethodInfo *)0x0);
            pUVar9 = (this->fields).pickCallback;
            pMVar4 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
            if (((pTVar8 != (Transform *)0x0) &&
                (goId = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                                  ((Object_1 *)pTVar8,(MethodInfo *)0x0),
                pMVar4 != (MVWorldObjectClientManager *)0x0)) &&
               (pMStack10 =
                     MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectByGoId
                               (pMVar4,goId,(MethodInfo *)0x0),
               pUVar9 != (UnityAction_2_MVWorldObjectClient_MVWorldObjectClient_ *)0x0)) {
              puStack11 = (pUVar9->fields)._._.method;
              pMStack12 = this_00;
              (*(pUVar9->fields)._._.invoke_impl)();
              return;
            }
          }
        }
      }
      func_?();
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  return;
}

