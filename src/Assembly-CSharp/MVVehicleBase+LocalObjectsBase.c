
/* Void Destroy() */

void Assembly-CSharp.dll::MVVehicleBase+LocalObjectsBase::MVVehicleBase_LocalObjectsBase_Destroy
               (MVVehicleBase_LocalObjectsBase *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffbc;
  puVar5 = &stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Component>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Component>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Component>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Component>__GetEnumerator__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pAVar6 = (this->fields).onDestroy;
  if (pAVar6 != (Action *)0x0) {
    (*(pAVar6->fields)._._.invoke_impl)
              ((pAVar6->fields)._._.method_code,(pAVar6->fields)._._.method);
  }
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).localComponents;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    pLVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_8,this_00,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Component>__GetEnumerator__
                       );
    method_00 = (MethodInfo *)pLVar7->_version;
    obj = pLVar7->_current;
    LStack_8._version = 0;
    uStack_1 = 1;
    LStack_8._current = (RegexCharClass_SingleRange)&stack0xffffffc8;
    while( true ) {
      bVar9 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffc8,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Component>__MoveNext__
                        );
      if (bVar9 == 0) break;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)obj,(MethodInfo *)0x0);
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              ((Object *)&stack0xffffffc8,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Component>__Dispose__
               ,method_00);
    *unaff_FS_OFFSET = uStack_3;
    return;
  }
  uVar10 = func_?();
  func_?(uVar10);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void Enter() */

void Assembly-CSharp.dll::MVVehicleBase+LocalObjectsBase::MVVehicleBase_LocalObjectsBase_Enter
               (MVVehicleBase_LocalObjectsBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<VehicleInteractable>__get_Count__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<MVRigidBody>__get_Count__);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<VehicleInteractable>__get_Item_int_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<MVRigidBody>__get_Item_int_);
    func_?(&
                    System__Collections__Generic__List<MVRigidBody>_MethodInfo__MVVehicleBase__LocalObjectsBase__GetLocalComponents<MVRigidBody>__
                   );
    func_?(&
                    System__Collections__Generic__List<VehicleInteractable>_MethodInfo__MVVehicleBase__LocalObjectsBase__GetLocalComponents<VehicleInteractable>__
                   );
    func_?(&StringLiteral_More_than_1_rigidBody__This_is_u);
    func_?(&StringLiteral_Failed_to_get_VehicleInteractabl);
    func_?(&StringLiteral_Failed_to_get_rigid_bodies);
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).onEnter;
  if (pAVar1 != (Action *)0x0) {
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,(pAVar1->fields)._._.method);
  }
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            MVVehicleBase_LocalObjectsBase_GetLocalComponents
                      (this,
                       System__Collections__Generic__List<MVRigidBody>_MethodInfo__MVVehicleBase__LocalObjectsBase__GetLocalComponents<MVRigidBody>__
                      );
  this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            MVVehicleBase_LocalObjectsBase_GetLocalComponents
                      (this,
                       System__Collections__Generic__List<VehicleInteractable>_MethodInfo__MVVehicleBase__LocalObjectsBase__GetLocalComponents<VehicleInteractable>__
                      );
  if (this_01 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    if ((this_01->fields)._size == 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)StringLiteral_Failed_to_get_VehicleInteractabl,(MethodInfo *)0x0);
    }
    if ((this_01->fields)._size == 1) {
      RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (this_01,0,
                         MethodInfo__System__Collections__Generic__List<VehicleInteractable>__get_Item_int_
                        );
      if (RVar2 == (RegexCharClass_SingleRange)0x0) goto code_?;
      (**(code **)(*(int *)RVar2 + 0x108))();
    }
    if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      if ((this_00->fields)._size == 0) {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                  ((Object *)StringLiteral_Failed_to_get_rigid_bodies,(MethodInfo *)0x0);
      }
      iVar3 = (this_00->fields)._size;
      if (1 < iVar3) {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                  ((Object *)StringLiteral_More_than_1_rigidBody__This_is_u,(MethodInfo *)0x0);
        iVar3 = (this_00->fields)._size;
      }
      if (iVar3 == 1) {
        RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (this_00,0,
                           MethodInfo__System__Collections__Generic__List<MVRigidBody>__get_Item_int_
                          );
        if (RVar2 == (RegexCharClass_SingleRange)0x0) goto code_?;
        *(undefined1 *)((int)RVar2 + 0x24) = 1;
      }
      return;
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* List`1[System.Object] GetLocalComponents[Object]() */

List_1_System_Object_ *
Assembly-CSharp.dll::MVVehicleBase+LocalObjectsBase::
MVVehicleBase_LocalObjectsBase_GetLocalComponents
          (MVVehicleBase_LocalObjectsBase *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if ((method->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Component>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Component>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Component>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Component>__GetEnumerator__
                   );
    if ((method->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
      func_?(method);
    }
  }
  pIVar4 = ((method->field7_0x1c).rgctx_data)->klass;
  if (((uint)pIVar4->vtable[0].methodPtr & 0x100) == 0) {
    pIVar4 = (Il2CppClass *)func_?(pIVar4);
  }
  pLVar5 = (List_1_System_Object_ *)func_?(pIVar4);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar5,
             (method->field7_0x1c).rgctx_data[1].method);
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).localComponents;
  if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
code_?:
    func_?();
    func_?();
    pcVar6 = (code *)swi(3);
    pLVar5 = (List_1_System_Object_ *)(*pcVar6)();
    return pLVar5;
  }
  pLVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
           RegexCharClass+SingleRange]::
           List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                     ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                       *)&stack0xffffffcc,this_00,
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Component>__GetEnumerator__
                     );
  uStack_1 = 1;
  RVar8 = pLVar7->_current;
  do {
    do {
      RVar9 = RVar8;
      bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffbc,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Component>__MoveNext__
                        );
      if (bVar10 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  ((Object *)&stack0xffffffbc,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Component>__Dispose__
                   ,in_stack_11);
        *unaff_FS_OFFSET = uStack_3;
        return pLVar5;
      }
      RVar8 = (RegexCharClass_SingleRange)(method->field7_0x1c).rgctx_data[2].klass;
      if ((*(byte *)((int)RVar8 + 0xbd) & 1) == 0) {
        RVar8 = (RegexCharClass_SingleRange)func_?();
      }
      iVar12 = func_?();
    } while (iVar12 == 0);
    if (pLVar5 == (List_1_System_Object_ *)0x0) goto code_?;
    method_00 = (method->field7_0x1c).rgctx_data[3].method;
    func_?();
    if (RVar9 == (RegexCharClass_SingleRange)0x0) {
      item = (Object *)0x0;
    }
    else {
      item = (Object *)func_?();
      if (item == (Object *)0x0) {
        func_?();
        goto code_?;
      }
    }
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              (pLVar5,item,method_00);
  } while( true );
}


/* Void Leave() */

void Assembly-CSharp.dll::MVVehicleBase+LocalObjectsBase::MVVehicleBase_LocalObjectsBase_Leave
               (MVVehicleBase_LocalObjectsBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<VehicleInteractable>__get_Count__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<MVRigidBody>__get_Count__);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<VehicleInteractable>__get_Item_int_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<MVRigidBody>__get_Item_int_);
    func_?(&
                    System__Collections__Generic__List<MVRigidBody>_MethodInfo__MVVehicleBase__LocalObjectsBase__GetLocalComponents<MVRigidBody>__
                   );
    func_?(&
                    System__Collections__Generic__List<VehicleInteractable>_MethodInfo__MVVehicleBase__LocalObjectsBase__GetLocalComponents<VehicleInteractable>__
                   );
    func_?(&StringLiteral_More_than_1_rigidBody__This_is_u);
    func_?(&StringLiteral_Failed_to_get_VehicleInteractabl);
    func_?(&StringLiteral_Failed_to_get_rigid_bodies);
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).onLeave;
  if (pAVar1 != (Action *)0x0) {
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,(pAVar1->fields)._._.method);
  }
  pLVar2 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
           MVVehicleBase_LocalObjectsBase_GetLocalComponents
                     (this,
                      System__Collections__Generic__List<VehicleInteractable>_MethodInfo__MVVehicleBase__LocalObjectsBase__GetLocalComponents<VehicleInteractable>__
                     );
  if (pLVar2 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    if ((pLVar2->fields)._size == 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)StringLiteral_Failed_to_get_VehicleInteractabl,(MethodInfo *)0x0);
    }
    if ((pLVar2->fields)._size == 1) {
      RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (pLVar2,0,
                         MethodInfo__System__Collections__Generic__List<VehicleInteractable>__get_Item_int_
                        );
      if (RVar3 == (RegexCharClass_SingleRange)0x0) goto code_?;
      (**(code **)(*(int *)RVar3 + 0xf8))(RVar3,0xe,0xffffffff);
    }
    pLVar2 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
             MVVehicleBase_LocalObjectsBase_GetLocalComponents
                       (this,
                        System__Collections__Generic__List<MVRigidBody>_MethodInfo__MVVehicleBase__LocalObjectsBase__GetLocalComponents<MVRigidBody>__
                       );
    if (pLVar2 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      if ((pLVar2->fields)._size == 0) {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                  ((Object *)StringLiteral_Failed_to_get_rigid_bodies,(MethodInfo *)0x0);
      }
      if (1 < (pLVar2->fields)._size) {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                  ((Object *)StringLiteral_More_than_1_rigidBody__This_is_u,(MethodInfo *)0x0);
      }
      if (0 < (pLVar2->fields)._size) {
        RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (pLVar2,0,
                           MethodInfo__System__Collections__Generic__List<MVRigidBody>__get_Item_int_
                          );
        if (RVar3 == (RegexCharClass_SingleRange)0x0) goto code_?;
        *(undefined1 *)((int)RVar3 + 0x24) = 0;
      }
      return;
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnHealthChange(Object) */

void Assembly-CSharp.dll::MVVehicleBase+LocalObjectsBase::
     MVVehicleBase_LocalObjectsBase_OnHealthChange
               (MVVehicleBase_LocalObjectsBase *this,Object *v,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__MVWorldObjectClient__CallBackDelegate);
    func_?(&TypeInfo__System__Single);
    func_?(&
                    MethodInfo__MVVehicleBase_LocalObjectsBase____c__DisplayClass15_0___OnHealthChange_g__DetachLocalAvatar_0_MVWorldObjectClient_
                   );
    func_?(&TypeInfo__MVVehicleBase_LocalObjectsBase____c__DisplayClass15_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__MVVehicleBase_LocalObjectsBase____c__DisplayClass15_0;
  pOVar1 = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (pOVar1,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  pMVar2 = this;
  this = (MVVehicleBase_LocalObjectsBase *)
         (*(code *)(this->klass->vtable).__unknown_1.method)
                   (this,(this->klass->vtable).Destroy.methodPtr);
  if ((this != (MVVehicleBase_LocalObjectsBase *)0x0) && (v != (Object *)0x0)) {
    if ((v->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
      puVar3 = (undefined4 *)func_?(v);
      uVar4 = (*(code *)this->klass[2].vtable.Enter.method)
                        (this,*puVar3,this->klass[2].vtable.Leave.methodPtr);
      v = (Object *)CONCAT22(uVar4,v._0_2_);
      if ((char)uVar4 == '\0') {
        return;
      }
      if (pOVar1 != (Object *)0x0) {
        pOVar1[1].klass = (Object__Class *)0x0;
        func_?(pOVar1 + 1,0);
        piVar5 = (int *)(*(code *)(pMVar2->klass->vtable).__unknown_1.method)
                                  (pMVar2,(pMVar2->klass->vtable).Destroy.methodPtr);
        this = (MVVehicleBase_LocalObjectsBase *)
               func_?(TypeInfo__MVWorldObjectClient__CallBackDelegate);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
        UnityAction_1_System_Object___ctor
                  ((UnityAction_1_System_Object_ *)this,pOVar1,
                   MethodInfo__MVVehicleBase_LocalObjectsBase____c__DisplayClass15_0___OnHealthChange_g__DetachLocalAvatar_0_MVWorldObjectClient_
                   ,(MethodInfo *)0x0);
        if (piVar5 != (int *)0x0) {
          (**(code **)(*piVar5 + 0x220))(piVar5,this,*(undefined4 *)(*piVar5 + 0x224));
          if ((MVAvatarLocal *)pOVar1[1].klass != (MVAvatarLocal *)0x0) {
            MVAvatarLocal::MVAvatarLocal_LeaveVehicle
                      ((MVAvatarLocal *)pOVar1[1].klass,0,(MethodInfo *)0x0);
          }
          if (v._3_1_ == '\0') {
            (*(code *)(pMVar2->klass->vtable).Leave.method)
                      (pMVar2,(pMVar2->klass->vtable).__unknown_2.methodPtr);
          }
          else {
            pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if (pMVar6 == (MVNetworkGame *)0x0) goto code_?;
            this_00 = (pMVar6->fields)._PlayerController_k__BackingField;
            woID = (*(code *)(pMVar2->klass->vtable).__unknown.method)
                             (pMVar2,(pMVar2->klass->vtable).__unknown_1.methodPtr);
            if (this_00 == (MVLocalObjectController *)0x0) goto code_?;
            MVLocalObjectController::
            MVLocalObjectController_OverrideRemoveTimeForDismountedWorldObject
                      (this_00,woID,(pMVar2->fields).timeBeforeUnregisterAfterDeath,
                       (MethodInfo *)0x0);
          }
          this = (MVVehicleBase_LocalObjectsBase *)(pMVar2->klass->vtable).Destroy.methodPtr;
          iVar7 = (*(code *)(pMVar2->klass->vtable).__unknown_1.method)();
          if (iVar7 != 0) {
            this_01 = *(MVRuntimeDataVariable **)(iVar7 + 0xf8);
            this = (MVVehicleBase_LocalObjectsBase *)CONCAT13((char)((uint)v >> 0x18),this._0_3_);
            pOVar1 = (Object *)func_?(TypeInfo__System__Boolean,(int)&this + 3);
            if (this_01 != (MVRuntimeDataVariable *)0x0) {
              MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value
                        (this_01,pOVar1,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
    else {
      func_?(v,TypeInfo__System__Single);
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* MVVehicleBase+LocalObjectsBase() */

void Assembly-CSharp.dll::MVVehicleBase+LocalObjectsBase::MVVehicleBase_LocalObjectsBase__ctor
               (MVVehicleBase_LocalObjectsBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Component>__List__)
    ;
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Component>);
    cRam_? = '\x01';
  }
  (this->fields).timeBeforeUnregisterAfterDeath = 3.0;
  this_00 = (List_1_UnityEngine_Component_ *)
            func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Component>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Component>__List__);
  method_00 = (MethodInfo *)&(this->fields).localComponents;
  *(List_1_UnityEngine_Component_ **)method_00 = this_00;
  func_?(method_00,this_00);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}

