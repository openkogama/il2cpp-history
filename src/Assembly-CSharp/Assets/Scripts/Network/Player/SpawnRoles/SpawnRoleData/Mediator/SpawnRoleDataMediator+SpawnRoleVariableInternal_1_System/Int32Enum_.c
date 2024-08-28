
/* SpawnRoleDataMediator+SpawnRoleVariableInternal`1[System.Int32Enum](Int32Enum) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::Mediator::
     SpawnRoleDataMediator+SpawnRoleVariableInternal`1[System::Int32Enum]::
     SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Int32Enum___ctor
               (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Int32Enum_ *this,
               Int32Enum__Enum value,MethodInfo *method)

{
  pMVar1 = method->klass->rgctx_data[3].method;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  pIVar2 = pMVar1->klass->rgctx_data[2].klass;
  if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
    pIVar2 = (Il2CppClass *)func_?(pIVar2);
  }
  this_01 = (SubscribableVariable_1_System_Int32Enum_ *)func_?(pIVar2);
  SubscribableVariable`1[System::Int32Enum]::SubscribableVariable_1_System_Int32Enum___ctor
            (this_01,value,pMVar1->klass->rgctx_data[10].method);
  pSVar3 = &this->fields;
  (pSVar3->_).subscribableVariable = this_01;
  func_?(pSVar3,this_01);
  this_00 = (SubscribableVariableBase_1_System_Single_ *)(pSVar3->_).subscribableVariable;
  if (((uint)(pMVar1->klass->rgctx_data[0xc].klass)->vtable[0].methodPtr & 0x100) == 0) {
    func_?();
  }
  this_02 = (UnityAction_1_System_Int32Enum_ *)func_?();
  pIVar4 = pMVar1->klass->rgctx_data;
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
  UnityAction_1_System_Int32Enum___ctor
            (this_02,(Object *)this,pIVar4[0xb].rgctxDataDummy,pIVar4[0xd].method);
  if (this_00 != (SubscribableVariableBase_1_System_Single_ *)0x0) {
    SubscribableVariableBase`1[System::Single]::
    SubscribableVariableBase_1_System_Single__add_OnChange
              (this_00,(Action_1_Single_ *)this_02,pMVar1->klass->rgctx_data[0xe].method);
    return;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

