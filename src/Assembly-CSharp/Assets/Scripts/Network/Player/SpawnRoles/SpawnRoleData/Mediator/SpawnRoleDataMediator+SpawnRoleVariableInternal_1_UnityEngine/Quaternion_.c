
/* SpawnRoleDataMediator+SpawnRoleVariableInternal`1[UnityEngine.Quaternion](Quaternion) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::Mediator::
     SpawnRoleDataMediator+SpawnRoleVariableInternal`1[UnityEngine::Quaternion]::
     SpawnRoleDataMediator_SpawnRoleVariableInternal_1_UnityEngine_Quaternion___ctor
               (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_UnityEngine_Quaternion_ *this,
               Quaternion value,MethodInfo *method)

{
  pMVar1 = method->klass->rgctx_data[3].method;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  pIVar2 = pMVar1->klass->rgctx_data[2].klass;
  if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
    pIVar2 = (Il2CppClass *)func_?(pIVar2);
  }
  this_01 = (SubscribableVariable_1_UnityEngine_Quaternion_ *)func_?(pIVar2);
  SubscribableVariable`1[UnityEngine::Quaternion]::
  SubscribableVariable_1_UnityEngine_Quaternion___ctor
            (this_01,value,pMVar1->klass->rgctx_data[10].method);
  (this->fields)._.subscribableVariable = this_01;
  func_?(&this->fields,this_01);
  this_00 = (SubscribableVariableBase_1_UnityEngine_Quaternion_ *)
            (this->fields)._.subscribableVariable;
  if (((uint)(pMVar1->klass->rgctx_data[0xc].klass)->vtable[0].methodPtr & 0x100) == 0) {
    func_?();
  }
  this_02 = (UnityAction_1_UnityEngine_Color_ *)func_?();
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[UnityEngine::Color]::
  UnityAction_1_UnityEngine_Color___ctor
            (this_02,(Object *)this,pMVar1->klass->rgctx_data[0xb].rgctxDataDummy,
             pMVar1->klass->rgctx_data[0xd].method);
  if (this_00 != (SubscribableVariableBase_1_UnityEngine_Quaternion_ *)0x0) {
    SubscribableVariableBase`1[UnityEngine::Quaternion]::
    SubscribableVariableBase_1_UnityEngine_Quaternion__add_OnChange
              (this_00,(Action_1_UnityEngine_Quaternion_ *)this_02,
               pMVar1->klass->rgctx_data[0xe].method);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

