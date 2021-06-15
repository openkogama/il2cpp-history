
/* Boolean Equals(Object) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[UnityEngine::Vector3]::
     SubscribableVariableBase_1_UnityEngine_Vector3__Equals
               (SubscribableVariableBase_1_UnityEngine_Vector3_ *this,Object *obj,MethodInfo *method
               )

{
  if (obj == (Object *)0x0) {
    return 0;
  }
  if (this == (SubscribableVariableBase_1_UnityEngine_Vector3_ *)obj) {
    return 1;
  }
  pTVar1 = mscorlib.dll::System::Object::Object_GetType(obj,(MethodInfo *)0x0);
  if (this != (SubscribableVariableBase_1_UnityEngine_Vector3_ *)0x0) {
    pTVar2 = mscorlib.dll::System::Object::Object_GetType((Object *)this,(MethodInfo *)0x0);
    if (pTVar1 != pTVar2) {
      return 0;
    }
    iVar3 = **(int **)(method->name + 0x60);
    if ((*(byte *)(iVar3 + 0xbe) & 1) == 0) {
      func_?(iVar3);
    }
    iVar4 = func_?(obj,iVar3);
    if (iVar4 != 0) {
      puVar5 = *(undefined4 **)(*(int *)(method->name + 0x60) + 4);
      bVar6 = (*(code *)*puVar5)(this,iVar4,puVar5);
      return bVar6;
    }
    func_?(obj,iVar3);
  }
  func_?();
  pcVar7 = (code *)swi(3);
  bVar6 = (*pcVar7)();
  return bVar6;
}


/* Boolean Equals(SubscribableVariableBase`1[UnityEngine.Vector3]) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[UnityEngine::Vector3]::
     SubscribableVariableBase_1_UnityEngine_Vector3__Equals_1
               (SubscribableVariableBase_1_UnityEngine_Vector3_ *this,
               SubscribableVariableBase_1_UnityEngine_Vector3_ *other,MethodInfo *method)

{
  if (other != (SubscribableVariableBase_1_UnityEngine_Vector3_ *)0x0) {
    uStack_1._0_4_ = (other->fields).value.x;
    uStack_1._4_4_ = (other->fields).value.y;
    fStack_2 = (other->fields).value.z;
    iVar3 = *(int *)(*(int *)(method->name + 0x60) + 0x1c);
    if ((*(byte *)(iVar3 + 0xbe) & 1) == 0) {
      func_?(iVar3);
    }
    uVar4 = func_?(iVar3,&uStack_1);
    bVar5 = func_?(&this->fields,uVar4,0);
    return bVar5;
  }
  func_?(0);
  pcVar6 = (code *)swi(3);
  bVar5 = (*pcVar6)();
  return bVar5;
}


/* Int32 GetHashCode() */

int32_t Assembly-CSharp.dll::SubscribableVariableBase`1[UnityEngine::Vector3]::
        SubscribableVariableBase_1_UnityEngine_Vector3__GetHashCode
                  (SubscribableVariableBase_1_UnityEngine_Vector3_ *this,MethodInfo *method)

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
    uVar4._0_4_ = (this->fields).value.x;
    uVar4._4_4_ = (this->fields).value.y;
    iVar5 = (**(code **)(*piVar3 + 0x100))
                      (piVar3,uVar4,(this->fields).value.z,*(undefined4 *)(*piVar3 + 0x104));
    return iVar5;
  }
  func_?(0);
  pcVar6 = (code *)swi(3);
  iVar5 = (*pcVar6)();
  return iVar5;
}


/* Void Notify() */

void Assembly-CSharp.dll::SubscribableVariableBase`1[UnityEngine::Vector3]::
     SubscribableVariableBase_1_UnityEngine_Vector3__Notify
               (SubscribableVariableBase_1_UnityEngine_Vector3_ *this,MethodInfo *method)

{
  if ((this->fields).OnChange != (Action_1_UnityEngine_Vector3_ *)0x0) {
    uVar1._0_4_ = (this->fields).value.x;
    uVar1._4_4_ = (this->fields).value.y;
    puVar2 = *(undefined4 **)(*(int *)(method->name + 0x60) + 0x28);
    (*(code *)*puVar2)((this->fields).OnChange,uVar1,(this->fields).value.z,puVar2);
  }
  return;
}


/* SubscribableVariableBase`1[UnityEngine.Vector3](Vector3) */

void Assembly-CSharp.dll::SubscribableVariableBase`1[UnityEngine::Vector3]::
     SubscribableVariableBase_1_UnityEngine_Vector3___ctor
               (SubscribableVariableBase_1_UnityEngine_Vector3_ *this,Vector3 value,
               MethodInfo *method)

{
  if (this != (SubscribableVariableBase_1_UnityEngine_Vector3_ *)0x0) {
    ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
    (this->fields).value.x = value.x;
    (this->fields).value.y = value.y;
    (this->fields).value.z = value.z;
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void add_OnChange(Action`1[UnityEngine.Vector3]) */

void Assembly-CSharp.dll::SubscribableVariableBase`1[UnityEngine::Vector3]::
     SubscribableVariableBase_1_UnityEngine_Vector3__add_OnChange
               (SubscribableVariableBase_1_UnityEngine_Vector3_ *this,
               Action_1_UnityEngine_Vector3_ *value,MethodInfo *method)

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
    pAVar6 = (Action_1_UnityEngine_Vector3_ *)func_?(ppAVar1,iVar4,a);
    bVar7 = pAVar6 != a;
    a = pAVar6;
  } while (bVar7);
  return;
}


/* Vector3 get_Value() */

Vector3 * Assembly-CSharp.dll::SubscribableVariableBase`1[UnityEngine::Vector3]::
          SubscribableVariableBase_1_UnityEngine_Vector3__get_Value
                    (Vector3 *__return_storage_ptr__,
                    SubscribableVariableBase_1_UnityEngine_Vector3_ *this,MethodInfo *method)

{
  fVar1 = (this->fields).value.y;
  fVar2 = (this->fields).value.z;
  __return_storage_ptr__->x = (this->fields).value.x;
  __return_storage_ptr__->y = fVar1;
  __return_storage_ptr__->z = fVar2;
  return __return_storage_ptr__;
}


/* Boolean op_Equality(SubscribableVariableBase`1[UnityEngine.Vector3],
   SubscribableVariableBase`1[UnityEngine.Vector3]) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[UnityEngine::Vector3]::
     SubscribableVariableBase_1_UnityEngine_Vector3__op_Equality
               (SubscribableVariableBase_1_UnityEngine_Vector3_ *a,
               SubscribableVariableBase_1_UnityEngine_Vector3_ *b,MethodInfo *method)

{
  if (a != (SubscribableVariableBase_1_UnityEngine_Vector3_ *)0x0) {
    if (b != (SubscribableVariableBase_1_UnityEngine_Vector3_ *)0x0) {
      uStack_1._0_4_ = (b->fields).value.x;
      uStack_1._4_4_ = (b->fields).value.y;
      fStack_2 = (b->fields).value.z;
      pcVar3 = method->name;
      if ((pcVar3[0xbe] & 1U) == 0) {
        func_?(pcVar3);
      }
      iVar4 = *(int *)(*(int *)(pcVar3 + 0x60) + 0x1c);
      if ((*(byte *)(iVar4 + 0xbe) & 1) == 0) {
        func_?(iVar4);
      }
      uVar5 = func_?(iVar4,&uStack_1);
      bVar6 = func_?(&a->fields,uVar5,0);
      return bVar6;
    }
  }
  func_?(0);
  pcVar7 = (code *)swi(3);
  bVar6 = (*pcVar7)();
  return bVar6;
}


/* Boolean op_Equality(SubscribableVariableBase`1[UnityEngine.Vector3], Vector3) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[UnityEngine::Vector3]::
     SubscribableVariableBase_1_UnityEngine_Vector3__op_Equality_1
               (SubscribableVariableBase_1_UnityEngine_Vector3_ *a,Vector3 b,MethodInfo *method)

{
  if (a != (SubscribableVariableBase_1_UnityEngine_Vector3_ *)0x0) {
    uStack_1._0_4_ = (a->fields).value.x;
    uStack_1._4_4_ = (a->fields).value.y;
    fStack_2 = (a->fields).value.z;
    pcVar3 = method->name;
    if ((pcVar3[0xbe] & 1U) == 0) {
      func_?(pcVar3);
    }
    iVar4 = *(int *)(*(int *)(pcVar3 + 0x60) + 0x1c);
    if ((*(byte *)(iVar4 + 0xbe) & 1) == 0) {
      func_?(iVar4);
    }
    uVar5 = func_?(iVar4,&uStack_1);
    bVar6 = func_?(&b,uVar5,0);
    return bVar6;
  }
  func_?(0);
  pcVar7 = (code *)swi(3);
  bVar6 = (*pcVar7)();
  return bVar6;
}


/* Boolean op_Equality(Vector3, SubscribableVariableBase`1[UnityEngine.Vector3]) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[UnityEngine::Vector3]::
     SubscribableVariableBase_1_UnityEngine_Vector3__op_Equality_2
               (Vector3 b,SubscribableVariableBase_1_UnityEngine_Vector3_ *a,MethodInfo *method)

{
  if (a != (SubscribableVariableBase_1_UnityEngine_Vector3_ *)0x0) {
    uStack_1._0_4_ = (a->fields).value.x;
    uStack_1._4_4_ = (a->fields).value.y;
    fStack_2 = (a->fields).value.z;
    pcVar3 = method->name;
    if ((pcVar3[0xbe] & 1U) == 0) {
      func_?(pcVar3);
    }
    iVar4 = *(int *)(*(int *)(pcVar3 + 0x60) + 0x1c);
    if ((*(byte *)(iVar4 + 0xbe) & 1) == 0) {
      func_?(iVar4);
    }
    uVar5 = func_?(iVar4,&uStack_1);
    bVar6 = func_?(&b,uVar5,0);
    return bVar6;
  }
  func_?(0);
  pcVar7 = (code *)swi(3);
  bVar6 = (*pcVar7)();
  return bVar6;
}


/* Vector3 op_Implicit(SubscribableVariableBase`1[UnityEngine.Vector3]) */

Vector3 * Assembly-CSharp.dll::SubscribableVariableBase`1[UnityEngine::Vector3]::
          SubscribableVariableBase_1_UnityEngine_Vector3__op_Implicit
                    (Vector3 *__return_storage_ptr__,
                    SubscribableVariableBase_1_UnityEngine_Vector3_ *s,MethodInfo *method)

{
  if (s != (SubscribableVariableBase_1_UnityEngine_Vector3_ *)0x0) {
    fVar1 = (s->fields).value.y;
    fVar2 = (s->fields).value.z;
    __return_storage_ptr__->x = (s->fields).value.x;
    __return_storage_ptr__->y = fVar1;
    __return_storage_ptr__->z = fVar2;
    return __return_storage_ptr__;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  pVVar4 = (Vector3 *)(*pcVar3)();
  return pVVar4;
}


/* Boolean op_Inequality(SubscribableVariableBase`1[UnityEngine.Vector3],
   SubscribableVariableBase`1[UnityEngine.Vector3]) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[UnityEngine::Vector3]::
     SubscribableVariableBase_1_UnityEngine_Vector3__op_Inequality
               (SubscribableVariableBase_1_UnityEngine_Vector3_ *a,
               SubscribableVariableBase_1_UnityEngine_Vector3_ *b,MethodInfo *method)

{
  pcVar1 = method->name;
  pcVar2 = pcVar1;
  if ((pcVar1[0xbe] & 1U) == 0) {
    func_?(pcVar1);
    pcVar2 = method->name;
  }
  if ((pcVar2[0xbe] & 1U) == 0) {
    func_?(pcVar2);
  }
  cVar3 = (*(code *)**(undefined4 **)(*(int *)(pcVar2 + 0x60) + 0x20))
                    (a,b,*(undefined4 *)(*(int *)(pcVar1 + 0x60) + 0x20));
  return cVar3 == '\0';
}


/* Boolean op_Inequality(SubscribableVariableBase`1[UnityEngine.Vector3], Vector3) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[UnityEngine::Vector3]::
     SubscribableVariableBase_1_UnityEngine_Vector3__op_Inequality_1
               (SubscribableVariableBase_1_UnityEngine_Vector3_ *a,Vector3 b,MethodInfo *method)

{
  if (a != (SubscribableVariableBase_1_UnityEngine_Vector3_ *)0x0) {
    uStack_1._0_4_ = (a->fields).value.x;
    uStack_1._4_4_ = (a->fields).value.y;
    fStack_2 = (a->fields).value.z;
    pcVar3 = method->name;
    if ((pcVar3[0xbe] & 1U) == 0) {
      func_?(pcVar3);
    }
    iVar4 = *(int *)(*(int *)(pcVar3 + 0x60) + 0x1c);
    if ((*(byte *)(iVar4 + 0xbe) & 1) == 0) {
      func_?(iVar4);
    }
    uVar5 = func_?(iVar4,&uStack_1);
    cVar6 = func_?(&b,uVar5,0);
    return cVar6 == '\0';
  }
  func_?(0);
  pcVar7 = (code *)swi(3);
  bVar8 = (*pcVar7)();
  return bVar8;
}


/* Boolean op_Inequality(Vector3, SubscribableVariableBase`1[UnityEngine.Vector3]) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[UnityEngine::Vector3]::
     SubscribableVariableBase_1_UnityEngine_Vector3__op_Inequality_2
               (Vector3 b,SubscribableVariableBase_1_UnityEngine_Vector3_ *a,MethodInfo *method)

{
  if (a != (SubscribableVariableBase_1_UnityEngine_Vector3_ *)0x0) {
    uStack_1._0_4_ = (a->fields).value.x;
    uStack_1._4_4_ = (a->fields).value.y;
    fStack_2 = (a->fields).value.z;
    pcVar3 = method->name;
    if ((pcVar3[0xbe] & 1U) == 0) {
      func_?(pcVar3);
    }
    iVar4 = *(int *)(*(int *)(pcVar3 + 0x60) + 0x1c);
    if ((*(byte *)(iVar4 + 0xbe) & 1) == 0) {
      func_?(iVar4);
    }
    uVar5 = func_?(iVar4,&uStack_1);
    cVar6 = func_?(&b,uVar5,0);
    return cVar6 == '\0';
  }
  func_?(0);
  pcVar7 = (code *)swi(3);
  bVar8 = (*pcVar7)();
  return bVar8;
}


/* Void remove_OnChange(Action`1[UnityEngine.Vector3]) */

void Assembly-CSharp.dll::SubscribableVariableBase`1[UnityEngine::Vector3]::
     SubscribableVariableBase_1_UnityEngine_Vector3__remove_OnChange
               (SubscribableVariableBase_1_UnityEngine_Vector3_ *this,
               Action_1_UnityEngine_Vector3_ *value,MethodInfo *method)

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
    pAVar6 = (Action_1_UnityEngine_Vector3_ *)func_?(ppAVar1,iVar4,source);
    bVar7 = pAVar6 != source;
    source = pAVar6;
  } while (bVar7);
  return;
}

