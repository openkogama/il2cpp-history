
/* Void Invoke() */

void Assembly-CSharp.dll::AvatarMotor+OnActiveBounceDelegate::
     AvatarMotor_OnActiveBounceDelegate_Invoke
               (AvatarMotor_OnActiveBounceDelegate *this,MethodInfo *method)

{
  this_00 = (AvatarMotor_OnActiveBounceDelegate *)(this->fields)._.prev;
  if (this_00 != (AvatarMotor_OnActiveBounceDelegate *)0x0) {
    AvatarMotor_OnActiveBounceDelegate_Invoke(this_00,method);
  }
  pcVar1 = (this->fields)._._.method_ptr;
  this_01 = (this->fields)._._.method;
  pOVar2 = (this->fields)._._.m_target;
  if (this_01->flags == 0xffff) {
    func_?(this_01);
  }
  cVar3 = func_?(this_01);
  if (cVar3 == '\0') {
    if ((char)this_01->iflags == '\0') {
      (*pcVar1)();
      return;
    }
  }
  else if ((this_01->flags != 0xffff) &&
          (((pOVar2 == (Object *)0x0 || (((pOVar2->klass->_1).token & 0x100) == 0)) &&
           ((this->fields)._._.invoke_impl != (void *)0x0)))) {
    cVar3 = func_?(pOVar2);
    if (cVar3 != '\0') {
      return;
    }
    method_00 = this_01;
    cVar3 = func_?();
    pOVar4 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[WinningConditionType,System
             ::Object]::KeyValuePair_2_WinningConditionType_System_Object__get_Value
                       ((KeyValuePair_2_WinningConditionType_System_Object_ *)this_01,method_00);
    cVar5 = func_?(pOVar4);
    if (cVar3 != '\0') {
      if (cVar5 != '\0') {
        func_?();
        return;
      }
      func_?(this_01,pOVar2);
      return;
    }
    if (cVar5 != '\0') {
      pOVar2 = mscorlib.dll::System::Collections::Generic::
               KeyValuePair`2[WinningConditionType,System::Object]::
               KeyValuePair_2_WinningConditionType_System_Object__get_Value
                         ((KeyValuePair_2_WinningConditionType_System_Object_ *)this_01,
                          unaff_retaddr);
      func_?(this_01->flags,pOVar2);
      return;
    }
    func_?(this_01->flags,pOVar2);
    return;
  }
  (*pcVar1)(pOVar2,this_01);
  return;
}

