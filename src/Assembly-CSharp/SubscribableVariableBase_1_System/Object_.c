
/* Boolean Equals(SubscribableVariableBase`1[System.Object]) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[System::Object]::
     SubscribableVariableBase_1_System_Object__Equals_1
               (SubscribableVariableBase_1_System_Object_ *this,
               SubscribableVariableBase_1_System_Object_ *other,MethodInfo *method)

{
  if (other != (SubscribableVariableBase_1_System_Object_ *)0x0) {
    pOVar1 = (this->fields).value;
    if (pOVar1 != (Object *)0x0) {
      bVar2 = (*(code *)(pOVar1->klass->vtable).Equals.method)
                        (pOVar1,(other->fields).value,(pOVar1->klass->vtable).Finalize.methodPtr);
      return bVar2;
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* Boolean op_Equality(SubscribableVariableBase`1[System.Object],
   SubscribableVariableBase`1[System.Object]) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[System::Object]::
     SubscribableVariableBase_1_System_Object__op_Equality
               (SubscribableVariableBase_1_System_Object_ *a,
               SubscribableVariableBase_1_System_Object_ *b,MethodInfo *method)

{
  if ((a != (SubscribableVariableBase_1_System_Object_ *)0x0) &&
     (b != (SubscribableVariableBase_1_System_Object_ *)0x0)) {
    pOVar1 = (a->fields).value;
    if (pOVar1 != (Object *)0x0) {
      bVar2 = (*(code *)(pOVar1->klass->vtable).Equals.method)
                        (pOVar1,(b->fields).value,(pOVar1->klass->vtable).Finalize.methodPtr);
      return bVar2;
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* Boolean op_Equality(SubscribableVariableBase`1[System.Object], Object) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[System::Object]::
     SubscribableVariableBase_1_System_Object__op_Equality_1
               (SubscribableVariableBase_1_System_Object_ *a,Object *b,MethodInfo *method)

{
  if (a != (SubscribableVariableBase_1_System_Object_ *)0x0) {
    if (b != (Object *)0x0) {
      bVar1 = (*(code *)(b->klass->vtable).Equals.method)
                        (b,(a->fields).value,(b->klass->vtable).Finalize.methodPtr);
      return bVar1;
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* Boolean op_Equality(Object, SubscribableVariableBase`1[System.Object]) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[System::Object]::
     SubscribableVariableBase_1_System_Object__op_Equality_2
               (Object *b,SubscribableVariableBase_1_System_Object_ *a,MethodInfo *method)

{
  if (a != (SubscribableVariableBase_1_System_Object_ *)0x0) {
    if (b != (Object *)0x0) {
      bVar1 = (*(code *)(b->klass->vtable).Equals.method)
                        (b,(a->fields).value,(b->klass->vtable).Finalize.methodPtr);
      return bVar1;
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* Boolean op_Inequality(SubscribableVariableBase`1[System.Object], Object) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[System::Object]::
     SubscribableVariableBase_1_System_Object__op_Inequality_1
               (SubscribableVariableBase_1_System_Object_ *a,Object *b,MethodInfo *method)

{
  if (a != (SubscribableVariableBase_1_System_Object_ *)0x0) {
    if (b != (Object *)0x0) {
      cVar1 = (*(code *)(b->klass->vtable).Equals.method)
                        (b,(a->fields).value,(b->klass->vtable).Finalize.methodPtr);
      return cVar1 == '\0';
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Boolean op_Inequality(Object, SubscribableVariableBase`1[System.Object]) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[System::Object]::
     SubscribableVariableBase_1_System_Object__op_Inequality_2
               (Object *b,SubscribableVariableBase_1_System_Object_ *a,MethodInfo *method)

{
  if (a != (SubscribableVariableBase_1_System_Object_ *)0x0) {
    if (b != (Object *)0x0) {
      cVar1 = (*(code *)(b->klass->vtable).Equals.method)
                        (b,(a->fields).value,(b->klass->vtable).Finalize.methodPtr);
      return cVar1 == '\0';
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}

