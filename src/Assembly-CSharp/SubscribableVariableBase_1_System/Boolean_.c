
/* Boolean Equals(SubscribableVariableBase`1[System.Boolean]) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[System::Boolean]::
     SubscribableVariableBase_1_System_Boolean__Equals_1
               (SubscribableVariableBase_1_System_Boolean_ *this,
               SubscribableVariableBase_1_System_Boolean_ *other,MethodInfo *method)

{
  pSVar1 = &this->fields;
  if (other != (SubscribableVariableBase_1_System_Boolean_ *)0x0) {
    this = (SubscribableVariableBase_1_System_Boolean_ *)CONCAT13((other->fields).value,this._0_3_);
    iVar2 = *(int *)(*(int *)(method->name + 0x60) + 0x1c);
    if ((*(byte *)(iVar2 + 0xbe) & 1) == 0) {
      func_?(iVar2);
    }
    uVar3 = func_?(iVar2,(int)&this + 3);
    bVar4 = func_?(pSVar1,uVar3,0);
    return bVar4;
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  bVar4 = (*pcVar5)();
  return bVar4;
}


/* Int32 GetHashCode() */

int32_t Assembly-CSharp.dll::SubscribableVariableBase`1[System::Boolean]::
        SubscribableVariableBase_1_System_Boolean__GetHashCode
                  (SubscribableVariableBase_1_System_Boolean_ *this,MethodInfo *method)

{
  iVar1 = *(int *)(*(int *)(method->name + 0x60) + 0xc);
  if ((*(byte *)(iVar1 + 0xbe) & 1) == 0) {
    func_?(iVar1);
  }
  if ((*(byte *)(iVar1 + 0xbf) & 2) != 0) {
    iVar1 = *(int *)(*(int *)(method->name + 0x60) + 0xc);
    if ((*(byte *)(iVar1 + 0xbe) & 1) == 0) {
      func_?(iVar1);
    }
    if (*(int *)(iVar1 + 0x70) == 0) {
      iVar1 = *(int *)(*(int *)(method->name + 0x60) + 0xc);
      if ((*(byte *)(iVar1 + 0xbe) & 1) == 0) {
        func_?(iVar1);
      }
      func_?(iVar1);
    }
  }
  puVar2 = *(undefined4 **)(*(int *)(method->name + 0x60) + 8);
  piVar3 = (int *)(*(code *)*puVar2)(puVar2);
  method = (MethodInfo *)(uint)(this->fields).value;
  if (piVar3 != (int *)0x0) {
    iVar4 = (**(code **)(*piVar3 + 0x100))(piVar3,method,*(undefined4 *)(*piVar3 + 0x104));
    return iVar4;
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  iVar4 = (*pcVar5)();
  return iVar4;
}


/* Void Notify() */

void Assembly-CSharp.dll::SubscribableVariableBase`1[System::Boolean]::
     SubscribableVariableBase_1_System_Boolean__Notify
               (SubscribableVariableBase_1_System_Boolean_ *this,MethodInfo *method)

{
  if ((this->fields).OnChange != (Action_1_Boolean_ *)0x0) {
    puVar1 = *(undefined4 **)(*(int *)(method->name + 0x60) + 0x28);
    (*(code *)*puVar1)((this->fields).OnChange,(this->fields).value,puVar1);
  }
  return;
}


/* SubscribableVariableBase`1[System.Boolean](Boolean) */

void Assembly-CSharp.dll::SubscribableVariableBase`1[System::Boolean]::
     SubscribableVariableBase_1_System_Boolean___ctor
               (SubscribableVariableBase_1_System_Boolean_ *this,bool value,MethodInfo *method)

{
  if (this != (SubscribableVariableBase_1_System_Boolean_ *)0x0) {
    ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
    (this->fields).value = value;
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Boolean get_Value() */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[System::Boolean]::
     SubscribableVariableBase_1_System_Boolean__get_Value
               (SubscribableVariableBase_1_System_Boolean_ *this,MethodInfo *method)

{
  return (this->fields).value;
}


/* Boolean op_Equality(SubscribableVariableBase`1[System.Boolean],
   SubscribableVariableBase`1[System.Boolean]) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[System::Boolean]::
     SubscribableVariableBase_1_System_Boolean__op_Equality
               (SubscribableVariableBase_1_System_Boolean_ *a,
               SubscribableVariableBase_1_System_Boolean_ *b,MethodInfo *method)

{
  if (a != (SubscribableVariableBase_1_System_Boolean_ *)0x0) {
    pSVar1 = &a->fields;
    if (b != (SubscribableVariableBase_1_System_Boolean_ *)0x0) {
      a = (SubscribableVariableBase_1_System_Boolean_ *)CONCAT13((b->fields).value,a._0_3_);
      pcVar2 = method->name;
      if ((pcVar2[0xbe] & 1U) == 0) {
        func_?(pcVar2);
      }
      iVar3 = *(int *)(*(int *)(pcVar2 + 0x60) + 0x1c);
      if ((*(byte *)(iVar3 + 0xbe) & 1) == 0) {
        func_?(iVar3);
      }
      uVar4 = func_?(iVar3,(int)&a + 3);
      bVar5 = func_?(pSVar1,uVar4,0);
      return bVar5;
    }
  }
  func_?(0);
  pcVar6 = (code *)swi(3);
  bVar5 = (*pcVar6)();
  return bVar5;
}


/* Boolean op_Equality(SubscribableVariableBase`1[System.Boolean], Boolean) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[System::Boolean]::
     SubscribableVariableBase_1_System_Boolean__op_Equality_1
               (SubscribableVariableBase_1_System_Boolean_ *a,bool b,MethodInfo *method)

{
  if (a != (SubscribableVariableBase_1_System_Boolean_ *)0x0) {
    a = (SubscribableVariableBase_1_System_Boolean_ *)CONCAT13((a->fields).value,a._0_3_);
    pcVar1 = method->name;
    if ((pcVar1[0xbe] & 1U) == 0) {
      func_?(pcVar1);
    }
    iVar2 = *(int *)(*(int *)(pcVar1 + 0x60) + 0x1c);
    if ((*(byte *)(iVar2 + 0xbe) & 1) == 0) {
      func_?(iVar2);
    }
    uVar3 = func_?(iVar2,(int)&a + 3);
    bVar4 = func_?(&b,uVar3,0);
    return bVar4;
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  bVar4 = (*pcVar5)();
  return bVar4;
}


/* Boolean op_Equality(Boolean, SubscribableVariableBase`1[System.Boolean]) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[System::Boolean]::
     SubscribableVariableBase_1_System_Boolean__op_Equality_2
               (bool b,SubscribableVariableBase_1_System_Boolean_ *a,MethodInfo *method)

{
  if (a != (SubscribableVariableBase_1_System_Boolean_ *)0x0) {
    a = (SubscribableVariableBase_1_System_Boolean_ *)CONCAT13((a->fields).value,a._0_3_);
    pcVar1 = method->name;
    if ((pcVar1[0xbe] & 1U) == 0) {
      func_?(pcVar1);
    }
    iVar2 = *(int *)(*(int *)(pcVar1 + 0x60) + 0x1c);
    if ((*(byte *)(iVar2 + 0xbe) & 1) == 0) {
      func_?(iVar2);
    }
    uVar3 = func_?(iVar2,(int)&a + 3);
    bVar4 = func_?(&b,uVar3,0);
    return bVar4;
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  bVar4 = (*pcVar5)();
  return bVar4;
}


/* Boolean op_Implicit(SubscribableVariableBase`1[System.Boolean]) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[System::Boolean]::
     SubscribableVariableBase_1_System_Boolean__op_Implicit
               (SubscribableVariableBase_1_System_Boolean_ *s,MethodInfo *method)

{
  if (s != (SubscribableVariableBase_1_System_Boolean_ *)0x0) {
    return (s->fields).value;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  bVar2 = (*pcVar1)();
  return bVar2;
}


/* Boolean op_Inequality(SubscribableVariableBase`1[System.Boolean], Boolean) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[System::Boolean]::
     SubscribableVariableBase_1_System_Boolean__op_Inequality_1
               (SubscribableVariableBase_1_System_Boolean_ *a,bool b,MethodInfo *method)

{
  if (a != (SubscribableVariableBase_1_System_Boolean_ *)0x0) {
    a = (SubscribableVariableBase_1_System_Boolean_ *)CONCAT13((a->fields).value,a._0_3_);
    pcVar1 = method->name;
    if ((pcVar1[0xbe] & 1U) == 0) {
      func_?(pcVar1);
    }
    iVar2 = *(int *)(*(int *)(pcVar1 + 0x60) + 0x1c);
    if ((*(byte *)(iVar2 + 0xbe) & 1) == 0) {
      func_?(iVar2);
    }
    uVar3 = func_?(iVar2,(int)&a + 3);
    cVar4 = func_?(&b,uVar3,0);
    return cVar4 == '\0';
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Boolean op_Inequality(Boolean, SubscribableVariableBase`1[System.Boolean]) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[System::Boolean]::
     SubscribableVariableBase_1_System_Boolean__op_Inequality_2
               (bool b,SubscribableVariableBase_1_System_Boolean_ *a,MethodInfo *method)

{
  if (a != (SubscribableVariableBase_1_System_Boolean_ *)0x0) {
    a = (SubscribableVariableBase_1_System_Boolean_ *)CONCAT13((a->fields).value,a._0_3_);
    pcVar1 = method->name;
    if ((pcVar1[0xbe] & 1U) == 0) {
      func_?(pcVar1);
    }
    iVar2 = *(int *)(*(int *)(pcVar1 + 0x60) + 0x1c);
    if ((*(byte *)(iVar2 + 0xbe) & 1) == 0) {
      func_?(iVar2);
    }
    uVar3 = func_?(iVar2,(int)&a + 3);
    cVar4 = func_?(&b,uVar3,0);
    return cVar4 == '\0';
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}

