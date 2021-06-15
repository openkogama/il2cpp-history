
/* Boolean Equals(SubscribableVariableBase`1[UnityEngine.Quaternion]) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[UnityEngine::Quaternion]::
     SubscribableVariableBase_1_UnityEngine_Quaternion__Equals_1
               (SubscribableVariableBase_1_UnityEngine_Quaternion_ *this,
               SubscribableVariableBase_1_UnityEngine_Quaternion_ *other,MethodInfo *method)

{
  if (other != (SubscribableVariableBase_1_UnityEngine_Quaternion_ *)0x0) {
    fStack_1 = (other->fields).value.x;
    fStack_2 = (other->fields).value.y;
    fStack_3 = (other->fields).value.z;
    fStack_4 = (other->fields).value.w;
    iVar5 = *(int *)(*(int *)(method->name + 0x60) + 0x1c);
    if ((*(byte *)(iVar5 + 0xbe) & 1) == 0) {
      func_?(iVar5);
    }
    uVar6 = func_?(iVar5,&fStack_1);
    bVar7 = func_?(&this->fields,uVar6,0);
    return bVar7;
  }
  func_?(0);
  pcVar8 = (code *)swi(3);
  bVar7 = (*pcVar8)();
  return bVar7;
}


/* Int32 GetHashCode() */

int32_t Assembly-CSharp.dll::SubscribableVariableBase`1[UnityEngine::Quaternion]::
        SubscribableVariableBase_1_UnityEngine_Quaternion__GetHashCode
                  (SubscribableVariableBase_1_UnityEngine_Quaternion_ *this,MethodInfo *method)

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
                      (piVar3,(this->fields).value.x,(this->fields).value.y,(this->fields).value.z,
                       (this->fields).value.w,*(undefined4 *)(*piVar3 + 0x104));
    return iVar4;
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  iVar4 = (*pcVar5)();
  return iVar4;
}


/* Void Notify() */

void Assembly-CSharp.dll::SubscribableVariableBase`1[UnityEngine::Quaternion]::
     SubscribableVariableBase_1_UnityEngine_Quaternion__Notify
               (SubscribableVariableBase_1_UnityEngine_Quaternion_ *this,MethodInfo *method)

{
  if ((this->fields).OnChange != (Action_1_UnityEngine_Quaternion_ *)0x0) {
    puVar1 = *(undefined4 **)(*(int *)(method->name + 0x60) + 0x28);
    (*(code *)*puVar1)((this->fields).OnChange,(this->fields).value.x,(this->fields).value.y,
                       (this->fields).value.z,(this->fields).value.w,puVar1);
  }
  return;
}


/* SubscribableVariableBase`1[UnityEngine.Quaternion](Quaternion) */

void Assembly-CSharp.dll::SubscribableVariableBase`1[UnityEngine::Quaternion]::
     SubscribableVariableBase_1_UnityEngine_Quaternion___ctor
               (SubscribableVariableBase_1_UnityEngine_Quaternion_ *this,Quaternion value,
               MethodInfo *method)

{
  if (this != (SubscribableVariableBase_1_UnityEngine_Quaternion_ *)0x0) {
    ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
    (this->fields).value.x = value.x;
    (this->fields).value.y = value.y;
    (this->fields).value.z = value.z;
    (this->fields).value.w = value.w;
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void add_OnChange(Action`1[UnityEngine.Quaternion]) */

void Assembly-CSharp.dll::SubscribableVariableBase`1[UnityEngine::Quaternion]::
     SubscribableVariableBase_1_UnityEngine_Quaternion__add_OnChange
               (SubscribableVariableBase_1_UnityEngine_Quaternion_ *this,
               Action_1_UnityEngine_Quaternion_ *value,MethodInfo *method)

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
    pAVar6 = (Action_1_UnityEngine_Quaternion_ *)func_?(ppAVar1,iVar4,a);
    bVar7 = pAVar6 != a;
    a = pAVar6;
  } while (bVar7);
  return;
}


/* Quaternion get_Value() */

Quaternion *
Assembly-CSharp.dll::SubscribableVariableBase`1[UnityEngine::Quaternion]::
SubscribableVariableBase_1_UnityEngine_Quaternion__get_Value
          (Quaternion *__return_storage_ptr__,
          SubscribableVariableBase_1_UnityEngine_Quaternion_ *this,MethodInfo *method)

{
  fVar1 = (this->fields).value.y;
  fVar2 = (this->fields).value.z;
  fVar3 = (this->fields).value.w;
  __return_storage_ptr__->x = (this->fields).value.x;
  __return_storage_ptr__->y = fVar1;
  __return_storage_ptr__->z = fVar2;
  __return_storage_ptr__->w = fVar3;
  return __return_storage_ptr__;
}


/* Boolean op_Equality(SubscribableVariableBase`1[UnityEngine.Quaternion],
   SubscribableVariableBase`1[UnityEngine.Quaternion]) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[UnityEngine::Quaternion]::
     SubscribableVariableBase_1_UnityEngine_Quaternion__op_Equality
               (SubscribableVariableBase_1_UnityEngine_Quaternion_ *a,
               SubscribableVariableBase_1_UnityEngine_Quaternion_ *b,MethodInfo *method)

{
  if (a != (SubscribableVariableBase_1_UnityEngine_Quaternion_ *)0x0) {
    if (b != (SubscribableVariableBase_1_UnityEngine_Quaternion_ *)0x0) {
      fStack_1 = (b->fields).value.x;
      fStack_2 = (b->fields).value.y;
      fStack_3 = (b->fields).value.z;
      fStack_4 = (b->fields).value.w;
      pcVar5 = method->name;
      if ((pcVar5[0xbe] & 1U) == 0) {
        func_?(pcVar5);
      }
      iVar6 = *(int *)(*(int *)(pcVar5 + 0x60) + 0x1c);
      if ((*(byte *)(iVar6 + 0xbe) & 1) == 0) {
        func_?(iVar6);
      }
      uVar7 = func_?(iVar6,&fStack_1);
      bVar8 = func_?(&a->fields,uVar7,0);
      return bVar8;
    }
  }
  func_?(0);
  pcVar9 = (code *)swi(3);
  bVar8 = (*pcVar9)();
  return bVar8;
}


/* Boolean op_Equality(SubscribableVariableBase`1[UnityEngine.Quaternion], Quaternion) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[UnityEngine::Quaternion]::
     SubscribableVariableBase_1_UnityEngine_Quaternion__op_Equality_1
               (SubscribableVariableBase_1_UnityEngine_Quaternion_ *a,Quaternion b,
               MethodInfo *method)

{
  if (a != (SubscribableVariableBase_1_UnityEngine_Quaternion_ *)0x0) {
    fStack_1 = (a->fields).value.x;
    fStack_2 = (a->fields).value.y;
    fStack_3 = (a->fields).value.z;
    fStack_4 = (a->fields).value.w;
    pcVar5 = method->name;
    if ((pcVar5[0xbe] & 1U) == 0) {
      func_?(pcVar5);
    }
    iVar6 = *(int *)(*(int *)(pcVar5 + 0x60) + 0x1c);
    if ((*(byte *)(iVar6 + 0xbe) & 1) == 0) {
      func_?(iVar6);
    }
    uVar7 = func_?(iVar6,&fStack_1);
    bVar8 = func_?(&b,uVar7,0);
    return bVar8;
  }
  func_?(0);
  pcVar9 = (code *)swi(3);
  bVar8 = (*pcVar9)();
  return bVar8;
}


/* Boolean op_Equality(Quaternion, SubscribableVariableBase`1[UnityEngine.Quaternion]) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[UnityEngine::Quaternion]::
     SubscribableVariableBase_1_UnityEngine_Quaternion__op_Equality_2
               (Quaternion b,SubscribableVariableBase_1_UnityEngine_Quaternion_ *a,
               MethodInfo *method)

{
  if (a != (SubscribableVariableBase_1_UnityEngine_Quaternion_ *)0x0) {
    fStack_1 = (a->fields).value.x;
    fStack_2 = (a->fields).value.y;
    fStack_3 = (a->fields).value.z;
    fStack_4 = (a->fields).value.w;
    pcVar5 = method->name;
    if ((pcVar5[0xbe] & 1U) == 0) {
      func_?(pcVar5);
    }
    iVar6 = *(int *)(*(int *)(pcVar5 + 0x60) + 0x1c);
    if ((*(byte *)(iVar6 + 0xbe) & 1) == 0) {
      func_?(iVar6);
    }
    uVar7 = func_?(iVar6,&fStack_1);
    bVar8 = func_?(&b,uVar7,0);
    return bVar8;
  }
  func_?(0);
  pcVar9 = (code *)swi(3);
  bVar8 = (*pcVar9)();
  return bVar8;
}


/* Quaternion op_Implicit(SubscribableVariableBase`1[UnityEngine.Quaternion]) */

Quaternion *
Assembly-CSharp.dll::SubscribableVariableBase`1[UnityEngine::Quaternion]::
SubscribableVariableBase_1_UnityEngine_Quaternion__op_Implicit
          (Quaternion *__return_storage_ptr__,SubscribableVariableBase_1_UnityEngine_Quaternion_ *s,
          MethodInfo *method)

{
  if (s != (SubscribableVariableBase_1_UnityEngine_Quaternion_ *)0x0) {
    fVar1 = (s->fields).value.y;
    fVar2 = (s->fields).value.z;
    fVar3 = (s->fields).value.w;
    __return_storage_ptr__->x = (s->fields).value.x;
    __return_storage_ptr__->y = fVar1;
    __return_storage_ptr__->z = fVar2;
    __return_storage_ptr__->w = fVar3;
    return __return_storage_ptr__;
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  pQVar5 = (Quaternion *)(*pcVar4)();
  return pQVar5;
}


/* Boolean op_Inequality(SubscribableVariableBase`1[UnityEngine.Quaternion], Quaternion) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[UnityEngine::Quaternion]::
     SubscribableVariableBase_1_UnityEngine_Quaternion__op_Inequality_1
               (SubscribableVariableBase_1_UnityEngine_Quaternion_ *a,Quaternion b,
               MethodInfo *method)

{
  if (a != (SubscribableVariableBase_1_UnityEngine_Quaternion_ *)0x0) {
    fStack_1 = (a->fields).value.x;
    fStack_2 = (a->fields).value.y;
    fStack_3 = (a->fields).value.z;
    fStack_4 = (a->fields).value.w;
    pcVar5 = method->name;
    if ((pcVar5[0xbe] & 1U) == 0) {
      func_?(pcVar5);
    }
    iVar6 = *(int *)(*(int *)(pcVar5 + 0x60) + 0x1c);
    if ((*(byte *)(iVar6 + 0xbe) & 1) == 0) {
      func_?(iVar6);
    }
    uVar7 = func_?(iVar6,&fStack_1);
    cVar8 = func_?(&b,uVar7,0);
    return cVar8 == '\0';
  }
  func_?(0);
  pcVar9 = (code *)swi(3);
  bVar10 = (*pcVar9)();
  return bVar10;
}


/* Boolean op_Inequality(Quaternion, SubscribableVariableBase`1[UnityEngine.Quaternion]) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[UnityEngine::Quaternion]::
     SubscribableVariableBase_1_UnityEngine_Quaternion__op_Inequality_2
               (Quaternion b,SubscribableVariableBase_1_UnityEngine_Quaternion_ *a,
               MethodInfo *method)

{
  if (a != (SubscribableVariableBase_1_UnityEngine_Quaternion_ *)0x0) {
    fStack_1 = (a->fields).value.x;
    fStack_2 = (a->fields).value.y;
    fStack_3 = (a->fields).value.z;
    fStack_4 = (a->fields).value.w;
    pcVar5 = method->name;
    if ((pcVar5[0xbe] & 1U) == 0) {
      func_?(pcVar5);
    }
    iVar6 = *(int *)(*(int *)(pcVar5 + 0x60) + 0x1c);
    if ((*(byte *)(iVar6 + 0xbe) & 1) == 0) {
      func_?(iVar6);
    }
    uVar7 = func_?(iVar6,&fStack_1);
    cVar8 = func_?(&b,uVar7,0);
    return cVar8 == '\0';
  }
  func_?(0);
  pcVar9 = (code *)swi(3);
  bVar10 = (*pcVar9)();
  return bVar10;
}


/* Void remove_OnChange(Action`1[UnityEngine.Quaternion]) */

void Assembly-CSharp.dll::SubscribableVariableBase`1[UnityEngine::Quaternion]::
     SubscribableVariableBase_1_UnityEngine_Quaternion__remove_OnChange
               (SubscribableVariableBase_1_UnityEngine_Quaternion_ *this,
               Action_1_UnityEngine_Quaternion_ *value,MethodInfo *method)

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
    pAVar6 = (Action_1_UnityEngine_Quaternion_ *)func_?(ppAVar1,iVar4,source);
    bVar7 = pAVar6 != source;
    source = pAVar6;
  } while (bVar7);
  return;
}

