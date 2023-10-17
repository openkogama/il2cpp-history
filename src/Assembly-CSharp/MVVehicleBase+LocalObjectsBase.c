
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
  if ((this->fields).onDestroy != (Action *)0x0) {
    pAVar6 = (this->fields).onDestroy;
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
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
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
  if ((this->fields).onEnter != (Action *)0x0) {
    pAVar1 = (this->fields).onEnter;
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
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
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
      (**(code **)(*(int *)RVar2 + 0x104))();
    }
    if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      if ((this_00->fields)._size == 0) {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                  ((Object *)StringLiteral_Failed_to_get_rigid_bodies,(MethodInfo *)0x0);
      }
      iVar3 = (this_00->fields)._size;
      if (1 < iVar3) {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
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
        *(undefined1 *)((int)RVar2 + 0x20) = 1;
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
  puStack_4 = &stack0xffffffa8;
  puVar5 = &stack0xffffffa8;
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
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pvVar6 = ((method->field7_0x1c).rgctx_data)->rgctxDataDummy;
  if ((*(byte *)((int)pvVar6 + 0xba) & 1) == 0) {
    pvVar6 = (void *)func_?(pvVar6);
  }
  pLVar7 = (List_1_System_Object_ *)func_?(pvVar6);
  pLStack_8 = pLVar7;
  if (pLVar7 != (List_1_System_Object_ *)0x0) {
    (*((method->field7_0x1c).rgctx_data[1].method)->virtualMethodPointer)
              (pLVar7,(method->field7_0x1c).rgctx_data[1].rgctxDataDummy);
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this->fields).localComponents;
    pLStack_9 = pLVar7;
    if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      pLVar10 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                         (&LStack_11,this_00,
                          MethodInfo__System__Collections__Generic__List<UnityEngine::Component>__GetEnumerator__
                         );
      method_00 = (MethodInfo *)pLVar10->_version;
      RVar12 = pLVar10->_current;
      LStack_11._version = 0;
      uStack_1 = 1;
      LStack_11._current = (RegexCharClass_SingleRange)&stack0xffffffb4;
      while( true ) {
        while( true ) {
          do {
            bVar13 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                    ::List_1_T_Enumerator_System_Object__MoveNext
                              ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffb4,
                               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Component>__MoveNext__
                              );
            if (bVar13 == 0) {
              uStack_1 = 0xffffffff;
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                        ((Object *)&stack0xffffffb4,
                         (ExceptionArgument__Enum)
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Component>__Dispose__
                         ,method_00);
              *unaff_FS_OFFSET = uStack_3;
              return pLVar7;
            }
            if ((*(byte *)((int)(method->field7_0x1c).rgctx_data[2].rgctxDataDummy + 0xba) & 1) == 0
               ) {
              func_?();
            }
            iVar14 = func_?();
            pLVar7 = pLStack_8;
          } while (iVar14 == 0);
          pIStack_15 = ((method->field7_0x1c).rgctx_data[3].method)->virtualMethodPointer;
          IStack_16 = (method->field7_0x1c).rgctx_data[3];
          uStack_17 = func_?();
          pLVar7 = pLStack_8;
          if (RVar12 != (RegexCharClass_SingleRange)0x0) break;
          (*pIStack_15)();
        }
        iVar14 = func_?();
        pLVar7 = pLStack_8;
        if (iVar14 == 0) break;
        (*pIStack_15)();
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  func_?();
  pcVar18 = (code *)swi(3);
  pLVar7 = (List_1_System_Object_ *)(*pcVar18)();
  return pLVar7;
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
  if ((this->fields).onLeave != (Action *)0x0) {
    pAVar1 = (this->fields).onLeave;
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
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
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
      (**(code **)(*(int *)RVar3 + 0xf4))(RVar3,0xe,0xffffffff);
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
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                  ((Object *)StringLiteral_Failed_to_get_rigid_bodies,(MethodInfo *)0x0);
      }
      if (1 < (pLVar2->fields)._size) {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
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
        *(undefined1 *)((int)RVar3 + 0x20) = 0;
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
  pOVar1 = (Object *)
           func_?(TypeInfo__MVVehicleBase_LocalObjectsBase____c__DisplayClass15_0);
  if (pOVar1 != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (pOVar1,ExceptionArgument__Enum_obj,unaff_EDI);
    piVar2 = (int *)(*(this->klass->vtable).__unknown_1.methodPtr)
                              (this,(this->klass->vtable).__unknown_1.method);
    if ((piVar2 != (int *)0x0) && (v != (Object *)0x0)) {
      if ((v->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
        puVar3 = (undefined4 *)func_?(v);
        uVar4 = (**(code **)(*piVar2 + 0x39c))(piVar2,*puVar3,*(undefined4 *)(*piVar2 + 0x3a0));
        if ((char)uVar4 == '\0') {
          return;
        }
        pOVar1[1].klass = (Object__Class *)0x0;
        func_?(pOVar1 + 1,0);
        piVar2 = (int *)(*(this->klass->vtable).__unknown_1.methodPtr)
                                  (this,(this->klass->vtable).__unknown_1.method);
        this_02 = (UnityAction_1_System_Object_ *)
                  func_?(TypeInfo__MVWorldObjectClient__CallBackDelegate);
        if ((this_02 != (UnityAction_1_System_Object_ *)0x0) &&
           (UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
            UnityAction_1_System_Object___ctor
                      (this_02,pOVar1,
                       MethodInfo__MVVehicleBase_LocalObjectsBase____c__DisplayClass15_0___OnHealthChange_g__DetachLocalAvatar_0_MVWorldObjectClient_
                       ,(MethodInfo *)0x0), piVar2 != (int *)0x0)) {
          (**(code **)(*piVar2 + 0x224))(piVar2,this_02,*(undefined4 *)(*piVar2 + 0x228));
          if ((MVAvatarLocal *)pOVar1[1].klass != (MVAvatarLocal *)0x0) {
            MVAvatarLocal::MVAvatarLocal_LeaveVehicle
                      ((MVAvatarLocal *)pOVar1[1].klass,0,(MethodInfo *)0x0);
          }
          cStack_5 = (char)((ushort)uVar4 >> 8);
          if (cStack_5 == '\0') {
            (*(this->klass->vtable).Leave.methodPtr)(this,(this->klass->vtable).Leave.method);
          }
          else {
            pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if (pMVar6 == (MVNetworkGame *)0x0) goto code_?;
            this_00 = (pMVar6->fields)._PlayerController_k__BackingField;
            woID = (*(this->klass->vtable).__unknown.methodPtr)
                             (this,(this->klass->vtable).__unknown.method);
            if (this_00 == (MVLocalObjectController *)0x0) goto code_?;
            MVLocalObjectController::
            MVLocalObjectController_OverrideRemoveTimeForDismountedWorldObject
                      (this_00,woID,(this->fields).timeBeforeUnregisterAfterDeath,(MethodInfo *)0x0)
            ;
          }
          iVar7 = (*(this->klass->vtable).__unknown_1.methodPtr)
                            (this,(this->klass->vtable).__unknown_1.method);
          if (iVar7 != 0) {
            this_01 = *(MVRuntimeDataVariable **)(iVar7 + 0xf8);
            cStack_8 = cStack_5;
            pOVar1 = (Object *)func_?(TypeInfo__System__Boolean,&cStack_8);
            if (this_01 != (MVRuntimeDataVariable *)0x0) {
              MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value
                        (this_01,pOVar1,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      else {
        func_?(v,TypeInfo__System__Single);
      }
    }
  }
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
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
  if (this_00 != (List_1_UnityEngine_Component_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Component>__List__);
    method_00 = (MethodInfo *)&(this->fields).localComponents;
    (this->fields).localComponents = this_00;
    func_?(method_00,this_00);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)this,ExceptionArgument__Enum_obj,method_00);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

