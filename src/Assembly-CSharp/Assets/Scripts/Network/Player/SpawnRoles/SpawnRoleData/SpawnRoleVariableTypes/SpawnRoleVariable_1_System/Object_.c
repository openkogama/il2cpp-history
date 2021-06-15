
/* Boolean Equals(SpawnRoleVariable`1[System.Object]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Object]::
     SpawnRoleVariable_1_System_Object__Equals_1
               (SpawnRoleVariable_1_System_Object_ *this,SpawnRoleVariable_1_System_Object_ *other,
               MethodInfo *method)

{
  pSVar1 = (this->fields).subscribableVariable;
  if (pSVar1 != (SubscribableVariable_1_System_Object_ *)0x0) {
    puVar2 = *(undefined4 **)(*(int *)(method->name + 0x60) + 0x30);
    piVar3 = (int *)(*(code *)*puVar2)(pSVar1,puVar2);
    if ((other != (SpawnRoleVariable_1_System_Object_ *)0x0) &&
       (pSVar1 = (other->fields).subscribableVariable,
       pSVar1 != (SubscribableVariable_1_System_Object_ *)0x0)) {
      puVar2 = *(undefined4 **)(*(int *)(method->name + 0x60) + 0x30);
      uVar4 = (*(code *)*puVar2)(pSVar1,puVar2);
      if (piVar3 != (int *)0x0) {
        bVar5 = (**(code **)(*piVar3 + 0xc0))(piVar3,uVar4,*(undefined4 *)(*piVar3 + 0xc4));
        return bVar5;
      }
    }
  }
  func_?(0);
  pcVar6 = (code *)swi(3);
  bVar5 = (*pcVar6)();
  return bVar5;
}


/* Boolean op_Equality(SpawnRoleVariable`1[System.Object], SpawnRoleVariable`1[System.Object]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Object]::
     SpawnRoleVariable_1_System_Object__op_Equality
               (SpawnRoleVariable_1_System_Object_ *a,SpawnRoleVariable_1_System_Object_ *b,
               MethodInfo *method)

{
  if ((a != (SpawnRoleVariable_1_System_Object_ *)0x0) &&
     (pSVar1 = (a->fields).subscribableVariable,
     pSVar1 != (SubscribableVariable_1_System_Object_ *)0x0)) {
    pcVar2 = method->name;
    pcVar3 = pcVar2;
    if ((pcVar2[0xbe] & 1U) == 0) {
      func_?(pcVar2);
      pcVar3 = method->name;
    }
    if ((pcVar3[0xbe] & 1U) == 0) {
      func_?(pcVar3);
    }
    piVar4 = (int *)(*(code *)**(undefined4 **)(*(int *)(pcVar3 + 0x60) + 0x30))
                              (pSVar1,*(undefined4 *)(*(int *)(pcVar2 + 0x60) + 0x30));
    if ((b != (SpawnRoleVariable_1_System_Object_ *)0x0) &&
       (pSVar1 = (b->fields).subscribableVariable,
       pSVar1 != (SubscribableVariable_1_System_Object_ *)0x0)) {
      pcVar2 = method->name;
      pcVar3 = pcVar2;
      if ((pcVar2[0xbe] & 1U) == 0) {
        func_?(pcVar2);
        pcVar3 = method->name;
      }
      if ((pcVar3[0xbe] & 1U) == 0) {
        func_?(pcVar3);
      }
      uVar5 = (*(code *)**(undefined4 **)(*(int *)(pcVar3 + 0x60) + 0x30))
                        (pSVar1,*(undefined4 *)(*(int *)(pcVar2 + 0x60) + 0x30));
      if (piVar4 != (int *)0x0) {
        bVar6 = (**(code **)(*piVar4 + 0xc0))(piVar4,uVar5,*(undefined4 *)(*piVar4 + 0xc4));
        return bVar6;
      }
    }
  }
  func_?(0);
  pcVar7 = (code *)swi(3);
  bVar6 = (*pcVar7)();
  return bVar6;
}


/* Boolean op_Equality(SpawnRoleVariable`1[System.Object], Object) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Object]::
     SpawnRoleVariable_1_System_Object__op_Equality_1
               (SpawnRoleVariable_1_System_Object_ *a,Object *b,MethodInfo *method)

{
  if ((a != (SpawnRoleVariable_1_System_Object_ *)0x0) &&
     (pSVar1 = (a->fields).subscribableVariable,
     pSVar1 != (SubscribableVariable_1_System_Object_ *)0x0)) {
    pcVar2 = method->name;
    pcVar3 = pcVar2;
    if ((pcVar2[0xbe] & 1U) == 0) {
      func_?(pcVar2);
      pcVar3 = method->name;
    }
    if ((pcVar3[0xbe] & 1U) == 0) {
      func_?(pcVar3);
    }
    uVar4 = (*(code *)**(undefined4 **)(*(int *)(pcVar3 + 0x60) + 0x30))
                      (pSVar1,*(undefined4 *)(*(int *)(pcVar2 + 0x60) + 0x30));
    if (b != (Object *)0x0) {
      bVar5 = (*(code *)(b->klass->vtable).Equals.method)
                        (b,uVar4,(b->klass->vtable).Finalize.methodPtr);
      return bVar5;
    }
  }
  func_?(0);
  pcVar6 = (code *)swi(3);
  bVar5 = (*pcVar6)();
  return bVar5;
}


/* Boolean op_Equality(Object, SpawnRoleVariable`1[System.Object]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Object]::
     SpawnRoleVariable_1_System_Object__op_Equality_2
               (Object *b,SpawnRoleVariable_1_System_Object_ *a,MethodInfo *method)

{
  if ((a != (SpawnRoleVariable_1_System_Object_ *)0x0) &&
     (pSVar1 = (a->fields).subscribableVariable,
     pSVar1 != (SubscribableVariable_1_System_Object_ *)0x0)) {
    pcVar2 = method->name;
    pcVar3 = pcVar2;
    if ((pcVar2[0xbe] & 1U) == 0) {
      func_?(pcVar2);
      pcVar3 = method->name;
    }
    if ((pcVar3[0xbe] & 1U) == 0) {
      func_?(pcVar3);
    }
    uVar4 = (*(code *)**(undefined4 **)(*(int *)(pcVar3 + 0x60) + 0x30))
                      (pSVar1,*(undefined4 *)(*(int *)(pcVar2 + 0x60) + 0x30));
    if (b != (Object *)0x0) {
      bVar5 = (*(code *)(b->klass->vtable).Equals.method)
                        (b,uVar4,(b->klass->vtable).Finalize.methodPtr);
      return bVar5;
    }
  }
  func_?(0);
  pcVar6 = (code *)swi(3);
  bVar5 = (*pcVar6)();
  return bVar5;
}


/* Boolean op_Inequality(SpawnRoleVariable`1[System.Object], Object) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Object]::
     SpawnRoleVariable_1_System_Object__op_Inequality_1
               (SpawnRoleVariable_1_System_Object_ *a,Object *b,MethodInfo *method)

{
  if ((a != (SpawnRoleVariable_1_System_Object_ *)0x0) &&
     (pSVar1 = (a->fields).subscribableVariable,
     pSVar1 != (SubscribableVariable_1_System_Object_ *)0x0)) {
    pcVar2 = method->name;
    pcVar3 = pcVar2;
    if ((pcVar2[0xbe] & 1U) == 0) {
      func_?(pcVar2);
      pcVar3 = method->name;
    }
    if ((pcVar3[0xbe] & 1U) == 0) {
      func_?(pcVar3);
    }
    uVar4 = (*(code *)**(undefined4 **)(*(int *)(pcVar3 + 0x60) + 0x30))
                      (pSVar1,*(undefined4 *)(*(int *)(pcVar2 + 0x60) + 0x30));
    if (b != (Object *)0x0) {
      cVar5 = (*(code *)(b->klass->vtable).Equals.method)
                        (b,uVar4,(b->klass->vtable).Finalize.methodPtr);
      return cVar5 == '\0';
    }
  }
  func_?(0);
  pcVar6 = (code *)swi(3);
  bVar7 = (*pcVar6)();
  return bVar7;
}


/* Boolean op_Inequality(Object, SpawnRoleVariable`1[System.Object]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Object]::
     SpawnRoleVariable_1_System_Object__op_Inequality_2
               (Object *b,SpawnRoleVariable_1_System_Object_ *a,MethodInfo *method)

{
  if ((a != (SpawnRoleVariable_1_System_Object_ *)0x0) &&
     (pSVar1 = (a->fields).subscribableVariable,
     pSVar1 != (SubscribableVariable_1_System_Object_ *)0x0)) {
    pcVar2 = method->name;
    pcVar3 = pcVar2;
    if ((pcVar2[0xbe] & 1U) == 0) {
      func_?(pcVar2);
      pcVar3 = method->name;
    }
    if ((pcVar3[0xbe] & 1U) == 0) {
      func_?(pcVar3);
    }
    uVar4 = (*(code *)**(undefined4 **)(*(int *)(pcVar3 + 0x60) + 0x30))
                      (pSVar1,*(undefined4 *)(*(int *)(pcVar2 + 0x60) + 0x30));
    if (b != (Object *)0x0) {
      cVar5 = (*(code *)(b->klass->vtable).Equals.method)
                        (b,uVar4,(b->klass->vtable).Finalize.methodPtr);
      return cVar5 == '\0';
    }
  }
  func_?(0);
  pcVar6 = (code *)swi(3);
  bVar7 = (*pcVar6)();
  return bVar7;
}

