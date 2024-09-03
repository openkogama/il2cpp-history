
/* SpawnRoleDataMediator+SpawnRoleVariableInternal`1[UnityEngine.Vector3](Vector3) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::Mediator::
     SpawnRoleDataMediator+SpawnRoleVariableInternal`1[UnityEngine::Vector3]::
     SpawnRoleDataMediator_SpawnRoleVariableInternal_1_UnityEngine_Vector3___ctor
               (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_UnityEngine_Vector3_ *this,
               Vector3 value,MethodInfo *method)

{
  pMVar1 = method->klass->rgctx_data[3].method;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  method_00 = pMVar1->klass->rgctx_data[2].method;
  if ((method_00[3].slot & 0x100) == 0) {
    method_00 = (MethodInfo *)func_?(method_00);
  }
  pSVar2 = (SubscribableVariable_1_UnityEngine_Vector3_ *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)pSVar2,ExceptionArgument__Enum_obj,method_00);
  (pSVar2->fields)._.value.x = (float)(int)value._0_8_;
  (pSVar2->fields)._.value.y = (float)(int)((ulonglong)value._0_8_ >> 0x20);
  (pSVar2->fields)._.value.z = value.z;
  (this->fields)._.subscribableVariable = pSVar2;
  func_?(&this->fields,pSVar2);
  pSVar2 = (this->fields)._.subscribableVariable;
  pIVar3 = pMVar1->klass->rgctx_data[0xc].klass;
  if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
    pIVar3 = (Il2CppClass *)func_?(pIVar3);
  }
  this_00 = (SpawnRoleVariable_1_T_SubDelegate_UnityEngine_Vector3_ *)func_?(pIVar3);
  SpawnRoleVariableTypes::SpawnRoleVariable`1[T]+SubDelegate[UnityEngine::Vector3]::
  SpawnRoleVariable_1_T_SubDelegate_UnityEngine_Vector3___ctor
            (this_00,(Object *)this,pMVar1->klass->rgctx_data[0xb].rgctxDataDummy,
             pMVar1->klass->rgctx_data[0xd].method);
  if (pSVar2 != (SubscribableVariable_1_UnityEngine_Vector3_ *)0x0) {
    func_?();
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

