
/* Boolean Equals(SubscribableVariableBase`1[System.Single]) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[System::Single]::
     SubscribableVariableBase_1_System_Single__Equals_1
               (SubscribableVariableBase_1_System_Single_ *this,
               SubscribableVariableBase_1_System_Single_ *other,MethodInfo *method)

{
  pSVar1 = &this->fields;
  if (other != (SubscribableVariableBase_1_System_Single_ *)0x0) {
    this = (SubscribableVariableBase_1_System_Single_ *)(other->fields).value;
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

int32_t Assembly-CSharp.dll::SubscribableVariableBase`1[System::Single]::
        SubscribableVariableBase_1_System_Single__GetHashCode
                  (SubscribableVariableBase_1_System_Single_ *this,MethodInfo *method)

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

void Assembly-CSharp.dll::SubscribableVariableBase`1[System::Single]::
     SubscribableVariableBase_1_System_Single__Notify
               (SubscribableVariableBase_1_System_Single_ *this,MethodInfo *method)

{
  pAVar1 = (this->fields).OnChange;
  if (pAVar1 != (Action_1_Single_ *)0x0) {
    puVar2 = *(undefined4 **)(*(int *)(method->name + 0x60) + 0x28);
    (*(code *)*puVar2)(pAVar1,(this->fields).value,puVar2);
  }
  return;
}


/* SubscribableVariableBase`1[System.Single](Single) */

void Assembly-CSharp.dll::SubscribableVariableBase`1[System::Single]::
     SubscribableVariableBase_1_System_Single___ctor
               (SubscribableVariableBase_1_System_Single_ *this,float value,MethodInfo *method)

{
  if (this != (SubscribableVariableBase_1_System_Single_ *)0x0) {
    ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
    (this->fields).value = value;
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void add_OnChange(Action`1[Single]) */

void Assembly-CSharp.dll::SubscribableVariableBase`1[System::Single]::
     SubscribableVariableBase_1_System_Single__add_OnChange
               (SubscribableVariableBase_1_System_Single_ *this,Action_1_Single_ *value,
               MethodInfo *method)

{
  ppAVar1 = &(this->fields).OnChange;
  a = *ppAVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    iVar3 = *(int *)(*(int *)(method->name + 0x60) + 0x14);
    if ((*(byte *)(iVar3 + 0xbe) & 1) == 0) {
      func_?(iVar3);
    }
    if (pDVar2 == (Delegate *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = func_?(pDVar2,iVar3);
      if (iVar4 == 0) {
        func_?(pDVar2,iVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pAVar6 = (Action_1_Single_ *)func_?(ppAVar1,iVar4,a);
    bVar7 = pAVar6 != a;
    a = pAVar6;
  } while (bVar7);
  return;
}


/* Single get_Value() */

float Assembly-CSharp.dll::SubscribableVariableBase`1[System::Single]::
      SubscribableVariableBase_1_System_Single__get_Value
                (SubscribableVariableBase_1_System_Single_ *this,MethodInfo *method)

{
  return (this->fields).value;
}


/* Boolean op_Equality(SubscribableVariableBase`1[System.Single],
   SubscribableVariableBase`1[System.Single]) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[System::Single]::
     SubscribableVariableBase_1_System_Single__op_Equality
               (SubscribableVariableBase_1_System_Single_ *a,
               SubscribableVariableBase_1_System_Single_ *b,MethodInfo *method)

{
  if (a != (SubscribableVariableBase_1_System_Single_ *)0x0) {
    pSVar1 = &a->fields;
    if (b != (SubscribableVariableBase_1_System_Single_ *)0x0) {
      a = (SubscribableVariableBase_1_System_Single_ *)(b->fields).value;
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


/* Boolean op_Equality(SubscribableVariableBase`1[System.Single], Single) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[System::Single]::
     SubscribableVariableBase_1_System_Single__op_Equality_1
               (SubscribableVariableBase_1_System_Single_ *a,float b,MethodInfo *method)

{
  if (a != (SubscribableVariableBase_1_System_Single_ *)0x0) {
    a = (SubscribableVariableBase_1_System_Single_ *)(a->fields).value;
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


/* Boolean op_Equality(Single, SubscribableVariableBase`1[System.Single]) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[System::Single]::
     SubscribableVariableBase_1_System_Single__op_Equality_2
               (float b,SubscribableVariableBase_1_System_Single_ *a,MethodInfo *method)

{
  if (a != (SubscribableVariableBase_1_System_Single_ *)0x0) {
    a = (SubscribableVariableBase_1_System_Single_ *)(a->fields).value;
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


/* Single op_Implicit(SubscribableVariableBase`1[System.Single]) */

float Assembly-CSharp.dll::SubscribableVariableBase`1[System::Single]::
      SubscribableVariableBase_1_System_Single__op_Implicit
                (SubscribableVariableBase_1_System_Single_ *s,MethodInfo *method)

{
  if (s != (SubscribableVariableBase_1_System_Single_ *)0x0) {
    return (s->fields).value;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  fVar2 = (float10)(*pcVar1)();
  return (float)fVar2;
}


/* Boolean op_Inequality(SubscribableVariableBase`1[System.Single], Single) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[System::Single]::
     SubscribableVariableBase_1_System_Single__op_Inequality_1
               (SubscribableVariableBase_1_System_Single_ *a,float b,MethodInfo *method)

{
  if (a != (SubscribableVariableBase_1_System_Single_ *)0x0) {
    a = (SubscribableVariableBase_1_System_Single_ *)(a->fields).value;
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


/* Boolean op_Inequality(Single, SubscribableVariableBase`1[System.Single]) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[System::Single]::
     SubscribableVariableBase_1_System_Single__op_Inequality_2
               (float b,SubscribableVariableBase_1_System_Single_ *a,MethodInfo *method)

{
  if (a != (SubscribableVariableBase_1_System_Single_ *)0x0) {
    a = (SubscribableVariableBase_1_System_Single_ *)(a->fields).value;
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


/* Void remove_OnChange(Action`1[Single]) */

void Assembly-CSharp.dll::SubscribableVariableBase`1[System::Single]::
     SubscribableVariableBase_1_System_Single__remove_OnChange
               (SubscribableVariableBase_1_System_Single_ *this,Action_1_Single_ *value,
               MethodInfo *method)

{
  ppAVar1 = &(this->fields).OnChange;
  source = *ppAVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    iVar3 = *(int *)(*(int *)(method->name + 0x60) + 0x14);
    if ((*(byte *)(iVar3 + 0xbe) & 1) == 0) {
      func_?(iVar3);
    }
    if (pDVar2 == (Delegate *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = func_?(pDVar2,iVar3);
      if (iVar4 == 0) {
        func_?(pDVar2,iVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pAVar6 = (Action_1_Single_ *)func_?(ppAVar1,iVar4,source);
    bVar7 = pAVar6 != source;
    source = pAVar6;
  } while (bVar7);
  return;
}

