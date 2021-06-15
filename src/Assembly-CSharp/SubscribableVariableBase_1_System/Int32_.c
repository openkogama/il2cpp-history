
/* Boolean Equals(SubscribableVariableBase`1[System.Int32]) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[System::Int32]::
     SubscribableVariableBase_1_System_Int32__Equals_1
               (SubscribableVariableBase_1_System_Int32_ *this,
               SubscribableVariableBase_1_System_Int32_ *other,MethodInfo *method)

{
  pSVar1 = &this->fields;
  if (other != (SubscribableVariableBase_1_System_Int32_ *)0x0) {
    this = (SubscribableVariableBase_1_System_Int32_ *)(other->fields).value;
    iVar2 = *(int *)(*(int *)(method->name + 0x60) + 0x1c);
    if ((*(byte *)(iVar2 + 0xbe) & 1) == 0) {
      func_?(iVar2);
    }
    uVar3 = func_?(iVar2,&this);
    bVar4 = func_?(pSVar1,uVar3,0);
    return bVar4;
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  bVar4 = (*pcVar5)();
  return bVar4;
}


/* Int32 GetHashCode() */

int32_t Assembly-CSharp.dll::SubscribableVariableBase`1[System::Int32]::
        SubscribableVariableBase_1_System_Int32__GetHashCode
                  (SubscribableVariableBase_1_System_Int32_ *this,MethodInfo *method)

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
  if (piVar3 != (int *)0x0) {
    iVar4 = (**(code **)(*piVar3 + 0x100))
                      (piVar3,(this->fields).value,*(undefined4 *)(*piVar3 + 0x104));
    return iVar4;
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  iVar4 = (*pcVar5)();
  return iVar4;
}


/* Void Notify() */

void Assembly-CSharp.dll::SubscribableVariableBase`1[System::Int32]::
     SubscribableVariableBase_1_System_Int32__Notify
               (SubscribableVariableBase_1_System_Int32_ *this,MethodInfo *method)

{
  pAVar1 = (this->fields).OnChange;
  if (pAVar1 != (Action_1_Int32_ *)0x0) {
    puVar2 = *(undefined4 **)(*(int *)(method->name + 0x60) + 0x28);
    (*(code *)*puVar2)(pAVar1,(this->fields).value,puVar2);
  }
  return;
}


/* Boolean op_Equality(SubscribableVariableBase`1[System.Int32],
   SubscribableVariableBase`1[System.Int32]) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[System::Int32]::
     SubscribableVariableBase_1_System_Int32__op_Equality
               (SubscribableVariableBase_1_System_Int32_ *a,
               SubscribableVariableBase_1_System_Int32_ *b,MethodInfo *method)

{
  if (a != (SubscribableVariableBase_1_System_Int32_ *)0x0) {
    pSVar1 = &a->fields;
    if (b != (SubscribableVariableBase_1_System_Int32_ *)0x0) {
      a = (SubscribableVariableBase_1_System_Int32_ *)(b->fields).value;
      pcVar2 = method->name;
      if ((pcVar2[0xbe] & 1U) == 0) {
        func_?(pcVar2);
      }
      iVar3 = *(int *)(*(int *)(pcVar2 + 0x60) + 0x1c);
      if ((*(byte *)(iVar3 + 0xbe) & 1) == 0) {
        func_?(iVar3);
      }
      uVar4 = func_?(iVar3,&a);
      bVar5 = func_?(pSVar1,uVar4,0);
      return bVar5;
    }
  }
  func_?(0);
  pcVar6 = (code *)swi(3);
  bVar5 = (*pcVar6)();
  return bVar5;
}


/* Boolean op_Equality(SubscribableVariableBase`1[System.Int32], Int32) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[System::Int32]::
     SubscribableVariableBase_1_System_Int32__op_Equality_1
               (SubscribableVariableBase_1_System_Int32_ *a,int32_t b,MethodInfo *method)

{
  if (a != (SubscribableVariableBase_1_System_Int32_ *)0x0) {
    a = (SubscribableVariableBase_1_System_Int32_ *)(a->fields).value;
    pcVar1 = method->name;
    if ((pcVar1[0xbe] & 1U) == 0) {
      func_?(pcVar1);
    }
    iVar2 = *(int *)(*(int *)(pcVar1 + 0x60) + 0x1c);
    if ((*(byte *)(iVar2 + 0xbe) & 1) == 0) {
      func_?(iVar2);
    }
    uVar3 = func_?(iVar2,&a);
    bVar4 = func_?(&b,uVar3,0);
    return bVar4;
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  bVar4 = (*pcVar5)();
  return bVar4;
}


/* Boolean op_Equality(Int32, SubscribableVariableBase`1[System.Int32]) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[System::Int32]::
     SubscribableVariableBase_1_System_Int32__op_Equality_2
               (int32_t b,SubscribableVariableBase_1_System_Int32_ *a,MethodInfo *method)

{
  if (a != (SubscribableVariableBase_1_System_Int32_ *)0x0) {
    a = (SubscribableVariableBase_1_System_Int32_ *)(a->fields).value;
    pcVar1 = method->name;
    if ((pcVar1[0xbe] & 1U) == 0) {
      func_?(pcVar1);
    }
    iVar2 = *(int *)(*(int *)(pcVar1 + 0x60) + 0x1c);
    if ((*(byte *)(iVar2 + 0xbe) & 1) == 0) {
      func_?(iVar2);
    }
    uVar3 = func_?(iVar2,&a);
    bVar4 = func_?(&b,uVar3,0);
    return bVar4;
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  bVar4 = (*pcVar5)();
  return bVar4;
}


/* Int32 op_Implicit(SubscribableVariableBase`1[System.Int32]) */

int32_t Assembly-CSharp.dll::SubscribableVariableBase`1[System::Int32]::
        SubscribableVariableBase_1_System_Int32__op_Implicit
                  (SubscribableVariableBase_1_System_Int32_ *s,MethodInfo *method)

{
  if (s != (SubscribableVariableBase_1_System_Int32_ *)0x0) {
    return (s->fields).value;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  iVar2 = (*pcVar1)();
  return iVar2;
}


/* Boolean op_Inequality(SubscribableVariableBase`1[System.Int32], Int32) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[System::Int32]::
     SubscribableVariableBase_1_System_Int32__op_Inequality_1
               (SubscribableVariableBase_1_System_Int32_ *a,int32_t b,MethodInfo *method)

{
  if (a != (SubscribableVariableBase_1_System_Int32_ *)0x0) {
    a = (SubscribableVariableBase_1_System_Int32_ *)(a->fields).value;
    pcVar1 = method->name;
    if ((pcVar1[0xbe] & 1U) == 0) {
      func_?(pcVar1);
    }
    iVar2 = *(int *)(*(int *)(pcVar1 + 0x60) + 0x1c);
    if ((*(byte *)(iVar2 + 0xbe) & 1) == 0) {
      func_?(iVar2);
    }
    uVar3 = func_?(iVar2,&a);
    cVar4 = func_?(&b,uVar3,0);
    return cVar4 == '\0';
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Boolean op_Inequality(Int32, SubscribableVariableBase`1[System.Int32]) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[System::Int32]::
     SubscribableVariableBase_1_System_Int32__op_Inequality_2
               (int32_t b,SubscribableVariableBase_1_System_Int32_ *a,MethodInfo *method)

{
  if (a != (SubscribableVariableBase_1_System_Int32_ *)0x0) {
    a = (SubscribableVariableBase_1_System_Int32_ *)(a->fields).value;
    pcVar1 = method->name;
    if ((pcVar1[0xbe] & 1U) == 0) {
      func_?(pcVar1);
    }
    iVar2 = *(int *)(*(int *)(pcVar1 + 0x60) + 0x1c);
    if ((*(byte *)(iVar2 + 0xbe) & 1) == 0) {
      func_?(iVar2);
    }
    uVar3 = func_?(iVar2,&a);
    cVar4 = func_?(&b,uVar3,0);
    return cVar4 == '\0';
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}

